#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class Header_111 : public Text
{
public:
    Header_111(int x, int y) : Text(x, y, Header_111_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("header", 6);
#endif
        flags &= ~SCROLL;
        width = 218;
        height = 14;
        blend_color = Color(255, 128, 0);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("SELECT A PRISON", 15));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_header_111(int x, int y)
{
    return new (Text::pool.create()) Header_111(x, y);
}
class Backdrop5_112 : public Backdrop
{
public:
    Backdrop5_112(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 5", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_5
        manager.frame->back_instances[BACK_ID_BACKDROP_5].push_back(this);
#endif
        image = get_internal_image(998);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop5_112(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop5_112(x, y);
}
static Image* images_mainpic_113_0_0[7];
static Direction direction_mainpic_113_0_0 = {0, 8, 8, 0, 1, images_mainpic_113_0_0, 7};
static Animation anim_mainpic_113_0 = {&direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, NULL, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0, &direction_mainpic_113_0_0};
static Animation * anim_array_mainpic_113[1] = {&anim_mainpic_113_0};
static Animations anim_mainpic_113 = {1, &anim_array_mainpic_113[0]};
static bool anim_mainpic_113_initialized;
class MainPic_113 : public Active
{
public:
    MainPic_113(int x, int y) : Active(x, y, MainPic_113_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Main_Pic", 8);
#endif
        this->animations = &anim_mainpic_113;
        if (!anim_mainpic_113_initialized) {
            anim_mainpic_113_initialized = true;
            images_mainpic_113_0_0[0] = get_internal_image(233);
            images_mainpic_113_0_0[1] = get_internal_image(982);
            images_mainpic_113_0_0[2] = get_internal_image(984);
            images_mainpic_113_0_0[3] = get_internal_image(997);
            images_mainpic_113_0_0[4] = get_internal_image(2369);
            images_mainpic_113_0_0[5] = get_internal_image(2401);
            images_mainpic_113_0_0[6] = get_internal_image(2425);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_mainpic_113(int x, int y)
{
    return new (Active::pool.create()) MainPic_113(x, y);
}
class MainMaps_114 : public ListObject
{
public:
    MainMaps_114(int x, int y) : ListObject(x, y, MainMaps_114_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Main_Maps", 9);
#endif
        add_line(std::string("Tutorial@tutorial@good times", 28));
        add_line(std::string("Center Perks@perks@veasy", 24));
        add_line(std::string("Stalag Flucht@stalagflucht@easy", 31));
        add_line(std::string("Shankton State Pen@shanktonstatepen@med", 39));
        add_line(std::string("Jungle Compound@jungle@med", 26));
        add_line(std::string("San Pancho@sanpancho@hard", 25));
        add_line(std::string("HMP Irongate@irongate@vhard", 27));
        set_visible(false);
        index_offset = current_line = -1;
    }
};
FrameObject * create_mainmaps_114(int x, int y)
{
    return new (ListObject::pool.create()) MainMaps_114(x, y);
}
class MainName_115 : public Text
{
public:
    MainName_115(int x, int y) : Text(x, y, MainName_115_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Main_Name", 9);
#endif
        flags &= ~SCROLL;
        width = 192;
        height = 21;
        blend_color = Color(230, 230, 250);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("SHANKTON STATE PEN", 18));
        blend_color.a = 255;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_mainname_115(int x, int y)
{
    return new (Text::pool.create()) MainName_115(x, y);
}
static Image* images_active_116_0_0[4];
static Direction direction_active_116_0_0 = {0, 15, 15, 0, -1, images_active_116_0_0, 4};
static Animation anim_active_116_0 = {&direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, NULL, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0, &direction_active_116_0_0};
static Animation * anim_array_active_116[1] = {&anim_active_116_0};
static Animations anim_active_116 = {1, &anim_array_active_116[0]};
static bool anim_active_116_initialized;
class Active_116 : public Active
{
public:
    Active_116(int x, int y) : Active(x, y, Active_116_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        this->animations = &anim_active_116;
        if (!anim_active_116_initialized) {
            anim_active_116_initialized = true;
            images_active_116_0_0[0] = get_internal_image(1024);
            images_active_116_0_0[1] = get_internal_image(1028);
            images_active_116_0_0[2] = get_internal_image(1029);
            images_active_116_0_0[3] = get_internal_image(1028);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active_116(int x, int y)
{
    return new (Active::pool.create()) Active_116(x, y);
}
static Image* images_active2_117_0_0[4];
static Direction direction_active2_117_0_0 = {0, 15, 15, 0, -1, images_active2_117_0_0, 4};
static Animation anim_active2_117_0 = {&direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, NULL, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0, &direction_active2_117_0_0};
static Animation * anim_array_active2_117[1] = {&anim_active2_117_0};
static Animations anim_active2_117 = {1, &anim_array_active2_117[0]};
static bool anim_active2_117_initialized;
class Active2_117 : public Active
{
public:
    Active2_117(int x, int y) : Active(x, y, Active2_117_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        this->animations = &anim_active2_117;
        if (!anim_active2_117_initialized) {
            anim_active2_117_initialized = true;
            images_active2_117_0_0[0] = get_internal_image(1032);
            images_active2_117_0_0[1] = get_internal_image(1033);
            images_active2_117_0_0[2] = get_internal_image(1034);
            images_active2_117_0_0[3] = get_internal_image(1033);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active2_117(int x, int y)
{
    return new (Active::pool.create()) Active2_117(x, y);
}
class Continue_119 : public Text
{
public:
    Continue_119(int x, int y) : Text(x, y, Continue_119_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("continue", 8);
#endif
        flags &= ~SCROLL;
        width = 78;
        height = 11;
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
FrameObject * create_continue_119(int x, int y)
{
    return new (Text::pool.create()) Continue_119(x, y);
}
class Back2_120 : public Text
{
public:
    Back2_120(int x, int y) : Text(x, y, Back2_120_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("back 2", 6);
#endif
        flags &= ~SCROLL;
        width = 68;
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
FrameObject * create_back2_120(int x, int y)
{
    return new (Text::pool.create()) Back2_120(x, y);
}
class BestScore_121 : public Text
{
public:
    BestScore_121(int x, int y) : Text(x, y, BestScore_121_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("best score", 10);
#endif
        flags &= ~SCROLL;
        width = 331;
        height = 21;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("PERSONAL BEST SCORE: 4506 ", 26));
        blend_color.a = 125;
        create_alterables();
    }
};
FrameObject * create_bestscore_121(int x, int y)
{
    return new (Text::pool.create()) BestScore_121(x, y);
}
static Image* images_active3_122_0_0[1];
static Direction direction_active3_122_0_0 = {0, 50, 50, 0, 1, images_active3_122_0_0, 1};
static Animation anim_active3_122_0 = {&direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, NULL, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0, &direction_active3_122_0_0};
static Image* images_active3_122_5_0[4];
static Direction direction_active3_122_5_0 = {0, 15, 15, 0, 2, images_active3_122_5_0, 4};
static Animation anim_active3_122_5 = {&direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, NULL, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0, &direction_active3_122_5_0};
static Animation * anim_array_active3_122[6] = {&anim_active3_122_0, NULL, NULL, NULL, NULL, &anim_active3_122_5};
static Animations anim_active3_122 = {6, &anim_array_active3_122[0]};
static bool anim_active3_122_initialized;
class Active3_122 : public Active
{
public:
    Active3_122(int x, int y) : Active(x, y, Active3_122_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 3", 8);
#endif
        this->animations = &anim_active3_122;
        if (!anim_active3_122_initialized) {
            anim_active3_122_initialized = true;
            images_active3_122_0_0[0] = get_internal_image(1005);
            images_active3_122_5_0[0] = get_internal_image(8);
            images_active3_122_5_0[1] = get_internal_image(38);
            images_active3_122_5_0[2] = get_internal_image(8);
            images_active3_122_5_0[3] = get_internal_image(1005);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 205);
        create_alterables();
    }
};
FrameObject * create_active3_122(int x, int y)
{
    return new (Active::pool.create()) Active3_122(x, y);
}
class MainDiff_123 : public Text
{
public:
    MainDiff_123(int x, int y) : Text(x, y, MainDiff_123_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Main_Diff", 9);
#endif
        flags &= ~SCROLL;
        width = 192;
        height = 21;
        blend_color = Color(140, 140, 140);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("(easy)", 6));
        blend_color.a = 255;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 255));
        create_alterables();
    }
};
FrameObject * create_maindiff_123(int x, int y)
{
    return new (Text::pool.create()) MainDiff_123(x, y);
}
static Image* images_main_124_0_0[1];
static Direction direction_main_124_0_0 = {0, 50, 50, 0, -1, images_main_124_0_0, 1};
static Image* images_main_124_0_16[1];
static Direction direction_main_124_0_16 = {16, 50, 50, 0, -1, images_main_124_0_16, 1};
static Animation anim_main_124_0 = {&direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0, NULL, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, &direction_main_124_0_16, NULL, &direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0, &direction_main_124_0_0};
static Animation * anim_array_main_124[1] = {&anim_main_124_0};
static Animations anim_main_124 = {1, &anim_array_main_124[0]};
static bool anim_main_124_initialized;
class Main_124 : public Active
{
public:
    Main_124(int x, int y) : Active(x, y, Main_124_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("main", 4);
#endif
        this->animations = &anim_main_124;
        if (!anim_main_124_initialized) {
            anim_main_124_initialized = true;
            images_main_124_0_0[0] = get_internal_image(2423);
            images_main_124_0_16[0] = get_internal_image(2430);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_main_124(int x, int y)
{
    return new (Active::pool.create()) Main_124(x, y);
}
static Image* images_highlight_125_0_0[4];
static Direction direction_highlight_125_0_0 = {0, 10, 10, 0, -1, images_highlight_125_0_0, 4};
static Animation anim_highlight_125_0 = {&direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, NULL, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0, &direction_highlight_125_0_0};
static Image* images_highlight_125_5_0[4];
static Direction direction_highlight_125_5_0 = {0, 10, 10, 0, -1, images_highlight_125_5_0, 4};
static Animation anim_highlight_125_5 = {&direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, NULL, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0, &direction_highlight_125_5_0};
static Image* images_highlight_125_7_0[4];
static Direction direction_highlight_125_7_0 = {0, 10, 10, 0, -1, images_highlight_125_7_0, 4};
static Animation anim_highlight_125_7 = {&direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, NULL, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0, &direction_highlight_125_7_0};
static Animation * anim_array_highlight_125[8] = {&anim_highlight_125_0, NULL, NULL, NULL, NULL, &anim_highlight_125_5, NULL, &anim_highlight_125_7};
static Animations anim_highlight_125 = {8, &anim_array_highlight_125[0]};
static bool anim_highlight_125_initialized;
class Highlight_125 : public Active
{
public:
    Highlight_125(int x, int y) : Active(x, y, Highlight_125_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("highlight", 9);
#endif
        set_visible(false);
        this->animations = &anim_highlight_125;
        if (!anim_highlight_125_initialized) {
            anim_highlight_125_initialized = true;
            images_highlight_125_0_0[0] = get_internal_image(1092);
            images_highlight_125_0_0[1] = get_internal_image(2419);
            images_highlight_125_0_0[2] = get_internal_image(2428);
            images_highlight_125_0_0[3] = get_internal_image(2419);
            images_highlight_125_5_0[0] = get_internal_image(2431);
            images_highlight_125_5_0[1] = get_internal_image(2432);
            images_highlight_125_5_0[2] = get_internal_image(2433);
            images_highlight_125_5_0[3] = get_internal_image(2432);
            images_highlight_125_7_0[0] = get_internal_image(2418);
            images_highlight_125_7_0[1] = get_internal_image(2417);
            images_highlight_125_7_0[2] = get_internal_image(2416);
            images_highlight_125_7_0[3] = get_internal_image(2417);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_highlight_125(int x, int y)
{
    return new (Active::pool.create()) Highlight_125(x, y);
}
class BonusMaps_126 : public ListObject
{
public:
    BonusMaps_126(int x, int y) : ListObject(x, y, BonusMaps_126_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Bonus Maps", 10);
#endif
        add_line(std::string("Fhurst Peak Correctional@EA", 27));
        add_line(std::string("Fort Bamford@fortbamford", 24));
        add_line(std::string("Camp Epsilon@campepsilon", 24));
        set_visible(false);
        index_offset = current_line = 0;
    }
};
FrameObject * create_bonusmaps_126(int x, int y)
{
    return new (ListObject::pool.create()) BonusMaps_126(x, y);
}
class Globals_127 : public INI
{
public:
    Globals_127(int x, int y) : INI(x, y, Globals_127_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Globals", 7);
#endif
        is_global = false;
        data = new SectionMap();
        create_alterables();
    }
};
FrameObject * create_globals_127(int x, int y)
{
    return new (INI::pool.create()) Globals_127(x, y);
}
class Cheat_128 : public Text
{
public:
    Cheat_128(int x, int y) : Text(x, y, Cheat_128_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("cheat", 5);
#endif
        flags &= ~SCROLL;
        width = 310;
        height = 49;
        blend_color = Color(255, 255, 255);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("PRESS PAGEDOWN TO HAX UNLOCK ALL MAPS\r\n(delete data/global.dat to reset)", 72));
        blend_color.a = 125;
        create_alterables();
    }
};
FrameObject * create_cheat_128(int x, int y)
{
    return new (Text::pool.create()) Cheat_128(x, y);
}
static Image* images_bonus_129_0_0[1];
static Direction direction_bonus_129_0_0 = {0, 50, 50, 0, -1, images_bonus_129_0_0, 1};
static Image* images_bonus_129_0_16[1];
static Direction direction_bonus_129_0_16 = {16, 50, 50, 0, -1, images_bonus_129_0_16, 1};
static Animation anim_bonus_129_0 = {&direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0, NULL, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, &direction_bonus_129_0_16, NULL, &direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0, &direction_bonus_129_0_0};
static Image* images_bonus_129_5_0[2];
static Direction direction_bonus_129_5_0 = {0, 5, 5, 0, -1, images_bonus_129_5_0, 2};
static Image* images_bonus_129_5_16[1];
static Direction direction_bonus_129_5_16 = {16, 50, 50, 0, -1, images_bonus_129_5_16, 1};
static Animation anim_bonus_129_5 = {&direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0, NULL, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, &direction_bonus_129_5_16, NULL, &direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0, &direction_bonus_129_5_0};
static Animation * anim_array_bonus_129[6] = {&anim_bonus_129_0, NULL, NULL, NULL, NULL, &anim_bonus_129_5};
static Animations anim_bonus_129 = {6, &anim_array_bonus_129[0]};
static bool anim_bonus_129_initialized;
class Bonus_129 : public Active
{
public:
    Bonus_129(int x, int y) : Active(x, y, Bonus_129_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("bonus", 5);
#endif
        this->animations = &anim_bonus_129;
        if (!anim_bonus_129_initialized) {
            anim_bonus_129_initialized = true;
            images_bonus_129_0_0[0] = get_internal_image(1469);
            images_bonus_129_0_16[0] = get_internal_image(1471);
            images_bonus_129_5_0[0] = get_internal_image(1469);
            images_bonus_129_5_0[1] = get_internal_image(3839);
            images_bonus_129_5_16[0] = get_internal_image(1471);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_bonus_129(int x, int y)
{
    return new (Active::pool.create()) Bonus_129(x, y);
}
class Workshop_130 : public ListObject
{
public:
    Workshop_130(int x, int y) : ListObject(x, y, Workshop_130_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Workshop", 8);
#endif
        set_visible(false);
        index_offset = current_line = 0;
    }
};
FrameObject * create_workshop_130(int x, int y)
{
    return new (ListObject::pool.create()) Workshop_130(x, y);
}
class Cheat2_131 : public ListObject
{
public:
    Cheat2_131(int x, int y) : ListObject(x, y, Cheat2_131_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("cheat 2", 7);
#endif
        add_line(std::string("UUDDLRLR", 8));
        set_visible(false);
        index_offset = current_line = 0;
    }
};
FrameObject * create_cheat2_131(int x, int y)
{
    return new (ListObject::pool.create()) Cheat2_131(x, y);
}
class Array_132 : public ArrayObject
{
public:
    Array_132(int x, int y) : ArrayObject(x, y, Array_132_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Array", 5);
#endif
        initialize(false, 1, 10, 10, 1);
    }
};
FrameObject * create_array_132(int x, int y)
{
    return new (ArrayObject::pool.create()) Array_132(x, y);
}
class Updates_133 : public ListObject
{
public:
    Updates_133(int x, int y) : ListObject(x, y, Updates_133_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("updates", 7);
#endif
        set_visible(false);
        index_offset = current_line = 0;
    }
};
FrameObject * create_updates_133(int x, int y)
{
    return new (ListObject::pool.create()) Updates_133(x, y);
}
static Image* images_active6_134_0_0[4];
static Direction direction_active6_134_0_0 = {0, 15, 15, 0, -1, images_active6_134_0_0, 4};
static Animation anim_active6_134_0 = {&direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, NULL, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0, &direction_active6_134_0_0};
static Animation * anim_array_active6_134[1] = {&anim_active6_134_0};
static Animations anim_active6_134 = {1, &anim_array_active6_134[0]};
static bool anim_active6_134_initialized;
class Active6_134 : public Active
{
public:
    Active6_134(int x, int y) : Active(x, y, Active6_134_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 6", 8);
#endif
        set_visible(false);
        this->animations = &anim_active6_134;
        if (!anim_active6_134_initialized) {
            anim_active6_134_initialized = true;
            images_active6_134_0_0[0] = get_internal_image(1473);
            images_active6_134_0_0[1] = get_internal_image(1567);
            images_active6_134_0_0[2] = get_internal_image(2353);
            images_active6_134_0_0[3] = get_internal_image(2365);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 95);
        create_alterables();
    }
};
FrameObject * create_active6_134(int x, int y)
{
    return new (Active::pool.create()) Active6_134(x, y);
}
static Image* images_custom2_135_0_0[1];
static Direction direction_custom2_135_0_0 = {0, 50, 50, 0, -1, images_custom2_135_0_0, 1};
static Image* images_custom2_135_0_16[1];
static Direction direction_custom2_135_0_16 = {16, 50, 50, 0, 1, images_custom2_135_0_16, 1};
static Animation anim_custom2_135_0 = {&direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0, NULL, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, &direction_custom2_135_0_16, NULL, &direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0, &direction_custom2_135_0_0};
static Image* images_custom2_135_1_0[1];
static Direction direction_custom2_135_1_0 = {0, 50, 50, 0, -1, images_custom2_135_1_0, 1};
static Image* images_custom2_135_1_16[1];
static Direction direction_custom2_135_1_16 = {16, 50, 50, 0, -1, images_custom2_135_1_16, 1};
static Animation anim_custom2_135_1 = {&direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0, NULL, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, &direction_custom2_135_1_16, NULL, &direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0, &direction_custom2_135_1_0};
static Image* images_custom2_135_5_0[2];
static Direction direction_custom2_135_5_0 = {0, 5, 5, 0, -1, images_custom2_135_5_0, 2};
static Image* images_custom2_135_5_16[2];
static Direction direction_custom2_135_5_16 = {16, 50, 50, 0, 1, images_custom2_135_5_16, 2};
static Animation anim_custom2_135_5 = {&direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0, NULL, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, &direction_custom2_135_5_16, NULL, &direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0, &direction_custom2_135_5_0};
static Image* images_custom2_135_6_0[2];
static Direction direction_custom2_135_6_0 = {0, 5, 5, 0, -1, images_custom2_135_6_0, 2};
static Image* images_custom2_135_6_16[1];
static Direction direction_custom2_135_6_16 = {16, 50, 50, 0, -1, images_custom2_135_6_16, 1};
static Animation anim_custom2_135_6 = {&direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0, NULL, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, &direction_custom2_135_6_16, NULL, &direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0, &direction_custom2_135_6_0};
static Animation * anim_array_custom2_135[7] = {&anim_custom2_135_0, &anim_custom2_135_1, NULL, NULL, NULL, &anim_custom2_135_5, &anim_custom2_135_6};
static Animations anim_custom2_135 = {7, &anim_array_custom2_135[0]};
static bool anim_custom2_135_initialized;
class Custom2_135 : public Active
{
public:
    Custom2_135(int x, int y) : Active(x, y, Custom2_135_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("custom 2", 8);
#endif
        this->animations = &anim_custom2_135;
        if (!anim_custom2_135_initialized) {
            anim_custom2_135_initialized = true;
            images_custom2_135_0_0[0] = get_internal_image(2395);
            images_custom2_135_0_16[0] = get_internal_image(2397);
            images_custom2_135_1_0[0] = get_internal_image(2393);
            images_custom2_135_1_16[0] = get_internal_image(2422);
            images_custom2_135_5_0[0] = get_internal_image(2395);
            images_custom2_135_5_0[1] = get_internal_image(3768);
            images_custom2_135_5_16[0] = get_internal_image(2422);
            images_custom2_135_5_16[1] = get_internal_image(2397);
            images_custom2_135_6_0[0] = get_internal_image(2393);
            images_custom2_135_6_0[1] = get_internal_image(3820);
            images_custom2_135_6_16[0] = get_internal_image(2422);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_custom2_135(int x, int y)
{
    return new (Active::pool.create()) Custom2_135(x, y);
}
class CustomMaps_136 : public ListObject
{
public:
    CustomMaps_136(int x, int y) : ListObject(x, y, CustomMaps_136_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Custom Maps", 11);
#endif
        set_visible(false);
        index_offset = current_line = 0;
    }
};
FrameObject * create_custommaps_136(int x, int y)
{
    return new (ListObject::pool.create()) CustomMaps_136(x, y);
}
static Image* images_custommaplistbg_137_0_0[1];
static Direction direction_custommaplistbg_137_0_0 = {0, 50, 50, 0, 1, images_custommaplistbg_137_0_0, 1};
static Animation anim_custommaplistbg_137_0 = {&direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, NULL, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0, &direction_custommaplistbg_137_0_0};
static Animation * anim_array_custommaplistbg_137[1] = {&anim_custommaplistbg_137_0};
static Animations anim_custommaplistbg_137 = {1, &anim_array_custommaplistbg_137[0]};
static bool anim_custommaplistbg_137_initialized;
class CustomMapListBG_137 : public Active
{
public:
    CustomMapListBG_137(int x, int y) : Active(x, y, CustomMapListBG_137_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Custom map list BG", 18);
#endif
        set_visible(false);
        this->animations = &anim_custommaplistbg_137;
        if (!anim_custommaplistbg_137_initialized) {
            anim_custommaplistbg_137_initialized = true;
            images_custommaplistbg_137_0_0[0] = get_internal_image(166);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_custommaplistbg_137(int x, int y)
{
    return new (Active::pool.create()) CustomMapListBG_137(x, y);
}
class CUSTOMMapList_138 : public Text
{
public:
    CUSTOMMapList_138(int x, int y) : Text(x, y, CUSTOMMapList_138_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("CUSTOM map list", 15);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 175;
        height = 80;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("Fhurst Peak Correctional", 24));
        create_alterables();
    }
};
FrameObject * create_custommaplist_138(int x, int y)
{
    return new (Text::pool.create()) CUSTOMMapList_138(x, y);
}
static Image* images_workshoplink_139_5_0[1];
static Direction direction_workshoplink_139_5_0 = {0, 50, 50, 0, -1, images_workshoplink_139_5_0, 1};
static Image* images_workshoplink_139_5_16[1];
static Direction direction_workshoplink_139_5_16 = {16, 50, 50, 0, -1, images_workshoplink_139_5_16, 1};
static Animation anim_workshoplink_139_5 = {&direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, NULL, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, &direction_workshoplink_139_5_16, NULL, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0, &direction_workshoplink_139_5_0};
static Animation * anim_array_workshoplink_139[6] = {NULL, NULL, NULL, NULL, NULL, &anim_workshoplink_139_5};
static Animations anim_workshoplink_139 = {6, &anim_array_workshoplink_139[0]};
static bool anim_workshoplink_139_initialized;
class WorkshopLink_139 : public Active
{
public:
    WorkshopLink_139(int x, int y) : Active(x, y, WorkshopLink_139_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("workshop link", 13);
#endif
        this->animations = &anim_workshoplink_139;
        if (!anim_workshoplink_139_initialized) {
            anim_workshoplink_139_initialized = true;
            images_workshoplink_139_5_0[0] = get_internal_image(1047);
            images_workshoplink_139_5_16[0] = get_internal_image(1047);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_workshoplink_139(int x, int y)
{
    return new (Active::pool.create()) WorkshopLink_139(x, y);
}
class Updates2_141 : public ListObject
{
public:
    Updates2_141(int x, int y) : ListObject(x, y, Updates2_141_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("updates 2", 9);
#endif
        set_visible(false);
        index_offset = current_line = 0;
    }
};
FrameObject * create_updates2_141(int x, int y)
{
    return new (ListObject::pool.create()) Updates2_141(x, y);
}
class SETTINGS_142 : public INI
{
public:
    SETTINGS_142(int x, int y) : INI(x, y, SETTINGS_142_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SETTINGS", 8);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_settings_142(int x, int y)
{
    return new (INI::pool.create()) SETTINGS_142(x, y);
}
class QuickBackdrop_144 : public QuickBackdrop
{
public:
    QuickBackdrop_144(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop", 14);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
        width = 324;
        height = 240;
        color = Color(11, 27, 51, 255);
        gradient_type = NONE_GRADIENT;
        outline = 0;
        blend_color = Color(255, 255, 255, 205);
    }
};
FrameObject * create_quickbackdrop_144(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop_144(x, y);
}
class QuickBackdrop2_145 : public QuickBackdrop
{
public:
    QuickBackdrop2_145(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 2", 16);
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
FrameObject * create_quickbackdrop2_145(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop2_145(x, y);
}
class Backdrop7_146 : public Backdrop
{
public:
    Backdrop7_146(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 7", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_7
        manager.frame->back_instances[BACK_ID_BACKDROP_7].push_back(this);
#endif
        image = get_internal_image(0);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop7_146(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop7_146(x, y);
}
class Downoad_147 : public Text
{
public:
    Downoad_147(int x, int y) : Text(x, y, Downoad_147_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("downoad", 7);
#endif
        flags &= ~SCROLL;
        width = 78;
        height = 11;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("download", 8));
        create_alterables();
    }
};
FrameObject * create_downoad_147(int x, int y)
{
    return new (Text::pool.create()) Downoad_147(x, y);
}
static Image* images_download2_148_5_0[1];
static Direction direction_download2_148_5_0 = {0, 50, 50, 0, -1, images_download2_148_5_0, 1};
static Image* images_download2_148_5_16[1];
static Direction direction_download2_148_5_16 = {16, 50, 50, 0, 1, images_download2_148_5_16, 1};
static Animation anim_download2_148_5 = {&direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0, NULL, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, &direction_download2_148_5_16, NULL, &direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0, &direction_download2_148_5_0};
static Animation * anim_array_download2_148[6] = {NULL, NULL, NULL, NULL, NULL, &anim_download2_148_5};
static Animations anim_download2_148 = {6, &anim_array_download2_148[0]};
static bool anim_download2_148_initialized;
class Download2_148 : public Active
{
public:
    Download2_148(int x, int y) : Active(x, y, Download2_148_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("download 2", 10);
#endif
        this->animations = &anim_download2_148;
        if (!anim_download2_148_initialized) {
            anim_download2_148_initialized = true;
            images_download2_148_5_0[0] = get_internal_image(830);
            images_download2_148_5_16[0] = get_internal_image(1093);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        blend_color = Color(255, 255, 255, 155);
        create_alterables();
    }
};
FrameObject * create_download2_148(int x, int y)
{
    return new (Active::pool.create()) Download2_148(x, y);
}
static Image* images_loadingspin_149_0_0[4];
static Direction direction_loadingspin_149_0_0 = {0, 15, 15, 0, -1, images_loadingspin_149_0_0, 4};
static Animation anim_loadingspin_149_0 = {&direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, NULL, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0, &direction_loadingspin_149_0_0};
static Animation * anim_array_loadingspin_149[1] = {&anim_loadingspin_149_0};
static Animations anim_loadingspin_149 = {1, &anim_array_loadingspin_149[0]};
static bool anim_loadingspin_149_initialized;
class LoadingSpin_149 : public Active
{
public:
    LoadingSpin_149(int x, int y) : Active(x, y, LoadingSpin_149_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("loading_spin", 12);
#endif
        this->animations = &anim_loadingspin_149;
        if (!anim_loadingspin_149_initialized) {
            anim_loadingspin_149_initialized = true;
            images_loadingspin_149_0_0[0] = get_internal_image(1037);
            images_loadingspin_149_0_0[1] = get_internal_image(1039);
            images_loadingspin_149_0_0[2] = get_internal_image(1566);
            images_loadingspin_149_0_0[3] = get_internal_image(2414);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        blend_color = Color(255, 255, 255, 175);
        create_alterables();
    }
};
FrameObject * create_loadingspin_149(int x, int y)
{
    return new (Active::pool.create()) LoadingSpin_149(x, y);
}
class CustomNames_150 : public SystemBox
{
public:
    CustomNames_150(int x, int y) : SystemBox(x, y, CustomNames_150_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("custom names", 12);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        width = 183;
        height = 12;
        image = NULL;
        blend_color = Color(31, 31, 31);
        create_alterables();
    }
};
FrameObject * create_customnames_150(int x, int y)
{
    return new (SystemBox::pool.create()) CustomNames_150(x, y);
}
class DOWNLOAD_151 : public ListObject
{
public:
    DOWNLOAD_151(int x, int y) : ListObject(x, y, DOWNLOAD_151_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DOWNLOAD", 8);
#endif
        set_visible(false);
        index_offset = current_line = 0;
    }
};
FrameObject * create_download_151(int x, int y)
{
    return new (ListObject::pool.create()) DOWNLOAD_151(x, y);
}
static Image* images_bonus_152_0_0[11];
static Direction direction_bonus_152_0_0 = {0, 8, 8, 0, 1, images_bonus_152_0_0, 11};
static Animation anim_bonus_152_0 = {&direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, NULL, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0, &direction_bonus_152_0_0};
static Animation * anim_array_bonus_152[1] = {&anim_bonus_152_0};
static Animations anim_bonus_152 = {1, &anim_array_bonus_152[0]};
static bool anim_bonus_152_initialized;
class BONUS_152 : public Active
{
public:
    BONUS_152(int x, int y) : Active(x, y, BONUS_152_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("BONUS", 5);
#endif
        set_visible(false);
        this->animations = &anim_bonus_152;
        if (!anim_bonus_152_initialized) {
            anim_bonus_152_initialized = true;
            images_bonus_152_0_0[0] = get_internal_image(3633);
            images_bonus_152_0_0[1] = get_internal_image(3256);
            images_bonus_152_0_0[2] = get_internal_image(2586);
            images_bonus_152_0_0[3] = get_internal_image(2749);
            images_bonus_152_0_0[4] = get_internal_image(2641);
            images_bonus_152_0_0[5] = get_internal_image(2647);
            images_bonus_152_0_0[6] = get_internal_image(2751);
            images_bonus_152_0_0[7] = get_internal_image(346);
            images_bonus_152_0_0[8] = get_internal_image(3911);
            images_bonus_152_0_0[9] = get_internal_image(3912);
            images_bonus_152_0_0[10] = get_internal_image(3910);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_bonus_152(int x, int y)
{
    return new (Active::pool.create()) BONUS_152(x, y);
}
class Backdrop_153 : public Backdrop
{
public:
    Backdrop_153(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop", 8);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP
        manager.frame->back_instances[BACK_ID_BACKDROP].push_back(this);
#endif
        image = get_internal_image(3857);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop_153(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop_153(x, y);
}
static Image* images_t17presents_154_0_0[7];
static Direction direction_t17presents_154_0_0 = {0, 50, 50, 0, 1, images_t17presents_154_0_0, 7};
static Animation anim_t17presents_154_0 = {&direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, NULL, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0, &direction_t17presents_154_0_0};
static Animation * anim_array_t17presents_154[1] = {&anim_t17presents_154_0};
static Animations anim_t17presents_154 = {1, &anim_array_t17presents_154[0]};
static bool anim_t17presents_154_initialized;
class T17Presents_154 : public Active
{
public:
    T17Presents_154(int x, int y) : Active(x, y, T17Presents_154_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("t17 presents", 12);
#endif
        set_visible(false);
        this->animations = &anim_t17presents_154;
        if (!anim_t17presents_154_initialized) {
            anim_t17presents_154_initialized = true;
            images_t17presents_154_0_0[0] = get_internal_image(3898);
            images_t17presents_154_0_0[1] = get_internal_image(3896);
            images_t17presents_154_0_0[2] = get_internal_image(3899);
            images_t17presents_154_0_0[3] = get_internal_image(3900);
            images_t17presents_154_0_0[4] = get_internal_image(3901);
            images_t17presents_154_0_0[5] = get_internal_image(3903);
            images_t17presents_154_0_0[6] = get_internal_image(3902);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 155);
        create_alterables();
    }
};
FrameObject * create_t17presents_154(int x, int y)
{
    return new (Active::pool.create()) T17Presents_154(x, y);
}
class String2_155 : public Text
{
public:
    String2_155(int x, int y) : Text(x, y, String2_155_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String 2", 8);
#endif
        flags &= ~SCROLL;
        width = 234;
        height = 34;
        blend_color = Color(85, 126, 193);
        bold = false;
        italic = false;
        font_name = std::string("Small Fonts", 11);
        font = get_font(7, 0);
        alignment = ALIGN_HCENTER | ALIGN_BOTTOM;
        add_line(std::string("LOADING...", 10));
        blend_color.a = 115;
        create_alterables();
    }
};
FrameObject * create_string2_155(int x, int y)
{
    return new (Text::pool.create()) String2_155(x, y);
}
class Tips_156 : public ListObject
{
public:
    Tips_156(int x, int y) : ListObject(x, y, Tips_156_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Tips", 4);
#endif
        add_line(std::string("If you get knocked out any contraband on hand will be either confiscated or stolen", 82));
        add_line(std::string("Raise your strength and agility in the prison gym", 49));
        add_line(std::string("Reading in the library raises your intellect", 44));
        add_line(std::string("If you're due a cell shakedown, make sure your desk is free of contraband", 73));
        add_line(std::string("Beware of passing through detectors carrying contraband", 55));
        add_line(std::string("A flashing bag icon over an inmate means they have items for sale", 65));
        add_line(std::string("A flashing exclamation mark icon over an inmate means they have a favour to ask", 79));
        add_line(std::string("Prison jobs are a legal and more safe way of earning cash", 57));
        add_line(std::string("Escape attempts land you in solitary confinement", 48));
        add_line(std::string("Talking to other inmates raises their opinion of you", 52));
        add_line(std::string("Climb onto desks or units to get access to the ventilation panels", 65));
        add_line(std::string("You can dig using a range of items from spoons to shovels", 57));
        add_line(std::string("Wall blocks can be chipped away with various items", 50));
        add_line(std::string("Sleeping at night saves your game progress", 42));
        add_line(std::string("Doing manual tasks raises your fatigue", 38));
        add_line(std::string("Fatigue can be lowered by sitting, laying down, showering, or eating", 68));
        add_line(std::string("Even tower guards take a break now and then!", 44));
        add_line(std::string("Use dirt on a hole outside to fill it back in", 45));
        add_line(std::string("Use cement on a hole in the prison to fill it back in", 53));
        add_line(std::string("Bars, fences, vents, and other metal obstacles can be cut with makeshift tools", 78));
        add_line(std::string("Favours may raise one inmates opinion of you, but lower anothers", 64));
        add_line(std::string("Equip a weapon to inflict more damage in a fight", 48));
        add_line(std::string("Your skills take a drop during the three days in solitary confinement", 69));
        add_line(std::string("The number keys are shortcuts to your inventory", 47));
        add_line(std::string("Take note which guards carry certain keys- you might need them later", 68));
        add_line(std::string("Holding SHIFT while over an item tells its stats", 48));
        add_line(std::string("Save your game by sleeping in your cell at lights out", 53));
        add_line(std::string("Some items can be made into shivs by using them on any wall", 59));
        add_line(std::string("Right click on a bed to grab the sheet, and again for the pillow", 64));
        add_line(std::string("You can create job vacancies by disrupting an inmates work routine", 66));
        index_offset = current_line = -1;
    }
};
FrameObject * create_tips_156(int x, int y)
{
    return new (ListObject::pool.create()) Tips_156(x, y);
}
class Backdrop2_157 : public Backdrop
{
public:
    Backdrop2_157(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 2", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_2
        manager.frame->back_instances[BACK_ID_BACKDROP_2].push_back(this);
#endif
        image = get_internal_image(88);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop2_157(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop2_157(x, y);
}
class Backdrop6_158 : public Backdrop
{
public:
    Backdrop6_158(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
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
        blend_color = Color(255, 255, 255, 25);
    }
};
FrameObject * create_backdrop6_158(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop6_158(x, y);
}
class String3_159 : public Text
{
public:
    String3_159(int x, int y) : Text(x, y, String3_159_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String 3", 8);
#endif
        flags &= ~SCROLL;
        width = 234;
        height = 34;
        blend_color = Color(255, 104, 32);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("Loading...", 10));
        create_alterables();
    }
};
FrameObject * create_string3_159(int x, int y)
{
    return new (Text::pool.create()) String3_159(x, y);
}
class ActivePicture_160 : public ActivePicture
{
public:
    ActivePicture_160(int x, int y) : ActivePicture(x, y, ActivePicture_160_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active Picture", 14);
#endif
        set_visible(false);
        set_transparent_color(Color(0, 0, 0));
        sprite_col.width = width = 32;
        sprite_col.height = height = 32;
        create_alterables();
    }
};
FrameObject * create_activepicture_160(int x, int y)
{
    return new (ActivePicture::pool.create()) ActivePicture_160(x, y);
}
class Items_162 : public StringParser
{
public:
    Items_162(int x, int y) : StringParser(x, y, Items_162_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("items", 5);
#endif
    }
};
FrameObject * create_items_162(int x, int y)
{
    return new (StringParser::pool.create()) Items_162(x, y);
}
class Data_163 : public StringParser
{
public:
    Data_163(int x, int y) : StringParser(x, y, Data_163_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("data", 4);
#endif
    }
};
FrameObject * create_data_163(int x, int y)
{
    return new (StringParser::pool.create()) Data_163(x, y);
}
class Speech_164 : public StringParser
{
public:
    Speech_164(int x, int y) : StringParser(x, y, Speech_164_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("speech", 6);
#endif
    }
};
FrameObject * create_speech_164(int x, int y)
{
    return new (StringParser::pool.create()) Speech_164(x, y);
}
class NewMapRead_165 : public INI
{
public:
    NewMapRead_165(int x, int y) : INI(x, y, NewMapRead_165_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("new_MapRead", 11);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_newmapread_165(int x, int y)
{
    return new (INI::pool.create()) NewMapRead_165(x, y);
}
class SAVEREAD_166 : public INI
{
public:
    SAVEREAD_166(int x, int y) : INI(x, y, SAVEREAD_166_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SAVE_READ", 9);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_saveread_166(int x, int y)
{
    return new (INI::pool.create()) SAVEREAD_166(x, y);
}
class SAVEREF_167 : public INI
{
public:
    SAVEREF_167(int x, int y) : INI(x, y, SAVEREF_167_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SAVE_REF", 8);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_saveref_167(int x, int y)
{
    return new (INI::pool.create()) SAVEREF_167(x, y);
}
class ERRORS_168 : public ListObject
{
public:
    ERRORS_168(int x, int y) : ListObject(x, y, ERRORS_168_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ERRORS", 6);
#endif
        add_line(std::string("ERROR: ", 7));
        add_line(std::string("$source is missing#or corrupted", 31));
        add_line(std::string("This map is not yet playable", 28));
        add_line(std::string("Save file incompatible with this map version", 44));
        add_line(std::string("Please re-install", 17));
        add_line(std::string("Custom speech file $source not found! Revert back to DEFAULT in settings", 72));
        add_line(std::string("This downloadable content is not installed", 42));
        add_line(std::string("PRESS [ESC] TO QUIT", 19));
        add_line(std::string("CLICK TO CONTINUE", 17));
        index_offset = current_line = -1;
    }
};
FrameObject * create_errors_168(int x, int y)
{
    return new (ListObject::pool.create()) ERRORS_168(x, y);
}
static Image* images_guard_169_0_0[2];
static Direction direction_guard_169_0_0 = {0, 10, 10, 0, -1, images_guard_169_0_0, 2};
static Image* images_guard_169_0_8[2];
static Direction direction_guard_169_0_8 = {8, 10, 10, 0, -1, images_guard_169_0_8, 2};
static Image* images_guard_169_0_16[2];
static Direction direction_guard_169_0_16 = {16, 10, 10, 0, -1, images_guard_169_0_16, 2};
static Image* images_guard_169_0_24[2];
static Direction direction_guard_169_0_24 = {24, 10, 10, 0, -1, images_guard_169_0_24, 2};
static Animation anim_guard_169_0 = {&direction_guard_169_0_0, &direction_guard_169_0_0, &direction_guard_169_0_0, &direction_guard_169_0_0, NULL, &direction_guard_169_0_8, &direction_guard_169_0_8, &direction_guard_169_0_8, &direction_guard_169_0_8, &direction_guard_169_0_8, &direction_guard_169_0_8, &direction_guard_169_0_8, NULL, &direction_guard_169_0_16, &direction_guard_169_0_16, &direction_guard_169_0_16, &direction_guard_169_0_16, &direction_guard_169_0_16, &direction_guard_169_0_16, &direction_guard_169_0_16, NULL, &direction_guard_169_0_24, &direction_guard_169_0_24, &direction_guard_169_0_24, &direction_guard_169_0_24, &direction_guard_169_0_24, &direction_guard_169_0_24, &direction_guard_169_0_24, NULL, &direction_guard_169_0_0, &direction_guard_169_0_0, &direction_guard_169_0_0};
static Image* images_guard_169_6_0[1];
static Direction direction_guard_169_6_0 = {0, 6, 6, 0, 1, images_guard_169_6_0, 1};
static Image* images_guard_169_6_8[1];
static Direction direction_guard_169_6_8 = {8, 6, 6, 0, 1, images_guard_169_6_8, 1};
static Image* images_guard_169_6_16[1];
static Direction direction_guard_169_6_16 = {16, 6, 6, 0, 1, images_guard_169_6_16, 1};
static Image* images_guard_169_6_24[1];
static Direction direction_guard_169_6_24 = {24, 6, 6, 0, 1, images_guard_169_6_24, 1};
static Animation anim_guard_169_6 = {&direction_guard_169_6_0, &direction_guard_169_6_0, &direction_guard_169_6_0, &direction_guard_169_6_0, NULL, &direction_guard_169_6_8, &direction_guard_169_6_8, &direction_guard_169_6_8, &direction_guard_169_6_8, &direction_guard_169_6_8, &direction_guard_169_6_8, &direction_guard_169_6_8, NULL, &direction_guard_169_6_16, &direction_guard_169_6_16, &direction_guard_169_6_16, &direction_guard_169_6_16, &direction_guard_169_6_16, &direction_guard_169_6_16, &direction_guard_169_6_16, NULL, &direction_guard_169_6_24, &direction_guard_169_6_24, &direction_guard_169_6_24, &direction_guard_169_6_24, &direction_guard_169_6_24, &direction_guard_169_6_24, &direction_guard_169_6_24, NULL, &direction_guard_169_6_0, &direction_guard_169_6_0, &direction_guard_169_6_0};
static Image* images_guard_169_8_0[1];
static Direction direction_guard_169_8_0 = {0, 50, 50, 0, -1, images_guard_169_8_0, 1};
static Image* images_guard_169_8_16[2];
static Direction direction_guard_169_8_16 = {16, 5, 5, 0, -1, images_guard_169_8_16, 2};
static Image* images_guard_169_8_24[3];
static Direction direction_guard_169_8_24 = {24, 10, 10, 0, -1, images_guard_169_8_24, 3};
static Animation anim_guard_169_8 = {&direction_guard_169_8_0, &direction_guard_169_8_0, &direction_guard_169_8_0, &direction_guard_169_8_0, &direction_guard_169_8_0, &direction_guard_169_8_0, &direction_guard_169_8_0, &direction_guard_169_8_0, NULL, &direction_guard_169_8_16, &direction_guard_169_8_16, &direction_guard_169_8_16, &direction_guard_169_8_16, &direction_guard_169_8_16, &direction_guard_169_8_16, &direction_guard_169_8_16, &direction_guard_169_8_16, &direction_guard_169_8_16, &direction_guard_169_8_16, &direction_guard_169_8_16, NULL, &direction_guard_169_8_24, &direction_guard_169_8_24, &direction_guard_169_8_24, &direction_guard_169_8_24, &direction_guard_169_8_24, &direction_guard_169_8_24, &direction_guard_169_8_24, NULL, &direction_guard_169_8_0, &direction_guard_169_8_0, &direction_guard_169_8_0};
static Image* images_guard_169_9_0[2];
static Direction direction_guard_169_9_0 = {0, 6, 6, 0, 2, images_guard_169_9_0, 2};
static Image* images_guard_169_9_8[2];
static Direction direction_guard_169_9_8 = {8, 6, 6, 0, 2, images_guard_169_9_8, 2};
static Image* images_guard_169_9_16[2];
static Direction direction_guard_169_9_16 = {16, 6, 6, 0, 2, images_guard_169_9_16, 2};
static Image* images_guard_169_9_24[2];
static Direction direction_guard_169_9_24 = {24, 6, 6, 0, 2, images_guard_169_9_24, 2};
static Animation anim_guard_169_9 = {&direction_guard_169_9_0, &direction_guard_169_9_0, &direction_guard_169_9_0, &direction_guard_169_9_0, NULL, &direction_guard_169_9_8, &direction_guard_169_9_8, &direction_guard_169_9_8, &direction_guard_169_9_8, &direction_guard_169_9_8, &direction_guard_169_9_8, &direction_guard_169_9_8, NULL, &direction_guard_169_9_16, &direction_guard_169_9_16, &direction_guard_169_9_16, &direction_guard_169_9_16, &direction_guard_169_9_16, &direction_guard_169_9_16, &direction_guard_169_9_16, NULL, &direction_guard_169_9_24, &direction_guard_169_9_24, &direction_guard_169_9_24, &direction_guard_169_9_24, &direction_guard_169_9_24, &direction_guard_169_9_24, &direction_guard_169_9_24, NULL, &direction_guard_169_9_0, &direction_guard_169_9_0, &direction_guard_169_9_0};
static Animation * anim_array_guard_169[10] = {&anim_guard_169_0, NULL, NULL, NULL, NULL, NULL, &anim_guard_169_6, NULL, &anim_guard_169_8, &anim_guard_169_9};
static Animations anim_guard_169 = {10, &anim_array_guard_169[0]};
static bool anim_guard_169_initialized;
class Guard_169 : public Active
{
public:
    Guard_169(int x, int y) : Active(x, y, Guard_169_type)
    {
        // qualifiers: 31, 33
#ifndef NDEBUG
        name = std::string("Guard", 5);
#endif
        this->animations = &anim_guard_169;
        if (!anim_guard_169_initialized) {
            anim_guard_169_initialized = true;
            images_guard_169_0_0[0] = get_internal_image(496);
            images_guard_169_0_0[1] = get_internal_image(503);
            images_guard_169_0_8[0] = get_internal_image(506);
            images_guard_169_0_8[1] = get_internal_image(509);
            images_guard_169_0_16[0] = get_internal_image(505);
            images_guard_169_0_16[1] = get_internal_image(504);
            images_guard_169_0_24[0] = get_internal_image(507);
            images_guard_169_0_24[1] = get_internal_image(508);
            images_guard_169_6_0[0] = get_internal_image(510);
            images_guard_169_6_8[0] = get_internal_image(513);
            images_guard_169_6_16[0] = get_internal_image(511);
            images_guard_169_6_24[0] = get_internal_image(512);
            images_guard_169_8_0[0] = get_internal_image(516);
            images_guard_169_8_16[0] = get_internal_image(492);
            images_guard_169_8_16[1] = get_internal_image(644);
            images_guard_169_8_24[0] = get_internal_image(1559);
            images_guard_169_8_24[1] = get_internal_image(1559);
            images_guard_169_8_24[2] = get_internal_image(1559);
            images_guard_169_9_0[0] = get_internal_image(68);
            images_guard_169_9_0[1] = get_internal_image(312);
            images_guard_169_9_8[0] = get_internal_image(316);
            images_guard_169_9_8[1] = get_internal_image(92);
            images_guard_169_9_16[0] = get_internal_image(82);
            images_guard_169_9_16[1] = get_internal_image(313);
            images_guard_169_9_24[0] = get_internal_image(315);
            images_guard_169_9_24[1] = get_internal_image(24);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(pick_random(4, 0, 8, 16, 24));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(5);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 0;
        ((BallMovement*)movement)->init();
        create_alterables();
    }
};
FrameObject * create_guard_169(int x, int y)
{
    return new (Active::pool.create()) Guard_169(x, y);
}
static Image* images_player0_170_0_0[2];
static Direction direction_player0_170_0_0 = {0, 10, 10, 0, -1, images_player0_170_0_0, 2};
static Image* images_player0_170_0_8[2];
static Direction direction_player0_170_0_8 = {8, 10, 10, 0, -1, images_player0_170_0_8, 2};
static Image* images_player0_170_0_16[2];
static Direction direction_player0_170_0_16 = {16, 10, 10, 0, -1, images_player0_170_0_16, 2};
static Image* images_player0_170_0_24[2];
static Direction direction_player0_170_0_24 = {24, 10, 10, 0, -1, images_player0_170_0_24, 2};
static Animation anim_player0_170_0 = {&direction_player0_170_0_0, &direction_player0_170_0_0, &direction_player0_170_0_0, &direction_player0_170_0_0, NULL, &direction_player0_170_0_8, &direction_player0_170_0_8, &direction_player0_170_0_8, &direction_player0_170_0_8, &direction_player0_170_0_8, &direction_player0_170_0_8, &direction_player0_170_0_8, NULL, &direction_player0_170_0_16, &direction_player0_170_0_16, &direction_player0_170_0_16, &direction_player0_170_0_16, &direction_player0_170_0_16, &direction_player0_170_0_16, &direction_player0_170_0_16, NULL, &direction_player0_170_0_24, &direction_player0_170_0_24, &direction_player0_170_0_24, &direction_player0_170_0_24, &direction_player0_170_0_24, &direction_player0_170_0_24, &direction_player0_170_0_24, NULL, &direction_player0_170_0_0, &direction_player0_170_0_0, &direction_player0_170_0_0};
static Image* images_player0_170_4_0[4];
static Direction direction_player0_170_4_0 = {0, 20, 20, 0, 1, images_player0_170_4_0, 4};
static Image* images_player0_170_4_16[4];
static Direction direction_player0_170_4_16 = {16, 20, 20, 0, 1, images_player0_170_4_16, 4};
static Animation anim_player0_170_4 = {&direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0, NULL, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, &direction_player0_170_4_16, NULL, &direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0, &direction_player0_170_4_0};
static Image* images_player0_170_6_0[1];
static Direction direction_player0_170_6_0 = {0, 6, 6, 0, 1, images_player0_170_6_0, 1};
static Image* images_player0_170_6_8[1];
static Direction direction_player0_170_6_8 = {8, 6, 6, 0, 1, images_player0_170_6_8, 1};
static Image* images_player0_170_6_16[1];
static Direction direction_player0_170_6_16 = {16, 6, 6, 0, 1, images_player0_170_6_16, 1};
static Image* images_player0_170_6_24[1];
static Direction direction_player0_170_6_24 = {24, 6, 6, 0, 1, images_player0_170_6_24, 1};
static Animation anim_player0_170_6 = {&direction_player0_170_6_0, &direction_player0_170_6_0, &direction_player0_170_6_0, &direction_player0_170_6_0, NULL, &direction_player0_170_6_8, &direction_player0_170_6_8, &direction_player0_170_6_8, &direction_player0_170_6_8, &direction_player0_170_6_8, &direction_player0_170_6_8, &direction_player0_170_6_8, NULL, &direction_player0_170_6_16, &direction_player0_170_6_16, &direction_player0_170_6_16, &direction_player0_170_6_16, &direction_player0_170_6_16, &direction_player0_170_6_16, &direction_player0_170_6_16, NULL, &direction_player0_170_6_24, &direction_player0_170_6_24, &direction_player0_170_6_24, &direction_player0_170_6_24, &direction_player0_170_6_24, &direction_player0_170_6_24, &direction_player0_170_6_24, NULL, &direction_player0_170_6_0, &direction_player0_170_6_0, &direction_player0_170_6_0};
static Image* images_player0_170_7_0[2];
static Direction direction_player0_170_7_0 = {0, 10, 10, 0, -1, images_player0_170_7_0, 2};
static Image* images_player0_170_7_8[2];
static Direction direction_player0_170_7_8 = {8, 10, 10, 0, -1, images_player0_170_7_8, 2};
static Image* images_player0_170_7_16[2];
static Direction direction_player0_170_7_16 = {16, 10, 10, 0, -1, images_player0_170_7_16, 2};
static Image* images_player0_170_7_24[2];
static Direction direction_player0_170_7_24 = {24, 10, 10, 0, -1, images_player0_170_7_24, 2};
static Animation anim_player0_170_7 = {&direction_player0_170_7_0, &direction_player0_170_7_0, &direction_player0_170_7_0, &direction_player0_170_7_0, NULL, &direction_player0_170_7_8, &direction_player0_170_7_8, &direction_player0_170_7_8, &direction_player0_170_7_8, &direction_player0_170_7_8, &direction_player0_170_7_8, &direction_player0_170_7_8, NULL, &direction_player0_170_7_16, &direction_player0_170_7_16, &direction_player0_170_7_16, &direction_player0_170_7_16, &direction_player0_170_7_16, &direction_player0_170_7_16, &direction_player0_170_7_16, NULL, &direction_player0_170_7_24, &direction_player0_170_7_24, &direction_player0_170_7_24, &direction_player0_170_7_24, &direction_player0_170_7_24, &direction_player0_170_7_24, &direction_player0_170_7_24, NULL, &direction_player0_170_7_0, &direction_player0_170_7_0, &direction_player0_170_7_0};
static Image* images_player0_170_8_0[1];
static Direction direction_player0_170_8_0 = {0, 50, 50, 0, -1, images_player0_170_8_0, 1};
static Image* images_player0_170_8_24[1];
static Direction direction_player0_170_8_24 = {24, 50, 50, 0, -1, images_player0_170_8_24, 1};
static Animation anim_player0_170_8 = {&direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0, NULL, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, &direction_player0_170_8_24, NULL, &direction_player0_170_8_0, &direction_player0_170_8_0, &direction_player0_170_8_0};
static Image* images_player0_170_9_0[2];
static Direction direction_player0_170_9_0 = {0, 5, 5, 0, -1, images_player0_170_9_0, 2};
static Animation anim_player0_170_9 = {&direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, NULL, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0, &direction_player0_170_9_0};
static Image* images_player0_170_10_0[5];
static Direction direction_player0_170_10_0 = {0, 10, 10, 0, 1, images_player0_170_10_0, 5};
static Animation anim_player0_170_10 = {&direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, NULL, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0, &direction_player0_170_10_0};
static Image* images_player0_170_11_0[2];
static Direction direction_player0_170_11_0 = {0, 10, 10, 0, -1, images_player0_170_11_0, 2};
static Image* images_player0_170_11_8[2];
static Direction direction_player0_170_11_8 = {8, 10, 10, 0, -1, images_player0_170_11_8, 2};
static Image* images_player0_170_11_16[2];
static Direction direction_player0_170_11_16 = {16, 10, 10, 0, -1, images_player0_170_11_16, 2};
static Image* images_player0_170_11_24[2];
static Direction direction_player0_170_11_24 = {24, 10, 10, 0, -1, images_player0_170_11_24, 2};
static Animation anim_player0_170_11 = {&direction_player0_170_11_0, &direction_player0_170_11_0, &direction_player0_170_11_0, &direction_player0_170_11_0, NULL, &direction_player0_170_11_8, &direction_player0_170_11_8, &direction_player0_170_11_8, &direction_player0_170_11_8, &direction_player0_170_11_8, &direction_player0_170_11_8, &direction_player0_170_11_8, NULL, &direction_player0_170_11_16, &direction_player0_170_11_16, &direction_player0_170_11_16, &direction_player0_170_11_16, &direction_player0_170_11_16, &direction_player0_170_11_16, &direction_player0_170_11_16, NULL, &direction_player0_170_11_24, &direction_player0_170_11_24, &direction_player0_170_11_24, &direction_player0_170_11_24, &direction_player0_170_11_24, &direction_player0_170_11_24, &direction_player0_170_11_24, NULL, &direction_player0_170_11_0, &direction_player0_170_11_0, &direction_player0_170_11_0};
static Image* images_player0_170_12_0[2];
static Direction direction_player0_170_12_0 = {0, 10, 10, 0, -1, images_player0_170_12_0, 2};
static Image* images_player0_170_12_8[2];
static Direction direction_player0_170_12_8 = {8, 10, 10, 0, -1, images_player0_170_12_8, 2};
static Image* images_player0_170_12_16[2];
static Direction direction_player0_170_12_16 = {16, 10, 10, 0, -1, images_player0_170_12_16, 2};
static Image* images_player0_170_12_24[2];
static Direction direction_player0_170_12_24 = {24, 10, 10, 0, -1, images_player0_170_12_24, 2};
static Animation anim_player0_170_12 = {&direction_player0_170_12_0, &direction_player0_170_12_0, &direction_player0_170_12_0, &direction_player0_170_12_0, NULL, &direction_player0_170_12_8, &direction_player0_170_12_8, &direction_player0_170_12_8, &direction_player0_170_12_8, &direction_player0_170_12_8, &direction_player0_170_12_8, &direction_player0_170_12_8, NULL, &direction_player0_170_12_16, &direction_player0_170_12_16, &direction_player0_170_12_16, &direction_player0_170_12_16, &direction_player0_170_12_16, &direction_player0_170_12_16, &direction_player0_170_12_16, NULL, &direction_player0_170_12_24, &direction_player0_170_12_24, &direction_player0_170_12_24, &direction_player0_170_12_24, &direction_player0_170_12_24, &direction_player0_170_12_24, &direction_player0_170_12_24, NULL, &direction_player0_170_12_0, &direction_player0_170_12_0, &direction_player0_170_12_0};
static Image* images_player0_170_13_0[2];
static Direction direction_player0_170_13_0 = {0, 10, 10, 0, -1, images_player0_170_13_0, 2};
static Image* images_player0_170_13_8[2];
static Direction direction_player0_170_13_8 = {8, 10, 10, 0, -1, images_player0_170_13_8, 2};
static Image* images_player0_170_13_16[2];
static Direction direction_player0_170_13_16 = {16, 10, 10, 0, -1, images_player0_170_13_16, 2};
static Image* images_player0_170_13_24[2];
static Direction direction_player0_170_13_24 = {24, 10, 10, 0, -1, images_player0_170_13_24, 2};
static Animation anim_player0_170_13 = {&direction_player0_170_13_0, &direction_player0_170_13_0, &direction_player0_170_13_0, &direction_player0_170_13_0, NULL, &direction_player0_170_13_8, &direction_player0_170_13_8, &direction_player0_170_13_8, &direction_player0_170_13_8, &direction_player0_170_13_8, &direction_player0_170_13_8, &direction_player0_170_13_8, NULL, &direction_player0_170_13_16, &direction_player0_170_13_16, &direction_player0_170_13_16, &direction_player0_170_13_16, &direction_player0_170_13_16, &direction_player0_170_13_16, &direction_player0_170_13_16, NULL, &direction_player0_170_13_24, &direction_player0_170_13_24, &direction_player0_170_13_24, &direction_player0_170_13_24, &direction_player0_170_13_24, &direction_player0_170_13_24, &direction_player0_170_13_24, NULL, &direction_player0_170_13_0, &direction_player0_170_13_0, &direction_player0_170_13_0};
static Image* images_player0_170_14_0[2];
static Direction direction_player0_170_14_0 = {0, 10, 10, 0, -1, images_player0_170_14_0, 2};
static Image* images_player0_170_14_8[2];
static Direction direction_player0_170_14_8 = {8, 10, 10, 0, -1, images_player0_170_14_8, 2};
static Image* images_player0_170_14_16[2];
static Direction direction_player0_170_14_16 = {16, 10, 10, 0, -1, images_player0_170_14_16, 2};
static Image* images_player0_170_14_24[2];
static Direction direction_player0_170_14_24 = {24, 10, 10, 0, -1, images_player0_170_14_24, 2};
static Animation anim_player0_170_14 = {&direction_player0_170_14_0, &direction_player0_170_14_0, &direction_player0_170_14_0, &direction_player0_170_14_0, NULL, &direction_player0_170_14_8, &direction_player0_170_14_8, &direction_player0_170_14_8, &direction_player0_170_14_8, &direction_player0_170_14_8, &direction_player0_170_14_8, &direction_player0_170_14_8, NULL, &direction_player0_170_14_16, &direction_player0_170_14_16, &direction_player0_170_14_16, &direction_player0_170_14_16, &direction_player0_170_14_16, &direction_player0_170_14_16, &direction_player0_170_14_16, NULL, &direction_player0_170_14_24, &direction_player0_170_14_24, &direction_player0_170_14_24, &direction_player0_170_14_24, &direction_player0_170_14_24, &direction_player0_170_14_24, &direction_player0_170_14_24, NULL, &direction_player0_170_14_0, &direction_player0_170_14_0, &direction_player0_170_14_0};
static Image* images_player0_170_15_0[2];
static Direction direction_player0_170_15_0 = {0, 10, 10, 0, -1, images_player0_170_15_0, 2};
static Image* images_player0_170_15_8[2];
static Direction direction_player0_170_15_8 = {8, 10, 10, 0, -1, images_player0_170_15_8, 2};
static Image* images_player0_170_15_16[2];
static Direction direction_player0_170_15_16 = {16, 10, 10, 0, -1, images_player0_170_15_16, 2};
static Image* images_player0_170_15_24[2];
static Direction direction_player0_170_15_24 = {24, 10, 10, 0, -1, images_player0_170_15_24, 2};
static Animation anim_player0_170_15 = {&direction_player0_170_15_0, &direction_player0_170_15_0, &direction_player0_170_15_0, &direction_player0_170_15_0, NULL, &direction_player0_170_15_8, &direction_player0_170_15_8, &direction_player0_170_15_8, &direction_player0_170_15_8, &direction_player0_170_15_8, &direction_player0_170_15_8, &direction_player0_170_15_8, NULL, &direction_player0_170_15_16, &direction_player0_170_15_16, &direction_player0_170_15_16, &direction_player0_170_15_16, &direction_player0_170_15_16, &direction_player0_170_15_16, &direction_player0_170_15_16, NULL, &direction_player0_170_15_24, &direction_player0_170_15_24, &direction_player0_170_15_24, &direction_player0_170_15_24, &direction_player0_170_15_24, &direction_player0_170_15_24, &direction_player0_170_15_24, NULL, &direction_player0_170_15_0, &direction_player0_170_15_0, &direction_player0_170_15_0};
static Image* images_player0_170_16_0[2];
static Direction direction_player0_170_16_0 = {0, 10, 10, 0, -1, images_player0_170_16_0, 2};
static Image* images_player0_170_16_8[2];
static Direction direction_player0_170_16_8 = {8, 10, 10, 0, -1, images_player0_170_16_8, 2};
static Image* images_player0_170_16_16[2];
static Direction direction_player0_170_16_16 = {16, 10, 10, 0, -1, images_player0_170_16_16, 2};
static Image* images_player0_170_16_24[2];
static Direction direction_player0_170_16_24 = {24, 10, 10, 0, -1, images_player0_170_16_24, 2};
static Animation anim_player0_170_16 = {&direction_player0_170_16_0, &direction_player0_170_16_0, &direction_player0_170_16_0, &direction_player0_170_16_0, NULL, &direction_player0_170_16_8, &direction_player0_170_16_8, &direction_player0_170_16_8, &direction_player0_170_16_8, &direction_player0_170_16_8, &direction_player0_170_16_8, &direction_player0_170_16_8, NULL, &direction_player0_170_16_16, &direction_player0_170_16_16, &direction_player0_170_16_16, &direction_player0_170_16_16, &direction_player0_170_16_16, &direction_player0_170_16_16, &direction_player0_170_16_16, NULL, &direction_player0_170_16_24, &direction_player0_170_16_24, &direction_player0_170_16_24, &direction_player0_170_16_24, &direction_player0_170_16_24, &direction_player0_170_16_24, &direction_player0_170_16_24, NULL, &direction_player0_170_16_0, &direction_player0_170_16_0, &direction_player0_170_16_0};
static Image* images_player0_170_17_0[2];
static Direction direction_player0_170_17_0 = {0, 5, 5, 1, -1, images_player0_170_17_0, 2};
static Image* images_player0_170_17_8[2];
static Direction direction_player0_170_17_8 = {8, 5, 5, 1, -1, images_player0_170_17_8, 2};
static Image* images_player0_170_17_16[2];
static Direction direction_player0_170_17_16 = {16, 5, 5, 1, -1, images_player0_170_17_16, 2};
static Image* images_player0_170_17_24[2];
static Direction direction_player0_170_17_24 = {24, 5, 5, 1, -1, images_player0_170_17_24, 2};
static Animation anim_player0_170_17 = {&direction_player0_170_17_0, &direction_player0_170_17_0, &direction_player0_170_17_0, &direction_player0_170_17_0, NULL, &direction_player0_170_17_8, &direction_player0_170_17_8, &direction_player0_170_17_8, &direction_player0_170_17_8, &direction_player0_170_17_8, &direction_player0_170_17_8, &direction_player0_170_17_8, NULL, &direction_player0_170_17_16, &direction_player0_170_17_16, &direction_player0_170_17_16, &direction_player0_170_17_16, &direction_player0_170_17_16, &direction_player0_170_17_16, &direction_player0_170_17_16, NULL, &direction_player0_170_17_24, &direction_player0_170_17_24, &direction_player0_170_17_24, &direction_player0_170_17_24, &direction_player0_170_17_24, &direction_player0_170_17_24, &direction_player0_170_17_24, NULL, &direction_player0_170_17_0, &direction_player0_170_17_0, &direction_player0_170_17_0};
static Image* images_player0_170_18_24[8];
static Direction direction_player0_170_18_24 = {24, 10, 10, 0, -1, images_player0_170_18_24, 8};
static Animation anim_player0_170_18 = {&direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, NULL, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24, &direction_player0_170_18_24};
static Image* images_player0_170_19_24[5];
static Direction direction_player0_170_19_24 = {24, 10, 10, 0, -1, images_player0_170_19_24, 5};
static Animation anim_player0_170_19 = {&direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, NULL, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24, &direction_player0_170_19_24};
static Animation * anim_array_player0_170[20] = {&anim_player0_170_0, NULL, NULL, NULL, &anim_player0_170_4, NULL, &anim_player0_170_6, &anim_player0_170_7, &anim_player0_170_8, &anim_player0_170_9, &anim_player0_170_10, &anim_player0_170_11, &anim_player0_170_12, &anim_player0_170_13, &anim_player0_170_14, &anim_player0_170_15, &anim_player0_170_16, &anim_player0_170_17, &anim_player0_170_18, &anim_player0_170_19};
static Animations anim_player0_170 = {20, &anim_array_player0_170[0]};
static bool anim_player0_170_initialized;
class Player0_170 : public Active
{
public:
    Player0_170(int x, int y) : Active(x, y, Player0_170_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_0", 8);
#endif
        this->animations = &anim_player0_170;
        if (!anim_player0_170_initialized) {
            anim_player0_170_initialized = true;
            images_player0_170_0_0[0] = get_internal_image(556);
            images_player0_170_0_0[1] = get_internal_image(558);
            images_player0_170_0_8[0] = get_internal_image(561);
            images_player0_170_0_8[1] = get_internal_image(563);
            images_player0_170_0_16[0] = get_internal_image(559);
            images_player0_170_0_16[1] = get_internal_image(557);
            images_player0_170_0_24[0] = get_internal_image(560);
            images_player0_170_0_24[1] = get_internal_image(562);
            images_player0_170_4_0[0] = get_internal_image(369);
            images_player0_170_4_0[1] = get_internal_image(373);
            images_player0_170_4_0[2] = get_internal_image(369);
            images_player0_170_4_0[3] = get_internal_image(373);
            images_player0_170_4_16[0] = get_internal_image(371);
            images_player0_170_4_16[1] = get_internal_image(763);
            images_player0_170_4_16[2] = get_internal_image(371);
            images_player0_170_4_16[3] = get_internal_image(763);
            images_player0_170_6_0[0] = get_internal_image(1119);
            images_player0_170_6_8[0] = get_internal_image(1216);
            images_player0_170_6_16[0] = get_internal_image(1215);
            images_player0_170_6_24[0] = get_internal_image(1217);
            images_player0_170_7_0[0] = get_internal_image(626);
            images_player0_170_7_0[1] = get_internal_image(628);
            images_player0_170_7_8[0] = get_internal_image(633);
            images_player0_170_7_8[1] = get_internal_image(635);
            images_player0_170_7_16[0] = get_internal_image(627);
            images_player0_170_7_16[1] = get_internal_image(629);
            images_player0_170_7_24[0] = get_internal_image(631);
            images_player0_170_7_24[1] = get_internal_image(630);
            images_player0_170_8_0[0] = get_internal_image(2480);
            images_player0_170_8_24[0] = get_internal_image(597);
            images_player0_170_9_0[0] = get_internal_image(1490);
            images_player0_170_9_0[1] = get_internal_image(1491);
            images_player0_170_10_0[0] = get_internal_image(596);
            images_player0_170_10_0[1] = get_internal_image(493);
            images_player0_170_10_0[2] = get_internal_image(595);
            images_player0_170_10_0[3] = get_internal_image(234);
            images_player0_170_10_0[4] = get_internal_image(595);
            images_player0_170_11_0[0] = get_internal_image(535);
            images_player0_170_11_0[1] = get_internal_image(537);
            images_player0_170_11_8[0] = get_internal_image(742);
            images_player0_170_11_8[1] = get_internal_image(743);
            images_player0_170_11_16[0] = get_internal_image(539);
            images_player0_170_11_16[1] = get_internal_image(538);
            images_player0_170_11_24[0] = get_internal_image(165);
            images_player0_170_11_24[1] = get_internal_image(711);
            images_player0_170_12_0[0] = get_internal_image(1020);
            images_player0_170_12_0[1] = get_internal_image(1021);
            images_player0_170_12_8[0] = get_internal_image(1598);
            images_player0_170_12_8[1] = get_internal_image(684);
            images_player0_170_12_16[0] = get_internal_image(2129);
            images_player0_170_12_16[1] = get_internal_image(2368);
            images_player0_170_12_24[0] = get_internal_image(1581);
            images_player0_170_12_24[1] = get_internal_image(1584);
            images_player0_170_13_0[0] = get_internal_image(1853);
            images_player0_170_13_0[1] = get_internal_image(1854);
            images_player0_170_13_8[0] = get_internal_image(1595);
            images_player0_170_13_8[1] = get_internal_image(1591);
            images_player0_170_13_16[0] = get_internal_image(1855);
            images_player0_170_13_16[1] = get_internal_image(1856);
            images_player0_170_13_24[0] = get_internal_image(1590);
            images_player0_170_13_24[1] = get_internal_image(1593);
            images_player0_170_14_0[0] = get_internal_image(1645);
            images_player0_170_14_0[1] = get_internal_image(1646);
            images_player0_170_14_8[0] = get_internal_image(1641);
            images_player0_170_14_8[1] = get_internal_image(1642);
            images_player0_170_14_16[0] = get_internal_image(1647);
            images_player0_170_14_16[1] = get_internal_image(1648);
            images_player0_170_14_24[0] = get_internal_image(1594);
            images_player0_170_14_24[1] = get_internal_image(1592);
            images_player0_170_15_0[0] = get_internal_image(1631);
            images_player0_170_15_0[1] = get_internal_image(1633);
            images_player0_170_15_8[0] = get_internal_image(1597);
            images_player0_170_15_8[1] = get_internal_image(1601);
            images_player0_170_15_16[0] = get_internal_image(1634);
            images_player0_170_15_16[1] = get_internal_image(1635);
            images_player0_170_15_24[0] = get_internal_image(1604);
            images_player0_170_15_24[1] = get_internal_image(1603);
            images_player0_170_16_0[0] = get_internal_image(1865);
            images_player0_170_16_0[1] = get_internal_image(1866);
            images_player0_170_16_8[0] = get_internal_image(1611);
            images_player0_170_16_8[1] = get_internal_image(1610);
            images_player0_170_16_16[0] = get_internal_image(1867);
            images_player0_170_16_16[1] = get_internal_image(1868);
            images_player0_170_16_24[0] = get_internal_image(1608);
            images_player0_170_16_24[1] = get_internal_image(1609);
            images_player0_170_17_0[0] = get_internal_image(1969);
            images_player0_170_17_0[1] = get_internal_image(1970);
            images_player0_170_17_8[0] = get_internal_image(1967);
            images_player0_170_17_8[1] = get_internal_image(1974);
            images_player0_170_17_16[0] = get_internal_image(1961);
            images_player0_170_17_16[1] = get_internal_image(1971);
            images_player0_170_17_24[0] = get_internal_image(1966);
            images_player0_170_17_24[1] = get_internal_image(1968);
            images_player0_170_18_24[0] = get_internal_image(1989);
            images_player0_170_18_24[1] = get_internal_image(1997);
            images_player0_170_18_24[2] = get_internal_image(2006);
            images_player0_170_18_24[3] = get_internal_image(2048);
            images_player0_170_18_24[4] = get_internal_image(2039);
            images_player0_170_18_24[5] = get_internal_image(2042);
            images_player0_170_18_24[6] = get_internal_image(2006);
            images_player0_170_18_24[7] = get_internal_image(2052);
            images_player0_170_19_24[0] = get_internal_image(2134);
            images_player0_170_19_24[1] = get_internal_image(2135);
            images_player0_170_19_24[2] = get_internal_image(2135);
            images_player0_170_19_24[3] = get_internal_image(2133);
            images_player0_170_19_24[4] = get_internal_image(2133);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player0_170(int x, int y)
{
    return new (Active::pool.create()) Player0_170(x, y);
}
class AdvancedDirectionObject_171 : public AdvancedDirection
{
public:
    AdvancedDirectionObject_171(int x, int y) : AdvancedDirection(x, y, AdvancedDirectionObject_171_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Advanced Direction Object", 25);
#endif
    }
};
FrameObject * create_advanceddirectionobject_171(int x, int y)
{
    return new (AdvancedDirection::pool.create()) AdvancedDirectionObject_171(x, y);
}
static Image* images_playerBase_0_0[1];
static Direction direction_playerBase_0_0 = {0, 50, 50, 0, 1, images_playerBase_0_0, 1};
static Animation anim_playerBase_0 = {&direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, NULL, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0, &direction_playerBase_0_0};
static Animation * anim_array_playerBase[1] = {&anim_playerBase_0};
static Animations anim_playerBase = {1, &anim_array_playerBase[0]};
static bool anim_playerBase_initialized;
class PlayerBase : public Active
{
public:
    PlayerBase(int x, int y) : Active(x, y, playerBase_type)
    {
        // qualifiers: 0, 45
#ifndef NDEBUG
        name = std::string("BASE - You", 10);
#endif
        set_visible(false);
        this->animations = &anim_playerBase;
        if (!anim_playerBase_initialized) {
            anim_playerBase_initialized = true;
            images_playerBase_0_0[0] = get_internal_image(2437);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
        alterables->values.set(7, 300);
        alterables->values.set(8, 80);
        alterables->values.set(9, 80);
        alterables->values.set(10, 80);
        alterables->strings.set(0, str_bloggs_8);
    }
};
FrameObject * create_playerBase(int x, int y)
{
    return new (Active::pool.create()) PlayerBase(x, y);
}
static Image* images_soil_173_0_0[1];
static Direction direction_soil_173_0_0 = {0, 50, 50, 0, 1, images_soil_173_0_0, 1};
static Animation anim_soil_173_0 = {&direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, NULL, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0, &direction_soil_173_0_0};
static Image* images_soil_173_5_0[1];
static Direction direction_soil_173_5_0 = {0, 50, 50, 0, 1, images_soil_173_5_0, 1};
static Image* images_soil_173_5_1[1];
static Direction direction_soil_173_5_1 = {1, 50, 50, 0, 1, images_soil_173_5_1, 1};
static Image* images_soil_173_5_2[1];
static Direction direction_soil_173_5_2 = {2, 50, 50, 0, 1, images_soil_173_5_2, 1};
static Image* images_soil_173_5_3[1];
static Direction direction_soil_173_5_3 = {3, 50, 50, 0, 1, images_soil_173_5_3, 1};
static Image* images_soil_173_5_4[1];
static Direction direction_soil_173_5_4 = {4, 50, 50, 0, 1, images_soil_173_5_4, 1};
static Image* images_soil_173_5_5[1];
static Direction direction_soil_173_5_5 = {5, 50, 50, 0, 1, images_soil_173_5_5, 1};
static Image* images_soil_173_5_6[1];
static Direction direction_soil_173_5_6 = {6, 50, 50, 0, 1, images_soil_173_5_6, 1};
static Animation anim_soil_173_5 = {&direction_soil_173_5_0, &direction_soil_173_5_1, &direction_soil_173_5_2, &direction_soil_173_5_3, &direction_soil_173_5_4, &direction_soil_173_5_5, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, &direction_soil_173_5_6, NULL, &direction_soil_173_5_0, &direction_soil_173_5_0, &direction_soil_173_5_0, &direction_soil_173_5_0, &direction_soil_173_5_0, &direction_soil_173_5_0, &direction_soil_173_5_0, &direction_soil_173_5_0, &direction_soil_173_5_0, &direction_soil_173_5_0, &direction_soil_173_5_0, &direction_soil_173_5_0};
static Animation * anim_array_soil_173[6] = {&anim_soil_173_0, NULL, NULL, NULL, NULL, &anim_soil_173_5};
static Animations anim_soil_173 = {6, &anim_array_soil_173[0]};
static bool anim_soil_173_initialized;
class Soil_173 : public Active
{
public:
    Soil_173(int x, int y) : Active(x, y, Soil_173_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("soil", 4);
#endif
        this->animations = &anim_soil_173;
        if (!anim_soil_173_initialized) {
            anim_soil_173_initialized = true;
            images_soil_173_0_0[0] = get_internal_image(235);
            images_soil_173_5_0[0] = get_internal_image(389);
            images_soil_173_5_1[0] = get_internal_image(207);
            images_soil_173_5_2[0] = get_internal_image(191);
            images_soil_173_5_3[0] = get_internal_image(206);
            images_soil_173_5_4[0] = get_internal_image(211);
            images_soil_173_5_5[0] = get_internal_image(204);
            images_soil_173_5_6[0] = get_internal_image(194);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_soil_173(int x, int y)
{
    return new (Active::pool.create()) Soil_173(x, y);
}
static Image* images_doorcell_174_0_0[1];
static Direction direction_doorcell_174_0_0 = {0, 50, 50, 0, 1, images_doorcell_174_0_0, 1};
static Image* images_doorcell_174_0_16[1];
static Direction direction_doorcell_174_0_16 = {16, 50, 50, 0, 1, images_doorcell_174_0_16, 1};
static Animation anim_doorcell_174_0 = {&direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, NULL, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, &direction_doorcell_174_0_16, NULL, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0, &direction_doorcell_174_0_0};
static Animation * anim_array_doorcell_174[1] = {&anim_doorcell_174_0};
static Animations anim_doorcell_174 = {1, &anim_array_doorcell_174[0]};
static bool anim_doorcell_174_initialized;
class DoorCell_174 : public Active
{
public:
    DoorCell_174(int x, int y) : Active(x, y, DoorCell_174_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Cell", 11);
#endif
        this->animations = &anim_doorcell_174;
        if (!anim_doorcell_174_initialized) {
            anim_doorcell_174_initialized = true;
            images_doorcell_174_0_0[0] = get_internal_image(1226);
            images_doorcell_174_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_cell_9);
    }
};
FrameObject * create_doorcell_174(int x, int y)
{
    return new (Active::pool.create()) DoorCell_174(x, y);
}
static Image* images_inmate_175_0_0[2];
static Direction direction_inmate_175_0_0 = {0, 10, 10, 0, -1, images_inmate_175_0_0, 2};
static Image* images_inmate_175_0_8[2];
static Direction direction_inmate_175_0_8 = {8, 10, 10, 0, -1, images_inmate_175_0_8, 2};
static Image* images_inmate_175_0_16[2];
static Direction direction_inmate_175_0_16 = {16, 10, 10, 0, -1, images_inmate_175_0_16, 2};
static Image* images_inmate_175_0_24[2];
static Direction direction_inmate_175_0_24 = {24, 10, 10, 0, -1, images_inmate_175_0_24, 2};
static Animation anim_inmate_175_0 = {&direction_inmate_175_0_0, &direction_inmate_175_0_0, &direction_inmate_175_0_0, &direction_inmate_175_0_0, NULL, &direction_inmate_175_0_8, &direction_inmate_175_0_8, &direction_inmate_175_0_8, &direction_inmate_175_0_8, &direction_inmate_175_0_8, &direction_inmate_175_0_8, &direction_inmate_175_0_8, NULL, &direction_inmate_175_0_16, &direction_inmate_175_0_16, &direction_inmate_175_0_16, &direction_inmate_175_0_16, &direction_inmate_175_0_16, &direction_inmate_175_0_16, &direction_inmate_175_0_16, NULL, &direction_inmate_175_0_24, &direction_inmate_175_0_24, &direction_inmate_175_0_24, &direction_inmate_175_0_24, &direction_inmate_175_0_24, &direction_inmate_175_0_24, &direction_inmate_175_0_24, NULL, &direction_inmate_175_0_0, &direction_inmate_175_0_0, &direction_inmate_175_0_0};
static Image* images_inmate_175_4_0[4];
static Direction direction_inmate_175_4_0 = {0, 20, 20, 0, 1, images_inmate_175_4_0, 4};
static Image* images_inmate_175_4_16[4];
static Direction direction_inmate_175_4_16 = {16, 20, 20, 0, 1, images_inmate_175_4_16, 4};
static Animation anim_inmate_175_4 = {&direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0, NULL, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, &direction_inmate_175_4_16, NULL, &direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0, &direction_inmate_175_4_0};
static Image* images_inmate_175_6_0[1];
static Direction direction_inmate_175_6_0 = {0, 6, 6, 0, 1, images_inmate_175_6_0, 1};
static Image* images_inmate_175_6_8[1];
static Direction direction_inmate_175_6_8 = {8, 6, 6, 0, 1, images_inmate_175_6_8, 1};
static Image* images_inmate_175_6_16[1];
static Direction direction_inmate_175_6_16 = {16, 6, 6, 0, 1, images_inmate_175_6_16, 1};
static Image* images_inmate_175_6_24[1];
static Direction direction_inmate_175_6_24 = {24, 6, 6, 0, 1, images_inmate_175_6_24, 1};
static Animation anim_inmate_175_6 = {&direction_inmate_175_6_0, &direction_inmate_175_6_0, &direction_inmate_175_6_0, &direction_inmate_175_6_0, NULL, &direction_inmate_175_6_8, &direction_inmate_175_6_8, &direction_inmate_175_6_8, &direction_inmate_175_6_8, &direction_inmate_175_6_8, &direction_inmate_175_6_8, &direction_inmate_175_6_8, NULL, &direction_inmate_175_6_16, &direction_inmate_175_6_16, &direction_inmate_175_6_16, &direction_inmate_175_6_16, &direction_inmate_175_6_16, &direction_inmate_175_6_16, &direction_inmate_175_6_16, NULL, &direction_inmate_175_6_24, &direction_inmate_175_6_24, &direction_inmate_175_6_24, &direction_inmate_175_6_24, &direction_inmate_175_6_24, &direction_inmate_175_6_24, &direction_inmate_175_6_24, NULL, &direction_inmate_175_6_0, &direction_inmate_175_6_0, &direction_inmate_175_6_0};
static Image* images_inmate_175_8_0[1];
static Direction direction_inmate_175_8_0 = {0, 10, 10, 0, -1, images_inmate_175_8_0, 1};
static Image* images_inmate_175_8_16[2];
static Direction direction_inmate_175_8_16 = {16, 5, 5, 0, -1, images_inmate_175_8_16, 2};
static Image* images_inmate_175_8_24[1];
static Direction direction_inmate_175_8_24 = {24, 10, 10, 0, -1, images_inmate_175_8_24, 1};
static Animation anim_inmate_175_8 = {&direction_inmate_175_8_0, &direction_inmate_175_8_0, &direction_inmate_175_8_0, &direction_inmate_175_8_0, &direction_inmate_175_8_0, &direction_inmate_175_8_0, &direction_inmate_175_8_0, &direction_inmate_175_8_0, NULL, &direction_inmate_175_8_16, &direction_inmate_175_8_16, &direction_inmate_175_8_16, &direction_inmate_175_8_16, &direction_inmate_175_8_16, &direction_inmate_175_8_16, &direction_inmate_175_8_16, &direction_inmate_175_8_16, &direction_inmate_175_8_16, &direction_inmate_175_8_16, &direction_inmate_175_8_16, NULL, &direction_inmate_175_8_24, &direction_inmate_175_8_24, &direction_inmate_175_8_24, &direction_inmate_175_8_24, &direction_inmate_175_8_24, &direction_inmate_175_8_24, &direction_inmate_175_8_24, NULL, &direction_inmate_175_8_0, &direction_inmate_175_8_0, &direction_inmate_175_8_0};
static Image* images_inmate_175_9_0[2];
static Direction direction_inmate_175_9_0 = {0, 5, 5, 0, -1, images_inmate_175_9_0, 2};
static Animation anim_inmate_175_9 = {&direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, NULL, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0, &direction_inmate_175_9_0};
static Image* images_inmate_175_10_0[5];
static Direction direction_inmate_175_10_0 = {0, 10, 10, 0, -1, images_inmate_175_10_0, 5};
static Animation anim_inmate_175_10 = {&direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, NULL, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0, &direction_inmate_175_10_0};
static Image* images_inmate_175_11_0[2];
static Direction direction_inmate_175_11_0 = {0, 6, 6, 0, -1, images_inmate_175_11_0, 2};
static Image* images_inmate_175_11_8[2];
static Direction direction_inmate_175_11_8 = {8, 6, 6, 0, -1, images_inmate_175_11_8, 2};
static Image* images_inmate_175_11_16[2];
static Direction direction_inmate_175_11_16 = {16, 6, 6, 0, -1, images_inmate_175_11_16, 2};
static Image* images_inmate_175_11_24[2];
static Direction direction_inmate_175_11_24 = {24, 6, 6, 0, -1, images_inmate_175_11_24, 2};
static Animation anim_inmate_175_11 = {&direction_inmate_175_11_0, &direction_inmate_175_11_0, &direction_inmate_175_11_0, &direction_inmate_175_11_0, NULL, &direction_inmate_175_11_8, &direction_inmate_175_11_8, &direction_inmate_175_11_8, &direction_inmate_175_11_8, &direction_inmate_175_11_8, &direction_inmate_175_11_8, &direction_inmate_175_11_8, NULL, &direction_inmate_175_11_16, &direction_inmate_175_11_16, &direction_inmate_175_11_16, &direction_inmate_175_11_16, &direction_inmate_175_11_16, &direction_inmate_175_11_16, &direction_inmate_175_11_16, NULL, &direction_inmate_175_11_24, &direction_inmate_175_11_24, &direction_inmate_175_11_24, &direction_inmate_175_11_24, &direction_inmate_175_11_24, &direction_inmate_175_11_24, &direction_inmate_175_11_24, NULL, &direction_inmate_175_11_0, &direction_inmate_175_11_0, &direction_inmate_175_11_0};
static Image* images_inmate_175_18_24[8];
static Direction direction_inmate_175_18_24 = {24, 10, 10, 0, -1, images_inmate_175_18_24, 8};
static Animation anim_inmate_175_18 = {&direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, NULL, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24, &direction_inmate_175_18_24};
static Image* images_inmate_175_19_24[6];
static Direction direction_inmate_175_19_24 = {24, 10, 10, 0, -1, images_inmate_175_19_24, 6};
static Animation anim_inmate_175_19 = {&direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, NULL, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24, &direction_inmate_175_19_24};
static Animation * anim_array_inmate_175[20] = {&anim_inmate_175_0, NULL, NULL, NULL, &anim_inmate_175_4, NULL, &anim_inmate_175_6, NULL, &anim_inmate_175_8, &anim_inmate_175_9, &anim_inmate_175_10, &anim_inmate_175_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate_175_18, &anim_inmate_175_19};
static Animations anim_inmate_175 = {20, &anim_array_inmate_175[0]};
static bool anim_inmate_175_initialized;
class Inmate_175 : public Active
{
public:
    Inmate_175(int x, int y) : Active(x, y, Inmate_175_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate", 6);
#endif
        this->animations = &anim_inmate_175;
        if (!anim_inmate_175_initialized) {
            anim_inmate_175_initialized = true;
            images_inmate_175_0_0[0] = get_internal_image(570);
            images_inmate_175_0_0[1] = get_internal_image(566);
            images_inmate_175_0_8[0] = get_internal_image(543);
            images_inmate_175_0_8[1] = get_internal_image(544);
            images_inmate_175_0_16[0] = get_internal_image(571);
            images_inmate_175_0_16[1] = get_internal_image(572);
            images_inmate_175_0_24[0] = get_internal_image(541);
            images_inmate_175_0_24[1] = get_internal_image(540);
            images_inmate_175_4_0[0] = get_internal_image(369);
            images_inmate_175_4_0[1] = get_internal_image(373);
            images_inmate_175_4_0[2] = get_internal_image(369);
            images_inmate_175_4_0[3] = get_internal_image(373);
            images_inmate_175_4_16[0] = get_internal_image(371);
            images_inmate_175_4_16[1] = get_internal_image(763);
            images_inmate_175_4_16[2] = get_internal_image(371);
            images_inmate_175_4_16[3] = get_internal_image(763);
            images_inmate_175_6_0[0] = get_internal_image(1058);
            images_inmate_175_6_8[0] = get_internal_image(1059);
            images_inmate_175_6_16[0] = get_internal_image(1060);
            images_inmate_175_6_24[0] = get_internal_image(1062);
            images_inmate_175_8_0[0] = get_internal_image(2476);
            images_inmate_175_8_16[0] = get_internal_image(650);
            images_inmate_175_8_16[1] = get_internal_image(651);
            images_inmate_175_8_24[0] = get_internal_image(1189);
            images_inmate_175_9_0[0] = get_internal_image(1497);
            images_inmate_175_9_0[1] = get_internal_image(1499);
            images_inmate_175_10_0[0] = get_internal_image(548);
            images_inmate_175_10_0[1] = get_internal_image(542);
            images_inmate_175_10_0[2] = get_internal_image(577);
            images_inmate_175_10_0[3] = get_internal_image(547);
            images_inmate_175_10_0[4] = get_internal_image(542);
            images_inmate_175_11_0[0] = get_internal_image(523);
            images_inmate_175_11_0[1] = get_internal_image(517);
            images_inmate_175_11_8[0] = get_internal_image(584);
            images_inmate_175_11_8[1] = get_internal_image(585);
            images_inmate_175_11_16[0] = get_internal_image(522);
            images_inmate_175_11_16[1] = get_internal_image(524);
            images_inmate_175_11_24[0] = get_internal_image(320);
            images_inmate_175_11_24[1] = get_internal_image(251);
            images_inmate_175_18_24[0] = get_internal_image(2078);
            images_inmate_175_18_24[1] = get_internal_image(2077);
            images_inmate_175_18_24[2] = get_internal_image(2081);
            images_inmate_175_18_24[3] = get_internal_image(2079);
            images_inmate_175_18_24[4] = get_internal_image(2080);
            images_inmate_175_18_24[5] = get_internal_image(2084);
            images_inmate_175_18_24[6] = get_internal_image(2081);
            images_inmate_175_18_24[7] = get_internal_image(2083);
            images_inmate_175_19_24[0] = get_internal_image(2144);
            images_inmate_175_19_24[1] = get_internal_image(2143);
            images_inmate_175_19_24[2] = get_internal_image(2146);
            images_inmate_175_19_24[3] = get_internal_image(2146);
            images_inmate_175_19_24[4] = get_internal_image(2143);
            images_inmate_175_19_24[5] = get_internal_image(2144);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_inmate_175(int x, int y)
{
    return new (Active::pool.create()) Inmate_175(x, y);
}
static Image* images_sidePanel_0_0[1];
static Direction direction_sidePanel_0_0 = {0, 50, 50, 0, 1, images_sidePanel_0_0, 1};
static Animation anim_sidePanel_0 = {&direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, NULL, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0, &direction_sidePanel_0_0};
static Image* images_sidePanel_1_0[2];
static Direction direction_sidePanel_1_0 = {0, 70, 70, 0, -1, images_sidePanel_1_0, 2};
static Animation anim_sidePanel_1 = {&direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, NULL, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0, &direction_sidePanel_1_0};
static Animation * anim_array_sidePanel[2] = {&anim_sidePanel_0, &anim_sidePanel_1};
static Animations anim_sidePanel = {2, &anim_array_sidePanel[0]};
static bool anim_sidePanel_initialized;
class SidePanel : public Active
{
public:
    SidePanel(int x, int y) : Active(x, y, sidePanel_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Panel", 5);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_sidePanel;
        if (!anim_sidePanel_initialized) {
            anim_sidePanel_initialized = true;
            images_sidePanel_0_0[0] = get_internal_image(786);
            images_sidePanel_1_0[0] = get_internal_image(232);
            images_sidePanel_1_0[1] = get_internal_image(870);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        set_visible(false);
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_sidePanel(int x, int y)
{
    return new (Active::pool.create()) SidePanel(x, y);
}
static Image* images_target_177_0_0[2];
static Direction direction_target_177_0_0 = {0, 12, 12, 0, -1, images_target_177_0_0, 2};
static Animation anim_target_177_0 = {&direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, NULL, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0, &direction_target_177_0_0};
static Animation * anim_array_target_177[1] = {&anim_target_177_0};
static Animations anim_target_177 = {1, &anim_array_target_177[0]};
static bool anim_target_177_initialized;
class TARGET_177 : public Active
{
public:
    TARGET_177(int x, int y) : Active(x, y, TARGET_177_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TARGET", 6);
#endif
        set_visible(false);
        this->animations = &anim_target_177;
        if (!anim_target_177_initialized) {
            anim_target_177_initialized = true;
            images_target_177_0_0[0] = get_internal_image(986);
            images_target_177_0_0[1] = get_internal_image(990);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 235);
        create_alterables();
    }
};
FrameObject * create_target_177(int x, int y)
{
    return new (Active::pool.create()) TARGET_177(x, y);
}
static Image* images_cursor_178_0_0[1];
static Direction direction_cursor_178_0_0 = {0, 50, 50, 0, 1, images_cursor_178_0_0, 1};
static Animation anim_cursor_178_0 = {&direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, NULL, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0, &direction_cursor_178_0_0};
static Image* images_cursor_178_3_0[1];
static Direction direction_cursor_178_3_0 = {0, 50, 50, 0, -1, images_cursor_178_3_0, 1};
static Animation anim_cursor_178_3 = {&direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, NULL, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0, &direction_cursor_178_3_0};
static Image* images_cursor_178_4_0[1];
static Direction direction_cursor_178_4_0 = {0, 50, 50, 0, 1, images_cursor_178_4_0, 1};
static Animation anim_cursor_178_4 = {&direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, NULL, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0, &direction_cursor_178_4_0};
static Image* images_cursor_178_5_0[1];
static Direction direction_cursor_178_5_0 = {0, 50, 50, 0, -1, images_cursor_178_5_0, 1};
static Animation anim_cursor_178_5 = {&direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, NULL, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0, &direction_cursor_178_5_0};
static Image* images_cursor_178_7_0[1];
static Direction direction_cursor_178_7_0 = {0, 50, 50, 0, -1, images_cursor_178_7_0, 1};
static Image* images_cursor_178_7_24[1];
static Direction direction_cursor_178_7_24 = {24, 50, 50, 0, -1, images_cursor_178_7_24, 1};
static Animation anim_cursor_178_7 = {&direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0, NULL, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, &direction_cursor_178_7_24, NULL, &direction_cursor_178_7_0, &direction_cursor_178_7_0, &direction_cursor_178_7_0};
static Animation * anim_array_cursor_178[8] = {&anim_cursor_178_0, NULL, NULL, &anim_cursor_178_3, &anim_cursor_178_4, &anim_cursor_178_5, NULL, &anim_cursor_178_7};
static Animations anim_cursor_178 = {8, &anim_array_cursor_178[0]};
static bool anim_cursor_178_initialized;
class Cursor_178 : public Active
{
public:
    Cursor_178(int x, int y) : Active(x, y, Cursor_178_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Cursor", 6);
#endif
        set_visible(false);
        this->animations = &anim_cursor_178;
        if (!anim_cursor_178_initialized) {
            anim_cursor_178_initialized = true;
            images_cursor_178_0_0[0] = get_internal_image(197);
            images_cursor_178_3_0[0] = get_internal_image(231);
            images_cursor_178_4_0[0] = get_internal_image(200);
            images_cursor_178_5_0[0] = get_internal_image(394);
            images_cursor_178_7_0[0] = get_internal_image(1306);
            images_cursor_178_7_24[0] = get_internal_image(1232);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        forced_animation = current_animation = APPEARING;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_cursor_178(int x, int y)
{
    return new (Active::pool.create()) Cursor_178(x, y);
}
class DialogBodyText : public Text
{
public:
    DialogBodyText(int x, int y) : Text(x, y, dialogBodyText_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = "Dialog body text";
#endif
        flags &= ~SCROLL;
        width = 220;
        height = 231;
        blend_color = Color(255, 255, 255);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string());
        create_alterables();
    }
};
FrameObject * create_dialogBodyText(int x, int y)
{
    return new (Text::pool.create()) DialogBodyText(x, y);
}
static Image* images_waypointcanteenguard_181_0_0[1];
static Direction direction_waypointcanteenguard_181_0_0 = {0, 50, 50, 0, 1, images_waypointcanteenguard_181_0_0, 1};
static Animation anim_waypointcanteenguard_181_0 = {&direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, NULL, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0, &direction_waypointcanteenguard_181_0_0};
static Animation * anim_array_waypointcanteenguard_181[1] = {&anim_waypointcanteenguard_181_0};
static Animations anim_waypointcanteenguard_181 = {1, &anim_array_waypointcanteenguard_181[0]};
static bool anim_waypointcanteenguard_181_initialized;
class WaypointCanteenGuard_181 : public Active
{
public:
    WaypointCanteenGuard_181(int x, int y) : Active(x, y, WaypointCanteenGuard_181_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Canteen - Guard", 26);
#endif
        set_visible(false);
        this->animations = &anim_waypointcanteenguard_181;
        if (!anim_waypointcanteenguard_181_initialized) {
            anim_waypointcanteenguard_181_initialized = true;
            images_waypointcanteenguard_181_0_0[0] = get_internal_image(889);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointcanteenguard_181(int x, int y)
{
    return new (Active::pool.create()) WaypointCanteenGuard_181(x, y);
}
static Image* images_waypointguardgym_182_0_0[1];
static Direction direction_waypointguardgym_182_0_0 = {0, 50, 50, 0, 1, images_waypointguardgym_182_0_0, 1};
static Animation anim_waypointguardgym_182_0 = {&direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, NULL, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0, &direction_waypointguardgym_182_0_0};
static Animation * anim_array_waypointguardgym_182[1] = {&anim_waypointguardgym_182_0};
static Animations anim_waypointguardgym_182 = {1, &anim_array_waypointguardgym_182[0]};
static bool anim_waypointguardgym_182_initialized;
class WaypointGuardGym_182 : public Active
{
public:
    WaypointGuardGym_182(int x, int y) : Active(x, y, WaypointGuardGym_182_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Guard Gym", 20);
#endif
        set_visible(false);
        this->animations = &anim_waypointguardgym_182;
        if (!anim_waypointguardgym_182_initialized) {
            anim_waypointguardgym_182_initialized = true;
            images_waypointguardgym_182_0_0[0] = get_internal_image(895);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointguardgym_182(int x, int y)
{
    return new (Active::pool.create()) WaypointGuardGym_182(x, y);
}
static Image* images_shower_183_0_0[3];
static Direction direction_shower_183_0_0 = {0, 30, 30, 0, -1, images_shower_183_0_0, 3};
static Animation anim_shower_183_0 = {&direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, NULL, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0, &direction_shower_183_0_0};
static Animation * anim_array_shower_183[1] = {&anim_shower_183_0};
static Animations anim_shower_183 = {1, &anim_array_shower_183[0]};
static bool anim_shower_183_initialized;
class Shower_183 : public Active
{
public:
    Shower_183(int x, int y) : Active(x, y, Shower_183_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Shower", 6);
#endif
        this->animations = &anim_shower_183;
        if (!anim_shower_183_initialized) {
            anim_shower_183_initialized = true;
            images_shower_183_0_0[0] = get_internal_image(898);
            images_shower_183_0_0[1] = get_internal_image(899);
            images_shower_183_0_0[2] = get_internal_image(900);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_shower_183(int x, int y)
{
    return new (Active::pool.create()) Shower_183(x, y);
}
static Image* images_items_184_0_0[1];
static Direction direction_items_184_0_0 = {0, 50, 50, 0, 1, images_items_184_0_0, 1};
static Image* images_items_184_0_1[1];
static Direction direction_items_184_0_1 = {1, 50, 50, 0, 1, images_items_184_0_1, 1};
static Image* images_items_184_0_2[1];
static Direction direction_items_184_0_2 = {2, 50, 50, 0, 1, images_items_184_0_2, 1};
static Image* images_items_184_0_3[1];
static Direction direction_items_184_0_3 = {3, 50, 50, 0, 1, images_items_184_0_3, 1};
static Image* images_items_184_0_4[1];
static Direction direction_items_184_0_4 = {4, 50, 50, 0, 1, images_items_184_0_4, 1};
static Image* images_items_184_0_5[1];
static Direction direction_items_184_0_5 = {5, 50, 50, 0, 1, images_items_184_0_5, 1};
static Image* images_items_184_0_6[1];
static Direction direction_items_184_0_6 = {6, 50, 50, 0, 1, images_items_184_0_6, 1};
static Image* images_items_184_0_7[1];
static Direction direction_items_184_0_7 = {7, 50, 50, 0, 1, images_items_184_0_7, 1};
static Image* images_items_184_0_8[1];
static Direction direction_items_184_0_8 = {8, 50, 50, 0, 1, images_items_184_0_8, 1};
static Image* images_items_184_0_9[1];
static Direction direction_items_184_0_9 = {9, 50, 50, 0, 1, images_items_184_0_9, 1};
static Image* images_items_184_0_10[1];
static Direction direction_items_184_0_10 = {10, 50, 50, 0, 1, images_items_184_0_10, 1};
static Image* images_items_184_0_11[1];
static Direction direction_items_184_0_11 = {11, 50, 50, 0, -1, images_items_184_0_11, 1};
static Image* images_items_184_0_12[1];
static Direction direction_items_184_0_12 = {12, 50, 50, 0, 1, images_items_184_0_12, 1};
static Image* images_items_184_0_13[1];
static Direction direction_items_184_0_13 = {13, 50, 50, 0, 1, images_items_184_0_13, 1};
static Image* images_items_184_0_14[1];
static Direction direction_items_184_0_14 = {14, 50, 50, 0, -1, images_items_184_0_14, 1};
static Image* images_items_184_0_15[1];
static Direction direction_items_184_0_15 = {15, 50, 50, 0, 1, images_items_184_0_15, 1};
static Image* images_items_184_0_16[1];
static Direction direction_items_184_0_16 = {16, 50, 50, 0, 1, images_items_184_0_16, 1};
static Image* images_items_184_0_17[1];
static Direction direction_items_184_0_17 = {17, 50, 50, 0, 1, images_items_184_0_17, 1};
static Image* images_items_184_0_18[1];
static Direction direction_items_184_0_18 = {18, 50, 50, 0, 1, images_items_184_0_18, 1};
static Image* images_items_184_0_19[1];
static Direction direction_items_184_0_19 = {19, 50, 50, 0, -1, images_items_184_0_19, 1};
static Image* images_items_184_0_20[1];
static Direction direction_items_184_0_20 = {20, 50, 50, 0, 1, images_items_184_0_20, 1};
static Image* images_items_184_0_21[1];
static Direction direction_items_184_0_21 = {21, 50, 50, 0, 1, images_items_184_0_21, 1};
static Image* images_items_184_0_22[1];
static Direction direction_items_184_0_22 = {22, 50, 50, 0, 1, images_items_184_0_22, 1};
static Image* images_items_184_0_23[1];
static Direction direction_items_184_0_23 = {23, 50, 50, 0, 1, images_items_184_0_23, 1};
static Image* images_items_184_0_24[1];
static Direction direction_items_184_0_24 = {24, 50, 50, 0, 1, images_items_184_0_24, 1};
static Image* images_items_184_0_25[1];
static Direction direction_items_184_0_25 = {25, 50, 50, 0, 1, images_items_184_0_25, 1};
static Image* images_items_184_0_26[1];
static Direction direction_items_184_0_26 = {26, 50, 50, 0, 1, images_items_184_0_26, 1};
static Image* images_items_184_0_27[1];
static Direction direction_items_184_0_27 = {27, 50, 50, 0, 1, images_items_184_0_27, 1};
static Image* images_items_184_0_28[1];
static Direction direction_items_184_0_28 = {28, 50, 50, 0, 1, images_items_184_0_28, 1};
static Image* images_items_184_0_29[1];
static Direction direction_items_184_0_29 = {29, 50, 50, 0, 1, images_items_184_0_29, 1};
static Image* images_items_184_0_30[1];
static Direction direction_items_184_0_30 = {30, 50, 50, 0, 1, images_items_184_0_30, 1};
static Image* images_items_184_0_31[1];
static Direction direction_items_184_0_31 = {31, 50, 50, 0, 1, images_items_184_0_31, 1};
static Animation anim_items_184_0 = {&direction_items_184_0_0, &direction_items_184_0_1, &direction_items_184_0_2, &direction_items_184_0_3, &direction_items_184_0_4, &direction_items_184_0_5, &direction_items_184_0_6, &direction_items_184_0_7, &direction_items_184_0_8, &direction_items_184_0_9, &direction_items_184_0_10, &direction_items_184_0_11, &direction_items_184_0_12, &direction_items_184_0_13, &direction_items_184_0_14, &direction_items_184_0_15, &direction_items_184_0_16, &direction_items_184_0_17, &direction_items_184_0_18, &direction_items_184_0_19, &direction_items_184_0_20, &direction_items_184_0_21, &direction_items_184_0_22, &direction_items_184_0_23, &direction_items_184_0_24, &direction_items_184_0_25, &direction_items_184_0_26, &direction_items_184_0_27, &direction_items_184_0_28, &direction_items_184_0_29, &direction_items_184_0_30, &direction_items_184_0_31};
static Image* images_items_184_1_0[1];
static Direction direction_items_184_1_0 = {0, 50, 50, 0, -1, images_items_184_1_0, 1};
static Image* images_items_184_1_1[1];
static Direction direction_items_184_1_1 = {1, 50, 50, 0, -1, images_items_184_1_1, 1};
static Image* images_items_184_1_2[1];
static Direction direction_items_184_1_2 = {2, 50, 50, 0, -1, images_items_184_1_2, 1};
static Image* images_items_184_1_3[1];
static Direction direction_items_184_1_3 = {3, 50, 50, 0, -1, images_items_184_1_3, 1};
static Image* images_items_184_1_4[1];
static Direction direction_items_184_1_4 = {4, 50, 50, 0, -1, images_items_184_1_4, 1};
static Image* images_items_184_1_5[1];
static Direction direction_items_184_1_5 = {5, 50, 50, 0, -1, images_items_184_1_5, 1};
static Image* images_items_184_1_6[1];
static Direction direction_items_184_1_6 = {6, 50, 50, 0, -1, images_items_184_1_6, 1};
static Image* images_items_184_1_7[1];
static Direction direction_items_184_1_7 = {7, 50, 50, 0, -1, images_items_184_1_7, 1};
static Image* images_items_184_1_8[1];
static Direction direction_items_184_1_8 = {8, 50, 50, 0, -1, images_items_184_1_8, 1};
static Image* images_items_184_1_9[1];
static Direction direction_items_184_1_9 = {9, 50, 50, 0, -1, images_items_184_1_9, 1};
static Image* images_items_184_1_10[1];
static Direction direction_items_184_1_10 = {10, 50, 50, 0, -1, images_items_184_1_10, 1};
static Image* images_items_184_1_11[1];
static Direction direction_items_184_1_11 = {11, 50, 50, 0, -1, images_items_184_1_11, 1};
static Image* images_items_184_1_12[1];
static Direction direction_items_184_1_12 = {12, 50, 50, 0, -1, images_items_184_1_12, 1};
static Image* images_items_184_1_13[1];
static Direction direction_items_184_1_13 = {13, 50, 50, 0, -1, images_items_184_1_13, 1};
static Image* images_items_184_1_14[1];
static Direction direction_items_184_1_14 = {14, 50, 50, 0, -1, images_items_184_1_14, 1};
static Image* images_items_184_1_15[1];
static Direction direction_items_184_1_15 = {15, 50, 50, 0, -1, images_items_184_1_15, 1};
static Image* images_items_184_1_16[1];
static Direction direction_items_184_1_16 = {16, 50, 50, 0, -1, images_items_184_1_16, 1};
static Image* images_items_184_1_17[1];
static Direction direction_items_184_1_17 = {17, 50, 50, 0, -1, images_items_184_1_17, 1};
static Image* images_items_184_1_18[1];
static Direction direction_items_184_1_18 = {18, 50, 50, 0, -1, images_items_184_1_18, 1};
static Image* images_items_184_1_19[1];
static Direction direction_items_184_1_19 = {19, 50, 50, 0, -1, images_items_184_1_19, 1};
static Image* images_items_184_1_20[1];
static Direction direction_items_184_1_20 = {20, 50, 50, 0, -1, images_items_184_1_20, 1};
static Image* images_items_184_1_21[1];
static Direction direction_items_184_1_21 = {21, 50, 50, 0, -1, images_items_184_1_21, 1};
static Image* images_items_184_1_22[1];
static Direction direction_items_184_1_22 = {22, 50, 50, 0, -1, images_items_184_1_22, 1};
static Image* images_items_184_1_23[1];
static Direction direction_items_184_1_23 = {23, 50, 50, 0, -1, images_items_184_1_23, 1};
static Image* images_items_184_1_24[2];
static Direction direction_items_184_1_24 = {24, 10, 10, 0, -1, images_items_184_1_24, 2};
static Image* images_items_184_1_25[1];
static Direction direction_items_184_1_25 = {25, 50, 50, 0, -1, images_items_184_1_25, 1};
static Image* images_items_184_1_26[1];
static Direction direction_items_184_1_26 = {26, 50, 50, 0, -1, images_items_184_1_26, 1};
static Image* images_items_184_1_27[1];
static Direction direction_items_184_1_27 = {27, 50, 50, 0, -1, images_items_184_1_27, 1};
static Image* images_items_184_1_28[1];
static Direction direction_items_184_1_28 = {28, 50, 50, 0, -1, images_items_184_1_28, 1};
static Image* images_items_184_1_29[1];
static Direction direction_items_184_1_29 = {29, 50, 50, 0, -1, images_items_184_1_29, 1};
static Image* images_items_184_1_30[1];
static Direction direction_items_184_1_30 = {30, 50, 50, 0, -1, images_items_184_1_30, 1};
static Image* images_items_184_1_31[1];
static Direction direction_items_184_1_31 = {31, 50, 50, 0, -1, images_items_184_1_31, 1};
static Animation anim_items_184_1 = {&direction_items_184_1_0, &direction_items_184_1_1, &direction_items_184_1_2, &direction_items_184_1_3, &direction_items_184_1_4, &direction_items_184_1_5, &direction_items_184_1_6, &direction_items_184_1_7, &direction_items_184_1_8, &direction_items_184_1_9, &direction_items_184_1_10, &direction_items_184_1_11, &direction_items_184_1_12, &direction_items_184_1_13, &direction_items_184_1_14, &direction_items_184_1_15, &direction_items_184_1_16, &direction_items_184_1_17, &direction_items_184_1_18, &direction_items_184_1_19, &direction_items_184_1_20, &direction_items_184_1_21, &direction_items_184_1_22, &direction_items_184_1_23, &direction_items_184_1_24, &direction_items_184_1_25, &direction_items_184_1_26, &direction_items_184_1_27, &direction_items_184_1_28, &direction_items_184_1_29, &direction_items_184_1_30, &direction_items_184_1_31};
static Image* images_items_184_2_0[1];
static Direction direction_items_184_2_0 = {0, 50, 50, 0, -1, images_items_184_2_0, 1};
static Image* images_items_184_2_1[1];
static Direction direction_items_184_2_1 = {1, 50, 50, 0, -1, images_items_184_2_1, 1};
static Image* images_items_184_2_2[1];
static Direction direction_items_184_2_2 = {2, 50, 50, 0, -1, images_items_184_2_2, 1};
static Image* images_items_184_2_3[1];
static Direction direction_items_184_2_3 = {3, 50, 50, 0, -1, images_items_184_2_3, 1};
static Image* images_items_184_2_4[1];
static Direction direction_items_184_2_4 = {4, 50, 50, 0, -1, images_items_184_2_4, 1};
static Image* images_items_184_2_5[1];
static Direction direction_items_184_2_5 = {5, 50, 50, 0, -1, images_items_184_2_5, 1};
static Image* images_items_184_2_6[1];
static Direction direction_items_184_2_6 = {6, 50, 50, 0, -1, images_items_184_2_6, 1};
static Image* images_items_184_2_7[1];
static Direction direction_items_184_2_7 = {7, 50, 50, 0, -1, images_items_184_2_7, 1};
static Image* images_items_184_2_8[1];
static Direction direction_items_184_2_8 = {8, 50, 50, 0, -1, images_items_184_2_8, 1};
static Image* images_items_184_2_9[1];
static Direction direction_items_184_2_9 = {9, 50, 50, 0, -1, images_items_184_2_9, 1};
static Image* images_items_184_2_10[1];
static Direction direction_items_184_2_10 = {10, 50, 50, 0, -1, images_items_184_2_10, 1};
static Image* images_items_184_2_11[1];
static Direction direction_items_184_2_11 = {11, 50, 50, 0, -1, images_items_184_2_11, 1};
static Image* images_items_184_2_12[1];
static Direction direction_items_184_2_12 = {12, 50, 50, 0, -1, images_items_184_2_12, 1};
static Image* images_items_184_2_13[1];
static Direction direction_items_184_2_13 = {13, 50, 50, 0, -1, images_items_184_2_13, 1};
static Image* images_items_184_2_14[1];
static Direction direction_items_184_2_14 = {14, 50, 50, 0, -1, images_items_184_2_14, 1};
static Image* images_items_184_2_15[1];
static Direction direction_items_184_2_15 = {15, 50, 50, 0, -1, images_items_184_2_15, 1};
static Image* images_items_184_2_16[1];
static Direction direction_items_184_2_16 = {16, 50, 50, 0, -1, images_items_184_2_16, 1};
static Image* images_items_184_2_17[1];
static Direction direction_items_184_2_17 = {17, 50, 50, 0, -1, images_items_184_2_17, 1};
static Image* images_items_184_2_18[1];
static Direction direction_items_184_2_18 = {18, 50, 50, 0, -1, images_items_184_2_18, 1};
static Image* images_items_184_2_19[1];
static Direction direction_items_184_2_19 = {19, 50, 50, 0, -1, images_items_184_2_19, 1};
static Image* images_items_184_2_20[1];
static Direction direction_items_184_2_20 = {20, 50, 50, 0, -1, images_items_184_2_20, 1};
static Image* images_items_184_2_21[1];
static Direction direction_items_184_2_21 = {21, 50, 50, 0, -1, images_items_184_2_21, 1};
static Image* images_items_184_2_22[1];
static Direction direction_items_184_2_22 = {22, 50, 50, 0, -1, images_items_184_2_22, 1};
static Image* images_items_184_2_23[1];
static Direction direction_items_184_2_23 = {23, 50, 50, 0, -1, images_items_184_2_23, 1};
static Image* images_items_184_2_24[1];
static Direction direction_items_184_2_24 = {24, 50, 50, 0, -1, images_items_184_2_24, 1};
static Image* images_items_184_2_25[1];
static Direction direction_items_184_2_25 = {25, 50, 50, 0, -1, images_items_184_2_25, 1};
static Image* images_items_184_2_26[1];
static Direction direction_items_184_2_26 = {26, 50, 50, 0, -1, images_items_184_2_26, 1};
static Image* images_items_184_2_27[1];
static Direction direction_items_184_2_27 = {27, 50, 50, 0, -1, images_items_184_2_27, 1};
static Image* images_items_184_2_28[1];
static Direction direction_items_184_2_28 = {28, 50, 50, 0, -1, images_items_184_2_28, 1};
static Image* images_items_184_2_29[1];
static Direction direction_items_184_2_29 = {29, 50, 50, 0, -1, images_items_184_2_29, 1};
static Image* images_items_184_2_30[1];
static Direction direction_items_184_2_30 = {30, 50, 50, 0, -1, images_items_184_2_30, 1};
static Image* images_items_184_2_31[1];
static Direction direction_items_184_2_31 = {31, 50, 50, 0, -1, images_items_184_2_31, 1};
static Animation anim_items_184_2 = {&direction_items_184_2_0, &direction_items_184_2_1, &direction_items_184_2_2, &direction_items_184_2_3, &direction_items_184_2_4, &direction_items_184_2_5, &direction_items_184_2_6, &direction_items_184_2_7, &direction_items_184_2_8, &direction_items_184_2_9, &direction_items_184_2_10, &direction_items_184_2_11, &direction_items_184_2_12, &direction_items_184_2_13, &direction_items_184_2_14, &direction_items_184_2_15, &direction_items_184_2_16, &direction_items_184_2_17, &direction_items_184_2_18, &direction_items_184_2_19, &direction_items_184_2_20, &direction_items_184_2_21, &direction_items_184_2_22, &direction_items_184_2_23, &direction_items_184_2_24, &direction_items_184_2_25, &direction_items_184_2_26, &direction_items_184_2_27, &direction_items_184_2_28, &direction_items_184_2_29, &direction_items_184_2_30, &direction_items_184_2_31};
static Image* images_items_184_5_0[1];
static Direction direction_items_184_5_0 = {0, 50, 50, 0, -1, images_items_184_5_0, 1};
static Image* images_items_184_5_1[1];
static Direction direction_items_184_5_1 = {1, 50, 50, 0, -1, images_items_184_5_1, 1};
static Image* images_items_184_5_2[1];
static Direction direction_items_184_5_2 = {2, 50, 50, 0, -1, images_items_184_5_2, 1};
static Image* images_items_184_5_3[1];
static Direction direction_items_184_5_3 = {3, 50, 50, 0, -1, images_items_184_5_3, 1};
static Image* images_items_184_5_4[1];
static Direction direction_items_184_5_4 = {4, 50, 50, 0, -1, images_items_184_5_4, 1};
static Image* images_items_184_5_5[1];
static Direction direction_items_184_5_5 = {5, 50, 50, 0, -1, images_items_184_5_5, 1};
static Image* images_items_184_5_6[1];
static Direction direction_items_184_5_6 = {6, 50, 50, 0, -1, images_items_184_5_6, 1};
static Image* images_items_184_5_7[1];
static Direction direction_items_184_5_7 = {7, 50, 50, 0, -1, images_items_184_5_7, 1};
static Image* images_items_184_5_8[1];
static Direction direction_items_184_5_8 = {8, 50, 50, 0, -1, images_items_184_5_8, 1};
static Image* images_items_184_5_9[1];
static Direction direction_items_184_5_9 = {9, 50, 50, 0, -1, images_items_184_5_9, 1};
static Image* images_items_184_5_10[1];
static Direction direction_items_184_5_10 = {10, 50, 50, 0, -1, images_items_184_5_10, 1};
static Image* images_items_184_5_11[1];
static Direction direction_items_184_5_11 = {11, 50, 50, 0, -1, images_items_184_5_11, 1};
static Image* images_items_184_5_12[1];
static Direction direction_items_184_5_12 = {12, 50, 50, 0, -1, images_items_184_5_12, 1};
static Image* images_items_184_5_13[1];
static Direction direction_items_184_5_13 = {13, 50, 50, 0, -1, images_items_184_5_13, 1};
static Image* images_items_184_5_14[1];
static Direction direction_items_184_5_14 = {14, 50, 50, 0, -1, images_items_184_5_14, 1};
static Image* images_items_184_5_15[1];
static Direction direction_items_184_5_15 = {15, 50, 50, 0, -1, images_items_184_5_15, 1};
static Image* images_items_184_5_16[1];
static Direction direction_items_184_5_16 = {16, 50, 50, 0, -1, images_items_184_5_16, 1};
static Image* images_items_184_5_17[1];
static Direction direction_items_184_5_17 = {17, 50, 50, 0, -1, images_items_184_5_17, 1};
static Image* images_items_184_5_18[1];
static Direction direction_items_184_5_18 = {18, 50, 50, 0, -1, images_items_184_5_18, 1};
static Image* images_items_184_5_19[1];
static Direction direction_items_184_5_19 = {19, 50, 50, 0, -1, images_items_184_5_19, 1};
static Image* images_items_184_5_20[1];
static Direction direction_items_184_5_20 = {20, 50, 50, 0, -1, images_items_184_5_20, 1};
static Image* images_items_184_5_21[1];
static Direction direction_items_184_5_21 = {21, 50, 50, 0, -1, images_items_184_5_21, 1};
static Image* images_items_184_5_22[1];
static Direction direction_items_184_5_22 = {22, 50, 50, 0, -1, images_items_184_5_22, 1};
static Image* images_items_184_5_23[1];
static Direction direction_items_184_5_23 = {23, 50, 50, 0, -1, images_items_184_5_23, 1};
static Image* images_items_184_5_24[1];
static Direction direction_items_184_5_24 = {24, 50, 50, 0, -1, images_items_184_5_24, 1};
static Image* images_items_184_5_25[1];
static Direction direction_items_184_5_25 = {25, 50, 50, 0, -1, images_items_184_5_25, 1};
static Image* images_items_184_5_26[1];
static Direction direction_items_184_5_26 = {26, 50, 50, 0, -1, images_items_184_5_26, 1};
static Image* images_items_184_5_27[7];
static Direction direction_items_184_5_27 = {27, 15, 15, 0, -1, images_items_184_5_27, 7};
static Image* images_items_184_5_28[1];
static Direction direction_items_184_5_28 = {28, 50, 50, 0, -1, images_items_184_5_28, 1};
static Image* images_items_184_5_29[1];
static Direction direction_items_184_5_29 = {29, 50, 50, 0, -1, images_items_184_5_29, 1};
static Image* images_items_184_5_30[1];
static Direction direction_items_184_5_30 = {30, 50, 50, 0, -1, images_items_184_5_30, 1};
static Image* images_items_184_5_31[1];
static Direction direction_items_184_5_31 = {31, 50, 50, 0, -1, images_items_184_5_31, 1};
static Animation anim_items_184_5 = {&direction_items_184_5_0, &direction_items_184_5_1, &direction_items_184_5_2, &direction_items_184_5_3, &direction_items_184_5_4, &direction_items_184_5_5, &direction_items_184_5_6, &direction_items_184_5_7, &direction_items_184_5_8, &direction_items_184_5_9, &direction_items_184_5_10, &direction_items_184_5_11, &direction_items_184_5_12, &direction_items_184_5_13, &direction_items_184_5_14, &direction_items_184_5_15, &direction_items_184_5_16, &direction_items_184_5_17, &direction_items_184_5_18, &direction_items_184_5_19, &direction_items_184_5_20, &direction_items_184_5_21, &direction_items_184_5_22, &direction_items_184_5_23, &direction_items_184_5_24, &direction_items_184_5_25, &direction_items_184_5_26, &direction_items_184_5_27, &direction_items_184_5_28, &direction_items_184_5_29, &direction_items_184_5_30, &direction_items_184_5_31};
static Image* images_items_184_6_0[1];
static Direction direction_items_184_6_0 = {0, 15, 15, 0, -1, images_items_184_6_0, 1};
static Image* images_items_184_6_1[1];
static Direction direction_items_184_6_1 = {1, 15, 15, 0, -1, images_items_184_6_1, 1};
static Image* images_items_184_6_2[1];
static Direction direction_items_184_6_2 = {2, 15, 15, 0, -1, images_items_184_6_2, 1};
static Image* images_items_184_6_3[1];
static Direction direction_items_184_6_3 = {3, 50, 50, 0, -1, images_items_184_6_3, 1};
static Image* images_items_184_6_4[1];
static Direction direction_items_184_6_4 = {4, 50, 50, 0, -1, images_items_184_6_4, 1};
static Image* images_items_184_6_5[1];
static Direction direction_items_184_6_5 = {5, 50, 50, 0, -1, images_items_184_6_5, 1};
static Image* images_items_184_6_6[1];
static Direction direction_items_184_6_6 = {6, 50, 50, 0, -1, images_items_184_6_6, 1};
static Image* images_items_184_6_7[1];
static Direction direction_items_184_6_7 = {7, 50, 50, 0, -1, images_items_184_6_7, 1};
static Image* images_items_184_6_8[1];
static Direction direction_items_184_6_8 = {8, 50, 50, 0, -1, images_items_184_6_8, 1};
static Image* images_items_184_6_9[1];
static Direction direction_items_184_6_9 = {9, 50, 50, 0, -1, images_items_184_6_9, 1};
static Image* images_items_184_6_10[1];
static Direction direction_items_184_6_10 = {10, 50, 50, 0, -1, images_items_184_6_10, 1};
static Image* images_items_184_6_11[1];
static Direction direction_items_184_6_11 = {11, 50, 50, 0, -1, images_items_184_6_11, 1};
static Image* images_items_184_6_12[1];
static Direction direction_items_184_6_12 = {12, 50, 50, 0, -1, images_items_184_6_12, 1};
static Image* images_items_184_6_13[1];
static Direction direction_items_184_6_13 = {13, 50, 50, 0, -1, images_items_184_6_13, 1};
static Image* images_items_184_6_14[1];
static Direction direction_items_184_6_14 = {14, 5, 5, 0, -1, images_items_184_6_14, 1};
static Image* images_items_184_6_15[1];
static Direction direction_items_184_6_15 = {15, 5, 5, 0, -1, images_items_184_6_15, 1};
static Image* images_items_184_6_16[1];
static Direction direction_items_184_6_16 = {16, 5, 5, 0, -1, images_items_184_6_16, 1};
static Image* images_items_184_6_17[1];
static Direction direction_items_184_6_17 = {17, 50, 50, 0, -1, images_items_184_6_17, 1};
static Image* images_items_184_6_18[1];
static Direction direction_items_184_6_18 = {18, 50, 50, 0, -1, images_items_184_6_18, 1};
static Image* images_items_184_6_19[1];
static Direction direction_items_184_6_19 = {19, 50, 50, 0, -1, images_items_184_6_19, 1};
static Image* images_items_184_6_20[1];
static Direction direction_items_184_6_20 = {20, 50, 50, 0, -1, images_items_184_6_20, 1};
static Image* images_items_184_6_21[1];
static Direction direction_items_184_6_21 = {21, 50, 50, 0, -1, images_items_184_6_21, 1};
static Image* images_items_184_6_22[2];
static Direction direction_items_184_6_22 = {22, 10, 10, 0, -1, images_items_184_6_22, 2};
static Image* images_items_184_6_23[1];
static Direction direction_items_184_6_23 = {23, 50, 50, 0, -1, images_items_184_6_23, 1};
static Image* images_items_184_6_24[1];
static Direction direction_items_184_6_24 = {24, 50, 50, 0, -1, images_items_184_6_24, 1};
static Image* images_items_184_6_25[1];
static Direction direction_items_184_6_25 = {25, 50, 50, 0, -1, images_items_184_6_25, 1};
static Image* images_items_184_6_26[1];
static Direction direction_items_184_6_26 = {26, 50, 50, 0, -1, images_items_184_6_26, 1};
static Image* images_items_184_6_27[1];
static Direction direction_items_184_6_27 = {27, 50, 50, 0, -1, images_items_184_6_27, 1};
static Image* images_items_184_6_28[1];
static Direction direction_items_184_6_28 = {28, 50, 50, 0, -1, images_items_184_6_28, 1};
static Image* images_items_184_6_29[1];
static Direction direction_items_184_6_29 = {29, 50, 50, 0, -1, images_items_184_6_29, 1};
static Image* images_items_184_6_30[1];
static Direction direction_items_184_6_30 = {30, 50, 50, 0, -1, images_items_184_6_30, 1};
static Image* images_items_184_6_31[1];
static Direction direction_items_184_6_31 = {31, 50, 50, 0, -1, images_items_184_6_31, 1};
static Animation anim_items_184_6 = {&direction_items_184_6_0, &direction_items_184_6_1, &direction_items_184_6_2, &direction_items_184_6_3, &direction_items_184_6_4, &direction_items_184_6_5, &direction_items_184_6_6, &direction_items_184_6_7, &direction_items_184_6_8, &direction_items_184_6_9, &direction_items_184_6_10, &direction_items_184_6_11, &direction_items_184_6_12, &direction_items_184_6_13, &direction_items_184_6_14, &direction_items_184_6_15, &direction_items_184_6_16, &direction_items_184_6_17, &direction_items_184_6_18, &direction_items_184_6_19, &direction_items_184_6_20, &direction_items_184_6_21, &direction_items_184_6_22, &direction_items_184_6_23, &direction_items_184_6_24, &direction_items_184_6_25, &direction_items_184_6_26, &direction_items_184_6_27, &direction_items_184_6_28, &direction_items_184_6_29, &direction_items_184_6_30, &direction_items_184_6_31};
static Image* images_items_184_7_0[1];
static Direction direction_items_184_7_0 = {0, 50, 50, 0, -1, images_items_184_7_0, 1};
static Image* images_items_184_7_1[1];
static Direction direction_items_184_7_1 = {1, 50, 50, 0, -1, images_items_184_7_1, 1};
static Image* images_items_184_7_2[1];
static Direction direction_items_184_7_2 = {2, 50, 50, 0, -1, images_items_184_7_2, 1};
static Image* images_items_184_7_3[1];
static Direction direction_items_184_7_3 = {3, 50, 50, 0, -1, images_items_184_7_3, 1};
static Image* images_items_184_7_4[1];
static Direction direction_items_184_7_4 = {4, 50, 50, 0, -1, images_items_184_7_4, 1};
static Image* images_items_184_7_5[1];
static Direction direction_items_184_7_5 = {5, 50, 50, 0, -1, images_items_184_7_5, 1};
static Image* images_items_184_7_6[1];
static Direction direction_items_184_7_6 = {6, 50, 50, 0, -1, images_items_184_7_6, 1};
static Image* images_items_184_7_7[1];
static Direction direction_items_184_7_7 = {7, 50, 50, 0, -1, images_items_184_7_7, 1};
static Image* images_items_184_7_8[1];
static Direction direction_items_184_7_8 = {8, 50, 50, 0, -1, images_items_184_7_8, 1};
static Image* images_items_184_7_9[1];
static Direction direction_items_184_7_9 = {9, 50, 50, 0, -1, images_items_184_7_9, 1};
static Image* images_items_184_7_10[1];
static Direction direction_items_184_7_10 = {10, 50, 50, 0, -1, images_items_184_7_10, 1};
static Image* images_items_184_7_11[1];
static Direction direction_items_184_7_11 = {11, 50, 50, 0, -1, images_items_184_7_11, 1};
static Image* images_items_184_7_12[1];
static Direction direction_items_184_7_12 = {12, 50, 50, 0, -1, images_items_184_7_12, 1};
static Image* images_items_184_7_13[1];
static Direction direction_items_184_7_13 = {13, 50, 50, 0, -1, images_items_184_7_13, 1};
static Image* images_items_184_7_14[1];
static Direction direction_items_184_7_14 = {14, 50, 50, 0, -1, images_items_184_7_14, 1};
static Image* images_items_184_7_15[1];
static Direction direction_items_184_7_15 = {15, 50, 50, 0, -1, images_items_184_7_15, 1};
static Image* images_items_184_7_16[1];
static Direction direction_items_184_7_16 = {16, 50, 50, 0, -1, images_items_184_7_16, 1};
static Image* images_items_184_7_17[1];
static Direction direction_items_184_7_17 = {17, 50, 50, 0, -1, images_items_184_7_17, 1};
static Image* images_items_184_7_18[1];
static Direction direction_items_184_7_18 = {18, 50, 50, 0, -1, images_items_184_7_18, 1};
static Image* images_items_184_7_19[1];
static Direction direction_items_184_7_19 = {19, 50, 50, 0, -1, images_items_184_7_19, 1};
static Image* images_items_184_7_20[1];
static Direction direction_items_184_7_20 = {20, 50, 50, 0, -1, images_items_184_7_20, 1};
static Image* images_items_184_7_21[1];
static Direction direction_items_184_7_21 = {21, 50, 50, 0, -1, images_items_184_7_21, 1};
static Image* images_items_184_7_22[1];
static Direction direction_items_184_7_22 = {22, 50, 50, 0, -1, images_items_184_7_22, 1};
static Image* images_items_184_7_23[1];
static Direction direction_items_184_7_23 = {23, 50, 50, 0, -1, images_items_184_7_23, 1};
static Image* images_items_184_7_24[1];
static Direction direction_items_184_7_24 = {24, 50, 50, 0, -1, images_items_184_7_24, 1};
static Image* images_items_184_7_25[1];
static Direction direction_items_184_7_25 = {25, 50, 50, 0, -1, images_items_184_7_25, 1};
static Image* images_items_184_7_26[1];
static Direction direction_items_184_7_26 = {26, 50, 50, 0, -1, images_items_184_7_26, 1};
static Image* images_items_184_7_27[1];
static Direction direction_items_184_7_27 = {27, 50, 50, 0, -1, images_items_184_7_27, 1};
static Image* images_items_184_7_28[1];
static Direction direction_items_184_7_28 = {28, 50, 50, 0, -1, images_items_184_7_28, 1};
static Image* images_items_184_7_29[1];
static Direction direction_items_184_7_29 = {29, 50, 50, 0, -1, images_items_184_7_29, 1};
static Image* images_items_184_7_30[1];
static Direction direction_items_184_7_30 = {30, 50, 50, 0, -1, images_items_184_7_30, 1};
static Image* images_items_184_7_31[1];
static Direction direction_items_184_7_31 = {31, 50, 50, 0, -1, images_items_184_7_31, 1};
static Animation anim_items_184_7 = {&direction_items_184_7_0, &direction_items_184_7_1, &direction_items_184_7_2, &direction_items_184_7_3, &direction_items_184_7_4, &direction_items_184_7_5, &direction_items_184_7_6, &direction_items_184_7_7, &direction_items_184_7_8, &direction_items_184_7_9, &direction_items_184_7_10, &direction_items_184_7_11, &direction_items_184_7_12, &direction_items_184_7_13, &direction_items_184_7_14, &direction_items_184_7_15, &direction_items_184_7_16, &direction_items_184_7_17, &direction_items_184_7_18, &direction_items_184_7_19, &direction_items_184_7_20, &direction_items_184_7_21, &direction_items_184_7_22, &direction_items_184_7_23, &direction_items_184_7_24, &direction_items_184_7_25, &direction_items_184_7_26, &direction_items_184_7_27, &direction_items_184_7_28, &direction_items_184_7_29, &direction_items_184_7_30, &direction_items_184_7_31};
static Image* images_items_184_8_0[1];
static Direction direction_items_184_8_0 = {0, 50, 50, 0, -1, images_items_184_8_0, 1};
static Image* images_items_184_8_1[1];
static Direction direction_items_184_8_1 = {1, 50, 50, 0, -1, images_items_184_8_1, 1};
static Image* images_items_184_8_2[1];
static Direction direction_items_184_8_2 = {2, 50, 50, 0, -1, images_items_184_8_2, 1};
static Image* images_items_184_8_3[1];
static Direction direction_items_184_8_3 = {3, 50, 50, 0, -1, images_items_184_8_3, 1};
static Image* images_items_184_8_4[1];
static Direction direction_items_184_8_4 = {4, 50, 50, 0, -1, images_items_184_8_4, 1};
static Image* images_items_184_8_5[1];
static Direction direction_items_184_8_5 = {5, 50, 50, 0, -1, images_items_184_8_5, 1};
static Image* images_items_184_8_6[1];
static Direction direction_items_184_8_6 = {6, 50, 50, 0, -1, images_items_184_8_6, 1};
static Image* images_items_184_8_7[1];
static Direction direction_items_184_8_7 = {7, 50, 50, 0, -1, images_items_184_8_7, 1};
static Image* images_items_184_8_8[1];
static Direction direction_items_184_8_8 = {8, 50, 50, 0, -1, images_items_184_8_8, 1};
static Image* images_items_184_8_9[1];
static Direction direction_items_184_8_9 = {9, 50, 50, 0, -1, images_items_184_8_9, 1};
static Image* images_items_184_8_10[1];
static Direction direction_items_184_8_10 = {10, 50, 50, 0, -1, images_items_184_8_10, 1};
static Image* images_items_184_8_11[1];
static Direction direction_items_184_8_11 = {11, 50, 50, 0, -1, images_items_184_8_11, 1};
static Image* images_items_184_8_12[1];
static Direction direction_items_184_8_12 = {12, 50, 50, 0, -1, images_items_184_8_12, 1};
static Image* images_items_184_8_13[1];
static Direction direction_items_184_8_13 = {13, 50, 50, 0, -1, images_items_184_8_13, 1};
static Image* images_items_184_8_14[1];
static Direction direction_items_184_8_14 = {14, 50, 50, 0, -1, images_items_184_8_14, 1};
static Image* images_items_184_8_15[1];
static Direction direction_items_184_8_15 = {15, 50, 50, 0, -1, images_items_184_8_15, 1};
static Image* images_items_184_8_16[1];
static Direction direction_items_184_8_16 = {16, 50, 50, 0, -1, images_items_184_8_16, 1};
static Image* images_items_184_8_17[1];
static Direction direction_items_184_8_17 = {17, 50, 50, 0, -1, images_items_184_8_17, 1};
static Image* images_items_184_8_18[1];
static Direction direction_items_184_8_18 = {18, 50, 50, 0, -1, images_items_184_8_18, 1};
static Image* images_items_184_8_19[1];
static Direction direction_items_184_8_19 = {19, 50, 50, 0, -1, images_items_184_8_19, 1};
static Image* images_items_184_8_20[1];
static Direction direction_items_184_8_20 = {20, 50, 50, 0, -1, images_items_184_8_20, 1};
static Image* images_items_184_8_21[1];
static Direction direction_items_184_8_21 = {21, 50, 50, 0, -1, images_items_184_8_21, 1};
static Image* images_items_184_8_22[1];
static Direction direction_items_184_8_22 = {22, 50, 50, 0, -1, images_items_184_8_22, 1};
static Image* images_items_184_8_23[1];
static Direction direction_items_184_8_23 = {23, 50, 50, 0, -1, images_items_184_8_23, 1};
static Image* images_items_184_8_24[1];
static Direction direction_items_184_8_24 = {24, 50, 50, 0, -1, images_items_184_8_24, 1};
static Image* images_items_184_8_25[1];
static Direction direction_items_184_8_25 = {25, 50, 50, 0, -1, images_items_184_8_25, 1};
static Image* images_items_184_8_26[1];
static Direction direction_items_184_8_26 = {26, 50, 50, 0, -1, images_items_184_8_26, 1};
static Image* images_items_184_8_27[1];
static Direction direction_items_184_8_27 = {27, 50, 50, 0, -1, images_items_184_8_27, 1};
static Image* images_items_184_8_28[1];
static Direction direction_items_184_8_28 = {28, 50, 50, 0, -1, images_items_184_8_28, 1};
static Image* images_items_184_8_29[1];
static Direction direction_items_184_8_29 = {29, 50, 50, 0, -1, images_items_184_8_29, 1};
static Image* images_items_184_8_30[1];
static Direction direction_items_184_8_30 = {30, 50, 50, 0, -1, images_items_184_8_30, 1};
static Image* images_items_184_8_31[1];
static Direction direction_items_184_8_31 = {31, 50, 50, 0, -1, images_items_184_8_31, 1};
static Animation anim_items_184_8 = {&direction_items_184_8_0, &direction_items_184_8_1, &direction_items_184_8_2, &direction_items_184_8_3, &direction_items_184_8_4, &direction_items_184_8_5, &direction_items_184_8_6, &direction_items_184_8_7, &direction_items_184_8_8, &direction_items_184_8_9, &direction_items_184_8_10, &direction_items_184_8_11, &direction_items_184_8_12, &direction_items_184_8_13, &direction_items_184_8_14, &direction_items_184_8_15, &direction_items_184_8_16, &direction_items_184_8_17, &direction_items_184_8_18, &direction_items_184_8_19, &direction_items_184_8_20, &direction_items_184_8_21, &direction_items_184_8_22, &direction_items_184_8_23, &direction_items_184_8_24, &direction_items_184_8_25, &direction_items_184_8_26, &direction_items_184_8_27, &direction_items_184_8_28, &direction_items_184_8_29, &direction_items_184_8_30, &direction_items_184_8_31};
static Image* images_items_184_9_0[1];
static Direction direction_items_184_9_0 = {0, 50, 50, 0, -1, images_items_184_9_0, 1};
static Image* images_items_184_9_1[1];
static Direction direction_items_184_9_1 = {1, 50, 50, 0, -1, images_items_184_9_1, 1};
static Image* images_items_184_9_2[1];
static Direction direction_items_184_9_2 = {2, 50, 50, 0, -1, images_items_184_9_2, 1};
static Image* images_items_184_9_3[1];
static Direction direction_items_184_9_3 = {3, 50, 50, 0, -1, images_items_184_9_3, 1};
static Image* images_items_184_9_4[1];
static Direction direction_items_184_9_4 = {4, 50, 50, 0, -1, images_items_184_9_4, 1};
static Image* images_items_184_9_5[1];
static Direction direction_items_184_9_5 = {5, 50, 50, 0, -1, images_items_184_9_5, 1};
static Image* images_items_184_9_6[1];
static Direction direction_items_184_9_6 = {6, 50, 50, 0, -1, images_items_184_9_6, 1};
static Image* images_items_184_9_7[1];
static Direction direction_items_184_9_7 = {7, 50, 50, 0, -1, images_items_184_9_7, 1};
static Image* images_items_184_9_8[1];
static Direction direction_items_184_9_8 = {8, 50, 50, 0, -1, images_items_184_9_8, 1};
static Image* images_items_184_9_9[1];
static Direction direction_items_184_9_9 = {9, 50, 50, 0, -1, images_items_184_9_9, 1};
static Image* images_items_184_9_10[1];
static Direction direction_items_184_9_10 = {10, 50, 50, 0, -1, images_items_184_9_10, 1};
static Image* images_items_184_9_11[1];
static Direction direction_items_184_9_11 = {11, 50, 50, 0, -1, images_items_184_9_11, 1};
static Image* images_items_184_9_12[1];
static Direction direction_items_184_9_12 = {12, 50, 50, 0, -1, images_items_184_9_12, 1};
static Image* images_items_184_9_13[1];
static Direction direction_items_184_9_13 = {13, 50, 50, 0, -1, images_items_184_9_13, 1};
static Image* images_items_184_9_14[1];
static Direction direction_items_184_9_14 = {14, 50, 50, 0, -1, images_items_184_9_14, 1};
static Image* images_items_184_9_15[1];
static Direction direction_items_184_9_15 = {15, 50, 50, 0, -1, images_items_184_9_15, 1};
static Image* images_items_184_9_16[1];
static Direction direction_items_184_9_16 = {16, 50, 50, 0, -1, images_items_184_9_16, 1};
static Image* images_items_184_9_17[1];
static Direction direction_items_184_9_17 = {17, 50, 50, 0, -1, images_items_184_9_17, 1};
static Image* images_items_184_9_18[1];
static Direction direction_items_184_9_18 = {18, 50, 50, 0, -1, images_items_184_9_18, 1};
static Image* images_items_184_9_19[1];
static Direction direction_items_184_9_19 = {19, 50, 50, 0, -1, images_items_184_9_19, 1};
static Image* images_items_184_9_20[1];
static Direction direction_items_184_9_20 = {20, 50, 50, 0, -1, images_items_184_9_20, 1};
static Image* images_items_184_9_21[1];
static Direction direction_items_184_9_21 = {21, 50, 50, 0, -1, images_items_184_9_21, 1};
static Image* images_items_184_9_22[1];
static Direction direction_items_184_9_22 = {22, 50, 50, 0, -1, images_items_184_9_22, 1};
static Image* images_items_184_9_23[1];
static Direction direction_items_184_9_23 = {23, 50, 50, 0, -1, images_items_184_9_23, 1};
static Image* images_items_184_9_24[1];
static Direction direction_items_184_9_24 = {24, 50, 50, 0, -1, images_items_184_9_24, 1};
static Image* images_items_184_9_25[1];
static Direction direction_items_184_9_25 = {25, 50, 50, 0, -1, images_items_184_9_25, 1};
static Image* images_items_184_9_26[1];
static Direction direction_items_184_9_26 = {26, 50, 50, 0, -1, images_items_184_9_26, 1};
static Image* images_items_184_9_27[1];
static Direction direction_items_184_9_27 = {27, 50, 50, 0, -1, images_items_184_9_27, 1};
static Image* images_items_184_9_28[1];
static Direction direction_items_184_9_28 = {28, 50, 50, 0, -1, images_items_184_9_28, 1};
static Image* images_items_184_9_29[1];
static Direction direction_items_184_9_29 = {29, 50, 50, 0, -1, images_items_184_9_29, 1};
static Image* images_items_184_9_30[1];
static Direction direction_items_184_9_30 = {30, 50, 50, 0, -1, images_items_184_9_30, 1};
static Image* images_items_184_9_31[1];
static Direction direction_items_184_9_31 = {31, 50, 50, 0, -1, images_items_184_9_31, 1};
static Animation anim_items_184_9 = {&direction_items_184_9_0, &direction_items_184_9_1, &direction_items_184_9_2, &direction_items_184_9_3, &direction_items_184_9_4, &direction_items_184_9_5, &direction_items_184_9_6, &direction_items_184_9_7, &direction_items_184_9_8, &direction_items_184_9_9, &direction_items_184_9_10, &direction_items_184_9_11, &direction_items_184_9_12, &direction_items_184_9_13, &direction_items_184_9_14, &direction_items_184_9_15, &direction_items_184_9_16, &direction_items_184_9_17, &direction_items_184_9_18, &direction_items_184_9_19, &direction_items_184_9_20, &direction_items_184_9_21, &direction_items_184_9_22, &direction_items_184_9_23, &direction_items_184_9_24, &direction_items_184_9_25, &direction_items_184_9_26, &direction_items_184_9_27, &direction_items_184_9_28, &direction_items_184_9_29, &direction_items_184_9_30, &direction_items_184_9_31};
static Image* images_items_184_10_0[1];
static Direction direction_items_184_10_0 = {0, 50, 50, 0, -1, images_items_184_10_0, 1};
static Image* images_items_184_10_1[1];
static Direction direction_items_184_10_1 = {1, 50, 50, 0, -1, images_items_184_10_1, 1};
static Image* images_items_184_10_2[1];
static Direction direction_items_184_10_2 = {2, 50, 50, 0, -1, images_items_184_10_2, 1};
static Image* images_items_184_10_3[8];
static Direction direction_items_184_10_3 = {3, 5, 5, 0, -1, images_items_184_10_3, 8};
static Image* images_items_184_10_4[1];
static Direction direction_items_184_10_4 = {4, 50, 50, 0, -1, images_items_184_10_4, 1};
static Image* images_items_184_10_5[1];
static Direction direction_items_184_10_5 = {5, 50, 50, 0, -1, images_items_184_10_5, 1};
static Image* images_items_184_10_6[1];
static Direction direction_items_184_10_6 = {6, 50, 50, 0, -1, images_items_184_10_6, 1};
static Image* images_items_184_10_7[1];
static Direction direction_items_184_10_7 = {7, 50, 50, 0, -1, images_items_184_10_7, 1};
static Image* images_items_184_10_8[1];
static Direction direction_items_184_10_8 = {8, 50, 50, 0, -1, images_items_184_10_8, 1};
static Image* images_items_184_10_9[1];
static Direction direction_items_184_10_9 = {9, 50, 50, 0, -1, images_items_184_10_9, 1};
static Image* images_items_184_10_10[1];
static Direction direction_items_184_10_10 = {10, 50, 50, 0, -1, images_items_184_10_10, 1};
static Image* images_items_184_10_11[1];
static Direction direction_items_184_10_11 = {11, 50, 50, 0, -1, images_items_184_10_11, 1};
static Image* images_items_184_10_12[1];
static Direction direction_items_184_10_12 = {12, 50, 50, 0, -1, images_items_184_10_12, 1};
static Image* images_items_184_10_13[1];
static Direction direction_items_184_10_13 = {13, 50, 50, 0, -1, images_items_184_10_13, 1};
static Image* images_items_184_10_14[1];
static Direction direction_items_184_10_14 = {14, 50, 50, 0, -1, images_items_184_10_14, 1};
static Image* images_items_184_10_15[1];
static Direction direction_items_184_10_15 = {15, 50, 50, 0, -1, images_items_184_10_15, 1};
static Image* images_items_184_10_16[1];
static Direction direction_items_184_10_16 = {16, 50, 50, 0, -1, images_items_184_10_16, 1};
static Image* images_items_184_10_17[1];
static Direction direction_items_184_10_17 = {17, 50, 50, 0, -1, images_items_184_10_17, 1};
static Image* images_items_184_10_18[1];
static Direction direction_items_184_10_18 = {18, 50, 50, 0, -1, images_items_184_10_18, 1};
static Image* images_items_184_10_19[1];
static Direction direction_items_184_10_19 = {19, 50, 50, 0, -1, images_items_184_10_19, 1};
static Image* images_items_184_10_20[1];
static Direction direction_items_184_10_20 = {20, 50, 50, 0, -1, images_items_184_10_20, 1};
static Image* images_items_184_10_21[1];
static Direction direction_items_184_10_21 = {21, 50, 50, 0, -1, images_items_184_10_21, 1};
static Image* images_items_184_10_22[1];
static Direction direction_items_184_10_22 = {22, 50, 50, 0, -1, images_items_184_10_22, 1};
static Image* images_items_184_10_23[1];
static Direction direction_items_184_10_23 = {23, 50, 50, 0, -1, images_items_184_10_23, 1};
static Image* images_items_184_10_24[1];
static Direction direction_items_184_10_24 = {24, 50, 50, 0, -1, images_items_184_10_24, 1};
static Animation anim_items_184_10 = {&direction_items_184_10_0, &direction_items_184_10_1, &direction_items_184_10_2, &direction_items_184_10_3, &direction_items_184_10_4, &direction_items_184_10_5, &direction_items_184_10_6, &direction_items_184_10_7, &direction_items_184_10_8, &direction_items_184_10_9, &direction_items_184_10_10, &direction_items_184_10_11, &direction_items_184_10_12, &direction_items_184_10_13, &direction_items_184_10_14, &direction_items_184_10_15, &direction_items_184_10_16, &direction_items_184_10_17, &direction_items_184_10_18, &direction_items_184_10_19, &direction_items_184_10_20, &direction_items_184_10_21, &direction_items_184_10_22, &direction_items_184_10_23, &direction_items_184_10_24, &direction_items_184_10_24, &direction_items_184_10_24, &direction_items_184_10_24, NULL, &direction_items_184_10_0, &direction_items_184_10_0, &direction_items_184_10_0};
static Animation * anim_array_items_184[11] = {&anim_items_184_0, &anim_items_184_1, &anim_items_184_2, NULL, NULL, &anim_items_184_5, &anim_items_184_6, &anim_items_184_7, &anim_items_184_8, &anim_items_184_9, &anim_items_184_10};
static Animations anim_items_184 = {11, &anim_array_items_184[0]};
static bool anim_items_184_initialized;
class Items_184 : public Active
{
public:
    Items_184(int x, int y) : Active(x, y, Items_184_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Items", 5);
#endif
        this->animations = &anim_items_184;
        if (!anim_items_184_initialized) {
            anim_items_184_initialized = true;
            images_items_184_0_0[0] = get_internal_image(237);
            images_items_184_0_1[0] = get_internal_image(238);
            images_items_184_0_2[0] = get_internal_image(1269);
            images_items_184_0_3[0] = get_internal_image(279);
            images_items_184_0_4[0] = get_internal_image(287);
            images_items_184_0_5[0] = get_internal_image(324);
            images_items_184_0_6[0] = get_internal_image(325);
            images_items_184_0_7[0] = get_internal_image(252);
            images_items_184_0_8[0] = get_internal_image(328);
            images_items_184_0_9[0] = get_internal_image(327);
            images_items_184_0_10[0] = get_internal_image(288);
            images_items_184_0_11[0] = get_internal_image(2130);
            images_items_184_0_12[0] = get_internal_image(330);
            images_items_184_0_13[0] = get_internal_image(405);
            images_items_184_0_14[0] = get_internal_image(74);
            images_items_184_0_15[0] = get_internal_image(246);
            images_items_184_0_16[0] = get_internal_image(284);
            images_items_184_0_17[0] = get_internal_image(400);
            images_items_184_0_18[0] = get_internal_image(221);
            images_items_184_0_19[0] = get_internal_image(3);
            images_items_184_0_20[0] = get_internal_image(9);
            images_items_184_0_21[0] = get_internal_image(4);
            images_items_184_0_22[0] = get_internal_image(12);
            images_items_184_0_23[0] = get_internal_image(937);
            images_items_184_0_24[0] = get_internal_image(13);
            images_items_184_0_25[0] = get_internal_image(14);
            images_items_184_0_26[0] = get_internal_image(29);
            images_items_184_0_27[0] = get_internal_image(948);
            images_items_184_0_28[0] = get_internal_image(947);
            images_items_184_0_29[0] = get_internal_image(105);
            images_items_184_0_30[0] = get_internal_image(108);
            images_items_184_0_31[0] = get_internal_image(1079);
            images_items_184_1_0[0] = get_internal_image(109);
            images_items_184_1_1[0] = get_internal_image(110);
            images_items_184_1_2[0] = get_internal_image(117);
            images_items_184_1_3[0] = get_internal_image(122);
            images_items_184_1_4[0] = get_internal_image(192);
            images_items_184_1_5[0] = get_internal_image(10);
            images_items_184_1_6[0] = get_internal_image(397);
            images_items_184_1_7[0] = get_internal_image(398);
            images_items_184_1_8[0] = get_internal_image(401);
            images_items_184_1_9[0] = get_internal_image(116);
            images_items_184_1_10[0] = get_internal_image(403);
            images_items_184_1_11[0] = get_internal_image(1233);
            images_items_184_1_12[0] = get_internal_image(486);
            images_items_184_1_13[0] = get_internal_image(477);
            images_items_184_1_14[0] = get_internal_image(515);
            images_items_184_1_15[0] = get_internal_image(533);
            images_items_184_1_16[0] = get_internal_image(514);
            images_items_184_1_17[0] = get_internal_image(534);
            images_items_184_1_18[0] = get_internal_image(654);
            images_items_184_1_19[0] = get_internal_image(469);
            images_items_184_1_20[0] = get_internal_image(536);
            images_items_184_1_21[0] = get_internal_image(657);
            images_items_184_1_22[0] = get_internal_image(329);
            images_items_184_1_23[0] = get_internal_image(153);
            images_items_184_1_24[0] = get_internal_image(2374);
            images_items_184_1_24[1] = get_internal_image(2230);
            images_items_184_1_25[0] = get_internal_image(2236);
            images_items_184_1_26[0] = get_internal_image(1235);
            images_items_184_1_27[0] = get_internal_image(658);
            images_items_184_1_28[0] = get_internal_image(685);
            images_items_184_1_29[0] = get_internal_image(956);
            images_items_184_1_30[0] = get_internal_image(692);
            images_items_184_1_31[0] = get_internal_image(69);
            images_items_184_2_0[0] = get_internal_image(722);
            images_items_184_2_1[0] = get_internal_image(699);
            images_items_184_2_2[0] = get_internal_image(709);
            images_items_184_2_3[0] = get_internal_image(139);
            images_items_184_2_4[0] = get_internal_image(256);
            images_items_184_2_5[0] = get_internal_image(345);
            images_items_184_2_6[0] = get_internal_image(455);
            images_items_184_2_7[0] = get_internal_image(658);
            images_items_184_2_8[0] = get_internal_image(869);
            images_items_184_2_9[0] = get_internal_image(873);
            images_items_184_2_10[0] = get_internal_image(866);
            images_items_184_2_11[0] = get_internal_image(922);
            images_items_184_2_12[0] = get_internal_image(857);
            images_items_184_2_13[0] = get_internal_image(927);
            images_items_184_2_14[0] = get_internal_image(455);
            images_items_184_2_15[0] = get_internal_image(19);
            images_items_184_2_16[0] = get_internal_image(31);
            images_items_184_2_17[0] = get_internal_image(54);
            images_items_184_2_18[0] = get_internal_image(658);
            images_items_184_2_19[0] = get_internal_image(658);
            images_items_184_2_20[0] = get_internal_image(326);
            images_items_184_2_21[0] = get_internal_image(338);
            images_items_184_2_22[0] = get_internal_image(341);
            images_items_184_2_23[0] = get_internal_image(366);
            images_items_184_2_24[0] = get_internal_image(490);
            images_items_184_2_25[0] = get_internal_image(658);
            images_items_184_2_26[0] = get_internal_image(641);
            images_items_184_2_27[0] = get_internal_image(785);
            images_items_184_2_28[0] = get_internal_image(809);
            images_items_184_2_29[0] = get_internal_image(917);
            images_items_184_2_30[0] = get_internal_image(784);
            images_items_184_2_31[0] = get_internal_image(831);
            images_items_184_5_0[0] = get_internal_image(812);
            images_items_184_5_1[0] = get_internal_image(843);
            images_items_184_5_2[0] = get_internal_image(852);
            images_items_184_5_3[0] = get_internal_image(775);
            images_items_184_5_4[0] = get_internal_image(876);
            images_items_184_5_5[0] = get_internal_image(908);
            images_items_184_5_6[0] = get_internal_image(933);
            images_items_184_5_7[0] = get_internal_image(875);
            images_items_184_5_8[0] = get_internal_image(875);
            images_items_184_5_9[0] = get_internal_image(934);
            images_items_184_5_10[0] = get_internal_image(939);
            images_items_184_5_11[0] = get_internal_image(938);
            images_items_184_5_12[0] = get_internal_image(95);
            images_items_184_5_13[0] = get_internal_image(936);
            images_items_184_5_14[0] = get_internal_image(943);
            images_items_184_5_15[0] = get_internal_image(942);
            images_items_184_5_16[0] = get_internal_image(941);
            images_items_184_5_17[0] = get_internal_image(945);
            images_items_184_5_18[0] = get_internal_image(324);
            images_items_184_5_19[0] = get_internal_image(324);
            images_items_184_5_20[0] = get_internal_image(954);
            images_items_184_5_21[0] = get_internal_image(958);
            images_items_184_5_22[0] = get_internal_image(398);
            images_items_184_5_23[0] = get_internal_image(398);
            images_items_184_5_24[0] = get_internal_image(956);
            images_items_184_5_25[0] = get_internal_image(956);
            images_items_184_5_26[0] = get_internal_image(828);
            images_items_184_5_27[0] = get_internal_image(770);
            images_items_184_5_27[1] = get_internal_image(829);
            images_items_184_5_27[2] = get_internal_image(468);
            images_items_184_5_27[3] = get_internal_image(468);
            images_items_184_5_27[4] = get_internal_image(468);
            images_items_184_5_27[5] = get_internal_image(468);
            images_items_184_5_27[6] = get_internal_image(468);
            images_items_184_5_28[0] = get_internal_image(1003);
            images_items_184_5_29[0] = get_internal_image(1080);
            images_items_184_5_30[0] = get_internal_image(127);
            images_items_184_5_31[0] = get_internal_image(1230);
            images_items_184_6_0[0] = get_internal_image(1242);
            images_items_184_6_1[0] = get_internal_image(1240);
            images_items_184_6_2[0] = get_internal_image(306);
            images_items_184_6_3[0] = get_internal_image(285);
            images_items_184_6_4[0] = get_internal_image(91);
            images_items_184_6_5[0] = get_internal_image(337);
            images_items_184_6_6[0] = get_internal_image(118);
            images_items_184_6_7[0] = get_internal_image(611);
            images_items_184_6_8[0] = get_internal_image(766);
            images_items_184_6_9[0] = get_internal_image(1048);
            images_items_184_6_10[0] = get_internal_image(26);
            images_items_184_6_11[0] = get_internal_image(863);
            images_items_184_6_12[0] = get_internal_image(1427);
            images_items_184_6_13[0] = get_internal_image(1479);
            images_items_184_6_14[0] = get_internal_image(1239);
            images_items_184_6_15[0] = get_internal_image(1231);
            images_items_184_6_16[0] = get_internal_image(734);
            images_items_184_6_17[0] = get_internal_image(28);
            images_items_184_6_18[0] = get_internal_image(305);
            images_items_184_6_19[0] = get_internal_image(365);
            images_items_184_6_20[0] = get_internal_image(402);
            images_items_184_6_21[0] = get_internal_image(27);
            images_items_184_6_22[0] = get_internal_image(2392);
            images_items_184_6_22[1] = get_internal_image(606);
            images_items_184_6_23[0] = get_internal_image(914);
            images_items_184_6_24[0] = get_internal_image(640);
            images_items_184_6_25[0] = get_internal_image(1096);
            images_items_184_6_26[0] = get_internal_image(1097);
            images_items_184_6_27[0] = get_internal_image(1094);
            images_items_184_6_28[0] = get_internal_image(1443);
            images_items_184_6_29[0] = get_internal_image(1222);
            images_items_184_6_30[0] = get_internal_image(1511);
            images_items_184_6_31[0] = get_internal_image(1448);
            images_items_184_7_0[0] = get_internal_image(1533);
            images_items_184_7_1[0] = get_internal_image(1537);
            images_items_184_7_2[0] = get_internal_image(1536);
            images_items_184_7_3[0] = get_internal_image(1539);
            images_items_184_7_4[0] = get_internal_image(1550);
            images_items_184_7_5[0] = get_internal_image(1541);
            images_items_184_7_6[0] = get_internal_image(1552);
            images_items_184_7_7[0] = get_internal_image(1551);
            images_items_184_7_8[0] = get_internal_image(1554);
            images_items_184_7_9[0] = get_internal_image(1555);
            images_items_184_7_10[0] = get_internal_image(1556);
            images_items_184_7_11[0] = get_internal_image(1557);
            images_items_184_7_12[0] = get_internal_image(1553);
            images_items_184_7_13[0] = get_internal_image(1558);
            images_items_184_7_14[0] = get_internal_image(1585);
            images_items_184_7_15[0] = get_internal_image(1484);
            images_items_184_7_16[0] = get_internal_image(1571);
            images_items_184_7_17[0] = get_internal_image(1564);
            images_items_184_7_18[0] = get_internal_image(1572);
            images_items_184_7_19[0] = get_internal_image(1573);
            images_items_184_7_20[0] = get_internal_image(1589);
            images_items_184_7_21[0] = get_internal_image(2170);
            images_items_184_7_22[0] = get_internal_image(2165);
            images_items_184_7_23[0] = get_internal_image(679);
            images_items_184_7_24[0] = get_internal_image(2174);
            images_items_184_7_25[0] = get_internal_image(2172);
            images_items_184_7_26[0] = get_internal_image(2177);
            images_items_184_7_27[0] = get_internal_image(2246);
            images_items_184_7_28[0] = get_internal_image(2302);
            images_items_184_7_29[0] = get_internal_image(1251);
            images_items_184_7_30[0] = get_internal_image(2427);
            images_items_184_7_31[0] = get_internal_image(2435);
            images_items_184_8_0[0] = get_internal_image(2439);
            images_items_184_8_1[0] = get_internal_image(2440);
            images_items_184_8_2[0] = get_internal_image(2441);
            images_items_184_8_3[0] = get_internal_image(2496);
            images_items_184_8_4[0] = get_internal_image(2449);
            images_items_184_8_5[0] = get_internal_image(2450);
            images_items_184_8_6[0] = get_internal_image(2453);
            images_items_184_8_7[0] = get_internal_image(2497);
            images_items_184_8_8[0] = get_internal_image(2459);
            images_items_184_8_9[0] = get_internal_image(2462);
            images_items_184_8_10[0] = get_internal_image(2465);
            images_items_184_8_11[0] = get_internal_image(2457);
            images_items_184_8_12[0] = get_internal_image(2489);
            images_items_184_8_13[0] = get_internal_image(2491);
            images_items_184_8_14[0] = get_internal_image(2490);
            images_items_184_8_15[0] = get_internal_image(2470);
            images_items_184_8_16[0] = get_internal_image(2492);
            images_items_184_8_17[0] = get_internal_image(2493);
            images_items_184_8_18[0] = get_internal_image(2746);
            images_items_184_8_19[0] = get_internal_image(2739);
            images_items_184_8_20[0] = get_internal_image(2844);
            images_items_184_8_21[0] = get_internal_image(2846);
            images_items_184_8_22[0] = get_internal_image(2848);
            images_items_184_8_23[0] = get_internal_image(2849);
            images_items_184_8_24[0] = get_internal_image(2852);
            images_items_184_8_25[0] = get_internal_image(2859);
            images_items_184_8_26[0] = get_internal_image(2871);
            images_items_184_8_27[0] = get_internal_image(2853);
            images_items_184_8_28[0] = get_internal_image(2877);
            images_items_184_8_29[0] = get_internal_image(2881);
            images_items_184_8_30[0] = get_internal_image(2883);
            images_items_184_8_31[0] = get_internal_image(2882);
            images_items_184_9_0[0] = get_internal_image(2885);
            images_items_184_9_1[0] = get_internal_image(2884);
            images_items_184_9_2[0] = get_internal_image(2887);
            images_items_184_9_3[0] = get_internal_image(2888);
            images_items_184_9_4[0] = get_internal_image(2886);
            images_items_184_9_5[0] = get_internal_image(2889);
            images_items_184_9_6[0] = get_internal_image(2890);
            images_items_184_9_7[0] = get_internal_image(2891);
            images_items_184_9_8[0] = get_internal_image(2892);
            images_items_184_9_9[0] = get_internal_image(2893);
            images_items_184_9_10[0] = get_internal_image(2894);
            images_items_184_9_11[0] = get_internal_image(2896);
            images_items_184_9_12[0] = get_internal_image(2895);
            images_items_184_9_13[0] = get_internal_image(3264);
            images_items_184_9_14[0] = get_internal_image(3361);
            images_items_184_9_15[0] = get_internal_image(3762);
            images_items_184_9_16[0] = get_internal_image(3366);
            images_items_184_9_17[0] = get_internal_image(3369);
            images_items_184_9_18[0] = get_internal_image(3372);
            images_items_184_9_19[0] = get_internal_image(3375);
            images_items_184_9_20[0] = get_internal_image(3376);
            images_items_184_9_21[0] = get_internal_image(3374);
            images_items_184_9_22[0] = get_internal_image(3377);
            images_items_184_9_23[0] = get_internal_image(3379);
            images_items_184_9_24[0] = get_internal_image(3378);
            images_items_184_9_25[0] = get_internal_image(3380);
            images_items_184_9_26[0] = get_internal_image(3381);
            images_items_184_9_27[0] = get_internal_image(3383);
            images_items_184_9_28[0] = get_internal_image(3384);
            images_items_184_9_29[0] = get_internal_image(3385);
            images_items_184_9_30[0] = get_internal_image(3386);
            images_items_184_9_31[0] = get_internal_image(3387);
            images_items_184_10_0[0] = get_internal_image(3382);
            images_items_184_10_1[0] = get_internal_image(3388);
            images_items_184_10_2[0] = get_internal_image(3390);
            images_items_184_10_3[0] = get_internal_image(3886);
            images_items_184_10_3[1] = get_internal_image(3886);
            images_items_184_10_3[2] = get_internal_image(3886);
            images_items_184_10_3[3] = get_internal_image(3886);
            images_items_184_10_3[4] = get_internal_image(3891);
            images_items_184_10_3[5] = get_internal_image(3892);
            images_items_184_10_3[6] = get_internal_image(3886);
            images_items_184_10_3[7] = get_internal_image(3886);
            images_items_184_10_4[0] = get_internal_image(3887);
            images_items_184_10_5[0] = get_internal_image(3930);
            images_items_184_10_6[0] = get_internal_image(3934);
            images_items_184_10_7[0] = get_internal_image(3936);
            images_items_184_10_8[0] = get_internal_image(3937);
            images_items_184_10_9[0] = get_internal_image(3935);
            images_items_184_10_10[0] = get_internal_image(3938);
            images_items_184_10_11[0] = get_internal_image(3940);
            images_items_184_10_12[0] = get_internal_image(3941);
            images_items_184_10_13[0] = get_internal_image(3942);
            images_items_184_10_14[0] = get_internal_image(3939);
            images_items_184_10_15[0] = get_internal_image(3944);
            images_items_184_10_16[0] = get_internal_image(3945);
            images_items_184_10_17[0] = get_internal_image(3946);
            images_items_184_10_18[0] = get_internal_image(3943);
            images_items_184_10_19[0] = get_internal_image(3947);
            images_items_184_10_20[0] = get_internal_image(3948);
            images_items_184_10_21[0] = get_internal_image(3949);
            images_items_184_10_22[0] = get_internal_image(3950);
            images_items_184_10_23[0] = get_internal_image(3926);
            images_items_184_10_24[0] = get_internal_image(3926);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(8, 1);
    }
};
FrameObject * create_items_184(int x, int y)
{
    return new (Active::pool.create()) Items_184(x, y);
}
static Image* images_fx_185_4_0[3];
static Direction direction_fx_185_4_0 = {0, 25, 25, 0, 1, images_fx_185_4_0, 3};
static Image* images_fx_185_4_1[1];
static Direction direction_fx_185_4_1 = {1, 10, 10, 0, 1, images_fx_185_4_1, 1};
static Image* images_fx_185_4_2[1];
static Direction direction_fx_185_4_2 = {2, 10, 10, 0, 1, images_fx_185_4_2, 1};
static Image* images_fx_185_4_3[5];
static Direction direction_fx_185_4_3 = {3, 25, 25, 0, 1, images_fx_185_4_3, 5};
static Animation anim_fx_185_4 = {&direction_fx_185_4_0, &direction_fx_185_4_1, &direction_fx_185_4_2, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_3, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0, &direction_fx_185_4_0};
static Image* images_fx_185_5_0[5];
static Direction direction_fx_185_5_0 = {0, 50, 50, 0, 1, images_fx_185_5_0, 5};
static Animation anim_fx_185_5 = {&direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, NULL, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0, &direction_fx_185_5_0};
static Animation * anim_array_fx_185[6] = {NULL, NULL, NULL, NULL, &anim_fx_185_4, &anim_fx_185_5};
static Animations anim_fx_185 = {6, &anim_array_fx_185[0]};
static bool anim_fx_185_initialized;
class Fx_185 : public Active
{
public:
    Fx_185(int x, int y) : Active(x, y, Fx_185_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("fx", 2);
#endif
        this->animations = &anim_fx_185;
        if (!anim_fx_185_initialized) {
            anim_fx_185_initialized = true;
            images_fx_185_4_0[0] = get_internal_image(364);
            images_fx_185_4_0[1] = get_internal_image(339);
            images_fx_185_4_0[2] = get_internal_image(368);
            images_fx_185_4_1[0] = get_internal_image(145);
            images_fx_185_4_2[0] = get_internal_image(190);
            images_fx_185_4_3[0] = get_internal_image(289);
            images_fx_185_4_3[1] = get_internal_image(951);
            images_fx_185_4_3[2] = get_internal_image(659);
            images_fx_185_4_3[3] = get_internal_image(928);
            images_fx_185_4_3[4] = get_internal_image(952);
            images_fx_185_5_0[0] = get_internal_image(273);
            images_fx_185_5_0[1] = get_internal_image(272);
            images_fx_185_5_0[2] = get_internal_image(253);
            images_fx_185_5_0[3] = get_internal_image(254);
            images_fx_185_5_0[4] = get_internal_image(260);
        }
        active_flags |= TRANSPARENT;
        animation = DISAPPEARING;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_fx_185(int x, int y)
{
    return new (Active::pool.create()) Fx_185(x, y);
}
static Image* images_dialogPanel_0_0[1];
static Direction direction_dialogPanel_0_0 = {0, 50, 50, 0, -1, images_dialogPanel_0_0, 1};
static Animation anim_dialogPanel_0 = {&direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, NULL, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0, &direction_dialogPanel_0_0};
static Image* images_dialogPanel_12_0[1];
static Direction direction_dialogPanel_12_0 = {0, 50, 50, 0, -1, images_dialogPanel_12_0, 1};
static Image* images_dialogPanel_12_16[1];
static Direction direction_dialogPanel_12_16 = {16, 50, 50, 0, -1, images_dialogPanel_12_16, 1};
static Animation anim_dialogPanel_12 = {&direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, NULL, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, &direction_dialogPanel_12_16, NULL, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0, &direction_dialogPanel_12_0};
static Image* images_dialogPanel_13_0[1];
static Direction direction_dialogPanel_13_0 = {0, 50, 50, 0, -1, images_dialogPanel_13_0, 1};
static Animation anim_dialogPanel_13 = {&direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, NULL, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0, &direction_dialogPanel_13_0};
static Image* images_dialogPanel_14_0[1];
static Direction direction_dialogPanel_14_0 = {0, 50, 50, 0, -1, images_dialogPanel_14_0, 1};
static Image* images_dialogPanel_14_16[1];
static Direction direction_dialogPanel_14_16 = {16, 50, 50, 0, -1, images_dialogPanel_14_16, 1};
static Image* images_dialogPanel_14_24[1];
static Direction direction_dialogPanel_14_24 = {24, 50, 50, 0, -1, images_dialogPanel_14_24, 1};
static Animation anim_dialogPanel_14 = {&direction_dialogPanel_14_0, &direction_dialogPanel_14_0, &direction_dialogPanel_14_0, &direction_dialogPanel_14_0, &direction_dialogPanel_14_0, &direction_dialogPanel_14_0, &direction_dialogPanel_14_0, &direction_dialogPanel_14_0, NULL, &direction_dialogPanel_14_16, &direction_dialogPanel_14_16, &direction_dialogPanel_14_16, &direction_dialogPanel_14_16, &direction_dialogPanel_14_16, &direction_dialogPanel_14_16, &direction_dialogPanel_14_16, &direction_dialogPanel_14_16, &direction_dialogPanel_14_16, &direction_dialogPanel_14_16, &direction_dialogPanel_14_16, NULL, &direction_dialogPanel_14_24, &direction_dialogPanel_14_24, &direction_dialogPanel_14_24, &direction_dialogPanel_14_24, &direction_dialogPanel_14_24, &direction_dialogPanel_14_24, &direction_dialogPanel_14_24, NULL, &direction_dialogPanel_14_0, &direction_dialogPanel_14_0, &direction_dialogPanel_14_0};
static Image* images_dialogPanel_15_0[1];
static Direction direction_dialogPanel_15_0 = {0, 50, 50, 0, -1, images_dialogPanel_15_0, 1};
static Image* images_dialogPanel_15_16[3];
static Direction direction_dialogPanel_15_16 = {16, 20, 20, 2, -1, images_dialogPanel_15_16, 3};
static Animation anim_dialogPanel_15 = {&direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, NULL, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, &direction_dialogPanel_15_16, NULL, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0, &direction_dialogPanel_15_0};
static Image* images_dialogPanel_16_0[1];
static Direction direction_dialogPanel_16_0 = {0, 50, 50, 0, -1, images_dialogPanel_16_0, 1};
static Animation anim_dialogPanel_16 = {&direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, NULL, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0, &direction_dialogPanel_16_0};
static Image* images_dialogPanel_17_0[1];
static Direction direction_dialogPanel_17_0 = {0, 50, 50, 0, -1, images_dialogPanel_17_0, 1};
static Animation anim_dialogPanel_17 = {&direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, NULL, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0, &direction_dialogPanel_17_0};
static Image* images_dialogPanel_18_0[1];
static Direction direction_dialogPanel_18_0 = {0, 50, 50, 0, -1, images_dialogPanel_18_0, 1};
static Animation anim_dialogPanel_18 = {&direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, NULL, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0, &direction_dialogPanel_18_0};
static Image* images_dialogPanel_19_0[1];
static Direction direction_dialogPanel_19_0 = {0, 50, 50, 0, -1, images_dialogPanel_19_0, 1};
static Animation anim_dialogPanel_19 = {&direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, NULL, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0, &direction_dialogPanel_19_0};
static Image* images_dialogPanel_20_0[1];
static Direction direction_dialogPanel_20_0 = {0, 50, 50, 0, -1, images_dialogPanel_20_0, 1};
static Image* images_dialogPanel_20_8[1];
static Direction direction_dialogPanel_20_8 = {8, 50, 50, 0, -1, images_dialogPanel_20_8, 1};
static Image* images_dialogPanel_20_16[1];
static Direction direction_dialogPanel_20_16 = {16, 50, 50, 0, -1, images_dialogPanel_20_16, 1};
static Animation anim_dialogPanel_20 = {&direction_dialogPanel_20_0, &direction_dialogPanel_20_0, &direction_dialogPanel_20_0, &direction_dialogPanel_20_0, NULL, &direction_dialogPanel_20_8, &direction_dialogPanel_20_8, &direction_dialogPanel_20_8, &direction_dialogPanel_20_8, &direction_dialogPanel_20_8, &direction_dialogPanel_20_8, &direction_dialogPanel_20_8, NULL, &direction_dialogPanel_20_16, &direction_dialogPanel_20_16, &direction_dialogPanel_20_16, &direction_dialogPanel_20_16, &direction_dialogPanel_20_16, &direction_dialogPanel_20_16, &direction_dialogPanel_20_16, &direction_dialogPanel_20_16, &direction_dialogPanel_20_16, &direction_dialogPanel_20_16, &direction_dialogPanel_20_16, NULL, &direction_dialogPanel_20_0, &direction_dialogPanel_20_0, &direction_dialogPanel_20_0, &direction_dialogPanel_20_0, &direction_dialogPanel_20_0, &direction_dialogPanel_20_0, &direction_dialogPanel_20_0};
static Image* images_dialogPanel_21_0[1];
static Direction direction_dialogPanel_21_0 = {0, 50, 50, 0, -1, images_dialogPanel_21_0, 1};
static Animation anim_dialogPanel_21 = {&direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, NULL, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0, &direction_dialogPanel_21_0};
static Image* images_dialogPanel_22_0[1];
static Direction direction_dialogPanel_22_0 = {0, 50, 50, 0, -1, images_dialogPanel_22_0, 1};
static Animation anim_dialogPanel_22 = {&direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, NULL, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0, &direction_dialogPanel_22_0};
static Image* images_dialogPanel_23_0[1];
static Direction direction_dialogPanel_23_0 = {0, 50, 50, 0, -1, images_dialogPanel_23_0, 1};
static Animation anim_dialogPanel_23 = {&direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, NULL, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0, &direction_dialogPanel_23_0};
static Image* images_dialogPanel_24_0[1];
static Direction direction_dialogPanel_24_0 = {0, 50, 50, 0, -1, images_dialogPanel_24_0, 1};
static Image* images_dialogPanel_24_4[1];
static Direction direction_dialogPanel_24_4 = {4, 50, 50, 0, -1, images_dialogPanel_24_4, 1};
static Image* images_dialogPanel_24_8[1];
static Direction direction_dialogPanel_24_8 = {8, 50, 50, 0, -1, images_dialogPanel_24_8, 1};
static Image* images_dialogPanel_24_16[1];
static Direction direction_dialogPanel_24_16 = {16, 50, 50, 0, -1, images_dialogPanel_24_16, 1};
static Image* images_dialogPanel_24_24[1];
static Direction direction_dialogPanel_24_24 = {24, 50, 50, 0, -1, images_dialogPanel_24_24, 1};
static Animation anim_dialogPanel_24 = {&direction_dialogPanel_24_0, &direction_dialogPanel_24_0, NULL, &direction_dialogPanel_24_4, &direction_dialogPanel_24_4, &direction_dialogPanel_24_4, NULL, &direction_dialogPanel_24_8, &direction_dialogPanel_24_8, &direction_dialogPanel_24_8, &direction_dialogPanel_24_8, &direction_dialogPanel_24_8, NULL, &direction_dialogPanel_24_16, &direction_dialogPanel_24_16, &direction_dialogPanel_24_16, &direction_dialogPanel_24_16, &direction_dialogPanel_24_16, &direction_dialogPanel_24_16, &direction_dialogPanel_24_16, NULL, &direction_dialogPanel_24_24, &direction_dialogPanel_24_24, &direction_dialogPanel_24_24, &direction_dialogPanel_24_24, &direction_dialogPanel_24_24, &direction_dialogPanel_24_24, &direction_dialogPanel_24_24, NULL, &direction_dialogPanel_24_0, &direction_dialogPanel_24_0, &direction_dialogPanel_24_0};
static Image* images_dialogPanel_25_0[1];
static Direction direction_dialogPanel_25_0 = {0, 50, 50, 0, -1, images_dialogPanel_25_0, 1};
static Image* images_dialogPanel_25_16[2];
static Direction direction_dialogPanel_25_16 = {16, 5, 5, 0, -1, images_dialogPanel_25_16, 2};
static Animation anim_dialogPanel_25 = {&direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, NULL, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, &direction_dialogPanel_25_16, NULL, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0, &direction_dialogPanel_25_0};
static Image* images_dialogPanel_26_0[1];
static Direction direction_dialogPanel_26_0 = {0, 50, 50, 0, -1, images_dialogPanel_26_0, 1};
static Animation anim_dialogPanel_26 = {&direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, NULL, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0, &direction_dialogPanel_26_0};
static Image* images_dialogPanel_27_0[1];
static Direction direction_dialogPanel_27_0 = {0, 50, 50, 0, -1, images_dialogPanel_27_0, 1};
static Animation anim_dialogPanel_27 = {&direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, NULL, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0, &direction_dialogPanel_27_0};
static Image* images_dialogPanel_28_0[1];
static Direction direction_dialogPanel_28_0 = {0, 50, 50, 0, -1, images_dialogPanel_28_0, 1};
static Image* images_dialogPanel_28_16[1];
static Direction direction_dialogPanel_28_16 = {16, 50, 50, 0, -1, images_dialogPanel_28_16, 1};
static Animation anim_dialogPanel_28 = {&direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, NULL, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, &direction_dialogPanel_28_16, NULL, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0, &direction_dialogPanel_28_0};
static Image* images_dialogPanel_29_0[1];
static Direction direction_dialogPanel_29_0 = {0, 50, 50, 0, -1, images_dialogPanel_29_0, 1};
static Image* images_dialogPanel_29_2[1];
static Direction direction_dialogPanel_29_2 = {2, 50, 50, 0, -1, images_dialogPanel_29_2, 1};
static Image* images_dialogPanel_29_4[1];
static Direction direction_dialogPanel_29_4 = {4, 50, 50, 0, -1, images_dialogPanel_29_4, 1};
static Image* images_dialogPanel_29_8[2];
static Direction direction_dialogPanel_29_8 = {8, 50, 50, 1, -1, images_dialogPanel_29_8, 2};
static Image* images_dialogPanel_29_12[2];
static Direction direction_dialogPanel_29_12 = {12, 50, 50, 1, -1, images_dialogPanel_29_12, 2};
static Image* images_dialogPanel_29_16[1];
static Direction direction_dialogPanel_29_16 = {16, 50, 50, 0, -1, images_dialogPanel_29_16, 1};
static Image* images_dialogPanel_29_20[1];
static Direction direction_dialogPanel_29_20 = {20, 50, 50, 0, -1, images_dialogPanel_29_20, 1};
static Image* images_dialogPanel_29_24[1];
static Direction direction_dialogPanel_29_24 = {24, 50, 50, 0, -1, images_dialogPanel_29_24, 1};
static Image* images_dialogPanel_29_26[1];
static Direction direction_dialogPanel_29_26 = {26, 50, 50, 0, -1, images_dialogPanel_29_26, 1};
static Image* images_dialogPanel_29_28[1];
static Direction direction_dialogPanel_29_28 = {28, 50, 50, 0, -1, images_dialogPanel_29_28, 1};
static Image* images_dialogPanel_29_30[1];
static Direction direction_dialogPanel_29_30 = {30, 50, 50, 0, -1, images_dialogPanel_29_30, 1};
static Animation anim_dialogPanel_29 = {&direction_dialogPanel_29_0, NULL, &direction_dialogPanel_29_2, NULL, &direction_dialogPanel_29_4, &direction_dialogPanel_29_4, NULL, &direction_dialogPanel_29_8, &direction_dialogPanel_29_8, &direction_dialogPanel_29_8, NULL, &direction_dialogPanel_29_12, &direction_dialogPanel_29_12, &direction_dialogPanel_29_12, NULL, &direction_dialogPanel_29_16, &direction_dialogPanel_29_16, &direction_dialogPanel_29_16, NULL, &direction_dialogPanel_29_20, &direction_dialogPanel_29_20, &direction_dialogPanel_29_20, NULL, &direction_dialogPanel_29_24, &direction_dialogPanel_29_24, NULL, &direction_dialogPanel_29_26, NULL, &direction_dialogPanel_29_28, NULL, &direction_dialogPanel_29_30, NULL};
static Image* images_dialogPanel_30_0[1];
static Direction direction_dialogPanel_30_0 = {0, 50, 50, 0, -1, images_dialogPanel_30_0, 1};
static Animation anim_dialogPanel_30 = {&direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, NULL, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0, &direction_dialogPanel_30_0};
static Image* images_dialogPanel_31_0[1];
static Direction direction_dialogPanel_31_0 = {0, 50, 50, 0, -1, images_dialogPanel_31_0, 1};
static Animation anim_dialogPanel_31 = {&direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, NULL, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0, &direction_dialogPanel_31_0};
static Animation * anim_array_dialogPanel[32] = {&anim_dialogPanel_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_dialogPanel_12, &anim_dialogPanel_13, &anim_dialogPanel_14, &anim_dialogPanel_15, &anim_dialogPanel_16, &anim_dialogPanel_17, &anim_dialogPanel_18, &anim_dialogPanel_19, &anim_dialogPanel_20, &anim_dialogPanel_21, &anim_dialogPanel_22, &anim_dialogPanel_23, &anim_dialogPanel_24, &anim_dialogPanel_25, &anim_dialogPanel_26, &anim_dialogPanel_27, &anim_dialogPanel_28, &anim_dialogPanel_29, &anim_dialogPanel_30, &anim_dialogPanel_31};
static Animations anim_dialogPanel = {32, &anim_array_dialogPanel[0]};
static bool anim_dialogPanel_initialized;
class DialogPanel : public Active
{
public:
    DialogPanel(int x, int y) : Active(x, y, dialogPanel_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TextBox", 7);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_dialogPanel;
        if (!anim_dialogPanel_initialized) {
            anim_dialogPanel_initialized = true;
            images_dialogPanel_0_0[0] = get_internal_image(1457);
            images_dialogPanel_12_0[0] = get_internal_image(76);
            images_dialogPanel_12_16[0] = get_internal_image(65);
            images_dialogPanel_13_0[0] = get_internal_image(494);
            images_dialogPanel_14_0[0] = get_internal_image(1409);
            images_dialogPanel_14_16[0] = get_internal_image(1421);
            images_dialogPanel_14_24[0] = get_internal_image(1419);
            images_dialogPanel_15_0[0] = get_internal_image(2348);
            images_dialogPanel_15_16[0] = get_internal_image(965);
            images_dialogPanel_15_16[1] = get_internal_image(2363);
            images_dialogPanel_15_16[2] = get_internal_image(2348);
            images_dialogPanel_16_0[0] = get_internal_image(392);
            images_dialogPanel_17_0[0] = get_internal_image(114);
            images_dialogPanel_18_0[0] = get_internal_image(471);
            images_dialogPanel_19_0[0] = get_internal_image(677);
            images_dialogPanel_20_0[0] = get_internal_image(6);
            images_dialogPanel_20_8[0] = get_internal_image(1084);
            images_dialogPanel_20_16[0] = get_internal_image(6);
            images_dialogPanel_21_0[0] = get_internal_image(1298);
            images_dialogPanel_22_0[0] = get_internal_image(813);
            images_dialogPanel_23_0[0] = get_internal_image(392);
            images_dialogPanel_24_0[0] = get_internal_image(491);
            images_dialogPanel_24_4[0] = get_internal_image(520);
            images_dialogPanel_24_8[0] = get_internal_image(520);
            images_dialogPanel_24_16[0] = get_internal_image(999);
            images_dialogPanel_24_24[0] = get_internal_image(1001);
            images_dialogPanel_25_0[0] = get_internal_image(1459);
            images_dialogPanel_25_16[0] = get_internal_image(1463);
            images_dialogPanel_25_16[1] = get_internal_image(1465);
            images_dialogPanel_26_0[0] = get_internal_image(613);
            images_dialogPanel_27_0[0] = get_internal_image(51);
            images_dialogPanel_28_0[0] = get_internal_image(971);
            images_dialogPanel_28_16[0] = get_internal_image(2564);
            images_dialogPanel_29_0[0] = get_internal_image(1435);
            images_dialogPanel_29_2[0] = get_internal_image(2879);
            images_dialogPanel_29_4[0] = get_internal_image(2875);
            images_dialogPanel_29_8[0] = get_internal_image(1450);
            images_dialogPanel_29_8[1] = get_internal_image(1449);
            images_dialogPanel_29_12[0] = get_internal_image(2495);
            images_dialogPanel_29_12[1] = get_internal_image(2512);
            images_dialogPanel_29_16[0] = get_internal_image(1045);
            images_dialogPanel_29_20[0] = get_internal_image(1292);
            images_dialogPanel_29_24[0] = get_internal_image(1436);
            images_dialogPanel_29_26[0] = get_internal_image(3327);
            images_dialogPanel_29_28[0] = get_internal_image(2502);
            images_dialogPanel_29_30[0] = get_internal_image(3209);
            images_dialogPanel_30_0[0] = get_internal_image(2501);
            images_dialogPanel_31_0[0] = get_internal_image(2501);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_dialogPanel(int x, int y)
{
    return new (Active::pool.create()) DialogPanel(x, y);
}
static Image* images_scan_187_0_0[1];
static Direction direction_scan_187_0_0 = {0, 50, 50, 0, 1, images_scan_187_0_0, 1};
static Animation anim_scan_187_0 = {&direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, NULL, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0, &direction_scan_187_0_0};
static Animation * anim_array_scan_187[1] = {&anim_scan_187_0};
static Animations anim_scan_187 = {1, &anim_array_scan_187[0]};
static bool anim_scan_187_initialized;
class Scan_187 : public Active
{
public:
    Scan_187(int x, int y) : Active(x, y, Scan_187_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Scan", 4);
#endif
        set_visible(false);
        this->animations = &anim_scan_187;
        if (!anim_scan_187_initialized) {
            anim_scan_187_initialized = true;
            images_scan_187_0_0[0] = get_internal_image(193);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_scan_187(int x, int y)
{
    return new (Active::pool.create()) Scan_187(x, y);
}
class LessonTimerText : public Text
{
public:
    LessonTimerText(int x, int y) : Text(x, y, lessonTimerText_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("time - lesson", 13);
#endif
        flags &= ~SCROLL;
        width = 231;
        height = 11;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("Text\r\nhere", 10));
        blend_color.a = 255;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(35, 35, 35, 255));
        create_alterables();
    }
};
FrameObject * create_lessonTimerText(int x, int y)
{
    return new (Text::pool.create()) LessonTimerText(x, y);
}
static Image* images_waypointrollcall2_189_0_0[1];
static Direction direction_waypointrollcall2_189_0_0 = {0, 50, 50, 0, 1, images_waypointrollcall2_189_0_0, 1};
static Animation anim_waypointrollcall2_189_0 = {&direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, NULL, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0, &direction_waypointrollcall2_189_0_0};
static Animation * anim_array_waypointrollcall2_189[1] = {&anim_waypointrollcall2_189_0};
static Animations anim_waypointrollcall2_189 = {1, &anim_array_waypointrollcall2_189[0]};
static bool anim_waypointrollcall2_189_initialized;
class WaypointRollcall2_189 : public Active
{
public:
    WaypointRollcall2_189(int x, int y) : Active(x, y, WaypointRollcall2_189_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Rollcall 2", 21);
#endif
        set_visible(false);
        this->animations = &anim_waypointrollcall2_189;
        if (!anim_waypointrollcall2_189_initialized) {
            anim_waypointrollcall2_189_initialized = true;
            images_waypointrollcall2_189_0_0[0] = get_internal_image(887);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointrollcall2_189(int x, int y)
{
    return new (Active::pool.create()) WaypointRollcall2_189(x, y);
}
static Image* images_inmate2_190_0_0[2];
static Direction direction_inmate2_190_0_0 = {0, 10, 10, 0, -1, images_inmate2_190_0_0, 2};
static Image* images_inmate2_190_0_8[2];
static Direction direction_inmate2_190_0_8 = {8, 10, 10, 0, -1, images_inmate2_190_0_8, 2};
static Image* images_inmate2_190_0_16[2];
static Direction direction_inmate2_190_0_16 = {16, 10, 10, 0, -1, images_inmate2_190_0_16, 2};
static Image* images_inmate2_190_0_24[2];
static Direction direction_inmate2_190_0_24 = {24, 10, 10, 0, -1, images_inmate2_190_0_24, 2};
static Animation anim_inmate2_190_0 = {&direction_inmate2_190_0_0, &direction_inmate2_190_0_0, &direction_inmate2_190_0_0, &direction_inmate2_190_0_0, NULL, &direction_inmate2_190_0_8, &direction_inmate2_190_0_8, &direction_inmate2_190_0_8, &direction_inmate2_190_0_8, &direction_inmate2_190_0_8, &direction_inmate2_190_0_8, &direction_inmate2_190_0_8, NULL, &direction_inmate2_190_0_16, &direction_inmate2_190_0_16, &direction_inmate2_190_0_16, &direction_inmate2_190_0_16, &direction_inmate2_190_0_16, &direction_inmate2_190_0_16, &direction_inmate2_190_0_16, NULL, &direction_inmate2_190_0_24, &direction_inmate2_190_0_24, &direction_inmate2_190_0_24, &direction_inmate2_190_0_24, &direction_inmate2_190_0_24, &direction_inmate2_190_0_24, &direction_inmate2_190_0_24, NULL, &direction_inmate2_190_0_0, &direction_inmate2_190_0_0, &direction_inmate2_190_0_0};
static Image* images_inmate2_190_4_0[4];
static Direction direction_inmate2_190_4_0 = {0, 20, 20, 0, 1, images_inmate2_190_4_0, 4};
static Image* images_inmate2_190_4_16[4];
static Direction direction_inmate2_190_4_16 = {16, 20, 20, 0, 1, images_inmate2_190_4_16, 4};
static Animation anim_inmate2_190_4 = {&direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, NULL, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, &direction_inmate2_190_4_16, NULL, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0, &direction_inmate2_190_4_0};
static Image* images_inmate2_190_6_0[1];
static Direction direction_inmate2_190_6_0 = {0, 6, 6, 0, 1, images_inmate2_190_6_0, 1};
static Image* images_inmate2_190_6_8[1];
static Direction direction_inmate2_190_6_8 = {8, 6, 6, 0, 1, images_inmate2_190_6_8, 1};
static Image* images_inmate2_190_6_16[1];
static Direction direction_inmate2_190_6_16 = {16, 6, 6, 0, 1, images_inmate2_190_6_16, 1};
static Image* images_inmate2_190_6_24[1];
static Direction direction_inmate2_190_6_24 = {24, 6, 6, 0, 1, images_inmate2_190_6_24, 1};
static Animation anim_inmate2_190_6 = {&direction_inmate2_190_6_0, &direction_inmate2_190_6_0, &direction_inmate2_190_6_0, &direction_inmate2_190_6_0, NULL, &direction_inmate2_190_6_8, &direction_inmate2_190_6_8, &direction_inmate2_190_6_8, &direction_inmate2_190_6_8, &direction_inmate2_190_6_8, &direction_inmate2_190_6_8, &direction_inmate2_190_6_8, NULL, &direction_inmate2_190_6_16, &direction_inmate2_190_6_16, &direction_inmate2_190_6_16, &direction_inmate2_190_6_16, &direction_inmate2_190_6_16, &direction_inmate2_190_6_16, &direction_inmate2_190_6_16, NULL, &direction_inmate2_190_6_24, &direction_inmate2_190_6_24, &direction_inmate2_190_6_24, &direction_inmate2_190_6_24, &direction_inmate2_190_6_24, &direction_inmate2_190_6_24, &direction_inmate2_190_6_24, NULL, &direction_inmate2_190_6_0, &direction_inmate2_190_6_0, &direction_inmate2_190_6_0};
static Image* images_inmate2_190_8_0[1];
static Direction direction_inmate2_190_8_0 = {0, 10, 10, 0, -1, images_inmate2_190_8_0, 1};
static Image* images_inmate2_190_8_16[2];
static Direction direction_inmate2_190_8_16 = {16, 5, 5, 0, -1, images_inmate2_190_8_16, 2};
static Image* images_inmate2_190_8_24[1];
static Direction direction_inmate2_190_8_24 = {24, 10, 10, 0, -1, images_inmate2_190_8_24, 1};
static Animation anim_inmate2_190_8 = {&direction_inmate2_190_8_0, &direction_inmate2_190_8_0, &direction_inmate2_190_8_0, &direction_inmate2_190_8_0, &direction_inmate2_190_8_0, &direction_inmate2_190_8_0, &direction_inmate2_190_8_0, &direction_inmate2_190_8_0, NULL, &direction_inmate2_190_8_16, &direction_inmate2_190_8_16, &direction_inmate2_190_8_16, &direction_inmate2_190_8_16, &direction_inmate2_190_8_16, &direction_inmate2_190_8_16, &direction_inmate2_190_8_16, &direction_inmate2_190_8_16, &direction_inmate2_190_8_16, &direction_inmate2_190_8_16, &direction_inmate2_190_8_16, NULL, &direction_inmate2_190_8_24, &direction_inmate2_190_8_24, &direction_inmate2_190_8_24, &direction_inmate2_190_8_24, &direction_inmate2_190_8_24, &direction_inmate2_190_8_24, &direction_inmate2_190_8_24, NULL, &direction_inmate2_190_8_0, &direction_inmate2_190_8_0, &direction_inmate2_190_8_0};
static Image* images_inmate2_190_9_0[2];
static Direction direction_inmate2_190_9_0 = {0, 5, 5, 0, -1, images_inmate2_190_9_0, 2};
static Animation anim_inmate2_190_9 = {&direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, NULL, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0, &direction_inmate2_190_9_0};
static Image* images_inmate2_190_10_0[5];
static Direction direction_inmate2_190_10_0 = {0, 10, 10, 0, -1, images_inmate2_190_10_0, 5};
static Animation anim_inmate2_190_10 = {&direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, NULL, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0, &direction_inmate2_190_10_0};
static Image* images_inmate2_190_11_0[2];
static Direction direction_inmate2_190_11_0 = {0, 6, 6, 0, -1, images_inmate2_190_11_0, 2};
static Image* images_inmate2_190_11_8[2];
static Direction direction_inmate2_190_11_8 = {8, 6, 6, 0, -1, images_inmate2_190_11_8, 2};
static Image* images_inmate2_190_11_16[2];
static Direction direction_inmate2_190_11_16 = {16, 6, 6, 0, -1, images_inmate2_190_11_16, 2};
static Image* images_inmate2_190_11_24[2];
static Direction direction_inmate2_190_11_24 = {24, 6, 6, 0, -1, images_inmate2_190_11_24, 2};
static Animation anim_inmate2_190_11 = {&direction_inmate2_190_11_0, &direction_inmate2_190_11_0, &direction_inmate2_190_11_0, &direction_inmate2_190_11_0, NULL, &direction_inmate2_190_11_8, &direction_inmate2_190_11_8, &direction_inmate2_190_11_8, &direction_inmate2_190_11_8, &direction_inmate2_190_11_8, &direction_inmate2_190_11_8, &direction_inmate2_190_11_8, NULL, &direction_inmate2_190_11_16, &direction_inmate2_190_11_16, &direction_inmate2_190_11_16, &direction_inmate2_190_11_16, &direction_inmate2_190_11_16, &direction_inmate2_190_11_16, &direction_inmate2_190_11_16, NULL, &direction_inmate2_190_11_24, &direction_inmate2_190_11_24, &direction_inmate2_190_11_24, &direction_inmate2_190_11_24, &direction_inmate2_190_11_24, &direction_inmate2_190_11_24, &direction_inmate2_190_11_24, NULL, &direction_inmate2_190_11_0, &direction_inmate2_190_11_0, &direction_inmate2_190_11_0};
static Image* images_inmate2_190_18_24[8];
static Direction direction_inmate2_190_18_24 = {24, 10, 10, 0, -1, images_inmate2_190_18_24, 8};
static Animation anim_inmate2_190_18 = {&direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, NULL, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24, &direction_inmate2_190_18_24};
static Image* images_inmate2_190_19_24[6];
static Direction direction_inmate2_190_19_24 = {24, 10, 10, 0, -1, images_inmate2_190_19_24, 6};
static Animation anim_inmate2_190_19 = {&direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, NULL, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24, &direction_inmate2_190_19_24};
static Animation * anim_array_inmate2_190[20] = {&anim_inmate2_190_0, NULL, NULL, NULL, &anim_inmate2_190_4, NULL, &anim_inmate2_190_6, NULL, &anim_inmate2_190_8, &anim_inmate2_190_9, &anim_inmate2_190_10, &anim_inmate2_190_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate2_190_18, &anim_inmate2_190_19};
static Animations anim_inmate2_190 = {20, &anim_array_inmate2_190[0]};
static bool anim_inmate2_190_initialized;
class Inmate2_190 : public Active
{
public:
    Inmate2_190(int x, int y) : Active(x, y, Inmate2_190_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 2", 8);
#endif
        this->animations = &anim_inmate2_190;
        if (!anim_inmate2_190_initialized) {
            anim_inmate2_190_initialized = true;
            images_inmate2_190_0_0[0] = get_internal_image(414);
            images_inmate2_190_0_0[1] = get_internal_image(609);
            images_inmate2_190_0_8[0] = get_internal_image(638);
            images_inmate2_190_0_8[1] = get_internal_image(639);
            images_inmate2_190_0_16[0] = get_internal_image(363);
            images_inmate2_190_0_16[1] = get_internal_image(622);
            images_inmate2_190_0_24[0] = get_internal_image(637);
            images_inmate2_190_0_24[1] = get_internal_image(624);
            images_inmate2_190_4_0[0] = get_internal_image(369);
            images_inmate2_190_4_0[1] = get_internal_image(373);
            images_inmate2_190_4_0[2] = get_internal_image(369);
            images_inmate2_190_4_0[3] = get_internal_image(373);
            images_inmate2_190_4_16[0] = get_internal_image(371);
            images_inmate2_190_4_16[1] = get_internal_image(763);
            images_inmate2_190_4_16[2] = get_internal_image(371);
            images_inmate2_190_4_16[3] = get_internal_image(763);
            images_inmate2_190_6_0[0] = get_internal_image(167);
            images_inmate2_190_6_8[0] = get_internal_image(793);
            images_inmate2_190_6_16[0] = get_internal_image(258);
            images_inmate2_190_6_24[0] = get_internal_image(788);
            images_inmate2_190_8_0[0] = get_internal_image(2478);
            images_inmate2_190_8_16[0] = get_internal_image(643);
            images_inmate2_190_8_16[1] = get_internal_image(655);
            images_inmate2_190_8_24[0] = get_internal_image(2469);
            images_inmate2_190_9_0[0] = get_internal_image(1505);
            images_inmate2_190_9_0[1] = get_internal_image(1504);
            images_inmate2_190_10_0[0] = get_internal_image(3240);
            images_inmate2_190_10_0[1] = get_internal_image(3254);
            images_inmate2_190_10_0[2] = get_internal_image(3258);
            images_inmate2_190_10_0[3] = get_internal_image(3258);
            images_inmate2_190_10_0[4] = get_internal_image(3259);
            images_inmate2_190_11_0[0] = get_internal_image(676);
            images_inmate2_190_11_0[1] = get_internal_image(969);
            images_inmate2_190_11_8[0] = get_internal_image(1089);
            images_inmate2_190_11_8[1] = get_internal_image(1091);
            images_inmate2_190_11_16[0] = get_internal_image(248);
            images_inmate2_190_11_16[1] = get_internal_image(1082);
            images_inmate2_190_11_24[0] = get_internal_image(605);
            images_inmate2_190_11_24[1] = get_internal_image(732);
            images_inmate2_190_18_24[0] = get_internal_image(2089);
            images_inmate2_190_18_24[1] = get_internal_image(2105);
            images_inmate2_190_18_24[2] = get_internal_image(2104);
            images_inmate2_190_18_24[3] = get_internal_image(2100);
            images_inmate2_190_18_24[4] = get_internal_image(2101);
            images_inmate2_190_18_24[5] = get_internal_image(2106);
            images_inmate2_190_18_24[6] = get_internal_image(2103);
            images_inmate2_190_18_24[7] = get_internal_image(2102);
            images_inmate2_190_19_24[0] = get_internal_image(2153);
            images_inmate2_190_19_24[1] = get_internal_image(2154);
            images_inmate2_190_19_24[2] = get_internal_image(2155);
            images_inmate2_190_19_24[3] = get_internal_image(2155);
            images_inmate2_190_19_24[4] = get_internal_image(2154);
            images_inmate2_190_19_24[5] = get_internal_image(2153);
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
FrameObject * create_inmate2_190(int x, int y)
{
    return new (Active::pool.create()) Inmate2_190(x, y);
}
class PathFindingInmates_191 : public PathPlanner
{
public:
    PathFindingInmates_191(int x, int y) : PathPlanner(x, y, PathFindingInmates_191_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PathFinding - Inmates", 21);
#endif
        tile_size = 16;
        map_width = 141;
        map_height = 110;
        create_map();
    }
};
FrameObject * create_pathfindinginmates_191(int x, int y)
{
    return new (PathPlanner::pool.create()) PathFindingInmates_191(x, y);
}
static Image* images_inmate3_192_0_0[2];
static Direction direction_inmate3_192_0_0 = {0, 10, 10, 0, -1, images_inmate3_192_0_0, 2};
static Image* images_inmate3_192_0_8[2];
static Direction direction_inmate3_192_0_8 = {8, 10, 10, 0, -1, images_inmate3_192_0_8, 2};
static Image* images_inmate3_192_0_16[2];
static Direction direction_inmate3_192_0_16 = {16, 10, 10, 0, -1, images_inmate3_192_0_16, 2};
static Image* images_inmate3_192_0_24[2];
static Direction direction_inmate3_192_0_24 = {24, 10, 10, 0, -1, images_inmate3_192_0_24, 2};
static Animation anim_inmate3_192_0 = {&direction_inmate3_192_0_0, &direction_inmate3_192_0_0, &direction_inmate3_192_0_0, &direction_inmate3_192_0_0, NULL, &direction_inmate3_192_0_8, &direction_inmate3_192_0_8, &direction_inmate3_192_0_8, &direction_inmate3_192_0_8, &direction_inmate3_192_0_8, &direction_inmate3_192_0_8, &direction_inmate3_192_0_8, NULL, &direction_inmate3_192_0_16, &direction_inmate3_192_0_16, &direction_inmate3_192_0_16, &direction_inmate3_192_0_16, &direction_inmate3_192_0_16, &direction_inmate3_192_0_16, &direction_inmate3_192_0_16, NULL, &direction_inmate3_192_0_24, &direction_inmate3_192_0_24, &direction_inmate3_192_0_24, &direction_inmate3_192_0_24, &direction_inmate3_192_0_24, &direction_inmate3_192_0_24, &direction_inmate3_192_0_24, NULL, &direction_inmate3_192_0_0, &direction_inmate3_192_0_0, &direction_inmate3_192_0_0};
static Image* images_inmate3_192_4_0[4];
static Direction direction_inmate3_192_4_0 = {0, 20, 20, 0, 1, images_inmate3_192_4_0, 4};
static Image* images_inmate3_192_4_16[4];
static Direction direction_inmate3_192_4_16 = {16, 20, 20, 0, 1, images_inmate3_192_4_16, 4};
static Animation anim_inmate3_192_4 = {&direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, NULL, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, &direction_inmate3_192_4_16, NULL, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0, &direction_inmate3_192_4_0};
static Image* images_inmate3_192_6_0[1];
static Direction direction_inmate3_192_6_0 = {0, 6, 6, 0, 1, images_inmate3_192_6_0, 1};
static Image* images_inmate3_192_6_8[1];
static Direction direction_inmate3_192_6_8 = {8, 6, 6, 0, 1, images_inmate3_192_6_8, 1};
static Image* images_inmate3_192_6_16[1];
static Direction direction_inmate3_192_6_16 = {16, 6, 6, 0, 1, images_inmate3_192_6_16, 1};
static Image* images_inmate3_192_6_24[1];
static Direction direction_inmate3_192_6_24 = {24, 6, 6, 0, 1, images_inmate3_192_6_24, 1};
static Animation anim_inmate3_192_6 = {&direction_inmate3_192_6_0, &direction_inmate3_192_6_0, &direction_inmate3_192_6_0, &direction_inmate3_192_6_0, NULL, &direction_inmate3_192_6_8, &direction_inmate3_192_6_8, &direction_inmate3_192_6_8, &direction_inmate3_192_6_8, &direction_inmate3_192_6_8, &direction_inmate3_192_6_8, &direction_inmate3_192_6_8, NULL, &direction_inmate3_192_6_16, &direction_inmate3_192_6_16, &direction_inmate3_192_6_16, &direction_inmate3_192_6_16, &direction_inmate3_192_6_16, &direction_inmate3_192_6_16, &direction_inmate3_192_6_16, NULL, &direction_inmate3_192_6_24, &direction_inmate3_192_6_24, &direction_inmate3_192_6_24, &direction_inmate3_192_6_24, &direction_inmate3_192_6_24, &direction_inmate3_192_6_24, &direction_inmate3_192_6_24, NULL, &direction_inmate3_192_6_0, &direction_inmate3_192_6_0, &direction_inmate3_192_6_0};
static Image* images_inmate3_192_8_0[1];
static Direction direction_inmate3_192_8_0 = {0, 10, 10, 0, -1, images_inmate3_192_8_0, 1};
static Image* images_inmate3_192_8_16[2];
static Direction direction_inmate3_192_8_16 = {16, 5, 5, 0, -1, images_inmate3_192_8_16, 2};
static Image* images_inmate3_192_8_24[3];
static Direction direction_inmate3_192_8_24 = {24, 10, 10, 0, -1, images_inmate3_192_8_24, 3};
static Animation anim_inmate3_192_8 = {&direction_inmate3_192_8_0, &direction_inmate3_192_8_0, &direction_inmate3_192_8_0, &direction_inmate3_192_8_0, &direction_inmate3_192_8_0, &direction_inmate3_192_8_0, &direction_inmate3_192_8_0, &direction_inmate3_192_8_0, NULL, &direction_inmate3_192_8_16, &direction_inmate3_192_8_16, &direction_inmate3_192_8_16, &direction_inmate3_192_8_16, &direction_inmate3_192_8_16, &direction_inmate3_192_8_16, &direction_inmate3_192_8_16, &direction_inmate3_192_8_16, &direction_inmate3_192_8_16, &direction_inmate3_192_8_16, &direction_inmate3_192_8_16, NULL, &direction_inmate3_192_8_24, &direction_inmate3_192_8_24, &direction_inmate3_192_8_24, &direction_inmate3_192_8_24, &direction_inmate3_192_8_24, &direction_inmate3_192_8_24, &direction_inmate3_192_8_24, NULL, &direction_inmate3_192_8_0, &direction_inmate3_192_8_0, &direction_inmate3_192_8_0};
static Image* images_inmate3_192_9_0[2];
static Direction direction_inmate3_192_9_0 = {0, 5, 5, 0, -1, images_inmate3_192_9_0, 2};
static Animation anim_inmate3_192_9 = {&direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, NULL, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0, &direction_inmate3_192_9_0};
static Image* images_inmate3_192_10_0[5];
static Direction direction_inmate3_192_10_0 = {0, 10, 10, 0, -1, images_inmate3_192_10_0, 5};
static Animation anim_inmate3_192_10 = {&direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, NULL, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0, &direction_inmate3_192_10_0};
static Image* images_inmate3_192_11_0[2];
static Direction direction_inmate3_192_11_0 = {0, 6, 6, 0, -1, images_inmate3_192_11_0, 2};
static Image* images_inmate3_192_11_8[2];
static Direction direction_inmate3_192_11_8 = {8, 6, 6, 0, -1, images_inmate3_192_11_8, 2};
static Image* images_inmate3_192_11_16[2];
static Direction direction_inmate3_192_11_16 = {16, 6, 6, 0, -1, images_inmate3_192_11_16, 2};
static Image* images_inmate3_192_11_24[2];
static Direction direction_inmate3_192_11_24 = {24, 6, 6, 0, -1, images_inmate3_192_11_24, 2};
static Animation anim_inmate3_192_11 = {&direction_inmate3_192_11_0, &direction_inmate3_192_11_0, &direction_inmate3_192_11_0, &direction_inmate3_192_11_0, NULL, &direction_inmate3_192_11_8, &direction_inmate3_192_11_8, &direction_inmate3_192_11_8, &direction_inmate3_192_11_8, &direction_inmate3_192_11_8, &direction_inmate3_192_11_8, &direction_inmate3_192_11_8, NULL, &direction_inmate3_192_11_16, &direction_inmate3_192_11_16, &direction_inmate3_192_11_16, &direction_inmate3_192_11_16, &direction_inmate3_192_11_16, &direction_inmate3_192_11_16, &direction_inmate3_192_11_16, NULL, &direction_inmate3_192_11_24, &direction_inmate3_192_11_24, &direction_inmate3_192_11_24, &direction_inmate3_192_11_24, &direction_inmate3_192_11_24, &direction_inmate3_192_11_24, &direction_inmate3_192_11_24, NULL, &direction_inmate3_192_11_0, &direction_inmate3_192_11_0, &direction_inmate3_192_11_0};
static Image* images_inmate3_192_18_24[8];
static Direction direction_inmate3_192_18_24 = {24, 10, 10, 0, -1, images_inmate3_192_18_24, 8};
static Animation anim_inmate3_192_18 = {&direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, NULL, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24, &direction_inmate3_192_18_24};
static Image* images_inmate3_192_19_24[6];
static Direction direction_inmate3_192_19_24 = {24, 10, 10, 0, -1, images_inmate3_192_19_24, 6};
static Animation anim_inmate3_192_19 = {&direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, NULL, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24, &direction_inmate3_192_19_24};
static Animation * anim_array_inmate3_192[20] = {&anim_inmate3_192_0, NULL, NULL, NULL, &anim_inmate3_192_4, NULL, &anim_inmate3_192_6, NULL, &anim_inmate3_192_8, &anim_inmate3_192_9, &anim_inmate3_192_10, &anim_inmate3_192_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate3_192_18, &anim_inmate3_192_19};
static Animations anim_inmate3_192 = {20, &anim_array_inmate3_192[0]};
static bool anim_inmate3_192_initialized;
class Inmate3_192 : public Active
{
public:
    Inmate3_192(int x, int y) : Active(x, y, Inmate3_192_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 3", 8);
#endif
        this->animations = &anim_inmate3_192;
        if (!anim_inmate3_192_initialized) {
            anim_inmate3_192_initialized = true;
            images_inmate3_192_0_0[0] = get_internal_image(574);
            images_inmate3_192_0_0[1] = get_internal_image(575);
            images_inmate3_192_0_8[0] = get_internal_image(552);
            images_inmate3_192_0_8[1] = get_internal_image(553);
            images_inmate3_192_0_16[0] = get_internal_image(573);
            images_inmate3_192_0_16[1] = get_internal_image(576);
            images_inmate3_192_0_24[0] = get_internal_image(550);
            images_inmate3_192_0_24[1] = get_internal_image(551);
            images_inmate3_192_4_0[0] = get_internal_image(369);
            images_inmate3_192_4_0[1] = get_internal_image(373);
            images_inmate3_192_4_0[2] = get_internal_image(369);
            images_inmate3_192_4_0[3] = get_internal_image(373);
            images_inmate3_192_4_16[0] = get_internal_image(371);
            images_inmate3_192_4_16[1] = get_internal_image(763);
            images_inmate3_192_4_16[2] = get_internal_image(371);
            images_inmate3_192_4_16[3] = get_internal_image(763);
            images_inmate3_192_6_0[0] = get_internal_image(803);
            images_inmate3_192_6_8[0] = get_internal_image(1066);
            images_inmate3_192_6_16[0] = get_internal_image(804);
            images_inmate3_192_6_24[0] = get_internal_image(1071);
            images_inmate3_192_8_0[0] = get_internal_image(2479);
            images_inmate3_192_8_16[0] = get_internal_image(652);
            images_inmate3_192_8_16[1] = get_internal_image(653);
            images_inmate3_192_8_24[0] = get_internal_image(1177);
            images_inmate3_192_8_24[1] = get_internal_image(224);
            images_inmate3_192_8_24[2] = get_internal_image(453);
            images_inmate3_192_9_0[0] = get_internal_image(1019);
            images_inmate3_192_9_0[1] = get_internal_image(1488);
            images_inmate3_192_10_0[0] = get_internal_image(579);
            images_inmate3_192_10_0[1] = get_internal_image(580);
            images_inmate3_192_10_0[2] = get_internal_image(581);
            images_inmate3_192_10_0[3] = get_internal_image(583);
            images_inmate3_192_10_0[4] = get_internal_image(580);
            images_inmate3_192_11_0[0] = get_internal_image(1188);
            images_inmate3_192_11_0[1] = get_internal_image(1218);
            images_inmate3_192_11_8[0] = get_internal_image(588);
            images_inmate3_192_11_8[1] = get_internal_image(589);
            images_inmate3_192_11_16[0] = get_internal_image(1219);
            images_inmate3_192_11_16[1] = get_internal_image(1220);
            images_inmate3_192_11_24[0] = get_internal_image(599);
            images_inmate3_192_11_24[1] = get_internal_image(104);
            images_inmate3_192_18_24[0] = get_internal_image(2096);
            images_inmate3_192_18_24[1] = get_internal_image(2098);
            images_inmate3_192_18_24[2] = get_internal_image(2097);
            images_inmate3_192_18_24[3] = get_internal_image(2093);
            images_inmate3_192_18_24[4] = get_internal_image(2094);
            images_inmate3_192_18_24[5] = get_internal_image(2092);
            images_inmate3_192_18_24[6] = get_internal_image(2097);
            images_inmate3_192_18_24[7] = get_internal_image(2095);
            images_inmate3_192_19_24[0] = get_internal_image(2152);
            images_inmate3_192_19_24[1] = get_internal_image(2151);
            images_inmate3_192_19_24[2] = get_internal_image(2148);
            images_inmate3_192_19_24[3] = get_internal_image(2148);
            images_inmate3_192_19_24[4] = get_internal_image(2151);
            images_inmate3_192_19_24[5] = get_internal_image(2152);
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
FrameObject * create_inmate3_192(int x, int y)
{
    return new (Active::pool.create()) Inmate3_192(x, y);
}
static Image* images_inmate4_193_0_0[2];
static Direction direction_inmate4_193_0_0 = {0, 10, 10, 0, -1, images_inmate4_193_0_0, 2};
static Image* images_inmate4_193_0_8[2];
static Direction direction_inmate4_193_0_8 = {8, 10, 10, 0, -1, images_inmate4_193_0_8, 2};
static Image* images_inmate4_193_0_16[2];
static Direction direction_inmate4_193_0_16 = {16, 10, 10, 0, -1, images_inmate4_193_0_16, 2};
static Image* images_inmate4_193_0_24[2];
static Direction direction_inmate4_193_0_24 = {24, 10, 10, 0, -1, images_inmate4_193_0_24, 2};
static Animation anim_inmate4_193_0 = {&direction_inmate4_193_0_0, &direction_inmate4_193_0_0, &direction_inmate4_193_0_0, &direction_inmate4_193_0_0, NULL, &direction_inmate4_193_0_8, &direction_inmate4_193_0_8, &direction_inmate4_193_0_8, &direction_inmate4_193_0_8, &direction_inmate4_193_0_8, &direction_inmate4_193_0_8, &direction_inmate4_193_0_8, NULL, &direction_inmate4_193_0_16, &direction_inmate4_193_0_16, &direction_inmate4_193_0_16, &direction_inmate4_193_0_16, &direction_inmate4_193_0_16, &direction_inmate4_193_0_16, &direction_inmate4_193_0_16, NULL, &direction_inmate4_193_0_24, &direction_inmate4_193_0_24, &direction_inmate4_193_0_24, &direction_inmate4_193_0_24, &direction_inmate4_193_0_24, &direction_inmate4_193_0_24, &direction_inmate4_193_0_24, NULL, &direction_inmate4_193_0_0, &direction_inmate4_193_0_0, &direction_inmate4_193_0_0};
static Image* images_inmate4_193_4_0[4];
static Direction direction_inmate4_193_4_0 = {0, 20, 20, 0, 1, images_inmate4_193_4_0, 4};
static Image* images_inmate4_193_4_16[4];
static Direction direction_inmate4_193_4_16 = {16, 20, 20, 0, 1, images_inmate4_193_4_16, 4};
static Animation anim_inmate4_193_4 = {&direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, NULL, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, &direction_inmate4_193_4_16, NULL, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0, &direction_inmate4_193_4_0};
static Image* images_inmate4_193_6_0[1];
static Direction direction_inmate4_193_6_0 = {0, 6, 6, 0, 1, images_inmate4_193_6_0, 1};
static Image* images_inmate4_193_6_8[1];
static Direction direction_inmate4_193_6_8 = {8, 6, 6, 0, 1, images_inmate4_193_6_8, 1};
static Image* images_inmate4_193_6_16[1];
static Direction direction_inmate4_193_6_16 = {16, 6, 6, 0, 1, images_inmate4_193_6_16, 1};
static Image* images_inmate4_193_6_24[1];
static Direction direction_inmate4_193_6_24 = {24, 6, 6, 0, 1, images_inmate4_193_6_24, 1};
static Animation anim_inmate4_193_6 = {&direction_inmate4_193_6_0, &direction_inmate4_193_6_0, &direction_inmate4_193_6_0, &direction_inmate4_193_6_0, NULL, &direction_inmate4_193_6_8, &direction_inmate4_193_6_8, &direction_inmate4_193_6_8, &direction_inmate4_193_6_8, &direction_inmate4_193_6_8, &direction_inmate4_193_6_8, &direction_inmate4_193_6_8, NULL, &direction_inmate4_193_6_16, &direction_inmate4_193_6_16, &direction_inmate4_193_6_16, &direction_inmate4_193_6_16, &direction_inmate4_193_6_16, &direction_inmate4_193_6_16, &direction_inmate4_193_6_16, NULL, &direction_inmate4_193_6_24, &direction_inmate4_193_6_24, &direction_inmate4_193_6_24, &direction_inmate4_193_6_24, &direction_inmate4_193_6_24, &direction_inmate4_193_6_24, &direction_inmate4_193_6_24, NULL, &direction_inmate4_193_6_0, &direction_inmate4_193_6_0, &direction_inmate4_193_6_0};
static Image* images_inmate4_193_8_0[1];
static Direction direction_inmate4_193_8_0 = {0, 10, 10, 0, -1, images_inmate4_193_8_0, 1};
static Image* images_inmate4_193_8_16[2];
static Direction direction_inmate4_193_8_16 = {16, 5, 5, 0, -1, images_inmate4_193_8_16, 2};
static Image* images_inmate4_193_8_24[1];
static Direction direction_inmate4_193_8_24 = {24, 10, 10, 0, -1, images_inmate4_193_8_24, 1};
static Animation anim_inmate4_193_8 = {&direction_inmate4_193_8_0, &direction_inmate4_193_8_0, &direction_inmate4_193_8_0, &direction_inmate4_193_8_0, &direction_inmate4_193_8_0, &direction_inmate4_193_8_0, &direction_inmate4_193_8_0, &direction_inmate4_193_8_0, NULL, &direction_inmate4_193_8_16, &direction_inmate4_193_8_16, &direction_inmate4_193_8_16, &direction_inmate4_193_8_16, &direction_inmate4_193_8_16, &direction_inmate4_193_8_16, &direction_inmate4_193_8_16, &direction_inmate4_193_8_16, &direction_inmate4_193_8_16, &direction_inmate4_193_8_16, &direction_inmate4_193_8_16, NULL, &direction_inmate4_193_8_24, &direction_inmate4_193_8_24, &direction_inmate4_193_8_24, &direction_inmate4_193_8_24, &direction_inmate4_193_8_24, &direction_inmate4_193_8_24, &direction_inmate4_193_8_24, NULL, &direction_inmate4_193_8_0, &direction_inmate4_193_8_0, &direction_inmate4_193_8_0};
static Image* images_inmate4_193_9_0[2];
static Direction direction_inmate4_193_9_0 = {0, 5, 5, 0, -1, images_inmate4_193_9_0, 2};
static Animation anim_inmate4_193_9 = {&direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, NULL, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0, &direction_inmate4_193_9_0};
static Image* images_inmate4_193_10_0[5];
static Direction direction_inmate4_193_10_0 = {0, 10, 10, 0, -1, images_inmate4_193_10_0, 5};
static Animation anim_inmate4_193_10 = {&direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, NULL, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0, &direction_inmate4_193_10_0};
static Image* images_inmate4_193_11_0[2];
static Direction direction_inmate4_193_11_0 = {0, 10, 10, 0, -1, images_inmate4_193_11_0, 2};
static Image* images_inmate4_193_11_8[2];
static Direction direction_inmate4_193_11_8 = {8, 10, 10, 0, -1, images_inmate4_193_11_8, 2};
static Image* images_inmate4_193_11_16[2];
static Direction direction_inmate4_193_11_16 = {16, 10, 10, 0, -1, images_inmate4_193_11_16, 2};
static Image* images_inmate4_193_11_24[2];
static Direction direction_inmate4_193_11_24 = {24, 10, 10, 0, -1, images_inmate4_193_11_24, 2};
static Animation anim_inmate4_193_11 = {&direction_inmate4_193_11_0, &direction_inmate4_193_11_0, &direction_inmate4_193_11_0, &direction_inmate4_193_11_0, NULL, &direction_inmate4_193_11_8, &direction_inmate4_193_11_8, &direction_inmate4_193_11_8, &direction_inmate4_193_11_8, &direction_inmate4_193_11_8, &direction_inmate4_193_11_8, &direction_inmate4_193_11_8, NULL, &direction_inmate4_193_11_16, &direction_inmate4_193_11_16, &direction_inmate4_193_11_16, &direction_inmate4_193_11_16, &direction_inmate4_193_11_16, &direction_inmate4_193_11_16, &direction_inmate4_193_11_16, NULL, &direction_inmate4_193_11_24, &direction_inmate4_193_11_24, &direction_inmate4_193_11_24, &direction_inmate4_193_11_24, &direction_inmate4_193_11_24, &direction_inmate4_193_11_24, &direction_inmate4_193_11_24, NULL, &direction_inmate4_193_11_0, &direction_inmate4_193_11_0, &direction_inmate4_193_11_0};
static Image* images_inmate4_193_18_24[8];
static Direction direction_inmate4_193_18_24 = {24, 10, 10, 0, -1, images_inmate4_193_18_24, 8};
static Animation anim_inmate4_193_18 = {&direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, NULL, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24, &direction_inmate4_193_18_24};
static Image* images_inmate4_193_19_24[6];
static Direction direction_inmate4_193_19_24 = {24, 10, 10, 0, -1, images_inmate4_193_19_24, 6};
static Animation anim_inmate4_193_19 = {&direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, NULL, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24, &direction_inmate4_193_19_24};
static Animation * anim_array_inmate4_193[20] = {&anim_inmate4_193_0, NULL, NULL, NULL, &anim_inmate4_193_4, NULL, &anim_inmate4_193_6, NULL, &anim_inmate4_193_8, &anim_inmate4_193_9, &anim_inmate4_193_10, &anim_inmate4_193_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate4_193_18, &anim_inmate4_193_19};
static Animations anim_inmate4_193 = {20, &anim_array_inmate4_193[0]};
static bool anim_inmate4_193_initialized;
class Inmate4_193 : public Active
{
public:
    Inmate4_193(int x, int y) : Active(x, y, Inmate4_193_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 4", 8);
#endif
        this->animations = &anim_inmate4_193;
        if (!anim_inmate4_193_initialized) {
            anim_inmate4_193_initialized = true;
            images_inmate4_193_0_0[0] = get_internal_image(556);
            images_inmate4_193_0_0[1] = get_internal_image(558);
            images_inmate4_193_0_8[0] = get_internal_image(561);
            images_inmate4_193_0_8[1] = get_internal_image(563);
            images_inmate4_193_0_16[0] = get_internal_image(559);
            images_inmate4_193_0_16[1] = get_internal_image(557);
            images_inmate4_193_0_24[0] = get_internal_image(560);
            images_inmate4_193_0_24[1] = get_internal_image(562);
            images_inmate4_193_4_0[0] = get_internal_image(369);
            images_inmate4_193_4_0[1] = get_internal_image(373);
            images_inmate4_193_4_0[2] = get_internal_image(369);
            images_inmate4_193_4_0[3] = get_internal_image(373);
            images_inmate4_193_4_16[0] = get_internal_image(371);
            images_inmate4_193_4_16[1] = get_internal_image(763);
            images_inmate4_193_4_16[2] = get_internal_image(371);
            images_inmate4_193_4_16[3] = get_internal_image(763);
            images_inmate4_193_6_0[0] = get_internal_image(1072);
            images_inmate4_193_6_8[0] = get_internal_image(1061);
            images_inmate4_193_6_16[0] = get_internal_image(1074);
            images_inmate4_193_6_24[0] = get_internal_image(1016);
            images_inmate4_193_8_0[0] = get_internal_image(2480);
            images_inmate4_193_8_16[0] = get_internal_image(608);
            images_inmate4_193_8_16[1] = get_internal_image(744);
            images_inmate4_193_8_24[0] = get_internal_image(2468);
            images_inmate4_193_9_0[0] = get_internal_image(1490);
            images_inmate4_193_9_0[1] = get_internal_image(1491);
            images_inmate4_193_10_0[0] = get_internal_image(595);
            images_inmate4_193_10_0[1] = get_internal_image(493);
            images_inmate4_193_10_0[2] = get_internal_image(596);
            images_inmate4_193_10_0[3] = get_internal_image(596);
            images_inmate4_193_10_0[4] = get_internal_image(493);
            images_inmate4_193_11_0[0] = get_internal_image(535);
            images_inmate4_193_11_0[1] = get_internal_image(537);
            images_inmate4_193_11_8[0] = get_internal_image(742);
            images_inmate4_193_11_8[1] = get_internal_image(743);
            images_inmate4_193_11_16[0] = get_internal_image(539);
            images_inmate4_193_11_16[1] = get_internal_image(538);
            images_inmate4_193_11_24[0] = get_internal_image(165);
            images_inmate4_193_11_24[1] = get_internal_image(711);
            images_inmate4_193_18_24[0] = get_internal_image(1989);
            images_inmate4_193_18_24[1] = get_internal_image(1997);
            images_inmate4_193_18_24[2] = get_internal_image(2006);
            images_inmate4_193_18_24[3] = get_internal_image(2048);
            images_inmate4_193_18_24[4] = get_internal_image(2039);
            images_inmate4_193_18_24[5] = get_internal_image(2042);
            images_inmate4_193_18_24[6] = get_internal_image(2006);
            images_inmate4_193_18_24[7] = get_internal_image(2052);
            images_inmate4_193_19_24[0] = get_internal_image(2134);
            images_inmate4_193_19_24[1] = get_internal_image(2135);
            images_inmate4_193_19_24[2] = get_internal_image(2133);
            images_inmate4_193_19_24[3] = get_internal_image(2133);
            images_inmate4_193_19_24[4] = get_internal_image(2135);
            images_inmate4_193_19_24[5] = get_internal_image(2134);
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
FrameObject * create_inmate4_193(int x, int y)
{
    return new (Active::pool.create()) Inmate4_193(x, y);
}
static Image* images_inmate5_194_0_0[2];
static Direction direction_inmate5_194_0_0 = {0, 6, 6, 0, -1, images_inmate5_194_0_0, 2};
static Image* images_inmate5_194_0_8[2];
static Direction direction_inmate5_194_0_8 = {8, 6, 6, 0, -1, images_inmate5_194_0_8, 2};
static Image* images_inmate5_194_0_16[2];
static Direction direction_inmate5_194_0_16 = {16, 6, 6, 0, -1, images_inmate5_194_0_16, 2};
static Image* images_inmate5_194_0_24[2];
static Direction direction_inmate5_194_0_24 = {24, 6, 6, 0, -1, images_inmate5_194_0_24, 2};
static Animation anim_inmate5_194_0 = {&direction_inmate5_194_0_0, &direction_inmate5_194_0_0, &direction_inmate5_194_0_0, &direction_inmate5_194_0_0, NULL, &direction_inmate5_194_0_8, &direction_inmate5_194_0_8, &direction_inmate5_194_0_8, &direction_inmate5_194_0_8, &direction_inmate5_194_0_8, &direction_inmate5_194_0_8, &direction_inmate5_194_0_8, NULL, &direction_inmate5_194_0_16, &direction_inmate5_194_0_16, &direction_inmate5_194_0_16, &direction_inmate5_194_0_16, &direction_inmate5_194_0_16, &direction_inmate5_194_0_16, &direction_inmate5_194_0_16, NULL, &direction_inmate5_194_0_24, &direction_inmate5_194_0_24, &direction_inmate5_194_0_24, &direction_inmate5_194_0_24, &direction_inmate5_194_0_24, &direction_inmate5_194_0_24, &direction_inmate5_194_0_24, NULL, &direction_inmate5_194_0_0, &direction_inmate5_194_0_0, &direction_inmate5_194_0_0};
static Image* images_inmate5_194_6_0[1];
static Direction direction_inmate5_194_6_0 = {0, 6, 6, 0, 1, images_inmate5_194_6_0, 1};
static Image* images_inmate5_194_6_8[1];
static Direction direction_inmate5_194_6_8 = {8, 6, 6, 0, 1, images_inmate5_194_6_8, 1};
static Image* images_inmate5_194_6_16[1];
static Direction direction_inmate5_194_6_16 = {16, 6, 6, 0, 1, images_inmate5_194_6_16, 1};
static Image* images_inmate5_194_6_24[1];
static Direction direction_inmate5_194_6_24 = {24, 6, 6, 0, 1, images_inmate5_194_6_24, 1};
static Animation anim_inmate5_194_6 = {&direction_inmate5_194_6_0, &direction_inmate5_194_6_0, &direction_inmate5_194_6_0, &direction_inmate5_194_6_0, NULL, &direction_inmate5_194_6_8, &direction_inmate5_194_6_8, &direction_inmate5_194_6_8, &direction_inmate5_194_6_8, &direction_inmate5_194_6_8, &direction_inmate5_194_6_8, &direction_inmate5_194_6_8, NULL, &direction_inmate5_194_6_16, &direction_inmate5_194_6_16, &direction_inmate5_194_6_16, &direction_inmate5_194_6_16, &direction_inmate5_194_6_16, &direction_inmate5_194_6_16, &direction_inmate5_194_6_16, NULL, &direction_inmate5_194_6_24, &direction_inmate5_194_6_24, &direction_inmate5_194_6_24, &direction_inmate5_194_6_24, &direction_inmate5_194_6_24, &direction_inmate5_194_6_24, &direction_inmate5_194_6_24, NULL, &direction_inmate5_194_6_0, &direction_inmate5_194_6_0, &direction_inmate5_194_6_0};
static Image* images_inmate5_194_8_0[1];
static Direction direction_inmate5_194_8_0 = {0, 50, 50, 0, -1, images_inmate5_194_8_0, 1};
static Image* images_inmate5_194_8_24[2];
static Direction direction_inmate5_194_8_24 = {24, 3, 3, 0, -1, images_inmate5_194_8_24, 2};
static Animation anim_inmate5_194_8 = {&direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, NULL, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, &direction_inmate5_194_8_24, NULL, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0, &direction_inmate5_194_8_0};
static Image* images_inmate5_194_9_0[2];
static Direction direction_inmate5_194_9_0 = {0, 6, 6, 0, 2, images_inmate5_194_9_0, 2};
static Image* images_inmate5_194_9_8[2];
static Direction direction_inmate5_194_9_8 = {8, 6, 6, 0, 2, images_inmate5_194_9_8, 2};
static Image* images_inmate5_194_9_16[2];
static Direction direction_inmate5_194_9_16 = {16, 6, 6, 0, 2, images_inmate5_194_9_16, 2};
static Image* images_inmate5_194_9_24[2];
static Direction direction_inmate5_194_9_24 = {24, 6, 6, 0, 2, images_inmate5_194_9_24, 2};
static Animation anim_inmate5_194_9 = {&direction_inmate5_194_9_0, &direction_inmate5_194_9_0, &direction_inmate5_194_9_0, &direction_inmate5_194_9_0, NULL, &direction_inmate5_194_9_8, &direction_inmate5_194_9_8, &direction_inmate5_194_9_8, &direction_inmate5_194_9_8, &direction_inmate5_194_9_8, &direction_inmate5_194_9_8, &direction_inmate5_194_9_8, NULL, &direction_inmate5_194_9_16, &direction_inmate5_194_9_16, &direction_inmate5_194_9_16, &direction_inmate5_194_9_16, &direction_inmate5_194_9_16, &direction_inmate5_194_9_16, &direction_inmate5_194_9_16, NULL, &direction_inmate5_194_9_24, &direction_inmate5_194_9_24, &direction_inmate5_194_9_24, &direction_inmate5_194_9_24, &direction_inmate5_194_9_24, &direction_inmate5_194_9_24, &direction_inmate5_194_9_24, NULL, &direction_inmate5_194_9_0, &direction_inmate5_194_9_0, &direction_inmate5_194_9_0};
static Image* images_inmate5_194_10_0[5];
static Direction direction_inmate5_194_10_0 = {0, 10, 10, 0, -1, images_inmate5_194_10_0, 5};
static Animation anim_inmate5_194_10 = {&direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, NULL, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0, &direction_inmate5_194_10_0};
static Image* images_inmate5_194_11_0[2];
static Direction direction_inmate5_194_11_0 = {0, 6, 6, 0, -1, images_inmate5_194_11_0, 2};
static Image* images_inmate5_194_11_8[2];
static Direction direction_inmate5_194_11_8 = {8, 6, 6, 0, -1, images_inmate5_194_11_8, 2};
static Image* images_inmate5_194_11_16[2];
static Direction direction_inmate5_194_11_16 = {16, 6, 6, 0, -1, images_inmate5_194_11_16, 2};
static Image* images_inmate5_194_11_24[2];
static Direction direction_inmate5_194_11_24 = {24, 6, 6, 0, -1, images_inmate5_194_11_24, 2};
static Animation anim_inmate5_194_11 = {&direction_inmate5_194_11_0, &direction_inmate5_194_11_0, &direction_inmate5_194_11_0, &direction_inmate5_194_11_0, NULL, &direction_inmate5_194_11_8, &direction_inmate5_194_11_8, &direction_inmate5_194_11_8, &direction_inmate5_194_11_8, &direction_inmate5_194_11_8, &direction_inmate5_194_11_8, &direction_inmate5_194_11_8, NULL, &direction_inmate5_194_11_16, &direction_inmate5_194_11_16, &direction_inmate5_194_11_16, &direction_inmate5_194_11_16, &direction_inmate5_194_11_16, &direction_inmate5_194_11_16, &direction_inmate5_194_11_16, NULL, &direction_inmate5_194_11_24, &direction_inmate5_194_11_24, &direction_inmate5_194_11_24, &direction_inmate5_194_11_24, &direction_inmate5_194_11_24, &direction_inmate5_194_11_24, &direction_inmate5_194_11_24, NULL, &direction_inmate5_194_11_0, &direction_inmate5_194_11_0, &direction_inmate5_194_11_0};
static Animation * anim_array_inmate5_194[12] = {&anim_inmate5_194_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate5_194_6, NULL, &anim_inmate5_194_8, &anim_inmate5_194_9, &anim_inmate5_194_10, &anim_inmate5_194_11};
static Animations anim_inmate5_194 = {12, &anim_array_inmate5_194[0]};
static bool anim_inmate5_194_initialized;
class Inmate5_194 : public Active
{
public:
    Inmate5_194(int x, int y) : Active(x, y, Inmate5_194_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Inmate 5", 8);
#endif
        this->animations = &anim_inmate5_194;
        if (!anim_inmate5_194_initialized) {
            anim_inmate5_194_initialized = true;
            images_inmate5_194_0_0[0] = get_internal_image(36);
            images_inmate5_194_0_0[1] = get_internal_image(48);
            images_inmate5_194_0_8[0] = get_internal_image(151);
            images_inmate5_194_0_8[1] = get_internal_image(150);
            images_inmate5_194_0_16[0] = get_internal_image(63);
            images_inmate5_194_0_16[1] = get_internal_image(147);
            images_inmate5_194_0_24[0] = get_internal_image(67);
            images_inmate5_194_0_24[1] = get_internal_image(80);
            images_inmate5_194_6_0[0] = get_internal_image(175);
            images_inmate5_194_6_8[0] = get_internal_image(182);
            images_inmate5_194_6_16[0] = get_internal_image(180);
            images_inmate5_194_6_24[0] = get_internal_image(181);
            images_inmate5_194_8_0[0] = get_internal_image(125);
            images_inmate5_194_8_24[0] = get_internal_image(331);
            images_inmate5_194_8_24[1] = get_internal_image(322);
            images_inmate5_194_9_0[0] = get_internal_image(48);
            images_inmate5_194_9_0[1] = get_internal_image(309);
            images_inmate5_194_9_8[0] = get_internal_image(151);
            images_inmate5_194_9_8[1] = get_internal_image(150);
            images_inmate5_194_9_16[0] = get_internal_image(147);
            images_inmate5_194_9_16[1] = get_internal_image(310);
            images_inmate5_194_9_24[0] = get_internal_image(311);
            images_inmate5_194_9_24[1] = get_internal_image(80);
            images_inmate5_194_10_0[0] = get_internal_image(386);
            images_inmate5_194_10_0[1] = get_internal_image(387);
            images_inmate5_194_10_0[2] = get_internal_image(380);
            images_inmate5_194_10_0[3] = get_internal_image(380);
            images_inmate5_194_10_0[4] = get_internal_image(388);
            images_inmate5_194_11_0[0] = get_internal_image(356);
            images_inmate5_194_11_0[1] = get_internal_image(353);
            images_inmate5_194_11_8[0] = get_internal_image(361);
            images_inmate5_194_11_8[1] = get_internal_image(362);
            images_inmate5_194_11_16[0] = get_internal_image(355);
            images_inmate5_194_11_16[1] = get_internal_image(357);
            images_inmate5_194_11_24[0] = get_internal_image(359);
            images_inmate5_194_11_24[1] = get_internal_image(360);
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
FrameObject * create_inmate5_194(int x, int y)
{
    return new (Active::pool.create()) Inmate5_194(x, y);
}
class Backdrop3_195 : public Backdrop
{
public:
    Backdrop3_195(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 3", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_3
        manager.frame->back_instances[BACK_ID_BACKDROP_3].push_back(this);
#endif
        image = get_internal_image(152);
        width = image->width;
        height = image->height;
        collision = new InstanceBox(this);
        set_shader(Render::SUBTRACT);
    }
};
FrameObject * create_backdrop3_195(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop3_195(x, y);
}
static Image* images_mouse_196_0_0[1];
static Direction direction_mouse_196_0_0 = {0, 1, 1, 0, -1, images_mouse_196_0_0, 1};
static Animation anim_mouse_196_0 = {&direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, NULL, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0, &direction_mouse_196_0_0};
static Image* images_mouse_196_6_0[4];
static Direction direction_mouse_196_6_0 = {0, 15, 15, 0, -1, images_mouse_196_6_0, 4};
static Animation anim_mouse_196_6 = {&direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, NULL, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0, &direction_mouse_196_6_0};
static Image* images_mouse_196_12_0[4];
static Direction direction_mouse_196_12_0 = {0, 15, 15, 0, -1, images_mouse_196_12_0, 4};
static Animation anim_mouse_196_12 = {&direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, NULL, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0, &direction_mouse_196_12_0};
static Image* images_mouse_196_13_0[4];
static Direction direction_mouse_196_13_0 = {0, 15, 15, 0, -1, images_mouse_196_13_0, 4};
static Animation anim_mouse_196_13 = {&direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, NULL, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0, &direction_mouse_196_13_0};
static Image* images_mouse_196_14_0[4];
static Direction direction_mouse_196_14_0 = {0, 15, 15, 0, -1, images_mouse_196_14_0, 4};
static Animation anim_mouse_196_14 = {&direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, NULL, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0, &direction_mouse_196_14_0};
static Animation * anim_array_mouse_196[15] = {&anim_mouse_196_0, NULL, NULL, NULL, NULL, NULL, &anim_mouse_196_6, NULL, NULL, NULL, NULL, NULL, &anim_mouse_196_12, &anim_mouse_196_13, &anim_mouse_196_14};
static Animations anim_mouse_196 = {15, &anim_array_mouse_196[0]};
static bool anim_mouse_196_initialized;
class Mouse_196 : public Active
{
public:
    Mouse_196(int x, int y) : Active(x, y, Mouse_196_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Mouse", 5);
#endif
        this->animations = &anim_mouse_196;
        if (!anim_mouse_196_initialized) {
            anim_mouse_196_initialized = true;
            images_mouse_196_0_0[0] = get_internal_image(18);
            images_mouse_196_6_0[0] = get_internal_image(25);
            images_mouse_196_6_0[1] = get_internal_image(1444);
            images_mouse_196_6_0[2] = get_internal_image(25);
            images_mouse_196_6_0[3] = get_internal_image(1446);
            images_mouse_196_12_0[0] = get_internal_image(215);
            images_mouse_196_12_0[1] = get_internal_image(199);
            images_mouse_196_12_0[2] = get_internal_image(217);
            images_mouse_196_12_0[3] = get_internal_image(199);
            images_mouse_196_13_0[0] = get_internal_image(1453);
            images_mouse_196_13_0[1] = get_internal_image(189);
            images_mouse_196_13_0[2] = get_internal_image(1454);
            images_mouse_196_13_0[3] = get_internal_image(189);
            images_mouse_196_14_0[0] = get_internal_image(216);
            images_mouse_196_14_0[1] = get_internal_image(218);
            images_mouse_196_14_0[2] = get_internal_image(219);
            images_mouse_196_14_0[3] = get_internal_image(218);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_mouse_196(int x, int y)
{
    return new (Active::pool.create()) Mouse_196(x, y);
}
static Image* images_unmountcheck_197_0_0[1];
static Direction direction_unmountcheck_197_0_0 = {0, 50, 50, 0, -1, images_unmountcheck_197_0_0, 1};
static Image* images_unmountcheck_197_0_24[1];
static Direction direction_unmountcheck_197_0_24 = {24, 50, 50, 0, -1, images_unmountcheck_197_0_24, 1};
static Animation anim_unmountcheck_197_0 = {&direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, NULL, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, &direction_unmountcheck_197_0_24, NULL, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0, &direction_unmountcheck_197_0_0};
static Animation * anim_array_unmountcheck_197[1] = {&anim_unmountcheck_197_0};
static Animations anim_unmountcheck_197 = {1, &anim_array_unmountcheck_197[0]};
static bool anim_unmountcheck_197_initialized;
class UnmountCheck_197 : public Active
{
public:
    UnmountCheck_197(int x, int y) : Active(x, y, UnmountCheck_197_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Unmount check", 13);
#endif
        this->animations = &anim_unmountcheck_197;
        if (!anim_unmountcheck_197_initialized) {
            anim_unmountcheck_197_initialized = true;
            images_unmountcheck_197_0_0[0] = get_internal_image(156);
            images_unmountcheck_197_0_24[0] = get_internal_image(586);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_unmountcheck_197(int x, int y)
{
    return new (Active::pool.create()) UnmountCheck_197(x, y);
}
static Image* images_los_198_0_0[1];
static Direction direction_los_198_0_0 = {0, 50, 50, 0, 1, images_los_198_0_0, 1};
static Animation anim_los_198_0 = {&direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, NULL, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0, &direction_los_198_0_0};
static Image* images_los_198_2_0[1];
static Direction direction_los_198_2_0 = {0, 50, 50, 0, -1, images_los_198_2_0, 1};
static Animation anim_los_198_2 = {&direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, NULL, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0, &direction_los_198_2_0};
static Animation * anim_array_los_198[3] = {&anim_los_198_0, NULL, &anim_los_198_2};
static Animations anim_los_198 = {3, &anim_array_los_198[0]};
static bool anim_los_198_initialized;
class LoS_198 : public Active
{
public:
    LoS_198(int x, int y) : Active(x, y, LoS_198_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LoS", 3);
#endif
        set_visible(false);
        this->animations = &anim_los_198;
        if (!anim_los_198_initialized) {
            anim_los_198_initialized = true;
            images_los_198_0_0[0] = get_internal_image(807);
            images_los_198_2_0[0] = get_internal_image(106);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_los_198(int x, int y)
{
    return new (Active::pool.create()) LoS_198(x, y);
}
class IgnoreNotes_199 : public Text
{
public:
    IgnoreNotes_199(int x, int y) : Text(x, y, IgnoreNotes_199_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ignore - notes", 14);
#endif
        flags &= ~SCROLL;
        width = 282;
        height = 495;
        blend_color = Color(0, 0, 0);
        bold = false;
        italic = false;
        font_name = std::string("Arial", 5);
        font = get_font(10, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("[Players Alt Vals]\r\nA=ID\r\nB=\r\nC=\r\nD=HitCool\r\nE=HuntCool\r\nF= INT\r\nH= hp\r\nI = STR\r\nJ = SPD\r\nK = Persistence\r\nL = Align\r\nM= Rep\r\nN=Costume\r\nO=max_hp\r\nP=parent (following)\r\nQ = dead timer\r\n\r\nR=Reported (Corpse)\r\nT=type (1=guard, 2=con)\r\nU = INVERT on hit\r\nV = inspect\r\n\r\nT= type (0=you, 1=guard, 2=inmate, 3=doc)\r\nU = invert effect", 327));
        create_alterables();
    }
};
FrameObject * create_ignorenotes_199(int x, int y)
{
    return new (Text::pool.create()) IgnoreNotes_199(x, y);
}
static Image* images_inmate6_201_0_0[2];
static Direction direction_inmate6_201_0_0 = {0, 6, 6, 0, -1, images_inmate6_201_0_0, 2};
static Image* images_inmate6_201_0_8[2];
static Direction direction_inmate6_201_0_8 = {8, 6, 6, 0, -1, images_inmate6_201_0_8, 2};
static Image* images_inmate6_201_0_16[2];
static Direction direction_inmate6_201_0_16 = {16, 6, 6, 0, -1, images_inmate6_201_0_16, 2};
static Image* images_inmate6_201_0_24[2];
static Direction direction_inmate6_201_0_24 = {24, 6, 6, 0, -1, images_inmate6_201_0_24, 2};
static Animation anim_inmate6_201_0 = {&direction_inmate6_201_0_0, &direction_inmate6_201_0_0, &direction_inmate6_201_0_0, &direction_inmate6_201_0_0, NULL, &direction_inmate6_201_0_8, &direction_inmate6_201_0_8, &direction_inmate6_201_0_8, &direction_inmate6_201_0_8, &direction_inmate6_201_0_8, &direction_inmate6_201_0_8, &direction_inmate6_201_0_8, NULL, &direction_inmate6_201_0_16, &direction_inmate6_201_0_16, &direction_inmate6_201_0_16, &direction_inmate6_201_0_16, &direction_inmate6_201_0_16, &direction_inmate6_201_0_16, &direction_inmate6_201_0_16, NULL, &direction_inmate6_201_0_24, &direction_inmate6_201_0_24, &direction_inmate6_201_0_24, &direction_inmate6_201_0_24, &direction_inmate6_201_0_24, &direction_inmate6_201_0_24, &direction_inmate6_201_0_24, NULL, &direction_inmate6_201_0_0, &direction_inmate6_201_0_0, &direction_inmate6_201_0_0};
static Image* images_inmate6_201_6_0[1];
static Direction direction_inmate6_201_6_0 = {0, 6, 6, 0, 1, images_inmate6_201_6_0, 1};
static Image* images_inmate6_201_6_8[1];
static Direction direction_inmate6_201_6_8 = {8, 6, 6, 0, 1, images_inmate6_201_6_8, 1};
static Image* images_inmate6_201_6_16[1];
static Direction direction_inmate6_201_6_16 = {16, 6, 6, 0, 1, images_inmate6_201_6_16, 1};
static Image* images_inmate6_201_6_24[1];
static Direction direction_inmate6_201_6_24 = {24, 6, 6, 0, 1, images_inmate6_201_6_24, 1};
static Animation anim_inmate6_201_6 = {&direction_inmate6_201_6_0, &direction_inmate6_201_6_0, &direction_inmate6_201_6_0, &direction_inmate6_201_6_0, NULL, &direction_inmate6_201_6_8, &direction_inmate6_201_6_8, &direction_inmate6_201_6_8, &direction_inmate6_201_6_8, &direction_inmate6_201_6_8, &direction_inmate6_201_6_8, &direction_inmate6_201_6_8, NULL, &direction_inmate6_201_6_16, &direction_inmate6_201_6_16, &direction_inmate6_201_6_16, &direction_inmate6_201_6_16, &direction_inmate6_201_6_16, &direction_inmate6_201_6_16, &direction_inmate6_201_6_16, NULL, &direction_inmate6_201_6_24, &direction_inmate6_201_6_24, &direction_inmate6_201_6_24, &direction_inmate6_201_6_24, &direction_inmate6_201_6_24, &direction_inmate6_201_6_24, &direction_inmate6_201_6_24, NULL, &direction_inmate6_201_6_0, &direction_inmate6_201_6_0, &direction_inmate6_201_6_0};
static Image* images_inmate6_201_8_0[1];
static Direction direction_inmate6_201_8_0 = {0, 50, 50, 0, -1, images_inmate6_201_8_0, 1};
static Animation anim_inmate6_201_8 = {&direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, NULL, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0, &direction_inmate6_201_8_0};
static Animation * anim_array_inmate6_201[9] = {&anim_inmate6_201_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate6_201_6, NULL, &anim_inmate6_201_8};
static Animations anim_inmate6_201 = {9, &anim_array_inmate6_201[0]};
static bool anim_inmate6_201_initialized;
class Inmate6_201 : public Active
{
public:
    Inmate6_201(int x, int y) : Active(x, y, Inmate6_201_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Inmate 6", 8);
#endif
        this->animations = &anim_inmate6_201;
        if (!anim_inmate6_201_initialized) {
            anim_inmate6_201_initialized = true;
            images_inmate6_201_0_0[0] = get_internal_image(45);
            images_inmate6_201_0_0[1] = get_internal_image(126);
            images_inmate6_201_0_8[0] = get_internal_image(130);
            images_inmate6_201_0_8[1] = get_internal_image(142);
            images_inmate6_201_0_16[0] = get_internal_image(7);
            images_inmate6_201_0_16[1] = get_internal_image(128);
            images_inmate6_201_0_24[0] = get_internal_image(133);
            images_inmate6_201_0_24[1] = get_internal_image(129);
            images_inmate6_201_6_0[0] = get_internal_image(174);
            images_inmate6_201_6_8[0] = get_internal_image(178);
            images_inmate6_201_6_16[0] = get_internal_image(176);
            images_inmate6_201_6_24[0] = get_internal_image(177);
            images_inmate6_201_8_0[0] = get_internal_image(98);
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
FrameObject * create_inmate6_201(int x, int y)
{
    return new (Active::pool.create()) Inmate6_201(x, y);
}
static Image* images_camera_202_0_0[1];
static Direction direction_camera_202_0_0 = {0, 50, 50, 0, 1, images_camera_202_0_0, 1};
static Animation anim_camera_202_0 = {&direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, NULL, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0, &direction_camera_202_0_0};
static Animation * anim_array_camera_202[1] = {&anim_camera_202_0};
static Animations anim_camera_202 = {1, &anim_array_camera_202[0]};
static bool anim_camera_202_initialized;
class Camera_202 : public Active
{
public:
    Camera_202(int x, int y) : Active(x, y, Camera_202_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Camera", 6);
#endif
        set_visible(false);
        this->animations = &anim_camera_202;
        if (!anim_camera_202_initialized) {
            anim_camera_202_initialized = true;
            images_camera_202_0_0[0] = get_internal_image(481);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_camera_202(int x, int y)
{
    return new (Active::pool.create()) Camera_202(x, y);
}
class CashText : public TextBlitter
{
public:
    CashText(int x, int y) : TextBlitter(x, y, cashText_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Text_Cash", 9);
#endif
        flags &= ~SCROLL;
        width = 42;
        height = 15;
        char_width = 9;
        char_height = 13;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(473);
        image_width = 288;
        alignment = ALIGN_LEFT | ALIGN_TOP;
        static int charmap[256];
        static bool initialized = false;
        this->charmap = &charmap[0];
        charmap_str = &str_0123456789_abcdefghijklmnopqrstuvwxyz_abcdefghijklmnopqrstuvwxyz_10;
        if (!initialized) {
            initialized = true;
            initialize(*charmap_str);
        }
        transparent_color = Color(0, 0, 0);
        wrap = false;
        set_text(std::string("500", 3));
        has_callback = false;
        create_alterables();
        alterables->strings.set(5, str_cash_11);
    }
};
FrameObject * create_cashText(int x, int y)
{
    return new (TextBlitter::pool.create()) CashText(x, y);
}
class Backdrop6_204 : public Backdrop
{
public:
    Backdrop6_204(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 6", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_6
        manager.frame->back_instances[BACK_ID_BACKDROP_6].push_back(this);
#endif
        image = get_internal_image(203);
        width = image->width;
        height = image->height;
        set_shader(Render::SUBTRACT);
    }
};
FrameObject * create_backdrop6_204(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop6_204(x, y);
}
class Backdrop8_205 : public Backdrop
{
public:
    Backdrop8_205(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 8", 10);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_8
        manager.frame->back_instances[BACK_ID_BACKDROP_8].push_back(this);
#endif
        image = get_internal_image(164);
        width = image->width;
        height = image->height;
        set_shader(Render::SUBTRACT);
    }
};
FrameObject * create_backdrop8_205(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop8_205(x, y);
}
static Image* images_upperlevelcheck_206_0_0[1];
static Direction direction_upperlevelcheck_206_0_0 = {0, 50, 50, 0, 1, images_upperlevelcheck_206_0_0, 1};
static Animation anim_upperlevelcheck_206_0 = {&direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, NULL, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0, &direction_upperlevelcheck_206_0_0};
static Image* images_upperlevelcheck_206_2_0[1];
static Direction direction_upperlevelcheck_206_2_0 = {0, 50, 50, 0, -1, images_upperlevelcheck_206_2_0, 1};
static Animation anim_upperlevelcheck_206_2 = {&direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, NULL, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0, &direction_upperlevelcheck_206_2_0};
static Image* images_upperlevelcheck_206_5_0[1];
static Direction direction_upperlevelcheck_206_5_0 = {0, 50, 50, 0, -1, images_upperlevelcheck_206_5_0, 1};
static Image* images_upperlevelcheck_206_5_8[1];
static Direction direction_upperlevelcheck_206_5_8 = {8, 50, 50, 0, -1, images_upperlevelcheck_206_5_8, 1};
static Image* images_upperlevelcheck_206_5_16[1];
static Direction direction_upperlevelcheck_206_5_16 = {16, 50, 50, 0, -1, images_upperlevelcheck_206_5_16, 1};
static Image* images_upperlevelcheck_206_5_24[1];
static Direction direction_upperlevelcheck_206_5_24 = {24, 50, 50, 0, -1, images_upperlevelcheck_206_5_24, 1};
static Animation anim_upperlevelcheck_206_5 = {&direction_upperlevelcheck_206_5_0, &direction_upperlevelcheck_206_5_0, &direction_upperlevelcheck_206_5_0, &direction_upperlevelcheck_206_5_0, NULL, &direction_upperlevelcheck_206_5_8, &direction_upperlevelcheck_206_5_8, &direction_upperlevelcheck_206_5_8, &direction_upperlevelcheck_206_5_8, &direction_upperlevelcheck_206_5_8, &direction_upperlevelcheck_206_5_8, &direction_upperlevelcheck_206_5_8, NULL, &direction_upperlevelcheck_206_5_16, &direction_upperlevelcheck_206_5_16, &direction_upperlevelcheck_206_5_16, &direction_upperlevelcheck_206_5_16, &direction_upperlevelcheck_206_5_16, &direction_upperlevelcheck_206_5_16, &direction_upperlevelcheck_206_5_16, NULL, &direction_upperlevelcheck_206_5_24, &direction_upperlevelcheck_206_5_24, &direction_upperlevelcheck_206_5_24, &direction_upperlevelcheck_206_5_24, &direction_upperlevelcheck_206_5_24, &direction_upperlevelcheck_206_5_24, &direction_upperlevelcheck_206_5_24, NULL, &direction_upperlevelcheck_206_5_0, &direction_upperlevelcheck_206_5_0, &direction_upperlevelcheck_206_5_0};
static Animation * anim_array_upperlevelcheck_206[6] = {&anim_upperlevelcheck_206_0, NULL, &anim_upperlevelcheck_206_2, NULL, NULL, &anim_upperlevelcheck_206_5};
static Animations anim_upperlevelcheck_206 = {6, &anim_array_upperlevelcheck_206[0]};
static bool anim_upperlevelcheck_206_initialized;
class UpperLevelCheck_206 : public Active
{
public:
    UpperLevelCheck_206(int x, int y) : Active(x, y, UpperLevelCheck_206_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("UpperLevelCheck", 15);
#endif
        set_visible(false);
        this->animations = &anim_upperlevelcheck_206;
        if (!anim_upperlevelcheck_206_initialized) {
            anim_upperlevelcheck_206_initialized = true;
            images_upperlevelcheck_206_0_0[0] = get_internal_image(262);
            images_upperlevelcheck_206_2_0[0] = get_internal_image(409);
            images_upperlevelcheck_206_5_0[0] = get_internal_image(2381);
            images_upperlevelcheck_206_5_8[0] = get_internal_image(2370);
            images_upperlevelcheck_206_5_16[0] = get_internal_image(2385);
            images_upperlevelcheck_206_5_24[0] = get_internal_image(2370);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_upperlevelcheck_206(int x, int y)
{
    return new (Active::pool.create()) UpperLevelCheck_206(x, y);
}
static Image* images_dighole_207_0_0[1];
static Direction direction_dighole_207_0_0 = {0, 50, 50, 0, -1, images_dighole_207_0_0, 1};
static Image* images_dighole_207_0_1[1];
static Direction direction_dighole_207_0_1 = {1, 50, 50, 0, -1, images_dighole_207_0_1, 1};
static Image* images_dighole_207_0_2[1];
static Direction direction_dighole_207_0_2 = {2, 50, 50, 0, -1, images_dighole_207_0_2, 1};
static Image* images_dighole_207_0_3[1];
static Direction direction_dighole_207_0_3 = {3, 50, 50, 0, -1, images_dighole_207_0_3, 1};
static Image* images_dighole_207_0_4[1];
static Direction direction_dighole_207_0_4 = {4, 50, 50, 0, -1, images_dighole_207_0_4, 1};
static Image* images_dighole_207_0_16[1];
static Direction direction_dighole_207_0_16 = {16, 50, 50, 0, -1, images_dighole_207_0_16, 1};
static Image* images_dighole_207_0_17[1];
static Direction direction_dighole_207_0_17 = {17, 50, 50, 0, -1, images_dighole_207_0_17, 1};
static Animation anim_dighole_207_0 = {&direction_dighole_207_0_0, &direction_dighole_207_0_1, &direction_dighole_207_0_2, &direction_dighole_207_0_3, &direction_dighole_207_0_4, &direction_dighole_207_0_4, &direction_dighole_207_0_4, &direction_dighole_207_0_4, &direction_dighole_207_0_4, &direction_dighole_207_0_4, NULL, &direction_dighole_207_0_16, &direction_dighole_207_0_16, &direction_dighole_207_0_16, &direction_dighole_207_0_16, &direction_dighole_207_0_16, &direction_dighole_207_0_16, &direction_dighole_207_0_17, &direction_dighole_207_0_17, &direction_dighole_207_0_17, &direction_dighole_207_0_17, &direction_dighole_207_0_17, &direction_dighole_207_0_17, &direction_dighole_207_0_17, &direction_dighole_207_0_17, &direction_dighole_207_0_0, &direction_dighole_207_0_0, &direction_dighole_207_0_0, &direction_dighole_207_0_0, &direction_dighole_207_0_0, &direction_dighole_207_0_0, &direction_dighole_207_0_0};
static Image* images_dighole_207_5_0[1];
static Direction direction_dighole_207_5_0 = {0, 50, 50, 0, -1, images_dighole_207_5_0, 1};
static Image* images_dighole_207_5_1[1];
static Direction direction_dighole_207_5_1 = {1, 50, 50, 0, -1, images_dighole_207_5_1, 1};
static Image* images_dighole_207_5_2[1];
static Direction direction_dighole_207_5_2 = {2, 50, 50, 0, -1, images_dighole_207_5_2, 1};
static Image* images_dighole_207_5_3[1];
static Direction direction_dighole_207_5_3 = {3, 50, 50, 0, -1, images_dighole_207_5_3, 1};
static Image* images_dighole_207_5_4[1];
static Direction direction_dighole_207_5_4 = {4, 50, 50, 0, -1, images_dighole_207_5_4, 1};
static Animation anim_dighole_207_5 = {&direction_dighole_207_5_0, &direction_dighole_207_5_1, &direction_dighole_207_5_2, &direction_dighole_207_5_3, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, &direction_dighole_207_5_4, NULL, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0, &direction_dighole_207_5_0};
static Animation * anim_array_dighole_207[6] = {&anim_dighole_207_0, NULL, NULL, NULL, NULL, &anim_dighole_207_5};
static Animations anim_dighole_207 = {6, &anim_array_dighole_207[0]};
static bool anim_dighole_207_initialized;
class DigHole_207 : public Active
{
public:
    DigHole_207(int x, int y) : Active(x, y, DigHole_207_type)
    {
        // qualifiers: 69, 99
#ifndef NDEBUG
        name = std::string("Dig Hole", 8);
#endif
        this->animations = &anim_dighole_207;
        if (!anim_dighole_207_initialized) {
            anim_dighole_207_initialized = true;
            images_dighole_207_0_0[0] = get_internal_image(16);
            images_dighole_207_0_1[0] = get_internal_image(2);
            images_dighole_207_0_2[0] = get_internal_image(17);
            images_dighole_207_0_3[0] = get_internal_image(20);
            images_dighole_207_0_4[0] = get_internal_image(23);
            images_dighole_207_0_16[0] = get_internal_image(973);
            images_dighole_207_0_17[0] = get_internal_image(968);
            images_dighole_207_5_0[0] = get_internal_image(73);
            images_dighole_207_5_1[0] = get_internal_image(72);
            images_dighole_207_5_2[0] = get_internal_image(71);
            images_dighole_207_5_3[0] = get_internal_image(70);
            images_dighole_207_5_4[0] = get_internal_image(66);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(4);
        create_alterables();
        alterables->values.set(1, 4);
    }
};
FrameObject * create_dighole_207(int x, int y)
{
    return new (Active::pool.create()) DigHole_207(x, y);
}
static Image* images_usespot_208_0_0[2];
static Direction direction_usespot_208_0_0 = {0, 5, 5, 0, -1, images_usespot_208_0_0, 2};
static Animation anim_usespot_208_0 = {&direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, NULL, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0, &direction_usespot_208_0_0};
static Animation * anim_array_usespot_208[1] = {&anim_usespot_208_0};
static Animations anim_usespot_208 = {1, &anim_array_usespot_208[0]};
static bool anim_usespot_208_initialized;
class UseSpot_208 : public Active
{
public:
    UseSpot_208(int x, int y) : Active(x, y, UseSpot_208_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("UseSpot", 7);
#endif
        set_visible(false);
        this->animations = &anim_usespot_208;
        if (!anim_usespot_208_initialized) {
            anim_usespot_208_initialized = true;
            images_usespot_208_0_0[0] = get_internal_image(241);
            images_usespot_208_0_0[1] = get_internal_image(242);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_usespot_208(int x, int y)
{
    return new (Active::pool.create()) UseSpot_208(x, y);
}
class QuickBackdrop5_209 : public QuickBackdrop
{
public:
    QuickBackdrop5_209(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 5", 16);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
        width = 1500;
        height = 320;
        image = get_internal_image(244);
        outline = 0;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_quickbackdrop5_209(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop5_209(x, y);
}
static Image* images_hudItem_0_0[1];
static Direction direction_hudItem_0_0 = {0, 50, 50, 0, 1, images_hudItem_0_0, 1};
static Image* images_hudItem_0_1[1];
static Direction direction_hudItem_0_1 = {1, 50, 50, 0, 1, images_hudItem_0_1, 1};
static Image* images_hudItem_0_2[1];
static Direction direction_hudItem_0_2 = {2, 50, 50, 0, 1, images_hudItem_0_2, 1};
static Image* images_hudItem_0_3[1];
static Direction direction_hudItem_0_3 = {3, 50, 50, 0, 1, images_hudItem_0_3, 1};
static Image* images_hudItem_0_4[1];
static Direction direction_hudItem_0_4 = {4, 50, 50, 0, 1, images_hudItem_0_4, 1};
static Image* images_hudItem_0_5[1];
static Direction direction_hudItem_0_5 = {5, 50, 50, 0, 1, images_hudItem_0_5, 1};
static Image* images_hudItem_0_6[1];
static Direction direction_hudItem_0_6 = {6, 50, 50, 0, 1, images_hudItem_0_6, 1};
static Image* images_hudItem_0_7[1];
static Direction direction_hudItem_0_7 = {7, 50, 50, 0, 1, images_hudItem_0_7, 1};
static Image* images_hudItem_0_8[1];
static Direction direction_hudItem_0_8 = {8, 50, 50, 0, 1, images_hudItem_0_8, 1};
static Image* images_hudItem_0_9[1];
static Direction direction_hudItem_0_9 = {9, 50, 50, 0, 1, images_hudItem_0_9, 1};
static Image* images_hudItem_0_10[1];
static Direction direction_hudItem_0_10 = {10, 50, 50, 0, 1, images_hudItem_0_10, 1};
static Image* images_hudItem_0_11[1];
static Direction direction_hudItem_0_11 = {11, 50, 50, 0, -1, images_hudItem_0_11, 1};
static Image* images_hudItem_0_12[1];
static Direction direction_hudItem_0_12 = {12, 50, 50, 0, 1, images_hudItem_0_12, 1};
static Image* images_hudItem_0_13[1];
static Direction direction_hudItem_0_13 = {13, 50, 50, 0, 1, images_hudItem_0_13, 1};
static Image* images_hudItem_0_14[1];
static Direction direction_hudItem_0_14 = {14, 50, 50, 0, -1, images_hudItem_0_14, 1};
static Image* images_hudItem_0_15[1];
static Direction direction_hudItem_0_15 = {15, 50, 50, 0, 1, images_hudItem_0_15, 1};
static Image* images_hudItem_0_16[1];
static Direction direction_hudItem_0_16 = {16, 50, 50, 0, 1, images_hudItem_0_16, 1};
static Image* images_hudItem_0_17[1];
static Direction direction_hudItem_0_17 = {17, 50, 50, 0, 1, images_hudItem_0_17, 1};
static Image* images_hudItem_0_18[1];
static Direction direction_hudItem_0_18 = {18, 50, 50, 0, 1, images_hudItem_0_18, 1};
static Image* images_hudItem_0_19[1];
static Direction direction_hudItem_0_19 = {19, 50, 50, 0, -1, images_hudItem_0_19, 1};
static Image* images_hudItem_0_20[1];
static Direction direction_hudItem_0_20 = {20, 50, 50, 0, 1, images_hudItem_0_20, 1};
static Image* images_hudItem_0_21[1];
static Direction direction_hudItem_0_21 = {21, 50, 50, 0, 1, images_hudItem_0_21, 1};
static Image* images_hudItem_0_22[1];
static Direction direction_hudItem_0_22 = {22, 50, 50, 0, 1, images_hudItem_0_22, 1};
static Image* images_hudItem_0_23[1];
static Direction direction_hudItem_0_23 = {23, 50, 50, 0, 1, images_hudItem_0_23, 1};
static Image* images_hudItem_0_24[1];
static Direction direction_hudItem_0_24 = {24, 50, 50, 0, 1, images_hudItem_0_24, 1};
static Image* images_hudItem_0_25[1];
static Direction direction_hudItem_0_25 = {25, 50, 50, 0, 1, images_hudItem_0_25, 1};
static Image* images_hudItem_0_26[1];
static Direction direction_hudItem_0_26 = {26, 50, 50, 0, 1, images_hudItem_0_26, 1};
static Image* images_hudItem_0_27[1];
static Direction direction_hudItem_0_27 = {27, 50, 50, 0, 1, images_hudItem_0_27, 1};
static Image* images_hudItem_0_28[1];
static Direction direction_hudItem_0_28 = {28, 50, 50, 0, 1, images_hudItem_0_28, 1};
static Image* images_hudItem_0_29[1];
static Direction direction_hudItem_0_29 = {29, 50, 50, 0, 1, images_hudItem_0_29, 1};
static Image* images_hudItem_0_30[1];
static Direction direction_hudItem_0_30 = {30, 50, 50, 0, 1, images_hudItem_0_30, 1};
static Image* images_hudItem_0_31[1];
static Direction direction_hudItem_0_31 = {31, 50, 50, 0, 1, images_hudItem_0_31, 1};
static Animation anim_hudItem_0 = {&direction_hudItem_0_0, &direction_hudItem_0_1, &direction_hudItem_0_2, &direction_hudItem_0_3, &direction_hudItem_0_4, &direction_hudItem_0_5, &direction_hudItem_0_6, &direction_hudItem_0_7, &direction_hudItem_0_8, &direction_hudItem_0_9, &direction_hudItem_0_10, &direction_hudItem_0_11, &direction_hudItem_0_12, &direction_hudItem_0_13, &direction_hudItem_0_14, &direction_hudItem_0_15, &direction_hudItem_0_16, &direction_hudItem_0_17, &direction_hudItem_0_18, &direction_hudItem_0_19, &direction_hudItem_0_20, &direction_hudItem_0_21, &direction_hudItem_0_22, &direction_hudItem_0_23, &direction_hudItem_0_24, &direction_hudItem_0_25, &direction_hudItem_0_26, &direction_hudItem_0_27, &direction_hudItem_0_28, &direction_hudItem_0_29, &direction_hudItem_0_30, &direction_hudItem_0_31};
static Image* images_hudItem_1_0[1];
static Direction direction_hudItem_1_0 = {0, 50, 50, 0, -1, images_hudItem_1_0, 1};
static Image* images_hudItem_1_1[1];
static Direction direction_hudItem_1_1 = {1, 50, 50, 0, -1, images_hudItem_1_1, 1};
static Image* images_hudItem_1_2[1];
static Direction direction_hudItem_1_2 = {2, 50, 50, 0, -1, images_hudItem_1_2, 1};
static Image* images_hudItem_1_3[1];
static Direction direction_hudItem_1_3 = {3, 50, 50, 0, -1, images_hudItem_1_3, 1};
static Image* images_hudItem_1_4[1];
static Direction direction_hudItem_1_4 = {4, 50, 50, 0, -1, images_hudItem_1_4, 1};
static Image* images_hudItem_1_5[1];
static Direction direction_hudItem_1_5 = {5, 50, 50, 0, -1, images_hudItem_1_5, 1};
static Image* images_hudItem_1_6[1];
static Direction direction_hudItem_1_6 = {6, 50, 50, 0, -1, images_hudItem_1_6, 1};
static Image* images_hudItem_1_7[1];
static Direction direction_hudItem_1_7 = {7, 50, 50, 0, -1, images_hudItem_1_7, 1};
static Image* images_hudItem_1_8[1];
static Direction direction_hudItem_1_8 = {8, 50, 50, 0, -1, images_hudItem_1_8, 1};
static Image* images_hudItem_1_9[1];
static Direction direction_hudItem_1_9 = {9, 50, 50, 0, -1, images_hudItem_1_9, 1};
static Image* images_hudItem_1_10[1];
static Direction direction_hudItem_1_10 = {10, 50, 50, 0, -1, images_hudItem_1_10, 1};
static Image* images_hudItem_1_11[1];
static Direction direction_hudItem_1_11 = {11, 50, 50, 0, -1, images_hudItem_1_11, 1};
static Image* images_hudItem_1_12[1];
static Direction direction_hudItem_1_12 = {12, 50, 50, 0, -1, images_hudItem_1_12, 1};
static Image* images_hudItem_1_13[1];
static Direction direction_hudItem_1_13 = {13, 50, 50, 0, -1, images_hudItem_1_13, 1};
static Image* images_hudItem_1_14[1];
static Direction direction_hudItem_1_14 = {14, 50, 50, 0, -1, images_hudItem_1_14, 1};
static Image* images_hudItem_1_15[1];
static Direction direction_hudItem_1_15 = {15, 50, 50, 0, -1, images_hudItem_1_15, 1};
static Image* images_hudItem_1_16[1];
static Direction direction_hudItem_1_16 = {16, 50, 50, 0, -1, images_hudItem_1_16, 1};
static Image* images_hudItem_1_17[1];
static Direction direction_hudItem_1_17 = {17, 50, 50, 0, -1, images_hudItem_1_17, 1};
static Image* images_hudItem_1_18[1];
static Direction direction_hudItem_1_18 = {18, 50, 50, 0, -1, images_hudItem_1_18, 1};
static Image* images_hudItem_1_19[1];
static Direction direction_hudItem_1_19 = {19, 50, 50, 0, -1, images_hudItem_1_19, 1};
static Image* images_hudItem_1_20[1];
static Direction direction_hudItem_1_20 = {20, 50, 50, 0, -1, images_hudItem_1_20, 1};
static Image* images_hudItem_1_21[1];
static Direction direction_hudItem_1_21 = {21, 50, 50, 0, -1, images_hudItem_1_21, 1};
static Image* images_hudItem_1_22[1];
static Direction direction_hudItem_1_22 = {22, 50, 50, 0, -1, images_hudItem_1_22, 1};
static Image* images_hudItem_1_23[1];
static Direction direction_hudItem_1_23 = {23, 50, 50, 0, -1, images_hudItem_1_23, 1};
static Image* images_hudItem_1_24[2];
static Direction direction_hudItem_1_24 = {24, 10, 10, 0, -1, images_hudItem_1_24, 2};
static Image* images_hudItem_1_25[1];
static Direction direction_hudItem_1_25 = {25, 50, 50, 0, -1, images_hudItem_1_25, 1};
static Image* images_hudItem_1_26[1];
static Direction direction_hudItem_1_26 = {26, 50, 50, 0, -1, images_hudItem_1_26, 1};
static Image* images_hudItem_1_27[1];
static Direction direction_hudItem_1_27 = {27, 50, 50, 0, -1, images_hudItem_1_27, 1};
static Image* images_hudItem_1_28[1];
static Direction direction_hudItem_1_28 = {28, 50, 50, 0, -1, images_hudItem_1_28, 1};
static Image* images_hudItem_1_29[1];
static Direction direction_hudItem_1_29 = {29, 50, 50, 0, -1, images_hudItem_1_29, 1};
static Image* images_hudItem_1_30[1];
static Direction direction_hudItem_1_30 = {30, 50, 50, 0, -1, images_hudItem_1_30, 1};
static Image* images_hudItem_1_31[1];
static Direction direction_hudItem_1_31 = {31, 50, 50, 0, -1, images_hudItem_1_31, 1};
static Animation anim_hudItem_1 = {&direction_hudItem_1_0, &direction_hudItem_1_1, &direction_hudItem_1_2, &direction_hudItem_1_3, &direction_hudItem_1_4, &direction_hudItem_1_5, &direction_hudItem_1_6, &direction_hudItem_1_7, &direction_hudItem_1_8, &direction_hudItem_1_9, &direction_hudItem_1_10, &direction_hudItem_1_11, &direction_hudItem_1_12, &direction_hudItem_1_13, &direction_hudItem_1_14, &direction_hudItem_1_15, &direction_hudItem_1_16, &direction_hudItem_1_17, &direction_hudItem_1_18, &direction_hudItem_1_19, &direction_hudItem_1_20, &direction_hudItem_1_21, &direction_hudItem_1_22, &direction_hudItem_1_23, &direction_hudItem_1_24, &direction_hudItem_1_25, &direction_hudItem_1_26, &direction_hudItem_1_27, &direction_hudItem_1_28, &direction_hudItem_1_29, &direction_hudItem_1_30, &direction_hudItem_1_31};
static Image* images_hudItem_2_0[1];
static Direction direction_hudItem_2_0 = {0, 50, 50, 0, -1, images_hudItem_2_0, 1};
static Image* images_hudItem_2_1[1];
static Direction direction_hudItem_2_1 = {1, 50, 50, 0, -1, images_hudItem_2_1, 1};
static Image* images_hudItem_2_2[1];
static Direction direction_hudItem_2_2 = {2, 50, 50, 0, -1, images_hudItem_2_2, 1};
static Image* images_hudItem_2_3[1];
static Direction direction_hudItem_2_3 = {3, 50, 50, 0, -1, images_hudItem_2_3, 1};
static Image* images_hudItem_2_4[1];
static Direction direction_hudItem_2_4 = {4, 50, 50, 0, -1, images_hudItem_2_4, 1};
static Image* images_hudItem_2_5[1];
static Direction direction_hudItem_2_5 = {5, 50, 50, 0, -1, images_hudItem_2_5, 1};
static Image* images_hudItem_2_6[1];
static Direction direction_hudItem_2_6 = {6, 50, 50, 0, -1, images_hudItem_2_6, 1};
static Image* images_hudItem_2_7[1];
static Direction direction_hudItem_2_7 = {7, 50, 50, 0, -1, images_hudItem_2_7, 1};
static Image* images_hudItem_2_8[1];
static Direction direction_hudItem_2_8 = {8, 50, 50, 0, -1, images_hudItem_2_8, 1};
static Image* images_hudItem_2_9[1];
static Direction direction_hudItem_2_9 = {9, 50, 50, 0, -1, images_hudItem_2_9, 1};
static Image* images_hudItem_2_10[1];
static Direction direction_hudItem_2_10 = {10, 50, 50, 0, -1, images_hudItem_2_10, 1};
static Image* images_hudItem_2_11[1];
static Direction direction_hudItem_2_11 = {11, 50, 50, 0, -1, images_hudItem_2_11, 1};
static Image* images_hudItem_2_12[1];
static Direction direction_hudItem_2_12 = {12, 50, 50, 0, -1, images_hudItem_2_12, 1};
static Image* images_hudItem_2_13[1];
static Direction direction_hudItem_2_13 = {13, 50, 50, 0, -1, images_hudItem_2_13, 1};
static Image* images_hudItem_2_14[1];
static Direction direction_hudItem_2_14 = {14, 50, 50, 0, -1, images_hudItem_2_14, 1};
static Image* images_hudItem_2_15[1];
static Direction direction_hudItem_2_15 = {15, 50, 50, 0, -1, images_hudItem_2_15, 1};
static Image* images_hudItem_2_16[1];
static Direction direction_hudItem_2_16 = {16, 50, 50, 0, -1, images_hudItem_2_16, 1};
static Image* images_hudItem_2_17[1];
static Direction direction_hudItem_2_17 = {17, 50, 50, 0, -1, images_hudItem_2_17, 1};
static Image* images_hudItem_2_18[1];
static Direction direction_hudItem_2_18 = {18, 50, 50, 0, -1, images_hudItem_2_18, 1};
static Image* images_hudItem_2_19[1];
static Direction direction_hudItem_2_19 = {19, 50, 50, 0, -1, images_hudItem_2_19, 1};
static Image* images_hudItem_2_20[1];
static Direction direction_hudItem_2_20 = {20, 50, 50, 0, -1, images_hudItem_2_20, 1};
static Image* images_hudItem_2_21[1];
static Direction direction_hudItem_2_21 = {21, 50, 50, 0, -1, images_hudItem_2_21, 1};
static Image* images_hudItem_2_22[1];
static Direction direction_hudItem_2_22 = {22, 50, 50, 0, -1, images_hudItem_2_22, 1};
static Image* images_hudItem_2_23[1];
static Direction direction_hudItem_2_23 = {23, 50, 50, 0, -1, images_hudItem_2_23, 1};
static Image* images_hudItem_2_24[1];
static Direction direction_hudItem_2_24 = {24, 50, 50, 0, -1, images_hudItem_2_24, 1};
static Image* images_hudItem_2_25[1];
static Direction direction_hudItem_2_25 = {25, 50, 50, 0, -1, images_hudItem_2_25, 1};
static Image* images_hudItem_2_26[1];
static Direction direction_hudItem_2_26 = {26, 50, 50, 0, -1, images_hudItem_2_26, 1};
static Image* images_hudItem_2_27[1];
static Direction direction_hudItem_2_27 = {27, 50, 50, 0, -1, images_hudItem_2_27, 1};
static Image* images_hudItem_2_28[1];
static Direction direction_hudItem_2_28 = {28, 50, 50, 0, -1, images_hudItem_2_28, 1};
static Image* images_hudItem_2_29[1];
static Direction direction_hudItem_2_29 = {29, 50, 50, 0, -1, images_hudItem_2_29, 1};
static Image* images_hudItem_2_30[1];
static Direction direction_hudItem_2_30 = {30, 50, 50, 0, -1, images_hudItem_2_30, 1};
static Image* images_hudItem_2_31[1];
static Direction direction_hudItem_2_31 = {31, 50, 50, 0, -1, images_hudItem_2_31, 1};
static Animation anim_hudItem_2 = {&direction_hudItem_2_0, &direction_hudItem_2_1, &direction_hudItem_2_2, &direction_hudItem_2_3, &direction_hudItem_2_4, &direction_hudItem_2_5, &direction_hudItem_2_6, &direction_hudItem_2_7, &direction_hudItem_2_8, &direction_hudItem_2_9, &direction_hudItem_2_10, &direction_hudItem_2_11, &direction_hudItem_2_12, &direction_hudItem_2_13, &direction_hudItem_2_14, &direction_hudItem_2_15, &direction_hudItem_2_16, &direction_hudItem_2_17, &direction_hudItem_2_18, &direction_hudItem_2_19, &direction_hudItem_2_20, &direction_hudItem_2_21, &direction_hudItem_2_22, &direction_hudItem_2_23, &direction_hudItem_2_24, &direction_hudItem_2_25, &direction_hudItem_2_26, &direction_hudItem_2_27, &direction_hudItem_2_28, &direction_hudItem_2_29, &direction_hudItem_2_30, &direction_hudItem_2_31};
static Image* images_hudItem_5_0[1];
static Direction direction_hudItem_5_0 = {0, 50, 50, 0, -1, images_hudItem_5_0, 1};
static Image* images_hudItem_5_1[1];
static Direction direction_hudItem_5_1 = {1, 50, 50, 0, -1, images_hudItem_5_1, 1};
static Image* images_hudItem_5_2[1];
static Direction direction_hudItem_5_2 = {2, 50, 50, 0, -1, images_hudItem_5_2, 1};
static Image* images_hudItem_5_3[1];
static Direction direction_hudItem_5_3 = {3, 50, 50, 0, -1, images_hudItem_5_3, 1};
static Image* images_hudItem_5_4[1];
static Direction direction_hudItem_5_4 = {4, 50, 50, 0, -1, images_hudItem_5_4, 1};
static Image* images_hudItem_5_5[1];
static Direction direction_hudItem_5_5 = {5, 50, 50, 0, -1, images_hudItem_5_5, 1};
static Image* images_hudItem_5_6[1];
static Direction direction_hudItem_5_6 = {6, 50, 50, 0, -1, images_hudItem_5_6, 1};
static Image* images_hudItem_5_7[1];
static Direction direction_hudItem_5_7 = {7, 50, 50, 0, -1, images_hudItem_5_7, 1};
static Image* images_hudItem_5_8[1];
static Direction direction_hudItem_5_8 = {8, 50, 50, 0, -1, images_hudItem_5_8, 1};
static Image* images_hudItem_5_9[1];
static Direction direction_hudItem_5_9 = {9, 50, 50, 0, -1, images_hudItem_5_9, 1};
static Image* images_hudItem_5_10[1];
static Direction direction_hudItem_5_10 = {10, 50, 50, 0, -1, images_hudItem_5_10, 1};
static Image* images_hudItem_5_11[1];
static Direction direction_hudItem_5_11 = {11, 50, 50, 0, -1, images_hudItem_5_11, 1};
static Image* images_hudItem_5_12[1];
static Direction direction_hudItem_5_12 = {12, 50, 50, 0, -1, images_hudItem_5_12, 1};
static Image* images_hudItem_5_13[1];
static Direction direction_hudItem_5_13 = {13, 50, 50, 0, -1, images_hudItem_5_13, 1};
static Image* images_hudItem_5_14[1];
static Direction direction_hudItem_5_14 = {14, 50, 50, 0, -1, images_hudItem_5_14, 1};
static Image* images_hudItem_5_15[1];
static Direction direction_hudItem_5_15 = {15, 50, 50, 0, -1, images_hudItem_5_15, 1};
static Image* images_hudItem_5_16[1];
static Direction direction_hudItem_5_16 = {16, 50, 50, 0, -1, images_hudItem_5_16, 1};
static Image* images_hudItem_5_17[1];
static Direction direction_hudItem_5_17 = {17, 50, 50, 0, -1, images_hudItem_5_17, 1};
static Image* images_hudItem_5_18[1];
static Direction direction_hudItem_5_18 = {18, 50, 50, 0, -1, images_hudItem_5_18, 1};
static Image* images_hudItem_5_19[1];
static Direction direction_hudItem_5_19 = {19, 50, 50, 0, -1, images_hudItem_5_19, 1};
static Image* images_hudItem_5_20[1];
static Direction direction_hudItem_5_20 = {20, 50, 50, 0, -1, images_hudItem_5_20, 1};
static Image* images_hudItem_5_21[1];
static Direction direction_hudItem_5_21 = {21, 50, 50, 0, -1, images_hudItem_5_21, 1};
static Image* images_hudItem_5_22[1];
static Direction direction_hudItem_5_22 = {22, 50, 50, 0, -1, images_hudItem_5_22, 1};
static Image* images_hudItem_5_23[1];
static Direction direction_hudItem_5_23 = {23, 50, 50, 0, -1, images_hudItem_5_23, 1};
static Image* images_hudItem_5_24[1];
static Direction direction_hudItem_5_24 = {24, 50, 50, 0, -1, images_hudItem_5_24, 1};
static Image* images_hudItem_5_25[1];
static Direction direction_hudItem_5_25 = {25, 50, 50, 0, -1, images_hudItem_5_25, 1};
static Image* images_hudItem_5_26[1];
static Direction direction_hudItem_5_26 = {26, 50, 50, 0, -1, images_hudItem_5_26, 1};
static Image* images_hudItem_5_27[7];
static Direction direction_hudItem_5_27 = {27, 15, 15, 0, -1, images_hudItem_5_27, 7};
static Image* images_hudItem_5_28[1];
static Direction direction_hudItem_5_28 = {28, 50, 50, 0, -1, images_hudItem_5_28, 1};
static Image* images_hudItem_5_29[1];
static Direction direction_hudItem_5_29 = {29, 50, 50, 0, -1, images_hudItem_5_29, 1};
static Image* images_hudItem_5_30[1];
static Direction direction_hudItem_5_30 = {30, 50, 50, 0, -1, images_hudItem_5_30, 1};
static Image* images_hudItem_5_31[1];
static Direction direction_hudItem_5_31 = {31, 50, 50, 0, -1, images_hudItem_5_31, 1};
static Animation anim_hudItem_5 = {&direction_hudItem_5_0, &direction_hudItem_5_1, &direction_hudItem_5_2, &direction_hudItem_5_3, &direction_hudItem_5_4, &direction_hudItem_5_5, &direction_hudItem_5_6, &direction_hudItem_5_7, &direction_hudItem_5_8, &direction_hudItem_5_9, &direction_hudItem_5_10, &direction_hudItem_5_11, &direction_hudItem_5_12, &direction_hudItem_5_13, &direction_hudItem_5_14, &direction_hudItem_5_15, &direction_hudItem_5_16, &direction_hudItem_5_17, &direction_hudItem_5_18, &direction_hudItem_5_19, &direction_hudItem_5_20, &direction_hudItem_5_21, &direction_hudItem_5_22, &direction_hudItem_5_23, &direction_hudItem_5_24, &direction_hudItem_5_25, &direction_hudItem_5_26, &direction_hudItem_5_27, &direction_hudItem_5_28, &direction_hudItem_5_29, &direction_hudItem_5_30, &direction_hudItem_5_31};
static Image* images_hudItem_6_0[1];
static Direction direction_hudItem_6_0 = {0, 15, 15, 0, -1, images_hudItem_6_0, 1};
static Image* images_hudItem_6_1[1];
static Direction direction_hudItem_6_1 = {1, 15, 15, 0, -1, images_hudItem_6_1, 1};
static Image* images_hudItem_6_2[1];
static Direction direction_hudItem_6_2 = {2, 15, 15, 0, -1, images_hudItem_6_2, 1};
static Image* images_hudItem_6_3[1];
static Direction direction_hudItem_6_3 = {3, 50, 50, 0, -1, images_hudItem_6_3, 1};
static Image* images_hudItem_6_4[1];
static Direction direction_hudItem_6_4 = {4, 50, 50, 0, -1, images_hudItem_6_4, 1};
static Image* images_hudItem_6_5[1];
static Direction direction_hudItem_6_5 = {5, 50, 50, 0, -1, images_hudItem_6_5, 1};
static Image* images_hudItem_6_6[1];
static Direction direction_hudItem_6_6 = {6, 50, 50, 0, -1, images_hudItem_6_6, 1};
static Image* images_hudItem_6_7[1];
static Direction direction_hudItem_6_7 = {7, 50, 50, 0, -1, images_hudItem_6_7, 1};
static Image* images_hudItem_6_8[1];
static Direction direction_hudItem_6_8 = {8, 50, 50, 0, -1, images_hudItem_6_8, 1};
static Image* images_hudItem_6_9[1];
static Direction direction_hudItem_6_9 = {9, 50, 50, 0, -1, images_hudItem_6_9, 1};
static Image* images_hudItem_6_10[1];
static Direction direction_hudItem_6_10 = {10, 50, 50, 0, -1, images_hudItem_6_10, 1};
static Image* images_hudItem_6_11[1];
static Direction direction_hudItem_6_11 = {11, 50, 50, 0, -1, images_hudItem_6_11, 1};
static Image* images_hudItem_6_12[1];
static Direction direction_hudItem_6_12 = {12, 50, 50, 0, -1, images_hudItem_6_12, 1};
static Image* images_hudItem_6_13[1];
static Direction direction_hudItem_6_13 = {13, 50, 50, 0, -1, images_hudItem_6_13, 1};
static Image* images_hudItem_6_14[1];
static Direction direction_hudItem_6_14 = {14, 5, 5, 0, -1, images_hudItem_6_14, 1};
static Image* images_hudItem_6_15[1];
static Direction direction_hudItem_6_15 = {15, 5, 5, 0, -1, images_hudItem_6_15, 1};
static Image* images_hudItem_6_16[1];
static Direction direction_hudItem_6_16 = {16, 5, 5, 0, -1, images_hudItem_6_16, 1};
static Image* images_hudItem_6_17[1];
static Direction direction_hudItem_6_17 = {17, 50, 50, 0, -1, images_hudItem_6_17, 1};
static Image* images_hudItem_6_18[1];
static Direction direction_hudItem_6_18 = {18, 50, 50, 0, -1, images_hudItem_6_18, 1};
static Image* images_hudItem_6_19[1];
static Direction direction_hudItem_6_19 = {19, 50, 50, 0, -1, images_hudItem_6_19, 1};
static Image* images_hudItem_6_20[1];
static Direction direction_hudItem_6_20 = {20, 50, 50, 0, -1, images_hudItem_6_20, 1};
static Image* images_hudItem_6_21[1];
static Direction direction_hudItem_6_21 = {21, 50, 50, 0, -1, images_hudItem_6_21, 1};
static Image* images_hudItem_6_22[2];
static Direction direction_hudItem_6_22 = {22, 10, 10, 0, -1, images_hudItem_6_22, 2};
static Image* images_hudItem_6_23[1];
static Direction direction_hudItem_6_23 = {23, 50, 50, 0, -1, images_hudItem_6_23, 1};
static Image* images_hudItem_6_24[1];
static Direction direction_hudItem_6_24 = {24, 50, 50, 0, -1, images_hudItem_6_24, 1};
static Image* images_hudItem_6_25[1];
static Direction direction_hudItem_6_25 = {25, 50, 50, 0, -1, images_hudItem_6_25, 1};
static Image* images_hudItem_6_26[1];
static Direction direction_hudItem_6_26 = {26, 50, 50, 0, -1, images_hudItem_6_26, 1};
static Image* images_hudItem_6_27[1];
static Direction direction_hudItem_6_27 = {27, 50, 50, 0, -1, images_hudItem_6_27, 1};
static Image* images_hudItem_6_28[1];
static Direction direction_hudItem_6_28 = {28, 50, 50, 0, -1, images_hudItem_6_28, 1};
static Image* images_hudItem_6_29[1];
static Direction direction_hudItem_6_29 = {29, 50, 50, 0, -1, images_hudItem_6_29, 1};
static Image* images_hudItem_6_30[1];
static Direction direction_hudItem_6_30 = {30, 50, 50, 0, -1, images_hudItem_6_30, 1};
static Image* images_hudItem_6_31[1];
static Direction direction_hudItem_6_31 = {31, 50, 50, 0, -1, images_hudItem_6_31, 1};
static Animation anim_hudItem_6 = {&direction_hudItem_6_0, &direction_hudItem_6_1, &direction_hudItem_6_2, &direction_hudItem_6_3, &direction_hudItem_6_4, &direction_hudItem_6_5, &direction_hudItem_6_6, &direction_hudItem_6_7, &direction_hudItem_6_8, &direction_hudItem_6_9, &direction_hudItem_6_10, &direction_hudItem_6_11, &direction_hudItem_6_12, &direction_hudItem_6_13, &direction_hudItem_6_14, &direction_hudItem_6_15, &direction_hudItem_6_16, &direction_hudItem_6_17, &direction_hudItem_6_18, &direction_hudItem_6_19, &direction_hudItem_6_20, &direction_hudItem_6_21, &direction_hudItem_6_22, &direction_hudItem_6_23, &direction_hudItem_6_24, &direction_hudItem_6_25, &direction_hudItem_6_26, &direction_hudItem_6_27, &direction_hudItem_6_28, &direction_hudItem_6_29, &direction_hudItem_6_30, &direction_hudItem_6_31};
static Image* images_hudItem_7_0[1];
static Direction direction_hudItem_7_0 = {0, 50, 50, 0, -1, images_hudItem_7_0, 1};
static Image* images_hudItem_7_1[1];
static Direction direction_hudItem_7_1 = {1, 50, 50, 0, -1, images_hudItem_7_1, 1};
static Image* images_hudItem_7_2[1];
static Direction direction_hudItem_7_2 = {2, 50, 50, 0, -1, images_hudItem_7_2, 1};
static Image* images_hudItem_7_3[1];
static Direction direction_hudItem_7_3 = {3, 50, 50, 0, -1, images_hudItem_7_3, 1};
static Image* images_hudItem_7_4[1];
static Direction direction_hudItem_7_4 = {4, 50, 50, 0, -1, images_hudItem_7_4, 1};
static Image* images_hudItem_7_5[1];
static Direction direction_hudItem_7_5 = {5, 50, 50, 0, -1, images_hudItem_7_5, 1};
static Image* images_hudItem_7_6[1];
static Direction direction_hudItem_7_6 = {6, 50, 50, 0, -1, images_hudItem_7_6, 1};
static Image* images_hudItem_7_7[1];
static Direction direction_hudItem_7_7 = {7, 50, 50, 0, -1, images_hudItem_7_7, 1};
static Image* images_hudItem_7_8[1];
static Direction direction_hudItem_7_8 = {8, 50, 50, 0, -1, images_hudItem_7_8, 1};
static Image* images_hudItem_7_9[1];
static Direction direction_hudItem_7_9 = {9, 50, 50, 0, -1, images_hudItem_7_9, 1};
static Image* images_hudItem_7_10[1];
static Direction direction_hudItem_7_10 = {10, 50, 50, 0, -1, images_hudItem_7_10, 1};
static Image* images_hudItem_7_11[1];
static Direction direction_hudItem_7_11 = {11, 50, 50, 0, -1, images_hudItem_7_11, 1};
static Image* images_hudItem_7_12[1];
static Direction direction_hudItem_7_12 = {12, 50, 50, 0, -1, images_hudItem_7_12, 1};
static Image* images_hudItem_7_13[1];
static Direction direction_hudItem_7_13 = {13, 50, 50, 0, -1, images_hudItem_7_13, 1};
static Image* images_hudItem_7_14[1];
static Direction direction_hudItem_7_14 = {14, 50, 50, 0, -1, images_hudItem_7_14, 1};
static Image* images_hudItem_7_15[1];
static Direction direction_hudItem_7_15 = {15, 50, 50, 0, -1, images_hudItem_7_15, 1};
static Image* images_hudItem_7_16[1];
static Direction direction_hudItem_7_16 = {16, 50, 50, 0, -1, images_hudItem_7_16, 1};
static Image* images_hudItem_7_17[1];
static Direction direction_hudItem_7_17 = {17, 50, 50, 0, -1, images_hudItem_7_17, 1};
static Image* images_hudItem_7_18[1];
static Direction direction_hudItem_7_18 = {18, 50, 50, 0, -1, images_hudItem_7_18, 1};
static Image* images_hudItem_7_19[1];
static Direction direction_hudItem_7_19 = {19, 50, 50, 0, -1, images_hudItem_7_19, 1};
static Image* images_hudItem_7_20[1];
static Direction direction_hudItem_7_20 = {20, 50, 50, 0, -1, images_hudItem_7_20, 1};
static Image* images_hudItem_7_21[1];
static Direction direction_hudItem_7_21 = {21, 50, 50, 0, -1, images_hudItem_7_21, 1};
static Image* images_hudItem_7_22[1];
static Direction direction_hudItem_7_22 = {22, 50, 50, 0, -1, images_hudItem_7_22, 1};
static Image* images_hudItem_7_23[1];
static Direction direction_hudItem_7_23 = {23, 50, 50, 0, -1, images_hudItem_7_23, 1};
static Image* images_hudItem_7_24[1];
static Direction direction_hudItem_7_24 = {24, 50, 50, 0, -1, images_hudItem_7_24, 1};
static Image* images_hudItem_7_25[1];
static Direction direction_hudItem_7_25 = {25, 50, 50, 0, -1, images_hudItem_7_25, 1};
static Image* images_hudItem_7_26[1];
static Direction direction_hudItem_7_26 = {26, 50, 50, 0, -1, images_hudItem_7_26, 1};
static Image* images_hudItem_7_27[1];
static Direction direction_hudItem_7_27 = {27, 50, 50, 0, -1, images_hudItem_7_27, 1};
static Image* images_hudItem_7_28[1];
static Direction direction_hudItem_7_28 = {28, 50, 50, 0, -1, images_hudItem_7_28, 1};
static Image* images_hudItem_7_29[1];
static Direction direction_hudItem_7_29 = {29, 50, 50, 0, -1, images_hudItem_7_29, 1};
static Image* images_hudItem_7_30[1];
static Direction direction_hudItem_7_30 = {30, 50, 50, 0, -1, images_hudItem_7_30, 1};
static Image* images_hudItem_7_31[1];
static Direction direction_hudItem_7_31 = {31, 50, 50, 0, -1, images_hudItem_7_31, 1};
static Animation anim_hudItem_7 = {&direction_hudItem_7_0, &direction_hudItem_7_1, &direction_hudItem_7_2, &direction_hudItem_7_3, &direction_hudItem_7_4, &direction_hudItem_7_5, &direction_hudItem_7_6, &direction_hudItem_7_7, &direction_hudItem_7_8, &direction_hudItem_7_9, &direction_hudItem_7_10, &direction_hudItem_7_11, &direction_hudItem_7_12, &direction_hudItem_7_13, &direction_hudItem_7_14, &direction_hudItem_7_15, &direction_hudItem_7_16, &direction_hudItem_7_17, &direction_hudItem_7_18, &direction_hudItem_7_19, &direction_hudItem_7_20, &direction_hudItem_7_21, &direction_hudItem_7_22, &direction_hudItem_7_23, &direction_hudItem_7_24, &direction_hudItem_7_25, &direction_hudItem_7_26, &direction_hudItem_7_27, &direction_hudItem_7_28, &direction_hudItem_7_29, &direction_hudItem_7_30, &direction_hudItem_7_31};
static Image* images_hudItem_8_0[1];
static Direction direction_hudItem_8_0 = {0, 50, 50, 0, -1, images_hudItem_8_0, 1};
static Image* images_hudItem_8_1[1];
static Direction direction_hudItem_8_1 = {1, 50, 50, 0, -1, images_hudItem_8_1, 1};
static Image* images_hudItem_8_2[1];
static Direction direction_hudItem_8_2 = {2, 50, 50, 0, -1, images_hudItem_8_2, 1};
static Image* images_hudItem_8_3[1];
static Direction direction_hudItem_8_3 = {3, 50, 50, 0, -1, images_hudItem_8_3, 1};
static Image* images_hudItem_8_4[1];
static Direction direction_hudItem_8_4 = {4, 50, 50, 0, -1, images_hudItem_8_4, 1};
static Image* images_hudItem_8_5[1];
static Direction direction_hudItem_8_5 = {5, 50, 50, 0, -1, images_hudItem_8_5, 1};
static Image* images_hudItem_8_6[1];
static Direction direction_hudItem_8_6 = {6, 50, 50, 0, -1, images_hudItem_8_6, 1};
static Image* images_hudItem_8_7[1];
static Direction direction_hudItem_8_7 = {7, 50, 50, 0, -1, images_hudItem_8_7, 1};
static Image* images_hudItem_8_8[1];
static Direction direction_hudItem_8_8 = {8, 50, 50, 0, -1, images_hudItem_8_8, 1};
static Image* images_hudItem_8_9[1];
static Direction direction_hudItem_8_9 = {9, 50, 50, 0, -1, images_hudItem_8_9, 1};
static Image* images_hudItem_8_10[1];
static Direction direction_hudItem_8_10 = {10, 50, 50, 0, -1, images_hudItem_8_10, 1};
static Image* images_hudItem_8_11[1];
static Direction direction_hudItem_8_11 = {11, 50, 50, 0, -1, images_hudItem_8_11, 1};
static Image* images_hudItem_8_12[1];
static Direction direction_hudItem_8_12 = {12, 50, 50, 0, -1, images_hudItem_8_12, 1};
static Image* images_hudItem_8_13[1];
static Direction direction_hudItem_8_13 = {13, 50, 50, 0, -1, images_hudItem_8_13, 1};
static Image* images_hudItem_8_14[1];
static Direction direction_hudItem_8_14 = {14, 50, 50, 0, -1, images_hudItem_8_14, 1};
static Image* images_hudItem_8_15[1];
static Direction direction_hudItem_8_15 = {15, 50, 50, 0, -1, images_hudItem_8_15, 1};
static Image* images_hudItem_8_16[1];
static Direction direction_hudItem_8_16 = {16, 50, 50, 0, -1, images_hudItem_8_16, 1};
static Image* images_hudItem_8_17[1];
static Direction direction_hudItem_8_17 = {17, 50, 50, 0, -1, images_hudItem_8_17, 1};
static Image* images_hudItem_8_18[1];
static Direction direction_hudItem_8_18 = {18, 50, 50, 0, -1, images_hudItem_8_18, 1};
static Image* images_hudItem_8_19[1];
static Direction direction_hudItem_8_19 = {19, 50, 50, 0, -1, images_hudItem_8_19, 1};
static Image* images_hudItem_8_20[1];
static Direction direction_hudItem_8_20 = {20, 50, 50, 0, -1, images_hudItem_8_20, 1};
static Image* images_hudItem_8_21[1];
static Direction direction_hudItem_8_21 = {21, 50, 50, 0, -1, images_hudItem_8_21, 1};
static Image* images_hudItem_8_22[1];
static Direction direction_hudItem_8_22 = {22, 50, 50, 0, -1, images_hudItem_8_22, 1};
static Image* images_hudItem_8_23[1];
static Direction direction_hudItem_8_23 = {23, 50, 50, 0, -1, images_hudItem_8_23, 1};
static Image* images_hudItem_8_24[1];
static Direction direction_hudItem_8_24 = {24, 50, 50, 0, -1, images_hudItem_8_24, 1};
static Image* images_hudItem_8_25[1];
static Direction direction_hudItem_8_25 = {25, 50, 50, 0, -1, images_hudItem_8_25, 1};
static Image* images_hudItem_8_26[1];
static Direction direction_hudItem_8_26 = {26, 50, 50, 0, -1, images_hudItem_8_26, 1};
static Image* images_hudItem_8_27[1];
static Direction direction_hudItem_8_27 = {27, 50, 50, 0, -1, images_hudItem_8_27, 1};
static Image* images_hudItem_8_28[1];
static Direction direction_hudItem_8_28 = {28, 50, 50, 0, -1, images_hudItem_8_28, 1};
static Image* images_hudItem_8_29[1];
static Direction direction_hudItem_8_29 = {29, 50, 50, 0, -1, images_hudItem_8_29, 1};
static Image* images_hudItem_8_30[1];
static Direction direction_hudItem_8_30 = {30, 50, 50, 0, -1, images_hudItem_8_30, 1};
static Image* images_hudItem_8_31[1];
static Direction direction_hudItem_8_31 = {31, 50, 50, 0, -1, images_hudItem_8_31, 1};
static Animation anim_hudItem_8 = {&direction_hudItem_8_0, &direction_hudItem_8_1, &direction_hudItem_8_2, &direction_hudItem_8_3, &direction_hudItem_8_4, &direction_hudItem_8_5, &direction_hudItem_8_6, &direction_hudItem_8_7, &direction_hudItem_8_8, &direction_hudItem_8_9, &direction_hudItem_8_10, &direction_hudItem_8_11, &direction_hudItem_8_12, &direction_hudItem_8_13, &direction_hudItem_8_14, &direction_hudItem_8_15, &direction_hudItem_8_16, &direction_hudItem_8_17, &direction_hudItem_8_18, &direction_hudItem_8_19, &direction_hudItem_8_20, &direction_hudItem_8_21, &direction_hudItem_8_22, &direction_hudItem_8_23, &direction_hudItem_8_24, &direction_hudItem_8_25, &direction_hudItem_8_26, &direction_hudItem_8_27, &direction_hudItem_8_28, &direction_hudItem_8_29, &direction_hudItem_8_30, &direction_hudItem_8_31};
static Image* images_hudItem_9_0[1];
static Direction direction_hudItem_9_0 = {0, 50, 50, 0, -1, images_hudItem_9_0, 1};
static Image* images_hudItem_9_1[1];
static Direction direction_hudItem_9_1 = {1, 50, 50, 0, -1, images_hudItem_9_1, 1};
static Image* images_hudItem_9_2[1];
static Direction direction_hudItem_9_2 = {2, 50, 50, 0, -1, images_hudItem_9_2, 1};
static Image* images_hudItem_9_3[1];
static Direction direction_hudItem_9_3 = {3, 50, 50, 0, -1, images_hudItem_9_3, 1};
static Image* images_hudItem_9_4[1];
static Direction direction_hudItem_9_4 = {4, 50, 50, 0, -1, images_hudItem_9_4, 1};
static Image* images_hudItem_9_5[1];
static Direction direction_hudItem_9_5 = {5, 50, 50, 0, -1, images_hudItem_9_5, 1};
static Image* images_hudItem_9_6[1];
static Direction direction_hudItem_9_6 = {6, 50, 50, 0, -1, images_hudItem_9_6, 1};
static Image* images_hudItem_9_7[1];
static Direction direction_hudItem_9_7 = {7, 50, 50, 0, -1, images_hudItem_9_7, 1};
static Image* images_hudItem_9_8[1];
static Direction direction_hudItem_9_8 = {8, 50, 50, 0, -1, images_hudItem_9_8, 1};
static Image* images_hudItem_9_9[1];
static Direction direction_hudItem_9_9 = {9, 50, 50, 0, -1, images_hudItem_9_9, 1};
static Image* images_hudItem_9_10[1];
static Direction direction_hudItem_9_10 = {10, 50, 50, 0, -1, images_hudItem_9_10, 1};
static Image* images_hudItem_9_11[1];
static Direction direction_hudItem_9_11 = {11, 50, 50, 0, -1, images_hudItem_9_11, 1};
static Image* images_hudItem_9_12[1];
static Direction direction_hudItem_9_12 = {12, 50, 50, 0, -1, images_hudItem_9_12, 1};
static Image* images_hudItem_9_13[1];
static Direction direction_hudItem_9_13 = {13, 50, 50, 0, -1, images_hudItem_9_13, 1};
static Image* images_hudItem_9_14[1];
static Direction direction_hudItem_9_14 = {14, 50, 50, 0, -1, images_hudItem_9_14, 1};
static Image* images_hudItem_9_15[1];
static Direction direction_hudItem_9_15 = {15, 50, 50, 0, -1, images_hudItem_9_15, 1};
static Image* images_hudItem_9_16[1];
static Direction direction_hudItem_9_16 = {16, 50, 50, 0, -1, images_hudItem_9_16, 1};
static Image* images_hudItem_9_17[1];
static Direction direction_hudItem_9_17 = {17, 50, 50, 0, -1, images_hudItem_9_17, 1};
static Image* images_hudItem_9_18[1];
static Direction direction_hudItem_9_18 = {18, 50, 50, 0, -1, images_hudItem_9_18, 1};
static Image* images_hudItem_9_19[1];
static Direction direction_hudItem_9_19 = {19, 50, 50, 0, -1, images_hudItem_9_19, 1};
static Image* images_hudItem_9_20[1];
static Direction direction_hudItem_9_20 = {20, 50, 50, 0, -1, images_hudItem_9_20, 1};
static Image* images_hudItem_9_21[1];
static Direction direction_hudItem_9_21 = {21, 50, 50, 0, -1, images_hudItem_9_21, 1};
static Image* images_hudItem_9_22[1];
static Direction direction_hudItem_9_22 = {22, 50, 50, 0, -1, images_hudItem_9_22, 1};
static Image* images_hudItem_9_23[1];
static Direction direction_hudItem_9_23 = {23, 50, 50, 0, -1, images_hudItem_9_23, 1};
static Image* images_hudItem_9_24[1];
static Direction direction_hudItem_9_24 = {24, 50, 50, 0, -1, images_hudItem_9_24, 1};
static Image* images_hudItem_9_25[1];
static Direction direction_hudItem_9_25 = {25, 50, 50, 0, -1, images_hudItem_9_25, 1};
static Image* images_hudItem_9_26[1];
static Direction direction_hudItem_9_26 = {26, 50, 50, 0, -1, images_hudItem_9_26, 1};
static Image* images_hudItem_9_27[1];
static Direction direction_hudItem_9_27 = {27, 50, 50, 0, -1, images_hudItem_9_27, 1};
static Image* images_hudItem_9_28[1];
static Direction direction_hudItem_9_28 = {28, 50, 50, 0, -1, images_hudItem_9_28, 1};
static Image* images_hudItem_9_29[1];
static Direction direction_hudItem_9_29 = {29, 50, 50, 0, -1, images_hudItem_9_29, 1};
static Image* images_hudItem_9_30[1];
static Direction direction_hudItem_9_30 = {30, 50, 50, 0, -1, images_hudItem_9_30, 1};
static Image* images_hudItem_9_31[1];
static Direction direction_hudItem_9_31 = {31, 50, 50, 0, -1, images_hudItem_9_31, 1};
static Animation anim_hudItem_9 = {&direction_hudItem_9_0, &direction_hudItem_9_1, &direction_hudItem_9_2, &direction_hudItem_9_3, &direction_hudItem_9_4, &direction_hudItem_9_5, &direction_hudItem_9_6, &direction_hudItem_9_7, &direction_hudItem_9_8, &direction_hudItem_9_9, &direction_hudItem_9_10, &direction_hudItem_9_11, &direction_hudItem_9_12, &direction_hudItem_9_13, &direction_hudItem_9_14, &direction_hudItem_9_15, &direction_hudItem_9_16, &direction_hudItem_9_17, &direction_hudItem_9_18, &direction_hudItem_9_19, &direction_hudItem_9_20, &direction_hudItem_9_21, &direction_hudItem_9_22, &direction_hudItem_9_23, &direction_hudItem_9_24, &direction_hudItem_9_25, &direction_hudItem_9_26, &direction_hudItem_9_27, &direction_hudItem_9_28, &direction_hudItem_9_29, &direction_hudItem_9_30, &direction_hudItem_9_31};
static Image* images_hudItem_10_0[1];
static Direction direction_hudItem_10_0 = {0, 50, 50, 0, -1, images_hudItem_10_0, 1};
static Image* images_hudItem_10_1[1];
static Direction direction_hudItem_10_1 = {1, 50, 50, 0, -1, images_hudItem_10_1, 1};
static Image* images_hudItem_10_2[1];
static Direction direction_hudItem_10_2 = {2, 50, 50, 0, -1, images_hudItem_10_2, 1};
static Image* images_hudItem_10_3[8];
static Direction direction_hudItem_10_3 = {3, 5, 5, 0, -1, images_hudItem_10_3, 8};
static Image* images_hudItem_10_4[1];
static Direction direction_hudItem_10_4 = {4, 50, 50, 0, -1, images_hudItem_10_4, 1};
static Image* images_hudItem_10_5[1];
static Direction direction_hudItem_10_5 = {5, 50, 50, 0, -1, images_hudItem_10_5, 1};
static Image* images_hudItem_10_6[1];
static Direction direction_hudItem_10_6 = {6, 50, 50, 0, -1, images_hudItem_10_6, 1};
static Image* images_hudItem_10_7[1];
static Direction direction_hudItem_10_7 = {7, 50, 50, 0, -1, images_hudItem_10_7, 1};
static Image* images_hudItem_10_8[1];
static Direction direction_hudItem_10_8 = {8, 50, 50, 0, -1, images_hudItem_10_8, 1};
static Image* images_hudItem_10_9[1];
static Direction direction_hudItem_10_9 = {9, 50, 50, 0, -1, images_hudItem_10_9, 1};
static Image* images_hudItem_10_10[1];
static Direction direction_hudItem_10_10 = {10, 50, 50, 0, -1, images_hudItem_10_10, 1};
static Image* images_hudItem_10_11[1];
static Direction direction_hudItem_10_11 = {11, 50, 50, 0, -1, images_hudItem_10_11, 1};
static Image* images_hudItem_10_12[1];
static Direction direction_hudItem_10_12 = {12, 50, 50, 0, -1, images_hudItem_10_12, 1};
static Image* images_hudItem_10_13[1];
static Direction direction_hudItem_10_13 = {13, 50, 50, 0, -1, images_hudItem_10_13, 1};
static Image* images_hudItem_10_14[1];
static Direction direction_hudItem_10_14 = {14, 50, 50, 0, -1, images_hudItem_10_14, 1};
static Image* images_hudItem_10_15[1];
static Direction direction_hudItem_10_15 = {15, 50, 50, 0, -1, images_hudItem_10_15, 1};
static Image* images_hudItem_10_16[1];
static Direction direction_hudItem_10_16 = {16, 50, 50, 0, -1, images_hudItem_10_16, 1};
static Image* images_hudItem_10_17[1];
static Direction direction_hudItem_10_17 = {17, 50, 50, 0, -1, images_hudItem_10_17, 1};
static Image* images_hudItem_10_18[1];
static Direction direction_hudItem_10_18 = {18, 50, 50, 0, -1, images_hudItem_10_18, 1};
static Image* images_hudItem_10_19[1];
static Direction direction_hudItem_10_19 = {19, 50, 50, 0, -1, images_hudItem_10_19, 1};
static Image* images_hudItem_10_20[1];
static Direction direction_hudItem_10_20 = {20, 50, 50, 0, -1, images_hudItem_10_20, 1};
static Image* images_hudItem_10_21[1];
static Direction direction_hudItem_10_21 = {21, 50, 50, 0, -1, images_hudItem_10_21, 1};
static Image* images_hudItem_10_22[1];
static Direction direction_hudItem_10_22 = {22, 50, 50, 0, -1, images_hudItem_10_22, 1};
static Image* images_hudItem_10_23[1];
static Direction direction_hudItem_10_23 = {23, 50, 50, 0, -1, images_hudItem_10_23, 1};
static Image* images_hudItem_10_24[1];
static Direction direction_hudItem_10_24 = {24, 50, 50, 0, -1, images_hudItem_10_24, 1};
static Animation anim_hudItem_10 = {&direction_hudItem_10_0, &direction_hudItem_10_1, &direction_hudItem_10_2, &direction_hudItem_10_3, &direction_hudItem_10_4, &direction_hudItem_10_5, &direction_hudItem_10_6, &direction_hudItem_10_7, &direction_hudItem_10_8, &direction_hudItem_10_9, &direction_hudItem_10_10, &direction_hudItem_10_11, &direction_hudItem_10_12, &direction_hudItem_10_13, &direction_hudItem_10_14, &direction_hudItem_10_15, &direction_hudItem_10_16, &direction_hudItem_10_17, &direction_hudItem_10_18, &direction_hudItem_10_19, &direction_hudItem_10_20, &direction_hudItem_10_21, &direction_hudItem_10_22, &direction_hudItem_10_23, &direction_hudItem_10_24, &direction_hudItem_10_24, &direction_hudItem_10_24, &direction_hudItem_10_24, NULL, &direction_hudItem_10_0, &direction_hudItem_10_0, &direction_hudItem_10_0};
static Animation * anim_array_hudItem[11] = {&anim_hudItem_0, &anim_hudItem_1, &anim_hudItem_2, NULL, NULL, &anim_hudItem_5, &anim_hudItem_6, &anim_hudItem_7, &anim_hudItem_8, &anim_hudItem_9, &anim_hudItem_10};
static Animations anim_hudItem = {11, &anim_array_hudItem[0]};
static bool anim_hudItem_initialized;
class HudItem : public Active
{
public:
    HudItem(int x, int y) : Active(x, y, hudItem_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Items_HUD", 9);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_hudItem;
        if (!anim_hudItem_initialized) {
            anim_hudItem_initialized = true;
            images_hudItem_0_0[0] = get_internal_image(237);
            images_hudItem_0_1[0] = get_internal_image(238);
            images_hudItem_0_2[0] = get_internal_image(1269);
            images_hudItem_0_3[0] = get_internal_image(279);
            images_hudItem_0_4[0] = get_internal_image(287);
            images_hudItem_0_5[0] = get_internal_image(324);
            images_hudItem_0_6[0] = get_internal_image(325);
            images_hudItem_0_7[0] = get_internal_image(252);
            images_hudItem_0_8[0] = get_internal_image(328);
            images_hudItem_0_9[0] = get_internal_image(327);
            images_hudItem_0_10[0] = get_internal_image(288);
            images_hudItem_0_11[0] = get_internal_image(2130);
            images_hudItem_0_12[0] = get_internal_image(330);
            images_hudItem_0_13[0] = get_internal_image(405);
            images_hudItem_0_14[0] = get_internal_image(74);
            images_hudItem_0_15[0] = get_internal_image(246);
            images_hudItem_0_16[0] = get_internal_image(284);
            images_hudItem_0_17[0] = get_internal_image(400);
            images_hudItem_0_18[0] = get_internal_image(221);
            images_hudItem_0_19[0] = get_internal_image(3);
            images_hudItem_0_20[0] = get_internal_image(9);
            images_hudItem_0_21[0] = get_internal_image(4);
            images_hudItem_0_22[0] = get_internal_image(12);
            images_hudItem_0_23[0] = get_internal_image(937);
            images_hudItem_0_24[0] = get_internal_image(13);
            images_hudItem_0_25[0] = get_internal_image(14);
            images_hudItem_0_26[0] = get_internal_image(29);
            images_hudItem_0_27[0] = get_internal_image(948);
            images_hudItem_0_28[0] = get_internal_image(947);
            images_hudItem_0_29[0] = get_internal_image(105);
            images_hudItem_0_30[0] = get_internal_image(108);
            images_hudItem_0_31[0] = get_internal_image(1079);
            images_hudItem_1_0[0] = get_internal_image(109);
            images_hudItem_1_1[0] = get_internal_image(110);
            images_hudItem_1_2[0] = get_internal_image(117);
            images_hudItem_1_3[0] = get_internal_image(122);
            images_hudItem_1_4[0] = get_internal_image(192);
            images_hudItem_1_5[0] = get_internal_image(10);
            images_hudItem_1_6[0] = get_internal_image(397);
            images_hudItem_1_7[0] = get_internal_image(398);
            images_hudItem_1_8[0] = get_internal_image(401);
            images_hudItem_1_9[0] = get_internal_image(116);
            images_hudItem_1_10[0] = get_internal_image(403);
            images_hudItem_1_11[0] = get_internal_image(1233);
            images_hudItem_1_12[0] = get_internal_image(486);
            images_hudItem_1_13[0] = get_internal_image(477);
            images_hudItem_1_14[0] = get_internal_image(515);
            images_hudItem_1_15[0] = get_internal_image(533);
            images_hudItem_1_16[0] = get_internal_image(514);
            images_hudItem_1_17[0] = get_internal_image(534);
            images_hudItem_1_18[0] = get_internal_image(654);
            images_hudItem_1_19[0] = get_internal_image(469);
            images_hudItem_1_20[0] = get_internal_image(536);
            images_hudItem_1_21[0] = get_internal_image(657);
            images_hudItem_1_22[0] = get_internal_image(329);
            images_hudItem_1_23[0] = get_internal_image(153);
            images_hudItem_1_24[0] = get_internal_image(2374);
            images_hudItem_1_24[1] = get_internal_image(2230);
            images_hudItem_1_25[0] = get_internal_image(2236);
            images_hudItem_1_26[0] = get_internal_image(1235);
            images_hudItem_1_27[0] = get_internal_image(658);
            images_hudItem_1_28[0] = get_internal_image(685);
            images_hudItem_1_29[0] = get_internal_image(956);
            images_hudItem_1_30[0] = get_internal_image(692);
            images_hudItem_1_31[0] = get_internal_image(69);
            images_hudItem_2_0[0] = get_internal_image(722);
            images_hudItem_2_1[0] = get_internal_image(699);
            images_hudItem_2_2[0] = get_internal_image(709);
            images_hudItem_2_3[0] = get_internal_image(139);
            images_hudItem_2_4[0] = get_internal_image(256);
            images_hudItem_2_5[0] = get_internal_image(345);
            images_hudItem_2_6[0] = get_internal_image(455);
            images_hudItem_2_7[0] = get_internal_image(658);
            images_hudItem_2_8[0] = get_internal_image(869);
            images_hudItem_2_9[0] = get_internal_image(873);
            images_hudItem_2_10[0] = get_internal_image(866);
            images_hudItem_2_11[0] = get_internal_image(922);
            images_hudItem_2_12[0] = get_internal_image(857);
            images_hudItem_2_13[0] = get_internal_image(927);
            images_hudItem_2_14[0] = get_internal_image(455);
            images_hudItem_2_15[0] = get_internal_image(19);
            images_hudItem_2_16[0] = get_internal_image(31);
            images_hudItem_2_17[0] = get_internal_image(54);
            images_hudItem_2_18[0] = get_internal_image(658);
            images_hudItem_2_19[0] = get_internal_image(658);
            images_hudItem_2_20[0] = get_internal_image(326);
            images_hudItem_2_21[0] = get_internal_image(338);
            images_hudItem_2_22[0] = get_internal_image(341);
            images_hudItem_2_23[0] = get_internal_image(487);
            images_hudItem_2_24[0] = get_internal_image(490);
            images_hudItem_2_25[0] = get_internal_image(658);
            images_hudItem_2_26[0] = get_internal_image(641);
            images_hudItem_2_27[0] = get_internal_image(785);
            images_hudItem_2_28[0] = get_internal_image(809);
            images_hudItem_2_29[0] = get_internal_image(811);
            images_hudItem_2_30[0] = get_internal_image(784);
            images_hudItem_2_31[0] = get_internal_image(831);
            images_hudItem_5_0[0] = get_internal_image(812);
            images_hudItem_5_1[0] = get_internal_image(843);
            images_hudItem_5_2[0] = get_internal_image(852);
            images_hudItem_5_3[0] = get_internal_image(775);
            images_hudItem_5_4[0] = get_internal_image(876);
            images_hudItem_5_5[0] = get_internal_image(908);
            images_hudItem_5_6[0] = get_internal_image(933);
            images_hudItem_5_7[0] = get_internal_image(875);
            images_hudItem_5_8[0] = get_internal_image(875);
            images_hudItem_5_9[0] = get_internal_image(934);
            images_hudItem_5_10[0] = get_internal_image(939);
            images_hudItem_5_11[0] = get_internal_image(938);
            images_hudItem_5_12[0] = get_internal_image(95);
            images_hudItem_5_13[0] = get_internal_image(936);
            images_hudItem_5_14[0] = get_internal_image(943);
            images_hudItem_5_15[0] = get_internal_image(942);
            images_hudItem_5_16[0] = get_internal_image(941);
            images_hudItem_5_17[0] = get_internal_image(945);
            images_hudItem_5_18[0] = get_internal_image(324);
            images_hudItem_5_19[0] = get_internal_image(324);
            images_hudItem_5_20[0] = get_internal_image(954);
            images_hudItem_5_21[0] = get_internal_image(958);
            images_hudItem_5_22[0] = get_internal_image(398);
            images_hudItem_5_23[0] = get_internal_image(398);
            images_hudItem_5_24[0] = get_internal_image(956);
            images_hudItem_5_25[0] = get_internal_image(956);
            images_hudItem_5_26[0] = get_internal_image(828);
            images_hudItem_5_27[0] = get_internal_image(770);
            images_hudItem_5_27[1] = get_internal_image(829);
            images_hudItem_5_27[2] = get_internal_image(468);
            images_hudItem_5_27[3] = get_internal_image(468);
            images_hudItem_5_27[4] = get_internal_image(468);
            images_hudItem_5_27[5] = get_internal_image(468);
            images_hudItem_5_27[6] = get_internal_image(468);
            images_hudItem_5_28[0] = get_internal_image(1003);
            images_hudItem_5_29[0] = get_internal_image(1080);
            images_hudItem_5_30[0] = get_internal_image(127);
            images_hudItem_5_31[0] = get_internal_image(1230);
            images_hudItem_6_0[0] = get_internal_image(1242);
            images_hudItem_6_1[0] = get_internal_image(1240);
            images_hudItem_6_2[0] = get_internal_image(306);
            images_hudItem_6_3[0] = get_internal_image(285);
            images_hudItem_6_4[0] = get_internal_image(91);
            images_hudItem_6_5[0] = get_internal_image(337);
            images_hudItem_6_6[0] = get_internal_image(118);
            images_hudItem_6_7[0] = get_internal_image(611);
            images_hudItem_6_8[0] = get_internal_image(766);
            images_hudItem_6_9[0] = get_internal_image(1048);
            images_hudItem_6_10[0] = get_internal_image(26);
            images_hudItem_6_11[0] = get_internal_image(863);
            images_hudItem_6_12[0] = get_internal_image(1427);
            images_hudItem_6_13[0] = get_internal_image(1479);
            images_hudItem_6_14[0] = get_internal_image(1239);
            images_hudItem_6_15[0] = get_internal_image(1231);
            images_hudItem_6_16[0] = get_internal_image(734);
            images_hudItem_6_17[0] = get_internal_image(28);
            images_hudItem_6_18[0] = get_internal_image(305);
            images_hudItem_6_19[0] = get_internal_image(365);
            images_hudItem_6_20[0] = get_internal_image(402);
            images_hudItem_6_21[0] = get_internal_image(27);
            images_hudItem_6_22[0] = get_internal_image(2392);
            images_hudItem_6_22[1] = get_internal_image(606);
            images_hudItem_6_23[0] = get_internal_image(914);
            images_hudItem_6_24[0] = get_internal_image(640);
            images_hudItem_6_25[0] = get_internal_image(1096);
            images_hudItem_6_26[0] = get_internal_image(1097);
            images_hudItem_6_27[0] = get_internal_image(1094);
            images_hudItem_6_28[0] = get_internal_image(1443);
            images_hudItem_6_29[0] = get_internal_image(1222);
            images_hudItem_6_30[0] = get_internal_image(1511);
            images_hudItem_6_31[0] = get_internal_image(1448);
            images_hudItem_7_0[0] = get_internal_image(1533);
            images_hudItem_7_1[0] = get_internal_image(1537);
            images_hudItem_7_2[0] = get_internal_image(1536);
            images_hudItem_7_3[0] = get_internal_image(1539);
            images_hudItem_7_4[0] = get_internal_image(1550);
            images_hudItem_7_5[0] = get_internal_image(1541);
            images_hudItem_7_6[0] = get_internal_image(1552);
            images_hudItem_7_7[0] = get_internal_image(1551);
            images_hudItem_7_8[0] = get_internal_image(1554);
            images_hudItem_7_9[0] = get_internal_image(1555);
            images_hudItem_7_10[0] = get_internal_image(1556);
            images_hudItem_7_11[0] = get_internal_image(1557);
            images_hudItem_7_12[0] = get_internal_image(1553);
            images_hudItem_7_13[0] = get_internal_image(1558);
            images_hudItem_7_14[0] = get_internal_image(1585);
            images_hudItem_7_15[0] = get_internal_image(1484);
            images_hudItem_7_16[0] = get_internal_image(1571);
            images_hudItem_7_17[0] = get_internal_image(1564);
            images_hudItem_7_18[0] = get_internal_image(1572);
            images_hudItem_7_19[0] = get_internal_image(1573);
            images_hudItem_7_20[0] = get_internal_image(1589);
            images_hudItem_7_21[0] = get_internal_image(2170);
            images_hudItem_7_22[0] = get_internal_image(2165);
            images_hudItem_7_23[0] = get_internal_image(679);
            images_hudItem_7_24[0] = get_internal_image(2174);
            images_hudItem_7_25[0] = get_internal_image(2172);
            images_hudItem_7_26[0] = get_internal_image(2177);
            images_hudItem_7_27[0] = get_internal_image(2246);
            images_hudItem_7_28[0] = get_internal_image(2302);
            images_hudItem_7_29[0] = get_internal_image(1251);
            images_hudItem_7_30[0] = get_internal_image(2427);
            images_hudItem_7_31[0] = get_internal_image(2435);
            images_hudItem_8_0[0] = get_internal_image(2439);
            images_hudItem_8_1[0] = get_internal_image(2440);
            images_hudItem_8_2[0] = get_internal_image(2441);
            images_hudItem_8_3[0] = get_internal_image(2496);
            images_hudItem_8_4[0] = get_internal_image(2449);
            images_hudItem_8_5[0] = get_internal_image(2450);
            images_hudItem_8_6[0] = get_internal_image(2453);
            images_hudItem_8_7[0] = get_internal_image(2497);
            images_hudItem_8_8[0] = get_internal_image(2459);
            images_hudItem_8_9[0] = get_internal_image(2462);
            images_hudItem_8_10[0] = get_internal_image(2465);
            images_hudItem_8_11[0] = get_internal_image(2457);
            images_hudItem_8_12[0] = get_internal_image(2489);
            images_hudItem_8_13[0] = get_internal_image(2491);
            images_hudItem_8_14[0] = get_internal_image(2490);
            images_hudItem_8_15[0] = get_internal_image(2470);
            images_hudItem_8_16[0] = get_internal_image(2492);
            images_hudItem_8_17[0] = get_internal_image(2493);
            images_hudItem_8_18[0] = get_internal_image(2746);
            images_hudItem_8_19[0] = get_internal_image(2739);
            images_hudItem_8_20[0] = get_internal_image(2844);
            images_hudItem_8_21[0] = get_internal_image(2846);
            images_hudItem_8_22[0] = get_internal_image(2848);
            images_hudItem_8_23[0] = get_internal_image(2849);
            images_hudItem_8_24[0] = get_internal_image(2852);
            images_hudItem_8_25[0] = get_internal_image(2859);
            images_hudItem_8_26[0] = get_internal_image(2871);
            images_hudItem_8_27[0] = get_internal_image(2853);
            images_hudItem_8_28[0] = get_internal_image(2877);
            images_hudItem_8_29[0] = get_internal_image(2881);
            images_hudItem_8_30[0] = get_internal_image(2883);
            images_hudItem_8_31[0] = get_internal_image(2882);
            images_hudItem_9_0[0] = get_internal_image(2885);
            images_hudItem_9_1[0] = get_internal_image(2884);
            images_hudItem_9_2[0] = get_internal_image(2887);
            images_hudItem_9_3[0] = get_internal_image(2888);
            images_hudItem_9_4[0] = get_internal_image(2886);
            images_hudItem_9_5[0] = get_internal_image(2889);
            images_hudItem_9_6[0] = get_internal_image(2890);
            images_hudItem_9_7[0] = get_internal_image(2891);
            images_hudItem_9_8[0] = get_internal_image(2892);
            images_hudItem_9_9[0] = get_internal_image(2893);
            images_hudItem_9_10[0] = get_internal_image(2894);
            images_hudItem_9_11[0] = get_internal_image(2896);
            images_hudItem_9_12[0] = get_internal_image(2895);
            images_hudItem_9_13[0] = get_internal_image(3264);
            images_hudItem_9_14[0] = get_internal_image(3361);
            images_hudItem_9_15[0] = get_internal_image(3762);
            images_hudItem_9_16[0] = get_internal_image(3366);
            images_hudItem_9_17[0] = get_internal_image(3369);
            images_hudItem_9_18[0] = get_internal_image(3372);
            images_hudItem_9_19[0] = get_internal_image(3375);
            images_hudItem_9_20[0] = get_internal_image(3376);
            images_hudItem_9_21[0] = get_internal_image(3374);
            images_hudItem_9_22[0] = get_internal_image(3377);
            images_hudItem_9_23[0] = get_internal_image(3379);
            images_hudItem_9_24[0] = get_internal_image(3378);
            images_hudItem_9_25[0] = get_internal_image(3380);
            images_hudItem_9_26[0] = get_internal_image(3381);
            images_hudItem_9_27[0] = get_internal_image(3383);
            images_hudItem_9_28[0] = get_internal_image(3384);
            images_hudItem_9_29[0] = get_internal_image(3385);
            images_hudItem_9_30[0] = get_internal_image(3386);
            images_hudItem_9_31[0] = get_internal_image(3387);
            images_hudItem_10_0[0] = get_internal_image(3382);
            images_hudItem_10_1[0] = get_internal_image(3388);
            images_hudItem_10_2[0] = get_internal_image(3390);
            images_hudItem_10_3[0] = get_internal_image(3886);
            images_hudItem_10_3[1] = get_internal_image(3886);
            images_hudItem_10_3[2] = get_internal_image(3886);
            images_hudItem_10_3[3] = get_internal_image(3886);
            images_hudItem_10_3[4] = get_internal_image(3891);
            images_hudItem_10_3[5] = get_internal_image(3892);
            images_hudItem_10_3[6] = get_internal_image(3886);
            images_hudItem_10_3[7] = get_internal_image(3886);
            images_hudItem_10_4[0] = get_internal_image(3887);
            images_hudItem_10_5[0] = get_internal_image(3930);
            images_hudItem_10_6[0] = get_internal_image(3934);
            images_hudItem_10_7[0] = get_internal_image(3936);
            images_hudItem_10_8[0] = get_internal_image(3937);
            images_hudItem_10_9[0] = get_internal_image(3935);
            images_hudItem_10_10[0] = get_internal_image(3938);
            images_hudItem_10_11[0] = get_internal_image(3940);
            images_hudItem_10_12[0] = get_internal_image(3941);
            images_hudItem_10_13[0] = get_internal_image(3942);
            images_hudItem_10_14[0] = get_internal_image(3939);
            images_hudItem_10_15[0] = get_internal_image(3944);
            images_hudItem_10_16[0] = get_internal_image(3945);
            images_hudItem_10_17[0] = get_internal_image(3946);
            images_hudItem_10_18[0] = get_internal_image(3943);
            images_hudItem_10_19[0] = get_internal_image(3947);
            images_hudItem_10_20[0] = get_internal_image(3948);
            images_hudItem_10_21[0] = get_internal_image(3949);
            images_hudItem_10_22[0] = get_internal_image(3950);
            images_hudItem_10_23[0] = get_internal_image(3926);
            images_hudItem_10_24[0] = get_internal_image(3926);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(7, 100);
    }
};
FrameObject * create_hudItem(int x, int y)
{
    return new (Active::pool.create()) HudItem(x, y);
}
static Image* images_doorkitchen_211_0_0[1];
static Direction direction_doorkitchen_211_0_0 = {0, 50, 50, 0, -1, images_doorkitchen_211_0_0, 1};
static Image* images_doorkitchen_211_0_16[1];
static Direction direction_doorkitchen_211_0_16 = {16, 50, 50, 0, -1, images_doorkitchen_211_0_16, 1};
static Animation anim_doorkitchen_211_0 = {&direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, NULL, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, &direction_doorkitchen_211_0_16, NULL, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0, &direction_doorkitchen_211_0_0};
static Animation * anim_array_doorkitchen_211[1] = {&anim_doorkitchen_211_0};
static Animations anim_doorkitchen_211 = {1, &anim_array_doorkitchen_211[0]};
static bool anim_doorkitchen_211_initialized;
class DoorKitchen_211 : public Active
{
public:
    DoorKitchen_211(int x, int y) : Active(x, y, DoorKitchen_211_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Kitchen", 14);
#endif
        this->animations = &anim_doorkitchen_211;
        if (!anim_doorkitchen_211_initialized) {
            anim_doorkitchen_211_initialized = true;
            images_doorkitchen_211_0_0[0] = get_internal_image(1221);
            images_doorkitchen_211_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_kitchen_12);
    }
};
FrameObject * create_doorkitchen_211(int x, int y)
{
    return new (Active::pool.create()) DoorKitchen_211(x, y);
}
static Image* images_doorstaff_212_0_0[1];
static Direction direction_doorstaff_212_0_0 = {0, 50, 50, 0, 1, images_doorstaff_212_0_0, 1};
static Image* images_doorstaff_212_0_16[1];
static Direction direction_doorstaff_212_0_16 = {16, 50, 50, 0, 1, images_doorstaff_212_0_16, 1};
static Animation anim_doorstaff_212_0 = {&direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, NULL, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, &direction_doorstaff_212_0_16, NULL, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0, &direction_doorstaff_212_0_0};
static Animation * anim_array_doorstaff_212[1] = {&anim_doorstaff_212_0};
static Animations anim_doorstaff_212 = {1, &anim_array_doorstaff_212[0]};
static bool anim_doorstaff_212_initialized;
class DoorStaff_212 : public Active
{
public:
    DoorStaff_212(int x, int y) : Active(x, y, DoorStaff_212_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Staff", 12);
#endif
        this->animations = &anim_doorstaff_212;
        if (!anim_doorstaff_212_initialized) {
            anim_doorstaff_212_initialized = true;
            images_doorstaff_212_0_0[0] = get_internal_image(1224);
            images_doorstaff_212_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_staff_13);
    }
};
FrameObject * create_doorstaff_212(int x, int y)
{
    return new (Active::pool.create()) DoorStaff_212(x, y);
}
static Image* images_spotlightsroof_213_1_0[1];
static Direction direction_spotlightsroof_213_1_0 = {0, 50, 50, 0, -1, images_spotlightsroof_213_1_0, 1};
static Animation anim_spotlightsroof_213_1 = {&direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, NULL, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0, &direction_spotlightsroof_213_1_0};
static Image* images_spotlightsroof_213_5_0[1];
static Direction direction_spotlightsroof_213_5_0 = {0, 50, 50, 0, 1, images_spotlightsroof_213_5_0, 1};
static Animation anim_spotlightsroof_213_5 = {&direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, NULL, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0, &direction_spotlightsroof_213_5_0};
static Animation * anim_array_spotlightsroof_213[6] = {NULL, &anim_spotlightsroof_213_1, NULL, NULL, NULL, &anim_spotlightsroof_213_5};
static Animations anim_spotlightsroof_213 = {6, &anim_array_spotlightsroof_213[0]};
static bool anim_spotlightsroof_213_initialized;
class SpotlightsRoof_213 : public Active
{
public:
    SpotlightsRoof_213(int x, int y) : Active(x, y, SpotlightsRoof_213_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Spotlights (roof)", 17);
#endif
        set_visible(false);
        this->animations = &anim_spotlightsroof_213;
        if (!anim_spotlightsroof_213_initialized) {
            anim_spotlightsroof_213_initialized = true;
            images_spotlightsroof_213_1_0[0] = get_internal_image(957);
            images_spotlightsroof_213_5_0[0] = get_internal_image(960);
        }
        active_flags |= TRANSPARENT;
        animation = WALKING;
        current_animation = animation;
        initialize_active(false);
        set_shader(Render::ADDITIVE);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        movement->flags |= Movement::MOVE_AT_START;
        ((BallMovement*)movement)->set_max_speed(14);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 50;
        ((BallMovement*)movement)->init();
        create_alterables();
    }
};
FrameObject * create_spotlightsroof_213(int x, int y)
{
    return new (Active::pool.create()) SpotlightsRoof_213(x, y);
}
class DChar_214 : public Text
{
public:
    DChar_214(int x, int y) : Text(x, y, DChar_214_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("D_Char", 6);
#endif
        flags &= ~SCROLL;
        width = 296;
        height = 13;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("AaBbCcDdEeFfGgHhIiJjKk", 22));
        create_alterables();
    }
};
FrameObject * create_dchar_214(int x, int y)
{
    return new (Text::pool.create()) DChar_214(x, y);
}
class Counter_216 : public Counter
{
public:
    Counter_216(int x, int y) : Counter(x, y, Counter_216_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Counter", 7);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
    }
};
FrameObject * create_counter_216(int x, int y)
{
    return new (Counter::pool.create()) Counter_216(x, y);
}
class ListInmates_217 : public ListObject
{
public:
    ListInmates_217(int x, int y) : ListObject(x, y, ListInmates_217_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("list_inmates", 12);
#endif
        set_visible(false);
        index_offset = current_line = -1;
    }
};
FrameObject * create_listinmates_217(int x, int y)
{
    return new (ListObject::pool.create()) ListInmates_217(x, y);
}
