#ifdef _WIN32
#include <windows.h>
#include <io.h>
#include <fcntl.h>
#else
#include <sys/time.h>
#include <unistd.h>
#endif
#ifdef __vita__
#include <psp2/io/stat.h>
#include <psp2/io/dirent.h>
#include <psp2/io/fcntl.h>
#include <psp2/ctrl.h>
#include <psp2/apputil.h>
#include <psp2/system_param.h>
#endif

#include "chowconfig.h"
#include "platform.h"
#include "include_gl.h"
#include "manager.h"
#include "mathcommon.h"
#include "fbo.h"
#include <iostream>
#include "platform.h"
#include <SDL.h>
#include "startuptrace.h"
#include "vitapath.h"
#include <SDL_syswm.h>
#include <time.h>
#include <limits>
#include <cmath>
#include <boost/cstdint.hpp>
#include "path.h"
#include "render.h"
#include "presentation.h"
#include "vitaview.h"
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
#include "vitacontrols.h"
#include "trophies.h"
#endif
#ifdef CHOWDREN_VITA_60FPS
#include "vitaframetime.h"
#endif

enum ScaleType
{
    BEST_FIT = 0,
    BEST_FIT_INT = 1,
    EXACT_FIT = 2
};

static Framebuffer screen_fbo;
static SDL_Window * global_window = NULL;
static int global_window_id;

#ifdef CHOWDREN_USE_D3D
static D3DPRESENT_PARAMETERS pparams;
#else
static SDL_GLContext global_context = NULL;
#endif

static int clear_backbuffer = 0;
static bool in_reset = false;
static bool is_fullscreen = false;
static int fullscreen_width = -1;
static int fullscreen_height = -1;
static bool hide_cursor = false;
static bool has_closed = false;
static bool platform_failed = false;
static bool app_active = true;
#ifdef __vita__
static float vita_cursor_x = 480.0f, vita_cursor_y = 272.0f;
static SDL_FingerID vita_pointer_finger = -1;
static bool vita_touch_down = false;
static bool vita_click_left = false, vita_click_right = false;
static void release_vita_controls();
static void update_vita_controls();
#endif
static Uint64 start_time;
int scale_type = BEST_FIT;

static int draw_x_size = 0;
static int draw_y_size = 0;
static int draw_x_off = 0;
static int draw_y_off = 0;

#if defined(__vita__) && defined(CHOWDREN_VITA_PACKAGED_ASSETS)
static bool vita_game_touch(int phase, const SDL_TouchFingerEvent &event)
{
    if (vitaTrophiesBusy()) return true;
    const PresentationRect rect = presentation_rect(VITA_CANVAS_WIDTH, VITA_CANVAS_HEIGHT, 960, 544,
        vita_view_is_wide() ? 2 : 0); // Use the same rectangle for touch and presentation.
    const int x = int(event.x * 960), y = int(event.y * 544);
    if (phase == 0 && (x < rect.x || y < rect.y || x >= rect.x+rect.width || y >= rect.y+rect.height)) return false;
    vita_controls_touch(phase, presentation_coordinate(x, rect.x, rect.width, VITA_CANVAS_WIDTH),
                        presentation_coordinate(y, rect.y, rect.height, VITA_CANVAS_HEIGHT));
    return true;
}
#endif

#define CHOWDREN_DESKTOP_FULLSCREEN

#ifdef CHOWDREN_USE_GL
// opengl function pointers
PFNGLBLENDEQUATIONSEPARATEEXTPROC __glBlendEquationSeparateEXT;
PFNGLBLENDEQUATIONEXTPROC __glBlendEquationEXT;
PFNGLBLENDFUNCSEPARATEEXTPROC __glBlendFuncSeparateEXT;
PFNGLACTIVETEXTUREARBPROC __glActiveTextureARB;
PFNGLCLIENTACTIVETEXTUREARBPROC __glClientActiveTextureARB;
PFNGLGENFRAMEBUFFERSEXTPROC __glGenFramebuffersEXT;
PFNGLDELETEFRAMEBUFFERSEXTPROC __glDeleteFramebuffersEXT;
PFNGLFRAMEBUFFERTEXTURE2DEXTPROC __glFramebufferTexture2DEXT;
PFNGLBINDFRAMEBUFFEREXTPROC __glBindFramebufferEXT;

PFNGLUSEPROGRAMOBJECTARBPROC __glUseProgramObjectARB;
PFNGLDETACHOBJECTARBPROC __glDetachObjectARB;
PFNGLGETINFOLOGARBPROC __glGetInfoLogARB;
PFNGLGETOBJECTPARAMETERIVARBPROC __glGetObjectParameterivARB;
PFNGLLINKPROGRAMARBPROC __glLinkProgramARB;
PFNGLCREATEPROGRAMOBJECTARBPROC __glCreateProgramObjectARB;
PFNGLATTACHOBJECTARBPROC __glAttachObjectARB;
PFNGLCOMPILESHADERARBPROC __glCompileShaderARB;
PFNGLSHADERSOURCEARBPROC __glShaderSourceARB;
PFNGLCREATESHADEROBJECTARBPROC __glCreateShaderObjectARB;
PFNGLUNIFORM1IARBPROC __glUniform1iARB;
PFNGLUNIFORM2FARBPROC __glUniform2fARB;
PFNGLUNIFORM1FARBPROC __glUniform1fARB;
PFNGLUNIFORM4FARBPROC __glUniform4fARB;
PFNGLGETUNIFORMLOCATIONARBPROC __glGetUniformLocationARB;
#endif

#ifndef CHOWDREN_USE_D3D
void set_gl_state();

#ifdef CHOWDREN_USE_GL
static void * required_gl_proc(const char *name)
{
#ifdef CHOWDREN_VITA_VITAGL
    // vitaGL exposes core GL entry points rather than the desktop ARB/EXT names.
    std::string core = name;
    if (core == "glUseProgramObjectARB") core = "glUseProgram";
    else if (core == "glCreateProgramObjectARB") core = "glCreateProgram";
    else if (core == "glCreateShaderObjectARB") core = "glCreateShader";
    else if (core == "glAttachObjectARB") core = "glAttachShader";
    else if (core.size() > 3 && (core.compare(core.size()-3,3,"ARB") == 0 ||
                                core.compare(core.size()-3,3,"EXT") == 0))
        core.resize(core.size()-3);
    void *proc = SDL_GL_GetProcAddress(core.c_str());
#else
    void *proc = SDL_GL_GetProcAddress(name);
#endif
    if (!proc) {
        platform_failed = true;
        std::cerr << "Missing required graphics function: " << name << std::endl;
        std::exit(EXIT_FAILURE);
    }
    return proc;
}
#endif

static bool check_opengl_extension(const char * name)
{
    if (SDL_GL_ExtensionSupported(name) == SDL_TRUE)
        return true;
    std::string message;
    message += "OpenGL extension '";
    message += name;
    message += "' not supported.";
#ifdef __vita__
    std::cerr << message << std::endl;
#else
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "OpenGL error", message.c_str(), NULL);
#endif
    return false;
}

const char * extensions[] = {
#ifdef CHOWDREN_USE_GL
    "GL_EXT_framebuffer_object",
    "GL_ARB_shader_objects",
    "GL_ARB_vertex_shader",
    "GL_ARB_fragment_shader",
    "GL_ARB_texture_non_power_of_two",
#endif
    NULL
};

static bool check_opengl_extensions()
{
    for (int i = 0; extensions[i] != NULL; i++)
        if (!check_opengl_extension(extensions[i]))
            return false;
    return true;
}
#endif

static void on_key(SDL_KeyboardEvent & e)
{
    if (e.repeat != 0)
        return;
    bool state = e.state == SDL_PRESSED;
    int key = e.keysym.sym;

#ifndef __vita__
    if (state && key == SDLK_RETURN && (SDL_GetModState() & KMOD_ALT)) {
        manager.set_window(!manager.fullscreen);
        return;
    }

    if (state && key == SDLK_F2) {
        manager.frame->restart();
    }

#endif

#ifdef CHOWDREN_USE_EDITOBJ
    if (state && key == SDLK_v && (SDL_GetModState() & KMOD_CTRL) &&
        SDL_HasClipboardText())
    {
        char * text = SDL_GetClipboardText();
        manager.input += text;
        SDL_free(text);
        return;
    }
#endif

    manager.on_key(key, state);
}

static void on_mouse(SDL_MouseButtonEvent & e)
{
#ifdef __vita__
    if (e.which == SDL_TOUCH_MOUSEID) return; // Finger events already supply touch input.
#endif
    manager.on_mouse(e.button, e.state == SDL_PRESSED);
}

void init_joystick();
void update_joystick();
void add_joystick(int device);
void remove_joystick(int instance);
void on_joystick_button(int instance, int button, bool state);
void on_controller_button(int instance, int button, bool state);
void d3d_reset(int w, int h);
void d3d_reset_state();
void d3d_set_backtex_size(int w, int h);

#ifdef __APPLE__
#include <CoreFoundation/CoreFoundation.h>
#include <sys/param.h> // For MAXPATHLEN

static void set_resources_dir()
{
    char resourcesPath[MAXPATHLEN];

    CFBundleRef bundle = CFBundleGetMainBundle();
    if (!bundle)
        return;

    CFURLRef resourcesURL = CFBundleCopyResourcesDirectoryURL(bundle);

    CFStringRef last = CFURLCopyLastPathComponent(resourcesURL);
    if (CFStringCompare(CFSTR("Resources"), last, 0) != kCFCompareEqualTo)
    {
        CFRelease(last);
        CFRelease(resourcesURL);
        return;
    }

    CFRelease(last);

    if (!CFURLGetFileSystemRepresentation(resourcesURL,
                                          true,
                                          (UInt8*) resourcesPath,
                                          MAXPATHLEN))
    {
        CFRelease(resourcesURL);
        return;
    }

    CFRelease(resourcesURL);

    chdir(resourcesPath);
}
#endif

