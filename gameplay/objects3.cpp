#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class ListGuards_218 : public ListObject
{
public:
    ListGuards_218(int x, int y) : ListObject(x, y, ListGuards_218_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("list_guards", 11);
#endif
        set_visible(false);
        index_offset = current_line = -1;
    }
};
FrameObject * create_listguards_218(int x, int y)
{
    return new (ListObject::pool.create()) ListGuards_218(x, y);
}
static Image* images_guardscan_219_0_0[1];
static Direction direction_guardscan_219_0_0 = {0, 50, 50, 0, 1, images_guardscan_219_0_0, 1};
static Animation anim_guardscan_219_0 = {&direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, NULL, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0, &direction_guardscan_219_0_0};
static Animation * anim_array_guardscan_219[1] = {&anim_guardscan_219_0};
static Animations anim_guardscan_219 = {1, &anim_array_guardscan_219[0]};
static bool anim_guardscan_219_initialized;
class GuardScan_219 : public Active
{
public:
    GuardScan_219(int x, int y) : Active(x, y, GuardScan_219_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GuardScan", 9);
#endif
        set_visible(false);
        this->animations = &anim_guardscan_219;
        if (!anim_guardscan_219_initialized) {
            anim_guardscan_219_initialized = true;
            images_guardscan_219_0_0[0] = get_internal_image(485);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_guardscan_219(int x, int y)
{
    return new (Active::pool.create()) GuardScan_219(x, y);
}
static Image* images_screenTint_0_0[1];
static Direction direction_screenTint_0_0 = {0, 50, 50, 0, -1, images_screenTint_0_0, 1};
static Animation anim_screenTint_0 = {&direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, NULL, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0, &direction_screenTint_0_0};
static Image* images_screenTint_12_0[1];
static Direction direction_screenTint_12_0 = {0, 50, 50, 0, -1, images_screenTint_12_0, 1};
static Animation anim_screenTint_12 = {&direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, NULL, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0, &direction_screenTint_12_0};
static Image* images_screenTint_13_0[1];
static Direction direction_screenTint_13_0 = {0, 50, 50, 0, -1, images_screenTint_13_0, 1};
static Animation anim_screenTint_13 = {&direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, NULL, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0, &direction_screenTint_13_0};
static Animation * anim_array_screenTint[14] = {&anim_screenTint_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_screenTint_12, &anim_screenTint_13};
static Animations anim_screenTint = {14, &anim_array_screenTint[0]};
static bool anim_screenTint_initialized;
class ScreenTint : public Active
{
public:
    ScreenTint(int x, int y) : Active(x, y, screenTint_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Overlay", 7);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_screenTint;
        if (!anim_screenTint_initialized) {
            anim_screenTint_initialized = true;
            images_screenTint_0_0[0] = get_internal_image(737);
            images_screenTint_12_0[0] = get_internal_image(738);
            images_screenTint_13_0[0] = get_internal_image(740);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 227, 72, 240);
        set_shader(Render::LINEARBURN);
        create_alterables();
        alterables->values.set(0, 35);
    }
};
FrameObject * create_screenTint(int x, int y)
{
    return new (Active::pool.create()) ScreenTint(x, y);
}
static Image* images_waypointcanteenguard3_221_0_0[1];
static Direction direction_waypointcanteenguard3_221_0_0 = {0, 50, 50, 0, 1, images_waypointcanteenguard3_221_0_0, 1};
static Animation anim_waypointcanteenguard3_221_0 = {&direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, NULL, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0, &direction_waypointcanteenguard3_221_0_0};
static Animation * anim_array_waypointcanteenguard3_221[1] = {&anim_waypointcanteenguard3_221_0};
static Animations anim_waypointcanteenguard3_221 = {1, &anim_array_waypointcanteenguard3_221[0]};
static bool anim_waypointcanteenguard3_221_initialized;
class WaypointCanteenGuard3_221 : public Active
{
public:
    WaypointCanteenGuard3_221(int x, int y) : Active(x, y, WaypointCanteenGuard3_221_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Canteen - Guard 3", 28);
#endif
        set_visible(false);
        this->animations = &anim_waypointcanteenguard3_221;
        if (!anim_waypointcanteenguard3_221_initialized) {
            anim_waypointcanteenguard3_221_initialized = true;
            images_waypointcanteenguard3_221_0_0[0] = get_internal_image(264);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointcanteenguard3_221(int x, int y)
{
    return new (Active::pool.create()) WaypointCanteenGuard3_221(x, y);
}
class Backdrop22_222 : public Backdrop
{
public:
    Backdrop22_222(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 22", 11);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_22
        manager.frame->back_instances[BACK_ID_BACKDROP_22].push_back(this);
#endif
        image = get_internal_image(396);
        width = image->width;
        height = image->height;
        set_shader(Render::SUBTRACT);
    }
};
FrameObject * create_backdrop22_222(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop22_222(x, y);
}
static Image* images_dust_223_4_0[8];
static Direction direction_dust_223_4_0 = {0, 50, 50, 0, 1, images_dust_223_4_0, 8};
static Image* images_dust_223_4_8[3];
static Direction direction_dust_223_4_8 = {8, 4, 4, 0, 1, images_dust_223_4_8, 3};
static Image* images_dust_223_4_16[5];
static Direction direction_dust_223_4_16 = {16, 50, 50, 0, 1, images_dust_223_4_16, 5};
static Image* images_dust_223_4_24[6];
static Direction direction_dust_223_4_24 = {24, 15, 15, 0, 1, images_dust_223_4_24, 6};
static Animation anim_dust_223_4 = {&direction_dust_223_4_0, &direction_dust_223_4_0, &direction_dust_223_4_0, &direction_dust_223_4_0, NULL, &direction_dust_223_4_8, &direction_dust_223_4_8, &direction_dust_223_4_8, &direction_dust_223_4_8, &direction_dust_223_4_8, &direction_dust_223_4_8, &direction_dust_223_4_8, NULL, &direction_dust_223_4_16, &direction_dust_223_4_16, &direction_dust_223_4_16, &direction_dust_223_4_16, &direction_dust_223_4_16, &direction_dust_223_4_16, &direction_dust_223_4_16, NULL, &direction_dust_223_4_24, &direction_dust_223_4_24, &direction_dust_223_4_24, &direction_dust_223_4_24, &direction_dust_223_4_24, &direction_dust_223_4_24, &direction_dust_223_4_24, NULL, &direction_dust_223_4_0, &direction_dust_223_4_0, &direction_dust_223_4_0};
static Animation * anim_array_dust_223[5] = {NULL, NULL, NULL, NULL, &anim_dust_223_4};
static Animations anim_dust_223 = {5, &anim_array_dust_223[0]};
static bool anim_dust_223_initialized;
class Dust_223 : public Active
{
public:
    Dust_223(int x, int y) : Active(x, y, Dust_223_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("dust", 4);
#endif
        this->animations = &anim_dust_223;
        if (!anim_dust_223_initialized) {
            anim_dust_223_initialized = true;
            images_dust_223_4_0[0] = get_internal_image(422);
            images_dust_223_4_0[1] = get_internal_image(423);
            images_dust_223_4_0[2] = get_internal_image(424);
            images_dust_223_4_0[3] = get_internal_image(425);
            images_dust_223_4_0[4] = get_internal_image(426);
            images_dust_223_4_0[5] = get_internal_image(427);
            images_dust_223_4_0[6] = get_internal_image(428);
            images_dust_223_4_0[7] = get_internal_image(429);
            images_dust_223_4_8[0] = get_internal_image(430);
            images_dust_223_4_8[1] = get_internal_image(430);
            images_dust_223_4_8[2] = get_internal_image(430);
            images_dust_223_4_16[0] = get_internal_image(431);
            images_dust_223_4_16[1] = get_internal_image(432);
            images_dust_223_4_16[2] = get_internal_image(433);
            images_dust_223_4_16[3] = get_internal_image(434);
            images_dust_223_4_16[4] = get_internal_image(435);
            images_dust_223_4_24[0] = get_internal_image(2382);
            images_dust_223_4_24[1] = get_internal_image(2377);
            images_dust_223_4_24[2] = get_internal_image(2378);
            images_dust_223_4_24[3] = get_internal_image(2379);
            images_dust_223_4_24[4] = get_internal_image(2380);
            images_dust_223_4_24[5] = get_internal_image(2383);
        }
        active_flags |= TRANSPARENT;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active(true);
        movement_count = 2;
        movements = new Movement*[2];
        movements[0] = new StaticMovement(this);
        movements[0]->index = 0;
        movements[0]->flags |= Movement::MOVE_AT_START;
        movements[1] = new BallMovement(this);
        movements[1]->index = 1;
        movements[1]->flags |= Movement::MOVE_AT_START;
        ((BallMovement*)movements[1])->set_max_speed(1);
        ((BallMovement*)movements[1])->set_deceleration(0);
        ((BallMovement*)movements[1])->randomizer = 20;
        set_movement(0);
        create_alterables();
    }
};
FrameObject * create_dust_223(int x, int y)
{
    return new (Active::pool.create()) Dust_223(x, y);
}
static Image* images_itemSlot_0_0[1];
static Direction direction_itemSlot_0_0 = {0, 50, 50, 0, 1, images_itemSlot_0_0, 1};
static Image* images_itemSlot_0_16[1];
static Direction direction_itemSlot_0_16 = {16, 50, 50, 0, 1, images_itemSlot_0_16, 1};
static Animation anim_itemSlot_0 = {&direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0, NULL, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, &direction_itemSlot_0_16, NULL, &direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0, &direction_itemSlot_0_0};
static Image* images_itemSlot_1_0[1];
static Direction direction_itemSlot_1_0 = {0, 50, 50, 0, -1, images_itemSlot_1_0, 1};
static Image* images_itemSlot_1_1[1];
static Direction direction_itemSlot_1_1 = {1, 50, 50, 0, -1, images_itemSlot_1_1, 1};
static Image* images_itemSlot_1_2[1];
static Direction direction_itemSlot_1_2 = {2, 50, 50, 0, -1, images_itemSlot_1_2, 1};
static Image* images_itemSlot_1_3[1];
static Direction direction_itemSlot_1_3 = {3, 50, 50, 0, -1, images_itemSlot_1_3, 1};
static Image* images_itemSlot_1_4[1];
static Direction direction_itemSlot_1_4 = {4, 50, 50, 0, -1, images_itemSlot_1_4, 1};
static Image* images_itemSlot_1_5[1];
static Direction direction_itemSlot_1_5 = {5, 50, 50, 0, -1, images_itemSlot_1_5, 1};
static Image* images_itemSlot_1_8[2];
static Direction direction_itemSlot_1_8 = {8, 10, 10, 0, -1, images_itemSlot_1_8, 2};
static Image* images_itemSlot_1_9[2];
static Direction direction_itemSlot_1_9 = {9, 10, 10, 0, -1, images_itemSlot_1_9, 2};
static Image* images_itemSlot_1_10[2];
static Direction direction_itemSlot_1_10 = {10, 10, 10, 0, -1, images_itemSlot_1_10, 2};
static Image* images_itemSlot_1_11[2];
static Direction direction_itemSlot_1_11 = {11, 10, 10, 0, -1, images_itemSlot_1_11, 2};
static Image* images_itemSlot_1_12[2];
static Direction direction_itemSlot_1_12 = {12, 10, 10, 0, -1, images_itemSlot_1_12, 2};
static Image* images_itemSlot_1_13[2];
static Direction direction_itemSlot_1_13 = {13, 10, 10, 0, -1, images_itemSlot_1_13, 2};
static Image* images_itemSlot_1_16[1];
static Direction direction_itemSlot_1_16 = {16, 10, 10, 0, -1, images_itemSlot_1_16, 1};
static Animation anim_itemSlot_1 = {&direction_itemSlot_1_0, &direction_itemSlot_1_1, &direction_itemSlot_1_2, &direction_itemSlot_1_3, &direction_itemSlot_1_4, &direction_itemSlot_1_5, &direction_itemSlot_1_5, &direction_itemSlot_1_8, &direction_itemSlot_1_8, &direction_itemSlot_1_9, &direction_itemSlot_1_10, &direction_itemSlot_1_11, &direction_itemSlot_1_12, &direction_itemSlot_1_13, &direction_itemSlot_1_13, &direction_itemSlot_1_16, &direction_itemSlot_1_16, &direction_itemSlot_1_16, &direction_itemSlot_1_16, &direction_itemSlot_1_16, &direction_itemSlot_1_16, &direction_itemSlot_1_16, &direction_itemSlot_1_16, &direction_itemSlot_1_16, NULL, &direction_itemSlot_1_0, &direction_itemSlot_1_0, &direction_itemSlot_1_0, &direction_itemSlot_1_0, &direction_itemSlot_1_0, &direction_itemSlot_1_0, &direction_itemSlot_1_0};
static Animation * anim_array_itemSlot[2] = {&anim_itemSlot_0, &anim_itemSlot_1};
static Animations anim_itemSlot = {2, &anim_array_itemSlot[0]};
static bool anim_itemSlot_initialized;
class ItemSlot : public Active
{
public:
    ItemSlot(int x, int y) : Active(x, y, itemSlot_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Slot", 4);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_itemSlot;
        if (!anim_itemSlot_initialized) {
            anim_itemSlot_initialized = true;
            images_itemSlot_0_0[0] = get_internal_image(1);
            images_itemSlot_0_16[0] = get_internal_image(399);
            images_itemSlot_1_0[0] = get_internal_image(840);
            images_itemSlot_1_1[0] = get_internal_image(841);
            images_itemSlot_1_2[0] = get_internal_image(839);
            images_itemSlot_1_3[0] = get_internal_image(842);
            images_itemSlot_1_4[0] = get_internal_image(844);
            images_itemSlot_1_5[0] = get_internal_image(848);
            images_itemSlot_1_8[0] = get_internal_image(832);
            images_itemSlot_1_8[1] = get_internal_image(835);
            images_itemSlot_1_9[0] = get_internal_image(834);
            images_itemSlot_1_9[1] = get_internal_image(836);
            images_itemSlot_1_10[0] = get_internal_image(838);
            images_itemSlot_1_10[1] = get_internal_image(837);
            images_itemSlot_1_11[0] = get_internal_image(846);
            images_itemSlot_1_11[1] = get_internal_image(847);
            images_itemSlot_1_12[0] = get_internal_image(845);
            images_itemSlot_1_12[1] = get_internal_image(849);
            images_itemSlot_1_13[0] = get_internal_image(850);
            images_itemSlot_1_13[1] = get_internal_image(851);
            images_itemSlot_1_16[0] = get_internal_image(632);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 242);
        create_alterables();
    }
};
FrameObject * create_itemSlot(int x, int y)
{
    return new (Active::pool.create()) ItemSlot(x, y);
}
class DChar2_225 : public Text
{
public:
    DChar2_225(int x, int y) : Text(x, y, DChar2_225_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("D_Char 2", 8);
#endif
        flags &= ~SCROLL;
        width = 220;
        height = 13;
        blend_color = Color(8, 0, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("QUIT JOB", 8));
        create_alterables();
    }
};
FrameObject * create_dchar2_225(int x, int y)
{
    return new (Text::pool.create()) DChar2_225(x, y);
}
static Image* images_undergroundGlow_0_0[1];
static Direction direction_undergroundGlow_0_0 = {0, 50, 50, 0, -1, images_undergroundGlow_0_0, 1};
static Animation anim_undergroundGlow_0 = {&direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, NULL, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0, &direction_undergroundGlow_0_0};
static Animation * anim_array_undergroundGlow[1] = {&anim_undergroundGlow_0};
static Animations anim_undergroundGlow = {1, &anim_array_undergroundGlow[0]};
static bool anim_undergroundGlow_initialized;
class UndergroundGlow : public Active
{
public:
    UndergroundGlow(int x, int y) : Active(x, y, undergroundGlow_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Underground_Lighting", 20);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_undergroundGlow;
        if (!anim_undergroundGlow_initialized) {
            anim_undergroundGlow_initialized = true;
            images_undergroundGlow_0_0[0] = get_internal_image(983);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 254);
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_undergroundGlow(int x, int y)
{
    return new (Active::pool.create()) UndergroundGlow(x, y);
}
class DigArray_228 : public ArrayObject
{
public:
    DigArray_228(int x, int y) : ArrayObject(x, y, DigArray_228_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DigArray", 8);
#endif
        initialize(true, 0, 125, 125, 2);
    }
};
FrameObject * create_digarray_228(int x, int y)
{
    return new (ArrayObject::pool.create()) DigArray_228(x, y);
}
static Image* images_containerkitchen_229_0_0[1];
static Direction direction_containerkitchen_229_0_0 = {0, 50, 50, 0, 1, images_containerkitchen_229_0_0, 1};
static Animation anim_containerkitchen_229_0 = {&direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, NULL, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0, &direction_containerkitchen_229_0_0};
static Animation * anim_array_containerkitchen_229[1] = {&anim_containerkitchen_229_0};
static Animations anim_containerkitchen_229 = {1, &anim_array_containerkitchen_229[0]};
static bool anim_containerkitchen_229_initialized;
class ContainerKitchen_229 : public Active
{
public:
    ContainerKitchen_229(int x, int y) : Active(x, y, ContainerKitchen_229_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Container - Kitchen", 19);
#endif
        this->animations = &anim_containerkitchen_229;
        if (!anim_containerkitchen_229_initialized) {
            anim_containerkitchen_229_initialized = true;
            images_containerkitchen_229_0_0[0] = get_internal_image(890);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_freezer_14);
    }
};
FrameObject * create_containerkitchen_229(int x, int y)
{
    return new (Active::pool.create()) ContainerKitchen_229(x, y);
}
static Image* images_containercanteen_230_0_0[1];
static Direction direction_containercanteen_230_0_0 = {0, 50, 50, 0, 1, images_containercanteen_230_0_0, 1};
static Animation anim_containercanteen_230_0 = {&direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, NULL, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0, &direction_containercanteen_230_0_0};
static Animation * anim_array_containercanteen_230[1] = {&anim_containercanteen_230_0};
static Animations anim_containercanteen_230 = {1, &anim_array_containercanteen_230[0]};
static bool anim_containercanteen_230_initialized;
class ContainerCanteen_230 : public Active
{
public:
    ContainerCanteen_230(int x, int y) : Active(x, y, ContainerCanteen_230_type)
    {
        // qualifiers: 15, 26, 49, 63
#ifndef NDEBUG
        name = std::string("Container - Canteen", 19);
#endif
        this->animations = &anim_containercanteen_230;
        if (!anim_containercanteen_230_initialized) {
            anim_containercanteen_230_initialized = true;
            images_containercanteen_230_0_0[0] = get_internal_image(892);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_utensils_15);
    }
};
FrameObject * create_containercanteen_230(int x, int y)
{
    return new (Active::pool.create()) ContainerCanteen_230(x, y);
}
static Image* images_metaldetector_231_0_0[1];
static Direction direction_metaldetector_231_0_0 = {0, 50, 50, 0, -1, images_metaldetector_231_0_0, 1};
static Image* images_metaldetector_231_0_24[1];
static Direction direction_metaldetector_231_0_24 = {24, 50, 50, 0, -1, images_metaldetector_231_0_24, 1};
static Animation anim_metaldetector_231_0 = {&direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, NULL, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, &direction_metaldetector_231_0_24, NULL, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0, &direction_metaldetector_231_0_0};
static Image* images_metaldetector_231_5_0[2];
static Direction direction_metaldetector_231_5_0 = {0, 5, 5, 0, 3, images_metaldetector_231_5_0, 2};
static Image* images_metaldetector_231_5_24[2];
static Direction direction_metaldetector_231_5_24 = {24, 5, 5, 0, 3, images_metaldetector_231_5_24, 2};
static Animation anim_metaldetector_231_5 = {&direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, NULL, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, &direction_metaldetector_231_5_24, NULL, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0, &direction_metaldetector_231_5_0};
static Image* images_metaldetector_231_6_0[1];
static Direction direction_metaldetector_231_6_0 = {0, 50, 50, 0, -1, images_metaldetector_231_6_0, 1};
static Image* images_metaldetector_231_6_24[1];
static Direction direction_metaldetector_231_6_24 = {24, 50, 50, 0, -1, images_metaldetector_231_6_24, 1};
static Animation anim_metaldetector_231_6 = {&direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, NULL, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, &direction_metaldetector_231_6_24, NULL, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0, &direction_metaldetector_231_6_0};
static Animation * anim_array_metaldetector_231[7] = {&anim_metaldetector_231_0, NULL, NULL, NULL, NULL, &anim_metaldetector_231_5, &anim_metaldetector_231_6};
static Animations anim_metaldetector_231 = {7, &anim_array_metaldetector_231[0]};
static bool anim_metaldetector_231_initialized;
class MetalDetector_231 : public Active
{
public:
    MetalDetector_231(int x, int y) : Active(x, y, MetalDetector_231_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Metal Detector", 14);
#endif
        this->animations = &anim_metaldetector_231;
        if (!anim_metaldetector_231_initialized) {
            anim_metaldetector_231_initialized = true;
            images_metaldetector_231_0_0[0] = get_internal_image(44);
            images_metaldetector_231_0_24[0] = get_internal_image(1049);
            images_metaldetector_231_5_0[0] = get_internal_image(44);
            images_metaldetector_231_5_0[1] = get_internal_image(814);
            images_metaldetector_231_5_24[0] = get_internal_image(1049);
            images_metaldetector_231_5_24[1] = get_internal_image(1050);
            images_metaldetector_231_6_0[0] = get_internal_image(1052);
            images_metaldetector_231_6_24[0] = get_internal_image(1073);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(1, -1);
    }
};
FrameObject * create_metaldetector_231(int x, int y)
{
    return new (Active::pool.create()) MetalDetector_231(x, y);
}
class WallsArray_232 : public ArrayObject
{
public:
    WallsArray_232(int x, int y) : ArrayObject(x, y, WallsArray_232_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("WallsArray", 10);
#endif
        initialize(true, 1, 125, 125, 2);
    }
};
FrameObject * create_wallsarray_232(int x, int y)
{
    return new (ArrayObject::pool.create()) WallsArray_232(x, y);
}
static Image* images_library_233_0_0[1];
static Direction direction_library_233_0_0 = {0, 50, 50, 0, 1, images_library_233_0_0, 1};
static Animation anim_library_233_0 = {&direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, NULL, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0, &direction_library_233_0_0};
static Animation * anim_array_library_233[1] = {&anim_library_233_0};
static Animations anim_library_233 = {1, &anim_array_library_233[0]};
static bool anim_library_233_initialized;
class Library_233 : public Active
{
public:
    Library_233(int x, int y) : Active(x, y, Library_233_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("Library", 7);
#endif
        this->animations = &anim_library_233;
        if (!anim_library_233_initialized) {
            anim_library_233_initialized = true;
            images_library_233_0_0[0] = get_internal_image(416);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_library_233(int x, int y)
{
    return new (Active::pool.create()) Library_233(x, y);
}
static Image* images_bedmedical_234_0_24[1];
static Direction direction_bedmedical_234_0_24 = {24, 50, 50, 0, -1, images_bedmedical_234_0_24, 1};
static Animation anim_bedmedical_234_0 = {&direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, NULL, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24, &direction_bedmedical_234_0_24};
static Image* images_bedmedical_234_1_24[1];
static Direction direction_bedmedical_234_1_24 = {24, 50, 50, 0, -1, images_bedmedical_234_1_24, 1};
static Animation anim_bedmedical_234_1 = {&direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, NULL, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24, &direction_bedmedical_234_1_24};
static Image* images_bedmedical_234_2_24[1];
static Direction direction_bedmedical_234_2_24 = {24, 50, 50, 0, -1, images_bedmedical_234_2_24, 1};
static Animation anim_bedmedical_234_2 = {&direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, NULL, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24, &direction_bedmedical_234_2_24};
static Animation * anim_array_bedmedical_234[3] = {&anim_bedmedical_234_0, &anim_bedmedical_234_1, &anim_bedmedical_234_2};
static Animations anim_bedmedical_234 = {3, &anim_array_bedmedical_234[0]};
static bool anim_bedmedical_234_initialized;
class BedMedical_234 : public Active
{
public:
    BedMedical_234(int x, int y) : Active(x, y, BedMedical_234_type)
    {
        // qualifiers: 14, 28
#ifndef NDEBUG
        name = std::string("Bed - Medical", 13);
#endif
        this->animations = &anim_bedmedical_234;
        if (!anim_bedmedical_234_initialized) {
            anim_bedmedical_234_initialized = true;
            images_bedmedical_234_0_24[0] = get_internal_image(897);
            images_bedmedical_234_1_24[0] = get_internal_image(1004);
            images_bedmedical_234_2_24[0] = get_internal_image(1434);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_bedmedical_234(int x, int y)
{
    return new (Active::pool.create()) BedMedical_234(x, y);
}
static Image* images_phone_235_0_0[1];
static Direction direction_phone_235_0_0 = {0, 50, 50, 0, 1, images_phone_235_0_0, 1};
static Animation anim_phone_235_0 = {&direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, NULL, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0, &direction_phone_235_0_0};
static Animation * anim_array_phone_235[1] = {&anim_phone_235_0};
static Animations anim_phone_235 = {1, &anim_array_phone_235[0]};
static bool anim_phone_235_initialized;
class Phone_235 : public Active
{
public:
    Phone_235(int x, int y) : Active(x, y, Phone_235_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("Phone", 5);
#endif
        this->animations = &anim_phone_235;
        if (!anim_phone_235_initialized) {
            anim_phone_235_initialized = true;
            images_phone_235_0_0[0] = get_internal_image(438);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_phone_235(int x, int y)
{
    return new (Active::pool.create()) Phone_235(x, y);
}
static Image* images_kitchensink_236_0_0[1];
static Direction direction_kitchensink_236_0_0 = {0, 50, 50, 0, 1, images_kitchensink_236_0_0, 1};
static Animation anim_kitchensink_236_0 = {&direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, NULL, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0, &direction_kitchensink_236_0_0};
static Animation * anim_array_kitchensink_236[1] = {&anim_kitchensink_236_0};
static Animations anim_kitchensink_236 = {1, &anim_array_kitchensink_236[0]};
static bool anim_kitchensink_236_initialized;
class KitchenSink_236 : public Active
{
public:
    KitchenSink_236(int x, int y) : Active(x, y, KitchenSink_236_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("Kitchen - Sink", 14);
#endif
        this->animations = &anim_kitchensink_236;
        if (!anim_kitchensink_236_initialized) {
            anim_kitchensink_236_initialized = true;
            images_kitchensink_236_0_0[0] = get_internal_image(445);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_kitchensink_236(int x, int y)
{
    return new (Active::pool.create()) KitchenSink_236(x, y);
}
static Image* images_camera_237_0_18[1];
static Direction direction_camera_237_0_18 = {18, 50, 50, 0, -1, images_camera_237_0_18, 1};
static Image* images_camera_237_0_21[1];
static Direction direction_camera_237_0_21 = {21, 50, 50, 0, -1, images_camera_237_0_21, 1};
static Image* images_camera_237_0_24[1];
static Direction direction_camera_237_0_24 = {24, 2, 2, 0, -1, images_camera_237_0_24, 1};
static Image* images_camera_237_0_27[1];
static Direction direction_camera_237_0_27 = {27, 50, 50, 0, -1, images_camera_237_0_27, 1};
static Image* images_camera_237_0_30[1];
static Direction direction_camera_237_0_30 = {30, 50, 50, 0, -1, images_camera_237_0_30, 1};
static Animation anim_camera_237_0 = {&direction_camera_237_0_30, &direction_camera_237_0_30, &direction_camera_237_0_30, &direction_camera_237_0_30, &direction_camera_237_0_30, &direction_camera_237_0_30, &direction_camera_237_0_30, &direction_camera_237_0_30, NULL, &direction_camera_237_0_18, &direction_camera_237_0_18, &direction_camera_237_0_18, &direction_camera_237_0_18, &direction_camera_237_0_18, &direction_camera_237_0_18, &direction_camera_237_0_18, &direction_camera_237_0_18, &direction_camera_237_0_18, &direction_camera_237_0_18, &direction_camera_237_0_18, &direction_camera_237_0_21, &direction_camera_237_0_21, &direction_camera_237_0_21, &direction_camera_237_0_24, &direction_camera_237_0_24, &direction_camera_237_0_24, &direction_camera_237_0_27, &direction_camera_237_0_27, &direction_camera_237_0_27, &direction_camera_237_0_30, &direction_camera_237_0_30, &direction_camera_237_0_30};
static Image* images_camera_237_2_18[2];
static Direction direction_camera_237_2_18 = {18, 5, 5, 0, 3, images_camera_237_2_18, 2};
static Image* images_camera_237_2_21[2];
static Direction direction_camera_237_2_21 = {21, 5, 5, 0, 3, images_camera_237_2_21, 2};
static Image* images_camera_237_2_24[2];
static Direction direction_camera_237_2_24 = {24, 5, 5, 0, 3, images_camera_237_2_24, 2};
static Image* images_camera_237_2_27[2];
static Direction direction_camera_237_2_27 = {27, 5, 5, 0, 3, images_camera_237_2_27, 2};
static Image* images_camera_237_2_30[2];
static Direction direction_camera_237_2_30 = {30, 5, 5, 0, 3, images_camera_237_2_30, 2};
static Animation anim_camera_237_2 = {&direction_camera_237_2_30, &direction_camera_237_2_30, &direction_camera_237_2_30, &direction_camera_237_2_30, &direction_camera_237_2_30, &direction_camera_237_2_30, &direction_camera_237_2_30, &direction_camera_237_2_30, NULL, &direction_camera_237_2_18, &direction_camera_237_2_18, &direction_camera_237_2_18, &direction_camera_237_2_18, &direction_camera_237_2_18, &direction_camera_237_2_18, &direction_camera_237_2_18, &direction_camera_237_2_18, &direction_camera_237_2_18, &direction_camera_237_2_18, &direction_camera_237_2_18, &direction_camera_237_2_21, &direction_camera_237_2_21, &direction_camera_237_2_21, &direction_camera_237_2_24, &direction_camera_237_2_24, &direction_camera_237_2_24, &direction_camera_237_2_27, &direction_camera_237_2_27, &direction_camera_237_2_27, &direction_camera_237_2_30, &direction_camera_237_2_30, &direction_camera_237_2_30};
static Image* images_camera_237_5_18[1];
static Direction direction_camera_237_5_18 = {18, 50, 50, 0, -1, images_camera_237_5_18, 1};
static Image* images_camera_237_5_21[1];
static Direction direction_camera_237_5_21 = {21, 50, 50, 0, -1, images_camera_237_5_21, 1};
static Image* images_camera_237_5_24[1];
static Direction direction_camera_237_5_24 = {24, 2, 2, 0, -1, images_camera_237_5_24, 1};
static Image* images_camera_237_5_27[1];
static Direction direction_camera_237_5_27 = {27, 50, 50, 0, -1, images_camera_237_5_27, 1};
static Image* images_camera_237_5_30[1];
static Direction direction_camera_237_5_30 = {30, 50, 50, 0, -1, images_camera_237_5_30, 1};
static Animation anim_camera_237_5 = {&direction_camera_237_5_30, &direction_camera_237_5_30, &direction_camera_237_5_30, &direction_camera_237_5_30, &direction_camera_237_5_30, &direction_camera_237_5_30, &direction_camera_237_5_30, &direction_camera_237_5_30, NULL, &direction_camera_237_5_18, &direction_camera_237_5_18, &direction_camera_237_5_18, &direction_camera_237_5_18, &direction_camera_237_5_18, &direction_camera_237_5_18, &direction_camera_237_5_18, &direction_camera_237_5_18, &direction_camera_237_5_18, &direction_camera_237_5_18, &direction_camera_237_5_18, &direction_camera_237_5_21, &direction_camera_237_5_21, &direction_camera_237_5_21, &direction_camera_237_5_24, &direction_camera_237_5_24, &direction_camera_237_5_24, &direction_camera_237_5_27, &direction_camera_237_5_27, &direction_camera_237_5_27, &direction_camera_237_5_30, &direction_camera_237_5_30, &direction_camera_237_5_30};
static Animation * anim_array_camera_237[6] = {&anim_camera_237_0, NULL, &anim_camera_237_2, NULL, NULL, &anim_camera_237_5};
static Animations anim_camera_237 = {6, &anim_array_camera_237[0]};
static bool anim_camera_237_initialized;
class CAMERA_237 : public Active
{
public:
    CAMERA_237(int x, int y) : Active(x, y, CAMERA_237_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("CAMERA", 6);
#endif
        this->animations = &anim_camera_237;
        if (!anim_camera_237_initialized) {
            anim_camera_237_initialized = true;
            images_camera_237_0_18[0] = get_internal_image(816);
            images_camera_237_0_21[0] = get_internal_image(818);
            images_camera_237_0_24[0] = get_internal_image(819);
            images_camera_237_0_27[0] = get_internal_image(854);
            images_camera_237_0_30[0] = get_internal_image(891);
            images_camera_237_2_18[0] = get_internal_image(816);
            images_camera_237_2_18[1] = get_internal_image(1038);
            images_camera_237_2_21[0] = get_internal_image(818);
            images_camera_237_2_21[1] = get_internal_image(1053);
            images_camera_237_2_24[0] = get_internal_image(819);
            images_camera_237_2_24[1] = get_internal_image(1055);
            images_camera_237_2_27[0] = get_internal_image(854);
            images_camera_237_2_27[1] = get_internal_image(1056);
            images_camera_237_2_30[0] = get_internal_image(891);
            images_camera_237_2_30[1] = get_internal_image(1057);
            images_camera_237_5_18[0] = get_internal_image(1075);
            images_camera_237_5_21[0] = get_internal_image(1051);
            images_camera_237_5_24[0] = get_internal_image(1076);
            images_camera_237_5_27[0] = get_internal_image(1077);
            images_camera_237_5_30[0] = get_internal_image(1078);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_camera_237(int x, int y)
{
    return new (Active::pool.create()) CAMERA_237(x, y);
}
static Image* images_activityPanel_0_0[1];
static Direction direction_activityPanel_0_0 = {0, 50, 50, 0, -1, images_activityPanel_0_0, 1};
static Image* images_activityPanel_0_8[1];
static Direction direction_activityPanel_0_8 = {8, 50, 50, 0, -1, images_activityPanel_0_8, 1};
static Image* images_activityPanel_0_16[1];
static Direction direction_activityPanel_0_16 = {16, 10, 10, 0, -1, images_activityPanel_0_16, 1};
static Image* images_activityPanel_0_24[1];
static Direction direction_activityPanel_0_24 = {24, 50, 50, 0, -1, images_activityPanel_0_24, 1};
static Animation anim_activityPanel_0 = {&direction_activityPanel_0_0, &direction_activityPanel_0_0, &direction_activityPanel_0_0, &direction_activityPanel_0_0, NULL, &direction_activityPanel_0_8, &direction_activityPanel_0_8, &direction_activityPanel_0_8, &direction_activityPanel_0_8, &direction_activityPanel_0_8, &direction_activityPanel_0_8, &direction_activityPanel_0_8, NULL, &direction_activityPanel_0_16, &direction_activityPanel_0_16, &direction_activityPanel_0_16, &direction_activityPanel_0_16, &direction_activityPanel_0_16, &direction_activityPanel_0_16, &direction_activityPanel_0_16, NULL, &direction_activityPanel_0_24, &direction_activityPanel_0_24, &direction_activityPanel_0_24, &direction_activityPanel_0_24, &direction_activityPanel_0_24, &direction_activityPanel_0_24, &direction_activityPanel_0_24, NULL, &direction_activityPanel_0_0, &direction_activityPanel_0_0, &direction_activityPanel_0_0};
static Image* images_activityPanel_1_0[3];
static Direction direction_activityPanel_1_0 = {0, 15, 15, 2, -1, images_activityPanel_1_0, 3};
static Animation anim_activityPanel_1 = {&direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, NULL, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0, &direction_activityPanel_1_0};
static Animation * anim_array_activityPanel[2] = {&anim_activityPanel_0, &anim_activityPanel_1};
static Animations anim_activityPanel = {2, &anim_array_activityPanel[0]};
static bool anim_activityPanel_initialized;
class ActivityPanel : public Active
{
public:
    ActivityPanel(int x, int y) : Active(x, y, activityPanel_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Taskbox", 7);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_activityPanel;
        if (!anim_activityPanel_initialized) {
            anim_activityPanel_initialized = true;
            images_activityPanel_0_0[0] = get_internal_image(996);
            images_activityPanel_0_8[0] = get_internal_image(3881);
            images_activityPanel_0_16[0] = get_internal_image(996);
            images_activityPanel_0_24[0] = get_internal_image(1452);
            images_activityPanel_1_0[0] = get_internal_image(806);
            images_activityPanel_1_0[1] = get_internal_image(283);
            images_activityPanel_1_0[2] = get_internal_image(236);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 241);
        create_alterables();
        alterables->strings.set(0, str_workout_16);
    }
};
FrameObject * create_activityPanel(int x, int y)
{
    return new (Active::pool.create()) ActivityPanel(x, y);
}
static Image* images_activityProgress_0_0[1];
static Direction direction_activityProgress_0_0 = {0, 50, 50, 0, 1, images_activityProgress_0_0, 1};
static Animation anim_activityProgress_0 = {&direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, NULL, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0, &direction_activityProgress_0_0};
static Animation * anim_array_activityProgress[1] = {&anim_activityProgress_0};
static Animations anim_activityProgress = {1, &anim_array_activityProgress[0]};
static bool anim_activityProgress_initialized;
class ActivityProgress : public Active
{
public:
    ActivityProgress(int x, int y) : Active(x, y, activityProgress_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("powerbar", 8);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_activityProgress;
        if (!anim_activityProgress_initialized) {
            anim_activityProgress_initialized = true;
            images_activityProgress_0_0[0] = get_internal_image(75);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 241);
        create_alterables();
        alterables->strings.set(0, str_workout_16);
    }
};
FrameObject * create_activityProgress(int x, int y)
{
    return new (Active::pool.create()) ActivityProgress(x, y);
}
static Image* images_hudToolbar_0_0[1];
static Direction direction_hudToolbar_0_0 = {0, 50, 50, 0, -1, images_hudToolbar_0_0, 1};
static Image* images_hudToolbar_0_16[4];
static Direction direction_hudToolbar_0_16 = {16, 15, 15, 0, 3, images_hudToolbar_0_16, 4};
static Animation anim_hudToolbar_0 = {&direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, NULL, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, &direction_hudToolbar_0_16, NULL, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0, &direction_hudToolbar_0_0};
static Image* images_hudToolbar_2_0[1];
static Direction direction_hudToolbar_2_0 = {0, 50, 50, 0, -1, images_hudToolbar_2_0, 1};
static Image* images_hudToolbar_2_16[4];
static Direction direction_hudToolbar_2_16 = {16, 15, 15, 0, 3, images_hudToolbar_2_16, 4};
static Animation anim_hudToolbar_2 = {&direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, NULL, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, &direction_hudToolbar_2_16, NULL, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0, &direction_hudToolbar_2_0};
static Animation * anim_array_hudToolbar[3] = {&anim_hudToolbar_0, NULL, &anim_hudToolbar_2};
static Animations anim_hudToolbar = {3, &anim_array_hudToolbar[0]};
static bool anim_hudToolbar_initialized;
class HudToolbar : public Active
{
public:
    HudToolbar(int x, int y) : Active(x, y, hudToolbar_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 5", 8);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_hudToolbar;
        if (!anim_hudToolbar_initialized) {
            anim_hudToolbar_initialized = true;
            images_hudToolbar_0_0[0] = get_internal_image(961);
            images_hudToolbar_0_16[0] = get_internal_image(961);
            images_hudToolbar_0_16[1] = get_internal_image(2244);
            images_hudToolbar_0_16[2] = get_internal_image(2237);
            images_hudToolbar_0_16[3] = get_internal_image(2244);
            images_hudToolbar_2_0[0] = get_internal_image(132);
            images_hudToolbar_2_16[0] = get_internal_image(132);
            images_hudToolbar_2_16[1] = get_internal_image(2228);
            images_hudToolbar_2_16[2] = get_internal_image(2305);
            images_hudToolbar_2_16[3] = get_internal_image(2228);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_hudToolbar(int x, int y)
{
    return new (Active::pool.create()) HudToolbar(x, y);
}
class ActivityText : public Text
{
public:
    ActivityText(int x, int y) : Text(x, y, activityText_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Workout Text", 12);
#endif
        flags &= ~SCROLL;
        width = 102;
        height = 31;
        blend_color = Color(160, 160, 160);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("LOL", 3));
        create_alterables();
    }
};
FrameObject * create_activityText(int x, int y)
{
    return new (Text::pool.create()) ActivityText(x, y);
}
static Image* images_dirt_242_0_0[1];
static Direction direction_dirt_242_0_0 = {0, 50, 50, 0, -1, images_dirt_242_0_0, 1};
static Image* images_dirt_242_0_16[1];
static Direction direction_dirt_242_0_16 = {16, 50, 50, 0, -1, images_dirt_242_0_16, 1};
static Animation anim_dirt_242_0 = {&direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0, NULL, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, &direction_dirt_242_0_16, NULL, &direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0, &direction_dirt_242_0_0};
static Image* images_dirt_242_1_0[4];
static Direction direction_dirt_242_1_0 = {0, 5, 5, 0, -1, images_dirt_242_1_0, 4};
static Animation anim_dirt_242_1 = {&direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, NULL, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0, &direction_dirt_242_1_0};
static Animation * anim_array_dirt_242[2] = {&anim_dirt_242_0, &anim_dirt_242_1};
static Animations anim_dirt_242 = {2, &anim_array_dirt_242[0]};
static bool anim_dirt_242_initialized;
class Dirt_242 : public Active
{
public:
    Dirt_242(int x, int y) : Active(x, y, Dirt_242_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dirt", 4);
#endif
        this->animations = &anim_dirt_242;
        if (!anim_dirt_242_initialized) {
            anim_dirt_242_initialized = true;
            images_dirt_242_0_0[0] = get_internal_image(78);
            images_dirt_242_0_16[0] = get_internal_image(3391);
            images_dirt_242_1_0[0] = get_internal_image(774);
            images_dirt_242_1_0[1] = get_internal_image(603);
            images_dirt_242_1_0[2] = get_internal_image(810);
            images_dirt_242_1_0[3] = get_internal_image(603);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 155);
        create_alterables();
    }
};
FrameObject * create_dirt_242(int x, int y)
{
    return new (Active::pool.create()) Dirt_242(x, y);
}
class HealthText : public TextBlitter
{
public:
    HealthText(int x, int y) : TextBlitter(x, y, healthText_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Text_HP", 7);
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
        image = get_internal_image(30);
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
        alterables->strings.set(5, str_health_17);
    }
};
FrameObject * create_healthText(int x, int y)
{
    return new (TextBlitter::pool.create()) HealthText(x, y);
}
static Image* images_jobboard_244_0_0[2];
static Direction direction_jobboard_244_0_0 = {0, 5, 5, 0, -1, images_jobboard_244_0_0, 2};
static Animation anim_jobboard_244_0 = {&direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, NULL, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0, &direction_jobboard_244_0_0};
static Animation * anim_array_jobboard_244[1] = {&anim_jobboard_244_0};
static Animations anim_jobboard_244 = {1, &anim_array_jobboard_244[0]};
static bool anim_jobboard_244_initialized;
class JobBoard_244 : public Active
{
public:
    JobBoard_244(int x, int y) : Active(x, y, JobBoard_244_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Job Board", 9);
#endif
        this->animations = &anim_jobboard_244;
        if (!anim_jobboard_244_initialized) {
            anim_jobboard_244_initialized = true;
            images_jobboard_244_0_0[0] = get_internal_image(408);
            images_jobboard_244_0_0[1] = get_internal_image(1285);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_jobboard_244(int x, int y)
{
    return new (Active::pool.create()) JobBoard_244(x, y);
}
static Image* images_dialogButton_2_0[1];
static Direction direction_dialogButton_2_0 = {0, 50, 50, 0, -1, images_dialogButton_2_0, 1};
static Image* images_dialogButton_2_16[1];
static Direction direction_dialogButton_2_16 = {16, 50, 50, 0, -1, images_dialogButton_2_16, 1};
static Animation anim_dialogButton_2 = {&direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0, NULL, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, &direction_dialogButton_2_16, NULL, &direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0, &direction_dialogButton_2_0};
static Image* images_dialogButton_5_0[1];
static Direction direction_dialogButton_5_0 = {0, 50, 50, 0, -1, images_dialogButton_5_0, 1};
static Image* images_dialogButton_5_16[1];
static Direction direction_dialogButton_5_16 = {16, 50, 50, 0, -1, images_dialogButton_5_16, 1};
static Animation anim_dialogButton_5 = {&direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0, NULL, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, &direction_dialogButton_5_16, NULL, &direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0, &direction_dialogButton_5_0};
static Image* images_dialogButton_7_0[1];
static Direction direction_dialogButton_7_0 = {0, 50, 50, 0, -1, images_dialogButton_7_0, 1};
static Image* images_dialogButton_7_16[1];
static Direction direction_dialogButton_7_16 = {16, 50, 50, 0, -1, images_dialogButton_7_16, 1};
static Animation anim_dialogButton_7 = {&direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0, NULL, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, &direction_dialogButton_7_16, NULL, &direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0, &direction_dialogButton_7_0};
static Image* images_dialogButton_8_0[1];
static Direction direction_dialogButton_8_0 = {0, 50, 50, 0, -1, images_dialogButton_8_0, 1};
static Image* images_dialogButton_8_16[1];
static Direction direction_dialogButton_8_16 = {16, 50, 50, 0, -1, images_dialogButton_8_16, 1};
static Animation anim_dialogButton_8 = {&direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0, NULL, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, &direction_dialogButton_8_16, NULL, &direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0, &direction_dialogButton_8_0};
static Image* images_dialogButton_12_0[1];
static Direction direction_dialogButton_12_0 = {0, 50, 50, 0, -1, images_dialogButton_12_0, 1};
static Image* images_dialogButton_12_16[1];
static Direction direction_dialogButton_12_16 = {16, 50, 50, 0, -1, images_dialogButton_12_16, 1};
static Animation anim_dialogButton_12 = {&direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0, NULL, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, &direction_dialogButton_12_16, NULL, &direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0, &direction_dialogButton_12_0};
static Image* images_dialogButton_14_0[1];
static Direction direction_dialogButton_14_0 = {0, 50, 50, 0, -1, images_dialogButton_14_0, 1};
static Image* images_dialogButton_14_16[1];
static Direction direction_dialogButton_14_16 = {16, 50, 50, 0, -1, images_dialogButton_14_16, 1};
static Animation anim_dialogButton_14 = {&direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0, NULL, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, &direction_dialogButton_14_16, NULL, &direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0, &direction_dialogButton_14_0};
static Image* images_dialogButton_16_0[1];
static Direction direction_dialogButton_16_0 = {0, 50, 50, 0, -1, images_dialogButton_16_0, 1};
static Animation anim_dialogButton_16 = {&direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, NULL, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0, &direction_dialogButton_16_0};
static Image* images_dialogButton_17_0[1];
static Direction direction_dialogButton_17_0 = {0, 50, 50, 0, -1, images_dialogButton_17_0, 1};
static Animation anim_dialogButton_17 = {&direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, NULL, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0, &direction_dialogButton_17_0};
static Image* images_dialogButton_18_0[1];
static Direction direction_dialogButton_18_0 = {0, 50, 50, 0, -1, images_dialogButton_18_0, 1};
static Image* images_dialogButton_18_16[1];
static Direction direction_dialogButton_18_16 = {16, 50, 50, 0, -1, images_dialogButton_18_16, 1};
static Animation anim_dialogButton_18 = {&direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0, NULL, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, &direction_dialogButton_18_16, NULL, &direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0, &direction_dialogButton_18_0};
static Image* images_dialogButton_19_0[1];
static Direction direction_dialogButton_19_0 = {0, 50, 50, 0, -1, images_dialogButton_19_0, 1};
static Animation anim_dialogButton_19 = {&direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, NULL, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0, &direction_dialogButton_19_0};
static Image* images_dialogButton_20_0[1];
static Direction direction_dialogButton_20_0 = {0, 50, 50, 0, -1, images_dialogButton_20_0, 1};
static Image* images_dialogButton_20_16[1];
static Direction direction_dialogButton_20_16 = {16, 50, 50, 0, -1, images_dialogButton_20_16, 1};
static Animation anim_dialogButton_20 = {&direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0, NULL, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, &direction_dialogButton_20_16, NULL, &direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0, &direction_dialogButton_20_0};
static Image* images_dialogButton_21_0[1];
static Direction direction_dialogButton_21_0 = {0, 50, 50, 0, -1, images_dialogButton_21_0, 1};
static Image* images_dialogButton_21_16[1];
static Direction direction_dialogButton_21_16 = {16, 50, 50, 0, -1, images_dialogButton_21_16, 1};
static Animation anim_dialogButton_21 = {&direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0, NULL, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, &direction_dialogButton_21_16, NULL, &direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0, &direction_dialogButton_21_0};
static Image* images_dialogButton_22_0[1];
static Direction direction_dialogButton_22_0 = {0, 50, 50, 0, -1, images_dialogButton_22_0, 1};
static Image* images_dialogButton_22_16[1];
static Direction direction_dialogButton_22_16 = {16, 50, 50, 0, -1, images_dialogButton_22_16, 1};
static Animation anim_dialogButton_22 = {&direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0, NULL, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, &direction_dialogButton_22_16, NULL, &direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0, &direction_dialogButton_22_0};
static Image* images_dialogButton_23_0[1];
static Direction direction_dialogButton_23_0 = {0, 50, 50, 0, -1, images_dialogButton_23_0, 1};
static Image* images_dialogButton_23_16[1];
static Direction direction_dialogButton_23_16 = {16, 50, 50, 0, -1, images_dialogButton_23_16, 1};
static Animation anim_dialogButton_23 = {&direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0, NULL, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, &direction_dialogButton_23_16, NULL, &direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0, &direction_dialogButton_23_0};
static Image* images_dialogButton_24_0[1];
static Direction direction_dialogButton_24_0 = {0, 50, 50, 0, -1, images_dialogButton_24_0, 1};
static Image* images_dialogButton_24_16[1];
static Direction direction_dialogButton_24_16 = {16, 50, 50, 0, -1, images_dialogButton_24_16, 1};
static Animation anim_dialogButton_24 = {&direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0, NULL, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, &direction_dialogButton_24_16, NULL, &direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0, &direction_dialogButton_24_0};
static Image* images_dialogButton_25_0[1];
static Direction direction_dialogButton_25_0 = {0, 50, 50, 0, -1, images_dialogButton_25_0, 1};
static Image* images_dialogButton_25_16[1];
static Direction direction_dialogButton_25_16 = {16, 50, 50, 0, -1, images_dialogButton_25_16, 1};
static Animation anim_dialogButton_25 = {&direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0, NULL, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, &direction_dialogButton_25_16, NULL, &direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0, &direction_dialogButton_25_0};
static Image* images_dialogButton_26_0[1];
static Direction direction_dialogButton_26_0 = {0, 50, 50, 0, -1, images_dialogButton_26_0, 1};
static Image* images_dialogButton_26_16[1];
static Direction direction_dialogButton_26_16 = {16, 50, 50, 0, -1, images_dialogButton_26_16, 1};
static Animation anim_dialogButton_26 = {&direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0, NULL, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, &direction_dialogButton_26_16, NULL, &direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0, &direction_dialogButton_26_0};
static Image* images_dialogButton_27_0[1];
static Direction direction_dialogButton_27_0 = {0, 50, 50, 0, -1, images_dialogButton_27_0, 1};
static Image* images_dialogButton_27_16[1];
static Direction direction_dialogButton_27_16 = {16, 50, 50, 0, -1, images_dialogButton_27_16, 1};
static Animation anim_dialogButton_27 = {&direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0, NULL, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, &direction_dialogButton_27_16, NULL, &direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0, &direction_dialogButton_27_0};
static Image* images_dialogButton_28_0[1];
static Direction direction_dialogButton_28_0 = {0, 50, 50, 0, -1, images_dialogButton_28_0, 1};
static Image* images_dialogButton_28_16[1];
static Direction direction_dialogButton_28_16 = {16, 50, 50, 0, -1, images_dialogButton_28_16, 1};
static Animation anim_dialogButton_28 = {&direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0, NULL, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, &direction_dialogButton_28_16, NULL, &direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0, &direction_dialogButton_28_0};
static Image* images_dialogButton_29_0[1];
static Direction direction_dialogButton_29_0 = {0, 50, 50, 0, -1, images_dialogButton_29_0, 1};
static Image* images_dialogButton_29_16[1];
static Direction direction_dialogButton_29_16 = {16, 50, 50, 0, -1, images_dialogButton_29_16, 1};
static Animation anim_dialogButton_29 = {&direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0, NULL, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, &direction_dialogButton_29_16, NULL, &direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0, &direction_dialogButton_29_0};
static Image* images_dialogButton_30_0[1];
static Direction direction_dialogButton_30_0 = {0, 50, 50, 0, -1, images_dialogButton_30_0, 1};
static Image* images_dialogButton_30_16[1];
static Direction direction_dialogButton_30_16 = {16, 50, 50, 0, -1, images_dialogButton_30_16, 1};
static Animation anim_dialogButton_30 = {&direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0, NULL, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, &direction_dialogButton_30_16, NULL, &direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0, &direction_dialogButton_30_0};
static Image* images_dialogButton_31_0[1];
static Direction direction_dialogButton_31_0 = {0, 50, 50, 0, -1, images_dialogButton_31_0, 1};
static Image* images_dialogButton_31_16[1];
static Direction direction_dialogButton_31_16 = {16, 50, 50, 0, -1, images_dialogButton_31_16, 1};
static Animation anim_dialogButton_31 = {&direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0, NULL, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, &direction_dialogButton_31_16, NULL, &direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0, &direction_dialogButton_31_0};
static Image* images_dialogButton_32_0[1];
static Direction direction_dialogButton_32_0 = {0, 50, 50, 0, -1, images_dialogButton_32_0, 1};
static Image* images_dialogButton_32_16[1];
static Direction direction_dialogButton_32_16 = {16, 50, 50, 0, -1, images_dialogButton_32_16, 1};
static Animation anim_dialogButton_32 = {&direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0, NULL, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, &direction_dialogButton_32_16, NULL, &direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0, &direction_dialogButton_32_0};
static Image* images_dialogButton_33_0[1];
static Direction direction_dialogButton_33_0 = {0, 50, 50, 0, -1, images_dialogButton_33_0, 1};
static Image* images_dialogButton_33_16[1];
static Direction direction_dialogButton_33_16 = {16, 50, 50, 0, -1, images_dialogButton_33_16, 1};
static Animation anim_dialogButton_33 = {&direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0, NULL, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, &direction_dialogButton_33_16, NULL, &direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0, &direction_dialogButton_33_0};
static Image* images_dialogButton_34_0[1];
static Direction direction_dialogButton_34_0 = {0, 50, 50, 0, -1, images_dialogButton_34_0, 1};
static Image* images_dialogButton_34_16[1];
static Direction direction_dialogButton_34_16 = {16, 50, 50, 0, -1, images_dialogButton_34_16, 1};
static Animation anim_dialogButton_34 = {&direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0, NULL, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, &direction_dialogButton_34_16, NULL, &direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0, &direction_dialogButton_34_0};
static Image* images_dialogButton_35_0[1];
static Direction direction_dialogButton_35_0 = {0, 50, 50, 0, -1, images_dialogButton_35_0, 1};
static Image* images_dialogButton_35_16[1];
static Direction direction_dialogButton_35_16 = {16, 50, 50, 0, -1, images_dialogButton_35_16, 1};
static Animation anim_dialogButton_35 = {&direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0, NULL, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, &direction_dialogButton_35_16, NULL, &direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0, &direction_dialogButton_35_0};
static Image* images_dialogButton_36_0[1];
static Direction direction_dialogButton_36_0 = {0, 50, 50, 0, -1, images_dialogButton_36_0, 1};
static Image* images_dialogButton_36_16[1];
static Direction direction_dialogButton_36_16 = {16, 50, 50, 0, -1, images_dialogButton_36_16, 1};
static Animation anim_dialogButton_36 = {&direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0, NULL, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, &direction_dialogButton_36_16, NULL, &direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0, &direction_dialogButton_36_0};
static Image* images_dialogButton_37_0[1];
static Direction direction_dialogButton_37_0 = {0, 50, 50, 0, -1, images_dialogButton_37_0, 1};
static Image* images_dialogButton_37_16[1];
static Direction direction_dialogButton_37_16 = {16, 50, 50, 0, -1, images_dialogButton_37_16, 1};
static Animation anim_dialogButton_37 = {&direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0, NULL, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, &direction_dialogButton_37_16, NULL, &direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0, &direction_dialogButton_37_0};
static Image* images_dialogButton_38_0[1];
static Direction direction_dialogButton_38_0 = {0, 50, 50, 0, -1, images_dialogButton_38_0, 1};
static Image* images_dialogButton_38_16[1];
static Direction direction_dialogButton_38_16 = {16, 50, 50, 0, -1, images_dialogButton_38_16, 1};
static Animation anim_dialogButton_38 = {&direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0, NULL, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, &direction_dialogButton_38_16, NULL, &direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0, &direction_dialogButton_38_0};
static Image* images_dialogButton_39_0[1];
static Direction direction_dialogButton_39_0 = {0, 50, 50, 0, -1, images_dialogButton_39_0, 1};
static Image* images_dialogButton_39_16[1];
static Direction direction_dialogButton_39_16 = {16, 50, 50, 0, -1, images_dialogButton_39_16, 1};
static Animation anim_dialogButton_39 = {&direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0, NULL, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, &direction_dialogButton_39_16, NULL, &direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0, &direction_dialogButton_39_0};
static Image* images_dialogButton_40_0[1];
static Direction direction_dialogButton_40_0 = {0, 50, 50, 0, -1, images_dialogButton_40_0, 1};
static Image* images_dialogButton_40_16[1];
static Direction direction_dialogButton_40_16 = {16, 50, 50, 0, -1, images_dialogButton_40_16, 1};
static Animation anim_dialogButton_40 = {&direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0, NULL, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, &direction_dialogButton_40_16, NULL, &direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0, &direction_dialogButton_40_0};
static Image* images_dialogButton_41_0[1];
static Direction direction_dialogButton_41_0 = {0, 50, 50, 0, -1, images_dialogButton_41_0, 1};
static Image* images_dialogButton_41_16[1];
static Direction direction_dialogButton_41_16 = {16, 50, 50, 0, -1, images_dialogButton_41_16, 1};
static Animation anim_dialogButton_41 = {&direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0, NULL, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, &direction_dialogButton_41_16, NULL, &direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0, &direction_dialogButton_41_0};
static Image* images_dialogButton_42_0[1];
static Direction direction_dialogButton_42_0 = {0, 50, 50, 0, -1, images_dialogButton_42_0, 1};
static Image* images_dialogButton_42_16[1];
static Direction direction_dialogButton_42_16 = {16, 50, 50, 0, -1, images_dialogButton_42_16, 1};
static Animation anim_dialogButton_42 = {&direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0, NULL, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, &direction_dialogButton_42_16, NULL, &direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0, &direction_dialogButton_42_0};
static Image* images_dialogButton_43_0[1];
static Direction direction_dialogButton_43_0 = {0, 50, 50, 0, -1, images_dialogButton_43_0, 1};
static Image* images_dialogButton_43_16[1];
static Direction direction_dialogButton_43_16 = {16, 50, 50, 0, -1, images_dialogButton_43_16, 1};
static Animation anim_dialogButton_43 = {&direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0, NULL, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, &direction_dialogButton_43_16, NULL, &direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0, &direction_dialogButton_43_0};
static Image* images_dialogButton_44_0[1];
static Direction direction_dialogButton_44_0 = {0, 50, 50, 0, -1, images_dialogButton_44_0, 1};
static Image* images_dialogButton_44_16[1];
static Direction direction_dialogButton_44_16 = {16, 50, 50, 0, -1, images_dialogButton_44_16, 1};
static Animation anim_dialogButton_44 = {&direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0, NULL, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, &direction_dialogButton_44_16, NULL, &direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0, &direction_dialogButton_44_0};
static Image* images_dialogButton_45_0[1];
static Direction direction_dialogButton_45_0 = {0, 50, 50, 0, -1, images_dialogButton_45_0, 1};
static Image* images_dialogButton_45_16[1];
static Direction direction_dialogButton_45_16 = {16, 50, 50, 0, -1, images_dialogButton_45_16, 1};
static Animation anim_dialogButton_45 = {&direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0, NULL, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, &direction_dialogButton_45_16, NULL, &direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0, &direction_dialogButton_45_0};
static Image* images_dialogButton_46_0[1];
static Direction direction_dialogButton_46_0 = {0, 50, 50, 0, -1, images_dialogButton_46_0, 1};
static Image* images_dialogButton_46_16[1];
static Direction direction_dialogButton_46_16 = {16, 50, 50, 0, -1, images_dialogButton_46_16, 1};
static Animation anim_dialogButton_46 = {&direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0, NULL, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, &direction_dialogButton_46_16, NULL, &direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0, &direction_dialogButton_46_0};
static Animation * anim_array_dialogButton[47] = {NULL, NULL, &anim_dialogButton_2, NULL, NULL, &anim_dialogButton_5, NULL, &anim_dialogButton_7, &anim_dialogButton_8, NULL, NULL, NULL, &anim_dialogButton_12, NULL, &anim_dialogButton_14, NULL, &anim_dialogButton_16, &anim_dialogButton_17, &anim_dialogButton_18, &anim_dialogButton_19, &anim_dialogButton_20, &anim_dialogButton_21, &anim_dialogButton_22, &anim_dialogButton_23, &anim_dialogButton_24, &anim_dialogButton_25, &anim_dialogButton_26, &anim_dialogButton_27, &anim_dialogButton_28, &anim_dialogButton_29, &anim_dialogButton_30, &anim_dialogButton_31, &anim_dialogButton_32, &anim_dialogButton_33, &anim_dialogButton_34, &anim_dialogButton_35, &anim_dialogButton_36, &anim_dialogButton_37, &anim_dialogButton_38, &anim_dialogButton_39, &anim_dialogButton_40, &anim_dialogButton_41, &anim_dialogButton_42, &anim_dialogButton_43, &anim_dialogButton_44, &anim_dialogButton_45, &anim_dialogButton_46};
static Animations anim_dialogButton = {47, &anim_array_dialogButton[0]};
static bool anim_dialogButton_initialized;
class DialogButton : public Active
{
public:
    DialogButton(int x, int y) : Active(x, y, dialogButton_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Buttons", 7);
#endif
        this->animations = &anim_dialogButton;
        if (!anim_dialogButton_initialized) {
            anim_dialogButton_initialized = true;
            images_dialogButton_2_0[0] = get_internal_image(62);
            images_dialogButton_2_16[0] = get_internal_image(56);
            images_dialogButton_5_0[0] = get_internal_image(81);
            images_dialogButton_5_16[0] = get_internal_image(86);
            images_dialogButton_7_0[0] = get_internal_image(32);
            images_dialogButton_7_16[0] = get_internal_image(83);
            images_dialogButton_8_0[0] = get_internal_image(340);
            images_dialogButton_8_16[0] = get_internal_image(334);
            images_dialogButton_12_0[0] = get_internal_image(247);
            images_dialogButton_12_16[0] = get_internal_image(1341);
            images_dialogButton_14_0[0] = get_internal_image(769);
            images_dialogButton_14_16[0] = get_internal_image(862);
            images_dialogButton_16_0[0] = get_internal_image(662);
            images_dialogButton_17_0[0] = get_internal_image(663);
            images_dialogButton_18_0[0] = get_internal_image(966);
            images_dialogButton_18_16[0] = get_internal_image(121);
            images_dialogButton_19_0[0] = get_internal_image(664);
            images_dialogButton_20_0[0] = get_internal_image(187);
            images_dialogButton_20_16[0] = get_internal_image(196);
            images_dialogButton_21_0[0] = get_internal_image(198);
            images_dialogButton_21_16[0] = get_internal_image(222);
            images_dialogButton_22_0[0] = get_internal_image(2364);
            images_dialogButton_22_16[0] = get_internal_image(2366);
            images_dialogButton_23_0[0] = get_internal_image(1461);
            images_dialogButton_23_16[0] = get_internal_image(1464);
            images_dialogButton_24_0[0] = get_internal_image(1461);
            images_dialogButton_24_16[0] = get_internal_image(1464);
            images_dialogButton_25_0[0] = get_internal_image(146);
            images_dialogButton_25_16[0] = get_internal_image(183);
            images_dialogButton_26_0[0] = get_internal_image(146);
            images_dialogButton_26_16[0] = get_internal_image(183);
            images_dialogButton_27_0[0] = get_internal_image(146);
            images_dialogButton_27_16[0] = get_internal_image(183);
            images_dialogButton_28_0[0] = get_internal_image(185);
            images_dialogButton_28_16[0] = get_internal_image(188);
            images_dialogButton_29_0[0] = get_internal_image(37);
            images_dialogButton_29_16[0] = get_internal_image(77);
            images_dialogButton_30_0[0] = get_internal_image(1338);
            images_dialogButton_30_16[0] = get_internal_image(135);
            images_dialogButton_31_0[0] = get_internal_image(1338);
            images_dialogButton_31_16[0] = get_internal_image(135);
            images_dialogButton_32_0[0] = get_internal_image(37);
            images_dialogButton_32_16[0] = get_internal_image(77);
            images_dialogButton_33_0[0] = get_internal_image(2347);
            images_dialogButton_33_16[0] = get_internal_image(2350);
            images_dialogButton_34_0[0] = get_internal_image(2347);
            images_dialogButton_34_16[0] = get_internal_image(2350);
            images_dialogButton_35_0[0] = get_internal_image(2347);
            images_dialogButton_35_16[0] = get_internal_image(2350);
            images_dialogButton_36_0[0] = get_internal_image(2347);
            images_dialogButton_36_16[0] = get_internal_image(2350);
            images_dialogButton_37_0[0] = get_internal_image(2347);
            images_dialogButton_37_16[0] = get_internal_image(2350);
            images_dialogButton_38_0[0] = get_internal_image(1394);
            images_dialogButton_38_16[0] = get_internal_image(1397);
            images_dialogButton_39_0[0] = get_internal_image(37);
            images_dialogButton_39_16[0] = get_internal_image(77);
            images_dialogButton_40_0[0] = get_internal_image(1286);
            images_dialogButton_40_16[0] = get_internal_image(1295);
            images_dialogButton_41_0[0] = get_internal_image(2347);
            images_dialogButton_41_16[0] = get_internal_image(2350);
            images_dialogButton_42_0[0] = get_internal_image(2347);
            images_dialogButton_42_16[0] = get_internal_image(2350);
            images_dialogButton_43_0[0] = get_internal_image(37);
            images_dialogButton_43_16[0] = get_internal_image(77);
            images_dialogButton_44_0[0] = get_internal_image(37);
            images_dialogButton_44_16[0] = get_internal_image(77);
            images_dialogButton_45_0[0] = get_internal_image(3961);
            images_dialogButton_45_16[0] = get_internal_image(3960);
            images_dialogButton_46_0[0] = get_internal_image(3931);
            images_dialogButton_46_16[0] = get_internal_image(3958);
        }
        active_flags |= TRANSPARENT;
        animation = RUNNING;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_dialogButton(int x, int y)
{
    return new (Active::pool.create()) DialogButton(x, y);
}
static Image* images_active26_246_0_0[1];
static Direction direction_active26_246_0_0 = {0, 50, 50, 0, 1, images_active26_246_0_0, 1};
static Animation anim_active26_246_0 = {&direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, NULL, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0, &direction_active26_246_0_0};
static Animation * anim_array_active26_246[1] = {&anim_active26_246_0};
static Animations anim_active26_246 = {1, &anim_array_active26_246[0]};
static bool anim_active26_246_initialized;
class Active26_246 : public Active
{
public:
    Active26_246(int x, int y) : Active(x, y, Active26_246_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 26", 9);
#endif
        this->animations = &anim_active26_246;
        if (!anim_active26_246_initialized) {
            anim_active26_246_initialized = true;
            images_active26_246_0_0[0] = get_internal_image(495);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_active26_246(int x, int y)
{
    return new (Active::pool.create()) Active26_246(x, y);
}
class PathFindingGuards_247 : public PathPlanner
{
public:
    PathFindingGuards_247(int x, int y) : PathPlanner(x, y, PathFindingGuards_247_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("PathFinding - Guards", 20);
#endif
        tile_size = 16;
        map_width = 141;
        map_height = 110;
        create_map();
    }
};
FrameObject * create_pathfindingguards_247(int x, int y)
{
    return new (PathPlanner::pool.create()) PathFindingGuards_247(x, y);
}
static Image* images_outfitguard_248_0_0[2];
static Direction direction_outfitguard_248_0_0 = {0, 6, 6, 0, -1, images_outfitguard_248_0_0, 2};
static Image* images_outfitguard_248_0_8[2];
static Direction direction_outfitguard_248_0_8 = {8, 6, 6, 0, -1, images_outfitguard_248_0_8, 2};
static Image* images_outfitguard_248_0_16[2];
static Direction direction_outfitguard_248_0_16 = {16, 6, 6, 0, -1, images_outfitguard_248_0_16, 2};
static Image* images_outfitguard_248_0_24[2];
static Direction direction_outfitguard_248_0_24 = {24, 6, 6, 0, -1, images_outfitguard_248_0_24, 2};
static Animation anim_outfitguard_248_0 = {&direction_outfitguard_248_0_0, &direction_outfitguard_248_0_0, &direction_outfitguard_248_0_0, &direction_outfitguard_248_0_0, NULL, &direction_outfitguard_248_0_8, &direction_outfitguard_248_0_8, &direction_outfitguard_248_0_8, &direction_outfitguard_248_0_8, &direction_outfitguard_248_0_8, &direction_outfitguard_248_0_8, &direction_outfitguard_248_0_8, NULL, &direction_outfitguard_248_0_16, &direction_outfitguard_248_0_16, &direction_outfitguard_248_0_16, &direction_outfitguard_248_0_16, &direction_outfitguard_248_0_16, &direction_outfitguard_248_0_16, &direction_outfitguard_248_0_16, NULL, &direction_outfitguard_248_0_24, &direction_outfitguard_248_0_24, &direction_outfitguard_248_0_24, &direction_outfitguard_248_0_24, &direction_outfitguard_248_0_24, &direction_outfitguard_248_0_24, &direction_outfitguard_248_0_24, NULL, &direction_outfitguard_248_0_0, &direction_outfitguard_248_0_0, &direction_outfitguard_248_0_0};
static Image* images_outfitguard_248_6_0[1];
static Direction direction_outfitguard_248_6_0 = {0, 6, 6, 0, 1, images_outfitguard_248_6_0, 1};
static Image* images_outfitguard_248_6_8[1];
static Direction direction_outfitguard_248_6_8 = {8, 6, 6, 0, 1, images_outfitguard_248_6_8, 1};
static Image* images_outfitguard_248_6_16[1];
static Direction direction_outfitguard_248_6_16 = {16, 6, 6, 0, 1, images_outfitguard_248_6_16, 1};
static Image* images_outfitguard_248_6_24[1];
static Direction direction_outfitguard_248_6_24 = {24, 6, 6, 0, 1, images_outfitguard_248_6_24, 1};
static Animation anim_outfitguard_248_6 = {&direction_outfitguard_248_6_0, &direction_outfitguard_248_6_0, &direction_outfitguard_248_6_0, &direction_outfitguard_248_6_0, NULL, &direction_outfitguard_248_6_8, &direction_outfitguard_248_6_8, &direction_outfitguard_248_6_8, &direction_outfitguard_248_6_8, &direction_outfitguard_248_6_8, &direction_outfitguard_248_6_8, &direction_outfitguard_248_6_8, NULL, &direction_outfitguard_248_6_16, &direction_outfitguard_248_6_16, &direction_outfitguard_248_6_16, &direction_outfitguard_248_6_16, &direction_outfitguard_248_6_16, &direction_outfitguard_248_6_16, &direction_outfitguard_248_6_16, NULL, &direction_outfitguard_248_6_24, &direction_outfitguard_248_6_24, &direction_outfitguard_248_6_24, &direction_outfitguard_248_6_24, &direction_outfitguard_248_6_24, &direction_outfitguard_248_6_24, &direction_outfitguard_248_6_24, NULL, &direction_outfitguard_248_6_0, &direction_outfitguard_248_6_0, &direction_outfitguard_248_6_0};
static Image* images_outfitguard_248_7_0[2];
static Direction direction_outfitguard_248_7_0 = {0, 10, 10, 0, -1, images_outfitguard_248_7_0, 2};
static Image* images_outfitguard_248_7_8[2];
static Direction direction_outfitguard_248_7_8 = {8, 10, 10, 0, -1, images_outfitguard_248_7_8, 2};
static Image* images_outfitguard_248_7_16[2];
static Direction direction_outfitguard_248_7_16 = {16, 10, 10, 0, -1, images_outfitguard_248_7_16, 2};
static Image* images_outfitguard_248_7_24[2];
static Direction direction_outfitguard_248_7_24 = {24, 10, 10, 0, -1, images_outfitguard_248_7_24, 2};
static Animation anim_outfitguard_248_7 = {&direction_outfitguard_248_7_0, &direction_outfitguard_248_7_0, &direction_outfitguard_248_7_0, &direction_outfitguard_248_7_0, NULL, &direction_outfitguard_248_7_8, &direction_outfitguard_248_7_8, &direction_outfitguard_248_7_8, &direction_outfitguard_248_7_8, &direction_outfitguard_248_7_8, &direction_outfitguard_248_7_8, &direction_outfitguard_248_7_8, NULL, &direction_outfitguard_248_7_16, &direction_outfitguard_248_7_16, &direction_outfitguard_248_7_16, &direction_outfitguard_248_7_16, &direction_outfitguard_248_7_16, &direction_outfitguard_248_7_16, &direction_outfitguard_248_7_16, NULL, &direction_outfitguard_248_7_24, &direction_outfitguard_248_7_24, &direction_outfitguard_248_7_24, &direction_outfitguard_248_7_24, &direction_outfitguard_248_7_24, &direction_outfitguard_248_7_24, &direction_outfitguard_248_7_24, NULL, &direction_outfitguard_248_7_0, &direction_outfitguard_248_7_0, &direction_outfitguard_248_7_0};
static Image* images_outfitguard_248_8_0[1];
static Direction direction_outfitguard_248_8_0 = {0, 50, 50, 0, -1, images_outfitguard_248_8_0, 1};
static Image* images_outfitguard_248_8_16[2];
static Direction direction_outfitguard_248_8_16 = {16, 50, 50, 0, 1, images_outfitguard_248_8_16, 2};
static Image* images_outfitguard_248_8_24[3];
static Direction direction_outfitguard_248_8_24 = {24, 50, 50, 0, -1, images_outfitguard_248_8_24, 3};
static Animation anim_outfitguard_248_8 = {&direction_outfitguard_248_8_0, &direction_outfitguard_248_8_0, &direction_outfitguard_248_8_0, &direction_outfitguard_248_8_0, &direction_outfitguard_248_8_0, &direction_outfitguard_248_8_0, &direction_outfitguard_248_8_0, &direction_outfitguard_248_8_0, NULL, &direction_outfitguard_248_8_16, &direction_outfitguard_248_8_16, &direction_outfitguard_248_8_16, &direction_outfitguard_248_8_16, &direction_outfitguard_248_8_16, &direction_outfitguard_248_8_16, &direction_outfitguard_248_8_16, &direction_outfitguard_248_8_16, &direction_outfitguard_248_8_16, &direction_outfitguard_248_8_16, &direction_outfitguard_248_8_16, NULL, &direction_outfitguard_248_8_24, &direction_outfitguard_248_8_24, &direction_outfitguard_248_8_24, &direction_outfitguard_248_8_24, &direction_outfitguard_248_8_24, &direction_outfitguard_248_8_24, &direction_outfitguard_248_8_24, NULL, &direction_outfitguard_248_8_0, &direction_outfitguard_248_8_0, &direction_outfitguard_248_8_0};
static Image* images_outfitguard_248_11_0[2];
static Direction direction_outfitguard_248_11_0 = {0, 6, 6, 0, -1, images_outfitguard_248_11_0, 2};
static Image* images_outfitguard_248_11_8[2];
static Direction direction_outfitguard_248_11_8 = {8, 6, 6, 0, -1, images_outfitguard_248_11_8, 2};
static Image* images_outfitguard_248_11_16[2];
static Direction direction_outfitguard_248_11_16 = {16, 6, 6, 0, -1, images_outfitguard_248_11_16, 2};
static Image* images_outfitguard_248_11_24[2];
static Direction direction_outfitguard_248_11_24 = {24, 6, 6, 0, -1, images_outfitguard_248_11_24, 2};
static Animation anim_outfitguard_248_11 = {&direction_outfitguard_248_11_0, &direction_outfitguard_248_11_0, &direction_outfitguard_248_11_0, &direction_outfitguard_248_11_0, NULL, &direction_outfitguard_248_11_8, &direction_outfitguard_248_11_8, &direction_outfitguard_248_11_8, &direction_outfitguard_248_11_8, &direction_outfitguard_248_11_8, &direction_outfitguard_248_11_8, &direction_outfitguard_248_11_8, NULL, &direction_outfitguard_248_11_16, &direction_outfitguard_248_11_16, &direction_outfitguard_248_11_16, &direction_outfitguard_248_11_16, &direction_outfitguard_248_11_16, &direction_outfitguard_248_11_16, &direction_outfitguard_248_11_16, NULL, &direction_outfitguard_248_11_24, &direction_outfitguard_248_11_24, &direction_outfitguard_248_11_24, &direction_outfitguard_248_11_24, &direction_outfitguard_248_11_24, &direction_outfitguard_248_11_24, &direction_outfitguard_248_11_24, NULL, &direction_outfitguard_248_11_0, &direction_outfitguard_248_11_0, &direction_outfitguard_248_11_0};
static Image* images_outfitguard_248_12_0[2];
static Direction direction_outfitguard_248_12_0 = {0, 10, 10, 0, -1, images_outfitguard_248_12_0, 2};
static Image* images_outfitguard_248_12_8[2];
static Direction direction_outfitguard_248_12_8 = {8, 10, 10, 0, -1, images_outfitguard_248_12_8, 2};
static Image* images_outfitguard_248_12_16[2];
static Direction direction_outfitguard_248_12_16 = {16, 10, 10, 0, -1, images_outfitguard_248_12_16, 2};
static Image* images_outfitguard_248_12_24[2];
static Direction direction_outfitguard_248_12_24 = {24, 10, 10, 0, -1, images_outfitguard_248_12_24, 2};
static Animation anim_outfitguard_248_12 = {&direction_outfitguard_248_12_0, &direction_outfitguard_248_12_0, &direction_outfitguard_248_12_0, &direction_outfitguard_248_12_0, NULL, &direction_outfitguard_248_12_8, &direction_outfitguard_248_12_8, &direction_outfitguard_248_12_8, &direction_outfitguard_248_12_8, &direction_outfitguard_248_12_8, &direction_outfitguard_248_12_8, &direction_outfitguard_248_12_8, NULL, &direction_outfitguard_248_12_16, &direction_outfitguard_248_12_16, &direction_outfitguard_248_12_16, &direction_outfitguard_248_12_16, &direction_outfitguard_248_12_16, &direction_outfitguard_248_12_16, &direction_outfitguard_248_12_16, NULL, &direction_outfitguard_248_12_24, &direction_outfitguard_248_12_24, &direction_outfitguard_248_12_24, &direction_outfitguard_248_12_24, &direction_outfitguard_248_12_24, &direction_outfitguard_248_12_24, &direction_outfitguard_248_12_24, NULL, &direction_outfitguard_248_12_0, &direction_outfitguard_248_12_0, &direction_outfitguard_248_12_0};
static Image* images_outfitguard_248_13_0[2];
static Direction direction_outfitguard_248_13_0 = {0, 10, 10, 0, -1, images_outfitguard_248_13_0, 2};
static Image* images_outfitguard_248_13_8[2];
static Direction direction_outfitguard_248_13_8 = {8, 10, 10, 0, -1, images_outfitguard_248_13_8, 2};
static Image* images_outfitguard_248_13_16[2];
static Direction direction_outfitguard_248_13_16 = {16, 10, 10, 0, -1, images_outfitguard_248_13_16, 2};
static Image* images_outfitguard_248_13_24[2];
static Direction direction_outfitguard_248_13_24 = {24, 10, 10, 0, -1, images_outfitguard_248_13_24, 2};
static Animation anim_outfitguard_248_13 = {&direction_outfitguard_248_13_0, &direction_outfitguard_248_13_0, &direction_outfitguard_248_13_0, &direction_outfitguard_248_13_0, NULL, &direction_outfitguard_248_13_8, &direction_outfitguard_248_13_8, &direction_outfitguard_248_13_8, &direction_outfitguard_248_13_8, &direction_outfitguard_248_13_8, &direction_outfitguard_248_13_8, &direction_outfitguard_248_13_8, NULL, &direction_outfitguard_248_13_16, &direction_outfitguard_248_13_16, &direction_outfitguard_248_13_16, &direction_outfitguard_248_13_16, &direction_outfitguard_248_13_16, &direction_outfitguard_248_13_16, &direction_outfitguard_248_13_16, NULL, &direction_outfitguard_248_13_24, &direction_outfitguard_248_13_24, &direction_outfitguard_248_13_24, &direction_outfitguard_248_13_24, &direction_outfitguard_248_13_24, &direction_outfitguard_248_13_24, &direction_outfitguard_248_13_24, NULL, &direction_outfitguard_248_13_0, &direction_outfitguard_248_13_0, &direction_outfitguard_248_13_0};
static Image* images_outfitguard_248_14_0[2];
static Direction direction_outfitguard_248_14_0 = {0, 10, 10, 0, -1, images_outfitguard_248_14_0, 2};
static Image* images_outfitguard_248_14_8[2];
static Direction direction_outfitguard_248_14_8 = {8, 10, 10, 0, -1, images_outfitguard_248_14_8, 2};
static Image* images_outfitguard_248_14_16[2];
static Direction direction_outfitguard_248_14_16 = {16, 10, 10, 0, -1, images_outfitguard_248_14_16, 2};
static Image* images_outfitguard_248_14_24[2];
static Direction direction_outfitguard_248_14_24 = {24, 10, 10, 0, -1, images_outfitguard_248_14_24, 2};
static Animation anim_outfitguard_248_14 = {&direction_outfitguard_248_14_0, &direction_outfitguard_248_14_0, &direction_outfitguard_248_14_0, &direction_outfitguard_248_14_0, NULL, &direction_outfitguard_248_14_8, &direction_outfitguard_248_14_8, &direction_outfitguard_248_14_8, &direction_outfitguard_248_14_8, &direction_outfitguard_248_14_8, &direction_outfitguard_248_14_8, &direction_outfitguard_248_14_8, NULL, &direction_outfitguard_248_14_16, &direction_outfitguard_248_14_16, &direction_outfitguard_248_14_16, &direction_outfitguard_248_14_16, &direction_outfitguard_248_14_16, &direction_outfitguard_248_14_16, &direction_outfitguard_248_14_16, NULL, &direction_outfitguard_248_14_24, &direction_outfitguard_248_14_24, &direction_outfitguard_248_14_24, &direction_outfitguard_248_14_24, &direction_outfitguard_248_14_24, &direction_outfitguard_248_14_24, &direction_outfitguard_248_14_24, NULL, &direction_outfitguard_248_14_0, &direction_outfitguard_248_14_0, &direction_outfitguard_248_14_0};
static Image* images_outfitguard_248_15_0[2];
static Direction direction_outfitguard_248_15_0 = {0, 10, 10, 0, -1, images_outfitguard_248_15_0, 2};
static Image* images_outfitguard_248_15_8[2];
static Direction direction_outfitguard_248_15_8 = {8, 10, 10, 0, -1, images_outfitguard_248_15_8, 2};
static Image* images_outfitguard_248_15_16[2];
static Direction direction_outfitguard_248_15_16 = {16, 10, 10, 0, -1, images_outfitguard_248_15_16, 2};
static Image* images_outfitguard_248_15_24[2];
static Direction direction_outfitguard_248_15_24 = {24, 10, 10, 0, -1, images_outfitguard_248_15_24, 2};
static Animation anim_outfitguard_248_15 = {&direction_outfitguard_248_15_0, &direction_outfitguard_248_15_0, &direction_outfitguard_248_15_0, &direction_outfitguard_248_15_0, NULL, &direction_outfitguard_248_15_8, &direction_outfitguard_248_15_8, &direction_outfitguard_248_15_8, &direction_outfitguard_248_15_8, &direction_outfitguard_248_15_8, &direction_outfitguard_248_15_8, &direction_outfitguard_248_15_8, NULL, &direction_outfitguard_248_15_16, &direction_outfitguard_248_15_16, &direction_outfitguard_248_15_16, &direction_outfitguard_248_15_16, &direction_outfitguard_248_15_16, &direction_outfitguard_248_15_16, &direction_outfitguard_248_15_16, NULL, &direction_outfitguard_248_15_24, &direction_outfitguard_248_15_24, &direction_outfitguard_248_15_24, &direction_outfitguard_248_15_24, &direction_outfitguard_248_15_24, &direction_outfitguard_248_15_24, &direction_outfitguard_248_15_24, NULL, &direction_outfitguard_248_15_0, &direction_outfitguard_248_15_0, &direction_outfitguard_248_15_0};
static Image* images_outfitguard_248_16_0[2];
static Direction direction_outfitguard_248_16_0 = {0, 10, 10, 0, -1, images_outfitguard_248_16_0, 2};
static Image* images_outfitguard_248_16_8[2];
static Direction direction_outfitguard_248_16_8 = {8, 10, 10, 0, -1, images_outfitguard_248_16_8, 2};
static Image* images_outfitguard_248_16_16[2];
static Direction direction_outfitguard_248_16_16 = {16, 10, 10, 0, -1, images_outfitguard_248_16_16, 2};
static Image* images_outfitguard_248_16_24[2];
static Direction direction_outfitguard_248_16_24 = {24, 10, 10, 0, -1, images_outfitguard_248_16_24, 2};
static Animation anim_outfitguard_248_16 = {&direction_outfitguard_248_16_0, &direction_outfitguard_248_16_0, &direction_outfitguard_248_16_0, &direction_outfitguard_248_16_0, NULL, &direction_outfitguard_248_16_8, &direction_outfitguard_248_16_8, &direction_outfitguard_248_16_8, &direction_outfitguard_248_16_8, &direction_outfitguard_248_16_8, &direction_outfitguard_248_16_8, &direction_outfitguard_248_16_8, NULL, &direction_outfitguard_248_16_16, &direction_outfitguard_248_16_16, &direction_outfitguard_248_16_16, &direction_outfitguard_248_16_16, &direction_outfitguard_248_16_16, &direction_outfitguard_248_16_16, &direction_outfitguard_248_16_16, NULL, &direction_outfitguard_248_16_24, &direction_outfitguard_248_16_24, &direction_outfitguard_248_16_24, &direction_outfitguard_248_16_24, &direction_outfitguard_248_16_24, &direction_outfitguard_248_16_24, &direction_outfitguard_248_16_24, NULL, &direction_outfitguard_248_16_0, &direction_outfitguard_248_16_0, &direction_outfitguard_248_16_0};
static Image* images_outfitguard_248_17_0[2];
static Direction direction_outfitguard_248_17_0 = {0, 5, 5, 1, -1, images_outfitguard_248_17_0, 2};
static Image* images_outfitguard_248_17_8[2];
static Direction direction_outfitguard_248_17_8 = {8, 5, 5, 1, -1, images_outfitguard_248_17_8, 2};
static Image* images_outfitguard_248_17_16[2];
static Direction direction_outfitguard_248_17_16 = {16, 5, 5, 1, -1, images_outfitguard_248_17_16, 2};
static Image* images_outfitguard_248_17_24[2];
static Direction direction_outfitguard_248_17_24 = {24, 5, 5, 1, -1, images_outfitguard_248_17_24, 2};
static Animation anim_outfitguard_248_17 = {&direction_outfitguard_248_17_0, &direction_outfitguard_248_17_0, &direction_outfitguard_248_17_0, &direction_outfitguard_248_17_0, NULL, &direction_outfitguard_248_17_8, &direction_outfitguard_248_17_8, &direction_outfitguard_248_17_8, &direction_outfitguard_248_17_8, &direction_outfitguard_248_17_8, &direction_outfitguard_248_17_8, &direction_outfitguard_248_17_8, NULL, &direction_outfitguard_248_17_16, &direction_outfitguard_248_17_16, &direction_outfitguard_248_17_16, &direction_outfitguard_248_17_16, &direction_outfitguard_248_17_16, &direction_outfitguard_248_17_16, &direction_outfitguard_248_17_16, NULL, &direction_outfitguard_248_17_24, &direction_outfitguard_248_17_24, &direction_outfitguard_248_17_24, &direction_outfitguard_248_17_24, &direction_outfitguard_248_17_24, &direction_outfitguard_248_17_24, &direction_outfitguard_248_17_24, NULL, &direction_outfitguard_248_17_0, &direction_outfitguard_248_17_0, &direction_outfitguard_248_17_0};
static Animation * anim_array_outfitguard_248[18] = {&anim_outfitguard_248_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitguard_248_6, &anim_outfitguard_248_7, &anim_outfitguard_248_8, NULL, NULL, &anim_outfitguard_248_11, &anim_outfitguard_248_12, &anim_outfitguard_248_13, &anim_outfitguard_248_14, &anim_outfitguard_248_15, &anim_outfitguard_248_16, &anim_outfitguard_248_17};
static Animations anim_outfitguard_248 = {18, &anim_array_outfitguard_248[0]};
static bool anim_outfitguard_248_initialized;
class OutfitGuard_248 : public Active
{
public:
    OutfitGuard_248(int x, int y) : Active(x, y, OutfitGuard_248_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Guard", 14);
#endif
        this->animations = &anim_outfitguard_248;
        if (!anim_outfitguard_248_initialized) {
            anim_outfitguard_248_initialized = true;
            images_outfitguard_248_0_0[0] = get_internal_image(3932);
            images_outfitguard_248_0_0[1] = get_internal_image(499);
            images_outfitguard_248_0_8[0] = get_internal_image(500);
            images_outfitguard_248_0_8[1] = get_internal_image(501);
            images_outfitguard_248_0_16[0] = get_internal_image(497);
            images_outfitguard_248_0_16[1] = get_internal_image(3951);
            images_outfitguard_248_0_24[0] = get_internal_image(502);
            images_outfitguard_248_0_24[1] = get_internal_image(783);
            images_outfitguard_248_6_0[0] = get_internal_image(1416);
            images_outfitguard_248_6_8[0] = get_internal_image(521);
            images_outfitguard_248_6_16[0] = get_internal_image(1418);
            images_outfitguard_248_6_24[0] = get_internal_image(518);
            images_outfitguard_248_7_0[0] = get_internal_image(1347);
            images_outfitguard_248_7_0[1] = get_internal_image(1386);
            images_outfitguard_248_7_8[0] = get_internal_image(1411);
            images_outfitguard_248_7_8[1] = get_internal_image(1414);
            images_outfitguard_248_7_16[0] = get_internal_image(1343);
            images_outfitguard_248_7_16[1] = get_internal_image(1389);
            images_outfitguard_248_7_24[0] = get_internal_image(1410);
            images_outfitguard_248_7_24[1] = get_internal_image(1413);
            images_outfitguard_248_8_0[0] = get_internal_image(480);
            images_outfitguard_248_8_16[0] = get_internal_image(967);
            images_outfitguard_248_8_16[1] = get_internal_image(1271);
            images_outfitguard_248_8_24[0] = get_internal_image(704);
            images_outfitguard_248_8_24[1] = get_internal_image(704);
            images_outfitguard_248_8_24[2] = get_internal_image(704);
            images_outfitguard_248_11_0[0] = get_internal_image(1404);
            images_outfitguard_248_11_0[1] = get_internal_image(1405);
            images_outfitguard_248_11_8[0] = get_internal_image(1402);
            images_outfitguard_248_11_8[1] = get_internal_image(1401);
            images_outfitguard_248_11_16[0] = get_internal_image(1403);
            images_outfitguard_248_11_16[1] = get_internal_image(1406);
            images_outfitguard_248_11_24[0] = get_internal_image(1399);
            images_outfitguard_248_11_24[1] = get_internal_image(1400);
            images_outfitguard_248_12_0[0] = get_internal_image(2297);
            images_outfitguard_248_12_0[1] = get_internal_image(2197);
            images_outfitguard_248_12_8[0] = get_internal_image(2315);
            images_outfitguard_248_12_8[1] = get_internal_image(2291);
            images_outfitguard_248_12_16[0] = get_internal_image(1470);
            images_outfitguard_248_12_16[1] = get_internal_image(1472);
            images_outfitguard_248_12_24[0] = get_internal_image(2179);
            images_outfitguard_248_12_24[1] = get_internal_image(2180);
            images_outfitguard_248_13_0[0] = get_internal_image(2289);
            images_outfitguard_248_13_0[1] = get_internal_image(2317);
            images_outfitguard_248_13_8[0] = get_internal_image(2288);
            images_outfitguard_248_13_8[1] = get_internal_image(2309);
            images_outfitguard_248_13_16[0] = get_internal_image(2316);
            images_outfitguard_248_13_16[1] = get_internal_image(2310);
            images_outfitguard_248_13_24[0] = get_internal_image(2254);
            images_outfitguard_248_13_24[1] = get_internal_image(2182);
            images_outfitguard_248_14_0[0] = get_internal_image(2308);
            images_outfitguard_248_14_0[1] = get_internal_image(2318);
            images_outfitguard_248_14_8[0] = get_internal_image(2290);
            images_outfitguard_248_14_8[1] = get_internal_image(2292);
            images_outfitguard_248_14_16[0] = get_internal_image(2312);
            images_outfitguard_248_14_16[1] = get_internal_image(2313);
            images_outfitguard_248_14_24[0] = get_internal_image(2319);
            images_outfitguard_248_14_24[1] = get_internal_image(2200);
            images_outfitguard_248_15_0[0] = get_internal_image(2186);
            images_outfitguard_248_15_0[1] = get_internal_image(2199);
            images_outfitguard_248_15_8[0] = get_internal_image(2185);
            images_outfitguard_248_15_8[1] = get_internal_image(2295);
            images_outfitguard_248_15_16[0] = get_internal_image(2304);
            images_outfitguard_248_15_16[1] = get_internal_image(2320);
            images_outfitguard_248_15_24[0] = get_internal_image(2321);
            images_outfitguard_248_15_24[1] = get_internal_image(2196);
            images_outfitguard_248_16_0[0] = get_internal_image(2301);
            images_outfitguard_248_16_0[1] = get_internal_image(2322);
            images_outfitguard_248_16_8[0] = get_internal_image(2198);
            images_outfitguard_248_16_8[1] = get_internal_image(2293);
            images_outfitguard_248_16_16[0] = get_internal_image(2323);
            images_outfitguard_248_16_16[1] = get_internal_image(2303);
            images_outfitguard_248_16_24[0] = get_internal_image(2300);
            images_outfitguard_248_16_24[1] = get_internal_image(2189);
            images_outfitguard_248_17_0[0] = get_internal_image(2188);
            images_outfitguard_248_17_0[1] = get_internal_image(2325);
            images_outfitguard_248_17_8[0] = get_internal_image(2298);
            images_outfitguard_248_17_8[1] = get_internal_image(2299);
            images_outfitguard_248_17_16[0] = get_internal_image(2194);
            images_outfitguard_248_17_16[1] = get_internal_image(2314);
            images_outfitguard_248_17_24[0] = get_internal_image(2190);
            images_outfitguard_248_17_24[1] = get_internal_image(2294);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_outfitguard_248(int x, int y)
{
    return new (Active::pool.create()) OutfitGuard_248(x, y);
}
static Image* images_outfitinmate_249_0_0[2];
static Direction direction_outfitinmate_249_0_0 = {0, 6, 6, 0, -1, images_outfitinmate_249_0_0, 2};
static Image* images_outfitinmate_249_0_8[2];
static Direction direction_outfitinmate_249_0_8 = {8, 6, 6, 0, -1, images_outfitinmate_249_0_8, 2};
static Image* images_outfitinmate_249_0_16[2];
static Direction direction_outfitinmate_249_0_16 = {16, 6, 6, 0, -1, images_outfitinmate_249_0_16, 2};
static Image* images_outfitinmate_249_0_24[2];
static Direction direction_outfitinmate_249_0_24 = {24, 6, 6, 0, -1, images_outfitinmate_249_0_24, 2};
static Animation anim_outfitinmate_249_0 = {&direction_outfitinmate_249_0_0, &direction_outfitinmate_249_0_0, &direction_outfitinmate_249_0_0, &direction_outfitinmate_249_0_0, NULL, &direction_outfitinmate_249_0_8, &direction_outfitinmate_249_0_8, &direction_outfitinmate_249_0_8, &direction_outfitinmate_249_0_8, &direction_outfitinmate_249_0_8, &direction_outfitinmate_249_0_8, &direction_outfitinmate_249_0_8, NULL, &direction_outfitinmate_249_0_16, &direction_outfitinmate_249_0_16, &direction_outfitinmate_249_0_16, &direction_outfitinmate_249_0_16, &direction_outfitinmate_249_0_16, &direction_outfitinmate_249_0_16, &direction_outfitinmate_249_0_16, NULL, &direction_outfitinmate_249_0_24, &direction_outfitinmate_249_0_24, &direction_outfitinmate_249_0_24, &direction_outfitinmate_249_0_24, &direction_outfitinmate_249_0_24, &direction_outfitinmate_249_0_24, &direction_outfitinmate_249_0_24, NULL, &direction_outfitinmate_249_0_0, &direction_outfitinmate_249_0_0, &direction_outfitinmate_249_0_0};
static Image* images_outfitinmate_249_6_0[1];
static Direction direction_outfitinmate_249_6_0 = {0, 6, 6, 0, -1, images_outfitinmate_249_6_0, 1};
static Image* images_outfitinmate_249_6_8[1];
static Direction direction_outfitinmate_249_6_8 = {8, 6, 6, 0, -1, images_outfitinmate_249_6_8, 1};
static Image* images_outfitinmate_249_6_16[1];
static Direction direction_outfitinmate_249_6_16 = {16, 6, 6, 0, 1, images_outfitinmate_249_6_16, 1};
static Image* images_outfitinmate_249_6_24[1];
static Direction direction_outfitinmate_249_6_24 = {24, 6, 6, 0, -1, images_outfitinmate_249_6_24, 1};
static Animation anim_outfitinmate_249_6 = {&direction_outfitinmate_249_6_0, &direction_outfitinmate_249_6_0, &direction_outfitinmate_249_6_0, &direction_outfitinmate_249_6_0, NULL, &direction_outfitinmate_249_6_8, &direction_outfitinmate_249_6_8, &direction_outfitinmate_249_6_8, &direction_outfitinmate_249_6_8, &direction_outfitinmate_249_6_8, &direction_outfitinmate_249_6_8, &direction_outfitinmate_249_6_8, NULL, &direction_outfitinmate_249_6_16, &direction_outfitinmate_249_6_16, &direction_outfitinmate_249_6_16, &direction_outfitinmate_249_6_16, &direction_outfitinmate_249_6_16, &direction_outfitinmate_249_6_16, &direction_outfitinmate_249_6_16, NULL, &direction_outfitinmate_249_6_24, &direction_outfitinmate_249_6_24, &direction_outfitinmate_249_6_24, &direction_outfitinmate_249_6_24, &direction_outfitinmate_249_6_24, &direction_outfitinmate_249_6_24, &direction_outfitinmate_249_6_24, NULL, &direction_outfitinmate_249_6_0, &direction_outfitinmate_249_6_0, &direction_outfitinmate_249_6_0};
static Image* images_outfitinmate_249_7_0[2];
static Direction direction_outfitinmate_249_7_0 = {0, 6, 6, 0, -1, images_outfitinmate_249_7_0, 2};
static Image* images_outfitinmate_249_7_8[2];
static Direction direction_outfitinmate_249_7_8 = {8, 6, 6, 0, -1, images_outfitinmate_249_7_8, 2};
static Image* images_outfitinmate_249_7_16[2];
static Direction direction_outfitinmate_249_7_16 = {16, 6, 6, 0, -1, images_outfitinmate_249_7_16, 2};
static Image* images_outfitinmate_249_7_24[2];
static Direction direction_outfitinmate_249_7_24 = {24, 6, 6, 0, -1, images_outfitinmate_249_7_24, 2};
static Animation anim_outfitinmate_249_7 = {&direction_outfitinmate_249_7_0, &direction_outfitinmate_249_7_0, &direction_outfitinmate_249_7_0, &direction_outfitinmate_249_7_0, NULL, &direction_outfitinmate_249_7_8, &direction_outfitinmate_249_7_8, &direction_outfitinmate_249_7_8, &direction_outfitinmate_249_7_8, &direction_outfitinmate_249_7_8, &direction_outfitinmate_249_7_8, &direction_outfitinmate_249_7_8, NULL, &direction_outfitinmate_249_7_16, &direction_outfitinmate_249_7_16, &direction_outfitinmate_249_7_16, &direction_outfitinmate_249_7_16, &direction_outfitinmate_249_7_16, &direction_outfitinmate_249_7_16, &direction_outfitinmate_249_7_16, NULL, &direction_outfitinmate_249_7_24, &direction_outfitinmate_249_7_24, &direction_outfitinmate_249_7_24, &direction_outfitinmate_249_7_24, &direction_outfitinmate_249_7_24, &direction_outfitinmate_249_7_24, &direction_outfitinmate_249_7_24, NULL, &direction_outfitinmate_249_7_0, &direction_outfitinmate_249_7_0, &direction_outfitinmate_249_7_0};
static Image* images_outfitinmate_249_8_0[1];
static Direction direction_outfitinmate_249_8_0 = {0, 10, 10, 0, -1, images_outfitinmate_249_8_0, 1};
static Image* images_outfitinmate_249_8_16[2];
static Direction direction_outfitinmate_249_8_16 = {16, 5, 5, 0, -1, images_outfitinmate_249_8_16, 2};
static Image* images_outfitinmate_249_8_24[3];
static Direction direction_outfitinmate_249_8_24 = {24, 50, 50, 0, -1, images_outfitinmate_249_8_24, 3};
static Animation anim_outfitinmate_249_8 = {&direction_outfitinmate_249_8_0, &direction_outfitinmate_249_8_0, &direction_outfitinmate_249_8_0, &direction_outfitinmate_249_8_0, &direction_outfitinmate_249_8_0, &direction_outfitinmate_249_8_0, &direction_outfitinmate_249_8_0, &direction_outfitinmate_249_8_0, NULL, &direction_outfitinmate_249_8_16, &direction_outfitinmate_249_8_16, &direction_outfitinmate_249_8_16, &direction_outfitinmate_249_8_16, &direction_outfitinmate_249_8_16, &direction_outfitinmate_249_8_16, &direction_outfitinmate_249_8_16, &direction_outfitinmate_249_8_16, &direction_outfitinmate_249_8_16, &direction_outfitinmate_249_8_16, &direction_outfitinmate_249_8_16, NULL, &direction_outfitinmate_249_8_24, &direction_outfitinmate_249_8_24, &direction_outfitinmate_249_8_24, &direction_outfitinmate_249_8_24, &direction_outfitinmate_249_8_24, &direction_outfitinmate_249_8_24, &direction_outfitinmate_249_8_24, NULL, &direction_outfitinmate_249_8_0, &direction_outfitinmate_249_8_0, &direction_outfitinmate_249_8_0};
static Image* images_outfitinmate_249_9_0[2];
static Direction direction_outfitinmate_249_9_0 = {0, 5, 5, 0, -1, images_outfitinmate_249_9_0, 2};
static Animation anim_outfitinmate_249_9 = {&direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, NULL, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0, &direction_outfitinmate_249_9_0};
static Image* images_outfitinmate_249_10_0[5];
static Direction direction_outfitinmate_249_10_0 = {0, 10, 10, 0, -1, images_outfitinmate_249_10_0, 5};
static Animation anim_outfitinmate_249_10 = {&direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, NULL, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0, &direction_outfitinmate_249_10_0};
static Image* images_outfitinmate_249_11_0[2];
static Direction direction_outfitinmate_249_11_0 = {0, 6, 6, 0, -1, images_outfitinmate_249_11_0, 2};
static Image* images_outfitinmate_249_11_8[2];
static Direction direction_outfitinmate_249_11_8 = {8, 6, 6, 0, -1, images_outfitinmate_249_11_8, 2};
static Image* images_outfitinmate_249_11_16[2];
static Direction direction_outfitinmate_249_11_16 = {16, 6, 6, 0, -1, images_outfitinmate_249_11_16, 2};
static Image* images_outfitinmate_249_11_24[2];
static Direction direction_outfitinmate_249_11_24 = {24, 6, 6, 0, -1, images_outfitinmate_249_11_24, 2};
static Animation anim_outfitinmate_249_11 = {&direction_outfitinmate_249_11_0, &direction_outfitinmate_249_11_0, &direction_outfitinmate_249_11_0, &direction_outfitinmate_249_11_0, NULL, &direction_outfitinmate_249_11_8, &direction_outfitinmate_249_11_8, &direction_outfitinmate_249_11_8, &direction_outfitinmate_249_11_8, &direction_outfitinmate_249_11_8, &direction_outfitinmate_249_11_8, &direction_outfitinmate_249_11_8, NULL, &direction_outfitinmate_249_11_16, &direction_outfitinmate_249_11_16, &direction_outfitinmate_249_11_16, &direction_outfitinmate_249_11_16, &direction_outfitinmate_249_11_16, &direction_outfitinmate_249_11_16, &direction_outfitinmate_249_11_16, NULL, &direction_outfitinmate_249_11_24, &direction_outfitinmate_249_11_24, &direction_outfitinmate_249_11_24, &direction_outfitinmate_249_11_24, &direction_outfitinmate_249_11_24, &direction_outfitinmate_249_11_24, &direction_outfitinmate_249_11_24, NULL, &direction_outfitinmate_249_11_0, &direction_outfitinmate_249_11_0, &direction_outfitinmate_249_11_0};
static Image* images_outfitinmate_249_12_0[2];
static Direction direction_outfitinmate_249_12_0 = {0, 10, 10, 0, -1, images_outfitinmate_249_12_0, 2};
static Image* images_outfitinmate_249_12_8[2];
static Direction direction_outfitinmate_249_12_8 = {8, 10, 10, 0, -1, images_outfitinmate_249_12_8, 2};
static Image* images_outfitinmate_249_12_16[2];
static Direction direction_outfitinmate_249_12_16 = {16, 10, 10, 0, -1, images_outfitinmate_249_12_16, 2};
static Image* images_outfitinmate_249_12_24[2];
static Direction direction_outfitinmate_249_12_24 = {24, 10, 10, 0, -1, images_outfitinmate_249_12_24, 2};
static Animation anim_outfitinmate_249_12 = {&direction_outfitinmate_249_12_0, &direction_outfitinmate_249_12_0, &direction_outfitinmate_249_12_0, &direction_outfitinmate_249_12_0, NULL, &direction_outfitinmate_249_12_8, &direction_outfitinmate_249_12_8, &direction_outfitinmate_249_12_8, &direction_outfitinmate_249_12_8, &direction_outfitinmate_249_12_8, &direction_outfitinmate_249_12_8, &direction_outfitinmate_249_12_8, NULL, &direction_outfitinmate_249_12_16, &direction_outfitinmate_249_12_16, &direction_outfitinmate_249_12_16, &direction_outfitinmate_249_12_16, &direction_outfitinmate_249_12_16, &direction_outfitinmate_249_12_16, &direction_outfitinmate_249_12_16, NULL, &direction_outfitinmate_249_12_24, &direction_outfitinmate_249_12_24, &direction_outfitinmate_249_12_24, &direction_outfitinmate_249_12_24, &direction_outfitinmate_249_12_24, &direction_outfitinmate_249_12_24, &direction_outfitinmate_249_12_24, NULL, &direction_outfitinmate_249_12_0, &direction_outfitinmate_249_12_0, &direction_outfitinmate_249_12_0};
static Image* images_outfitinmate_249_13_0[2];
static Direction direction_outfitinmate_249_13_0 = {0, 10, 10, 0, -1, images_outfitinmate_249_13_0, 2};
static Image* images_outfitinmate_249_13_8[2];
static Direction direction_outfitinmate_249_13_8 = {8, 10, 10, 0, -1, images_outfitinmate_249_13_8, 2};
static Image* images_outfitinmate_249_13_16[2];
static Direction direction_outfitinmate_249_13_16 = {16, 10, 10, 0, -1, images_outfitinmate_249_13_16, 2};
static Image* images_outfitinmate_249_13_24[2];
static Direction direction_outfitinmate_249_13_24 = {24, 10, 10, 0, -1, images_outfitinmate_249_13_24, 2};
static Animation anim_outfitinmate_249_13 = {&direction_outfitinmate_249_13_0, &direction_outfitinmate_249_13_0, &direction_outfitinmate_249_13_0, &direction_outfitinmate_249_13_0, NULL, &direction_outfitinmate_249_13_8, &direction_outfitinmate_249_13_8, &direction_outfitinmate_249_13_8, &direction_outfitinmate_249_13_8, &direction_outfitinmate_249_13_8, &direction_outfitinmate_249_13_8, &direction_outfitinmate_249_13_8, NULL, &direction_outfitinmate_249_13_16, &direction_outfitinmate_249_13_16, &direction_outfitinmate_249_13_16, &direction_outfitinmate_249_13_16, &direction_outfitinmate_249_13_16, &direction_outfitinmate_249_13_16, &direction_outfitinmate_249_13_16, NULL, &direction_outfitinmate_249_13_24, &direction_outfitinmate_249_13_24, &direction_outfitinmate_249_13_24, &direction_outfitinmate_249_13_24, &direction_outfitinmate_249_13_24, &direction_outfitinmate_249_13_24, &direction_outfitinmate_249_13_24, NULL, &direction_outfitinmate_249_13_0, &direction_outfitinmate_249_13_0, &direction_outfitinmate_249_13_0};
static Image* images_outfitinmate_249_14_0[2];
static Direction direction_outfitinmate_249_14_0 = {0, 10, 10, 0, -1, images_outfitinmate_249_14_0, 2};
static Image* images_outfitinmate_249_14_8[2];
static Direction direction_outfitinmate_249_14_8 = {8, 10, 10, 0, -1, images_outfitinmate_249_14_8, 2};
static Image* images_outfitinmate_249_14_16[2];
static Direction direction_outfitinmate_249_14_16 = {16, 10, 10, 0, -1, images_outfitinmate_249_14_16, 2};
static Image* images_outfitinmate_249_14_24[2];
static Direction direction_outfitinmate_249_14_24 = {24, 10, 10, 0, -1, images_outfitinmate_249_14_24, 2};
static Animation anim_outfitinmate_249_14 = {&direction_outfitinmate_249_14_0, &direction_outfitinmate_249_14_0, &direction_outfitinmate_249_14_0, &direction_outfitinmate_249_14_0, NULL, &direction_outfitinmate_249_14_8, &direction_outfitinmate_249_14_8, &direction_outfitinmate_249_14_8, &direction_outfitinmate_249_14_8, &direction_outfitinmate_249_14_8, &direction_outfitinmate_249_14_8, &direction_outfitinmate_249_14_8, NULL, &direction_outfitinmate_249_14_16, &direction_outfitinmate_249_14_16, &direction_outfitinmate_249_14_16, &direction_outfitinmate_249_14_16, &direction_outfitinmate_249_14_16, &direction_outfitinmate_249_14_16, &direction_outfitinmate_249_14_16, NULL, &direction_outfitinmate_249_14_24, &direction_outfitinmate_249_14_24, &direction_outfitinmate_249_14_24, &direction_outfitinmate_249_14_24, &direction_outfitinmate_249_14_24, &direction_outfitinmate_249_14_24, &direction_outfitinmate_249_14_24, NULL, &direction_outfitinmate_249_14_0, &direction_outfitinmate_249_14_0, &direction_outfitinmate_249_14_0};
static Image* images_outfitinmate_249_15_0[2];
static Direction direction_outfitinmate_249_15_0 = {0, 10, 10, 0, -1, images_outfitinmate_249_15_0, 2};
static Image* images_outfitinmate_249_15_8[2];
static Direction direction_outfitinmate_249_15_8 = {8, 10, 10, 0, -1, images_outfitinmate_249_15_8, 2};
static Image* images_outfitinmate_249_15_16[2];
static Direction direction_outfitinmate_249_15_16 = {16, 10, 10, 0, -1, images_outfitinmate_249_15_16, 2};
static Image* images_outfitinmate_249_15_24[2];
static Direction direction_outfitinmate_249_15_24 = {24, 10, 10, 0, -1, images_outfitinmate_249_15_24, 2};
static Animation anim_outfitinmate_249_15 = {&direction_outfitinmate_249_15_0, &direction_outfitinmate_249_15_0, &direction_outfitinmate_249_15_0, &direction_outfitinmate_249_15_0, NULL, &direction_outfitinmate_249_15_8, &direction_outfitinmate_249_15_8, &direction_outfitinmate_249_15_8, &direction_outfitinmate_249_15_8, &direction_outfitinmate_249_15_8, &direction_outfitinmate_249_15_8, &direction_outfitinmate_249_15_8, NULL, &direction_outfitinmate_249_15_16, &direction_outfitinmate_249_15_16, &direction_outfitinmate_249_15_16, &direction_outfitinmate_249_15_16, &direction_outfitinmate_249_15_16, &direction_outfitinmate_249_15_16, &direction_outfitinmate_249_15_16, NULL, &direction_outfitinmate_249_15_24, &direction_outfitinmate_249_15_24, &direction_outfitinmate_249_15_24, &direction_outfitinmate_249_15_24, &direction_outfitinmate_249_15_24, &direction_outfitinmate_249_15_24, &direction_outfitinmate_249_15_24, NULL, &direction_outfitinmate_249_15_0, &direction_outfitinmate_249_15_0, &direction_outfitinmate_249_15_0};
static Image* images_outfitinmate_249_16_0[2];
static Direction direction_outfitinmate_249_16_0 = {0, 10, 10, 0, -1, images_outfitinmate_249_16_0, 2};
static Image* images_outfitinmate_249_16_8[2];
static Direction direction_outfitinmate_249_16_8 = {8, 10, 10, 0, -1, images_outfitinmate_249_16_8, 2};
static Image* images_outfitinmate_249_16_16[2];
static Direction direction_outfitinmate_249_16_16 = {16, 10, 10, 0, -1, images_outfitinmate_249_16_16, 2};
static Image* images_outfitinmate_249_16_24[2];
static Direction direction_outfitinmate_249_16_24 = {24, 10, 10, 0, -1, images_outfitinmate_249_16_24, 2};
static Animation anim_outfitinmate_249_16 = {&direction_outfitinmate_249_16_0, &direction_outfitinmate_249_16_0, &direction_outfitinmate_249_16_0, &direction_outfitinmate_249_16_0, NULL, &direction_outfitinmate_249_16_8, &direction_outfitinmate_249_16_8, &direction_outfitinmate_249_16_8, &direction_outfitinmate_249_16_8, &direction_outfitinmate_249_16_8, &direction_outfitinmate_249_16_8, &direction_outfitinmate_249_16_8, NULL, &direction_outfitinmate_249_16_16, &direction_outfitinmate_249_16_16, &direction_outfitinmate_249_16_16, &direction_outfitinmate_249_16_16, &direction_outfitinmate_249_16_16, &direction_outfitinmate_249_16_16, &direction_outfitinmate_249_16_16, NULL, &direction_outfitinmate_249_16_24, &direction_outfitinmate_249_16_24, &direction_outfitinmate_249_16_24, &direction_outfitinmate_249_16_24, &direction_outfitinmate_249_16_24, &direction_outfitinmate_249_16_24, &direction_outfitinmate_249_16_24, NULL, &direction_outfitinmate_249_16_0, &direction_outfitinmate_249_16_0, &direction_outfitinmate_249_16_0};
static Image* images_outfitinmate_249_17_0[2];
static Direction direction_outfitinmate_249_17_0 = {0, 5, 5, 1, -1, images_outfitinmate_249_17_0, 2};
static Image* images_outfitinmate_249_17_8[2];
static Direction direction_outfitinmate_249_17_8 = {8, 5, 5, 1, -1, images_outfitinmate_249_17_8, 2};
static Image* images_outfitinmate_249_17_16[2];
static Direction direction_outfitinmate_249_17_16 = {16, 5, 5, 1, -1, images_outfitinmate_249_17_16, 2};
static Image* images_outfitinmate_249_17_24[2];
static Direction direction_outfitinmate_249_17_24 = {24, 5, 5, 1, -1, images_outfitinmate_249_17_24, 2};
static Animation anim_outfitinmate_249_17 = {&direction_outfitinmate_249_17_0, &direction_outfitinmate_249_17_0, &direction_outfitinmate_249_17_0, &direction_outfitinmate_249_17_0, NULL, &direction_outfitinmate_249_17_8, &direction_outfitinmate_249_17_8, &direction_outfitinmate_249_17_8, &direction_outfitinmate_249_17_8, &direction_outfitinmate_249_17_8, &direction_outfitinmate_249_17_8, &direction_outfitinmate_249_17_8, NULL, &direction_outfitinmate_249_17_16, &direction_outfitinmate_249_17_16, &direction_outfitinmate_249_17_16, &direction_outfitinmate_249_17_16, &direction_outfitinmate_249_17_16, &direction_outfitinmate_249_17_16, &direction_outfitinmate_249_17_16, NULL, &direction_outfitinmate_249_17_24, &direction_outfitinmate_249_17_24, &direction_outfitinmate_249_17_24, &direction_outfitinmate_249_17_24, &direction_outfitinmate_249_17_24, &direction_outfitinmate_249_17_24, &direction_outfitinmate_249_17_24, NULL, &direction_outfitinmate_249_17_0, &direction_outfitinmate_249_17_0, &direction_outfitinmate_249_17_0};
static Image* images_outfitinmate_249_18_24[8];
static Direction direction_outfitinmate_249_18_24 = {24, 25, 25, 0, -1, images_outfitinmate_249_18_24, 8};
static Animation anim_outfitinmate_249_18 = {&direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, NULL, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24, &direction_outfitinmate_249_18_24};
static Image* images_outfitinmate_249_19_24[5];
static Direction direction_outfitinmate_249_19_24 = {24, 10, 10, 0, -1, images_outfitinmate_249_19_24, 5};
static Animation anim_outfitinmate_249_19 = {&direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, NULL, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24, &direction_outfitinmate_249_19_24};
static Animation * anim_array_outfitinmate_249[20] = {&anim_outfitinmate_249_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitinmate_249_6, &anim_outfitinmate_249_7, &anim_outfitinmate_249_8, &anim_outfitinmate_249_9, &anim_outfitinmate_249_10, &anim_outfitinmate_249_11, &anim_outfitinmate_249_12, &anim_outfitinmate_249_13, &anim_outfitinmate_249_14, &anim_outfitinmate_249_15, &anim_outfitinmate_249_16, &anim_outfitinmate_249_17, &anim_outfitinmate_249_18, &anim_outfitinmate_249_19};
static Animations anim_outfitinmate_249 = {20, &anim_array_outfitinmate_249[0]};
static bool anim_outfitinmate_249_initialized;
class OutfitInmate_249 : public Active
{
public:
    OutfitInmate_249(int x, int y) : Active(x, y, OutfitInmate_249_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate", 15);
#endif
        this->animations = &anim_outfitinmate_249;
        if (!anim_outfitinmate_249_initialized) {
            anim_outfitinmate_249_initialized = true;
            images_outfitinmate_249_0_0[0] = get_internal_image(564);
            images_outfitinmate_249_0_0[1] = get_internal_image(567);
            images_outfitinmate_249_0_8[0] = get_internal_image(526);
            images_outfitinmate_249_0_8[1] = get_internal_image(525);
            images_outfitinmate_249_0_16[0] = get_internal_image(568);
            images_outfitinmate_249_0_16[1] = get_internal_image(569);
            images_outfitinmate_249_0_24[0] = get_internal_image(555);
            images_outfitinmate_249_0_24[1] = get_internal_image(549);
            images_outfitinmate_249_6_0[0] = get_internal_image(787);
            images_outfitinmate_249_6_8[0] = get_internal_image(789);
            images_outfitinmate_249_6_16[0] = get_internal_image(790);
            images_outfitinmate_249_6_24[0] = get_internal_image(530);
            images_outfitinmate_249_7_0[0] = get_internal_image(620);
            images_outfitinmate_249_7_0[1] = get_internal_image(619);
            images_outfitinmate_249_7_8[0] = get_internal_image(625);
            images_outfitinmate_249_7_8[1] = get_internal_image(623);
            images_outfitinmate_249_7_16[0] = get_internal_image(618);
            images_outfitinmate_249_7_16[1] = get_internal_image(621);
            images_outfitinmate_249_7_24[0] = get_internal_image(616);
            images_outfitinmate_249_7_24[1] = get_internal_image(617);
            images_outfitinmate_249_8_0[0] = get_internal_image(2487);
            images_outfitinmate_249_8_16[0] = get_internal_image(42);
            images_outfitinmate_249_8_16[1] = get_internal_image(46);
            images_outfitinmate_249_8_24[0] = get_internal_image(712);
            images_outfitinmate_249_8_24[1] = get_internal_image(712);
            images_outfitinmate_249_8_24[2] = get_internal_image(712);
            images_outfitinmate_249_9_0[0] = get_internal_image(1492);
            images_outfitinmate_249_9_0[1] = get_internal_image(1493);
            images_outfitinmate_249_10_0[0] = get_internal_image(765);
            images_outfitinmate_249_10_0[1] = get_internal_image(376);
            images_outfitinmate_249_10_0[2] = get_internal_image(249);
            images_outfitinmate_249_10_0[3] = get_internal_image(767);
            images_outfitinmate_249_10_0[4] = get_internal_image(249);
            images_outfitinmate_249_11_0[0] = get_internal_image(358);
            images_outfitinmate_249_11_0[1] = get_internal_image(385);
            images_outfitinmate_249_11_8[0] = get_internal_image(741);
            images_outfitinmate_249_11_8[1] = get_internal_image(739);
            images_outfitinmate_249_11_16[0] = get_internal_image(462);
            images_outfitinmate_249_11_16[1] = get_internal_image(475);
            images_outfitinmate_249_11_24[0] = get_internal_image(195);
            images_outfitinmate_249_11_24[1] = get_internal_image(195);
            images_outfitinmate_249_12_0[0] = get_internal_image(1616);
            images_outfitinmate_249_12_0[1] = get_internal_image(1612);
            images_outfitinmate_249_12_8[0] = get_internal_image(1599);
            images_outfitinmate_249_12_8[1] = get_internal_image(1596);
            images_outfitinmate_249_12_16[0] = get_internal_image(1613);
            images_outfitinmate_249_12_16[1] = get_internal_image(1619);
            images_outfitinmate_249_12_24[0] = get_internal_image(1620);
            images_outfitinmate_249_12_24[1] = get_internal_image(1615);
            images_outfitinmate_249_13_0[0] = get_internal_image(1858);
            images_outfitinmate_249_13_0[1] = get_internal_image(1859);
            images_outfitinmate_249_13_8[0] = get_internal_image(1864);
            images_outfitinmate_249_13_8[1] = get_internal_image(1861);
            images_outfitinmate_249_13_16[0] = get_internal_image(1857);
            images_outfitinmate_249_13_16[1] = get_internal_image(1860);
            images_outfitinmate_249_13_24[0] = get_internal_image(1862);
            images_outfitinmate_249_13_24[1] = get_internal_image(1863);
            images_outfitinmate_249_14_0[0] = get_internal_image(1649);
            images_outfitinmate_249_14_0[1] = get_internal_image(1650);
            images_outfitinmate_249_14_8[0] = get_internal_image(1644);
            images_outfitinmate_249_14_8[1] = get_internal_image(1643);
            images_outfitinmate_249_14_16[0] = get_internal_image(1651);
            images_outfitinmate_249_14_16[1] = get_internal_image(1652);
            images_outfitinmate_249_14_24[0] = get_internal_image(1622);
            images_outfitinmate_249_14_24[1] = get_internal_image(1621);
            images_outfitinmate_249_15_0[0] = get_internal_image(1636);
            images_outfitinmate_249_15_0[1] = get_internal_image(1637);
            images_outfitinmate_249_15_8[0] = get_internal_image(1632);
            images_outfitinmate_249_15_8[1] = get_internal_image(1626);
            images_outfitinmate_249_15_16[0] = get_internal_image(1638);
            images_outfitinmate_249_15_16[1] = get_internal_image(1639);
            images_outfitinmate_249_15_24[0] = get_internal_image(1630);
            images_outfitinmate_249_15_24[1] = get_internal_image(1621);
            images_outfitinmate_249_16_0[0] = get_internal_image(1858);
            images_outfitinmate_249_16_0[1] = get_internal_image(1859);
            images_outfitinmate_249_16_8[0] = get_internal_image(1864);
            images_outfitinmate_249_16_8[1] = get_internal_image(1861);
            images_outfitinmate_249_16_16[0] = get_internal_image(1857);
            images_outfitinmate_249_16_16[1] = get_internal_image(1860);
            images_outfitinmate_249_16_24[0] = get_internal_image(1862);
            images_outfitinmate_249_16_24[1] = get_internal_image(1863);
            images_outfitinmate_249_17_0[0] = get_internal_image(2045);
            images_outfitinmate_249_17_0[1] = get_internal_image(2046);
            images_outfitinmate_249_17_8[0] = get_internal_image(2050);
            images_outfitinmate_249_17_8[1] = get_internal_image(2043);
            images_outfitinmate_249_17_16[0] = get_internal_image(2041);
            images_outfitinmate_249_17_16[1] = get_internal_image(2044);
            images_outfitinmate_249_17_24[0] = get_internal_image(2049);
            images_outfitinmate_249_17_24[1] = get_internal_image(2047);
            images_outfitinmate_249_18_24[0] = get_internal_image(1407);
            images_outfitinmate_249_18_24[1] = get_internal_image(2131);
            images_outfitinmate_249_18_24[2] = get_internal_image(2168);
            images_outfitinmate_249_18_24[3] = get_internal_image(437);
            images_outfitinmate_249_18_24[4] = get_internal_image(1425);
            images_outfitinmate_249_18_24[5] = get_internal_image(2126);
            images_outfitinmate_249_18_24[6] = get_internal_image(2171);
            images_outfitinmate_249_18_24[7] = get_internal_image(1412);
            images_outfitinmate_249_19_24[0] = get_internal_image(2328);
            images_outfitinmate_249_19_24[1] = get_internal_image(2329);
            images_outfitinmate_249_19_24[2] = get_internal_image(2329);
            images_outfitinmate_249_19_24[3] = get_internal_image(2307);
            images_outfitinmate_249_19_24[4] = get_internal_image(2307);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmate_249(int x, int y)
{
    return new (Active::pool.create()) OutfitInmate_249(x, y);
}
static Image* images_inmateBase_0_0[1];
static Direction direction_inmateBase_0_0 = {0, 6, 6, 0, -1, images_inmateBase_0_0, 1};
static Image* images_inmateBase_0_8[1];
static Direction direction_inmateBase_0_8 = {8, 6, 6, 0, -1, images_inmateBase_0_8, 1};
static Image* images_inmateBase_0_16[1];
static Direction direction_inmateBase_0_16 = {16, 6, 6, 0, -1, images_inmateBase_0_16, 1};
static Image* images_inmateBase_0_24[1];
static Direction direction_inmateBase_0_24 = {24, 6, 6, 0, -1, images_inmateBase_0_24, 1};
static Animation anim_inmateBase_0 = {&direction_inmateBase_0_0, &direction_inmateBase_0_0, &direction_inmateBase_0_0, &direction_inmateBase_0_0, NULL, &direction_inmateBase_0_8, &direction_inmateBase_0_8, &direction_inmateBase_0_8, &direction_inmateBase_0_8, &direction_inmateBase_0_8, &direction_inmateBase_0_8, &direction_inmateBase_0_8, NULL, &direction_inmateBase_0_16, &direction_inmateBase_0_16, &direction_inmateBase_0_16, &direction_inmateBase_0_16, &direction_inmateBase_0_16, &direction_inmateBase_0_16, &direction_inmateBase_0_16, NULL, &direction_inmateBase_0_24, &direction_inmateBase_0_24, &direction_inmateBase_0_24, &direction_inmateBase_0_24, &direction_inmateBase_0_24, &direction_inmateBase_0_24, &direction_inmateBase_0_24, NULL, &direction_inmateBase_0_0, &direction_inmateBase_0_0, &direction_inmateBase_0_0};
static Animation * anim_array_inmateBase[1] = {&anim_inmateBase_0};
static Animations anim_inmateBase = {1, &anim_array_inmateBase[0]};
static bool anim_inmateBase_initialized;
class InmateBase : public Active
{
public:
    InmateBase(int x, int y) : Active(x, y, inmateBase_type)
    {
        // qualifiers: 0, 45, 47
#ifndef NDEBUG
        name = std::string("BASE - Inmate", 13);
#endif
        set_visible(false);
        this->animations = &anim_inmateBase;
        if (!anim_inmateBase_initialized) {
            anim_inmateBase_initialized = true;
            images_inmateBase_0_0[0] = get_internal_image(545);
            images_inmateBase_0_8[0] = get_internal_image(545);
            images_inmateBase_0_16[0] = get_internal_image(545);
            images_inmateBase_0_24[0] = get_internal_image(545);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(pick_random(4, 0, 8, 16, 24));
        movements[0] = new BallMovement(this);
        movements[0]->index = 0;
        ((BallMovement*)movements[0])->set_max_speed(10);
        ((BallMovement*)movements[0])->set_deceleration(0);
        ((BallMovement*)movements[0])->randomizer = 20;
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        movements[1]->flags |= Movement::MOVE_AT_START;
        set_movement(0);
        create_alterables();
        alterables->values.set(7, 15);
    }
};
FrameObject * create_inmateBase(int x, int y)
{
    return new (Active::pool.create()) InmateBase(x, y);
}
static Image* images_guardBase_0_0[1];
static Direction direction_guardBase_0_0 = {0, 6, 6, 0, -1, images_guardBase_0_0, 1};
static Image* images_guardBase_0_8[1];
static Direction direction_guardBase_0_8 = {8, 6, 6, 0, -1, images_guardBase_0_8, 1};
static Image* images_guardBase_0_16[1];
static Direction direction_guardBase_0_16 = {16, 6, 6, 0, -1, images_guardBase_0_16, 1};
static Image* images_guardBase_0_24[1];
static Direction direction_guardBase_0_24 = {24, 6, 6, 0, -1, images_guardBase_0_24, 1};
static Animation anim_guardBase_0 = {&direction_guardBase_0_0, &direction_guardBase_0_0, &direction_guardBase_0_0, &direction_guardBase_0_0, NULL, &direction_guardBase_0_8, &direction_guardBase_0_8, &direction_guardBase_0_8, &direction_guardBase_0_8, &direction_guardBase_0_8, &direction_guardBase_0_8, &direction_guardBase_0_8, NULL, &direction_guardBase_0_16, &direction_guardBase_0_16, &direction_guardBase_0_16, &direction_guardBase_0_16, &direction_guardBase_0_16, &direction_guardBase_0_16, &direction_guardBase_0_16, NULL, &direction_guardBase_0_24, &direction_guardBase_0_24, &direction_guardBase_0_24, &direction_guardBase_0_24, &direction_guardBase_0_24, &direction_guardBase_0_24, &direction_guardBase_0_24, NULL, &direction_guardBase_0_0, &direction_guardBase_0_0, &direction_guardBase_0_0};
static Animation * anim_array_guardBase[1] = {&anim_guardBase_0};
static Animations anim_guardBase = {1, &anim_array_guardBase[0]};
static bool anim_guardBase_initialized;
class GuardBase : public Active
{
public:
    GuardBase(int x, int y) : Active(x, y, guardBase_type)
    {
        // qualifiers: 0, 47
#ifndef NDEBUG
        name = std::string("BASE - Guard", 12);
#endif
        set_visible(false);
        this->animations = &anim_guardBase;
        if (!anim_guardBase_initialized) {
            anim_guardBase_initialized = true;
            images_guardBase_0_0[0] = get_internal_image(527);
            images_guardBase_0_8[0] = get_internal_image(527);
            images_guardBase_0_16[0] = get_internal_image(527);
            images_guardBase_0_24[0] = get_internal_image(527);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        movement_count = 2;
        movements = new Movement*[2];
        set_direction(pick_random(4, 0, 8, 16, 24));
        movements[0] = new BallMovement(this);
        movements[0]->index = 0;
        ((BallMovement*)movements[0])->set_max_speed(10);
        ((BallMovement*)movements[0])->set_deceleration(0);
        ((BallMovement*)movements[0])->randomizer = 20;
        movements[1] = new StaticMovement(this);
        movements[1]->index = 1;
        movements[1]->flags |= Movement::MOVE_AT_START;
        set_movement(0);
        create_alterables();
        alterables->values.set(7, 15);
    }
};
FrameObject * create_guardBase(int x, int y)
{
    return new (Active::pool.create()) GuardBase(x, y);
}
class DamageTo_252 : public TextBlitter
{
public:
    DamageTo_252(int x, int y) : TextBlitter(x, y, DamageTo_252_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Damage to", 9);
#endif
        width = 20;
        height = 15;
        char_width = 5;
        char_height = 8;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(94);
        image_width = 160;
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
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
        set_text(std::string("0 0 0 ", 6));
        has_callback = false;
        blend_color = Color(255, 255, 255, 255);
        create_alterables();
    }
};
FrameObject * create_damageto_252(int x, int y)
{
    return new (TextBlitter::pool.create()) DamageTo_252(x, y);
}
class DMGAgainst_253 : public TextBlitter
{
public:
    DMGAgainst_253(int x, int y) : TextBlitter(x, y, DMGAgainst_253_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DMG against", 11);
#endif
        width = 35;
        height = 15;
        char_width = 5;
        char_height = 8;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(587);
        image_width = 160;
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
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
        set_text(std::string("+HP", 3));
        has_callback = false;
        create_alterables();
    }
};
FrameObject * create_dmgagainst_253(int x, int y)
{
    return new (TextBlitter::pool.create()) DMGAgainst_253(x, y);
}
static Image* images_guardpostshower_254_0_0[1];
static Direction direction_guardpostshower_254_0_0 = {0, 50, 50, 0, 1, images_guardpostshower_254_0_0, 1};
static Animation anim_guardpostshower_254_0 = {&direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, NULL, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0, &direction_guardpostshower_254_0_0};
static Animation * anim_array_guardpostshower_254[1] = {&anim_guardpostshower_254_0};
static Animations anim_guardpostshower_254 = {1, &anim_array_guardpostshower_254[0]};
static bool anim_guardpostshower_254_initialized;
class GuardPostShower_254 : public Active
{
public:
    GuardPostShower_254(int x, int y) : Active(x, y, GuardPostShower_254_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GuardPost - Shower", 18);
#endif
        set_visible(false);
        this->animations = &anim_guardpostshower_254;
        if (!anim_guardpostshower_254_initialized) {
            anim_guardpostshower_254_initialized = true;
            images_guardpostshower_254_0_0[0] = get_internal_image(901);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_guardpostshower_254(int x, int y)
{
    return new (Active::pool.create()) GuardPostShower_254(x, y);
}
static Image* images_outsidewaypoints_255_0_0[1];
static Direction direction_outsidewaypoints_255_0_0 = {0, 50, 50, 0, 1, images_outsidewaypoints_255_0_0, 1};
static Animation anim_outsidewaypoints_255_0 = {&direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, NULL, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0, &direction_outsidewaypoints_255_0_0};
static Animation * anim_array_outsidewaypoints_255[1] = {&anim_outsidewaypoints_255_0};
static Animations anim_outsidewaypoints_255 = {1, &anim_array_outsidewaypoints_255[0]};
static bool anim_outsidewaypoints_255_initialized;
class OutsideWaypoints_255 : public Active
{
public:
    OutsideWaypoints_255(int x, int y) : Active(x, y, OutsideWaypoints_255_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Outside Waypoints", 17);
#endif
        set_visible(false);
        this->animations = &anim_outsidewaypoints_255;
        if (!anim_outsidewaypoints_255_initialized) {
            anim_outsidewaypoints_255_initialized = true;
            images_outsidewaypoints_255_0_0[0] = get_internal_image(888);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_outsidewaypoints_255(int x, int y)
{
    return new (Active::pool.create()) OutsideWaypoints_255(x, y);
}
class Mission_256 : public Text
{
public:
    Mission_256(int x, int y) : Text(x, y, Mission_256_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("mission", 7);
#endif
        flags &= ~SCROLL;
        width = 174;
        height = 87;
        blend_color = Color(8, 0, 0);
        bold = true;
        italic = false;
        font_name = std::string("Small Fonts", 11);
        font = get_font(7, FTTextureFont::BOLD);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("MISSION TEXT", 12));
        create_alterables();
    }
};
FrameObject * create_mission_256(int x, int y)
{
    return new (Text::pool.create()) Mission_256(x, y);
}
class Counter2_257 : public Counter
{
public:
    Counter2_257(int x, int y) : Counter(x, y, Counter2_257_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Counter 2", 9);
#endif
        set_visible(false);
        width = 22;
        height = 2;
        type = HORIZONTAL_LEFT_COUNTER;
        gradient_type = NONE_GRADIENT;
        color1 = Color(255, 0, 0);
        minimum = 3;
        maximum = 100;
        set(100);
    }
};
FrameObject * create_counter2_257(int x, int y)
{
    return new (Counter::pool.create()) Counter2_257(x, y);
}
static Image* images_chaseob_258_0_0[1];
static Direction direction_chaseob_258_0_0 = {0, 50, 50, 0, 1, images_chaseob_258_0_0, 1};
static Animation anim_chaseob_258_0 = {&direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, NULL, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0, &direction_chaseob_258_0_0};
static Animation * anim_array_chaseob_258[1] = {&anim_chaseob_258_0};
static Animations anim_chaseob_258 = {1, &anim_array_chaseob_258[0]};
static bool anim_chaseob_258_initialized;
class ChaseOb_258 : public Active
{
public:
    ChaseOb_258(int x, int y) : Active(x, y, ChaseOb_258_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ChaseOb", 7);
#endif
        set_visible(false);
        this->animations = &anim_chaseob_258;
        if (!anim_chaseob_258_initialized) {
            anim_chaseob_258_initialized = true;
            images_chaseob_258_0_0[0] = get_internal_image(484);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_chaseob_258(int x, int y)
{
    return new (Active::pool.create()) ChaseOb_258(x, y);
}
static Image* images_doorutility_259_0_0[1];
static Direction direction_doorutility_259_0_0 = {0, 50, 50, 0, 1, images_doorutility_259_0_0, 1};
static Image* images_doorutility_259_0_16[1];
static Direction direction_doorutility_259_0_16 = {16, 50, 50, 0, 1, images_doorutility_259_0_16, 1};
static Animation anim_doorutility_259_0 = {&direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, NULL, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, &direction_doorutility_259_0_16, NULL, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0, &direction_doorutility_259_0_0};
static Animation * anim_array_doorutility_259[1] = {&anim_doorutility_259_0};
static Animations anim_doorutility_259 = {1, &anim_array_doorutility_259[0]};
static bool anim_doorutility_259_initialized;
class DoorUtility_259 : public Active
{
public:
    DoorUtility_259(int x, int y) : Active(x, y, DoorUtility_259_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Utility", 14);
#endif
        this->animations = &anim_doorutility_259;
        if (!anim_doorutility_259_initialized) {
            anim_doorutility_259_initialized = true;
            images_doorutility_259_0_0[0] = get_internal_image(1223);
            images_doorutility_259_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_utility_18);
    }
};
FrameObject * create_doorutility_259(int x, int y)
{
    return new (Active::pool.create()) DoorUtility_259(x, y);
}
static Image* images_conscan_260_0_0[1];
static Direction direction_conscan_260_0_0 = {0, 50, 50, 0, 1, images_conscan_260_0_0, 1};
static Animation anim_conscan_260_0 = {&direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, NULL, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0, &direction_conscan_260_0_0};
static Animation * anim_array_conscan_260[1] = {&anim_conscan_260_0};
static Animations anim_conscan_260 = {1, &anim_array_conscan_260[0]};
static bool anim_conscan_260_initialized;
class ConScan_260 : public Active
{
public:
    ConScan_260(int x, int y) : Active(x, y, ConScan_260_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ConScan", 7);
#endif
        set_visible(false);
        this->animations = &anim_conscan_260;
        if (!anim_conscan_260_initialized) {
            anim_conscan_260_initialized = true;
            images_conscan_260_0_0[0] = get_internal_image(489);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_conscan_260(int x, int y)
{
    return new (Active::pool.create()) ConScan_260(x, y);
}
class GiveCash_261 : public Text
{
public:
    GiveCash_261(int x, int y) : Text(x, y, GiveCash_261_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GiveCash", 8);
#endif
        flags &= ~SCROLL;
        width = 40;
        height = 12;
        blend_color = Color(103, 217, 74);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("$999", 4));
        create_alterables();
    }
};
FrameObject * create_givecash_261(int x, int y)
{
    return new (Text::pool.create()) GiveCash_261(x, y);
}
static Image* images_dooroutside_262_0_0[1];
static Direction direction_dooroutside_262_0_0 = {0, 50, 50, 0, 1, images_dooroutside_262_0_0, 1};
static Image* images_dooroutside_262_0_16[1];
static Direction direction_dooroutside_262_0_16 = {16, 50, 50, 0, 1, images_dooroutside_262_0_16, 1};
static Animation anim_dooroutside_262_0 = {&direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, NULL, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, &direction_dooroutside_262_0_16, NULL, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0, &direction_dooroutside_262_0_0};
static Animation * anim_array_dooroutside_262[1] = {&anim_dooroutside_262_0};
static Animations anim_dooroutside_262 = {1, &anim_array_dooroutside_262[0]};
static bool anim_dooroutside_262_initialized;
class DoorOutside_262 : public Active
{
public:
    DoorOutside_262(int x, int y) : Active(x, y, DoorOutside_262_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Outside", 14);
#endif
        this->animations = &anim_dooroutside_262;
        if (!anim_dooroutside_262_initialized) {
            anim_dooroutside_262_initialized = true;
            images_dooroutside_262_0_0[0] = get_internal_image(1225);
            images_dooroutside_262_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_entrance_19);
    }
};
FrameObject * create_dooroutside_262(int x, int y)
{
    return new (Active::pool.create()) DoorOutside_262(x, y);
}
class Counter3_263 : public Counter
{
public:
    Counter3_263(int x, int y) : Counter(x, y, Counter3_263_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Counter 3", 9);
#endif
        flags &= ~SCROLL;
        width = 96;
        height = 32;
    }
};
FrameObject * create_counter3_263(int x, int y)
{
    return new (Counter::pool.create()) Counter3_263(x, y);
}
class Dialogue3_264 : public Text
{
public:
    Dialogue3_264(int x, int y) : Text(x, y, Dialogue3_264_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Dialogue 3", 10);
#endif
        flags &= ~SCROLL;
        width = 207;
        height = 169;
        blend_color = Color(192, 192, 192);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("STR\r\nSPD\r\nINT\r\nOPN\r\n", 20));
        create_alterables();
    }
};
FrameObject * create_dialogue3_264(int x, int y)
{
    return new (Text::pool.create()) Dialogue3_264(x, y);
}
class FenceArray_265 : public ArrayObject
{
public:
    FenceArray_265(int x, int y) : ArrayObject(x, y, FenceArray_265_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FenceArray", 10);
#endif
        initialize(true, 1, 125, 125, 5);
    }
};
FrameObject * create_fencearray_265(int x, int y)
{
    return new (ArrayObject::pool.create()) FenceArray_265(x, y);
}
static Image* images_guardalert_266_0_0[1];
static Direction direction_guardalert_266_0_0 = {0, 50, 50, 0, -1, images_guardalert_266_0_0, 1};
static Animation anim_guardalert_266_0 = {&direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, NULL, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0, &direction_guardalert_266_0_0};
static Animation * anim_array_guardalert_266[1] = {&anim_guardalert_266_0};
static Animations anim_guardalert_266 = {1, &anim_array_guardalert_266[0]};
static bool anim_guardalert_266_initialized;
class GuardAlert_266 : public Active
{
public:
    GuardAlert_266(int x, int y) : Active(x, y, GuardAlert_266_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GuardAlert", 10);
#endif
        set_visible(false);
        this->animations = &anim_guardalert_266;
        if (!anim_guardalert_266_initialized) {
            anim_guardalert_266_initialized = true;
            images_guardalert_266_0_0[0] = get_internal_image(867);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_guardalert_266(int x, int y)
{
    return new (Active::pool.create()) GuardAlert_266(x, y);
}
static Image* images_containertimber_267_0_0[1];
static Direction direction_containertimber_267_0_0 = {0, 50, 50, 0, 1, images_containertimber_267_0_0, 1};
static Animation anim_containertimber_267_0 = {&direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, NULL, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0, &direction_containertimber_267_0_0};
static Animation * anim_array_containertimber_267[1] = {&anim_containertimber_267_0};
static Animations anim_containertimber_267 = {1, &anim_array_containertimber_267[0]};
static bool anim_containertimber_267_initialized;
class ContainerTimber_267 : public Active
{
public:
    ContainerTimber_267(int x, int y) : Active(x, y, ContainerTimber_267_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Container - Timber", 18);
#endif
        this->animations = &anim_containertimber_267;
        if (!anim_containertimber_267_initialized) {
            anim_containertimber_267_initialized = true;
            images_containertimber_267_0_0[0] = get_internal_image(874);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_timber_20);
    }
};
FrameObject * create_containertimber_267(int x, int y)
{
    return new (Active::pool.create()) ContainerTimber_267(x, y);
}
static Image* images_doorwoodshop_268_0_0[1];
static Direction direction_doorwoodshop_268_0_0 = {0, 50, 50, 0, -1, images_doorwoodshop_268_0_0, 1};
static Image* images_doorwoodshop_268_0_16[1];
static Direction direction_doorwoodshop_268_0_16 = {16, 50, 50, 0, -1, images_doorwoodshop_268_0_16, 1};
static Animation anim_doorwoodshop_268_0 = {&direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, NULL, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, &direction_doorwoodshop_268_0_16, NULL, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0, &direction_doorwoodshop_268_0_0};
static Animation * anim_array_doorwoodshop_268[1] = {&anim_doorwoodshop_268_0};
static Animations anim_doorwoodshop_268 = {1, &anim_array_doorwoodshop_268[0]};
static bool anim_doorwoodshop_268_initialized;
class DoorWoodshop_268 : public Active
{
public:
    DoorWoodshop_268(int x, int y) : Active(x, y, DoorWoodshop_268_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Woodshop", 15);
#endif
        this->animations = &anim_doorwoodshop_268;
        if (!anim_doorwoodshop_268_initialized) {
            anim_doorwoodshop_268_initialized = true;
            images_doorwoodshop_268_0_0[0] = get_internal_image(1221);
            images_doorwoodshop_268_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_woodshop_21);
    }
};
FrameObject * create_doorwoodshop_268(int x, int y)
{
    return new (Active::pool.create()) DoorWoodshop_268(x, y);
}
static Image* images_containermedical_269_0_0[1];
static Direction direction_containermedical_269_0_0 = {0, 50, 50, 0, 1, images_containermedical_269_0_0, 1};
static Animation anim_containermedical_269_0 = {&direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, NULL, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0, &direction_containermedical_269_0_0};
static Animation * anim_array_containermedical_269[1] = {&anim_containermedical_269_0};
static Animations anim_containermedical_269 = {1, &anim_array_containermedical_269[0]};
static bool anim_containermedical_269_initialized;
class ContainerMEDICAL_269 : public Active
{
public:
    ContainerMEDICAL_269(int x, int y) : Active(x, y, ContainerMEDICAL_269_type)
    {
        // qualifiers: 15, 26, 62, 63
#ifndef NDEBUG
        name = std::string("Container - MEDICAL", 19);
#endif
        this->animations = &anim_containermedical_269;
        if (!anim_containermedical_269_initialized) {
            anim_containermedical_269_initialized = true;
            images_containermedical_269_0_0[0] = get_internal_image(930);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_medical_22);
    }
};
FrameObject * create_containermedical_269(int x, int y)
{
    return new (Active::pool.create()) ContainerMEDICAL_269(x, y);
}
static Image* images_containerjanitor_270_0_0[1];
static Direction direction_containerjanitor_270_0_0 = {0, 50, 50, 0, 1, images_containerjanitor_270_0_0, 1};
static Animation anim_containerjanitor_270_0 = {&direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, NULL, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0, &direction_containerjanitor_270_0_0};
static Animation * anim_array_containerjanitor_270[1] = {&anim_containerjanitor_270_0};
static Animations anim_containerjanitor_270 = {1, &anim_array_containerjanitor_270[0]};
static bool anim_containerjanitor_270_initialized;
class ContainerJanitor_270 : public Active
{
public:
    ContainerJanitor_270(int x, int y) : Active(x, y, ContainerJanitor_270_type)
    {
        // qualifiers: 15, 26, 63
#ifndef NDEBUG
        name = std::string("Container - Janitor", 19);
#endif
        this->animations = &anim_containerjanitor_270;
        if (!anim_containerjanitor_270_initialized) {
            anim_containerjanitor_270_initialized = true;
            images_containerjanitor_270_0_0[0] = get_internal_image(929);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_cleaning_23);
    }
};
FrameObject * create_containerjanitor_270(int x, int y)
{
    return new (Active::pool.create()) ContainerJanitor_270(x, y);
}
static Image* images_doorjanitor_271_0_0[1];
static Direction direction_doorjanitor_271_0_0 = {0, 50, 50, 0, -1, images_doorjanitor_271_0_0, 1};
static Image* images_doorjanitor_271_0_16[1];
static Direction direction_doorjanitor_271_0_16 = {16, 50, 50, 0, -1, images_doorjanitor_271_0_16, 1};
static Animation anim_doorjanitor_271_0 = {&direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, NULL, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, &direction_doorjanitor_271_0_16, NULL, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0, &direction_doorjanitor_271_0_0};
static Animation * anim_array_doorjanitor_271[1] = {&anim_doorjanitor_271_0};
static Animations anim_doorjanitor_271 = {1, &anim_array_doorjanitor_271[0]};
static bool anim_doorjanitor_271_initialized;
class DoorJanitor_271 : public Active
{
public:
    DoorJanitor_271(int x, int y) : Active(x, y, DoorJanitor_271_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Janitor", 14);
#endif
        this->animations = &anim_doorjanitor_271;
        if (!anim_doorjanitor_271_initialized) {
            anim_doorjanitor_271_initialized = true;
            images_doorjanitor_271_0_0[0] = get_internal_image(1221);
            images_doorjanitor_271_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_janitor_24);
    }
};
FrameObject * create_doorjanitor_271(int x, int y)
{
    return new (Active::pool.create()) DoorJanitor_271(x, y);
}
static Image* images_doorlibrary_272_0_0[1];
static Direction direction_doorlibrary_272_0_0 = {0, 50, 50, 0, -1, images_doorlibrary_272_0_0, 1};
static Image* images_doorlibrary_272_0_16[1];
static Direction direction_doorlibrary_272_0_16 = {16, 50, 50, 0, -1, images_doorlibrary_272_0_16, 1};
static Animation anim_doorlibrary_272_0 = {&direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, NULL, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, &direction_doorlibrary_272_0_16, NULL, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0, &direction_doorlibrary_272_0_0};
static Animation * anim_array_doorlibrary_272[1] = {&anim_doorlibrary_272_0};
static Animations anim_doorlibrary_272 = {1, &anim_array_doorlibrary_272[0]};
static bool anim_doorlibrary_272_initialized;
class DoorLibrary_272 : public Active
{
public:
    DoorLibrary_272(int x, int y) : Active(x, y, DoorLibrary_272_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Library", 14);
#endif
        this->animations = &anim_doorlibrary_272;
        if (!anim_doorlibrary_272_initialized) {
            anim_doorlibrary_272_initialized = true;
            images_doorlibrary_272_0_0[0] = get_internal_image(1221);
            images_doorlibrary_272_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_library_25);
    }
};
FrameObject * create_doorlibrary_272(int x, int y)
{
    return new (Active::pool.create()) DoorLibrary_272(x, y);
}
static Image* images_containerbookchest_273_0_0[1];
static Direction direction_containerbookchest_273_0_0 = {0, 50, 50, 0, 1, images_containerbookchest_273_0_0, 1};
static Animation anim_containerbookchest_273_0 = {&direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, NULL, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0, &direction_containerbookchest_273_0_0};
static Animation * anim_array_containerbookchest_273[1] = {&anim_containerbookchest_273_0};
static Animations anim_containerbookchest_273 = {1, &anim_array_containerbookchest_273[0]};
static bool anim_containerbookchest_273_initialized;
class ContainerBookChest_273 : public Active
{
public:
    ContainerBookChest_273(int x, int y) : Active(x, y, ContainerBookChest_273_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Container - Book Chest", 22);
#endif
        this->animations = &anim_containerbookchest_273;
        if (!anim_containerbookchest_273_initialized) {
            anim_containerbookchest_273_initialized = true;
            images_containerbookchest_273_0_0[0] = get_internal_image(931);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_book_chest_26);
    }
};
FrameObject * create_containerbookchest_273(int x, int y)
{
    return new (Active::pool.create()) ContainerBookChest_273(x, y);
}
static Image* images_containerlaundrydirty_274_0_0[1];
static Direction direction_containerlaundrydirty_274_0_0 = {0, 50, 50, 0, 1, images_containerlaundrydirty_274_0_0, 1};
static Animation anim_containerlaundrydirty_274_0 = {&direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, NULL, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0, &direction_containerlaundrydirty_274_0_0};
static Animation * anim_array_containerlaundrydirty_274[1] = {&anim_containerlaundrydirty_274_0};
static Animations anim_containerlaundrydirty_274 = {1, &anim_array_containerlaundrydirty_274[0]};
static bool anim_containerlaundrydirty_274_initialized;
class ContainerLaundryDirty_274 : public Active
{
public:
    ContainerLaundryDirty_274(int x, int y) : Active(x, y, ContainerLaundryDirty_274_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Container - Laundry - Dirty", 27);
#endif
        this->animations = &anim_containerlaundrydirty_274;
        if (!anim_containerlaundrydirty_274_initialized) {
            anim_containerlaundrydirty_274_initialized = true;
            images_containerlaundrydirty_274_0_0[0] = get_internal_image(893);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_dirty_laundry_27);
    }
};
FrameObject * create_containerlaundrydirty_274(int x, int y)
{
    return new (Active::pool.create()) ContainerLaundryDirty_274(x, y);
}
static Image* images_containerlaundryclean_275_0_0[1];
static Direction direction_containerlaundryclean_275_0_0 = {0, 50, 50, 0, 1, images_containerlaundryclean_275_0_0, 1};
static Animation anim_containerlaundryclean_275_0 = {&direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, NULL, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0, &direction_containerlaundryclean_275_0_0};
static Animation * anim_array_containerlaundryclean_275[1] = {&anim_containerlaundryclean_275_0};
static Animations anim_containerlaundryclean_275 = {1, &anim_array_containerlaundryclean_275[0]};
static bool anim_containerlaundryclean_275_initialized;
class ContainerLaundryClean_275 : public Active
{
public:
    ContainerLaundryClean_275(int x, int y) : Active(x, y, ContainerLaundryClean_275_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Container - Laundry - Clean", 27);
#endif
        this->animations = &anim_containerlaundryclean_275;
        if (!anim_containerlaundryclean_275_initialized) {
            anim_containerlaundryclean_275_initialized = true;
            images_containerlaundryclean_275_0_0[0] = get_internal_image(894);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_clean_laundry_28);
    }
};
FrameObject * create_containerlaundryclean_275(int x, int y)
{
    return new (Active::pool.create()) ContainerLaundryClean_275(x, y);
}
static Image* images_doorlaundry_276_0_0[1];
static Direction direction_doorlaundry_276_0_0 = {0, 50, 50, 0, -1, images_doorlaundry_276_0_0, 1};
static Image* images_doorlaundry_276_0_16[1];
static Direction direction_doorlaundry_276_0_16 = {16, 50, 50, 0, -1, images_doorlaundry_276_0_16, 1};
static Animation anim_doorlaundry_276_0 = {&direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, NULL, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, &direction_doorlaundry_276_0_16, NULL, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0, &direction_doorlaundry_276_0_0};
static Animation * anim_array_doorlaundry_276[1] = {&anim_doorlaundry_276_0};
static Animations anim_doorlaundry_276 = {1, &anim_array_doorlaundry_276[0]};
static bool anim_doorlaundry_276_initialized;
class DoorLaundry_276 : public Active
{
public:
    DoorLaundry_276(int x, int y) : Active(x, y, DoorLaundry_276_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Laundry", 14);
#endif
        this->animations = &anim_doorlaundry_276;
        if (!anim_doorlaundry_276_initialized) {
            anim_doorlaundry_276_initialized = true;
            images_doorlaundry_276_0_0[0] = get_internal_image(1221);
            images_doorlaundry_276_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_laundry_29);
    }
};
FrameObject * create_doorlaundry_276(int x, int y)
{
    return new (Active::pool.create()) DoorLaundry_276(x, y);
}
static Image* images_canteenserving_277_0_0[6];
static Direction direction_canteenserving_277_0_0 = {0, 50, 50, 0, -1, images_canteenserving_277_0_0, 6};
static Animation anim_canteenserving_277_0 = {&direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, NULL, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0, &direction_canteenserving_277_0_0};
static Animation * anim_array_canteenserving_277[1] = {&anim_canteenserving_277_0};
static Animations anim_canteenserving_277 = {1, &anim_array_canteenserving_277[0]};
static bool anim_canteenserving_277_initialized;
class CanteenServing_277 : public Active
{
public:
    CanteenServing_277(int x, int y) : Active(x, y, CanteenServing_277_type)
    {
        // qualifiers: 49, 62, 63
#ifndef NDEBUG
        name = std::string("Canteen - Serving", 17);
#endif
        this->animations = &anim_canteenserving_277;
        if (!anim_canteenserving_277_initialized) {
            anim_canteenserving_277_initialized = true;
            images_canteenserving_277_0_0[0] = get_internal_image(855);
            images_canteenserving_277_0_0[1] = get_internal_image(903);
            images_canteenserving_277_0_0[2] = get_internal_image(904);
            images_canteenserving_277_0_0[3] = get_internal_image(905);
            images_canteenserving_277_0_0[4] = get_internal_image(906);
            images_canteenserving_277_0_0[5] = get_internal_image(907);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_canteenserving_277(int x, int y)
{
    return new (Active::pool.create()) CanteenServing_277(x, y);
}
static Image* images_loadingCurtain_0_0[1];
static Direction direction_loadingCurtain_0_0 = {0, 50, 50, 0, 1, images_loadingCurtain_0_0, 1};
static Animation anim_loadingCurtain_0 = {&direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, NULL, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0, &direction_loadingCurtain_0_0};
static Animation * anim_array_loadingCurtain[1] = {&anim_loadingCurtain_0};
static Animations anim_loadingCurtain = {1, &anim_array_loadingCurtain[0]};
static bool anim_loadingCurtain_initialized;
class LoadingCurtain : public Active
{
public:
    LoadingCurtain(int x, int y) : Active(x, y, loadingCurtain_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("LOAD", 4);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_loadingCurtain;
        if (!anim_loadingCurtain_initialized) {
            anim_loadingCurtain_initialized = true;
            images_loadingCurtain_0_0[0] = get_internal_image(735);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_loadingCurtain(int x, int y)
{
    return new (Active::pool.create()) LoadingCurtain(x, y);
}
class HeatText : public TextBlitter
{
public:
    HeatText(int x, int y) : TextBlitter(x, y, heatText_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Text_Heat", 9);
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
        image = get_internal_image(55);
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
        set_text(std::string("20%", 3));
        has_callback = false;
        create_alterables();
        alterables->strings.set(5, str_guard_heat_30);
    }
};
FrameObject * create_heatText(int x, int y)
{
    return new (TextBlitter::pool.create()) HeatText(x, y);
}
static Image* images_ventCover_0_0[1];
static Direction direction_ventCover_0_0 = {0, 50, 50, 0, -1, images_ventCover_0_0, 1};
static Animation anim_ventCover_0 = {&direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, NULL, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0, &direction_ventCover_0_0};
static Image* images_ventCover_1_0[1];
static Direction direction_ventCover_1_0 = {0, 50, 50, 0, -1, images_ventCover_1_0, 1};
static Animation anim_ventCover_1 = {&direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, NULL, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0, &direction_ventCover_1_0};
static Image* images_ventCover_2_0[1];
static Direction direction_ventCover_2_0 = {0, 50, 50, 0, -1, images_ventCover_2_0, 1};
static Animation anim_ventCover_2 = {&direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, NULL, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0, &direction_ventCover_2_0};
static Animation * anim_array_ventCover[3] = {&anim_ventCover_0, &anim_ventCover_1, &anim_ventCover_2};
static Animations anim_ventCover = {3, &anim_array_ventCover[0]};
static bool anim_ventCover_initialized;
class VentCover : public Active
{
public:
    VentCover(int x, int y) : Active(x, y, ventCover_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Vent Cover", 10);
#endif
        this->animations = &anim_ventCover;
        if (!anim_ventCover_initialized) {
            anim_ventCover_initialized = true;
            images_ventCover_0_0[0] = get_internal_image(131);
            images_ventCover_1_0[0] = get_internal_image(141);
            images_ventCover_2_0[0] = get_internal_image(418);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(1, 100);
        alterables->values.set(7, 100);
        alterables->values.set(8, 4);
    }
};
FrameObject * create_ventCover(int x, int y)
{
    return new (Active::pool.create()) VentCover(x, y);
}
static Image* images_fan_281_0_0[1];
static Direction direction_fan_281_0_0 = {0, 50, 50, 0, -1, images_fan_281_0_0, 1};
static Image* images_fan_281_0_24[1];
static Direction direction_fan_281_0_24 = {24, 50, 50, 0, -1, images_fan_281_0_24, 1};
static Animation anim_fan_281_0 = {&direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0, NULL, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, &direction_fan_281_0_24, NULL, &direction_fan_281_0_0, &direction_fan_281_0_0, &direction_fan_281_0_0};
static Animation * anim_array_fan_281[1] = {&anim_fan_281_0};
static Animations anim_fan_281 = {1, &anim_array_fan_281[0]};
static bool anim_fan_281_initialized;
class Fan_281 : public Active
{
public:
    Fan_281(int x, int y) : Active(x, y, Fan_281_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Fan", 3);
#endif
        this->animations = &anim_fan_281;
        if (!anim_fan_281_initialized) {
            anim_fan_281_initialized = true;
            images_fan_281_0_0[0] = get_internal_image(159);
            images_fan_281_0_24[0] = get_internal_image(96);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(1, 100);
    }
};
FrameObject * create_fan_281(int x, int y)
{
    return new (Active::pool.create()) Fan_281(x, y);
}
static Image* images_ventDarkness_0_0[1];
static Direction direction_ventDarkness_0_0 = {0, 50, 50, 0, 1, images_ventDarkness_0_0, 1};
static Animation anim_ventDarkness_0 = {&direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, NULL, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0, &direction_ventDarkness_0_0};
static Animation * anim_array_ventDarkness[1] = {&anim_ventDarkness_0};
static Animations anim_ventDarkness = {1, &anim_array_ventDarkness[0]};
static bool anim_ventDarkness_initialized;
class VentDarkness : public Active
{
public:
    VentDarkness(int x, int y) : Active(x, y, ventDarkness_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Vent Overlay", 12);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_ventDarkness;
        if (!anim_ventDarkness_initialized) {
            anim_ventDarkness_initialized = true;
            images_ventDarkness_0_0[0] = get_internal_image(158);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 215);
        create_alterables();
    }
};
FrameObject * create_ventDarkness(int x, int y)
{
    return new (Active::pool.create()) VentDarkness(x, y);
}
static Image* images_destarrow_283_0_0[4];
static Direction direction_destarrow_283_0_0 = {0, 10, 10, 0, -1, images_destarrow_283_0_0, 4};
static Animation anim_destarrow_283_0 = {&direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, NULL, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0, &direction_destarrow_283_0_0};
static Animation * anim_array_destarrow_283[1] = {&anim_destarrow_283_0};
static Animations anim_destarrow_283 = {1, &anim_array_destarrow_283[0]};
static bool anim_destarrow_283_initialized;
class DestArrow_283 : public Active
{
public:
    DestArrow_283(int x, int y) : Active(x, y, DestArrow_283_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dest Arrow", 10);
#endif
        set_visible(false);
        this->animations = &anim_destarrow_283;
        if (!anim_destarrow_283_initialized) {
            anim_destarrow_283_initialized = true;
            images_destarrow_283_0_0[0] = get_internal_image(1007);
            images_destarrow_283_0_0[1] = get_internal_image(1081);
            images_destarrow_283_0_0[2] = get_internal_image(797);
            images_destarrow_283_0_0[3] = get_internal_image(1081);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_destarrow_283(int x, int y)
{
    return new (Active::pool.create()) DestArrow_283(x, y);
}
static Image* images_active3_284_0_0[1];
static Direction direction_active3_284_0_0 = {0, 50, 50, 0, 1, images_active3_284_0_0, 1};
static Animation anim_active3_284_0 = {&direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, NULL, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0, &direction_active3_284_0_0};
static Animation * anim_array_active3_284[1] = {&anim_active3_284_0};
static Animations anim_active3_284 = {1, &anim_array_active3_284[0]};
static bool anim_active3_284_initialized;
class Active3_284 : public Active
{
public:
    Active3_284(int x, int y) : Active(x, y, Active3_284_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 3", 8);
#endif
        set_visible(false);
        this->animations = &anim_active3_284;
        if (!anim_active3_284_initialized) {
            anim_active3_284_initialized = true;
            images_active3_284_0_0[0] = get_internal_image(223);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_active3_284(int x, int y)
{
    return new (Active::pool.create()) Active3_284(x, y);
}
class Backdrop29_285 : public Backdrop
{
public:
    Backdrop29_285(int x, int y) : Backdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Backdrop 29", 11);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
#ifdef BACK_ID_BACKDROP_29
        manager.frame->back_instances[BACK_ID_BACKDROP_29].push_back(this);
#endif
        image = get_internal_image(227);
        width = image->width;
        height = image->height;
    }
};
FrameObject * create_backdrop29_285(int x, int y)
{
    return new (Backdrop::pool.create()) Backdrop29_285(x, y);
}
static Image* images_inmate7_286_0_0[2];
static Direction direction_inmate7_286_0_0 = {0, 10, 10, 0, -1, images_inmate7_286_0_0, 2};
static Image* images_inmate7_286_0_8[2];
static Direction direction_inmate7_286_0_8 = {8, 10, 10, 0, -1, images_inmate7_286_0_8, 2};
static Image* images_inmate7_286_0_16[2];
static Direction direction_inmate7_286_0_16 = {16, 10, 10, 0, -1, images_inmate7_286_0_16, 2};
static Image* images_inmate7_286_0_24[2];
static Direction direction_inmate7_286_0_24 = {24, 10, 10, 0, -1, images_inmate7_286_0_24, 2};
static Animation anim_inmate7_286_0 = {&direction_inmate7_286_0_0, &direction_inmate7_286_0_0, &direction_inmate7_286_0_0, &direction_inmate7_286_0_0, NULL, &direction_inmate7_286_0_8, &direction_inmate7_286_0_8, &direction_inmate7_286_0_8, &direction_inmate7_286_0_8, &direction_inmate7_286_0_8, &direction_inmate7_286_0_8, &direction_inmate7_286_0_8, NULL, &direction_inmate7_286_0_16, &direction_inmate7_286_0_16, &direction_inmate7_286_0_16, &direction_inmate7_286_0_16, &direction_inmate7_286_0_16, &direction_inmate7_286_0_16, &direction_inmate7_286_0_16, NULL, &direction_inmate7_286_0_24, &direction_inmate7_286_0_24, &direction_inmate7_286_0_24, &direction_inmate7_286_0_24, &direction_inmate7_286_0_24, &direction_inmate7_286_0_24, &direction_inmate7_286_0_24, NULL, &direction_inmate7_286_0_0, &direction_inmate7_286_0_0, &direction_inmate7_286_0_0};
static Image* images_inmate7_286_4_0[4];
static Direction direction_inmate7_286_4_0 = {0, 20, 20, 0, 1, images_inmate7_286_4_0, 4};
static Image* images_inmate7_286_4_16[4];
static Direction direction_inmate7_286_4_16 = {16, 20, 20, 0, 1, images_inmate7_286_4_16, 4};
static Animation anim_inmate7_286_4 = {&direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, NULL, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, &direction_inmate7_286_4_16, NULL, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0, &direction_inmate7_286_4_0};
static Image* images_inmate7_286_6_0[1];
static Direction direction_inmate7_286_6_0 = {0, 6, 6, 0, 1, images_inmate7_286_6_0, 1};
static Image* images_inmate7_286_6_8[1];
static Direction direction_inmate7_286_6_8 = {8, 6, 6, 0, 1, images_inmate7_286_6_8, 1};
static Image* images_inmate7_286_6_16[1];
static Direction direction_inmate7_286_6_16 = {16, 6, 6, 0, 1, images_inmate7_286_6_16, 1};
static Image* images_inmate7_286_6_24[1];
static Direction direction_inmate7_286_6_24 = {24, 6, 6, 0, 1, images_inmate7_286_6_24, 1};
static Animation anim_inmate7_286_6 = {&direction_inmate7_286_6_0, &direction_inmate7_286_6_0, &direction_inmate7_286_6_0, &direction_inmate7_286_6_0, NULL, &direction_inmate7_286_6_8, &direction_inmate7_286_6_8, &direction_inmate7_286_6_8, &direction_inmate7_286_6_8, &direction_inmate7_286_6_8, &direction_inmate7_286_6_8, &direction_inmate7_286_6_8, NULL, &direction_inmate7_286_6_16, &direction_inmate7_286_6_16, &direction_inmate7_286_6_16, &direction_inmate7_286_6_16, &direction_inmate7_286_6_16, &direction_inmate7_286_6_16, &direction_inmate7_286_6_16, NULL, &direction_inmate7_286_6_24, &direction_inmate7_286_6_24, &direction_inmate7_286_6_24, &direction_inmate7_286_6_24, &direction_inmate7_286_6_24, &direction_inmate7_286_6_24, &direction_inmate7_286_6_24, NULL, &direction_inmate7_286_6_0, &direction_inmate7_286_6_0, &direction_inmate7_286_6_0};
static Image* images_inmate7_286_8_0[1];
static Direction direction_inmate7_286_8_0 = {0, 10, 10, 0, -1, images_inmate7_286_8_0, 1};
static Image* images_inmate7_286_8_16[2];
static Direction direction_inmate7_286_8_16 = {16, 5, 5, 0, -1, images_inmate7_286_8_16, 2};
static Image* images_inmate7_286_8_24[1];
static Direction direction_inmate7_286_8_24 = {24, 10, 10, 0, -1, images_inmate7_286_8_24, 1};
static Animation anim_inmate7_286_8 = {&direction_inmate7_286_8_0, &direction_inmate7_286_8_0, &direction_inmate7_286_8_0, &direction_inmate7_286_8_0, &direction_inmate7_286_8_0, &direction_inmate7_286_8_0, &direction_inmate7_286_8_0, &direction_inmate7_286_8_0, NULL, &direction_inmate7_286_8_16, &direction_inmate7_286_8_16, &direction_inmate7_286_8_16, &direction_inmate7_286_8_16, &direction_inmate7_286_8_16, &direction_inmate7_286_8_16, &direction_inmate7_286_8_16, &direction_inmate7_286_8_16, &direction_inmate7_286_8_16, &direction_inmate7_286_8_16, &direction_inmate7_286_8_16, NULL, &direction_inmate7_286_8_24, &direction_inmate7_286_8_24, &direction_inmate7_286_8_24, &direction_inmate7_286_8_24, &direction_inmate7_286_8_24, &direction_inmate7_286_8_24, &direction_inmate7_286_8_24, NULL, &direction_inmate7_286_8_0, &direction_inmate7_286_8_0, &direction_inmate7_286_8_0};
static Image* images_inmate7_286_9_0[2];
static Direction direction_inmate7_286_9_0 = {0, 5, 5, 0, -1, images_inmate7_286_9_0, 2};
static Animation anim_inmate7_286_9 = {&direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, NULL, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0, &direction_inmate7_286_9_0};
static Image* images_inmate7_286_10_0[5];
static Direction direction_inmate7_286_10_0 = {0, 10, 10, 0, -1, images_inmate7_286_10_0, 5};
static Animation anim_inmate7_286_10 = {&direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, NULL, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0, &direction_inmate7_286_10_0};
static Image* images_inmate7_286_11_0[2];
static Direction direction_inmate7_286_11_0 = {0, 10, 10, 0, -1, images_inmate7_286_11_0, 2};
static Image* images_inmate7_286_11_8[2];
static Direction direction_inmate7_286_11_8 = {8, 10, 10, 0, -1, images_inmate7_286_11_8, 2};
static Image* images_inmate7_286_11_16[2];
static Direction direction_inmate7_286_11_16 = {16, 10, 10, 0, -1, images_inmate7_286_11_16, 2};
static Image* images_inmate7_286_11_24[2];
static Direction direction_inmate7_286_11_24 = {24, 10, 10, 0, -1, images_inmate7_286_11_24, 2};
static Animation anim_inmate7_286_11 = {&direction_inmate7_286_11_0, &direction_inmate7_286_11_0, &direction_inmate7_286_11_0, &direction_inmate7_286_11_0, NULL, &direction_inmate7_286_11_8, &direction_inmate7_286_11_8, &direction_inmate7_286_11_8, &direction_inmate7_286_11_8, &direction_inmate7_286_11_8, &direction_inmate7_286_11_8, &direction_inmate7_286_11_8, NULL, &direction_inmate7_286_11_16, &direction_inmate7_286_11_16, &direction_inmate7_286_11_16, &direction_inmate7_286_11_16, &direction_inmate7_286_11_16, &direction_inmate7_286_11_16, &direction_inmate7_286_11_16, NULL, &direction_inmate7_286_11_24, &direction_inmate7_286_11_24, &direction_inmate7_286_11_24, &direction_inmate7_286_11_24, &direction_inmate7_286_11_24, &direction_inmate7_286_11_24, &direction_inmate7_286_11_24, NULL, &direction_inmate7_286_11_0, &direction_inmate7_286_11_0, &direction_inmate7_286_11_0};
static Image* images_inmate7_286_18_24[8];
static Direction direction_inmate7_286_18_24 = {24, 10, 10, 0, -1, images_inmate7_286_18_24, 8};
static Animation anim_inmate7_286_18 = {&direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, NULL, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24, &direction_inmate7_286_18_24};
static Image* images_inmate7_286_19_24[6];
static Direction direction_inmate7_286_19_24 = {24, 10, 10, 0, -1, images_inmate7_286_19_24, 6};
static Animation anim_inmate7_286_19 = {&direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, NULL, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24, &direction_inmate7_286_19_24};
static Animation * anim_array_inmate7_286[20] = {&anim_inmate7_286_0, NULL, NULL, NULL, &anim_inmate7_286_4, NULL, &anim_inmate7_286_6, NULL, &anim_inmate7_286_8, &anim_inmate7_286_9, &anim_inmate7_286_10, &anim_inmate7_286_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate7_286_18, &anim_inmate7_286_19};
static Animations anim_inmate7_286 = {20, &anim_array_inmate7_286[0]};
static bool anim_inmate7_286_initialized;
class Inmate7_286 : public Active
{
public:
    Inmate7_286(int x, int y) : Active(x, y, Inmate7_286_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 7", 8);
#endif
        this->animations = &anim_inmate7_286;
        if (!anim_inmate7_286_initialized) {
            anim_inmate7_286_initialized = true;
            images_inmate7_286_0_0[0] = get_internal_image(665);
            images_inmate7_286_0_0[1] = get_internal_image(666);
            images_inmate7_286_0_8[0] = get_internal_image(672);
            images_inmate7_286_0_8[1] = get_internal_image(671);
            images_inmate7_286_0_16[0] = get_internal_image(668);
            images_inmate7_286_0_16[1] = get_internal_image(667);
            images_inmate7_286_0_24[0] = get_internal_image(474);
            images_inmate7_286_0_24[1] = get_internal_image(604);
            images_inmate7_286_4_0[0] = get_internal_image(369);
            images_inmate7_286_4_0[1] = get_internal_image(373);
            images_inmate7_286_4_0[2] = get_internal_image(369);
            images_inmate7_286_4_0[3] = get_internal_image(373);
            images_inmate7_286_4_16[0] = get_internal_image(371);
            images_inmate7_286_4_16[1] = get_internal_image(763);
            images_inmate7_286_4_16[2] = get_internal_image(371);
            images_inmate7_286_4_16[3] = get_internal_image(763);
            images_inmate7_286_6_0[0] = get_internal_image(250);
            images_inmate7_286_6_8[0] = get_internal_image(1063);
            images_inmate7_286_6_16[0] = get_internal_image(602);
            images_inmate7_286_6_24[0] = get_internal_image(1070);
            images_inmate7_286_8_0[0] = get_internal_image(2481);
            images_inmate7_286_8_16[0] = get_internal_image(682);
            images_inmate7_286_8_16[1] = get_internal_image(687);
            images_inmate7_286_8_24[0] = get_internal_image(2471);
            images_inmate7_286_9_0[0] = get_internal_image(1301);
            images_inmate7_286_9_0[1] = get_internal_image(1494);
            images_inmate7_286_10_0[0] = get_internal_image(595);
            images_inmate7_286_10_0[1] = get_internal_image(271);
            images_inmate7_286_10_0[2] = get_internal_image(270);
            images_inmate7_286_10_0[3] = get_internal_image(270);
            images_inmate7_286_10_0[4] = get_internal_image(271);
            images_inmate7_286_11_0[0] = get_internal_image(645);
            images_inmate7_286_11_0[1] = get_internal_image(646);
            images_inmate7_286_11_8[0] = get_internal_image(675);
            images_inmate7_286_11_8[1] = get_internal_image(673);
            images_inmate7_286_11_16[0] = get_internal_image(669);
            images_inmate7_286_11_16[1] = get_internal_image(670);
            images_inmate7_286_11_24[0] = get_internal_image(713);
            images_inmate7_286_11_24[1] = get_internal_image(714);
            images_inmate7_286_18_24[0] = get_internal_image(1965);
            images_inmate7_286_18_24[1] = get_internal_image(2069);
            images_inmate7_286_18_24[2] = get_internal_image(2064);
            images_inmate7_286_18_24[3] = get_internal_image(2066);
            images_inmate7_286_18_24[4] = get_internal_image(2065);
            images_inmate7_286_18_24[5] = get_internal_image(2068);
            images_inmate7_286_18_24[6] = get_internal_image(2064);
            images_inmate7_286_18_24[7] = get_internal_image(2067);
            images_inmate7_286_19_24[0] = get_internal_image(2136);
            images_inmate7_286_19_24[1] = get_internal_image(2140);
            images_inmate7_286_19_24[2] = get_internal_image(2138);
            images_inmate7_286_19_24[3] = get_internal_image(2138);
            images_inmate7_286_19_24[4] = get_internal_image(2140);
            images_inmate7_286_19_24[5] = get_internal_image(2136);
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
FrameObject * create_inmate7_286(int x, int y)
{
    return new (Active::pool.create()) Inmate7_286(x, y);
}
static Image* images_inmate8_287_0_0[2];
static Direction direction_inmate8_287_0_0 = {0, 10, 10, 0, -1, images_inmate8_287_0_0, 2};
static Image* images_inmate8_287_0_8[2];
static Direction direction_inmate8_287_0_8 = {8, 10, 10, 0, -1, images_inmate8_287_0_8, 2};
static Image* images_inmate8_287_0_16[2];
static Direction direction_inmate8_287_0_16 = {16, 10, 10, 0, -1, images_inmate8_287_0_16, 2};
static Image* images_inmate8_287_0_24[2];
static Direction direction_inmate8_287_0_24 = {24, 10, 10, 0, -1, images_inmate8_287_0_24, 2};
static Animation anim_inmate8_287_0 = {&direction_inmate8_287_0_0, &direction_inmate8_287_0_0, &direction_inmate8_287_0_0, &direction_inmate8_287_0_0, NULL, &direction_inmate8_287_0_8, &direction_inmate8_287_0_8, &direction_inmate8_287_0_8, &direction_inmate8_287_0_8, &direction_inmate8_287_0_8, &direction_inmate8_287_0_8, &direction_inmate8_287_0_8, NULL, &direction_inmate8_287_0_16, &direction_inmate8_287_0_16, &direction_inmate8_287_0_16, &direction_inmate8_287_0_16, &direction_inmate8_287_0_16, &direction_inmate8_287_0_16, &direction_inmate8_287_0_16, NULL, &direction_inmate8_287_0_24, &direction_inmate8_287_0_24, &direction_inmate8_287_0_24, &direction_inmate8_287_0_24, &direction_inmate8_287_0_24, &direction_inmate8_287_0_24, &direction_inmate8_287_0_24, NULL, &direction_inmate8_287_0_0, &direction_inmate8_287_0_0, &direction_inmate8_287_0_0};
static Image* images_inmate8_287_4_0[4];
static Direction direction_inmate8_287_4_0 = {0, 20, 20, 0, 1, images_inmate8_287_4_0, 4};
static Image* images_inmate8_287_4_16[4];
static Direction direction_inmate8_287_4_16 = {16, 20, 20, 0, 1, images_inmate8_287_4_16, 4};
static Animation anim_inmate8_287_4 = {&direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, NULL, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, &direction_inmate8_287_4_16, NULL, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0, &direction_inmate8_287_4_0};
static Image* images_inmate8_287_6_0[1];
static Direction direction_inmate8_287_6_0 = {0, 6, 6, 0, 1, images_inmate8_287_6_0, 1};
static Image* images_inmate8_287_6_8[1];
static Direction direction_inmate8_287_6_8 = {8, 6, 6, 0, 1, images_inmate8_287_6_8, 1};
static Image* images_inmate8_287_6_16[1];
static Direction direction_inmate8_287_6_16 = {16, 6, 6, 0, 1, images_inmate8_287_6_16, 1};
static Image* images_inmate8_287_6_24[1];
static Direction direction_inmate8_287_6_24 = {24, 6, 6, 0, 1, images_inmate8_287_6_24, 1};
static Animation anim_inmate8_287_6 = {&direction_inmate8_287_6_0, &direction_inmate8_287_6_0, &direction_inmate8_287_6_0, &direction_inmate8_287_6_0, NULL, &direction_inmate8_287_6_8, &direction_inmate8_287_6_8, &direction_inmate8_287_6_8, &direction_inmate8_287_6_8, &direction_inmate8_287_6_8, &direction_inmate8_287_6_8, &direction_inmate8_287_6_8, NULL, &direction_inmate8_287_6_16, &direction_inmate8_287_6_16, &direction_inmate8_287_6_16, &direction_inmate8_287_6_16, &direction_inmate8_287_6_16, &direction_inmate8_287_6_16, &direction_inmate8_287_6_16, NULL, &direction_inmate8_287_6_24, &direction_inmate8_287_6_24, &direction_inmate8_287_6_24, &direction_inmate8_287_6_24, &direction_inmate8_287_6_24, &direction_inmate8_287_6_24, &direction_inmate8_287_6_24, NULL, &direction_inmate8_287_6_0, &direction_inmate8_287_6_0, &direction_inmate8_287_6_0};
static Image* images_inmate8_287_8_0[1];
static Direction direction_inmate8_287_8_0 = {0, 10, 10, 0, -1, images_inmate8_287_8_0, 1};
static Image* images_inmate8_287_8_16[2];
static Direction direction_inmate8_287_8_16 = {16, 5, 5, 0, -1, images_inmate8_287_8_16, 2};
static Image* images_inmate8_287_8_24[1];
static Direction direction_inmate8_287_8_24 = {24, 10, 10, 0, -1, images_inmate8_287_8_24, 1};
static Animation anim_inmate8_287_8 = {&direction_inmate8_287_8_0, &direction_inmate8_287_8_0, &direction_inmate8_287_8_0, &direction_inmate8_287_8_0, &direction_inmate8_287_8_0, &direction_inmate8_287_8_0, &direction_inmate8_287_8_0, &direction_inmate8_287_8_0, NULL, &direction_inmate8_287_8_16, &direction_inmate8_287_8_16, &direction_inmate8_287_8_16, &direction_inmate8_287_8_16, &direction_inmate8_287_8_16, &direction_inmate8_287_8_16, &direction_inmate8_287_8_16, &direction_inmate8_287_8_16, &direction_inmate8_287_8_16, &direction_inmate8_287_8_16, &direction_inmate8_287_8_16, NULL, &direction_inmate8_287_8_24, &direction_inmate8_287_8_24, &direction_inmate8_287_8_24, &direction_inmate8_287_8_24, &direction_inmate8_287_8_24, &direction_inmate8_287_8_24, &direction_inmate8_287_8_24, NULL, &direction_inmate8_287_8_0, &direction_inmate8_287_8_0, &direction_inmate8_287_8_0};
static Image* images_inmate8_287_9_0[2];
static Direction direction_inmate8_287_9_0 = {0, 5, 5, 0, -1, images_inmate8_287_9_0, 2};
static Animation anim_inmate8_287_9 = {&direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, NULL, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0, &direction_inmate8_287_9_0};
static Image* images_inmate8_287_10_0[5];
static Direction direction_inmate8_287_10_0 = {0, 10, 10, 0, -1, images_inmate8_287_10_0, 5};
static Animation anim_inmate8_287_10 = {&direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, NULL, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0, &direction_inmate8_287_10_0};
static Image* images_inmate8_287_11_0[2];
static Direction direction_inmate8_287_11_0 = {0, 6, 6, 0, -1, images_inmate8_287_11_0, 2};
static Image* images_inmate8_287_11_8[2];
static Direction direction_inmate8_287_11_8 = {8, 6, 6, 0, -1, images_inmate8_287_11_8, 2};
static Image* images_inmate8_287_11_16[2];
static Direction direction_inmate8_287_11_16 = {16, 6, 6, 0, -1, images_inmate8_287_11_16, 2};
static Image* images_inmate8_287_11_24[2];
static Direction direction_inmate8_287_11_24 = {24, 6, 6, 0, -1, images_inmate8_287_11_24, 2};
static Animation anim_inmate8_287_11 = {&direction_inmate8_287_11_0, &direction_inmate8_287_11_0, &direction_inmate8_287_11_0, &direction_inmate8_287_11_0, NULL, &direction_inmate8_287_11_8, &direction_inmate8_287_11_8, &direction_inmate8_287_11_8, &direction_inmate8_287_11_8, &direction_inmate8_287_11_8, &direction_inmate8_287_11_8, &direction_inmate8_287_11_8, NULL, &direction_inmate8_287_11_16, &direction_inmate8_287_11_16, &direction_inmate8_287_11_16, &direction_inmate8_287_11_16, &direction_inmate8_287_11_16, &direction_inmate8_287_11_16, &direction_inmate8_287_11_16, NULL, &direction_inmate8_287_11_24, &direction_inmate8_287_11_24, &direction_inmate8_287_11_24, &direction_inmate8_287_11_24, &direction_inmate8_287_11_24, &direction_inmate8_287_11_24, &direction_inmate8_287_11_24, NULL, &direction_inmate8_287_11_0, &direction_inmate8_287_11_0, &direction_inmate8_287_11_0};
static Image* images_inmate8_287_18_24[8];
static Direction direction_inmate8_287_18_24 = {24, 10, 10, 0, -1, images_inmate8_287_18_24, 8};
static Animation anim_inmate8_287_18 = {&direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, NULL, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24, &direction_inmate8_287_18_24};
static Image* images_inmate8_287_19_24[6];
static Direction direction_inmate8_287_19_24 = {24, 10, 10, 0, -1, images_inmate8_287_19_24, 6};
static Animation anim_inmate8_287_19 = {&direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, NULL, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24, &direction_inmate8_287_19_24};
static Animation * anim_array_inmate8_287[20] = {&anim_inmate8_287_0, NULL, NULL, NULL, &anim_inmate8_287_4, NULL, &anim_inmate8_287_6, NULL, &anim_inmate8_287_8, &anim_inmate8_287_9, &anim_inmate8_287_10, &anim_inmate8_287_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate8_287_18, &anim_inmate8_287_19};
static Animations anim_inmate8_287 = {20, &anim_array_inmate8_287[0]};
static bool anim_inmate8_287_initialized;
class Inmate8_287 : public Active
{
public:
    Inmate8_287(int x, int y) : Active(x, y, Inmate8_287_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 8", 8);
#endif
        this->animations = &anim_inmate8_287;
        if (!anim_inmate8_287_initialized) {
            anim_inmate8_287_initialized = true;
            images_inmate8_287_0_0[0] = get_internal_image(293);
            images_inmate8_287_0_0[1] = get_internal_image(282);
            images_inmate8_287_0_8[0] = get_internal_image(302);
            images_inmate8_287_0_8[1] = get_internal_image(301);
            images_inmate8_287_0_16[0] = get_internal_image(297);
            images_inmate8_287_0_16[1] = get_internal_image(295);
            images_inmate8_287_0_24[0] = get_internal_image(299);
            images_inmate8_287_0_24[1] = get_internal_image(300);
            images_inmate8_287_4_0[0] = get_internal_image(369);
            images_inmate8_287_4_0[1] = get_internal_image(373);
            images_inmate8_287_4_0[2] = get_internal_image(369);
            images_inmate8_287_4_0[3] = get_internal_image(373);
            images_inmate8_287_4_16[0] = get_internal_image(371);
            images_inmate8_287_4_16[1] = get_internal_image(763);
            images_inmate8_287_4_16[2] = get_internal_image(371);
            images_inmate8_287_4_16[3] = get_internal_image(763);
            images_inmate8_287_6_0[0] = get_internal_image(801);
            images_inmate8_287_6_8[0] = get_internal_image(800);
            images_inmate8_287_6_16[0] = get_internal_image(798);
            images_inmate8_287_6_24[0] = get_internal_image(802);
            images_inmate8_287_8_0[0] = get_internal_image(2486);
            images_inmate8_287_8_16[0] = get_internal_image(319);
            images_inmate8_287_8_16[1] = get_internal_image(323);
            images_inmate8_287_8_24[0] = get_internal_image(2474);
            images_inmate8_287_9_0[0] = get_internal_image(1502);
            images_inmate8_287_9_0[1] = get_internal_image(1506);
            images_inmate8_287_10_0[0] = get_internal_image(321);
            images_inmate8_287_10_0[1] = get_internal_image(333);
            images_inmate8_287_10_0[2] = get_internal_image(332);
            images_inmate8_287_10_0[3] = get_internal_image(335);
            images_inmate8_287_10_0[4] = get_internal_image(336);
            images_inmate8_287_11_0[0] = get_internal_image(1086);
            images_inmate8_287_11_0[1] = get_internal_image(1087);
            images_inmate8_287_11_8[0] = get_internal_image(344);
            images_inmate8_287_11_8[1] = get_internal_image(343);
            images_inmate8_287_11_16[0] = get_internal_image(1254);
            images_inmate8_287_11_16[1] = get_internal_image(1085);
            images_inmate8_287_11_24[0] = get_internal_image(728);
            images_inmate8_287_11_24[1] = get_internal_image(729);
            images_inmate8_287_18_24[0] = get_internal_image(2099);
            images_inmate8_287_18_24[1] = get_internal_image(2112);
            images_inmate8_287_18_24[2] = get_internal_image(2107);
            images_inmate8_287_18_24[3] = get_internal_image(2108);
            images_inmate8_287_18_24[4] = get_internal_image(2109);
            images_inmate8_287_18_24[5] = get_internal_image(2114);
            images_inmate8_287_18_24[6] = get_internal_image(2110);
            images_inmate8_287_18_24[7] = get_internal_image(2111);
            images_inmate8_287_19_24[0] = get_internal_image(2150);
            images_inmate8_287_19_24[1] = get_internal_image(2156);
            images_inmate8_287_19_24[2] = get_internal_image(2157);
            images_inmate8_287_19_24[3] = get_internal_image(2157);
            images_inmate8_287_19_24[4] = get_internal_image(2156);
            images_inmate8_287_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmate8_287(int x, int y)
{
    return new (Active::pool.create()) Inmate8_287(x, y);
}
static Image* images_inmate9_288_0_0[2];
static Direction direction_inmate9_288_0_0 = {0, 10, 10, 0, -1, images_inmate9_288_0_0, 2};
static Image* images_inmate9_288_0_8[2];
static Direction direction_inmate9_288_0_8 = {8, 10, 10, 0, -1, images_inmate9_288_0_8, 2};
static Image* images_inmate9_288_0_16[2];
static Direction direction_inmate9_288_0_16 = {16, 10, 10, 0, -1, images_inmate9_288_0_16, 2};
static Image* images_inmate9_288_0_24[2];
static Direction direction_inmate9_288_0_24 = {24, 10, 10, 0, -1, images_inmate9_288_0_24, 2};
static Animation anim_inmate9_288_0 = {&direction_inmate9_288_0_0, &direction_inmate9_288_0_0, &direction_inmate9_288_0_0, &direction_inmate9_288_0_0, NULL, &direction_inmate9_288_0_8, &direction_inmate9_288_0_8, &direction_inmate9_288_0_8, &direction_inmate9_288_0_8, &direction_inmate9_288_0_8, &direction_inmate9_288_0_8, &direction_inmate9_288_0_8, NULL, &direction_inmate9_288_0_16, &direction_inmate9_288_0_16, &direction_inmate9_288_0_16, &direction_inmate9_288_0_16, &direction_inmate9_288_0_16, &direction_inmate9_288_0_16, &direction_inmate9_288_0_16, NULL, &direction_inmate9_288_0_24, &direction_inmate9_288_0_24, &direction_inmate9_288_0_24, &direction_inmate9_288_0_24, &direction_inmate9_288_0_24, &direction_inmate9_288_0_24, &direction_inmate9_288_0_24, NULL, &direction_inmate9_288_0_0, &direction_inmate9_288_0_0, &direction_inmate9_288_0_0};
static Image* images_inmate9_288_4_0[4];
static Direction direction_inmate9_288_4_0 = {0, 20, 20, 0, 1, images_inmate9_288_4_0, 4};
static Image* images_inmate9_288_4_16[4];
static Direction direction_inmate9_288_4_16 = {16, 20, 20, 0, 1, images_inmate9_288_4_16, 4};
static Animation anim_inmate9_288_4 = {&direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, NULL, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, &direction_inmate9_288_4_16, NULL, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0, &direction_inmate9_288_4_0};
static Image* images_inmate9_288_6_0[1];
static Direction direction_inmate9_288_6_0 = {0, 6, 6, 0, 1, images_inmate9_288_6_0, 1};
static Image* images_inmate9_288_6_8[1];
static Direction direction_inmate9_288_6_8 = {8, 6, 6, 0, 1, images_inmate9_288_6_8, 1};
static Image* images_inmate9_288_6_16[1];
static Direction direction_inmate9_288_6_16 = {16, 6, 6, 0, 1, images_inmate9_288_6_16, 1};
static Image* images_inmate9_288_6_24[1];
static Direction direction_inmate9_288_6_24 = {24, 6, 6, 0, 1, images_inmate9_288_6_24, 1};
static Animation anim_inmate9_288_6 = {&direction_inmate9_288_6_0, &direction_inmate9_288_6_0, &direction_inmate9_288_6_0, &direction_inmate9_288_6_0, NULL, &direction_inmate9_288_6_8, &direction_inmate9_288_6_8, &direction_inmate9_288_6_8, &direction_inmate9_288_6_8, &direction_inmate9_288_6_8, &direction_inmate9_288_6_8, &direction_inmate9_288_6_8, NULL, &direction_inmate9_288_6_16, &direction_inmate9_288_6_16, &direction_inmate9_288_6_16, &direction_inmate9_288_6_16, &direction_inmate9_288_6_16, &direction_inmate9_288_6_16, &direction_inmate9_288_6_16, NULL, &direction_inmate9_288_6_24, &direction_inmate9_288_6_24, &direction_inmate9_288_6_24, &direction_inmate9_288_6_24, &direction_inmate9_288_6_24, &direction_inmate9_288_6_24, &direction_inmate9_288_6_24, NULL, &direction_inmate9_288_6_0, &direction_inmate9_288_6_0, &direction_inmate9_288_6_0};
static Image* images_inmate9_288_8_0[1];
static Direction direction_inmate9_288_8_0 = {0, 10, 10, 0, -1, images_inmate9_288_8_0, 1};
static Image* images_inmate9_288_8_16[2];
static Direction direction_inmate9_288_8_16 = {16, 5, 5, 0, -1, images_inmate9_288_8_16, 2};
static Image* images_inmate9_288_8_24[1];
static Direction direction_inmate9_288_8_24 = {24, 10, 10, 0, -1, images_inmate9_288_8_24, 1};
static Animation anim_inmate9_288_8 = {&direction_inmate9_288_8_0, &direction_inmate9_288_8_0, &direction_inmate9_288_8_0, &direction_inmate9_288_8_0, &direction_inmate9_288_8_0, &direction_inmate9_288_8_0, &direction_inmate9_288_8_0, &direction_inmate9_288_8_0, NULL, &direction_inmate9_288_8_16, &direction_inmate9_288_8_16, &direction_inmate9_288_8_16, &direction_inmate9_288_8_16, &direction_inmate9_288_8_16, &direction_inmate9_288_8_16, &direction_inmate9_288_8_16, &direction_inmate9_288_8_16, &direction_inmate9_288_8_16, &direction_inmate9_288_8_16, &direction_inmate9_288_8_16, NULL, &direction_inmate9_288_8_24, &direction_inmate9_288_8_24, &direction_inmate9_288_8_24, &direction_inmate9_288_8_24, &direction_inmate9_288_8_24, &direction_inmate9_288_8_24, &direction_inmate9_288_8_24, NULL, &direction_inmate9_288_8_0, &direction_inmate9_288_8_0, &direction_inmate9_288_8_0};
static Image* images_inmate9_288_9_0[2];
static Direction direction_inmate9_288_9_0 = {0, 5, 5, 0, -1, images_inmate9_288_9_0, 2};
static Animation anim_inmate9_288_9 = {&direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, NULL, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0, &direction_inmate9_288_9_0};
static Image* images_inmate9_288_10_0[5];
static Direction direction_inmate9_288_10_0 = {0, 10, 10, 0, -1, images_inmate9_288_10_0, 5};
static Animation anim_inmate9_288_10 = {&direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, NULL, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0, &direction_inmate9_288_10_0};
static Image* images_inmate9_288_11_0[2];
static Direction direction_inmate9_288_11_0 = {0, 10, 10, 0, -1, images_inmate9_288_11_0, 2};
static Image* images_inmate9_288_11_8[2];
static Direction direction_inmate9_288_11_8 = {8, 10, 10, 0, -1, images_inmate9_288_11_8, 2};
static Image* images_inmate9_288_11_16[2];
static Direction direction_inmate9_288_11_16 = {16, 10, 10, 0, -1, images_inmate9_288_11_16, 2};
static Image* images_inmate9_288_11_24[2];
static Direction direction_inmate9_288_11_24 = {24, 10, 10, 0, -1, images_inmate9_288_11_24, 2};
static Animation anim_inmate9_288_11 = {&direction_inmate9_288_11_0, &direction_inmate9_288_11_0, &direction_inmate9_288_11_0, &direction_inmate9_288_11_0, NULL, &direction_inmate9_288_11_8, &direction_inmate9_288_11_8, &direction_inmate9_288_11_8, &direction_inmate9_288_11_8, &direction_inmate9_288_11_8, &direction_inmate9_288_11_8, &direction_inmate9_288_11_8, NULL, &direction_inmate9_288_11_16, &direction_inmate9_288_11_16, &direction_inmate9_288_11_16, &direction_inmate9_288_11_16, &direction_inmate9_288_11_16, &direction_inmate9_288_11_16, &direction_inmate9_288_11_16, NULL, &direction_inmate9_288_11_24, &direction_inmate9_288_11_24, &direction_inmate9_288_11_24, &direction_inmate9_288_11_24, &direction_inmate9_288_11_24, &direction_inmate9_288_11_24, &direction_inmate9_288_11_24, NULL, &direction_inmate9_288_11_0, &direction_inmate9_288_11_0, &direction_inmate9_288_11_0};
static Image* images_inmate9_288_18_24[8];
static Direction direction_inmate9_288_18_24 = {24, 10, 10, 0, -1, images_inmate9_288_18_24, 8};
static Animation anim_inmate9_288_18 = {&direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, NULL, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24, &direction_inmate9_288_18_24};
static Image* images_inmate9_288_19_24[6];
static Direction direction_inmate9_288_19_24 = {24, 10, 10, 0, -1, images_inmate9_288_19_24, 6};
static Animation anim_inmate9_288_19 = {&direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, NULL, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24, &direction_inmate9_288_19_24};
static Animation * anim_array_inmate9_288[20] = {&anim_inmate9_288_0, NULL, NULL, NULL, &anim_inmate9_288_4, NULL, &anim_inmate9_288_6, NULL, &anim_inmate9_288_8, &anim_inmate9_288_9, &anim_inmate9_288_10, &anim_inmate9_288_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate9_288_18, &anim_inmate9_288_19};
static Animations anim_inmate9_288 = {20, &anim_array_inmate9_288[0]};
static bool anim_inmate9_288_initialized;
class Inmate9_288 : public Active
{
public:
    Inmate9_288(int x, int y) : Active(x, y, Inmate9_288_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 9", 8);
#endif
        this->animations = &anim_inmate9_288;
        if (!anim_inmate9_288_initialized) {
            anim_inmate9_288_initialized = true;
            images_inmate9_288_0_0[0] = get_internal_image(441);
            images_inmate9_288_0_0[1] = get_internal_image(442);
            images_inmate9_288_0_8[0] = get_internal_image(459);
            images_inmate9_288_0_8[1] = get_internal_image(460);
            images_inmate9_288_0_16[0] = get_internal_image(447);
            images_inmate9_288_0_16[1] = get_internal_image(444);
            images_inmate9_288_0_24[0] = get_internal_image(384);
            images_inmate9_288_0_24[1] = get_internal_image(381);
            images_inmate9_288_4_0[0] = get_internal_image(369);
            images_inmate9_288_4_0[1] = get_internal_image(373);
            images_inmate9_288_4_0[2] = get_internal_image(369);
            images_inmate9_288_4_0[3] = get_internal_image(373);
            images_inmate9_288_4_16[0] = get_internal_image(371);
            images_inmate9_288_4_16[1] = get_internal_image(763);
            images_inmate9_288_4_16[2] = get_internal_image(371);
            images_inmate9_288_4_16[3] = get_internal_image(763);
            images_inmate9_288_6_0[0] = get_internal_image(170);
            images_inmate9_288_6_8[0] = get_internal_image(601);
            images_inmate9_288_6_16[0] = get_internal_image(317);
            images_inmate9_288_6_24[0] = get_internal_image(1067);
            images_inmate9_288_8_0[0] = get_internal_image(2483);
            images_inmate9_288_8_16[0] = get_internal_image(465);
            images_inmate9_288_8_16[1] = get_internal_image(464);
            images_inmate9_288_8_24[0] = get_internal_image(2482);
            images_inmate9_288_9_0[0] = get_internal_image(1495);
            images_inmate9_288_9_0[1] = get_internal_image(1496);
            images_inmate9_288_10_0[0] = get_internal_image(595);
            images_inmate9_288_10_0[1] = get_internal_image(461);
            images_inmate9_288_10_0[2] = get_internal_image(456);
            images_inmate9_288_10_0[3] = get_internal_image(456);
            images_inmate9_288_10_0[4] = get_internal_image(461);
            images_inmate9_288_11_0[0] = get_internal_image(413);
            images_inmate9_288_11_0[1] = get_internal_image(404);
            images_inmate9_288_11_8[0] = get_internal_image(457);
            images_inmate9_288_11_8[1] = get_internal_image(458);
            images_inmate9_288_11_16[0] = get_internal_image(448);
            images_inmate9_288_11_16[1] = get_internal_image(450);
            images_inmate9_288_11_24[0] = get_internal_image(715);
            images_inmate9_288_11_24[1] = get_internal_image(716);
            images_inmate9_288_18_24[0] = get_internal_image(2070);
            images_inmate9_288_18_24[1] = get_internal_image(2076);
            images_inmate9_288_18_24[2] = get_internal_image(2071);
            images_inmate9_288_18_24[3] = get_internal_image(2072);
            images_inmate9_288_18_24[4] = get_internal_image(2073);
            images_inmate9_288_18_24[5] = get_internal_image(2075);
            images_inmate9_288_18_24[6] = get_internal_image(2071);
            images_inmate9_288_18_24[7] = get_internal_image(2074);
            images_inmate9_288_19_24[0] = get_internal_image(2404);
            images_inmate9_288_19_24[1] = get_internal_image(1031);
            images_inmate9_288_19_24[2] = get_internal_image(2406);
            images_inmate9_288_19_24[3] = get_internal_image(2406);
            images_inmate9_288_19_24[4] = get_internal_image(2409);
            images_inmate9_288_19_24[5] = get_internal_image(2404);
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
FrameObject * create_inmate9_288(int x, int y)
{
    return new (Active::pool.create()) Inmate9_288(x, y);
}
static Image* images_inmate10_289_0_0[2];
static Direction direction_inmate10_289_0_0 = {0, 10, 10, 0, -1, images_inmate10_289_0_0, 2};
static Image* images_inmate10_289_0_8[2];
static Direction direction_inmate10_289_0_8 = {8, 10, 10, 0, -1, images_inmate10_289_0_8, 2};
static Image* images_inmate10_289_0_16[2];
static Direction direction_inmate10_289_0_16 = {16, 10, 10, 0, -1, images_inmate10_289_0_16, 2};
static Image* images_inmate10_289_0_24[2];
static Direction direction_inmate10_289_0_24 = {24, 10, 10, 0, -1, images_inmate10_289_0_24, 2};
static Animation anim_inmate10_289_0 = {&direction_inmate10_289_0_0, &direction_inmate10_289_0_0, &direction_inmate10_289_0_0, &direction_inmate10_289_0_0, NULL, &direction_inmate10_289_0_8, &direction_inmate10_289_0_8, &direction_inmate10_289_0_8, &direction_inmate10_289_0_8, &direction_inmate10_289_0_8, &direction_inmate10_289_0_8, &direction_inmate10_289_0_8, NULL, &direction_inmate10_289_0_16, &direction_inmate10_289_0_16, &direction_inmate10_289_0_16, &direction_inmate10_289_0_16, &direction_inmate10_289_0_16, &direction_inmate10_289_0_16, &direction_inmate10_289_0_16, NULL, &direction_inmate10_289_0_24, &direction_inmate10_289_0_24, &direction_inmate10_289_0_24, &direction_inmate10_289_0_24, &direction_inmate10_289_0_24, &direction_inmate10_289_0_24, &direction_inmate10_289_0_24, NULL, &direction_inmate10_289_0_0, &direction_inmate10_289_0_0, &direction_inmate10_289_0_0};
static Image* images_inmate10_289_4_0[4];
static Direction direction_inmate10_289_4_0 = {0, 20, 20, 0, 1, images_inmate10_289_4_0, 4};
static Image* images_inmate10_289_4_16[4];
static Direction direction_inmate10_289_4_16 = {16, 20, 20, 0, 1, images_inmate10_289_4_16, 4};
static Animation anim_inmate10_289_4 = {&direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, NULL, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, &direction_inmate10_289_4_16, NULL, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0, &direction_inmate10_289_4_0};
static Image* images_inmate10_289_6_0[1];
static Direction direction_inmate10_289_6_0 = {0, 6, 6, 0, 1, images_inmate10_289_6_0, 1};
static Image* images_inmate10_289_6_8[1];
static Direction direction_inmate10_289_6_8 = {8, 6, 6, 0, 1, images_inmate10_289_6_8, 1};
static Image* images_inmate10_289_6_16[1];
static Direction direction_inmate10_289_6_16 = {16, 6, 6, 0, 1, images_inmate10_289_6_16, 1};
static Image* images_inmate10_289_6_24[1];
static Direction direction_inmate10_289_6_24 = {24, 6, 6, 0, 1, images_inmate10_289_6_24, 1};
static Animation anim_inmate10_289_6 = {&direction_inmate10_289_6_0, &direction_inmate10_289_6_0, &direction_inmate10_289_6_0, &direction_inmate10_289_6_0, NULL, &direction_inmate10_289_6_8, &direction_inmate10_289_6_8, &direction_inmate10_289_6_8, &direction_inmate10_289_6_8, &direction_inmate10_289_6_8, &direction_inmate10_289_6_8, &direction_inmate10_289_6_8, NULL, &direction_inmate10_289_6_16, &direction_inmate10_289_6_16, &direction_inmate10_289_6_16, &direction_inmate10_289_6_16, &direction_inmate10_289_6_16, &direction_inmate10_289_6_16, &direction_inmate10_289_6_16, NULL, &direction_inmate10_289_6_24, &direction_inmate10_289_6_24, &direction_inmate10_289_6_24, &direction_inmate10_289_6_24, &direction_inmate10_289_6_24, &direction_inmate10_289_6_24, &direction_inmate10_289_6_24, NULL, &direction_inmate10_289_6_0, &direction_inmate10_289_6_0, &direction_inmate10_289_6_0};
static Image* images_inmate10_289_8_0[1];
static Direction direction_inmate10_289_8_0 = {0, 10, 10, 0, -1, images_inmate10_289_8_0, 1};
static Image* images_inmate10_289_8_16[2];
static Direction direction_inmate10_289_8_16 = {16, 5, 5, 0, -1, images_inmate10_289_8_16, 2};
static Image* images_inmate10_289_8_24[1];
static Direction direction_inmate10_289_8_24 = {24, 10, 10, 0, -1, images_inmate10_289_8_24, 1};
static Animation anim_inmate10_289_8 = {&direction_inmate10_289_8_0, &direction_inmate10_289_8_0, &direction_inmate10_289_8_0, &direction_inmate10_289_8_0, &direction_inmate10_289_8_0, &direction_inmate10_289_8_0, &direction_inmate10_289_8_0, &direction_inmate10_289_8_0, NULL, &direction_inmate10_289_8_16, &direction_inmate10_289_8_16, &direction_inmate10_289_8_16, &direction_inmate10_289_8_16, &direction_inmate10_289_8_16, &direction_inmate10_289_8_16, &direction_inmate10_289_8_16, &direction_inmate10_289_8_16, &direction_inmate10_289_8_16, &direction_inmate10_289_8_16, &direction_inmate10_289_8_16, NULL, &direction_inmate10_289_8_24, &direction_inmate10_289_8_24, &direction_inmate10_289_8_24, &direction_inmate10_289_8_24, &direction_inmate10_289_8_24, &direction_inmate10_289_8_24, &direction_inmate10_289_8_24, NULL, &direction_inmate10_289_8_0, &direction_inmate10_289_8_0, &direction_inmate10_289_8_0};
static Image* images_inmate10_289_9_0[2];
static Direction direction_inmate10_289_9_0 = {0, 5, 5, 0, -1, images_inmate10_289_9_0, 2};
static Animation anim_inmate10_289_9 = {&direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, NULL, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0, &direction_inmate10_289_9_0};
static Image* images_inmate10_289_10_0[5];
static Direction direction_inmate10_289_10_0 = {0, 10, 10, 0, -1, images_inmate10_289_10_0, 5};
static Animation anim_inmate10_289_10 = {&direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, NULL, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0, &direction_inmate10_289_10_0};
static Image* images_inmate10_289_11_0[2];
static Direction direction_inmate10_289_11_0 = {0, 10, 10, 0, -1, images_inmate10_289_11_0, 2};
static Image* images_inmate10_289_11_8[2];
static Direction direction_inmate10_289_11_8 = {8, 10, 10, 0, -1, images_inmate10_289_11_8, 2};
static Image* images_inmate10_289_11_16[2];
static Direction direction_inmate10_289_11_16 = {16, 10, 10, 0, -1, images_inmate10_289_11_16, 2};
static Image* images_inmate10_289_11_24[2];
static Direction direction_inmate10_289_11_24 = {24, 10, 10, 0, -1, images_inmate10_289_11_24, 2};
static Animation anim_inmate10_289_11 = {&direction_inmate10_289_11_0, &direction_inmate10_289_11_0, &direction_inmate10_289_11_0, &direction_inmate10_289_11_0, NULL, &direction_inmate10_289_11_8, &direction_inmate10_289_11_8, &direction_inmate10_289_11_8, &direction_inmate10_289_11_8, &direction_inmate10_289_11_8, &direction_inmate10_289_11_8, &direction_inmate10_289_11_8, NULL, &direction_inmate10_289_11_16, &direction_inmate10_289_11_16, &direction_inmate10_289_11_16, &direction_inmate10_289_11_16, &direction_inmate10_289_11_16, &direction_inmate10_289_11_16, &direction_inmate10_289_11_16, NULL, &direction_inmate10_289_11_24, &direction_inmate10_289_11_24, &direction_inmate10_289_11_24, &direction_inmate10_289_11_24, &direction_inmate10_289_11_24, &direction_inmate10_289_11_24, &direction_inmate10_289_11_24, NULL, &direction_inmate10_289_11_0, &direction_inmate10_289_11_0, &direction_inmate10_289_11_0};
static Image* images_inmate10_289_18_24[8];
static Direction direction_inmate10_289_18_24 = {24, 10, 10, 0, -1, images_inmate10_289_18_24, 8};
static Animation anim_inmate10_289_18 = {&direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, NULL, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24, &direction_inmate10_289_18_24};
static Image* images_inmate10_289_19_24[6];
static Direction direction_inmate10_289_19_24 = {24, 10, 10, 0, -1, images_inmate10_289_19_24, 6};
static Animation anim_inmate10_289_19 = {&direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, NULL, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24, &direction_inmate10_289_19_24};
static Animation * anim_array_inmate10_289[20] = {&anim_inmate10_289_0, NULL, NULL, NULL, &anim_inmate10_289_4, NULL, &anim_inmate10_289_6, NULL, &anim_inmate10_289_8, &anim_inmate10_289_9, &anim_inmate10_289_10, &anim_inmate10_289_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate10_289_18, &anim_inmate10_289_19};
static Animations anim_inmate10_289 = {20, &anim_array_inmate10_289[0]};
static bool anim_inmate10_289_initialized;
class Inmate10_289 : public Active
{
public:
    Inmate10_289(int x, int y) : Active(x, y, Inmate10_289_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 10", 9);
#endif
        this->animations = &anim_inmate10_289;
        if (!anim_inmate10_289_initialized) {
            anim_inmate10_289_initialized = true;
            images_inmate10_289_0_0[0] = get_internal_image(277);
            images_inmate10_289_0_0[1] = get_internal_image(280);
            images_inmate10_289_0_8[0] = get_internal_image(546);
            images_inmate10_289_0_8[1] = get_internal_image(764);
            images_inmate10_289_0_16[0] = get_internal_image(266);
            images_inmate10_289_0_16[1] = get_internal_image(281);
            images_inmate10_289_0_24[0] = get_internal_image(239);
            images_inmate10_289_0_24[1] = get_internal_image(245);
            images_inmate10_289_4_0[0] = get_internal_image(369);
            images_inmate10_289_4_0[1] = get_internal_image(373);
            images_inmate10_289_4_0[2] = get_internal_image(369);
            images_inmate10_289_4_0[3] = get_internal_image(373);
            images_inmate10_289_4_16[0] = get_internal_image(371);
            images_inmate10_289_4_16[1] = get_internal_image(763);
            images_inmate10_289_4_16[2] = get_internal_image(371);
            images_inmate10_289_4_16[3] = get_internal_image(763);
            images_inmate10_289_6_0[0] = get_internal_image(161);
            images_inmate10_289_6_8[0] = get_internal_image(1064);
            images_inmate10_289_6_16[0] = get_internal_image(220);
            images_inmate10_289_6_24[0] = get_internal_image(1069);
            images_inmate10_289_8_0[0] = get_internal_image(2484);
            images_inmate10_289_8_16[0] = get_internal_image(463);
            images_inmate10_289_8_16[1] = get_internal_image(476);
            images_inmate10_289_8_24[0] = get_internal_image(2473);
            images_inmate10_289_9_0[0] = get_internal_image(1500);
            images_inmate10_289_9_0[1] = get_internal_image(1501);
            images_inmate10_289_10_0[0] = get_internal_image(292);
            images_inmate10_289_10_0[1] = get_internal_image(290);
            images_inmate10_289_10_0[2] = get_internal_image(275);
            images_inmate10_289_10_0[3] = get_internal_image(275);
            images_inmate10_289_10_0[4] = get_internal_image(290);
            images_inmate10_289_11_0[0] = get_internal_image(228);
            images_inmate10_289_11_0[1] = get_internal_image(255);
            images_inmate10_289_11_8[0] = get_internal_image(1228);
            images_inmate10_289_11_8[1] = get_internal_image(1229);
            images_inmate10_289_11_16[0] = get_internal_image(261);
            images_inmate10_289_11_16[1] = get_internal_image(263);
            images_inmate10_289_11_24[0] = get_internal_image(717);
            images_inmate10_289_11_24[1] = get_internal_image(719);
            images_inmate10_289_18_24[0] = get_internal_image(2121);
            images_inmate10_289_18_24[1] = get_internal_image(2116);
            images_inmate10_289_18_24[2] = get_internal_image(2115);
            images_inmate10_289_18_24[3] = get_internal_image(2117);
            images_inmate10_289_18_24[4] = get_internal_image(2118);
            images_inmate10_289_18_24[5] = get_internal_image(2120);
            images_inmate10_289_18_24[6] = get_internal_image(2115);
            images_inmate10_289_18_24[7] = get_internal_image(2119);
            images_inmate10_289_19_24[0] = get_internal_image(2137);
            images_inmate10_289_19_24[1] = get_internal_image(2141);
            images_inmate10_289_19_24[2] = get_internal_image(2142);
            images_inmate10_289_19_24[3] = get_internal_image(2142);
            images_inmate10_289_19_24[4] = get_internal_image(2141);
            images_inmate10_289_19_24[5] = get_internal_image(2137);
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
FrameObject * create_inmate10_289(int x, int y)
{
    return new (Active::pool.create()) Inmate10_289(x, y);
}
static Image* images_inmate11_290_0_0[2];
static Direction direction_inmate11_290_0_0 = {0, 10, 10, 0, -1, images_inmate11_290_0_0, 2};
static Image* images_inmate11_290_0_8[2];
static Direction direction_inmate11_290_0_8 = {8, 10, 10, 0, -1, images_inmate11_290_0_8, 2};
static Image* images_inmate11_290_0_16[2];
static Direction direction_inmate11_290_0_16 = {16, 10, 10, 0, -1, images_inmate11_290_0_16, 2};
static Image* images_inmate11_290_0_24[2];
static Direction direction_inmate11_290_0_24 = {24, 10, 10, 0, -1, images_inmate11_290_0_24, 2};
static Animation anim_inmate11_290_0 = {&direction_inmate11_290_0_0, &direction_inmate11_290_0_0, &direction_inmate11_290_0_0, &direction_inmate11_290_0_0, NULL, &direction_inmate11_290_0_8, &direction_inmate11_290_0_8, &direction_inmate11_290_0_8, &direction_inmate11_290_0_8, &direction_inmate11_290_0_8, &direction_inmate11_290_0_8, &direction_inmate11_290_0_8, NULL, &direction_inmate11_290_0_16, &direction_inmate11_290_0_16, &direction_inmate11_290_0_16, &direction_inmate11_290_0_16, &direction_inmate11_290_0_16, &direction_inmate11_290_0_16, &direction_inmate11_290_0_16, NULL, &direction_inmate11_290_0_24, &direction_inmate11_290_0_24, &direction_inmate11_290_0_24, &direction_inmate11_290_0_24, &direction_inmate11_290_0_24, &direction_inmate11_290_0_24, &direction_inmate11_290_0_24, NULL, &direction_inmate11_290_0_0, &direction_inmate11_290_0_0, &direction_inmate11_290_0_0};
static Image* images_inmate11_290_4_0[4];
static Direction direction_inmate11_290_4_0 = {0, 20, 20, 0, 1, images_inmate11_290_4_0, 4};
static Image* images_inmate11_290_4_16[4];
static Direction direction_inmate11_290_4_16 = {16, 20, 20, 0, 1, images_inmate11_290_4_16, 4};
static Animation anim_inmate11_290_4 = {&direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, NULL, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, &direction_inmate11_290_4_16, NULL, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0, &direction_inmate11_290_4_0};
static Image* images_inmate11_290_6_0[1];
static Direction direction_inmate11_290_6_0 = {0, 6, 6, 0, 1, images_inmate11_290_6_0, 1};
static Image* images_inmate11_290_6_8[1];
static Direction direction_inmate11_290_6_8 = {8, 6, 6, 0, 1, images_inmate11_290_6_8, 1};
static Image* images_inmate11_290_6_16[1];
static Direction direction_inmate11_290_6_16 = {16, 6, 6, 0, 1, images_inmate11_290_6_16, 1};
static Image* images_inmate11_290_6_24[1];
static Direction direction_inmate11_290_6_24 = {24, 6, 6, 0, 1, images_inmate11_290_6_24, 1};
static Animation anim_inmate11_290_6 = {&direction_inmate11_290_6_0, &direction_inmate11_290_6_0, &direction_inmate11_290_6_0, &direction_inmate11_290_6_0, NULL, &direction_inmate11_290_6_8, &direction_inmate11_290_6_8, &direction_inmate11_290_6_8, &direction_inmate11_290_6_8, &direction_inmate11_290_6_8, &direction_inmate11_290_6_8, &direction_inmate11_290_6_8, NULL, &direction_inmate11_290_6_16, &direction_inmate11_290_6_16, &direction_inmate11_290_6_16, &direction_inmate11_290_6_16, &direction_inmate11_290_6_16, &direction_inmate11_290_6_16, &direction_inmate11_290_6_16, NULL, &direction_inmate11_290_6_24, &direction_inmate11_290_6_24, &direction_inmate11_290_6_24, &direction_inmate11_290_6_24, &direction_inmate11_290_6_24, &direction_inmate11_290_6_24, &direction_inmate11_290_6_24, NULL, &direction_inmate11_290_6_0, &direction_inmate11_290_6_0, &direction_inmate11_290_6_0};
static Image* images_inmate11_290_8_0[1];
static Direction direction_inmate11_290_8_0 = {0, 10, 10, 0, -1, images_inmate11_290_8_0, 1};
static Image* images_inmate11_290_8_16[2];
static Direction direction_inmate11_290_8_16 = {16, 5, 5, 0, -1, images_inmate11_290_8_16, 2};
static Image* images_inmate11_290_8_24[1];
static Direction direction_inmate11_290_8_24 = {24, 10, 10, 0, -1, images_inmate11_290_8_24, 1};
static Animation anim_inmate11_290_8 = {&direction_inmate11_290_8_0, &direction_inmate11_290_8_0, &direction_inmate11_290_8_0, &direction_inmate11_290_8_0, &direction_inmate11_290_8_0, &direction_inmate11_290_8_0, &direction_inmate11_290_8_0, &direction_inmate11_290_8_0, NULL, &direction_inmate11_290_8_16, &direction_inmate11_290_8_16, &direction_inmate11_290_8_16, &direction_inmate11_290_8_16, &direction_inmate11_290_8_16, &direction_inmate11_290_8_16, &direction_inmate11_290_8_16, &direction_inmate11_290_8_16, &direction_inmate11_290_8_16, &direction_inmate11_290_8_16, &direction_inmate11_290_8_16, NULL, &direction_inmate11_290_8_24, &direction_inmate11_290_8_24, &direction_inmate11_290_8_24, &direction_inmate11_290_8_24, &direction_inmate11_290_8_24, &direction_inmate11_290_8_24, &direction_inmate11_290_8_24, NULL, &direction_inmate11_290_8_0, &direction_inmate11_290_8_0, &direction_inmate11_290_8_0};
static Image* images_inmate11_290_9_0[2];
static Direction direction_inmate11_290_9_0 = {0, 5, 5, 0, -1, images_inmate11_290_9_0, 2};
static Animation anim_inmate11_290_9 = {&direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, NULL, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0, &direction_inmate11_290_9_0};
static Image* images_inmate11_290_10_0[5];
static Direction direction_inmate11_290_10_0 = {0, 10, 10, 0, -1, images_inmate11_290_10_0, 5};
static Animation anim_inmate11_290_10 = {&direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, NULL, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0, &direction_inmate11_290_10_0};
static Image* images_inmate11_290_11_0[2];
static Direction direction_inmate11_290_11_0 = {0, 6, 6, 0, -1, images_inmate11_290_11_0, 2};
static Image* images_inmate11_290_11_8[2];
static Direction direction_inmate11_290_11_8 = {8, 6, 6, 0, -1, images_inmate11_290_11_8, 2};
static Image* images_inmate11_290_11_16[2];
static Direction direction_inmate11_290_11_16 = {16, 6, 6, 0, -1, images_inmate11_290_11_16, 2};
static Image* images_inmate11_290_11_24[2];
static Direction direction_inmate11_290_11_24 = {24, 6, 6, 0, -1, images_inmate11_290_11_24, 2};
static Animation anim_inmate11_290_11 = {&direction_inmate11_290_11_0, &direction_inmate11_290_11_0, &direction_inmate11_290_11_0, &direction_inmate11_290_11_0, NULL, &direction_inmate11_290_11_8, &direction_inmate11_290_11_8, &direction_inmate11_290_11_8, &direction_inmate11_290_11_8, &direction_inmate11_290_11_8, &direction_inmate11_290_11_8, &direction_inmate11_290_11_8, NULL, &direction_inmate11_290_11_16, &direction_inmate11_290_11_16, &direction_inmate11_290_11_16, &direction_inmate11_290_11_16, &direction_inmate11_290_11_16, &direction_inmate11_290_11_16, &direction_inmate11_290_11_16, NULL, &direction_inmate11_290_11_24, &direction_inmate11_290_11_24, &direction_inmate11_290_11_24, &direction_inmate11_290_11_24, &direction_inmate11_290_11_24, &direction_inmate11_290_11_24, &direction_inmate11_290_11_24, NULL, &direction_inmate11_290_11_0, &direction_inmate11_290_11_0, &direction_inmate11_290_11_0};
static Image* images_inmate11_290_18_24[8];
static Direction direction_inmate11_290_18_24 = {24, 10, 10, 0, -1, images_inmate11_290_18_24, 8};
static Animation anim_inmate11_290_18 = {&direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, NULL, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24, &direction_inmate11_290_18_24};
static Image* images_inmate11_290_19_24[6];
static Direction direction_inmate11_290_19_24 = {24, 10, 10, 0, -1, images_inmate11_290_19_24, 6};
static Animation anim_inmate11_290_19 = {&direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, NULL, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24, &direction_inmate11_290_19_24};
static Animation * anim_array_inmate11_290[20] = {&anim_inmate11_290_0, NULL, NULL, NULL, &anim_inmate11_290_4, NULL, &anim_inmate11_290_6, NULL, &anim_inmate11_290_8, &anim_inmate11_290_9, &anim_inmate11_290_10, &anim_inmate11_290_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate11_290_18, &anim_inmate11_290_19};
static Animations anim_inmate11_290 = {20, &anim_array_inmate11_290[0]};
static bool anim_inmate11_290_initialized;
class Inmate11_290 : public Active
{
public:
    Inmate11_290(int x, int y) : Active(x, y, Inmate11_290_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 11", 9);
#endif
        this->animations = &anim_inmate11_290;
        if (!anim_inmate11_290_initialized) {
            anim_inmate11_290_initialized = true;
            images_inmate11_290_0_0[0] = get_internal_image(720);
            images_inmate11_290_0_0[1] = get_internal_image(725);
            images_inmate11_290_0_8[0] = get_internal_image(752);
            images_inmate11_290_0_8[1] = get_internal_image(753);
            images_inmate11_290_0_16[0] = get_internal_image(746);
            images_inmate11_290_0_16[1] = get_internal_image(745);
            images_inmate11_290_0_24[0] = get_internal_image(693);
            images_inmate11_290_0_24[1] = get_internal_image(698);
            images_inmate11_290_4_0[0] = get_internal_image(369);
            images_inmate11_290_4_0[1] = get_internal_image(373);
            images_inmate11_290_4_0[2] = get_internal_image(369);
            images_inmate11_290_4_0[3] = get_internal_image(373);
            images_inmate11_290_4_16[0] = get_internal_image(371);
            images_inmate11_290_4_16[1] = get_internal_image(763);
            images_inmate11_290_4_16[2] = get_internal_image(371);
            images_inmate11_290_4_16[3] = get_internal_image(763);
            images_inmate11_290_6_0[0] = get_internal_image(155);
            images_inmate11_290_6_8[0] = get_internal_image(1065);
            images_inmate11_290_6_16[0] = get_internal_image(163);
            images_inmate11_290_6_24[0] = get_internal_image(1068);
            images_inmate11_290_8_0[0] = get_internal_image(2485);
            images_inmate11_290_8_16[0] = get_internal_image(758);
            images_inmate11_290_8_16[1] = get_internal_image(760);
            images_inmate11_290_8_24[0] = get_internal_image(1180);
            images_inmate11_290_9_0[0] = get_internal_image(1503);
            images_inmate11_290_9_0[1] = get_internal_image(1498);
            images_inmate11_290_10_0[0] = get_internal_image(548);
            images_inmate11_290_10_0[1] = get_internal_image(754);
            images_inmate11_290_10_0[2] = get_internal_image(756);
            images_inmate11_290_10_0[3] = get_internal_image(547);
            images_inmate11_290_10_0[4] = get_internal_image(542);
            images_inmate11_290_11_0[0] = get_internal_image(1099);
            images_inmate11_290_11_0[1] = get_internal_image(1103);
            images_inmate11_290_11_8[0] = get_internal_image(749);
            images_inmate11_290_11_8[1] = get_internal_image(750);
            images_inmate11_290_11_16[0] = get_internal_image(1110);
            images_inmate11_290_11_16[1] = get_internal_image(1112);
            images_inmate11_290_11_24[0] = get_internal_image(724);
            images_inmate11_290_11_24[1] = get_internal_image(730);
            images_inmate11_290_18_24[0] = get_internal_image(2082);
            images_inmate11_290_18_24[1] = get_internal_image(2090);
            images_inmate11_290_18_24[2] = get_internal_image(2085);
            images_inmate11_290_18_24[3] = get_internal_image(2086);
            images_inmate11_290_18_24[4] = get_internal_image(2087);
            images_inmate11_290_18_24[5] = get_internal_image(2091);
            images_inmate11_290_18_24[6] = get_internal_image(2085);
            images_inmate11_290_18_24[7] = get_internal_image(2088);
            images_inmate11_290_19_24[0] = get_internal_image(2145);
            images_inmate11_290_19_24[1] = get_internal_image(2147);
            images_inmate11_290_19_24[2] = get_internal_image(2149);
            images_inmate11_290_19_24[3] = get_internal_image(2149);
            images_inmate11_290_19_24[4] = get_internal_image(2147);
            images_inmate11_290_19_24[5] = get_internal_image(2145);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_inmate11_290(int x, int y)
{
    return new (Active::pool.create()) Inmate11_290(x, y);
}
static Image* images_active9_291_0_0[1];
static Direction direction_active9_291_0_0 = {0, 50, 50, 0, -1, images_active9_291_0_0, 1};
static Animation anim_active9_291_0 = {&direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, NULL, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0, &direction_active9_291_0_0};
static Animation * anim_array_active9_291[1] = {&anim_active9_291_0};
static Animations anim_active9_291 = {1, &anim_array_active9_291[0]};
static bool anim_active9_291_initialized;
class Active9_291 : public Active
{
public:
    Active9_291(int x, int y) : Active(x, y, Active9_291_type)
    {
        // qualifiers: 63
#ifndef NDEBUG
        name = std::string("Active 9", 8);
#endif
        this->animations = &anim_active9_291;
        if (!anim_active9_291_initialized) {
            anim_active9_291_initialized = true;
            images_active9_291_0_0[0] = get_internal_image(964);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_active9_291(int x, int y)
{
    return new (Active::pool.create()) Active9_291(x, y);
}
class StringTokenizer2_292 : public StringTokenizer
{
public:
    StringTokenizer2_292(int x, int y) : StringTokenizer(x, y, StringTokenizer2_292_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String tokenizer 2", 18);
#endif
    }
};
FrameObject * create_stringtokenizer2_292(int x, int y)
{
    return new (StringTokenizer::pool.create()) StringTokenizer2_292(x, y);
}
static Image* images_active10_293_0_0[1];
static Direction direction_active10_293_0_0 = {0, 50, 50, 0, -1, images_active10_293_0_0, 1};
static Animation anim_active10_293_0 = {&direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, NULL, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0, &direction_active10_293_0_0};
static Image* images_active10_293_2_0[1];
static Direction direction_active10_293_2_0 = {0, 50, 50, 0, -1, images_active10_293_2_0, 1};
static Animation anim_active10_293_2 = {&direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, NULL, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0, &direction_active10_293_2_0};
static Animation * anim_array_active10_293[3] = {&anim_active10_293_0, NULL, &anim_active10_293_2};
static Animations anim_active10_293 = {3, &anim_array_active10_293[0]};
static bool anim_active10_293_initialized;
class Active10_293 : public Active
{
public:
    Active10_293(int x, int y) : Active(x, y, Active10_293_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Active 10", 9);
#endif
        this->animations = &anim_active10_293;
        if (!anim_active10_293_initialized) {
            anim_active10_293_initialized = true;
            images_active10_293_0_0[0] = get_internal_image(352);
            images_active10_293_2_0[0] = get_internal_image(87);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(1, 1);
        alterables->values.set(2, 100);
    }
};
FrameObject * create_active10_293(int x, int y)
{
    return new (Active::pool.create()) Active10_293(x, y);
}
static Image* images_sheetsposters_294_0_0[1];
static Direction direction_sheetsposters_294_0_0 = {0, 50, 50, 0, -1, images_sheetsposters_294_0_0, 1};
static Animation anim_sheetsposters_294_0 = {&direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, NULL, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0, &direction_sheetsposters_294_0_0};
static Image* images_sheetsposters_294_1_0[1];
static Direction direction_sheetsposters_294_1_0 = {0, 50, 50, 0, -1, images_sheetsposters_294_1_0, 1};
static Animation anim_sheetsposters_294_1 = {&direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, NULL, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0, &direction_sheetsposters_294_1_0};
static Animation * anim_array_sheetsposters_294[2] = {&anim_sheetsposters_294_0, &anim_sheetsposters_294_1};
static Animations anim_sheetsposters_294 = {2, &anim_array_sheetsposters_294[0]};
static bool anim_sheetsposters_294_initialized;
class SheetsPosters_294 : public Active
{
public:
    SheetsPosters_294(int x, int y) : Active(x, y, SheetsPosters_294_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Sheets + Posters", 16);
#endif
        this->animations = &anim_sheetsposters_294;
        if (!anim_sheetsposters_294_initialized) {
            anim_sheetsposters_294_initialized = true;
            images_sheetsposters_294_0_0[0] = get_internal_image(41);
            images_sheetsposters_294_1_0[0] = get_internal_image(727);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_sheetsposters_294(int x, int y)
{
    return new (Active::pool.create()) SheetsPosters_294(x, y);
}
class DEBUG_295 : public Text
{
public:
    DEBUG_295(int x, int y) : Text(x, y, DEBUG_295_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("DEBUG", 5);
#endif
        flags &= ~SCROLL;
        width = 240;
        height = 45;
        blend_color = Color(255, 104, 32);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("debug", 5));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_debug_295(int x, int y)
{
    return new (Text::pool.create()) DEBUG_295(x, y);
}
static Image* images_popupCloud_1_0[4];
static Direction direction_popupCloud_1_0 = {0, 10, 10, 3, -1, images_popupCloud_1_0, 4};
static Image* images_popupCloud_1_8[4];
static Direction direction_popupCloud_1_8 = {8, 10, 10, 3, -1, images_popupCloud_1_8, 4};
static Image* images_popupCloud_1_16[4];
static Direction direction_popupCloud_1_16 = {16, 10, 10, 3, -1, images_popupCloud_1_16, 4};
static Image* images_popupCloud_1_24[4];
static Direction direction_popupCloud_1_24 = {24, 10, 10, 3, -1, images_popupCloud_1_24, 4};
static Animation anim_popupCloud_1 = {&direction_popupCloud_1_0, &direction_popupCloud_1_0, &direction_popupCloud_1_0, &direction_popupCloud_1_0, NULL, &direction_popupCloud_1_8, &direction_popupCloud_1_8, &direction_popupCloud_1_8, &direction_popupCloud_1_8, &direction_popupCloud_1_8, &direction_popupCloud_1_8, &direction_popupCloud_1_8, NULL, &direction_popupCloud_1_16, &direction_popupCloud_1_16, &direction_popupCloud_1_16, &direction_popupCloud_1_16, &direction_popupCloud_1_16, &direction_popupCloud_1_16, &direction_popupCloud_1_16, NULL, &direction_popupCloud_1_24, &direction_popupCloud_1_24, &direction_popupCloud_1_24, &direction_popupCloud_1_24, &direction_popupCloud_1_24, &direction_popupCloud_1_24, &direction_popupCloud_1_24, NULL, &direction_popupCloud_1_0, &direction_popupCloud_1_0, &direction_popupCloud_1_0};
static Animation * anim_array_popupCloud[2] = {NULL, &anim_popupCloud_1};
static Animations anim_popupCloud = {2, &anim_array_popupCloud[0]};
static bool anim_popupCloud_initialized;
class popupCloud : public Active
{
public:
    popupCloud(int x, int y) : Active(x, y, popupCloud_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MOUSE1", 6);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_popupCloud;
        if (!anim_popupCloud_initialized) {
            anim_popupCloud_initialized = true;
            images_popupCloud_1_0[0] = get_internal_image(2388);
            images_popupCloud_1_0[1] = get_internal_image(2389);
            images_popupCloud_1_0[2] = get_internal_image(2388);
            images_popupCloud_1_0[3] = get_internal_image(2389);
            images_popupCloud_1_8[0] = get_internal_image(2386);
            images_popupCloud_1_8[1] = get_internal_image(2387);
            images_popupCloud_1_8[2] = get_internal_image(2386);
            images_popupCloud_1_8[3] = get_internal_image(2387);
            images_popupCloud_1_16[0] = get_internal_image(2390);
            images_popupCloud_1_16[1] = get_internal_image(2391);
            images_popupCloud_1_16[2] = get_internal_image(2390);
            images_popupCloud_1_16[3] = get_internal_image(2391);
            images_popupCloud_1_24[0] = get_internal_image(2384);
            images_popupCloud_1_24[1] = get_internal_image(2376);
            images_popupCloud_1_24[2] = get_internal_image(2384);
            images_popupCloud_1_24[3] = get_internal_image(2376);
        }
        active_flags |= TRANSPARENT;
        animation = WALKING;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 205);
        create_alterables();
        alterables->values.set(1, 250);
    }
};
FrameObject * create_popupCloud(int x, int y)
{
    return new (Active::pool.create()) popupCloud(x, y);
}
static Image* images_attacklooptarget_297_0_0[1];
static Direction direction_attacklooptarget_297_0_0 = {0, 50, 50, 0, -1, images_attacklooptarget_297_0_0, 1};
static Animation anim_attacklooptarget_297_0 = {&direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, NULL, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0, &direction_attacklooptarget_297_0_0};
static Image* images_attacklooptarget_297_1_0[1];
static Direction direction_attacklooptarget_297_1_0 = {0, 50, 50, 0, -1, images_attacklooptarget_297_1_0, 1};
static Image* images_attacklooptarget_297_1_8[1];
static Direction direction_attacklooptarget_297_1_8 = {8, 50, 50, 0, -1, images_attacklooptarget_297_1_8, 1};
static Image* images_attacklooptarget_297_1_16[1];
static Direction direction_attacklooptarget_297_1_16 = {16, 50, 50, 0, -1, images_attacklooptarget_297_1_16, 1};
static Image* images_attacklooptarget_297_1_24[1];
static Direction direction_attacklooptarget_297_1_24 = {24, 50, 50, 0, -1, images_attacklooptarget_297_1_24, 1};
static Animation anim_attacklooptarget_297_1 = {&direction_attacklooptarget_297_1_0, &direction_attacklooptarget_297_1_0, &direction_attacklooptarget_297_1_0, &direction_attacklooptarget_297_1_0, NULL, &direction_attacklooptarget_297_1_8, &direction_attacklooptarget_297_1_8, &direction_attacklooptarget_297_1_8, &direction_attacklooptarget_297_1_8, &direction_attacklooptarget_297_1_8, &direction_attacklooptarget_297_1_8, &direction_attacklooptarget_297_1_8, NULL, &direction_attacklooptarget_297_1_16, &direction_attacklooptarget_297_1_16, &direction_attacklooptarget_297_1_16, &direction_attacklooptarget_297_1_16, &direction_attacklooptarget_297_1_16, &direction_attacklooptarget_297_1_16, &direction_attacklooptarget_297_1_16, NULL, &direction_attacklooptarget_297_1_24, &direction_attacklooptarget_297_1_24, &direction_attacklooptarget_297_1_24, &direction_attacklooptarget_297_1_24, &direction_attacklooptarget_297_1_24, &direction_attacklooptarget_297_1_24, &direction_attacklooptarget_297_1_24, NULL, &direction_attacklooptarget_297_1_0, &direction_attacklooptarget_297_1_0, &direction_attacklooptarget_297_1_0};
static Image* images_attacklooptarget_297_5_0[1];
static Direction direction_attacklooptarget_297_5_0 = {0, 50, 50, 0, -1, images_attacklooptarget_297_5_0, 1};
static Animation anim_attacklooptarget_297_5 = {&direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, NULL, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0, &direction_attacklooptarget_297_5_0};
static Image* images_attacklooptarget_297_6_0[1];
static Direction direction_attacklooptarget_297_6_0 = {0, 50, 50, 0, -1, images_attacklooptarget_297_6_0, 1};
static Animation anim_attacklooptarget_297_6 = {&direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, NULL, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0, &direction_attacklooptarget_297_6_0};
static Animation * anim_array_attacklooptarget_297[7] = {&anim_attacklooptarget_297_0, &anim_attacklooptarget_297_1, NULL, NULL, NULL, &anim_attacklooptarget_297_5, &anim_attacklooptarget_297_6};
static Animations anim_attacklooptarget_297 = {7, &anim_array_attacklooptarget_297[0]};
static bool anim_attacklooptarget_297_initialized;
class AttackLoopTarget_297 : public Active
{
public:
    AttackLoopTarget_297(int x, int y) : Active(x, y, AttackLoopTarget_297_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AttackLoopTarget", 16);
#endif
        set_visible(false);
        this->animations = &anim_attacklooptarget_297;
        if (!anim_attacklooptarget_297_initialized) {
            anim_attacklooptarget_297_initialized = true;
            images_attacklooptarget_297_0_0[0] = get_internal_image(446);
            images_attacklooptarget_297_1_0[0] = get_internal_image(776);
            images_attacklooptarget_297_1_8[0] = get_internal_image(822);
            images_attacklooptarget_297_1_16[0] = get_internal_image(823);
            images_attacklooptarget_297_1_24[0] = get_internal_image(824);
            images_attacklooptarget_297_5_0[0] = get_internal_image(375);
            images_attacklooptarget_297_6_0[0] = get_internal_image(22);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_attacklooptarget_297(int x, int y)
{
    return new (Active::pool.create()) AttackLoopTarget_297(x, y);
}
class Missions_298 : public ListObject
{
public:
    Missions_298(int x, int y) : ListObject(x, y, Missions_298_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Missions", 8);
#endif
        flags &= ~SCROLL;
        set_visible(false);
        index_offset = current_line = -1;
    }
};
FrameObject * create_missions_298(int x, int y)
{
    return new (ListObject::pool.create()) Missions_298(x, y);
}
static Image* images_npcdetectortop_299_0_0[1];
static Direction direction_npcdetectortop_299_0_0 = {0, 50, 50, 0, 1, images_npcdetectortop_299_0_0, 1};
static Animation anim_npcdetectortop_299_0 = {&direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, NULL, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0, &direction_npcdetectortop_299_0_0};
static Animation * anim_array_npcdetectortop_299[1] = {&anim_npcdetectortop_299_0};
static Animations anim_npcdetectortop_299 = {1, &anim_array_npcdetectortop_299[0]};
static bool anim_npcdetectortop_299_initialized;
class NPCDetectorTOP_299 : public Active
{
public:
    NPCDetectorTOP_299(int x, int y) : Active(x, y, NPCDetectorTOP_299_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC detector TOP", 16);
#endif
        set_visible(false);
        this->animations = &anim_npcdetectortop_299;
        if (!anim_npcdetectortop_299_initialized) {
            anim_npcdetectortop_299_initialized = true;
            images_npcdetectortop_299_0_0[0] = get_internal_image(826);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_npcdetectortop_299(int x, int y)
{
    return new (Active::pool.create()) NPCDetectorTOP_299(x, y);
}
static Image* images_npcdetectorbottom_300_0_0[1];
static Direction direction_npcdetectorbottom_300_0_0 = {0, 50, 50, 0, 1, images_npcdetectorbottom_300_0_0, 1};
static Animation anim_npcdetectorbottom_300_0 = {&direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, NULL, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0, &direction_npcdetectorbottom_300_0_0};
static Animation * anim_array_npcdetectorbottom_300[1] = {&anim_npcdetectorbottom_300_0};
static Animations anim_npcdetectorbottom_300 = {1, &anim_array_npcdetectorbottom_300[0]};
static bool anim_npcdetectorbottom_300_initialized;
class NPCDetectorBOTTOM_300 : public Active
{
public:
    NPCDetectorBOTTOM_300(int x, int y) : Active(x, y, NPCDetectorBOTTOM_300_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC detector BOTTOM", 19);
#endif
        set_visible(false);
        this->animations = &anim_npcdetectorbottom_300;
        if (!anim_npcdetectorbottom_300_initialized) {
            anim_npcdetectorbottom_300_initialized = true;
            images_npcdetectorbottom_300_0_0[0] = get_internal_image(817);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_npcdetectorbottom_300(int x, int y)
{
    return new (Active::pool.create()) NPCDetectorBOTTOM_300(x, y);
}
static Image* images_npcdetectorleft_301_0_0[1];
static Direction direction_npcdetectorleft_301_0_0 = {0, 50, 50, 0, 1, images_npcdetectorleft_301_0_0, 1};
static Animation anim_npcdetectorleft_301_0 = {&direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, NULL, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0, &direction_npcdetectorleft_301_0_0};
static Animation * anim_array_npcdetectorleft_301[1] = {&anim_npcdetectorleft_301_0};
static Animations anim_npcdetectorleft_301 = {1, &anim_array_npcdetectorleft_301[0]};
static bool anim_npcdetectorleft_301_initialized;
class NPCDetectorLEFT_301 : public Active
{
public:
    NPCDetectorLEFT_301(int x, int y) : Active(x, y, NPCDetectorLEFT_301_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC detector LEFT", 17);
#endif
        set_visible(false);
        this->animations = &anim_npcdetectorleft_301;
        if (!anim_npcdetectorleft_301_initialized) {
            anim_npcdetectorleft_301_initialized = true;
            images_npcdetectorleft_301_0_0[0] = get_internal_image(805);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_npcdetectorleft_301(int x, int y)
{
    return new (Active::pool.create()) NPCDetectorLEFT_301(x, y);
}
static Image* images_npcdetectorright_302_0_0[1];
static Direction direction_npcdetectorright_302_0_0 = {0, 50, 50, 0, 1, images_npcdetectorright_302_0_0, 1};
static Animation anim_npcdetectorright_302_0 = {&direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, NULL, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0, &direction_npcdetectorright_302_0_0};
static Animation * anim_array_npcdetectorright_302[1] = {&anim_npcdetectorright_302_0};
static Animations anim_npcdetectorright_302 = {1, &anim_array_npcdetectorright_302[0]};
static bool anim_npcdetectorright_302_initialized;
class NPCDetectorRIGHT_302 : public Active
{
public:
    NPCDetectorRIGHT_302(int x, int y) : Active(x, y, NPCDetectorRIGHT_302_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC detector RIGHT", 18);
#endif
        set_visible(false);
        this->animations = &anim_npcdetectorright_302;
        if (!anim_npcdetectorright_302_initialized) {
            anim_npcdetectorright_302_initialized = true;
            images_npcdetectorright_302_0_0[0] = get_internal_image(808);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_npcdetectorright_302(int x, int y)
{
    return new (Active::pool.create()) NPCDetectorRIGHT_302(x, y);
}
static Image* images_water_303_0_0[4];
static Direction direction_water_303_0_0 = {0, 5, 5, 0, -1, images_water_303_0_0, 4};
static Animation anim_water_303_0 = {&direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, NULL, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0, &direction_water_303_0_0};
static Animation * anim_array_water_303[1] = {&anim_water_303_0};
static Animations anim_water_303 = {1, &anim_array_water_303[0]};
static bool anim_water_303_initialized;
class Water_303 : public Active
{
public:
    Water_303(int x, int y) : Active(x, y, Water_303_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Water", 5);
#endif
        this->animations = &anim_water_303;
        if (!anim_water_303_initialized) {
            anim_water_303_initialized = true;
            images_water_303_0_0[0] = get_internal_image(860);
            images_water_303_0_0[1] = get_internal_image(859);
            images_water_303_0_0[2] = get_internal_image(864);
            images_water_303_0_0[3] = get_internal_image(865);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 254);
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 4);
    }
};
FrameObject * create_water_303(int x, int y)
{
    return new (Active::pool.create()) Water_303(x, y);
}
static Image* images_active_304_0_0[1];
static Direction direction_active_304_0_0 = {0, 50, 50, 0, 1, images_active_304_0_0, 1};
static Animation anim_active_304_0 = {&direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, NULL, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0, &direction_active_304_0_0};
static Animation * anim_array_active_304[1] = {&anim_active_304_0};
static Animations anim_active_304 = {1, &anim_array_active_304[0]};
static bool anim_active_304_initialized;
class Active_304 : public Active
{
public:
    Active_304(int x, int y) : Active(x, y, Active_304_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active", 6);
#endif
        set_visible(false);
        this->animations = &anim_active_304;
        if (!anim_active_304_initialized) {
            anim_active_304_initialized = true;
            images_active_304_0_0[0] = get_internal_image(853);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_active_304(int x, int y)
{
    return new (Active::pool.create()) Active_304(x, y);
}
static Image* images_desks_305_0_8[1];
static Direction direction_desks_305_0_8 = {8, 50, 50, 0, -1, images_desks_305_0_8, 1};
static Image* images_desks_305_0_24[1];
static Direction direction_desks_305_0_24 = {24, 50, 50, 0, -1, images_desks_305_0_24, 1};
static Animation anim_desks_305_0 = {NULL, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, &direction_desks_305_0_8, NULL, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24, &direction_desks_305_0_24};
static Image* images_desks_305_5_8[1];
static Direction direction_desks_305_5_8 = {8, 50, 50, 0, -1, images_desks_305_5_8, 1};
static Image* images_desks_305_5_24[1];
static Direction direction_desks_305_5_24 = {24, 50, 50, 0, -1, images_desks_305_5_24, 1};
static Animation anim_desks_305_5 = {NULL, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, &direction_desks_305_5_8, NULL, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24, &direction_desks_305_5_24};
static Animation * anim_array_desks_305[6] = {&anim_desks_305_0, NULL, NULL, NULL, NULL, &anim_desks_305_5};
static Animations anim_desks_305 = {6, &anim_array_desks_305[0]};
static bool anim_desks_305_initialized;
class Desks_305 : public Active
{
public:
    Desks_305(int x, int y) : Active(x, y, Desks_305_type)
    {
        // qualifiers: 15, 63, 83
#ifndef NDEBUG
        name = std::string("Desks", 5);
#endif
        this->animations = &anim_desks_305;
        if (!anim_desks_305_initialized) {
            anim_desks_305_initialized = true;
            images_desks_305_0_8[0] = get_internal_image(162);
            images_desks_305_0_24[0] = get_internal_image(879);
            images_desks_305_5_8[0] = get_internal_image(2555);
            images_desks_305_5_24[0] = get_internal_image(2553);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(60);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 20;
        ((BallMovement*)movement)->init();
        create_alterables();
        alterables->values.set(0, -1);
        alterables->strings.set(0, str_celldesk_31);
        alterables->strings.set(1, str_desk_32);
    }
};
FrameObject * create_desks_305(int x, int y)
{
    return new (Active::pool.create()) Desks_305(x, y);
}
static Image* images_inmateBed_0_0[1];
static Direction direction_inmateBed_0_0 = {0, 50, 50, 0, -1, images_inmateBed_0_0, 1};
static Image* images_inmateBed_0_24[1];
static Direction direction_inmateBed_0_24 = {24, 50, 50, 0, -1, images_inmateBed_0_24, 1};
static Animation anim_inmateBed_0 = {&direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0, NULL, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, &direction_inmateBed_0_24, NULL, &direction_inmateBed_0_0, &direction_inmateBed_0_0, &direction_inmateBed_0_0};
static Image* images_inmateBed_1_0[1];
static Direction direction_inmateBed_1_0 = {0, 50, 50, 0, -1, images_inmateBed_1_0, 1};
static Image* images_inmateBed_1_24[1];
static Direction direction_inmateBed_1_24 = {24, 50, 50, 0, -1, images_inmateBed_1_24, 1};
static Animation anim_inmateBed_1 = {&direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0, NULL, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, &direction_inmateBed_1_24, NULL, &direction_inmateBed_1_0, &direction_inmateBed_1_0, &direction_inmateBed_1_0};
static Image* images_inmateBed_2_0[1];
static Direction direction_inmateBed_2_0 = {0, 50, 50, 0, -1, images_inmateBed_2_0, 1};
static Image* images_inmateBed_2_24[1];
static Direction direction_inmateBed_2_24 = {24, 50, 50, 0, -1, images_inmateBed_2_24, 1};
static Animation anim_inmateBed_2 = {&direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0, NULL, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, &direction_inmateBed_2_24, NULL, &direction_inmateBed_2_0, &direction_inmateBed_2_0, &direction_inmateBed_2_0};
static Animation* anim_array_inmateBed[3] = {&anim_inmateBed_0, &anim_inmateBed_1, &anim_inmateBed_2};
static Animations anim_inmateBed = {3, &anim_array_inmateBed[0]};
static bool anim_inmateBed_initialized;
class InmateBed : public Active {
public:
    InmateBed(int x, int y) : Active(x, y, inmateBed_type) {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Bed - NPC", 9);
#endif
        this->animations = &anim_inmateBed;
        if (!anim_inmateBed_initialized) {
            anim_inmateBed_initialized = true;
            images_inmateBed_0_0[0] = get_internal_image(2458);
            images_inmateBed_0_24[0] = get_internal_image(2456);
            images_inmateBed_1_0[0] = get_internal_image(2475);
            images_inmateBed_1_24[0] = get_internal_image(2463);
            images_inmateBed_2_0[0] = get_internal_image(2477);
            images_inmateBed_2_24[0] = get_internal_image(2464);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject* create_inmateBed(int x, int y) {
    return new (Active::pool.create()) InmateBed(x, y);
}
static Image* images_toilet2_307_0_0[1];
static Direction direction_toilet2_307_0_0 = {0, 50, 50, 0, -1, images_toilet2_307_0_0, 1};
static Image* images_toilet2_307_0_16[1];
static Direction direction_toilet2_307_0_16 = {16, 50, 50, 0, -1, images_toilet2_307_0_16, 1};
static Image* images_toilet2_307_0_24[1];
static Direction direction_toilet2_307_0_24 = {24, 50, 50, 0, -1, images_toilet2_307_0_24, 1};
static Animation anim_toilet2_307_0 = {&direction_toilet2_307_0_0, &direction_toilet2_307_0_0, &direction_toilet2_307_0_0, &direction_toilet2_307_0_0, &direction_toilet2_307_0_0, &direction_toilet2_307_0_0, &direction_toilet2_307_0_0, &direction_toilet2_307_0_0, NULL, &direction_toilet2_307_0_16, &direction_toilet2_307_0_16, &direction_toilet2_307_0_16, &direction_toilet2_307_0_16, &direction_toilet2_307_0_16, &direction_toilet2_307_0_16, &direction_toilet2_307_0_16, &direction_toilet2_307_0_16, &direction_toilet2_307_0_16, &direction_toilet2_307_0_16, &direction_toilet2_307_0_16, NULL, &direction_toilet2_307_0_24, &direction_toilet2_307_0_24, &direction_toilet2_307_0_24, &direction_toilet2_307_0_24, &direction_toilet2_307_0_24, &direction_toilet2_307_0_24, &direction_toilet2_307_0_24, NULL, &direction_toilet2_307_0_0, &direction_toilet2_307_0_0, &direction_toilet2_307_0_0};
static Image* images_toilet2_307_1_0[3];
static Direction direction_toilet2_307_1_0 = {0, 5, 5, 2, -1, images_toilet2_307_1_0, 3};
static Image* images_toilet2_307_1_16[3];
static Direction direction_toilet2_307_1_16 = {16, 5, 5, 2, -1, images_toilet2_307_1_16, 3};
static Image* images_toilet2_307_1_24[1];
static Direction direction_toilet2_307_1_24 = {24, 50, 50, 0, -1, images_toilet2_307_1_24, 1};
static Animation anim_toilet2_307_1 = {&direction_toilet2_307_1_0, &direction_toilet2_307_1_0, &direction_toilet2_307_1_0, &direction_toilet2_307_1_0, &direction_toilet2_307_1_0, &direction_toilet2_307_1_0, &direction_toilet2_307_1_0, &direction_toilet2_307_1_0, NULL, &direction_toilet2_307_1_16, &direction_toilet2_307_1_16, &direction_toilet2_307_1_16, &direction_toilet2_307_1_16, &direction_toilet2_307_1_16, &direction_toilet2_307_1_16, &direction_toilet2_307_1_16, &direction_toilet2_307_1_16, &direction_toilet2_307_1_16, &direction_toilet2_307_1_16, &direction_toilet2_307_1_16, NULL, &direction_toilet2_307_1_24, &direction_toilet2_307_1_24, &direction_toilet2_307_1_24, &direction_toilet2_307_1_24, &direction_toilet2_307_1_24, &direction_toilet2_307_1_24, &direction_toilet2_307_1_24, NULL, &direction_toilet2_307_1_0, &direction_toilet2_307_1_0, &direction_toilet2_307_1_0};
static Image* images_toilet2_307_5_0[1];
static Direction direction_toilet2_307_5_0 = {0, 50, 50, 0, -1, images_toilet2_307_5_0, 1};
static Image* images_toilet2_307_5_16[1];
static Direction direction_toilet2_307_5_16 = {16, 50, 50, 0, -1, images_toilet2_307_5_16, 1};
static Image* images_toilet2_307_5_24[1];
static Direction direction_toilet2_307_5_24 = {24, 50, 50, 0, -1, images_toilet2_307_5_24, 1};
static Animation anim_toilet2_307_5 = {&direction_toilet2_307_5_0, &direction_toilet2_307_5_0, &direction_toilet2_307_5_0, &direction_toilet2_307_5_0, &direction_toilet2_307_5_0, &direction_toilet2_307_5_0, &direction_toilet2_307_5_0, &direction_toilet2_307_5_0, NULL, &direction_toilet2_307_5_16, &direction_toilet2_307_5_16, &direction_toilet2_307_5_16, &direction_toilet2_307_5_16, &direction_toilet2_307_5_16, &direction_toilet2_307_5_16, &direction_toilet2_307_5_16, &direction_toilet2_307_5_16, &direction_toilet2_307_5_16, &direction_toilet2_307_5_16, &direction_toilet2_307_5_16, NULL, &direction_toilet2_307_5_24, &direction_toilet2_307_5_24, &direction_toilet2_307_5_24, &direction_toilet2_307_5_24, &direction_toilet2_307_5_24, &direction_toilet2_307_5_24, &direction_toilet2_307_5_24, NULL, &direction_toilet2_307_5_0, &direction_toilet2_307_5_0, &direction_toilet2_307_5_0};
static Animation * anim_array_toilet2_307[6] = {&anim_toilet2_307_0, &anim_toilet2_307_1, NULL, NULL, NULL, &anim_toilet2_307_5};
static Animations anim_toilet2_307 = {6, &anim_array_toilet2_307[0]};
static bool anim_toilet2_307_initialized;
class Toilet2_307 : public Active
{
public:
    Toilet2_307(int x, int y) : Active(x, y, Toilet2_307_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Toilet 2", 8);
#endif
        this->animations = &anim_toilet2_307;
        if (!anim_toilet2_307_initialized) {
            anim_toilet2_307_initialized = true;
            images_toilet2_307_0_0[0] = get_internal_image(93);
            images_toilet2_307_0_16[0] = get_internal_image(85);
            images_toilet2_307_0_24[0] = get_internal_image(2410);
            images_toilet2_307_1_0[0] = get_internal_image(97);
            images_toilet2_307_1_0[1] = get_internal_image(99);
            images_toilet2_307_1_0[2] = get_internal_image(33);
            images_toilet2_307_1_16[0] = get_internal_image(112);
            images_toilet2_307_1_16[1] = get_internal_image(103);
            images_toilet2_307_1_16[2] = get_internal_image(35);
            images_toilet2_307_1_24[0] = get_internal_image(2411);
            images_toilet2_307_5_0[0] = get_internal_image(762);
            images_toilet2_307_5_16[0] = get_internal_image(759);
            images_toilet2_307_5_24[0] = get_internal_image(2398);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_toilet2_307(int x, int y)
{
    return new (Active::pool.create()) Toilet2_307(x, y);
}
static Image* images_table2_308_0_0[1];
static Direction direction_table2_308_0_0 = {0, 50, 50, 0, -1, images_table2_308_0_0, 1};
static Image* images_table2_308_0_24[1];
static Direction direction_table2_308_0_24 = {24, 50, 50, 0, -1, images_table2_308_0_24, 1};
static Animation anim_table2_308_0 = {&direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0, NULL, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, &direction_table2_308_0_24, NULL, &direction_table2_308_0_0, &direction_table2_308_0_0, &direction_table2_308_0_0};
static Animation * anim_array_table2_308[1] = {&anim_table2_308_0};
static Animations anim_table2_308 = {1, &anim_array_table2_308[0]};
static bool anim_table2_308_initialized;
class Table2_308 : public Active
{
public:
    Table2_308(int x, int y) : Active(x, y, Table2_308_type)
    {
        // qualifiers: 49, 62, 63
#ifndef NDEBUG
        name = std::string("Table 2", 7);
#endif
        this->animations = &anim_table2_308;
        if (!anim_table2_308_initialized) {
            anim_table2_308_initialized = true;
            images_table2_308_0_0[0] = get_internal_image(2510);
            images_table2_308_0_24[0] = get_internal_image(2560);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(1, 1);
    }
};
FrameObject * create_table2_308(int x, int y)
{
    return new (Active::pool.create()) Table2_308(x, y);
}
static Image* images_waypointinmateshower2_309_0_0[1];
static Direction direction_waypointinmateshower2_309_0_0 = {0, 50, 50, 0, 1, images_waypointinmateshower2_309_0_0, 1};
static Animation anim_waypointinmateshower2_309_0 = {&direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, NULL, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0, &direction_waypointinmateshower2_309_0_0};
static Animation * anim_array_waypointinmateshower2_309[1] = {&anim_waypointinmateshower2_309_0};
static Animations anim_waypointinmateshower2_309 = {1, &anim_array_waypointinmateshower2_309[0]};
static bool anim_waypointinmateshower2_309_initialized;
class WaypointInmateShower2_309 : public Active
{
public:
    WaypointInmateShower2_309(int x, int y) : Active(x, y, WaypointInmateShower2_309_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Inmate Shower 2", 26);
#endif
        set_visible(false);
        this->animations = &anim_waypointinmateshower2_309;
        if (!anim_waypointinmateshower2_309_initialized) {
            anim_waypointinmateshower2_309_initialized = true;
            images_waypointinmateshower2_309_0_0[0] = get_internal_image(883);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointinmateshower2_309(int x, int y)
{
    return new (Active::pool.create()) WaypointInmateShower2_309(x, y);
}
static Image* images_waypointinmaterollcall2_310_0_0[1];
static Direction direction_waypointinmaterollcall2_310_0_0 = {0, 50, 50, 0, 1, images_waypointinmaterollcall2_310_0_0, 1};
static Animation anim_waypointinmaterollcall2_310_0 = {&direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, NULL, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0, &direction_waypointinmaterollcall2_310_0_0};
static Animation * anim_array_waypointinmaterollcall2_310[1] = {&anim_waypointinmaterollcall2_310_0};
static Animations anim_waypointinmaterollcall2_310 = {1, &anim_array_waypointinmaterollcall2_310[0]};
static bool anim_waypointinmaterollcall2_310_initialized;
class WaypointInmateRollcall2_310 : public Active
{
public:
    WaypointInmateRollcall2_310(int x, int y) : Active(x, y, WaypointInmateRollcall2_310_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Inmate Rollcall 2", 28);
#endif
        set_visible(false);
        this->animations = &anim_waypointinmaterollcall2_310;
        if (!anim_waypointinmaterollcall2_310_initialized) {
            anim_waypointinmaterollcall2_310_initialized = true;
            images_waypointinmaterollcall2_310_0_0[0] = get_internal_image(884);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointinmaterollcall2_310(int x, int y)
{
    return new (Active::pool.create()) WaypointInmateRollcall2_310(x, y);
}
static Image* images_waypointinmate2_311_0_0[1];
static Direction direction_waypointinmate2_311_0_0 = {0, 50, 50, 0, 1, images_waypointinmate2_311_0_0, 1};
static Animation anim_waypointinmate2_311_0 = {&direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, NULL, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0, &direction_waypointinmate2_311_0_0};
static Animation * anim_array_waypointinmate2_311[1] = {&anim_waypointinmate2_311_0};
static Animations anim_waypointinmate2_311 = {1, &anim_array_waypointinmate2_311[0]};
static bool anim_waypointinmate2_311_initialized;
class WaypointInmate2_311 : public Active
{
public:
    WaypointInmate2_311(int x, int y) : Active(x, y, WaypointInmate2_311_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Inmate 2", 19);
#endif
        set_visible(false);
        this->animations = &anim_waypointinmate2_311;
        if (!anim_waypointinmate2_311_initialized) {
            anim_waypointinmate2_311_initialized = true;
            images_waypointinmate2_311_0_0[0] = get_internal_image(885);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointinmate2_311(int x, int y)
{
    return new (Active::pool.create()) WaypointInmate2_311(x, y);
}
static Image* images_canteenchair_312_0_8[1];
static Direction direction_canteenchair_312_0_8 = {8, 50, 50, 0, -1, images_canteenchair_312_0_8, 1};
static Image* images_canteenchair_312_0_24[1];
static Direction direction_canteenchair_312_0_24 = {24, 50, 50, 0, -1, images_canteenchair_312_0_24, 1};
static Animation anim_canteenchair_312_0 = {NULL, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, &direction_canteenchair_312_0_8, NULL, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24, &direction_canteenchair_312_0_24};
static Image* images_canteenchair_312_5_8[1];
static Direction direction_canteenchair_312_5_8 = {8, 50, 50, 0, -1, images_canteenchair_312_5_8, 1};
static Image* images_canteenchair_312_5_24[1];
static Direction direction_canteenchair_312_5_24 = {24, 50, 50, 0, -1, images_canteenchair_312_5_24, 1};
static Animation anim_canteenchair_312_5 = {NULL, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, &direction_canteenchair_312_5_8, NULL, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24, &direction_canteenchair_312_5_24};
static Animation * anim_array_canteenchair_312[6] = {&anim_canteenchair_312_0, NULL, NULL, NULL, NULL, &anim_canteenchair_312_5};
static Animations anim_canteenchair_312 = {6, &anim_array_canteenchair_312[0]};
static bool anim_canteenchair_312_initialized;
class CanteenChair_312 : public Active
{
public:
    CanteenChair_312(int x, int y) : Active(x, y, CanteenChair_312_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Canteen chair", 13);
#endif
        this->animations = &anim_canteenchair_312;
        if (!anim_canteenchair_312_initialized) {
            anim_canteenchair_312_initialized = true;
            images_canteenchair_312_0_8[0] = get_internal_image(107);
            images_canteenchair_312_0_24[0] = get_internal_image(858);
            images_canteenchair_312_5_8[0] = get_internal_image(2645);
            images_canteenchair_312_5_24[0] = get_internal_image(2747);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_canteenchair_312(int x, int y)
{
    return new (Active::pool.create()) CanteenChair_312(x, y);
}
static Image* images_washing2_313_0_0[1];
static Direction direction_washing2_313_0_0 = {0, 50, 50, 0, 1, images_washing2_313_0_0, 1};
static Animation anim_washing2_313_0 = {&direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, NULL, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0, &direction_washing2_313_0_0};
static Image* images_washing2_313_1_0[4];
static Direction direction_washing2_313_1_0 = {0, 30, 30, 0, -1, images_washing2_313_1_0, 4};
static Animation anim_washing2_313_1 = {&direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, NULL, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0, &direction_washing2_313_1_0};
static Image* images_washing2_313_5_0[2];
static Direction direction_washing2_313_5_0 = {0, 10, 10, 0, -1, images_washing2_313_5_0, 2};
static Animation anim_washing2_313_5 = {&direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, NULL, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0, &direction_washing2_313_5_0};
static Animation * anim_array_washing2_313[6] = {&anim_washing2_313_0, &anim_washing2_313_1, NULL, NULL, NULL, &anim_washing2_313_5};
static Animations anim_washing2_313 = {6, &anim_array_washing2_313[0]};
static bool anim_washing2_313_initialized;
class Washing2_313 : public Active
{
public:
    Washing2_313(int x, int y) : Active(x, y, Washing2_313_type)
    {
        // qualifiers: 15, 80, 88
#ifndef NDEBUG
        name = std::string("Washing 2", 9);
#endif
        this->animations = &anim_washing2_313;
        if (!anim_washing2_313_initialized) {
            anim_washing2_313_initialized = true;
            images_washing2_313_0_0[0] = get_internal_image(910);
            images_washing2_313_1_0[0] = get_internal_image(912);
            images_washing2_313_1_0[1] = get_internal_image(919);
            images_washing2_313_1_0[2] = get_internal_image(918);
            images_washing2_313_1_0[3] = get_internal_image(920);
            images_washing2_313_5_0[0] = get_internal_image(861);
            images_washing2_313_5_0[1] = get_internal_image(871);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_washing2_313(int x, int y)
{
    return new (Active::pool.create()) Washing2_313(x, y);
}
static Image* images_oven2_314_0_0[2];
static Direction direction_oven2_314_0_0 = {0, 50, 50, 0, 1, images_oven2_314_0_0, 2};
static Animation anim_oven2_314_0 = {&direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, NULL, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0, &direction_oven2_314_0_0};
static Image* images_oven2_314_1_0[2];
static Direction direction_oven2_314_1_0 = {0, 40, 40, 0, -1, images_oven2_314_1_0, 2};
static Animation anim_oven2_314_1 = {&direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, NULL, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0, &direction_oven2_314_1_0};
static Image* images_oven2_314_5_0[2];
static Direction direction_oven2_314_5_0 = {0, 10, 10, 0, -1, images_oven2_314_5_0, 2};
static Animation anim_oven2_314_5 = {&direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, NULL, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0, &direction_oven2_314_5_0};
static Animation * anim_array_oven2_314[6] = {&anim_oven2_314_0, &anim_oven2_314_1, NULL, NULL, NULL, &anim_oven2_314_5};
static Animations anim_oven2_314 = {6, &anim_array_oven2_314[0]};
static bool anim_oven2_314_initialized;
class Oven2_314 : public Active
{
public:
    Oven2_314(int x, int y) : Active(x, y, Oven2_314_type)
    {
        // qualifiers: 15, 80, 88
#ifndef NDEBUG
        name = std::string("Oven 2", 6);
#endif
        this->animations = &anim_oven2_314;
        if (!anim_oven2_314_initialized) {
            anim_oven2_314_initialized = true;
            images_oven2_314_0_0[0] = get_internal_image(909);
            images_oven2_314_0_0[1] = get_internal_image(909);
            images_oven2_314_1_0[0] = get_internal_image(911);
            images_oven2_314_1_0[1] = get_internal_image(771);
            images_oven2_314_5_0[0] = get_internal_image(877);
            images_oven2_314_5_0[1] = get_internal_image(872);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_oven2_314(int x, int y)
{
    return new (Active::pool.create()) Oven2_314(x, y);
}
static Image* images_waypointguard2_315_0_0[1];
static Direction direction_waypointguard2_315_0_0 = {0, 50, 50, 0, 1, images_waypointguard2_315_0_0, 1};
static Animation anim_waypointguard2_315_0 = {&direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, NULL, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0, &direction_waypointguard2_315_0_0};
static Animation * anim_array_waypointguard2_315[1] = {&anim_waypointguard2_315_0};
static Animations anim_waypointguard2_315 = {1, &anim_array_waypointguard2_315[0]};
static bool anim_waypointguard2_315_initialized;
class WaypointGuard2_315 : public Active
{
public:
    WaypointGuard2_315(int x, int y) : Active(x, y, WaypointGuard2_315_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Guard 2", 18);
#endif
        set_visible(false);
        this->animations = &anim_waypointguard2_315;
        if (!anim_waypointguard2_315_initialized) {
            anim_waypointguard2_315_initialized = true;
            images_waypointguard2_315_0_0[0] = get_internal_image(886);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointguard2_315(int x, int y)
{
    return new (Active::pool.create()) WaypointGuard2_315(x, y);
}
static Image* images_library2_316_0_0[1];
static Direction direction_library2_316_0_0 = {0, 50, 50, 0, 1, images_library2_316_0_0, 1};
static Animation anim_library2_316_0 = {&direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, NULL, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0, &direction_library2_316_0_0};
static Animation * anim_array_library2_316[1] = {&anim_library2_316_0};
static Animations anim_library2_316 = {1, &anim_array_library2_316[0]};
static bool anim_library2_316_initialized;
class Library2_316 : public Active
{
public:
    Library2_316(int x, int y) : Active(x, y, Library2_316_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("Library 2", 9);
#endif
        this->animations = &anim_library2_316;
        if (!anim_library2_316_initialized) {
            anim_library2_316_initialized = true;
            images_library2_316_0_0[0] = get_internal_image(878);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_library2_316(int x, int y)
{
    return new (Active::pool.create()) Library2_316(x, y);
}
static Image* images_gym3_317_0_0[1];
static Direction direction_gym3_317_0_0 = {0, 50, 50, 0, 1, images_gym3_317_0_0, 1};
static Animation anim_gym3_317_0 = {&direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, NULL, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0, &direction_gym3_317_0_0};
static Animation * anim_array_gym3_317[1] = {&anim_gym3_317_0};
static Animations anim_gym3_317 = {1, &anim_array_gym3_317[0]};
static bool anim_gym3_317_initialized;
class Gym3_317 : public Active
{
public:
    Gym3_317(int x, int y) : Active(x, y, Gym3_317_type)
    {
        // qualifiers: 28, 93
#ifndef NDEBUG
        name = std::string("Gym 3", 5);
#endif
        this->animations = &anim_gym3_317;
        if (!anim_gym3_317_initialized) {
            anim_gym3_317_initialized = true;
            images_gym3_317_0_0[0] = get_internal_image(882);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_treadmill_33);
    }
};
FrameObject * create_gym3_317(int x, int y)
{
    return new (Active::pool.create()) Gym3_317(x, y);
}
static Image* images_gym4_318_0_0[1];
static Direction direction_gym4_318_0_0 = {0, 50, 50, 0, 1, images_gym4_318_0_0, 1};
static Animation anim_gym4_318_0 = {&direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, NULL, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0, &direction_gym4_318_0_0};
static Image* images_gym4_318_1_0[1];
static Direction direction_gym4_318_1_0 = {0, 50, 50, 0, -1, images_gym4_318_1_0, 1};
static Animation anim_gym4_318_1 = {&direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, NULL, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0, &direction_gym4_318_1_0};
static Animation * anim_array_gym4_318[2] = {&anim_gym4_318_0, &anim_gym4_318_1};
static Animations anim_gym4_318 = {2, &anim_array_gym4_318[0]};
static bool anim_gym4_318_initialized;
class Gym4_318 : public Active
{
public:
    Gym4_318(int x, int y) : Active(x, y, Gym4_318_type)
    {
        // qualifiers: 28, 93
#ifndef NDEBUG
        name = std::string("Gym 4", 5);
#endif
        this->animations = &anim_gym4_318;
        if (!anim_gym4_318_initialized) {
            anim_gym4_318_initialized = true;
            images_gym4_318_0_0[0] = get_internal_image(880);
            images_gym4_318_1_0[0] = get_internal_image(881);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_weights_34);
    }
};
FrameObject * create_gym4_318(int x, int y)
{
    return new (Active::pool.create()) Gym4_318(x, y);
}
