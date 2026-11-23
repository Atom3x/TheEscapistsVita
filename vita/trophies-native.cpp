#include "trophies.h"

#if defined(__vita__) && defined(ESCAPISTS_VITA_NATIVE_TROPHIES)
#include <psp2/common_dialog.h>
#include <psp2/kernel/threadmgr.h>
#include <psp2/np/common.h>
#include <psp2/sysmodule.h>
#include <vitaGL.h>
#include <cstdio>
#include <cstring>

// VitaSDK supplies the import libraries but not these trophy declarations.
// ABI reference: Rinnegatamante/eldritch-vita, achievementmanager_steam.cpp.
struct VitaTrophySetupParam {
    int sdkVersion;
    SceCommonDialogParam commonParam;
    int context;
    int options;
    unsigned char reserved[128];
};

static_assert(sizeof(VitaTrophySetupParam) == 0xd8, "Unexpected trophy dialog ABI");

extern "C" {
    int sceNpTrophyInit(void* options);
    int sceNpTrophyTerm();
    int sceNpTrophyCreateContext(int* context, SceNpCommunicationId* communicationId,
        SceNpCommunicationSignature* signature, uint64_t options);
    int sceNpTrophyDestroyContext(int context);
    int sceNpTrophyCreateHandle(int* handle);
    int sceNpTrophyDestroyHandle(int handle);
    int sceNpTrophyUnlockTrophy(int context, int handle, int trophy, int* platinum);
    int sceNpTrophyGetTrophyUnlockState(int context, int handle, uint32_t* state, uint32_t* count);
    int sceNpTrophySetupDialogInit(VitaTrophySetupParam* param);
    SceCommonDialogStatus sceNpTrophySetupDialogGetStatus();
    int sceNpTrophySetupDialogAbort();
    int sceNpTrophySetupDialogTerm();
}

namespace {
    enum class NativeState {
        Dormant,
        Registering,
        Ready,
        Disabled
    };

    NativeState state = NativeState::Dormant;
    int context = -1;
    int handle = -1;
    SceUID requestSemaphore = -1;
    SceUID deliveredSemaphore = -1;
    SceUID worker = -1;
    bool moduleLoaded = false;
    bool libraryInitialized = false;
    bool stopping = false;
    uint64_t setupStarted = 0;
    uint32_t nativeUnlocks[4] = {};
    int pendingTrophy = -1;
    int deliveredResult = 0;

    bool nativeUnlocked(unsigned id) {
        return (nativeUnlocks[id / 32] & (uint32_t(1) << (id % 32))) != 0;
    }

    int unlockWorker(SceSize, void*) {
        while (sceKernelWaitSema(requestSemaphore, 1, nullptr) >= 0) {
            if (stopping) break;

            int platinum = -1;
            deliveredResult = sceNpTrophyUnlockTrophy(context, handle, pendingTrophy, &platinum);
            sceKernelSignalSema(deliveredSemaphore, 1);
        }

        return 0;
    }

    bool fail(int result) {
        std::printf("[Vita trophies] Native service unavailable (0x%08x); local progress remains active.\n", unsigned(result));
        vitaTrophiesShutdown();
        return false;
    }

    bool initialize() {
        // An absent pack is normal in compile-only/tooling environments.
        FILE* pack = std::fopen("app0:/sce_sys/trophy/ESCP00002_00/TROPHY.TRP", "rb");
        if (!pack) return fail(-1);
        std::fclose(pack);

        int result = sceSysmoduleLoadModule(SCE_SYSMODULE_NP_TROPHY);
        if (result < 0) return fail(result);
        moduleLoaded = true;

        result = sceNpTrophyInit(nullptr);
        if (result < 0) return fail(result);
        libraryInitialized = true;

        SceNpCommunicationId communicationId{};
        std::memcpy(communicationId.data, "ESCP00002", 9);

        SceNpCommunicationSignature signature{};
        const unsigned char placeholder[] = {0xb9, 0xdd, 0xe1, 0x3b, 0x01, 0x00};
        std::memcpy(signature.data, placeholder, sizeof(placeholder));
        result = sceNpTrophyCreateContext(&context, &communicationId, &signature, 0);
        if (result < 0) return fail(result);

        VitaTrophySetupParam setup{};
        _sceCommonDialogSetMagicNumber(&setup.commonParam);
        setup.sdkVersion = PSP2_SDK_VERSION;
        setup.context = context;
        result = sceNpTrophySetupDialogInit(&setup);
        if (result < 0) return fail(result);
        state = NativeState::Registering;
        setupStarted = sceKernelGetSystemTimeWide();
        return true;
    }