#ifndef NDEBUG
static void sdl_log(void *userdata, int category, SDL_LogPriority priority,
                    const char * message)
{
    std::cout << "SDL log (" << category << ", " << priority << "): "
              << message << std::endl;
}
#endif

void platform_init()
{
    has_closed = false;
    platform_failed = false;
    app_active = true;
#ifdef __vita__
    SDL_SetHint(SDL_HINT_TOUCH_MOUSE_EVENTS, "0");
    SDL_SetHint(SDL_HINT_MOUSE_TOUCH_EVENTS, "0");
    SDL_setenv("VITA_DISABLE_TOUCH_BACK", "1", 1);
#ifndef CHOWDREN_VITA_VITAGL
    SDL_setenv("VITA_PVR_OGL", "1", 1);
#endif
#endif
    unsigned int flags = SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER | SDL_INIT_TIMER;
    if (SDL_Init(flags) < 0) {
        platform_failed = true;
        has_closed = true;
        std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
        // GameManager::init() has no failure return path from platform_init().
        std::exit(EXIT_FAILURE);
    }
#ifndef __vita__
    if (SDL_InitSubSystem(SDL_INIT_HAPTIC) != 0)
        std::cerr << "Optional haptics unavailable: " << SDL_GetError() << std::endl;
#endif
#ifdef __vita__
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
    extern bool vita_prepare_game_assets();
    if (!vita_prepare_game_assets()) {
        platform_failed = true;
        std::cerr << "Required game data is missing under ux0:data/theescapists" << std::endl;
        SDL_Quit();
        std::exit(EXIT_FAILURE);
    }
#endif
    if (chdir("ux0:data/theescapists") != 0) {
        platform_failed = true;
        std::cerr << "Missing asset directory ux0:data/theescapists" << std::endl;
        SDL_Quit();
        std::exit(EXIT_FAILURE);
    }
#endif
    SDL_EventState(SDL_MOUSEMOTION, SDL_DISABLE);
    // SDL_EventState(SDL_WINDOWEVENT, SDL_DISABLE);
#ifdef __APPLE__
    set_resources_dir();
#endif
    start_time = SDL_GetPerformanceCounter();
    init_joystick();

#ifdef _WIN32
    timeBeginPeriod(1);
#endif

#ifndef NDEBUG
    SDL_LogSetAllPriority(SDL_LOG_PRIORITY_WARN);
    SDL_LogSetOutputFunction(sdl_log, NULL);
#endif
}

// Here, we check if vsync is causing the game to slow down from 60fps to lower
// than ~55fps.

static int vsync_value = -2;
static double vsync_fail_time = 0.0;
static bool disable_resize_shader = false;

void check_slowdown()
{
#ifdef __vita__
    return; // Desktop adaptive-vsync heuristics do not describe handheld pacing.
#endif
    int window_flags = SDL_GetWindowFlags(global_window);
    if (window_flags & (SDL_WINDOW_MINIMIZED | SDL_WINDOW_HIDDEN))
        return;

    double expected = 1.0 / manager.fps_limit.framerate;
    if (manager.fps_limit.dt - expected > 0.0025) {
        vsync_fail_time += expected;
    } else {
        vsync_fail_time = 0.0;
        return;
    }

    if (vsync_fail_time <= 2.0)
        return;

    vsync_fail_time = 0.0;

#ifdef CHOWDREN_SPECIAL_POINT_FILTER
    if (!disable_resize_shader) {
        std::cout << "Disable resize shader, too slow " << std::endl;
        disable_resize_shader = true;
        return;
    }
#endif

    if (vsync_value == 1) {
        std::cout << "Swap interval causing slowdown, turning off vsync"
            << std::endl;
        vsync_fail_time = 0.0;
        platform_set_vsync(0);
    }
}

void platform_poll_events()
{
    if (global_window) check_slowdown();

#ifdef CHOWDREN_USE_EDITOBJ
    manager.input.clear();
#endif

    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        switch (e.type) {
#ifdef __vita__
            case SDL_APP_WILLENTERBACKGROUND:
                app_active = false;
                if (vita_touch_down || vita_click_left) manager.on_mouse(SDL_BUTTON_LEFT, false);
                if (vita_click_right) manager.on_mouse(SDL_BUTTON_RIGHT, false);
                vita_touch_down = vita_click_left = vita_click_right = false;
                vita_pointer_finger = -1;
                release_vita_controls();
#ifdef CHOWDREN_VITA_60FPS
                vita_performance_suspend();
#endif
                break;
            case SDL_APP_DIDENTERFOREGROUND:
                app_active = true;
                clear_backbuffer = 5;
#ifdef CHOWDREN_VITA_60FPS
                vita_performance_resume();
#endif
                break;
            case SDL_FINGERDOWN:
                if (!app_active || (vita_pointer_finger != -1 && vita_pointer_finger != e.tfinger.fingerId)) break;
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
                if (SDL_GetNumTouchDevices() > 0 && e.tfinger.touchId != SDL_GetTouchDevice(0)) break;
                if (!vita_game_touch(0, e.tfinger)) break;
#endif
                vita_pointer_finger = e.tfinger.fingerId;
                vita_touch_down = true;
#ifndef CHOWDREN_VITA_PACKAGED_ASSETS
                vita_cursor_x = e.tfinger.x * 960.0f;
                vita_cursor_y = e.tfinger.y * 544.0f;
                if (!vita_click_left) manager.on_mouse(SDL_BUTTON_LEFT, true);
#endif
                break;
            case SDL_FINGERMOTION:
                if (e.tfinger.fingerId == vita_pointer_finger) {
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
                    vita_game_touch(1, e.tfinger);
#else
                    vita_cursor_x = e.tfinger.x * 960.0f;
                    vita_cursor_y = e.tfinger.y * 544.0f;
#endif
                }
                break;
            case SDL_FINGERUP:
                if (e.tfinger.fingerId == vita_pointer_finger) {
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
                    vita_game_touch(2, e.tfinger);
#else
                    vita_cursor_x = e.tfinger.x * 960.0f;
                    vita_cursor_y = e.tfinger.y * 544.0f;
#endif
                    vita_pointer_finger = -1;
                    vita_touch_down = false;
#ifndef CHOWDREN_VITA_PACKAGED_ASSETS
                    if (!vita_click_left) manager.on_mouse(SDL_BUTTON_LEFT, false);
#endif
                }
                break;
#endif
            case SDL_KEYDOWN:
            case SDL_KEYUP:
                on_key(e.key);
                break;
            case SDL_MOUSEBUTTONDOWN:
            case SDL_MOUSEBUTTONUP:
                on_mouse(e.button);
                break;
            case SDL_JOYDEVICEADDED:
                add_joystick(e.jdevice.which);
                break;
            case SDL_JOYDEVICEREMOVED:
                remove_joystick(e.jdevice.which);
                break;
            case SDL_JOYBUTTONDOWN:
            case SDL_JOYBUTTONUP:
                on_joystick_button(e.jbutton.which, e.jbutton.button,
                                   e.jbutton.state == SDL_PRESSED);
                break;
            case SDL_CONTROLLERBUTTONDOWN:
            case SDL_CONTROLLERBUTTONUP:
                on_controller_button(e.cbutton.which, e.cbutton.button,
                                     e.cbutton.state == SDL_PRESSED);
                break;
#ifdef CHOWDREN_USE_EDITOBJ
            case SDL_TEXTINPUT:
                manager.input += e.text.text;
                break;
#endif
            case SDL_QUIT:
                has_closed = true;
                break;
            case SDL_WINDOWEVENT: {
                if (e.window.windowID != global_window_id)
                    break;
                if (e.window.event == SDL_WINDOWEVENT_SIZE_CHANGED) {
#ifdef CHOWDREN_USE_D3D
                    int w = e.window.data1;
                    int h = e.window.data2;
                    d3d_reset(w, h);
#endif
                    clear_backbuffer = 5;
                    break;
                }
            }
            default:
                break;
        }
    }
    update_joystick();
#ifdef __vita__
    if (app_active) update_vita_controls();
#endif
}

// time

double platform_get_time()
{
    Uint64 s = SDL_GetPerformanceCounter();
    s -= start_time;
    const Uint64 frequency = SDL_GetPerformanceFrequency();
    return frequency ? s / double(frequency) : 0.0;
}

unsigned int platform_get_global_time()
{
    const time_t now = time(NULL);
    return now < 0 ? 0 : static_cast<unsigned int>(now);
}

static DateTime datetime;

const DateTime & platform_get_datetime()
{
    time_t now = time(NULL);
    tm * t = localtime(&now);
    if (!t) { datetime = DateTime(); return datetime; }
    datetime.sec = t->tm_sec;
    datetime.min = t->tm_min;
    datetime.hour = t->tm_hour;
    datetime.mday = t->tm_mday;
    datetime.mon = t->tm_mon;
    datetime.year = t->tm_year;
    datetime.wday = t->tm_wday;
    datetime.yday = t->tm_yday;
    return datetime;
}

void platform_sleep(double t)
{
    if (!std::isfinite(t) || t < 0.001) return;
    const double milliseconds = std::min(t * 1000.0, double(std::numeric_limits<Uint32>::max()));
    SDL_Delay(static_cast<Uint32>(milliseconds));
}

