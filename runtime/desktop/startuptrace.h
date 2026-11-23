#ifndef CHOWDREN_STARTUPTRACE_H
#define CHOWDREN_STARTUPTRACE_H

// Report each milestone once, including when a graphics call never returns.
#if defined(__vita__) && defined(CHOWDREN_VITA_DIAGNOSTICS)
#include <iostream>
#define VITA_STARTUP_TRACE(stage) do { \
    static bool reported = false; \
    if (!reported) { \
        reported = true; \
        std::cout << "[Vita startup] " << stage << std::endl; \
    } \
} while (0)
#else
#define VITA_STARTUP_TRACE(stage) ((void)0)
#endif

#endif