    bool finishSetup() {
        int result = sceNpTrophySetupDialogTerm();
        // The dialog is now gone even if initialization of the service fails.
        state = NativeState::Disabled;
        if (result < 0) return fail(result);

        result = sceNpTrophyCreateHandle(&handle);
        if (result < 0) return fail(result);

        uint32_t count = 0;
        result = sceNpTrophyGetTrophyUnlockState(context, handle, nativeUnlocks, &count);
        if (result < 0 || count != vitaTrophyCount) return fail(result < 0 ? result : -2);

        requestSemaphore = sceKernelCreateSema("Escapists trophy requests", 0, 0, 1, nullptr);
        deliveredSemaphore = sceKernelCreateSema("Escapists trophy results", 0, 1, 1, nullptr);
        if (requestSemaphore < 0 || deliveredSemaphore < 0) return fail(-3);

        worker = sceKernelCreateThread("Escapists trophy unlocker", unlockWorker, 0x10000100, 0x10000, 0, 0, nullptr);
        if (worker < 0) return fail(worker);

        result = sceKernelStartThread(worker, 0, nullptr);
        if (result < 0) {
            sceKernelDeleteThread(worker);
            worker = -1;
            return fail(result);
        }

        state = NativeState::Ready;
        for (unsigned id = 0; id < vitaTrophyCount; id++)
            if (nativeUnlocked(id)) vitaTrophyProgress().unlock(id);

        return true;
    }

    void deliverUnlocks() {
        if (sceKernelPollSema(deliveredSemaphore, 1) < 0) return;

        if (pendingTrophy >= 0) {
            if (deliveredResult < 0) {
                uint32_t count;
                int result = sceNpTrophyGetTrophyUnlockState(context, handle, nativeUnlocks, &count);
                if (result < 0 || !nativeUnlocked(unsigned(pendingTrophy))) {
                    fail(deliveredResult);
                    return;
                }
            }

            nativeUnlocks[pendingTrophy / 32] |= uint32_t(1) << (pendingTrophy % 32);
            pendingTrophy = -1;
        }

        for (unsigned id = 0; id < vitaTrophyCount; id++) {
            if (!vitaTrophyProgress().unlocked(id) || nativeUnlocked(id)) continue;
            pendingTrophy = int(id);
            sceKernelSignalSema(requestSemaphore, 1);
            return;
        }

        sceKernelSignalSema(deliveredSemaphore, 1);
    }
}

bool vitaTrophiesBusy() {
    return state == NativeState::Registering;
}

bool vitaTrophiesPresent() {
    if (state == NativeState::Dormant && !initialize()) return false;

    if (state == NativeState::Registering) {
        SceCommonDialogStatus status = sceNpTrophySetupDialogGetStatus();
        if (status == SCE_COMMON_DIALOG_STATUS_RUNNING) {
            if (sceKernelGetSystemTimeWide() - setupStarted > 15000000) return fail(-4);
            vglSwapBuffers(GL_TRUE);
            return true;
        }
        if (status != SCE_COMMON_DIALOG_STATUS_FINISHED) return fail(-5);
        if (!finishSetup()) return false;
    }

    if (state == NativeState::Ready) deliverUnlocks();

    return false;
}

void vitaTrophiesShutdown() {
    if (state == NativeState::Registering) {
        sceNpTrophySetupDialogAbort();
        sceNpTrophySetupDialogTerm();
    }

    state = NativeState::Disabled;
    if (worker >= 0) {
        stopping = true;
        sceKernelSignalSema(requestSemaphore, 1);
        unsigned int timeout = 2000000;
        // If a service call is still blocked at process exit, let the OS reclaim
        // it; do not destroy a context still being used by that thread.
        if (sceKernelWaitThreadEnd(worker, nullptr, &timeout) < 0) return;

        sceKernelDeleteThread(worker);
        worker = -1;
    }

    if (requestSemaphore >= 0) sceKernelDeleteSema(requestSemaphore);
    if (deliveredSemaphore >= 0) sceKernelDeleteSema(deliveredSemaphore);
    requestSemaphore = -1;
    deliveredSemaphore = -1;

    if (handle >= 0) sceNpTrophyDestroyHandle(handle);
    if (context >= 0) sceNpTrophyDestroyContext(context);
    handle = -1;
    context = -1;

    if (libraryInitialized) sceNpTrophyTerm();
    if (moduleLoaded) sceSysmoduleUnloadModule(SCE_SYSMODULE_NP_TROPHY);
    libraryInitialized = false;
    moduleLoaded = false;
}

#else
bool vitaTrophiesPresent() {
    return false;
}

bool vitaTrophiesBusy() {
    return false;
}

void vitaTrophiesShutdown() {}
#endif