bool platform_display_closed()
{
    if (global_window == NULL)
        return true;
    return has_closed;
}

void platform_get_mouse_pos(int * x, int * y)
{
#if defined(__vita__) && defined(CHOWDREN_VITA_PACKAGED_ASSETS)
    vita_controls_pointer(x, y);
    *x -= VITA_CANVAS_X; // Convert physical focus/touch back into script coordinates.
    return;
#endif
#ifdef __vita__
    *x = static_cast<int>(vita_cursor_x);
    *y = static_cast<int>(vita_cursor_y);
#else
    SDL_GetMouseState(x, y);
#endif
    const int width = draw_x_size > 0 ? draw_x_size : WINDOW_WIDTH;
    const int height = draw_y_size > 0 ? draw_y_size : WINDOW_HEIGHT;
    *x = (*x - draw_x_off) * (float(WINDOW_WIDTH) / width);
    *y = (*y - draw_y_off) * (float(WINDOW_HEIGHT) / height);
#ifdef __vita__
    *x = presentation_coordinate(static_cast<int>(vita_cursor_x), draw_x_off, width, WINDOW_WIDTH);
    *y = presentation_coordinate(static_cast<int>(vita_cursor_y), draw_y_off, height, WINDOW_HEIGHT);
#endif
}

#if !defined(NDEBUG) && !defined(CHOWDREN_USE_D3D)
// #define CHOWDREN_USE_GL_DEBUG
#endif

#ifdef CHOWDREN_USE_GL_DEBUG
static void APIENTRY on_debug_message(GLenum source, GLenum type, GLuint id,
                                      GLenum severity, GLsizei length,
                                      const GLchar * message,
                                      GLvoid * param)
{
    std::cout << "OpenGL message (" << source << " " << type << " " << id <<
        ")" << message << std::endl;
}

static void APIENTRY on_debug_message_amd(GLuint id, GLenum category,
                                          GLenum severity, GLsizei length,
                                          const GLchar* message,
                                          GLvoid* userParam)
{
    std::cout << "OpenGL message (" << id << " " << category << " "
        << severity << ")" << message << std::endl;
}
#endif

#ifdef CHOWDREN_USE_D3D
static void create_d3d_device()
{
    int display_index = SDL_GetWindowDisplayIndex(global_window);
    int adapter_index = SDL_Direct3D9GetAdapterIndex(display_index);

    HRESULT hr;
    D3DDEVTYPE device_type = D3DDEVTYPE_HAL;
    DWORD device_flags = D3DCREATE_FPU_PRESERVE |
                         D3DCREATE_HARDWARE_VERTEXPROCESSING |
                         D3DCREATE_PUREDEVICE;

    hr = render_data.d3d->CreateDevice(adapter_index, device_type,
                                       pparams.hDeviceWindow, device_flags,
                                       &pparams, &render_data.device);
    if (!FAILED(hr))
        return;

    // try again with fixed back buffer count
    hr = render_data.d3d->CreateDevice(adapter_index, device_type,
                                       pparams.hDeviceWindow, device_flags,
                                       &pparams, &render_data.device);
    if (!FAILED(hr))
        return;

    // Try to create the device with mixed vertex processing.
    device_flags &= ~D3DCREATE_HARDWARE_VERTEXPROCESSING;
    device_flags &= ~D3DCREATE_PUREDEVICE;
    device_flags |= D3DCREATE_MIXED_VERTEXPROCESSING;

    hr = render_data.d3d->CreateDevice(adapter_index, device_type,
                                       pparams.hDeviceWindow, device_flags,
                                       &pparams, &render_data.device);
    if (!FAILED(hr))
        return;

    // try to create the device with software vertex processing.
    device_flags &= ~D3DCREATE_MIXED_VERTEXPROCESSING;
    device_flags |= D3DCREATE_SOFTWARE_VERTEXPROCESSING;
    hr = render_data.d3d->CreateDevice(adapter_index, device_type,
                                       pparams.hDeviceWindow, device_flags,
                                       &pparams, &render_data.device);
    if (!FAILED(hr))
        return;

    // try reference device
    device_type = D3DDEVTYPE_REF;
    hr = render_data.d3d->CreateDevice(adapter_index, device_type,
                                       pparams.hDeviceWindow, device_flags,
                                       &pparams, &render_data.device);
    if (!FAILED(hr))
        return;

    std::cout << "Could not create D3D context" << std::endl;
    exit(EXIT_FAILURE);
}

static D3DFORMAT
PixelFormatToD3DFMT(Uint32 format)
{
    switch (format) {
    case SDL_PIXELFORMAT_RGB565:
        return D3DFMT_R5G6B5;
    case SDL_PIXELFORMAT_RGB888:
        return D3DFMT_X8R8G8B8;
    case SDL_PIXELFORMAT_ARGB8888:
        return D3DFMT_A8R8G8B8;
    case SDL_PIXELFORMAT_YV12:
    case SDL_PIXELFORMAT_IYUV:
        return D3DFMT_L8;
    default:
        return D3DFMT_UNKNOWN;
    }
}

static bool last_fullscreen = false;
static int last_w = 0;
static int last_h = 0;
static bool last_failed = false;

void d3d_set_window(int w, int h)
{
    last_fullscreen = false;
    pparams.BackBufferWidth = w;
    pparams.BackBufferHeight = h;
    pparams.Windowed = TRUE;
    pparams.FullScreen_RefreshRateInHz = 0;
    pparams.BackBufferFormat = D3DFMT_UNKNOWN;
}

void d3d_reset(int w, int h)
{
	if (is_fullscreen && (w != fullscreen_width || h != fullscreen_height))
		return;

    if (!last_failed && last_fullscreen == is_fullscreen
        && last_w == w && last_h == h)
        return;

    in_reset = true;
    std::cout << "Reset D3D device: " << w << " " << h << " " << is_fullscreen
        << std::endl;

    pparams.BackBufferWidth = w;
    pparams.BackBufferHeight = h;

    if (is_fullscreen) {
        SDL_DisplayMode mode;
        int display = SDL_GetWindowDisplayIndex(global_window);
        SDL_GetDesktopDisplayMode(display, &mode);
        pparams.Windowed = FALSE;
        pparams.FullScreen_RefreshRateInHz = mode.refresh_rate;
        pparams.BackBufferFormat = PixelFormatToD3DFMT(mode.format);
    } else {
        pparams.Windowed = TRUE;
        pparams.FullScreen_RefreshRateInHz = 0;
        pparams.BackBufferFormat = D3DFMT_UNKNOWN;
    }

    for (int i = 0; i < 32; ++i) {
        Framebuffer * fbo = Framebuffer::fbos[i];
        if (fbo == NULL || fbo->fbo == NULL)
            continue;
        fbo->fbo->Release();
        fbo->fbo = NULL;
        TextureData & t = render_data.textures[fbo->tex];
        t.texture->Release();
    }
  
    render_data.default_target->Release();
    render_data.default_target = NULL;
    render_data.textures[render_data.back_tex].texture->Release();
    render_data.textures[render_data.back_tex].texture = NULL;

    last_fullscreen = is_fullscreen;
    last_w = w;
    last_h = h;

    if (is_fullscreen && last_failed) {
        std::cout << "Last failed, set windowed" << std::endl;
        d3d_set_window(w, h);
    }

    bool show = false;
    HRESULT hr = render_data.device->Reset(&pparams);
    if (hr == D3DERR_DEVICELOST || hr == D3DERR_INVALIDCALL) {
        if (is_fullscreen) {
            std::cout << "Failing fullscreen due to device lost" << std::endl;
            d3d_set_window(w, h);
        }

        while (hr == D3DERR_DEVICELOST || hr == D3DERR_DEVICENOTRESET) {
            hr = render_data.device->Reset(&pparams);
        }
    }

    for (int i = 0; i < 32; ++i) {
        Framebuffer * fbo = Framebuffer::fbos[i];
        if (fbo == NULL)
            continue;
        fbo->init(fbo->w, fbo->h);
    }

    render_data.device->GetRenderTarget(0, &render_data.default_target);

    d3d_reset_state();

    render_data.backtex_width = render_data.backtex_height = 0;
    d3d_set_backtex_size(1, 1);

    last_failed = false;
    in_reset = false;

    clear_backbuffer = 5;

#ifdef CHOWDREN_PASTE_CACHE
    vector<Layer>::iterator it;
    for (it = manager.frame->layers.begin();
         it != manager.frame->layers.end();
         ++it)
    {
        Background * back = it->back;
        if (back == NULL)
            continue;
        back->dirty = true;
    }
#endif
}
#endif

void platform_create_display(bool fullscreen)
{
    is_fullscreen = fullscreen;

#ifdef __vita__
    int flags = 0;
    is_fullscreen = true;
#else
    int flags = SDL_WINDOW_RESIZABLE;
    if (fullscreen) flags |= SDL_WINDOW_FULLSCREEN_DESKTOP;
#endif

#ifndef CHOWDREN_USE_D3D
    flags |= SDL_WINDOW_OPENGL;

#ifdef CHOWDREN_USE_GL
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
#elif CHOWDREN_USE_GLES1
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
                        SDL_GL_CONTEXT_PROFILE_ES);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 1);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
#elif CHOWDREN_USE_GLES2
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
                        SDL_GL_CONTEXT_PROFILE_ES);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
#endif

#ifdef CHOWDREN_USE_GL_DEBUG
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_DEBUG_FLAG);
#endif

