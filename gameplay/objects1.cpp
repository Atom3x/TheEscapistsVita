#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class WindowControl_0 : public WindowControl
{
public:
    WindowControl_0(int x, int y) : WindowControl(x, y, WindowControl_0_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Window Control", 14);
#endif
        create_alterables();
    }
};
FrameObject * create_windowcontrol_0(int x, int y)
{
    return new (WindowControl::pool.create()) WindowControl_0(x, y);
}
class BottomText_1 : public Text
{
public:
    BottomText_1(int x, int y) : Text(x, y, BottomText_1_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("bottom text", 11);
#endif
        flags &= ~SCROLL;
        width = 250;
        height = 65;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("CLICK TO EXIT", 13));
        create_alterables();
    }
};
FrameObject * create_bottomtext_1(int x, int y)
{
    return new (Text::pool.create()) BottomText_1(x, y);
}
class GameSettings : public INI
{
public:
    GameSettings(int x, int y) : INI(x, y, gameSettings_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("settings", 8);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
        create_alterables();
    }
};
FrameObject * create_gameSettings(int x, int y)
{
    return new (INI::pool.create()) GameSettings(x, y);
}
class GameVariables : public AssociateArray
{
public:
    GameVariables(int x, int y) : AssociateArray(x, y, gameVariables_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Named variable object", 21);
#endif
        map = &global_map;
        create_alterables();
    }
};
FrameObject * create_gameVariables(int x, int y)
{
    return new (AssociateArray::pool.create()) GameVariables(x, y);
}
class Counter_4 : public Counter
{
public:
    Counter_4(int x, int y) : Counter(x, y, Counter_4_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Counter", 7);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(157);
            counter_images[1] = get_internal_image(168);
            counter_images[2] = get_internal_image(169);
            counter_images[3] = get_internal_image(171);
            counter_images[4] = get_internal_image(172);
            counter_images[5] = get_internal_image(173);
            counter_images[6] = get_internal_image(314);
            counter_images[7] = get_internal_image(529);
            counter_images[8] = get_internal_image(531);
            counter_images[9] = get_internal_image(532);
            counter_images[10] = get_internal_image(791);
            counter_images[11] = get_internal_image(792);
            counter_images[12] = get_internal_image(794);
            counter_images[13] = get_internal_image(795);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = -999999999;
        maximum = 999999999;
        set(0);
    }
};
FrameObject * create_counter_4(int x, int y)
{
    return new (Counter::pool.create()) Counter_4(x, y);
}
class String_5 : public Text
{
public:
    String_5(int x, int y) : Text(x, y, String_5_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String", 6);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 150;
        height = 52;
        blend_color = Color(255, 173, 91);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("You must have Steam running\r\nto play The Escapists\r\n", 52));
        create_alterables();
    }
};
FrameObject * create_string_5(int x, int y)
{
    return new (Text::pool.create()) String_5(x, y);
}
class Backdrop_6 : public Backdrop
{
public:
    Backdrop_6(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP
        manager.frame->back_instances[BACK_ID_BACKDROP].push_back(this);
#endif
        image = get_internal_image(2399);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_6(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_6(x, y);
}
static Image* images_mouse_9_0_0[1];
static Direction direction_mouse_9_0_0 = {0, 1, 1, 0, -1, images_mouse_9_0_0, 1};
static Animation anim_mouse_9_0 = {&direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, NULL, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0, &direction_mouse_9_0_0};
static Animation * anim_array_mouse_9[1] = {&anim_mouse_9_0};
static Animations anim_mouse_9 = {1, &anim_array_mouse_9[0]};
static bool anim_mouse_9_initialized;
class Mouse_9 : public Active
{
public:
    Mouse_9(int x, int y) : Active(x, y, Mouse_9_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Mouse", 5);
#endif
        this->animations = &anim_mouse_9;
        if (!anim_mouse_9_initialized) {
            anim_mouse_9_initialized = true;
            images_mouse_9_0_0[0] = get_internal_image(18);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_mouse_9(int x, int y)
{
    return new (Active::pool.create()) Mouse_9(x, y);
}
class HAS_11 : public Counter
{
public:
    HAS_11(int x, int y) : Counter(x, y, HAS_11_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("HAS", 3);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
        type = IMAGE_COUNTER;
        static Image * counter_images[14];
        static bool initialized = false;
        if (!initialized) {
            initialized = true;
            counter_images[0] = get_internal_image(157);
            counter_images[1] = get_internal_image(168);
            counter_images[2] = get_internal_image(169);
            counter_images[3] = get_internal_image(171);
            counter_images[4] = get_internal_image(172);
            counter_images[5] = get_internal_image(173);
            counter_images[6] = get_internal_image(314);
            counter_images[7] = get_internal_image(529);
            counter_images[8] = get_internal_image(531);
            counter_images[9] = get_internal_image(532);
            counter_images[10] = get_internal_image(791);
            counter_images[11] = get_internal_image(792);
            counter_images[12] = get_internal_image(794);
            counter_images[13] = get_internal_image(795);
        }
        images = (Image**)&counter_images;
        image_count = 14;
        minimum = -999999999;
        maximum = 999999999;
        set(0);
    }
};
FrameObject * create_has_11(int x, int y)
{
    return new (Counter::pool.create()) HAS_11(x, y);
}
class SteamActivationChecking_14 : public SteamObject
{
public:
    SteamActivationChecking_14(int x, int y) : SteamObject(x, y, SteamActivationChecking_14_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Steam Activation Checking", 25);
#endif
    }
};
FrameObject * create_steamactivationchecking_14(int x, int y)
{
    return new (SteamObject::pool.create()) SteamActivationChecking_14(x, y);
}
class SteamWorks2_15 : public SteamObject
{
public:
    SteamWorks2_15(int x, int y) : SteamObject(x, y, SteamWorks2_15_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SteamWorks 2", 12);
#endif
    }
};
FrameObject * create_steamworks2_15(int x, int y)
{
    return new (SteamObject::pool.create()) SteamWorks2_15(x, y);
}
static Image* images_flageng_17_0_0[1];
static Direction direction_flageng_17_0_0 = {0, 50, 50, 0, 1, images_flageng_17_0_0, 1};
static Animation anim_flageng_17_0 = {&direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, NULL, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0, &direction_flageng_17_0_0};
static Animation * anim_array_flageng_17[1] = {&anim_flageng_17_0};
static Animations anim_flageng_17 = {1, &anim_array_flageng_17[0]};
static bool anim_flageng_17_initialized;
class FlagEng_17 : public Active
{
public:
    FlagEng_17(int x, int y) : Active(x, y, FlagEng_17_type)
    {
        // qualifiers: 8
#ifndef NDEBUG
        name = std::string("flag_eng", 8);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_flageng_17;
        if (!anim_flageng_17_initialized) {
            anim_flageng_17_initialized = true;
            images_flageng_17_0_0[0] = get_internal_image(3897);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_eng_0);
        alterables->strings.set(1, str_eur_1);
    }
};
FrameObject * create_flageng_17(int x, int y)
{
    return new (Active::pool.create()) FlagEng_17(x, y);
}
static Image* images_flagspa_18_0_0[1];
static Direction direction_flagspa_18_0_0 = {0, 50, 50, 0, 1, images_flagspa_18_0_0, 1};
static Animation anim_flagspa_18_0 = {&direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, NULL, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0, &direction_flagspa_18_0_0};
static Animation * anim_array_flagspa_18[1] = {&anim_flagspa_18_0};
static Animations anim_flagspa_18 = {1, &anim_array_flagspa_18[0]};
static bool anim_flagspa_18_initialized;
class FlagSpa_18 : public Active
{
public:
    FlagSpa_18(int x, int y) : Active(x, y, FlagSpa_18_type)
    {
        // qualifiers: 8
#ifndef NDEBUG
        name = std::string("flag - spa", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_flagspa_18;
        if (!anim_flagspa_18_initialized) {
            anim_flagspa_18_initialized = true;
            images_flagspa_18_0_0[0] = get_internal_image(3904);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_spa_2);
        alterables->strings.set(1, str_eur_1);
    }
};
FrameObject * create_flagspa_18(int x, int y)
{
    return new (Active::pool.create()) FlagSpa_18(x, y);
}
static Image* images_flagfre_19_0_0[1];
static Direction direction_flagfre_19_0_0 = {0, 50, 50, 0, 1, images_flagfre_19_0_0, 1};
static Animation anim_flagfre_19_0 = {&direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, NULL, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0, &direction_flagfre_19_0_0};
static Animation * anim_array_flagfre_19[1] = {&anim_flagfre_19_0};
static Animations anim_flagfre_19 = {1, &anim_array_flagfre_19[0]};
static bool anim_flagfre_19_initialized;
class FlagFre_19 : public Active
{
public:
    FlagFre_19(int x, int y) : Active(x, y, FlagFre_19_type)
    {
        // qualifiers: 8
#ifndef NDEBUG
        name = std::string("flag_fre", 8);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_flagfre_19;
        if (!anim_flagfre_19_initialized) {
            anim_flagfre_19_initialized = true;
            images_flagfre_19_0_0[0] = get_internal_image(3905);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_fre_3);
        alterables->strings.set(1, str_eur_1);
    }
};
FrameObject * create_flagfre_19(int x, int y)
{
    return new (Active::pool.create()) FlagFre_19(x, y);
}
static Image* images_flagpol_20_0_0[1];
static Direction direction_flagpol_20_0_0 = {0, 50, 50, 0, 1, images_flagpol_20_0_0, 1};
static Animation anim_flagpol_20_0 = {&direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, NULL, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0, &direction_flagpol_20_0_0};
static Animation * anim_array_flagpol_20[1] = {&anim_flagpol_20_0};
static Animations anim_flagpol_20 = {1, &anim_array_flagpol_20[0]};
static bool anim_flagpol_20_initialized;
class FlagPol_20 : public Active
{
public:
    FlagPol_20(int x, int y) : Active(x, y, FlagPol_20_type)
    {
        // qualifiers: 8
#ifndef NDEBUG
        name = std::string("flag - pol", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_flagpol_20;
        if (!anim_flagpol_20_initialized) {
            anim_flagpol_20_initialized = true;
            images_flagpol_20_0_0[0] = get_internal_image(3906);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_pol_4);
        alterables->strings.set(1, str_pol_4);
    }
};
FrameObject * create_flagpol_20(int x, int y)
{
    return new (Active::pool.create()) FlagPol_20(x, y);
}
static Image* images_flagita_21_0_0[1];
static Direction direction_flagita_21_0_0 = {0, 50, 50, 0, 1, images_flagita_21_0_0, 1};
static Animation anim_flagita_21_0 = {&direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, NULL, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0, &direction_flagita_21_0_0};
static Animation * anim_array_flagita_21[1] = {&anim_flagita_21_0};
static Animations anim_flagita_21 = {1, &anim_array_flagita_21[0]};
static bool anim_flagita_21_initialized;
class FlagIta_21 : public Active
{
public:
    FlagIta_21(int x, int y) : Active(x, y, FlagIta_21_type)
    {
        // qualifiers: 8
#ifndef NDEBUG
        name = std::string("flag - ita", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_flagita_21;
        if (!anim_flagita_21_initialized) {
            anim_flagita_21_initialized = true;
            images_flagita_21_0_0[0] = get_internal_image(3907);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_ita_5);
        alterables->strings.set(1, str_eur_1);
    }
};
FrameObject * create_flagita_21(int x, int y)
{
    return new (Active::pool.create()) FlagIta_21(x, y);
}
static Image* images_flagger_22_0_0[1];
static Direction direction_flagger_22_0_0 = {0, 50, 50, 0, 1, images_flagger_22_0_0, 1};
static Animation anim_flagger_22_0 = {&direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, NULL, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0, &direction_flagger_22_0_0};
static Animation * anim_array_flagger_22[1] = {&anim_flagger_22_0};
static Animations anim_flagger_22 = {1, &anim_array_flagger_22[0]};
static bool anim_flagger_22_initialized;
class FlagGer_22 : public Active
{
public:
    FlagGer_22(int x, int y) : Active(x, y, FlagGer_22_type)
    {
        // qualifiers: 8
#ifndef NDEBUG
        name = std::string("flag - ger", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_flagger_22;
        if (!anim_flagger_22_initialized) {
            anim_flagger_22_initialized = true;
            images_flagger_22_0_0[0] = get_internal_image(3908);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_ger_6);
        alterables->strings.set(1, str_eur_1);
    }
};
FrameObject * create_flagger_22(int x, int y)
{
    return new (Active::pool.create()) FlagGer_22(x, y);
}
static Image* images_flagrus_23_0_0[1];
static Direction direction_flagrus_23_0_0 = {0, 50, 50, 0, 1, images_flagrus_23_0_0, 1};
static Animation anim_flagrus_23_0 = {&direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, NULL, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0, &direction_flagrus_23_0_0};
static Animation * anim_array_flagrus_23[1] = {&anim_flagrus_23_0};
static Animations anim_flagrus_23 = {1, &anim_array_flagrus_23[0]};
static bool anim_flagrus_23_initialized;
class FlagRus_23 : public Active
{
public:
    FlagRus_23(int x, int y) : Active(x, y, FlagRus_23_type)
    {
        // qualifiers: 8
#ifndef NDEBUG
        name = std::string("flag - rus", 10);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_flagrus_23;
        if (!anim_flagrus_23_initialized) {
            anim_flagrus_23_initialized = true;
            images_flagrus_23_0_0[0] = get_internal_image(3909);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_rus_7);
        alterables->strings.set(1, str_rus_7);
    }
};
FrameObject * create_flagrus_23(int x, int y)
{
    return new (Active::pool.create()) FlagRus_23(x, y);
}
static Image* images_active_24_0_0[1];
static Direction direction_active_24_0_0 = {0, 50, 50, 0, -1, images_active_24_0_0, 1};
static Animation anim_active_24_0 = {&direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, NULL, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0, &direction_active_24_0_0};
static Image* images_active_24_1_0[1];
static Direction direction_active_24_1_0 = {0, 50, 50, 0, -1, images_active_24_1_0, 1};
static Animation anim_active_24_1 = {&direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, NULL, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0, &direction_active_24_1_0};
static Image* images_active_24_5_0[1];
static Direction direction_active_24_5_0 = {0, 50, 50, 0, -1, images_active_24_5_0, 1};
static Animation anim_active_24_5 = {&direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, NULL, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0, &direction_active_24_5_0};
static Image* images_active_24_6_0[1];
static Direction direction_active_24_6_0 = {0, 50, 50, 0, -1, images_active_24_6_0, 1};
static Animation anim_active_24_6 = {&direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, NULL, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0, &direction_active_24_6_0};
static Image* images_active_24_9_0[1];
static Direction direction_active_24_9_0 = {0, 50, 50, 0, -1, images_active_24_9_0, 1};
static Animation anim_active_24_9 = {&direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, NULL, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0, &direction_active_24_9_0};
static Animation * anim_array_active_24[10] = {&anim_active_24_0, &anim_active_24_1, NULL, NULL, NULL, &anim_active_24_5, &anim_active_24_6, NULL, NULL, &anim_active_24_9};
static Animations anim_active_24 = {10, &anim_array_active_24[0]};
static bool anim_active_24_initialized;
class Active_24 : public Active
{
public:
    Active_24(int x, int y) : Active(x, y, Active_24_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_24;
        if (!anim_active_24_initialized) {
            anim_active_24_initialized = true;
            images_active_24_0_0[0] = get_internal_image(395);
            images_active_24_1_0[0] = get_internal_image(123);
            images_active_24_5_0[0] = get_internal_image(565);
            images_active_24_6_0[0] = get_internal_image(751);
            images_active_24_9_0[0] = get_internal_image(2812);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_active_24(int x, int y)
{
    return new (Active::pool.create()) Active_24(x, y);
}
class String_25 : public Text
{
public:
    String_25(int x, int y) : Text(x, y, String_25_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String", 6);
#endif
        flags &= ~SCROLL;
        width = 257;
        height = 85;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("QA BUILD", 8));
        create_alterables();
    }
};
FrameObject * create_string_25(int x, int y)
{
    return new (Text::pool.create()) String_25(x, y);
}
class SubstringReplace_27 : public StringReplace
{
public:
    SubstringReplace_27(int x, int y) : StringReplace(x, y, SubstringReplace_27_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Substring Replace", 17);
#endif
    }
};
FrameObject * create_substringreplace_27(int x, int y)
{
    return new (StringReplace::pool.create()) SubstringReplace_27(x, y);
}
class Ini_28 : public INI
{
public:
    Ini_28(int x, int y) : INI(x, y, Ini_28_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Ini", 3);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_ini_28(int x, int y)
{
    return new (INI::pool.create()) Ini_28(x, y);
}
class String3_29 : public Text
{
public:
    String3_29(int x, int y) : Text(x, y, String3_29_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String 3", 8);
#endif
        flags &= ~SCROLL;
        width = 257;
        height = 46;
        blend_color = Color(50, 205, 50);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_BOTTOM;
        add_line(std::string("DEBUG MODE ENABLED\r\n-------------------------\r\nCTRL - Speed time\r\nDEL = skip to evening\r\nfull stop = vent layer\r\ncomma = ground\r\nH - full stats / health", 152));
        create_alterables();
    }
};
FrameObject * create_string3_29(int x, int y)
{
    return new (Text::pool.create()) String3_29(x, y);
}
class String4_30 : public Text
{
public:
    String4_30(int x, int y) : Text(x, y, String4_30_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String 4", 8);
#endif
        flags &= ~SCROLL;
        width = 257;
        height = 34;
        blend_color = Color(255, 255, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_BOTTOM;
        add_line(std::string("PRESS i KEY NOW TO ENABLE ITALIAN", 33));
        create_alterables();
    }
};
FrameObject * create_string4_30(int x, int y)
{
    return new (Text::pool.create()) String4_30(x, y);
}
static Image* images_mouse_31_0_0[1];
static Direction direction_mouse_31_0_0 = {0, 1, 1, 0, -1, images_mouse_31_0_0, 1};
static Animation anim_mouse_31_0 = {&direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, NULL, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0, &direction_mouse_31_0_0};
static Image* images_mouse_31_2_0[1];
static Direction direction_mouse_31_2_0 = {0, 50, 50, 0, -1, images_mouse_31_2_0, 1};
static Animation anim_mouse_31_2 = {&direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, NULL, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0, &direction_mouse_31_2_0};
static Animation * anim_array_mouse_31[3] = {&anim_mouse_31_0, NULL, &anim_mouse_31_2};
static Animations anim_mouse_31 = {3, &anim_array_mouse_31[0]};
static bool anim_mouse_31_initialized;
class Mouse_31 : public Active
{
public:
    Mouse_31(int x, int y) : Active(x, y, Mouse_31_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Mouse", 5);
#endif
        this->animations = &anim_mouse_31;
        if (!anim_mouse_31_initialized) {
            anim_mouse_31_initialized = true;
            images_mouse_31_0_0[0] = get_internal_image(18);
            images_mouse_31_2_0[0] = get_internal_image(1519);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_mouse_31(int x, int y)
{
    return new (Active::pool.create()) Mouse_31(x, y);
}
class VersionText : public Text
{
public:
    VersionText(int x, int y) : Text(x, y, versionText_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("version", 7);
#endif
        flags &= ~SCROLL;
        width = 284;
        height = 29;
        blend_color = Color(38, 63, 106);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("alpha v0.6b", 11));
        blend_color.a = 205;
        create_alterables();
    }
};
FrameObject * create_versionText(int x, int y)
{
    return new (Text::pool.create()) VersionText(x, y);
}
static Image* images_options_33_0_16[1];
static Direction direction_options_33_0_16 = {16, 50, 50, 0, -1, images_options_33_0_16, 1};
static Animation anim_options_33_0 = {NULL, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16, &direction_options_33_0_16};
static Image* images_options_33_5_0[1];
static Direction direction_options_33_5_0 = {0, 50, 50, 0, -1, images_options_33_5_0, 1};
static Image* images_options_33_5_16[1];
static Direction direction_options_33_5_16 = {16, 50, 50, 0, 1, images_options_33_5_16, 1};
static Animation anim_options_33_5 = {&direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0, NULL, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, &direction_options_33_5_16, NULL, &direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0, &direction_options_33_5_0};
static Animation * anim_array_options_33[6] = {&anim_options_33_0, NULL, NULL, NULL, NULL, &anim_options_33_5};
static Animations anim_options_33 = {6, &anim_array_options_33[0]};
static bool anim_options_33_initialized;
class Options_33 : public Active
{
public:
    Options_33(int x, int y) : Active(x, y, Options_33_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("options", 7);
#endif
        this->animations = &anim_options_33;
        if (!anim_options_33_initialized) {
            anim_options_33_initialized = true;
            images_options_33_0_16[0] = get_internal_image(1018);
            images_options_33_5_0[0] = get_internal_image(1026);
            images_options_33_5_16[0] = get_internal_image(1025);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_options_33(int x, int y)
{
    return new (Active::pool.create()) Options_33(x, y);
}
class String3_34 : public Text
{
public:
    String3_34(int x, int y) : Text(x, y, String3_34_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String 3", 8);
#endif
        flags &= ~SCROLL;
        width = 53;
        height = 10;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Small Fonts", 11);
        font = get_font(7, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("Continue", 8));
        create_alterables();
    }
};
FrameObject * create_string3_34(int x, int y)
{
    return new (Text::pool.create()) String3_34(x, y);
}
static Image* images_interfaceButtons_0_0[1];
static Direction direction_interfaceButtons_0_0 = {0, 50, 50, 0, -1, images_interfaceButtons_0_0, 1};
static Image* images_interfaceButtons_0_16[1];
static Direction direction_interfaceButtons_0_16 = {16, 50, 50, 0, -1, images_interfaceButtons_0_16, 1};
static Animation anim_interfaceButtons_0 = {&direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, NULL, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, &direction_interfaceButtons_0_16, NULL, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0, &direction_interfaceButtons_0_0};
static Animation * anim_array_interfaceButtons[1] = {&anim_interfaceButtons_0};
static Animations anim_interfaceButtons = {1, &anim_array_interfaceButtons[0]};
static bool anim_interfaceButtons_initialized;
class InterfaceButtons : public Active
{
public:
    InterfaceButtons(int x, int y) : Active(x, y, interfaceButtons_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 5", 8);
#endif
        this->animations = &anim_interfaceButtons;
        if (!anim_interfaceButtons_initialized) {
            anim_interfaceButtons_initialized = true;
            images_interfaceButtons_0_0[0] = get_internal_image(286);
            images_interfaceButtons_0_16[0] = get_internal_image(981);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_interfaceButtons(int x, int y)
{
    return new (Active::pool.create()) InterfaceButtons(x, y);
}
class LayerObject_37 : public LayerObject
{
public:
    LayerObject_37(int x, int y) : LayerObject(x, y, LayerObject_37_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Layer object", 12);
#endif
    }
};
FrameObject * create_layerobject_37(int x, int y)
{
    return new (LayerObject::pool.create()) LayerObject_37(x, y);
}
class Backdrop2_38 : public Backdrop
{
public:
    Backdrop2_38(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 2", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_2
        manager.frame->back_instances[BACK_ID_BACKDROP_2].push_back(this);
#endif
        image = get_internal_image(1508);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop2_38(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop2_38(x, y);
}
class QuickBackdrop_39 : public QuickBackdrop
{
public:
    QuickBackdrop_39(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
        width = 320;
        height = 240;
        color = Color(0, 0, 0);
        gradient_type = NONE_GRADIENT;
        outline = 0;
        blend_color = Color(0, 0, 0, 205);
    }
};
FrameObject * create_quickbackdrop_39(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_39(x, y);
}
class Slot1_40 : public Text
{
public:
    Slot1_40(int x, int y) : Text(x, y, Slot1_40_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("slot1", 5);
#endif
        flags &= ~SCROLL;
        width = 162;
        height = 25;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_VCENTER;
        add_line(std::string("1. empty", 8));
        blend_color.a = 254;
        create_alterables();
    }
};
FrameObject * create_slot1_40(int x, int y)
{
    return new (Text::pool.create()) Slot1_40(x, y);
}
static Image* images_active6_41_0_0[1];
static Direction direction_active6_41_0_0 = {0, 50, 50, 0, -1, images_active6_41_0_0, 1};
static Image* images_active6_41_0_16[1];
static Direction direction_active6_41_0_16 = {16, 50, 50, 0, -1, images_active6_41_0_16, 1};
static Animation anim_active6_41_0 = {&direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0, NULL, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, &direction_active6_41_0_16, NULL, &direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0, &direction_active6_41_0_0};
static Animation * anim_array_active6_41[1] = {&anim_active6_41_0};
static Animations anim_active6_41 = {1, &anim_array_active6_41[0]};
static bool anim_active6_41_initialized;
class Active6_41 : public Active
{
public:
    Active6_41(int x, int y) : Active(x, y, Active6_41_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 6", 8);
#endif
        this->animations = &anim_active6_41;
        if (!anim_active6_41_initialized) {
            anim_active6_41_initialized = true;
            images_active6_41_0_0[0] = get_internal_image(979);
            images_active6_41_0_16[0] = get_internal_image(976);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active6_41(int x, int y)
{
    return new (Active::pool.create()) Active6_41(x, y);
}
class CopyrightText : public Text
{
public:
    CopyrightText(int x, int y) : Text(x, y, copyrightText_type)
    {
#ifndef NDEBUG
        name = "Copyright text";
#endif
        flags &= ~SCROLL;
        width = 320;
        height = 22;
        blend_color = Color(79, 96, 128, 95);
        bold = false;
        italic = false;
        font_name = "Escapists";
        font = get_font(7, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(u8"©Mouldy Toof Studios / Team17 Digital Ltd\nPS Vita port made by: github.com/Atom3x");
        create_alterables();
    }
};
FrameObject * create_copyrightText(int x, int y)
{
    return new (Text::pool.create()) CopyrightText(x, y);
}
class Backdrop5_43 : public Backdrop
{
public:
    Backdrop5_43(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 5", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_5
        manager.frame->back_instances[BACK_ID_BACKDROP_5].push_back(this);
#endif
        image = get_internal_image(1562);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 185);
        set_shader(Render::DISPLAY);
        set_shader_parameter(std::string("fPeriods", 8), 1000.0);
        set_shader_parameter(std::string("fOffset", 7), 0.0);
        set_shader_parameter(std::string("fAmplitude", 10), 0.00999999977648);
    }
};
FrameObject * create_backdrop5_43(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop5_43(x, y);
}
static Image* images_active_44_0_0[1];
static Direction direction_active_44_0_0 = {0, 50, 50, 0, 1, images_active_44_0_0, 1};
static Animation anim_active_44_0 = {&direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, NULL, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0, &direction_active_44_0_0};
static Animation * anim_array_active_44[1] = {&anim_active_44_0};
static Animations anim_active_44 = {1, &anim_array_active_44[0]};
static bool anim_active_44_initialized;
class Active_44 : public Active
{
public:
    Active_44(int x, int y) : Active(x, y, Active_44_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_active_44;
        if (!anim_active_44_initialized) {
            anim_active_44_initialized = true;
            images_active_44_0_0[0] = get_internal_image(61);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_active_44(int x, int y)
{
    return new (Active::pool.create()) Active_44(x, y);
}
class Lboards_45 : public Text
{
public:
    Lboards_45(int x, int y) : Text(x, y, Lboards_45_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("lboards", 7);
#endif
        flags &= ~SCROLL;
        width = 85;
        height = 10;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("Leaderboards", 12));
        create_alterables();
    }
};
FrameObject * create_lboards_45(int x, int y)
{
    return new (Text::pool.create()) Lboards_45(x, y);
}
class Settings_46 : public Text
{
public:
    Settings_46(int x, int y) : Text(x, y, Settings_46_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("settings", 8);
#endif
        flags &= ~SCROLL;
        width = 74;
        height = 12;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("Settings", 8));
        create_alterables();
    }
};
FrameObject * create_settings_46(int x, int y)
{
    return new (Text::pool.create()) Settings_46(x, y);
}
class Play_47 : public Text
{
public:
    Play_47(int x, int y) : Text(x, y, Play_47_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("play", 4);
#endif
        flags &= ~SCROLL;
        width = 73;
        height = 13;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("Play Game", 9));
        create_alterables();
    }
};
FrameObject * create_play_47(int x, int y)
{
    return new (Text::pool.create()) Play_47(x, y);
}
static Image* images_editor_48_0_0[1];
static Direction direction_editor_48_0_0 = {0, 50, 50, 0, 1, images_editor_48_0_0, 1};
static Animation anim_editor_48_0 = {&direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, NULL, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0, &direction_editor_48_0_0};
static Animation * anim_array_editor_48[1] = {&anim_editor_48_0};
static Animations anim_editor_48 = {1, &anim_array_editor_48[0]};
static bool anim_editor_48_initialized;
class Editor_48 : public Active
{
public:
    Editor_48(int x, int y) : Active(x, y, Editor_48_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Editor", 6);
#endif
        this->animations = &anim_editor_48;
        if (!anim_editor_48_initialized) {
            anim_editor_48_initialized = true;
            images_editor_48_0_0[0] = get_internal_image(1035);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 135);
        create_alterables();
    }
};
FrameObject * create_editor_48(int x, int y)
{
    return new (Active::pool.create()) Editor_48(x, y);
}
static Image* images_active7_50_0_0[1];
static Direction direction_active7_50_0_0 = {0, 50, 50, 0, 1, images_active7_50_0_0, 1};
static Animation anim_active7_50_0 = {&direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, NULL, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0, &direction_active7_50_0_0};
static Animation * anim_array_active7_50[1] = {&anim_active7_50_0};
static Animations anim_active7_50 = {1, &anim_array_active7_50[0]};
static bool anim_active7_50_initialized;
class Active7_50 : public Active
{
public:
    Active7_50(int x, int y) : Active(x, y, Active7_50_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 7", 8);
#endif
        this->animations = &anim_active7_50;
        if (!anim_active7_50_initialized) {
            anim_active7_50_initialized = true;
            images_active7_50_0_0[0] = get_internal_image(1047);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 135);
        create_alterables();
    }
};
FrameObject * create_active7_50(int x, int y)
{
    return new (Active::pool.create()) Active7_50(x, y);
}
static Image* images_menuCloseButton_0_0[1];
static Direction direction_menuCloseButton_0_0 = {0, 50, 50, 0, 1, images_menuCloseButton_0_0, 1};
static Animation anim_menuCloseButton_0 = {&direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, NULL, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0, &direction_menuCloseButton_0_0};
static Animation * anim_array_menuCloseButton[1] = {&anim_menuCloseButton_0};
static Animations anim_menuCloseButton = {1, &anim_array_menuCloseButton[0]};
static bool anim_menuCloseButton_initialized;
class MenuCloseButton : public Active
{
public:
    MenuCloseButton(int x, int y) : Active(x, y, menuCloseButton_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 8", 8);
#endif
        this->animations = &anim_menuCloseButton;
        if (!anim_menuCloseButton_initialized) {
            anim_menuCloseButton_initialized = true;
            images_menuCloseButton_0_0[0] = get_internal_image(52);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 195);
        create_alterables();
        set_visible(false);
    }
};
FrameObject * create_menuCloseButton(int x, int y)
{
    return new (Active::pool.create()) MenuCloseButton(x, y);
}
class FileHeader_52 : public Text
{
public:
    FileHeader_52(int x, int y) : Text(x, y, FileHeader_52_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("file_header", 11);
#endif
        flags &= ~SCROLL;
        width = 191;
        height = 20;
        blend_color = Color(255, 128, 0);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("SELECT A FILE", 13));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_fileheader_52(int x, int y)
{
    return new (Text::pool.create()) FileHeader_52(x, y);
}
class Slot2_53 : public Text
{
public:
    Slot2_53(int x, int y) : Text(x, y, Slot2_53_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("slot2", 5);
#endif
        flags &= ~SCROLL;
        width = 162;
        height = 25;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_VCENTER;
        add_line(std::string("2. empty", 8));
        create_alterables();
    }
};
FrameObject * create_slot2_53(int x, int y)
{
    return new (Text::pool.create()) Slot2_53(x, y);
}
class Slot3_54 : public Text
{
public:
    Slot3_54(int x, int y) : Text(x, y, Slot3_54_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("slot 3", 6);
#endif
        flags &= ~SCROLL;
        width = 162;
        height = 25;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_VCENTER;
        add_line(std::string("3. empty", 8));
        create_alterables();
    }
};
FrameObject * create_slot3_54(int x, int y)
{
    return new (Text::pool.create()) Slot3_54(x, y);
}
static Image* images_slot1_55_0_0[1];
static Direction direction_slot1_55_0_0 = {0, 50, 50, 0, -1, images_slot1_55_0_0, 1};
static Image* images_slot1_55_0_16[1];
static Direction direction_slot1_55_0_16 = {16, 20, 20, 0, -1, images_slot1_55_0_16, 1};
static Image* images_slot1_55_0_24[2];
static Direction direction_slot1_55_0_24 = {24, 25, 25, 0, -1, images_slot1_55_0_24, 2};
static Animation anim_slot1_55_0 = {&direction_slot1_55_0_0, &direction_slot1_55_0_0, &direction_slot1_55_0_0, &direction_slot1_55_0_0, &direction_slot1_55_0_0, &direction_slot1_55_0_0, &direction_slot1_55_0_0, &direction_slot1_55_0_0, NULL, &direction_slot1_55_0_16, &direction_slot1_55_0_16, &direction_slot1_55_0_16, &direction_slot1_55_0_16, &direction_slot1_55_0_16, &direction_slot1_55_0_16, &direction_slot1_55_0_16, &direction_slot1_55_0_16, &direction_slot1_55_0_16, &direction_slot1_55_0_16, &direction_slot1_55_0_16, NULL, &direction_slot1_55_0_24, &direction_slot1_55_0_24, &direction_slot1_55_0_24, &direction_slot1_55_0_24, &direction_slot1_55_0_24, &direction_slot1_55_0_24, &direction_slot1_55_0_24, NULL, &direction_slot1_55_0_0, &direction_slot1_55_0_0, &direction_slot1_55_0_0};
static Animation * anim_array_slot1_55[1] = {&anim_slot1_55_0};
static Animations anim_slot1_55 = {1, &anim_array_slot1_55[0]};
static bool anim_slot1_55_initialized;
class Slot1_55 : public Active
{
public:
    Slot1_55(int x, int y) : Active(x, y, Slot1_55_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Slot1", 5);
#endif
        this->animations = &anim_slot1_55;
        if (!anim_slot1_55_initialized) {
            anim_slot1_55_initialized = true;
            images_slot1_55_0_0[0] = get_internal_image(1512);
            images_slot1_55_0_16[0] = get_internal_image(1420);
            images_slot1_55_0_24[0] = get_internal_image(1518);
            images_slot1_55_0_24[1] = get_internal_image(1509);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_slot1_55(int x, int y)
{
    return new (Active::pool.create()) Slot1_55(x, y);
}
static Image* images_slot2_56_0_0[1];
static Direction direction_slot2_56_0_0 = {0, 50, 50, 0, -1, images_slot2_56_0_0, 1};
static Image* images_slot2_56_0_16[1];
static Direction direction_slot2_56_0_16 = {16, 50, 50, 0, -1, images_slot2_56_0_16, 1};
static Image* images_slot2_56_0_24[2];
static Direction direction_slot2_56_0_24 = {24, 25, 25, 0, -1, images_slot2_56_0_24, 2};
static Animation anim_slot2_56_0 = {&direction_slot2_56_0_0, &direction_slot2_56_0_0, &direction_slot2_56_0_0, &direction_slot2_56_0_0, &direction_slot2_56_0_0, &direction_slot2_56_0_0, &direction_slot2_56_0_0, &direction_slot2_56_0_0, NULL, &direction_slot2_56_0_16, &direction_slot2_56_0_16, &direction_slot2_56_0_16, &direction_slot2_56_0_16, &direction_slot2_56_0_16, &direction_slot2_56_0_16, &direction_slot2_56_0_16, &direction_slot2_56_0_16, &direction_slot2_56_0_16, &direction_slot2_56_0_16, &direction_slot2_56_0_16, NULL, &direction_slot2_56_0_24, &direction_slot2_56_0_24, &direction_slot2_56_0_24, &direction_slot2_56_0_24, &direction_slot2_56_0_24, &direction_slot2_56_0_24, &direction_slot2_56_0_24, NULL, &direction_slot2_56_0_0, &direction_slot2_56_0_0, &direction_slot2_56_0_0};
static Animation * anim_array_slot2_56[1] = {&anim_slot2_56_0};
static Animations anim_slot2_56 = {1, &anim_array_slot2_56[0]};
static bool anim_slot2_56_initialized;
class Slot2_56 : public Active
{
public:
    Slot2_56(int x, int y) : Active(x, y, Slot2_56_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Slot2", 5);
#endif
        this->animations = &anim_slot2_56;
        if (!anim_slot2_56_initialized) {
            anim_slot2_56_initialized = true;
            images_slot2_56_0_0[0] = get_internal_image(1512);
            images_slot2_56_0_16[0] = get_internal_image(1420);
            images_slot2_56_0_24[0] = get_internal_image(1518);
            images_slot2_56_0_24[1] = get_internal_image(1509);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(0, 2);
    }
};
FrameObject * create_slot2_56(int x, int y)
{
    return new (Active::pool.create()) Slot2_56(x, y);
}
static Image* images_slot3_57_0_0[1];
static Direction direction_slot3_57_0_0 = {0, 50, 50, 0, -1, images_slot3_57_0_0, 1};
static Image* images_slot3_57_0_16[1];
static Direction direction_slot3_57_0_16 = {16, 50, 50, 0, -1, images_slot3_57_0_16, 1};
static Image* images_slot3_57_0_24[2];
static Direction direction_slot3_57_0_24 = {24, 25, 25, 0, -1, images_slot3_57_0_24, 2};
static Animation anim_slot3_57_0 = {&direction_slot3_57_0_0, &direction_slot3_57_0_0, &direction_slot3_57_0_0, &direction_slot3_57_0_0, &direction_slot3_57_0_0, &direction_slot3_57_0_0, &direction_slot3_57_0_0, &direction_slot3_57_0_0, NULL, &direction_slot3_57_0_16, &direction_slot3_57_0_16, &direction_slot3_57_0_16, &direction_slot3_57_0_16, &direction_slot3_57_0_16, &direction_slot3_57_0_16, &direction_slot3_57_0_16, &direction_slot3_57_0_16, &direction_slot3_57_0_16, &direction_slot3_57_0_16, &direction_slot3_57_0_16, NULL, &direction_slot3_57_0_24, &direction_slot3_57_0_24, &direction_slot3_57_0_24, &direction_slot3_57_0_24, &direction_slot3_57_0_24, &direction_slot3_57_0_24, &direction_slot3_57_0_24, NULL, &direction_slot3_57_0_0, &direction_slot3_57_0_0, &direction_slot3_57_0_0};
static Animation * anim_array_slot3_57[1] = {&anim_slot3_57_0};
static Animations anim_slot3_57 = {1, &anim_array_slot3_57[0]};
static bool anim_slot3_57_initialized;
class Slot3_57 : public Active
{
public:
    Slot3_57(int x, int y) : Active(x, y, Slot3_57_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Slot3", 5);
#endif
        this->animations = &anim_slot3_57;
        if (!anim_slot3_57_initialized) {
            anim_slot3_57_initialized = true;
            images_slot3_57_0_0[0] = get_internal_image(1512);
            images_slot3_57_0_16[0] = get_internal_image(1420);
            images_slot3_57_0_24[0] = get_internal_image(1518);
            images_slot3_57_0_24[1] = get_internal_image(1509);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_slot3_57(int x, int y)
{
    return new (Active::pool.create()) Slot3_57(x, y);
}
class IniV15Object_58 : public INI
{
public:
    IniV15Object_58(int x, int y) : INI(x, y, IniV15Object_58_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Ini++ v1.5 Object", 17);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
        create_alterables();
    }
};
FrameObject * create_iniv15object_58(int x, int y)
{
    return new (INI::pool.create()) IniV15Object_58(x, y);
}
static Image* images_erase_60_5_0[1];
static Direction direction_erase_60_5_0 = {0, 50, 50, 0, -1, images_erase_60_5_0, 1};
static Image* images_erase_60_5_16[1];
static Direction direction_erase_60_5_16 = {16, 50, 50, 0, 1, images_erase_60_5_16, 1};
static Animation anim_erase_60_5 = {&direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0, NULL, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, &direction_erase_60_5_16, NULL, &direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0, &direction_erase_60_5_0};
static Animation * anim_array_erase_60[6] = {NULL, NULL, NULL, NULL, NULL, &anim_erase_60_5};
static Animations anim_erase_60 = {6, &anim_array_erase_60[0]};
static bool anim_erase_60_initialized;
class Erase_60 : public Active
{
public:
    Erase_60(int x, int y) : Active(x, y, Erase_60_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("erase", 5);
#endif
        this->animations = &anim_erase_60;
        if (!anim_erase_60_initialized) {
            anim_erase_60_initialized = true;
            images_erase_60_5_0[0] = get_internal_image(1522);
            images_erase_60_5_16[0] = get_internal_image(1521);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_erase_60(int x, int y)
{
    return new (Active::pool.create()) Erase_60(x, y);
}
static Image* images_back_61_5_0[1];
static Direction direction_back_61_5_0 = {0, 50, 50, 0, -1, images_back_61_5_0, 1};
static Image* images_back_61_5_16[1];
static Direction direction_back_61_5_16 = {16, 50, 50, 0, 1, images_back_61_5_16, 1};
static Animation anim_back_61_5 = {&direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0, NULL, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, &direction_back_61_5_16, NULL, &direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0, &direction_back_61_5_0};
static Animation * anim_array_back_61[6] = {NULL, NULL, NULL, NULL, NULL, &anim_back_61_5};
static Animations anim_back_61 = {6, &anim_array_back_61[0]};
static bool anim_back_61_initialized;
class Back_61 : public Active
{
public:
    Back_61(int x, int y) : Active(x, y, Back_61_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("back", 4);
#endif
        this->animations = &anim_back_61;
        if (!anim_back_61_initialized) {
            anim_back_61_initialized = true;
            images_back_61_5_0[0] = get_internal_image(1522);
            images_back_61_5_16[0] = get_internal_image(1521);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_back_61(int x, int y)
{
    return new (Active::pool.create()) Back_61(x, y);
}
class Erase2_62 : public Text
{
public:
    Erase2_62(int x, int y) : Text(x, y, Erase2_62_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("erase 2", 7);
#endif
        flags &= ~SCROLL;
        width = 53;
        height = 10;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("erase", 5));
        create_alterables();
    }
};
FrameObject * create_erase2_62(int x, int y)
{
    return new (Text::pool.create()) Erase2_62(x, y);
}
static Image* images_active3_63_1_0[1];
static Direction direction_active3_63_1_0 = {0, 5, 5, 0, -1, images_active3_63_1_0, 1};
static Image* images_active3_63_1_1[1];
static Direction direction_active3_63_1_1 = {1, 5, 5, 0, -1, images_active3_63_1_1, 1};
static Image* images_active3_63_1_2[1];
static Direction direction_active3_63_1_2 = {2, 5, 5, 0, -1, images_active3_63_1_2, 1};
static Image* images_active3_63_1_3[1];
static Direction direction_active3_63_1_3 = {3, 5, 5, 0, -1, images_active3_63_1_3, 1};
static Image* images_active3_63_1_4[1];
static Direction direction_active3_63_1_4 = {4, 5, 5, 0, -1, images_active3_63_1_4, 1};
static Image* images_active3_63_1_5[1];
static Direction direction_active3_63_1_5 = {5, 5, 5, 0, -1, images_active3_63_1_5, 1};
static Image* images_active3_63_1_6[1];
static Direction direction_active3_63_1_6 = {6, 5, 5, 0, -1, images_active3_63_1_6, 1};
static Image* images_active3_63_1_7[1];
static Direction direction_active3_63_1_7 = {7, 5, 5, 0, -1, images_active3_63_1_7, 1};
static Image* images_active3_63_1_8[1];
static Direction direction_active3_63_1_8 = {8, 5, 5, 0, -1, images_active3_63_1_8, 1};
static Image* images_active3_63_1_9[1];
static Direction direction_active3_63_1_9 = {9, 50, 50, 0, -1, images_active3_63_1_9, 1};
static Image* images_active3_63_1_10[1];
static Direction direction_active3_63_1_10 = {10, 50, 50, 0, -1, images_active3_63_1_10, 1};
static Image* images_active3_63_1_11[1];
static Direction direction_active3_63_1_11 = {11, 50, 50, 0, -1, images_active3_63_1_11, 1};
static Animation anim_active3_63_1 = {&direction_active3_63_1_0, &direction_active3_63_1_1, &direction_active3_63_1_2, &direction_active3_63_1_3, &direction_active3_63_1_4, &direction_active3_63_1_5, &direction_active3_63_1_6, &direction_active3_63_1_7, &direction_active3_63_1_8, &direction_active3_63_1_9, &direction_active3_63_1_10, &direction_active3_63_1_11, &direction_active3_63_1_11, &direction_active3_63_1_11, &direction_active3_63_1_11, &direction_active3_63_1_11, &direction_active3_63_1_11, &direction_active3_63_1_11, &direction_active3_63_1_11, &direction_active3_63_1_11, &direction_active3_63_1_11, &direction_active3_63_1_11, &direction_active3_63_1_0, &direction_active3_63_1_0, &direction_active3_63_1_0, &direction_active3_63_1_0, &direction_active3_63_1_0, &direction_active3_63_1_0, &direction_active3_63_1_0, &direction_active3_63_1_0, &direction_active3_63_1_0, &direction_active3_63_1_0};
static Animation * anim_array_active3_63[2] = {NULL, &anim_active3_63_1};
static Animations anim_active3_63 = {2, &anim_array_active3_63[0]};
static bool anim_active3_63_initialized;
class Active3_63 : public Active
{
public:
    Active3_63(int x, int y) : Active(x, y, Active3_63_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 3", 8);
#endif
        this->animations = &anim_active3_63;
        if (!anim_active3_63_initialized) {
            anim_active3_63_initialized = true;
            images_active3_63_1_0[0] = get_internal_image(1529);
            images_active3_63_1_1[0] = get_internal_image(1527);
            images_active3_63_1_2[0] = get_internal_image(1526);
            images_active3_63_1_3[0] = get_internal_image(1523);
            images_active3_63_1_4[0] = get_internal_image(1525);
            images_active3_63_1_5[0] = get_internal_image(1517);
            images_active3_63_1_6[0] = get_internal_image(1515);
            images_active3_63_1_7[0] = get_internal_image(1520);
            images_active3_63_1_8[0] = get_internal_image(1528);
            images_active3_63_1_9[0] = get_internal_image(2813);
            images_active3_63_1_10[0] = get_internal_image(3236);
            images_active3_63_1_11[0] = get_internal_image(3631);
        }
        active_flags |= TRANSPARENT;
        animation = WALKING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active3_63(int x, int y)
{
    return new (Active::pool.create()) Active3_63(x, y);
}
class Backdrop6_64 : public Backdrop
{
public:
    Backdrop6_64(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 6", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_6
        manager.frame->back_instances[BACK_ID_BACKDROP_6].push_back(this);
#endif
        image = get_internal_image(0);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop6_64(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop6_64(x, y);
}
class Slot4_65 : public Text
{
public:
    Slot4_65(int x, int y) : Text(x, y, Slot4_65_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("slot 4", 6);
#endif
        flags &= ~SCROLL;
        width = 196;
        height = 25;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("Press [Y] to confirm or [ESC] to cancel", 39));
        create_alterables();
    }
};
FrameObject * create_slot4_65(int x, int y)
{
    return new (Text::pool.create()) Slot4_65(x, y);
}
class EraseHeader_66 : public Text
{
public:
    EraseHeader_66(int x, int y) : Text(x, y, EraseHeader_66_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("erase header", 12);
#endif
        flags &= ~SCROLL;
        width = 191;
        height = 20;
        blend_color = Color(255, 128, 0);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("REALLY ERASE\?", 13));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_eraseheader_66(int x, int y)
{
    return new (Text::pool.create()) EraseHeader_66(x, y);
}
class Lboards3_67 : public Text
{
public:
    Lboards3_67(int x, int y) : Text(x, y, Lboards3_67_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("lboards 3", 9);
#endif
        flags &= ~SCROLL;
        width = 216;
        height = 121;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("298630", 6));
        create_alterables();
    }
};
FrameObject * create_lboards3_67(int x, int y)
{
    return new (Text::pool.create()) Lboards3_67(x, y);
}
class Back2_68 : public Text
{
public:
    Back2_68(int x, int y) : Text(x, y, Back2_68_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("back 2", 6);
#endif
        flags &= ~SCROLL;
        width = 53;
        height = 10;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("erase", 5));
        create_alterables();
    }
};
FrameObject * create_back2_68(int x, int y)
{
    return new (Text::pool.create()) Back2_68(x, y);
}
class TranslationData : public INI
{
public:
    TranslationData(int x, int y) : INI(x, y, translationData_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Translation data", 16);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_translationData(int x, int y)
{
    return new (INI::pool.create()) TranslationData(x, y);
}
class DRMFree_70 : public Text
{
public:
    DRMFree_70(int x, int y) : Text(x, y, DRMFree_70_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DRM free", 8);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 41;
        height = 13;
        blend_color = Color(139, 0, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_VCENTER;
        add_line(std::string("DRM free", 8));
        blend_color.a = 205;
        create_alterables();
    }
};
FrameObject * create_drmfree_70(int x, int y)
{
    return new (Text::pool.create()) DRMFree_70(x, y);
}
class QuickBackdrop2_71 : public QuickBackdrop
{
public:
    QuickBackdrop2_71(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 2", 16);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
        width = 162;
        height = 162;
        color = Color(0, 0, 0);
        gradient_type = NONE_GRADIENT;
        outline = 0;
    }
};
FrameObject * create_quickbackdrop2_71(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop2_71(x, y);
}
class Editor_72 : public Text
{
public:
    Editor_72(int x, int y) : Text(x, y, Editor_72_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("editor", 6);
#endif
        flags &= ~SCROLL;
        width = 74;
        height = 12;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("Editor", 6));
        create_alterables();
    }
};
FrameObject * create_editor_72(int x, int y)
{
    return new (Text::pool.create()) Editor_72(x, y);
}
class MapName_73 : public SystemBox
{
public:
    MapName_73(int x, int y) : SystemBox(x, y, MapName_73_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MapName", 7);
#endif
        flags &= ~SCROLL;
        width = 148;
        height = 25;
        image = NULL;
        blend_color = Color(31, 31, 31);
        create_alterables();
    }
};
FrameObject * create_mapname_73(int x, int y)
{
    return new (SystemBox::pool.create()) MapName_73(x, y);
}
class NewSaveTitleGrab_74 : public INI
{
public:
    NewSaveTitleGrab_74(int x, int y) : INI(x, y, NewSaveTitleGrab_74_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("new_save_title_grab", 19);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_newsavetitlegrab_74(int x, int y)
{
    return new (INI::pool.create()) NewSaveTitleGrab_74(x, y);
}
class NewDLCBody_75 : public Text
{
public:
    NewDLCBody_75(int x, int y) : Text(x, y, NewDLCBody_75_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("new DLC body", 12);
#endif
        flags &= ~SCROLL;
        width = 201;
        height = 18;
        blend_color = Color(192, 192, 192);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("NEW DLC", 7));
        blend_color.a = 255;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_newdlcbody_75(int x, int y)
{
    return new (Text::pool.create()) NewDLCBody_75(x, y);
}
class NewDLCHeader_76 : public Text
{
public:
    NewDLCHeader_76(int x, int y) : Text(x, y, NewDLCHeader_76_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("new DLC header", 14);
#endif
        flags &= ~SCROLL;
        width = 191;
        height = 20;
        blend_color = Color(255, 128, 0);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("NEW DLC AVAILABLE", 17));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_newdlcheader_76(int x, int y)
{
    return new (Text::pool.create()) NewDLCHeader_76(x, y);
}
static Image* images_newdlcclose_77_0_0[1];
static Direction direction_newdlcclose_77_0_0 = {0, 50, 50, 0, 1, images_newdlcclose_77_0_0, 1};
static Animation anim_newdlcclose_77_0 = {&direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, NULL, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0, &direction_newdlcclose_77_0_0};
static Animation * anim_array_newdlcclose_77[1] = {&anim_newdlcclose_77_0};
static Animations anim_newdlcclose_77 = {1, &anim_array_newdlcclose_77[0]};
static bool anim_newdlcclose_77_initialized;
class NewDLCClose_77 : public Active
{
public:
    NewDLCClose_77(int x, int y) : Active(x, y, NewDLCClose_77_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("newDLC close", 12);
#endif
        this->animations = &anim_newdlcclose_77;
        if (!anim_newdlcclose_77_initialized) {
            anim_newdlcclose_77_initialized = true;
            images_newdlcclose_77_0_0[0] = get_internal_image(3872);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_newdlcclose_77(int x, int y)
{
    return new (Active::pool.create()) NewDLCClose_77(x, y);
}
class Settings2_78 : public INI
{
public:
    Settings2_78(int x, int y) : INI(x, y, Settings2_78_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("settings 2", 10);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_settings2_78(int x, int y)
{
    return new (INI::pool.create()) Settings2_78(x, y);
}
class SteamWorks_79 : public SteamObject
{
public:
    SteamWorks_79(int x, int y) : SteamObject(x, y, SteamWorks_79_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SteamWorks", 10);
#endif
    }
};
FrameObject * create_steamworks_79(int x, int y)
{
    return new (SteamObject::pool.create()) SteamWorks_79(x, y);
}
class List_80 : public ListObject
{
public:
    List_80(int x, int y) : ListObject(x, y, List_80_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("List", 4);
#endif
        set_visible(false);
        index_offset = current_line = -1;
    }
};
FrameObject * create_list_80(int x, int y)
{
    return new (ListObject::pool.create()) List_80(x, y);
}
class StringTokenizer_81 : public StringTokenizer
{
public:
    StringTokenizer_81(int x, int y) : StringTokenizer(x, y, StringTokenizer_81_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String tokenizer", 16);
#endif
    }
};
FrameObject * create_stringtokenizer_81(int x, int y)
{
    return new (StringTokenizer::pool.create()) StringTokenizer_81(x, y);
}
static Image* images_bonus_82_0_0[6];
static Direction direction_bonus_82_0_0 = {0, 8, 8, 0, 1, images_bonus_82_0_0, 6};
static Animation anim_bonus_82_0 = {&direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, NULL, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0, &direction_bonus_82_0_0};
static Animation * anim_array_bonus_82[1] = {&anim_bonus_82_0};
static Animations anim_bonus_82 = {1, &anim_array_bonus_82[0]};
static bool anim_bonus_82_initialized;
class BONUS_82 : public Active
{
public:
    BONUS_82(int x, int y) : Active(x, y, BONUS_82_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BONUS", 5);
#endif
        this->animations = &anim_bonus_82;
        if (!anim_bonus_82_initialized) {
            anim_bonus_82_initialized = true;
            images_bonus_82_0_0[0] = get_internal_image(3874);
            images_bonus_82_0_0[1] = get_internal_image(3882);
            images_bonus_82_0_0[2] = get_internal_image(3889);
            images_bonus_82_0_0[3] = get_internal_image(3883);
            images_bonus_82_0_0[4] = get_internal_image(3873);
            images_bonus_82_0_0[5] = get_internal_image(350);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_bonus_82(int x, int y)
{
    return new (Active::pool.create()) BONUS_82(x, y);
}
class Backdrop7_83 : public Backdrop
{
public:
    Backdrop7_83(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 7", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_7
        manager.frame->back_instances[BACK_ID_BACKDROP_7].push_back(this);
#endif
        image = get_internal_image(3888);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop7_83(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop7_83(x, y);
}
class NewDLCBody2_84 : public Text
{
public:
    NewDLCBody2_84(int x, int y) : Text(x, y, NewDLCBody2_84_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("new DLC body 2", 14);
#endif
        flags &= ~SCROLL;
        width = 212;
        height = 55;
        blend_color = Color(108, 108, 108);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("new DLC", 7));
        create_alterables();
    }
};
FrameObject * create_newdlcbody2_84(int x, int y)
{
    return new (Text::pool.create()) NewDLCBody2_84(x, y);
}
class Backdrop3_85 : public Backdrop
{
public:
    Backdrop3_85(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 3", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_3
        manager.frame->back_instances[BACK_ID_BACKDROP_3].push_back(this);
#endif
        image = get_internal_image(3890);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop3_85(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop3_85(x, y);
}
static Image* images_active2_86_0_0[4];
static Direction direction_active2_86_0_0 = {0, 15, 15, 0, -1, images_active2_86_0_0, 4};
static Animation anim_active2_86_0 = {&direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, NULL, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0, &direction_active2_86_0_0};
static Animation * anim_array_active2_86[1] = {&anim_active2_86_0};
static Animations anim_active2_86 = {1, &anim_array_active2_86[0]};
static bool anim_active2_86_initialized;
class Active2_86 : public Active
{
public:
    Active2_86(int x, int y) : Active(x, y, Active2_86_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        this->animations = &anim_active2_86;
        if (!anim_active2_86_initialized) {
            anim_active2_86_initialized = true;
            images_active2_86_0_0[0] = get_internal_image(1024);
            images_active2_86_0_0[1] = get_internal_image(1028);
            images_active2_86_0_0[2] = get_internal_image(1029);
            images_active2_86_0_0[3] = get_internal_image(1028);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active2_86(int x, int y)
{
    return new (Active::pool.create()) Active2_86(x, y);
}
static Image* images_active4_87_0_0[4];
static Direction direction_active4_87_0_0 = {0, 15, 15, 0, -1, images_active4_87_0_0, 4};
static Animation anim_active4_87_0 = {&direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, NULL, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0, &direction_active4_87_0_0};
static Animation * anim_array_active4_87[1] = {&anim_active4_87_0};
static Animations anim_active4_87 = {1, &anim_array_active4_87[0]};
static bool anim_active4_87_initialized;
class Active4_87 : public Active
{
public:
    Active4_87(int x, int y) : Active(x, y, Active4_87_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 4", 8);
#endif
        this->animations = &anim_active4_87;
        if (!anim_active4_87_initialized) {
            anim_active4_87_initialized = true;
            images_active4_87_0_0[0] = get_internal_image(1032);
            images_active4_87_0_0[1] = get_internal_image(1033);
            images_active4_87_0_0[2] = get_internal_image(1034);
            images_active4_87_0_0[3] = get_internal_image(1033);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active4_87(int x, int y)
{
    return new (Active::pool.create()) Active4_87(x, y);
}
static Image* images_active9_88_0_0[1];
static Direction direction_active9_88_0_0 = {0, 50, 50, 0, 1, images_active9_88_0_0, 1};
static Animation anim_active9_88_0 = {&direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, NULL, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0, &direction_active9_88_0_0};
static Animation * anim_array_active9_88[1] = {&anim_active9_88_0};
static Animations anim_active9_88 = {1, &anim_array_active9_88[0]};
static bool anim_active9_88_initialized;
class Active9_88 : public Active
{
public:
    Active9_88(int x, int y) : Active(x, y, Active9_88_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 9", 8);
#endif
        this->animations = &anim_active9_88;
        if (!anim_active9_88_initialized) {
            anim_active9_88_initialized = true;
            images_active9_88_0_0[0] = get_internal_image(3885);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_active9_88(int x, int y)
{
    return new (Active::pool.create()) Active9_88(x, y);
}
static Image* images_options2_89_0_0[1];
static Direction direction_options2_89_0_0 = {0, 50, 50, 0, -1, images_options2_89_0_0, 1};
static Image* images_options2_89_0_16[1];
static Direction direction_options2_89_0_16 = {16, 50, 50, 0, -1, images_options2_89_0_16, 1};
static Animation anim_options2_89_0 = {&direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0, NULL, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, &direction_options2_89_0_16, NULL, &direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0, &direction_options2_89_0_0};
static Animation * anim_array_options2_89[1] = {&anim_options2_89_0};
static Animations anim_options2_89 = {1, &anim_array_options2_89[0]};
static bool anim_options2_89_initialized;
class Options2_89 : public Active
{
public:
    Options2_89(int x, int y) : Active(x, y, Options2_89_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("options 2", 9);
#endif
        this->animations = &anim_options2_89;
        if (!anim_options2_89_initialized) {
            anim_options2_89_initialized = true;
            images_options2_89_0_0[0] = get_internal_image(3877);
            images_options2_89_0_16[0] = get_internal_image(3876);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_options2_89(int x, int y)
{
    return new (Active::pool.create()) Options2_89(x, y);
}
class StoreText_90 : public Text
{
public:
    StoreText_90(int x, int y) : Text(x, y, StoreText_90_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("store text", 10);
#endif
        flags &= ~SCROLL;
        width = 155;
        height = 16;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("new DLC", 7));
        create_alterables();
    }
};
FrameObject * create_storetext_90(int x, int y)
{
    return new (Text::pool.create()) StoreText_90(x, y);
}
static Image* images_t17presents_91_0_0[7];
static Direction direction_t17presents_91_0_0 = {0, 50, 50, 0, 1, images_t17presents_91_0_0, 7};
static Animation anim_t17presents_91_0 = {&direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, NULL, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0, &direction_t17presents_91_0_0};
static Animation * anim_array_t17presents_91[1] = {&anim_t17presents_91_0};
static Animations anim_t17presents_91 = {1, &anim_array_t17presents_91[0]};
static bool anim_t17presents_91_initialized;
class T17Presents_91 : public Active
{
public:
    T17Presents_91(int x, int y) : Active(x, y, T17Presents_91_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("t17 presents", 12);
#endif
        set_visible(false);
        this->animations = &anim_t17presents_91;
        if (!anim_t17presents_91_initialized) {
            anim_t17presents_91_initialized = true;
            images_t17presents_91_0_0[0] = get_internal_image(3898);
            images_t17presents_91_0_0[1] = get_internal_image(3896);
            images_t17presents_91_0_0[2] = get_internal_image(3899);
            images_t17presents_91_0_0[3] = get_internal_image(3900);
            images_t17presents_91_0_0[4] = get_internal_image(3901);
            images_t17presents_91_0_0[5] = get_internal_image(3903);
            images_t17presents_91_0_0[6] = get_internal_image(3902);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 135);
        create_alterables();
    }
};
FrameObject * create_t17presents_91(int x, int y)
{
    return new (Active::pool.create()) T17Presents_91(x, y);
}
class EditBox_92 : public EditObject
{
public:
    EditBox_92(int x, int y) : EditObject(x, y, EditBox_92_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Edit Box", 8);
#endif
        width = 200;
        height = 23;
        edit_flags |= PASSWORD;
    }
};
FrameObject * create_editbox_92(int x, int y)
{
    return new (EditObject::pool.create()) EditBox_92(x, y);
}
class Name_93 : public Text
{
public:
    Name_93(int x, int y) : Text(x, y, Name_93_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("name", 4);
#endif
        flags &= ~SCROLL;
        width = 113;
        height = 21;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("Player", 6));
        create_alterables();
    }
};
FrameObject * create_name_93(int x, int y)
{
    return new (Text::pool.create()) Name_93(x, y);
}
class Backdrop5_94 : public Backdrop
{
public:
    Backdrop5_94(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 5", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_5
        manager.frame->back_instances[BACK_ID_BACKDROP_5].push_back(this);
#endif
        image = get_internal_image(972);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop5_94(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop5_94(x, y);
}
static Image* images_active3_95_1_0[2];
static Direction direction_active3_95_1_0 = {0, 5, 5, 0, -1, images_active3_95_1_0, 2};
static Image* images_active3_95_1_1[2];
static Direction direction_active3_95_1_1 = {1, 5, 5, 0, -1, images_active3_95_1_1, 2};
static Image* images_active3_95_1_2[2];
static Direction direction_active3_95_1_2 = {2, 5, 5, 0, -1, images_active3_95_1_2, 2};
static Image* images_active3_95_1_3[2];
static Direction direction_active3_95_1_3 = {3, 5, 5, 0, -1, images_active3_95_1_3, 2};
static Image* images_active3_95_1_4[2];
static Direction direction_active3_95_1_4 = {4, 5, 5, 0, -1, images_active3_95_1_4, 2};
static Image* images_active3_95_1_5[2];
static Direction direction_active3_95_1_5 = {5, 5, 5, 0, -1, images_active3_95_1_5, 2};
static Image* images_active3_95_1_6[2];
static Direction direction_active3_95_1_6 = {6, 5, 5, 0, -1, images_active3_95_1_6, 2};
static Image* images_active3_95_1_7[2];
static Direction direction_active3_95_1_7 = {7, 5, 5, 0, -1, images_active3_95_1_7, 2};
static Image* images_active3_95_1_8[2];
static Direction direction_active3_95_1_8 = {8, 5, 5, 0, -1, images_active3_95_1_8, 2};
static Image* images_active3_95_1_9[2];
static Direction direction_active3_95_1_9 = {9, 5, 5, 0, -1, images_active3_95_1_9, 2};
static Image* images_active3_95_1_10[2];
static Direction direction_active3_95_1_10 = {10, 5, 5, 0, -1, images_active3_95_1_10, 2};
static Image* images_active3_95_1_11[2];
static Direction direction_active3_95_1_11 = {11, 5, 5, 0, -1, images_active3_95_1_11, 2};
static Animation anim_active3_95_1 = {&direction_active3_95_1_0, &direction_active3_95_1_1, &direction_active3_95_1_2, &direction_active3_95_1_3, &direction_active3_95_1_4, &direction_active3_95_1_5, &direction_active3_95_1_6, &direction_active3_95_1_7, &direction_active3_95_1_8, &direction_active3_95_1_9, &direction_active3_95_1_10, &direction_active3_95_1_11, &direction_active3_95_1_11, &direction_active3_95_1_11, &direction_active3_95_1_11, &direction_active3_95_1_11, &direction_active3_95_1_11, &direction_active3_95_1_11, &direction_active3_95_1_11, &direction_active3_95_1_11, &direction_active3_95_1_11, &direction_active3_95_1_11, &direction_active3_95_1_0, &direction_active3_95_1_0, &direction_active3_95_1_0, &direction_active3_95_1_0, &direction_active3_95_1_0, &direction_active3_95_1_0, &direction_active3_95_1_0, &direction_active3_95_1_0, &direction_active3_95_1_0, &direction_active3_95_1_0};
static Animation * anim_array_active3_95[2] = {NULL, &anim_active3_95_1};
static Animations anim_active3_95 = {2, &anim_array_active3_95[0]};
static bool anim_active3_95_initialized;
class Active3_95 : public Active
{
public:
    Active3_95(int x, int y) : Active(x, y, Active3_95_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 3", 8);
#endif
        this->animations = &anim_active3_95;
        if (!anim_active3_95_initialized) {
            anim_active3_95_initialized = true;
            images_active3_95_1_0[0] = get_internal_image(1095);
            images_active3_95_1_0[1] = get_internal_image(1114);
            images_active3_95_1_1[0] = get_internal_image(1100);
            images_active3_95_1_1[1] = get_internal_image(1115);
            images_active3_95_1_2[0] = get_internal_image(1102);
            images_active3_95_1_2[1] = get_internal_image(1116);
            images_active3_95_1_3[0] = get_internal_image(1105);
            images_active3_95_1_3[1] = get_internal_image(1118);
            images_active3_95_1_4[0] = get_internal_image(479);
            images_active3_95_1_4[1] = get_internal_image(1107);
            images_active3_95_1_5[0] = get_internal_image(1109);
            images_active3_95_1_5[1] = get_internal_image(1213);
            images_active3_95_1_6[0] = get_internal_image(1111);
            images_active3_95_1_6[1] = get_internal_image(1121);
            images_active3_95_1_7[0] = get_internal_image(1113);
            images_active3_95_1_7[1] = get_internal_image(1132);
            images_active3_95_1_8[0] = get_internal_image(1133);
            images_active3_95_1_8[1] = get_internal_image(1120);
            images_active3_95_1_9[0] = get_internal_image(2745);
            images_active3_95_1_9[1] = get_internal_image(2748);
            images_active3_95_1_10[0] = get_internal_image(3512);
            images_active3_95_1_10[1] = get_internal_image(2913);
            images_active3_95_1_11[0] = get_internal_image(3515);
            images_active3_95_1_11[1] = get_internal_image(3514);
        }
        active_flags |= TRANSPARENT;
        animation = WALKING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active3_95(int x, int y)
{
    return new (Active::pool.create()) Active3_95(x, y);
}
class Backdrop_96 : public Backdrop
{
public:
    Backdrop_96(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP
        manager.frame->back_instances[BACK_ID_BACKDROP].push_back(this);
#endif
        image = get_internal_image(47);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 15);
    }
};
FrameObject * create_backdrop_96(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_96(x, y);
}
class Backdrop4_97 : public Backdrop
{
public:
    Backdrop4_97(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 4", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_4
        manager.frame->back_instances[BACK_ID_BACKDROP_4].push_back(this);
#endif
        image = get_internal_image(988);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 205);
    }
};
FrameObject * create_backdrop4_97(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop4_97(x, y);
}
static Image* images_edit_98_0_0[1];
static Direction direction_edit_98_0_0 = {0, 50, 50, 0, -1, images_edit_98_0_0, 1};
static Image* images_edit_98_0_16[1];
static Direction direction_edit_98_0_16 = {16, 50, 50, 0, -1, images_edit_98_0_16, 1};
static Animation anim_edit_98_0 = {&direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0, NULL, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, &direction_edit_98_0_16, NULL, &direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0, &direction_edit_98_0_0};
static Animation * anim_array_edit_98[1] = {&anim_edit_98_0};
static Animations anim_edit_98 = {1, &anim_array_edit_98[0]};
static bool anim_edit_98_initialized;
class EDIT_98 : public Active
{
public:
    EDIT_98(int x, int y) : Active(x, y, EDIT_98_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("EDIT", 4);
#endif
        this->animations = &anim_edit_98;
        if (!anim_edit_98_initialized) {
            anim_edit_98_initialized = true;
            images_edit_98_0_0[0] = get_internal_image(989);
            images_edit_98_0_16[0] = get_internal_image(985);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_edit_98(int x, int y)
{
    return new (Active::pool.create()) EDIT_98(x, y);
}
class Backdrop6_99 : public Backdrop
{
public:
    Backdrop6_99(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 6", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_6
        manager.frame->back_instances[BACK_ID_BACKDROP_6].push_back(this);
#endif
        image = get_internal_image(1009);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 55);
        set_shader(Render::DISPLAY);
        set_shader_parameter(std::string("fPeriods", 8), 1000.0);
        set_shader_parameter(std::string("fOffset", 7), 0.0);
        set_shader_parameter(std::string("fAmplitude", 10), 0.00999999977648);
    }
};
FrameObject * create_backdrop6_99(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop6_99(x, y);
}
static Image* images_letsgo_100_5_0[1];
static Direction direction_letsgo_100_5_0 = {0, 50, 50, 0, -1, images_letsgo_100_5_0, 1};
static Image* images_letsgo_100_5_16[1];
static Direction direction_letsgo_100_5_16 = {16, 50, 50, 0, 1, images_letsgo_100_5_16, 1};
static Animation anim_letsgo_100_5 = {&direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, NULL, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, &direction_letsgo_100_5_16, NULL, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0, &direction_letsgo_100_5_0};
static Animation * anim_array_letsgo_100[6] = {NULL, NULL, NULL, NULL, NULL, &anim_letsgo_100_5};
static Animations anim_letsgo_100 = {6, &anim_array_letsgo_100[0]};
static bool anim_letsgo_100_initialized;
class LetsGo_100 : public Active
{
public:
    LetsGo_100(int x, int y) : Active(x, y, LetsGo_100_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("lets go", 7);
#endif
        this->animations = &anim_letsgo_100;
        if (!anim_letsgo_100_initialized) {
            anim_letsgo_100_initialized = true;
            images_letsgo_100_5_0[0] = get_internal_image(830);
            images_letsgo_100_5_16[0] = get_internal_image(1093);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_letsgo_100(int x, int y)
{
    return new (Active::pool.create()) LetsGo_100(x, y);
}
class Continue_101 : public Text
{
public:
    Continue_101(int x, int y) : Text(x, y, Continue_101_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("continue", 8);
#endif
        flags &= ~SCROLL;
        width = 71;
        height = 10;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("continue", 8));
        create_alterables();
    }
};
FrameObject * create_continue_101(int x, int y)
{
    return new (Text::pool.create()) Continue_101(x, y);
}
static Image* images_back_102_5_0[1];
static Direction direction_back_102_5_0 = {0, 50, 50, 0, -1, images_back_102_5_0, 1};
static Image* images_back_102_5_16[1];
static Direction direction_back_102_5_16 = {16, 50, 50, 0, 1, images_back_102_5_16, 1};
static Animation anim_back_102_5 = {&direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0, NULL, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, &direction_back_102_5_16, NULL, &direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0, &direction_back_102_5_0};
static Animation * anim_array_back_102[6] = {NULL, NULL, NULL, NULL, NULL, &anim_back_102_5};
static Animations anim_back_102 = {6, &anim_array_back_102[0]};
static bool anim_back_102_initialized;
class Back_102 : public Active
{
public:
    Back_102(int x, int y) : Active(x, y, Back_102_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("back", 4);
#endif
        this->animations = &anim_back_102;
        if (!anim_back_102_initialized) {
            anim_back_102_initialized = true;
            images_back_102_5_0[0] = get_internal_image(830);
            images_back_102_5_16[0] = get_internal_image(1093);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_back_102(int x, int y)
{
    return new (Active::pool.create()) Back_102(x, y);
}
class Back2_103 : public Text
{
public:
    Back2_103(int x, int y) : Text(x, y, Back2_103_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("back 2", 6);
#endif
        flags &= ~SCROLL;
        width = 64;
        height = 10;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("back", 4));
        create_alterables();
    }
};
FrameObject * create_back2_103(int x, int y)
{
    return new (Text::pool.create()) Back2_103(x, y);
}
static Image* images_active_104_0_0[4];
static Direction direction_active_104_0_0 = {0, 15, 15, 0, -1, images_active_104_0_0, 4};
static Animation anim_active_104_0 = {&direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, NULL, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0, &direction_active_104_0_0};
static Animation * anim_array_active_104[1] = {&anim_active_104_0};
static Animations anim_active_104 = {1, &anim_array_active_104[0]};
static bool anim_active_104_initialized;
class Active_104 : public Active
{
public:
    Active_104(int x, int y) : Active(x, y, Active_104_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        set_visible(false);
        this->animations = &anim_active_104;
        if (!anim_active_104_initialized) {
            anim_active_104_initialized = true;
            images_active_104_0_0[0] = get_internal_image(1024);
            images_active_104_0_0[1] = get_internal_image(1028);
            images_active_104_0_0[2] = get_internal_image(1029);
            images_active_104_0_0[3] = get_internal_image(1028);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 205);
        create_alterables();
    }
};
FrameObject * create_active_104(int x, int y)
{
    return new (Active::pool.create()) Active_104(x, y);
}
static Image* images_active2_105_0_0[4];
static Direction direction_active2_105_0_0 = {0, 15, 15, 0, -1, images_active2_105_0_0, 4};
static Animation anim_active2_105_0 = {&direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, NULL, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0, &direction_active2_105_0_0};
static Animation * anim_array_active2_105[1] = {&anim_active2_105_0};
static Animations anim_active2_105 = {1, &anim_array_active2_105[0]};
static bool anim_active2_105_initialized;
class Active2_105 : public Active
{
public:
    Active2_105(int x, int y) : Active(x, y, Active2_105_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        set_visible(false);
        this->animations = &anim_active2_105;
        if (!anim_active2_105_initialized) {
            anim_active2_105_initialized = true;
            images_active2_105_0_0[0] = get_internal_image(1032);
            images_active2_105_0_0[1] = get_internal_image(1033);
            images_active2_105_0_0[2] = get_internal_image(1034);
            images_active2_105_0_0[3] = get_internal_image(1033);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 205);
        create_alterables();
    }
};
FrameObject * create_active2_105(int x, int y)
{
    return new (Active::pool.create()) Active2_105(x, y);
}
class Backdrop3_106 : public Backdrop
{
public:
    Backdrop3_106(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 3", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_3
        manager.frame->back_instances[BACK_ID_BACKDROP_3].push_back(this);
#endif
        image = get_internal_image(1117);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 205);
    }
};
FrameObject * create_backdrop3_106(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop3_106(x, y);
}
class Header_107 : public Text
{
public:
    Header_107(int x, int y) : Text(x, y, Header_107_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("header", 6);
#endif
        flags &= ~SCROLL;
        width = 213;
        height = 14;
        blend_color = Color(255, 128, 0);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("CUSTOMIZE PLAYER", 16));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_header_107(int x, int y)
{
    return new (Text::pool.create()) Header_107(x, y);
}
class Error_109 : public Text
{
public:
    Error_109(int x, int y) : Text(x, y, Error_109_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("error", 5);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 320;
        height = 21;
        blend_color = Color(255, 0, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("Player", 6));
        create_alterables();
    }
};
FrameObject * create_error_109(int x, int y)
{
    return new (Text::pool.create()) Error_109(x, y);
}
static Image* images_playerss_110_0_0[2];
static Direction direction_playerss_110_0_0 = {0, 10, 10, 0, -1, images_playerss_110_0_0, 2};
static Image* images_playerss_110_0_8[2];
static Direction direction_playerss_110_0_8 = {8, 10, 10, 0, -1, images_playerss_110_0_8, 2};
static Image* images_playerss_110_0_16[2];
static Direction direction_playerss_110_0_16 = {16, 10, 10, 0, -1, images_playerss_110_0_16, 2};
static Image* images_playerss_110_0_24[2];
static Direction direction_playerss_110_0_24 = {24, 10, 10, 0, -1, images_playerss_110_0_24, 2};
static Animation anim_playerss_110_0 = {&direction_playerss_110_0_0, &direction_playerss_110_0_0, &direction_playerss_110_0_0, &direction_playerss_110_0_0, NULL, &direction_playerss_110_0_8, &direction_playerss_110_0_8, &direction_playerss_110_0_8, &direction_playerss_110_0_8, &direction_playerss_110_0_8, &direction_playerss_110_0_8, &direction_playerss_110_0_8, NULL, &direction_playerss_110_0_16, &direction_playerss_110_0_16, &direction_playerss_110_0_16, &direction_playerss_110_0_16, &direction_playerss_110_0_16, &direction_playerss_110_0_16, &direction_playerss_110_0_16, NULL, &direction_playerss_110_0_24, &direction_playerss_110_0_24, &direction_playerss_110_0_24, &direction_playerss_110_0_24, &direction_playerss_110_0_24, &direction_playerss_110_0_24, &direction_playerss_110_0_24, NULL, &direction_playerss_110_0_0, &direction_playerss_110_0_0, &direction_playerss_110_0_0};
static Image* images_playerss_110_4_0[4];
static Direction direction_playerss_110_4_0 = {0, 20, 20, 0, 1, images_playerss_110_4_0, 4};
static Image* images_playerss_110_4_16[4];
static Direction direction_playerss_110_4_16 = {16, 20, 20, 0, 1, images_playerss_110_4_16, 4};
static Animation anim_playerss_110_4 = {&direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0, NULL, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, &direction_playerss_110_4_16, NULL, &direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0, &direction_playerss_110_4_0};
static Image* images_playerss_110_6_0[1];
static Direction direction_playerss_110_6_0 = {0, 6, 6, 0, 1, images_playerss_110_6_0, 1};
static Image* images_playerss_110_6_8[1];
static Direction direction_playerss_110_6_8 = {8, 6, 6, 0, 1, images_playerss_110_6_8, 1};
static Image* images_playerss_110_6_16[1];
static Direction direction_playerss_110_6_16 = {16, 6, 6, 0, 1, images_playerss_110_6_16, 1};
static Image* images_playerss_110_6_24[1];
static Direction direction_playerss_110_6_24 = {24, 6, 6, 0, 1, images_playerss_110_6_24, 1};
static Animation anim_playerss_110_6 = {&direction_playerss_110_6_0, &direction_playerss_110_6_0, &direction_playerss_110_6_0, &direction_playerss_110_6_0, NULL, &direction_playerss_110_6_8, &direction_playerss_110_6_8, &direction_playerss_110_6_8, &direction_playerss_110_6_8, &direction_playerss_110_6_8, &direction_playerss_110_6_8, &direction_playerss_110_6_8, NULL, &direction_playerss_110_6_16, &direction_playerss_110_6_16, &direction_playerss_110_6_16, &direction_playerss_110_6_16, &direction_playerss_110_6_16, &direction_playerss_110_6_16, &direction_playerss_110_6_16, NULL, &direction_playerss_110_6_24, &direction_playerss_110_6_24, &direction_playerss_110_6_24, &direction_playerss_110_6_24, &direction_playerss_110_6_24, &direction_playerss_110_6_24, &direction_playerss_110_6_24, NULL, &direction_playerss_110_6_0, &direction_playerss_110_6_0, &direction_playerss_110_6_0};
static Image* images_playerss_110_7_0[2];
static Direction direction_playerss_110_7_0 = {0, 10, 10, 0, -1, images_playerss_110_7_0, 2};
static Image* images_playerss_110_7_8[2];
static Direction direction_playerss_110_7_8 = {8, 10, 10, 0, -1, images_playerss_110_7_8, 2};
static Image* images_playerss_110_7_16[2];
static Direction direction_playerss_110_7_16 = {16, 10, 10, 0, -1, images_playerss_110_7_16, 2};
static Image* images_playerss_110_7_24[2];
static Direction direction_playerss_110_7_24 = {24, 10, 10, 0, -1, images_playerss_110_7_24, 2};
static Animation anim_playerss_110_7 = {&direction_playerss_110_7_0, &direction_playerss_110_7_0, &direction_playerss_110_7_0, &direction_playerss_110_7_0, NULL, &direction_playerss_110_7_8, &direction_playerss_110_7_8, &direction_playerss_110_7_8, &direction_playerss_110_7_8, &direction_playerss_110_7_8, &direction_playerss_110_7_8, &direction_playerss_110_7_8, NULL, &direction_playerss_110_7_16, &direction_playerss_110_7_16, &direction_playerss_110_7_16, &direction_playerss_110_7_16, &direction_playerss_110_7_16, &direction_playerss_110_7_16, &direction_playerss_110_7_16, NULL, &direction_playerss_110_7_24, &direction_playerss_110_7_24, &direction_playerss_110_7_24, &direction_playerss_110_7_24, &direction_playerss_110_7_24, &direction_playerss_110_7_24, &direction_playerss_110_7_24, NULL, &direction_playerss_110_7_0, &direction_playerss_110_7_0, &direction_playerss_110_7_0};
static Image* images_playerss_110_8_0[1];
static Direction direction_playerss_110_8_0 = {0, 50, 50, 0, -1, images_playerss_110_8_0, 1};
static Image* images_playerss_110_8_24[1];
static Direction direction_playerss_110_8_24 = {24, 50, 50, 0, -1, images_playerss_110_8_24, 1};
static Animation anim_playerss_110_8 = {&direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0, NULL, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, &direction_playerss_110_8_24, NULL, &direction_playerss_110_8_0, &direction_playerss_110_8_0, &direction_playerss_110_8_0};
static Image* images_playerss_110_10_0[5];
static Direction direction_playerss_110_10_0 = {0, 10, 10, 0, 1, images_playerss_110_10_0, 5};
static Animation anim_playerss_110_10 = {&direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, NULL, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0, &direction_playerss_110_10_0};
static Image* images_playerss_110_11_0[2];
static Direction direction_playerss_110_11_0 = {0, 10, 10, 0, -1, images_playerss_110_11_0, 2};
static Image* images_playerss_110_11_8[2];
static Direction direction_playerss_110_11_8 = {8, 10, 10, 0, -1, images_playerss_110_11_8, 2};
static Image* images_playerss_110_11_16[2];
static Direction direction_playerss_110_11_16 = {16, 10, 10, 0, -1, images_playerss_110_11_16, 2};
static Image* images_playerss_110_11_24[2];
static Direction direction_playerss_110_11_24 = {24, 10, 10, 0, -1, images_playerss_110_11_24, 2};
static Animation anim_playerss_110_11 = {&direction_playerss_110_11_0, &direction_playerss_110_11_0, &direction_playerss_110_11_0, &direction_playerss_110_11_0, NULL, &direction_playerss_110_11_8, &direction_playerss_110_11_8, &direction_playerss_110_11_8, &direction_playerss_110_11_8, &direction_playerss_110_11_8, &direction_playerss_110_11_8, &direction_playerss_110_11_8, NULL, &direction_playerss_110_11_16, &direction_playerss_110_11_16, &direction_playerss_110_11_16, &direction_playerss_110_11_16, &direction_playerss_110_11_16, &direction_playerss_110_11_16, &direction_playerss_110_11_16, NULL, &direction_playerss_110_11_24, &direction_playerss_110_11_24, &direction_playerss_110_11_24, &direction_playerss_110_11_24, &direction_playerss_110_11_24, &direction_playerss_110_11_24, &direction_playerss_110_11_24, NULL, &direction_playerss_110_11_0, &direction_playerss_110_11_0, &direction_playerss_110_11_0};
static Image* images_playerss_110_12_0[2];
static Direction direction_playerss_110_12_0 = {0, 10, 10, 0, -1, images_playerss_110_12_0, 2};
static Image* images_playerss_110_12_8[2];
static Direction direction_playerss_110_12_8 = {8, 10, 10, 0, -1, images_playerss_110_12_8, 2};
static Image* images_playerss_110_12_16[2];
static Direction direction_playerss_110_12_16 = {16, 10, 10, 0, -1, images_playerss_110_12_16, 2};
static Image* images_playerss_110_12_24[2];
static Direction direction_playerss_110_12_24 = {24, 10, 10, 0, -1, images_playerss_110_12_24, 2};
static Animation anim_playerss_110_12 = {&direction_playerss_110_12_0, &direction_playerss_110_12_0, &direction_playerss_110_12_0, &direction_playerss_110_12_0, NULL, &direction_playerss_110_12_8, &direction_playerss_110_12_8, &direction_playerss_110_12_8, &direction_playerss_110_12_8, &direction_playerss_110_12_8, &direction_playerss_110_12_8, &direction_playerss_110_12_8, NULL, &direction_playerss_110_12_16, &direction_playerss_110_12_16, &direction_playerss_110_12_16, &direction_playerss_110_12_16, &direction_playerss_110_12_16, &direction_playerss_110_12_16, &direction_playerss_110_12_16, NULL, &direction_playerss_110_12_24, &direction_playerss_110_12_24, &direction_playerss_110_12_24, &direction_playerss_110_12_24, &direction_playerss_110_12_24, &direction_playerss_110_12_24, &direction_playerss_110_12_24, NULL, &direction_playerss_110_12_0, &direction_playerss_110_12_0, &direction_playerss_110_12_0};
static Image* images_playerss_110_13_0[2];
static Direction direction_playerss_110_13_0 = {0, 10, 10, 0, -1, images_playerss_110_13_0, 2};
static Image* images_playerss_110_13_8[2];
static Direction direction_playerss_110_13_8 = {8, 10, 10, 0, -1, images_playerss_110_13_8, 2};
static Image* images_playerss_110_13_16[2];
static Direction direction_playerss_110_13_16 = {16, 10, 10, 0, -1, images_playerss_110_13_16, 2};
static Image* images_playerss_110_13_24[2];
static Direction direction_playerss_110_13_24 = {24, 10, 10, 0, -1, images_playerss_110_13_24, 2};
static Animation anim_playerss_110_13 = {&direction_playerss_110_13_0, &direction_playerss_110_13_0, &direction_playerss_110_13_0, &direction_playerss_110_13_0, NULL, &direction_playerss_110_13_8, &direction_playerss_110_13_8, &direction_playerss_110_13_8, &direction_playerss_110_13_8, &direction_playerss_110_13_8, &direction_playerss_110_13_8, &direction_playerss_110_13_8, NULL, &direction_playerss_110_13_16, &direction_playerss_110_13_16, &direction_playerss_110_13_16, &direction_playerss_110_13_16, &direction_playerss_110_13_16, &direction_playerss_110_13_16, &direction_playerss_110_13_16, NULL, &direction_playerss_110_13_24, &direction_playerss_110_13_24, &direction_playerss_110_13_24, &direction_playerss_110_13_24, &direction_playerss_110_13_24, &direction_playerss_110_13_24, &direction_playerss_110_13_24, NULL, &direction_playerss_110_13_0, &direction_playerss_110_13_0, &direction_playerss_110_13_0};
static Image* images_playerss_110_14_0[2];
static Direction direction_playerss_110_14_0 = {0, 10, 10, 0, -1, images_playerss_110_14_0, 2};
static Image* images_playerss_110_14_8[2];
static Direction direction_playerss_110_14_8 = {8, 10, 10, 0, -1, images_playerss_110_14_8, 2};
static Image* images_playerss_110_14_16[2];
static Direction direction_playerss_110_14_16 = {16, 10, 10, 0, -1, images_playerss_110_14_16, 2};
static Image* images_playerss_110_14_24[2];
static Direction direction_playerss_110_14_24 = {24, 10, 10, 0, -1, images_playerss_110_14_24, 2};
static Animation anim_playerss_110_14 = {&direction_playerss_110_14_0, &direction_playerss_110_14_0, &direction_playerss_110_14_0, &direction_playerss_110_14_0, NULL, &direction_playerss_110_14_8, &direction_playerss_110_14_8, &direction_playerss_110_14_8, &direction_playerss_110_14_8, &direction_playerss_110_14_8, &direction_playerss_110_14_8, &direction_playerss_110_14_8, NULL, &direction_playerss_110_14_16, &direction_playerss_110_14_16, &direction_playerss_110_14_16, &direction_playerss_110_14_16, &direction_playerss_110_14_16, &direction_playerss_110_14_16, &direction_playerss_110_14_16, NULL, &direction_playerss_110_14_24, &direction_playerss_110_14_24, &direction_playerss_110_14_24, &direction_playerss_110_14_24, &direction_playerss_110_14_24, &direction_playerss_110_14_24, &direction_playerss_110_14_24, NULL, &direction_playerss_110_14_0, &direction_playerss_110_14_0, &direction_playerss_110_14_0};
static Image* images_playerss_110_15_0[2];
static Direction direction_playerss_110_15_0 = {0, 10, 10, 0, -1, images_playerss_110_15_0, 2};
static Image* images_playerss_110_15_8[2];
static Direction direction_playerss_110_15_8 = {8, 10, 10, 0, -1, images_playerss_110_15_8, 2};
static Image* images_playerss_110_15_16[2];
static Direction direction_playerss_110_15_16 = {16, 10, 10, 0, -1, images_playerss_110_15_16, 2};
static Image* images_playerss_110_15_24[2];
static Direction direction_playerss_110_15_24 = {24, 10, 10, 0, -1, images_playerss_110_15_24, 2};
static Animation anim_playerss_110_15 = {&direction_playerss_110_15_0, &direction_playerss_110_15_0, &direction_playerss_110_15_0, &direction_playerss_110_15_0, NULL, &direction_playerss_110_15_8, &direction_playerss_110_15_8, &direction_playerss_110_15_8, &direction_playerss_110_15_8, &direction_playerss_110_15_8, &direction_playerss_110_15_8, &direction_playerss_110_15_8, NULL, &direction_playerss_110_15_16, &direction_playerss_110_15_16, &direction_playerss_110_15_16, &direction_playerss_110_15_16, &direction_playerss_110_15_16, &direction_playerss_110_15_16, &direction_playerss_110_15_16, NULL, &direction_playerss_110_15_24, &direction_playerss_110_15_24, &direction_playerss_110_15_24, &direction_playerss_110_15_24, &direction_playerss_110_15_24, &direction_playerss_110_15_24, &direction_playerss_110_15_24, NULL, &direction_playerss_110_15_0, &direction_playerss_110_15_0, &direction_playerss_110_15_0};
static Image* images_playerss_110_16_0[2];
static Direction direction_playerss_110_16_0 = {0, 10, 10, 0, -1, images_playerss_110_16_0, 2};
static Image* images_playerss_110_16_8[2];
static Direction direction_playerss_110_16_8 = {8, 10, 10, 0, -1, images_playerss_110_16_8, 2};
static Image* images_playerss_110_16_16[2];
static Direction direction_playerss_110_16_16 = {16, 10, 10, 0, -1, images_playerss_110_16_16, 2};
static Image* images_playerss_110_16_24[2];
static Direction direction_playerss_110_16_24 = {24, 10, 10, 0, -1, images_playerss_110_16_24, 2};
static Animation anim_playerss_110_16 = {&direction_playerss_110_16_0, &direction_playerss_110_16_0, &direction_playerss_110_16_0, &direction_playerss_110_16_0, NULL, &direction_playerss_110_16_8, &direction_playerss_110_16_8, &direction_playerss_110_16_8, &direction_playerss_110_16_8, &direction_playerss_110_16_8, &direction_playerss_110_16_8, &direction_playerss_110_16_8, NULL, &direction_playerss_110_16_16, &direction_playerss_110_16_16, &direction_playerss_110_16_16, &direction_playerss_110_16_16, &direction_playerss_110_16_16, &direction_playerss_110_16_16, &direction_playerss_110_16_16, NULL, &direction_playerss_110_16_24, &direction_playerss_110_16_24, &direction_playerss_110_16_24, &direction_playerss_110_16_24, &direction_playerss_110_16_24, &direction_playerss_110_16_24, &direction_playerss_110_16_24, NULL, &direction_playerss_110_16_0, &direction_playerss_110_16_0, &direction_playerss_110_16_0};
static Image* images_playerss_110_17_0[2];
static Direction direction_playerss_110_17_0 = {0, 5, 5, 1, -1, images_playerss_110_17_0, 2};
static Image* images_playerss_110_17_8[2];
static Direction direction_playerss_110_17_8 = {8, 5, 5, 1, -1, images_playerss_110_17_8, 2};
static Image* images_playerss_110_17_16[2];
static Direction direction_playerss_110_17_16 = {16, 5, 5, 1, -1, images_playerss_110_17_16, 2};
static Image* images_playerss_110_17_24[2];
static Direction direction_playerss_110_17_24 = {24, 5, 5, 1, -1, images_playerss_110_17_24, 2};
static Animation anim_playerss_110_17 = {&direction_playerss_110_17_0, &direction_playerss_110_17_0, &direction_playerss_110_17_0, &direction_playerss_110_17_0, NULL, &direction_playerss_110_17_8, &direction_playerss_110_17_8, &direction_playerss_110_17_8, &direction_playerss_110_17_8, &direction_playerss_110_17_8, &direction_playerss_110_17_8, &direction_playerss_110_17_8, NULL, &direction_playerss_110_17_16, &direction_playerss_110_17_16, &direction_playerss_110_17_16, &direction_playerss_110_17_16, &direction_playerss_110_17_16, &direction_playerss_110_17_16, &direction_playerss_110_17_16, NULL, &direction_playerss_110_17_24, &direction_playerss_110_17_24, &direction_playerss_110_17_24, &direction_playerss_110_17_24, &direction_playerss_110_17_24, &direction_playerss_110_17_24, &direction_playerss_110_17_24, NULL, &direction_playerss_110_17_0, &direction_playerss_110_17_0, &direction_playerss_110_17_0};
static Image* images_playerss_110_18_24[8];
static Direction direction_playerss_110_18_24 = {24, 10, 10, 0, -1, images_playerss_110_18_24, 8};
static Animation anim_playerss_110_18 = {&direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, NULL, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24, &direction_playerss_110_18_24};
static Image* images_playerss_110_19_24[5];
static Direction direction_playerss_110_19_24 = {24, 10, 10, 0, -1, images_playerss_110_19_24, 5};
static Animation anim_playerss_110_19 = {&direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, NULL, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24, &direction_playerss_110_19_24};
static Animation * anim_array_playerss_110[20] = {&anim_playerss_110_0, NULL, NULL, NULL, &anim_playerss_110_4, NULL, &anim_playerss_110_6, &anim_playerss_110_7, &anim_playerss_110_8, NULL, &anim_playerss_110_10, &anim_playerss_110_11, &anim_playerss_110_12, &anim_playerss_110_13, &anim_playerss_110_14, &anim_playerss_110_15, &anim_playerss_110_16, &anim_playerss_110_17, &anim_playerss_110_18, &anim_playerss_110_19};
static Animations anim_playerss_110 = {20, &anim_array_playerss_110[0]};
static bool anim_playerss_110_initialized;
class PlayerSS_110 : public Active
{
public:
    PlayerSS_110(int x, int y) : Active(x, y, PlayerSS_110_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_ SS", 10);
#endif
        this->animations = &anim_playerss_110;
        if (!anim_playerss_110_initialized) {
            anim_playerss_110_initialized = true;
            images_playerss_110_0_0[0] = get_internal_image(3392);
            images_playerss_110_0_0[1] = get_internal_image(3393);
            images_playerss_110_0_8[0] = get_internal_image(3398);
            images_playerss_110_0_8[1] = get_internal_image(3399);
            images_playerss_110_0_16[0] = get_internal_image(3394);
            images_playerss_110_0_16[1] = get_internal_image(3395);
            images_playerss_110_0_24[0] = get_internal_image(3396);
            images_playerss_110_0_24[1] = get_internal_image(3397);
            images_playerss_110_4_0[0] = get_internal_image(369);
            images_playerss_110_4_0[1] = get_internal_image(373);
            images_playerss_110_4_0[2] = get_internal_image(369);
            images_playerss_110_4_0[3] = get_internal_image(373);
            images_playerss_110_4_16[0] = get_internal_image(371);
            images_playerss_110_4_16[1] = get_internal_image(763);
            images_playerss_110_4_16[2] = get_internal_image(371);
            images_playerss_110_4_16[3] = get_internal_image(763);
            images_playerss_110_6_0[0] = get_internal_image(3403);
            images_playerss_110_6_8[0] = get_internal_image(3402);
            images_playerss_110_6_16[0] = get_internal_image(3400);
            images_playerss_110_6_24[0] = get_internal_image(3401);
            images_playerss_110_7_0[0] = get_internal_image(3406);
            images_playerss_110_7_0[1] = get_internal_image(3405);
            images_playerss_110_7_8[0] = get_internal_image(3410);
            images_playerss_110_7_8[1] = get_internal_image(3411);
            images_playerss_110_7_16[0] = get_internal_image(3404);
            images_playerss_110_7_16[1] = get_internal_image(3407);
            images_playerss_110_7_24[0] = get_internal_image(3408);
            images_playerss_110_7_24[1] = get_internal_image(3409);
            images_playerss_110_8_0[0] = get_internal_image(2679);
            images_playerss_110_8_24[0] = get_internal_image(3415);
            images_playerss_110_10_0[0] = get_internal_image(3267);
            images_playerss_110_10_0[1] = get_internal_image(3269);
            images_playerss_110_10_0[2] = get_internal_image(3270);
            images_playerss_110_10_0[3] = get_internal_image(3266);
            images_playerss_110_10_0[4] = get_internal_image(3265);
            images_playerss_110_11_0[0] = get_internal_image(3118);
            images_playerss_110_11_0[1] = get_internal_image(3117);
            images_playerss_110_11_8[0] = get_internal_image(3120);
            images_playerss_110_11_8[1] = get_internal_image(3121);
            images_playerss_110_11_16[0] = get_internal_image(3116);
            images_playerss_110_11_16[1] = get_internal_image(3119);
            images_playerss_110_11_24[0] = get_internal_image(3122);
            images_playerss_110_11_24[1] = get_internal_image(3123);
            images_playerss_110_12_0[0] = get_internal_image(3124);
            images_playerss_110_12_0[1] = get_internal_image(3126);
            images_playerss_110_12_8[0] = get_internal_image(3129);
            images_playerss_110_12_8[1] = get_internal_image(3131);
            images_playerss_110_12_16[0] = get_internal_image(3125);
            images_playerss_110_12_16[1] = get_internal_image(3127);
            images_playerss_110_12_24[0] = get_internal_image(3128);
            images_playerss_110_12_24[1] = get_internal_image(3130);
            images_playerss_110_13_0[0] = get_internal_image(3134);
            images_playerss_110_13_0[1] = get_internal_image(3133);
            images_playerss_110_13_8[0] = get_internal_image(3138);
            images_playerss_110_13_8[1] = get_internal_image(3137);
            images_playerss_110_13_16[0] = get_internal_image(3132);
            images_playerss_110_13_16[1] = get_internal_image(3135);
            images_playerss_110_13_24[0] = get_internal_image(3136);
            images_playerss_110_13_24[1] = get_internal_image(3139);
            images_playerss_110_14_0[0] = get_internal_image(3142);
            images_playerss_110_14_0[1] = get_internal_image(3141);
            images_playerss_110_14_8[0] = get_internal_image(3148);
            images_playerss_110_14_8[1] = get_internal_image(3147);
            images_playerss_110_14_16[0] = get_internal_image(3140);
            images_playerss_110_14_16[1] = get_internal_image(3143);
            images_playerss_110_14_24[0] = get_internal_image(3144);
            images_playerss_110_14_24[1] = get_internal_image(3145);
            images_playerss_110_15_0[0] = get_internal_image(3150);
            images_playerss_110_15_0[1] = get_internal_image(3149);
            images_playerss_110_15_8[0] = get_internal_image(3154);
            images_playerss_110_15_8[1] = get_internal_image(3155);
            images_playerss_110_15_16[0] = get_internal_image(3146);
            images_playerss_110_15_16[1] = get_internal_image(3151);
            images_playerss_110_15_24[0] = get_internal_image(3152);
            images_playerss_110_15_24[1] = get_internal_image(3153);
            images_playerss_110_16_0[0] = get_internal_image(1865);
            images_playerss_110_16_0[1] = get_internal_image(1866);
            images_playerss_110_16_8[0] = get_internal_image(1611);
            images_playerss_110_16_8[1] = get_internal_image(1610);
            images_playerss_110_16_16[0] = get_internal_image(1867);
            images_playerss_110_16_16[1] = get_internal_image(1868);
            images_playerss_110_16_24[0] = get_internal_image(1608);
            images_playerss_110_16_24[1] = get_internal_image(1609);
            images_playerss_110_17_0[0] = get_internal_image(2681);
            images_playerss_110_17_0[1] = get_internal_image(2680);
            images_playerss_110_17_8[0] = get_internal_image(2684);
            images_playerss_110_17_8[1] = get_internal_image(2685);
            images_playerss_110_17_16[0] = get_internal_image(2682);
            images_playerss_110_17_16[1] = get_internal_image(2683);
            images_playerss_110_17_24[0] = get_internal_image(2677);
            images_playerss_110_17_24[1] = get_internal_image(2678);
            images_playerss_110_18_24[0] = get_internal_image(1989);
            images_playerss_110_18_24[1] = get_internal_image(1997);
            images_playerss_110_18_24[2] = get_internal_image(2006);
            images_playerss_110_18_24[3] = get_internal_image(2048);
            images_playerss_110_18_24[4] = get_internal_image(2039);
            images_playerss_110_18_24[5] = get_internal_image(2042);
            images_playerss_110_18_24[6] = get_internal_image(2006);
            images_playerss_110_18_24[7] = get_internal_image(2052);
            images_playerss_110_19_24[0] = get_internal_image(2134);
            images_playerss_110_19_24[1] = get_internal_image(2135);
            images_playerss_110_19_24[2] = get_internal_image(2135);
            images_playerss_110_19_24[3] = get_internal_image(2133);
            images_playerss_110_19_24[4] = get_internal_image(2133);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_playerss_110(int x, int y)
{
    return new (Active::pool.create()) PlayerSS_110(x, y);
}
