#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class Backdrop_524 : public Backdrop
{
public:
    Backdrop_524(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
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
        blend_color = Color(255, 255, 255, 25);
    }
};
FrameObject * create_backdrop_524(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_524(x, y);
}
class OverallScore_525 : public Text
{
public:
    OverallScore_525(int x, int y) : Text(x, y, OverallScore_525_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("overall score", 13);
#endif
        flags &= ~SCROLL;
        width = 240;
        height = 32;
        blend_color = Color(255, 128, 0);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_BOTTOM;
        add_line(std::string("SHANKTON STATE PEN!", 19));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_overallscore_525(int x, int y)
{
    return new (Text::pool.create()) OverallScore_525(x, y);
}
class GetObject_526 : public HTTPObject
{
public:
    GetObject_526(int x, int y) : HTTPObject(x, y, GetObject_526_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Get object", 10);
#endif
    }
};
FrameObject * create_getobject_526(int x, int y)
{
    return new (HTTPObject::pool.create()) GetObject_526(x, y);
}
class StringParser_527 : public StringParser
{
public:
    StringParser_527(int x, int y) : StringParser(x, y, StringParser_527_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String Parser", 13);
#endif
    }
};
FrameObject * create_stringparser_527(int x, int y)
{
    return new (StringParser::pool.create()) StringParser_527(x, y);
}
class Done_528 : public Text
{
public:
    Done_528(int x, int y) : Text(x, y, Done_528_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("done", 4);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 240;
        height = 13;
        blend_color = Color(102, 102, 102);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("DONE", 4));
        create_alterables();
    }
};
FrameObject * create_done_528(int x, int y)
{
    return new (Text::pool.create()) Done_528(x, y);
}
static Image* images_mouse_529_0_0[1];
static Direction direction_mouse_529_0_0 = {0, 1, 1, 0, -1, images_mouse_529_0_0, 1};
static Animation anim_mouse_529_0 = {&direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, NULL, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0, &direction_mouse_529_0_0};
static Image* images_mouse_529_6_0[1];
static Direction direction_mouse_529_6_0 = {0, 50, 50, 0, -1, images_mouse_529_6_0, 1};
static Animation anim_mouse_529_6 = {&direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, NULL, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0, &direction_mouse_529_6_0};
static Image* images_mouse_529_12_0[4];
static Direction direction_mouse_529_12_0 = {0, 15, 15, 0, -1, images_mouse_529_12_0, 4};
static Animation anim_mouse_529_12 = {&direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, NULL, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0, &direction_mouse_529_12_0};
static Image* images_mouse_529_13_0[1];
static Direction direction_mouse_529_13_0 = {0, 50, 50, 0, -1, images_mouse_529_13_0, 1};
static Animation anim_mouse_529_13 = {&direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, NULL, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0, &direction_mouse_529_13_0};
static Image* images_mouse_529_14_0[4];
static Direction direction_mouse_529_14_0 = {0, 15, 15, 0, -1, images_mouse_529_14_0, 4};
static Animation anim_mouse_529_14 = {&direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, NULL, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0, &direction_mouse_529_14_0};
static Animation * anim_array_mouse_529[15] = {&anim_mouse_529_0, NULL, NULL, NULL, NULL, NULL, &anim_mouse_529_6, NULL, NULL, NULL, NULL, NULL, &anim_mouse_529_12, &anim_mouse_529_13, &anim_mouse_529_14};
static Animations anim_mouse_529 = {15, &anim_array_mouse_529[0]};
static bool anim_mouse_529_initialized;
class Mouse_529 : public Active
{
public:
    Mouse_529(int x, int y) : Active(x, y, Mouse_529_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Mouse", 5);
#endif
        this->animations = &anim_mouse_529;
        if (!anim_mouse_529_initialized) {
            anim_mouse_529_initialized = true;
            images_mouse_529_0_0[0] = get_internal_image(18);
            images_mouse_529_6_0[0] = get_internal_image(25);
            images_mouse_529_12_0[0] = get_internal_image(215);
            images_mouse_529_12_0[1] = get_internal_image(199);
            images_mouse_529_12_0[2] = get_internal_image(217);
            images_mouse_529_12_0[3] = get_internal_image(199);
            images_mouse_529_13_0[0] = get_internal_image(189);
            images_mouse_529_14_0[0] = get_internal_image(216);
            images_mouse_529_14_0[1] = get_internal_image(218);
            images_mouse_529_14_0[2] = get_internal_image(219);
            images_mouse_529_14_0[3] = get_internal_image(218);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_mouse_529(int x, int y)
{
    return new (Active::pool.create()) Mouse_529(x, y);
}
class YouEscaped_530 : public Text
{
public:
    YouEscaped_530(int x, int y) : Text(x, y, YouEscaped_530_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("you escaped", 11);
#endif
        flags &= ~SCROLL;
        width = 240;
        height = 32;
        blend_color = Color(255, 128, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_BOTTOM;
        add_line(std::string("YOU ESCAPED", 11));
        blend_color.a = 255;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_youescaped_530(int x, int y)
{
    return new (Text::pool.create()) YouEscaped_530(x, y);
}
class LBname_531 : public EditObject
{
public:
    LBname_531(int x, int y) : EditObject(x, y, LBname_531_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LBname", 6);
#endif
        width = 200;
        height = 23;
        edit_flags |= PASSWORD;
    }
};
FrameObject * create_lbname_531(int x, int y)
{
    return new (EditObject::pool.create()) LBname_531(x, y);
}
class EnterAName_532 : public Text
{
public:
    EnterAName_532(int x, int y) : Text(x, y, EnterAName_532_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("enter a name", 12);
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
        add_line(std::string("Enter a name for the leaderboards", 33));
        create_alterables();
    }
};
FrameObject * create_enteraname_532(int x, int y)
{
    return new (Text::pool.create()) EnterAName_532(x, y);
}
class Slot5_533 : public Text
{
public:
    Slot5_533(int x, int y) : Text(x, y, Slot5_533_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("slot 5", 6);
#endif
        flags &= ~SCROLL;
        width = 118;
        height = 11;
        blend_color = Color(255, 255, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("Moobles", 7));
        create_alterables();
    }
};
FrameObject * create_slot5_533(int x, int y)
{
    return new (Text::pool.create()) Slot5_533(x, y);
}
class QuickBackdrop_534 : public QuickBackdrop
{
public:
    QuickBackdrop_534(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
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
        blend_color = Color(0, 0, 0, 225);
    }
};
FrameObject * create_quickbackdrop_534(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_534(x, y);
}
static Image* images_fieldspeechfile_535_0_0[1];
static Direction direction_fieldspeechfile_535_0_0 = {0, 50, 50, 0, 1, images_fieldspeechfile_535_0_0, 1};
static Animation anim_fieldspeechfile_535_0 = {&direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, NULL, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0, &direction_fieldspeechfile_535_0_0};
static Animation * anim_array_fieldspeechfile_535[1] = {&anim_fieldspeechfile_535_0};
static Animations anim_fieldspeechfile_535 = {1, &anim_array_fieldspeechfile_535[0]};
static bool anim_fieldspeechfile_535_initialized;
class FieldSpeechFile_535 : public Active
{
public:
    FieldSpeechFile_535(int x, int y) : Active(x, y, FieldSpeechFile_535_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("field_speechFile", 16);
#endif
        this->animations = &anim_fieldspeechfile_535;
        if (!anim_fieldspeechfile_535_initialized) {
            anim_fieldspeechfile_535_initialized = true;
            images_fieldspeechfile_535_0_0[0] = get_internal_image(773);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_fieldspeechfile_535(int x, int y)
{
    return new (Active::pool.create()) FieldSpeechFile_535(x, y);
}
class Filth_536 : public Text
{
public:
    Filth_536(int x, int y) : Text(x, y, Filth_536_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("filth", 5);
#endif
        flags &= ~SCROLL;
        width = 314;
        height = 11;
        blend_color = Color(255, 0, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("ERROR MSG", 9));
        create_alterables();
    }
};
FrameObject * create_filth_536(int x, int y)
{
    return new (Text::pool.create()) Filth_536(x, y);
}
class Counter_537 : public Counter
{
public:
    Counter_537(int x, int y) : Counter(x, y, Counter_537_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Counter", 7);
#endif
        flags &= ~SCROLL;
        width = 11;
        height = 240;
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
        minimum = 0;
        maximum = 100;
        set(100);
    }
};
FrameObject * create_counter_537(int x, int y)
{
    return new (Counter::pool.create()) Counter_537(x, y);
}
static Image* images_submitted_539_0_0[1];
static Direction direction_submitted_539_0_0 = {0, 50, 50, 0, 1, images_submitted_539_0_0, 1};
static Animation anim_submitted_539_0 = {&direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, NULL, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0, &direction_submitted_539_0_0};
static Image* images_submitted_539_2_0[1];
static Direction direction_submitted_539_2_0 = {0, 50, 50, 0, -1, images_submitted_539_2_0, 1};
static Animation anim_submitted_539_2 = {&direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, NULL, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0, &direction_submitted_539_2_0};
static Animation * anim_array_submitted_539[3] = {&anim_submitted_539_0, NULL, &anim_submitted_539_2};
static Animations anim_submitted_539 = {3, &anim_array_submitted_539[0]};
static bool anim_submitted_539_initialized;
class Submitted_539 : public Active
{
public:
    Submitted_539(int x, int y) : Active(x, y, Submitted_539_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("submitted", 9);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_submitted_539;
        if (!anim_submitted_539_initialized) {
            anim_submitted_539_initialized = true;
            images_submitted_539_0_0[0] = get_internal_image(1466);
            images_submitted_539_2_0[0] = get_internal_image(1467);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 25);
        create_alterables();
    }
};
FrameObject * create_submitted_539(int x, int y)
{
    return new (Active::pool.create()) Submitted_539(x, y);
}
class DChar2_540 : public Text
{
public:
    DChar2_540(int x, int y) : Text(x, y, DChar2_540_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("D_Char 2", 8);
#endif
        flags &= ~SCROLL;
        width = 263;
        height = 56;
        blend_color = Color(255, 255, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("DAYS TAKEN:\r\nAVG GUARD HEAT:\r\nPLAYTIME:\r\n\r\nSCORE:", 49));
        create_alterables();
    }
};
FrameObject * create_dchar2_540(int x, int y)
{
    return new (Text::pool.create()) DChar2_540(x, y);
}
class OverallScore2_541 : public Text
{
public:
    OverallScore2_541(int x, int y) : Text(x, y, OverallScore2_541_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("overall score 2", 15);
#endif
        flags &= ~SCROLL;
        width = 240;
        height = 15;
        blend_color = Color(255, 128, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_BOTTOM;
        add_line(std::string("OVERALL SCORE", 13));
        blend_color.a = 255;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_overallscore2_541(int x, int y)
{
    return new (Text::pool.create()) OverallScore2_541(x, y);
}
class OverallScore3_542 : public Text
{
public:
    OverallScore3_542(int x, int y) : Text(x, y, OverallScore3_542_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("overall score 3", 15);
#endif
        flags &= ~SCROLL;
        width = 240;
        height = 11;
        blend_color = Color(255, 255, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_BOTTOM;
        add_line(std::string("OVERALL SCORE", 13));
        blend_color.a = 255;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_overallscore3_542(int x, int y)
{
    return new (Text::pool.create()) OverallScore3_542(x, y);
}
class Backdrop5_543 : public Backdrop
{
public:
    Backdrop5_543(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 5", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_5
        manager.frame->back_instances[BACK_ID_BACKDROP_5].push_back(this);
#endif
        image = get_internal_image(2335);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 105);
        set_shader(Render::DISPLAY);
        set_shader_parameter(std::string("fPeriods", 8), 1000.0);
        set_shader_parameter(std::string("fOffset", 7), 0.0);
        set_shader_parameter(std::string("fAmplitude", 10), 0.00800000037998);
    }
};
FrameObject * create_backdrop5_543(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop5_543(x, y);
}
class QuickBackdrop2_544 : public QuickBackdrop
{
public:
    QuickBackdrop2_544(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 2", 16);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
        width = 355;
        height = 140;
        color = Color(0, 0, 0);
        gradient_type = VERTICAL_GRADIENT;
        color2 = Color(255, 255, 255);
        outline = 0;
        set_shader(Render::SUBTRACT);
    }
};
FrameObject * create_quickbackdrop2_544(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop2_544(x, y);
}
class QuickBackdrop3_545 : public QuickBackdrop
{
public:
    QuickBackdrop3_545(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 3", 16);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
        width = 355;
        height = 140;
        color = Color(255, 255, 255);
        gradient_type = VERTICAL_GRADIENT;
        color2 = Color(0, 0, 0);
        outline = 0;
        set_shader(Render::SUBTRACT);
    }
};
FrameObject * create_quickbackdrop3_545(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop3_545(x, y);
}
class Names_546 : public Text
{
public:
    Names_546(int x, int y) : Text(x, y, Names_546_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Names", 5);
#endif
        flags &= ~SCROLL;
        width = 123;
        height = 122;
        blend_color = Color(255, 255, 224);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("Player\r\nEnya\r\nBraime\r\nMcDoug\r\nSnotling\r\nFerret\r\nHairy\r\nNoblo\r\nCopshop\r\nMoron", 76));
        create_alterables();
    }
};
FrameObject * create_names_546(int x, int y)
{
    return new (Text::pool.create()) Names_546(x, y);
}
class HeadName_547 : public Text
{
public:
    HeadName_547(int x, int y) : Text(x, y, HeadName_547_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("head_name", 9);
#endif
        flags &= ~SCROLL;
        width = 87;
        height = 14;
        blend_color = Color(102, 102, 102);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_VCENTER;
        add_line(std::string("Steam Name  ", 12));
        create_alterables();
    }
};
FrameObject * create_headname_547(int x, int y)
{
    return new (Text::pool.create()) HeadName_547(x, y);
}
class Score_548 : public Text
{
public:
    Score_548(int x, int y) : Text(x, y, Score_548_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Score", 5);
#endif
        flags &= ~SCROLL;
        width = 47;
        height = 119;
        blend_color = Color(125, 158, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("100010\r\n10030\r\n647\r\n47467\r\n4567\r\n4623\r\n43527\r\n5356\r\n2746\r\n14516", 63));
        create_alterables();
    }
};
FrameObject * create_score_548(int x, int y)
{
    return new (Text::pool.create()) Score_548(x, y);
}
class QuickBackdrop_549 : public QuickBackdrop
{
public:
    QuickBackdrop_549(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
        width = 214;
        height = 120;
        image = get_internal_image(959);
        outline = 0;
        blend_color = Color(255, 255, 255, 55);
    }
};
FrameObject * create_quickbackdrop_549(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_549(x, y);
}
class Numbes_550 : public Text
{
public:
    Numbes_550(int x, int y) : Text(x, y, Numbes_550_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("numbes", 6);
#endif
        flags &= ~SCROLL;
        width = 20;
        height = 110;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("1.\r\n2.\r\n3.\r\n4.\r\n5.\r\n6.\r\n7.\r\n8.\r\n9.\r\n10.", 39));
        create_alterables();
    }
};
FrameObject * create_numbes_550(int x, int y)
{
    return new (Text::pool.create()) Numbes_550(x, y);
}
class Time_551 : public Text
{
public:
    Time_551(int x, int y) : Text(x, y, Time_551_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("time", 4);
#endif
        flags &= ~SCROLL;
        width = 30;
        height = 119;
        blend_color = Color(125, 158, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("1hr5\r\n56m\r\n34m\r\n33m\r\n28m\r\n26m\r\n15m\r\n12m\r\n11m\r\n4m", 48));
        create_alterables();
    }
};
FrameObject * create_time_551(int x, int y)
{
    return new (Text::pool.create()) Time_551(x, y);
}
static Image* images_active_552_0_0[4];
static Direction direction_active_552_0_0 = {0, 15, 15, 0, -1, images_active_552_0_0, 4};
static Animation anim_active_552_0 = {&direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, NULL, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0, &direction_active_552_0_0};
static Animation * anim_array_active_552[1] = {&anim_active_552_0};
static Animations anim_active_552 = {1, &anim_array_active_552[0]};
static bool anim_active_552_initialized;
class Active_552 : public Active
{
public:
    Active_552(int x, int y) : Active(x, y, Active_552_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        set_visible(false);
        this->animations = &anim_active_552;
        if (!anim_active_552_initialized) {
            anim_active_552_initialized = true;
            images_active_552_0_0[0] = get_internal_image(1024);
            images_active_552_0_0[1] = get_internal_image(1028);
            images_active_552_0_0[2] = get_internal_image(1029);
            images_active_552_0_0[3] = get_internal_image(1028);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active_552(int x, int y)
{
    return new (Active::pool.create()) Active_552(x, y);
}
static Image* images_active2_553_0_0[4];
static Direction direction_active2_553_0_0 = {0, 15, 15, 0, -1, images_active2_553_0_0, 4};
static Animation anim_active2_553_0 = {&direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, NULL, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0, &direction_active2_553_0_0};
static Animation * anim_array_active2_553[1] = {&anim_active2_553_0};
static Animations anim_active2_553 = {1, &anim_array_active2_553[0]};
static bool anim_active2_553_initialized;
class Active2_553 : public Active
{
public:
    Active2_553(int x, int y) : Active(x, y, Active2_553_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        set_visible(false);
        this->animations = &anim_active2_553;
        if (!anim_active2_553_initialized) {
            anim_active2_553_initialized = true;
            images_active2_553_0_0[0] = get_internal_image(1032);
            images_active2_553_0_0[1] = get_internal_image(1033);
            images_active2_553_0_0[2] = get_internal_image(1034);
            images_active2_553_0_0[3] = get_internal_image(1033);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active2_553(int x, int y)
{
    return new (Active::pool.create()) Active2_553(x, y);
}
static Image* images_active4_554_5_0[1];
static Direction direction_active4_554_5_0 = {0, 50, 50, 0, -1, images_active4_554_5_0, 1};
static Image* images_active4_554_5_16[1];
static Direction direction_active4_554_5_16 = {16, 50, 50, 0, 1, images_active4_554_5_16, 1};
static Animation anim_active4_554_5 = {&direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0, NULL, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, &direction_active4_554_5_16, NULL, &direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0, &direction_active4_554_5_0};
static Animation * anim_array_active4_554[6] = {NULL, NULL, NULL, NULL, NULL, &anim_active4_554_5};
static Animations anim_active4_554 = {6, &anim_array_active4_554[0]};
static bool anim_active4_554_initialized;
class Active4_554 : public Active
{
public:
    Active4_554(int x, int y) : Active(x, y, Active4_554_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 4", 8);
#endif
        this->animations = &anim_active4_554;
        if (!anim_active4_554_initialized) {
            anim_active4_554_initialized = true;
            images_active4_554_5_0[0] = get_internal_image(1027);
            images_active4_554_5_16[0] = get_internal_image(1030);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active4_554(int x, int y)
{
    return new (Active::pool.create()) Active4_554(x, y);
}
class Return_555 : public Text
{
public:
    Return_555(int x, int y) : Text(x, y, Return_555_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("return", 6);
#endif
        flags &= ~SCROLL;
        width = 104;
        height = 10;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("return", 6));
        create_alterables();
    }
};
FrameObject * create_return_555(int x, int y)
{
    return new (Text::pool.create()) Return_555(x, y);
}
class Map_556 : public Text
{
public:
    Map_556(int x, int y) : Text(x, y, Map_556_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("map", 3);
#endif
        flags &= ~SCROLL;
        width = 191;
        height = 9;
        blend_color = Color(198, 99, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("...", 3));
        create_alterables();
    }
};
FrameObject * create_map_556(int x, int y)
{
    return new (Text::pool.create()) Map_556(x, y);
}
static Image* images_active3_557_0_0[2];
static Direction direction_active3_557_0_0 = {0, 10, 10, 0, -1, images_active3_557_0_0, 2};
static Animation anim_active3_557_0 = {&direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, NULL, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0, &direction_active3_557_0_0};
static Animation * anim_array_active3_557[1] = {&anim_active3_557_0};
static Animations anim_active3_557 = {1, &anim_array_active3_557[0]};
static bool anim_active3_557_initialized;
class Active3_557 : public Active
{
public:
    Active3_557(int x, int y) : Active(x, y, Active3_557_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 3", 8);
#endif
        this->animations = &anim_active3_557;
        if (!anim_active3_557_initialized) {
            anim_active3_557_initialized = true;
            images_active3_557_0_0[0] = get_internal_image(342);
            images_active3_557_0_0[1] = get_internal_image(3894);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active3_557(int x, int y)
{
    return new (Active::pool.create()) Active3_557(x, y);
}
static Image* images_active5_558_0_0[2];
static Direction direction_active5_558_0_0 = {0, 10, 10, 0, -1, images_active5_558_0_0, 2};
static Animation anim_active5_558_0 = {&direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, NULL, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0, &direction_active5_558_0_0};
static Animation * anim_array_active5_558[1] = {&anim_active5_558_0};
static Animations anim_active5_558 = {1, &anim_array_active5_558[0]};
static bool anim_active5_558_initialized;
class Active5_558 : public Active
{
public:
    Active5_558(int x, int y) : Active(x, y, Active5_558_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 5", 8);
#endif
        this->animations = &anim_active5_558;
        if (!anim_active5_558_initialized) {
            anim_active5_558_initialized = true;
            images_active5_558_0_0[0] = get_internal_image(3895);
            images_active5_558_0_0[1] = get_internal_image(351);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active5_558(int x, int y)
{
    return new (Active::pool.create()) Active5_558(x, y);
}
class Backdrop2_559 : public Backdrop
{
public:
    Backdrop2_559(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 2", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_2
        manager.frame->back_instances[BACK_ID_BACKDROP_2].push_back(this);
#endif
        image = get_internal_image(59);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop2_559(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop2_559(x, y);
}
static Image* images_hover_560_0_0[1];
static Direction direction_hover_560_0_0 = {0, 50, 50, 0, 1, images_hover_560_0_0, 1};
static Animation anim_hover_560_0 = {&direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, NULL, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0, &direction_hover_560_0_0};
static Animation * anim_array_hover_560[1] = {&anim_hover_560_0};
static Animations anim_hover_560 = {1, &anim_array_hover_560[0]};
static bool anim_hover_560_initialized;
class Hover_560 : public Active
{
public:
    Hover_560(int x, int y) : Active(x, y, Hover_560_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("hover", 5);
#endif
        set_visible(false);
        this->animations = &anim_hover_560;
        if (!anim_hover_560_initialized) {
            anim_hover_560_initialized = true;
            images_hover_560_0_0[0] = get_internal_image(977);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_hover_560(int x, int y)
{
    return new (Active::pool.create()) Hover_560(x, y);
}
static Image* images_active6_561_0_0[4];
static Direction direction_active6_561_0_0 = {0, 15, 15, 0, -1, images_active6_561_0_0, 4};
static Animation anim_active6_561_0 = {&direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, NULL, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0, &direction_active6_561_0_0};
static Animation * anim_array_active6_561[1] = {&anim_active6_561_0};
static Animations anim_active6_561 = {1, &anim_array_active6_561[0]};
static bool anim_active6_561_initialized;
class Active6_561 : public Active
{
public:
    Active6_561(int x, int y) : Active(x, y, Active6_561_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 6", 8);
#endif
        this->animations = &anim_active6_561;
        if (!anim_active6_561_initialized) {
            anim_active6_561_initialized = true;
            images_active6_561_0_0[0] = get_internal_image(1473);
            images_active6_561_0_0[1] = get_internal_image(1567);
            images_active6_561_0_0[2] = get_internal_image(2353);
            images_active6_561_0_0[3] = get_internal_image(2365);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        blend_color = Color(255, 255, 255, 95);
        create_alterables();
    }
};
FrameObject * create_active6_561(int x, int y)
{
    return new (Active::pool.create()) Active6_561(x, y);
}
class List_562 : public ListObject
{
public:
    List_562(int x, int y) : ListObject(x, y, List_562_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("List", 4);
#endif
        add_line(std::string("Center Perks@perks", 18));
        add_line(std::string("Stalag Flucht@stalagflucht", 26));
        add_line(std::string("Shankton State Pen@shanktonstatepen", 35));
        add_line(std::string("Jungle Compound@jungle", 22));
        add_line(std::string("San Pancho@sanpancho", 20));
        add_line(std::string("HMP Irongate@irongate", 21));
        add_line(std::string("Fort Bamford@fortbamford", 24));
        add_line(std::string("Camp Epsilon@campepsilon", 24));
        add_line(std::string("Paris Central Pen@pcpen", 23));
        add_line(std::string("London Tower@TOL", 16));
        add_line(std::string("Banned Camp@BC", 14));
        add_line(std::string("Jingle Cells@CCL", 16));
        index_offset = current_line = -1;
    }
};
FrameObject * create_list_562(int x, int y)
{
    return new (ListObject::pool.create()) List_562(x, y);
}
class Header_563 : public Text
{
public:
    Header_563(int x, int y) : Text(x, y, Header_563_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("header", 6);
#endif
        flags &= ~SCROLL;
        width = 150;
        height = 14;
        blend_color = Color(255, 128, 0);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("TOP ESCAPISTS", 13));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_header_563(int x, int y)
{
    return new (Text::pool.create()) Header_563(x, y);
}
class HeadScore_564 : public Text
{
public:
    HeadScore_564(int x, int y) : Text(x, y, HeadScore_564_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("head_score", 10);
#endif
        flags &= ~SCROLL;
        width = 57;
        height = 14;
        blend_color = Color(102, 102, 102);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_VCENTER;
        add_line(std::string("Score", 5));
        create_alterables();
    }
};
FrameObject * create_headscore_564(int x, int y)
{
    return new (Text::pool.create()) HeadScore_564(x, y);
}
class HeadDays_565 : public Text
{
public:
    HeadDays_565(int x, int y) : Text(x, y, HeadDays_565_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("head_days", 9);
#endif
        flags &= ~SCROLL;
        width = 33;
        height = 14;
        blend_color = Color(102, 102, 102);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_VCENTER;
        add_line(std::string("Days", 4));
        create_alterables();
    }
};
FrameObject * create_headdays_565(int x, int y)
{
    return new (Text::pool.create()) HeadDays_565(x, y);
}
class Backdrop5_567 : public Backdrop
{
public:
    Backdrop5_567(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 5", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_5
        manager.frame->back_instances[BACK_ID_BACKDROP_5].push_back(this);
#endif
        image = get_internal_image(2405);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop5_567(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop5_567(x, y);
}
class Music_568 : public Text
{
public:
    Music_568(int x, int y) : Text(x, y, Music_568_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("music", 5);
#endif
        flags &= ~SCROLL;
        width = 60;
        height = 12;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("Music:", 6));
        create_alterables();
    }
};
FrameObject * create_music_568(int x, int y)
{
    return new (Text::pool.create()) Music_568(x, y);
}
static Image* images_settingsDoneButton_5_0[1];
static Direction direction_settingsDoneButton_5_0 = {0, 50, 50, 0, -1, images_settingsDoneButton_5_0, 1};
static Image* images_settingsDoneButton_5_16[1];
static Direction direction_settingsDoneButton_5_16 = {16, 50, 50, 0, 1, images_settingsDoneButton_5_16, 1};
static Animation anim_settingsDoneButton_5 = {&direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, NULL, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, &direction_settingsDoneButton_5_16, NULL, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0, &direction_settingsDoneButton_5_0};
static Animation * anim_array_settingsDoneButton[6] = {NULL, NULL, NULL, NULL, NULL, &anim_settingsDoneButton_5};
static Animations anim_settingsDoneButton = {6, &anim_array_settingsDoneButton[0]};
static bool anim_settingsDoneButton_initialized;
class SettingsDoneButton : public Active
{
public:
    SettingsDoneButton(int x, int y) : Active(x, y, settingsDoneButton_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 4", 8);
#endif
        this->animations = &anim_settingsDoneButton;
        if (!anim_settingsDoneButton_initialized) {
            anim_settingsDoneButton_initialized = true;
            images_settingsDoneButton_5_0[0] = get_internal_image(1438);
            images_settingsDoneButton_5_16[0] = get_internal_image(1440);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_settingsDoneButton(int x, int y)
{
    return new (Active::pool.create()) SettingsDoneButton(x, y);
}
class SettingsDoneText : public Text
{
public:
    SettingsDoneText(int x, int y) : Text(x, y, settingsDoneText_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("done", 4);
#endif
        flags &= ~SCROLL;
        width = 84;
        height = 10;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("done", 4));
        create_alterables();
    }
};
FrameObject * create_settingsDoneText(int x, int y)
{
    return new (Text::pool.create()) SettingsDoneText(x, y);
}
class RemapHeader_571 : public Text
{
public:
    RemapHeader_571(int x, int y) : Text(x, y, RemapHeader_571_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("remap_header", 12);
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
        add_line(std::string("REMAP KEYS", 10));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_remapheader_571(int x, int y)
{
    return new (Text::pool.create()) RemapHeader_571(x, y);
}
static Image* images_slidermusic_572_0_0[1];
static Direction direction_slidermusic_572_0_0 = {0, 50, 50, 0, 1, images_slidermusic_572_0_0, 1};
static Animation anim_slidermusic_572_0 = {&direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, NULL, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0, &direction_slidermusic_572_0_0};
static Animation * anim_array_slidermusic_572[1] = {&anim_slidermusic_572_0};
static Animations anim_slidermusic_572 = {1, &anim_array_slidermusic_572[0]};
static bool anim_slidermusic_572_initialized;
class SliderMusic_572 : public Active
{
public:
    SliderMusic_572(int x, int y) : Active(x, y, SliderMusic_572_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Slider_Music", 12);
#endif
        this->animations = &anim_slidermusic_572;
        if (!anim_slidermusic_572_initialized) {
            anim_slidermusic_572_initialized = true;
            images_slidermusic_572_0_0[0] = get_internal_image(1054);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_slidermusic_572(int x, int y)
{
    return new (Active::pool.create()) SliderMusic_572(x, y);
}
static Image* images_active_573_0_0[1];
static Direction direction_active_573_0_0 = {0, 50, 50, 0, -1, images_active_573_0_0, 1};
static Animation anim_active_573_0 = {&direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, NULL, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0, &direction_active_573_0_0};
static Image* images_active_573_1_0[1];
static Direction direction_active_573_1_0 = {0, 50, 50, 0, -1, images_active_573_1_0, 1};
static Animation anim_active_573_1 = {&direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, NULL, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0, &direction_active_573_1_0};
static Animation * anim_array_active_573[2] = {&anim_active_573_0, &anim_active_573_1};
static Animations anim_active_573 = {2, &anim_array_active_573[0]};
static bool anim_active_573_initialized;
class Active_573 : public Active
{
public:
    Active_573(int x, int y) : Active(x, y, Active_573_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_573;
        if (!anim_active_573_initialized) {
            anim_active_573_initialized = true;
            images_active_573_0_0[0] = get_internal_image(1041);
            images_active_573_1_0[0] = get_internal_image(974);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_active_573(int x, int y)
{
    return new (Active::pool.create()) Active_573(x, y);
}
static Image* images_soundVolumeBar_0_0[1];
static Direction direction_soundVolumeBar_0_0 = {0, 50, 50, 0, 1, images_soundVolumeBar_0_0, 1};
static Animation anim_soundVolumeBar_0 = {&direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, NULL, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0, &direction_soundVolumeBar_0_0};
static Animation * anim_array_soundVolumeBar[1] = {&anim_soundVolumeBar_0};
static Animations anim_soundVolumeBar = {1, &anim_array_soundVolumeBar[0]};
static bool anim_soundVolumeBar_initialized;
class SoundVolumeBar : public Active
{
public:
    SoundVolumeBar(int x, int y) : Active(x, y, soundVolumeBar_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("sfx bar", 7);
#endif
        this->animations = &anim_soundVolumeBar;
        if (!anim_soundVolumeBar_initialized) {
            anim_soundVolumeBar_initialized = true;
            images_soundVolumeBar_0_0[0] = get_internal_image(1283);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_soundVolumeBar(int x, int y)
{
    return new (Active::pool.create()) SoundVolumeBar(x, y);
}
static Image* images_musicVolumeBar_0_0[1];
static Direction direction_musicVolumeBar_0_0 = {0, 50, 50, 0, 1, images_musicVolumeBar_0_0, 1};
static Animation anim_musicVolumeBar_0 = {&direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, NULL, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0, &direction_musicVolumeBar_0_0};
static Animation * anim_array_musicVolumeBar[1] = {&anim_musicVolumeBar_0};
static Animations anim_musicVolumeBar = {1, &anim_array_musicVolumeBar[0]};
static bool anim_musicVolumeBar_initialized;
class MusicVolumeBar : public Active
{
public:
    MusicVolumeBar(int x, int y) : Active(x, y, musicVolumeBar_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("music bar", 9);
#endif
        this->animations = &anim_musicVolumeBar;
        if (!anim_musicVolumeBar_initialized) {
            anim_musicVolumeBar_initialized = true;
            images_musicVolumeBar_0_0[0] = get_internal_image(1283);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_musicVolumeBar(int x, int y)
{
    return new (Active::pool.create()) MusicVolumeBar(x, y);
}
static Image* images_settingsRemapButton_5_0[1];
static Direction direction_settingsRemapButton_5_0 = {0, 50, 50, 0, -1, images_settingsRemapButton_5_0, 1};
static Image* images_settingsRemapButton_5_16[1];
static Direction direction_settingsRemapButton_5_16 = {16, 50, 50, 0, 1, images_settingsRemapButton_5_16, 1};
static Animation anim_settingsRemapButton_5 = {&direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, NULL, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, &direction_settingsRemapButton_5_16, NULL, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0, &direction_settingsRemapButton_5_0};
static Animation * anim_array_settingsRemapButton[6] = {NULL, NULL, NULL, NULL, NULL, &anim_settingsRemapButton_5};
static Animations anim_settingsRemapButton = {6, &anim_array_settingsRemapButton[0]};
static bool anim_settingsRemapButton_initialized;
class SettingsRemapButton : public Active
{
public:
    SettingsRemapButton(int x, int y) : Active(x, y, settingsRemapButton_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 5", 8);
#endif
        this->animations = &anim_settingsRemapButton;
        if (!anim_settingsRemapButton_initialized) {
            anim_settingsRemapButton_initialized = true;
            images_settingsRemapButton_5_0[0] = get_internal_image(1438);
            images_settingsRemapButton_5_16[0] = get_internal_image(1440);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_settingsRemapButton(int x, int y)
{
    return new (Active::pool.create()) SettingsRemapButton(x, y);
}
class SettingsRemapText : public Text
{
public:
    SettingsRemapText(int x, int y) : Text(x, y, settingsRemapText_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("remap", 5);
#endif
        flags &= ~SCROLL;
        width = 85;
        height = 11;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("remap keys", 10));
        create_alterables();
    }
};
FrameObject * create_settingsRemapText(int x, int y)
{
    return new (Text::pool.create()) SettingsRemapText(x, y);
}
class Backdrop_579 : public Backdrop
{
public:
    Backdrop_579(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP
        manager.frame->back_instances[BACK_ID_BACKDROP].push_back(this);
#endif
        image = get_internal_image(1442);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_579(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_579(x, y);
}
class QuickBackdrop_580 : public QuickBackdrop
{
public:
    QuickBackdrop_580(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
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
        blend_color = Color(255, 255, 255, 215);
    }
};
FrameObject * create_quickbackdrop_580(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_580(x, y);
}
static Image* images_keysdone_581_5_0[1];
static Direction direction_keysdone_581_5_0 = {0, 50, 50, 0, -1, images_keysdone_581_5_0, 1};
static Image* images_keysdone_581_5_16[1];
static Direction direction_keysdone_581_5_16 = {16, 50, 50, 0, -1, images_keysdone_581_5_16, 1};
static Animation anim_keysdone_581_5 = {&direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, NULL, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, &direction_keysdone_581_5_16, NULL, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0, &direction_keysdone_581_5_0};
static Animation * anim_array_keysdone_581[6] = {NULL, NULL, NULL, NULL, NULL, &anim_keysdone_581_5};
static Animations anim_keysdone_581 = {6, &anim_array_keysdone_581[0]};
static bool anim_keysdone_581_initialized;
class KeysDone_581 : public Active
{
public:
    KeysDone_581(int x, int y) : Active(x, y, KeysDone_581_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("keys_done", 9);
#endif
        this->animations = &anim_keysdone_581;
        if (!anim_keysdone_581_initialized) {
            anim_keysdone_581_initialized = true;
            images_keysdone_581_5_0[0] = get_internal_image(3915);
            images_keysdone_581_5_16[0] = get_internal_image(3918);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_keysdone_581(int x, int y)
{
    return new (Active::pool.create()) KeysDone_581(x, y);
}
class RemapSav_582 : public Text
{
public:
    RemapSav_582(int x, int y) : Text(x, y, RemapSav_582_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("remap_sav", 9);
#endif
        flags &= ~SCROLL;
        width = 62;
        height = 15;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("save", 4));
        create_alterables();
    }
};
FrameObject * create_remapsav_582(int x, int y)
{
    return new (Text::pool.create()) RemapSav_582(x, y);
}
class RemapList_583 : public Text
{
public:
    RemapList_583(int x, int y) : Text(x, y, RemapList_583_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("remap_list", 10);
#endif
        flags &= ~SCROLL;
        width = 56;
        height = 78;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("Up\r\nDown\r\nLeft\r\nRight\r\nAction1\r\nAction2\r\nCombat", 47));
        create_alterables();
    }
};
FrameObject * create_remaplist_583(int x, int y)
{
    return new (Text::pool.create()) RemapList_583(x, y);
}
class KeyValues_584 : public Text
{
public:
    KeyValues_584(int x, int y) : Text(x, y, KeyValues_584_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("keyValues", 9);
#endif
        flags &= ~SCROLL;
        width = 56;
        height = 81;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("Up\r\nDown\r\nLeft\r\nRight\r\nAction1\r\nAction2\r\nSpace", 46));
        create_alterables();
    }
};
FrameObject * create_keyvalues_584(int x, int y)
{
    return new (Text::pool.create()) KeyValues_584(x, y);
}
class List_585 : public ListObject
{
public:
    List_585(int x, int y) : ListObject(x, y, List_585_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("List", 4);
#endif
        index_offset = current_line = 0;
    }
};
FrameObject * create_list_585(int x, int y)
{
    return new (ListObject::pool.create()) List_585(x, y);
}
static Image* images_edit0_586_0_0[1];
static Direction direction_edit0_586_0_0 = {0, 50, 50, 0, -1, images_edit0_586_0_0, 1};
static Image* images_edit0_586_0_16[1];
static Direction direction_edit0_586_0_16 = {16, 50, 50, 0, -1, images_edit0_586_0_16, 1};
static Animation anim_edit0_586_0 = {&direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0, NULL, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, &direction_edit0_586_0_16, NULL, &direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0, &direction_edit0_586_0_0};
static Animation * anim_array_edit0_586[1] = {&anim_edit0_586_0};
static Animations anim_edit0_586 = {1, &anim_array_edit0_586[0]};
static bool anim_edit0_586_initialized;
class EDIT0_586 : public Active
{
public:
    EDIT0_586(int x, int y) : Active(x, y, EDIT0_586_type)
    {
        // qualifiers: 12
#ifndef NDEBUG
        name = std::string("EDIT_0", 6);
#endif
        this->animations = &anim_edit0_586;
        if (!anim_edit0_586_initialized) {
            anim_edit0_586_initialized = true;
            images_edit0_586_0_0[0] = get_internal_image(1451);
            images_edit0_586_0_16[0] = get_internal_image(985);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_edit0_586(int x, int y)
{
    return new (Active::pool.create()) EDIT0_586(x, y);
}
class Backdrop2_587 : public Backdrop
{
public:
    Backdrop2_587(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 2", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_2
        manager.frame->back_instances[BACK_ID_BACKDROP_2].push_back(this);
#endif
        image = get_internal_image(1013);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 95);
    }
};
FrameObject * create_backdrop2_587(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop2_587(x, y);
}
static Image* images_edit1_588_0_0[1];
static Direction direction_edit1_588_0_0 = {0, 50, 50, 0, -1, images_edit1_588_0_0, 1};
static Image* images_edit1_588_0_16[1];
static Direction direction_edit1_588_0_16 = {16, 50, 50, 0, -1, images_edit1_588_0_16, 1};
static Animation anim_edit1_588_0 = {&direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0, NULL, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, &direction_edit1_588_0_16, NULL, &direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0, &direction_edit1_588_0_0};
static Animation * anim_array_edit1_588[1] = {&anim_edit1_588_0};
static Animations anim_edit1_588 = {1, &anim_array_edit1_588[0]};
static bool anim_edit1_588_initialized;
class EDIT1_588 : public Active
{
public:
    EDIT1_588(int x, int y) : Active(x, y, EDIT1_588_type)
    {
        // qualifiers: 12
#ifndef NDEBUG
        name = std::string("EDIT_ 1", 7);
#endif
        this->animations = &anim_edit1_588;
        if (!anim_edit1_588_initialized) {
            anim_edit1_588_initialized = true;
            images_edit1_588_0_0[0] = get_internal_image(1451);
            images_edit1_588_0_16[0] = get_internal_image(985);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_edit1_588(int x, int y)
{
    return new (Active::pool.create()) EDIT1_588(x, y);
}
static Image* images_edit2_589_0_0[1];
static Direction direction_edit2_589_0_0 = {0, 50, 50, 0, -1, images_edit2_589_0_0, 1};
static Image* images_edit2_589_0_16[1];
static Direction direction_edit2_589_0_16 = {16, 50, 50, 0, -1, images_edit2_589_0_16, 1};
static Animation anim_edit2_589_0 = {&direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0, NULL, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, &direction_edit2_589_0_16, NULL, &direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0, &direction_edit2_589_0_0};
static Animation * anim_array_edit2_589[1] = {&anim_edit2_589_0};
static Animations anim_edit2_589 = {1, &anim_array_edit2_589[0]};
static bool anim_edit2_589_initialized;
class EDIT2_589 : public Active
{
public:
    EDIT2_589(int x, int y) : Active(x, y, EDIT2_589_type)
    {
        // qualifiers: 12
#ifndef NDEBUG
        name = std::string("EDIT_ 2", 7);
#endif
        this->animations = &anim_edit2_589;
        if (!anim_edit2_589_initialized) {
            anim_edit2_589_initialized = true;
            images_edit2_589_0_0[0] = get_internal_image(1451);
            images_edit2_589_0_16[0] = get_internal_image(985);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(0, 2);
    }
};
FrameObject * create_edit2_589(int x, int y)
{
    return new (Active::pool.create()) EDIT2_589(x, y);
}
static Image* images_edit3_590_0_0[1];
static Direction direction_edit3_590_0_0 = {0, 50, 50, 0, -1, images_edit3_590_0_0, 1};
static Image* images_edit3_590_0_16[1];
static Direction direction_edit3_590_0_16 = {16, 50, 50, 0, -1, images_edit3_590_0_16, 1};
static Animation anim_edit3_590_0 = {&direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0, NULL, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, &direction_edit3_590_0_16, NULL, &direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0, &direction_edit3_590_0_0};
static Animation * anim_array_edit3_590[1] = {&anim_edit3_590_0};
static Animations anim_edit3_590 = {1, &anim_array_edit3_590[0]};
static bool anim_edit3_590_initialized;
class EDIT3_590 : public Active
{
public:
    EDIT3_590(int x, int y) : Active(x, y, EDIT3_590_type)
    {
        // qualifiers: 12
#ifndef NDEBUG
        name = std::string("EDIT_ 3", 7);
#endif
        this->animations = &anim_edit3_590;
        if (!anim_edit3_590_initialized) {
            anim_edit3_590_initialized = true;
            images_edit3_590_0_0[0] = get_internal_image(1451);
            images_edit3_590_0_16[0] = get_internal_image(985);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(0, 3);
    }
};
FrameObject * create_edit3_590(int x, int y)
{
    return new (Active::pool.create()) EDIT3_590(x, y);
}
static Image* images_edit4_591_0_0[1];
static Direction direction_edit4_591_0_0 = {0, 50, 50, 0, -1, images_edit4_591_0_0, 1};
static Image* images_edit4_591_0_16[1];
static Direction direction_edit4_591_0_16 = {16, 50, 50, 0, -1, images_edit4_591_0_16, 1};
static Animation anim_edit4_591_0 = {&direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0, NULL, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, &direction_edit4_591_0_16, NULL, &direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0, &direction_edit4_591_0_0};
static Animation * anim_array_edit4_591[1] = {&anim_edit4_591_0};
static Animations anim_edit4_591 = {1, &anim_array_edit4_591[0]};
static bool anim_edit4_591_initialized;
class EDIT4_591 : public Active
{
public:
    EDIT4_591(int x, int y) : Active(x, y, EDIT4_591_type)
    {
        // qualifiers: 12
#ifndef NDEBUG
        name = std::string("EDIT_ 4", 7);
#endif
        this->animations = &anim_edit4_591;
        if (!anim_edit4_591_initialized) {
            anim_edit4_591_initialized = true;
            images_edit4_591_0_0[0] = get_internal_image(1451);
            images_edit4_591_0_16[0] = get_internal_image(985);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(0, 4);
    }
};
FrameObject * create_edit4_591(int x, int y)
{
    return new (Active::pool.create()) EDIT4_591(x, y);
}
static Image* images_edit5_592_0_0[1];
static Direction direction_edit5_592_0_0 = {0, 50, 50, 0, -1, images_edit5_592_0_0, 1};
static Image* images_edit5_592_0_16[1];
static Direction direction_edit5_592_0_16 = {16, 50, 50, 0, -1, images_edit5_592_0_16, 1};
static Animation anim_edit5_592_0 = {&direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0, NULL, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, &direction_edit5_592_0_16, NULL, &direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0, &direction_edit5_592_0_0};
static Animation * anim_array_edit5_592[1] = {&anim_edit5_592_0};
static Animations anim_edit5_592 = {1, &anim_array_edit5_592[0]};
static bool anim_edit5_592_initialized;
class EDIT5_592 : public Active
{
public:
    EDIT5_592(int x, int y) : Active(x, y, EDIT5_592_type)
    {
        // qualifiers: 12
#ifndef NDEBUG
        name = std::string("EDIT_ 5", 7);
#endif
        this->animations = &anim_edit5_592;
        if (!anim_edit5_592_initialized) {
            anim_edit5_592_initialized = true;
            images_edit5_592_0_0[0] = get_internal_image(1451);
            images_edit5_592_0_16[0] = get_internal_image(985);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(0, 5);
    }
};
FrameObject * create_edit5_592(int x, int y)
{
    return new (Active::pool.create()) EDIT5_592(x, y);
}
static Image* images_edit6_593_0_0[1];
static Direction direction_edit6_593_0_0 = {0, 50, 50, 0, -1, images_edit6_593_0_0, 1};
static Image* images_edit6_593_0_16[1];
static Direction direction_edit6_593_0_16 = {16, 50, 50, 0, -1, images_edit6_593_0_16, 1};
static Animation anim_edit6_593_0 = {&direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0, NULL, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, &direction_edit6_593_0_16, NULL, &direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0, &direction_edit6_593_0_0};
static Animation * anim_array_edit6_593[1] = {&anim_edit6_593_0};
static Animations anim_edit6_593 = {1, &anim_array_edit6_593[0]};
static bool anim_edit6_593_initialized;
class EDIT6_593 : public Active
{
public:
    EDIT6_593(int x, int y) : Active(x, y, EDIT6_593_type)
    {
        // qualifiers: 12
#ifndef NDEBUG
        name = std::string("EDIT_ 6", 7);
#endif
        this->animations = &anim_edit6_593;
        if (!anim_edit6_593_initialized) {
            anim_edit6_593_initialized = true;
            images_edit6_593_0_0[0] = get_internal_image(1451);
            images_edit6_593_0_16[0] = get_internal_image(985);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(0, 6);
    }
};
FrameObject * create_edit6_593(int x, int y)
{
    return new (Active::pool.create()) EDIT6_593(x, y);
}
static Image* images_reset_594_5_0[1];
static Direction direction_reset_594_5_0 = {0, 50, 50, 0, -1, images_reset_594_5_0, 1};
static Image* images_reset_594_5_16[1];
static Direction direction_reset_594_5_16 = {16, 50, 50, 0, -1, images_reset_594_5_16, 1};
static Animation anim_reset_594_5 = {&direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0, NULL, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, &direction_reset_594_5_16, NULL, &direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0, &direction_reset_594_5_0};
static Animation * anim_array_reset_594[6] = {NULL, NULL, NULL, NULL, NULL, &anim_reset_594_5};
static Animations anim_reset_594 = {6, &anim_array_reset_594[0]};
static bool anim_reset_594_initialized;
class Reset_594 : public Active
{
public:
    Reset_594(int x, int y) : Active(x, y, Reset_594_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("reset", 5);
#endif
        this->animations = &anim_reset_594;
        if (!anim_reset_594_initialized) {
            anim_reset_594_initialized = true;
            images_reset_594_5_0[0] = get_internal_image(3913);
            images_reset_594_5_16[0] = get_internal_image(3916);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_reset_594(int x, int y)
{
    return new (Active::pool.create()) Reset_594(x, y);
}
class RemapReset_595 : public Text
{
public:
    RemapReset_595(int x, int y) : Text(x, y, RemapReset_595_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("remap_reset", 11);
#endif
        flags &= ~SCROLL;
        width = 60;
        height = 15;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("reset", 5));
        create_alterables();
    }
};
FrameObject * create_remapreset_595(int x, int y)
{
    return new (Text::pool.create()) RemapReset_595(x, y);
}
class Names7_596 : public Text
{
public:
    Names7_596(int x, int y) : Text(x, y, Names7_596_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Names 7", 7);
#endif
        flags &= ~SCROLL;
        width = 126;
        height = 15;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Small Fonts", 11);
        font = get_font(7, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("reset", 5));
        create_alterables();
    }
};
FrameObject * create_names7_596(int x, int y)
{
    return new (Text::pool.create()) Names7_596(x, y);
}
class MainHeader_597 : public Text
{
public:
    MainHeader_597(int x, int y) : Text(x, y, MainHeader_597_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("main_header", 11);
#endif
        flags &= ~SCROLL;
        width = 150;
        height = 14;
        blend_color = Color(255, 128, 0);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("SETTINGS", 8));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_mainheader_597(int x, int y)
{
    return new (Text::pool.create()) MainHeader_597(x, y);
}
class SettingsLanguageValue : public Text
{
public:
    SettingsLanguageValue(int x, int y) : Text(x, y, settingsLanguageValue_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Language value", 14);
#endif
        flags &= ~SCROLL;
        width = 81;
        height = 12;
        blend_color = Color(135, 135, 135);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("english", 7));
        create_alterables();
    }
};
FrameObject * create_settingsLanguageValue(int x, int y)
{
    return new (Text::pool.create()) SettingsLanguageValue(x, y);
}
class SettingsChoiceBackground : public Backdrop
{
public:
    SettingsChoiceBackground(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Settings choice field", 21);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_3
        manager.frame->back_instances[BACK_ID_BACKDROP_3].push_back(this);
#endif
        image = get_internal_image(1255);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_settingsChoiceBackground(int x, int y)
{
    return new (Backdrop::pool.create()) SettingsChoiceBackground(x, y);
}
class Language_600 : public ListObject
{
public:
    Language_600(int x, int y) : ListObject(x, y, Language_600_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("language", 8);
#endif
        add_line(std::string("English@eng", 11));
        add_line(std::string("Deutsch@ger", 11));
        add_line(std::string("Fran\303\247ais@fre", 13));
        add_line(std::string("Espa\303\261ol@spa", 12));
        add_line(std::string("\321\200\321\203\321\201\321\201\320\272\320\270\320\271@rus", 18));
        add_line(std::string("polski@pol", 10));
        set_visible(false);
        index_offset = current_line = -1;
    }
};
FrameObject * create_language_600(int x, int y)
{
    return new (ListObject::pool.create()) Language_600(x, y);
}
static Image* images_settingsLanguagePrevious_0_0[1];
static Direction direction_settingsLanguagePrevious_0_0 = {0, 10, 10, 0, -1, images_settingsLanguagePrevious_0_0, 1};
static Animation anim_settingsLanguagePrevious_0 = {&direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, NULL, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0, &direction_settingsLanguagePrevious_0_0};
static Image* images_settingsLanguagePrevious_5_0[2];
static Direction direction_settingsLanguagePrevious_5_0 = {0, 15, 15, 0, 1, images_settingsLanguagePrevious_5_0, 2};
static Animation anim_settingsLanguagePrevious_5 = {&direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, NULL, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0, &direction_settingsLanguagePrevious_5_0};
static Animation * anim_array_settingsLanguagePrevious[6] = {&anim_settingsLanguagePrevious_0, NULL, NULL, NULL, NULL, &anim_settingsLanguagePrevious_5};
static Animations anim_settingsLanguagePrevious = {6, &anim_array_settingsLanguagePrevious[0]};
static bool anim_settingsLanguagePrevious_initialized;
class SettingsLanguagePrevious : public Active
{
public:
    SettingsLanguagePrevious(int x, int y) : Active(x, y, settingsLanguagePrevious_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Previous language", 17);
#endif
        this->animations = &anim_settingsLanguagePrevious;
        if (!anim_settingsLanguagePrevious_initialized) {
            anim_settingsLanguagePrevious_initialized = true;
            images_settingsLanguagePrevious_0_0[0] = get_internal_image(1423);
            images_settingsLanguagePrevious_5_0[0] = get_internal_image(1022);
            images_settingsLanguagePrevious_5_0[1] = get_internal_image(2167);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_settingsLanguagePrevious(int x, int y)
{
    return new (Active::pool.create()) SettingsLanguagePrevious(x, y);
}
static Image* images_settingsLanguageNext_0_0[1];
static Direction direction_settingsLanguageNext_0_0 = {0, 10, 10, 0, -1, images_settingsLanguageNext_0_0, 1};
static Animation anim_settingsLanguageNext_0 = {&direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, NULL, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0, &direction_settingsLanguageNext_0_0};
static Image* images_settingsLanguageNext_5_0[2];
static Direction direction_settingsLanguageNext_5_0 = {0, 15, 15, 0, 1, images_settingsLanguageNext_5_0, 2};
static Animation anim_settingsLanguageNext_5 = {&direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, NULL, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0, &direction_settingsLanguageNext_5_0};
static Animation * anim_array_settingsLanguageNext[6] = {&anim_settingsLanguageNext_0, NULL, NULL, NULL, NULL, &anim_settingsLanguageNext_5};
static Animations anim_settingsLanguageNext = {6, &anim_array_settingsLanguageNext[0]};
static bool anim_settingsLanguageNext_initialized;
class SettingsLanguageNext : public Active
{
public:
    SettingsLanguageNext(int x, int y) : Active(x, y, settingsLanguageNext_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Next language", 13);
#endif
        this->animations = &anim_settingsLanguageNext;
        if (!anim_settingsLanguageNext_initialized) {
            anim_settingsLanguageNext_initialized = true;
            images_settingsLanguageNext_0_0[0] = get_internal_image(1437);
            images_settingsLanguageNext_5_0[0] = get_internal_image(2169);
            images_settingsLanguageNext_5_0[1] = get_internal_image(995);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_settingsLanguageNext(int x, int y)
{
    return new (Active::pool.create()) SettingsLanguageNext(x, y);
}
class Sounds_603 : public Text
{
public:
    Sounds_603(int x, int y) : Text(x, y, Sounds_603_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("sounds", 6);
#endif
        flags &= ~SCROLL;
        width = 60;
        height = 15;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("Sounds:", 7));
        create_alterables();
    }
};
FrameObject * create_sounds_603(int x, int y)
{
    return new (Text::pool.create()) Sounds_603(x, y);
}
class SettingsFrameRateLabel : public Text
{
public:
    SettingsFrameRateLabel(int x, int y) : Text(x, y, settingsFrameRateLabel_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Frame rate label", 16);
#endif
        flags &= ~SCROLL;
        width = 89;
        height = 15;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("FPS:", 4));
        create_alterables();
    }
};
FrameObject * create_settingsFrameRateLabel(int x, int y)
{
    return new (Text::pool.create()) SettingsFrameRateLabel(x, y);
}
static Image* images_settingsFrameRateNext_0_0[1];
static Direction direction_settingsFrameRateNext_0_0 = {0, 10, 10, 0, -1, images_settingsFrameRateNext_0_0, 1};
static Animation anim_settingsFrameRateNext_0 = {&direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, NULL, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0, &direction_settingsFrameRateNext_0_0};
static Image* images_settingsFrameRateNext_5_0[2];
static Direction direction_settingsFrameRateNext_5_0 = {0, 15, 15, 0, 1, images_settingsFrameRateNext_5_0, 2};
static Animation anim_settingsFrameRateNext_5 = {&direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, NULL, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0, &direction_settingsFrameRateNext_5_0};
static Animation * anim_array_settingsFrameRateNext[6] = {&anim_settingsFrameRateNext_0, NULL, NULL, NULL, NULL, &anim_settingsFrameRateNext_5};
static Animations anim_settingsFrameRateNext = {6, &anim_array_settingsFrameRateNext[0]};
static bool anim_settingsFrameRateNext_initialized;
class SettingsFrameRateNext : public Active
{
public:
    SettingsFrameRateNext(int x, int y) : Active(x, y, settingsFrameRateNext_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Next frame rate", 15);
#endif
        this->animations = &anim_settingsFrameRateNext;
        if (!anim_settingsFrameRateNext_initialized) {
            anim_settingsFrameRateNext_initialized = true;
            images_settingsFrameRateNext_0_0[0] = get_internal_image(1437);
            images_settingsFrameRateNext_5_0[0] = get_internal_image(2169);
            images_settingsFrameRateNext_5_0[1] = get_internal_image(995);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_settingsFrameRateNext(int x, int y)
{
    return new (Active::pool.create()) SettingsFrameRateNext(x, y);
}
static Image* images_settingsFrameRatePrevious_0_0[1];
static Direction direction_settingsFrameRatePrevious_0_0 = {0, 10, 10, 0, -1, images_settingsFrameRatePrevious_0_0, 1};
static Animation anim_settingsFrameRatePrevious_0 = {&direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, NULL, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0, &direction_settingsFrameRatePrevious_0_0};
static Image* images_settingsFrameRatePrevious_5_0[2];
static Direction direction_settingsFrameRatePrevious_5_0 = {0, 15, 15, 0, 1, images_settingsFrameRatePrevious_5_0, 2};
static Animation anim_settingsFrameRatePrevious_5 = {&direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, NULL, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0, &direction_settingsFrameRatePrevious_5_0};
static Animation * anim_array_settingsFrameRatePrevious[6] = {&anim_settingsFrameRatePrevious_0, NULL, NULL, NULL, NULL, &anim_settingsFrameRatePrevious_5};
static Animations anim_settingsFrameRatePrevious = {6, &anim_array_settingsFrameRatePrevious[0]};
static bool anim_settingsFrameRatePrevious_initialized;
class SettingsFrameRatePrevious : public Active
{
public:
    SettingsFrameRatePrevious(int x, int y) : Active(x, y, settingsFrameRatePrevious_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Previous frame rate", 19);
#endif
        this->animations = &anim_settingsFrameRatePrevious;
        if (!anim_settingsFrameRatePrevious_initialized) {
            anim_settingsFrameRatePrevious_initialized = true;
            images_settingsFrameRatePrevious_0_0[0] = get_internal_image(1423);
            images_settingsFrameRatePrevious_5_0[0] = get_internal_image(1022);
            images_settingsFrameRatePrevious_5_0[1] = get_internal_image(2167);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_settingsFrameRatePrevious(int x, int y)
{
    return new (Active::pool.create()) SettingsFrameRatePrevious(x, y);
}
class SettingsFrameRateValue : public Text
{
public:
    SettingsFrameRateValue(int x, int y) : Text(x, y, settingsFrameRateValue_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Frame rate value", 16);
#endif
        flags &= ~SCROLL;
        width = 107;
        height = 12;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("45 fps", 6));
        create_alterables();
    }
};
FrameObject * create_settingsFrameRateValue(int x, int y)
{
    return new (Text::pool.create()) SettingsFrameRateValue(x, y);
}
class SettingsLanguageLabel : public Text
{
public:
    SettingsLanguageLabel(int x, int y) : Text(x, y, settingsLanguageLabel_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Language label", 14);
#endif
        flags &= ~SCROLL;
        width = 89;
        height = 15;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("Language:", 9));
        create_alterables();
    }
};
FrameObject * create_settingsLanguageLabel(int x, int y)
{
    return new (Text::pool.create()) SettingsLanguageLabel(x, y);
}
class SettingsSpeechLabel : public Text
{
public:
    SettingsSpeechLabel(int x, int y) : Text(x, y, settingsSpeechLabel_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Language 4", 10);
#endif
        flags &= ~SCROLL;
        width = 88;
        height = 15;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("Speech File:", 12));
        create_alterables();
    }
};
FrameObject * create_settingsSpeechLabel(int x, int y)
{
    return new (Text::pool.create()) SettingsSpeechLabel(x, y);
}
static Image* images_slidersounds_610_0_0[1];
static Direction direction_slidersounds_610_0_0 = {0, 50, 50, 0, 1, images_slidersounds_610_0_0, 1};
static Animation anim_slidersounds_610_0 = {&direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, NULL, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0, &direction_slidersounds_610_0_0};
static Animation * anim_array_slidersounds_610[1] = {&anim_slidersounds_610_0};
static Animations anim_slidersounds_610 = {1, &anim_array_slidersounds_610[0]};
static bool anim_slidersounds_610_initialized;
class SliderSounds_610 : public Active
{
public:
    SliderSounds_610(int x, int y) : Active(x, y, SliderSounds_610_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Slider_Sounds", 13);
#endif
        this->animations = &anim_slidersounds_610;
        if (!anim_slidersounds_610_initialized) {
            anim_slidersounds_610_initialized = true;
            images_slidersounds_610_0_0[0] = get_internal_image(1054);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_slidersounds_610(int x, int y)
{
    return new (Active::pool.create()) SliderSounds_610(x, y);
}
class SettingsSpeechValue : public Text
{
public:
    SettingsSpeechValue(int x, int y) : Text(x, y, settingsSpeechValue_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("field_speechfile", 16);
#endif
        flags &= ~SCROLL;
        width = 81;
        height = 12;
        blend_color = Color(74, 74, 74);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("default", 7));
        create_alterables();
    }
};
FrameObject * create_settingsSpeechValue(int x, int y)
{
    return new (Text::pool.create()) SettingsSpeechValue(x, y);
}
static Image* images_settingsSpeechField_0_0[1];
static Direction direction_settingsSpeechField_0_0 = {0, 50, 50, 0, 1, images_settingsSpeechField_0_0, 1};
static Animation anim_settingsSpeechField_0 = {&direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, NULL, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0, &direction_settingsSpeechField_0_0};
static Animation * anim_array_settingsSpeechField[1] = {&anim_settingsSpeechField_0};
static Animations anim_settingsSpeechField = {1, &anim_array_settingsSpeechField[0]};
static bool anim_settingsSpeechField_initialized;
class SettingsSpeechField : public Active
{
public:
    SettingsSpeechField(int x, int y) : Active(x, y, settingsSpeechField_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("field_speechFile", 16);
#endif
        this->animations = &anim_settingsSpeechField;
        if (!anim_settingsSpeechField_initialized) {
            anim_settingsSpeechField_initialized = true;
            images_settingsSpeechField_0_0[0] = get_internal_image(1255);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_settingsSpeechField(int x, int y)
{
    return new (Active::pool.create()) SettingsSpeechField(x, y);
}
class SettingsSpeechHint : public Text
{
public:
    SettingsSpeechHint(int x, int y) : Text(x, y, settingsSpeechHint_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("help", 4);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 234;
        height = 10;
        blend_color = Color(87, 128, 255);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("leave blank to set to default", 29));
        create_alterables();
    }
};
FrameObject * create_settingsSpeechHint(int x, int y)
{
    return new (Text::pool.create()) SettingsSpeechHint(x, y);
}
class Name_615 : public Text
{
public:
    Name_615(int x, int y) : Text(x, y, Name_615_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("name", 4);
#endif
        flags &= ~SCROLL;
        width = 180;
        height = 21;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string());
        create_alterables();
    }
};
FrameObject * create_name_615(int x, int y)
{
    return new (Text::pool.create()) Name_615(x, y);
}
class Backdrop5_616 : public Backdrop
{
public:
    Backdrop5_616(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 5", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_5
        manager.frame->back_instances[BACK_ID_BACKDROP_5].push_back(this);
#endif
        image = get_internal_image(1447);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop5_616(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop5_616(x, y);
}
class Backdrop4_617 : public Backdrop
{
public:
    Backdrop4_617(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 4", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_4
        manager.frame->back_instances[BACK_ID_BACKDROP_4].push_back(this);
#endif
        image = get_internal_image(1241);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 205);
    }
};
FrameObject * create_backdrop4_617(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop4_617(x, y);
}
static Image* images_start_618_5_0[1];
static Direction direction_start_618_5_0 = {0, 50, 50, 0, -1, images_start_618_5_0, 1};
static Image* images_start_618_5_16[1];
static Direction direction_start_618_5_16 = {16, 50, 50, 0, 1, images_start_618_5_16, 1};
static Animation anim_start_618_5 = {&direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0, NULL, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, &direction_start_618_5_16, NULL, &direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0, &direction_start_618_5_0};
static Animation * anim_array_start_618[6] = {NULL, NULL, NULL, NULL, NULL, &anim_start_618_5};
static Animations anim_start_618 = {6, &anim_array_start_618[0]};
static bool anim_start_618_initialized;
class Start_618 : public Active
{
public:
    Start_618(int x, int y) : Active(x, y, Start_618_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("start", 5);
#endif
        this->animations = &anim_start_618;
        if (!anim_start_618_initialized) {
            anim_start_618_initialized = true;
            images_start_618_5_0[0] = get_internal_image(1191);
            images_start_618_5_16[0] = get_internal_image(267);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_start_618(int x, int y)
{
    return new (Active::pool.create()) Start_618(x, y);
}
class Start2_619 : public Text
{
public:
    Start2_619(int x, int y) : Text(x, y, Start2_619_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("start 2", 7);
#endif
        flags &= ~SCROLL;
        width = 75;
        height = 12;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("start game", 10));
        create_alterables();
    }
};
FrameObject * create_start2_619(int x, int y)
{
    return new (Text::pool.create()) Start2_619(x, y);
}
class Backdrop3_620 : public Backdrop
{
public:
    Backdrop3_620(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 3", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_3
        manager.frame->back_instances[BACK_ID_BACKDROP_3].push_back(this);
#endif
        image = get_internal_image(1540);
        width = image->width;
        height = image->height;
        blend_color = Color(255, 255, 255, 205);
    }
};
FrameObject * create_backdrop3_620(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop3_620(x, y);
}
class Header_621 : public Text
{
public:
    Header_621(int x, int y) : Text(x, y, Header_621_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("header", 6);
#endif
        flags &= ~SCROLL;
        width = 232;
        height = 14;
        blend_color = Color(255, 128, 0);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("RENAME CHARACTERS", 17));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_header_621(int x, int y)
{
    return new (Text::pool.create()) Header_621(x, y);
}
static Image* images_inmate_622_0_24[2];
static Direction direction_inmate_622_0_24 = {24, 6, 6, 0, -1, images_inmate_622_0_24, 2};
static Animation anim_inmate_622_0 = {&direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, NULL, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24, &direction_inmate_622_0_24};
static Animation * anim_array_inmate_622[1] = {&anim_inmate_622_0};
static Animations anim_inmate_622 = {1, &anim_array_inmate_622[0]};
static bool anim_inmate_622_initialized;
class Inmate_622 : public Active
{
public:
    Inmate_622(int x, int y) : Active(x, y, Inmate_622_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate", 6);
#endif
        this->animations = &anim_inmate_622;
        if (!anim_inmate_622_initialized) {
            anim_inmate_622_initialized = true;
            images_inmate_622_0_24[0] = get_internal_image(541);
            images_inmate_622_0_24[1] = get_internal_image(540);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_inmate_622(int x, int y)
{
    return new (Active::pool.create()) Inmate_622(x, y);
}
static Image* images_inmate11_623_0_24[2];
static Direction direction_inmate11_623_0_24 = {24, 6, 6, 0, -1, images_inmate11_623_0_24, 2};
static Animation anim_inmate11_623_0 = {&direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, NULL, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24, &direction_inmate11_623_0_24};
static Animation * anim_array_inmate11_623[1] = {&anim_inmate11_623_0};
static Animations anim_inmate11_623 = {1, &anim_array_inmate11_623[0]};
static bool anim_inmate11_623_initialized;
class Inmate11_623 : public Active
{
public:
    Inmate11_623(int x, int y) : Active(x, y, Inmate11_623_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 11", 9);
#endif
        this->animations = &anim_inmate11_623;
        if (!anim_inmate11_623_initialized) {
            anim_inmate11_623_initialized = true;
            images_inmate11_623_0_24[0] = get_internal_image(693);
            images_inmate11_623_0_24[1] = get_internal_image(698);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_inmate11_623(int x, int y)
{
    return new (Active::pool.create()) Inmate11_623(x, y);
}
static Image* images_inmate3_624_0_24[2];
static Direction direction_inmate3_624_0_24 = {24, 6, 6, 0, -1, images_inmate3_624_0_24, 2};
static Animation anim_inmate3_624_0 = {&direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, NULL, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24, &direction_inmate3_624_0_24};
static Animation * anim_array_inmate3_624[1] = {&anim_inmate3_624_0};
static Animations anim_inmate3_624 = {1, &anim_array_inmate3_624[0]};
static bool anim_inmate3_624_initialized;
class Inmate3_624 : public Active
{
public:
    Inmate3_624(int x, int y) : Active(x, y, Inmate3_624_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 3", 8);
#endif
        this->animations = &anim_inmate3_624;
        if (!anim_inmate3_624_initialized) {
            anim_inmate3_624_initialized = true;
            images_inmate3_624_0_24[0] = get_internal_image(550);
            images_inmate3_624_0_24[1] = get_internal_image(551);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(5);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 20;
        ((BallMovement*)movement)->init();
        create_alterables();
    }
};
FrameObject * create_inmate3_624(int x, int y)
{
    return new (Active::pool.create()) Inmate3_624(x, y);
}
static Image* images_inmate4_625_0_24[2];
static Direction direction_inmate4_625_0_24 = {24, 6, 6, 0, -1, images_inmate4_625_0_24, 2};
static Animation anim_inmate4_625_0 = {&direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, NULL, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24, &direction_inmate4_625_0_24};
static Animation * anim_array_inmate4_625[1] = {&anim_inmate4_625_0};
static Animations anim_inmate4_625 = {1, &anim_array_inmate4_625[0]};
static bool anim_inmate4_625_initialized;
class Inmate4_625 : public Active
{
public:
    Inmate4_625(int x, int y) : Active(x, y, Inmate4_625_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 4", 8);
#endif
        this->animations = &anim_inmate4_625;
        if (!anim_inmate4_625_initialized) {
            anim_inmate4_625_initialized = true;
            images_inmate4_625_0_24[0] = get_internal_image(560);
            images_inmate4_625_0_24[1] = get_internal_image(562);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(5);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 20;
        ((BallMovement*)movement)->init();
        create_alterables();
        alterables->values.set(7, 15);
    }
};
FrameObject * create_inmate4_625(int x, int y)
{
    return new (Active::pool.create()) Inmate4_625(x, y);
}
static Image* images_inmate10_626_0_24[2];
static Direction direction_inmate10_626_0_24 = {24, 6, 6, 0, -1, images_inmate10_626_0_24, 2};
static Animation anim_inmate10_626_0 = {&direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, NULL, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24, &direction_inmate10_626_0_24};
static Animation * anim_array_inmate10_626[1] = {&anim_inmate10_626_0};
static Animations anim_inmate10_626 = {1, &anim_array_inmate10_626[0]};
static bool anim_inmate10_626_initialized;
class Inmate10_626 : public Active
{
public:
    Inmate10_626(int x, int y) : Active(x, y, Inmate10_626_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 10", 9);
#endif
        this->animations = &anim_inmate10_626;
        if (!anim_inmate10_626_initialized) {
            anim_inmate10_626_initialized = true;
            images_inmate10_626_0_24[0] = get_internal_image(239);
            images_inmate10_626_0_24[1] = get_internal_image(245);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(5);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 20;
        ((BallMovement*)movement)->init();
        create_alterables();
        alterables->values.set(7, 15);
    }
};
FrameObject * create_inmate10_626(int x, int y)
{
    return new (Active::pool.create()) Inmate10_626(x, y);
}
static Image* images_inmate9_627_0_24[2];
static Direction direction_inmate9_627_0_24 = {24, 6, 6, 0, -1, images_inmate9_627_0_24, 2};
static Animation anim_inmate9_627_0 = {&direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, NULL, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24, &direction_inmate9_627_0_24};
static Animation * anim_array_inmate9_627[1] = {&anim_inmate9_627_0};
static Animations anim_inmate9_627 = {1, &anim_array_inmate9_627[0]};
static bool anim_inmate9_627_initialized;
class Inmate9_627 : public Active
{
public:
    Inmate9_627(int x, int y) : Active(x, y, Inmate9_627_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 9", 8);
#endif
        this->animations = &anim_inmate9_627;
        if (!anim_inmate9_627_initialized) {
            anim_inmate9_627_initialized = true;
            images_inmate9_627_0_24[0] = get_internal_image(384);
            images_inmate9_627_0_24[1] = get_internal_image(381);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(5);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 20;
        ((BallMovement*)movement)->init();
        create_alterables();
        alterables->values.set(7, 15);
    }
};
FrameObject * create_inmate9_627(int x, int y)
{
    return new (Active::pool.create()) Inmate9_627(x, y);
}