#endif // CHOWDREN_USE_D3D

    int start_width = WINDOW_WIDTH;
    int start_height = WINDOW_HEIGHT;

#ifdef CHOWDREN_DEFAULT_SCALE
    start_width *= CHOWDREN_DEFAULT_SCALE;
    start_height *= CHOWDREN_DEFAULT_SCALE;
#endif

#ifdef __vita__
    start_width = 960;
    start_height = 544;
#endif
    global_window = SDL_CreateWindow(NAME,
                                     SDL_WINDOWPOS_CENTERED,
                                     SDL_WINDOWPOS_CENTERED,
                                     start_width, start_height,
                                     flags);
    if (global_window == NULL) {
        platform_failed = true;
        std::cout << "Could not open window: " << SDL_GetError() << std::endl;
        exit(EXIT_FAILURE);
        return;
    }

    global_window_id = SDL_GetWindowID(global_window);

#ifdef __linux
    SDL_Surface * icon = SDL_LoadBMP("icon.bmp");
    if (icon != NULL) {
        SDL_SetWindowIcon(global_window, icon);
        SDL_FreeSurface(icon);
    } else {
        std::cout << "Could not load icon.bmp" << std::endl;
    }
#endif

#ifdef CHOWDREN_USE_D3D
    render_data.d3d = Direct3DCreate9(D3D_SDK_VERSION);
    SDL_SysWMinfo window_info;
    SDL_VERSION(&window_info.version);
    SDL_GetWindowWMInfo(global_window, &window_info);
    pparams.hDeviceWindow = window_info.info.win.window;
    pparams.BackBufferWidth = start_width;
    pparams.BackBufferHeight = start_height;
    pparams.BackBufferCount = 1;
    pparams.SwapEffect = D3DSWAPEFFECT_DISCARD;
    pparams.Windowed = TRUE;
    pparams.BackBufferFormat = D3DFMT_UNKNOWN;
    pparams.FullScreen_RefreshRateInHz = 0;
    pparams.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;

    create_d3d_device();

    D3DCAPS9 caps;
    render_data.device->GetDeviceCaps(&caps);

    if ((caps.TextureCaps & D3DPTEXTURECAPS_POW2) != 0 &&
        (caps.TextureCaps & D3DPTEXTURECAPS_NONPOW2CONDITIONAL) == 0)
    {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "D3D error",
                                 "NPOT textures not supported", NULL);
        exit(EXIT_FAILURE);
    }

    render_data.device->GetRenderTarget(0, &render_data.default_target);
#else
    global_context = SDL_GL_CreateContext(global_window);
    if (global_context == NULL) {
        platform_failed = true;
#ifdef __vita__
        std::cerr << "This renderer requires SDL2 with VIDEO_VITA_PVR and gl4es4vita support." << std::endl;
#endif
        std::cout << "Could not create OpenGL context: " << SDL_GetError()
            << std::endl;
        exit(EXIT_FAILURE);
        return;
    }

    const GLubyte * renderer = glGetString(GL_RENDERER);
    const GLubyte * vendor = glGetString(GL_VENDOR);

    std::cout << "Renderer: " << renderer << " - " << vendor << " - "
        << std::endl;

#ifdef CHOWDREN_USE_GL
    // initialize OpenGL function pointers
    __glBlendEquationSeparateEXT =
        (PFNGLBLENDEQUATIONSEPARATEEXTPROC)
        required_gl_proc("glBlendEquationSeparateEXT");
    __glBlendEquationEXT =
        (PFNGLBLENDEQUATIONEXTPROC)
        required_gl_proc("glBlendEquationEXT");
    __glBlendFuncSeparateEXT =
        (PFNGLBLENDFUNCSEPARATEEXTPROC)
        required_gl_proc("glBlendFuncSeparateEXT");

    __glActiveTextureARB =
        (PFNGLACTIVETEXTUREARBPROC)
        required_gl_proc("glActiveTextureARB");
    __glClientActiveTextureARB =
        (PFNGLACTIVETEXTUREARBPROC)
        required_gl_proc("glClientActiveTextureARB");

    __glGenFramebuffersEXT =
        (PFNGLGENFRAMEBUFFERSEXTPROC)
        required_gl_proc("glGenFramebuffersEXT");
    __glDeleteFramebuffersEXT =
        (PFNGLDELETEFRAMEBUFFERSEXTPROC)
        required_gl_proc("glDeleteFramebuffersEXT");
    __glFramebufferTexture2DEXT =
        (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)
        required_gl_proc("glFramebufferTexture2DEXT");
    __glBindFramebufferEXT =
        (PFNGLBINDFRAMEBUFFEREXTPROC)
        required_gl_proc("glBindFramebufferEXT");

    // shaders
    __glUniform1iARB =
        (PFNGLUNIFORM1IARBPROC)
        required_gl_proc("glUniform1iARB");
    __glUseProgramObjectARB =
        (PFNGLUSEPROGRAMOBJECTARBPROC)
        required_gl_proc("glUseProgramObjectARB");
#ifndef CHOWDREN_VITA_VITAGL
    __glDetachObjectARB =
        (PFNGLDETACHOBJECTARBPROC)
        required_gl_proc("glDetachObjectARB");
    __glGetInfoLogARB =
        (PFNGLGETINFOLOGARBPROC)
        required_gl_proc("glGetInfoLogARB");
    __glGetObjectParameterivARB =
        (PFNGLGETOBJECTPARAMETERIVARBPROC)
        required_gl_proc("glGetObjectParameterivARB");
#endif
    __glLinkProgramARB =
        (PFNGLLINKPROGRAMARBPROC)
        required_gl_proc("glLinkProgramARB");
    __glCreateProgramObjectARB =
        (PFNGLCREATEPROGRAMOBJECTARBPROC)
        required_gl_proc("glCreateProgramObjectARB");
    __glAttachObjectARB =
        (PFNGLATTACHOBJECTARBPROC)
        required_gl_proc("glAttachObjectARB");
    __glCompileShaderARB =
        (PFNGLCOMPILESHADERARBPROC)
        required_gl_proc("glCompileShaderARB");
    __glShaderSourceARB =
        (PFNGLSHADERSOURCEARBPROC)
        required_gl_proc("glShaderSourceARB");
    __glCreateShaderObjectARB =
        (PFNGLCREATESHADEROBJECTARBPROC)
        required_gl_proc("glCreateShaderObjectARB");
    __glUniform2fARB =
        (PFNGLUNIFORM2FARBPROC)
        required_gl_proc("glUniform2fARB");
    __glUniform1fARB =
        (PFNGLUNIFORM1FARBPROC)
        required_gl_proc("glUniform1fARB");
    __glUniform4fARB =
        (PFNGLUNIFORM4FARBPROC)
        required_gl_proc("glUniform4fARB");
    __glGetUniformLocationARB =
        (PFNGLGETUNIFORMLOCATIONARBPROC)
        required_gl_proc("glGetUniformLocationARB");
#endif

#ifdef CHOWDREN_USE_GL_DEBUG
#define GL_DEBUG_OUTPUT 0x92E0
	std::cout << "OpenGL debug enabled" << std::endl;

    glEnable(GL_DEBUG_OUTPUT);
    glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB);
    if (SDL_GL_ExtensionSupported("GL_ARB_debug_output")) {
        std::cout << "Using ARB debug" << std::endl;
        PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallback =
            (PFNGLDEBUGMESSAGECALLBACKARBPROC)
            required_gl_proc("glDebugMessageCallback");

        PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControl =
            (PFNGLDEBUGMESSAGECONTROLARBPROC)
            required_gl_proc("glDebugMessageControl");

    	glDebugMessageCallback((GLDEBUGPROCARB)on_debug_message, NULL);
        glDebugMessageControl(GL_DONT_CARE, GL_DONT_CARE, GL_DONT_CARE, 0,
                              NULL, GL_TRUE);
    } else if (SDL_GL_ExtensionSupported("GL_AMD_debug_output")) {
        std::cout << "Using AMD debug" << std::endl;
        PFNGLDEBUGMESSAGECALLBACKAMDPROC glDebugMessageCallbackAMD =
            (PFNGLDEBUGMESSAGECALLBACKAMDPROC)
            required_gl_proc("glDebugMessageCallbackAMD");
        glDebugMessageCallbackAMD((GLDEBUGPROCAMD)on_debug_message_amd, NULL);
    }
#endif

    // check extensions
#ifndef CHOWDREN_VITA_VITAGL
    if (!check_opengl_extensions()) {
        std::cout << "Not all OpenGL extensions supported. Quitting..."
            << std::endl;
        exit(EXIT_FAILURE);
        return;
    }
#endif

#endif // CHOWDREN_USE_D3D

    // if the cursor was hidden before the window was created, hide it now
    if (hide_cursor)
        platform_hide_mouse();

    screen_fbo.init(VITA_CANVAS_WIDTH, VITA_CANVAS_HEIGHT);
}

void platform_set_vsync(bool value)
{
#ifdef CHOWDREN_VITA_60FPS
    // Standard uses the 45 Hz cap; Performance synchronizes native 60 Hz.
    value = vita_performance().native60;
#endif
    if (global_window == NULL)
        return;

    int vsync;
    if (value)
        vsync = 1;
    else
        vsync = 0;

    if (vsync == vsync_value)
        return;
    vsync_value = vsync;

#ifdef CHOWDREN_USE_D3D
    if (vsync == 1)
        pparams.PresentationInterval = D3DPRESENT_INTERVAL_ONE;
    else
        pparams.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;
    d3d_reset(pparams.BackBufferWidth, pparams.BackBufferHeight);
#else
    int ret = SDL_GL_SetSwapInterval(vsync);
    if (ret == 0)
        return;

    std::cout << "Set vsync failed: " << SDL_GetError() << std::endl;
#endif
}

