#include <psp2/io/dirent.h>
#include <psp2/io/stat.h>
#include <psp2/io/fcntl.h>
#include <cstdio>
#include <cstring>
#include <string>

// Keep a bounded newlib heap; remaining memory is needed by the graphics driver.
unsigned int _newlib_heap_size_user = 128 * 1024 * 1024;

static bool isDirectory(const std::string& path) {
    SceIoStat info = {};
    return sceIoGetstat(path.c_str(), &info) >= 0 && SCE_S_ISDIR(info.st_mode);
}

#ifdef CHOWDREN_VITA_BUNDLE_GAME_DATA

static bool ensureDirectory(const std::string& path) {
    if (isDirectory(path)) return true;

    SceIoStat info = {};
    if (sceIoGetstat(path.c_str(), &info) >= 0) return false;

    return sceIoMkdir(path.c_str(), 0777) >= 0;
}

static bool isRegularFile(const std::string& path) {
    SceIoStat info = {};
    return sceIoGetstat(path.c_str(), &info) >= 0 && SCE_S_ISREG(info.st_mode);
}

static bool copyFile(const std::string& source, const std::string& target, bool replace) {
    SceIoStat info = {};
    if (!replace && sceIoGetstat(target.c_str(), &info) >= 0) return SCE_S_ISREG(info.st_mode);

    const std::string temporary = target + ".installing";
    SceUID input = sceIoOpen(source.c_str(), SCE_O_RDONLY, 0);
    if (input < 0) return false;

    SceUID output = sceIoOpen(temporary.c_str(), SCE_O_WRONLY | SCE_O_CREAT | SCE_O_TRUNC, 0666);
    if (output < 0) {
        sceIoClose(input);
        return false;
    }

    char buffer[32768];
    bool success = true;
    for (;;) {
        SceSSize count = sceIoRead(input, buffer, sizeof(buffer));
        if (!count) break;
        if (count < 0) {
            success = false;
            break;
        }

        SceSSize written = 0;
        while (written < count) {
            SceSSize n = sceIoWrite(output, buffer + written, count - written);
            if (n <= 0) {
                success = false;
                break;
            }

            written += n;
        }

        if (!success) break;
    }

    sceIoClose(input);
    if (sceIoClose(output) < 0) success = false;
    if (success && replace) sceIoRemove(target.c_str());
    if (success && sceIoRename(temporary.c_str(), target.c_str()) < 0) success = false;
    if (!success) sceIoRemove(temporary.c_str());
    return success;
}

static bool copyTree(const std::string& source, const std::string& target) {
    if (!ensureDirectory(target)) return false;

    SceUID handle = sceIoDopen(source.c_str());
    if (handle < 0) return false;

    SceIoDirent entry = {};
    int result;
    bool success = true;
    while ((result = sceIoDread(handle, &entry)) > 0) {
        if (!std::strcmp(entry.d_name, ".") || !std::strcmp(entry.d_name, "..")) continue;
        std::string from = source + "/" + entry.d_name, to = target + "/" + entry.d_name;
        success = SCE_S_ISDIR(entry.d_stat.st_mode) ? copyTree(from, to) : copyFile(from, to, false);
        if (!success) {
            std::fprintf(stderr, "Asset installation failed: %s\n", to.c_str());
            break;
        }
    }

    sceIoDclose(handle);
    return success && result >= 0;
}

bool vita_prepare_game_assets() {
    const std::string target = "ux0:data/theescapists";
    if (!ensureDirectory("ux0:data") || !ensureDirectory(target)) return false;

    // Refresh generated assets on every launch; preserve existing Data and Music files.
    return copyFile("app0:/assets/Assets.dat", target + "/Assets.dat", true) &&
           copyTree("app0:/assets/Data", target + "/Data") &&
           copyTree("app0:/assets/Music", target + "/Music");
}
#else

static bool isRegularFile(const std::string& path) {
    SceIoStat info = {};
    return sceIoGetstat(path.c_str(), &info) >= 0 && SCE_S_ISREG(info.st_mode);
}

bool vita_prepare_game_assets() {
    const std::string target = "ux0:data/theescapists";
    if (isDirectory(target) && isRegularFile(target + "/Assets.dat") &&
        isDirectory(target + "/Data") && isDirectory(target + "/Music"))
        return true;
    std::fprintf(stderr,
        "Game data missing. Copy Assets.dat, Data/, and Music/ from your own game copy to %s\\n",
        target.c_str());
    return false;
}
#endif
