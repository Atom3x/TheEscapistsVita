#include "desktop/startuptrace.h"

// The packaged vitaGL starts an optional second GXM context/thread for its
// animated logo. Its first scene_reset waits without a timeout for that thread.
// Intercept only the request to start this decoration; the flag that makes
// scene_reset wait remains false. Actual game draw/clear/swap calls are intact.
// With a custom vitaGL build, its upstream NO_SPLASHSCREEN=1 flag is preferable.
extern "C" void __wrap_invoke_splashscreen(void) {
    VITA_STARTUP_TRACE("animated vitaGL splash disabled");
}