bool platform_get_vsync()
{
#ifdef CHOWDREN_USE_D3D
    return pparams.PresentationInterval == D3DPRESENT_INTERVAL_ONE;
#else
    int vsync = SDL_GL_GetSwapInterval();
    if (vsync != -1)
        return vsync == 1;
    switch (vsync_value) {
        case 1:
        case -1:
            return true;
        default:
            return false;
    }
#endif
}

void platform_set_fullscreen(bool value)
{
#ifdef __vita__
    (void)value;
    is_fullscreen = true;
    return;
#endif
    if (!global_window) return;
    if (value == is_fullscreen)
        return;
    is_fullscreen = value;
#ifdef CHOWDREN_DESKTOP_FULLSCREEN
    int flags;
    if (value)
        flags = SDL_WINDOW_FULLSCREEN_DESKTOP;
    else
        flags = 0;
#else
    int flags;
    if (value) {
        flags = SDL_WINDOW_FULLSCREEN;
        int display = SDL_GetWindowDisplayIndex(global_window);
        SDL_DisplayMode mode;
        SDL_GetDesktopDisplayMode(display, &mode);
        // SDL_GetWindowDisplayMode(global_window, &mode);
        SDL_SetWindowDisplayMode(global_window, &mode);
    } else
        flags = 0;
#endif
    SDL_SetWindowFullscreen(global_window, flags);

#ifdef CHOWDREN_USE_D3D
    if (in_reset)
        return;
    SDL_GetWindowSize(global_window, &fullscreen_width, &fullscreen_height);
    d3d_reset(fullscreen_width, fullscreen_height);
#endif

    if (value)
        return;
    SDL_SetWindowPosition(global_window,
                          SDL_WINDOWPOS_CENTERED,
                          SDL_WINDOWPOS_CENTERED);
}

void platform_begin_draw()
{
    if (!global_window || platform_failed) return;
#ifdef CHOWDREN_USE_D3D
    render_data.device->BeginScene();
#else
    set_gl_state();
#endif
    screen_fbo.bind();
}

void platform_swap_buffers()
{
    if (!global_window || platform_failed) return;
#ifdef CHOWDREN_USE_GL_DEBUG
    GLenum err = glGetError();
    if (err != GL_NO_ERROR)
        std::cout << "OpenGL error: " << err << std::endl;
#endif

    int window_width, window_height;
    platform_get_size(&window_width, &window_height);
    const PresentationRect rect = presentation_rect(VITA_CANVAS_WIDTH, VITA_CANVAS_HEIGHT,
        window_width, window_height,
#if defined(__vita__) && defined(CHOWDREN_VITA_PACKAGED_ASSETS)
        vita_view_is_wide() ? 2 : 0); // Fullscreen world; original mode preserves 4:3.
#else
        is_fullscreen ? scale_type : BEST_FIT);
#endif
    draw_x_size = rect.width; draw_y_size = rect.height;
    draw_x_off = rect.x; draw_y_off = rect.y;
    if (rect.width == 0 || rect.height == 0) return;

#if defined(__vita__) && defined(CHOWDREN_VITA_PACKAGED_ASSETS)
    vita_controls_draw();
#endif
    screen_fbo.unbind();
    VITA_STARTUP_TRACE("presentation framebuffer bound");

    // resize the window contents if necessary (fullscreen mode)
    Render::set_view(0, 0, window_width, window_height);
    Render::set_offset(0, 0);
#ifdef __vita__
    clear_backbuffer = 1; // Always clear borders on a fixed display.
#endif
    if (clear_backbuffer > 0) {
        clear_backbuffer--;
        Render::clear(0, 0, 0, 255);
    }

    int x2 = draw_x_off + draw_x_size;
    int y2 = draw_y_off + draw_y_size;
    VITA_STARTUP_TRACE("presentation framebuffer cleared");

#ifdef CHOWDREN_SPECIAL_POINT_FILTER
    float x_scale = draw_x_size / float(VITA_CANVAS_WIDTH);
    float y_scale = draw_y_size / float(VITA_CANVAS_HEIGHT);
    float use_effect = draw_x_size >= VITA_CANVAS_WIDTH &&
                       draw_y_size >= VITA_CANVAS_HEIGHT &&
                       (draw_x_size % VITA_CANVAS_WIDTH != 0 ||
                        draw_y_size % VITA_CANVAS_HEIGHT != 0) &&
                       !disable_resize_shader;
    if (use_effect) {        
        Render::set_effect(Render::PIXELSCALE);
        set_scale_uniform(VITA_CANVAS_WIDTH, VITA_CANVAS_HEIGHT,
                          x_scale, y_scale);
    }
#endif

    Render::disable_blend();
    VITA_STARTUP_TRACE("draw presentation texture");
#ifdef CHOWDREN_USE_D3D
    Render::draw_tex(draw_x_off, draw_y_off, x2, y2, Color(),
                     screen_fbo.get_tex());
#else
	Render::draw_tex(draw_x_off, y2, x2, draw_y_off, Color(),
                     screen_fbo.get_tex());
#endif
    Render::enable_blend();
    VITA_STARTUP_TRACE("presentation texture drawn");

#ifdef CHOWDREN_SPECIAL_POINT_FILTER
    if (use_effect)
        Render::disable_effect();
#endif

#ifdef CHOWDREN_USE_D3D
    render_data.device->EndScene();
    if (FAILED(render_data.device->Present(NULL, NULL, NULL, NULL))) {
        std::cout << "Failed present: " << is_fullscreen << std::endl;
        last_failed = true;
        d3d_reset(window_width, window_height);
    }
#else
    VITA_STARTUP_TRACE("SDL swap buffers");
#if defined(__vita__) && defined(CHOWDREN_VITA_PACKAGED_ASSETS)
    if (!vitaTrophiesPresent()) SDL_GL_SwapWindow(global_window);
#else
    SDL_GL_SwapWindow(global_window);
#endif
    VITA_STARTUP_TRACE("SDL buffers swapped");
#endif
}

void platform_get_size(int * width, int * height)
{
#ifdef CHOWDREN_USE_D3D
    *width = pparams.BackBufferWidth;
    *height = pparams.BackBufferHeight;
#else
    if (global_window) SDL_GL_GetDrawableSize(global_window, width, height);
    else { *width = 0; *height = 0; }
#ifdef __vita__
    if (*width <= 0 || *height <= 0) { *width = 960; *height = 544; }
#endif
#endif
}

void platform_get_screen_size(int * width, int * height)
{
#ifdef __vita__
    *width = 960; *height = 544;
    return;
#endif
    if (!global_window) { *width = WINDOW_WIDTH; *height = WINDOW_HEIGHT; return; }
    int display_index;
    display_index = SDL_GetWindowDisplayIndex(global_window);
    SDL_Rect bounds;
    SDL_GetDisplayBounds(display_index, &bounds);
    *width = bounds.w;
    *height = bounds.h;
}

void platform_set_display_scale(int scale)
{
#ifdef __vita__
    (void)scale; // Scale the logical render target, not the physical display.
    clear_backbuffer = 5;
    return;
#endif
    if (!global_window || scale <= 0) return;
    int nw = WINDOW_WIDTH * scale;
    int nh = WINDOW_HEIGHT * scale;
    int w, h;
    SDL_GetWindowSize(global_window, &w, &h);
    if (w == nw && h == nh)
        return;
    std::cout << "Set display scale: "
        << w << " " << nw << " "
        << h << " " << nh << std::endl;
    SDL_SetWindowSize(global_window, nw, nh);
    SDL_SetWindowPosition(global_window,
                          SDL_WINDOWPOS_CENTERED,
                          SDL_WINDOWPOS_CENTERED);
}

void platform_set_scale_type(int type)
{
    if (type >= BEST_FIT && type <= EXACT_FIT) scale_type = type;
}

bool platform_has_focus()
{
#ifdef __vita__
    return app_active && !has_closed;
#else
    if (!global_window) return false;
    int f = SDL_GetWindowFlags(global_window);
    if ((f & SDL_WINDOW_SHOWN) == 0)
        return false;
    if ((f & SDL_WINDOW_INPUT_FOCUS) == 0)
        return false;
    return true;
#endif
}

void platform_set_focus(bool value)
{
#ifndef __vita__
    if (!global_window) return;
    if (value) SDL_RestoreWindow(global_window);
    else SDL_MinimizeWindow(global_window);
#else
    (void)value; // Application focus is controlled by the Vita shell.
#endif
}

void platform_show_mouse()
{
#ifdef __vita__
    hide_cursor = true;
    SDL_ShowCursor(0);
#else
    hide_cursor = false;
    SDL_ShowCursor(1);
#endif
}

void platform_hide_mouse()
{
    hide_cursor = true;
    SDL_ShowCursor(0);
}

