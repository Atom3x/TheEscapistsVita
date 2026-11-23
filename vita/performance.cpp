#include "common.h"
#include "platform.h"
#include "vitaframetime.h"
#include "vitaperformance.h"
#include <cstdio>
#ifdef __vita__
#include <psp2/power.h>
#endif

namespace {
#ifdef __vita__
    struct Clocks {
        int cpu;
        int bus;
        int gpu;
        int xbar;
    };
    Clocks launch;
    bool captured = false;
    const char* settingsFile = "ux0:/data/theescapists/vita-settings.cfg";

    Clocks readClocks() {
        return {scePowerGetArmClockFrequency(), scePowerGetBusClockFrequency(),
            scePowerGetGpuClockFrequency(), scePowerGetGpuXbarClockFrequency()};
    }

    bool clocks(const Clocks& c) {
        // Call every setter even on failure, so rollback restores all four clocks.
        bool ok = scePowerSetArmClockFrequency(c.cpu) >= 0;
        ok = (scePowerSetBusClockFrequency(c.bus) >= 0) && ok;
        ok = (scePowerSetGpuClockFrequency(c.gpu) >= 0) && ok;
        ok = (scePowerSetGpuXbarClockFrequency(c.xbar) >= 0) && ok;
        Clocks actual = readClocks();
        return ok && actual.cpu == c.cpu && actual.bus == c.bus && actual.gpu == c.gpu && actual.xbar == c.xbar;
    }

    bool apply(bool native60) {
        if (!captured) {
            launch = readClocks();
            captured = true;
        }

        if (launch.cpu <= 0 || launch.bus <= 0 || launch.gpu <= 0 || launch.xbar <= 0) return false;

        Clocks before = readClocks();
        if (clocks(native60 ? Clocks{444, 222, 222, 166} : launch)) return true;

        clocks(before);
        return false;
    }

    bool save(bool native60) {
        const char* temporary = "ux0:/data/theescapists/vita-settings.cfg.tmp";
        FILE* file = std::fopen(temporary, "w");
        if (!file) return false;

        bool ok = std::fprintf(file, "presentation=%d\nwidescreen=1\n", native60 ? 60 : 45) > 0;
        ok = (std::fclose(file) == 0) && ok;
        if (ok) {
            // Vita's rename does not replace an existing destination.
            std::remove(settingsFile);
            ok = std::rename(temporary, settingsFile) == 0;
        }

        if (!ok) std::remove(temporary);
        return ok;
    }
#endif
}

bool vita_performance_set(bool native60) {
    native60 = native60 && vita_native60_available();
#ifdef __vita__
    if (!apply(native60)) {
        vita_performance().message = "CLOCK REQUEST FAILED - MODE UNCHANGED";
        return false;
    }
#endif
    vita_performance().native60 = native60;
    vita_performance().message = "MODE APPLIED";
#ifdef __vita__
    if (!save(native60)) vita_performance().message = "MODE ACTIVE - SETTINGS COULD NOT BE SAVED";
#endif
    vita_timing_reset();
    manager.set_framerate(vita_presentation_fps());
    platform_set_vsync(native60);
    return true;
}

void vita_performance_load() {
    vita_performance().native60 = false;
#ifdef __vita__
    launch = readClocks();
    captured = true;
    FILE* file = std::fopen(settingsFile, "r");
    int fps = 45;
    if (file) {
        char line[128];
        while (std::fgets(line, sizeof(line), file)) {
            int value;
            if (std::sscanf(line, "presentation=%d", &value) == 1) fps = value;
        }

        std::fclose(file);
    }

    if (fps == 60) vita_performance_set(true);
#endif
}

void vita_performance_suspend() {
#ifdef __vita__
    if (captured && vita_performance().native60) clocks(launch);
#endif
}

void vita_performance_resume() {
    vita_performance().native60 = vita_performance().native60 && vita_native60_available();
#ifdef __vita__
    if (!apply(vita_performance().native60)) {
        vita_performance().native60 = false;
        clocks(launch);
        vita_performance().message = "CLOCK REQUEST FAILED - USING STANDARD";
    }

    manager.set_framerate(vita_presentation_fps());
    platform_set_vsync(vita_performance().native60);
#endif
    vita_timing_reset();
}