const std::string & platform_get_language()
{
    static const std::string language = []() {
        std::string result = "English";
#ifdef __vita__
        int systemLanguage = SCE_SYSTEM_PARAM_LANG_ENGLISH_US;
        if (sceAppUtilSystemParamGetInt(SCE_SYSTEM_PARAM_ID_LANG, &systemLanguage) >= 0) {
            switch (systemLanguage) {
            case SCE_SYSTEM_PARAM_LANG_FRENCH: return std::string("French");
            case SCE_SYSTEM_PARAM_LANG_GERMAN: return std::string("German");
            case SCE_SYSTEM_PARAM_LANG_ITALIAN: return std::string("Italian");
            case SCE_SYSTEM_PARAM_LANG_SPANISH: return std::string("Spanish");
            case SCE_SYSTEM_PARAM_LANG_POLISH: return std::string("Polish");
            case SCE_SYSTEM_PARAM_LANG_RUSSIAN: return std::string("Russian");
            default: return result;
            }
        }
        return result;
#else
#if SDL_VERSION_ATLEAST(2, 0, 14)
        SDL_Locale *locales = SDL_GetPreferredLocales();
        if (locales && locales[0].language) {
            const std::string code = locales[0].language;
            if (code == "fr") result = "French";
            else if (code == "de") result = "German";
            else if (code == "es") result = "Spanish";
            else if (code == "it") result = "Italian";
            else if (code == "ru") result = "Russian";
            else if (code == "pl") result = "Polish";
        }
        SDL_free(locales);
#endif
        return result;
#endif
    }();
    return language;
}

// filesystem stuff

#include <sys/stat.h>
#include <cerrno>
#if !defined(_WIN32) && !defined(__vita__)
#include <dirent.h>
#endif

enum FileType { NoneFile, RegularFile, Directory };

static FileType get_file_type(const char * filename)
{
    if (filename == NULL) return NoneFile;
    const std::string path = convert_path(filename);
#ifdef __vita__
    SceIoStat info = {};
    if (sceIoGetstat(path.c_str(), &info) < 0) return NoneFile;
    if (SCE_S_ISDIR(info.st_mode)) return Directory;
    return SCE_S_ISREG(info.st_mode) ? RegularFile : NoneFile;
#elif defined(_WIN32)
    DWORD attr = GetFileAttributesA(path.c_str());
    if (attr == INVALID_FILE_ATTRIBUTES) return NoneFile;
    return (attr & FILE_ATTRIBUTE_DIRECTORY) ? Directory : RegularFile;
#else
    struct stat info;
    if (stat(path.c_str(), &info) != 0) return NoneFile;
    if (S_ISDIR(info.st_mode)) return Directory;
    return S_ISREG(info.st_mode) ? RegularFile : NoneFile;
#endif
}

void platform_walk_folder(const std::string & value, FolderCallback & callback)
{
    const std::string path = convert_path(value);
    if (path.empty()) return;
#ifdef __vita__
    SceUID handle = sceIoDopen(path.c_str());
    if (handle < 0) return;
    SceIoDirent entry = {};
    while (sceIoDread(handle, &entry) > 0) {
        if (entry.d_name[0] == '.') continue;
        FilesystemItem item;
        item.name = entry.d_name;
        item.flags = SCE_S_ISREG(entry.d_stat.st_mode) ? FilesystemItem::FILE : 0;
        callback.on_item(item);
    }
    sceIoDclose(handle);
#elif defined(_WIN32)
    WIN32_FIND_DATA entry;
    const std::string pattern = path + (path.back() == '\\' ? "*" : "\\*");
    HANDLE handle = FindFirstFileA(pattern.c_str(), &entry);
    if (handle == INVALID_HANDLE_VALUE) return;
    do {
        if (entry.cFileName[0] == '.') continue;
        FilesystemItem item;
        item.name = entry.cFileName;
        item.flags = (entry.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) ? 0 : FilesystemItem::FILE;
        callback.on_item(item);
    } while (FindNextFileA(handle, &entry));
    FindClose(handle);
#else
    DIR *handle = opendir(path.c_str());
    if (!handle) return;
    while (struct dirent *entry = readdir(handle)) {
        if (entry->d_name[0] == '.') continue;
        const std::string child = path + "/" + entry->d_name;
        FileType type = get_file_type(child.c_str());
        if (type == NoneFile) continue;
        FilesystemItem item;
        item.name = entry->d_name;
        item.flags = type == RegularFile ? FilesystemItem::FILE : 0;
        callback.on_item(item);
    }
    closedir(handle);
#endif
}

size_t platform_get_file_size(const char * filename)
{
    if (filename == NULL) return 0;
    const std::string path = convert_path(filename);
#ifdef __vita__
    SceIoStat info = {};
    if (sceIoGetstat(path.c_str(), &info) < 0 || !SCE_S_ISREG(info.st_mode)) return 0;
    return static_cast<size_t>(info.st_size);
#elif defined(_WIN32)
    WIN32_FILE_ATTRIBUTE_DATA info;
    if (!GetFileAttributesExA(path.c_str(), GetFileExInfoStandard, &info) ||
        (info.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) return 0;
    return static_cast<size_t>((uint64_t(info.nFileSizeHigh) << 32) | info.nFileSizeLow);
#else
    struct stat info;
    if (stat(path.c_str(), &info) != 0 || !S_ISREG(info.st_mode)) return 0;
    return static_cast<size_t>(info.st_size);
#endif
}

bool platform_path_exists(const std::string & value) { return get_file_type(value.c_str()) != NoneFile; }
bool platform_is_directory(const std::string & value) { return get_file_type(value.c_str()) == Directory; }
bool platform_is_file(const std::string & value) { return get_file_type(value.c_str()) == RegularFile; }

static bool create_dirs(const std::string & value)
{
    std::string directory = convert_path(value);
    while (directory.size() > 1 && (directory.back() == '/' || directory.back() == '\\'))
        directory.pop_back();
    if (directory.empty()) return true;
    FileType type = get_file_type(directory.c_str());
    if (type != NoneFile) return type == Directory;
    // A device mount is supplied by the OS, not created by the application.
    if (directory.back() == ':') return false;
    size_t slash = directory.find_last_of("/\\");
    if (slash != std::string::npos && slash > 0) {
        const std::string parent = directory.substr(0, slash);
        if (parent.back() != ':' && !create_dirs(parent)) return false;
    }
#ifdef __vita__
    if (sceIoMkdir(directory.c_str(), 0777) >= 0) return true;
#elif defined(_WIN32)
    if (CreateDirectoryA(directory.c_str(), NULL)) return true;
#else
    if (mkdir(directory.c_str(), S_IRWXU | S_IRWXG | S_IRWXO) == 0) return true;
#endif
    // Another process may have created the directory since the initial check.
    return get_file_type(directory.c_str()) == Directory;
}

void platform_create_directories(const std::string & value)
{
    if (!create_dirs(value))
        std::cerr << "Could not create directory: " << value << std::endl;
}

#ifdef _WIN32
#include <shlobj.h>
#elif defined(__APPLE__)
#include <CoreServices/CoreServices.h>
#include <limits.h>
#elif defined(__linux__)
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#endif

const std::string & platform_get_appdata_dir()
{
    static bool initialized = false;
    static std::string dir;
    if (!initialized) {
#ifdef __vita__
        dir = "ux0:data";
#elif defined(_WIN32)
        TCHAR path[MAX_PATH];
        if (SUCCEEDED(SHGetFolderPath(NULL, CSIDL_APPDATA, NULL, 0, path))) dir = path;
#elif defined(__APPLE__)
        FSRef ref;
        char path[PATH_MAX];
        if (FSFindFolder(kUserDomain, kApplicationSupportFolderType, kCreateFolder, &ref) == noErr &&
            FSRefMakePath(&ref, (UInt8*)path, PATH_MAX)) dir = path;
#elif defined(__linux__)
        struct passwd *pw = getpwuid(getuid());
        if (pw && pw->pw_dir) dir = pw->pw_dir;
#endif
        initialized = true;
    }
    return dir;
}

// joystick

static SDL_HapticEffect rumble_effect;

class JoystickData
{
public:
    SDL_Joystick * joy;
    SDL_GameController * controller;
    int instance;
    SDL_Haptic * haptics;
    bool has_effect, has_rumble;
    int axis_count;
    int last_press;
    int button_count;
    int hat_count;

    JoystickData()
    : joy(NULL), controller(NULL), instance(-1), haptics(NULL),
      has_effect(false), has_rumble(false), axis_count(0), last_press(-1),
      button_count(0), hat_count(0)
    {
    }

    void init(SDL_GameController * c, SDL_Joystick * j, int i)
    {
        controller = c;
        joy = j;
        instance = i;
        axis_count = SDL_JoystickNumAxes(j);
        button_count = SDL_JoystickNumButtons(j);
        hat_count = SDL_JoystickNumHats(j);
        init_rumble();
    }

    void close()
    {
        if (haptics) SDL_HapticClose(haptics);
        if (controller) SDL_GameControllerClose(controller);
        else if (joy) SDL_JoystickClose(joy);
        controller = NULL;
        joy = NULL;
        haptics = NULL;
        has_effect = has_rumble = false;
    }

    void init_rumble()
    {
#ifdef __vita__
        return; // No vibration motors on the handheld.
#endif
        if (SDL_JoystickIsHaptic(joy) != 1)
            return;
        haptics = SDL_HapticOpenFromJoystick(joy);
        if (haptics == NULL)
            return;
        int efx = SDL_HapticEffectSupported(haptics, &rumble_effect);
        if (efx == 1) {
            rumble_effect.leftright.large_magnitude = 0;
            rumble_effect.leftright.small_magnitude = 0;
            SDL_HapticNewEffect(haptics, &rumble_effect);
            has_effect = true;
        } else if (SDL_HapticRumbleSupported(haptics) == 1) {
            SDL_HapticRumbleInit(haptics);
            has_rumble = true;
        }
    }

    float get_axis(int n)
    {
        if (n < 0 || (controller ? n >= SDL_CONTROLLER_AXIS_MAX : n >= axis_count)) return 0.0f;
        Sint16 value = controller ? SDL_GameControllerGetAxis(controller, (SDL_GameControllerAxis)n)
                                 : SDL_JoystickGetAxis(joy, n);
        return value < 0 ? value / 32768.0f : value / 32767.0f;
    }

    bool get_button(int b)
    {
        if (controller == NULL)
            return get_button((SDL_GameControllerButton)b);
        if (b <= SDL_CONTROLLER_BUTTON_INVALID ||
            b >= SDL_CONTROLLER_BUTTON_MAX)
            return false;
        return get_button((SDL_GameControllerButton)b);
    }

    bool get_joy_button(int n)
    {
        return n >= 0 && n < button_count && SDL_JoystickGetButton(joy, n) == 1;
    }

    int get_joy_hat(int n)
    {
        if (n < 0 || n >= hat_count)
            return 0;
        return SDL_JoystickGetHat(joy, n);
    }

    bool get_button(SDL_GameControllerButton b)
    {
        if (controller == NULL) {
            int bb;
            switch (b) {
                case SDL_CONTROLLER_BUTTON_DPAD_UP:
                    return (get_joy_hat(0) & SDL_HAT_UP) != 0;
                case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
                    return (get_joy_hat(0) & SDL_HAT_DOWN) != 0;
                case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
                    return (get_joy_hat(0) & SDL_HAT_LEFT) != 0;
                case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
                    return (get_joy_hat(0) & SDL_HAT_RIGHT) != 0;
                default:
                    bb = (int)b;
            }
            if (bb >= SDL_CONTROLLER_BUTTON_DPAD_UP)
                bb -= 4;
            if (bb < 0 || bb >= button_count)
                return false;
            return SDL_JoystickGetButton(joy, bb) == 1;
        }
        return SDL_GameControllerGetButton(controller, b) == 1;
    }

    void vibrate(float left, float right, int ms)
    {
        if (!has_rumble && !has_effect)
            return;

        if (has_effect) {
            int lm = (int)(65535.0f * left);
            int sm = (int)(65535.0f * right);
            rumble_effect.leftright.large_magnitude = lm;
            rumble_effect.leftright.small_magnitude = sm;
            rumble_effect.leftright.length = ms;
            SDL_HapticUpdateEffect(haptics, 0, &rumble_effect);
            SDL_HapticRunEffect(haptics, 0, 1);
        } else {
            float strength;
            if (left >= right) {
                strength = left;
            } else {
                strength = right;
            }
            SDL_HapticRumblePlay(haptics, strength, ms);
        }
    }
};

static int selected_joy_index = 0;
static JoystickData * selected_joy = NULL;
static vector<JoystickData> joysticks;

#define CHOWDREN_SINGLE_JOYSTICK

JoystickData & get_joy(int n)
{
#ifdef CHOWDREN_SINGLE_JOYSTICK
    return *selected_joy;
#else
    return joysticks[n-1];
#endif
}

JoystickData * get_joy_instance(int instance)
{
    vector<JoystickData>::iterator it;
    for (it = joysticks.begin(); it != joysticks.end(); ++it) {
        JoystickData & j = *it;
        if (j.instance != instance)
            continue;
        return &j;
    }
    return NULL;
}

void add_joystick(int device)
{
    SDL_GameController *c = SDL_IsGameController(device) ? SDL_GameControllerOpen(device) : NULL;
    SDL_Joystick *joy = c ? SDL_GameControllerGetJoystick(c) : SDL_JoystickOpen(device);
    if (!joy) { if (c) SDL_GameControllerClose(c); return; }
    int instance = SDL_JoystickInstanceID(joy);
    if (instance < 0 || get_joy_instance(instance)) {
        if (c) SDL_GameControllerClose(c); else SDL_JoystickClose(joy);
        return;
    }
    int index = joysticks.size();
    joysticks.resize(index + 1);
    joysticks[index].init(c, joy, instance);
    if (selected_joy_index >= int(joysticks.size())) selected_joy_index = 0;
    selected_joy = &joysticks[selected_joy_index];
}

void remove_joystick(int instance)
{
    for (unsigned int i = 0; i < joysticks.size(); ++i) {
        if (joysticks[i].instance != instance) continue;
#ifdef __vita__
        if (int(i) == selected_joy_index) release_vita_controls();
#endif
        joysticks[i].close();
        joysticks.erase(joysticks.begin() + i);
        if (int(i) < selected_joy_index) --selected_joy_index;
        if (selected_joy_index >= int(joysticks.size())) selected_joy_index = 0;
        selected_joy = joysticks.empty() ? NULL : &joysticks[selected_joy_index];
        return;
    }
}

void init_joystick()
{
#ifndef __vita__
    SDL_GameControllerAddMappingsFromFile("gamecontrollerdb.txt");
#endif

    rumble_effect.type = SDL_HAPTIC_LEFTRIGHT;
    rumble_effect.leftright.length = 0;

    for (int i = 0; i < SDL_NumJoysticks(); ++i) {
        add_joystick(i);
    }
}

void update_joystick()
{
}

void on_joystick_button(int instance, int button, bool state)
{
    JoystickData *joy = get_joy_instance(instance);
    if (!joy || joy->controller || !state) return;
    selected_joy_index = int(joy - &joysticks[0]);
    selected_joy = joy;
    if (button >= SDL_CONTROLLER_BUTTON_DPAD_UP) button += 4;
    joy->last_press = button;
}

void on_controller_button(int instance, int button, bool state)
{
    JoystickData *joy = get_joy_instance(instance);
    if (!joy || !state || button < 0 || button >= SDL_CONTROLLER_BUTTON_MAX) return;
    selected_joy_index = int(joy - &joysticks[0]);
    selected_joy = joy;
    joy->last_press = button;
}

int get_joystick_last_press(int n)
{
    if (!is_joystick_attached(n))
        return CHOWDREN_BUTTON_INVALID;
    if (get_joy(n).last_press < 0) return CHOWDREN_BUTTON_INVALID;
    return remap_button(get_joy(n).last_press + 1);
}

extern std::string empty_string;

const std::string & get_joystick_name(int n)
{
    if (!is_joystick_attached(n))
        return empty_string;
    static std::string ret;
    JoystickData & joy = get_joy(n);
    if (joy.controller == NULL)
        ret = SDL_JoystickName(joy.joy);
    else
#if defined(CHOWDREN_FORCE_X360) && !defined(__vita__)
        ret = "X360 Controller";
#else
        ret = SDL_GameControllerName(joy.controller);
#endif
    return ret;
}

const std::string & get_joystick_guid(int n)
{
    if (!is_joystick_attached(n))
        return empty_string;
    static std::string ret;
    ret.resize(64);
    JoystickData & joy = get_joy(n);
    SDL_JoystickGUID guid = SDL_JoystickGetGUID(joy.joy);
    SDL_JoystickGetGUIDString(guid, &ret[0], 64);
    ret.resize(strlen(&ret[0]));
    return ret;
}

bool is_joystick_attached(int n)
{
    n--;
#ifdef CHOWDREN_SINGLE_JOYSTICK
    if (n != 0)
        return false;
    return selected_joy && selected_joy->joy && SDL_JoystickGetAttached(selected_joy->joy);
#else
    return n >= 0 && n < int(joysticks.size());
#endif
}

bool is_joystick_pressed(int n, int button)
{
    if (!is_joystick_attached(n))
        return false;
    button = remap_button(button);
    button--;
    return get_joy(n).get_button(button);
}

bool any_joystick_pressed(int n)
{
    if (!is_joystick_attached(n))
        return false;
    JoystickData & joy = get_joy(n);
    if (joy.controller == NULL) {
        for (int i = 0; i < joy.button_count; i++) {
            if (joy.get_joy_button(i)) {
                return true;
            }
        }
        return false;
    }
    for (unsigned int i = 0; i < SDL_CONTROLLER_BUTTON_MAX; i++) {
        if (joy.get_button(i)) {
            return true;
        }
    }
    return false;
}

bool is_joystick_released(int n, int button)
{
    if (!is_joystick_attached(n))
        return true;
    button = remap_button(button);
    button--;
    return !get_joy(n).get_button(button);
}

void joystick_vibrate(int n, int l, int r, int ms)
{
    if (!is_joystick_attached(n))
        return;
    get_joy(n).vibrate(l / 100.0f, r / 100.0f, ms);
}

float get_joystick_axis_raw(int n, int axis)
{
    if (!is_joystick_attached(n))
        return 0.0f;
    axis--;
    return get_joy(n).get_axis(axis);
}

#ifdef __vita__
static bool vita_keys_down[8] = {};
static int vita_key_codes[8] = {};

static void release_vita_controls()
{
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
    vita_controls_release();
#endif
    for (int i = 0; i < 8; ++i) {
        if (vita_keys_down[i]) manager.on_key(vita_key_codes[i], false);
        vita_keys_down[i] = false;
    }
    if (vita_click_left && !vita_touch_down) manager.on_mouse(SDL_BUTTON_LEFT, false);
    if (vita_click_right) manager.on_mouse(SDL_BUTTON_RIGHT, false);
    vita_click_left = vita_click_right = false;
}

static void update_vita_controls()
{
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
    if (vitaTrophiesBusy()) {
        release_vita_controls();
        return;
    }
#endif
    static Uint64 previous = SDL_GetPerformanceCounter();
    Uint64 now = SDL_GetPerformanceCounter();
    float dt = std::min(0.05, (now - previous) / double(SDL_GetPerformanceFrequency()));
    previous = now;
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
    VitaPadState input;
    if (is_joystick_attached(1)) {
        JoystickData &pad = get_joy(1);
        input.lx = pad.get_axis(SDL_CONTROLLER_AXIS_LEFTX); input.ly = pad.get_axis(SDL_CONTROLLER_AXIS_LEFTY);
        input.rx = pad.get_axis(SDL_CONTROLLER_AXIS_RIGHTX); input.ry = pad.get_axis(SDL_CONTROLLER_AXIS_RIGHTY);
        input.up = pad.get_button(SDL_CONTROLLER_BUTTON_DPAD_UP); input.down = pad.get_button(SDL_CONTROLLER_BUTTON_DPAD_DOWN);
        input.left = pad.get_button(SDL_CONTROLLER_BUTTON_DPAD_LEFT); input.right = pad.get_button(SDL_CONTROLLER_BUTTON_DPAD_RIGHT);
        input.cross = pad.get_button(SDL_CONTROLLER_BUTTON_A); input.circle = pad.get_button(SDL_CONTROLLER_BUTTON_B);
        input.square = pad.get_button(SDL_CONTROLLER_BUTTON_X); input.triangle = pad.get_button(SDL_CONTROLLER_BUTTON_Y);
        input.l = pad.get_button(SDL_CONTROLLER_BUTTON_LEFTSHOULDER); input.r = pad.get_button(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER);
        input.start = pad.get_button(SDL_CONTROLLER_BUTTON_START); input.select = pad.get_button(SDL_CONTROLLER_BUTTON_BACK);
    }
    // Read the handheld's digital directions even when an SDL mapping omits
    // its D-pad. Normal sampling respects system-dialog button interception.
    SceCtrlData handheld = {};
    if (sceCtrlPeekBufferPositive(0, &handheld, 1) > 0) {
        input.up |= (handheld.buttons & SCE_CTRL_UP) != 0;
        input.down |= (handheld.buttons & SCE_CTRL_DOWN) != 0;
        input.left |= (handheld.buttons & SCE_CTRL_LEFT) != 0;
        input.right |= (handheld.buttons & SCE_CTRL_RIGHT) != 0;
        input.select |= (handheld.buttons & SCE_CTRL_SELECT) != 0;
    }
    vita_controls_update(input, dt);
#else
    if (!is_joystick_attached(1)) { release_vita_controls(); return; }
    JoystickData &pad = get_joy(1);
    auto button = [&](SDL_GameControllerButton b) { return pad.get_button(b); };
    auto deadzone = [](float v) { return std::abs(v) < 0.2f ? 0.0f : v; };
    float lx = deadzone(pad.get_axis(SDL_CONTROLLER_AXIS_LEFTX));
    float ly = deadzone(pad.get_axis(SDL_CONTROLLER_AXIS_LEFTY));
    vita_cursor_x = std::max(0.0f, std::min(959.0f, vita_cursor_x + deadzone(pad.get_axis(SDL_CONTROLLER_AXIS_RIGHTX)) * 600.0f * dt));
    vita_cursor_y = std::max(0.0f, std::min(543.0f, vita_cursor_y + deadzone(pad.get_axis(SDL_CONTROLLER_AXIS_RIGHTY)) * 600.0f * dt));
    const int codes[8] = {manager.up, manager.down, manager.left, manager.right,
                         SDLK_ESCAPE, manager.button1, manager.button2, manager.button4};
    const bool states[8] = {
        ly < -0.4f || button(SDL_CONTROLLER_BUTTON_DPAD_UP),
        ly > 0.4f || button(SDL_CONTROLLER_BUTTON_DPAD_DOWN),
        lx < -0.4f || button(SDL_CONTROLLER_BUTTON_DPAD_LEFT),
        lx > 0.4f || button(SDL_CONTROLLER_BUTTON_DPAD_RIGHT),
        button(SDL_CONTROLLER_BUTTON_START), button(SDL_CONTROLLER_BUTTON_LEFTSHOULDER),
        button(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER), button(SDL_CONTROLLER_BUTTON_BACK)};
    for (int i = 0; i < 8; ++i) {
        if (vita_keys_down[i] && vita_key_codes[i] != codes[i]) manager.on_key(vita_key_codes[i], false);
        if (vita_keys_down[i] != states[i] || (states[i] && vita_key_codes[i] != codes[i])) manager.on_key(codes[i], states[i]);
        vita_key_codes[i] = codes[i]; vita_keys_down[i] = states[i];
    }
    bool left = button(SDL_CONTROLLER_BUTTON_A), right = button(SDL_CONTROLLER_BUTTON_B);
    if (left != vita_click_left && !vita_touch_down) manager.on_mouse(SDL_BUTTON_LEFT, left);
    if (right != vita_click_right) manager.on_mouse(SDL_BUTTON_RIGHT, right);
    vita_click_left = left; vita_click_right = right;
    // Triangle opens SDL's text input path for name entry; Square confirms it.
    static bool text_button = false;
    bool text_now = button(SDL_CONTROLLER_BUTTON_Y);
    if (text_now && !text_button) SDL_StartTextInput();
    text_button = text_now;
    if (button(SDL_CONTROLLER_BUTTON_X)) SDL_StopTextInput();
#endif
}
#endif

// url open

void open_url(const std::string & name)
{
#ifdef __vita__
    // Launching a browser can suspend the game; not required for gameplay.
    std::cerr << "Opening external URLs is not supported on Vita: " << name << std::endl;
#else
#if SDL_VERSION_ATLEAST(2, 0, 14)
    if (SDL_OpenURL(name.c_str()) != 0)
        std::cerr << "Could not open URL: " << SDL_GetError() << std::endl;
#else
    std::cerr << "Opening external URLs requires SDL 2.0.14 or later: " << name << std::endl;
#endif
#endif
}

// file

#ifdef CHOWDREN_AUTO_STEAMCLOUD
#include "steam/steam_api.h"
#include "steam/steamtypes.h"
#include <sstream>
#include "../path.h"
#endif

bool platform_remove_file(const std::string & file)
{
#ifdef CHOWDREN_AUTO_STEAMCLOUD
    std::string base = get_path_filename(file);
    const char * base_c = base.c_str();
    if (SteamRemoteStorage()->FileExists(base_c)) {
        return SteamRemoteStorage()->FileDelete(base_c);
    }
#endif
#ifdef __vita__
    return sceIoRemove(convert_path(file).c_str()) >= 0;
#else
    return remove(convert_path(file).c_str()) == 0;
#endif
}

#include "fileio.cpp"
#include "stdiofile.cpp"

// path

std::string convert_path(const std::string & v)
{
    std::string value = v;
    if (value.compare(0, 3, "./\\") == 0)
        value = std::string("./", 2) + value.substr(3);
#ifndef _WIN32
    std::replace(value.begin(), value.end(), '\\', '/');
#else
    std::replace(value.begin(), value.end(), '/', '\\');
#endif
#ifdef __vita__
    value = vita_absolute_path(value);
#endif
    return value;
}

// debug

void platform_print_stats()
{
    std::cout << "SDL video: " << (SDL_GetCurrentVideoDriver() ? SDL_GetCurrentVideoDriver() : "none")
              << ", controllers: " << SDL_NumJoysticks()
              << ", display: " << draw_x_size << "x" << draw_y_size << std::endl;
}



// dummies

void platform_prepare_frame_change()
{
#ifdef __vita__
    release_vita_controls();
    if (vita_touch_down) manager.on_mouse(SDL_BUTTON_LEFT, false);
    vita_touch_down = false;
    vita_pointer_finger = -1;
    SDL_StopTextInput();
    clear_backbuffer = 5;
#endif
}

void platform_set_remote_setting(const std::string & v)
{
    (void)v; // Single display: no remote render target.
}

void platform_set_remote_value(int v)
{
    (void)v; // Single display: getters always report the primary target.
}

void platform_set_lightbar(int r, int g, int b, int ms, int type)
{
#ifdef __vita__
    (void)r; (void)g; (void)b; (void)ms; (void)type;
#else
    std::cout << "Set lightbar: " << r << " " << g << " " << b << " "
        << ms << " " << type << std::endl;
#endif
}

void platform_reset_lightbar()
{
#ifndef __vita__
    std::cout << "Reset lightbar" << std::endl;
#endif
}

int platform_get_remote_value()
{
    return CHOWDREN_TV_TARGET;
}

void platform_set_border(bool v)
{
    (void)v; // Borders are computed by presentation_rect().
}

static std::string remote_string("TV");

const std::string & platform_get_remote_setting()
{
    return remote_string;
}

bool platform_has_error()
{
    return platform_failed;
}

void platform_debug(const std::string & value)
{
#ifdef __vita__
    std::cerr << "Chowdren: " << value << std::endl;
#else
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Debug", value.c_str(), global_window);
#endif
}

void platform_exit()
{
#if defined(__vita__) && defined(CHOWDREN_VITA_PACKAGED_ASSETS)
    vitaTrophyProgress().save();
    vitaTrophiesShutdown();
#endif
#ifdef CHOWDREN_VITA_60FPS
    vita_performance_suspend();
#endif
#ifdef _WIN32
    timeEndPeriod(1);
#endif

#ifdef __vita__
    release_vita_controls();
#endif
    for (unsigned int i = 0; i < joysticks.size(); ++i) joysticks[i].close();
    joysticks.clear();
    selected_joy = NULL;
    if (global_window) {
#ifndef CHOWDREN_USE_D3D
        screen_fbo.reset();
        if (global_context) SDL_GL_DeleteContext(global_context);
        global_context = NULL;
#endif
        SDL_DestroyWindow(global_window);
        global_window = NULL;
    }
    has_closed = true;
    SDL_Quit();
}
