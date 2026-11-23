#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_patroljeepwpup_419_0_8[1];
static Direction direction_patroljeepwpup_419_0_8 = {8, 50, 50, 0, -1, images_patroljeepwpup_419_0_8, 1};
static Animation anim_patroljeepwpup_419_0 = {&direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, NULL, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8, &direction_patroljeepwpup_419_0_8};
static Animation * anim_array_patroljeepwpup_419[1] = {&anim_patroljeepwpup_419_0};
static Animations anim_patroljeepwpup_419 = {1, &anim_array_patroljeepwpup_419[0]};
static bool anim_patroljeepwpup_419_initialized;
class PatrolJeepWPUp_419 : public Active
{
public:
    PatrolJeepWPUp_419(int x, int y) : Active(x, y, PatrolJeepWPUp_419_type)
    {
        // qualifiers: 92
#ifndef NDEBUG
        name = std::string("Patrol Jeep WP - Up", 19);
#endif
        set_visible(false);
        this->animations = &anim_patroljeepwpup_419;
        if (!anim_patroljeepwpup_419_initialized) {
            anim_patroljeepwpup_419_initialized = true;
            images_patroljeepwpup_419_0_8[0] = get_internal_image(1530);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_patroljeepwpup_419(int x, int y)
{
    return new (Active::pool.create()) PatrolJeepWPUp_419(x, y);
}
static Image* images_stash_420_0_0[9];
static Direction direction_stash_420_0_0 = {0, 10, 10, 0, -1, images_stash_420_0_0, 9};
static Image* images_stash_420_0_16[1];
static Direction direction_stash_420_0_16 = {16, 50, 50, 0, -1, images_stash_420_0_16, 1};
static Animation anim_stash_420_0 = {&direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0, NULL, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, &direction_stash_420_0_16, NULL, &direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0, &direction_stash_420_0_0};
static Image* images_stash_420_4_0[2];
static Direction direction_stash_420_4_0 = {0, 15, 15, 0, 5, images_stash_420_4_0, 2};
static Image* images_stash_420_4_16[2];
static Direction direction_stash_420_4_16 = {16, 15, 15, 0, 5, images_stash_420_4_16, 2};
static Animation anim_stash_420_4 = {&direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0, NULL, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, &direction_stash_420_4_16, NULL, &direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0, &direction_stash_420_4_0};
static Animation * anim_array_stash_420[5] = {&anim_stash_420_0, NULL, NULL, NULL, &anim_stash_420_4};
static Animations anim_stash_420 = {5, &anim_array_stash_420[0]};
static bool anim_stash_420_initialized;
class Stash_420 : public Active
{
public:
    Stash_420(int x, int y) : Active(x, y, Stash_420_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Stash", 5);
#endif
        this->animations = &anim_stash_420;
        if (!anim_stash_420_initialized) {
            anim_stash_420_initialized = true;
            images_stash_420_0_0[0] = get_internal_image(1574);
            images_stash_420_0_0[1] = get_internal_image(1576);
            images_stash_420_0_0[2] = get_internal_image(1577);
            images_stash_420_0_0[3] = get_internal_image(1575);
            images_stash_420_0_0[4] = get_internal_image(1575);
            images_stash_420_0_0[5] = get_internal_image(1575);
            images_stash_420_0_0[6] = get_internal_image(1575);
            images_stash_420_0_0[7] = get_internal_image(1575);
            images_stash_420_0_0[8] = get_internal_image(1575);
            images_stash_420_0_16[0] = get_internal_image(1807);
            images_stash_420_4_0[0] = get_internal_image(1578);
            images_stash_420_4_0[1] = get_internal_image(1580);
            images_stash_420_4_16[0] = get_internal_image(1807);
            images_stash_420_4_16[1] = get_internal_image(1580);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_stash_420(int x, int y)
{
    return new (Active::pool.create()) Stash_420(x, y);
}
static Image* images_medicspot_421_0_8[1];
static Direction direction_medicspot_421_0_8 = {8, 50, 50, 0, -1, images_medicspot_421_0_8, 1};
static Animation anim_medicspot_421_0 = {&direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, NULL, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8, &direction_medicspot_421_0_8};
static Animation * anim_array_medicspot_421[1] = {&anim_medicspot_421_0};
static Animations anim_medicspot_421 = {1, &anim_array_medicspot_421[0]};
static bool anim_medicspot_421_initialized;
class MedicSpot_421 : public Active
{
public:
    MedicSpot_421(int x, int y) : Active(x, y, MedicSpot_421_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("medic spot", 10);
#endif
        set_visible(false);
        this->animations = &anim_medicspot_421;
        if (!anim_medicspot_421_initialized) {
            anim_medicspot_421_initialized = true;
            images_medicspot_421_0_8[0] = get_internal_image(243);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_medicspot_421(int x, int y)
{
    return new (Active::pool.create()) MedicSpot_421(x, y);
}
static Image* images_checkpoint_422_0_0[1];
static Direction direction_checkpoint_422_0_0 = {0, 50, 50, 0, 1, images_checkpoint_422_0_0, 1};
static Animation anim_checkpoint_422_0 = {&direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, NULL, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0, &direction_checkpoint_422_0_0};
static Animation * anim_array_checkpoint_422[1] = {&anim_checkpoint_422_0};
static Animations anim_checkpoint_422 = {1, &anim_array_checkpoint_422[0]};
static bool anim_checkpoint_422_initialized;
class Checkpoint_422 : public Active
{
public:
    Checkpoint_422(int x, int y) : Active(x, y, Checkpoint_422_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Checkpoint", 10);
#endif
        this->animations = &anim_checkpoint_422;
        if (!anim_checkpoint_422_initialized) {
            anim_checkpoint_422_initialized = true;
            images_checkpoint_422_0_0[0] = get_internal_image(1794);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_checkpoint_422(int x, int y)
{
    return new (Active::pool.create()) Checkpoint_422(x, y);
}
static Image* images_checkpointguard_423_0_8[2];
static Direction direction_checkpointguard_423_0_8 = {8, 10, 10, 0, -1, images_checkpointguard_423_0_8, 2};
static Animation anim_checkpointguard_423_0 = {&direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, NULL, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8, &direction_checkpointguard_423_0_8};
static Animation * anim_array_checkpointguard_423[1] = {&anim_checkpointguard_423_0};
static Animations anim_checkpointguard_423 = {1, &anim_array_checkpointguard_423[0]};
static bool anim_checkpointguard_423_initialized;
class CheckpointGuard_423 : public Active
{
public:
    CheckpointGuard_423(int x, int y) : Active(x, y, CheckpointGuard_423_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Checkpoint - Guard", 18);
#endif
        this->animations = &anim_checkpointguard_423;
        if (!anim_checkpointguard_423_initialized) {
            anim_checkpointguard_423_initialized = true;
            images_checkpointguard_423_0_8[0] = get_internal_image(2113);
            images_checkpointguard_423_0_8[1] = get_internal_image(2122);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_checkpointguard_423(int x, int y)
{
    return new (Active::pool.create()) CheckpointGuard_423(x, y);
}
static Image* images_cake_424_0_16[1];
static Direction direction_cake_424_0_16 = {16, 50, 50, 0, -1, images_cake_424_0_16, 1};
static Animation anim_cake_424_0 = {NULL, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16, &direction_cake_424_0_16};
static Image* images_cake_424_4_16[2];
static Direction direction_cake_424_4_16 = {16, 15, 15, 0, 5, images_cake_424_4_16, 2};
static Animation anim_cake_424_4 = {NULL, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16, &direction_cake_424_4_16};
static Animation * anim_array_cake_424[5] = {&anim_cake_424_0, NULL, NULL, NULL, &anim_cake_424_4};
static Animations anim_cake_424 = {5, &anim_array_cake_424[0]};
static bool anim_cake_424_initialized;
class Cake_424 : public Active
{
public:
    Cake_424(int x, int y) : Active(x, y, Cake_424_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Cake", 4);
#endif
        this->animations = &anim_cake_424;
        if (!anim_cake_424_initialized) {
            anim_cake_424_initialized = true;
            images_cake_424_0_16[0] = get_internal_image(2124);
            images_cake_424_4_16[0] = get_internal_image(2124);
            images_cake_424_4_16[1] = get_internal_image(1580);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_cake_424(int x, int y)
{
    return new (Active::pool.create()) Cake_424(x, y);
}
class UndergroundTileRow : public StringTokenizer
{
public:
    UndergroundTileRow(int x, int y) : StringTokenizer(x, y, undergroundTileRow_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("uground", 7);
#endif
    }
};
FrameObject * create_undergroundTileRow(int x, int y)
{
    return new (StringTokenizer::pool.create()) UndergroundTileRow(x, y);
}
static Image* images_tempplant_426_0_0[1];
static Direction direction_tempplant_426_0_0 = {0, 50, 50, 0, -1, images_tempplant_426_0_0, 1};
static Animation anim_tempplant_426_0 = {&direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, NULL, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0, &direction_tempplant_426_0_0};
static Animation * anim_array_tempplant_426[1] = {&anim_tempplant_426_0};
static Animations anim_tempplant_426 = {1, &anim_array_tempplant_426[0]};
static bool anim_tempplant_426_initialized;
class TempPLANT_426 : public Active
{
public:
    TempPLANT_426(int x, int y) : Active(x, y, TempPLANT_426_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("tempPLANT", 9);
#endif
        set_visible(false);
        this->animations = &anim_tempplant_426;
        if (!anim_tempplant_426_initialized) {
            anim_tempplant_426_initialized = true;
            images_tempplant_426_0_0[0] = get_internal_image(3342);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_tempplant_426(int x, int y)
{
    return new (Active::pool.create()) TempPLANT_426(x, y);
}
class TempList_427 : public ListObject
{
public:
    TempList_427(int x, int y) : ListObject(x, y, TempList_427_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("tempList", 8);
#endif
        flags &= ~SCROLL;
        index_offset = current_line = 0;
    }
};
FrameObject * create_templist_427(int x, int y)
{
    return new (ListObject::pool.create()) TempList_427(x, y);
}
static Image* images_usespot3_428_0_0[1];
static Direction direction_usespot3_428_0_0 = {0, 5, 5, 0, -1, images_usespot3_428_0_0, 1};
static Animation anim_usespot3_428_0 = {&direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, NULL, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0, &direction_usespot3_428_0_0};
static Animation * anim_array_usespot3_428[1] = {&anim_usespot3_428_0};
static Animations anim_usespot3_428 = {1, &anim_array_usespot3_428[0]};
static bool anim_usespot3_428_initialized;
class UseSpot3_428 : public Active
{
public:
    UseSpot3_428(int x, int y) : Active(x, y, UseSpot3_428_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("UseSpot 3", 9);
#endif
        this->animations = &anim_usespot3_428;
        if (!anim_usespot3_428_initialized) {
            anim_usespot3_428_initialized = true;
            images_usespot3_428_0_0[0] = get_internal_image(2061);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_usespot3_428(int x, int y)
{
    return new (Active::pool.create()) UseSpot3_428(x, y);
}
static Image* images_chinupbar_430_0_16[1];
static Direction direction_chinupbar_430_0_16 = {16, 50, 50, 0, -1, images_chinupbar_430_0_16, 1};
static Animation anim_chinupbar_430_0 = {NULL, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16, &direction_chinupbar_430_0_16};
static Animation * anim_array_chinupbar_430[1] = {&anim_chinupbar_430_0};
static Animations anim_chinupbar_430 = {1, &anim_array_chinupbar_430[0]};
static bool anim_chinupbar_430_initialized;
class ChinupBar_430 : public Active
{
public:
    ChinupBar_430(int x, int y) : Active(x, y, ChinupBar_430_type)
    {
        // qualifiers: 28, 93
#ifndef NDEBUG
        name = std::string("Chinup Bar", 10);
#endif
        this->animations = &anim_chinupbar_430;
        if (!anim_chinupbar_430_initialized) {
            anim_chinupbar_430_initialized = true;
            images_chinupbar_430_0_16[0] = get_internal_image(2402);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_chinupbar_430(int x, int y)
{
    return new (Active::pool.create()) ChinupBar_430(x, y);
}
static Image* images_zipline_431_0_0[1];
static Direction direction_zipline_431_0_0 = {0, 50, 50, 0, -1, images_zipline_431_0_0, 1};
static Image* images_zipline_431_0_8[1];
static Direction direction_zipline_431_0_8 = {8, 50, 50, 0, -1, images_zipline_431_0_8, 1};
static Image* images_zipline_431_0_16[1];
static Direction direction_zipline_431_0_16 = {16, 50, 50, 0, 1, images_zipline_431_0_16, 1};
static Image* images_zipline_431_0_24[1];
static Direction direction_zipline_431_0_24 = {24, 50, 50, 0, -1, images_zipline_431_0_24, 1};
static Animation anim_zipline_431_0 = {&direction_zipline_431_0_0, &direction_zipline_431_0_0, &direction_zipline_431_0_0, &direction_zipline_431_0_0, NULL, &direction_zipline_431_0_8, &direction_zipline_431_0_8, &direction_zipline_431_0_8, &direction_zipline_431_0_8, &direction_zipline_431_0_8, &direction_zipline_431_0_8, &direction_zipline_431_0_8, NULL, &direction_zipline_431_0_16, &direction_zipline_431_0_16, &direction_zipline_431_0_16, &direction_zipline_431_0_16, &direction_zipline_431_0_16, &direction_zipline_431_0_16, &direction_zipline_431_0_16, NULL, &direction_zipline_431_0_24, &direction_zipline_431_0_24, &direction_zipline_431_0_24, &direction_zipline_431_0_24, &direction_zipline_431_0_24, &direction_zipline_431_0_24, &direction_zipline_431_0_24, NULL, &direction_zipline_431_0_0, &direction_zipline_431_0_0, &direction_zipline_431_0_0};
static Animation * anim_array_zipline_431[1] = {&anim_zipline_431_0};
static Animations anim_zipline_431 = {1, &anim_array_zipline_431[0]};
static bool anim_zipline_431_initialized;
class ZIPLINE_431 : public Active
{
public:
    ZIPLINE_431(int x, int y) : Active(x, y, ZIPLINE_431_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ZIP LINE", 8);
#endif
        this->animations = &anim_zipline_431;
        if (!anim_zipline_431_initialized) {
            anim_zipline_431_initialized = true;
            images_zipline_431_0_0[0] = get_internal_image(2394);
            images_zipline_431_0_8[0] = get_internal_image(2132);
            images_zipline_431_0_16[0] = get_internal_image(2403);
            images_zipline_431_0_24[0] = get_internal_image(2132);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_zipline_431(int x, int y)
{
    return new (Active::pool.create()) ZIPLINE_431(x, y);
}
class ProfileStats_432 : public Text
{
public:
    ProfileStats_432(int x, int y) : Text(x, y, ProfileStats_432_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("profile_stats", 13);
#endif
        flags &= ~SCROLL;
        width = 88;
        height = 50;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("Strength\r\nSpeed\r\nIntellect", 26));
        create_alterables();
    }
};
FrameObject * create_profilestats_432(int x, int y)
{
    return new (Text::pool.create()) ProfileStats_432(x, y);
}
static Image* images_icons_433_0_0[1];
static Direction direction_icons_433_0_0 = {0, 50, 50, 0, -1, images_icons_433_0_0, 1};
static Image* images_icons_433_0_8[1];
static Direction direction_icons_433_0_8 = {8, 50, 50, 0, -1, images_icons_433_0_8, 1};
static Image* images_icons_433_0_16[1];
static Direction direction_icons_433_0_16 = {16, 50, 50, 0, -1, images_icons_433_0_16, 1};
static Image* images_icons_433_0_20[1];
static Direction direction_icons_433_0_20 = {20, 50, 50, 0, -1, images_icons_433_0_20, 1};
static Image* images_icons_433_0_24[1];
static Direction direction_icons_433_0_24 = {24, 50, 50, 0, -1, images_icons_433_0_24, 1};
static Image* images_icons_433_0_28[1];
static Direction direction_icons_433_0_28 = {28, 50, 50, 0, -1, images_icons_433_0_28, 1};
static Animation anim_icons_433_0 = {&direction_icons_433_0_0, &direction_icons_433_0_0, &direction_icons_433_0_0, &direction_icons_433_0_0, NULL, &direction_icons_433_0_8, &direction_icons_433_0_8, &direction_icons_433_0_8, &direction_icons_433_0_8, &direction_icons_433_0_8, &direction_icons_433_0_8, &direction_icons_433_0_8, NULL, &direction_icons_433_0_16, &direction_icons_433_0_16, &direction_icons_433_0_16, &direction_icons_433_0_16, &direction_icons_433_0_16, NULL, &direction_icons_433_0_20, &direction_icons_433_0_20, &direction_icons_433_0_20, NULL, &direction_icons_433_0_24, &direction_icons_433_0_24, &direction_icons_433_0_24, NULL, &direction_icons_433_0_28, &direction_icons_433_0_28, &direction_icons_433_0_28, NULL, &direction_icons_433_0_0};
static Animation * anim_array_icons_433[1] = {&anim_icons_433_0};
static Animations anim_icons_433 = {1, &anim_array_icons_433[0]};
static bool anim_icons_433_initialized;
class Icons_433 : public Active
{
public:
    Icons_433(int x, int y) : Active(x, y, Icons_433_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Icons", 5);
#endif
        this->animations = &anim_icons_433;
        if (!anim_icons_433_initialized) {
            anim_icons_433_initialized = true;
            images_icons_433_0_0[0] = get_internal_image(975);
            images_icons_433_0_8[0] = get_internal_image(2327);
            images_icons_433_0_16[0] = get_internal_image(2202);
            images_icons_433_0_20[0] = get_internal_image(660);
            images_icons_433_0_24[0] = get_internal_image(1455);
            images_icons_433_0_28[0] = get_internal_image(1456);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_icons_433(int x, int y)
{
    return new (Active::pool.create()) Icons_433(x, y);
}
static Image* images_overallsoutfit_434_0_0[2];
static Direction direction_overallsoutfit_434_0_0 = {0, 10, 10, 0, -1, images_overallsoutfit_434_0_0, 2};
static Image* images_overallsoutfit_434_0_8[2];
static Direction direction_overallsoutfit_434_0_8 = {8, 10, 10, 0, -1, images_overallsoutfit_434_0_8, 2};
static Image* images_overallsoutfit_434_0_16[2];
static Direction direction_overallsoutfit_434_0_16 = {16, 10, 10, 0, -1, images_overallsoutfit_434_0_16, 2};
static Image* images_overallsoutfit_434_0_24[2];
static Direction direction_overallsoutfit_434_0_24 = {24, 10, 10, 0, -1, images_overallsoutfit_434_0_24, 2};
static Animation anim_overallsoutfit_434_0 = {&direction_overallsoutfit_434_0_0, &direction_overallsoutfit_434_0_0, &direction_overallsoutfit_434_0_0, &direction_overallsoutfit_434_0_0, NULL, &direction_overallsoutfit_434_0_8, &direction_overallsoutfit_434_0_8, &direction_overallsoutfit_434_0_8, &direction_overallsoutfit_434_0_8, &direction_overallsoutfit_434_0_8, &direction_overallsoutfit_434_0_8, &direction_overallsoutfit_434_0_8, NULL, &direction_overallsoutfit_434_0_16, &direction_overallsoutfit_434_0_16, &direction_overallsoutfit_434_0_16, &direction_overallsoutfit_434_0_16, &direction_overallsoutfit_434_0_16, &direction_overallsoutfit_434_0_16, &direction_overallsoutfit_434_0_16, NULL, &direction_overallsoutfit_434_0_24, &direction_overallsoutfit_434_0_24, &direction_overallsoutfit_434_0_24, &direction_overallsoutfit_434_0_24, &direction_overallsoutfit_434_0_24, &direction_overallsoutfit_434_0_24, &direction_overallsoutfit_434_0_24, NULL, &direction_overallsoutfit_434_0_0, &direction_overallsoutfit_434_0_0, &direction_overallsoutfit_434_0_0};
static Image* images_overallsoutfit_434_6_0[1];
static Direction direction_overallsoutfit_434_6_0 = {0, 6, 6, 0, 1, images_overallsoutfit_434_6_0, 1};
static Image* images_overallsoutfit_434_6_8[1];
static Direction direction_overallsoutfit_434_6_8 = {8, 6, 6, 0, 1, images_overallsoutfit_434_6_8, 1};
static Image* images_overallsoutfit_434_6_16[1];
static Direction direction_overallsoutfit_434_6_16 = {16, 6, 6, 0, 1, images_overallsoutfit_434_6_16, 1};
static Image* images_overallsoutfit_434_6_24[1];
static Direction direction_overallsoutfit_434_6_24 = {24, 6, 6, 0, 1, images_overallsoutfit_434_6_24, 1};
static Animation anim_overallsoutfit_434_6 = {&direction_overallsoutfit_434_6_0, &direction_overallsoutfit_434_6_0, &direction_overallsoutfit_434_6_0, &direction_overallsoutfit_434_6_0, NULL, &direction_overallsoutfit_434_6_8, &direction_overallsoutfit_434_6_8, &direction_overallsoutfit_434_6_8, &direction_overallsoutfit_434_6_8, &direction_overallsoutfit_434_6_8, &direction_overallsoutfit_434_6_8, &direction_overallsoutfit_434_6_8, NULL, &direction_overallsoutfit_434_6_16, &direction_overallsoutfit_434_6_16, &direction_overallsoutfit_434_6_16, &direction_overallsoutfit_434_6_16, &direction_overallsoutfit_434_6_16, &direction_overallsoutfit_434_6_16, &direction_overallsoutfit_434_6_16, NULL, &direction_overallsoutfit_434_6_24, &direction_overallsoutfit_434_6_24, &direction_overallsoutfit_434_6_24, &direction_overallsoutfit_434_6_24, &direction_overallsoutfit_434_6_24, &direction_overallsoutfit_434_6_24, &direction_overallsoutfit_434_6_24, NULL, &direction_overallsoutfit_434_6_0, &direction_overallsoutfit_434_6_0, &direction_overallsoutfit_434_6_0};
static Image* images_overallsoutfit_434_7_0[2];
static Direction direction_overallsoutfit_434_7_0 = {0, 10, 10, 0, -1, images_overallsoutfit_434_7_0, 2};
static Image* images_overallsoutfit_434_7_8[2];
static Direction direction_overallsoutfit_434_7_8 = {8, 10, 10, 0, -1, images_overallsoutfit_434_7_8, 2};
static Image* images_overallsoutfit_434_7_16[2];
static Direction direction_overallsoutfit_434_7_16 = {16, 10, 10, 0, -1, images_overallsoutfit_434_7_16, 2};
static Image* images_overallsoutfit_434_7_24[2];
static Direction direction_overallsoutfit_434_7_24 = {24, 10, 10, 0, -1, images_overallsoutfit_434_7_24, 2};
static Animation anim_overallsoutfit_434_7 = {&direction_overallsoutfit_434_7_0, &direction_overallsoutfit_434_7_0, &direction_overallsoutfit_434_7_0, &direction_overallsoutfit_434_7_0, NULL, &direction_overallsoutfit_434_7_8, &direction_overallsoutfit_434_7_8, &direction_overallsoutfit_434_7_8, &direction_overallsoutfit_434_7_8, &direction_overallsoutfit_434_7_8, &direction_overallsoutfit_434_7_8, &direction_overallsoutfit_434_7_8, NULL, &direction_overallsoutfit_434_7_16, &direction_overallsoutfit_434_7_16, &direction_overallsoutfit_434_7_16, &direction_overallsoutfit_434_7_16, &direction_overallsoutfit_434_7_16, &direction_overallsoutfit_434_7_16, &direction_overallsoutfit_434_7_16, NULL, &direction_overallsoutfit_434_7_24, &direction_overallsoutfit_434_7_24, &direction_overallsoutfit_434_7_24, &direction_overallsoutfit_434_7_24, &direction_overallsoutfit_434_7_24, &direction_overallsoutfit_434_7_24, &direction_overallsoutfit_434_7_24, NULL, &direction_overallsoutfit_434_7_0, &direction_overallsoutfit_434_7_0, &direction_overallsoutfit_434_7_0};
static Image* images_overallsoutfit_434_8_24[1];
static Direction direction_overallsoutfit_434_8_24 = {24, 50, 50, 0, -1, images_overallsoutfit_434_8_24, 1};
static Animation anim_overallsoutfit_434_8 = {&direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, NULL, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24, &direction_overallsoutfit_434_8_24};
static Image* images_overallsoutfit_434_11_0[2];
static Direction direction_overallsoutfit_434_11_0 = {0, 10, 10, 0, -1, images_overallsoutfit_434_11_0, 2};
static Image* images_overallsoutfit_434_11_8[2];
static Direction direction_overallsoutfit_434_11_8 = {8, 10, 10, 0, -1, images_overallsoutfit_434_11_8, 2};
static Image* images_overallsoutfit_434_11_16[2];
static Direction direction_overallsoutfit_434_11_16 = {16, 10, 10, 0, -1, images_overallsoutfit_434_11_16, 2};
static Image* images_overallsoutfit_434_11_24[2];
static Direction direction_overallsoutfit_434_11_24 = {24, 10, 10, 0, -1, images_overallsoutfit_434_11_24, 2};
static Animation anim_overallsoutfit_434_11 = {&direction_overallsoutfit_434_11_0, &direction_overallsoutfit_434_11_0, &direction_overallsoutfit_434_11_0, &direction_overallsoutfit_434_11_0, NULL, &direction_overallsoutfit_434_11_8, &direction_overallsoutfit_434_11_8, &direction_overallsoutfit_434_11_8, &direction_overallsoutfit_434_11_8, &direction_overallsoutfit_434_11_8, &direction_overallsoutfit_434_11_8, &direction_overallsoutfit_434_11_8, NULL, &direction_overallsoutfit_434_11_16, &direction_overallsoutfit_434_11_16, &direction_overallsoutfit_434_11_16, &direction_overallsoutfit_434_11_16, &direction_overallsoutfit_434_11_16, &direction_overallsoutfit_434_11_16, &direction_overallsoutfit_434_11_16, NULL, &direction_overallsoutfit_434_11_24, &direction_overallsoutfit_434_11_24, &direction_overallsoutfit_434_11_24, &direction_overallsoutfit_434_11_24, &direction_overallsoutfit_434_11_24, &direction_overallsoutfit_434_11_24, &direction_overallsoutfit_434_11_24, NULL, &direction_overallsoutfit_434_11_0, &direction_overallsoutfit_434_11_0, &direction_overallsoutfit_434_11_0};
static Image* images_overallsoutfit_434_12_0[2];
static Direction direction_overallsoutfit_434_12_0 = {0, 10, 10, 0, -1, images_overallsoutfit_434_12_0, 2};
static Image* images_overallsoutfit_434_12_8[2];
static Direction direction_overallsoutfit_434_12_8 = {8, 10, 10, 0, -1, images_overallsoutfit_434_12_8, 2};
static Image* images_overallsoutfit_434_12_16[2];
static Direction direction_overallsoutfit_434_12_16 = {16, 10, 10, 0, -1, images_overallsoutfit_434_12_16, 2};
static Image* images_overallsoutfit_434_12_24[2];
static Direction direction_overallsoutfit_434_12_24 = {24, 10, 10, 0, -1, images_overallsoutfit_434_12_24, 2};
static Animation anim_overallsoutfit_434_12 = {&direction_overallsoutfit_434_12_0, &direction_overallsoutfit_434_12_0, &direction_overallsoutfit_434_12_0, &direction_overallsoutfit_434_12_0, NULL, &direction_overallsoutfit_434_12_8, &direction_overallsoutfit_434_12_8, &direction_overallsoutfit_434_12_8, &direction_overallsoutfit_434_12_8, &direction_overallsoutfit_434_12_8, &direction_overallsoutfit_434_12_8, &direction_overallsoutfit_434_12_8, NULL, &direction_overallsoutfit_434_12_16, &direction_overallsoutfit_434_12_16, &direction_overallsoutfit_434_12_16, &direction_overallsoutfit_434_12_16, &direction_overallsoutfit_434_12_16, &direction_overallsoutfit_434_12_16, &direction_overallsoutfit_434_12_16, NULL, &direction_overallsoutfit_434_12_24, &direction_overallsoutfit_434_12_24, &direction_overallsoutfit_434_12_24, &direction_overallsoutfit_434_12_24, &direction_overallsoutfit_434_12_24, &direction_overallsoutfit_434_12_24, &direction_overallsoutfit_434_12_24, NULL, &direction_overallsoutfit_434_12_0, &direction_overallsoutfit_434_12_0, &direction_overallsoutfit_434_12_0};
static Image* images_overallsoutfit_434_13_0[2];
static Direction direction_overallsoutfit_434_13_0 = {0, 10, 10, 0, -1, images_overallsoutfit_434_13_0, 2};
static Image* images_overallsoutfit_434_13_8[2];
static Direction direction_overallsoutfit_434_13_8 = {8, 10, 10, 0, -1, images_overallsoutfit_434_13_8, 2};
static Image* images_overallsoutfit_434_13_16[2];
static Direction direction_overallsoutfit_434_13_16 = {16, 10, 10, 0, -1, images_overallsoutfit_434_13_16, 2};
static Image* images_overallsoutfit_434_13_24[2];
static Direction direction_overallsoutfit_434_13_24 = {24, 10, 10, 0, -1, images_overallsoutfit_434_13_24, 2};
static Animation anim_overallsoutfit_434_13 = {&direction_overallsoutfit_434_13_0, &direction_overallsoutfit_434_13_0, &direction_overallsoutfit_434_13_0, &direction_overallsoutfit_434_13_0, NULL, &direction_overallsoutfit_434_13_8, &direction_overallsoutfit_434_13_8, &direction_overallsoutfit_434_13_8, &direction_overallsoutfit_434_13_8, &direction_overallsoutfit_434_13_8, &direction_overallsoutfit_434_13_8, &direction_overallsoutfit_434_13_8, NULL, &direction_overallsoutfit_434_13_16, &direction_overallsoutfit_434_13_16, &direction_overallsoutfit_434_13_16, &direction_overallsoutfit_434_13_16, &direction_overallsoutfit_434_13_16, &direction_overallsoutfit_434_13_16, &direction_overallsoutfit_434_13_16, NULL, &direction_overallsoutfit_434_13_24, &direction_overallsoutfit_434_13_24, &direction_overallsoutfit_434_13_24, &direction_overallsoutfit_434_13_24, &direction_overallsoutfit_434_13_24, &direction_overallsoutfit_434_13_24, &direction_overallsoutfit_434_13_24, NULL, &direction_overallsoutfit_434_13_0, &direction_overallsoutfit_434_13_0, &direction_overallsoutfit_434_13_0};
static Image* images_overallsoutfit_434_14_0[2];
static Direction direction_overallsoutfit_434_14_0 = {0, 10, 10, 0, -1, images_overallsoutfit_434_14_0, 2};
static Image* images_overallsoutfit_434_14_8[2];
static Direction direction_overallsoutfit_434_14_8 = {8, 10, 10, 0, -1, images_overallsoutfit_434_14_8, 2};
static Image* images_overallsoutfit_434_14_16[2];
static Direction direction_overallsoutfit_434_14_16 = {16, 10, 10, 0, -1, images_overallsoutfit_434_14_16, 2};
static Image* images_overallsoutfit_434_14_24[2];
static Direction direction_overallsoutfit_434_14_24 = {24, 10, 10, 0, -1, images_overallsoutfit_434_14_24, 2};
static Animation anim_overallsoutfit_434_14 = {&direction_overallsoutfit_434_14_0, &direction_overallsoutfit_434_14_0, &direction_overallsoutfit_434_14_0, &direction_overallsoutfit_434_14_0, NULL, &direction_overallsoutfit_434_14_8, &direction_overallsoutfit_434_14_8, &direction_overallsoutfit_434_14_8, &direction_overallsoutfit_434_14_8, &direction_overallsoutfit_434_14_8, &direction_overallsoutfit_434_14_8, &direction_overallsoutfit_434_14_8, NULL, &direction_overallsoutfit_434_14_16, &direction_overallsoutfit_434_14_16, &direction_overallsoutfit_434_14_16, &direction_overallsoutfit_434_14_16, &direction_overallsoutfit_434_14_16, &direction_overallsoutfit_434_14_16, &direction_overallsoutfit_434_14_16, NULL, &direction_overallsoutfit_434_14_24, &direction_overallsoutfit_434_14_24, &direction_overallsoutfit_434_14_24, &direction_overallsoutfit_434_14_24, &direction_overallsoutfit_434_14_24, &direction_overallsoutfit_434_14_24, &direction_overallsoutfit_434_14_24, NULL, &direction_overallsoutfit_434_14_0, &direction_overallsoutfit_434_14_0, &direction_overallsoutfit_434_14_0};
static Image* images_overallsoutfit_434_15_0[2];
static Direction direction_overallsoutfit_434_15_0 = {0, 10, 10, 0, -1, images_overallsoutfit_434_15_0, 2};
static Image* images_overallsoutfit_434_15_8[2];
static Direction direction_overallsoutfit_434_15_8 = {8, 10, 10, 0, -1, images_overallsoutfit_434_15_8, 2};
static Image* images_overallsoutfit_434_15_16[2];
static Direction direction_overallsoutfit_434_15_16 = {16, 10, 10, 0, -1, images_overallsoutfit_434_15_16, 2};
static Image* images_overallsoutfit_434_15_24[2];
static Direction direction_overallsoutfit_434_15_24 = {24, 10, 10, 0, -1, images_overallsoutfit_434_15_24, 2};
static Animation anim_overallsoutfit_434_15 = {&direction_overallsoutfit_434_15_0, &direction_overallsoutfit_434_15_0, &direction_overallsoutfit_434_15_0, &direction_overallsoutfit_434_15_0, NULL, &direction_overallsoutfit_434_15_8, &direction_overallsoutfit_434_15_8, &direction_overallsoutfit_434_15_8, &direction_overallsoutfit_434_15_8, &direction_overallsoutfit_434_15_8, &direction_overallsoutfit_434_15_8, &direction_overallsoutfit_434_15_8, NULL, &direction_overallsoutfit_434_15_16, &direction_overallsoutfit_434_15_16, &direction_overallsoutfit_434_15_16, &direction_overallsoutfit_434_15_16, &direction_overallsoutfit_434_15_16, &direction_overallsoutfit_434_15_16, &direction_overallsoutfit_434_15_16, NULL, &direction_overallsoutfit_434_15_24, &direction_overallsoutfit_434_15_24, &direction_overallsoutfit_434_15_24, &direction_overallsoutfit_434_15_24, &direction_overallsoutfit_434_15_24, &direction_overallsoutfit_434_15_24, &direction_overallsoutfit_434_15_24, NULL, &direction_overallsoutfit_434_15_0, &direction_overallsoutfit_434_15_0, &direction_overallsoutfit_434_15_0};
static Image* images_overallsoutfit_434_16_0[2];
static Direction direction_overallsoutfit_434_16_0 = {0, 10, 10, 0, -1, images_overallsoutfit_434_16_0, 2};
static Image* images_overallsoutfit_434_16_8[2];
static Direction direction_overallsoutfit_434_16_8 = {8, 10, 10, 0, -1, images_overallsoutfit_434_16_8, 2};
static Image* images_overallsoutfit_434_16_16[2];
static Direction direction_overallsoutfit_434_16_16 = {16, 10, 10, 0, -1, images_overallsoutfit_434_16_16, 2};
static Image* images_overallsoutfit_434_16_24[2];
static Direction direction_overallsoutfit_434_16_24 = {24, 10, 10, 0, -1, images_overallsoutfit_434_16_24, 2};
static Animation anim_overallsoutfit_434_16 = {&direction_overallsoutfit_434_16_0, &direction_overallsoutfit_434_16_0, &direction_overallsoutfit_434_16_0, &direction_overallsoutfit_434_16_0, NULL, &direction_overallsoutfit_434_16_8, &direction_overallsoutfit_434_16_8, &direction_overallsoutfit_434_16_8, &direction_overallsoutfit_434_16_8, &direction_overallsoutfit_434_16_8, &direction_overallsoutfit_434_16_8, &direction_overallsoutfit_434_16_8, NULL, &direction_overallsoutfit_434_16_16, &direction_overallsoutfit_434_16_16, &direction_overallsoutfit_434_16_16, &direction_overallsoutfit_434_16_16, &direction_overallsoutfit_434_16_16, &direction_overallsoutfit_434_16_16, &direction_overallsoutfit_434_16_16, NULL, &direction_overallsoutfit_434_16_24, &direction_overallsoutfit_434_16_24, &direction_overallsoutfit_434_16_24, &direction_overallsoutfit_434_16_24, &direction_overallsoutfit_434_16_24, &direction_overallsoutfit_434_16_24, &direction_overallsoutfit_434_16_24, NULL, &direction_overallsoutfit_434_16_0, &direction_overallsoutfit_434_16_0, &direction_overallsoutfit_434_16_0};
static Image* images_overallsoutfit_434_17_0[2];
static Direction direction_overallsoutfit_434_17_0 = {0, 5, 5, 1, -1, images_overallsoutfit_434_17_0, 2};
static Image* images_overallsoutfit_434_17_8[2];
static Direction direction_overallsoutfit_434_17_8 = {8, 5, 5, 1, -1, images_overallsoutfit_434_17_8, 2};
static Image* images_overallsoutfit_434_17_16[2];
static Direction direction_overallsoutfit_434_17_16 = {16, 5, 5, 1, -1, images_overallsoutfit_434_17_16, 2};
static Image* images_overallsoutfit_434_17_24[2];
static Direction direction_overallsoutfit_434_17_24 = {24, 5, 5, 1, -1, images_overallsoutfit_434_17_24, 2};
static Animation anim_overallsoutfit_434_17 = {&direction_overallsoutfit_434_17_0, &direction_overallsoutfit_434_17_0, &direction_overallsoutfit_434_17_0, &direction_overallsoutfit_434_17_0, NULL, &direction_overallsoutfit_434_17_8, &direction_overallsoutfit_434_17_8, &direction_overallsoutfit_434_17_8, &direction_overallsoutfit_434_17_8, &direction_overallsoutfit_434_17_8, &direction_overallsoutfit_434_17_8, &direction_overallsoutfit_434_17_8, NULL, &direction_overallsoutfit_434_17_16, &direction_overallsoutfit_434_17_16, &direction_overallsoutfit_434_17_16, &direction_overallsoutfit_434_17_16, &direction_overallsoutfit_434_17_16, &direction_overallsoutfit_434_17_16, &direction_overallsoutfit_434_17_16, NULL, &direction_overallsoutfit_434_17_24, &direction_overallsoutfit_434_17_24, &direction_overallsoutfit_434_17_24, &direction_overallsoutfit_434_17_24, &direction_overallsoutfit_434_17_24, &direction_overallsoutfit_434_17_24, &direction_overallsoutfit_434_17_24, NULL, &direction_overallsoutfit_434_17_0, &direction_overallsoutfit_434_17_0, &direction_overallsoutfit_434_17_0};
static Animation * anim_array_overallsoutfit_434[18] = {&anim_overallsoutfit_434_0, NULL, NULL, NULL, NULL, NULL, &anim_overallsoutfit_434_6, &anim_overallsoutfit_434_7, &anim_overallsoutfit_434_8, NULL, NULL, &anim_overallsoutfit_434_11, &anim_overallsoutfit_434_12, &anim_overallsoutfit_434_13, &anim_overallsoutfit_434_14, &anim_overallsoutfit_434_15, &anim_overallsoutfit_434_16, &anim_overallsoutfit_434_17};
static Animations anim_overallsoutfit_434 = {18, &anim_array_overallsoutfit_434[0]};
static bool anim_overallsoutfit_434_initialized;
class OverallsOutfit_434 : public Active
{
public:
    OverallsOutfit_434(int x, int y) : Active(x, y, OverallsOutfit_434_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("overalls_outfit", 15);
#endif
        this->animations = &anim_overallsoutfit_434;
        if (!anim_overallsoutfit_434_initialized) {
            anim_overallsoutfit_434_initialized = true;
            images_overallsoutfit_434_0_0[0] = get_internal_image(2258);
            images_overallsoutfit_434_0_0[1] = get_internal_image(2257);
            images_overallsoutfit_434_0_8[0] = get_internal_image(2261);
            images_overallsoutfit_434_0_8[1] = get_internal_image(2262);
            images_overallsoutfit_434_0_16[0] = get_internal_image(2259);
            images_overallsoutfit_434_0_16[1] = get_internal_image(2251);
            images_overallsoutfit_434_0_24[0] = get_internal_image(2255);
            images_overallsoutfit_434_0_24[1] = get_internal_image(2256);
            images_overallsoutfit_434_6_0[0] = get_internal_image(2263);
            images_overallsoutfit_434_6_8[0] = get_internal_image(2260);
            images_overallsoutfit_434_6_16[0] = get_internal_image(2264);
            images_overallsoutfit_434_6_24[0] = get_internal_image(2266);
            images_overallsoutfit_434_7_0[0] = get_internal_image(2271);
            images_overallsoutfit_434_7_0[1] = get_internal_image(2272);
            images_overallsoutfit_434_7_8[0] = get_internal_image(2265);
            images_overallsoutfit_434_7_8[1] = get_internal_image(2269);
            images_overallsoutfit_434_7_16[0] = get_internal_image(2273);
            images_overallsoutfit_434_7_16[1] = get_internal_image(2274);
            images_overallsoutfit_434_7_24[0] = get_internal_image(2267);
            images_overallsoutfit_434_7_24[1] = get_internal_image(2268);
            images_overallsoutfit_434_8_24[0] = get_internal_image(2270);
            images_overallsoutfit_434_11_0[0] = get_internal_image(2276);
            images_overallsoutfit_434_11_0[1] = get_internal_image(2277);
            images_overallsoutfit_434_11_8[0] = get_internal_image(2206);
            images_overallsoutfit_434_11_8[1] = get_internal_image(2275);
            images_overallsoutfit_434_11_16[0] = get_internal_image(2204);
            images_overallsoutfit_434_11_16[1] = get_internal_image(2205);
            images_overallsoutfit_434_11_24[0] = get_internal_image(2207);
            images_overallsoutfit_434_11_24[1] = get_internal_image(2278);
            images_overallsoutfit_434_12_0[0] = get_internal_image(2210);
            images_overallsoutfit_434_12_0[1] = get_internal_image(2209);
            images_overallsoutfit_434_12_8[0] = get_internal_image(2214);
            images_overallsoutfit_434_12_8[1] = get_internal_image(2213);
            images_overallsoutfit_434_12_16[0] = get_internal_image(2208);
            images_overallsoutfit_434_12_16[1] = get_internal_image(2211);
            images_overallsoutfit_434_12_24[0] = get_internal_image(2216);
            images_overallsoutfit_434_12_24[1] = get_internal_image(2212);
            images_overallsoutfit_434_13_0[0] = get_internal_image(2224);
            images_overallsoutfit_434_13_0[1] = get_internal_image(2217);
            images_overallsoutfit_434_13_8[0] = get_internal_image(2218);
            images_overallsoutfit_434_13_8[1] = get_internal_image(2223);
            images_overallsoutfit_434_13_16[0] = get_internal_image(2222);
            images_overallsoutfit_434_13_16[1] = get_internal_image(2221);
            images_overallsoutfit_434_13_24[0] = get_internal_image(2215);
            images_overallsoutfit_434_13_24[1] = get_internal_image(2220);
            images_overallsoutfit_434_14_0[0] = get_internal_image(2279);
            images_overallsoutfit_434_14_0[1] = get_internal_image(2280);
            images_overallsoutfit_434_14_8[0] = get_internal_image(2219);
            images_overallsoutfit_434_14_8[1] = get_internal_image(2225);
            images_overallsoutfit_434_14_16[0] = get_internal_image(2226);
            images_overallsoutfit_434_14_16[1] = get_internal_image(2229);
            images_overallsoutfit_434_14_24[0] = get_internal_image(2227);
            images_overallsoutfit_434_14_24[1] = get_internal_image(2231);
            images_overallsoutfit_434_15_0[0] = get_internal_image(2235);
            images_overallsoutfit_434_15_0[1] = get_internal_image(2238);
            images_overallsoutfit_434_15_8[0] = get_internal_image(2232);
            images_overallsoutfit_434_15_8[1] = get_internal_image(2282);
            images_overallsoutfit_434_15_16[0] = get_internal_image(2239);
            images_overallsoutfit_434_15_16[1] = get_internal_image(2283);
            images_overallsoutfit_434_15_24[0] = get_internal_image(2281);
            images_overallsoutfit_434_15_24[1] = get_internal_image(2233);
            images_overallsoutfit_434_16_0[0] = get_internal_image(2284);
            images_overallsoutfit_434_16_0[1] = get_internal_image(2285);
            images_overallsoutfit_434_16_8[0] = get_internal_image(2243);
            images_overallsoutfit_434_16_8[1] = get_internal_image(2247);
            images_overallsoutfit_434_16_16[0] = get_internal_image(2240);
            images_overallsoutfit_434_16_16[1] = get_internal_image(2234);
            images_overallsoutfit_434_16_24[0] = get_internal_image(2242);
            images_overallsoutfit_434_16_24[1] = get_internal_image(2245);
            images_overallsoutfit_434_17_0[0] = get_internal_image(2287);
            images_overallsoutfit_434_17_0[1] = get_internal_image(2286);
            images_overallsoutfit_434_17_8[0] = get_internal_image(2241);
            images_overallsoutfit_434_17_8[1] = get_internal_image(2250);
            images_overallsoutfit_434_17_16[0] = get_internal_image(2253);
            images_overallsoutfit_434_17_16[1] = get_internal_image(2249);
            images_overallsoutfit_434_17_24[0] = get_internal_image(2252);
            images_overallsoutfit_434_17_24[1] = get_internal_image(2248);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_overallsoutfit_434(int x, int y)
{
    return new (Active::pool.create()) OverallsOutfit_434(x, y);
}
static Image* images_skippingmat_435_0_16[1];
static Direction direction_skippingmat_435_0_16 = {16, 50, 50, 0, -1, images_skippingmat_435_0_16, 1};
static Animation anim_skippingmat_435_0 = {NULL, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16, &direction_skippingmat_435_0_16};
static Animation * anim_array_skippingmat_435[1] = {&anim_skippingmat_435_0};
static Animations anim_skippingmat_435 = {1, &anim_array_skippingmat_435[0]};
static bool anim_skippingmat_435_initialized;
class SkippingMat_435 : public Active
{
public:
    SkippingMat_435(int x, int y) : Active(x, y, SkippingMat_435_type)
    {
        // qualifiers: 28, 93
#ifndef NDEBUG
        name = std::string("Skipping Mat", 12);
#endif
        this->animations = &anim_skippingmat_435;
        if (!anim_skippingmat_435_initialized) {
            anim_skippingmat_435_initialized = true;
            images_skippingmat_435_0_16[0] = get_internal_image(2187);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_skipping_47);
    }
};
FrameObject * create_skippingmat_435(int x, int y)
{
    return new (Active::pool.create()) SkippingMat_435(x, y);
}
static Image* images_punchbag_436_0_16[1];
static Direction direction_punchbag_436_0_16 = {16, 50, 50, 0, -1, images_punchbag_436_0_16, 1};
static Animation anim_punchbag_436_0 = {NULL, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16, &direction_punchbag_436_0_16};
static Animation * anim_array_punchbag_436[1] = {&anim_punchbag_436_0};
static Animations anim_punchbag_436 = {1, &anim_array_punchbag_436[0]};
static bool anim_punchbag_436_initialized;
class PunchBag_436 : public Active
{
public:
    PunchBag_436(int x, int y) : Active(x, y, PunchBag_436_type)
    {
        // qualifiers: 28, 93
#ifndef NDEBUG
        name = std::string("punch bag", 9);
#endif
        this->animations = &anim_punchbag_436;
        if (!anim_punchbag_436_initialized) {
            anim_punchbag_436_initialized = true;
            images_punchbag_436_0_16[0] = get_internal_image(2306);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_punch_bag_48);
    }
};
FrameObject * create_punchbag_436(int x, int y)
{
    return new (Active::pool.create()) PunchBag_436(x, y);
}
static Image* images_activityMarker_0_0[1];
static Direction direction_activityMarker_0_0 = {0, 50, 50, 0, 1, images_activityMarker_0_0, 1};
static Image* images_activityMarker_0_16[1];
static Direction direction_activityMarker_0_16 = {16, 20, 20, 0, -1, images_activityMarker_0_16, 1};
static Animation anim_activityMarker_0 = {&direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0, NULL, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, &direction_activityMarker_0_16, NULL, &direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0, &direction_activityMarker_0_0};
static Image* images_activityMarker_2_0[1];
static Direction direction_activityMarker_2_0 = {0, 50, 50, 0, -1, images_activityMarker_2_0, 1};
static Image* images_activityMarker_2_16[1];
static Direction direction_activityMarker_2_16 = {16, 20, 20, 0, -1, images_activityMarker_2_16, 1};
static Animation anim_activityMarker_2 = {&direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0, NULL, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, &direction_activityMarker_2_16, NULL, &direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0, &direction_activityMarker_2_0};
static Animation * anim_array_activityMarker[3] = {&anim_activityMarker_0, NULL, &anim_activityMarker_2};
static Animations anim_activityMarker = {3, &anim_array_activityMarker[0]};
static bool anim_activityMarker_initialized;
class ActivityMarker : public Active
{
public:
    ActivityMarker(int x, int y) : Active(x, y, activityMarker_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("PowerBar_HL", 11);
#endif
        this->animations = &anim_activityMarker;
        if (!anim_activityMarker_initialized) {
            anim_activityMarker_initialized = true;
            images_activityMarker_0_0[0] = get_internal_image(2181);
            images_activityMarker_0_16[0] = get_internal_image(2176);
            images_activityMarker_2_0[0] = get_internal_image(2181);
            images_activityMarker_2_16[0] = get_internal_image(2203);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_activityMarker(int x, int y)
{
    return new (Active::pool.create()) ActivityMarker(x, y);
}
static Image* images_punchbag2_438_0_16[1];
static Direction direction_punchbag2_438_0_16 = {16, 50, 50, 0, -1, images_punchbag2_438_0_16, 1};
static Animation anim_punchbag2_438_0 = {NULL, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16, &direction_punchbag2_438_0_16};
static Image* images_punchbag2_438_1_0[2];
static Direction direction_punchbag2_438_1_0 = {0, 25, 25, 0, 1, images_punchbag2_438_1_0, 2};
static Animation anim_punchbag2_438_1 = {&direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, NULL, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0, &direction_punchbag2_438_1_0};
static Animation * anim_array_punchbag2_438[2] = {&anim_punchbag2_438_0, &anim_punchbag2_438_1};
static Animations anim_punchbag2_438 = {2, &anim_array_punchbag2_438[0]};
static bool anim_punchbag2_438_initialized;
class PunchBag2_438 : public Active
{
public:
    PunchBag2_438(int x, int y) : Active(x, y, PunchBag2_438_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("punch bag 2", 11);
#endif
        this->animations = &anim_punchbag2_438;
        if (!anim_punchbag2_438_initialized) {
            anim_punchbag2_438_initialized = true;
            images_punchbag2_438_0_16[0] = get_internal_image(1424);
            images_punchbag2_438_1_0[0] = get_internal_image(2296);
            images_punchbag2_438_1_0[1] = get_internal_image(2326);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_punchbag2_438(int x, int y)
{
    return new (Active::pool.create()) PunchBag2_438(x, y);
}
static Image* images_speedbag_439_0_16[1];
static Direction direction_speedbag_439_0_16 = {16, 50, 50, 0, -1, images_speedbag_439_0_16, 1};
static Animation anim_speedbag_439_0 = {NULL, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16, &direction_speedbag_439_0_16};
static Animation * anim_array_speedbag_439[1] = {&anim_speedbag_439_0};
static Animations anim_speedbag_439 = {1, &anim_array_speedbag_439[0]};
static bool anim_speedbag_439_initialized;
class SpeedBag_439 : public Active
{
public:
    SpeedBag_439(int x, int y) : Active(x, y, SpeedBag_439_type)
    {
        // qualifiers: 28, 93
#ifndef NDEBUG
        name = std::string("speed bag", 9);
#endif
        this->animations = &anim_speedbag_439;
        if (!anim_speedbag_439_initialized) {
            anim_speedbag_439_initialized = true;
            images_speedbag_439_0_16[0] = get_internal_image(1569);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_speed_bag_49);
    }
};
FrameObject * create_speedbag_439(int x, int y)
{
    return new (Active::pool.create()) SpeedBag_439(x, y);
}
static Image* images_punchbag3_440_0_16[1];
static Direction direction_punchbag3_440_0_16 = {16, 50, 50, 0, -1, images_punchbag3_440_0_16, 1};
static Animation anim_punchbag3_440_0 = {NULL, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16, &direction_punchbag3_440_0_16};
static Image* images_punchbag3_440_1_0[2];
static Direction direction_punchbag3_440_1_0 = {0, 25, 25, 0, 1, images_punchbag3_440_1_0, 2};
static Animation anim_punchbag3_440_1 = {&direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, NULL, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0, &direction_punchbag3_440_1_0};
static Animation * anim_array_punchbag3_440[2] = {&anim_punchbag3_440_0, &anim_punchbag3_440_1};
static Animations anim_punchbag3_440 = {2, &anim_array_punchbag3_440[0]};
static bool anim_punchbag3_440_initialized;
class PunchBag3_440 : public Active
{
public:
    PunchBag3_440(int x, int y) : Active(x, y, PunchBag3_440_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("punch bag 3", 11);
#endif
        this->animations = &anim_punchbag3_440;
        if (!anim_punchbag3_440_initialized) {
            anim_punchbag3_440_initialized = true;
            images_punchbag3_440_0_16[0] = get_internal_image(1036);
            images_punchbag3_440_1_0[0] = get_internal_image(2333);
            images_punchbag3_440_1_0[1] = get_internal_image(2334);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_punchbag3_440(int x, int y)
{
    return new (Active::pool.create()) PunchBag3_440(x, y);
}
static Image* images_droppedsheet_441_4_0[2];
static Direction direction_droppedsheet_441_4_0 = {0, 15, 15, 0, 5, images_droppedsheet_441_4_0, 2};
static Animation anim_droppedsheet_441_4 = {&direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, NULL, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0, &direction_droppedsheet_441_4_0};
static Animation * anim_array_droppedsheet_441[5] = {NULL, NULL, NULL, NULL, &anim_droppedsheet_441_4};
static Animations anim_droppedsheet_441 = {5, &anim_array_droppedsheet_441[0]};
static bool anim_droppedsheet_441_initialized;
class DroppedSheet_441 : public Active
{
public:
    DroppedSheet_441(int x, int y) : Active(x, y, DroppedSheet_441_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dropped Sheet", 13);
#endif
        this->animations = &anim_droppedsheet_441;
        if (!anim_droppedsheet_441_initialized) {
            anim_droppedsheet_441_initialized = true;
            images_droppedsheet_441_4_0[0] = get_internal_image(2336);
            images_droppedsheet_441_4_0[1] = get_internal_image(1580);
        }
        active_flags |= TRANSPARENT;
        animation = DISAPPEARING;
        current_animation = animation;
        flags |= FADEOUT;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 155);
        create_alterables();
    }
};
FrameObject * create_droppedsheet_441(int x, int y)
{
    return new (Active::pool.create()) DroppedSheet_441(x, y);
}
static Image* images_lookguardflag60_442_0_0[1];
static Direction direction_lookguardflag60_442_0_0 = {0, 50, 50, 0, 1, images_lookguardflag60_442_0_0, 1};
static Animation anim_lookguardflag60_442_0 = {&direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, NULL, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0, &direction_lookguardflag60_442_0_0};
static Image* images_lookguardflag60_442_5_0[1];
static Direction direction_lookguardflag60_442_5_0 = {0, 50, 50, 0, -1, images_lookguardflag60_442_5_0, 1};
static Animation anim_lookguardflag60_442_5 = {&direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, NULL, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0, &direction_lookguardflag60_442_5_0};
static Animation * anim_array_lookguardflag60_442[6] = {&anim_lookguardflag60_442_0, NULL, NULL, NULL, NULL, &anim_lookguardflag60_442_5};
static Animations anim_lookguardflag60_442 = {6, &anim_array_lookguardflag60_442[0]};
static bool anim_lookguardflag60_442_initialized;
class LookGuardFlag60_442 : public Active
{
public:
    LookGuardFlag60_442(int x, int y) : Active(x, y, LookGuardFlag60_442_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Look Guard - flag 60", 20);
#endif
        set_visible(false);
        this->animations = &anim_lookguardflag60_442;
        if (!anim_lookguardflag60_442_initialized) {
            anim_lookguardflag60_442_initialized = true;
            images_lookguardflag60_442_0_0[0] = get_internal_image(50);
            images_lookguardflag60_442_5_0[0] = get_internal_image(1008);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_lookguardflag60_442(int x, int y)
{
    return new (Active::pool.create()) LookGuardFlag60_442(x, y);
}
class SoilBackground_443 : public ActivePicture
{
public:
    SoilBackground_443(int x, int y) : ActivePicture(x, y, SoilBackground_443_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("soil background", 15);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
        set_transparent_color(Color(0, 0, 0));
        sprite_col.width = width = 114362542;
        sprite_col.height = height = 0;
        create_alterables();
    }
};
FrameObject * create_soilbackground_443(int x, int y)
{
    return new (ActivePicture::pool.create()) SoilBackground_443(x, y);
}
class FloorLayer_444 : public ActivePicture
{
public:
    FloorLayer_444(int x, int y) : ActivePicture(x, y, FloorLayer_444_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("floor layer", 11);
#endif
        flags |= BACKGROUND;
        set_transparent_color(Color(0, 0, 0));
        sprite_col.width = width = 114362542;
        sprite_col.height = height = 0;
        create_alterables();
    }
};
FrameObject * create_floorlayer_444(int x, int y)
{
    return new (ActivePicture::pool.create()) FloorLayer_444(x, y);
}
class ButtonText_445 : public Text
{
public:
    ButtonText_445(int x, int y) : Text(x, y, ButtonText_445_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("ButtonText", 10);
#endif
        flags &= ~SCROLL;
        width = 72;
        height = 12;
        blend_color = Color(0, 85, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("BUTTON", 6));
        create_alterables();
    }
};
FrameObject * create_buttontext_445(int x, int y)
{
    return new (Text::pool.create()) ButtonText_445(x, y);
}
static Image* images_hudBackdrop_0_0[1];
static Direction direction_hudBackdrop_0_0 = {0, 50, 50, 0, 1, images_hudBackdrop_0_0, 1};
static Animation anim_hudBackdrop_0 = {&direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, NULL, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0, &direction_hudBackdrop_0_0};
static Animation * anim_array_hudBackdrop[1] = {&anim_hudBackdrop_0};
static Animations anim_hudBackdrop = {1, &anim_array_hudBackdrop[0]};
static bool anim_hudBackdrop_initialized;
class HudBackdrop : public Active
{
public:
    HudBackdrop(int x, int y) : Active(x, y, hudBackdrop_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("HUD backlay", 11);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_hudBackdrop;
        if (!anim_hudBackdrop_initialized) {
            anim_hudBackdrop_initialized = true;
            images_hudBackdrop_0_0[0] = get_internal_image(158);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 155);
        create_alterables();
    }
};
FrameObject * create_hudBackdrop(int x, int y)
{
    return new (Active::pool.create()) HudBackdrop(x, y);
}
class PopupCloudText : public Text
{
public:
    PopupCloudText(int x, int y) : Text(x, y, popupCloudText_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("ButtonText 2", 12);
#endif
        flags &= ~SCROLL;
        width = 200;
        height = 52;
        blend_color = Color(8, 0, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("tutText", 7));
        create_alterables();
    }
};
FrameObject * create_popupCloudText(int x, int y)
{
    return new (Text::pool.create()) PopupCloudText(x, y);
}
static Image* images_tmp_448_0_0[1];
static Direction direction_tmp_448_0_0 = {0, 50, 50, 0, 1, images_tmp_448_0_0, 1};
static Animation anim_tmp_448_0 = {&direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, NULL, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0, &direction_tmp_448_0_0};
static Animation * anim_array_tmp_448[1] = {&anim_tmp_448_0};
static Animations anim_tmp_448 = {1, &anim_array_tmp_448[0]};
static bool anim_tmp_448_initialized;
class Tmp_448 : public Active
{
public:
    Tmp_448(int x, int y) : Active(x, y, Tmp_448_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("tmp", 3);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_tmp_448;
        if (!anim_tmp_448_initialized) {
            anim_tmp_448_initialized = true;
            images_tmp_448_0_0[0] = get_internal_image(2371);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_tmp_448(int x, int y)
{
    return new (Active::pool.create()) Tmp_448(x, y);
}
class ButtonText3_449 : public Text
{
public:
    ButtonText3_449(int x, int y) : Text(x, y, ButtonText3_449_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("ButtonText 3", 12);
#endif
        flags &= ~SCROLL;
        width = 144;
        height = 52;
        blend_color = Color(8, 0, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_BOTTOM;
        add_line(std::string("speech", 6));
        create_alterables();
    }
};
FrameObject * create_buttontext3_449(int x, int y)
{
    return new (Text::pool.create()) ButtonText3_449(x, y);
}
class ActiveSystemBox_450 : public SystemBox
{
public:
    ActiveSystemBox_450(int x, int y) : SystemBox(x, y, ActiveSystemBox_450_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active System Box", 17);
#endif
        width = 109;
        height = 59;
        image = NULL;
        blend_color = Color(169, 230, 252);
        create_alterables();
    }
};
FrameObject * create_activesystembox_450(int x, int y)
{
    return new (SystemBox::pool.create()) ActiveSystemBox_450(x, y);
}
class ItemData : public INI
{
public:
    ItemData(int x, int y) : INI(x, y, itemData_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("INI_ITEMS", 9);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_itemData(int x, int y)
{
    return new (INI::pool.create()) ItemData(x, y);
}
class INISPEECH_453 : public INI
{
public:
    INISPEECH_453(int x, int y) : INI(x, y, INISPEECH_453_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("INI_SPEECH", 10);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_inispeech_453(int x, int y)
{
    return new (INI::pool.create()) INISPEECH_453(x, y);
}
static Image* images_ziplinesniffer_454_0_0[1];
static Direction direction_ziplinesniffer_454_0_0 = {0, 50, 50, 0, -1, images_ziplinesniffer_454_0_0, 1};
static Animation anim_ziplinesniffer_454_0 = {&direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, NULL, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0, &direction_ziplinesniffer_454_0_0};
static Image* images_ziplinesniffer_454_5_0[1];
static Direction direction_ziplinesniffer_454_5_0 = {0, 50, 50, 0, -1, images_ziplinesniffer_454_5_0, 1};
static Animation anim_ziplinesniffer_454_5 = {&direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, NULL, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0, &direction_ziplinesniffer_454_5_0};
static Animation * anim_array_ziplinesniffer_454[6] = {&anim_ziplinesniffer_454_0, NULL, NULL, NULL, NULL, &anim_ziplinesniffer_454_5};
static Animations anim_ziplinesniffer_454 = {6, &anim_array_ziplinesniffer_454[0]};
static bool anim_ziplinesniffer_454_initialized;
class ZipLineSniffer_454 : public Active
{
public:
    ZipLineSniffer_454(int x, int y) : Active(x, y, ZipLineSniffer_454_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Zip Line Sniffer", 16);
#endif
        this->animations = &anim_ziplinesniffer_454;
        if (!anim_ziplinesniffer_454_initialized) {
            anim_ziplinesniffer_454_initialized = true;
            images_ziplinesniffer_454_0_0[0] = get_internal_image(2396);
            images_ziplinesniffer_454_5_0[0] = get_internal_image(2400);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        movement->flags |= Movement::MOVE_AT_START;
        ((BallMovement*)movement)->set_max_speed(60);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 20;
        ((BallMovement*)movement)->init();
        create_alterables();
    }
};
FrameObject * create_ziplinesniffer_454(int x, int y)
{
    return new (Active::pool.create()) ZipLineSniffer_454(x, y);
}
static Image* images_doorutilityvents_457_0_0[1];
static Direction direction_doorutilityvents_457_0_0 = {0, 50, 50, 0, 1, images_doorutilityvents_457_0_0, 1};
static Image* images_doorutilityvents_457_0_16[1];
static Direction direction_doorutilityvents_457_0_16 = {16, 50, 50, 0, 1, images_doorutilityvents_457_0_16, 1};
static Animation anim_doorutilityvents_457_0 = {&direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, NULL, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, &direction_doorutilityvents_457_0_16, NULL, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0, &direction_doorutilityvents_457_0_0};
static Animation * anim_array_doorutilityvents_457[1] = {&anim_doorutilityvents_457_0};
static Animations anim_doorutilityvents_457 = {1, &anim_array_doorutilityvents_457[0]};
static bool anim_doorutilityvents_457_initialized;
class DoorUtilityVents_457 : public Active
{
public:
    DoorUtilityVents_457(int x, int y) : Active(x, y, DoorUtilityVents_457_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Utility (vents)", 22);
#endif
        this->animations = &anim_doorutilityvents_457;
        if (!anim_doorutilityvents_457_initialized) {
            anim_doorutilityvents_457_initialized = true;
            images_doorutilityvents_457_0_0[0] = get_internal_image(1223);
            images_doorutilityvents_457_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_utility_18);
    }
};
FrameObject * create_doorutilityvents_457(int x, int y)
{
    return new (Active::pool.create()) DoorUtilityVents_457(x, y);
}
static Image* images_jeepscan_458_0_0[1];
static Direction direction_jeepscan_458_0_0 = {0, 50, 50, 0, 1, images_jeepscan_458_0_0, 1};
static Animation anim_jeepscan_458_0 = {&direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, NULL, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0, &direction_jeepscan_458_0_0};
static Animation * anim_array_jeepscan_458[1] = {&anim_jeepscan_458_0};
static Animations anim_jeepscan_458 = {1, &anim_array_jeepscan_458[0]};
static bool anim_jeepscan_458_initialized;
class JeepScan_458 : public Active
{
public:
    JeepScan_458(int x, int y) : Active(x, y, JeepScan_458_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("JeepScan", 8);
#endif
        set_visible(false);
        this->animations = &anim_jeepscan_458;
        if (!anim_jeepscan_458_initialized) {
            anim_jeepscan_458_initialized = true;
            images_jeepscan_458_0_0[0] = get_internal_image(1462);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_jeepscan_458(int x, int y)
{
    return new (Active::pool.create()) JeepScan_458(x, y);
}
static Image* images_alcaboat_459_0_0[2];
static Direction direction_alcaboat_459_0_0 = {0, 5, 5, 0, -1, images_alcaboat_459_0_0, 2};
static Animation anim_alcaboat_459_0 = {&direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, NULL, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0, &direction_alcaboat_459_0_0};
static Image* images_alcaboat_459_5_0[2];
static Direction direction_alcaboat_459_5_0 = {0, 3, 3, 0, -1, images_alcaboat_459_5_0, 2};
static Animation anim_alcaboat_459_5 = {&direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, NULL, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0, &direction_alcaboat_459_5_0};
static Animation * anim_array_alcaboat_459[6] = {&anim_alcaboat_459_0, NULL, NULL, NULL, NULL, &anim_alcaboat_459_5};
static Animations anim_alcaboat_459 = {6, &anim_array_alcaboat_459[0]};
static bool anim_alcaboat_459_initialized;
class AlcaBoat_459 : public Active
{
public:
    AlcaBoat_459(int x, int y) : Active(x, y, AlcaBoat_459_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("AlcaBoat", 8);
#endif
        this->animations = &anim_alcaboat_459;
        if (!anim_alcaboat_459_initialized) {
            anim_alcaboat_459_initialized = true;
            images_alcaboat_459_0_0[0] = get_internal_image(1513);
            images_alcaboat_459_0_0[1] = get_internal_image(1514);
            images_alcaboat_459_5_0[0] = get_internal_image(3914);
            images_alcaboat_459_5_0[1] = get_internal_image(3917);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_alcaboat_459(int x, int y)
{
    return new (Active::pool.create()) AlcaBoat_459(x, y);
}
static Image* images_shadoverride_460_0_0[1];
static Direction direction_shadoverride_460_0_0 = {0, 50, 50, 0, -1, images_shadoverride_460_0_0, 1};
static Image* images_shadoverride_460_0_8[1];
static Direction direction_shadoverride_460_0_8 = {8, 50, 50, 0, -1, images_shadoverride_460_0_8, 1};
static Image* images_shadoverride_460_0_16[1];
static Direction direction_shadoverride_460_0_16 = {16, 50, 50, 0, -1, images_shadoverride_460_0_16, 1};
static Animation anim_shadoverride_460_0 = {&direction_shadoverride_460_0_0, &direction_shadoverride_460_0_0, &direction_shadoverride_460_0_0, &direction_shadoverride_460_0_0, NULL, &direction_shadoverride_460_0_8, &direction_shadoverride_460_0_8, &direction_shadoverride_460_0_8, &direction_shadoverride_460_0_8, &direction_shadoverride_460_0_8, &direction_shadoverride_460_0_8, &direction_shadoverride_460_0_8, NULL, &direction_shadoverride_460_0_16, &direction_shadoverride_460_0_16, &direction_shadoverride_460_0_16, &direction_shadoverride_460_0_16, &direction_shadoverride_460_0_16, &direction_shadoverride_460_0_16, &direction_shadoverride_460_0_16, &direction_shadoverride_460_0_16, &direction_shadoverride_460_0_16, &direction_shadoverride_460_0_16, &direction_shadoverride_460_0_16, NULL, &direction_shadoverride_460_0_0, &direction_shadoverride_460_0_0, &direction_shadoverride_460_0_0, &direction_shadoverride_460_0_0, &direction_shadoverride_460_0_0, &direction_shadoverride_460_0_0, &direction_shadoverride_460_0_0};
static Animation * anim_array_shadoverride_460[1] = {&anim_shadoverride_460_0};
static Animations anim_shadoverride_460 = {1, &anim_array_shadoverride_460[0]};
static bool anim_shadoverride_460_initialized;
class ShadOverride_460 : public Active
{
public:
    ShadOverride_460(int x, int y) : Active(x, y, ShadOverride_460_type)
    {
        // qualifiers: 87
#ifndef NDEBUG
        name = std::string("Shad_Override", 13);
#endif
        this->animations = &anim_shadoverride_460;
        if (!anim_shadoverride_460_initialized) {
            anim_shadoverride_460_initialized = true;
            images_shadoverride_460_0_0[0] = get_internal_image(2415);
            images_shadoverride_460_0_8[0] = get_internal_image(2413);
            images_shadoverride_460_0_16[0] = get_internal_image(2424);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_shadoverride_460(int x, int y)
{
    return new (Active::pool.create()) ShadOverride_460(x, y);
}
class TmpArray_461 : public ArrayObject
{
public:
    TmpArray_461(int x, int y) : ArrayObject(x, y, TmpArray_461_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("tmp_array", 9);
#endif
        initialize(true, 1, 125, 125, 5);
    }
};
FrameObject * create_tmparray_461(int x, int y)
{
    return new (ArrayObject::pool.create()) TmpArray_461(x, y);
}
static Image* images_weeds_462_1_0[4];
static Direction direction_weeds_462_1_0 = {0, 5, 5, 0, -1, images_weeds_462_1_0, 4};
static Animation anim_weeds_462_1 = {&direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, NULL, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0, &direction_weeds_462_1_0};
static Animation * anim_array_weeds_462[2] = {NULL, &anim_weeds_462_1};
static Animations anim_weeds_462 = {2, &anim_array_weeds_462[0]};
static bool anim_weeds_462_initialized;
class Weeds_462 : public Active
{
public:
    Weeds_462(int x, int y) : Active(x, y, Weeds_462_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Weeds", 5);
#endif
        this->animations = &anim_weeds_462;
        if (!anim_weeds_462_initialized) {
            anim_weeds_462_initialized = true;
            images_weeds_462_1_0[0] = get_internal_image(774);
            images_weeds_462_1_0[1] = get_internal_image(603);
            images_weeds_462_1_0[2] = get_internal_image(810);
            images_weeds_462_1_0[3] = get_internal_image(603);
        }
        active_flags |= TRANSPARENT;
        animation = WALKING;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 155);
        create_alterables();
    }
};
FrameObject * create_weeds_462(int x, int y)
{
    return new (Active::pool.create()) Weeds_462(x, y);
}
static Image* images_bullet_463_0_0[2];
static Direction direction_bullet_463_0_0 = {0, 30, 30, 0, -1, images_bullet_463_0_0, 2};
static Animation anim_bullet_463_0 = {&direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, NULL, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0, &direction_bullet_463_0_0};
static Animation * anim_array_bullet_463[1] = {&anim_bullet_463_0};
static Animations anim_bullet_463 = {1, &anim_array_bullet_463[0]};
static bool anim_bullet_463_initialized;
class Bullet_463 : public Active
{
public:
    Bullet_463(int x, int y) : Active(x, y, Bullet_463_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("bullet", 6);
#endif
        this->animations = &anim_bullet_463;
        if (!anim_bullet_463_initialized) {
            anim_bullet_463_initialized = true;
            images_bullet_463_0_0[0] = get_internal_image(2445);
            images_bullet_463_0_0[1] = get_internal_image(2429);
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
        alterables->values.set(1, 10);
    }
};
FrameObject * create_bullet_463(int x, int y)
{
    return new (Active::pool.create()) Bullet_463(x, y);
}
static Image* images_bullet2_464_0_0[2];
static Direction direction_bullet2_464_0_0 = {0, 30, 30, 0, -1, images_bullet2_464_0_0, 2};
static Animation anim_bullet2_464_0 = {&direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, NULL, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0, &direction_bullet2_464_0_0};
static Animation * anim_array_bullet2_464[1] = {&anim_bullet2_464_0};
static Animations anim_bullet2_464 = {1, &anim_array_bullet2_464[0]};
static bool anim_bullet2_464_initialized;
class Bullet2_464 : public Active
{
public:
    Bullet2_464(int x, int y) : Active(x, y, Bullet2_464_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("bullet 2", 8);
#endif
        this->animations = &anim_bullet2_464;
        if (!anim_bullet2_464_initialized) {
            anim_bullet2_464_initialized = true;
            images_bullet2_464_0_0[0] = get_internal_image(2452);
            images_bullet2_464_0_0[1] = get_internal_image(2429);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(6, 50);
    }
};
FrameObject * create_bullet2_464(int x, int y)
{
    return new (Active::pool.create()) Bullet2_464(x, y);
}
static Image* images_doornormal_465_0_0[1];
static Direction direction_doornormal_465_0_0 = {0, 50, 50, 0, -1, images_doornormal_465_0_0, 1};
static Image* images_doornormal_465_0_16[1];
static Direction direction_doornormal_465_0_16 = {16, 50, 50, 0, -1, images_doornormal_465_0_16, 1};
static Animation anim_doornormal_465_0 = {&direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, NULL, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, &direction_doornormal_465_0_16, NULL, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0, &direction_doornormal_465_0_0};
static Animation * anim_array_doornormal_465[1] = {&anim_doornormal_465_0};
static Animations anim_doornormal_465 = {1, &anim_array_doornormal_465[0]};
static bool anim_doornormal_465_initialized;
class DoorNormal_465 : public Active
{
public:
    DoorNormal_465(int x, int y) : Active(x, y, DoorNormal_465_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - normal", 13);
#endif
        this->animations = &anim_doornormal_465;
        if (!anim_doornormal_465_initialized) {
            anim_doornormal_465_initialized = true;
            images_doornormal_465_0_0[0] = get_internal_image(2451);
            images_doornormal_465_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_regular_50);
    }
};
FrameObject * create_doornormal_465(int x, int y)
{
    return new (Active::pool.create()) DoorNormal_465(x, y);
}
static Image* images_snoozy_466_0_0[1];
static Direction direction_snoozy_466_0_0 = {0, 5, 5, 0, -1, images_snoozy_466_0_0, 1};
static Animation anim_snoozy_466_0 = {&direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, NULL, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0, &direction_snoozy_466_0_0};
static Animation * anim_array_snoozy_466[1] = {&anim_snoozy_466_0};
static Animations anim_snoozy_466 = {1, &anim_array_snoozy_466[0]};
static bool anim_snoozy_466_initialized;
class Snoozy_466 : public Active
{
public:
    Snoozy_466(int x, int y) : Active(x, y, Snoozy_466_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("snoozy", 6);
#endif
        this->animations = &anim_snoozy_466;
        if (!anim_snoozy_466_initialized) {
            anim_snoozy_466_initialized = true;
            images_snoozy_466_0_0[0] = get_internal_image(2454);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(5);
        movement = new BallMovement(this);
        movement->index = 0;
        movement->flags |= Movement::MOVE_AT_START;
        ((BallMovement*)movement)->set_max_speed(4);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 20;
        ((BallMovement*)movement)->init();
        create_alterables();
        alterables->values.set(0, 30);
    }
};
FrameObject * create_snoozy_466(int x, int y)
{
    return new (Active::pool.create()) Snoozy_466(x, y);
}
static Image* images_dizzy_467_0_0[4];
static Direction direction_dizzy_467_0_0 = {0, 30, 30, 0, -1, images_dizzy_467_0_0, 4};
static Animation anim_dizzy_467_0 = {&direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, NULL, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0, &direction_dizzy_467_0_0};
static Animation * anim_array_dizzy_467[1] = {&anim_dizzy_467_0};
static Animations anim_dizzy_467 = {1, &anim_array_dizzy_467[0]};
static bool anim_dizzy_467_initialized;
class Dizzy_467 : public Active
{
public:
    Dizzy_467(int x, int y) : Active(x, y, Dizzy_467_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("dizzy", 5);
#endif
        this->animations = &anim_dizzy_467;
        if (!anim_dizzy_467_initialized) {
            anim_dizzy_467_initialized = true;
            images_dizzy_467_0_0[0] = get_internal_image(2466);
            images_dizzy_467_0_0[1] = get_internal_image(2461);
            images_dizzy_467_0_0[2] = get_internal_image(2467);
            images_dizzy_467_0_0[3] = get_internal_image(2460);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, -30);
    }
};
FrameObject * create_dizzy_467(int x, int y)
{
    return new (Active::pool.create()) Dizzy_467(x, y);
}
class NEWMAPINI_468 : public INI
{
public:
    NEWMAPINI_468(int x, int y) : INI(x, y, NEWMAPINI_468_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NEW_MAP_INI", 11);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_newmapini_468(int x, int y)
{
    return new (INI::pool.create()) NEWMAPINI_468(x, y);
}
class SteamWorks2_469 : public SteamObject
{
public:
    SteamWorks2_469(int x, int y) : SteamObject(x, y, SteamWorks2_469_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("_SteamWorks 2", 13);
#endif
    }
};
FrameObject * create_steamworks2_469(int x, int y)
{
    return new (SteamObject::pool.create()) SteamWorks2_469(x, y);
}
class WardenNote_470 : public SystemBox
{
public:
    WardenNote_470(int x, int y) : SystemBox(x, y, WardenNote_470_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("warden note", 11);
#endif
        flags &= ~SCROLL;
        width = 234;
        height = 125;
        image = NULL;
        blend_color = Color(235, 235, 235);
        create_alterables();
    }
};
FrameObject * create_wardennote_470(int x, int y)
{
    return new (SystemBox::pool.create()) WardenNote_470(x, y);
}
class SAVEMapname_471 : public INI
{
public:
    SAVEMapname_471(int x, int y) : INI(x, y, SAVEMapname_471_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SAVE_mapname", 12);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_savemapname_471(int x, int y)
{
    return new (INI::pool.create()) SAVEMapname_471(x, y);
}
class FileSave_473 : public INI
{
public:
    FileSave_473(int x, int y) : INI(x, y, FileSave_473_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("file_save ", 10);
#endif
        is_global = false;
        data = new SectionMap();
        create_alterables();
    }
};
FrameObject * create_filesave_473(int x, int y)
{
    return new (INI::pool.create()) FileSave_473(x, y);
}
static Image* images_eteamtank_474_2_0[1];
static Direction direction_eteamtank_474_2_0 = {0, 50, 50, 0, -1, images_eteamtank_474_2_0, 1};
static Animation anim_eteamtank_474_2 = {&direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, NULL, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0, &direction_eteamtank_474_2_0};
static Image* images_eteamtank_474_5_0[1];
static Direction direction_eteamtank_474_5_0 = {0, 50, 50, 0, -1, images_eteamtank_474_5_0, 1};
static Animation anim_eteamtank_474_5 = {&direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, NULL, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0, &direction_eteamtank_474_5_0};
static Image* images_eteamtank_474_6_0[3];
static Direction direction_eteamtank_474_6_0 = {0, 15, 15, 2, -1, images_eteamtank_474_6_0, 3};
static Animation anim_eteamtank_474_6 = {&direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, NULL, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0, &direction_eteamtank_474_6_0};
static Animation * anim_array_eteamtank_474[7] = {NULL, NULL, &anim_eteamtank_474_2, NULL, NULL, &anim_eteamtank_474_5, &anim_eteamtank_474_6};
static Animations anim_eteamtank_474 = {7, &anim_array_eteamtank_474[0]};
static bool anim_eteamtank_474_initialized;
class ETEAMTank_474 : public Active
{
public:
    ETEAMTank_474(int x, int y) : Active(x, y, ETEAMTank_474_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("ETEAM_tank", 10);
#endif
        this->animations = &anim_eteamtank_474;
        if (!anim_eteamtank_474_initialized) {
            anim_eteamtank_474_initialized = true;
            images_eteamtank_474_2_0[0] = get_internal_image(2499);
            images_eteamtank_474_5_0[0] = get_internal_image(2563);
            images_eteamtank_474_6_0[0] = get_internal_image(2566);
            images_eteamtank_474_6_0[1] = get_internal_image(2569);
            images_eteamtank_474_6_0[2] = get_internal_image(2563);
        }
        active_flags |= TRANSPARENT;
        animation = RUNNING;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_eteamtank_474(int x, int y)
{
    return new (Active::pool.create()) ETEAMTank_474(x, y);
}
static Image* images_eteamtank2_475_0_0[1];
static Direction direction_eteamtank2_475_0_0 = {0, 50, 50, 0, 1, images_eteamtank2_475_0_0, 1};
static Image* images_eteamtank2_475_0_16[1];
static Direction direction_eteamtank2_475_0_16 = {16, 50, 50, 0, 1, images_eteamtank2_475_0_16, 1};
static Image* images_eteamtank2_475_0_24[15];
static Direction direction_eteamtank2_475_0_24 = {24, 15, 15, 0, -1, images_eteamtank2_475_0_24, 15};
static Animation anim_eteamtank2_475_0 = {&direction_eteamtank2_475_0_0, &direction_eteamtank2_475_0_0, &direction_eteamtank2_475_0_0, &direction_eteamtank2_475_0_0, &direction_eteamtank2_475_0_0, &direction_eteamtank2_475_0_0, &direction_eteamtank2_475_0_0, &direction_eteamtank2_475_0_0, NULL, &direction_eteamtank2_475_0_16, &direction_eteamtank2_475_0_16, &direction_eteamtank2_475_0_16, &direction_eteamtank2_475_0_16, &direction_eteamtank2_475_0_16, &direction_eteamtank2_475_0_16, &direction_eteamtank2_475_0_16, &direction_eteamtank2_475_0_16, &direction_eteamtank2_475_0_16, &direction_eteamtank2_475_0_16, &direction_eteamtank2_475_0_16, NULL, &direction_eteamtank2_475_0_24, &direction_eteamtank2_475_0_24, &direction_eteamtank2_475_0_24, &direction_eteamtank2_475_0_24, &direction_eteamtank2_475_0_24, &direction_eteamtank2_475_0_24, &direction_eteamtank2_475_0_24, NULL, &direction_eteamtank2_475_0_0, &direction_eteamtank2_475_0_0, &direction_eteamtank2_475_0_0};
static Animation * anim_array_eteamtank2_475[1] = {&anim_eteamtank2_475_0};
static Animations anim_eteamtank2_475 = {1, &anim_array_eteamtank2_475[0]};
static bool anim_eteamtank2_475_initialized;
class ETEAMTank2_475 : public Active
{
public:
    ETEAMTank2_475(int x, int y) : Active(x, y, ETEAMTank2_475_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ETEAM_tank 2", 12);
#endif
        this->animations = &anim_eteamtank2_475;
        if (!anim_eteamtank2_475_initialized) {
            anim_eteamtank2_475_initialized = true;
            images_eteamtank2_475_0_0[0] = get_internal_image(2760);
            images_eteamtank2_475_0_16[0] = get_internal_image(2503);
            images_eteamtank2_475_0_24[0] = get_internal_image(2579);
            images_eteamtank2_475_0_24[1] = get_internal_image(2579);
            images_eteamtank2_475_0_24[2] = get_internal_image(2556);
            images_eteamtank2_475_0_24[3] = get_internal_image(2565);
            images_eteamtank2_475_0_24[4] = get_internal_image(2571);
            images_eteamtank2_475_0_24[5] = get_internal_image(2579);
            images_eteamtank2_475_0_24[6] = get_internal_image(2579);
            images_eteamtank2_475_0_24[7] = get_internal_image(2579);
            images_eteamtank2_475_0_24[8] = get_internal_image(2579);
            images_eteamtank2_475_0_24[9] = get_internal_image(2579);
            images_eteamtank2_475_0_24[10] = get_internal_image(2579);
            images_eteamtank2_475_0_24[11] = get_internal_image(2579);
            images_eteamtank2_475_0_24[12] = get_internal_image(2579);
            images_eteamtank2_475_0_24[13] = get_internal_image(2579);
            images_eteamtank2_475_0_24[14] = get_internal_image(2579);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_eteamtank2_475(int x, int y)
{
    return new (Active::pool.create()) ETEAMTank2_475(x, y);
}
static Image* images_outfitguardescteam_476_0_0[2];
static Direction direction_outfitguardescteam_476_0_0 = {0, 6, 6, 0, -1, images_outfitguardescteam_476_0_0, 2};
static Image* images_outfitguardescteam_476_0_8[2];
static Direction direction_outfitguardescteam_476_0_8 = {8, 6, 6, 0, -1, images_outfitguardescteam_476_0_8, 2};
static Image* images_outfitguardescteam_476_0_16[2];
static Direction direction_outfitguardescteam_476_0_16 = {16, 6, 6, 0, -1, images_outfitguardescteam_476_0_16, 2};
static Image* images_outfitguardescteam_476_0_24[2];
static Direction direction_outfitguardescteam_476_0_24 = {24, 6, 6, 0, -1, images_outfitguardescteam_476_0_24, 2};
static Animation anim_outfitguardescteam_476_0 = {&direction_outfitguardescteam_476_0_0, &direction_outfitguardescteam_476_0_0, &direction_outfitguardescteam_476_0_0, &direction_outfitguardescteam_476_0_0, NULL, &direction_outfitguardescteam_476_0_8, &direction_outfitguardescteam_476_0_8, &direction_outfitguardescteam_476_0_8, &direction_outfitguardescteam_476_0_8, &direction_outfitguardescteam_476_0_8, &direction_outfitguardescteam_476_0_8, &direction_outfitguardescteam_476_0_8, NULL, &direction_outfitguardescteam_476_0_16, &direction_outfitguardescteam_476_0_16, &direction_outfitguardescteam_476_0_16, &direction_outfitguardescteam_476_0_16, &direction_outfitguardescteam_476_0_16, &direction_outfitguardescteam_476_0_16, &direction_outfitguardescteam_476_0_16, NULL, &direction_outfitguardescteam_476_0_24, &direction_outfitguardescteam_476_0_24, &direction_outfitguardescteam_476_0_24, &direction_outfitguardescteam_476_0_24, &direction_outfitguardescteam_476_0_24, &direction_outfitguardescteam_476_0_24, &direction_outfitguardescteam_476_0_24, NULL, &direction_outfitguardescteam_476_0_0, &direction_outfitguardescteam_476_0_0, &direction_outfitguardescteam_476_0_0};
static Image* images_outfitguardescteam_476_6_0[1];
static Direction direction_outfitguardescteam_476_6_0 = {0, 6, 6, 0, 1, images_outfitguardescteam_476_6_0, 1};
static Image* images_outfitguardescteam_476_6_8[1];
static Direction direction_outfitguardescteam_476_6_8 = {8, 6, 6, 0, 1, images_outfitguardescteam_476_6_8, 1};
static Image* images_outfitguardescteam_476_6_16[1];
static Direction direction_outfitguardescteam_476_6_16 = {16, 6, 6, 0, 1, images_outfitguardescteam_476_6_16, 1};
static Image* images_outfitguardescteam_476_6_24[1];
static Direction direction_outfitguardescteam_476_6_24 = {24, 6, 6, 0, 1, images_outfitguardescteam_476_6_24, 1};
static Animation anim_outfitguardescteam_476_6 = {&direction_outfitguardescteam_476_6_0, &direction_outfitguardescteam_476_6_0, &direction_outfitguardescteam_476_6_0, &direction_outfitguardescteam_476_6_0, NULL, &direction_outfitguardescteam_476_6_8, &direction_outfitguardescteam_476_6_8, &direction_outfitguardescteam_476_6_8, &direction_outfitguardescteam_476_6_8, &direction_outfitguardescteam_476_6_8, &direction_outfitguardescteam_476_6_8, &direction_outfitguardescteam_476_6_8, NULL, &direction_outfitguardescteam_476_6_16, &direction_outfitguardescteam_476_6_16, &direction_outfitguardescteam_476_6_16, &direction_outfitguardescteam_476_6_16, &direction_outfitguardescteam_476_6_16, &direction_outfitguardescteam_476_6_16, &direction_outfitguardescteam_476_6_16, NULL, &direction_outfitguardescteam_476_6_24, &direction_outfitguardescteam_476_6_24, &direction_outfitguardescteam_476_6_24, &direction_outfitguardescteam_476_6_24, &direction_outfitguardescteam_476_6_24, &direction_outfitguardescteam_476_6_24, &direction_outfitguardescteam_476_6_24, NULL, &direction_outfitguardescteam_476_6_0, &direction_outfitguardescteam_476_6_0, &direction_outfitguardescteam_476_6_0};
static Image* images_outfitguardescteam_476_7_0[2];
static Direction direction_outfitguardescteam_476_7_0 = {0, 10, 10, 0, -1, images_outfitguardescteam_476_7_0, 2};
static Image* images_outfitguardescteam_476_7_8[2];
static Direction direction_outfitguardescteam_476_7_8 = {8, 10, 10, 0, -1, images_outfitguardescteam_476_7_8, 2};
static Image* images_outfitguardescteam_476_7_16[2];
static Direction direction_outfitguardescteam_476_7_16 = {16, 10, 10, 0, -1, images_outfitguardescteam_476_7_16, 2};
static Image* images_outfitguardescteam_476_7_24[2];
static Direction direction_outfitguardescteam_476_7_24 = {24, 10, 10, 0, -1, images_outfitguardescteam_476_7_24, 2};
static Animation anim_outfitguardescteam_476_7 = {&direction_outfitguardescteam_476_7_0, &direction_outfitguardescteam_476_7_0, &direction_outfitguardescteam_476_7_0, &direction_outfitguardescteam_476_7_0, NULL, &direction_outfitguardescteam_476_7_8, &direction_outfitguardescteam_476_7_8, &direction_outfitguardescteam_476_7_8, &direction_outfitguardescteam_476_7_8, &direction_outfitguardescteam_476_7_8, &direction_outfitguardescteam_476_7_8, &direction_outfitguardescteam_476_7_8, NULL, &direction_outfitguardescteam_476_7_16, &direction_outfitguardescteam_476_7_16, &direction_outfitguardescteam_476_7_16, &direction_outfitguardescteam_476_7_16, &direction_outfitguardescteam_476_7_16, &direction_outfitguardescteam_476_7_16, &direction_outfitguardescteam_476_7_16, NULL, &direction_outfitguardescteam_476_7_24, &direction_outfitguardescteam_476_7_24, &direction_outfitguardescteam_476_7_24, &direction_outfitguardescteam_476_7_24, &direction_outfitguardescteam_476_7_24, &direction_outfitguardescteam_476_7_24, &direction_outfitguardescteam_476_7_24, NULL, &direction_outfitguardescteam_476_7_0, &direction_outfitguardescteam_476_7_0, &direction_outfitguardescteam_476_7_0};
static Image* images_outfitguardescteam_476_8_0[1];
static Direction direction_outfitguardescteam_476_8_0 = {0, 50, 50, 0, -1, images_outfitguardescteam_476_8_0, 1};
static Image* images_outfitguardescteam_476_8_16[2];
static Direction direction_outfitguardescteam_476_8_16 = {16, 50, 50, 0, 1, images_outfitguardescteam_476_8_16, 2};
static Image* images_outfitguardescteam_476_8_24[3];
static Direction direction_outfitguardescteam_476_8_24 = {24, 50, 50, 0, -1, images_outfitguardescteam_476_8_24, 3};
static Animation anim_outfitguardescteam_476_8 = {&direction_outfitguardescteam_476_8_0, &direction_outfitguardescteam_476_8_0, &direction_outfitguardescteam_476_8_0, &direction_outfitguardescteam_476_8_0, &direction_outfitguardescteam_476_8_0, &direction_outfitguardescteam_476_8_0, &direction_outfitguardescteam_476_8_0, &direction_outfitguardescteam_476_8_0, NULL, &direction_outfitguardescteam_476_8_16, &direction_outfitguardescteam_476_8_16, &direction_outfitguardescteam_476_8_16, &direction_outfitguardescteam_476_8_16, &direction_outfitguardescteam_476_8_16, &direction_outfitguardescteam_476_8_16, &direction_outfitguardescteam_476_8_16, &direction_outfitguardescteam_476_8_16, &direction_outfitguardescteam_476_8_16, &direction_outfitguardescteam_476_8_16, &direction_outfitguardescteam_476_8_16, NULL, &direction_outfitguardescteam_476_8_24, &direction_outfitguardescteam_476_8_24, &direction_outfitguardescteam_476_8_24, &direction_outfitguardescteam_476_8_24, &direction_outfitguardescteam_476_8_24, &direction_outfitguardescteam_476_8_24, &direction_outfitguardescteam_476_8_24, NULL, &direction_outfitguardescteam_476_8_0, &direction_outfitguardescteam_476_8_0, &direction_outfitguardescteam_476_8_0};
static Image* images_outfitguardescteam_476_11_0[2];
static Direction direction_outfitguardescteam_476_11_0 = {0, 6, 6, 0, -1, images_outfitguardescteam_476_11_0, 2};
static Image* images_outfitguardescteam_476_11_8[2];
static Direction direction_outfitguardescteam_476_11_8 = {8, 6, 6, 0, -1, images_outfitguardescteam_476_11_8, 2};
static Image* images_outfitguardescteam_476_11_16[2];
static Direction direction_outfitguardescteam_476_11_16 = {16, 6, 6, 0, -1, images_outfitguardescteam_476_11_16, 2};
static Image* images_outfitguardescteam_476_11_24[2];
static Direction direction_outfitguardescteam_476_11_24 = {24, 6, 6, 0, -1, images_outfitguardescteam_476_11_24, 2};
static Animation anim_outfitguardescteam_476_11 = {&direction_outfitguardescteam_476_11_0, &direction_outfitguardescteam_476_11_0, &direction_outfitguardescteam_476_11_0, &direction_outfitguardescteam_476_11_0, NULL, &direction_outfitguardescteam_476_11_8, &direction_outfitguardescteam_476_11_8, &direction_outfitguardescteam_476_11_8, &direction_outfitguardescteam_476_11_8, &direction_outfitguardescteam_476_11_8, &direction_outfitguardescteam_476_11_8, &direction_outfitguardescteam_476_11_8, NULL, &direction_outfitguardescteam_476_11_16, &direction_outfitguardescteam_476_11_16, &direction_outfitguardescteam_476_11_16, &direction_outfitguardescteam_476_11_16, &direction_outfitguardescteam_476_11_16, &direction_outfitguardescteam_476_11_16, &direction_outfitguardescteam_476_11_16, NULL, &direction_outfitguardescteam_476_11_24, &direction_outfitguardescteam_476_11_24, &direction_outfitguardescteam_476_11_24, &direction_outfitguardescteam_476_11_24, &direction_outfitguardescteam_476_11_24, &direction_outfitguardescteam_476_11_24, &direction_outfitguardescteam_476_11_24, NULL, &direction_outfitguardescteam_476_11_0, &direction_outfitguardescteam_476_11_0, &direction_outfitguardescteam_476_11_0};
static Image* images_outfitguardescteam_476_12_0[2];
static Direction direction_outfitguardescteam_476_12_0 = {0, 10, 10, 0, -1, images_outfitguardescteam_476_12_0, 2};
static Image* images_outfitguardescteam_476_12_8[2];
static Direction direction_outfitguardescteam_476_12_8 = {8, 10, 10, 0, -1, images_outfitguardescteam_476_12_8, 2};
static Image* images_outfitguardescteam_476_12_16[2];
static Direction direction_outfitguardescteam_476_12_16 = {16, 10, 10, 0, -1, images_outfitguardescteam_476_12_16, 2};
static Image* images_outfitguardescteam_476_12_24[2];
static Direction direction_outfitguardescteam_476_12_24 = {24, 10, 10, 0, -1, images_outfitguardescteam_476_12_24, 2};
static Animation anim_outfitguardescteam_476_12 = {&direction_outfitguardescteam_476_12_0, &direction_outfitguardescteam_476_12_0, &direction_outfitguardescteam_476_12_0, &direction_outfitguardescteam_476_12_0, NULL, &direction_outfitguardescteam_476_12_8, &direction_outfitguardescteam_476_12_8, &direction_outfitguardescteam_476_12_8, &direction_outfitguardescteam_476_12_8, &direction_outfitguardescteam_476_12_8, &direction_outfitguardescteam_476_12_8, &direction_outfitguardescteam_476_12_8, NULL, &direction_outfitguardescteam_476_12_16, &direction_outfitguardescteam_476_12_16, &direction_outfitguardescteam_476_12_16, &direction_outfitguardescteam_476_12_16, &direction_outfitguardescteam_476_12_16, &direction_outfitguardescteam_476_12_16, &direction_outfitguardescteam_476_12_16, NULL, &direction_outfitguardescteam_476_12_24, &direction_outfitguardescteam_476_12_24, &direction_outfitguardescteam_476_12_24, &direction_outfitguardescteam_476_12_24, &direction_outfitguardescteam_476_12_24, &direction_outfitguardescteam_476_12_24, &direction_outfitguardescteam_476_12_24, NULL, &direction_outfitguardescteam_476_12_0, &direction_outfitguardescteam_476_12_0, &direction_outfitguardescteam_476_12_0};
static Image* images_outfitguardescteam_476_13_0[2];
static Direction direction_outfitguardescteam_476_13_0 = {0, 10, 10, 0, -1, images_outfitguardescteam_476_13_0, 2};
static Image* images_outfitguardescteam_476_13_8[2];
static Direction direction_outfitguardescteam_476_13_8 = {8, 10, 10, 0, -1, images_outfitguardescteam_476_13_8, 2};
static Image* images_outfitguardescteam_476_13_16[2];
static Direction direction_outfitguardescteam_476_13_16 = {16, 10, 10, 0, -1, images_outfitguardescteam_476_13_16, 2};
static Image* images_outfitguardescteam_476_13_24[2];
static Direction direction_outfitguardescteam_476_13_24 = {24, 10, 10, 0, -1, images_outfitguardescteam_476_13_24, 2};
static Animation anim_outfitguardescteam_476_13 = {&direction_outfitguardescteam_476_13_0, &direction_outfitguardescteam_476_13_0, &direction_outfitguardescteam_476_13_0, &direction_outfitguardescteam_476_13_0, NULL, &direction_outfitguardescteam_476_13_8, &direction_outfitguardescteam_476_13_8, &direction_outfitguardescteam_476_13_8, &direction_outfitguardescteam_476_13_8, &direction_outfitguardescteam_476_13_8, &direction_outfitguardescteam_476_13_8, &direction_outfitguardescteam_476_13_8, NULL, &direction_outfitguardescteam_476_13_16, &direction_outfitguardescteam_476_13_16, &direction_outfitguardescteam_476_13_16, &direction_outfitguardescteam_476_13_16, &direction_outfitguardescteam_476_13_16, &direction_outfitguardescteam_476_13_16, &direction_outfitguardescteam_476_13_16, NULL, &direction_outfitguardescteam_476_13_24, &direction_outfitguardescteam_476_13_24, &direction_outfitguardescteam_476_13_24, &direction_outfitguardescteam_476_13_24, &direction_outfitguardescteam_476_13_24, &direction_outfitguardescteam_476_13_24, &direction_outfitguardescteam_476_13_24, NULL, &direction_outfitguardescteam_476_13_0, &direction_outfitguardescteam_476_13_0, &direction_outfitguardescteam_476_13_0};
static Image* images_outfitguardescteam_476_14_0[2];
static Direction direction_outfitguardescteam_476_14_0 = {0, 10, 10, 0, -1, images_outfitguardescteam_476_14_0, 2};
static Image* images_outfitguardescteam_476_14_8[2];
static Direction direction_outfitguardescteam_476_14_8 = {8, 10, 10, 0, -1, images_outfitguardescteam_476_14_8, 2};
static Image* images_outfitguardescteam_476_14_16[2];
static Direction direction_outfitguardescteam_476_14_16 = {16, 10, 10, 0, -1, images_outfitguardescteam_476_14_16, 2};
static Image* images_outfitguardescteam_476_14_24[2];
static Direction direction_outfitguardescteam_476_14_24 = {24, 10, 10, 0, -1, images_outfitguardescteam_476_14_24, 2};
static Animation anim_outfitguardescteam_476_14 = {&direction_outfitguardescteam_476_14_0, &direction_outfitguardescteam_476_14_0, &direction_outfitguardescteam_476_14_0, &direction_outfitguardescteam_476_14_0, NULL, &direction_outfitguardescteam_476_14_8, &direction_outfitguardescteam_476_14_8, &direction_outfitguardescteam_476_14_8, &direction_outfitguardescteam_476_14_8, &direction_outfitguardescteam_476_14_8, &direction_outfitguardescteam_476_14_8, &direction_outfitguardescteam_476_14_8, NULL, &direction_outfitguardescteam_476_14_16, &direction_outfitguardescteam_476_14_16, &direction_outfitguardescteam_476_14_16, &direction_outfitguardescteam_476_14_16, &direction_outfitguardescteam_476_14_16, &direction_outfitguardescteam_476_14_16, &direction_outfitguardescteam_476_14_16, NULL, &direction_outfitguardescteam_476_14_24, &direction_outfitguardescteam_476_14_24, &direction_outfitguardescteam_476_14_24, &direction_outfitguardescteam_476_14_24, &direction_outfitguardescteam_476_14_24, &direction_outfitguardescteam_476_14_24, &direction_outfitguardescteam_476_14_24, NULL, &direction_outfitguardescteam_476_14_0, &direction_outfitguardescteam_476_14_0, &direction_outfitguardescteam_476_14_0};
static Image* images_outfitguardescteam_476_15_0[2];
static Direction direction_outfitguardescteam_476_15_0 = {0, 10, 10, 0, -1, images_outfitguardescteam_476_15_0, 2};
static Image* images_outfitguardescteam_476_15_8[2];
static Direction direction_outfitguardescteam_476_15_8 = {8, 10, 10, 0, -1, images_outfitguardescteam_476_15_8, 2};
static Image* images_outfitguardescteam_476_15_16[2];
static Direction direction_outfitguardescteam_476_15_16 = {16, 10, 10, 0, -1, images_outfitguardescteam_476_15_16, 2};
static Image* images_outfitguardescteam_476_15_24[2];
static Direction direction_outfitguardescteam_476_15_24 = {24, 10, 10, 0, -1, images_outfitguardescteam_476_15_24, 2};
static Animation anim_outfitguardescteam_476_15 = {&direction_outfitguardescteam_476_15_0, &direction_outfitguardescteam_476_15_0, &direction_outfitguardescteam_476_15_0, &direction_outfitguardescteam_476_15_0, NULL, &direction_outfitguardescteam_476_15_8, &direction_outfitguardescteam_476_15_8, &direction_outfitguardescteam_476_15_8, &direction_outfitguardescteam_476_15_8, &direction_outfitguardescteam_476_15_8, &direction_outfitguardescteam_476_15_8, &direction_outfitguardescteam_476_15_8, NULL, &direction_outfitguardescteam_476_15_16, &direction_outfitguardescteam_476_15_16, &direction_outfitguardescteam_476_15_16, &direction_outfitguardescteam_476_15_16, &direction_outfitguardescteam_476_15_16, &direction_outfitguardescteam_476_15_16, &direction_outfitguardescteam_476_15_16, NULL, &direction_outfitguardescteam_476_15_24, &direction_outfitguardescteam_476_15_24, &direction_outfitguardescteam_476_15_24, &direction_outfitguardescteam_476_15_24, &direction_outfitguardescteam_476_15_24, &direction_outfitguardescteam_476_15_24, &direction_outfitguardescteam_476_15_24, NULL, &direction_outfitguardescteam_476_15_0, &direction_outfitguardescteam_476_15_0, &direction_outfitguardescteam_476_15_0};
static Image* images_outfitguardescteam_476_16_0[2];
static Direction direction_outfitguardescteam_476_16_0 = {0, 10, 10, 0, -1, images_outfitguardescteam_476_16_0, 2};
static Image* images_outfitguardescteam_476_16_8[2];
static Direction direction_outfitguardescteam_476_16_8 = {8, 10, 10, 0, -1, images_outfitguardescteam_476_16_8, 2};
static Image* images_outfitguardescteam_476_16_16[2];
static Direction direction_outfitguardescteam_476_16_16 = {16, 10, 10, 0, -1, images_outfitguardescteam_476_16_16, 2};
static Image* images_outfitguardescteam_476_16_24[2];
static Direction direction_outfitguardescteam_476_16_24 = {24, 10, 10, 0, -1, images_outfitguardescteam_476_16_24, 2};
static Animation anim_outfitguardescteam_476_16 = {&direction_outfitguardescteam_476_16_0, &direction_outfitguardescteam_476_16_0, &direction_outfitguardescteam_476_16_0, &direction_outfitguardescteam_476_16_0, NULL, &direction_outfitguardescteam_476_16_8, &direction_outfitguardescteam_476_16_8, &direction_outfitguardescteam_476_16_8, &direction_outfitguardescteam_476_16_8, &direction_outfitguardescteam_476_16_8, &direction_outfitguardescteam_476_16_8, &direction_outfitguardescteam_476_16_8, NULL, &direction_outfitguardescteam_476_16_16, &direction_outfitguardescteam_476_16_16, &direction_outfitguardescteam_476_16_16, &direction_outfitguardescteam_476_16_16, &direction_outfitguardescteam_476_16_16, &direction_outfitguardescteam_476_16_16, &direction_outfitguardescteam_476_16_16, NULL, &direction_outfitguardescteam_476_16_24, &direction_outfitguardescteam_476_16_24, &direction_outfitguardescteam_476_16_24, &direction_outfitguardescteam_476_16_24, &direction_outfitguardescteam_476_16_24, &direction_outfitguardescteam_476_16_24, &direction_outfitguardescteam_476_16_24, NULL, &direction_outfitguardescteam_476_16_0, &direction_outfitguardescteam_476_16_0, &direction_outfitguardescteam_476_16_0};
static Image* images_outfitguardescteam_476_17_0[2];
static Direction direction_outfitguardescteam_476_17_0 = {0, 5, 5, 1, -1, images_outfitguardescteam_476_17_0, 2};
static Image* images_outfitguardescteam_476_17_8[2];
static Direction direction_outfitguardescteam_476_17_8 = {8, 5, 5, 1, -1, images_outfitguardescteam_476_17_8, 2};
static Image* images_outfitguardescteam_476_17_16[2];
static Direction direction_outfitguardescteam_476_17_16 = {16, 5, 5, 1, -1, images_outfitguardescteam_476_17_16, 2};
static Image* images_outfitguardescteam_476_17_24[2];
static Direction direction_outfitguardescteam_476_17_24 = {24, 5, 5, 1, -1, images_outfitguardescteam_476_17_24, 2};
static Animation anim_outfitguardescteam_476_17 = {&direction_outfitguardescteam_476_17_0, &direction_outfitguardescteam_476_17_0, &direction_outfitguardescteam_476_17_0, &direction_outfitguardescteam_476_17_0, NULL, &direction_outfitguardescteam_476_17_8, &direction_outfitguardescteam_476_17_8, &direction_outfitguardescteam_476_17_8, &direction_outfitguardescteam_476_17_8, &direction_outfitguardescteam_476_17_8, &direction_outfitguardescteam_476_17_8, &direction_outfitguardescteam_476_17_8, NULL, &direction_outfitguardescteam_476_17_16, &direction_outfitguardescteam_476_17_16, &direction_outfitguardescteam_476_17_16, &direction_outfitguardescteam_476_17_16, &direction_outfitguardescteam_476_17_16, &direction_outfitguardescteam_476_17_16, &direction_outfitguardescteam_476_17_16, NULL, &direction_outfitguardescteam_476_17_24, &direction_outfitguardescteam_476_17_24, &direction_outfitguardescteam_476_17_24, &direction_outfitguardescteam_476_17_24, &direction_outfitguardescteam_476_17_24, &direction_outfitguardescteam_476_17_24, &direction_outfitguardescteam_476_17_24, NULL, &direction_outfitguardescteam_476_17_0, &direction_outfitguardescteam_476_17_0, &direction_outfitguardescteam_476_17_0};
static Animation * anim_array_outfitguardescteam_476[18] = {&anim_outfitguardescteam_476_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitguardescteam_476_6, &anim_outfitguardescteam_476_7, &anim_outfitguardescteam_476_8, NULL, NULL, &anim_outfitguardescteam_476_11, &anim_outfitguardescteam_476_12, &anim_outfitguardescteam_476_13, &anim_outfitguardescteam_476_14, &anim_outfitguardescteam_476_15, &anim_outfitguardescteam_476_16, &anim_outfitguardescteam_476_17};
static Animations anim_outfitguardescteam_476 = {18, &anim_array_outfitguardescteam_476[0]};
static bool anim_outfitguardescteam_476_initialized;
class OutfitGuardEscTeam_476 : public Active
{
public:
    OutfitGuardEscTeam_476(int x, int y) : Active(x, y, OutfitGuardEscTeam_476_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Guard EscTeam", 22);
#endif
        this->animations = &anim_outfitguardescteam_476;
        if (!anim_outfitguardescteam_476_initialized) {
            anim_outfitguardescteam_476_initialized = true;
            images_outfitguardescteam_476_0_0[0] = get_internal_image(2494);
            images_outfitguardescteam_476_0_0[1] = get_internal_image(2500);
            images_outfitguardescteam_476_0_8[0] = get_internal_image(2547);
            images_outfitguardescteam_476_0_8[1] = get_internal_image(2548);
            images_outfitguardescteam_476_0_16[0] = get_internal_image(2498);
            images_outfitguardescteam_476_0_16[1] = get_internal_image(2513);
            images_outfitguardescteam_476_0_24[0] = get_internal_image(2514);
            images_outfitguardescteam_476_0_24[1] = get_internal_image(2546);
            images_outfitguardescteam_476_6_0[0] = get_internal_image(2550);
            images_outfitguardescteam_476_6_8[0] = get_internal_image(2552);
            images_outfitguardescteam_476_6_16[0] = get_internal_image(2551);
            images_outfitguardescteam_476_6_24[0] = get_internal_image(2549);
            images_outfitguardescteam_476_7_0[0] = get_internal_image(2787);
            images_outfitguardescteam_476_7_0[1] = get_internal_image(2788);
            images_outfitguardescteam_476_7_8[0] = get_internal_image(2791);
            images_outfitguardescteam_476_7_8[1] = get_internal_image(2792);
            images_outfitguardescteam_476_7_16[0] = get_internal_image(2789);
            images_outfitguardescteam_476_7_16[1] = get_internal_image(2790);
            images_outfitguardescteam_476_7_24[0] = get_internal_image(2793);
            images_outfitguardescteam_476_7_24[1] = get_internal_image(2794);
            images_outfitguardescteam_476_8_0[0] = get_internal_image(2554);
            images_outfitguardescteam_476_8_16[0] = get_internal_image(2557);
            images_outfitguardescteam_476_8_16[1] = get_internal_image(2559);
            images_outfitguardescteam_476_8_24[0] = get_internal_image(1486);
            images_outfitguardescteam_476_8_24[1] = get_internal_image(1486);
            images_outfitguardescteam_476_8_24[2] = get_internal_image(1486);
            images_outfitguardescteam_476_11_0[0] = get_internal_image(2771);
            images_outfitguardescteam_476_11_0[1] = get_internal_image(2772);
            images_outfitguardescteam_476_11_8[0] = get_internal_image(2775);
            images_outfitguardescteam_476_11_8[1] = get_internal_image(2776);
            images_outfitguardescteam_476_11_16[0] = get_internal_image(2773);
            images_outfitguardescteam_476_11_16[1] = get_internal_image(2774);
            images_outfitguardescteam_476_11_24[0] = get_internal_image(2779);
            images_outfitguardescteam_476_11_24[1] = get_internal_image(2778);
            images_outfitguardescteam_476_12_0[0] = get_internal_image(2781);
            images_outfitguardescteam_476_12_0[1] = get_internal_image(2777);
            images_outfitguardescteam_476_12_8[0] = get_internal_image(2784);
            images_outfitguardescteam_476_12_8[1] = get_internal_image(2786);
            images_outfitguardescteam_476_12_16[0] = get_internal_image(2783);
            images_outfitguardescteam_476_12_16[1] = get_internal_image(2782);
            images_outfitguardescteam_476_12_24[0] = get_internal_image(2785);
            images_outfitguardescteam_476_12_24[1] = get_internal_image(2780);
            images_outfitguardescteam_476_13_0[0] = get_internal_image(2289);
            images_outfitguardescteam_476_13_0[1] = get_internal_image(2317);
            images_outfitguardescteam_476_13_8[0] = get_internal_image(2288);
            images_outfitguardescteam_476_13_8[1] = get_internal_image(2309);
            images_outfitguardescteam_476_13_16[0] = get_internal_image(2316);
            images_outfitguardescteam_476_13_16[1] = get_internal_image(2310);
            images_outfitguardescteam_476_13_24[0] = get_internal_image(2254);
            images_outfitguardescteam_476_13_24[1] = get_internal_image(2182);
            images_outfitguardescteam_476_14_0[0] = get_internal_image(2801);
            images_outfitguardescteam_476_14_0[1] = get_internal_image(2799);
            images_outfitguardescteam_476_14_8[0] = get_internal_image(2797);
            images_outfitguardescteam_476_14_8[1] = get_internal_image(2798);
            images_outfitguardescteam_476_14_16[0] = get_internal_image(2800);
            images_outfitguardescteam_476_14_16[1] = get_internal_image(2802);
            images_outfitguardescteam_476_14_24[0] = get_internal_image(2795);
            images_outfitguardescteam_476_14_24[1] = get_internal_image(2796);
            images_outfitguardescteam_476_15_0[0] = get_internal_image(2765);
            images_outfitguardescteam_476_15_0[1] = get_internal_image(2766);
            images_outfitguardescteam_476_15_8[0] = get_internal_image(2769);
            images_outfitguardescteam_476_15_8[1] = get_internal_image(2770);
            images_outfitguardescteam_476_15_16[0] = get_internal_image(2763);
            images_outfitguardescteam_476_15_16[1] = get_internal_image(2764);
            images_outfitguardescteam_476_15_24[0] = get_internal_image(2767);
            images_outfitguardescteam_476_15_24[1] = get_internal_image(2768);
            images_outfitguardescteam_476_16_0[0] = get_internal_image(2804);
            images_outfitguardescteam_476_16_0[1] = get_internal_image(2806);
            images_outfitguardescteam_476_16_8[0] = get_internal_image(2809);
            images_outfitguardescteam_476_16_8[1] = get_internal_image(2810);
            images_outfitguardescteam_476_16_16[0] = get_internal_image(2805);
            images_outfitguardescteam_476_16_16[1] = get_internal_image(2803);
            images_outfitguardescteam_476_16_24[0] = get_internal_image(2807);
            images_outfitguardescteam_476_16_24[1] = get_internal_image(2808);
            images_outfitguardescteam_476_17_0[0] = get_internal_image(2188);
            images_outfitguardescteam_476_17_0[1] = get_internal_image(2325);
            images_outfitguardescteam_476_17_8[0] = get_internal_image(2298);
            images_outfitguardescteam_476_17_8[1] = get_internal_image(2299);
            images_outfitguardescteam_476_17_16[0] = get_internal_image(2194);
            images_outfitguardescteam_476_17_16[1] = get_internal_image(2314);
            images_outfitguardescteam_476_17_24[0] = get_internal_image(2190);
            images_outfitguardescteam_476_17_24[1] = get_internal_image(2294);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_outfitguardescteam_476(int x, int y)
{
    return new (Active::pool.create()) OutfitGuardEscTeam_476(x, y);
}
static Image* images_playerescteam_477_0_0[2];
static Direction direction_playerescteam_477_0_0 = {0, 10, 10, 0, -1, images_playerescteam_477_0_0, 2};
static Image* images_playerescteam_477_0_8[2];
static Direction direction_playerescteam_477_0_8 = {8, 10, 10, 0, -1, images_playerescteam_477_0_8, 2};
static Image* images_playerescteam_477_0_16[2];
static Direction direction_playerescteam_477_0_16 = {16, 10, 10, 0, -1, images_playerescteam_477_0_16, 2};
static Image* images_playerescteam_477_0_24[2];
static Direction direction_playerescteam_477_0_24 = {24, 10, 10, 0, -1, images_playerescteam_477_0_24, 2};
static Animation anim_playerescteam_477_0 = {&direction_playerescteam_477_0_0, &direction_playerescteam_477_0_0, &direction_playerescteam_477_0_0, &direction_playerescteam_477_0_0, NULL, &direction_playerescteam_477_0_8, &direction_playerescteam_477_0_8, &direction_playerescteam_477_0_8, &direction_playerescteam_477_0_8, &direction_playerescteam_477_0_8, &direction_playerescteam_477_0_8, &direction_playerescteam_477_0_8, NULL, &direction_playerescteam_477_0_16, &direction_playerescteam_477_0_16, &direction_playerescteam_477_0_16, &direction_playerescteam_477_0_16, &direction_playerescteam_477_0_16, &direction_playerescteam_477_0_16, &direction_playerescteam_477_0_16, NULL, &direction_playerescteam_477_0_24, &direction_playerescteam_477_0_24, &direction_playerescteam_477_0_24, &direction_playerescteam_477_0_24, &direction_playerescteam_477_0_24, &direction_playerescteam_477_0_24, &direction_playerescteam_477_0_24, NULL, &direction_playerescteam_477_0_0, &direction_playerescteam_477_0_0, &direction_playerescteam_477_0_0};
static Image* images_playerescteam_477_4_0[4];
static Direction direction_playerescteam_477_4_0 = {0, 20, 20, 0, 1, images_playerescteam_477_4_0, 4};
static Image* images_playerescteam_477_4_16[4];
static Direction direction_playerescteam_477_4_16 = {16, 20, 20, 0, 1, images_playerescteam_477_4_16, 4};
static Animation anim_playerescteam_477_4 = {&direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, NULL, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, &direction_playerescteam_477_4_16, NULL, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0, &direction_playerescteam_477_4_0};
static Image* images_playerescteam_477_6_0[1];
static Direction direction_playerescteam_477_6_0 = {0, 6, 6, 0, 1, images_playerescteam_477_6_0, 1};
static Image* images_playerescteam_477_6_8[1];
static Direction direction_playerescteam_477_6_8 = {8, 6, 6, 0, 1, images_playerescteam_477_6_8, 1};
static Image* images_playerescteam_477_6_16[1];
static Direction direction_playerescteam_477_6_16 = {16, 6, 6, 0, 1, images_playerescteam_477_6_16, 1};
static Image* images_playerescteam_477_6_24[1];
static Direction direction_playerescteam_477_6_24 = {24, 6, 6, 0, 1, images_playerescteam_477_6_24, 1};
static Animation anim_playerescteam_477_6 = {&direction_playerescteam_477_6_0, &direction_playerescteam_477_6_0, &direction_playerescteam_477_6_0, &direction_playerescteam_477_6_0, NULL, &direction_playerescteam_477_6_8, &direction_playerescteam_477_6_8, &direction_playerescteam_477_6_8, &direction_playerescteam_477_6_8, &direction_playerescteam_477_6_8, &direction_playerescteam_477_6_8, &direction_playerescteam_477_6_8, NULL, &direction_playerescteam_477_6_16, &direction_playerescteam_477_6_16, &direction_playerescteam_477_6_16, &direction_playerescteam_477_6_16, &direction_playerescteam_477_6_16, &direction_playerescteam_477_6_16, &direction_playerescteam_477_6_16, NULL, &direction_playerescteam_477_6_24, &direction_playerescteam_477_6_24, &direction_playerescteam_477_6_24, &direction_playerescteam_477_6_24, &direction_playerescteam_477_6_24, &direction_playerescteam_477_6_24, &direction_playerescteam_477_6_24, NULL, &direction_playerescteam_477_6_0, &direction_playerescteam_477_6_0, &direction_playerescteam_477_6_0};
static Image* images_playerescteam_477_7_0[2];
static Direction direction_playerescteam_477_7_0 = {0, 10, 10, 0, -1, images_playerescteam_477_7_0, 2};
static Image* images_playerescteam_477_7_8[2];
static Direction direction_playerescteam_477_7_8 = {8, 10, 10, 0, -1, images_playerescteam_477_7_8, 2};
static Image* images_playerescteam_477_7_16[2];
static Direction direction_playerescteam_477_7_16 = {16, 10, 10, 0, -1, images_playerescteam_477_7_16, 2};
static Image* images_playerescteam_477_7_24[2];
static Direction direction_playerescteam_477_7_24 = {24, 10, 10, 0, -1, images_playerescteam_477_7_24, 2};
static Animation anim_playerescteam_477_7 = {&direction_playerescteam_477_7_0, &direction_playerescteam_477_7_0, &direction_playerescteam_477_7_0, &direction_playerescteam_477_7_0, NULL, &direction_playerescteam_477_7_8, &direction_playerescteam_477_7_8, &direction_playerescteam_477_7_8, &direction_playerescteam_477_7_8, &direction_playerescteam_477_7_8, &direction_playerescteam_477_7_8, &direction_playerescteam_477_7_8, NULL, &direction_playerescteam_477_7_16, &direction_playerescteam_477_7_16, &direction_playerescteam_477_7_16, &direction_playerescteam_477_7_16, &direction_playerescteam_477_7_16, &direction_playerescteam_477_7_16, &direction_playerescteam_477_7_16, NULL, &direction_playerescteam_477_7_24, &direction_playerescteam_477_7_24, &direction_playerescteam_477_7_24, &direction_playerescteam_477_7_24, &direction_playerescteam_477_7_24, &direction_playerescteam_477_7_24, &direction_playerescteam_477_7_24, NULL, &direction_playerescteam_477_7_0, &direction_playerescteam_477_7_0, &direction_playerescteam_477_7_0};
static Image* images_playerescteam_477_8_0[1];
static Direction direction_playerescteam_477_8_0 = {0, 50, 50, 0, -1, images_playerescteam_477_8_0, 1};
static Image* images_playerescteam_477_8_24[1];
static Direction direction_playerescteam_477_8_24 = {24, 50, 50, 0, -1, images_playerescteam_477_8_24, 1};
static Animation anim_playerescteam_477_8 = {&direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, NULL, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, &direction_playerescteam_477_8_24, NULL, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0, &direction_playerescteam_477_8_0};
static Image* images_playerescteam_477_9_0[2];
static Direction direction_playerescteam_477_9_0 = {0, 5, 5, 0, -1, images_playerescteam_477_9_0, 2};
static Animation anim_playerescteam_477_9 = {&direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, NULL, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0, &direction_playerescteam_477_9_0};
static Image* images_playerescteam_477_10_0[5];
static Direction direction_playerescteam_477_10_0 = {0, 10, 10, 0, 1, images_playerescteam_477_10_0, 5};
static Animation anim_playerescteam_477_10 = {&direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, NULL, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0, &direction_playerescteam_477_10_0};
static Image* images_playerescteam_477_11_0[2];
static Direction direction_playerescteam_477_11_0 = {0, 10, 10, 0, -1, images_playerescteam_477_11_0, 2};
static Image* images_playerescteam_477_11_8[2];
static Direction direction_playerescteam_477_11_8 = {8, 10, 10, 0, -1, images_playerescteam_477_11_8, 2};
static Image* images_playerescteam_477_11_16[2];
static Direction direction_playerescteam_477_11_16 = {16, 10, 10, 0, -1, images_playerescteam_477_11_16, 2};
static Image* images_playerescteam_477_11_24[2];
static Direction direction_playerescteam_477_11_24 = {24, 10, 10, 0, -1, images_playerescteam_477_11_24, 2};
static Animation anim_playerescteam_477_11 = {&direction_playerescteam_477_11_0, &direction_playerescteam_477_11_0, &direction_playerescteam_477_11_0, &direction_playerescteam_477_11_0, NULL, &direction_playerescteam_477_11_8, &direction_playerescteam_477_11_8, &direction_playerescteam_477_11_8, &direction_playerescteam_477_11_8, &direction_playerescteam_477_11_8, &direction_playerescteam_477_11_8, &direction_playerescteam_477_11_8, NULL, &direction_playerescteam_477_11_16, &direction_playerescteam_477_11_16, &direction_playerescteam_477_11_16, &direction_playerescteam_477_11_16, &direction_playerescteam_477_11_16, &direction_playerescteam_477_11_16, &direction_playerescteam_477_11_16, NULL, &direction_playerescteam_477_11_24, &direction_playerescteam_477_11_24, &direction_playerescteam_477_11_24, &direction_playerescteam_477_11_24, &direction_playerescteam_477_11_24, &direction_playerescteam_477_11_24, &direction_playerescteam_477_11_24, NULL, &direction_playerescteam_477_11_0, &direction_playerescteam_477_11_0, &direction_playerescteam_477_11_0};
static Image* images_playerescteam_477_12_0[2];
static Direction direction_playerescteam_477_12_0 = {0, 10, 10, 0, -1, images_playerescteam_477_12_0, 2};
static Image* images_playerescteam_477_12_8[2];
static Direction direction_playerescteam_477_12_8 = {8, 10, 10, 0, -1, images_playerescteam_477_12_8, 2};
static Image* images_playerescteam_477_12_16[2];
static Direction direction_playerescteam_477_12_16 = {16, 10, 10, 0, -1, images_playerescteam_477_12_16, 2};
static Image* images_playerescteam_477_12_24[2];
static Direction direction_playerescteam_477_12_24 = {24, 10, 10, 0, -1, images_playerescteam_477_12_24, 2};
static Animation anim_playerescteam_477_12 = {&direction_playerescteam_477_12_0, &direction_playerescteam_477_12_0, &direction_playerescteam_477_12_0, &direction_playerescteam_477_12_0, NULL, &direction_playerescteam_477_12_8, &direction_playerescteam_477_12_8, &direction_playerescteam_477_12_8, &direction_playerescteam_477_12_8, &direction_playerescteam_477_12_8, &direction_playerescteam_477_12_8, &direction_playerescteam_477_12_8, NULL, &direction_playerescteam_477_12_16, &direction_playerescteam_477_12_16, &direction_playerescteam_477_12_16, &direction_playerescteam_477_12_16, &direction_playerescteam_477_12_16, &direction_playerescteam_477_12_16, &direction_playerescteam_477_12_16, NULL, &direction_playerescteam_477_12_24, &direction_playerescteam_477_12_24, &direction_playerescteam_477_12_24, &direction_playerescteam_477_12_24, &direction_playerescteam_477_12_24, &direction_playerescteam_477_12_24, &direction_playerescteam_477_12_24, NULL, &direction_playerescteam_477_12_0, &direction_playerescteam_477_12_0, &direction_playerescteam_477_12_0};
static Image* images_playerescteam_477_13_0[2];
static Direction direction_playerescteam_477_13_0 = {0, 10, 10, 0, -1, images_playerescteam_477_13_0, 2};
static Image* images_playerescteam_477_13_8[2];
static Direction direction_playerescteam_477_13_8 = {8, 10, 10, 0, -1, images_playerescteam_477_13_8, 2};
static Image* images_playerescteam_477_13_16[2];
static Direction direction_playerescteam_477_13_16 = {16, 10, 10, 0, -1, images_playerescteam_477_13_16, 2};
static Image* images_playerescteam_477_13_24[2];
static Direction direction_playerescteam_477_13_24 = {24, 10, 10, 0, -1, images_playerescteam_477_13_24, 2};
static Animation anim_playerescteam_477_13 = {&direction_playerescteam_477_13_0, &direction_playerescteam_477_13_0, &direction_playerescteam_477_13_0, &direction_playerescteam_477_13_0, NULL, &direction_playerescteam_477_13_8, &direction_playerescteam_477_13_8, &direction_playerescteam_477_13_8, &direction_playerescteam_477_13_8, &direction_playerescteam_477_13_8, &direction_playerescteam_477_13_8, &direction_playerescteam_477_13_8, NULL, &direction_playerescteam_477_13_16, &direction_playerescteam_477_13_16, &direction_playerescteam_477_13_16, &direction_playerescteam_477_13_16, &direction_playerescteam_477_13_16, &direction_playerescteam_477_13_16, &direction_playerescteam_477_13_16, NULL, &direction_playerescteam_477_13_24, &direction_playerescteam_477_13_24, &direction_playerescteam_477_13_24, &direction_playerescteam_477_13_24, &direction_playerescteam_477_13_24, &direction_playerescteam_477_13_24, &direction_playerescteam_477_13_24, NULL, &direction_playerescteam_477_13_0, &direction_playerescteam_477_13_0, &direction_playerescteam_477_13_0};
static Image* images_playerescteam_477_14_0[2];
static Direction direction_playerescteam_477_14_0 = {0, 10, 10, 0, -1, images_playerescteam_477_14_0, 2};
static Image* images_playerescteam_477_14_8[2];
static Direction direction_playerescteam_477_14_8 = {8, 10, 10, 0, -1, images_playerescteam_477_14_8, 2};
static Image* images_playerescteam_477_14_16[2];
static Direction direction_playerescteam_477_14_16 = {16, 10, 10, 0, -1, images_playerescteam_477_14_16, 2};
static Image* images_playerescteam_477_14_24[2];
static Direction direction_playerescteam_477_14_24 = {24, 10, 10, 0, -1, images_playerescteam_477_14_24, 2};
static Animation anim_playerescteam_477_14 = {&direction_playerescteam_477_14_0, &direction_playerescteam_477_14_0, &direction_playerescteam_477_14_0, &direction_playerescteam_477_14_0, NULL, &direction_playerescteam_477_14_8, &direction_playerescteam_477_14_8, &direction_playerescteam_477_14_8, &direction_playerescteam_477_14_8, &direction_playerescteam_477_14_8, &direction_playerescteam_477_14_8, &direction_playerescteam_477_14_8, NULL, &direction_playerescteam_477_14_16, &direction_playerescteam_477_14_16, &direction_playerescteam_477_14_16, &direction_playerescteam_477_14_16, &direction_playerescteam_477_14_16, &direction_playerescteam_477_14_16, &direction_playerescteam_477_14_16, NULL, &direction_playerescteam_477_14_24, &direction_playerescteam_477_14_24, &direction_playerescteam_477_14_24, &direction_playerescteam_477_14_24, &direction_playerescteam_477_14_24, &direction_playerescteam_477_14_24, &direction_playerescteam_477_14_24, NULL, &direction_playerescteam_477_14_0, &direction_playerescteam_477_14_0, &direction_playerescteam_477_14_0};
static Image* images_playerescteam_477_15_0[2];
static Direction direction_playerescteam_477_15_0 = {0, 10, 10, 0, -1, images_playerescteam_477_15_0, 2};
static Image* images_playerescteam_477_15_8[2];
static Direction direction_playerescteam_477_15_8 = {8, 10, 10, 0, -1, images_playerescteam_477_15_8, 2};
static Image* images_playerescteam_477_15_16[2];
static Direction direction_playerescteam_477_15_16 = {16, 10, 10, 0, -1, images_playerescteam_477_15_16, 2};
static Image* images_playerescteam_477_15_24[2];
static Direction direction_playerescteam_477_15_24 = {24, 10, 10, 0, -1, images_playerescteam_477_15_24, 2};
static Animation anim_playerescteam_477_15 = {&direction_playerescteam_477_15_0, &direction_playerescteam_477_15_0, &direction_playerescteam_477_15_0, &direction_playerescteam_477_15_0, NULL, &direction_playerescteam_477_15_8, &direction_playerescteam_477_15_8, &direction_playerescteam_477_15_8, &direction_playerescteam_477_15_8, &direction_playerescteam_477_15_8, &direction_playerescteam_477_15_8, &direction_playerescteam_477_15_8, NULL, &direction_playerescteam_477_15_16, &direction_playerescteam_477_15_16, &direction_playerescteam_477_15_16, &direction_playerescteam_477_15_16, &direction_playerescteam_477_15_16, &direction_playerescteam_477_15_16, &direction_playerescteam_477_15_16, NULL, &direction_playerescteam_477_15_24, &direction_playerescteam_477_15_24, &direction_playerescteam_477_15_24, &direction_playerescteam_477_15_24, &direction_playerescteam_477_15_24, &direction_playerescteam_477_15_24, &direction_playerescteam_477_15_24, NULL, &direction_playerescteam_477_15_0, &direction_playerescteam_477_15_0, &direction_playerescteam_477_15_0};
static Image* images_playerescteam_477_16_0[2];
static Direction direction_playerescteam_477_16_0 = {0, 10, 10, 0, -1, images_playerescteam_477_16_0, 2};
static Image* images_playerescteam_477_16_8[2];
static Direction direction_playerescteam_477_16_8 = {8, 10, 10, 0, -1, images_playerescteam_477_16_8, 2};
static Image* images_playerescteam_477_16_16[2];
static Direction direction_playerescteam_477_16_16 = {16, 10, 10, 0, -1, images_playerescteam_477_16_16, 2};
static Image* images_playerescteam_477_16_24[2];
static Direction direction_playerescteam_477_16_24 = {24, 10, 10, 0, -1, images_playerescteam_477_16_24, 2};
static Animation anim_playerescteam_477_16 = {&direction_playerescteam_477_16_0, &direction_playerescteam_477_16_0, &direction_playerescteam_477_16_0, &direction_playerescteam_477_16_0, NULL, &direction_playerescteam_477_16_8, &direction_playerescteam_477_16_8, &direction_playerescteam_477_16_8, &direction_playerescteam_477_16_8, &direction_playerescteam_477_16_8, &direction_playerescteam_477_16_8, &direction_playerescteam_477_16_8, NULL, &direction_playerescteam_477_16_16, &direction_playerescteam_477_16_16, &direction_playerescteam_477_16_16, &direction_playerescteam_477_16_16, &direction_playerescteam_477_16_16, &direction_playerescteam_477_16_16, &direction_playerescteam_477_16_16, NULL, &direction_playerescteam_477_16_24, &direction_playerescteam_477_16_24, &direction_playerescteam_477_16_24, &direction_playerescteam_477_16_24, &direction_playerescteam_477_16_24, &direction_playerescteam_477_16_24, &direction_playerescteam_477_16_24, NULL, &direction_playerescteam_477_16_0, &direction_playerescteam_477_16_0, &direction_playerescteam_477_16_0};
static Image* images_playerescteam_477_17_0[2];
static Direction direction_playerescteam_477_17_0 = {0, 5, 5, 1, -1, images_playerescteam_477_17_0, 2};
static Image* images_playerescteam_477_17_8[2];
static Direction direction_playerescteam_477_17_8 = {8, 5, 5, 1, -1, images_playerescteam_477_17_8, 2};
static Image* images_playerescteam_477_17_16[2];
static Direction direction_playerescteam_477_17_16 = {16, 5, 5, 1, -1, images_playerescteam_477_17_16, 2};
static Image* images_playerescteam_477_17_24[2];
static Direction direction_playerescteam_477_17_24 = {24, 5, 5, 1, -1, images_playerescteam_477_17_24, 2};
static Animation anim_playerescteam_477_17 = {&direction_playerescteam_477_17_0, &direction_playerescteam_477_17_0, &direction_playerescteam_477_17_0, &direction_playerescteam_477_17_0, NULL, &direction_playerescteam_477_17_8, &direction_playerescteam_477_17_8, &direction_playerescteam_477_17_8, &direction_playerescteam_477_17_8, &direction_playerescteam_477_17_8, &direction_playerescteam_477_17_8, &direction_playerescteam_477_17_8, NULL, &direction_playerescteam_477_17_16, &direction_playerescteam_477_17_16, &direction_playerescteam_477_17_16, &direction_playerescteam_477_17_16, &direction_playerescteam_477_17_16, &direction_playerescteam_477_17_16, &direction_playerescteam_477_17_16, NULL, &direction_playerescteam_477_17_24, &direction_playerescteam_477_17_24, &direction_playerescteam_477_17_24, &direction_playerescteam_477_17_24, &direction_playerescteam_477_17_24, &direction_playerescteam_477_17_24, &direction_playerescteam_477_17_24, NULL, &direction_playerescteam_477_17_0, &direction_playerescteam_477_17_0, &direction_playerescteam_477_17_0};
static Image* images_playerescteam_477_18_24[8];
static Direction direction_playerescteam_477_18_24 = {24, 10, 10, 0, -1, images_playerescteam_477_18_24, 8};
static Animation anim_playerescteam_477_18 = {&direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, NULL, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24, &direction_playerescteam_477_18_24};
static Image* images_playerescteam_477_19_24[5];
static Direction direction_playerescteam_477_19_24 = {24, 10, 10, 0, -1, images_playerescteam_477_19_24, 5};
static Animation anim_playerescteam_477_19 = {&direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, NULL, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24, &direction_playerescteam_477_19_24};
static Animation * anim_array_playerescteam_477[20] = {&anim_playerescteam_477_0, NULL, NULL, NULL, &anim_playerescteam_477_4, NULL, &anim_playerescteam_477_6, &anim_playerescteam_477_7, &anim_playerescteam_477_8, &anim_playerescteam_477_9, &anim_playerescteam_477_10, &anim_playerescteam_477_11, &anim_playerescteam_477_12, &anim_playerescteam_477_13, &anim_playerescteam_477_14, &anim_playerescteam_477_15, &anim_playerescteam_477_16, &anim_playerescteam_477_17, &anim_playerescteam_477_18, &anim_playerescteam_477_19};
static Animations anim_playerescteam_477 = {20, &anim_array_playerescteam_477[0]};
static bool anim_playerescteam_477_initialized;
class PlayerEscTeam_477 : public Active
{
public:
    PlayerEscTeam_477(int x, int y) : Active(x, y, PlayerEscTeam_477_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_ EscTeam", 15);
#endif
        this->animations = &anim_playerescteam_477;
        if (!anim_playerescteam_477_initialized) {
            anim_playerescteam_477_initialized = true;
            images_playerescteam_477_0_0[0] = get_internal_image(2515);
            images_playerescteam_477_0_0[1] = get_internal_image(2516);
            images_playerescteam_477_0_8[0] = get_internal_image(2520);
            images_playerescteam_477_0_8[1] = get_internal_image(2521);
            images_playerescteam_477_0_16[0] = get_internal_image(2508);
            images_playerescteam_477_0_16[1] = get_internal_image(2517);
            images_playerescteam_477_0_24[0] = get_internal_image(2518);
            images_playerescteam_477_0_24[1] = get_internal_image(2519);
            images_playerescteam_477_4_0[0] = get_internal_image(369);
            images_playerescteam_477_4_0[1] = get_internal_image(373);
            images_playerescteam_477_4_0[2] = get_internal_image(369);
            images_playerescteam_477_4_0[3] = get_internal_image(373);
            images_playerescteam_477_4_16[0] = get_internal_image(371);
            images_playerescteam_477_4_16[1] = get_internal_image(763);
            images_playerescteam_477_4_16[2] = get_internal_image(371);
            images_playerescteam_477_4_16[3] = get_internal_image(763);
            images_playerescteam_477_6_0[0] = get_internal_image(2661);
            images_playerescteam_477_6_8[0] = get_internal_image(2666);
            images_playerescteam_477_6_16[0] = get_internal_image(2665);
            images_playerescteam_477_6_24[0] = get_internal_image(2667);
            images_playerescteam_477_7_0[0] = get_internal_image(2669);
            images_playerescteam_477_7_0[1] = get_internal_image(2668);
            images_playerescteam_477_7_8[0] = get_internal_image(2672);
            images_playerescteam_477_7_8[1] = get_internal_image(2673);
            images_playerescteam_477_7_16[0] = get_internal_image(2670);
            images_playerescteam_477_7_16[1] = get_internal_image(2671);
            images_playerescteam_477_7_24[0] = get_internal_image(2674);
            images_playerescteam_477_7_24[1] = get_internal_image(2675);
            images_playerescteam_477_8_0[0] = get_internal_image(2679);
            images_playerescteam_477_8_24[0] = get_internal_image(2676);
            images_playerescteam_477_9_0[0] = get_internal_image(1490);
            images_playerescteam_477_9_0[1] = get_internal_image(1491);
            images_playerescteam_477_10_0[0] = get_internal_image(596);
            images_playerescteam_477_10_0[1] = get_internal_image(493);
            images_playerescteam_477_10_0[2] = get_internal_image(595);
            images_playerescteam_477_10_0[3] = get_internal_image(234);
            images_playerescteam_477_10_0[4] = get_internal_image(595);
            images_playerescteam_477_11_0[0] = get_internal_image(598);
            images_playerescteam_477_11_0[1] = get_internal_image(1516);
            images_playerescteam_477_11_8[0] = get_internal_image(2584);
            images_playerescteam_477_11_8[1] = get_internal_image(2752);
            images_playerescteam_477_11_16[0] = get_internal_image(2426);
            images_playerescteam_477_11_16[1] = get_internal_image(2472);
            images_playerescteam_477_11_24[0] = get_internal_image(1560);
            images_playerescteam_477_11_24[1] = get_internal_image(2558);
            images_playerescteam_477_12_0[0] = get_internal_image(2716);
            images_playerescteam_477_12_0[1] = get_internal_image(2714);
            images_playerescteam_477_12_8[0] = get_internal_image(2709);
            images_playerescteam_477_12_8[1] = get_internal_image(2712);
            images_playerescteam_477_12_16[0] = get_internal_image(2720);
            images_playerescteam_477_12_16[1] = get_internal_image(2717);
            images_playerescteam_477_12_24[0] = get_internal_image(2711);
            images_playerescteam_477_12_24[1] = get_internal_image(2713);
            images_playerescteam_477_13_0[0] = get_internal_image(2704);
            images_playerescteam_477_13_0[1] = get_internal_image(2705);
            images_playerescteam_477_13_8[0] = get_internal_image(2710);
            images_playerescteam_477_13_8[1] = get_internal_image(2706);
            images_playerescteam_477_13_16[0] = get_internal_image(2702);
            images_playerescteam_477_13_16[1] = get_internal_image(2703);
            images_playerescteam_477_13_24[0] = get_internal_image(2708);
            images_playerescteam_477_13_24[1] = get_internal_image(2707);
            images_playerescteam_477_14_0[0] = get_internal_image(2698);
            images_playerescteam_477_14_0[1] = get_internal_image(2699);
            images_playerescteam_477_14_8[0] = get_internal_image(2695);
            images_playerescteam_477_14_8[1] = get_internal_image(2696);
            images_playerescteam_477_14_16[0] = get_internal_image(2700);
            images_playerescteam_477_14_16[1] = get_internal_image(2701);
            images_playerescteam_477_14_24[0] = get_internal_image(2693);
            images_playerescteam_477_14_24[1] = get_internal_image(2697);
            images_playerescteam_477_15_0[0] = get_internal_image(2687);
            images_playerescteam_477_15_0[1] = get_internal_image(2689);
            images_playerescteam_477_15_8[0] = get_internal_image(2694);
            images_playerescteam_477_15_8[1] = get_internal_image(2692);
            images_playerescteam_477_15_16[0] = get_internal_image(2690);
            images_playerescteam_477_15_16[1] = get_internal_image(2691);
            images_playerescteam_477_15_24[0] = get_internal_image(2688);
            images_playerescteam_477_15_24[1] = get_internal_image(2686);
            images_playerescteam_477_16_0[0] = get_internal_image(1865);
            images_playerescteam_477_16_0[1] = get_internal_image(1866);
            images_playerescteam_477_16_8[0] = get_internal_image(1611);
            images_playerescteam_477_16_8[1] = get_internal_image(1610);
            images_playerescteam_477_16_16[0] = get_internal_image(1867);
            images_playerescteam_477_16_16[1] = get_internal_image(1868);
            images_playerescteam_477_16_24[0] = get_internal_image(1608);
            images_playerescteam_477_16_24[1] = get_internal_image(1609);
            images_playerescteam_477_17_0[0] = get_internal_image(2681);
            images_playerescteam_477_17_0[1] = get_internal_image(2680);
            images_playerescteam_477_17_8[0] = get_internal_image(2684);
            images_playerescteam_477_17_8[1] = get_internal_image(2685);
            images_playerescteam_477_17_16[0] = get_internal_image(2682);
            images_playerescteam_477_17_16[1] = get_internal_image(2683);
            images_playerescteam_477_17_24[0] = get_internal_image(2677);
            images_playerescteam_477_17_24[1] = get_internal_image(2678);
            images_playerescteam_477_18_24[0] = get_internal_image(1989);
            images_playerescteam_477_18_24[1] = get_internal_image(1997);
            images_playerescteam_477_18_24[2] = get_internal_image(2006);
            images_playerescteam_477_18_24[3] = get_internal_image(2048);
            images_playerescteam_477_18_24[4] = get_internal_image(2039);
            images_playerescteam_477_18_24[5] = get_internal_image(2042);
            images_playerescteam_477_18_24[6] = get_internal_image(2006);
            images_playerescteam_477_18_24[7] = get_internal_image(2052);
            images_playerescteam_477_19_24[0] = get_internal_image(2134);
            images_playerescteam_477_19_24[1] = get_internal_image(2135);
            images_playerescteam_477_19_24[2] = get_internal_image(2135);
            images_playerescteam_477_19_24[3] = get_internal_image(2133);
            images_playerescteam_477_19_24[4] = get_internal_image(2133);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_playerescteam_477(int x, int y)
{
    return new (Active::pool.create()) PlayerEscTeam_477(x, y);
}
static Image* images_inmateescteam1_478_0_0[2];
static Direction direction_inmateescteam1_478_0_0 = {0, 10, 10, 0, -1, images_inmateescteam1_478_0_0, 2};
static Image* images_inmateescteam1_478_0_8[2];
static Direction direction_inmateescteam1_478_0_8 = {8, 10, 10, 0, -1, images_inmateescteam1_478_0_8, 2};
static Image* images_inmateescteam1_478_0_16[2];
static Direction direction_inmateescteam1_478_0_16 = {16, 10, 10, 0, -1, images_inmateescteam1_478_0_16, 2};
static Image* images_inmateescteam1_478_0_24[2];
static Direction direction_inmateescteam1_478_0_24 = {24, 10, 10, 0, -1, images_inmateescteam1_478_0_24, 2};
static Animation anim_inmateescteam1_478_0 = {&direction_inmateescteam1_478_0_0, &direction_inmateescteam1_478_0_0, &direction_inmateescteam1_478_0_0, &direction_inmateescteam1_478_0_0, NULL, &direction_inmateescteam1_478_0_8, &direction_inmateescteam1_478_0_8, &direction_inmateescteam1_478_0_8, &direction_inmateescteam1_478_0_8, &direction_inmateescteam1_478_0_8, &direction_inmateescteam1_478_0_8, &direction_inmateescteam1_478_0_8, NULL, &direction_inmateescteam1_478_0_16, &direction_inmateescteam1_478_0_16, &direction_inmateescteam1_478_0_16, &direction_inmateescteam1_478_0_16, &direction_inmateescteam1_478_0_16, &direction_inmateescteam1_478_0_16, &direction_inmateescteam1_478_0_16, NULL, &direction_inmateescteam1_478_0_24, &direction_inmateescteam1_478_0_24, &direction_inmateescteam1_478_0_24, &direction_inmateescteam1_478_0_24, &direction_inmateescteam1_478_0_24, &direction_inmateescteam1_478_0_24, &direction_inmateescteam1_478_0_24, NULL, &direction_inmateescteam1_478_0_0, &direction_inmateescteam1_478_0_0, &direction_inmateescteam1_478_0_0};
static Image* images_inmateescteam1_478_4_0[4];
static Direction direction_inmateescteam1_478_4_0 = {0, 20, 20, 0, 1, images_inmateescteam1_478_4_0, 4};
static Image* images_inmateescteam1_478_4_16[4];
static Direction direction_inmateescteam1_478_4_16 = {16, 20, 20, 0, 1, images_inmateescteam1_478_4_16, 4};
static Animation anim_inmateescteam1_478_4 = {&direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, NULL, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, &direction_inmateescteam1_478_4_16, NULL, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0, &direction_inmateescteam1_478_4_0};
static Image* images_inmateescteam1_478_6_0[1];
static Direction direction_inmateescteam1_478_6_0 = {0, 6, 6, 0, 1, images_inmateescteam1_478_6_0, 1};
static Image* images_inmateescteam1_478_6_8[1];
static Direction direction_inmateescteam1_478_6_8 = {8, 6, 6, 0, 1, images_inmateescteam1_478_6_8, 1};
static Image* images_inmateescteam1_478_6_16[1];
static Direction direction_inmateescteam1_478_6_16 = {16, 6, 6, 0, 1, images_inmateescteam1_478_6_16, 1};
static Image* images_inmateescteam1_478_6_24[1];
static Direction direction_inmateescteam1_478_6_24 = {24, 6, 6, 0, 1, images_inmateescteam1_478_6_24, 1};
static Animation anim_inmateescteam1_478_6 = {&direction_inmateescteam1_478_6_0, &direction_inmateescteam1_478_6_0, &direction_inmateescteam1_478_6_0, &direction_inmateescteam1_478_6_0, NULL, &direction_inmateescteam1_478_6_8, &direction_inmateescteam1_478_6_8, &direction_inmateescteam1_478_6_8, &direction_inmateescteam1_478_6_8, &direction_inmateescteam1_478_6_8, &direction_inmateescteam1_478_6_8, &direction_inmateescteam1_478_6_8, NULL, &direction_inmateescteam1_478_6_16, &direction_inmateescteam1_478_6_16, &direction_inmateescteam1_478_6_16, &direction_inmateescteam1_478_6_16, &direction_inmateescteam1_478_6_16, &direction_inmateescteam1_478_6_16, &direction_inmateescteam1_478_6_16, NULL, &direction_inmateescteam1_478_6_24, &direction_inmateescteam1_478_6_24, &direction_inmateescteam1_478_6_24, &direction_inmateescteam1_478_6_24, &direction_inmateescteam1_478_6_24, &direction_inmateescteam1_478_6_24, &direction_inmateescteam1_478_6_24, NULL, &direction_inmateescteam1_478_6_0, &direction_inmateescteam1_478_6_0, &direction_inmateescteam1_478_6_0};
static Image* images_inmateescteam1_478_8_0[1];
static Direction direction_inmateescteam1_478_8_0 = {0, 10, 10, 0, -1, images_inmateescteam1_478_8_0, 1};
static Image* images_inmateescteam1_478_8_16[2];
static Direction direction_inmateescteam1_478_8_16 = {16, 5, 5, 0, -1, images_inmateescteam1_478_8_16, 2};
static Image* images_inmateescteam1_478_8_24[1];
static Direction direction_inmateescteam1_478_8_24 = {24, 10, 10, 0, -1, images_inmateescteam1_478_8_24, 1};
static Animation anim_inmateescteam1_478_8 = {&direction_inmateescteam1_478_8_0, &direction_inmateescteam1_478_8_0, &direction_inmateescteam1_478_8_0, &direction_inmateescteam1_478_8_0, &direction_inmateescteam1_478_8_0, &direction_inmateescteam1_478_8_0, &direction_inmateescteam1_478_8_0, &direction_inmateescteam1_478_8_0, NULL, &direction_inmateescteam1_478_8_16, &direction_inmateescteam1_478_8_16, &direction_inmateescteam1_478_8_16, &direction_inmateescteam1_478_8_16, &direction_inmateescteam1_478_8_16, &direction_inmateescteam1_478_8_16, &direction_inmateescteam1_478_8_16, &direction_inmateescteam1_478_8_16, &direction_inmateescteam1_478_8_16, &direction_inmateescteam1_478_8_16, &direction_inmateescteam1_478_8_16, NULL, &direction_inmateescteam1_478_8_24, &direction_inmateescteam1_478_8_24, &direction_inmateescteam1_478_8_24, &direction_inmateescteam1_478_8_24, &direction_inmateescteam1_478_8_24, &direction_inmateescteam1_478_8_24, &direction_inmateescteam1_478_8_24, NULL, &direction_inmateescteam1_478_8_0, &direction_inmateescteam1_478_8_0, &direction_inmateescteam1_478_8_0};
static Image* images_inmateescteam1_478_9_0[2];
static Direction direction_inmateescteam1_478_9_0 = {0, 5, 5, 0, -1, images_inmateescteam1_478_9_0, 2};
static Animation anim_inmateescteam1_478_9 = {&direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, NULL, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0, &direction_inmateescteam1_478_9_0};
static Image* images_inmateescteam1_478_10_0[5];
static Direction direction_inmateescteam1_478_10_0 = {0, 10, 10, 0, -1, images_inmateescteam1_478_10_0, 5};
static Animation anim_inmateescteam1_478_10 = {&direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, NULL, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0, &direction_inmateescteam1_478_10_0};
static Image* images_inmateescteam1_478_11_0[2];
static Direction direction_inmateescteam1_478_11_0 = {0, 6, 6, 0, -1, images_inmateescteam1_478_11_0, 2};
static Image* images_inmateescteam1_478_11_8[2];
static Direction direction_inmateescteam1_478_11_8 = {8, 6, 6, 0, -1, images_inmateescteam1_478_11_8, 2};
static Image* images_inmateescteam1_478_11_16[2];
static Direction direction_inmateescteam1_478_11_16 = {16, 6, 6, 0, -1, images_inmateescteam1_478_11_16, 2};
static Image* images_inmateescteam1_478_11_24[2];
static Direction direction_inmateescteam1_478_11_24 = {24, 6, 6, 0, -1, images_inmateescteam1_478_11_24, 2};
static Animation anim_inmateescteam1_478_11 = {&direction_inmateescteam1_478_11_0, &direction_inmateescteam1_478_11_0, &direction_inmateescteam1_478_11_0, &direction_inmateescteam1_478_11_0, NULL, &direction_inmateescteam1_478_11_8, &direction_inmateescteam1_478_11_8, &direction_inmateescteam1_478_11_8, &direction_inmateescteam1_478_11_8, &direction_inmateescteam1_478_11_8, &direction_inmateescteam1_478_11_8, &direction_inmateescteam1_478_11_8, NULL, &direction_inmateescteam1_478_11_16, &direction_inmateescteam1_478_11_16, &direction_inmateescteam1_478_11_16, &direction_inmateescteam1_478_11_16, &direction_inmateescteam1_478_11_16, &direction_inmateescteam1_478_11_16, &direction_inmateescteam1_478_11_16, NULL, &direction_inmateescteam1_478_11_24, &direction_inmateescteam1_478_11_24, &direction_inmateescteam1_478_11_24, &direction_inmateescteam1_478_11_24, &direction_inmateescteam1_478_11_24, &direction_inmateescteam1_478_11_24, &direction_inmateescteam1_478_11_24, NULL, &direction_inmateescteam1_478_11_0, &direction_inmateescteam1_478_11_0, &direction_inmateescteam1_478_11_0};
static Image* images_inmateescteam1_478_18_24[8];
static Direction direction_inmateescteam1_478_18_24 = {24, 10, 10, 0, -1, images_inmateescteam1_478_18_24, 8};
static Animation anim_inmateescteam1_478_18 = {&direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, NULL, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24, &direction_inmateescteam1_478_18_24};
static Image* images_inmateescteam1_478_19_24[6];
static Direction direction_inmateescteam1_478_19_24 = {24, 10, 10, 0, -1, images_inmateescteam1_478_19_24, 6};
static Animation anim_inmateescteam1_478_19 = {&direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, NULL, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24, &direction_inmateescteam1_478_19_24};
static Animation * anim_array_inmateescteam1_478[20] = {&anim_inmateescteam1_478_0, NULL, NULL, NULL, &anim_inmateescteam1_478_4, NULL, &anim_inmateescteam1_478_6, NULL, &anim_inmateescteam1_478_8, &anim_inmateescteam1_478_9, &anim_inmateescteam1_478_10, &anim_inmateescteam1_478_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmateescteam1_478_18, &anim_inmateescteam1_478_19};
static Animations anim_inmateescteam1_478 = {20, &anim_array_inmateescteam1_478[0]};
static bool anim_inmateescteam1_478_initialized;
class InmateEscTeam1_478 : public Active
{
public:
    InmateEscTeam1_478(int x, int y) : Active(x, y, InmateEscTeam1_478_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate EscTeam1", 15);
#endif
        this->animations = &anim_inmateescteam1_478;
        if (!anim_inmateescteam1_478_initialized) {
            anim_inmateescteam1_478_initialized = true;
            images_inmateescteam1_478_0_0[0] = get_internal_image(2524);
            images_inmateescteam1_478_0_0[1] = get_internal_image(2523);
            images_inmateescteam1_478_0_8[0] = get_internal_image(2526);
            images_inmateescteam1_478_0_8[1] = get_internal_image(2529);
            images_inmateescteam1_478_0_16[0] = get_internal_image(2522);
            images_inmateescteam1_478_0_16[1] = get_internal_image(2525);
            images_inmateescteam1_478_0_24[0] = get_internal_image(2528);
            images_inmateescteam1_478_0_24[1] = get_internal_image(2527);
            images_inmateescteam1_478_4_0[0] = get_internal_image(369);
            images_inmateescteam1_478_4_0[1] = get_internal_image(373);
            images_inmateescteam1_478_4_0[2] = get_internal_image(369);
            images_inmateescteam1_478_4_0[3] = get_internal_image(373);
            images_inmateescteam1_478_4_16[0] = get_internal_image(371);
            images_inmateescteam1_478_4_16[1] = get_internal_image(763);
            images_inmateescteam1_478_4_16[2] = get_internal_image(371);
            images_inmateescteam1_478_4_16[3] = get_internal_image(763);
            images_inmateescteam1_478_6_0[0] = get_internal_image(2506);
            images_inmateescteam1_478_6_8[0] = get_internal_image(2583);
            images_inmateescteam1_478_6_16[0] = get_internal_image(2505);
            images_inmateescteam1_478_6_24[0] = get_internal_image(2582);
            images_inmateescteam1_478_8_0[0] = get_internal_image(2576);
            images_inmateescteam1_478_8_16[0] = get_internal_image(2598);
            images_inmateescteam1_478_8_16[1] = get_internal_image(2600);
            images_inmateescteam1_478_8_24[0] = get_internal_image(2585);
            images_inmateescteam1_478_9_0[0] = get_internal_image(1502);
            images_inmateescteam1_478_9_0[1] = get_internal_image(1506);
            images_inmateescteam1_478_10_0[0] = get_internal_image(321);
            images_inmateescteam1_478_10_0[1] = get_internal_image(333);
            images_inmateescteam1_478_10_0[2] = get_internal_image(332);
            images_inmateescteam1_478_10_0[3] = get_internal_image(335);
            images_inmateescteam1_478_10_0[4] = get_internal_image(336);
            images_inmateescteam1_478_11_0[0] = get_internal_image(2602);
            images_inmateescteam1_478_11_0[1] = get_internal_image(2604);
            images_inmateescteam1_478_11_8[0] = get_internal_image(2619);
            images_inmateescteam1_478_11_8[1] = get_internal_image(2620);
            images_inmateescteam1_478_11_16[0] = get_internal_image(2603);
            images_inmateescteam1_478_11_16[1] = get_internal_image(2605);
            images_inmateescteam1_478_11_24[0] = get_internal_image(2613);
            images_inmateescteam1_478_11_24[1] = get_internal_image(2615);
            images_inmateescteam1_478_18_24[0] = get_internal_image(2099);
            images_inmateescteam1_478_18_24[1] = get_internal_image(2112);
            images_inmateescteam1_478_18_24[2] = get_internal_image(2107);
            images_inmateescteam1_478_18_24[3] = get_internal_image(2108);
            images_inmateescteam1_478_18_24[4] = get_internal_image(2109);
            images_inmateescteam1_478_18_24[5] = get_internal_image(2114);
            images_inmateescteam1_478_18_24[6] = get_internal_image(2110);
            images_inmateescteam1_478_18_24[7] = get_internal_image(2111);
            images_inmateescteam1_478_19_24[0] = get_internal_image(2150);
            images_inmateescteam1_478_19_24[1] = get_internal_image(2156);
            images_inmateescteam1_478_19_24[2] = get_internal_image(2157);
            images_inmateescteam1_478_19_24[3] = get_internal_image(2157);
            images_inmateescteam1_478_19_24[4] = get_internal_image(2156);
            images_inmateescteam1_478_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmateescteam1_478(int x, int y)
{
    return new (Active::pool.create()) InmateEscTeam1_478(x, y);
}
static Image* images_inmateescteam2_479_0_0[2];
static Direction direction_inmateescteam2_479_0_0 = {0, 10, 10, 0, -1, images_inmateescteam2_479_0_0, 2};
static Image* images_inmateescteam2_479_0_8[2];
static Direction direction_inmateescteam2_479_0_8 = {8, 10, 10, 0, -1, images_inmateescteam2_479_0_8, 2};
static Image* images_inmateescteam2_479_0_16[2];
static Direction direction_inmateescteam2_479_0_16 = {16, 10, 10, 0, -1, images_inmateescteam2_479_0_16, 2};
static Image* images_inmateescteam2_479_0_24[2];
static Direction direction_inmateescteam2_479_0_24 = {24, 10, 10, 0, -1, images_inmateescteam2_479_0_24, 2};
static Animation anim_inmateescteam2_479_0 = {&direction_inmateescteam2_479_0_0, &direction_inmateescteam2_479_0_0, &direction_inmateescteam2_479_0_0, &direction_inmateescteam2_479_0_0, NULL, &direction_inmateescteam2_479_0_8, &direction_inmateescteam2_479_0_8, &direction_inmateescteam2_479_0_8, &direction_inmateescteam2_479_0_8, &direction_inmateescteam2_479_0_8, &direction_inmateescteam2_479_0_8, &direction_inmateescteam2_479_0_8, NULL, &direction_inmateescteam2_479_0_16, &direction_inmateescteam2_479_0_16, &direction_inmateescteam2_479_0_16, &direction_inmateescteam2_479_0_16, &direction_inmateescteam2_479_0_16, &direction_inmateescteam2_479_0_16, &direction_inmateescteam2_479_0_16, NULL, &direction_inmateescteam2_479_0_24, &direction_inmateescteam2_479_0_24, &direction_inmateescteam2_479_0_24, &direction_inmateescteam2_479_0_24, &direction_inmateescteam2_479_0_24, &direction_inmateescteam2_479_0_24, &direction_inmateescteam2_479_0_24, NULL, &direction_inmateescteam2_479_0_0, &direction_inmateescteam2_479_0_0, &direction_inmateescteam2_479_0_0};
static Image* images_inmateescteam2_479_4_0[4];
static Direction direction_inmateescteam2_479_4_0 = {0, 20, 20, 0, 1, images_inmateescteam2_479_4_0, 4};
static Image* images_inmateescteam2_479_4_16[4];
static Direction direction_inmateescteam2_479_4_16 = {16, 20, 20, 0, 1, images_inmateescteam2_479_4_16, 4};
static Animation anim_inmateescteam2_479_4 = {&direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, NULL, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, &direction_inmateescteam2_479_4_16, NULL, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0, &direction_inmateescteam2_479_4_0};
static Image* images_inmateescteam2_479_6_0[1];
static Direction direction_inmateescteam2_479_6_0 = {0, 6, 6, 0, 1, images_inmateescteam2_479_6_0, 1};
static Image* images_inmateescteam2_479_6_8[1];
static Direction direction_inmateescteam2_479_6_8 = {8, 6, 6, 0, 1, images_inmateescteam2_479_6_8, 1};
static Image* images_inmateescteam2_479_6_16[1];
static Direction direction_inmateescteam2_479_6_16 = {16, 6, 6, 0, 1, images_inmateescteam2_479_6_16, 1};
static Image* images_inmateescteam2_479_6_24[1];
static Direction direction_inmateescteam2_479_6_24 = {24, 6, 6, 0, 1, images_inmateescteam2_479_6_24, 1};
static Animation anim_inmateescteam2_479_6 = {&direction_inmateescteam2_479_6_0, &direction_inmateescteam2_479_6_0, &direction_inmateescteam2_479_6_0, &direction_inmateescteam2_479_6_0, NULL, &direction_inmateescteam2_479_6_8, &direction_inmateescteam2_479_6_8, &direction_inmateescteam2_479_6_8, &direction_inmateescteam2_479_6_8, &direction_inmateescteam2_479_6_8, &direction_inmateescteam2_479_6_8, &direction_inmateescteam2_479_6_8, NULL, &direction_inmateescteam2_479_6_16, &direction_inmateescteam2_479_6_16, &direction_inmateescteam2_479_6_16, &direction_inmateescteam2_479_6_16, &direction_inmateescteam2_479_6_16, &direction_inmateescteam2_479_6_16, &direction_inmateescteam2_479_6_16, NULL, &direction_inmateescteam2_479_6_24, &direction_inmateescteam2_479_6_24, &direction_inmateescteam2_479_6_24, &direction_inmateescteam2_479_6_24, &direction_inmateescteam2_479_6_24, &direction_inmateescteam2_479_6_24, &direction_inmateescteam2_479_6_24, NULL, &direction_inmateescteam2_479_6_0, &direction_inmateescteam2_479_6_0, &direction_inmateescteam2_479_6_0};
static Image* images_inmateescteam2_479_8_0[1];
static Direction direction_inmateescteam2_479_8_0 = {0, 10, 10, 0, -1, images_inmateescteam2_479_8_0, 1};
static Image* images_inmateescteam2_479_8_16[2];
static Direction direction_inmateescteam2_479_8_16 = {16, 5, 5, 0, -1, images_inmateescteam2_479_8_16, 2};
static Image* images_inmateescteam2_479_8_24[1];
static Direction direction_inmateescteam2_479_8_24 = {24, 10, 10, 0, -1, images_inmateescteam2_479_8_24, 1};
static Animation anim_inmateescteam2_479_8 = {&direction_inmateescteam2_479_8_0, &direction_inmateescteam2_479_8_0, &direction_inmateescteam2_479_8_0, &direction_inmateescteam2_479_8_0, &direction_inmateescteam2_479_8_0, &direction_inmateescteam2_479_8_0, &direction_inmateescteam2_479_8_0, &direction_inmateescteam2_479_8_0, NULL, &direction_inmateescteam2_479_8_16, &direction_inmateescteam2_479_8_16, &direction_inmateescteam2_479_8_16, &direction_inmateescteam2_479_8_16, &direction_inmateescteam2_479_8_16, &direction_inmateescteam2_479_8_16, &direction_inmateescteam2_479_8_16, &direction_inmateescteam2_479_8_16, &direction_inmateescteam2_479_8_16, &direction_inmateescteam2_479_8_16, &direction_inmateescteam2_479_8_16, NULL, &direction_inmateescteam2_479_8_24, &direction_inmateescteam2_479_8_24, &direction_inmateescteam2_479_8_24, &direction_inmateescteam2_479_8_24, &direction_inmateescteam2_479_8_24, &direction_inmateescteam2_479_8_24, &direction_inmateescteam2_479_8_24, NULL, &direction_inmateescteam2_479_8_0, &direction_inmateescteam2_479_8_0, &direction_inmateescteam2_479_8_0};
static Image* images_inmateescteam2_479_9_0[2];
static Direction direction_inmateescteam2_479_9_0 = {0, 5, 5, 0, -1, images_inmateescteam2_479_9_0, 2};
static Animation anim_inmateescteam2_479_9 = {&direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, NULL, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0, &direction_inmateescteam2_479_9_0};
static Image* images_inmateescteam2_479_10_0[5];
static Direction direction_inmateescteam2_479_10_0 = {0, 10, 10, 0, -1, images_inmateescteam2_479_10_0, 5};
static Animation anim_inmateescteam2_479_10 = {&direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, NULL, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0, &direction_inmateescteam2_479_10_0};
static Image* images_inmateescteam2_479_11_0[2];
static Direction direction_inmateescteam2_479_11_0 = {0, 6, 6, 0, -1, images_inmateescteam2_479_11_0, 2};
static Image* images_inmateescteam2_479_11_8[2];
static Direction direction_inmateescteam2_479_11_8 = {8, 6, 6, 0, -1, images_inmateescteam2_479_11_8, 2};
static Image* images_inmateescteam2_479_11_16[2];
static Direction direction_inmateescteam2_479_11_16 = {16, 6, 6, 0, -1, images_inmateescteam2_479_11_16, 2};
static Image* images_inmateescteam2_479_11_24[2];
static Direction direction_inmateescteam2_479_11_24 = {24, 6, 6, 0, -1, images_inmateescteam2_479_11_24, 2};
static Animation anim_inmateescteam2_479_11 = {&direction_inmateescteam2_479_11_0, &direction_inmateescteam2_479_11_0, &direction_inmateescteam2_479_11_0, &direction_inmateescteam2_479_11_0, NULL, &direction_inmateescteam2_479_11_8, &direction_inmateescteam2_479_11_8, &direction_inmateescteam2_479_11_8, &direction_inmateescteam2_479_11_8, &direction_inmateescteam2_479_11_8, &direction_inmateescteam2_479_11_8, &direction_inmateescteam2_479_11_8, NULL, &direction_inmateescteam2_479_11_16, &direction_inmateescteam2_479_11_16, &direction_inmateescteam2_479_11_16, &direction_inmateescteam2_479_11_16, &direction_inmateescteam2_479_11_16, &direction_inmateescteam2_479_11_16, &direction_inmateescteam2_479_11_16, NULL, &direction_inmateescteam2_479_11_24, &direction_inmateescteam2_479_11_24, &direction_inmateescteam2_479_11_24, &direction_inmateescteam2_479_11_24, &direction_inmateescteam2_479_11_24, &direction_inmateescteam2_479_11_24, &direction_inmateescteam2_479_11_24, NULL, &direction_inmateescteam2_479_11_0, &direction_inmateescteam2_479_11_0, &direction_inmateescteam2_479_11_0};
static Image* images_inmateescteam2_479_18_24[8];
static Direction direction_inmateescteam2_479_18_24 = {24, 10, 10, 0, -1, images_inmateescteam2_479_18_24, 8};
static Animation anim_inmateescteam2_479_18 = {&direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, NULL, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24, &direction_inmateescteam2_479_18_24};
static Image* images_inmateescteam2_479_19_24[6];
static Direction direction_inmateescteam2_479_19_24 = {24, 10, 10, 0, -1, images_inmateescteam2_479_19_24, 6};
static Animation anim_inmateescteam2_479_19 = {&direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, NULL, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24, &direction_inmateescteam2_479_19_24};
static Animation * anim_array_inmateescteam2_479[20] = {&anim_inmateescteam2_479_0, NULL, NULL, NULL, &anim_inmateescteam2_479_4, NULL, &anim_inmateescteam2_479_6, NULL, &anim_inmateescteam2_479_8, &anim_inmateescteam2_479_9, &anim_inmateescteam2_479_10, &anim_inmateescteam2_479_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmateescteam2_479_18, &anim_inmateescteam2_479_19};
static Animations anim_inmateescteam2_479 = {20, &anim_array_inmateescteam2_479[0]};
static bool anim_inmateescteam2_479_initialized;
class InmateEscTeam2_479 : public Active
{
public:
    InmateEscTeam2_479(int x, int y) : Active(x, y, InmateEscTeam2_479_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate EscTeam 2", 16);
#endif
        this->animations = &anim_inmateescteam2_479;
        if (!anim_inmateescteam2_479_initialized) {
            anim_inmateescteam2_479_initialized = true;
            images_inmateescteam2_479_0_0[0] = get_internal_image(2532);
            images_inmateescteam2_479_0_0[1] = get_internal_image(2531);
            images_inmateescteam2_479_0_8[0] = get_internal_image(2536);
            images_inmateescteam2_479_0_8[1] = get_internal_image(2537);
            images_inmateescteam2_479_0_16[0] = get_internal_image(2530);
            images_inmateescteam2_479_0_16[1] = get_internal_image(2533);
            images_inmateescteam2_479_0_24[0] = get_internal_image(2534);
            images_inmateescteam2_479_0_24[1] = get_internal_image(2535);
            images_inmateescteam2_479_4_0[0] = get_internal_image(369);
            images_inmateescteam2_479_4_0[1] = get_internal_image(373);
            images_inmateescteam2_479_4_0[2] = get_internal_image(369);
            images_inmateescteam2_479_4_0[3] = get_internal_image(373);
            images_inmateescteam2_479_4_16[0] = get_internal_image(371);
            images_inmateescteam2_479_4_16[1] = get_internal_image(763);
            images_inmateescteam2_479_4_16[2] = get_internal_image(371);
            images_inmateescteam2_479_4_16[3] = get_internal_image(763);
            images_inmateescteam2_479_6_0[0] = get_internal_image(2719);
            images_inmateescteam2_479_6_8[0] = get_internal_image(2723);
            images_inmateescteam2_479_6_16[0] = get_internal_image(2722);
            images_inmateescteam2_479_6_24[0] = get_internal_image(2724);
            images_inmateescteam2_479_8_0[0] = get_internal_image(2715);
            images_inmateescteam2_479_8_16[0] = get_internal_image(2644);
            images_inmateescteam2_479_8_16[1] = get_internal_image(2637);
            images_inmateescteam2_479_8_24[0] = get_internal_image(2649);
            images_inmateescteam2_479_9_0[0] = get_internal_image(1502);
            images_inmateescteam2_479_9_0[1] = get_internal_image(1506);
            images_inmateescteam2_479_10_0[0] = get_internal_image(2721);
            images_inmateescteam2_479_10_0[1] = get_internal_image(2718);
            images_inmateescteam2_479_10_0[2] = get_internal_image(2648);
            images_inmateescteam2_479_10_0[3] = get_internal_image(2648);
            images_inmateescteam2_479_10_0[4] = get_internal_image(2718);
            images_inmateescteam2_479_11_0[0] = get_internal_image(2616);
            images_inmateescteam2_479_11_0[1] = get_internal_image(2629);
            images_inmateescteam2_479_11_8[0] = get_internal_image(2639);
            images_inmateescteam2_479_11_8[1] = get_internal_image(2640);
            images_inmateescteam2_479_11_16[0] = get_internal_image(2625);
            images_inmateescteam2_479_11_16[1] = get_internal_image(2630);
            images_inmateescteam2_479_11_24[0] = get_internal_image(2634);
            images_inmateescteam2_479_11_24[1] = get_internal_image(2636);
            images_inmateescteam2_479_18_24[0] = get_internal_image(2099);
            images_inmateescteam2_479_18_24[1] = get_internal_image(2112);
            images_inmateescteam2_479_18_24[2] = get_internal_image(2107);
            images_inmateescteam2_479_18_24[3] = get_internal_image(2108);
            images_inmateescteam2_479_18_24[4] = get_internal_image(2109);
            images_inmateescteam2_479_18_24[5] = get_internal_image(2114);
            images_inmateescteam2_479_18_24[6] = get_internal_image(2110);
            images_inmateescteam2_479_18_24[7] = get_internal_image(2111);
            images_inmateescteam2_479_19_24[0] = get_internal_image(2150);
            images_inmateescteam2_479_19_24[1] = get_internal_image(2156);
            images_inmateescteam2_479_19_24[2] = get_internal_image(2157);
            images_inmateescteam2_479_19_24[3] = get_internal_image(2157);
            images_inmateescteam2_479_19_24[4] = get_internal_image(2156);
            images_inmateescteam2_479_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmateescteam2_479(int x, int y)
{
    return new (Active::pool.create()) InmateEscTeam2_479(x, y);
}
static Image* images_inmateescteam3_480_0_0[2];
static Direction direction_inmateescteam3_480_0_0 = {0, 10, 10, 0, -1, images_inmateescteam3_480_0_0, 2};
static Image* images_inmateescteam3_480_0_8[2];
static Direction direction_inmateescteam3_480_0_8 = {8, 10, 10, 0, -1, images_inmateescteam3_480_0_8, 2};
static Image* images_inmateescteam3_480_0_16[2];
static Direction direction_inmateescteam3_480_0_16 = {16, 10, 10, 0, -1, images_inmateescteam3_480_0_16, 2};
static Image* images_inmateescteam3_480_0_24[2];
static Direction direction_inmateescteam3_480_0_24 = {24, 10, 10, 0, -1, images_inmateescteam3_480_0_24, 2};
static Animation anim_inmateescteam3_480_0 = {&direction_inmateescteam3_480_0_0, &direction_inmateescteam3_480_0_0, &direction_inmateescteam3_480_0_0, &direction_inmateescteam3_480_0_0, NULL, &direction_inmateescteam3_480_0_8, &direction_inmateescteam3_480_0_8, &direction_inmateescteam3_480_0_8, &direction_inmateescteam3_480_0_8, &direction_inmateescteam3_480_0_8, &direction_inmateescteam3_480_0_8, &direction_inmateescteam3_480_0_8, NULL, &direction_inmateescteam3_480_0_16, &direction_inmateescteam3_480_0_16, &direction_inmateescteam3_480_0_16, &direction_inmateescteam3_480_0_16, &direction_inmateescteam3_480_0_16, &direction_inmateescteam3_480_0_16, &direction_inmateescteam3_480_0_16, NULL, &direction_inmateescteam3_480_0_24, &direction_inmateescteam3_480_0_24, &direction_inmateescteam3_480_0_24, &direction_inmateescteam3_480_0_24, &direction_inmateescteam3_480_0_24, &direction_inmateescteam3_480_0_24, &direction_inmateescteam3_480_0_24, NULL, &direction_inmateescteam3_480_0_0, &direction_inmateescteam3_480_0_0, &direction_inmateescteam3_480_0_0};
static Image* images_inmateescteam3_480_4_0[4];
static Direction direction_inmateescteam3_480_4_0 = {0, 20, 20, 0, 1, images_inmateescteam3_480_4_0, 4};
static Image* images_inmateescteam3_480_4_16[4];
static Direction direction_inmateescteam3_480_4_16 = {16, 20, 20, 0, 1, images_inmateescteam3_480_4_16, 4};
static Animation anim_inmateescteam3_480_4 = {&direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, NULL, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, &direction_inmateescteam3_480_4_16, NULL, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0, &direction_inmateescteam3_480_4_0};
static Image* images_inmateescteam3_480_6_0[1];
static Direction direction_inmateescteam3_480_6_0 = {0, 6, 6, 0, 1, images_inmateescteam3_480_6_0, 1};
static Image* images_inmateescteam3_480_6_8[1];
static Direction direction_inmateescteam3_480_6_8 = {8, 6, 6, 0, 1, images_inmateescteam3_480_6_8, 1};
static Image* images_inmateescteam3_480_6_16[1];
static Direction direction_inmateescteam3_480_6_16 = {16, 6, 6, 0, 1, images_inmateescteam3_480_6_16, 1};
static Image* images_inmateescteam3_480_6_24[1];
static Direction direction_inmateescteam3_480_6_24 = {24, 6, 6, 0, 1, images_inmateescteam3_480_6_24, 1};
static Animation anim_inmateescteam3_480_6 = {&direction_inmateescteam3_480_6_0, &direction_inmateescteam3_480_6_0, &direction_inmateescteam3_480_6_0, &direction_inmateescteam3_480_6_0, NULL, &direction_inmateescteam3_480_6_8, &direction_inmateescteam3_480_6_8, &direction_inmateescteam3_480_6_8, &direction_inmateescteam3_480_6_8, &direction_inmateescteam3_480_6_8, &direction_inmateescteam3_480_6_8, &direction_inmateescteam3_480_6_8, NULL, &direction_inmateescteam3_480_6_16, &direction_inmateescteam3_480_6_16, &direction_inmateescteam3_480_6_16, &direction_inmateescteam3_480_6_16, &direction_inmateescteam3_480_6_16, &direction_inmateescteam3_480_6_16, &direction_inmateescteam3_480_6_16, NULL, &direction_inmateescteam3_480_6_24, &direction_inmateescteam3_480_6_24, &direction_inmateescteam3_480_6_24, &direction_inmateescteam3_480_6_24, &direction_inmateescteam3_480_6_24, &direction_inmateescteam3_480_6_24, &direction_inmateescteam3_480_6_24, NULL, &direction_inmateescteam3_480_6_0, &direction_inmateescteam3_480_6_0, &direction_inmateescteam3_480_6_0};
static Image* images_inmateescteam3_480_8_0[1];
static Direction direction_inmateescteam3_480_8_0 = {0, 10, 10, 0, -1, images_inmateescteam3_480_8_0, 1};
static Image* images_inmateescteam3_480_8_16[2];
static Direction direction_inmateescteam3_480_8_16 = {16, 5, 5, 0, -1, images_inmateescteam3_480_8_16, 2};
static Image* images_inmateescteam3_480_8_24[1];
static Direction direction_inmateescteam3_480_8_24 = {24, 10, 10, 0, -1, images_inmateescteam3_480_8_24, 1};
static Animation anim_inmateescteam3_480_8 = {&direction_inmateescteam3_480_8_0, &direction_inmateescteam3_480_8_0, &direction_inmateescteam3_480_8_0, &direction_inmateescteam3_480_8_0, &direction_inmateescteam3_480_8_0, &direction_inmateescteam3_480_8_0, &direction_inmateescteam3_480_8_0, &direction_inmateescteam3_480_8_0, NULL, &direction_inmateescteam3_480_8_16, &direction_inmateescteam3_480_8_16, &direction_inmateescteam3_480_8_16, &direction_inmateescteam3_480_8_16, &direction_inmateescteam3_480_8_16, &direction_inmateescteam3_480_8_16, &direction_inmateescteam3_480_8_16, &direction_inmateescteam3_480_8_16, &direction_inmateescteam3_480_8_16, &direction_inmateescteam3_480_8_16, &direction_inmateescteam3_480_8_16, NULL, &direction_inmateescteam3_480_8_24, &direction_inmateescteam3_480_8_24, &direction_inmateescteam3_480_8_24, &direction_inmateescteam3_480_8_24, &direction_inmateescteam3_480_8_24, &direction_inmateescteam3_480_8_24, &direction_inmateescteam3_480_8_24, NULL, &direction_inmateescteam3_480_8_0, &direction_inmateescteam3_480_8_0, &direction_inmateescteam3_480_8_0};
static Image* images_inmateescteam3_480_9_0[2];
static Direction direction_inmateescteam3_480_9_0 = {0, 5, 5, 0, -1, images_inmateescteam3_480_9_0, 2};
static Animation anim_inmateescteam3_480_9 = {&direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, NULL, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0, &direction_inmateescteam3_480_9_0};
static Image* images_inmateescteam3_480_10_0[5];
static Direction direction_inmateescteam3_480_10_0 = {0, 10, 10, 0, -1, images_inmateescteam3_480_10_0, 5};
static Animation anim_inmateescteam3_480_10 = {&direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, NULL, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0, &direction_inmateescteam3_480_10_0};
static Image* images_inmateescteam3_480_11_0[2];
static Direction direction_inmateescteam3_480_11_0 = {0, 6, 6, 0, -1, images_inmateescteam3_480_11_0, 2};
static Image* images_inmateescteam3_480_11_8[2];
static Direction direction_inmateescteam3_480_11_8 = {8, 6, 6, 0, -1, images_inmateescteam3_480_11_8, 2};
static Image* images_inmateescteam3_480_11_16[2];
static Direction direction_inmateescteam3_480_11_16 = {16, 6, 6, 0, -1, images_inmateescteam3_480_11_16, 2};
static Image* images_inmateescteam3_480_11_24[2];
static Direction direction_inmateescteam3_480_11_24 = {24, 6, 6, 0, -1, images_inmateescteam3_480_11_24, 2};
static Animation anim_inmateescteam3_480_11 = {&direction_inmateescteam3_480_11_0, &direction_inmateescteam3_480_11_0, &direction_inmateescteam3_480_11_0, &direction_inmateescteam3_480_11_0, NULL, &direction_inmateescteam3_480_11_8, &direction_inmateescteam3_480_11_8, &direction_inmateescteam3_480_11_8, &direction_inmateescteam3_480_11_8, &direction_inmateescteam3_480_11_8, &direction_inmateescteam3_480_11_8, &direction_inmateescteam3_480_11_8, NULL, &direction_inmateescteam3_480_11_16, &direction_inmateescteam3_480_11_16, &direction_inmateescteam3_480_11_16, &direction_inmateescteam3_480_11_16, &direction_inmateescteam3_480_11_16, &direction_inmateescteam3_480_11_16, &direction_inmateescteam3_480_11_16, NULL, &direction_inmateescteam3_480_11_24, &direction_inmateescteam3_480_11_24, &direction_inmateescteam3_480_11_24, &direction_inmateescteam3_480_11_24, &direction_inmateescteam3_480_11_24, &direction_inmateescteam3_480_11_24, &direction_inmateescteam3_480_11_24, NULL, &direction_inmateescteam3_480_11_0, &direction_inmateescteam3_480_11_0, &direction_inmateescteam3_480_11_0};
static Image* images_inmateescteam3_480_18_24[8];
static Direction direction_inmateescteam3_480_18_24 = {24, 10, 10, 0, -1, images_inmateescteam3_480_18_24, 8};
static Animation anim_inmateescteam3_480_18 = {&direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, NULL, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24, &direction_inmateescteam3_480_18_24};
static Image* images_inmateescteam3_480_19_24[6];
static Direction direction_inmateescteam3_480_19_24 = {24, 10, 10, 0, -1, images_inmateescteam3_480_19_24, 6};
static Animation anim_inmateescteam3_480_19 = {&direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, NULL, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24, &direction_inmateescteam3_480_19_24};
static Animation * anim_array_inmateescteam3_480[20] = {&anim_inmateescteam3_480_0, NULL, NULL, NULL, &anim_inmateescteam3_480_4, NULL, &anim_inmateescteam3_480_6, NULL, &anim_inmateescteam3_480_8, &anim_inmateescteam3_480_9, &anim_inmateescteam3_480_10, &anim_inmateescteam3_480_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmateescteam3_480_18, &anim_inmateescteam3_480_19};
static Animations anim_inmateescteam3_480 = {20, &anim_array_inmateescteam3_480[0]};
static bool anim_inmateescteam3_480_initialized;
class InmateEscTeam3_480 : public Active
{
public:
    InmateEscTeam3_480(int x, int y) : Active(x, y, InmateEscTeam3_480_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate EscTeam 3", 16);
#endif
        this->animations = &anim_inmateescteam3_480;
        if (!anim_inmateescteam3_480_initialized) {
            anim_inmateescteam3_480_initialized = true;
            images_inmateescteam3_480_0_0[0] = get_internal_image(2540);
            images_inmateescteam3_480_0_0[1] = get_internal_image(2539);
            images_inmateescteam3_480_0_8[0] = get_internal_image(2544);
            images_inmateescteam3_480_0_8[1] = get_internal_image(2545);
            images_inmateescteam3_480_0_16[0] = get_internal_image(2538);
            images_inmateescteam3_480_0_16[1] = get_internal_image(2541);
            images_inmateescteam3_480_0_24[0] = get_internal_image(2542);
            images_inmateescteam3_480_0_24[1] = get_internal_image(2543);
            images_inmateescteam3_480_4_0[0] = get_internal_image(369);
            images_inmateescteam3_480_4_0[1] = get_internal_image(373);
            images_inmateescteam3_480_4_0[2] = get_internal_image(369);
            images_inmateescteam3_480_4_0[3] = get_internal_image(373);
            images_inmateescteam3_480_4_16[0] = get_internal_image(371);
            images_inmateescteam3_480_4_16[1] = get_internal_image(763);
            images_inmateescteam3_480_4_16[2] = get_internal_image(371);
            images_inmateescteam3_480_4_16[3] = get_internal_image(763);
            images_inmateescteam3_480_6_0[0] = get_internal_image(2725);
            images_inmateescteam3_480_6_8[0] = get_internal_image(2729);
            images_inmateescteam3_480_6_16[0] = get_internal_image(2726);
            images_inmateescteam3_480_6_24[0] = get_internal_image(2728);
            images_inmateescteam3_480_8_0[0] = get_internal_image(2730);
            images_inmateescteam3_480_8_16[0] = get_internal_image(2733);
            images_inmateescteam3_480_8_16[1] = get_internal_image(2727);
            images_inmateescteam3_480_8_24[0] = get_internal_image(2732);
            images_inmateescteam3_480_9_0[0] = get_internal_image(1502);
            images_inmateescteam3_480_9_0[1] = get_internal_image(1506);
            images_inmateescteam3_480_10_0[0] = get_internal_image(2743);
            images_inmateescteam3_480_10_0[1] = get_internal_image(2742);
            images_inmateescteam3_480_10_0[2] = get_internal_image(2744);
            images_inmateescteam3_480_10_0[3] = get_internal_image(2744);
            images_inmateescteam3_480_10_0[4] = get_internal_image(2742);
            images_inmateescteam3_480_11_0[0] = get_internal_image(2731);
            images_inmateescteam3_480_11_0[1] = get_internal_image(2735);
            images_inmateescteam3_480_11_8[0] = get_internal_image(2740);
            images_inmateescteam3_480_11_8[1] = get_internal_image(2741);
            images_inmateescteam3_480_11_16[0] = get_internal_image(2734);
            images_inmateescteam3_480_11_16[1] = get_internal_image(2736);
            images_inmateescteam3_480_11_24[0] = get_internal_image(2737);
            images_inmateescteam3_480_11_24[1] = get_internal_image(2738);
            images_inmateescteam3_480_18_24[0] = get_internal_image(2099);
            images_inmateescteam3_480_18_24[1] = get_internal_image(2112);
            images_inmateescteam3_480_18_24[2] = get_internal_image(2107);
            images_inmateescteam3_480_18_24[3] = get_internal_image(2108);
            images_inmateescteam3_480_18_24[4] = get_internal_image(2109);
            images_inmateescteam3_480_18_24[5] = get_internal_image(2114);
            images_inmateescteam3_480_18_24[6] = get_internal_image(2110);
            images_inmateescteam3_480_18_24[7] = get_internal_image(2111);
            images_inmateescteam3_480_19_24[0] = get_internal_image(2150);
            images_inmateescteam3_480_19_24[1] = get_internal_image(2156);
            images_inmateescteam3_480_19_24[2] = get_internal_image(2157);
            images_inmateescteam3_480_19_24[3] = get_internal_image(2157);
            images_inmateescteam3_480_19_24[4] = get_internal_image(2156);
            images_inmateescteam3_480_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmateescteam3_480(int x, int y)
{
    return new (Active::pool.create()) InmateEscTeam3_480(x, y);
}
static Image* images_outfitinmateescteam_481_0_0[2];
static Direction direction_outfitinmateescteam_481_0_0 = {0, 6, 6, 0, -1, images_outfitinmateescteam_481_0_0, 2};
static Image* images_outfitinmateescteam_481_0_8[2];
static Direction direction_outfitinmateescteam_481_0_8 = {8, 6, 6, 0, -1, images_outfitinmateescteam_481_0_8, 2};
static Image* images_outfitinmateescteam_481_0_16[2];
static Direction direction_outfitinmateescteam_481_0_16 = {16, 6, 6, 0, -1, images_outfitinmateescteam_481_0_16, 2};
static Image* images_outfitinmateescteam_481_0_24[2];
static Direction direction_outfitinmateescteam_481_0_24 = {24, 6, 6, 0, -1, images_outfitinmateescteam_481_0_24, 2};
static Animation anim_outfitinmateescteam_481_0 = {&direction_outfitinmateescteam_481_0_0, &direction_outfitinmateescteam_481_0_0, &direction_outfitinmateescteam_481_0_0, &direction_outfitinmateescteam_481_0_0, NULL, &direction_outfitinmateescteam_481_0_8, &direction_outfitinmateescteam_481_0_8, &direction_outfitinmateescteam_481_0_8, &direction_outfitinmateescteam_481_0_8, &direction_outfitinmateescteam_481_0_8, &direction_outfitinmateescteam_481_0_8, &direction_outfitinmateescteam_481_0_8, NULL, &direction_outfitinmateescteam_481_0_16, &direction_outfitinmateescteam_481_0_16, &direction_outfitinmateescteam_481_0_16, &direction_outfitinmateescteam_481_0_16, &direction_outfitinmateescteam_481_0_16, &direction_outfitinmateescteam_481_0_16, &direction_outfitinmateescteam_481_0_16, NULL, &direction_outfitinmateescteam_481_0_24, &direction_outfitinmateescteam_481_0_24, &direction_outfitinmateescteam_481_0_24, &direction_outfitinmateescteam_481_0_24, &direction_outfitinmateescteam_481_0_24, &direction_outfitinmateescteam_481_0_24, &direction_outfitinmateescteam_481_0_24, NULL, &direction_outfitinmateescteam_481_0_0, &direction_outfitinmateescteam_481_0_0, &direction_outfitinmateescteam_481_0_0};
static Image* images_outfitinmateescteam_481_6_0[1];
static Direction direction_outfitinmateescteam_481_6_0 = {0, 6, 6, 0, -1, images_outfitinmateescteam_481_6_0, 1};
static Image* images_outfitinmateescteam_481_6_8[1];
static Direction direction_outfitinmateescteam_481_6_8 = {8, 6, 6, 0, -1, images_outfitinmateescteam_481_6_8, 1};
static Image* images_outfitinmateescteam_481_6_16[1];
static Direction direction_outfitinmateescteam_481_6_16 = {16, 6, 6, 0, 1, images_outfitinmateescteam_481_6_16, 1};
static Image* images_outfitinmateescteam_481_6_24[1];
static Direction direction_outfitinmateescteam_481_6_24 = {24, 6, 6, 0, -1, images_outfitinmateescteam_481_6_24, 1};
static Animation anim_outfitinmateescteam_481_6 = {&direction_outfitinmateescteam_481_6_0, &direction_outfitinmateescteam_481_6_0, &direction_outfitinmateescteam_481_6_0, &direction_outfitinmateescteam_481_6_0, NULL, &direction_outfitinmateescteam_481_6_8, &direction_outfitinmateescteam_481_6_8, &direction_outfitinmateescteam_481_6_8, &direction_outfitinmateescteam_481_6_8, &direction_outfitinmateescteam_481_6_8, &direction_outfitinmateescteam_481_6_8, &direction_outfitinmateescteam_481_6_8, NULL, &direction_outfitinmateescteam_481_6_16, &direction_outfitinmateescteam_481_6_16, &direction_outfitinmateescteam_481_6_16, &direction_outfitinmateescteam_481_6_16, &direction_outfitinmateescteam_481_6_16, &direction_outfitinmateescteam_481_6_16, &direction_outfitinmateescteam_481_6_16, NULL, &direction_outfitinmateescteam_481_6_24, &direction_outfitinmateescteam_481_6_24, &direction_outfitinmateescteam_481_6_24, &direction_outfitinmateescteam_481_6_24, &direction_outfitinmateescteam_481_6_24, &direction_outfitinmateescteam_481_6_24, &direction_outfitinmateescteam_481_6_24, NULL, &direction_outfitinmateescteam_481_6_0, &direction_outfitinmateescteam_481_6_0, &direction_outfitinmateescteam_481_6_0};
static Image* images_outfitinmateescteam_481_7_0[2];
static Direction direction_outfitinmateescteam_481_7_0 = {0, 6, 6, 0, -1, images_outfitinmateescteam_481_7_0, 2};
static Image* images_outfitinmateescteam_481_7_8[2];
static Direction direction_outfitinmateescteam_481_7_8 = {8, 6, 6, 0, -1, images_outfitinmateescteam_481_7_8, 2};
static Image* images_outfitinmateescteam_481_7_16[2];
static Direction direction_outfitinmateescteam_481_7_16 = {16, 6, 6, 0, -1, images_outfitinmateescteam_481_7_16, 2};
static Image* images_outfitinmateescteam_481_7_24[2];
static Direction direction_outfitinmateescteam_481_7_24 = {24, 6, 6, 0, -1, images_outfitinmateescteam_481_7_24, 2};
static Animation anim_outfitinmateescteam_481_7 = {&direction_outfitinmateescteam_481_7_0, &direction_outfitinmateescteam_481_7_0, &direction_outfitinmateescteam_481_7_0, &direction_outfitinmateescteam_481_7_0, NULL, &direction_outfitinmateescteam_481_7_8, &direction_outfitinmateescteam_481_7_8, &direction_outfitinmateescteam_481_7_8, &direction_outfitinmateescteam_481_7_8, &direction_outfitinmateescteam_481_7_8, &direction_outfitinmateescteam_481_7_8, &direction_outfitinmateescteam_481_7_8, NULL, &direction_outfitinmateescteam_481_7_16, &direction_outfitinmateescteam_481_7_16, &direction_outfitinmateescteam_481_7_16, &direction_outfitinmateescteam_481_7_16, &direction_outfitinmateescteam_481_7_16, &direction_outfitinmateescteam_481_7_16, &direction_outfitinmateescteam_481_7_16, NULL, &direction_outfitinmateescteam_481_7_24, &direction_outfitinmateescteam_481_7_24, &direction_outfitinmateescteam_481_7_24, &direction_outfitinmateescteam_481_7_24, &direction_outfitinmateescteam_481_7_24, &direction_outfitinmateescteam_481_7_24, &direction_outfitinmateescteam_481_7_24, NULL, &direction_outfitinmateescteam_481_7_0, &direction_outfitinmateescteam_481_7_0, &direction_outfitinmateescteam_481_7_0};
static Image* images_outfitinmateescteam_481_8_0[1];
static Direction direction_outfitinmateescteam_481_8_0 = {0, 10, 10, 0, -1, images_outfitinmateescteam_481_8_0, 1};
static Image* images_outfitinmateescteam_481_8_16[2];
static Direction direction_outfitinmateescteam_481_8_16 = {16, 5, 5, 0, -1, images_outfitinmateescteam_481_8_16, 2};
static Image* images_outfitinmateescteam_481_8_24[3];
static Direction direction_outfitinmateescteam_481_8_24 = {24, 50, 50, 0, -1, images_outfitinmateescteam_481_8_24, 3};
static Animation anim_outfitinmateescteam_481_8 = {&direction_outfitinmateescteam_481_8_0, &direction_outfitinmateescteam_481_8_0, &direction_outfitinmateescteam_481_8_0, &direction_outfitinmateescteam_481_8_0, &direction_outfitinmateescteam_481_8_0, &direction_outfitinmateescteam_481_8_0, &direction_outfitinmateescteam_481_8_0, &direction_outfitinmateescteam_481_8_0, NULL, &direction_outfitinmateescteam_481_8_16, &direction_outfitinmateescteam_481_8_16, &direction_outfitinmateescteam_481_8_16, &direction_outfitinmateescteam_481_8_16, &direction_outfitinmateescteam_481_8_16, &direction_outfitinmateescteam_481_8_16, &direction_outfitinmateescteam_481_8_16, &direction_outfitinmateescteam_481_8_16, &direction_outfitinmateescteam_481_8_16, &direction_outfitinmateescteam_481_8_16, &direction_outfitinmateescteam_481_8_16, NULL, &direction_outfitinmateescteam_481_8_24, &direction_outfitinmateescteam_481_8_24, &direction_outfitinmateescteam_481_8_24, &direction_outfitinmateescteam_481_8_24, &direction_outfitinmateescteam_481_8_24, &direction_outfitinmateescteam_481_8_24, &direction_outfitinmateescteam_481_8_24, NULL, &direction_outfitinmateescteam_481_8_0, &direction_outfitinmateescteam_481_8_0, &direction_outfitinmateescteam_481_8_0};
static Image* images_outfitinmateescteam_481_9_0[2];
static Direction direction_outfitinmateescteam_481_9_0 = {0, 5, 5, 0, -1, images_outfitinmateescteam_481_9_0, 2};
static Animation anim_outfitinmateescteam_481_9 = {&direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, NULL, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0, &direction_outfitinmateescteam_481_9_0};
static Image* images_outfitinmateescteam_481_10_0[5];
static Direction direction_outfitinmateescteam_481_10_0 = {0, 10, 10, 0, -1, images_outfitinmateescteam_481_10_0, 5};
static Animation anim_outfitinmateescteam_481_10 = {&direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, NULL, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0, &direction_outfitinmateescteam_481_10_0};
static Image* images_outfitinmateescteam_481_11_0[2];
static Direction direction_outfitinmateescteam_481_11_0 = {0, 6, 6, 0, -1, images_outfitinmateescteam_481_11_0, 2};
static Image* images_outfitinmateescteam_481_11_8[2];
static Direction direction_outfitinmateescteam_481_11_8 = {8, 6, 6, 0, -1, images_outfitinmateescteam_481_11_8, 2};
static Image* images_outfitinmateescteam_481_11_16[2];
static Direction direction_outfitinmateescteam_481_11_16 = {16, 6, 6, 0, -1, images_outfitinmateescteam_481_11_16, 2};
static Image* images_outfitinmateescteam_481_11_24[2];
static Direction direction_outfitinmateescteam_481_11_24 = {24, 6, 6, 0, -1, images_outfitinmateescteam_481_11_24, 2};
static Animation anim_outfitinmateescteam_481_11 = {&direction_outfitinmateescteam_481_11_0, &direction_outfitinmateescteam_481_11_0, &direction_outfitinmateescteam_481_11_0, &direction_outfitinmateescteam_481_11_0, NULL, &direction_outfitinmateescteam_481_11_8, &direction_outfitinmateescteam_481_11_8, &direction_outfitinmateescteam_481_11_8, &direction_outfitinmateescteam_481_11_8, &direction_outfitinmateescteam_481_11_8, &direction_outfitinmateescteam_481_11_8, &direction_outfitinmateescteam_481_11_8, NULL, &direction_outfitinmateescteam_481_11_16, &direction_outfitinmateescteam_481_11_16, &direction_outfitinmateescteam_481_11_16, &direction_outfitinmateescteam_481_11_16, &direction_outfitinmateescteam_481_11_16, &direction_outfitinmateescteam_481_11_16, &direction_outfitinmateescteam_481_11_16, NULL, &direction_outfitinmateescteam_481_11_24, &direction_outfitinmateescteam_481_11_24, &direction_outfitinmateescteam_481_11_24, &direction_outfitinmateescteam_481_11_24, &direction_outfitinmateescteam_481_11_24, &direction_outfitinmateescteam_481_11_24, &direction_outfitinmateescteam_481_11_24, NULL, &direction_outfitinmateescteam_481_11_0, &direction_outfitinmateescteam_481_11_0, &direction_outfitinmateescteam_481_11_0};
static Image* images_outfitinmateescteam_481_12_0[2];
static Direction direction_outfitinmateescteam_481_12_0 = {0, 10, 10, 0, -1, images_outfitinmateescteam_481_12_0, 2};
static Image* images_outfitinmateescteam_481_12_8[2];
static Direction direction_outfitinmateescteam_481_12_8 = {8, 10, 10, 0, -1, images_outfitinmateescteam_481_12_8, 2};
static Image* images_outfitinmateescteam_481_12_16[2];
static Direction direction_outfitinmateescteam_481_12_16 = {16, 10, 10, 0, -1, images_outfitinmateescteam_481_12_16, 2};
static Image* images_outfitinmateescteam_481_12_24[2];
static Direction direction_outfitinmateescteam_481_12_24 = {24, 10, 10, 0, -1, images_outfitinmateescteam_481_12_24, 2};
static Animation anim_outfitinmateescteam_481_12 = {&direction_outfitinmateescteam_481_12_0, &direction_outfitinmateescteam_481_12_0, &direction_outfitinmateescteam_481_12_0, &direction_outfitinmateescteam_481_12_0, NULL, &direction_outfitinmateescteam_481_12_8, &direction_outfitinmateescteam_481_12_8, &direction_outfitinmateescteam_481_12_8, &direction_outfitinmateescteam_481_12_8, &direction_outfitinmateescteam_481_12_8, &direction_outfitinmateescteam_481_12_8, &direction_outfitinmateescteam_481_12_8, NULL, &direction_outfitinmateescteam_481_12_16, &direction_outfitinmateescteam_481_12_16, &direction_outfitinmateescteam_481_12_16, &direction_outfitinmateescteam_481_12_16, &direction_outfitinmateescteam_481_12_16, &direction_outfitinmateescteam_481_12_16, &direction_outfitinmateescteam_481_12_16, NULL, &direction_outfitinmateescteam_481_12_24, &direction_outfitinmateescteam_481_12_24, &direction_outfitinmateescteam_481_12_24, &direction_outfitinmateescteam_481_12_24, &direction_outfitinmateescteam_481_12_24, &direction_outfitinmateescteam_481_12_24, &direction_outfitinmateescteam_481_12_24, NULL, &direction_outfitinmateescteam_481_12_0, &direction_outfitinmateescteam_481_12_0, &direction_outfitinmateescteam_481_12_0};
static Image* images_outfitinmateescteam_481_13_0[2];
static Direction direction_outfitinmateescteam_481_13_0 = {0, 10, 10, 0, -1, images_outfitinmateescteam_481_13_0, 2};
static Image* images_outfitinmateescteam_481_13_8[2];
static Direction direction_outfitinmateescteam_481_13_8 = {8, 10, 10, 0, -1, images_outfitinmateescteam_481_13_8, 2};
static Image* images_outfitinmateescteam_481_13_16[2];
static Direction direction_outfitinmateescteam_481_13_16 = {16, 10, 10, 0, -1, images_outfitinmateescteam_481_13_16, 2};
static Image* images_outfitinmateescteam_481_13_24[2];
static Direction direction_outfitinmateescteam_481_13_24 = {24, 10, 10, 0, -1, images_outfitinmateescteam_481_13_24, 2};
static Animation anim_outfitinmateescteam_481_13 = {&direction_outfitinmateescteam_481_13_0, &direction_outfitinmateescteam_481_13_0, &direction_outfitinmateescteam_481_13_0, &direction_outfitinmateescteam_481_13_0, NULL, &direction_outfitinmateescteam_481_13_8, &direction_outfitinmateescteam_481_13_8, &direction_outfitinmateescteam_481_13_8, &direction_outfitinmateescteam_481_13_8, &direction_outfitinmateescteam_481_13_8, &direction_outfitinmateescteam_481_13_8, &direction_outfitinmateescteam_481_13_8, NULL, &direction_outfitinmateescteam_481_13_16, &direction_outfitinmateescteam_481_13_16, &direction_outfitinmateescteam_481_13_16, &direction_outfitinmateescteam_481_13_16, &direction_outfitinmateescteam_481_13_16, &direction_outfitinmateescteam_481_13_16, &direction_outfitinmateescteam_481_13_16, NULL, &direction_outfitinmateescteam_481_13_24, &direction_outfitinmateescteam_481_13_24, &direction_outfitinmateescteam_481_13_24, &direction_outfitinmateescteam_481_13_24, &direction_outfitinmateescteam_481_13_24, &direction_outfitinmateescteam_481_13_24, &direction_outfitinmateescteam_481_13_24, NULL, &direction_outfitinmateescteam_481_13_0, &direction_outfitinmateescteam_481_13_0, &direction_outfitinmateescteam_481_13_0};
static Image* images_outfitinmateescteam_481_14_0[2];
static Direction direction_outfitinmateescteam_481_14_0 = {0, 10, 10, 0, -1, images_outfitinmateescteam_481_14_0, 2};
static Image* images_outfitinmateescteam_481_14_8[2];
static Direction direction_outfitinmateescteam_481_14_8 = {8, 10, 10, 0, -1, images_outfitinmateescteam_481_14_8, 2};
static Image* images_outfitinmateescteam_481_14_16[2];
static Direction direction_outfitinmateescteam_481_14_16 = {16, 10, 10, 0, -1, images_outfitinmateescteam_481_14_16, 2};
static Image* images_outfitinmateescteam_481_14_24[2];
static Direction direction_outfitinmateescteam_481_14_24 = {24, 10, 10, 0, -1, images_outfitinmateescteam_481_14_24, 2};
static Animation anim_outfitinmateescteam_481_14 = {&direction_outfitinmateescteam_481_14_0, &direction_outfitinmateescteam_481_14_0, &direction_outfitinmateescteam_481_14_0, &direction_outfitinmateescteam_481_14_0, NULL, &direction_outfitinmateescteam_481_14_8, &direction_outfitinmateescteam_481_14_8, &direction_outfitinmateescteam_481_14_8, &direction_outfitinmateescteam_481_14_8, &direction_outfitinmateescteam_481_14_8, &direction_outfitinmateescteam_481_14_8, &direction_outfitinmateescteam_481_14_8, NULL, &direction_outfitinmateescteam_481_14_16, &direction_outfitinmateescteam_481_14_16, &direction_outfitinmateescteam_481_14_16, &direction_outfitinmateescteam_481_14_16, &direction_outfitinmateescteam_481_14_16, &direction_outfitinmateescteam_481_14_16, &direction_outfitinmateescteam_481_14_16, NULL, &direction_outfitinmateescteam_481_14_24, &direction_outfitinmateescteam_481_14_24, &direction_outfitinmateescteam_481_14_24, &direction_outfitinmateescteam_481_14_24, &direction_outfitinmateescteam_481_14_24, &direction_outfitinmateescteam_481_14_24, &direction_outfitinmateescteam_481_14_24, NULL, &direction_outfitinmateescteam_481_14_0, &direction_outfitinmateescteam_481_14_0, &direction_outfitinmateescteam_481_14_0};
static Image* images_outfitinmateescteam_481_15_0[2];
static Direction direction_outfitinmateescteam_481_15_0 = {0, 10, 10, 0, -1, images_outfitinmateescteam_481_15_0, 2};
static Image* images_outfitinmateescteam_481_15_8[2];
static Direction direction_outfitinmateescteam_481_15_8 = {8, 10, 10, 0, -1, images_outfitinmateescteam_481_15_8, 2};
static Image* images_outfitinmateescteam_481_15_16[2];
static Direction direction_outfitinmateescteam_481_15_16 = {16, 10, 10, 0, -1, images_outfitinmateescteam_481_15_16, 2};
static Image* images_outfitinmateescteam_481_15_24[2];
static Direction direction_outfitinmateescteam_481_15_24 = {24, 10, 10, 0, -1, images_outfitinmateescteam_481_15_24, 2};
static Animation anim_outfitinmateescteam_481_15 = {&direction_outfitinmateescteam_481_15_0, &direction_outfitinmateescteam_481_15_0, &direction_outfitinmateescteam_481_15_0, &direction_outfitinmateescteam_481_15_0, NULL, &direction_outfitinmateescteam_481_15_8, &direction_outfitinmateescteam_481_15_8, &direction_outfitinmateescteam_481_15_8, &direction_outfitinmateescteam_481_15_8, &direction_outfitinmateescteam_481_15_8, &direction_outfitinmateescteam_481_15_8, &direction_outfitinmateescteam_481_15_8, NULL, &direction_outfitinmateescteam_481_15_16, &direction_outfitinmateescteam_481_15_16, &direction_outfitinmateescteam_481_15_16, &direction_outfitinmateescteam_481_15_16, &direction_outfitinmateescteam_481_15_16, &direction_outfitinmateescteam_481_15_16, &direction_outfitinmateescteam_481_15_16, NULL, &direction_outfitinmateescteam_481_15_24, &direction_outfitinmateescteam_481_15_24, &direction_outfitinmateescteam_481_15_24, &direction_outfitinmateescteam_481_15_24, &direction_outfitinmateescteam_481_15_24, &direction_outfitinmateescteam_481_15_24, &direction_outfitinmateescteam_481_15_24, NULL, &direction_outfitinmateescteam_481_15_0, &direction_outfitinmateescteam_481_15_0, &direction_outfitinmateescteam_481_15_0};
static Image* images_outfitinmateescteam_481_16_0[2];
static Direction direction_outfitinmateescteam_481_16_0 = {0, 10, 10, 0, -1, images_outfitinmateescteam_481_16_0, 2};
static Image* images_outfitinmateescteam_481_16_8[2];
static Direction direction_outfitinmateescteam_481_16_8 = {8, 10, 10, 0, -1, images_outfitinmateescteam_481_16_8, 2};
static Image* images_outfitinmateescteam_481_16_16[2];
static Direction direction_outfitinmateescteam_481_16_16 = {16, 10, 10, 0, -1, images_outfitinmateescteam_481_16_16, 2};
static Image* images_outfitinmateescteam_481_16_24[2];
static Direction direction_outfitinmateescteam_481_16_24 = {24, 10, 10, 0, -1, images_outfitinmateescteam_481_16_24, 2};
static Animation anim_outfitinmateescteam_481_16 = {&direction_outfitinmateescteam_481_16_0, &direction_outfitinmateescteam_481_16_0, &direction_outfitinmateescteam_481_16_0, &direction_outfitinmateescteam_481_16_0, NULL, &direction_outfitinmateescteam_481_16_8, &direction_outfitinmateescteam_481_16_8, &direction_outfitinmateescteam_481_16_8, &direction_outfitinmateescteam_481_16_8, &direction_outfitinmateescteam_481_16_8, &direction_outfitinmateescteam_481_16_8, &direction_outfitinmateescteam_481_16_8, NULL, &direction_outfitinmateescteam_481_16_16, &direction_outfitinmateescteam_481_16_16, &direction_outfitinmateescteam_481_16_16, &direction_outfitinmateescteam_481_16_16, &direction_outfitinmateescteam_481_16_16, &direction_outfitinmateescteam_481_16_16, &direction_outfitinmateescteam_481_16_16, NULL, &direction_outfitinmateescteam_481_16_24, &direction_outfitinmateescteam_481_16_24, &direction_outfitinmateescteam_481_16_24, &direction_outfitinmateescteam_481_16_24, &direction_outfitinmateescteam_481_16_24, &direction_outfitinmateescteam_481_16_24, &direction_outfitinmateescteam_481_16_24, NULL, &direction_outfitinmateescteam_481_16_0, &direction_outfitinmateescteam_481_16_0, &direction_outfitinmateescteam_481_16_0};
static Image* images_outfitinmateescteam_481_17_0[2];
static Direction direction_outfitinmateescteam_481_17_0 = {0, 5, 5, 1, -1, images_outfitinmateescteam_481_17_0, 2};
static Image* images_outfitinmateescteam_481_17_8[2];
static Direction direction_outfitinmateescteam_481_17_8 = {8, 5, 5, 1, -1, images_outfitinmateescteam_481_17_8, 2};
static Image* images_outfitinmateescteam_481_17_16[2];
static Direction direction_outfitinmateescteam_481_17_16 = {16, 5, 5, 1, -1, images_outfitinmateescteam_481_17_16, 2};
static Image* images_outfitinmateescteam_481_17_24[2];
static Direction direction_outfitinmateescteam_481_17_24 = {24, 5, 5, 1, -1, images_outfitinmateescteam_481_17_24, 2};
static Animation anim_outfitinmateescteam_481_17 = {&direction_outfitinmateescteam_481_17_0, &direction_outfitinmateescteam_481_17_0, &direction_outfitinmateescteam_481_17_0, &direction_outfitinmateescteam_481_17_0, NULL, &direction_outfitinmateescteam_481_17_8, &direction_outfitinmateescteam_481_17_8, &direction_outfitinmateescteam_481_17_8, &direction_outfitinmateescteam_481_17_8, &direction_outfitinmateescteam_481_17_8, &direction_outfitinmateescteam_481_17_8, &direction_outfitinmateescteam_481_17_8, NULL, &direction_outfitinmateescteam_481_17_16, &direction_outfitinmateescteam_481_17_16, &direction_outfitinmateescteam_481_17_16, &direction_outfitinmateescteam_481_17_16, &direction_outfitinmateescteam_481_17_16, &direction_outfitinmateescteam_481_17_16, &direction_outfitinmateescteam_481_17_16, NULL, &direction_outfitinmateescteam_481_17_24, &direction_outfitinmateescteam_481_17_24, &direction_outfitinmateescteam_481_17_24, &direction_outfitinmateescteam_481_17_24, &direction_outfitinmateescteam_481_17_24, &direction_outfitinmateescteam_481_17_24, &direction_outfitinmateescteam_481_17_24, NULL, &direction_outfitinmateescteam_481_17_0, &direction_outfitinmateescteam_481_17_0, &direction_outfitinmateescteam_481_17_0};
static Image* images_outfitinmateescteam_481_18_24[8];
static Direction direction_outfitinmateescteam_481_18_24 = {24, 25, 25, 0, -1, images_outfitinmateescteam_481_18_24, 8};
static Animation anim_outfitinmateescteam_481_18 = {&direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, NULL, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24, &direction_outfitinmateescteam_481_18_24};
static Image* images_outfitinmateescteam_481_19_24[5];
static Direction direction_outfitinmateescteam_481_19_24 = {24, 10, 10, 0, -1, images_outfitinmateescteam_481_19_24, 5};
static Animation anim_outfitinmateescteam_481_19 = {&direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, NULL, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24, &direction_outfitinmateescteam_481_19_24};
static Animation * anim_array_outfitinmateescteam_481[20] = {&anim_outfitinmateescteam_481_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitinmateescteam_481_6, &anim_outfitinmateescteam_481_7, &anim_outfitinmateescteam_481_8, &anim_outfitinmateescteam_481_9, &anim_outfitinmateescteam_481_10, &anim_outfitinmateescteam_481_11, &anim_outfitinmateescteam_481_12, &anim_outfitinmateescteam_481_13, &anim_outfitinmateescteam_481_14, &anim_outfitinmateescteam_481_15, &anim_outfitinmateescteam_481_16, &anim_outfitinmateescteam_481_17, &anim_outfitinmateescteam_481_18, &anim_outfitinmateescteam_481_19};
static Animations anim_outfitinmateescteam_481 = {20, &anim_array_outfitinmateescteam_481[0]};
static bool anim_outfitinmateescteam_481_initialized;
class OutfitInmateEscTeam_481 : public Active
{
public:
    OutfitInmateEscTeam_481(int x, int y) : Active(x, y, OutfitInmateEscTeam_481_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate EscTeam", 23);
#endif
        this->animations = &anim_outfitinmateescteam_481;
        if (!anim_outfitinmateescteam_481_initialized) {
            anim_outfitinmateescteam_481_initialized = true;
            images_outfitinmateescteam_481_0_0[0] = get_internal_image(2504);
            images_outfitinmateescteam_481_0_0[1] = get_internal_image(2567);
            images_outfitinmateescteam_481_0_8[0] = get_internal_image(2574);
            images_outfitinmateescteam_481_0_8[1] = get_internal_image(2611);
            images_outfitinmateescteam_481_0_16[0] = get_internal_image(2507);
            images_outfitinmateescteam_481_0_16[1] = get_internal_image(2568);
            images_outfitinmateescteam_481_0_24[0] = get_internal_image(2575);
            images_outfitinmateescteam_481_0_24[1] = get_internal_image(2614);
            images_outfitinmateescteam_481_6_0[0] = get_internal_image(2578);
            images_outfitinmateescteam_481_6_8[0] = get_internal_image(2580);
            images_outfitinmateescteam_481_6_16[0] = get_internal_image(2577);
            images_outfitinmateescteam_481_6_24[0] = get_internal_image(2581);
            images_outfitinmateescteam_481_7_0[0] = get_internal_image(2607);
            images_outfitinmateescteam_481_7_0[1] = get_internal_image(2599);
            images_outfitinmateescteam_481_7_8[0] = get_internal_image(2610);
            images_outfitinmateescteam_481_7_8[1] = get_internal_image(2612);
            images_outfitinmateescteam_481_7_16[0] = get_internal_image(2608);
            images_outfitinmateescteam_481_7_16[1] = get_internal_image(2601);
            images_outfitinmateescteam_481_7_24[0] = get_internal_image(2609);
            images_outfitinmateescteam_481_7_24[1] = get_internal_image(2606);
            images_outfitinmateescteam_481_8_0[0] = get_internal_image(2597);
            images_outfitinmateescteam_481_8_16[0] = get_internal_image(2595);
            images_outfitinmateescteam_481_8_16[1] = get_internal_image(2596);
            images_outfitinmateescteam_481_8_24[0] = get_internal_image(2594);
            images_outfitinmateescteam_481_8_24[1] = get_internal_image(2594);
            images_outfitinmateescteam_481_8_24[2] = get_internal_image(2594);
            images_outfitinmateescteam_481_9_0[0] = get_internal_image(1492);
            images_outfitinmateescteam_481_9_0[1] = get_internal_image(1493);
            images_outfitinmateescteam_481_10_0[0] = get_internal_image(2561);
            images_outfitinmateescteam_481_10_0[1] = get_internal_image(2562);
            images_outfitinmateescteam_481_10_0[2] = get_internal_image(2646);
            images_outfitinmateescteam_481_10_0[3] = get_internal_image(2651);
            images_outfitinmateescteam_481_10_0[4] = get_internal_image(2650);
            images_outfitinmateescteam_481_11_0[0] = get_internal_image(2590);
            images_outfitinmateescteam_481_11_0[1] = get_internal_image(2589);
            images_outfitinmateescteam_481_11_8[0] = get_internal_image(2588);
            images_outfitinmateescteam_481_11_8[1] = get_internal_image(2587);
            images_outfitinmateescteam_481_11_16[0] = get_internal_image(2591);
            images_outfitinmateescteam_481_11_16[1] = get_internal_image(2592);
            images_outfitinmateescteam_481_11_24[0] = get_internal_image(2593);
            images_outfitinmateescteam_481_11_24[1] = get_internal_image(2593);
            images_outfitinmateescteam_481_12_0[0] = get_internal_image(2617);
            images_outfitinmateescteam_481_12_0[1] = get_internal_image(2626);
            images_outfitinmateescteam_481_12_8[0] = get_internal_image(2624);
            images_outfitinmateescteam_481_12_8[1] = get_internal_image(2623);
            images_outfitinmateescteam_481_12_16[0] = get_internal_image(2627);
            images_outfitinmateescteam_481_12_16[1] = get_internal_image(2618);
            images_outfitinmateescteam_481_12_24[0] = get_internal_image(2621);
            images_outfitinmateescteam_481_12_24[1] = get_internal_image(2622);
            images_outfitinmateescteam_481_13_0[0] = get_internal_image(2653);
            images_outfitinmateescteam_481_13_0[1] = get_internal_image(2652);
            images_outfitinmateescteam_481_13_8[0] = get_internal_image(2656);
            images_outfitinmateescteam_481_13_8[1] = get_internal_image(2659);
            images_outfitinmateescteam_481_13_16[0] = get_internal_image(2654);
            images_outfitinmateescteam_481_13_16[1] = get_internal_image(2655);
            images_outfitinmateescteam_481_13_24[0] = get_internal_image(2658);
            images_outfitinmateescteam_481_13_24[1] = get_internal_image(2657);
            images_outfitinmateescteam_481_14_0[0] = get_internal_image(2572);
            images_outfitinmateescteam_481_14_0[1] = get_internal_image(2570);
            images_outfitinmateescteam_481_14_8[0] = get_internal_image(2662);
            images_outfitinmateescteam_481_14_8[1] = get_internal_image(2664);
            images_outfitinmateescteam_481_14_16[0] = get_internal_image(2573);
            images_outfitinmateescteam_481_14_16[1] = get_internal_image(2660);
            images_outfitinmateescteam_481_14_24[0] = get_internal_image(2663);
            images_outfitinmateescteam_481_14_24[1] = get_internal_image(1621);
            images_outfitinmateescteam_481_15_0[0] = get_internal_image(2628);
            images_outfitinmateescteam_481_15_0[1] = get_internal_image(2632);
            images_outfitinmateescteam_481_15_8[0] = get_internal_image(2643);
            images_outfitinmateescteam_481_15_8[1] = get_internal_image(2642);
            images_outfitinmateescteam_481_15_16[0] = get_internal_image(2631);
            images_outfitinmateescteam_481_15_16[1] = get_internal_image(2633);
            images_outfitinmateescteam_481_15_24[0] = get_internal_image(2638);
            images_outfitinmateescteam_481_15_24[1] = get_internal_image(2635);
            images_outfitinmateescteam_481_16_0[0] = get_internal_image(1858);
            images_outfitinmateescteam_481_16_0[1] = get_internal_image(1859);
            images_outfitinmateescteam_481_16_8[0] = get_internal_image(1864);
            images_outfitinmateescteam_481_16_8[1] = get_internal_image(1861);
            images_outfitinmateescteam_481_16_16[0] = get_internal_image(1857);
            images_outfitinmateescteam_481_16_16[1] = get_internal_image(1860);
            images_outfitinmateescteam_481_16_24[0] = get_internal_image(1862);
            images_outfitinmateescteam_481_16_24[1] = get_internal_image(1863);
            images_outfitinmateescteam_481_17_0[0] = get_internal_image(2045);
            images_outfitinmateescteam_481_17_0[1] = get_internal_image(2046);
            images_outfitinmateescteam_481_17_8[0] = get_internal_image(2050);
            images_outfitinmateescteam_481_17_8[1] = get_internal_image(2043);
            images_outfitinmateescteam_481_17_16[0] = get_internal_image(2041);
            images_outfitinmateescteam_481_17_16[1] = get_internal_image(2044);
            images_outfitinmateescteam_481_17_24[0] = get_internal_image(2049);
            images_outfitinmateescteam_481_17_24[1] = get_internal_image(2047);
            images_outfitinmateescteam_481_18_24[0] = get_internal_image(1407);
            images_outfitinmateescteam_481_18_24[1] = get_internal_image(2131);
            images_outfitinmateescteam_481_18_24[2] = get_internal_image(2168);
            images_outfitinmateescteam_481_18_24[3] = get_internal_image(437);
            images_outfitinmateescteam_481_18_24[4] = get_internal_image(1425);
            images_outfitinmateescteam_481_18_24[5] = get_internal_image(2126);
            images_outfitinmateescteam_481_18_24[6] = get_internal_image(2171);
            images_outfitinmateescteam_481_18_24[7] = get_internal_image(1412);
            images_outfitinmateescteam_481_19_24[0] = get_internal_image(2328);
            images_outfitinmateescteam_481_19_24[1] = get_internal_image(2329);
            images_outfitinmateescteam_481_19_24[2] = get_internal_image(2329);
            images_outfitinmateescteam_481_19_24[3] = get_internal_image(2307);
            images_outfitinmateescteam_481_19_24[4] = get_internal_image(2307);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmateescteam_481(int x, int y)
{
    return new (Active::pool.create()) OutfitInmateEscTeam_481(x, y);
}
static Image* images_desksdlc_482_0_0[1];
static Direction direction_desksdlc_482_0_0 = {0, 50, 50, 0, -1, images_desksdlc_482_0_0, 1};
static Image* images_desksdlc_482_0_16[12];
static Direction direction_desksdlc_482_0_16 = {16, 25, 25, 0, -1, images_desksdlc_482_0_16, 12};
static Image* images_desksdlc_482_0_24[1];
static Direction direction_desksdlc_482_0_24 = {24, 50, 50, 0, -1, images_desksdlc_482_0_24, 1};
static Animation anim_desksdlc_482_0 = {&direction_desksdlc_482_0_0, &direction_desksdlc_482_0_0, &direction_desksdlc_482_0_0, &direction_desksdlc_482_0_0, &direction_desksdlc_482_0_0, &direction_desksdlc_482_0_0, &direction_desksdlc_482_0_0, &direction_desksdlc_482_0_0, NULL, &direction_desksdlc_482_0_16, &direction_desksdlc_482_0_16, &direction_desksdlc_482_0_16, &direction_desksdlc_482_0_16, &direction_desksdlc_482_0_16, &direction_desksdlc_482_0_16, &direction_desksdlc_482_0_16, &direction_desksdlc_482_0_16, &direction_desksdlc_482_0_16, &direction_desksdlc_482_0_16, &direction_desksdlc_482_0_16, NULL, &direction_desksdlc_482_0_24, &direction_desksdlc_482_0_24, &direction_desksdlc_482_0_24, &direction_desksdlc_482_0_24, &direction_desksdlc_482_0_24, &direction_desksdlc_482_0_24, &direction_desksdlc_482_0_24, NULL, &direction_desksdlc_482_0_0, &direction_desksdlc_482_0_0, &direction_desksdlc_482_0_0};
static Animation * anim_array_desksdlc_482[1] = {&anim_desksdlc_482_0};
static Animations anim_desksdlc_482 = {1, &anim_array_desksdlc_482[0]};
static bool anim_desksdlc_482_initialized;
class DesksDLC_482 : public Active
{
public:
    DesksDLC_482(int x, int y) : Active(x, y, DesksDLC_482_type)
    {
        // qualifiers: 15, 26, 63
#ifndef NDEBUG
        name = std::string("Desks - DLC", 11);
#endif
        this->animations = &anim_desksdlc_482;
        if (!anim_desksdlc_482_initialized) {
            anim_desksdlc_482_initialized = true;
            images_desksdlc_482_0_0[0] = get_internal_image(2847);
            images_desksdlc_482_0_16[0] = get_internal_image(3868);
            images_desksdlc_482_0_16[1] = get_internal_image(3869);
            images_desksdlc_482_0_16[2] = get_internal_image(3870);
            images_desksdlc_482_0_16[3] = get_internal_image(3496);
            images_desksdlc_482_0_16[4] = get_internal_image(3868);
            images_desksdlc_482_0_16[5] = get_internal_image(3868);
            images_desksdlc_482_0_16[6] = get_internal_image(3868);
            images_desksdlc_482_0_16[7] = get_internal_image(3868);
            images_desksdlc_482_0_16[8] = get_internal_image(3868);
            images_desksdlc_482_0_16[9] = get_internal_image(3868);
            images_desksdlc_482_0_16[10] = get_internal_image(3868);
            images_desksdlc_482_0_16[11] = get_internal_image(3868);
            images_desksdlc_482_0_24[0] = get_internal_image(2509);
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
        alterables->strings.set(0, str_d_51);
    }
};
FrameObject * create_desksdlc_482(int x, int y)
{
    return new (Active::pool.create()) DesksDLC_482(x, y);
}
static Image* images_eteamwalblock_483_0_0[1];
static Direction direction_eteamwalblock_483_0_0 = {0, 50, 50, 0, 1, images_eteamwalblock_483_0_0, 1};
static Image* images_eteamwalblock_483_0_16[1];
static Direction direction_eteamwalblock_483_0_16 = {16, 50, 50, 0, 1, images_eteamwalblock_483_0_16, 1};
static Image* images_eteamwalblock_483_0_24[15];
static Direction direction_eteamwalblock_483_0_24 = {24, 15, 15, 0, -1, images_eteamwalblock_483_0_24, 15};
static Animation anim_eteamwalblock_483_0 = {&direction_eteamwalblock_483_0_0, &direction_eteamwalblock_483_0_0, &direction_eteamwalblock_483_0_0, &direction_eteamwalblock_483_0_0, &direction_eteamwalblock_483_0_0, &direction_eteamwalblock_483_0_0, &direction_eteamwalblock_483_0_0, &direction_eteamwalblock_483_0_0, NULL, &direction_eteamwalblock_483_0_16, &direction_eteamwalblock_483_0_16, &direction_eteamwalblock_483_0_16, &direction_eteamwalblock_483_0_16, &direction_eteamwalblock_483_0_16, &direction_eteamwalblock_483_0_16, &direction_eteamwalblock_483_0_16, &direction_eteamwalblock_483_0_16, &direction_eteamwalblock_483_0_16, &direction_eteamwalblock_483_0_16, &direction_eteamwalblock_483_0_16, NULL, &direction_eteamwalblock_483_0_24, &direction_eteamwalblock_483_0_24, &direction_eteamwalblock_483_0_24, &direction_eteamwalblock_483_0_24, &direction_eteamwalblock_483_0_24, &direction_eteamwalblock_483_0_24, &direction_eteamwalblock_483_0_24, NULL, &direction_eteamwalblock_483_0_0, &direction_eteamwalblock_483_0_0, &direction_eteamwalblock_483_0_0};
static Animation * anim_array_eteamwalblock_483[1] = {&anim_eteamwalblock_483_0};
static Animations anim_eteamwalblock_483 = {1, &anim_array_eteamwalblock_483[0]};
static bool anim_eteamwalblock_483_initialized;
class ETeamWalblock_483 : public Active
{
public:
    ETeamWalblock_483(int x, int y) : Active(x, y, ETeamWalblock_483_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("eTeam walblock", 14);
#endif
        this->animations = &anim_eteamwalblock_483;
        if (!anim_eteamwalblock_483_initialized) {
            anim_eteamwalblock_483_initialized = true;
            images_eteamwalblock_483_0_0[0] = get_internal_image(2511);
            images_eteamwalblock_483_0_16[0] = get_internal_image(2503);
            images_eteamwalblock_483_0_24[0] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[1] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[2] = get_internal_image(2556);
            images_eteamwalblock_483_0_24[3] = get_internal_image(2565);
            images_eteamwalblock_483_0_24[4] = get_internal_image(2571);
            images_eteamwalblock_483_0_24[5] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[6] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[7] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[8] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[9] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[10] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[11] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[12] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[13] = get_internal_image(2579);
            images_eteamwalblock_483_0_24[14] = get_internal_image(2579);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_eteamwalblock_483(int x, int y)
{
    return new (Active::pool.create()) ETeamWalblock_483(x, y);
}
static Image* images_guard2_484_0_0[2];
static Direction direction_guard2_484_0_0 = {0, 10, 10, 0, -1, images_guard2_484_0_0, 2};
static Image* images_guard2_484_0_8[2];
static Direction direction_guard2_484_0_8 = {8, 10, 10, 0, -1, images_guard2_484_0_8, 2};
static Image* images_guard2_484_0_16[2];
static Direction direction_guard2_484_0_16 = {16, 10, 10, 0, -1, images_guard2_484_0_16, 2};
static Image* images_guard2_484_0_24[2];
static Direction direction_guard2_484_0_24 = {24, 10, 10, 0, -1, images_guard2_484_0_24, 2};
static Animation anim_guard2_484_0 = {&direction_guard2_484_0_0, &direction_guard2_484_0_0, &direction_guard2_484_0_0, &direction_guard2_484_0_0, NULL, &direction_guard2_484_0_8, &direction_guard2_484_0_8, &direction_guard2_484_0_8, &direction_guard2_484_0_8, &direction_guard2_484_0_8, &direction_guard2_484_0_8, &direction_guard2_484_0_8, NULL, &direction_guard2_484_0_16, &direction_guard2_484_0_16, &direction_guard2_484_0_16, &direction_guard2_484_0_16, &direction_guard2_484_0_16, &direction_guard2_484_0_16, &direction_guard2_484_0_16, NULL, &direction_guard2_484_0_24, &direction_guard2_484_0_24, &direction_guard2_484_0_24, &direction_guard2_484_0_24, &direction_guard2_484_0_24, &direction_guard2_484_0_24, &direction_guard2_484_0_24, NULL, &direction_guard2_484_0_0, &direction_guard2_484_0_0, &direction_guard2_484_0_0};
static Image* images_guard2_484_6_0[1];
static Direction direction_guard2_484_6_0 = {0, 6, 6, 0, 1, images_guard2_484_6_0, 1};
static Image* images_guard2_484_6_8[1];
static Direction direction_guard2_484_6_8 = {8, 6, 6, 0, 1, images_guard2_484_6_8, 1};
static Image* images_guard2_484_6_16[1];
static Direction direction_guard2_484_6_16 = {16, 6, 6, 0, 1, images_guard2_484_6_16, 1};
static Image* images_guard2_484_6_24[1];
static Direction direction_guard2_484_6_24 = {24, 6, 6, 0, 1, images_guard2_484_6_24, 1};
static Animation anim_guard2_484_6 = {&direction_guard2_484_6_0, &direction_guard2_484_6_0, &direction_guard2_484_6_0, &direction_guard2_484_6_0, NULL, &direction_guard2_484_6_8, &direction_guard2_484_6_8, &direction_guard2_484_6_8, &direction_guard2_484_6_8, &direction_guard2_484_6_8, &direction_guard2_484_6_8, &direction_guard2_484_6_8, NULL, &direction_guard2_484_6_16, &direction_guard2_484_6_16, &direction_guard2_484_6_16, &direction_guard2_484_6_16, &direction_guard2_484_6_16, &direction_guard2_484_6_16, &direction_guard2_484_6_16, NULL, &direction_guard2_484_6_24, &direction_guard2_484_6_24, &direction_guard2_484_6_24, &direction_guard2_484_6_24, &direction_guard2_484_6_24, &direction_guard2_484_6_24, &direction_guard2_484_6_24, NULL, &direction_guard2_484_6_0, &direction_guard2_484_6_0, &direction_guard2_484_6_0};
static Image* images_guard2_484_8_0[1];
static Direction direction_guard2_484_8_0 = {0, 50, 50, 0, -1, images_guard2_484_8_0, 1};
static Image* images_guard2_484_8_16[2];
static Direction direction_guard2_484_8_16 = {16, 5, 5, 0, -1, images_guard2_484_8_16, 2};
static Image* images_guard2_484_8_24[3];
static Direction direction_guard2_484_8_24 = {24, 10, 10, 0, -1, images_guard2_484_8_24, 3};
static Animation anim_guard2_484_8 = {&direction_guard2_484_8_0, &direction_guard2_484_8_0, &direction_guard2_484_8_0, &direction_guard2_484_8_0, &direction_guard2_484_8_0, &direction_guard2_484_8_0, &direction_guard2_484_8_0, &direction_guard2_484_8_0, NULL, &direction_guard2_484_8_16, &direction_guard2_484_8_16, &direction_guard2_484_8_16, &direction_guard2_484_8_16, &direction_guard2_484_8_16, &direction_guard2_484_8_16, &direction_guard2_484_8_16, &direction_guard2_484_8_16, &direction_guard2_484_8_16, &direction_guard2_484_8_16, &direction_guard2_484_8_16, NULL, &direction_guard2_484_8_24, &direction_guard2_484_8_24, &direction_guard2_484_8_24, &direction_guard2_484_8_24, &direction_guard2_484_8_24, &direction_guard2_484_8_24, &direction_guard2_484_8_24, NULL, &direction_guard2_484_8_0, &direction_guard2_484_8_0, &direction_guard2_484_8_0};
static Animation * anim_array_guard2_484[9] = {&anim_guard2_484_0, NULL, NULL, NULL, NULL, NULL, &anim_guard2_484_6, NULL, &anim_guard2_484_8};
static Animations anim_guard2_484 = {9, &anim_array_guard2_484[0]};
static bool anim_guard2_484_initialized;
class Guard2_484 : public Active
{
public:
    Guard2_484(int x, int y) : Active(x, y, Guard2_484_type)
    {
        // qualifiers: 31, 33
#ifndef NDEBUG
        name = std::string("Guard 2", 7);
#endif
        this->animations = &anim_guard2_484;
        if (!anim_guard2_484_initialized) {
            anim_guard2_484_initialized = true;
            images_guard2_484_0_0[0] = get_internal_image(2761);
            images_guard2_484_0_0[1] = get_internal_image(2816);
            images_guard2_484_0_8[0] = get_internal_image(2823);
            images_guard2_484_0_8[1] = get_internal_image(2825);
            images_guard2_484_0_16[0] = get_internal_image(2762);
            images_guard2_484_0_16[1] = get_internal_image(2819);
            images_guard2_484_0_24[0] = get_internal_image(2811);
            images_guard2_484_0_24[1] = get_internal_image(2829);
            images_guard2_484_6_0[0] = get_internal_image(2824);
            images_guard2_484_6_8[0] = get_internal_image(2826);
            images_guard2_484_6_16[0] = get_internal_image(2828);
            images_guard2_484_6_24[0] = get_internal_image(2830);
            images_guard2_484_8_0[0] = get_internal_image(2833);
            images_guard2_484_8_16[0] = get_internal_image(2835);
            images_guard2_484_8_16[1] = get_internal_image(2836);
            images_guard2_484_8_24[0] = get_internal_image(2834);
            images_guard2_484_8_24[1] = get_internal_image(2834);
            images_guard2_484_8_24[2] = get_internal_image(2834);
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
FrameObject * create_guard2_484(int x, int y)
{
    return new (Active::pool.create()) Guard2_484(x, y);
}
static Image* images_outfitguarddtaf_485_0_0[2];
static Direction direction_outfitguarddtaf_485_0_0 = {0, 6, 6, 0, -1, images_outfitguarddtaf_485_0_0, 2};
static Image* images_outfitguarddtaf_485_0_8[2];
static Direction direction_outfitguarddtaf_485_0_8 = {8, 6, 6, 0, -1, images_outfitguarddtaf_485_0_8, 2};
static Image* images_outfitguarddtaf_485_0_16[2];
static Direction direction_outfitguarddtaf_485_0_16 = {16, 6, 6, 0, -1, images_outfitguarddtaf_485_0_16, 2};
static Image* images_outfitguarddtaf_485_0_24[2];
static Direction direction_outfitguarddtaf_485_0_24 = {24, 6, 6, 0, -1, images_outfitguarddtaf_485_0_24, 2};
static Animation anim_outfitguarddtaf_485_0 = {&direction_outfitguarddtaf_485_0_0, &direction_outfitguarddtaf_485_0_0, &direction_outfitguarddtaf_485_0_0, &direction_outfitguarddtaf_485_0_0, NULL, &direction_outfitguarddtaf_485_0_8, &direction_outfitguarddtaf_485_0_8, &direction_outfitguarddtaf_485_0_8, &direction_outfitguarddtaf_485_0_8, &direction_outfitguarddtaf_485_0_8, &direction_outfitguarddtaf_485_0_8, &direction_outfitguarddtaf_485_0_8, NULL, &direction_outfitguarddtaf_485_0_16, &direction_outfitguarddtaf_485_0_16, &direction_outfitguarddtaf_485_0_16, &direction_outfitguarddtaf_485_0_16, &direction_outfitguarddtaf_485_0_16, &direction_outfitguarddtaf_485_0_16, &direction_outfitguarddtaf_485_0_16, NULL, &direction_outfitguarddtaf_485_0_24, &direction_outfitguarddtaf_485_0_24, &direction_outfitguarddtaf_485_0_24, &direction_outfitguarddtaf_485_0_24, &direction_outfitguarddtaf_485_0_24, &direction_outfitguarddtaf_485_0_24, &direction_outfitguarddtaf_485_0_24, NULL, &direction_outfitguarddtaf_485_0_0, &direction_outfitguarddtaf_485_0_0, &direction_outfitguarddtaf_485_0_0};
static Image* images_outfitguarddtaf_485_6_0[1];
static Direction direction_outfitguarddtaf_485_6_0 = {0, 6, 6, 0, 1, images_outfitguarddtaf_485_6_0, 1};
static Image* images_outfitguarddtaf_485_6_8[1];
static Direction direction_outfitguarddtaf_485_6_8 = {8, 6, 6, 0, 1, images_outfitguarddtaf_485_6_8, 1};
static Image* images_outfitguarddtaf_485_6_16[1];
static Direction direction_outfitguarddtaf_485_6_16 = {16, 6, 6, 0, 1, images_outfitguarddtaf_485_6_16, 1};
static Image* images_outfitguarddtaf_485_6_24[1];
static Direction direction_outfitguarddtaf_485_6_24 = {24, 6, 6, 0, 1, images_outfitguarddtaf_485_6_24, 1};
static Animation anim_outfitguarddtaf_485_6 = {&direction_outfitguarddtaf_485_6_0, &direction_outfitguarddtaf_485_6_0, &direction_outfitguarddtaf_485_6_0, &direction_outfitguarddtaf_485_6_0, NULL, &direction_outfitguarddtaf_485_6_8, &direction_outfitguarddtaf_485_6_8, &direction_outfitguarddtaf_485_6_8, &direction_outfitguarddtaf_485_6_8, &direction_outfitguarddtaf_485_6_8, &direction_outfitguarddtaf_485_6_8, &direction_outfitguarddtaf_485_6_8, NULL, &direction_outfitguarddtaf_485_6_16, &direction_outfitguarddtaf_485_6_16, &direction_outfitguarddtaf_485_6_16, &direction_outfitguarddtaf_485_6_16, &direction_outfitguarddtaf_485_6_16, &direction_outfitguarddtaf_485_6_16, &direction_outfitguarddtaf_485_6_16, NULL, &direction_outfitguarddtaf_485_6_24, &direction_outfitguarddtaf_485_6_24, &direction_outfitguarddtaf_485_6_24, &direction_outfitguarddtaf_485_6_24, &direction_outfitguarddtaf_485_6_24, &direction_outfitguarddtaf_485_6_24, &direction_outfitguarddtaf_485_6_24, NULL, &direction_outfitguarddtaf_485_6_0, &direction_outfitguarddtaf_485_6_0, &direction_outfitguarddtaf_485_6_0};
static Image* images_outfitguarddtaf_485_7_0[2];
static Direction direction_outfitguarddtaf_485_7_0 = {0, 10, 10, 0, -1, images_outfitguarddtaf_485_7_0, 2};
static Image* images_outfitguarddtaf_485_7_8[2];
static Direction direction_outfitguarddtaf_485_7_8 = {8, 10, 10, 0, -1, images_outfitguarddtaf_485_7_8, 2};
static Image* images_outfitguarddtaf_485_7_16[2];
static Direction direction_outfitguarddtaf_485_7_16 = {16, 10, 10, 0, -1, images_outfitguarddtaf_485_7_16, 2};
static Image* images_outfitguarddtaf_485_7_24[2];
static Direction direction_outfitguarddtaf_485_7_24 = {24, 10, 10, 0, -1, images_outfitguarddtaf_485_7_24, 2};
static Animation anim_outfitguarddtaf_485_7 = {&direction_outfitguarddtaf_485_7_0, &direction_outfitguarddtaf_485_7_0, &direction_outfitguarddtaf_485_7_0, &direction_outfitguarddtaf_485_7_0, NULL, &direction_outfitguarddtaf_485_7_8, &direction_outfitguarddtaf_485_7_8, &direction_outfitguarddtaf_485_7_8, &direction_outfitguarddtaf_485_7_8, &direction_outfitguarddtaf_485_7_8, &direction_outfitguarddtaf_485_7_8, &direction_outfitguarddtaf_485_7_8, NULL, &direction_outfitguarddtaf_485_7_16, &direction_outfitguarddtaf_485_7_16, &direction_outfitguarddtaf_485_7_16, &direction_outfitguarddtaf_485_7_16, &direction_outfitguarddtaf_485_7_16, &direction_outfitguarddtaf_485_7_16, &direction_outfitguarddtaf_485_7_16, NULL, &direction_outfitguarddtaf_485_7_24, &direction_outfitguarddtaf_485_7_24, &direction_outfitguarddtaf_485_7_24, &direction_outfitguarddtaf_485_7_24, &direction_outfitguarddtaf_485_7_24, &direction_outfitguarddtaf_485_7_24, &direction_outfitguarddtaf_485_7_24, NULL, &direction_outfitguarddtaf_485_7_0, &direction_outfitguarddtaf_485_7_0, &direction_outfitguarddtaf_485_7_0};
static Image* images_outfitguarddtaf_485_8_0[1];
static Direction direction_outfitguarddtaf_485_8_0 = {0, 50, 50, 0, -1, images_outfitguarddtaf_485_8_0, 1};
static Image* images_outfitguarddtaf_485_8_16[2];
static Direction direction_outfitguarddtaf_485_8_16 = {16, 50, 50, 0, 1, images_outfitguarddtaf_485_8_16, 2};
static Image* images_outfitguarddtaf_485_8_24[3];
static Direction direction_outfitguarddtaf_485_8_24 = {24, 50, 50, 0, -1, images_outfitguarddtaf_485_8_24, 3};
static Animation anim_outfitguarddtaf_485_8 = {&direction_outfitguarddtaf_485_8_0, &direction_outfitguarddtaf_485_8_0, &direction_outfitguarddtaf_485_8_0, &direction_outfitguarddtaf_485_8_0, &direction_outfitguarddtaf_485_8_0, &direction_outfitguarddtaf_485_8_0, &direction_outfitguarddtaf_485_8_0, &direction_outfitguarddtaf_485_8_0, NULL, &direction_outfitguarddtaf_485_8_16, &direction_outfitguarddtaf_485_8_16, &direction_outfitguarddtaf_485_8_16, &direction_outfitguarddtaf_485_8_16, &direction_outfitguarddtaf_485_8_16, &direction_outfitguarddtaf_485_8_16, &direction_outfitguarddtaf_485_8_16, &direction_outfitguarddtaf_485_8_16, &direction_outfitguarddtaf_485_8_16, &direction_outfitguarddtaf_485_8_16, &direction_outfitguarddtaf_485_8_16, NULL, &direction_outfitguarddtaf_485_8_24, &direction_outfitguarddtaf_485_8_24, &direction_outfitguarddtaf_485_8_24, &direction_outfitguarddtaf_485_8_24, &direction_outfitguarddtaf_485_8_24, &direction_outfitguarddtaf_485_8_24, &direction_outfitguarddtaf_485_8_24, NULL, &direction_outfitguarddtaf_485_8_0, &direction_outfitguarddtaf_485_8_0, &direction_outfitguarddtaf_485_8_0};
static Image* images_outfitguarddtaf_485_11_0[2];
static Direction direction_outfitguarddtaf_485_11_0 = {0, 6, 6, 0, -1, images_outfitguarddtaf_485_11_0, 2};
static Image* images_outfitguarddtaf_485_11_8[2];
static Direction direction_outfitguarddtaf_485_11_8 = {8, 6, 6, 0, -1, images_outfitguarddtaf_485_11_8, 2};
static Image* images_outfitguarddtaf_485_11_16[2];
static Direction direction_outfitguarddtaf_485_11_16 = {16, 6, 6, 0, -1, images_outfitguarddtaf_485_11_16, 2};
static Image* images_outfitguarddtaf_485_11_24[2];
static Direction direction_outfitguarddtaf_485_11_24 = {24, 6, 6, 0, -1, images_outfitguarddtaf_485_11_24, 2};
static Animation anim_outfitguarddtaf_485_11 = {&direction_outfitguarddtaf_485_11_0, &direction_outfitguarddtaf_485_11_0, &direction_outfitguarddtaf_485_11_0, &direction_outfitguarddtaf_485_11_0, NULL, &direction_outfitguarddtaf_485_11_8, &direction_outfitguarddtaf_485_11_8, &direction_outfitguarddtaf_485_11_8, &direction_outfitguarddtaf_485_11_8, &direction_outfitguarddtaf_485_11_8, &direction_outfitguarddtaf_485_11_8, &direction_outfitguarddtaf_485_11_8, NULL, &direction_outfitguarddtaf_485_11_16, &direction_outfitguarddtaf_485_11_16, &direction_outfitguarddtaf_485_11_16, &direction_outfitguarddtaf_485_11_16, &direction_outfitguarddtaf_485_11_16, &direction_outfitguarddtaf_485_11_16, &direction_outfitguarddtaf_485_11_16, NULL, &direction_outfitguarddtaf_485_11_24, &direction_outfitguarddtaf_485_11_24, &direction_outfitguarddtaf_485_11_24, &direction_outfitguarddtaf_485_11_24, &direction_outfitguarddtaf_485_11_24, &direction_outfitguarddtaf_485_11_24, &direction_outfitguarddtaf_485_11_24, NULL, &direction_outfitguarddtaf_485_11_0, &direction_outfitguarddtaf_485_11_0, &direction_outfitguarddtaf_485_11_0};
static Image* images_outfitguarddtaf_485_12_0[2];
static Direction direction_outfitguarddtaf_485_12_0 = {0, 10, 10, 0, -1, images_outfitguarddtaf_485_12_0, 2};
static Image* images_outfitguarddtaf_485_12_8[2];
static Direction direction_outfitguarddtaf_485_12_8 = {8, 10, 10, 0, -1, images_outfitguarddtaf_485_12_8, 2};
static Image* images_outfitguarddtaf_485_12_16[2];
static Direction direction_outfitguarddtaf_485_12_16 = {16, 10, 10, 0, -1, images_outfitguarddtaf_485_12_16, 2};
static Image* images_outfitguarddtaf_485_12_24[2];
static Direction direction_outfitguarddtaf_485_12_24 = {24, 10, 10, 0, -1, images_outfitguarddtaf_485_12_24, 2};
static Animation anim_outfitguarddtaf_485_12 = {&direction_outfitguarddtaf_485_12_0, &direction_outfitguarddtaf_485_12_0, &direction_outfitguarddtaf_485_12_0, &direction_outfitguarddtaf_485_12_0, NULL, &direction_outfitguarddtaf_485_12_8, &direction_outfitguarddtaf_485_12_8, &direction_outfitguarddtaf_485_12_8, &direction_outfitguarddtaf_485_12_8, &direction_outfitguarddtaf_485_12_8, &direction_outfitguarddtaf_485_12_8, &direction_outfitguarddtaf_485_12_8, NULL, &direction_outfitguarddtaf_485_12_16, &direction_outfitguarddtaf_485_12_16, &direction_outfitguarddtaf_485_12_16, &direction_outfitguarddtaf_485_12_16, &direction_outfitguarddtaf_485_12_16, &direction_outfitguarddtaf_485_12_16, &direction_outfitguarddtaf_485_12_16, NULL, &direction_outfitguarddtaf_485_12_24, &direction_outfitguarddtaf_485_12_24, &direction_outfitguarddtaf_485_12_24, &direction_outfitguarddtaf_485_12_24, &direction_outfitguarddtaf_485_12_24, &direction_outfitguarddtaf_485_12_24, &direction_outfitguarddtaf_485_12_24, NULL, &direction_outfitguarddtaf_485_12_0, &direction_outfitguarddtaf_485_12_0, &direction_outfitguarddtaf_485_12_0};
static Image* images_outfitguarddtaf_485_13_0[2];
static Direction direction_outfitguarddtaf_485_13_0 = {0, 10, 10, 0, -1, images_outfitguarddtaf_485_13_0, 2};
static Image* images_outfitguarddtaf_485_13_8[2];
static Direction direction_outfitguarddtaf_485_13_8 = {8, 10, 10, 0, -1, images_outfitguarddtaf_485_13_8, 2};
static Image* images_outfitguarddtaf_485_13_16[2];
static Direction direction_outfitguarddtaf_485_13_16 = {16, 10, 10, 0, -1, images_outfitguarddtaf_485_13_16, 2};
static Image* images_outfitguarddtaf_485_13_24[2];
static Direction direction_outfitguarddtaf_485_13_24 = {24, 10, 10, 0, -1, images_outfitguarddtaf_485_13_24, 2};
static Animation anim_outfitguarddtaf_485_13 = {&direction_outfitguarddtaf_485_13_0, &direction_outfitguarddtaf_485_13_0, &direction_outfitguarddtaf_485_13_0, &direction_outfitguarddtaf_485_13_0, NULL, &direction_outfitguarddtaf_485_13_8, &direction_outfitguarddtaf_485_13_8, &direction_outfitguarddtaf_485_13_8, &direction_outfitguarddtaf_485_13_8, &direction_outfitguarddtaf_485_13_8, &direction_outfitguarddtaf_485_13_8, &direction_outfitguarddtaf_485_13_8, NULL, &direction_outfitguarddtaf_485_13_16, &direction_outfitguarddtaf_485_13_16, &direction_outfitguarddtaf_485_13_16, &direction_outfitguarddtaf_485_13_16, &direction_outfitguarddtaf_485_13_16, &direction_outfitguarddtaf_485_13_16, &direction_outfitguarddtaf_485_13_16, NULL, &direction_outfitguarddtaf_485_13_24, &direction_outfitguarddtaf_485_13_24, &direction_outfitguarddtaf_485_13_24, &direction_outfitguarddtaf_485_13_24, &direction_outfitguarddtaf_485_13_24, &direction_outfitguarddtaf_485_13_24, &direction_outfitguarddtaf_485_13_24, NULL, &direction_outfitguarddtaf_485_13_0, &direction_outfitguarddtaf_485_13_0, &direction_outfitguarddtaf_485_13_0};
static Image* images_outfitguarddtaf_485_14_0[2];
static Direction direction_outfitguarddtaf_485_14_0 = {0, 10, 10, 0, -1, images_outfitguarddtaf_485_14_0, 2};
static Image* images_outfitguarddtaf_485_14_8[2];
static Direction direction_outfitguarddtaf_485_14_8 = {8, 10, 10, 0, -1, images_outfitguarddtaf_485_14_8, 2};
static Image* images_outfitguarddtaf_485_14_16[2];
static Direction direction_outfitguarddtaf_485_14_16 = {16, 10, 10, 0, -1, images_outfitguarddtaf_485_14_16, 2};
static Image* images_outfitguarddtaf_485_14_24[2];
static Direction direction_outfitguarddtaf_485_14_24 = {24, 10, 10, 0, -1, images_outfitguarddtaf_485_14_24, 2};
static Animation anim_outfitguarddtaf_485_14 = {&direction_outfitguarddtaf_485_14_0, &direction_outfitguarddtaf_485_14_0, &direction_outfitguarddtaf_485_14_0, &direction_outfitguarddtaf_485_14_0, NULL, &direction_outfitguarddtaf_485_14_8, &direction_outfitguarddtaf_485_14_8, &direction_outfitguarddtaf_485_14_8, &direction_outfitguarddtaf_485_14_8, &direction_outfitguarddtaf_485_14_8, &direction_outfitguarddtaf_485_14_8, &direction_outfitguarddtaf_485_14_8, NULL, &direction_outfitguarddtaf_485_14_16, &direction_outfitguarddtaf_485_14_16, &direction_outfitguarddtaf_485_14_16, &direction_outfitguarddtaf_485_14_16, &direction_outfitguarddtaf_485_14_16, &direction_outfitguarddtaf_485_14_16, &direction_outfitguarddtaf_485_14_16, NULL, &direction_outfitguarddtaf_485_14_24, &direction_outfitguarddtaf_485_14_24, &direction_outfitguarddtaf_485_14_24, &direction_outfitguarddtaf_485_14_24, &direction_outfitguarddtaf_485_14_24, &direction_outfitguarddtaf_485_14_24, &direction_outfitguarddtaf_485_14_24, NULL, &direction_outfitguarddtaf_485_14_0, &direction_outfitguarddtaf_485_14_0, &direction_outfitguarddtaf_485_14_0};
static Image* images_outfitguarddtaf_485_15_0[2];
static Direction direction_outfitguarddtaf_485_15_0 = {0, 10, 10, 0, -1, images_outfitguarddtaf_485_15_0, 2};
static Image* images_outfitguarddtaf_485_15_8[2];
static Direction direction_outfitguarddtaf_485_15_8 = {8, 10, 10, 0, -1, images_outfitguarddtaf_485_15_8, 2};
static Image* images_outfitguarddtaf_485_15_16[2];
static Direction direction_outfitguarddtaf_485_15_16 = {16, 10, 10, 0, -1, images_outfitguarddtaf_485_15_16, 2};
static Image* images_outfitguarddtaf_485_15_24[2];
static Direction direction_outfitguarddtaf_485_15_24 = {24, 10, 10, 0, -1, images_outfitguarddtaf_485_15_24, 2};
static Animation anim_outfitguarddtaf_485_15 = {&direction_outfitguarddtaf_485_15_0, &direction_outfitguarddtaf_485_15_0, &direction_outfitguarddtaf_485_15_0, &direction_outfitguarddtaf_485_15_0, NULL, &direction_outfitguarddtaf_485_15_8, &direction_outfitguarddtaf_485_15_8, &direction_outfitguarddtaf_485_15_8, &direction_outfitguarddtaf_485_15_8, &direction_outfitguarddtaf_485_15_8, &direction_outfitguarddtaf_485_15_8, &direction_outfitguarddtaf_485_15_8, NULL, &direction_outfitguarddtaf_485_15_16, &direction_outfitguarddtaf_485_15_16, &direction_outfitguarddtaf_485_15_16, &direction_outfitguarddtaf_485_15_16, &direction_outfitguarddtaf_485_15_16, &direction_outfitguarddtaf_485_15_16, &direction_outfitguarddtaf_485_15_16, NULL, &direction_outfitguarddtaf_485_15_24, &direction_outfitguarddtaf_485_15_24, &direction_outfitguarddtaf_485_15_24, &direction_outfitguarddtaf_485_15_24, &direction_outfitguarddtaf_485_15_24, &direction_outfitguarddtaf_485_15_24, &direction_outfitguarddtaf_485_15_24, NULL, &direction_outfitguarddtaf_485_15_0, &direction_outfitguarddtaf_485_15_0, &direction_outfitguarddtaf_485_15_0};
static Image* images_outfitguarddtaf_485_16_0[2];
static Direction direction_outfitguarddtaf_485_16_0 = {0, 10, 10, 0, -1, images_outfitguarddtaf_485_16_0, 2};
static Image* images_outfitguarddtaf_485_16_8[2];
static Direction direction_outfitguarddtaf_485_16_8 = {8, 10, 10, 0, -1, images_outfitguarddtaf_485_16_8, 2};
static Image* images_outfitguarddtaf_485_16_16[2];
static Direction direction_outfitguarddtaf_485_16_16 = {16, 10, 10, 0, -1, images_outfitguarddtaf_485_16_16, 2};
static Image* images_outfitguarddtaf_485_16_24[2];
static Direction direction_outfitguarddtaf_485_16_24 = {24, 10, 10, 0, -1, images_outfitguarddtaf_485_16_24, 2};
static Animation anim_outfitguarddtaf_485_16 = {&direction_outfitguarddtaf_485_16_0, &direction_outfitguarddtaf_485_16_0, &direction_outfitguarddtaf_485_16_0, &direction_outfitguarddtaf_485_16_0, NULL, &direction_outfitguarddtaf_485_16_8, &direction_outfitguarddtaf_485_16_8, &direction_outfitguarddtaf_485_16_8, &direction_outfitguarddtaf_485_16_8, &direction_outfitguarddtaf_485_16_8, &direction_outfitguarddtaf_485_16_8, &direction_outfitguarddtaf_485_16_8, NULL, &direction_outfitguarddtaf_485_16_16, &direction_outfitguarddtaf_485_16_16, &direction_outfitguarddtaf_485_16_16, &direction_outfitguarddtaf_485_16_16, &direction_outfitguarddtaf_485_16_16, &direction_outfitguarddtaf_485_16_16, &direction_outfitguarddtaf_485_16_16, NULL, &direction_outfitguarddtaf_485_16_24, &direction_outfitguarddtaf_485_16_24, &direction_outfitguarddtaf_485_16_24, &direction_outfitguarddtaf_485_16_24, &direction_outfitguarddtaf_485_16_24, &direction_outfitguarddtaf_485_16_24, &direction_outfitguarddtaf_485_16_24, NULL, &direction_outfitguarddtaf_485_16_0, &direction_outfitguarddtaf_485_16_0, &direction_outfitguarddtaf_485_16_0};
static Image* images_outfitguarddtaf_485_17_0[2];
static Direction direction_outfitguarddtaf_485_17_0 = {0, 5, 5, 1, -1, images_outfitguarddtaf_485_17_0, 2};
static Image* images_outfitguarddtaf_485_17_8[2];
static Direction direction_outfitguarddtaf_485_17_8 = {8, 5, 5, 1, -1, images_outfitguarddtaf_485_17_8, 2};
static Image* images_outfitguarddtaf_485_17_16[2];
static Direction direction_outfitguarddtaf_485_17_16 = {16, 5, 5, 1, -1, images_outfitguarddtaf_485_17_16, 2};
static Image* images_outfitguarddtaf_485_17_24[2];
static Direction direction_outfitguarddtaf_485_17_24 = {24, 5, 5, 1, -1, images_outfitguarddtaf_485_17_24, 2};
static Animation anim_outfitguarddtaf_485_17 = {&direction_outfitguarddtaf_485_17_0, &direction_outfitguarddtaf_485_17_0, &direction_outfitguarddtaf_485_17_0, &direction_outfitguarddtaf_485_17_0, NULL, &direction_outfitguarddtaf_485_17_8, &direction_outfitguarddtaf_485_17_8, &direction_outfitguarddtaf_485_17_8, &direction_outfitguarddtaf_485_17_8, &direction_outfitguarddtaf_485_17_8, &direction_outfitguarddtaf_485_17_8, &direction_outfitguarddtaf_485_17_8, NULL, &direction_outfitguarddtaf_485_17_16, &direction_outfitguarddtaf_485_17_16, &direction_outfitguarddtaf_485_17_16, &direction_outfitguarddtaf_485_17_16, &direction_outfitguarddtaf_485_17_16, &direction_outfitguarddtaf_485_17_16, &direction_outfitguarddtaf_485_17_16, NULL, &direction_outfitguarddtaf_485_17_24, &direction_outfitguarddtaf_485_17_24, &direction_outfitguarddtaf_485_17_24, &direction_outfitguarddtaf_485_17_24, &direction_outfitguarddtaf_485_17_24, &direction_outfitguarddtaf_485_17_24, &direction_outfitguarddtaf_485_17_24, NULL, &direction_outfitguarddtaf_485_17_0, &direction_outfitguarddtaf_485_17_0, &direction_outfitguarddtaf_485_17_0};
static Animation * anim_array_outfitguarddtaf_485[18] = {&anim_outfitguarddtaf_485_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitguarddtaf_485_6, &anim_outfitguarddtaf_485_7, &anim_outfitguarddtaf_485_8, NULL, NULL, &anim_outfitguarddtaf_485_11, &anim_outfitguarddtaf_485_12, &anim_outfitguarddtaf_485_13, &anim_outfitguarddtaf_485_14, &anim_outfitguarddtaf_485_15, &anim_outfitguarddtaf_485_16, &anim_outfitguarddtaf_485_17};
static Animations anim_outfitguarddtaf_485 = {18, &anim_array_outfitguarddtaf_485[0]};
static bool anim_outfitguarddtaf_485_initialized;
class OutfitGuardDTAF_485 : public Active
{
public:
    OutfitGuardDTAF_485(int x, int y) : Active(x, y, OutfitGuardDTAF_485_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Guard DTAF", 19);
#endif
        this->animations = &anim_outfitguarddtaf_485;
        if (!anim_outfitguarddtaf_485_initialized) {
            anim_outfitguarddtaf_485_initialized = true;
            images_outfitguarddtaf_485_0_0[0] = get_internal_image(2817);
            images_outfitguarddtaf_485_0_0[1] = get_internal_image(2814);
            images_outfitguarddtaf_485_0_8[0] = get_internal_image(2827);
            images_outfitguarddtaf_485_0_8[1] = get_internal_image(2831);
            images_outfitguarddtaf_485_0_16[0] = get_internal_image(2818);
            images_outfitguarddtaf_485_0_16[1] = get_internal_image(2820);
            images_outfitguarddtaf_485_0_24[0] = get_internal_image(2821);
            images_outfitguarddtaf_485_0_24[1] = get_internal_image(2822);
            images_outfitguarddtaf_485_6_0[0] = get_internal_image(3251);
            images_outfitguarddtaf_485_6_8[0] = get_internal_image(3242);
            images_outfitguarddtaf_485_6_16[0] = get_internal_image(3252);
            images_outfitguarddtaf_485_6_24[0] = get_internal_image(3241);
            images_outfitguarddtaf_485_7_0[0] = get_internal_image(3249);
            images_outfitguarddtaf_485_7_0[1] = get_internal_image(3248);
            images_outfitguarddtaf_485_7_8[0] = get_internal_image(3243);
            images_outfitguarddtaf_485_7_8[1] = get_internal_image(3244);
            images_outfitguarddtaf_485_7_16[0] = get_internal_image(3247);
            images_outfitguarddtaf_485_7_16[1] = get_internal_image(3250);
            images_outfitguarddtaf_485_7_24[0] = get_internal_image(3245);
            images_outfitguarddtaf_485_7_24[1] = get_internal_image(3246);
            images_outfitguarddtaf_485_8_0[0] = get_internal_image(2554);
            images_outfitguarddtaf_485_8_16[0] = get_internal_image(3283);
            images_outfitguarddtaf_485_8_16[1] = get_internal_image(3284);
            images_outfitguarddtaf_485_8_24[0] = get_internal_image(3255);
            images_outfitguarddtaf_485_8_24[1] = get_internal_image(3255);
            images_outfitguarddtaf_485_8_24[2] = get_internal_image(3255);
            images_outfitguarddtaf_485_11_0[0] = get_internal_image(3249);
            images_outfitguarddtaf_485_11_0[1] = get_internal_image(3248);
            images_outfitguarddtaf_485_11_8[0] = get_internal_image(2775);
            images_outfitguarddtaf_485_11_8[1] = get_internal_image(2776);
            images_outfitguarddtaf_485_11_16[0] = get_internal_image(3247);
            images_outfitguarddtaf_485_11_16[1] = get_internal_image(3250);
            images_outfitguarddtaf_485_11_24[0] = get_internal_image(2779);
            images_outfitguarddtaf_485_11_24[1] = get_internal_image(2778);
            images_outfitguarddtaf_485_12_0[0] = get_internal_image(3271);
            images_outfitguarddtaf_485_12_0[1] = get_internal_image(3300);
            images_outfitguarddtaf_485_12_8[0] = get_internal_image(3315);
            images_outfitguarddtaf_485_12_8[1] = get_internal_image(3324);
            images_outfitguarddtaf_485_12_16[0] = get_internal_image(3313);
            images_outfitguarddtaf_485_12_16[1] = get_internal_image(3314);
            images_outfitguarddtaf_485_12_24[0] = get_internal_image(3323);
            images_outfitguarddtaf_485_12_24[1] = get_internal_image(3322);
            images_outfitguarddtaf_485_13_0[0] = get_internal_image(3297);
            images_outfitguarddtaf_485_13_0[1] = get_internal_image(3296);
            images_outfitguarddtaf_485_13_8[0] = get_internal_image(3303);
            images_outfitguarddtaf_485_13_8[1] = get_internal_image(3304);
            images_outfitguarddtaf_485_13_16[0] = get_internal_image(3295);
            images_outfitguarddtaf_485_13_16[1] = get_internal_image(3298);
            images_outfitguarddtaf_485_13_24[0] = get_internal_image(3301);
            images_outfitguarddtaf_485_13_24[1] = get_internal_image(3299);
            images_outfitguarddtaf_485_14_0[0] = get_internal_image(3305);
            images_outfitguarddtaf_485_14_0[1] = get_internal_image(3306);
            images_outfitguarddtaf_485_14_8[0] = get_internal_image(3311);
            images_outfitguarddtaf_485_14_8[1] = get_internal_image(3312);
            images_outfitguarddtaf_485_14_16[0] = get_internal_image(3307);
            images_outfitguarddtaf_485_14_16[1] = get_internal_image(3308);
            images_outfitguarddtaf_485_14_24[0] = get_internal_image(3309);
            images_outfitguarddtaf_485_14_24[1] = get_internal_image(3310);
            images_outfitguarddtaf_485_15_0[0] = get_internal_image(3287);
            images_outfitguarddtaf_485_15_0[1] = get_internal_image(3288);
            images_outfitguarddtaf_485_15_8[0] = get_internal_image(3293);
            images_outfitguarddtaf_485_15_8[1] = get_internal_image(3294);
            images_outfitguarddtaf_485_15_16[0] = get_internal_image(3289);
            images_outfitguarddtaf_485_15_16[1] = get_internal_image(3290);
            images_outfitguarddtaf_485_15_24[0] = get_internal_image(3291);
            images_outfitguarddtaf_485_15_24[1] = get_internal_image(3292);
            images_outfitguarddtaf_485_16_0[0] = get_internal_image(2804);
            images_outfitguarddtaf_485_16_0[1] = get_internal_image(2806);
            images_outfitguarddtaf_485_16_8[0] = get_internal_image(2809);
            images_outfitguarddtaf_485_16_8[1] = get_internal_image(2810);
            images_outfitguarddtaf_485_16_16[0] = get_internal_image(2805);
            images_outfitguarddtaf_485_16_16[1] = get_internal_image(2803);
            images_outfitguarddtaf_485_16_24[0] = get_internal_image(2807);
            images_outfitguarddtaf_485_16_24[1] = get_internal_image(2808);
            images_outfitguarddtaf_485_17_0[0] = get_internal_image(2188);
            images_outfitguarddtaf_485_17_0[1] = get_internal_image(2325);
            images_outfitguarddtaf_485_17_8[0] = get_internal_image(2298);
            images_outfitguarddtaf_485_17_8[1] = get_internal_image(2299);
            images_outfitguarddtaf_485_17_16[0] = get_internal_image(2194);
            images_outfitguarddtaf_485_17_16[1] = get_internal_image(2314);
            images_outfitguarddtaf_485_17_24[0] = get_internal_image(2190);
            images_outfitguarddtaf_485_17_24[1] = get_internal_image(2294);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_outfitguarddtaf_485(int x, int y)
{
    return new (Active::pool.create()) OutfitGuardDTAF_485(x, y);
}
static Image* images_outfitinmatebond_486_0_0[2];
static Direction direction_outfitinmatebond_486_0_0 = {0, 6, 6, 0, -1, images_outfitinmatebond_486_0_0, 2};
static Image* images_outfitinmatebond_486_0_8[2];
static Direction direction_outfitinmatebond_486_0_8 = {8, 6, 6, 0, -1, images_outfitinmatebond_486_0_8, 2};
static Image* images_outfitinmatebond_486_0_16[2];
static Direction direction_outfitinmatebond_486_0_16 = {16, 6, 6, 0, -1, images_outfitinmatebond_486_0_16, 2};
static Image* images_outfitinmatebond_486_0_24[2];
static Direction direction_outfitinmatebond_486_0_24 = {24, 6, 6, 0, -1, images_outfitinmatebond_486_0_24, 2};
static Animation anim_outfitinmatebond_486_0 = {&direction_outfitinmatebond_486_0_0, &direction_outfitinmatebond_486_0_0, &direction_outfitinmatebond_486_0_0, &direction_outfitinmatebond_486_0_0, NULL, &direction_outfitinmatebond_486_0_8, &direction_outfitinmatebond_486_0_8, &direction_outfitinmatebond_486_0_8, &direction_outfitinmatebond_486_0_8, &direction_outfitinmatebond_486_0_8, &direction_outfitinmatebond_486_0_8, &direction_outfitinmatebond_486_0_8, NULL, &direction_outfitinmatebond_486_0_16, &direction_outfitinmatebond_486_0_16, &direction_outfitinmatebond_486_0_16, &direction_outfitinmatebond_486_0_16, &direction_outfitinmatebond_486_0_16, &direction_outfitinmatebond_486_0_16, &direction_outfitinmatebond_486_0_16, NULL, &direction_outfitinmatebond_486_0_24, &direction_outfitinmatebond_486_0_24, &direction_outfitinmatebond_486_0_24, &direction_outfitinmatebond_486_0_24, &direction_outfitinmatebond_486_0_24, &direction_outfitinmatebond_486_0_24, &direction_outfitinmatebond_486_0_24, NULL, &direction_outfitinmatebond_486_0_0, &direction_outfitinmatebond_486_0_0, &direction_outfitinmatebond_486_0_0};
static Image* images_outfitinmatebond_486_6_0[1];
static Direction direction_outfitinmatebond_486_6_0 = {0, 6, 6, 0, -1, images_outfitinmatebond_486_6_0, 1};
static Image* images_outfitinmatebond_486_6_8[1];
static Direction direction_outfitinmatebond_486_6_8 = {8, 6, 6, 0, -1, images_outfitinmatebond_486_6_8, 1};
static Image* images_outfitinmatebond_486_6_16[1];
static Direction direction_outfitinmatebond_486_6_16 = {16, 6, 6, 0, 1, images_outfitinmatebond_486_6_16, 1};
static Image* images_outfitinmatebond_486_6_24[1];
static Direction direction_outfitinmatebond_486_6_24 = {24, 6, 6, 0, -1, images_outfitinmatebond_486_6_24, 1};
static Animation anim_outfitinmatebond_486_6 = {&direction_outfitinmatebond_486_6_0, &direction_outfitinmatebond_486_6_0, &direction_outfitinmatebond_486_6_0, &direction_outfitinmatebond_486_6_0, NULL, &direction_outfitinmatebond_486_6_8, &direction_outfitinmatebond_486_6_8, &direction_outfitinmatebond_486_6_8, &direction_outfitinmatebond_486_6_8, &direction_outfitinmatebond_486_6_8, &direction_outfitinmatebond_486_6_8, &direction_outfitinmatebond_486_6_8, NULL, &direction_outfitinmatebond_486_6_16, &direction_outfitinmatebond_486_6_16, &direction_outfitinmatebond_486_6_16, &direction_outfitinmatebond_486_6_16, &direction_outfitinmatebond_486_6_16, &direction_outfitinmatebond_486_6_16, &direction_outfitinmatebond_486_6_16, NULL, &direction_outfitinmatebond_486_6_24, &direction_outfitinmatebond_486_6_24, &direction_outfitinmatebond_486_6_24, &direction_outfitinmatebond_486_6_24, &direction_outfitinmatebond_486_6_24, &direction_outfitinmatebond_486_6_24, &direction_outfitinmatebond_486_6_24, NULL, &direction_outfitinmatebond_486_6_0, &direction_outfitinmatebond_486_6_0, &direction_outfitinmatebond_486_6_0};
static Image* images_outfitinmatebond_486_7_0[2];
static Direction direction_outfitinmatebond_486_7_0 = {0, 6, 6, 0, -1, images_outfitinmatebond_486_7_0, 2};
static Image* images_outfitinmatebond_486_7_8[2];
static Direction direction_outfitinmatebond_486_7_8 = {8, 6, 6, 0, -1, images_outfitinmatebond_486_7_8, 2};
static Image* images_outfitinmatebond_486_7_16[2];
static Direction direction_outfitinmatebond_486_7_16 = {16, 6, 6, 0, -1, images_outfitinmatebond_486_7_16, 2};
static Image* images_outfitinmatebond_486_7_24[2];
static Direction direction_outfitinmatebond_486_7_24 = {24, 6, 6, 0, -1, images_outfitinmatebond_486_7_24, 2};
static Animation anim_outfitinmatebond_486_7 = {&direction_outfitinmatebond_486_7_0, &direction_outfitinmatebond_486_7_0, &direction_outfitinmatebond_486_7_0, &direction_outfitinmatebond_486_7_0, NULL, &direction_outfitinmatebond_486_7_8, &direction_outfitinmatebond_486_7_8, &direction_outfitinmatebond_486_7_8, &direction_outfitinmatebond_486_7_8, &direction_outfitinmatebond_486_7_8, &direction_outfitinmatebond_486_7_8, &direction_outfitinmatebond_486_7_8, NULL, &direction_outfitinmatebond_486_7_16, &direction_outfitinmatebond_486_7_16, &direction_outfitinmatebond_486_7_16, &direction_outfitinmatebond_486_7_16, &direction_outfitinmatebond_486_7_16, &direction_outfitinmatebond_486_7_16, &direction_outfitinmatebond_486_7_16, NULL, &direction_outfitinmatebond_486_7_24, &direction_outfitinmatebond_486_7_24, &direction_outfitinmatebond_486_7_24, &direction_outfitinmatebond_486_7_24, &direction_outfitinmatebond_486_7_24, &direction_outfitinmatebond_486_7_24, &direction_outfitinmatebond_486_7_24, NULL, &direction_outfitinmatebond_486_7_0, &direction_outfitinmatebond_486_7_0, &direction_outfitinmatebond_486_7_0};
static Image* images_outfitinmatebond_486_8_0[1];
static Direction direction_outfitinmatebond_486_8_0 = {0, 10, 10, 0, -1, images_outfitinmatebond_486_8_0, 1};
static Image* images_outfitinmatebond_486_8_16[2];
static Direction direction_outfitinmatebond_486_8_16 = {16, 5, 5, 0, -1, images_outfitinmatebond_486_8_16, 2};
static Image* images_outfitinmatebond_486_8_24[3];
static Direction direction_outfitinmatebond_486_8_24 = {24, 50, 50, 0, -1, images_outfitinmatebond_486_8_24, 3};
static Animation anim_outfitinmatebond_486_8 = {&direction_outfitinmatebond_486_8_0, &direction_outfitinmatebond_486_8_0, &direction_outfitinmatebond_486_8_0, &direction_outfitinmatebond_486_8_0, &direction_outfitinmatebond_486_8_0, &direction_outfitinmatebond_486_8_0, &direction_outfitinmatebond_486_8_0, &direction_outfitinmatebond_486_8_0, NULL, &direction_outfitinmatebond_486_8_16, &direction_outfitinmatebond_486_8_16, &direction_outfitinmatebond_486_8_16, &direction_outfitinmatebond_486_8_16, &direction_outfitinmatebond_486_8_16, &direction_outfitinmatebond_486_8_16, &direction_outfitinmatebond_486_8_16, &direction_outfitinmatebond_486_8_16, &direction_outfitinmatebond_486_8_16, &direction_outfitinmatebond_486_8_16, &direction_outfitinmatebond_486_8_16, NULL, &direction_outfitinmatebond_486_8_24, &direction_outfitinmatebond_486_8_24, &direction_outfitinmatebond_486_8_24, &direction_outfitinmatebond_486_8_24, &direction_outfitinmatebond_486_8_24, &direction_outfitinmatebond_486_8_24, &direction_outfitinmatebond_486_8_24, NULL, &direction_outfitinmatebond_486_8_0, &direction_outfitinmatebond_486_8_0, &direction_outfitinmatebond_486_8_0};
static Image* images_outfitinmatebond_486_10_0[5];
static Direction direction_outfitinmatebond_486_10_0 = {0, 10, 10, 0, -1, images_outfitinmatebond_486_10_0, 5};
static Animation anim_outfitinmatebond_486_10 = {&direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, NULL, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0, &direction_outfitinmatebond_486_10_0};
static Image* images_outfitinmatebond_486_11_0[2];
static Direction direction_outfitinmatebond_486_11_0 = {0, 6, 6, 0, -1, images_outfitinmatebond_486_11_0, 2};
static Image* images_outfitinmatebond_486_11_8[2];
static Direction direction_outfitinmatebond_486_11_8 = {8, 6, 6, 0, -1, images_outfitinmatebond_486_11_8, 2};
static Image* images_outfitinmatebond_486_11_16[2];
static Direction direction_outfitinmatebond_486_11_16 = {16, 6, 6, 0, -1, images_outfitinmatebond_486_11_16, 2};
static Image* images_outfitinmatebond_486_11_24[2];
static Direction direction_outfitinmatebond_486_11_24 = {24, 6, 6, 0, -1, images_outfitinmatebond_486_11_24, 2};
static Animation anim_outfitinmatebond_486_11 = {&direction_outfitinmatebond_486_11_0, &direction_outfitinmatebond_486_11_0, &direction_outfitinmatebond_486_11_0, &direction_outfitinmatebond_486_11_0, NULL, &direction_outfitinmatebond_486_11_8, &direction_outfitinmatebond_486_11_8, &direction_outfitinmatebond_486_11_8, &direction_outfitinmatebond_486_11_8, &direction_outfitinmatebond_486_11_8, &direction_outfitinmatebond_486_11_8, &direction_outfitinmatebond_486_11_8, NULL, &direction_outfitinmatebond_486_11_16, &direction_outfitinmatebond_486_11_16, &direction_outfitinmatebond_486_11_16, &direction_outfitinmatebond_486_11_16, &direction_outfitinmatebond_486_11_16, &direction_outfitinmatebond_486_11_16, &direction_outfitinmatebond_486_11_16, NULL, &direction_outfitinmatebond_486_11_24, &direction_outfitinmatebond_486_11_24, &direction_outfitinmatebond_486_11_24, &direction_outfitinmatebond_486_11_24, &direction_outfitinmatebond_486_11_24, &direction_outfitinmatebond_486_11_24, &direction_outfitinmatebond_486_11_24, NULL, &direction_outfitinmatebond_486_11_0, &direction_outfitinmatebond_486_11_0, &direction_outfitinmatebond_486_11_0};
static Image* images_outfitinmatebond_486_12_0[2];
static Direction direction_outfitinmatebond_486_12_0 = {0, 10, 10, 0, -1, images_outfitinmatebond_486_12_0, 2};
static Image* images_outfitinmatebond_486_12_8[2];
static Direction direction_outfitinmatebond_486_12_8 = {8, 10, 10, 0, -1, images_outfitinmatebond_486_12_8, 2};
static Image* images_outfitinmatebond_486_12_16[2];
static Direction direction_outfitinmatebond_486_12_16 = {16, 10, 10, 0, -1, images_outfitinmatebond_486_12_16, 2};
static Image* images_outfitinmatebond_486_12_24[2];
static Direction direction_outfitinmatebond_486_12_24 = {24, 10, 10, 0, -1, images_outfitinmatebond_486_12_24, 2};
static Animation anim_outfitinmatebond_486_12 = {&direction_outfitinmatebond_486_12_0, &direction_outfitinmatebond_486_12_0, &direction_outfitinmatebond_486_12_0, &direction_outfitinmatebond_486_12_0, NULL, &direction_outfitinmatebond_486_12_8, &direction_outfitinmatebond_486_12_8, &direction_outfitinmatebond_486_12_8, &direction_outfitinmatebond_486_12_8, &direction_outfitinmatebond_486_12_8, &direction_outfitinmatebond_486_12_8, &direction_outfitinmatebond_486_12_8, NULL, &direction_outfitinmatebond_486_12_16, &direction_outfitinmatebond_486_12_16, &direction_outfitinmatebond_486_12_16, &direction_outfitinmatebond_486_12_16, &direction_outfitinmatebond_486_12_16, &direction_outfitinmatebond_486_12_16, &direction_outfitinmatebond_486_12_16, NULL, &direction_outfitinmatebond_486_12_24, &direction_outfitinmatebond_486_12_24, &direction_outfitinmatebond_486_12_24, &direction_outfitinmatebond_486_12_24, &direction_outfitinmatebond_486_12_24, &direction_outfitinmatebond_486_12_24, &direction_outfitinmatebond_486_12_24, NULL, &direction_outfitinmatebond_486_12_0, &direction_outfitinmatebond_486_12_0, &direction_outfitinmatebond_486_12_0};
static Image* images_outfitinmatebond_486_13_0[2];
static Direction direction_outfitinmatebond_486_13_0 = {0, 10, 10, 0, -1, images_outfitinmatebond_486_13_0, 2};
static Image* images_outfitinmatebond_486_13_8[2];
static Direction direction_outfitinmatebond_486_13_8 = {8, 10, 10, 0, -1, images_outfitinmatebond_486_13_8, 2};
static Image* images_outfitinmatebond_486_13_16[2];
static Direction direction_outfitinmatebond_486_13_16 = {16, 10, 10, 0, -1, images_outfitinmatebond_486_13_16, 2};
static Image* images_outfitinmatebond_486_13_24[2];
static Direction direction_outfitinmatebond_486_13_24 = {24, 10, 10, 0, -1, images_outfitinmatebond_486_13_24, 2};
static Animation anim_outfitinmatebond_486_13 = {&direction_outfitinmatebond_486_13_0, &direction_outfitinmatebond_486_13_0, &direction_outfitinmatebond_486_13_0, &direction_outfitinmatebond_486_13_0, NULL, &direction_outfitinmatebond_486_13_8, &direction_outfitinmatebond_486_13_8, &direction_outfitinmatebond_486_13_8, &direction_outfitinmatebond_486_13_8, &direction_outfitinmatebond_486_13_8, &direction_outfitinmatebond_486_13_8, &direction_outfitinmatebond_486_13_8, NULL, &direction_outfitinmatebond_486_13_16, &direction_outfitinmatebond_486_13_16, &direction_outfitinmatebond_486_13_16, &direction_outfitinmatebond_486_13_16, &direction_outfitinmatebond_486_13_16, &direction_outfitinmatebond_486_13_16, &direction_outfitinmatebond_486_13_16, NULL, &direction_outfitinmatebond_486_13_24, &direction_outfitinmatebond_486_13_24, &direction_outfitinmatebond_486_13_24, &direction_outfitinmatebond_486_13_24, &direction_outfitinmatebond_486_13_24, &direction_outfitinmatebond_486_13_24, &direction_outfitinmatebond_486_13_24, NULL, &direction_outfitinmatebond_486_13_0, &direction_outfitinmatebond_486_13_0, &direction_outfitinmatebond_486_13_0};
static Image* images_outfitinmatebond_486_14_0[2];
static Direction direction_outfitinmatebond_486_14_0 = {0, 10, 10, 0, -1, images_outfitinmatebond_486_14_0, 2};
static Image* images_outfitinmatebond_486_14_8[2];
static Direction direction_outfitinmatebond_486_14_8 = {8, 10, 10, 0, -1, images_outfitinmatebond_486_14_8, 2};
static Image* images_outfitinmatebond_486_14_16[2];
static Direction direction_outfitinmatebond_486_14_16 = {16, 10, 10, 0, -1, images_outfitinmatebond_486_14_16, 2};
static Image* images_outfitinmatebond_486_14_24[2];
static Direction direction_outfitinmatebond_486_14_24 = {24, 10, 10, 0, -1, images_outfitinmatebond_486_14_24, 2};
static Animation anim_outfitinmatebond_486_14 = {&direction_outfitinmatebond_486_14_0, &direction_outfitinmatebond_486_14_0, &direction_outfitinmatebond_486_14_0, &direction_outfitinmatebond_486_14_0, NULL, &direction_outfitinmatebond_486_14_8, &direction_outfitinmatebond_486_14_8, &direction_outfitinmatebond_486_14_8, &direction_outfitinmatebond_486_14_8, &direction_outfitinmatebond_486_14_8, &direction_outfitinmatebond_486_14_8, &direction_outfitinmatebond_486_14_8, NULL, &direction_outfitinmatebond_486_14_16, &direction_outfitinmatebond_486_14_16, &direction_outfitinmatebond_486_14_16, &direction_outfitinmatebond_486_14_16, &direction_outfitinmatebond_486_14_16, &direction_outfitinmatebond_486_14_16, &direction_outfitinmatebond_486_14_16, NULL, &direction_outfitinmatebond_486_14_24, &direction_outfitinmatebond_486_14_24, &direction_outfitinmatebond_486_14_24, &direction_outfitinmatebond_486_14_24, &direction_outfitinmatebond_486_14_24, &direction_outfitinmatebond_486_14_24, &direction_outfitinmatebond_486_14_24, NULL, &direction_outfitinmatebond_486_14_0, &direction_outfitinmatebond_486_14_0, &direction_outfitinmatebond_486_14_0};
static Image* images_outfitinmatebond_486_15_0[2];
static Direction direction_outfitinmatebond_486_15_0 = {0, 10, 10, 0, -1, images_outfitinmatebond_486_15_0, 2};
static Image* images_outfitinmatebond_486_15_8[2];
static Direction direction_outfitinmatebond_486_15_8 = {8, 10, 10, 0, -1, images_outfitinmatebond_486_15_8, 2};
static Image* images_outfitinmatebond_486_15_16[2];
static Direction direction_outfitinmatebond_486_15_16 = {16, 10, 10, 0, -1, images_outfitinmatebond_486_15_16, 2};
static Image* images_outfitinmatebond_486_15_24[2];
static Direction direction_outfitinmatebond_486_15_24 = {24, 10, 10, 0, -1, images_outfitinmatebond_486_15_24, 2};
static Animation anim_outfitinmatebond_486_15 = {&direction_outfitinmatebond_486_15_0, &direction_outfitinmatebond_486_15_0, &direction_outfitinmatebond_486_15_0, &direction_outfitinmatebond_486_15_0, NULL, &direction_outfitinmatebond_486_15_8, &direction_outfitinmatebond_486_15_8, &direction_outfitinmatebond_486_15_8, &direction_outfitinmatebond_486_15_8, &direction_outfitinmatebond_486_15_8, &direction_outfitinmatebond_486_15_8, &direction_outfitinmatebond_486_15_8, NULL, &direction_outfitinmatebond_486_15_16, &direction_outfitinmatebond_486_15_16, &direction_outfitinmatebond_486_15_16, &direction_outfitinmatebond_486_15_16, &direction_outfitinmatebond_486_15_16, &direction_outfitinmatebond_486_15_16, &direction_outfitinmatebond_486_15_16, NULL, &direction_outfitinmatebond_486_15_24, &direction_outfitinmatebond_486_15_24, &direction_outfitinmatebond_486_15_24, &direction_outfitinmatebond_486_15_24, &direction_outfitinmatebond_486_15_24, &direction_outfitinmatebond_486_15_24, &direction_outfitinmatebond_486_15_24, NULL, &direction_outfitinmatebond_486_15_0, &direction_outfitinmatebond_486_15_0, &direction_outfitinmatebond_486_15_0};
static Image* images_outfitinmatebond_486_16_0[2];
static Direction direction_outfitinmatebond_486_16_0 = {0, 10, 10, 0, -1, images_outfitinmatebond_486_16_0, 2};
static Image* images_outfitinmatebond_486_16_8[2];
static Direction direction_outfitinmatebond_486_16_8 = {8, 10, 10, 0, -1, images_outfitinmatebond_486_16_8, 2};
static Image* images_outfitinmatebond_486_16_16[2];
static Direction direction_outfitinmatebond_486_16_16 = {16, 10, 10, 0, -1, images_outfitinmatebond_486_16_16, 2};
static Image* images_outfitinmatebond_486_16_24[2];
static Direction direction_outfitinmatebond_486_16_24 = {24, 10, 10, 0, -1, images_outfitinmatebond_486_16_24, 2};
static Animation anim_outfitinmatebond_486_16 = {&direction_outfitinmatebond_486_16_0, &direction_outfitinmatebond_486_16_0, &direction_outfitinmatebond_486_16_0, &direction_outfitinmatebond_486_16_0, NULL, &direction_outfitinmatebond_486_16_8, &direction_outfitinmatebond_486_16_8, &direction_outfitinmatebond_486_16_8, &direction_outfitinmatebond_486_16_8, &direction_outfitinmatebond_486_16_8, &direction_outfitinmatebond_486_16_8, &direction_outfitinmatebond_486_16_8, NULL, &direction_outfitinmatebond_486_16_16, &direction_outfitinmatebond_486_16_16, &direction_outfitinmatebond_486_16_16, &direction_outfitinmatebond_486_16_16, &direction_outfitinmatebond_486_16_16, &direction_outfitinmatebond_486_16_16, &direction_outfitinmatebond_486_16_16, NULL, &direction_outfitinmatebond_486_16_24, &direction_outfitinmatebond_486_16_24, &direction_outfitinmatebond_486_16_24, &direction_outfitinmatebond_486_16_24, &direction_outfitinmatebond_486_16_24, &direction_outfitinmatebond_486_16_24, &direction_outfitinmatebond_486_16_24, NULL, &direction_outfitinmatebond_486_16_0, &direction_outfitinmatebond_486_16_0, &direction_outfitinmatebond_486_16_0};
static Image* images_outfitinmatebond_486_17_0[2];
static Direction direction_outfitinmatebond_486_17_0 = {0, 5, 5, 1, -1, images_outfitinmatebond_486_17_0, 2};
static Image* images_outfitinmatebond_486_17_8[2];
static Direction direction_outfitinmatebond_486_17_8 = {8, 5, 5, 1, -1, images_outfitinmatebond_486_17_8, 2};
static Image* images_outfitinmatebond_486_17_16[2];
static Direction direction_outfitinmatebond_486_17_16 = {16, 5, 5, 1, -1, images_outfitinmatebond_486_17_16, 2};
static Image* images_outfitinmatebond_486_17_24[2];
static Direction direction_outfitinmatebond_486_17_24 = {24, 5, 5, 1, -1, images_outfitinmatebond_486_17_24, 2};
static Animation anim_outfitinmatebond_486_17 = {&direction_outfitinmatebond_486_17_0, &direction_outfitinmatebond_486_17_0, &direction_outfitinmatebond_486_17_0, &direction_outfitinmatebond_486_17_0, NULL, &direction_outfitinmatebond_486_17_8, &direction_outfitinmatebond_486_17_8, &direction_outfitinmatebond_486_17_8, &direction_outfitinmatebond_486_17_8, &direction_outfitinmatebond_486_17_8, &direction_outfitinmatebond_486_17_8, &direction_outfitinmatebond_486_17_8, NULL, &direction_outfitinmatebond_486_17_16, &direction_outfitinmatebond_486_17_16, &direction_outfitinmatebond_486_17_16, &direction_outfitinmatebond_486_17_16, &direction_outfitinmatebond_486_17_16, &direction_outfitinmatebond_486_17_16, &direction_outfitinmatebond_486_17_16, NULL, &direction_outfitinmatebond_486_17_24, &direction_outfitinmatebond_486_17_24, &direction_outfitinmatebond_486_17_24, &direction_outfitinmatebond_486_17_24, &direction_outfitinmatebond_486_17_24, &direction_outfitinmatebond_486_17_24, &direction_outfitinmatebond_486_17_24, NULL, &direction_outfitinmatebond_486_17_0, &direction_outfitinmatebond_486_17_0, &direction_outfitinmatebond_486_17_0};
static Image* images_outfitinmatebond_486_18_24[8];
static Direction direction_outfitinmatebond_486_18_24 = {24, 25, 25, 0, -1, images_outfitinmatebond_486_18_24, 8};
static Animation anim_outfitinmatebond_486_18 = {&direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, NULL, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24, &direction_outfitinmatebond_486_18_24};
static Image* images_outfitinmatebond_486_19_24[5];
static Direction direction_outfitinmatebond_486_19_24 = {24, 10, 10, 0, -1, images_outfitinmatebond_486_19_24, 5};
static Animation anim_outfitinmatebond_486_19 = {&direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, NULL, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24, &direction_outfitinmatebond_486_19_24};
static Animation * anim_array_outfitinmatebond_486[20] = {&anim_outfitinmatebond_486_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitinmatebond_486_6, &anim_outfitinmatebond_486_7, &anim_outfitinmatebond_486_8, NULL, &anim_outfitinmatebond_486_10, &anim_outfitinmatebond_486_11, &anim_outfitinmatebond_486_12, &anim_outfitinmatebond_486_13, &anim_outfitinmatebond_486_14, &anim_outfitinmatebond_486_15, &anim_outfitinmatebond_486_16, &anim_outfitinmatebond_486_17, &anim_outfitinmatebond_486_18, &anim_outfitinmatebond_486_19};
static Animations anim_outfitinmatebond_486 = {20, &anim_array_outfitinmatebond_486[0]};
static bool anim_outfitinmatebond_486_initialized;
class OutfitInmateBond_486 : public Active
{
public:
    OutfitInmateBond_486(int x, int y) : Active(x, y, OutfitInmateBond_486_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate Bond", 20);
#endif
        this->animations = &anim_outfitinmatebond_486;
        if (!anim_outfitinmatebond_486_initialized) {
            anim_outfitinmatebond_486_initialized = true;
            images_outfitinmatebond_486_0_0[0] = get_internal_image(2832);
            images_outfitinmatebond_486_0_0[1] = get_internal_image(2837);
            images_outfitinmatebond_486_0_8[0] = get_internal_image(2842);
            images_outfitinmatebond_486_0_8[1] = get_internal_image(2843);
            images_outfitinmatebond_486_0_16[0] = get_internal_image(2838);
            images_outfitinmatebond_486_0_16[1] = get_internal_image(2839);
            images_outfitinmatebond_486_0_24[0] = get_internal_image(2840);
            images_outfitinmatebond_486_0_24[1] = get_internal_image(2841);
            images_outfitinmatebond_486_6_0[0] = get_internal_image(3157);
            images_outfitinmatebond_486_6_8[0] = get_internal_image(3160);
            images_outfitinmatebond_486_6_16[0] = get_internal_image(3156);
            images_outfitinmatebond_486_6_24[0] = get_internal_image(3159);
            images_outfitinmatebond_486_7_0[0] = get_internal_image(3158);
            images_outfitinmatebond_486_7_0[1] = get_internal_image(3161);
            images_outfitinmatebond_486_7_8[0] = get_internal_image(3164);
            images_outfitinmatebond_486_7_8[1] = get_internal_image(3165);
            images_outfitinmatebond_486_7_16[0] = get_internal_image(3162);
            images_outfitinmatebond_486_7_16[1] = get_internal_image(3163);
            images_outfitinmatebond_486_7_24[0] = get_internal_image(3166);
            images_outfitinmatebond_486_7_24[1] = get_internal_image(3167);
            images_outfitinmatebond_486_8_0[0] = get_internal_image(2597);
            images_outfitinmatebond_486_8_16[0] = get_internal_image(2595);
            images_outfitinmatebond_486_8_16[1] = get_internal_image(2596);
            images_outfitinmatebond_486_8_24[0] = get_internal_image(3215);
            images_outfitinmatebond_486_8_24[1] = get_internal_image(3215);
            images_outfitinmatebond_486_8_24[2] = get_internal_image(3215);
            images_outfitinmatebond_486_10_0[0] = get_internal_image(3316);
            images_outfitinmatebond_486_10_0[1] = get_internal_image(3317);
            images_outfitinmatebond_486_10_0[2] = get_internal_image(3318);
            images_outfitinmatebond_486_10_0[3] = get_internal_image(3317);
            images_outfitinmatebond_486_10_0[4] = get_internal_image(3316);
            images_outfitinmatebond_486_11_0[0] = get_internal_image(3168);
            images_outfitinmatebond_486_11_0[1] = get_internal_image(3169);
            images_outfitinmatebond_486_11_8[0] = get_internal_image(3207);
            images_outfitinmatebond_486_11_8[1] = get_internal_image(3210);
            images_outfitinmatebond_486_11_16[0] = get_internal_image(3170);
            images_outfitinmatebond_486_11_16[1] = get_internal_image(3171);
            images_outfitinmatebond_486_11_24[0] = get_internal_image(3172);
            images_outfitinmatebond_486_11_24[1] = get_internal_image(3173);
            images_outfitinmatebond_486_12_0[0] = get_internal_image(3176);
            images_outfitinmatebond_486_12_0[1] = get_internal_image(3177);
            images_outfitinmatebond_486_12_8[0] = get_internal_image(3180);
            images_outfitinmatebond_486_12_8[1] = get_internal_image(3183);
            images_outfitinmatebond_486_12_16[0] = get_internal_image(3178);
            images_outfitinmatebond_486_12_16[1] = get_internal_image(3179);
            images_outfitinmatebond_486_12_24[0] = get_internal_image(3182);
            images_outfitinmatebond_486_12_24[1] = get_internal_image(3181);
            images_outfitinmatebond_486_13_0[0] = get_internal_image(3184);
            images_outfitinmatebond_486_13_0[1] = get_internal_image(3185);
            images_outfitinmatebond_486_13_8[0] = get_internal_image(3188);
            images_outfitinmatebond_486_13_8[1] = get_internal_image(3189);
            images_outfitinmatebond_486_13_16[0] = get_internal_image(3186);
            images_outfitinmatebond_486_13_16[1] = get_internal_image(3187);
            images_outfitinmatebond_486_13_24[0] = get_internal_image(3192);
            images_outfitinmatebond_486_13_24[1] = get_internal_image(3191);
            images_outfitinmatebond_486_14_0[0] = get_internal_image(3190);
            images_outfitinmatebond_486_14_0[1] = get_internal_image(3193);
            images_outfitinmatebond_486_14_8[0] = get_internal_image(3196);
            images_outfitinmatebond_486_14_8[1] = get_internal_image(3197);
            images_outfitinmatebond_486_14_16[0] = get_internal_image(3194);
            images_outfitinmatebond_486_14_16[1] = get_internal_image(3195);
            images_outfitinmatebond_486_14_24[0] = get_internal_image(3198);
            images_outfitinmatebond_486_14_24[1] = get_internal_image(3198);
            images_outfitinmatebond_486_15_0[0] = get_internal_image(3199);
            images_outfitinmatebond_486_15_0[1] = get_internal_image(3200);
            images_outfitinmatebond_486_15_8[0] = get_internal_image(3203);
            images_outfitinmatebond_486_15_8[1] = get_internal_image(3204);
            images_outfitinmatebond_486_15_16[0] = get_internal_image(3201);
            images_outfitinmatebond_486_15_16[1] = get_internal_image(3202);
            images_outfitinmatebond_486_15_24[0] = get_internal_image(3205);
            images_outfitinmatebond_486_15_24[1] = get_internal_image(3206);
            images_outfitinmatebond_486_16_0[0] = get_internal_image(1858);
            images_outfitinmatebond_486_16_0[1] = get_internal_image(1859);
            images_outfitinmatebond_486_16_8[0] = get_internal_image(1864);
            images_outfitinmatebond_486_16_8[1] = get_internal_image(1861);
            images_outfitinmatebond_486_16_16[0] = get_internal_image(1857);
            images_outfitinmatebond_486_16_16[1] = get_internal_image(1860);
            images_outfitinmatebond_486_16_24[0] = get_internal_image(1862);
            images_outfitinmatebond_486_16_24[1] = get_internal_image(1863);
            images_outfitinmatebond_486_17_0[0] = get_internal_image(2045);
            images_outfitinmatebond_486_17_0[1] = get_internal_image(2046);
            images_outfitinmatebond_486_17_8[0] = get_internal_image(2050);
            images_outfitinmatebond_486_17_8[1] = get_internal_image(2043);
            images_outfitinmatebond_486_17_16[0] = get_internal_image(2041);
            images_outfitinmatebond_486_17_16[1] = get_internal_image(2044);
            images_outfitinmatebond_486_17_24[0] = get_internal_image(2049);
            images_outfitinmatebond_486_17_24[1] = get_internal_image(2047);
            images_outfitinmatebond_486_18_24[0] = get_internal_image(1407);
            images_outfitinmatebond_486_18_24[1] = get_internal_image(2131);
            images_outfitinmatebond_486_18_24[2] = get_internal_image(2168);
            images_outfitinmatebond_486_18_24[3] = get_internal_image(437);
            images_outfitinmatebond_486_18_24[4] = get_internal_image(1425);
            images_outfitinmatebond_486_18_24[5] = get_internal_image(2126);
            images_outfitinmatebond_486_18_24[6] = get_internal_image(2171);
            images_outfitinmatebond_486_18_24[7] = get_internal_image(1412);
            images_outfitinmatebond_486_19_24[0] = get_internal_image(2328);
            images_outfitinmatebond_486_19_24[1] = get_internal_image(2329);
            images_outfitinmatebond_486_19_24[2] = get_internal_image(2329);
            images_outfitinmatebond_486_19_24[3] = get_internal_image(2307);
            images_outfitinmatebond_486_19_24[4] = get_internal_image(2307);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmatebond_486(int x, int y)
{
    return new (Active::pool.create()) OutfitInmateBond_486(x, y);
}
static Image* images_dtafobjects_487_0_0[1];
static Direction direction_dtafobjects_487_0_0 = {0, 10, 10, 0, -1, images_dtafobjects_487_0_0, 1};
static Image* images_dtafobjects_487_0_8[1];
static Direction direction_dtafobjects_487_0_8 = {8, 50, 50, 0, -1, images_dtafobjects_487_0_8, 1};
static Image* images_dtafobjects_487_0_16[1];
static Direction direction_dtafobjects_487_0_16 = {16, 50, 50, 0, -1, images_dtafobjects_487_0_16, 1};
static Image* images_dtafobjects_487_0_24[1];
static Direction direction_dtafobjects_487_0_24 = {24, 50, 50, 0, -1, images_dtafobjects_487_0_24, 1};
static Animation anim_dtafobjects_487_0 = {&direction_dtafobjects_487_0_0, &direction_dtafobjects_487_0_0, &direction_dtafobjects_487_0_0, &direction_dtafobjects_487_0_0, NULL, &direction_dtafobjects_487_0_8, &direction_dtafobjects_487_0_8, &direction_dtafobjects_487_0_8, &direction_dtafobjects_487_0_8, &direction_dtafobjects_487_0_8, &direction_dtafobjects_487_0_8, &direction_dtafobjects_487_0_8, NULL, &direction_dtafobjects_487_0_16, &direction_dtafobjects_487_0_16, &direction_dtafobjects_487_0_16, &direction_dtafobjects_487_0_16, &direction_dtafobjects_487_0_16, &direction_dtafobjects_487_0_16, &direction_dtafobjects_487_0_16, NULL, &direction_dtafobjects_487_0_24, &direction_dtafobjects_487_0_24, &direction_dtafobjects_487_0_24, &direction_dtafobjects_487_0_24, &direction_dtafobjects_487_0_24, &direction_dtafobjects_487_0_24, &direction_dtafobjects_487_0_24, NULL, &direction_dtafobjects_487_0_0, &direction_dtafobjects_487_0_0, &direction_dtafobjects_487_0_0};
static Image* images_dtafobjects_487_1_0[1];
static Direction direction_dtafobjects_487_1_0 = {0, 50, 50, 0, -1, images_dtafobjects_487_1_0, 1};
static Image* images_dtafobjects_487_1_8[1];
static Direction direction_dtafobjects_487_1_8 = {8, 50, 50, 0, 1, images_dtafobjects_487_1_8, 1};
static Image* images_dtafobjects_487_1_16[1];
static Direction direction_dtafobjects_487_1_16 = {16, 50, 50, 0, -1, images_dtafobjects_487_1_16, 1};
static Image* images_dtafobjects_487_1_24[1];
static Direction direction_dtafobjects_487_1_24 = {24, 50, 50, 0, 1, images_dtafobjects_487_1_24, 1};
static Animation anim_dtafobjects_487_1 = {&direction_dtafobjects_487_1_0, &direction_dtafobjects_487_1_0, &direction_dtafobjects_487_1_0, &direction_dtafobjects_487_1_0, NULL, &direction_dtafobjects_487_1_8, &direction_dtafobjects_487_1_8, &direction_dtafobjects_487_1_8, &direction_dtafobjects_487_1_8, &direction_dtafobjects_487_1_8, &direction_dtafobjects_487_1_8, &direction_dtafobjects_487_1_8, NULL, &direction_dtafobjects_487_1_16, &direction_dtafobjects_487_1_16, &direction_dtafobjects_487_1_16, &direction_dtafobjects_487_1_16, &direction_dtafobjects_487_1_16, &direction_dtafobjects_487_1_16, &direction_dtafobjects_487_1_16, NULL, &direction_dtafobjects_487_1_24, &direction_dtafobjects_487_1_24, &direction_dtafobjects_487_1_24, &direction_dtafobjects_487_1_24, &direction_dtafobjects_487_1_24, &direction_dtafobjects_487_1_24, &direction_dtafobjects_487_1_24, NULL, &direction_dtafobjects_487_1_0, &direction_dtafobjects_487_1_0, &direction_dtafobjects_487_1_0};
static Image* images_dtafobjects_487_2_0[1];
static Direction direction_dtafobjects_487_2_0 = {0, 50, 50, 0, -1, images_dtafobjects_487_2_0, 1};
static Image* images_dtafobjects_487_2_8[1];
static Direction direction_dtafobjects_487_2_8 = {8, 50, 50, 0, 1, images_dtafobjects_487_2_8, 1};
static Image* images_dtafobjects_487_2_16[1];
static Direction direction_dtafobjects_487_2_16 = {16, 50, 50, 0, -1, images_dtafobjects_487_2_16, 1};
static Image* images_dtafobjects_487_2_24[1];
static Direction direction_dtafobjects_487_2_24 = {24, 50, 50, 0, -1, images_dtafobjects_487_2_24, 1};
static Animation anim_dtafobjects_487_2 = {&direction_dtafobjects_487_2_0, &direction_dtafobjects_487_2_0, &direction_dtafobjects_487_2_0, &direction_dtafobjects_487_2_0, NULL, &direction_dtafobjects_487_2_8, &direction_dtafobjects_487_2_8, &direction_dtafobjects_487_2_8, &direction_dtafobjects_487_2_8, &direction_dtafobjects_487_2_8, &direction_dtafobjects_487_2_8, &direction_dtafobjects_487_2_8, NULL, &direction_dtafobjects_487_2_16, &direction_dtafobjects_487_2_16, &direction_dtafobjects_487_2_16, &direction_dtafobjects_487_2_16, &direction_dtafobjects_487_2_16, &direction_dtafobjects_487_2_16, &direction_dtafobjects_487_2_16, NULL, &direction_dtafobjects_487_2_24, &direction_dtafobjects_487_2_24, &direction_dtafobjects_487_2_24, &direction_dtafobjects_487_2_24, &direction_dtafobjects_487_2_24, &direction_dtafobjects_487_2_24, &direction_dtafobjects_487_2_24, NULL, &direction_dtafobjects_487_2_0, &direction_dtafobjects_487_2_0, &direction_dtafobjects_487_2_0};
static Image* images_dtafobjects_487_5_0[1];
static Direction direction_dtafobjects_487_5_0 = {0, 50, 50, 0, -1, images_dtafobjects_487_5_0, 1};
static Image* images_dtafobjects_487_5_8[1];
static Direction direction_dtafobjects_487_5_8 = {8, 50, 50, 0, -1, images_dtafobjects_487_5_8, 1};
static Image* images_dtafobjects_487_5_16[1];
static Direction direction_dtafobjects_487_5_16 = {16, 50, 50, 0, -1, images_dtafobjects_487_5_16, 1};
static Image* images_dtafobjects_487_5_24[1];
static Direction direction_dtafobjects_487_5_24 = {24, 50, 50, 0, 1, images_dtafobjects_487_5_24, 1};
static Animation anim_dtafobjects_487_5 = {&direction_dtafobjects_487_5_0, &direction_dtafobjects_487_5_0, &direction_dtafobjects_487_5_0, &direction_dtafobjects_487_5_0, NULL, &direction_dtafobjects_487_5_8, &direction_dtafobjects_487_5_8, &direction_dtafobjects_487_5_8, &direction_dtafobjects_487_5_8, &direction_dtafobjects_487_5_8, &direction_dtafobjects_487_5_8, &direction_dtafobjects_487_5_8, NULL, &direction_dtafobjects_487_5_16, &direction_dtafobjects_487_5_16, &direction_dtafobjects_487_5_16, &direction_dtafobjects_487_5_16, &direction_dtafobjects_487_5_16, &direction_dtafobjects_487_5_16, &direction_dtafobjects_487_5_16, NULL, &direction_dtafobjects_487_5_24, &direction_dtafobjects_487_5_24, &direction_dtafobjects_487_5_24, &direction_dtafobjects_487_5_24, &direction_dtafobjects_487_5_24, &direction_dtafobjects_487_5_24, &direction_dtafobjects_487_5_24, NULL, &direction_dtafobjects_487_5_0, &direction_dtafobjects_487_5_0, &direction_dtafobjects_487_5_0};
static Image* images_dtafobjects_487_6_0[1];
static Direction direction_dtafobjects_487_6_0 = {0, 50, 50, 0, 1, images_dtafobjects_487_6_0, 1};
static Image* images_dtafobjects_487_6_8[1];
static Direction direction_dtafobjects_487_6_8 = {8, 50, 50, 0, 1, images_dtafobjects_487_6_8, 1};
static Image* images_dtafobjects_487_6_16[1];
static Direction direction_dtafobjects_487_6_16 = {16, 50, 50, 0, 1, images_dtafobjects_487_6_16, 1};
static Image* images_dtafobjects_487_6_24[1];
static Direction direction_dtafobjects_487_6_24 = {24, 50, 50, 0, 1, images_dtafobjects_487_6_24, 1};
static Animation anim_dtafobjects_487_6 = {&direction_dtafobjects_487_6_0, &direction_dtafobjects_487_6_0, &direction_dtafobjects_487_6_0, &direction_dtafobjects_487_6_0, NULL, &direction_dtafobjects_487_6_8, &direction_dtafobjects_487_6_8, &direction_dtafobjects_487_6_8, &direction_dtafobjects_487_6_8, &direction_dtafobjects_487_6_8, &direction_dtafobjects_487_6_8, &direction_dtafobjects_487_6_8, NULL, &direction_dtafobjects_487_6_16, &direction_dtafobjects_487_6_16, &direction_dtafobjects_487_6_16, &direction_dtafobjects_487_6_16, &direction_dtafobjects_487_6_16, &direction_dtafobjects_487_6_16, &direction_dtafobjects_487_6_16, NULL, &direction_dtafobjects_487_6_24, &direction_dtafobjects_487_6_24, &direction_dtafobjects_487_6_24, &direction_dtafobjects_487_6_24, &direction_dtafobjects_487_6_24, &direction_dtafobjects_487_6_24, &direction_dtafobjects_487_6_24, NULL, &direction_dtafobjects_487_6_0, &direction_dtafobjects_487_6_0, &direction_dtafobjects_487_6_0};
static Image* images_dtafobjects_487_7_0[7];
static Direction direction_dtafobjects_487_7_0 = {0, 10, 10, 0, -1, images_dtafobjects_487_7_0, 7};
static Image* images_dtafobjects_487_7_8[1];
static Direction direction_dtafobjects_487_7_8 = {8, 50, 50, 0, 1, images_dtafobjects_487_7_8, 1};
static Image* images_dtafobjects_487_7_16[1];
static Direction direction_dtafobjects_487_7_16 = {16, 50, 50, 0, 1, images_dtafobjects_487_7_16, 1};
static Image* images_dtafobjects_487_7_24[1];
static Direction direction_dtafobjects_487_7_24 = {24, 50, 50, 0, -1, images_dtafobjects_487_7_24, 1};
static Animation anim_dtafobjects_487_7 = {&direction_dtafobjects_487_7_0, &direction_dtafobjects_487_7_0, &direction_dtafobjects_487_7_0, &direction_dtafobjects_487_7_0, NULL, &direction_dtafobjects_487_7_8, &direction_dtafobjects_487_7_8, &direction_dtafobjects_487_7_8, &direction_dtafobjects_487_7_8, &direction_dtafobjects_487_7_8, &direction_dtafobjects_487_7_8, &direction_dtafobjects_487_7_8, NULL, &direction_dtafobjects_487_7_16, &direction_dtafobjects_487_7_16, &direction_dtafobjects_487_7_16, &direction_dtafobjects_487_7_16, &direction_dtafobjects_487_7_16, &direction_dtafobjects_487_7_16, &direction_dtafobjects_487_7_16, NULL, &direction_dtafobjects_487_7_24, &direction_dtafobjects_487_7_24, &direction_dtafobjects_487_7_24, &direction_dtafobjects_487_7_24, &direction_dtafobjects_487_7_24, &direction_dtafobjects_487_7_24, &direction_dtafobjects_487_7_24, NULL, &direction_dtafobjects_487_7_0, &direction_dtafobjects_487_7_0, &direction_dtafobjects_487_7_0};
static Image* images_dtafobjects_487_8_0[1];
static Direction direction_dtafobjects_487_8_0 = {0, 50, 50, 0, -1, images_dtafobjects_487_8_0, 1};
static Animation anim_dtafobjects_487_8 = {&direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, NULL, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0, &direction_dtafobjects_487_8_0};
static Image* images_dtafobjects_487_9_0[1];
static Direction direction_dtafobjects_487_9_0 = {0, 50, 50, 0, -1, images_dtafobjects_487_9_0, 1};
static Animation anim_dtafobjects_487_9 = {&direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, NULL, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0, &direction_dtafobjects_487_9_0};
static Image* images_dtafobjects_487_10_0[2];
static Direction direction_dtafobjects_487_10_0 = {0, 5, 5, 0, -1, images_dtafobjects_487_10_0, 2};
static Image* images_dtafobjects_487_10_16[2];
static Direction direction_dtafobjects_487_10_16 = {16, 5, 5, 0, -1, images_dtafobjects_487_10_16, 2};
static Image* images_dtafobjects_487_10_24[2];
static Direction direction_dtafobjects_487_10_24 = {24, 5, 5, 0, -1, images_dtafobjects_487_10_24, 2};
static Animation anim_dtafobjects_487_10 = {&direction_dtafobjects_487_10_0, &direction_dtafobjects_487_10_0, &direction_dtafobjects_487_10_0, &direction_dtafobjects_487_10_0, &direction_dtafobjects_487_10_0, &direction_dtafobjects_487_10_0, &direction_dtafobjects_487_10_0, &direction_dtafobjects_487_10_0, NULL, &direction_dtafobjects_487_10_16, &direction_dtafobjects_487_10_16, &direction_dtafobjects_487_10_16, &direction_dtafobjects_487_10_16, &direction_dtafobjects_487_10_16, &direction_dtafobjects_487_10_16, &direction_dtafobjects_487_10_16, &direction_dtafobjects_487_10_16, &direction_dtafobjects_487_10_16, &direction_dtafobjects_487_10_16, &direction_dtafobjects_487_10_16, NULL, &direction_dtafobjects_487_10_24, &direction_dtafobjects_487_10_24, &direction_dtafobjects_487_10_24, &direction_dtafobjects_487_10_24, &direction_dtafobjects_487_10_24, &direction_dtafobjects_487_10_24, &direction_dtafobjects_487_10_24, NULL, &direction_dtafobjects_487_10_0, &direction_dtafobjects_487_10_0, &direction_dtafobjects_487_10_0};
static Animation * anim_array_dtafobjects_487[11] = {&anim_dtafobjects_487_0, &anim_dtafobjects_487_1, &anim_dtafobjects_487_2, NULL, NULL, &anim_dtafobjects_487_5, &anim_dtafobjects_487_6, &anim_dtafobjects_487_7, &anim_dtafobjects_487_8, &anim_dtafobjects_487_9, &anim_dtafobjects_487_10};
static Animations anim_dtafobjects_487 = {11, &anim_array_dtafobjects_487[0]};
static bool anim_dtafobjects_487_initialized;
class DTAFObjects_487 : public Active
{
public:
    DTAFObjects_487(int x, int y) : Active(x, y, DTAFObjects_487_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DTAF_Objects", 12);
#endif
        this->animations = &anim_dtafobjects_487;
        if (!anim_dtafobjects_487_initialized) {
            anim_dtafobjects_487_initialized = true;
            images_dtafobjects_487_0_0[0] = get_internal_image(2906);
            images_dtafobjects_487_0_8[0] = get_internal_image(3257);
            images_dtafobjects_487_0_16[0] = get_internal_image(2904);
            images_dtafobjects_487_0_24[0] = get_internal_image(2907);
            images_dtafobjects_487_1_0[0] = get_internal_image(2861);
            images_dtafobjects_487_1_8[0] = get_internal_image(2857);
            images_dtafobjects_487_1_16[0] = get_internal_image(2855);
            images_dtafobjects_487_1_24[0] = get_internal_image(2862);
            images_dtafobjects_487_2_0[0] = get_internal_image(2858);
            images_dtafobjects_487_2_8[0] = get_internal_image(2866);
            images_dtafobjects_487_2_16[0] = get_internal_image(2856);
            images_dtafobjects_487_2_24[0] = get_internal_image(2860);
            images_dtafobjects_487_5_0[0] = get_internal_image(2863);
            images_dtafobjects_487_5_8[0] = get_internal_image(2868);
            images_dtafobjects_487_5_16[0] = get_internal_image(2865);
            images_dtafobjects_487_5_24[0] = get_internal_image(2867);
            images_dtafobjects_487_6_0[0] = get_internal_image(2870);
            images_dtafobjects_487_6_8[0] = get_internal_image(2873);
            images_dtafobjects_487_6_16[0] = get_internal_image(2876);
            images_dtafobjects_487_6_24[0] = get_internal_image(2869);
            images_dtafobjects_487_7_0[0] = get_internal_image(3213);
            images_dtafobjects_487_7_0[1] = get_internal_image(3213);
            images_dtafobjects_487_7_0[2] = get_internal_image(3213);
            images_dtafobjects_487_7_0[3] = get_internal_image(3213);
            images_dtafobjects_487_7_0[4] = get_internal_image(3214);
            images_dtafobjects_487_7_0[5] = get_internal_image(3216);
            images_dtafobjects_487_7_0[6] = get_internal_image(3213);
            images_dtafobjects_487_7_8[0] = get_internal_image(2864);
            images_dtafobjects_487_7_16[0] = get_internal_image(2874);
            images_dtafobjects_487_7_24[0] = get_internal_image(2854);
            images_dtafobjects_487_8_0[0] = get_internal_image(2880);
            images_dtafobjects_487_9_0[0] = get_internal_image(3325);
            images_dtafobjects_487_10_0[0] = get_internal_image(2911);
            images_dtafobjects_487_10_0[1] = get_internal_image(2850);
            images_dtafobjects_487_10_16[0] = get_internal_image(2851);
            images_dtafobjects_487_10_16[1] = get_internal_image(2899);
            images_dtafobjects_487_10_24[0] = get_internal_image(2903);
            images_dtafobjects_487_10_24[1] = get_internal_image(2902);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_dtafobjects_487(int x, int y)
{
    return new (Active::pool.create()) DTAFObjects_487(x, y);
}
static Image* images_inmatedtaf1_488_0_0[2];
static Direction direction_inmatedtaf1_488_0_0 = {0, 10, 10, 0, -1, images_inmatedtaf1_488_0_0, 2};
static Image* images_inmatedtaf1_488_0_8[2];
static Direction direction_inmatedtaf1_488_0_8 = {8, 10, 10, 0, -1, images_inmatedtaf1_488_0_8, 2};
static Image* images_inmatedtaf1_488_0_16[2];
static Direction direction_inmatedtaf1_488_0_16 = {16, 10, 10, 0, -1, images_inmatedtaf1_488_0_16, 2};
static Image* images_inmatedtaf1_488_0_24[2];
static Direction direction_inmatedtaf1_488_0_24 = {24, 10, 10, 0, -1, images_inmatedtaf1_488_0_24, 2};
static Animation anim_inmatedtaf1_488_0 = {&direction_inmatedtaf1_488_0_0, &direction_inmatedtaf1_488_0_0, &direction_inmatedtaf1_488_0_0, &direction_inmatedtaf1_488_0_0, NULL, &direction_inmatedtaf1_488_0_8, &direction_inmatedtaf1_488_0_8, &direction_inmatedtaf1_488_0_8, &direction_inmatedtaf1_488_0_8, &direction_inmatedtaf1_488_0_8, &direction_inmatedtaf1_488_0_8, &direction_inmatedtaf1_488_0_8, NULL, &direction_inmatedtaf1_488_0_16, &direction_inmatedtaf1_488_0_16, &direction_inmatedtaf1_488_0_16, &direction_inmatedtaf1_488_0_16, &direction_inmatedtaf1_488_0_16, &direction_inmatedtaf1_488_0_16, &direction_inmatedtaf1_488_0_16, NULL, &direction_inmatedtaf1_488_0_24, &direction_inmatedtaf1_488_0_24, &direction_inmatedtaf1_488_0_24, &direction_inmatedtaf1_488_0_24, &direction_inmatedtaf1_488_0_24, &direction_inmatedtaf1_488_0_24, &direction_inmatedtaf1_488_0_24, NULL, &direction_inmatedtaf1_488_0_0, &direction_inmatedtaf1_488_0_0, &direction_inmatedtaf1_488_0_0};
static Image* images_inmatedtaf1_488_4_0[4];
static Direction direction_inmatedtaf1_488_4_0 = {0, 20, 20, 0, 1, images_inmatedtaf1_488_4_0, 4};
static Image* images_inmatedtaf1_488_4_16[4];
static Direction direction_inmatedtaf1_488_4_16 = {16, 20, 20, 0, 1, images_inmatedtaf1_488_4_16, 4};
static Animation anim_inmatedtaf1_488_4 = {&direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, NULL, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, &direction_inmatedtaf1_488_4_16, NULL, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0, &direction_inmatedtaf1_488_4_0};
static Image* images_inmatedtaf1_488_6_0[1];
static Direction direction_inmatedtaf1_488_6_0 = {0, 6, 6, 0, 1, images_inmatedtaf1_488_6_0, 1};
static Image* images_inmatedtaf1_488_6_8[1];
static Direction direction_inmatedtaf1_488_6_8 = {8, 6, 6, 0, 1, images_inmatedtaf1_488_6_8, 1};
static Image* images_inmatedtaf1_488_6_16[1];
static Direction direction_inmatedtaf1_488_6_16 = {16, 6, 6, 0, 1, images_inmatedtaf1_488_6_16, 1};
static Image* images_inmatedtaf1_488_6_24[1];
static Direction direction_inmatedtaf1_488_6_24 = {24, 6, 6, 0, 1, images_inmatedtaf1_488_6_24, 1};
static Animation anim_inmatedtaf1_488_6 = {&direction_inmatedtaf1_488_6_0, &direction_inmatedtaf1_488_6_0, &direction_inmatedtaf1_488_6_0, &direction_inmatedtaf1_488_6_0, NULL, &direction_inmatedtaf1_488_6_8, &direction_inmatedtaf1_488_6_8, &direction_inmatedtaf1_488_6_8, &direction_inmatedtaf1_488_6_8, &direction_inmatedtaf1_488_6_8, &direction_inmatedtaf1_488_6_8, &direction_inmatedtaf1_488_6_8, NULL, &direction_inmatedtaf1_488_6_16, &direction_inmatedtaf1_488_6_16, &direction_inmatedtaf1_488_6_16, &direction_inmatedtaf1_488_6_16, &direction_inmatedtaf1_488_6_16, &direction_inmatedtaf1_488_6_16, &direction_inmatedtaf1_488_6_16, NULL, &direction_inmatedtaf1_488_6_24, &direction_inmatedtaf1_488_6_24, &direction_inmatedtaf1_488_6_24, &direction_inmatedtaf1_488_6_24, &direction_inmatedtaf1_488_6_24, &direction_inmatedtaf1_488_6_24, &direction_inmatedtaf1_488_6_24, NULL, &direction_inmatedtaf1_488_6_0, &direction_inmatedtaf1_488_6_0, &direction_inmatedtaf1_488_6_0};
static Image* images_inmatedtaf1_488_8_0[1];
static Direction direction_inmatedtaf1_488_8_0 = {0, 10, 10, 0, -1, images_inmatedtaf1_488_8_0, 1};
static Image* images_inmatedtaf1_488_8_16[2];
static Direction direction_inmatedtaf1_488_8_16 = {16, 5, 5, 0, -1, images_inmatedtaf1_488_8_16, 2};
static Image* images_inmatedtaf1_488_8_24[1];
static Direction direction_inmatedtaf1_488_8_24 = {24, 10, 10, 0, -1, images_inmatedtaf1_488_8_24, 1};
static Animation anim_inmatedtaf1_488_8 = {&direction_inmatedtaf1_488_8_0, &direction_inmatedtaf1_488_8_0, &direction_inmatedtaf1_488_8_0, &direction_inmatedtaf1_488_8_0, &direction_inmatedtaf1_488_8_0, &direction_inmatedtaf1_488_8_0, &direction_inmatedtaf1_488_8_0, &direction_inmatedtaf1_488_8_0, NULL, &direction_inmatedtaf1_488_8_16, &direction_inmatedtaf1_488_8_16, &direction_inmatedtaf1_488_8_16, &direction_inmatedtaf1_488_8_16, &direction_inmatedtaf1_488_8_16, &direction_inmatedtaf1_488_8_16, &direction_inmatedtaf1_488_8_16, &direction_inmatedtaf1_488_8_16, &direction_inmatedtaf1_488_8_16, &direction_inmatedtaf1_488_8_16, &direction_inmatedtaf1_488_8_16, NULL, &direction_inmatedtaf1_488_8_24, &direction_inmatedtaf1_488_8_24, &direction_inmatedtaf1_488_8_24, &direction_inmatedtaf1_488_8_24, &direction_inmatedtaf1_488_8_24, &direction_inmatedtaf1_488_8_24, &direction_inmatedtaf1_488_8_24, NULL, &direction_inmatedtaf1_488_8_0, &direction_inmatedtaf1_488_8_0, &direction_inmatedtaf1_488_8_0};
static Image* images_inmatedtaf1_488_10_0[5];
static Direction direction_inmatedtaf1_488_10_0 = {0, 10, 10, 0, -1, images_inmatedtaf1_488_10_0, 5};
static Animation anim_inmatedtaf1_488_10 = {&direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, NULL, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0, &direction_inmatedtaf1_488_10_0};
static Image* images_inmatedtaf1_488_11_0[2];
static Direction direction_inmatedtaf1_488_11_0 = {0, 6, 6, 0, -1, images_inmatedtaf1_488_11_0, 2};
static Image* images_inmatedtaf1_488_11_8[2];
static Direction direction_inmatedtaf1_488_11_8 = {8, 6, 6, 0, -1, images_inmatedtaf1_488_11_8, 2};
static Image* images_inmatedtaf1_488_11_16[2];
static Direction direction_inmatedtaf1_488_11_16 = {16, 6, 6, 0, -1, images_inmatedtaf1_488_11_16, 2};
static Image* images_inmatedtaf1_488_11_24[2];
static Direction direction_inmatedtaf1_488_11_24 = {24, 6, 6, 0, -1, images_inmatedtaf1_488_11_24, 2};
static Animation anim_inmatedtaf1_488_11 = {&direction_inmatedtaf1_488_11_0, &direction_inmatedtaf1_488_11_0, &direction_inmatedtaf1_488_11_0, &direction_inmatedtaf1_488_11_0, NULL, &direction_inmatedtaf1_488_11_8, &direction_inmatedtaf1_488_11_8, &direction_inmatedtaf1_488_11_8, &direction_inmatedtaf1_488_11_8, &direction_inmatedtaf1_488_11_8, &direction_inmatedtaf1_488_11_8, &direction_inmatedtaf1_488_11_8, NULL, &direction_inmatedtaf1_488_11_16, &direction_inmatedtaf1_488_11_16, &direction_inmatedtaf1_488_11_16, &direction_inmatedtaf1_488_11_16, &direction_inmatedtaf1_488_11_16, &direction_inmatedtaf1_488_11_16, &direction_inmatedtaf1_488_11_16, NULL, &direction_inmatedtaf1_488_11_24, &direction_inmatedtaf1_488_11_24, &direction_inmatedtaf1_488_11_24, &direction_inmatedtaf1_488_11_24, &direction_inmatedtaf1_488_11_24, &direction_inmatedtaf1_488_11_24, &direction_inmatedtaf1_488_11_24, NULL, &direction_inmatedtaf1_488_11_0, &direction_inmatedtaf1_488_11_0, &direction_inmatedtaf1_488_11_0};
static Image* images_inmatedtaf1_488_18_24[8];
static Direction direction_inmatedtaf1_488_18_24 = {24, 10, 10, 0, -1, images_inmatedtaf1_488_18_24, 8};
static Animation anim_inmatedtaf1_488_18 = {&direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, NULL, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24, &direction_inmatedtaf1_488_18_24};
static Image* images_inmatedtaf1_488_19_24[6];
static Direction direction_inmatedtaf1_488_19_24 = {24, 10, 10, 0, -1, images_inmatedtaf1_488_19_24, 6};
static Animation anim_inmatedtaf1_488_19 = {&direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, NULL, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24, &direction_inmatedtaf1_488_19_24};
static Animation * anim_array_inmatedtaf1_488[20] = {&anim_inmatedtaf1_488_0, NULL, NULL, NULL, &anim_inmatedtaf1_488_4, NULL, &anim_inmatedtaf1_488_6, NULL, &anim_inmatedtaf1_488_8, NULL, &anim_inmatedtaf1_488_10, &anim_inmatedtaf1_488_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmatedtaf1_488_18, &anim_inmatedtaf1_488_19};
static Animations anim_inmatedtaf1_488 = {20, &anim_array_inmatedtaf1_488[0]};
static bool anim_inmatedtaf1_488_initialized;
class InmateDTAF1_488 : public Active
{
public:
    InmateDTAF1_488(int x, int y) : Active(x, y, InmateDTAF1_488_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 1", 13);
#endif
        this->animations = &anim_inmatedtaf1_488;
        if (!anim_inmatedtaf1_488_initialized) {
            anim_inmatedtaf1_488_initialized = true;
            images_inmatedtaf1_488_0_0[0] = get_internal_image(2910);
            images_inmatedtaf1_488_0_0[1] = get_internal_image(2905);
            images_inmatedtaf1_488_0_8[0] = get_internal_image(2917);
            images_inmatedtaf1_488_0_8[1] = get_internal_image(2918);
            images_inmatedtaf1_488_0_16[0] = get_internal_image(2872);
            images_inmatedtaf1_488_0_16[1] = get_internal_image(2912);
            images_inmatedtaf1_488_0_24[0] = get_internal_image(2915);
            images_inmatedtaf1_488_0_24[1] = get_internal_image(2916);
            images_inmatedtaf1_488_4_0[0] = get_internal_image(369);
            images_inmatedtaf1_488_4_0[1] = get_internal_image(373);
            images_inmatedtaf1_488_4_0[2] = get_internal_image(369);
            images_inmatedtaf1_488_4_0[3] = get_internal_image(373);
            images_inmatedtaf1_488_4_16[0] = get_internal_image(371);
            images_inmatedtaf1_488_4_16[1] = get_internal_image(763);
            images_inmatedtaf1_488_4_16[2] = get_internal_image(371);
            images_inmatedtaf1_488_4_16[3] = get_internal_image(763);
            images_inmatedtaf1_488_6_0[0] = get_internal_image(2989);
            images_inmatedtaf1_488_6_8[0] = get_internal_image(2994);
            images_inmatedtaf1_488_6_16[0] = get_internal_image(2987);
            images_inmatedtaf1_488_6_24[0] = get_internal_image(2993);
            images_inmatedtaf1_488_8_0[0] = get_internal_image(2730);
            images_inmatedtaf1_488_8_16[0] = get_internal_image(2878);
            images_inmatedtaf1_488_8_16[1] = get_internal_image(3038);
            images_inmatedtaf1_488_8_24[0] = get_internal_image(3088);
            images_inmatedtaf1_488_10_0[0] = get_internal_image(3240);
            images_inmatedtaf1_488_10_0[1] = get_internal_image(3254);
            images_inmatedtaf1_488_10_0[2] = get_internal_image(3258);
            images_inmatedtaf1_488_10_0[3] = get_internal_image(3258);
            images_inmatedtaf1_488_10_0[4] = get_internal_image(3259);
            images_inmatedtaf1_488_11_0[0] = get_internal_image(3091);
            images_inmatedtaf1_488_11_0[1] = get_internal_image(3090);
            images_inmatedtaf1_488_11_8[0] = get_internal_image(3093);
            images_inmatedtaf1_488_11_8[1] = get_internal_image(3094);
            images_inmatedtaf1_488_11_16[0] = get_internal_image(3087);
            images_inmatedtaf1_488_11_16[1] = get_internal_image(3092);
            images_inmatedtaf1_488_11_24[0] = get_internal_image(3095);
            images_inmatedtaf1_488_11_24[1] = get_internal_image(3096);
            images_inmatedtaf1_488_18_24[0] = get_internal_image(2099);
            images_inmatedtaf1_488_18_24[1] = get_internal_image(2112);
            images_inmatedtaf1_488_18_24[2] = get_internal_image(2107);
            images_inmatedtaf1_488_18_24[3] = get_internal_image(2108);
            images_inmatedtaf1_488_18_24[4] = get_internal_image(2109);
            images_inmatedtaf1_488_18_24[5] = get_internal_image(2114);
            images_inmatedtaf1_488_18_24[6] = get_internal_image(2110);
            images_inmatedtaf1_488_18_24[7] = get_internal_image(2111);
            images_inmatedtaf1_488_19_24[0] = get_internal_image(2150);
            images_inmatedtaf1_488_19_24[1] = get_internal_image(2156);
            images_inmatedtaf1_488_19_24[2] = get_internal_image(2157);
            images_inmatedtaf1_488_19_24[3] = get_internal_image(2157);
            images_inmatedtaf1_488_19_24[4] = get_internal_image(2156);
            images_inmatedtaf1_488_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmatedtaf1_488(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF1_488(x, y);
}
static Image* images_inmatedtaf2_489_0_0[2];
static Direction direction_inmatedtaf2_489_0_0 = {0, 10, 10, 0, -1, images_inmatedtaf2_489_0_0, 2};
static Image* images_inmatedtaf2_489_0_8[2];
static Direction direction_inmatedtaf2_489_0_8 = {8, 10, 10, 0, -1, images_inmatedtaf2_489_0_8, 2};
static Image* images_inmatedtaf2_489_0_16[2];
static Direction direction_inmatedtaf2_489_0_16 = {16, 10, 10, 0, -1, images_inmatedtaf2_489_0_16, 2};
static Image* images_inmatedtaf2_489_0_24[2];
static Direction direction_inmatedtaf2_489_0_24 = {24, 10, 10, 0, -1, images_inmatedtaf2_489_0_24, 2};
static Animation anim_inmatedtaf2_489_0 = {&direction_inmatedtaf2_489_0_0, &direction_inmatedtaf2_489_0_0, &direction_inmatedtaf2_489_0_0, &direction_inmatedtaf2_489_0_0, NULL, &direction_inmatedtaf2_489_0_8, &direction_inmatedtaf2_489_0_8, &direction_inmatedtaf2_489_0_8, &direction_inmatedtaf2_489_0_8, &direction_inmatedtaf2_489_0_8, &direction_inmatedtaf2_489_0_8, &direction_inmatedtaf2_489_0_8, NULL, &direction_inmatedtaf2_489_0_16, &direction_inmatedtaf2_489_0_16, &direction_inmatedtaf2_489_0_16, &direction_inmatedtaf2_489_0_16, &direction_inmatedtaf2_489_0_16, &direction_inmatedtaf2_489_0_16, &direction_inmatedtaf2_489_0_16, NULL, &direction_inmatedtaf2_489_0_24, &direction_inmatedtaf2_489_0_24, &direction_inmatedtaf2_489_0_24, &direction_inmatedtaf2_489_0_24, &direction_inmatedtaf2_489_0_24, &direction_inmatedtaf2_489_0_24, &direction_inmatedtaf2_489_0_24, NULL, &direction_inmatedtaf2_489_0_0, &direction_inmatedtaf2_489_0_0, &direction_inmatedtaf2_489_0_0};
static Image* images_inmatedtaf2_489_4_0[4];
static Direction direction_inmatedtaf2_489_4_0 = {0, 20, 20, 0, 1, images_inmatedtaf2_489_4_0, 4};
static Image* images_inmatedtaf2_489_4_16[4];
static Direction direction_inmatedtaf2_489_4_16 = {16, 20, 20, 0, 1, images_inmatedtaf2_489_4_16, 4};
static Animation anim_inmatedtaf2_489_4 = {&direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, NULL, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, &direction_inmatedtaf2_489_4_16, NULL, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0, &direction_inmatedtaf2_489_4_0};
static Image* images_inmatedtaf2_489_6_0[1];
static Direction direction_inmatedtaf2_489_6_0 = {0, 6, 6, 0, 1, images_inmatedtaf2_489_6_0, 1};
static Image* images_inmatedtaf2_489_6_8[1];
static Direction direction_inmatedtaf2_489_6_8 = {8, 6, 6, 0, 1, images_inmatedtaf2_489_6_8, 1};
static Image* images_inmatedtaf2_489_6_16[1];
static Direction direction_inmatedtaf2_489_6_16 = {16, 6, 6, 0, 1, images_inmatedtaf2_489_6_16, 1};
static Image* images_inmatedtaf2_489_6_24[1];
static Direction direction_inmatedtaf2_489_6_24 = {24, 6, 6, 0, 1, images_inmatedtaf2_489_6_24, 1};
static Animation anim_inmatedtaf2_489_6 = {&direction_inmatedtaf2_489_6_0, &direction_inmatedtaf2_489_6_0, &direction_inmatedtaf2_489_6_0, &direction_inmatedtaf2_489_6_0, NULL, &direction_inmatedtaf2_489_6_8, &direction_inmatedtaf2_489_6_8, &direction_inmatedtaf2_489_6_8, &direction_inmatedtaf2_489_6_8, &direction_inmatedtaf2_489_6_8, &direction_inmatedtaf2_489_6_8, &direction_inmatedtaf2_489_6_8, NULL, &direction_inmatedtaf2_489_6_16, &direction_inmatedtaf2_489_6_16, &direction_inmatedtaf2_489_6_16, &direction_inmatedtaf2_489_6_16, &direction_inmatedtaf2_489_6_16, &direction_inmatedtaf2_489_6_16, &direction_inmatedtaf2_489_6_16, NULL, &direction_inmatedtaf2_489_6_24, &direction_inmatedtaf2_489_6_24, &direction_inmatedtaf2_489_6_24, &direction_inmatedtaf2_489_6_24, &direction_inmatedtaf2_489_6_24, &direction_inmatedtaf2_489_6_24, &direction_inmatedtaf2_489_6_24, NULL, &direction_inmatedtaf2_489_6_0, &direction_inmatedtaf2_489_6_0, &direction_inmatedtaf2_489_6_0};
static Image* images_inmatedtaf2_489_8_0[1];
static Direction direction_inmatedtaf2_489_8_0 = {0, 10, 10, 0, -1, images_inmatedtaf2_489_8_0, 1};
static Image* images_inmatedtaf2_489_8_16[2];
static Direction direction_inmatedtaf2_489_8_16 = {16, 5, 5, 0, -1, images_inmatedtaf2_489_8_16, 2};
static Image* images_inmatedtaf2_489_8_24[1];
static Direction direction_inmatedtaf2_489_8_24 = {24, 10, 10, 0, -1, images_inmatedtaf2_489_8_24, 1};
static Animation anim_inmatedtaf2_489_8 = {&direction_inmatedtaf2_489_8_0, &direction_inmatedtaf2_489_8_0, &direction_inmatedtaf2_489_8_0, &direction_inmatedtaf2_489_8_0, &direction_inmatedtaf2_489_8_0, &direction_inmatedtaf2_489_8_0, &direction_inmatedtaf2_489_8_0, &direction_inmatedtaf2_489_8_0, NULL, &direction_inmatedtaf2_489_8_16, &direction_inmatedtaf2_489_8_16, &direction_inmatedtaf2_489_8_16, &direction_inmatedtaf2_489_8_16, &direction_inmatedtaf2_489_8_16, &direction_inmatedtaf2_489_8_16, &direction_inmatedtaf2_489_8_16, &direction_inmatedtaf2_489_8_16, &direction_inmatedtaf2_489_8_16, &direction_inmatedtaf2_489_8_16, &direction_inmatedtaf2_489_8_16, NULL, &direction_inmatedtaf2_489_8_24, &direction_inmatedtaf2_489_8_24, &direction_inmatedtaf2_489_8_24, &direction_inmatedtaf2_489_8_24, &direction_inmatedtaf2_489_8_24, &direction_inmatedtaf2_489_8_24, &direction_inmatedtaf2_489_8_24, NULL, &direction_inmatedtaf2_489_8_0, &direction_inmatedtaf2_489_8_0, &direction_inmatedtaf2_489_8_0};
static Image* images_inmatedtaf2_489_10_0[5];
static Direction direction_inmatedtaf2_489_10_0 = {0, 10, 10, 0, -1, images_inmatedtaf2_489_10_0, 5};
static Animation anim_inmatedtaf2_489_10 = {&direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, NULL, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0, &direction_inmatedtaf2_489_10_0};
static Image* images_inmatedtaf2_489_11_0[2];
static Direction direction_inmatedtaf2_489_11_0 = {0, 6, 6, 0, -1, images_inmatedtaf2_489_11_0, 2};
static Image* images_inmatedtaf2_489_11_8[2];
static Direction direction_inmatedtaf2_489_11_8 = {8, 6, 6, 0, -1, images_inmatedtaf2_489_11_8, 2};
static Image* images_inmatedtaf2_489_11_16[2];
static Direction direction_inmatedtaf2_489_11_16 = {16, 6, 6, 0, -1, images_inmatedtaf2_489_11_16, 2};
static Image* images_inmatedtaf2_489_11_24[2];
static Direction direction_inmatedtaf2_489_11_24 = {24, 6, 6, 0, -1, images_inmatedtaf2_489_11_24, 2};
static Animation anim_inmatedtaf2_489_11 = {&direction_inmatedtaf2_489_11_0, &direction_inmatedtaf2_489_11_0, &direction_inmatedtaf2_489_11_0, &direction_inmatedtaf2_489_11_0, NULL, &direction_inmatedtaf2_489_11_8, &direction_inmatedtaf2_489_11_8, &direction_inmatedtaf2_489_11_8, &direction_inmatedtaf2_489_11_8, &direction_inmatedtaf2_489_11_8, &direction_inmatedtaf2_489_11_8, &direction_inmatedtaf2_489_11_8, NULL, &direction_inmatedtaf2_489_11_16, &direction_inmatedtaf2_489_11_16, &direction_inmatedtaf2_489_11_16, &direction_inmatedtaf2_489_11_16, &direction_inmatedtaf2_489_11_16, &direction_inmatedtaf2_489_11_16, &direction_inmatedtaf2_489_11_16, NULL, &direction_inmatedtaf2_489_11_24, &direction_inmatedtaf2_489_11_24, &direction_inmatedtaf2_489_11_24, &direction_inmatedtaf2_489_11_24, &direction_inmatedtaf2_489_11_24, &direction_inmatedtaf2_489_11_24, &direction_inmatedtaf2_489_11_24, NULL, &direction_inmatedtaf2_489_11_0, &direction_inmatedtaf2_489_11_0, &direction_inmatedtaf2_489_11_0};
static Image* images_inmatedtaf2_489_18_24[8];
static Direction direction_inmatedtaf2_489_18_24 = {24, 10, 10, 0, -1, images_inmatedtaf2_489_18_24, 8};
static Animation anim_inmatedtaf2_489_18 = {&direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, NULL, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24, &direction_inmatedtaf2_489_18_24};
static Image* images_inmatedtaf2_489_19_24[6];
static Direction direction_inmatedtaf2_489_19_24 = {24, 10, 10, 0, -1, images_inmatedtaf2_489_19_24, 6};
static Animation anim_inmatedtaf2_489_19 = {&direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, NULL, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24, &direction_inmatedtaf2_489_19_24};
static Animation * anim_array_inmatedtaf2_489[20] = {&anim_inmatedtaf2_489_0, NULL, NULL, NULL, &anim_inmatedtaf2_489_4, NULL, &anim_inmatedtaf2_489_6, NULL, &anim_inmatedtaf2_489_8, NULL, &anim_inmatedtaf2_489_10, &anim_inmatedtaf2_489_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmatedtaf2_489_18, &anim_inmatedtaf2_489_19};
static Animations anim_inmatedtaf2_489 = {20, &anim_array_inmatedtaf2_489[0]};
static bool anim_inmatedtaf2_489_initialized;
class InmateDTAF2_489 : public Active
{
public:
    InmateDTAF2_489(int x, int y) : Active(x, y, InmateDTAF2_489_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 2", 13);
#endif
        this->animations = &anim_inmatedtaf2_489;
        if (!anim_inmatedtaf2_489_initialized) {
            anim_inmatedtaf2_489_initialized = true;
            images_inmatedtaf2_489_0_0[0] = get_internal_image(2919);
            images_inmatedtaf2_489_0_0[1] = get_internal_image(2920);
            images_inmatedtaf2_489_0_8[0] = get_internal_image(2923);
            images_inmatedtaf2_489_0_8[1] = get_internal_image(2924);
            images_inmatedtaf2_489_0_16[0] = get_internal_image(2921);
            images_inmatedtaf2_489_0_16[1] = get_internal_image(2922);
            images_inmatedtaf2_489_0_24[0] = get_internal_image(2925);
            images_inmatedtaf2_489_0_24[1] = get_internal_image(2926);
            images_inmatedtaf2_489_4_0[0] = get_internal_image(369);
            images_inmatedtaf2_489_4_0[1] = get_internal_image(373);
            images_inmatedtaf2_489_4_0[2] = get_internal_image(369);
            images_inmatedtaf2_489_4_0[3] = get_internal_image(373);
            images_inmatedtaf2_489_4_16[0] = get_internal_image(371);
            images_inmatedtaf2_489_4_16[1] = get_internal_image(763);
            images_inmatedtaf2_489_4_16[2] = get_internal_image(371);
            images_inmatedtaf2_489_4_16[3] = get_internal_image(763);
            images_inmatedtaf2_489_6_0[0] = get_internal_image(2990);
            images_inmatedtaf2_489_6_8[0] = get_internal_image(2729);
            images_inmatedtaf2_489_6_16[0] = get_internal_image(2984);
            images_inmatedtaf2_489_6_24[0] = get_internal_image(2992);
            images_inmatedtaf2_489_8_0[0] = get_internal_image(2730);
            images_inmatedtaf2_489_8_16[0] = get_internal_image(3039);
            images_inmatedtaf2_489_8_16[1] = get_internal_image(3175);
            images_inmatedtaf2_489_8_24[0] = get_internal_image(3080);
            images_inmatedtaf2_489_10_0[0] = get_internal_image(3319);
            images_inmatedtaf2_489_10_0[1] = get_internal_image(3320);
            images_inmatedtaf2_489_10_0[2] = get_internal_image(3321);
            images_inmatedtaf2_489_10_0[3] = get_internal_image(3320);
            images_inmatedtaf2_489_10_0[4] = get_internal_image(3319);
            images_inmatedtaf2_489_11_0[0] = get_internal_image(3081);
            images_inmatedtaf2_489_11_0[1] = get_internal_image(3079);
            images_inmatedtaf2_489_11_8[0] = get_internal_image(3083);
            images_inmatedtaf2_489_11_8[1] = get_internal_image(3084);
            images_inmatedtaf2_489_11_16[0] = get_internal_image(3078);
            images_inmatedtaf2_489_11_16[1] = get_internal_image(3082);
            images_inmatedtaf2_489_11_24[0] = get_internal_image(3085);
            images_inmatedtaf2_489_11_24[1] = get_internal_image(3086);
            images_inmatedtaf2_489_18_24[0] = get_internal_image(2099);
            images_inmatedtaf2_489_18_24[1] = get_internal_image(2112);
            images_inmatedtaf2_489_18_24[2] = get_internal_image(2107);
            images_inmatedtaf2_489_18_24[3] = get_internal_image(2108);
            images_inmatedtaf2_489_18_24[4] = get_internal_image(2109);
            images_inmatedtaf2_489_18_24[5] = get_internal_image(2114);
            images_inmatedtaf2_489_18_24[6] = get_internal_image(2110);
            images_inmatedtaf2_489_18_24[7] = get_internal_image(2111);
            images_inmatedtaf2_489_19_24[0] = get_internal_image(2150);
            images_inmatedtaf2_489_19_24[1] = get_internal_image(2156);
            images_inmatedtaf2_489_19_24[2] = get_internal_image(2157);
            images_inmatedtaf2_489_19_24[3] = get_internal_image(2157);
            images_inmatedtaf2_489_19_24[4] = get_internal_image(2156);
            images_inmatedtaf2_489_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmatedtaf2_489(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF2_489(x, y);
}
static Image* images_inmatedtaf3_490_0_0[2];
static Direction direction_inmatedtaf3_490_0_0 = {0, 10, 10, 0, -1, images_inmatedtaf3_490_0_0, 2};
static Image* images_inmatedtaf3_490_0_8[2];
static Direction direction_inmatedtaf3_490_0_8 = {8, 10, 10, 0, -1, images_inmatedtaf3_490_0_8, 2};
static Image* images_inmatedtaf3_490_0_16[2];
static Direction direction_inmatedtaf3_490_0_16 = {16, 10, 10, 0, -1, images_inmatedtaf3_490_0_16, 2};
static Image* images_inmatedtaf3_490_0_24[2];
static Direction direction_inmatedtaf3_490_0_24 = {24, 10, 10, 0, -1, images_inmatedtaf3_490_0_24, 2};
static Animation anim_inmatedtaf3_490_0 = {&direction_inmatedtaf3_490_0_0, &direction_inmatedtaf3_490_0_0, &direction_inmatedtaf3_490_0_0, &direction_inmatedtaf3_490_0_0, NULL, &direction_inmatedtaf3_490_0_8, &direction_inmatedtaf3_490_0_8, &direction_inmatedtaf3_490_0_8, &direction_inmatedtaf3_490_0_8, &direction_inmatedtaf3_490_0_8, &direction_inmatedtaf3_490_0_8, &direction_inmatedtaf3_490_0_8, NULL, &direction_inmatedtaf3_490_0_16, &direction_inmatedtaf3_490_0_16, &direction_inmatedtaf3_490_0_16, &direction_inmatedtaf3_490_0_16, &direction_inmatedtaf3_490_0_16, &direction_inmatedtaf3_490_0_16, &direction_inmatedtaf3_490_0_16, NULL, &direction_inmatedtaf3_490_0_24, &direction_inmatedtaf3_490_0_24, &direction_inmatedtaf3_490_0_24, &direction_inmatedtaf3_490_0_24, &direction_inmatedtaf3_490_0_24, &direction_inmatedtaf3_490_0_24, &direction_inmatedtaf3_490_0_24, NULL, &direction_inmatedtaf3_490_0_0, &direction_inmatedtaf3_490_0_0, &direction_inmatedtaf3_490_0_0};
static Image* images_inmatedtaf3_490_4_0[4];
static Direction direction_inmatedtaf3_490_4_0 = {0, 20, 20, 0, 1, images_inmatedtaf3_490_4_0, 4};
static Image* images_inmatedtaf3_490_4_16[4];
static Direction direction_inmatedtaf3_490_4_16 = {16, 20, 20, 0, 1, images_inmatedtaf3_490_4_16, 4};
static Animation anim_inmatedtaf3_490_4 = {&direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, NULL, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, &direction_inmatedtaf3_490_4_16, NULL, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0, &direction_inmatedtaf3_490_4_0};
static Image* images_inmatedtaf3_490_6_0[1];
static Direction direction_inmatedtaf3_490_6_0 = {0, 6, 6, 0, 1, images_inmatedtaf3_490_6_0, 1};
static Image* images_inmatedtaf3_490_6_8[1];
static Direction direction_inmatedtaf3_490_6_8 = {8, 6, 6, 0, 1, images_inmatedtaf3_490_6_8, 1};
static Image* images_inmatedtaf3_490_6_16[1];
static Direction direction_inmatedtaf3_490_6_16 = {16, 6, 6, 0, 1, images_inmatedtaf3_490_6_16, 1};
static Image* images_inmatedtaf3_490_6_24[1];
static Direction direction_inmatedtaf3_490_6_24 = {24, 6, 6, 0, 1, images_inmatedtaf3_490_6_24, 1};
static Animation anim_inmatedtaf3_490_6 = {&direction_inmatedtaf3_490_6_0, &direction_inmatedtaf3_490_6_0, &direction_inmatedtaf3_490_6_0, &direction_inmatedtaf3_490_6_0, NULL, &direction_inmatedtaf3_490_6_8, &direction_inmatedtaf3_490_6_8, &direction_inmatedtaf3_490_6_8, &direction_inmatedtaf3_490_6_8, &direction_inmatedtaf3_490_6_8, &direction_inmatedtaf3_490_6_8, &direction_inmatedtaf3_490_6_8, NULL, &direction_inmatedtaf3_490_6_16, &direction_inmatedtaf3_490_6_16, &direction_inmatedtaf3_490_6_16, &direction_inmatedtaf3_490_6_16, &direction_inmatedtaf3_490_6_16, &direction_inmatedtaf3_490_6_16, &direction_inmatedtaf3_490_6_16, NULL, &direction_inmatedtaf3_490_6_24, &direction_inmatedtaf3_490_6_24, &direction_inmatedtaf3_490_6_24, &direction_inmatedtaf3_490_6_24, &direction_inmatedtaf3_490_6_24, &direction_inmatedtaf3_490_6_24, &direction_inmatedtaf3_490_6_24, NULL, &direction_inmatedtaf3_490_6_0, &direction_inmatedtaf3_490_6_0, &direction_inmatedtaf3_490_6_0};
static Image* images_inmatedtaf3_490_8_0[1];
static Direction direction_inmatedtaf3_490_8_0 = {0, 10, 10, 0, -1, images_inmatedtaf3_490_8_0, 1};
static Image* images_inmatedtaf3_490_8_16[2];
static Direction direction_inmatedtaf3_490_8_16 = {16, 5, 5, 0, -1, images_inmatedtaf3_490_8_16, 2};
static Image* images_inmatedtaf3_490_8_24[1];
static Direction direction_inmatedtaf3_490_8_24 = {24, 10, 10, 0, -1, images_inmatedtaf3_490_8_24, 1};
static Animation anim_inmatedtaf3_490_8 = {&direction_inmatedtaf3_490_8_0, &direction_inmatedtaf3_490_8_0, &direction_inmatedtaf3_490_8_0, &direction_inmatedtaf3_490_8_0, &direction_inmatedtaf3_490_8_0, &direction_inmatedtaf3_490_8_0, &direction_inmatedtaf3_490_8_0, &direction_inmatedtaf3_490_8_0, NULL, &direction_inmatedtaf3_490_8_16, &direction_inmatedtaf3_490_8_16, &direction_inmatedtaf3_490_8_16, &direction_inmatedtaf3_490_8_16, &direction_inmatedtaf3_490_8_16, &direction_inmatedtaf3_490_8_16, &direction_inmatedtaf3_490_8_16, &direction_inmatedtaf3_490_8_16, &direction_inmatedtaf3_490_8_16, &direction_inmatedtaf3_490_8_16, &direction_inmatedtaf3_490_8_16, NULL, &direction_inmatedtaf3_490_8_24, &direction_inmatedtaf3_490_8_24, &direction_inmatedtaf3_490_8_24, &direction_inmatedtaf3_490_8_24, &direction_inmatedtaf3_490_8_24, &direction_inmatedtaf3_490_8_24, &direction_inmatedtaf3_490_8_24, NULL, &direction_inmatedtaf3_490_8_0, &direction_inmatedtaf3_490_8_0, &direction_inmatedtaf3_490_8_0};
static Image* images_inmatedtaf3_490_10_0[5];
static Direction direction_inmatedtaf3_490_10_0 = {0, 10, 10, 0, -1, images_inmatedtaf3_490_10_0, 5};
static Animation anim_inmatedtaf3_490_10 = {&direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, NULL, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0, &direction_inmatedtaf3_490_10_0};
static Image* images_inmatedtaf3_490_11_0[2];
static Direction direction_inmatedtaf3_490_11_0 = {0, 6, 6, 0, -1, images_inmatedtaf3_490_11_0, 2};
static Image* images_inmatedtaf3_490_11_8[2];
static Direction direction_inmatedtaf3_490_11_8 = {8, 6, 6, 0, -1, images_inmatedtaf3_490_11_8, 2};
static Image* images_inmatedtaf3_490_11_16[2];
static Direction direction_inmatedtaf3_490_11_16 = {16, 6, 6, 0, -1, images_inmatedtaf3_490_11_16, 2};
static Image* images_inmatedtaf3_490_11_24[2];
static Direction direction_inmatedtaf3_490_11_24 = {24, 6, 6, 0, -1, images_inmatedtaf3_490_11_24, 2};
static Animation anim_inmatedtaf3_490_11 = {&direction_inmatedtaf3_490_11_0, &direction_inmatedtaf3_490_11_0, &direction_inmatedtaf3_490_11_0, &direction_inmatedtaf3_490_11_0, NULL, &direction_inmatedtaf3_490_11_8, &direction_inmatedtaf3_490_11_8, &direction_inmatedtaf3_490_11_8, &direction_inmatedtaf3_490_11_8, &direction_inmatedtaf3_490_11_8, &direction_inmatedtaf3_490_11_8, &direction_inmatedtaf3_490_11_8, NULL, &direction_inmatedtaf3_490_11_16, &direction_inmatedtaf3_490_11_16, &direction_inmatedtaf3_490_11_16, &direction_inmatedtaf3_490_11_16, &direction_inmatedtaf3_490_11_16, &direction_inmatedtaf3_490_11_16, &direction_inmatedtaf3_490_11_16, NULL, &direction_inmatedtaf3_490_11_24, &direction_inmatedtaf3_490_11_24, &direction_inmatedtaf3_490_11_24, &direction_inmatedtaf3_490_11_24, &direction_inmatedtaf3_490_11_24, &direction_inmatedtaf3_490_11_24, &direction_inmatedtaf3_490_11_24, NULL, &direction_inmatedtaf3_490_11_0, &direction_inmatedtaf3_490_11_0, &direction_inmatedtaf3_490_11_0};
static Image* images_inmatedtaf3_490_18_24[8];
static Direction direction_inmatedtaf3_490_18_24 = {24, 10, 10, 0, -1, images_inmatedtaf3_490_18_24, 8};
static Animation anim_inmatedtaf3_490_18 = {&direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, NULL, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24, &direction_inmatedtaf3_490_18_24};
static Image* images_inmatedtaf3_490_19_24[6];
static Direction direction_inmatedtaf3_490_19_24 = {24, 10, 10, 0, -1, images_inmatedtaf3_490_19_24, 6};
static Animation anim_inmatedtaf3_490_19 = {&direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, NULL, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24, &direction_inmatedtaf3_490_19_24};
static Animation * anim_array_inmatedtaf3_490[20] = {&anim_inmatedtaf3_490_0, NULL, NULL, NULL, &anim_inmatedtaf3_490_4, NULL, &anim_inmatedtaf3_490_6, NULL, &anim_inmatedtaf3_490_8, NULL, &anim_inmatedtaf3_490_10, &anim_inmatedtaf3_490_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmatedtaf3_490_18, &anim_inmatedtaf3_490_19};
static Animations anim_inmatedtaf3_490 = {20, &anim_array_inmatedtaf3_490[0]};
static bool anim_inmatedtaf3_490_initialized;
class InmateDTAF3_490 : public Active
{
public:
    InmateDTAF3_490(int x, int y) : Active(x, y, InmateDTAF3_490_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 3", 13);
#endif
        this->animations = &anim_inmatedtaf3_490;
        if (!anim_inmatedtaf3_490_initialized) {
            anim_inmatedtaf3_490_initialized = true;
            images_inmatedtaf3_490_0_0[0] = get_internal_image(2930);
            images_inmatedtaf3_490_0_0[1] = get_internal_image(2931);
            images_inmatedtaf3_490_0_8[0] = get_internal_image(2934);
            images_inmatedtaf3_490_0_8[1] = get_internal_image(2935);
            images_inmatedtaf3_490_0_16[0] = get_internal_image(2932);
            images_inmatedtaf3_490_0_16[1] = get_internal_image(2933);
            images_inmatedtaf3_490_0_24[0] = get_internal_image(2927);
            images_inmatedtaf3_490_0_24[1] = get_internal_image(2929);
            images_inmatedtaf3_490_4_0[0] = get_internal_image(369);
            images_inmatedtaf3_490_4_0[1] = get_internal_image(373);
            images_inmatedtaf3_490_4_0[2] = get_internal_image(369);
            images_inmatedtaf3_490_4_0[3] = get_internal_image(373);
            images_inmatedtaf3_490_4_16[0] = get_internal_image(371);
            images_inmatedtaf3_490_4_16[1] = get_internal_image(763);
            images_inmatedtaf3_490_4_16[2] = get_internal_image(371);
            images_inmatedtaf3_490_4_16[3] = get_internal_image(763);
            images_inmatedtaf3_490_6_0[0] = get_internal_image(3007);
            images_inmatedtaf3_490_6_8[0] = get_internal_image(3006);
            images_inmatedtaf3_490_6_16[0] = get_internal_image(3005);
            images_inmatedtaf3_490_6_24[0] = get_internal_image(3004);
            images_inmatedtaf3_490_8_0[0] = get_internal_image(2730);
            images_inmatedtaf3_490_8_16[0] = get_internal_image(3253);
            images_inmatedtaf3_490_8_16[1] = get_internal_image(3268);
            images_inmatedtaf3_490_8_24[0] = get_internal_image(3071);
            images_inmatedtaf3_490_10_0[0] = get_internal_image(595);
            images_inmatedtaf3_490_10_0[1] = get_internal_image(2845);
            images_inmatedtaf3_490_10_0[2] = get_internal_image(3260);
            images_inmatedtaf3_490_10_0[3] = get_internal_image(3260);
            images_inmatedtaf3_490_10_0[4] = get_internal_image(2845);
            images_inmatedtaf3_490_11_0[0] = get_internal_image(3072);
            images_inmatedtaf3_490_11_0[1] = get_internal_image(3070);
            images_inmatedtaf3_490_11_8[0] = get_internal_image(3076);
            images_inmatedtaf3_490_11_8[1] = get_internal_image(3077);
            images_inmatedtaf3_490_11_16[0] = get_internal_image(3069);
            images_inmatedtaf3_490_11_16[1] = get_internal_image(3073);
            images_inmatedtaf3_490_11_24[0] = get_internal_image(3074);
            images_inmatedtaf3_490_11_24[1] = get_internal_image(3075);
            images_inmatedtaf3_490_18_24[0] = get_internal_image(2099);
            images_inmatedtaf3_490_18_24[1] = get_internal_image(2112);
            images_inmatedtaf3_490_18_24[2] = get_internal_image(2107);
            images_inmatedtaf3_490_18_24[3] = get_internal_image(2108);
            images_inmatedtaf3_490_18_24[4] = get_internal_image(2109);
            images_inmatedtaf3_490_18_24[5] = get_internal_image(2114);
            images_inmatedtaf3_490_18_24[6] = get_internal_image(2110);
            images_inmatedtaf3_490_18_24[7] = get_internal_image(2111);
            images_inmatedtaf3_490_19_24[0] = get_internal_image(2150);
            images_inmatedtaf3_490_19_24[1] = get_internal_image(2156);
            images_inmatedtaf3_490_19_24[2] = get_internal_image(2157);
            images_inmatedtaf3_490_19_24[3] = get_internal_image(2157);
            images_inmatedtaf3_490_19_24[4] = get_internal_image(2156);
            images_inmatedtaf3_490_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmatedtaf3_490(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF3_490(x, y);
}
static Image* images_inmatedtaf4_491_0_0[2];
static Direction direction_inmatedtaf4_491_0_0 = {0, 10, 10, 0, -1, images_inmatedtaf4_491_0_0, 2};
static Image* images_inmatedtaf4_491_0_8[2];
static Direction direction_inmatedtaf4_491_0_8 = {8, 10, 10, 0, -1, images_inmatedtaf4_491_0_8, 2};
static Image* images_inmatedtaf4_491_0_16[2];
static Direction direction_inmatedtaf4_491_0_16 = {16, 10, 10, 0, -1, images_inmatedtaf4_491_0_16, 2};
static Image* images_inmatedtaf4_491_0_24[2];
static Direction direction_inmatedtaf4_491_0_24 = {24, 10, 10, 0, -1, images_inmatedtaf4_491_0_24, 2};
static Animation anim_inmatedtaf4_491_0 = {&direction_inmatedtaf4_491_0_0, &direction_inmatedtaf4_491_0_0, &direction_inmatedtaf4_491_0_0, &direction_inmatedtaf4_491_0_0, NULL, &direction_inmatedtaf4_491_0_8, &direction_inmatedtaf4_491_0_8, &direction_inmatedtaf4_491_0_8, &direction_inmatedtaf4_491_0_8, &direction_inmatedtaf4_491_0_8, &direction_inmatedtaf4_491_0_8, &direction_inmatedtaf4_491_0_8, NULL, &direction_inmatedtaf4_491_0_16, &direction_inmatedtaf4_491_0_16, &direction_inmatedtaf4_491_0_16, &direction_inmatedtaf4_491_0_16, &direction_inmatedtaf4_491_0_16, &direction_inmatedtaf4_491_0_16, &direction_inmatedtaf4_491_0_16, NULL, &direction_inmatedtaf4_491_0_24, &direction_inmatedtaf4_491_0_24, &direction_inmatedtaf4_491_0_24, &direction_inmatedtaf4_491_0_24, &direction_inmatedtaf4_491_0_24, &direction_inmatedtaf4_491_0_24, &direction_inmatedtaf4_491_0_24, NULL, &direction_inmatedtaf4_491_0_0, &direction_inmatedtaf4_491_0_0, &direction_inmatedtaf4_491_0_0};
static Image* images_inmatedtaf4_491_4_0[4];
static Direction direction_inmatedtaf4_491_4_0 = {0, 20, 20, 0, 1, images_inmatedtaf4_491_4_0, 4};
static Image* images_inmatedtaf4_491_4_16[4];
static Direction direction_inmatedtaf4_491_4_16 = {16, 20, 20, 0, 1, images_inmatedtaf4_491_4_16, 4};
static Animation anim_inmatedtaf4_491_4 = {&direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, NULL, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, &direction_inmatedtaf4_491_4_16, NULL, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0, &direction_inmatedtaf4_491_4_0};
static Image* images_inmatedtaf4_491_6_0[1];
static Direction direction_inmatedtaf4_491_6_0 = {0, 6, 6, 0, 1, images_inmatedtaf4_491_6_0, 1};
static Image* images_inmatedtaf4_491_6_8[1];
static Direction direction_inmatedtaf4_491_6_8 = {8, 6, 6, 0, 1, images_inmatedtaf4_491_6_8, 1};
static Image* images_inmatedtaf4_491_6_16[1];
static Direction direction_inmatedtaf4_491_6_16 = {16, 6, 6, 0, 1, images_inmatedtaf4_491_6_16, 1};
static Image* images_inmatedtaf4_491_6_24[1];
static Direction direction_inmatedtaf4_491_6_24 = {24, 6, 6, 0, 1, images_inmatedtaf4_491_6_24, 1};
static Animation anim_inmatedtaf4_491_6 = {&direction_inmatedtaf4_491_6_0, &direction_inmatedtaf4_491_6_0, &direction_inmatedtaf4_491_6_0, &direction_inmatedtaf4_491_6_0, NULL, &direction_inmatedtaf4_491_6_8, &direction_inmatedtaf4_491_6_8, &direction_inmatedtaf4_491_6_8, &direction_inmatedtaf4_491_6_8, &direction_inmatedtaf4_491_6_8, &direction_inmatedtaf4_491_6_8, &direction_inmatedtaf4_491_6_8, NULL, &direction_inmatedtaf4_491_6_16, &direction_inmatedtaf4_491_6_16, &direction_inmatedtaf4_491_6_16, &direction_inmatedtaf4_491_6_16, &direction_inmatedtaf4_491_6_16, &direction_inmatedtaf4_491_6_16, &direction_inmatedtaf4_491_6_16, NULL, &direction_inmatedtaf4_491_6_24, &direction_inmatedtaf4_491_6_24, &direction_inmatedtaf4_491_6_24, &direction_inmatedtaf4_491_6_24, &direction_inmatedtaf4_491_6_24, &direction_inmatedtaf4_491_6_24, &direction_inmatedtaf4_491_6_24, NULL, &direction_inmatedtaf4_491_6_0, &direction_inmatedtaf4_491_6_0, &direction_inmatedtaf4_491_6_0};
static Image* images_inmatedtaf4_491_8_0[1];
static Direction direction_inmatedtaf4_491_8_0 = {0, 10, 10, 0, -1, images_inmatedtaf4_491_8_0, 1};
static Image* images_inmatedtaf4_491_8_16[2];
static Direction direction_inmatedtaf4_491_8_16 = {16, 5, 5, 0, -1, images_inmatedtaf4_491_8_16, 2};
static Image* images_inmatedtaf4_491_8_24[1];
static Direction direction_inmatedtaf4_491_8_24 = {24, 50, 50, 0, -1, images_inmatedtaf4_491_8_24, 1};
static Animation anim_inmatedtaf4_491_8 = {&direction_inmatedtaf4_491_8_0, &direction_inmatedtaf4_491_8_0, &direction_inmatedtaf4_491_8_0, &direction_inmatedtaf4_491_8_0, &direction_inmatedtaf4_491_8_0, &direction_inmatedtaf4_491_8_0, &direction_inmatedtaf4_491_8_0, &direction_inmatedtaf4_491_8_0, NULL, &direction_inmatedtaf4_491_8_16, &direction_inmatedtaf4_491_8_16, &direction_inmatedtaf4_491_8_16, &direction_inmatedtaf4_491_8_16, &direction_inmatedtaf4_491_8_16, &direction_inmatedtaf4_491_8_16, &direction_inmatedtaf4_491_8_16, &direction_inmatedtaf4_491_8_16, &direction_inmatedtaf4_491_8_16, &direction_inmatedtaf4_491_8_16, &direction_inmatedtaf4_491_8_16, NULL, &direction_inmatedtaf4_491_8_24, &direction_inmatedtaf4_491_8_24, &direction_inmatedtaf4_491_8_24, &direction_inmatedtaf4_491_8_24, &direction_inmatedtaf4_491_8_24, &direction_inmatedtaf4_491_8_24, &direction_inmatedtaf4_491_8_24, NULL, &direction_inmatedtaf4_491_8_0, &direction_inmatedtaf4_491_8_0, &direction_inmatedtaf4_491_8_0};
static Image* images_inmatedtaf4_491_10_0[5];
static Direction direction_inmatedtaf4_491_10_0 = {0, 10, 10, 0, -1, images_inmatedtaf4_491_10_0, 5};
static Animation anim_inmatedtaf4_491_10 = {&direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, NULL, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0, &direction_inmatedtaf4_491_10_0};
static Image* images_inmatedtaf4_491_11_0[2];
static Direction direction_inmatedtaf4_491_11_0 = {0, 6, 6, 0, -1, images_inmatedtaf4_491_11_0, 2};
static Image* images_inmatedtaf4_491_11_8[2];
static Direction direction_inmatedtaf4_491_11_8 = {8, 6, 6, 0, -1, images_inmatedtaf4_491_11_8, 2};
static Image* images_inmatedtaf4_491_11_16[2];
static Direction direction_inmatedtaf4_491_11_16 = {16, 6, 6, 0, -1, images_inmatedtaf4_491_11_16, 2};
static Image* images_inmatedtaf4_491_11_24[2];
static Direction direction_inmatedtaf4_491_11_24 = {24, 6, 6, 0, -1, images_inmatedtaf4_491_11_24, 2};
static Animation anim_inmatedtaf4_491_11 = {&direction_inmatedtaf4_491_11_0, &direction_inmatedtaf4_491_11_0, &direction_inmatedtaf4_491_11_0, &direction_inmatedtaf4_491_11_0, NULL, &direction_inmatedtaf4_491_11_8, &direction_inmatedtaf4_491_11_8, &direction_inmatedtaf4_491_11_8, &direction_inmatedtaf4_491_11_8, &direction_inmatedtaf4_491_11_8, &direction_inmatedtaf4_491_11_8, &direction_inmatedtaf4_491_11_8, NULL, &direction_inmatedtaf4_491_11_16, &direction_inmatedtaf4_491_11_16, &direction_inmatedtaf4_491_11_16, &direction_inmatedtaf4_491_11_16, &direction_inmatedtaf4_491_11_16, &direction_inmatedtaf4_491_11_16, &direction_inmatedtaf4_491_11_16, NULL, &direction_inmatedtaf4_491_11_24, &direction_inmatedtaf4_491_11_24, &direction_inmatedtaf4_491_11_24, &direction_inmatedtaf4_491_11_24, &direction_inmatedtaf4_491_11_24, &direction_inmatedtaf4_491_11_24, &direction_inmatedtaf4_491_11_24, NULL, &direction_inmatedtaf4_491_11_0, &direction_inmatedtaf4_491_11_0, &direction_inmatedtaf4_491_11_0};
static Animation * anim_array_inmatedtaf4_491[12] = {&anim_inmatedtaf4_491_0, NULL, NULL, NULL, &anim_inmatedtaf4_491_4, NULL, &anim_inmatedtaf4_491_6, NULL, &anim_inmatedtaf4_491_8, NULL, &anim_inmatedtaf4_491_10, &anim_inmatedtaf4_491_11};
static Animations anim_inmatedtaf4_491 = {12, &anim_array_inmatedtaf4_491[0]};
static bool anim_inmatedtaf4_491_initialized;
class InmateDTAF4_491 : public Active
{
public:
    InmateDTAF4_491(int x, int y) : Active(x, y, InmateDTAF4_491_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 4", 13);
#endif
        this->animations = &anim_inmatedtaf4_491;
        if (!anim_inmatedtaf4_491_initialized) {
            anim_inmatedtaf4_491_initialized = true;
            images_inmatedtaf4_491_0_0[0] = get_internal_image(2976);
            images_inmatedtaf4_491_0_0[1] = get_internal_image(2977);
            images_inmatedtaf4_491_0_8[0] = get_internal_image(2982);
            images_inmatedtaf4_491_0_8[1] = get_internal_image(2983);
            images_inmatedtaf4_491_0_16[0] = get_internal_image(2978);
            images_inmatedtaf4_491_0_16[1] = get_internal_image(2979);
            images_inmatedtaf4_491_0_24[0] = get_internal_image(2980);
            images_inmatedtaf4_491_0_24[1] = get_internal_image(2981);
            images_inmatedtaf4_491_4_0[0] = get_internal_image(369);
            images_inmatedtaf4_491_4_0[1] = get_internal_image(373);
            images_inmatedtaf4_491_4_0[2] = get_internal_image(369);
            images_inmatedtaf4_491_4_0[3] = get_internal_image(373);
            images_inmatedtaf4_491_4_16[0] = get_internal_image(371);
            images_inmatedtaf4_491_4_16[1] = get_internal_image(763);
            images_inmatedtaf4_491_4_16[2] = get_internal_image(371);
            images_inmatedtaf4_491_4_16[3] = get_internal_image(763);
            images_inmatedtaf4_491_6_0[0] = get_internal_image(3002);
            images_inmatedtaf4_491_6_8[0] = get_internal_image(3001);
            images_inmatedtaf4_491_6_16[0] = get_internal_image(2997);
            images_inmatedtaf4_491_6_24[0] = get_internal_image(3000);
            images_inmatedtaf4_491_8_0[0] = get_internal_image(2730);
            images_inmatedtaf4_491_8_16[0] = get_internal_image(3272);
            images_inmatedtaf4_491_8_16[1] = get_internal_image(3273);
            images_inmatedtaf4_491_8_24[0] = get_internal_image(3068);
            images_inmatedtaf4_491_10_0[0] = get_internal_image(595);
            images_inmatedtaf4_491_10_0[1] = get_internal_image(2845);
            images_inmatedtaf4_491_10_0[2] = get_internal_image(3260);
            images_inmatedtaf4_491_10_0[3] = get_internal_image(3260);
            images_inmatedtaf4_491_10_0[4] = get_internal_image(2845);
            images_inmatedtaf4_491_11_0[0] = get_internal_image(3062);
            images_inmatedtaf4_491_11_0[1] = get_internal_image(3060);
            images_inmatedtaf4_491_11_8[0] = get_internal_image(3066);
            images_inmatedtaf4_491_11_8[1] = get_internal_image(3067);
            images_inmatedtaf4_491_11_16[0] = get_internal_image(3059);
            images_inmatedtaf4_491_11_16[1] = get_internal_image(3063);
            images_inmatedtaf4_491_11_24[0] = get_internal_image(3064);
            images_inmatedtaf4_491_11_24[1] = get_internal_image(3065);
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
FrameObject * create_inmatedtaf4_491(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF4_491(x, y);
}
static Image* images_inmatedtaf5_492_0_0[2];
static Direction direction_inmatedtaf5_492_0_0 = {0, 10, 10, 0, -1, images_inmatedtaf5_492_0_0, 2};
static Image* images_inmatedtaf5_492_0_8[2];
static Direction direction_inmatedtaf5_492_0_8 = {8, 10, 10, 0, -1, images_inmatedtaf5_492_0_8, 2};
static Image* images_inmatedtaf5_492_0_16[2];
static Direction direction_inmatedtaf5_492_0_16 = {16, 10, 10, 0, -1, images_inmatedtaf5_492_0_16, 2};
static Image* images_inmatedtaf5_492_0_24[2];
static Direction direction_inmatedtaf5_492_0_24 = {24, 10, 10, 0, -1, images_inmatedtaf5_492_0_24, 2};
static Animation anim_inmatedtaf5_492_0 = {&direction_inmatedtaf5_492_0_0, &direction_inmatedtaf5_492_0_0, &direction_inmatedtaf5_492_0_0, &direction_inmatedtaf5_492_0_0, NULL, &direction_inmatedtaf5_492_0_8, &direction_inmatedtaf5_492_0_8, &direction_inmatedtaf5_492_0_8, &direction_inmatedtaf5_492_0_8, &direction_inmatedtaf5_492_0_8, &direction_inmatedtaf5_492_0_8, &direction_inmatedtaf5_492_0_8, NULL, &direction_inmatedtaf5_492_0_16, &direction_inmatedtaf5_492_0_16, &direction_inmatedtaf5_492_0_16, &direction_inmatedtaf5_492_0_16, &direction_inmatedtaf5_492_0_16, &direction_inmatedtaf5_492_0_16, &direction_inmatedtaf5_492_0_16, NULL, &direction_inmatedtaf5_492_0_24, &direction_inmatedtaf5_492_0_24, &direction_inmatedtaf5_492_0_24, &direction_inmatedtaf5_492_0_24, &direction_inmatedtaf5_492_0_24, &direction_inmatedtaf5_492_0_24, &direction_inmatedtaf5_492_0_24, NULL, &direction_inmatedtaf5_492_0_0, &direction_inmatedtaf5_492_0_0, &direction_inmatedtaf5_492_0_0};
static Image* images_inmatedtaf5_492_4_0[4];
static Direction direction_inmatedtaf5_492_4_0 = {0, 20, 20, 0, 1, images_inmatedtaf5_492_4_0, 4};
static Image* images_inmatedtaf5_492_4_16[4];
static Direction direction_inmatedtaf5_492_4_16 = {16, 20, 20, 0, 1, images_inmatedtaf5_492_4_16, 4};
static Animation anim_inmatedtaf5_492_4 = {&direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, NULL, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, &direction_inmatedtaf5_492_4_16, NULL, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0, &direction_inmatedtaf5_492_4_0};
static Image* images_inmatedtaf5_492_6_0[1];
static Direction direction_inmatedtaf5_492_6_0 = {0, 6, 6, 0, 1, images_inmatedtaf5_492_6_0, 1};
static Image* images_inmatedtaf5_492_6_8[1];
static Direction direction_inmatedtaf5_492_6_8 = {8, 6, 6, 0, 1, images_inmatedtaf5_492_6_8, 1};
static Image* images_inmatedtaf5_492_6_16[1];
static Direction direction_inmatedtaf5_492_6_16 = {16, 6, 6, 0, 1, images_inmatedtaf5_492_6_16, 1};
static Image* images_inmatedtaf5_492_6_24[1];
static Direction direction_inmatedtaf5_492_6_24 = {24, 6, 6, 0, 1, images_inmatedtaf5_492_6_24, 1};
static Animation anim_inmatedtaf5_492_6 = {&direction_inmatedtaf5_492_6_0, &direction_inmatedtaf5_492_6_0, &direction_inmatedtaf5_492_6_0, &direction_inmatedtaf5_492_6_0, NULL, &direction_inmatedtaf5_492_6_8, &direction_inmatedtaf5_492_6_8, &direction_inmatedtaf5_492_6_8, &direction_inmatedtaf5_492_6_8, &direction_inmatedtaf5_492_6_8, &direction_inmatedtaf5_492_6_8, &direction_inmatedtaf5_492_6_8, NULL, &direction_inmatedtaf5_492_6_16, &direction_inmatedtaf5_492_6_16, &direction_inmatedtaf5_492_6_16, &direction_inmatedtaf5_492_6_16, &direction_inmatedtaf5_492_6_16, &direction_inmatedtaf5_492_6_16, &direction_inmatedtaf5_492_6_16, NULL, &direction_inmatedtaf5_492_6_24, &direction_inmatedtaf5_492_6_24, &direction_inmatedtaf5_492_6_24, &direction_inmatedtaf5_492_6_24, &direction_inmatedtaf5_492_6_24, &direction_inmatedtaf5_492_6_24, &direction_inmatedtaf5_492_6_24, NULL, &direction_inmatedtaf5_492_6_0, &direction_inmatedtaf5_492_6_0, &direction_inmatedtaf5_492_6_0};
static Image* images_inmatedtaf5_492_8_0[1];
static Direction direction_inmatedtaf5_492_8_0 = {0, 10, 10, 0, -1, images_inmatedtaf5_492_8_0, 1};
static Image* images_inmatedtaf5_492_8_16[2];
static Direction direction_inmatedtaf5_492_8_16 = {16, 5, 5, 0, -1, images_inmatedtaf5_492_8_16, 2};
static Image* images_inmatedtaf5_492_8_24[1];
static Direction direction_inmatedtaf5_492_8_24 = {24, 10, 10, 0, -1, images_inmatedtaf5_492_8_24, 1};
static Animation anim_inmatedtaf5_492_8 = {&direction_inmatedtaf5_492_8_0, &direction_inmatedtaf5_492_8_0, &direction_inmatedtaf5_492_8_0, &direction_inmatedtaf5_492_8_0, &direction_inmatedtaf5_492_8_0, &direction_inmatedtaf5_492_8_0, &direction_inmatedtaf5_492_8_0, &direction_inmatedtaf5_492_8_0, NULL, &direction_inmatedtaf5_492_8_16, &direction_inmatedtaf5_492_8_16, &direction_inmatedtaf5_492_8_16, &direction_inmatedtaf5_492_8_16, &direction_inmatedtaf5_492_8_16, &direction_inmatedtaf5_492_8_16, &direction_inmatedtaf5_492_8_16, &direction_inmatedtaf5_492_8_16, &direction_inmatedtaf5_492_8_16, &direction_inmatedtaf5_492_8_16, &direction_inmatedtaf5_492_8_16, NULL, &direction_inmatedtaf5_492_8_24, &direction_inmatedtaf5_492_8_24, &direction_inmatedtaf5_492_8_24, &direction_inmatedtaf5_492_8_24, &direction_inmatedtaf5_492_8_24, &direction_inmatedtaf5_492_8_24, &direction_inmatedtaf5_492_8_24, NULL, &direction_inmatedtaf5_492_8_0, &direction_inmatedtaf5_492_8_0, &direction_inmatedtaf5_492_8_0};
static Image* images_inmatedtaf5_492_10_0[5];
static Direction direction_inmatedtaf5_492_10_0 = {0, 10, 10, 0, -1, images_inmatedtaf5_492_10_0, 5};
static Animation anim_inmatedtaf5_492_10 = {&direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, NULL, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0, &direction_inmatedtaf5_492_10_0};
static Image* images_inmatedtaf5_492_11_0[2];
static Direction direction_inmatedtaf5_492_11_0 = {0, 6, 6, 0, -1, images_inmatedtaf5_492_11_0, 2};
static Image* images_inmatedtaf5_492_11_8[2];
static Direction direction_inmatedtaf5_492_11_8 = {8, 6, 6, 0, -1, images_inmatedtaf5_492_11_8, 2};
static Image* images_inmatedtaf5_492_11_16[2];
static Direction direction_inmatedtaf5_492_11_16 = {16, 6, 6, 0, -1, images_inmatedtaf5_492_11_16, 2};
static Image* images_inmatedtaf5_492_11_24[2];
static Direction direction_inmatedtaf5_492_11_24 = {24, 6, 6, 0, -1, images_inmatedtaf5_492_11_24, 2};
static Animation anim_inmatedtaf5_492_11 = {&direction_inmatedtaf5_492_11_0, &direction_inmatedtaf5_492_11_0, &direction_inmatedtaf5_492_11_0, &direction_inmatedtaf5_492_11_0, NULL, &direction_inmatedtaf5_492_11_8, &direction_inmatedtaf5_492_11_8, &direction_inmatedtaf5_492_11_8, &direction_inmatedtaf5_492_11_8, &direction_inmatedtaf5_492_11_8, &direction_inmatedtaf5_492_11_8, &direction_inmatedtaf5_492_11_8, NULL, &direction_inmatedtaf5_492_11_16, &direction_inmatedtaf5_492_11_16, &direction_inmatedtaf5_492_11_16, &direction_inmatedtaf5_492_11_16, &direction_inmatedtaf5_492_11_16, &direction_inmatedtaf5_492_11_16, &direction_inmatedtaf5_492_11_16, NULL, &direction_inmatedtaf5_492_11_24, &direction_inmatedtaf5_492_11_24, &direction_inmatedtaf5_492_11_24, &direction_inmatedtaf5_492_11_24, &direction_inmatedtaf5_492_11_24, &direction_inmatedtaf5_492_11_24, &direction_inmatedtaf5_492_11_24, NULL, &direction_inmatedtaf5_492_11_0, &direction_inmatedtaf5_492_11_0, &direction_inmatedtaf5_492_11_0};
static Animation * anim_array_inmatedtaf5_492[12] = {&anim_inmatedtaf5_492_0, NULL, NULL, NULL, &anim_inmatedtaf5_492_4, NULL, &anim_inmatedtaf5_492_6, NULL, &anim_inmatedtaf5_492_8, NULL, &anim_inmatedtaf5_492_10, &anim_inmatedtaf5_492_11};
static Animations anim_inmatedtaf5_492 = {12, &anim_array_inmatedtaf5_492[0]};
static bool anim_inmatedtaf5_492_initialized;
class InmateDTAF5_492 : public Active
{
public:
    InmateDTAF5_492(int x, int y) : Active(x, y, InmateDTAF5_492_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 5", 13);
#endif
        this->animations = &anim_inmatedtaf5_492;
        if (!anim_inmatedtaf5_492_initialized) {
            anim_inmatedtaf5_492_initialized = true;
            images_inmatedtaf5_492_0_0[0] = get_internal_image(2936);
            images_inmatedtaf5_492_0_0[1] = get_internal_image(2938);
            images_inmatedtaf5_492_0_8[0] = get_internal_image(2942);
            images_inmatedtaf5_492_0_8[1] = get_internal_image(2943);
            images_inmatedtaf5_492_0_16[0] = get_internal_image(2937);
            images_inmatedtaf5_492_0_16[1] = get_internal_image(2939);
            images_inmatedtaf5_492_0_24[0] = get_internal_image(2940);
            images_inmatedtaf5_492_0_24[1] = get_internal_image(2941);
            images_inmatedtaf5_492_4_0[0] = get_internal_image(369);
            images_inmatedtaf5_492_4_0[1] = get_internal_image(373);
            images_inmatedtaf5_492_4_0[2] = get_internal_image(369);
            images_inmatedtaf5_492_4_0[3] = get_internal_image(373);
            images_inmatedtaf5_492_4_16[0] = get_internal_image(371);
            images_inmatedtaf5_492_4_16[1] = get_internal_image(763);
            images_inmatedtaf5_492_4_16[2] = get_internal_image(371);
            images_inmatedtaf5_492_4_16[3] = get_internal_image(763);
            images_inmatedtaf5_492_6_0[0] = get_internal_image(2996);
            images_inmatedtaf5_492_6_8[0] = get_internal_image(2999);
            images_inmatedtaf5_492_6_16[0] = get_internal_image(2995);
            images_inmatedtaf5_492_6_24[0] = get_internal_image(2998);
            images_inmatedtaf5_492_8_0[0] = get_internal_image(2730);
            images_inmatedtaf5_492_8_16[0] = get_internal_image(3274);
            images_inmatedtaf5_492_8_16[1] = get_internal_image(3275);
            images_inmatedtaf5_492_8_24[0] = get_internal_image(3061);
            images_inmatedtaf5_492_10_0[0] = get_internal_image(595);
            images_inmatedtaf5_492_10_0[1] = get_internal_image(2845);
            images_inmatedtaf5_492_10_0[2] = get_internal_image(3260);
            images_inmatedtaf5_492_10_0[3] = get_internal_image(3260);
            images_inmatedtaf5_492_10_0[4] = get_internal_image(2845);
            images_inmatedtaf5_492_11_0[0] = get_internal_image(3053);
            images_inmatedtaf5_492_11_0[1] = get_internal_image(3052);
            images_inmatedtaf5_492_11_8[0] = get_internal_image(3057);
            images_inmatedtaf5_492_11_8[1] = get_internal_image(3058);
            images_inmatedtaf5_492_11_16[0] = get_internal_image(3045);
            images_inmatedtaf5_492_11_16[1] = get_internal_image(3054);
            images_inmatedtaf5_492_11_24[0] = get_internal_image(3055);
            images_inmatedtaf5_492_11_24[1] = get_internal_image(3056);
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
FrameObject * create_inmatedtaf5_492(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF5_492(x, y);
}
static Image* images_inmatedtaf6_493_0_0[2];
static Direction direction_inmatedtaf6_493_0_0 = {0, 10, 10, 0, -1, images_inmatedtaf6_493_0_0, 2};
static Image* images_inmatedtaf6_493_0_8[2];
static Direction direction_inmatedtaf6_493_0_8 = {8, 10, 10, 0, -1, images_inmatedtaf6_493_0_8, 2};
static Image* images_inmatedtaf6_493_0_16[2];
static Direction direction_inmatedtaf6_493_0_16 = {16, 10, 10, 0, -1, images_inmatedtaf6_493_0_16, 2};
static Image* images_inmatedtaf6_493_0_24[2];
static Direction direction_inmatedtaf6_493_0_24 = {24, 10, 10, 0, -1, images_inmatedtaf6_493_0_24, 2};
static Animation anim_inmatedtaf6_493_0 = {&direction_inmatedtaf6_493_0_0, &direction_inmatedtaf6_493_0_0, &direction_inmatedtaf6_493_0_0, &direction_inmatedtaf6_493_0_0, NULL, &direction_inmatedtaf6_493_0_8, &direction_inmatedtaf6_493_0_8, &direction_inmatedtaf6_493_0_8, &direction_inmatedtaf6_493_0_8, &direction_inmatedtaf6_493_0_8, &direction_inmatedtaf6_493_0_8, &direction_inmatedtaf6_493_0_8, NULL, &direction_inmatedtaf6_493_0_16, &direction_inmatedtaf6_493_0_16, &direction_inmatedtaf6_493_0_16, &direction_inmatedtaf6_493_0_16, &direction_inmatedtaf6_493_0_16, &direction_inmatedtaf6_493_0_16, &direction_inmatedtaf6_493_0_16, NULL, &direction_inmatedtaf6_493_0_24, &direction_inmatedtaf6_493_0_24, &direction_inmatedtaf6_493_0_24, &direction_inmatedtaf6_493_0_24, &direction_inmatedtaf6_493_0_24, &direction_inmatedtaf6_493_0_24, &direction_inmatedtaf6_493_0_24, NULL, &direction_inmatedtaf6_493_0_0, &direction_inmatedtaf6_493_0_0, &direction_inmatedtaf6_493_0_0};
static Image* images_inmatedtaf6_493_4_0[4];
static Direction direction_inmatedtaf6_493_4_0 = {0, 20, 20, 0, 1, images_inmatedtaf6_493_4_0, 4};
static Image* images_inmatedtaf6_493_4_16[4];
static Direction direction_inmatedtaf6_493_4_16 = {16, 20, 20, 0, 1, images_inmatedtaf6_493_4_16, 4};
static Animation anim_inmatedtaf6_493_4 = {&direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, NULL, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, &direction_inmatedtaf6_493_4_16, NULL, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0, &direction_inmatedtaf6_493_4_0};
static Image* images_inmatedtaf6_493_6_0[1];
static Direction direction_inmatedtaf6_493_6_0 = {0, 6, 6, 0, 1, images_inmatedtaf6_493_6_0, 1};
static Image* images_inmatedtaf6_493_6_8[1];
static Direction direction_inmatedtaf6_493_6_8 = {8, 6, 6, 0, 1, images_inmatedtaf6_493_6_8, 1};
static Image* images_inmatedtaf6_493_6_16[1];
static Direction direction_inmatedtaf6_493_6_16 = {16, 6, 6, 0, 1, images_inmatedtaf6_493_6_16, 1};
static Image* images_inmatedtaf6_493_6_24[1];
static Direction direction_inmatedtaf6_493_6_24 = {24, 6, 6, 0, 1, images_inmatedtaf6_493_6_24, 1};
static Animation anim_inmatedtaf6_493_6 = {&direction_inmatedtaf6_493_6_0, &direction_inmatedtaf6_493_6_0, &direction_inmatedtaf6_493_6_0, &direction_inmatedtaf6_493_6_0, NULL, &direction_inmatedtaf6_493_6_8, &direction_inmatedtaf6_493_6_8, &direction_inmatedtaf6_493_6_8, &direction_inmatedtaf6_493_6_8, &direction_inmatedtaf6_493_6_8, &direction_inmatedtaf6_493_6_8, &direction_inmatedtaf6_493_6_8, NULL, &direction_inmatedtaf6_493_6_16, &direction_inmatedtaf6_493_6_16, &direction_inmatedtaf6_493_6_16, &direction_inmatedtaf6_493_6_16, &direction_inmatedtaf6_493_6_16, &direction_inmatedtaf6_493_6_16, &direction_inmatedtaf6_493_6_16, NULL, &direction_inmatedtaf6_493_6_24, &direction_inmatedtaf6_493_6_24, &direction_inmatedtaf6_493_6_24, &direction_inmatedtaf6_493_6_24, &direction_inmatedtaf6_493_6_24, &direction_inmatedtaf6_493_6_24, &direction_inmatedtaf6_493_6_24, NULL, &direction_inmatedtaf6_493_6_0, &direction_inmatedtaf6_493_6_0, &direction_inmatedtaf6_493_6_0};
static Image* images_inmatedtaf6_493_8_0[1];
static Direction direction_inmatedtaf6_493_8_0 = {0, 10, 10, 0, -1, images_inmatedtaf6_493_8_0, 1};
static Image* images_inmatedtaf6_493_8_16[2];
static Direction direction_inmatedtaf6_493_8_16 = {16, 5, 5, 0, -1, images_inmatedtaf6_493_8_16, 2};
static Image* images_inmatedtaf6_493_8_24[1];
static Direction direction_inmatedtaf6_493_8_24 = {24, 10, 10, 0, -1, images_inmatedtaf6_493_8_24, 1};
static Animation anim_inmatedtaf6_493_8 = {&direction_inmatedtaf6_493_8_0, &direction_inmatedtaf6_493_8_0, &direction_inmatedtaf6_493_8_0, &direction_inmatedtaf6_493_8_0, &direction_inmatedtaf6_493_8_0, &direction_inmatedtaf6_493_8_0, &direction_inmatedtaf6_493_8_0, &direction_inmatedtaf6_493_8_0, NULL, &direction_inmatedtaf6_493_8_16, &direction_inmatedtaf6_493_8_16, &direction_inmatedtaf6_493_8_16, &direction_inmatedtaf6_493_8_16, &direction_inmatedtaf6_493_8_16, &direction_inmatedtaf6_493_8_16, &direction_inmatedtaf6_493_8_16, &direction_inmatedtaf6_493_8_16, &direction_inmatedtaf6_493_8_16, &direction_inmatedtaf6_493_8_16, &direction_inmatedtaf6_493_8_16, NULL, &direction_inmatedtaf6_493_8_24, &direction_inmatedtaf6_493_8_24, &direction_inmatedtaf6_493_8_24, &direction_inmatedtaf6_493_8_24, &direction_inmatedtaf6_493_8_24, &direction_inmatedtaf6_493_8_24, &direction_inmatedtaf6_493_8_24, NULL, &direction_inmatedtaf6_493_8_0, &direction_inmatedtaf6_493_8_0, &direction_inmatedtaf6_493_8_0};
static Image* images_inmatedtaf6_493_10_0[5];
static Direction direction_inmatedtaf6_493_10_0 = {0, 10, 10, 0, -1, images_inmatedtaf6_493_10_0, 5};
static Animation anim_inmatedtaf6_493_10 = {&direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, NULL, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0, &direction_inmatedtaf6_493_10_0};
static Image* images_inmatedtaf6_493_11_0[2];
static Direction direction_inmatedtaf6_493_11_0 = {0, 6, 6, 0, -1, images_inmatedtaf6_493_11_0, 2};
static Image* images_inmatedtaf6_493_11_8[2];
static Direction direction_inmatedtaf6_493_11_8 = {8, 6, 6, 0, -1, images_inmatedtaf6_493_11_8, 2};
static Image* images_inmatedtaf6_493_11_16[2];
static Direction direction_inmatedtaf6_493_11_16 = {16, 6, 6, 0, -1, images_inmatedtaf6_493_11_16, 2};
static Image* images_inmatedtaf6_493_11_24[2];
static Direction direction_inmatedtaf6_493_11_24 = {24, 6, 6, 0, -1, images_inmatedtaf6_493_11_24, 2};
static Animation anim_inmatedtaf6_493_11 = {&direction_inmatedtaf6_493_11_0, &direction_inmatedtaf6_493_11_0, &direction_inmatedtaf6_493_11_0, &direction_inmatedtaf6_493_11_0, NULL, &direction_inmatedtaf6_493_11_8, &direction_inmatedtaf6_493_11_8, &direction_inmatedtaf6_493_11_8, &direction_inmatedtaf6_493_11_8, &direction_inmatedtaf6_493_11_8, &direction_inmatedtaf6_493_11_8, &direction_inmatedtaf6_493_11_8, NULL, &direction_inmatedtaf6_493_11_16, &direction_inmatedtaf6_493_11_16, &direction_inmatedtaf6_493_11_16, &direction_inmatedtaf6_493_11_16, &direction_inmatedtaf6_493_11_16, &direction_inmatedtaf6_493_11_16, &direction_inmatedtaf6_493_11_16, NULL, &direction_inmatedtaf6_493_11_24, &direction_inmatedtaf6_493_11_24, &direction_inmatedtaf6_493_11_24, &direction_inmatedtaf6_493_11_24, &direction_inmatedtaf6_493_11_24, &direction_inmatedtaf6_493_11_24, &direction_inmatedtaf6_493_11_24, NULL, &direction_inmatedtaf6_493_11_0, &direction_inmatedtaf6_493_11_0, &direction_inmatedtaf6_493_11_0};
static Animation * anim_array_inmatedtaf6_493[12] = {&anim_inmatedtaf6_493_0, NULL, NULL, NULL, &anim_inmatedtaf6_493_4, NULL, &anim_inmatedtaf6_493_6, NULL, &anim_inmatedtaf6_493_8, NULL, &anim_inmatedtaf6_493_10, &anim_inmatedtaf6_493_11};
static Animations anim_inmatedtaf6_493 = {12, &anim_array_inmatedtaf6_493[0]};
static bool anim_inmatedtaf6_493_initialized;
class InmateDTAF6_493 : public Active
{
public:
    InmateDTAF6_493(int x, int y) : Active(x, y, InmateDTAF6_493_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 6", 13);
#endif
        this->animations = &anim_inmatedtaf6_493;
        if (!anim_inmatedtaf6_493_initialized) {
            anim_inmatedtaf6_493_initialized = true;
            images_inmatedtaf6_493_0_0[0] = get_internal_image(2944);
            images_inmatedtaf6_493_0_0[1] = get_internal_image(2946);
            images_inmatedtaf6_493_0_8[0] = get_internal_image(2950);
            images_inmatedtaf6_493_0_8[1] = get_internal_image(2951);
            images_inmatedtaf6_493_0_16[0] = get_internal_image(2945);
            images_inmatedtaf6_493_0_16[1] = get_internal_image(2947);
            images_inmatedtaf6_493_0_24[0] = get_internal_image(2948);
            images_inmatedtaf6_493_0_24[1] = get_internal_image(2949);
            images_inmatedtaf6_493_4_0[0] = get_internal_image(369);
            images_inmatedtaf6_493_4_0[1] = get_internal_image(373);
            images_inmatedtaf6_493_4_0[2] = get_internal_image(369);
            images_inmatedtaf6_493_4_0[3] = get_internal_image(373);
            images_inmatedtaf6_493_4_16[0] = get_internal_image(371);
            images_inmatedtaf6_493_4_16[1] = get_internal_image(763);
            images_inmatedtaf6_493_4_16[2] = get_internal_image(371);
            images_inmatedtaf6_493_4_16[3] = get_internal_image(763);
            images_inmatedtaf6_493_6_0[0] = get_internal_image(3008);
            images_inmatedtaf6_493_6_8[0] = get_internal_image(3011);
            images_inmatedtaf6_493_6_16[0] = get_internal_image(3009);
            images_inmatedtaf6_493_6_24[0] = get_internal_image(3012);
            images_inmatedtaf6_493_8_0[0] = get_internal_image(2730);
            images_inmatedtaf6_493_8_16[0] = get_internal_image(3276);
            images_inmatedtaf6_493_8_16[1] = get_internal_image(3277);
            images_inmatedtaf6_493_8_24[0] = get_internal_image(3037);
            images_inmatedtaf6_493_10_0[0] = get_internal_image(2743);
            images_inmatedtaf6_493_10_0[1] = get_internal_image(2742);
            images_inmatedtaf6_493_10_0[2] = get_internal_image(2744);
            images_inmatedtaf6_493_10_0[3] = get_internal_image(2744);
            images_inmatedtaf6_493_10_0[4] = get_internal_image(2742);
            images_inmatedtaf6_493_11_0[0] = get_internal_image(3046);
            images_inmatedtaf6_493_11_0[1] = get_internal_image(3044);
            images_inmatedtaf6_493_11_8[0] = get_internal_image(3050);
            images_inmatedtaf6_493_11_8[1] = get_internal_image(3051);
            images_inmatedtaf6_493_11_16[0] = get_internal_image(3043);
            images_inmatedtaf6_493_11_16[1] = get_internal_image(3047);
            images_inmatedtaf6_493_11_24[0] = get_internal_image(3048);
            images_inmatedtaf6_493_11_24[1] = get_internal_image(3049);
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
FrameObject * create_inmatedtaf6_493(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF6_493(x, y);
}
static Image* images_inmatedtaf7_494_0_0[2];
static Direction direction_inmatedtaf7_494_0_0 = {0, 10, 10, 0, -1, images_inmatedtaf7_494_0_0, 2};
static Image* images_inmatedtaf7_494_0_8[2];
static Direction direction_inmatedtaf7_494_0_8 = {8, 10, 10, 0, -1, images_inmatedtaf7_494_0_8, 2};
static Image* images_inmatedtaf7_494_0_16[2];
static Direction direction_inmatedtaf7_494_0_16 = {16, 10, 10, 0, -1, images_inmatedtaf7_494_0_16, 2};
static Image* images_inmatedtaf7_494_0_24[2];
static Direction direction_inmatedtaf7_494_0_24 = {24, 10, 10, 0, -1, images_inmatedtaf7_494_0_24, 2};
static Animation anim_inmatedtaf7_494_0 = {&direction_inmatedtaf7_494_0_0, &direction_inmatedtaf7_494_0_0, &direction_inmatedtaf7_494_0_0, &direction_inmatedtaf7_494_0_0, NULL, &direction_inmatedtaf7_494_0_8, &direction_inmatedtaf7_494_0_8, &direction_inmatedtaf7_494_0_8, &direction_inmatedtaf7_494_0_8, &direction_inmatedtaf7_494_0_8, &direction_inmatedtaf7_494_0_8, &direction_inmatedtaf7_494_0_8, NULL, &direction_inmatedtaf7_494_0_16, &direction_inmatedtaf7_494_0_16, &direction_inmatedtaf7_494_0_16, &direction_inmatedtaf7_494_0_16, &direction_inmatedtaf7_494_0_16, &direction_inmatedtaf7_494_0_16, &direction_inmatedtaf7_494_0_16, NULL, &direction_inmatedtaf7_494_0_24, &direction_inmatedtaf7_494_0_24, &direction_inmatedtaf7_494_0_24, &direction_inmatedtaf7_494_0_24, &direction_inmatedtaf7_494_0_24, &direction_inmatedtaf7_494_0_24, &direction_inmatedtaf7_494_0_24, NULL, &direction_inmatedtaf7_494_0_0, &direction_inmatedtaf7_494_0_0, &direction_inmatedtaf7_494_0_0};
static Image* images_inmatedtaf7_494_4_0[4];
static Direction direction_inmatedtaf7_494_4_0 = {0, 20, 20, 0, 1, images_inmatedtaf7_494_4_0, 4};
static Image* images_inmatedtaf7_494_4_16[4];
static Direction direction_inmatedtaf7_494_4_16 = {16, 20, 20, 0, 1, images_inmatedtaf7_494_4_16, 4};
static Animation anim_inmatedtaf7_494_4 = {&direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, NULL, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, &direction_inmatedtaf7_494_4_16, NULL, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0, &direction_inmatedtaf7_494_4_0};
static Image* images_inmatedtaf7_494_6_0[1];
static Direction direction_inmatedtaf7_494_6_0 = {0, 6, 6, 0, 1, images_inmatedtaf7_494_6_0, 1};
static Image* images_inmatedtaf7_494_6_8[1];
static Direction direction_inmatedtaf7_494_6_8 = {8, 6, 6, 0, 1, images_inmatedtaf7_494_6_8, 1};
static Image* images_inmatedtaf7_494_6_16[1];
static Direction direction_inmatedtaf7_494_6_16 = {16, 6, 6, 0, 1, images_inmatedtaf7_494_6_16, 1};
static Image* images_inmatedtaf7_494_6_24[1];
static Direction direction_inmatedtaf7_494_6_24 = {24, 6, 6, 0, 1, images_inmatedtaf7_494_6_24, 1};
static Animation anim_inmatedtaf7_494_6 = {&direction_inmatedtaf7_494_6_0, &direction_inmatedtaf7_494_6_0, &direction_inmatedtaf7_494_6_0, &direction_inmatedtaf7_494_6_0, NULL, &direction_inmatedtaf7_494_6_8, &direction_inmatedtaf7_494_6_8, &direction_inmatedtaf7_494_6_8, &direction_inmatedtaf7_494_6_8, &direction_inmatedtaf7_494_6_8, &direction_inmatedtaf7_494_6_8, &direction_inmatedtaf7_494_6_8, NULL, &direction_inmatedtaf7_494_6_16, &direction_inmatedtaf7_494_6_16, &direction_inmatedtaf7_494_6_16, &direction_inmatedtaf7_494_6_16, &direction_inmatedtaf7_494_6_16, &direction_inmatedtaf7_494_6_16, &direction_inmatedtaf7_494_6_16, NULL, &direction_inmatedtaf7_494_6_24, &direction_inmatedtaf7_494_6_24, &direction_inmatedtaf7_494_6_24, &direction_inmatedtaf7_494_6_24, &direction_inmatedtaf7_494_6_24, &direction_inmatedtaf7_494_6_24, &direction_inmatedtaf7_494_6_24, NULL, &direction_inmatedtaf7_494_6_0, &direction_inmatedtaf7_494_6_0, &direction_inmatedtaf7_494_6_0};
static Image* images_inmatedtaf7_494_8_0[1];
static Direction direction_inmatedtaf7_494_8_0 = {0, 10, 10, 0, -1, images_inmatedtaf7_494_8_0, 1};
static Image* images_inmatedtaf7_494_8_16[2];
static Direction direction_inmatedtaf7_494_8_16 = {16, 5, 5, 0, -1, images_inmatedtaf7_494_8_16, 2};
static Image* images_inmatedtaf7_494_8_24[1];
static Direction direction_inmatedtaf7_494_8_24 = {24, 10, 10, 0, -1, images_inmatedtaf7_494_8_24, 1};
static Animation anim_inmatedtaf7_494_8 = {&direction_inmatedtaf7_494_8_0, &direction_inmatedtaf7_494_8_0, &direction_inmatedtaf7_494_8_0, &direction_inmatedtaf7_494_8_0, &direction_inmatedtaf7_494_8_0, &direction_inmatedtaf7_494_8_0, &direction_inmatedtaf7_494_8_0, &direction_inmatedtaf7_494_8_0, NULL, &direction_inmatedtaf7_494_8_16, &direction_inmatedtaf7_494_8_16, &direction_inmatedtaf7_494_8_16, &direction_inmatedtaf7_494_8_16, &direction_inmatedtaf7_494_8_16, &direction_inmatedtaf7_494_8_16, &direction_inmatedtaf7_494_8_16, &direction_inmatedtaf7_494_8_16, &direction_inmatedtaf7_494_8_16, &direction_inmatedtaf7_494_8_16, &direction_inmatedtaf7_494_8_16, NULL, &direction_inmatedtaf7_494_8_24, &direction_inmatedtaf7_494_8_24, &direction_inmatedtaf7_494_8_24, &direction_inmatedtaf7_494_8_24, &direction_inmatedtaf7_494_8_24, &direction_inmatedtaf7_494_8_24, &direction_inmatedtaf7_494_8_24, NULL, &direction_inmatedtaf7_494_8_0, &direction_inmatedtaf7_494_8_0, &direction_inmatedtaf7_494_8_0};
static Image* images_inmatedtaf7_494_10_0[5];
static Direction direction_inmatedtaf7_494_10_0 = {0, 10, 10, 0, -1, images_inmatedtaf7_494_10_0, 5};
static Animation anim_inmatedtaf7_494_10 = {&direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, NULL, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0, &direction_inmatedtaf7_494_10_0};
static Image* images_inmatedtaf7_494_11_0[2];
static Direction direction_inmatedtaf7_494_11_0 = {0, 6, 6, 0, -1, images_inmatedtaf7_494_11_0, 2};
static Image* images_inmatedtaf7_494_11_8[2];
static Direction direction_inmatedtaf7_494_11_8 = {8, 6, 6, 0, -1, images_inmatedtaf7_494_11_8, 2};
static Image* images_inmatedtaf7_494_11_16[2];
static Direction direction_inmatedtaf7_494_11_16 = {16, 6, 6, 0, -1, images_inmatedtaf7_494_11_16, 2};
static Image* images_inmatedtaf7_494_11_24[2];
static Direction direction_inmatedtaf7_494_11_24 = {24, 6, 6, 0, -1, images_inmatedtaf7_494_11_24, 2};
static Animation anim_inmatedtaf7_494_11 = {&direction_inmatedtaf7_494_11_0, &direction_inmatedtaf7_494_11_0, &direction_inmatedtaf7_494_11_0, &direction_inmatedtaf7_494_11_0, NULL, &direction_inmatedtaf7_494_11_8, &direction_inmatedtaf7_494_11_8, &direction_inmatedtaf7_494_11_8, &direction_inmatedtaf7_494_11_8, &direction_inmatedtaf7_494_11_8, &direction_inmatedtaf7_494_11_8, &direction_inmatedtaf7_494_11_8, NULL, &direction_inmatedtaf7_494_11_16, &direction_inmatedtaf7_494_11_16, &direction_inmatedtaf7_494_11_16, &direction_inmatedtaf7_494_11_16, &direction_inmatedtaf7_494_11_16, &direction_inmatedtaf7_494_11_16, &direction_inmatedtaf7_494_11_16, NULL, &direction_inmatedtaf7_494_11_24, &direction_inmatedtaf7_494_11_24, &direction_inmatedtaf7_494_11_24, &direction_inmatedtaf7_494_11_24, &direction_inmatedtaf7_494_11_24, &direction_inmatedtaf7_494_11_24, &direction_inmatedtaf7_494_11_24, NULL, &direction_inmatedtaf7_494_11_0, &direction_inmatedtaf7_494_11_0, &direction_inmatedtaf7_494_11_0};
static Animation * anim_array_inmatedtaf7_494[12] = {&anim_inmatedtaf7_494_0, NULL, NULL, NULL, &anim_inmatedtaf7_494_4, NULL, &anim_inmatedtaf7_494_6, NULL, &anim_inmatedtaf7_494_8, NULL, &anim_inmatedtaf7_494_10, &anim_inmatedtaf7_494_11};
static Animations anim_inmatedtaf7_494 = {12, &anim_array_inmatedtaf7_494[0]};
static bool anim_inmatedtaf7_494_initialized;
class InmateDTAF7_494 : public Active
{
public:
    InmateDTAF7_494(int x, int y) : Active(x, y, InmateDTAF7_494_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 7", 13);
#endif
        this->animations = &anim_inmatedtaf7_494;
        if (!anim_inmatedtaf7_494_initialized) {
            anim_inmatedtaf7_494_initialized = true;
            images_inmatedtaf7_494_0_0[0] = get_internal_image(2952);
            images_inmatedtaf7_494_0_0[1] = get_internal_image(2953);
            images_inmatedtaf7_494_0_8[0] = get_internal_image(2956);
            images_inmatedtaf7_494_0_8[1] = get_internal_image(2957);
            images_inmatedtaf7_494_0_16[0] = get_internal_image(2954);
            images_inmatedtaf7_494_0_16[1] = get_internal_image(2955);
            images_inmatedtaf7_494_0_24[0] = get_internal_image(2958);
            images_inmatedtaf7_494_0_24[1] = get_internal_image(2959);
            images_inmatedtaf7_494_4_0[0] = get_internal_image(369);
            images_inmatedtaf7_494_4_0[1] = get_internal_image(373);
            images_inmatedtaf7_494_4_0[2] = get_internal_image(369);
            images_inmatedtaf7_494_4_0[3] = get_internal_image(373);
            images_inmatedtaf7_494_4_16[0] = get_internal_image(371);
            images_inmatedtaf7_494_4_16[1] = get_internal_image(763);
            images_inmatedtaf7_494_4_16[2] = get_internal_image(371);
            images_inmatedtaf7_494_4_16[3] = get_internal_image(763);
            images_inmatedtaf7_494_6_0[0] = get_internal_image(3010);
            images_inmatedtaf7_494_6_8[0] = get_internal_image(3015);
            images_inmatedtaf7_494_6_16[0] = get_internal_image(3013);
            images_inmatedtaf7_494_6_24[0] = get_internal_image(3014);
            images_inmatedtaf7_494_8_0[0] = get_internal_image(2730);
            images_inmatedtaf7_494_8_16[0] = get_internal_image(3238);
            images_inmatedtaf7_494_8_16[1] = get_internal_image(3239);
            images_inmatedtaf7_494_8_24[0] = get_internal_image(3036);
            images_inmatedtaf7_494_10_0[0] = get_internal_image(3040);
            images_inmatedtaf7_494_10_0[1] = get_internal_image(3041);
            images_inmatedtaf7_494_10_0[2] = get_internal_image(3042);
            images_inmatedtaf7_494_10_0[3] = get_internal_image(3041);
            images_inmatedtaf7_494_10_0[4] = get_internal_image(3040);
            images_inmatedtaf7_494_11_0[0] = get_internal_image(3030);
            images_inmatedtaf7_494_11_0[1] = get_internal_image(3029);
            images_inmatedtaf7_494_11_8[0] = get_internal_image(3034);
            images_inmatedtaf7_494_11_8[1] = get_internal_image(3035);
            images_inmatedtaf7_494_11_16[0] = get_internal_image(3028);
            images_inmatedtaf7_494_11_16[1] = get_internal_image(3031);
            images_inmatedtaf7_494_11_24[0] = get_internal_image(3032);
            images_inmatedtaf7_494_11_24[1] = get_internal_image(3033);
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
FrameObject * create_inmatedtaf7_494(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF7_494(x, y);
}
static Image* images_inmatedtaf8_495_0_0[2];
static Direction direction_inmatedtaf8_495_0_0 = {0, 10, 10, 0, -1, images_inmatedtaf8_495_0_0, 2};
static Image* images_inmatedtaf8_495_0_8[2];
static Direction direction_inmatedtaf8_495_0_8 = {8, 10, 10, 0, -1, images_inmatedtaf8_495_0_8, 2};
static Image* images_inmatedtaf8_495_0_16[2];
static Direction direction_inmatedtaf8_495_0_16 = {16, 10, 10, 0, -1, images_inmatedtaf8_495_0_16, 2};
static Image* images_inmatedtaf8_495_0_24[2];
static Direction direction_inmatedtaf8_495_0_24 = {24, 10, 10, 0, -1, images_inmatedtaf8_495_0_24, 2};
static Animation anim_inmatedtaf8_495_0 = {&direction_inmatedtaf8_495_0_0, &direction_inmatedtaf8_495_0_0, &direction_inmatedtaf8_495_0_0, &direction_inmatedtaf8_495_0_0, NULL, &direction_inmatedtaf8_495_0_8, &direction_inmatedtaf8_495_0_8, &direction_inmatedtaf8_495_0_8, &direction_inmatedtaf8_495_0_8, &direction_inmatedtaf8_495_0_8, &direction_inmatedtaf8_495_0_8, &direction_inmatedtaf8_495_0_8, NULL, &direction_inmatedtaf8_495_0_16, &direction_inmatedtaf8_495_0_16, &direction_inmatedtaf8_495_0_16, &direction_inmatedtaf8_495_0_16, &direction_inmatedtaf8_495_0_16, &direction_inmatedtaf8_495_0_16, &direction_inmatedtaf8_495_0_16, NULL, &direction_inmatedtaf8_495_0_24, &direction_inmatedtaf8_495_0_24, &direction_inmatedtaf8_495_0_24, &direction_inmatedtaf8_495_0_24, &direction_inmatedtaf8_495_0_24, &direction_inmatedtaf8_495_0_24, &direction_inmatedtaf8_495_0_24, NULL, &direction_inmatedtaf8_495_0_0, &direction_inmatedtaf8_495_0_0, &direction_inmatedtaf8_495_0_0};
static Image* images_inmatedtaf8_495_4_0[4];
static Direction direction_inmatedtaf8_495_4_0 = {0, 20, 20, 0, 1, images_inmatedtaf8_495_4_0, 4};
static Image* images_inmatedtaf8_495_4_16[4];
static Direction direction_inmatedtaf8_495_4_16 = {16, 20, 20, 0, 1, images_inmatedtaf8_495_4_16, 4};
static Animation anim_inmatedtaf8_495_4 = {&direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, NULL, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, &direction_inmatedtaf8_495_4_16, NULL, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0, &direction_inmatedtaf8_495_4_0};
static Image* images_inmatedtaf8_495_6_0[1];
static Direction direction_inmatedtaf8_495_6_0 = {0, 6, 6, 0, 1, images_inmatedtaf8_495_6_0, 1};
static Image* images_inmatedtaf8_495_6_8[1];
static Direction direction_inmatedtaf8_495_6_8 = {8, 6, 6, 0, 1, images_inmatedtaf8_495_6_8, 1};
static Image* images_inmatedtaf8_495_6_16[1];
static Direction direction_inmatedtaf8_495_6_16 = {16, 6, 6, 0, 1, images_inmatedtaf8_495_6_16, 1};
static Image* images_inmatedtaf8_495_6_24[1];
static Direction direction_inmatedtaf8_495_6_24 = {24, 6, 6, 0, 1, images_inmatedtaf8_495_6_24, 1};
static Animation anim_inmatedtaf8_495_6 = {&direction_inmatedtaf8_495_6_0, &direction_inmatedtaf8_495_6_0, &direction_inmatedtaf8_495_6_0, &direction_inmatedtaf8_495_6_0, NULL, &direction_inmatedtaf8_495_6_8, &direction_inmatedtaf8_495_6_8, &direction_inmatedtaf8_495_6_8, &direction_inmatedtaf8_495_6_8, &direction_inmatedtaf8_495_6_8, &direction_inmatedtaf8_495_6_8, &direction_inmatedtaf8_495_6_8, NULL, &direction_inmatedtaf8_495_6_16, &direction_inmatedtaf8_495_6_16, &direction_inmatedtaf8_495_6_16, &direction_inmatedtaf8_495_6_16, &direction_inmatedtaf8_495_6_16, &direction_inmatedtaf8_495_6_16, &direction_inmatedtaf8_495_6_16, NULL, &direction_inmatedtaf8_495_6_24, &direction_inmatedtaf8_495_6_24, &direction_inmatedtaf8_495_6_24, &direction_inmatedtaf8_495_6_24, &direction_inmatedtaf8_495_6_24, &direction_inmatedtaf8_495_6_24, &direction_inmatedtaf8_495_6_24, NULL, &direction_inmatedtaf8_495_6_0, &direction_inmatedtaf8_495_6_0, &direction_inmatedtaf8_495_6_0};
static Image* images_inmatedtaf8_495_8_0[1];
static Direction direction_inmatedtaf8_495_8_0 = {0, 10, 10, 0, -1, images_inmatedtaf8_495_8_0, 1};
static Image* images_inmatedtaf8_495_8_16[2];
static Direction direction_inmatedtaf8_495_8_16 = {16, 5, 5, 0, -1, images_inmatedtaf8_495_8_16, 2};
static Image* images_inmatedtaf8_495_8_24[1];
static Direction direction_inmatedtaf8_495_8_24 = {24, 10, 10, 0, -1, images_inmatedtaf8_495_8_24, 1};
static Animation anim_inmatedtaf8_495_8 = {&direction_inmatedtaf8_495_8_0, &direction_inmatedtaf8_495_8_0, &direction_inmatedtaf8_495_8_0, &direction_inmatedtaf8_495_8_0, &direction_inmatedtaf8_495_8_0, &direction_inmatedtaf8_495_8_0, &direction_inmatedtaf8_495_8_0, &direction_inmatedtaf8_495_8_0, NULL, &direction_inmatedtaf8_495_8_16, &direction_inmatedtaf8_495_8_16, &direction_inmatedtaf8_495_8_16, &direction_inmatedtaf8_495_8_16, &direction_inmatedtaf8_495_8_16, &direction_inmatedtaf8_495_8_16, &direction_inmatedtaf8_495_8_16, &direction_inmatedtaf8_495_8_16, &direction_inmatedtaf8_495_8_16, &direction_inmatedtaf8_495_8_16, &direction_inmatedtaf8_495_8_16, NULL, &direction_inmatedtaf8_495_8_24, &direction_inmatedtaf8_495_8_24, &direction_inmatedtaf8_495_8_24, &direction_inmatedtaf8_495_8_24, &direction_inmatedtaf8_495_8_24, &direction_inmatedtaf8_495_8_24, &direction_inmatedtaf8_495_8_24, NULL, &direction_inmatedtaf8_495_8_0, &direction_inmatedtaf8_495_8_0, &direction_inmatedtaf8_495_8_0};
static Image* images_inmatedtaf8_495_9_0[2];
static Direction direction_inmatedtaf8_495_9_0 = {0, 5, 5, 0, -1, images_inmatedtaf8_495_9_0, 2};
static Animation anim_inmatedtaf8_495_9 = {&direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, NULL, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0, &direction_inmatedtaf8_495_9_0};
static Image* images_inmatedtaf8_495_10_0[5];
static Direction direction_inmatedtaf8_495_10_0 = {0, 10, 10, 0, -1, images_inmatedtaf8_495_10_0, 5};
static Animation anim_inmatedtaf8_495_10 = {&direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, NULL, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0, &direction_inmatedtaf8_495_10_0};
static Image* images_inmatedtaf8_495_11_0[2];
static Direction direction_inmatedtaf8_495_11_0 = {0, 6, 6, 0, -1, images_inmatedtaf8_495_11_0, 2};
static Image* images_inmatedtaf8_495_11_8[2];
static Direction direction_inmatedtaf8_495_11_8 = {8, 6, 6, 0, -1, images_inmatedtaf8_495_11_8, 2};
static Image* images_inmatedtaf8_495_11_16[2];
static Direction direction_inmatedtaf8_495_11_16 = {16, 6, 6, 0, -1, images_inmatedtaf8_495_11_16, 2};
static Image* images_inmatedtaf8_495_11_24[2];
static Direction direction_inmatedtaf8_495_11_24 = {24, 6, 6, 0, -1, images_inmatedtaf8_495_11_24, 2};
static Animation anim_inmatedtaf8_495_11 = {&direction_inmatedtaf8_495_11_0, &direction_inmatedtaf8_495_11_0, &direction_inmatedtaf8_495_11_0, &direction_inmatedtaf8_495_11_0, NULL, &direction_inmatedtaf8_495_11_8, &direction_inmatedtaf8_495_11_8, &direction_inmatedtaf8_495_11_8, &direction_inmatedtaf8_495_11_8, &direction_inmatedtaf8_495_11_8, &direction_inmatedtaf8_495_11_8, &direction_inmatedtaf8_495_11_8, NULL, &direction_inmatedtaf8_495_11_16, &direction_inmatedtaf8_495_11_16, &direction_inmatedtaf8_495_11_16, &direction_inmatedtaf8_495_11_16, &direction_inmatedtaf8_495_11_16, &direction_inmatedtaf8_495_11_16, &direction_inmatedtaf8_495_11_16, NULL, &direction_inmatedtaf8_495_11_24, &direction_inmatedtaf8_495_11_24, &direction_inmatedtaf8_495_11_24, &direction_inmatedtaf8_495_11_24, &direction_inmatedtaf8_495_11_24, &direction_inmatedtaf8_495_11_24, &direction_inmatedtaf8_495_11_24, NULL, &direction_inmatedtaf8_495_11_0, &direction_inmatedtaf8_495_11_0, &direction_inmatedtaf8_495_11_0};
static Image* images_inmatedtaf8_495_18_24[8];
static Direction direction_inmatedtaf8_495_18_24 = {24, 10, 10, 0, -1, images_inmatedtaf8_495_18_24, 8};
static Animation anim_inmatedtaf8_495_18 = {&direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, NULL, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24, &direction_inmatedtaf8_495_18_24};
static Image* images_inmatedtaf8_495_19_24[6];
static Direction direction_inmatedtaf8_495_19_24 = {24, 10, 10, 0, -1, images_inmatedtaf8_495_19_24, 6};
static Animation anim_inmatedtaf8_495_19 = {&direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, NULL, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24, &direction_inmatedtaf8_495_19_24};
static Animation * anim_array_inmatedtaf8_495[20] = {&anim_inmatedtaf8_495_0, NULL, NULL, NULL, &anim_inmatedtaf8_495_4, NULL, &anim_inmatedtaf8_495_6, NULL, &anim_inmatedtaf8_495_8, &anim_inmatedtaf8_495_9, &anim_inmatedtaf8_495_10, &anim_inmatedtaf8_495_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmatedtaf8_495_18, &anim_inmatedtaf8_495_19};
static Animations anim_inmatedtaf8_495 = {20, &anim_array_inmatedtaf8_495[0]};
static bool anim_inmatedtaf8_495_initialized;
class InmateDTAF8_495 : public Active
{
public:
    InmateDTAF8_495(int x, int y) : Active(x, y, InmateDTAF8_495_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 8", 13);
#endif
        this->animations = &anim_inmatedtaf8_495;
        if (!anim_inmatedtaf8_495_initialized) {
            anim_inmatedtaf8_495_initialized = true;
            images_inmatedtaf8_495_0_0[0] = get_internal_image(2960);
            images_inmatedtaf8_495_0_0[1] = get_internal_image(2961);
            images_inmatedtaf8_495_0_8[0] = get_internal_image(2966);
            images_inmatedtaf8_495_0_8[1] = get_internal_image(2967);
            images_inmatedtaf8_495_0_16[0] = get_internal_image(2962);
            images_inmatedtaf8_495_0_16[1] = get_internal_image(2963);
            images_inmatedtaf8_495_0_24[0] = get_internal_image(2964);
            images_inmatedtaf8_495_0_24[1] = get_internal_image(2965);
            images_inmatedtaf8_495_4_0[0] = get_internal_image(369);
            images_inmatedtaf8_495_4_0[1] = get_internal_image(373);
            images_inmatedtaf8_495_4_0[2] = get_internal_image(369);
            images_inmatedtaf8_495_4_0[3] = get_internal_image(373);
            images_inmatedtaf8_495_4_16[0] = get_internal_image(371);
            images_inmatedtaf8_495_4_16[1] = get_internal_image(763);
            images_inmatedtaf8_495_4_16[2] = get_internal_image(371);
            images_inmatedtaf8_495_4_16[3] = get_internal_image(763);
            images_inmatedtaf8_495_6_0[0] = get_internal_image(3017);
            images_inmatedtaf8_495_6_8[0] = get_internal_image(3020);
            images_inmatedtaf8_495_6_16[0] = get_internal_image(3016);
            images_inmatedtaf8_495_6_24[0] = get_internal_image(3019);
            images_inmatedtaf8_495_8_0[0] = get_internal_image(2730);
            images_inmatedtaf8_495_8_16[0] = get_internal_image(3278);
            images_inmatedtaf8_495_8_16[1] = get_internal_image(3279);
            images_inmatedtaf8_495_8_24[0] = get_internal_image(3281);
            images_inmatedtaf8_495_9_0[0] = get_internal_image(1502);
            images_inmatedtaf8_495_9_0[1] = get_internal_image(1506);
            images_inmatedtaf8_495_10_0[0] = get_internal_image(3328);
            images_inmatedtaf8_495_10_0[1] = get_internal_image(3329);
            images_inmatedtaf8_495_10_0[2] = get_internal_image(3331);
            images_inmatedtaf8_495_10_0[3] = get_internal_image(3329);
            images_inmatedtaf8_495_10_0[4] = get_internal_image(3328);
            images_inmatedtaf8_495_11_0[0] = get_internal_image(2988);
            images_inmatedtaf8_495_11_0[1] = get_internal_image(2986);
            images_inmatedtaf8_495_11_8[0] = get_internal_image(3003);
            images_inmatedtaf8_495_11_8[1] = get_internal_image(3025);
            images_inmatedtaf8_495_11_16[0] = get_internal_image(2991);
            images_inmatedtaf8_495_11_16[1] = get_internal_image(3024);
            images_inmatedtaf8_495_11_24[0] = get_internal_image(3026);
            images_inmatedtaf8_495_11_24[1] = get_internal_image(3027);
            images_inmatedtaf8_495_18_24[0] = get_internal_image(2099);
            images_inmatedtaf8_495_18_24[1] = get_internal_image(2112);
            images_inmatedtaf8_495_18_24[2] = get_internal_image(2107);
            images_inmatedtaf8_495_18_24[3] = get_internal_image(2108);
            images_inmatedtaf8_495_18_24[4] = get_internal_image(2109);
            images_inmatedtaf8_495_18_24[5] = get_internal_image(2114);
            images_inmatedtaf8_495_18_24[6] = get_internal_image(2110);
            images_inmatedtaf8_495_18_24[7] = get_internal_image(2111);
            images_inmatedtaf8_495_19_24[0] = get_internal_image(2150);
            images_inmatedtaf8_495_19_24[1] = get_internal_image(2156);
            images_inmatedtaf8_495_19_24[2] = get_internal_image(2157);
            images_inmatedtaf8_495_19_24[3] = get_internal_image(2157);
            images_inmatedtaf8_495_19_24[4] = get_internal_image(2156);
            images_inmatedtaf8_495_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmatedtaf8_495(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF8_495(x, y);
}
static Image* images_inmatedtaf9_496_0_0[2];
static Direction direction_inmatedtaf9_496_0_0 = {0, 10, 10, 0, -1, images_inmatedtaf9_496_0_0, 2};
static Image* images_inmatedtaf9_496_0_8[2];
static Direction direction_inmatedtaf9_496_0_8 = {8, 10, 10, 0, -1, images_inmatedtaf9_496_0_8, 2};
static Image* images_inmatedtaf9_496_0_16[2];
static Direction direction_inmatedtaf9_496_0_16 = {16, 10, 10, 0, -1, images_inmatedtaf9_496_0_16, 2};
static Image* images_inmatedtaf9_496_0_24[2];
static Direction direction_inmatedtaf9_496_0_24 = {24, 10, 10, 0, -1, images_inmatedtaf9_496_0_24, 2};
static Animation anim_inmatedtaf9_496_0 = {&direction_inmatedtaf9_496_0_0, &direction_inmatedtaf9_496_0_0, &direction_inmatedtaf9_496_0_0, &direction_inmatedtaf9_496_0_0, NULL, &direction_inmatedtaf9_496_0_8, &direction_inmatedtaf9_496_0_8, &direction_inmatedtaf9_496_0_8, &direction_inmatedtaf9_496_0_8, &direction_inmatedtaf9_496_0_8, &direction_inmatedtaf9_496_0_8, &direction_inmatedtaf9_496_0_8, NULL, &direction_inmatedtaf9_496_0_16, &direction_inmatedtaf9_496_0_16, &direction_inmatedtaf9_496_0_16, &direction_inmatedtaf9_496_0_16, &direction_inmatedtaf9_496_0_16, &direction_inmatedtaf9_496_0_16, &direction_inmatedtaf9_496_0_16, NULL, &direction_inmatedtaf9_496_0_24, &direction_inmatedtaf9_496_0_24, &direction_inmatedtaf9_496_0_24, &direction_inmatedtaf9_496_0_24, &direction_inmatedtaf9_496_0_24, &direction_inmatedtaf9_496_0_24, &direction_inmatedtaf9_496_0_24, NULL, &direction_inmatedtaf9_496_0_0, &direction_inmatedtaf9_496_0_0, &direction_inmatedtaf9_496_0_0};
static Image* images_inmatedtaf9_496_4_0[4];
static Direction direction_inmatedtaf9_496_4_0 = {0, 20, 20, 0, 1, images_inmatedtaf9_496_4_0, 4};
static Image* images_inmatedtaf9_496_4_16[4];
static Direction direction_inmatedtaf9_496_4_16 = {16, 20, 20, 0, 1, images_inmatedtaf9_496_4_16, 4};
static Animation anim_inmatedtaf9_496_4 = {&direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, NULL, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, &direction_inmatedtaf9_496_4_16, NULL, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0, &direction_inmatedtaf9_496_4_0};
static Image* images_inmatedtaf9_496_6_0[1];
static Direction direction_inmatedtaf9_496_6_0 = {0, 6, 6, 0, 1, images_inmatedtaf9_496_6_0, 1};
static Image* images_inmatedtaf9_496_6_8[1];
static Direction direction_inmatedtaf9_496_6_8 = {8, 6, 6, 0, 1, images_inmatedtaf9_496_6_8, 1};
static Image* images_inmatedtaf9_496_6_16[1];
static Direction direction_inmatedtaf9_496_6_16 = {16, 6, 6, 0, 1, images_inmatedtaf9_496_6_16, 1};
static Image* images_inmatedtaf9_496_6_24[1];
static Direction direction_inmatedtaf9_496_6_24 = {24, 6, 6, 0, 1, images_inmatedtaf9_496_6_24, 1};
static Animation anim_inmatedtaf9_496_6 = {&direction_inmatedtaf9_496_6_0, &direction_inmatedtaf9_496_6_0, &direction_inmatedtaf9_496_6_0, &direction_inmatedtaf9_496_6_0, NULL, &direction_inmatedtaf9_496_6_8, &direction_inmatedtaf9_496_6_8, &direction_inmatedtaf9_496_6_8, &direction_inmatedtaf9_496_6_8, &direction_inmatedtaf9_496_6_8, &direction_inmatedtaf9_496_6_8, &direction_inmatedtaf9_496_6_8, NULL, &direction_inmatedtaf9_496_6_16, &direction_inmatedtaf9_496_6_16, &direction_inmatedtaf9_496_6_16, &direction_inmatedtaf9_496_6_16, &direction_inmatedtaf9_496_6_16, &direction_inmatedtaf9_496_6_16, &direction_inmatedtaf9_496_6_16, NULL, &direction_inmatedtaf9_496_6_24, &direction_inmatedtaf9_496_6_24, &direction_inmatedtaf9_496_6_24, &direction_inmatedtaf9_496_6_24, &direction_inmatedtaf9_496_6_24, &direction_inmatedtaf9_496_6_24, &direction_inmatedtaf9_496_6_24, NULL, &direction_inmatedtaf9_496_6_0, &direction_inmatedtaf9_496_6_0, &direction_inmatedtaf9_496_6_0};
static Image* images_inmatedtaf9_496_8_0[1];
static Direction direction_inmatedtaf9_496_8_0 = {0, 10, 10, 0, -1, images_inmatedtaf9_496_8_0, 1};
static Image* images_inmatedtaf9_496_8_16[2];
static Direction direction_inmatedtaf9_496_8_16 = {16, 5, 5, 0, -1, images_inmatedtaf9_496_8_16, 2};
static Image* images_inmatedtaf9_496_8_24[1];
static Direction direction_inmatedtaf9_496_8_24 = {24, 10, 10, 0, -1, images_inmatedtaf9_496_8_24, 1};
static Animation anim_inmatedtaf9_496_8 = {&direction_inmatedtaf9_496_8_0, &direction_inmatedtaf9_496_8_0, &direction_inmatedtaf9_496_8_0, &direction_inmatedtaf9_496_8_0, &direction_inmatedtaf9_496_8_0, &direction_inmatedtaf9_496_8_0, &direction_inmatedtaf9_496_8_0, &direction_inmatedtaf9_496_8_0, NULL, &direction_inmatedtaf9_496_8_16, &direction_inmatedtaf9_496_8_16, &direction_inmatedtaf9_496_8_16, &direction_inmatedtaf9_496_8_16, &direction_inmatedtaf9_496_8_16, &direction_inmatedtaf9_496_8_16, &direction_inmatedtaf9_496_8_16, &direction_inmatedtaf9_496_8_16, &direction_inmatedtaf9_496_8_16, &direction_inmatedtaf9_496_8_16, &direction_inmatedtaf9_496_8_16, NULL, &direction_inmatedtaf9_496_8_24, &direction_inmatedtaf9_496_8_24, &direction_inmatedtaf9_496_8_24, &direction_inmatedtaf9_496_8_24, &direction_inmatedtaf9_496_8_24, &direction_inmatedtaf9_496_8_24, &direction_inmatedtaf9_496_8_24, NULL, &direction_inmatedtaf9_496_8_0, &direction_inmatedtaf9_496_8_0, &direction_inmatedtaf9_496_8_0};
static Image* images_inmatedtaf9_496_10_0[5];
static Direction direction_inmatedtaf9_496_10_0 = {0, 10, 10, 0, -1, images_inmatedtaf9_496_10_0, 5};
static Animation anim_inmatedtaf9_496_10 = {&direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, NULL, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0, &direction_inmatedtaf9_496_10_0};
static Image* images_inmatedtaf9_496_11_0[2];
static Direction direction_inmatedtaf9_496_11_0 = {0, 6, 6, 0, -1, images_inmatedtaf9_496_11_0, 2};
static Image* images_inmatedtaf9_496_11_8[2];
static Direction direction_inmatedtaf9_496_11_8 = {8, 6, 6, 0, -1, images_inmatedtaf9_496_11_8, 2};
static Image* images_inmatedtaf9_496_11_16[2];
static Direction direction_inmatedtaf9_496_11_16 = {16, 6, 6, 0, -1, images_inmatedtaf9_496_11_16, 2};
static Image* images_inmatedtaf9_496_11_24[2];
static Direction direction_inmatedtaf9_496_11_24 = {24, 6, 6, 0, -1, images_inmatedtaf9_496_11_24, 2};
static Animation anim_inmatedtaf9_496_11 = {&direction_inmatedtaf9_496_11_0, &direction_inmatedtaf9_496_11_0, &direction_inmatedtaf9_496_11_0, &direction_inmatedtaf9_496_11_0, NULL, &direction_inmatedtaf9_496_11_8, &direction_inmatedtaf9_496_11_8, &direction_inmatedtaf9_496_11_8, &direction_inmatedtaf9_496_11_8, &direction_inmatedtaf9_496_11_8, &direction_inmatedtaf9_496_11_8, &direction_inmatedtaf9_496_11_8, NULL, &direction_inmatedtaf9_496_11_16, &direction_inmatedtaf9_496_11_16, &direction_inmatedtaf9_496_11_16, &direction_inmatedtaf9_496_11_16, &direction_inmatedtaf9_496_11_16, &direction_inmatedtaf9_496_11_16, &direction_inmatedtaf9_496_11_16, NULL, &direction_inmatedtaf9_496_11_24, &direction_inmatedtaf9_496_11_24, &direction_inmatedtaf9_496_11_24, &direction_inmatedtaf9_496_11_24, &direction_inmatedtaf9_496_11_24, &direction_inmatedtaf9_496_11_24, &direction_inmatedtaf9_496_11_24, NULL, &direction_inmatedtaf9_496_11_0, &direction_inmatedtaf9_496_11_0, &direction_inmatedtaf9_496_11_0};
static Image* images_inmatedtaf9_496_18_24[8];
static Direction direction_inmatedtaf9_496_18_24 = {24, 10, 10, 0, -1, images_inmatedtaf9_496_18_24, 8};
static Animation anim_inmatedtaf9_496_18 = {&direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, NULL, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24, &direction_inmatedtaf9_496_18_24};
static Image* images_inmatedtaf9_496_19_24[6];
static Direction direction_inmatedtaf9_496_19_24 = {24, 10, 10, 0, -1, images_inmatedtaf9_496_19_24, 6};
static Animation anim_inmatedtaf9_496_19 = {&direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, NULL, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24, &direction_inmatedtaf9_496_19_24};
static Animation * anim_array_inmatedtaf9_496[20] = {&anim_inmatedtaf9_496_0, NULL, NULL, NULL, &anim_inmatedtaf9_496_4, NULL, &anim_inmatedtaf9_496_6, NULL, &anim_inmatedtaf9_496_8, NULL, &anim_inmatedtaf9_496_10, &anim_inmatedtaf9_496_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmatedtaf9_496_18, &anim_inmatedtaf9_496_19};
static Animations anim_inmatedtaf9_496 = {20, &anim_array_inmatedtaf9_496[0]};
static bool anim_inmatedtaf9_496_initialized;
class InmateDTAF9_496 : public Active
{
public:
    InmateDTAF9_496(int x, int y) : Active(x, y, InmateDTAF9_496_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 9", 13);
#endif
        this->animations = &anim_inmatedtaf9_496;
        if (!anim_inmatedtaf9_496_initialized) {
            anim_inmatedtaf9_496_initialized = true;
            images_inmatedtaf9_496_0_0[0] = get_internal_image(2968);
            images_inmatedtaf9_496_0_0[1] = get_internal_image(2969);
            images_inmatedtaf9_496_0_8[0] = get_internal_image(2974);
            images_inmatedtaf9_496_0_8[1] = get_internal_image(2975);
            images_inmatedtaf9_496_0_16[0] = get_internal_image(2970);
            images_inmatedtaf9_496_0_16[1] = get_internal_image(2971);
            images_inmatedtaf9_496_0_24[0] = get_internal_image(2972);
            images_inmatedtaf9_496_0_24[1] = get_internal_image(2973);
            images_inmatedtaf9_496_4_0[0] = get_internal_image(369);
            images_inmatedtaf9_496_4_0[1] = get_internal_image(373);
            images_inmatedtaf9_496_4_0[2] = get_internal_image(369);
            images_inmatedtaf9_496_4_0[3] = get_internal_image(373);
            images_inmatedtaf9_496_4_16[0] = get_internal_image(371);
            images_inmatedtaf9_496_4_16[1] = get_internal_image(763);
            images_inmatedtaf9_496_4_16[2] = get_internal_image(371);
            images_inmatedtaf9_496_4_16[3] = get_internal_image(763);
            images_inmatedtaf9_496_6_0[0] = get_internal_image(3021);
            images_inmatedtaf9_496_6_8[0] = get_internal_image(3023);
            images_inmatedtaf9_496_6_16[0] = get_internal_image(3018);
            images_inmatedtaf9_496_6_24[0] = get_internal_image(3022);
            images_inmatedtaf9_496_8_0[0] = get_internal_image(2730);
            images_inmatedtaf9_496_8_16[0] = get_internal_image(3280);
            images_inmatedtaf9_496_8_16[1] = get_internal_image(3282);
            images_inmatedtaf9_496_8_24[0] = get_internal_image(3285);
            images_inmatedtaf9_496_10_0[0] = get_internal_image(2743);
            images_inmatedtaf9_496_10_0[1] = get_internal_image(2742);
            images_inmatedtaf9_496_10_0[2] = get_internal_image(2744);
            images_inmatedtaf9_496_10_0[3] = get_internal_image(2744);
            images_inmatedtaf9_496_10_0[4] = get_internal_image(2742);
            images_inmatedtaf9_496_11_0[0] = get_internal_image(2900);
            images_inmatedtaf9_496_11_0[1] = get_internal_image(2897);
            images_inmatedtaf9_496_11_8[0] = get_internal_image(2985);
            images_inmatedtaf9_496_11_8[1] = get_internal_image(2909);
            images_inmatedtaf9_496_11_16[0] = get_internal_image(2901);
            images_inmatedtaf9_496_11_16[1] = get_internal_image(2908);
            images_inmatedtaf9_496_11_24[0] = get_internal_image(2928);
            images_inmatedtaf9_496_11_24[1] = get_internal_image(2898);
            images_inmatedtaf9_496_18_24[0] = get_internal_image(2099);
            images_inmatedtaf9_496_18_24[1] = get_internal_image(2112);
            images_inmatedtaf9_496_18_24[2] = get_internal_image(2107);
            images_inmatedtaf9_496_18_24[3] = get_internal_image(2108);
            images_inmatedtaf9_496_18_24[4] = get_internal_image(2109);
            images_inmatedtaf9_496_18_24[5] = get_internal_image(2114);
            images_inmatedtaf9_496_18_24[6] = get_internal_image(2110);
            images_inmatedtaf9_496_18_24[7] = get_internal_image(2111);
            images_inmatedtaf9_496_19_24[0] = get_internal_image(2150);
            images_inmatedtaf9_496_19_24[1] = get_internal_image(2156);
            images_inmatedtaf9_496_19_24[2] = get_internal_image(2157);
            images_inmatedtaf9_496_19_24[3] = get_internal_image(2157);
            images_inmatedtaf9_496_19_24[4] = get_internal_image(2156);
            images_inmatedtaf9_496_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmatedtaf9_496(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF9_496(x, y);
}
static Image* images_playerdtaf_497_0_0[2];
static Direction direction_playerdtaf_497_0_0 = {0, 10, 10, 0, -1, images_playerdtaf_497_0_0, 2};
static Image* images_playerdtaf_497_0_8[2];
static Direction direction_playerdtaf_497_0_8 = {8, 10, 10, 0, -1, images_playerdtaf_497_0_8, 2};
static Image* images_playerdtaf_497_0_16[2];
static Direction direction_playerdtaf_497_0_16 = {16, 10, 10, 0, -1, images_playerdtaf_497_0_16, 2};
static Image* images_playerdtaf_497_0_24[2];
static Direction direction_playerdtaf_497_0_24 = {24, 10, 10, 0, -1, images_playerdtaf_497_0_24, 2};
static Animation anim_playerdtaf_497_0 = {&direction_playerdtaf_497_0_0, &direction_playerdtaf_497_0_0, &direction_playerdtaf_497_0_0, &direction_playerdtaf_497_0_0, NULL, &direction_playerdtaf_497_0_8, &direction_playerdtaf_497_0_8, &direction_playerdtaf_497_0_8, &direction_playerdtaf_497_0_8, &direction_playerdtaf_497_0_8, &direction_playerdtaf_497_0_8, &direction_playerdtaf_497_0_8, NULL, &direction_playerdtaf_497_0_16, &direction_playerdtaf_497_0_16, &direction_playerdtaf_497_0_16, &direction_playerdtaf_497_0_16, &direction_playerdtaf_497_0_16, &direction_playerdtaf_497_0_16, &direction_playerdtaf_497_0_16, NULL, &direction_playerdtaf_497_0_24, &direction_playerdtaf_497_0_24, &direction_playerdtaf_497_0_24, &direction_playerdtaf_497_0_24, &direction_playerdtaf_497_0_24, &direction_playerdtaf_497_0_24, &direction_playerdtaf_497_0_24, NULL, &direction_playerdtaf_497_0_0, &direction_playerdtaf_497_0_0, &direction_playerdtaf_497_0_0};
static Image* images_playerdtaf_497_4_0[4];
static Direction direction_playerdtaf_497_4_0 = {0, 20, 20, 0, 1, images_playerdtaf_497_4_0, 4};
static Image* images_playerdtaf_497_4_16[4];
static Direction direction_playerdtaf_497_4_16 = {16, 20, 20, 0, 1, images_playerdtaf_497_4_16, 4};
static Animation anim_playerdtaf_497_4 = {&direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, NULL, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, &direction_playerdtaf_497_4_16, NULL, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0, &direction_playerdtaf_497_4_0};
static Image* images_playerdtaf_497_6_0[1];
static Direction direction_playerdtaf_497_6_0 = {0, 6, 6, 0, 1, images_playerdtaf_497_6_0, 1};
static Image* images_playerdtaf_497_6_8[1];
static Direction direction_playerdtaf_497_6_8 = {8, 6, 6, 0, 1, images_playerdtaf_497_6_8, 1};
static Image* images_playerdtaf_497_6_16[1];
static Direction direction_playerdtaf_497_6_16 = {16, 6, 6, 0, 1, images_playerdtaf_497_6_16, 1};
static Image* images_playerdtaf_497_6_24[1];
static Direction direction_playerdtaf_497_6_24 = {24, 6, 6, 0, 1, images_playerdtaf_497_6_24, 1};
static Animation anim_playerdtaf_497_6 = {&direction_playerdtaf_497_6_0, &direction_playerdtaf_497_6_0, &direction_playerdtaf_497_6_0, &direction_playerdtaf_497_6_0, NULL, &direction_playerdtaf_497_6_8, &direction_playerdtaf_497_6_8, &direction_playerdtaf_497_6_8, &direction_playerdtaf_497_6_8, &direction_playerdtaf_497_6_8, &direction_playerdtaf_497_6_8, &direction_playerdtaf_497_6_8, NULL, &direction_playerdtaf_497_6_16, &direction_playerdtaf_497_6_16, &direction_playerdtaf_497_6_16, &direction_playerdtaf_497_6_16, &direction_playerdtaf_497_6_16, &direction_playerdtaf_497_6_16, &direction_playerdtaf_497_6_16, NULL, &direction_playerdtaf_497_6_24, &direction_playerdtaf_497_6_24, &direction_playerdtaf_497_6_24, &direction_playerdtaf_497_6_24, &direction_playerdtaf_497_6_24, &direction_playerdtaf_497_6_24, &direction_playerdtaf_497_6_24, NULL, &direction_playerdtaf_497_6_0, &direction_playerdtaf_497_6_0, &direction_playerdtaf_497_6_0};
static Image* images_playerdtaf_497_7_0[2];
static Direction direction_playerdtaf_497_7_0 = {0, 10, 10, 0, -1, images_playerdtaf_497_7_0, 2};
static Image* images_playerdtaf_497_7_8[2];
static Direction direction_playerdtaf_497_7_8 = {8, 10, 10, 0, -1, images_playerdtaf_497_7_8, 2};
static Image* images_playerdtaf_497_7_16[2];
static Direction direction_playerdtaf_497_7_16 = {16, 10, 10, 0, -1, images_playerdtaf_497_7_16, 2};
static Image* images_playerdtaf_497_7_24[2];
static Direction direction_playerdtaf_497_7_24 = {24, 10, 10, 0, -1, images_playerdtaf_497_7_24, 2};
static Animation anim_playerdtaf_497_7 = {&direction_playerdtaf_497_7_0, &direction_playerdtaf_497_7_0, &direction_playerdtaf_497_7_0, &direction_playerdtaf_497_7_0, NULL, &direction_playerdtaf_497_7_8, &direction_playerdtaf_497_7_8, &direction_playerdtaf_497_7_8, &direction_playerdtaf_497_7_8, &direction_playerdtaf_497_7_8, &direction_playerdtaf_497_7_8, &direction_playerdtaf_497_7_8, NULL, &direction_playerdtaf_497_7_16, &direction_playerdtaf_497_7_16, &direction_playerdtaf_497_7_16, &direction_playerdtaf_497_7_16, &direction_playerdtaf_497_7_16, &direction_playerdtaf_497_7_16, &direction_playerdtaf_497_7_16, NULL, &direction_playerdtaf_497_7_24, &direction_playerdtaf_497_7_24, &direction_playerdtaf_497_7_24, &direction_playerdtaf_497_7_24, &direction_playerdtaf_497_7_24, &direction_playerdtaf_497_7_24, &direction_playerdtaf_497_7_24, NULL, &direction_playerdtaf_497_7_0, &direction_playerdtaf_497_7_0, &direction_playerdtaf_497_7_0};
static Image* images_playerdtaf_497_8_0[1];
static Direction direction_playerdtaf_497_8_0 = {0, 50, 50, 0, -1, images_playerdtaf_497_8_0, 1};
static Image* images_playerdtaf_497_8_24[1];
static Direction direction_playerdtaf_497_8_24 = {24, 50, 50, 0, -1, images_playerdtaf_497_8_24, 1};
static Animation anim_playerdtaf_497_8 = {&direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, NULL, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, &direction_playerdtaf_497_8_24, NULL, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0, &direction_playerdtaf_497_8_0};
static Image* images_playerdtaf_497_10_0[5];
static Direction direction_playerdtaf_497_10_0 = {0, 10, 10, 0, 1, images_playerdtaf_497_10_0, 5};
static Animation anim_playerdtaf_497_10 = {&direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, NULL, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0, &direction_playerdtaf_497_10_0};
static Image* images_playerdtaf_497_11_0[2];
static Direction direction_playerdtaf_497_11_0 = {0, 10, 10, 0, -1, images_playerdtaf_497_11_0, 2};
static Image* images_playerdtaf_497_11_8[2];
static Direction direction_playerdtaf_497_11_8 = {8, 10, 10, 0, -1, images_playerdtaf_497_11_8, 2};
static Image* images_playerdtaf_497_11_16[2];
static Direction direction_playerdtaf_497_11_16 = {16, 10, 10, 0, -1, images_playerdtaf_497_11_16, 2};
static Image* images_playerdtaf_497_11_24[2];
static Direction direction_playerdtaf_497_11_24 = {24, 10, 10, 0, -1, images_playerdtaf_497_11_24, 2};
static Animation anim_playerdtaf_497_11 = {&direction_playerdtaf_497_11_0, &direction_playerdtaf_497_11_0, &direction_playerdtaf_497_11_0, &direction_playerdtaf_497_11_0, NULL, &direction_playerdtaf_497_11_8, &direction_playerdtaf_497_11_8, &direction_playerdtaf_497_11_8, &direction_playerdtaf_497_11_8, &direction_playerdtaf_497_11_8, &direction_playerdtaf_497_11_8, &direction_playerdtaf_497_11_8, NULL, &direction_playerdtaf_497_11_16, &direction_playerdtaf_497_11_16, &direction_playerdtaf_497_11_16, &direction_playerdtaf_497_11_16, &direction_playerdtaf_497_11_16, &direction_playerdtaf_497_11_16, &direction_playerdtaf_497_11_16, NULL, &direction_playerdtaf_497_11_24, &direction_playerdtaf_497_11_24, &direction_playerdtaf_497_11_24, &direction_playerdtaf_497_11_24, &direction_playerdtaf_497_11_24, &direction_playerdtaf_497_11_24, &direction_playerdtaf_497_11_24, NULL, &direction_playerdtaf_497_11_0, &direction_playerdtaf_497_11_0, &direction_playerdtaf_497_11_0};
static Image* images_playerdtaf_497_12_0[2];
static Direction direction_playerdtaf_497_12_0 = {0, 10, 10, 0, -1, images_playerdtaf_497_12_0, 2};
static Image* images_playerdtaf_497_12_8[2];
static Direction direction_playerdtaf_497_12_8 = {8, 10, 10, 0, -1, images_playerdtaf_497_12_8, 2};
static Image* images_playerdtaf_497_12_16[2];
static Direction direction_playerdtaf_497_12_16 = {16, 10, 10, 0, -1, images_playerdtaf_497_12_16, 2};
static Image* images_playerdtaf_497_12_24[2];
static Direction direction_playerdtaf_497_12_24 = {24, 10, 10, 0, -1, images_playerdtaf_497_12_24, 2};
static Animation anim_playerdtaf_497_12 = {&direction_playerdtaf_497_12_0, &direction_playerdtaf_497_12_0, &direction_playerdtaf_497_12_0, &direction_playerdtaf_497_12_0, NULL, &direction_playerdtaf_497_12_8, &direction_playerdtaf_497_12_8, &direction_playerdtaf_497_12_8, &direction_playerdtaf_497_12_8, &direction_playerdtaf_497_12_8, &direction_playerdtaf_497_12_8, &direction_playerdtaf_497_12_8, NULL, &direction_playerdtaf_497_12_16, &direction_playerdtaf_497_12_16, &direction_playerdtaf_497_12_16, &direction_playerdtaf_497_12_16, &direction_playerdtaf_497_12_16, &direction_playerdtaf_497_12_16, &direction_playerdtaf_497_12_16, NULL, &direction_playerdtaf_497_12_24, &direction_playerdtaf_497_12_24, &direction_playerdtaf_497_12_24, &direction_playerdtaf_497_12_24, &direction_playerdtaf_497_12_24, &direction_playerdtaf_497_12_24, &direction_playerdtaf_497_12_24, NULL, &direction_playerdtaf_497_12_0, &direction_playerdtaf_497_12_0, &direction_playerdtaf_497_12_0};
static Image* images_playerdtaf_497_13_0[2];
static Direction direction_playerdtaf_497_13_0 = {0, 10, 10, 0, -1, images_playerdtaf_497_13_0, 2};
static Image* images_playerdtaf_497_13_8[2];
static Direction direction_playerdtaf_497_13_8 = {8, 10, 10, 0, -1, images_playerdtaf_497_13_8, 2};
static Image* images_playerdtaf_497_13_16[2];
static Direction direction_playerdtaf_497_13_16 = {16, 10, 10, 0, -1, images_playerdtaf_497_13_16, 2};
static Image* images_playerdtaf_497_13_24[2];
static Direction direction_playerdtaf_497_13_24 = {24, 10, 10, 0, -1, images_playerdtaf_497_13_24, 2};
static Animation anim_playerdtaf_497_13 = {&direction_playerdtaf_497_13_0, &direction_playerdtaf_497_13_0, &direction_playerdtaf_497_13_0, &direction_playerdtaf_497_13_0, NULL, &direction_playerdtaf_497_13_8, &direction_playerdtaf_497_13_8, &direction_playerdtaf_497_13_8, &direction_playerdtaf_497_13_8, &direction_playerdtaf_497_13_8, &direction_playerdtaf_497_13_8, &direction_playerdtaf_497_13_8, NULL, &direction_playerdtaf_497_13_16, &direction_playerdtaf_497_13_16, &direction_playerdtaf_497_13_16, &direction_playerdtaf_497_13_16, &direction_playerdtaf_497_13_16, &direction_playerdtaf_497_13_16, &direction_playerdtaf_497_13_16, NULL, &direction_playerdtaf_497_13_24, &direction_playerdtaf_497_13_24, &direction_playerdtaf_497_13_24, &direction_playerdtaf_497_13_24, &direction_playerdtaf_497_13_24, &direction_playerdtaf_497_13_24, &direction_playerdtaf_497_13_24, NULL, &direction_playerdtaf_497_13_0, &direction_playerdtaf_497_13_0, &direction_playerdtaf_497_13_0};
static Image* images_playerdtaf_497_14_0[2];
static Direction direction_playerdtaf_497_14_0 = {0, 10, 10, 0, -1, images_playerdtaf_497_14_0, 2};
static Image* images_playerdtaf_497_14_8[2];
static Direction direction_playerdtaf_497_14_8 = {8, 10, 10, 0, -1, images_playerdtaf_497_14_8, 2};
static Image* images_playerdtaf_497_14_16[2];
static Direction direction_playerdtaf_497_14_16 = {16, 10, 10, 0, -1, images_playerdtaf_497_14_16, 2};
static Image* images_playerdtaf_497_14_24[2];
static Direction direction_playerdtaf_497_14_24 = {24, 10, 10, 0, -1, images_playerdtaf_497_14_24, 2};
static Animation anim_playerdtaf_497_14 = {&direction_playerdtaf_497_14_0, &direction_playerdtaf_497_14_0, &direction_playerdtaf_497_14_0, &direction_playerdtaf_497_14_0, NULL, &direction_playerdtaf_497_14_8, &direction_playerdtaf_497_14_8, &direction_playerdtaf_497_14_8, &direction_playerdtaf_497_14_8, &direction_playerdtaf_497_14_8, &direction_playerdtaf_497_14_8, &direction_playerdtaf_497_14_8, NULL, &direction_playerdtaf_497_14_16, &direction_playerdtaf_497_14_16, &direction_playerdtaf_497_14_16, &direction_playerdtaf_497_14_16, &direction_playerdtaf_497_14_16, &direction_playerdtaf_497_14_16, &direction_playerdtaf_497_14_16, NULL, &direction_playerdtaf_497_14_24, &direction_playerdtaf_497_14_24, &direction_playerdtaf_497_14_24, &direction_playerdtaf_497_14_24, &direction_playerdtaf_497_14_24, &direction_playerdtaf_497_14_24, &direction_playerdtaf_497_14_24, NULL, &direction_playerdtaf_497_14_0, &direction_playerdtaf_497_14_0, &direction_playerdtaf_497_14_0};
static Image* images_playerdtaf_497_15_0[2];
static Direction direction_playerdtaf_497_15_0 = {0, 10, 10, 0, -1, images_playerdtaf_497_15_0, 2};
static Image* images_playerdtaf_497_15_8[2];
static Direction direction_playerdtaf_497_15_8 = {8, 10, 10, 0, -1, images_playerdtaf_497_15_8, 2};
static Image* images_playerdtaf_497_15_16[2];
static Direction direction_playerdtaf_497_15_16 = {16, 10, 10, 0, -1, images_playerdtaf_497_15_16, 2};
static Image* images_playerdtaf_497_15_24[2];
static Direction direction_playerdtaf_497_15_24 = {24, 10, 10, 0, -1, images_playerdtaf_497_15_24, 2};
static Animation anim_playerdtaf_497_15 = {&direction_playerdtaf_497_15_0, &direction_playerdtaf_497_15_0, &direction_playerdtaf_497_15_0, &direction_playerdtaf_497_15_0, NULL, &direction_playerdtaf_497_15_8, &direction_playerdtaf_497_15_8, &direction_playerdtaf_497_15_8, &direction_playerdtaf_497_15_8, &direction_playerdtaf_497_15_8, &direction_playerdtaf_497_15_8, &direction_playerdtaf_497_15_8, NULL, &direction_playerdtaf_497_15_16, &direction_playerdtaf_497_15_16, &direction_playerdtaf_497_15_16, &direction_playerdtaf_497_15_16, &direction_playerdtaf_497_15_16, &direction_playerdtaf_497_15_16, &direction_playerdtaf_497_15_16, NULL, &direction_playerdtaf_497_15_24, &direction_playerdtaf_497_15_24, &direction_playerdtaf_497_15_24, &direction_playerdtaf_497_15_24, &direction_playerdtaf_497_15_24, &direction_playerdtaf_497_15_24, &direction_playerdtaf_497_15_24, NULL, &direction_playerdtaf_497_15_0, &direction_playerdtaf_497_15_0, &direction_playerdtaf_497_15_0};
static Image* images_playerdtaf_497_16_0[2];
static Direction direction_playerdtaf_497_16_0 = {0, 10, 10, 0, -1, images_playerdtaf_497_16_0, 2};
static Image* images_playerdtaf_497_16_8[2];
static Direction direction_playerdtaf_497_16_8 = {8, 10, 10, 0, -1, images_playerdtaf_497_16_8, 2};
static Image* images_playerdtaf_497_16_16[2];
static Direction direction_playerdtaf_497_16_16 = {16, 10, 10, 0, -1, images_playerdtaf_497_16_16, 2};
static Image* images_playerdtaf_497_16_24[2];
static Direction direction_playerdtaf_497_16_24 = {24, 10, 10, 0, -1, images_playerdtaf_497_16_24, 2};
static Animation anim_playerdtaf_497_16 = {&direction_playerdtaf_497_16_0, &direction_playerdtaf_497_16_0, &direction_playerdtaf_497_16_0, &direction_playerdtaf_497_16_0, NULL, &direction_playerdtaf_497_16_8, &direction_playerdtaf_497_16_8, &direction_playerdtaf_497_16_8, &direction_playerdtaf_497_16_8, &direction_playerdtaf_497_16_8, &direction_playerdtaf_497_16_8, &direction_playerdtaf_497_16_8, NULL, &direction_playerdtaf_497_16_16, &direction_playerdtaf_497_16_16, &direction_playerdtaf_497_16_16, &direction_playerdtaf_497_16_16, &direction_playerdtaf_497_16_16, &direction_playerdtaf_497_16_16, &direction_playerdtaf_497_16_16, NULL, &direction_playerdtaf_497_16_24, &direction_playerdtaf_497_16_24, &direction_playerdtaf_497_16_24, &direction_playerdtaf_497_16_24, &direction_playerdtaf_497_16_24, &direction_playerdtaf_497_16_24, &direction_playerdtaf_497_16_24, NULL, &direction_playerdtaf_497_16_0, &direction_playerdtaf_497_16_0, &direction_playerdtaf_497_16_0};
static Image* images_playerdtaf_497_17_0[2];
static Direction direction_playerdtaf_497_17_0 = {0, 5, 5, 1, -1, images_playerdtaf_497_17_0, 2};
static Image* images_playerdtaf_497_17_8[2];
static Direction direction_playerdtaf_497_17_8 = {8, 5, 5, 1, -1, images_playerdtaf_497_17_8, 2};
static Image* images_playerdtaf_497_17_16[2];
static Direction direction_playerdtaf_497_17_16 = {16, 5, 5, 1, -1, images_playerdtaf_497_17_16, 2};
static Image* images_playerdtaf_497_17_24[2];
static Direction direction_playerdtaf_497_17_24 = {24, 5, 5, 1, -1, images_playerdtaf_497_17_24, 2};
static Animation anim_playerdtaf_497_17 = {&direction_playerdtaf_497_17_0, &direction_playerdtaf_497_17_0, &direction_playerdtaf_497_17_0, &direction_playerdtaf_497_17_0, NULL, &direction_playerdtaf_497_17_8, &direction_playerdtaf_497_17_8, &direction_playerdtaf_497_17_8, &direction_playerdtaf_497_17_8, &direction_playerdtaf_497_17_8, &direction_playerdtaf_497_17_8, &direction_playerdtaf_497_17_8, NULL, &direction_playerdtaf_497_17_16, &direction_playerdtaf_497_17_16, &direction_playerdtaf_497_17_16, &direction_playerdtaf_497_17_16, &direction_playerdtaf_497_17_16, &direction_playerdtaf_497_17_16, &direction_playerdtaf_497_17_16, NULL, &direction_playerdtaf_497_17_24, &direction_playerdtaf_497_17_24, &direction_playerdtaf_497_17_24, &direction_playerdtaf_497_17_24, &direction_playerdtaf_497_17_24, &direction_playerdtaf_497_17_24, &direction_playerdtaf_497_17_24, NULL, &direction_playerdtaf_497_17_0, &direction_playerdtaf_497_17_0, &direction_playerdtaf_497_17_0};
static Image* images_playerdtaf_497_18_24[8];
static Direction direction_playerdtaf_497_18_24 = {24, 10, 10, 0, -1, images_playerdtaf_497_18_24, 8};
static Animation anim_playerdtaf_497_18 = {&direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, NULL, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24, &direction_playerdtaf_497_18_24};
static Image* images_playerdtaf_497_19_24[5];
static Direction direction_playerdtaf_497_19_24 = {24, 10, 10, 0, -1, images_playerdtaf_497_19_24, 5};
static Animation anim_playerdtaf_497_19 = {&direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, NULL, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24, &direction_playerdtaf_497_19_24};
static Animation * anim_array_playerdtaf_497[20] = {&anim_playerdtaf_497_0, NULL, NULL, NULL, &anim_playerdtaf_497_4, NULL, &anim_playerdtaf_497_6, &anim_playerdtaf_497_7, &anim_playerdtaf_497_8, NULL, &anim_playerdtaf_497_10, &anim_playerdtaf_497_11, &anim_playerdtaf_497_12, &anim_playerdtaf_497_13, &anim_playerdtaf_497_14, &anim_playerdtaf_497_15, &anim_playerdtaf_497_16, &anim_playerdtaf_497_17, &anim_playerdtaf_497_18, &anim_playerdtaf_497_19};
static Animations anim_playerdtaf_497 = {20, &anim_array_playerdtaf_497[0]};
static bool anim_playerdtaf_497_initialized;
class PlayerDTAF_497 : public Active
{
public:
    PlayerDTAF_497(int x, int y) : Active(x, y, PlayerDTAF_497_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_ DTAF", 12);
#endif
        this->animations = &anim_playerdtaf_497;
        if (!anim_playerdtaf_497_initialized) {
            anim_playerdtaf_497_initialized = true;
            images_playerdtaf_497_0_0[0] = get_internal_image(3089);
            images_playerdtaf_497_0_0[1] = get_internal_image(3097);
            images_playerdtaf_497_0_8[0] = get_internal_image(3100);
            images_playerdtaf_497_0_8[1] = get_internal_image(3101);
            images_playerdtaf_497_0_16[0] = get_internal_image(3098);
            images_playerdtaf_497_0_16[1] = get_internal_image(3099);
            images_playerdtaf_497_0_24[0] = get_internal_image(3102);
            images_playerdtaf_497_0_24[1] = get_internal_image(3103);
            images_playerdtaf_497_4_0[0] = get_internal_image(369);
            images_playerdtaf_497_4_0[1] = get_internal_image(373);
            images_playerdtaf_497_4_0[2] = get_internal_image(369);
            images_playerdtaf_497_4_0[3] = get_internal_image(373);
            images_playerdtaf_497_4_16[0] = get_internal_image(371);
            images_playerdtaf_497_4_16[1] = get_internal_image(763);
            images_playerdtaf_497_4_16[2] = get_internal_image(371);
            images_playerdtaf_497_4_16[3] = get_internal_image(763);
            images_playerdtaf_497_6_0[0] = get_internal_image(3105);
            images_playerdtaf_497_6_8[0] = get_internal_image(3108);
            images_playerdtaf_497_6_16[0] = get_internal_image(3104);
            images_playerdtaf_497_6_24[0] = get_internal_image(3106);
            images_playerdtaf_497_7_0[0] = get_internal_image(3107);
            images_playerdtaf_497_7_0[1] = get_internal_image(3109);
            images_playerdtaf_497_7_8[0] = get_internal_image(3112);
            images_playerdtaf_497_7_8[1] = get_internal_image(3113);
            images_playerdtaf_497_7_16[0] = get_internal_image(3110);
            images_playerdtaf_497_7_16[1] = get_internal_image(3111);
            images_playerdtaf_497_7_24[0] = get_internal_image(3114);
            images_playerdtaf_497_7_24[1] = get_internal_image(3115);
            images_playerdtaf_497_8_0[0] = get_internal_image(2679);
            images_playerdtaf_497_8_24[0] = get_internal_image(3330);
            images_playerdtaf_497_10_0[0] = get_internal_image(3267);
            images_playerdtaf_497_10_0[1] = get_internal_image(3269);
            images_playerdtaf_497_10_0[2] = get_internal_image(3270);
            images_playerdtaf_497_10_0[3] = get_internal_image(3266);
            images_playerdtaf_497_10_0[4] = get_internal_image(3265);
            images_playerdtaf_497_11_0[0] = get_internal_image(3118);
            images_playerdtaf_497_11_0[1] = get_internal_image(3117);
            images_playerdtaf_497_11_8[0] = get_internal_image(3120);
            images_playerdtaf_497_11_8[1] = get_internal_image(3121);
            images_playerdtaf_497_11_16[0] = get_internal_image(3116);
            images_playerdtaf_497_11_16[1] = get_internal_image(3119);
            images_playerdtaf_497_11_24[0] = get_internal_image(3122);
            images_playerdtaf_497_11_24[1] = get_internal_image(3123);
            images_playerdtaf_497_12_0[0] = get_internal_image(3124);
            images_playerdtaf_497_12_0[1] = get_internal_image(3126);
            images_playerdtaf_497_12_8[0] = get_internal_image(3129);
            images_playerdtaf_497_12_8[1] = get_internal_image(3131);
            images_playerdtaf_497_12_16[0] = get_internal_image(3125);
            images_playerdtaf_497_12_16[1] = get_internal_image(3127);
            images_playerdtaf_497_12_24[0] = get_internal_image(3128);
            images_playerdtaf_497_12_24[1] = get_internal_image(3130);
            images_playerdtaf_497_13_0[0] = get_internal_image(3134);
            images_playerdtaf_497_13_0[1] = get_internal_image(3133);
            images_playerdtaf_497_13_8[0] = get_internal_image(3138);
            images_playerdtaf_497_13_8[1] = get_internal_image(3137);
            images_playerdtaf_497_13_16[0] = get_internal_image(3132);
            images_playerdtaf_497_13_16[1] = get_internal_image(3135);
            images_playerdtaf_497_13_24[0] = get_internal_image(3136);
            images_playerdtaf_497_13_24[1] = get_internal_image(3139);
            images_playerdtaf_497_14_0[0] = get_internal_image(3142);
            images_playerdtaf_497_14_0[1] = get_internal_image(3141);
            images_playerdtaf_497_14_8[0] = get_internal_image(3148);
            images_playerdtaf_497_14_8[1] = get_internal_image(3147);
            images_playerdtaf_497_14_16[0] = get_internal_image(3140);
            images_playerdtaf_497_14_16[1] = get_internal_image(3143);
            images_playerdtaf_497_14_24[0] = get_internal_image(3144);
            images_playerdtaf_497_14_24[1] = get_internal_image(3145);
            images_playerdtaf_497_15_0[0] = get_internal_image(3150);
            images_playerdtaf_497_15_0[1] = get_internal_image(3149);
            images_playerdtaf_497_15_8[0] = get_internal_image(3154);
            images_playerdtaf_497_15_8[1] = get_internal_image(3155);
            images_playerdtaf_497_15_16[0] = get_internal_image(3146);
            images_playerdtaf_497_15_16[1] = get_internal_image(3151);
            images_playerdtaf_497_15_24[0] = get_internal_image(3152);
            images_playerdtaf_497_15_24[1] = get_internal_image(3153);
            images_playerdtaf_497_16_0[0] = get_internal_image(1865);
            images_playerdtaf_497_16_0[1] = get_internal_image(1866);
            images_playerdtaf_497_16_8[0] = get_internal_image(1611);
            images_playerdtaf_497_16_8[1] = get_internal_image(1610);
            images_playerdtaf_497_16_16[0] = get_internal_image(1867);
            images_playerdtaf_497_16_16[1] = get_internal_image(1868);
            images_playerdtaf_497_16_24[0] = get_internal_image(1608);
            images_playerdtaf_497_16_24[1] = get_internal_image(1609);
            images_playerdtaf_497_17_0[0] = get_internal_image(2681);
            images_playerdtaf_497_17_0[1] = get_internal_image(2680);
            images_playerdtaf_497_17_8[0] = get_internal_image(2684);
            images_playerdtaf_497_17_8[1] = get_internal_image(2685);
            images_playerdtaf_497_17_16[0] = get_internal_image(2682);
            images_playerdtaf_497_17_16[1] = get_internal_image(2683);
            images_playerdtaf_497_17_24[0] = get_internal_image(2677);
            images_playerdtaf_497_17_24[1] = get_internal_image(2678);
            images_playerdtaf_497_18_24[0] = get_internal_image(1989);
            images_playerdtaf_497_18_24[1] = get_internal_image(1997);
            images_playerdtaf_497_18_24[2] = get_internal_image(2006);
            images_playerdtaf_497_18_24[3] = get_internal_image(2048);
            images_playerdtaf_497_18_24[4] = get_internal_image(2039);
            images_playerdtaf_497_18_24[5] = get_internal_image(2042);
            images_playerdtaf_497_18_24[6] = get_internal_image(2006);
            images_playerdtaf_497_18_24[7] = get_internal_image(2052);
            images_playerdtaf_497_19_24[0] = get_internal_image(2134);
            images_playerdtaf_497_19_24[1] = get_internal_image(2135);
            images_playerdtaf_497_19_24[2] = get_internal_image(2135);
            images_playerdtaf_497_19_24[3] = get_internal_image(2133);
            images_playerdtaf_497_19_24[4] = get_internal_image(2133);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_playerdtaf_497(int x, int y)
{
    return new (Active::pool.create()) PlayerDTAF_497(x, y);
}
static Image* images_dtafshark_498_0_0[1];
static Direction direction_dtafshark_498_0_0 = {0, 50, 50, 0, -1, images_dtafshark_498_0_0, 1};
static Image* images_dtafshark_498_0_8[1];
static Direction direction_dtafshark_498_0_8 = {8, 50, 50, 0, -1, images_dtafshark_498_0_8, 1};
static Image* images_dtafshark_498_0_16[1];
static Direction direction_dtafshark_498_0_16 = {16, 50, 50, 0, -1, images_dtafshark_498_0_16, 1};
static Image* images_dtafshark_498_0_24[1];
static Direction direction_dtafshark_498_0_24 = {24, 50, 50, 0, -1, images_dtafshark_498_0_24, 1};
static Animation anim_dtafshark_498_0 = {&direction_dtafshark_498_0_0, &direction_dtafshark_498_0_0, &direction_dtafshark_498_0_0, &direction_dtafshark_498_0_0, NULL, &direction_dtafshark_498_0_8, &direction_dtafshark_498_0_8, &direction_dtafshark_498_0_8, &direction_dtafshark_498_0_8, &direction_dtafshark_498_0_8, &direction_dtafshark_498_0_8, &direction_dtafshark_498_0_8, NULL, &direction_dtafshark_498_0_16, &direction_dtafshark_498_0_16, &direction_dtafshark_498_0_16, &direction_dtafshark_498_0_16, &direction_dtafshark_498_0_16, &direction_dtafshark_498_0_16, &direction_dtafshark_498_0_16, NULL, &direction_dtafshark_498_0_24, &direction_dtafshark_498_0_24, &direction_dtafshark_498_0_24, &direction_dtafshark_498_0_24, &direction_dtafshark_498_0_24, &direction_dtafshark_498_0_24, &direction_dtafshark_498_0_24, NULL, &direction_dtafshark_498_0_0, &direction_dtafshark_498_0_0, &direction_dtafshark_498_0_0};
static Animation * anim_array_dtafshark_498[1] = {&anim_dtafshark_498_0};
static Animations anim_dtafshark_498 = {1, &anim_array_dtafshark_498[0]};
static bool anim_dtafshark_498_initialized;
class DTAFShark_498 : public Active
{
public:
    DTAFShark_498(int x, int y) : Active(x, y, DTAFShark_498_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DTAF_Shark", 10);
#endif
        this->animations = &anim_dtafshark_498;
        if (!anim_dtafshark_498_initialized) {
            anim_dtafshark_498_initialized = true;
            images_dtafshark_498_0_0[0] = get_internal_image(3208);
            images_dtafshark_498_0_8[0] = get_internal_image(3211);
            images_dtafshark_498_0_16[0] = get_internal_image(3212);
            images_dtafshark_498_0_24[0] = get_internal_image(3211);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(19);
        movement = new PathMovement(this);
        movement->index = 0;
        movement->flags |= Movement::MOVE_AT_START;
        ((PathMovement*)movement)->set_path(true, false, 0, 0);
        ((PathMovement*)movement)->add_node(10, -55, 55, -0.70709228515625, 0.70709228515625, 77, 19, 0);
        ((PathMovement*)movement)->add_node(10, -18, 61, -0.282958984375, 0.9591064453125, 63, 22, 0);
        ((PathMovement*)movement)->add_node(10, 56, 6, 0.9942626953125, 0.10650634765625, 56, 31, 0);
        ((PathMovement*)movement)->add_node(10, 57, -95, 0.51446533203125, -0.85748291015625, 110, 5, 0);
        ((PathMovement*)movement)->add_node(10, -40, -27, -0.82879638671875, -0.5594482421875, 48, 12, 0);
        ((PathMovement*)movement)->init();
        create_alterables();
    }
};
FrameObject * create_dtafshark_498(int x, int y)
{
    return new (Active::pool.create()) DTAFShark_498(x, y);
}
static Image* images_guard3_499_0_0[2];
static Direction direction_guard3_499_0_0 = {0, 10, 10, 0, -1, images_guard3_499_0_0, 2};
static Image* images_guard3_499_0_8[2];
static Direction direction_guard3_499_0_8 = {8, 10, 10, 0, -1, images_guard3_499_0_8, 2};
static Image* images_guard3_499_0_16[2];
static Direction direction_guard3_499_0_16 = {16, 10, 10, 0, -1, images_guard3_499_0_16, 2};
static Image* images_guard3_499_0_24[2];
static Direction direction_guard3_499_0_24 = {24, 10, 10, 0, -1, images_guard3_499_0_24, 2};
static Animation anim_guard3_499_0 = {&direction_guard3_499_0_0, &direction_guard3_499_0_0, &direction_guard3_499_0_0, &direction_guard3_499_0_0, NULL, &direction_guard3_499_0_8, &direction_guard3_499_0_8, &direction_guard3_499_0_8, &direction_guard3_499_0_8, &direction_guard3_499_0_8, &direction_guard3_499_0_8, &direction_guard3_499_0_8, NULL, &direction_guard3_499_0_16, &direction_guard3_499_0_16, &direction_guard3_499_0_16, &direction_guard3_499_0_16, &direction_guard3_499_0_16, &direction_guard3_499_0_16, &direction_guard3_499_0_16, NULL, &direction_guard3_499_0_24, &direction_guard3_499_0_24, &direction_guard3_499_0_24, &direction_guard3_499_0_24, &direction_guard3_499_0_24, &direction_guard3_499_0_24, &direction_guard3_499_0_24, NULL, &direction_guard3_499_0_0, &direction_guard3_499_0_0, &direction_guard3_499_0_0};
static Image* images_guard3_499_6_0[1];
static Direction direction_guard3_499_6_0 = {0, 6, 6, 0, 1, images_guard3_499_6_0, 1};
static Image* images_guard3_499_6_8[1];
static Direction direction_guard3_499_6_8 = {8, 6, 6, 0, 1, images_guard3_499_6_8, 1};
static Image* images_guard3_499_6_16[1];
static Direction direction_guard3_499_6_16 = {16, 6, 6, 0, 1, images_guard3_499_6_16, 1};
static Image* images_guard3_499_6_24[1];
static Direction direction_guard3_499_6_24 = {24, 6, 6, 0, 1, images_guard3_499_6_24, 1};
static Animation anim_guard3_499_6 = {&direction_guard3_499_6_0, &direction_guard3_499_6_0, &direction_guard3_499_6_0, &direction_guard3_499_6_0, NULL, &direction_guard3_499_6_8, &direction_guard3_499_6_8, &direction_guard3_499_6_8, &direction_guard3_499_6_8, &direction_guard3_499_6_8, &direction_guard3_499_6_8, &direction_guard3_499_6_8, NULL, &direction_guard3_499_6_16, &direction_guard3_499_6_16, &direction_guard3_499_6_16, &direction_guard3_499_6_16, &direction_guard3_499_6_16, &direction_guard3_499_6_16, &direction_guard3_499_6_16, NULL, &direction_guard3_499_6_24, &direction_guard3_499_6_24, &direction_guard3_499_6_24, &direction_guard3_499_6_24, &direction_guard3_499_6_24, &direction_guard3_499_6_24, &direction_guard3_499_6_24, NULL, &direction_guard3_499_6_0, &direction_guard3_499_6_0, &direction_guard3_499_6_0};
static Image* images_guard3_499_8_0[1];
static Direction direction_guard3_499_8_0 = {0, 50, 50, 0, -1, images_guard3_499_8_0, 1};
static Image* images_guard3_499_8_16[2];
static Direction direction_guard3_499_8_16 = {16, 5, 5, 0, -1, images_guard3_499_8_16, 2};
static Image* images_guard3_499_8_24[3];
static Direction direction_guard3_499_8_24 = {24, 10, 10, 0, -1, images_guard3_499_8_24, 3};
static Animation anim_guard3_499_8 = {&direction_guard3_499_8_0, &direction_guard3_499_8_0, &direction_guard3_499_8_0, &direction_guard3_499_8_0, &direction_guard3_499_8_0, &direction_guard3_499_8_0, &direction_guard3_499_8_0, &direction_guard3_499_8_0, NULL, &direction_guard3_499_8_16, &direction_guard3_499_8_16, &direction_guard3_499_8_16, &direction_guard3_499_8_16, &direction_guard3_499_8_16, &direction_guard3_499_8_16, &direction_guard3_499_8_16, &direction_guard3_499_8_16, &direction_guard3_499_8_16, &direction_guard3_499_8_16, &direction_guard3_499_8_16, NULL, &direction_guard3_499_8_24, &direction_guard3_499_8_24, &direction_guard3_499_8_24, &direction_guard3_499_8_24, &direction_guard3_499_8_24, &direction_guard3_499_8_24, &direction_guard3_499_8_24, NULL, &direction_guard3_499_8_0, &direction_guard3_499_8_0, &direction_guard3_499_8_0};
static Animation * anim_array_guard3_499[9] = {&anim_guard3_499_0, NULL, NULL, NULL, NULL, NULL, &anim_guard3_499_6, NULL, &anim_guard3_499_8};
static Animations anim_guard3_499 = {9, &anim_array_guard3_499[0]};
static bool anim_guard3_499_initialized;
class Guard3_499 : public Active
{
public:
    Guard3_499(int x, int y) : Active(x, y, Guard3_499_type)
    {
        // qualifiers: 31, 33
#ifndef NDEBUG
        name = std::string("Guard 3", 7);
#endif
        this->animations = &anim_guard3_499;
        if (!anim_guard3_499_initialized) {
            anim_guard3_499_initialized = true;
            images_guard3_499_0_0[0] = get_internal_image(3226);
            images_guard3_499_0_0[1] = get_internal_image(3225);
            images_guard3_499_0_8[0] = get_internal_image(3228);
            images_guard3_499_0_8[1] = get_internal_image(3229);
            images_guard3_499_0_16[0] = get_internal_image(3224);
            images_guard3_499_0_16[1] = get_internal_image(3227);
            images_guard3_499_0_24[0] = get_internal_image(3232);
            images_guard3_499_0_24[1] = get_internal_image(3230);
            images_guard3_499_6_0[0] = get_internal_image(3234);
            images_guard3_499_6_8[0] = get_internal_image(3231);
            images_guard3_499_6_16[0] = get_internal_image(3235);
            images_guard3_499_6_24[0] = get_internal_image(3233);
            images_guard3_499_8_0[0] = get_internal_image(3237);
            images_guard3_499_8_16[0] = get_internal_image(650);
            images_guard3_499_8_16[1] = get_internal_image(651);
            images_guard3_499_8_24[0] = get_internal_image(3286);
            images_guard3_499_8_24[1] = get_internal_image(3286);
            images_guard3_499_8_24[2] = get_internal_image(3286);
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
FrameObject * create_guard3_499(int x, int y)
{
    return new (Active::pool.create()) Guard3_499(x, y);
}
static Image* images_dtafvillainchair_500_0_8[1];
static Direction direction_dtafvillainchair_500_0_8 = {8, 50, 50, 0, 1, images_dtafvillainchair_500_0_8, 1};
static Animation anim_dtafvillainchair_500_0 = {&direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, NULL, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8, &direction_dtafvillainchair_500_0_8};
static Image* images_dtafvillainchair_500_5_8[1];
static Direction direction_dtafvillainchair_500_5_8 = {8, 50, 50, 0, -1, images_dtafvillainchair_500_5_8, 1};
static Image* images_dtafvillainchair_500_5_24[1];
static Direction direction_dtafvillainchair_500_5_24 = {24, 50, 50, 0, -1, images_dtafvillainchair_500_5_24, 1};
static Animation anim_dtafvillainchair_500_5 = {NULL, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, &direction_dtafvillainchair_500_5_8, NULL, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24, &direction_dtafvillainchair_500_5_24};
static Animation * anim_array_dtafvillainchair_500[6] = {&anim_dtafvillainchair_500_0, NULL, NULL, NULL, NULL, &anim_dtafvillainchair_500_5};
static Animations anim_dtafvillainchair_500 = {6, &anim_array_dtafvillainchair_500[0]};
static bool anim_dtafvillainchair_500_initialized;
class DTAFVillainChair_500 : public Active
{
public:
    DTAFVillainChair_500(int x, int y) : Active(x, y, DTAFVillainChair_500_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("DTAF villain chair", 18);
#endif
        this->animations = &anim_dtafvillainchair_500;
        if (!anim_dtafvillainchair_500_initialized) {
            anim_dtafvillainchair_500_initialized = true;
            images_dtafvillainchair_500_0_8[0] = get_internal_image(3302);
            images_dtafvillainchair_500_5_8[0] = get_internal_image(2645);
            images_dtafvillainchair_500_5_24[0] = get_internal_image(2747);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_dtafvillainchair_500(int x, int y)
{
    return new (Active::pool.create()) DTAFVillainChair_500(x, y);
}
static Image* images_dooroutfit_501_0_0[1];
static Direction direction_dooroutfit_501_0_0 = {0, 50, 50, 0, -1, images_dooroutfit_501_0_0, 1};
static Animation anim_dooroutfit_501_0 = {&direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, NULL, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0, &direction_dooroutfit_501_0_0};
static Animation * anim_array_dooroutfit_501[1] = {&anim_dooroutfit_501_0};
static Animations anim_dooroutfit_501 = {1, &anim_array_dooroutfit_501[0]};
static bool anim_dooroutfit_501_initialized;
class DoorOutfit_501 : public Active
{
public:
    DoorOutfit_501(int x, int y) : Active(x, y, DoorOutfit_501_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - outfit", 13);
#endif
        this->animations = &anim_dooroutfit_501;
        if (!anim_dooroutfit_501_initialized) {
            anim_dooroutfit_501_initialized = true;
            images_dooroutfit_501_0_0[0] = get_internal_image(3326);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_main_37);
    }
};
FrameObject * create_dooroutfit_501(int x, int y)
{
    return new (Active::pool.create()) DoorOutfit_501(x, y);
}
static Image* images_sssobjects_502_0_0[1];
static Direction direction_sssobjects_502_0_0 = {0, 50, 50, 0, -1, images_sssobjects_502_0_0, 1};
static Image* images_sssobjects_502_0_8[1];
static Direction direction_sssobjects_502_0_8 = {8, 50, 50, 0, -1, images_sssobjects_502_0_8, 1};
static Image* images_sssobjects_502_0_16[1];
static Direction direction_sssobjects_502_0_16 = {16, 50, 50, 0, -1, images_sssobjects_502_0_16, 1};
static Image* images_sssobjects_502_0_24[1];
static Direction direction_sssobjects_502_0_24 = {24, 50, 50, 0, -1, images_sssobjects_502_0_24, 1};
static Animation anim_sssobjects_502_0 = {&direction_sssobjects_502_0_0, &direction_sssobjects_502_0_0, &direction_sssobjects_502_0_0, &direction_sssobjects_502_0_0, NULL, &direction_sssobjects_502_0_8, &direction_sssobjects_502_0_8, &direction_sssobjects_502_0_8, &direction_sssobjects_502_0_8, &direction_sssobjects_502_0_8, &direction_sssobjects_502_0_8, &direction_sssobjects_502_0_8, NULL, &direction_sssobjects_502_0_16, &direction_sssobjects_502_0_16, &direction_sssobjects_502_0_16, &direction_sssobjects_502_0_16, &direction_sssobjects_502_0_16, &direction_sssobjects_502_0_16, &direction_sssobjects_502_0_16, NULL, &direction_sssobjects_502_0_24, &direction_sssobjects_502_0_24, &direction_sssobjects_502_0_24, &direction_sssobjects_502_0_24, &direction_sssobjects_502_0_24, &direction_sssobjects_502_0_24, &direction_sssobjects_502_0_24, NULL, &direction_sssobjects_502_0_0, &direction_sssobjects_502_0_0, &direction_sssobjects_502_0_0};
static Image* images_sssobjects_502_1_0[1];
static Direction direction_sssobjects_502_1_0 = {0, 50, 50, 0, -1, images_sssobjects_502_1_0, 1};
static Image* images_sssobjects_502_1_8[1];
static Direction direction_sssobjects_502_1_8 = {8, 50, 50, 0, -1, images_sssobjects_502_1_8, 1};
static Image* images_sssobjects_502_1_16[1];
static Direction direction_sssobjects_502_1_16 = {16, 50, 50, 0, -1, images_sssobjects_502_1_16, 1};
static Animation anim_sssobjects_502_1 = {&direction_sssobjects_502_1_0, &direction_sssobjects_502_1_0, &direction_sssobjects_502_1_0, &direction_sssobjects_502_1_0, NULL, &direction_sssobjects_502_1_8, &direction_sssobjects_502_1_8, &direction_sssobjects_502_1_8, &direction_sssobjects_502_1_8, &direction_sssobjects_502_1_8, &direction_sssobjects_502_1_8, &direction_sssobjects_502_1_8, NULL, &direction_sssobjects_502_1_16, &direction_sssobjects_502_1_16, &direction_sssobjects_502_1_16, &direction_sssobjects_502_1_16, &direction_sssobjects_502_1_16, &direction_sssobjects_502_1_16, &direction_sssobjects_502_1_16, &direction_sssobjects_502_1_16, &direction_sssobjects_502_1_16, &direction_sssobjects_502_1_16, &direction_sssobjects_502_1_16, NULL, &direction_sssobjects_502_1_0, &direction_sssobjects_502_1_0, &direction_sssobjects_502_1_0, &direction_sssobjects_502_1_0, &direction_sssobjects_502_1_0, &direction_sssobjects_502_1_0, &direction_sssobjects_502_1_0};
static Image* images_sssobjects_502_2_0[1];
static Direction direction_sssobjects_502_2_0 = {0, 50, 50, 0, -1, images_sssobjects_502_2_0, 1};
static Image* images_sssobjects_502_2_8[1];
static Direction direction_sssobjects_502_2_8 = {8, 50, 50, 0, -1, images_sssobjects_502_2_8, 1};
static Image* images_sssobjects_502_2_16[1];
static Direction direction_sssobjects_502_2_16 = {16, 50, 50, 0, -1, images_sssobjects_502_2_16, 1};
static Image* images_sssobjects_502_2_24[1];
static Direction direction_sssobjects_502_2_24 = {24, 50, 50, 0, -1, images_sssobjects_502_2_24, 1};
static Animation anim_sssobjects_502_2 = {&direction_sssobjects_502_2_0, &direction_sssobjects_502_2_0, &direction_sssobjects_502_2_0, &direction_sssobjects_502_2_0, NULL, &direction_sssobjects_502_2_8, &direction_sssobjects_502_2_8, &direction_sssobjects_502_2_8, &direction_sssobjects_502_2_8, &direction_sssobjects_502_2_8, &direction_sssobjects_502_2_8, &direction_sssobjects_502_2_8, NULL, &direction_sssobjects_502_2_16, &direction_sssobjects_502_2_16, &direction_sssobjects_502_2_16, &direction_sssobjects_502_2_16, &direction_sssobjects_502_2_16, &direction_sssobjects_502_2_16, &direction_sssobjects_502_2_16, NULL, &direction_sssobjects_502_2_24, &direction_sssobjects_502_2_24, &direction_sssobjects_502_2_24, &direction_sssobjects_502_2_24, &direction_sssobjects_502_2_24, &direction_sssobjects_502_2_24, &direction_sssobjects_502_2_24, NULL, &direction_sssobjects_502_2_0, &direction_sssobjects_502_2_0, &direction_sssobjects_502_2_0};
static Image* images_sssobjects_502_5_0[1];
static Direction direction_sssobjects_502_5_0 = {0, 50, 50, 0, -1, images_sssobjects_502_5_0, 1};
static Image* images_sssobjects_502_5_4[1];
static Direction direction_sssobjects_502_5_4 = {4, 50, 50, 0, -1, images_sssobjects_502_5_4, 1};
static Image* images_sssobjects_502_5_8[1];
static Direction direction_sssobjects_502_5_8 = {8, 50, 50, 0, -1, images_sssobjects_502_5_8, 1};
static Image* images_sssobjects_502_5_12[1];
static Direction direction_sssobjects_502_5_12 = {12, 50, 50, 0, -1, images_sssobjects_502_5_12, 1};
static Image* images_sssobjects_502_5_16[1];
static Direction direction_sssobjects_502_5_16 = {16, 50, 50, 0, -1, images_sssobjects_502_5_16, 1};
static Animation anim_sssobjects_502_5 = {&direction_sssobjects_502_5_0, &direction_sssobjects_502_5_0, NULL, &direction_sssobjects_502_5_4, &direction_sssobjects_502_5_4, &direction_sssobjects_502_5_4, NULL, &direction_sssobjects_502_5_8, &direction_sssobjects_502_5_8, &direction_sssobjects_502_5_8, NULL, &direction_sssobjects_502_5_12, &direction_sssobjects_502_5_12, &direction_sssobjects_502_5_12, NULL, &direction_sssobjects_502_5_16, &direction_sssobjects_502_5_16, &direction_sssobjects_502_5_16, &direction_sssobjects_502_5_16, &direction_sssobjects_502_5_16, &direction_sssobjects_502_5_16, &direction_sssobjects_502_5_16, &direction_sssobjects_502_5_16, &direction_sssobjects_502_5_16, NULL, &direction_sssobjects_502_5_0, &direction_sssobjects_502_5_0, &direction_sssobjects_502_5_0, &direction_sssobjects_502_5_0, &direction_sssobjects_502_5_0, &direction_sssobjects_502_5_0, &direction_sssobjects_502_5_0};
static Image* images_sssobjects_502_6_0[2];
static Direction direction_sssobjects_502_6_0 = {0, 6, 6, 0, -1, images_sssobjects_502_6_0, 2};
static Image* images_sssobjects_502_6_8[1];
static Direction direction_sssobjects_502_6_8 = {8, 50, 50, 0, -1, images_sssobjects_502_6_8, 1};
static Image* images_sssobjects_502_6_16[1];
static Direction direction_sssobjects_502_6_16 = {16, 50, 50, 0, -1, images_sssobjects_502_6_16, 1};
static Image* images_sssobjects_502_6_24[1];
static Direction direction_sssobjects_502_6_24 = {24, 50, 50, 0, -1, images_sssobjects_502_6_24, 1};
static Animation anim_sssobjects_502_6 = {&direction_sssobjects_502_6_0, &direction_sssobjects_502_6_0, &direction_sssobjects_502_6_0, &direction_sssobjects_502_6_0, NULL, &direction_sssobjects_502_6_8, &direction_sssobjects_502_6_8, &direction_sssobjects_502_6_8, &direction_sssobjects_502_6_8, &direction_sssobjects_502_6_8, &direction_sssobjects_502_6_8, &direction_sssobjects_502_6_8, NULL, &direction_sssobjects_502_6_16, &direction_sssobjects_502_6_16, &direction_sssobjects_502_6_16, &direction_sssobjects_502_6_16, &direction_sssobjects_502_6_16, &direction_sssobjects_502_6_16, &direction_sssobjects_502_6_16, NULL, &direction_sssobjects_502_6_24, &direction_sssobjects_502_6_24, &direction_sssobjects_502_6_24, &direction_sssobjects_502_6_24, &direction_sssobjects_502_6_24, &direction_sssobjects_502_6_24, &direction_sssobjects_502_6_24, NULL, &direction_sssobjects_502_6_0, &direction_sssobjects_502_6_0, &direction_sssobjects_502_6_0};
static Image* images_sssobjects_502_7_0[1];
static Direction direction_sssobjects_502_7_0 = {0, 50, 50, 0, -1, images_sssobjects_502_7_0, 1};
static Image* images_sssobjects_502_7_8[1];
static Direction direction_sssobjects_502_7_8 = {8, 50, 50, 0, -1, images_sssobjects_502_7_8, 1};
static Image* images_sssobjects_502_7_16[1];
static Direction direction_sssobjects_502_7_16 = {16, 50, 50, 0, -1, images_sssobjects_502_7_16, 1};
static Image* images_sssobjects_502_7_24[1];
static Direction direction_sssobjects_502_7_24 = {24, 50, 50, 0, -1, images_sssobjects_502_7_24, 1};
static Animation anim_sssobjects_502_7 = {&direction_sssobjects_502_7_0, &direction_sssobjects_502_7_0, &direction_sssobjects_502_7_0, &direction_sssobjects_502_7_0, NULL, &direction_sssobjects_502_7_8, &direction_sssobjects_502_7_8, &direction_sssobjects_502_7_8, &direction_sssobjects_502_7_8, &direction_sssobjects_502_7_8, &direction_sssobjects_502_7_8, &direction_sssobjects_502_7_8, NULL, &direction_sssobjects_502_7_16, &direction_sssobjects_502_7_16, &direction_sssobjects_502_7_16, &direction_sssobjects_502_7_16, &direction_sssobjects_502_7_16, &direction_sssobjects_502_7_16, &direction_sssobjects_502_7_16, NULL, &direction_sssobjects_502_7_24, &direction_sssobjects_502_7_24, &direction_sssobjects_502_7_24, &direction_sssobjects_502_7_24, &direction_sssobjects_502_7_24, &direction_sssobjects_502_7_24, &direction_sssobjects_502_7_24, NULL, &direction_sssobjects_502_7_0, &direction_sssobjects_502_7_0, &direction_sssobjects_502_7_0};
static Image* images_sssobjects_502_8_24[1];
static Direction direction_sssobjects_502_8_24 = {24, 50, 50, 0, -1, images_sssobjects_502_8_24, 1};
static Animation anim_sssobjects_502_8 = {&direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, NULL, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24, &direction_sssobjects_502_8_24};
static Image* images_sssobjects_502_9_0[1];
static Direction direction_sssobjects_502_9_0 = {0, 50, 50, 0, 1, images_sssobjects_502_9_0, 1};
static Animation anim_sssobjects_502_9 = {&direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, NULL, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0, &direction_sssobjects_502_9_0};
static Image* images_sssobjects_502_10_0[1];
static Direction direction_sssobjects_502_10_0 = {0, 50, 50, 0, -1, images_sssobjects_502_10_0, 1};
static Image* images_sssobjects_502_10_4[1];
static Direction direction_sssobjects_502_10_4 = {4, 50, 50, 0, -1, images_sssobjects_502_10_4, 1};
static Image* images_sssobjects_502_10_8[1];
static Direction direction_sssobjects_502_10_8 = {8, 20, 20, 0, -1, images_sssobjects_502_10_8, 1};
static Image* images_sssobjects_502_10_16[1];
static Direction direction_sssobjects_502_10_16 = {16, 50, 50, 0, -1, images_sssobjects_502_10_16, 1};
static Image* images_sssobjects_502_10_24[1];
static Direction direction_sssobjects_502_10_24 = {24, 50, 50, 0, -1, images_sssobjects_502_10_24, 1};
static Image* images_sssobjects_502_10_28[2];
static Direction direction_sssobjects_502_10_28 = {28, 10, 10, 0, -1, images_sssobjects_502_10_28, 2};
static Animation anim_sssobjects_502_10 = {&direction_sssobjects_502_10_0, &direction_sssobjects_502_10_0, NULL, &direction_sssobjects_502_10_4, &direction_sssobjects_502_10_4, &direction_sssobjects_502_10_4, NULL, &direction_sssobjects_502_10_8, &direction_sssobjects_502_10_8, &direction_sssobjects_502_10_8, &direction_sssobjects_502_10_8, &direction_sssobjects_502_10_8, NULL, &direction_sssobjects_502_10_16, &direction_sssobjects_502_10_16, &direction_sssobjects_502_10_16, &direction_sssobjects_502_10_16, &direction_sssobjects_502_10_16, &direction_sssobjects_502_10_16, &direction_sssobjects_502_10_16, NULL, &direction_sssobjects_502_10_24, &direction_sssobjects_502_10_24, &direction_sssobjects_502_10_24, &direction_sssobjects_502_10_24, &direction_sssobjects_502_10_24, NULL, &direction_sssobjects_502_10_28, &direction_sssobjects_502_10_28, &direction_sssobjects_502_10_28, NULL, &direction_sssobjects_502_10_0};
static Image* images_sssobjects_502_11_0[1];
static Direction direction_sssobjects_502_11_0 = {0, 50, 50, 0, -1, images_sssobjects_502_11_0, 1};
static Image* images_sssobjects_502_11_8[1];
static Direction direction_sssobjects_502_11_8 = {8, 50, 50, 0, -1, images_sssobjects_502_11_8, 1};
static Image* images_sssobjects_502_11_16[1];
static Direction direction_sssobjects_502_11_16 = {16, 50, 50, 0, -1, images_sssobjects_502_11_16, 1};
static Animation anim_sssobjects_502_11 = {&direction_sssobjects_502_11_0, &direction_sssobjects_502_11_0, &direction_sssobjects_502_11_0, &direction_sssobjects_502_11_0, NULL, &direction_sssobjects_502_11_8, &direction_sssobjects_502_11_8, &direction_sssobjects_502_11_8, &direction_sssobjects_502_11_8, &direction_sssobjects_502_11_8, &direction_sssobjects_502_11_8, &direction_sssobjects_502_11_8, NULL, &direction_sssobjects_502_11_16, &direction_sssobjects_502_11_16, &direction_sssobjects_502_11_16, &direction_sssobjects_502_11_16, &direction_sssobjects_502_11_16, &direction_sssobjects_502_11_16, &direction_sssobjects_502_11_16, &direction_sssobjects_502_11_16, &direction_sssobjects_502_11_16, &direction_sssobjects_502_11_16, &direction_sssobjects_502_11_16, NULL, &direction_sssobjects_502_11_0, &direction_sssobjects_502_11_0, &direction_sssobjects_502_11_0, &direction_sssobjects_502_11_0, &direction_sssobjects_502_11_0, &direction_sssobjects_502_11_0, &direction_sssobjects_502_11_0};
static Animation * anim_array_sssobjects_502[12] = {&anim_sssobjects_502_0, &anim_sssobjects_502_1, &anim_sssobjects_502_2, NULL, NULL, &anim_sssobjects_502_5, &anim_sssobjects_502_6, &anim_sssobjects_502_7, &anim_sssobjects_502_8, &anim_sssobjects_502_9, &anim_sssobjects_502_10, &anim_sssobjects_502_11};
static Animations anim_sssobjects_502 = {12, &anim_array_sssobjects_502[0]};
static bool anim_sssobjects_502_initialized;
class SSSObjects_502 : public Active
{
public:
    SSSObjects_502(int x, int y) : Active(x, y, SSSObjects_502_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("SSS Objects", 11);
#endif
        this->animations = &anim_sssobjects_502;
        if (!anim_sssobjects_502_initialized) {
            anim_sssobjects_502_initialized = true;
            images_sssobjects_502_0_0[0] = get_internal_image(3338);
            images_sssobjects_502_0_8[0] = get_internal_image(3341);
            images_sssobjects_502_0_16[0] = get_internal_image(3334);
            images_sssobjects_502_0_24[0] = get_internal_image(3340);
            images_sssobjects_502_1_0[0] = get_internal_image(3339);
            images_sssobjects_502_1_8[0] = get_internal_image(3621);
            images_sssobjects_502_1_16[0] = get_internal_image(3332);
            images_sssobjects_502_2_0[0] = get_internal_image(3335);
            images_sssobjects_502_2_8[0] = get_internal_image(3337);
            images_sssobjects_502_2_16[0] = get_internal_image(3343);
            images_sssobjects_502_2_24[0] = get_internal_image(3353);
            images_sssobjects_502_5_0[0] = get_internal_image(3860);
            images_sssobjects_502_5_4[0] = get_internal_image(3863);
            images_sssobjects_502_5_8[0] = get_internal_image(3865);
            images_sssobjects_502_5_12[0] = get_internal_image(3866);
            images_sssobjects_502_5_16[0] = get_internal_image(3864);
            images_sssobjects_502_6_0[0] = get_internal_image(3491);
            images_sssobjects_502_6_0[1] = get_internal_image(3497);
            images_sssobjects_502_6_8[0] = get_internal_image(3483);
            images_sssobjects_502_6_16[0] = get_internal_image(3360);
            images_sssobjects_502_6_24[0] = get_internal_image(3389);
            images_sssobjects_502_7_0[0] = get_internal_image(3484);
            images_sssobjects_502_7_8[0] = get_internal_image(3482);
            images_sssobjects_502_7_16[0] = get_internal_image(3485);
            images_sssobjects_502_7_24[0] = get_internal_image(3348);
            images_sssobjects_502_8_24[0] = get_internal_image(3753);
            images_sssobjects_502_9_0[0] = get_internal_image(34);
            images_sssobjects_502_10_0[0] = get_internal_image(43);
            images_sssobjects_502_10_4[0] = get_internal_image(3923);
            images_sssobjects_502_10_8[0] = get_internal_image(3920);
            images_sssobjects_502_10_16[0] = get_internal_image(3919);
            images_sssobjects_502_10_24[0] = get_internal_image(3922);
            images_sssobjects_502_10_28[0] = get_internal_image(64);
            images_sssobjects_502_10_28[1] = get_internal_image(3927);
            images_sssobjects_502_11_0[0] = get_internal_image(3921);
            images_sssobjects_502_11_8[0] = get_internal_image(3928);
            images_sssobjects_502_11_16[0] = get_internal_image(3929);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_sssobjects_502(int x, int y)
{
    return new (Active::pool.create()) SSSObjects_502(x, y);
}
static Image* images_outfitinmatess_503_0_0[2];
static Direction direction_outfitinmatess_503_0_0 = {0, 6, 6, 0, -1, images_outfitinmatess_503_0_0, 2};
static Image* images_outfitinmatess_503_0_8[2];
static Direction direction_outfitinmatess_503_0_8 = {8, 6, 6, 0, -1, images_outfitinmatess_503_0_8, 2};
static Image* images_outfitinmatess_503_0_16[2];
static Direction direction_outfitinmatess_503_0_16 = {16, 6, 6, 0, -1, images_outfitinmatess_503_0_16, 2};
static Image* images_outfitinmatess_503_0_24[2];
static Direction direction_outfitinmatess_503_0_24 = {24, 6, 6, 0, -1, images_outfitinmatess_503_0_24, 2};
static Animation anim_outfitinmatess_503_0 = {&direction_outfitinmatess_503_0_0, &direction_outfitinmatess_503_0_0, &direction_outfitinmatess_503_0_0, &direction_outfitinmatess_503_0_0, NULL, &direction_outfitinmatess_503_0_8, &direction_outfitinmatess_503_0_8, &direction_outfitinmatess_503_0_8, &direction_outfitinmatess_503_0_8, &direction_outfitinmatess_503_0_8, &direction_outfitinmatess_503_0_8, &direction_outfitinmatess_503_0_8, NULL, &direction_outfitinmatess_503_0_16, &direction_outfitinmatess_503_0_16, &direction_outfitinmatess_503_0_16, &direction_outfitinmatess_503_0_16, &direction_outfitinmatess_503_0_16, &direction_outfitinmatess_503_0_16, &direction_outfitinmatess_503_0_16, NULL, &direction_outfitinmatess_503_0_24, &direction_outfitinmatess_503_0_24, &direction_outfitinmatess_503_0_24, &direction_outfitinmatess_503_0_24, &direction_outfitinmatess_503_0_24, &direction_outfitinmatess_503_0_24, &direction_outfitinmatess_503_0_24, NULL, &direction_outfitinmatess_503_0_0, &direction_outfitinmatess_503_0_0, &direction_outfitinmatess_503_0_0};
static Image* images_outfitinmatess_503_6_0[1];
static Direction direction_outfitinmatess_503_6_0 = {0, 6, 6, 0, -1, images_outfitinmatess_503_6_0, 1};
static Image* images_outfitinmatess_503_6_8[1];
static Direction direction_outfitinmatess_503_6_8 = {8, 6, 6, 0, -1, images_outfitinmatess_503_6_8, 1};
static Image* images_outfitinmatess_503_6_16[1];
static Direction direction_outfitinmatess_503_6_16 = {16, 6, 6, 0, 1, images_outfitinmatess_503_6_16, 1};
static Image* images_outfitinmatess_503_6_24[1];
static Direction direction_outfitinmatess_503_6_24 = {24, 6, 6, 0, -1, images_outfitinmatess_503_6_24, 1};
static Animation anim_outfitinmatess_503_6 = {&direction_outfitinmatess_503_6_0, &direction_outfitinmatess_503_6_0, &direction_outfitinmatess_503_6_0, &direction_outfitinmatess_503_6_0, NULL, &direction_outfitinmatess_503_6_8, &direction_outfitinmatess_503_6_8, &direction_outfitinmatess_503_6_8, &direction_outfitinmatess_503_6_8, &direction_outfitinmatess_503_6_8, &direction_outfitinmatess_503_6_8, &direction_outfitinmatess_503_6_8, NULL, &direction_outfitinmatess_503_6_16, &direction_outfitinmatess_503_6_16, &direction_outfitinmatess_503_6_16, &direction_outfitinmatess_503_6_16, &direction_outfitinmatess_503_6_16, &direction_outfitinmatess_503_6_16, &direction_outfitinmatess_503_6_16, NULL, &direction_outfitinmatess_503_6_24, &direction_outfitinmatess_503_6_24, &direction_outfitinmatess_503_6_24, &direction_outfitinmatess_503_6_24, &direction_outfitinmatess_503_6_24, &direction_outfitinmatess_503_6_24, &direction_outfitinmatess_503_6_24, NULL, &direction_outfitinmatess_503_6_0, &direction_outfitinmatess_503_6_0, &direction_outfitinmatess_503_6_0};
static Image* images_outfitinmatess_503_7_0[2];
static Direction direction_outfitinmatess_503_7_0 = {0, 6, 6, 0, -1, images_outfitinmatess_503_7_0, 2};
static Image* images_outfitinmatess_503_7_8[2];
static Direction direction_outfitinmatess_503_7_8 = {8, 6, 6, 0, -1, images_outfitinmatess_503_7_8, 2};
static Image* images_outfitinmatess_503_7_16[2];
static Direction direction_outfitinmatess_503_7_16 = {16, 6, 6, 0, -1, images_outfitinmatess_503_7_16, 2};
static Image* images_outfitinmatess_503_7_24[2];
static Direction direction_outfitinmatess_503_7_24 = {24, 6, 6, 0, -1, images_outfitinmatess_503_7_24, 2};
static Animation anim_outfitinmatess_503_7 = {&direction_outfitinmatess_503_7_0, &direction_outfitinmatess_503_7_0, &direction_outfitinmatess_503_7_0, &direction_outfitinmatess_503_7_0, NULL, &direction_outfitinmatess_503_7_8, &direction_outfitinmatess_503_7_8, &direction_outfitinmatess_503_7_8, &direction_outfitinmatess_503_7_8, &direction_outfitinmatess_503_7_8, &direction_outfitinmatess_503_7_8, &direction_outfitinmatess_503_7_8, NULL, &direction_outfitinmatess_503_7_16, &direction_outfitinmatess_503_7_16, &direction_outfitinmatess_503_7_16, &direction_outfitinmatess_503_7_16, &direction_outfitinmatess_503_7_16, &direction_outfitinmatess_503_7_16, &direction_outfitinmatess_503_7_16, NULL, &direction_outfitinmatess_503_7_24, &direction_outfitinmatess_503_7_24, &direction_outfitinmatess_503_7_24, &direction_outfitinmatess_503_7_24, &direction_outfitinmatess_503_7_24, &direction_outfitinmatess_503_7_24, &direction_outfitinmatess_503_7_24, NULL, &direction_outfitinmatess_503_7_0, &direction_outfitinmatess_503_7_0, &direction_outfitinmatess_503_7_0};
static Image* images_outfitinmatess_503_8_0[1];
static Direction direction_outfitinmatess_503_8_0 = {0, 10, 10, 0, -1, images_outfitinmatess_503_8_0, 1};
static Image* images_outfitinmatess_503_8_16[2];
static Direction direction_outfitinmatess_503_8_16 = {16, 5, 5, 0, -1, images_outfitinmatess_503_8_16, 2};
static Image* images_outfitinmatess_503_8_24[1];
static Direction direction_outfitinmatess_503_8_24 = {24, 50, 50, 0, -1, images_outfitinmatess_503_8_24, 1};
static Animation anim_outfitinmatess_503_8 = {&direction_outfitinmatess_503_8_0, &direction_outfitinmatess_503_8_0, &direction_outfitinmatess_503_8_0, &direction_outfitinmatess_503_8_0, &direction_outfitinmatess_503_8_0, &direction_outfitinmatess_503_8_0, &direction_outfitinmatess_503_8_0, &direction_outfitinmatess_503_8_0, NULL, &direction_outfitinmatess_503_8_16, &direction_outfitinmatess_503_8_16, &direction_outfitinmatess_503_8_16, &direction_outfitinmatess_503_8_16, &direction_outfitinmatess_503_8_16, &direction_outfitinmatess_503_8_16, &direction_outfitinmatess_503_8_16, &direction_outfitinmatess_503_8_16, &direction_outfitinmatess_503_8_16, &direction_outfitinmatess_503_8_16, &direction_outfitinmatess_503_8_16, NULL, &direction_outfitinmatess_503_8_24, &direction_outfitinmatess_503_8_24, &direction_outfitinmatess_503_8_24, &direction_outfitinmatess_503_8_24, &direction_outfitinmatess_503_8_24, &direction_outfitinmatess_503_8_24, &direction_outfitinmatess_503_8_24, NULL, &direction_outfitinmatess_503_8_0, &direction_outfitinmatess_503_8_0, &direction_outfitinmatess_503_8_0};
static Image* images_outfitinmatess_503_10_0[5];
static Direction direction_outfitinmatess_503_10_0 = {0, 10, 10, 0, -1, images_outfitinmatess_503_10_0, 5};
static Animation anim_outfitinmatess_503_10 = {&direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, NULL, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0, &direction_outfitinmatess_503_10_0};
static Image* images_outfitinmatess_503_11_0[2];
static Direction direction_outfitinmatess_503_11_0 = {0, 6, 6, 0, -1, images_outfitinmatess_503_11_0, 2};
static Image* images_outfitinmatess_503_11_8[2];
static Direction direction_outfitinmatess_503_11_8 = {8, 6, 6, 0, -1, images_outfitinmatess_503_11_8, 2};
static Image* images_outfitinmatess_503_11_16[2];
static Direction direction_outfitinmatess_503_11_16 = {16, 6, 6, 0, -1, images_outfitinmatess_503_11_16, 2};
static Image* images_outfitinmatess_503_11_24[2];
static Direction direction_outfitinmatess_503_11_24 = {24, 6, 6, 0, -1, images_outfitinmatess_503_11_24, 2};
static Animation anim_outfitinmatess_503_11 = {&direction_outfitinmatess_503_11_0, &direction_outfitinmatess_503_11_0, &direction_outfitinmatess_503_11_0, &direction_outfitinmatess_503_11_0, NULL, &direction_outfitinmatess_503_11_8, &direction_outfitinmatess_503_11_8, &direction_outfitinmatess_503_11_8, &direction_outfitinmatess_503_11_8, &direction_outfitinmatess_503_11_8, &direction_outfitinmatess_503_11_8, &direction_outfitinmatess_503_11_8, NULL, &direction_outfitinmatess_503_11_16, &direction_outfitinmatess_503_11_16, &direction_outfitinmatess_503_11_16, &direction_outfitinmatess_503_11_16, &direction_outfitinmatess_503_11_16, &direction_outfitinmatess_503_11_16, &direction_outfitinmatess_503_11_16, NULL, &direction_outfitinmatess_503_11_24, &direction_outfitinmatess_503_11_24, &direction_outfitinmatess_503_11_24, &direction_outfitinmatess_503_11_24, &direction_outfitinmatess_503_11_24, &direction_outfitinmatess_503_11_24, &direction_outfitinmatess_503_11_24, NULL, &direction_outfitinmatess_503_11_0, &direction_outfitinmatess_503_11_0, &direction_outfitinmatess_503_11_0};
static Image* images_outfitinmatess_503_12_0[2];
static Direction direction_outfitinmatess_503_12_0 = {0, 10, 10, 0, -1, images_outfitinmatess_503_12_0, 2};
static Image* images_outfitinmatess_503_12_8[2];
static Direction direction_outfitinmatess_503_12_8 = {8, 10, 10, 0, -1, images_outfitinmatess_503_12_8, 2};
static Image* images_outfitinmatess_503_12_16[2];
static Direction direction_outfitinmatess_503_12_16 = {16, 10, 10, 0, -1, images_outfitinmatess_503_12_16, 2};
static Image* images_outfitinmatess_503_12_24[2];
static Direction direction_outfitinmatess_503_12_24 = {24, 10, 10, 0, -1, images_outfitinmatess_503_12_24, 2};
static Animation anim_outfitinmatess_503_12 = {&direction_outfitinmatess_503_12_0, &direction_outfitinmatess_503_12_0, &direction_outfitinmatess_503_12_0, &direction_outfitinmatess_503_12_0, NULL, &direction_outfitinmatess_503_12_8, &direction_outfitinmatess_503_12_8, &direction_outfitinmatess_503_12_8, &direction_outfitinmatess_503_12_8, &direction_outfitinmatess_503_12_8, &direction_outfitinmatess_503_12_8, &direction_outfitinmatess_503_12_8, NULL, &direction_outfitinmatess_503_12_16, &direction_outfitinmatess_503_12_16, &direction_outfitinmatess_503_12_16, &direction_outfitinmatess_503_12_16, &direction_outfitinmatess_503_12_16, &direction_outfitinmatess_503_12_16, &direction_outfitinmatess_503_12_16, NULL, &direction_outfitinmatess_503_12_24, &direction_outfitinmatess_503_12_24, &direction_outfitinmatess_503_12_24, &direction_outfitinmatess_503_12_24, &direction_outfitinmatess_503_12_24, &direction_outfitinmatess_503_12_24, &direction_outfitinmatess_503_12_24, NULL, &direction_outfitinmatess_503_12_0, &direction_outfitinmatess_503_12_0, &direction_outfitinmatess_503_12_0};
static Image* images_outfitinmatess_503_13_0[2];
static Direction direction_outfitinmatess_503_13_0 = {0, 10, 10, 0, -1, images_outfitinmatess_503_13_0, 2};
static Image* images_outfitinmatess_503_13_8[2];
static Direction direction_outfitinmatess_503_13_8 = {8, 10, 10, 0, -1, images_outfitinmatess_503_13_8, 2};
static Image* images_outfitinmatess_503_13_16[2];
static Direction direction_outfitinmatess_503_13_16 = {16, 10, 10, 0, -1, images_outfitinmatess_503_13_16, 2};
static Image* images_outfitinmatess_503_13_24[2];
static Direction direction_outfitinmatess_503_13_24 = {24, 10, 10, 0, -1, images_outfitinmatess_503_13_24, 2};
static Animation anim_outfitinmatess_503_13 = {&direction_outfitinmatess_503_13_0, &direction_outfitinmatess_503_13_0, &direction_outfitinmatess_503_13_0, &direction_outfitinmatess_503_13_0, NULL, &direction_outfitinmatess_503_13_8, &direction_outfitinmatess_503_13_8, &direction_outfitinmatess_503_13_8, &direction_outfitinmatess_503_13_8, &direction_outfitinmatess_503_13_8, &direction_outfitinmatess_503_13_8, &direction_outfitinmatess_503_13_8, NULL, &direction_outfitinmatess_503_13_16, &direction_outfitinmatess_503_13_16, &direction_outfitinmatess_503_13_16, &direction_outfitinmatess_503_13_16, &direction_outfitinmatess_503_13_16, &direction_outfitinmatess_503_13_16, &direction_outfitinmatess_503_13_16, NULL, &direction_outfitinmatess_503_13_24, &direction_outfitinmatess_503_13_24, &direction_outfitinmatess_503_13_24, &direction_outfitinmatess_503_13_24, &direction_outfitinmatess_503_13_24, &direction_outfitinmatess_503_13_24, &direction_outfitinmatess_503_13_24, NULL, &direction_outfitinmatess_503_13_0, &direction_outfitinmatess_503_13_0, &direction_outfitinmatess_503_13_0};
static Image* images_outfitinmatess_503_14_0[2];
static Direction direction_outfitinmatess_503_14_0 = {0, 10, 10, 0, -1, images_outfitinmatess_503_14_0, 2};
static Image* images_outfitinmatess_503_14_8[2];
static Direction direction_outfitinmatess_503_14_8 = {8, 10, 10, 0, -1, images_outfitinmatess_503_14_8, 2};
static Image* images_outfitinmatess_503_14_16[2];
static Direction direction_outfitinmatess_503_14_16 = {16, 10, 10, 0, -1, images_outfitinmatess_503_14_16, 2};
static Image* images_outfitinmatess_503_14_24[2];
static Direction direction_outfitinmatess_503_14_24 = {24, 10, 10, 0, -1, images_outfitinmatess_503_14_24, 2};
static Animation anim_outfitinmatess_503_14 = {&direction_outfitinmatess_503_14_0, &direction_outfitinmatess_503_14_0, &direction_outfitinmatess_503_14_0, &direction_outfitinmatess_503_14_0, NULL, &direction_outfitinmatess_503_14_8, &direction_outfitinmatess_503_14_8, &direction_outfitinmatess_503_14_8, &direction_outfitinmatess_503_14_8, &direction_outfitinmatess_503_14_8, &direction_outfitinmatess_503_14_8, &direction_outfitinmatess_503_14_8, NULL, &direction_outfitinmatess_503_14_16, &direction_outfitinmatess_503_14_16, &direction_outfitinmatess_503_14_16, &direction_outfitinmatess_503_14_16, &direction_outfitinmatess_503_14_16, &direction_outfitinmatess_503_14_16, &direction_outfitinmatess_503_14_16, NULL, &direction_outfitinmatess_503_14_24, &direction_outfitinmatess_503_14_24, &direction_outfitinmatess_503_14_24, &direction_outfitinmatess_503_14_24, &direction_outfitinmatess_503_14_24, &direction_outfitinmatess_503_14_24, &direction_outfitinmatess_503_14_24, NULL, &direction_outfitinmatess_503_14_0, &direction_outfitinmatess_503_14_0, &direction_outfitinmatess_503_14_0};
static Image* images_outfitinmatess_503_15_0[2];
static Direction direction_outfitinmatess_503_15_0 = {0, 10, 10, 0, -1, images_outfitinmatess_503_15_0, 2};
static Image* images_outfitinmatess_503_15_8[2];
static Direction direction_outfitinmatess_503_15_8 = {8, 10, 10, 0, -1, images_outfitinmatess_503_15_8, 2};
static Image* images_outfitinmatess_503_15_16[2];
static Direction direction_outfitinmatess_503_15_16 = {16, 10, 10, 0, -1, images_outfitinmatess_503_15_16, 2};
static Image* images_outfitinmatess_503_15_24[2];
static Direction direction_outfitinmatess_503_15_24 = {24, 10, 10, 0, -1, images_outfitinmatess_503_15_24, 2};
static Animation anim_outfitinmatess_503_15 = {&direction_outfitinmatess_503_15_0, &direction_outfitinmatess_503_15_0, &direction_outfitinmatess_503_15_0, &direction_outfitinmatess_503_15_0, NULL, &direction_outfitinmatess_503_15_8, &direction_outfitinmatess_503_15_8, &direction_outfitinmatess_503_15_8, &direction_outfitinmatess_503_15_8, &direction_outfitinmatess_503_15_8, &direction_outfitinmatess_503_15_8, &direction_outfitinmatess_503_15_8, NULL, &direction_outfitinmatess_503_15_16, &direction_outfitinmatess_503_15_16, &direction_outfitinmatess_503_15_16, &direction_outfitinmatess_503_15_16, &direction_outfitinmatess_503_15_16, &direction_outfitinmatess_503_15_16, &direction_outfitinmatess_503_15_16, NULL, &direction_outfitinmatess_503_15_24, &direction_outfitinmatess_503_15_24, &direction_outfitinmatess_503_15_24, &direction_outfitinmatess_503_15_24, &direction_outfitinmatess_503_15_24, &direction_outfitinmatess_503_15_24, &direction_outfitinmatess_503_15_24, NULL, &direction_outfitinmatess_503_15_0, &direction_outfitinmatess_503_15_0, &direction_outfitinmatess_503_15_0};
static Image* images_outfitinmatess_503_17_0[2];
static Direction direction_outfitinmatess_503_17_0 = {0, 5, 5, 1, -1, images_outfitinmatess_503_17_0, 2};
static Image* images_outfitinmatess_503_17_8[2];
static Direction direction_outfitinmatess_503_17_8 = {8, 5, 5, 1, -1, images_outfitinmatess_503_17_8, 2};
static Image* images_outfitinmatess_503_17_16[2];
static Direction direction_outfitinmatess_503_17_16 = {16, 5, 5, 1, -1, images_outfitinmatess_503_17_16, 2};
static Image* images_outfitinmatess_503_17_24[2];
static Direction direction_outfitinmatess_503_17_24 = {24, 5, 5, 1, -1, images_outfitinmatess_503_17_24, 2};
static Animation anim_outfitinmatess_503_17 = {&direction_outfitinmatess_503_17_0, &direction_outfitinmatess_503_17_0, &direction_outfitinmatess_503_17_0, &direction_outfitinmatess_503_17_0, NULL, &direction_outfitinmatess_503_17_8, &direction_outfitinmatess_503_17_8, &direction_outfitinmatess_503_17_8, &direction_outfitinmatess_503_17_8, &direction_outfitinmatess_503_17_8, &direction_outfitinmatess_503_17_8, &direction_outfitinmatess_503_17_8, NULL, &direction_outfitinmatess_503_17_16, &direction_outfitinmatess_503_17_16, &direction_outfitinmatess_503_17_16, &direction_outfitinmatess_503_17_16, &direction_outfitinmatess_503_17_16, &direction_outfitinmatess_503_17_16, &direction_outfitinmatess_503_17_16, NULL, &direction_outfitinmatess_503_17_24, &direction_outfitinmatess_503_17_24, &direction_outfitinmatess_503_17_24, &direction_outfitinmatess_503_17_24, &direction_outfitinmatess_503_17_24, &direction_outfitinmatess_503_17_24, &direction_outfitinmatess_503_17_24, NULL, &direction_outfitinmatess_503_17_0, &direction_outfitinmatess_503_17_0, &direction_outfitinmatess_503_17_0};
static Animation * anim_array_outfitinmatess_503[18] = {&anim_outfitinmatess_503_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitinmatess_503_6, &anim_outfitinmatess_503_7, &anim_outfitinmatess_503_8, NULL, &anim_outfitinmatess_503_10, &anim_outfitinmatess_503_11, &anim_outfitinmatess_503_12, &anim_outfitinmatess_503_13, &anim_outfitinmatess_503_14, &anim_outfitinmatess_503_15, NULL, &anim_outfitinmatess_503_17};
static Animations anim_outfitinmatess_503 = {18, &anim_array_outfitinmatess_503[0]};
static bool anim_outfitinmatess_503_initialized;
class OutfitInmateSS_503 : public Active
{
public:
    OutfitInmateSS_503(int x, int y) : Active(x, y, OutfitInmateSS_503_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate SS", 18);
#endif
        this->animations = &anim_outfitinmatess_503;
        if (!anim_outfitinmatess_503_initialized) {
            anim_outfitinmatess_503_initialized = true;
            images_outfitinmatess_503_0_0[0] = get_internal_image(3416);
            images_outfitinmatess_503_0_0[1] = get_internal_image(3262);
            images_outfitinmatess_503_0_8[0] = get_internal_image(3354);
            images_outfitinmatess_503_0_8[1] = get_internal_image(3346);
            images_outfitinmatess_503_0_16[0] = get_internal_image(3413);
            images_outfitinmatess_503_0_16[1] = get_internal_image(3414);
            images_outfitinmatess_503_0_24[0] = get_internal_image(3344);
            images_outfitinmatess_503_0_24[1] = get_internal_image(3345);
            images_outfitinmatess_503_6_0[0] = get_internal_image(3513);
            images_outfitinmatess_503_6_8[0] = get_internal_image(3519);
            images_outfitinmatess_503_6_16[0] = get_internal_image(3516);
            images_outfitinmatess_503_6_24[0] = get_internal_image(3517);
            images_outfitinmatess_503_7_0[0] = get_internal_image(3351);
            images_outfitinmatess_503_7_0[1] = get_internal_image(3754);
            images_outfitinmatess_503_7_8[0] = get_internal_image(3761);
            images_outfitinmatess_503_7_8[1] = get_internal_image(3759);
            images_outfitinmatess_503_7_16[0] = get_internal_image(3755);
            images_outfitinmatess_503_7_16[1] = get_internal_image(3756);
            images_outfitinmatess_503_7_24[0] = get_internal_image(3757);
            images_outfitinmatess_503_7_24[1] = get_internal_image(3758);
            images_outfitinmatess_503_8_0[0] = get_internal_image(3494);
            images_outfitinmatess_503_8_16[0] = get_internal_image(2595);
            images_outfitinmatess_503_8_16[1] = get_internal_image(2596);
            images_outfitinmatess_503_8_24[0] = get_internal_image(3371);
            images_outfitinmatess_503_10_0[0] = get_internal_image(3690);
            images_outfitinmatess_503_10_0[1] = get_internal_image(3694);
            images_outfitinmatess_503_10_0[2] = get_internal_image(3696);
            images_outfitinmatess_503_10_0[3] = get_internal_image(3696);
            images_outfitinmatess_503_10_0[4] = get_internal_image(3696);
            images_outfitinmatess_503_11_0[0] = get_internal_image(3571);
            images_outfitinmatess_503_11_0[1] = get_internal_image(3572);
            images_outfitinmatess_503_11_8[0] = get_internal_image(3579);
            images_outfitinmatess_503_11_8[1] = get_internal_image(3577);
            images_outfitinmatess_503_11_16[0] = get_internal_image(3573);
            images_outfitinmatess_503_11_16[1] = get_internal_image(3574);
            images_outfitinmatess_503_11_24[0] = get_internal_image(3575);
            images_outfitinmatess_503_11_24[1] = get_internal_image(3576);
            images_outfitinmatess_503_12_0[0] = get_internal_image(3711);
            images_outfitinmatess_503_12_0[1] = get_internal_image(3713);
            images_outfitinmatess_503_12_8[0] = get_internal_image(3720);
            images_outfitinmatess_503_12_8[1] = get_internal_image(3719);
            images_outfitinmatess_503_12_16[0] = get_internal_image(3714);
            images_outfitinmatess_503_12_16[1] = get_internal_image(3715);
            images_outfitinmatess_503_12_24[0] = get_internal_image(3716);
            images_outfitinmatess_503_12_24[1] = get_internal_image(3717);
            images_outfitinmatess_503_13_0[0] = get_internal_image(3695);
            images_outfitinmatess_503_13_0[1] = get_internal_image(3697);
            images_outfitinmatess_503_13_8[0] = get_internal_image(3704);
            images_outfitinmatess_503_13_8[1] = get_internal_image(3702);
            images_outfitinmatess_503_13_16[0] = get_internal_image(3698);
            images_outfitinmatess_503_13_16[1] = get_internal_image(3699);
            images_outfitinmatess_503_13_24[0] = get_internal_image(3700);
            images_outfitinmatess_503_13_24[1] = get_internal_image(3701);
            images_outfitinmatess_503_14_0[0] = get_internal_image(3703);
            images_outfitinmatess_503_14_0[1] = get_internal_image(3705);
            images_outfitinmatess_503_14_8[0] = get_internal_image(3712);
            images_outfitinmatess_503_14_8[1] = get_internal_image(3710);
            images_outfitinmatess_503_14_16[0] = get_internal_image(3706);
            images_outfitinmatess_503_14_16[1] = get_internal_image(3707);
            images_outfitinmatess_503_14_24[0] = get_internal_image(3708);
            images_outfitinmatess_503_14_24[1] = get_internal_image(3709);
            images_outfitinmatess_503_15_0[0] = get_internal_image(3364);
            images_outfitinmatess_503_15_0[1] = get_internal_image(3858);
            images_outfitinmatess_503_15_8[0] = get_internal_image(3879);
            images_outfitinmatess_503_15_8[1] = get_internal_image(3884);
            images_outfitinmatess_503_15_16[0] = get_internal_image(3867);
            images_outfitinmatess_503_15_16[1] = get_internal_image(3871);
            images_outfitinmatess_503_15_24[0] = get_internal_image(3875);
            images_outfitinmatess_503_15_24[1] = get_internal_image(3878);
            images_outfitinmatess_503_17_0[0] = get_internal_image(2045);
            images_outfitinmatess_503_17_0[1] = get_internal_image(2046);
            images_outfitinmatess_503_17_8[0] = get_internal_image(2050);
            images_outfitinmatess_503_17_8[1] = get_internal_image(2043);
            images_outfitinmatess_503_17_16[0] = get_internal_image(2041);
            images_outfitinmatess_503_17_16[1] = get_internal_image(2044);
            images_outfitinmatess_503_17_24[0] = get_internal_image(2049);
            images_outfitinmatess_503_17_24[1] = get_internal_image(2047);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmatess_503(int x, int y)
{
    return new (Active::pool.create()) OutfitInmateSS_503(x, y);
}
static Image* images_ssreindeer_504_0_0[2];
static Direction direction_ssreindeer_504_0_0 = {0, 6, 6, 0, -1, images_ssreindeer_504_0_0, 2};
static Image* images_ssreindeer_504_0_8[2];
static Direction direction_ssreindeer_504_0_8 = {8, 6, 6, 0, -1, images_ssreindeer_504_0_8, 2};
static Image* images_ssreindeer_504_0_16[2];
static Direction direction_ssreindeer_504_0_16 = {16, 6, 6, 0, -1, images_ssreindeer_504_0_16, 2};
static Image* images_ssreindeer_504_0_24[2];
static Direction direction_ssreindeer_504_0_24 = {24, 6, 6, 0, -1, images_ssreindeer_504_0_24, 2};
static Animation anim_ssreindeer_504_0 = {&direction_ssreindeer_504_0_0, &direction_ssreindeer_504_0_0, &direction_ssreindeer_504_0_0, &direction_ssreindeer_504_0_0, NULL, &direction_ssreindeer_504_0_8, &direction_ssreindeer_504_0_8, &direction_ssreindeer_504_0_8, &direction_ssreindeer_504_0_8, &direction_ssreindeer_504_0_8, &direction_ssreindeer_504_0_8, &direction_ssreindeer_504_0_8, NULL, &direction_ssreindeer_504_0_16, &direction_ssreindeer_504_0_16, &direction_ssreindeer_504_0_16, &direction_ssreindeer_504_0_16, &direction_ssreindeer_504_0_16, &direction_ssreindeer_504_0_16, &direction_ssreindeer_504_0_16, NULL, &direction_ssreindeer_504_0_24, &direction_ssreindeer_504_0_24, &direction_ssreindeer_504_0_24, &direction_ssreindeer_504_0_24, &direction_ssreindeer_504_0_24, &direction_ssreindeer_504_0_24, &direction_ssreindeer_504_0_24, NULL, &direction_ssreindeer_504_0_0, &direction_ssreindeer_504_0_0, &direction_ssreindeer_504_0_0};
static Image* images_ssreindeer_504_5_0[2];
static Direction direction_ssreindeer_504_5_0 = {0, 6, 6, 0, -1, images_ssreindeer_504_5_0, 2};
static Image* images_ssreindeer_504_5_8[2];
static Direction direction_ssreindeer_504_5_8 = {8, 6, 6, 0, -1, images_ssreindeer_504_5_8, 2};
static Image* images_ssreindeer_504_5_16[2];
static Direction direction_ssreindeer_504_5_16 = {16, 6, 6, 0, -1, images_ssreindeer_504_5_16, 2};
static Image* images_ssreindeer_504_5_24[2];
static Direction direction_ssreindeer_504_5_24 = {24, 6, 6, 0, -1, images_ssreindeer_504_5_24, 2};
static Animation anim_ssreindeer_504_5 = {&direction_ssreindeer_504_5_0, &direction_ssreindeer_504_5_0, &direction_ssreindeer_504_5_0, &direction_ssreindeer_504_5_0, NULL, &direction_ssreindeer_504_5_8, &direction_ssreindeer_504_5_8, &direction_ssreindeer_504_5_8, &direction_ssreindeer_504_5_8, &direction_ssreindeer_504_5_8, &direction_ssreindeer_504_5_8, &direction_ssreindeer_504_5_8, NULL, &direction_ssreindeer_504_5_16, &direction_ssreindeer_504_5_16, &direction_ssreindeer_504_5_16, &direction_ssreindeer_504_5_16, &direction_ssreindeer_504_5_16, &direction_ssreindeer_504_5_16, &direction_ssreindeer_504_5_16, NULL, &direction_ssreindeer_504_5_24, &direction_ssreindeer_504_5_24, &direction_ssreindeer_504_5_24, &direction_ssreindeer_504_5_24, &direction_ssreindeer_504_5_24, &direction_ssreindeer_504_5_24, &direction_ssreindeer_504_5_24, NULL, &direction_ssreindeer_504_5_0, &direction_ssreindeer_504_5_0, &direction_ssreindeer_504_5_0};
static Animation * anim_array_ssreindeer_504[6] = {&anim_ssreindeer_504_0, NULL, NULL, NULL, NULL, &anim_ssreindeer_504_5};
static Animations anim_ssreindeer_504 = {6, &anim_array_ssreindeer_504[0]};
static bool anim_ssreindeer_504_initialized;
class SSReindeer_504 : public Active
{
public:
    SSReindeer_504(int x, int y) : Active(x, y, SSReindeer_504_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SS_Reindeer", 11);
#endif
        this->animations = &anim_ssreindeer_504;
        if (!anim_ssreindeer_504_initialized) {
            anim_ssreindeer_504_initialized = true;
            images_ssreindeer_504_0_0[0] = get_internal_image(3363);
            images_ssreindeer_504_0_0[1] = get_internal_image(3362);
            images_ssreindeer_504_0_8[0] = get_internal_image(3370);
            images_ssreindeer_504_0_8[1] = get_internal_image(3368);
            images_ssreindeer_504_0_16[0] = get_internal_image(3760);
            images_ssreindeer_504_0_16[1] = get_internal_image(3763);
            images_ssreindeer_504_0_24[0] = get_internal_image(3365);
            images_ssreindeer_504_0_24[1] = get_internal_image(3764);
            images_ssreindeer_504_5_0[0] = get_internal_image(3781);
            images_ssreindeer_504_5_0[1] = get_internal_image(3261);
            images_ssreindeer_504_5_8[0] = get_internal_image(3370);
            images_ssreindeer_504_5_8[1] = get_internal_image(3368);
            images_ssreindeer_504_5_16[0] = get_internal_image(3367);
            images_ssreindeer_504_5_16[1] = get_internal_image(3518);
            images_ssreindeer_504_5_24[0] = get_internal_image(3797);
            images_ssreindeer_504_5_24[1] = get_internal_image(3786);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_ssreindeer_504(int x, int y)
{
    return new (Active::pool.create()) SSReindeer_504(x, y);
}
static Image* images_playerss_505_0_0[2];
static Direction direction_playerss_505_0_0 = {0, 10, 10, 0, -1, images_playerss_505_0_0, 2};
static Image* images_playerss_505_0_8[2];
static Direction direction_playerss_505_0_8 = {8, 10, 10, 0, -1, images_playerss_505_0_8, 2};
static Image* images_playerss_505_0_16[2];
static Direction direction_playerss_505_0_16 = {16, 10, 10, 0, -1, images_playerss_505_0_16, 2};
static Image* images_playerss_505_0_24[2];
static Direction direction_playerss_505_0_24 = {24, 10, 10, 0, -1, images_playerss_505_0_24, 2};
static Animation anim_playerss_505_0 = {&direction_playerss_505_0_0, &direction_playerss_505_0_0, &direction_playerss_505_0_0, &direction_playerss_505_0_0, NULL, &direction_playerss_505_0_8, &direction_playerss_505_0_8, &direction_playerss_505_0_8, &direction_playerss_505_0_8, &direction_playerss_505_0_8, &direction_playerss_505_0_8, &direction_playerss_505_0_8, NULL, &direction_playerss_505_0_16, &direction_playerss_505_0_16, &direction_playerss_505_0_16, &direction_playerss_505_0_16, &direction_playerss_505_0_16, &direction_playerss_505_0_16, &direction_playerss_505_0_16, NULL, &direction_playerss_505_0_24, &direction_playerss_505_0_24, &direction_playerss_505_0_24, &direction_playerss_505_0_24, &direction_playerss_505_0_24, &direction_playerss_505_0_24, &direction_playerss_505_0_24, NULL, &direction_playerss_505_0_0, &direction_playerss_505_0_0, &direction_playerss_505_0_0};
static Image* images_playerss_505_4_0[4];
static Direction direction_playerss_505_4_0 = {0, 20, 20, 0, 1, images_playerss_505_4_0, 4};
static Image* images_playerss_505_4_16[4];
static Direction direction_playerss_505_4_16 = {16, 20, 20, 0, 1, images_playerss_505_4_16, 4};
static Animation anim_playerss_505_4 = {&direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0, NULL, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, &direction_playerss_505_4_16, NULL, &direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0, &direction_playerss_505_4_0};
static Image* images_playerss_505_6_0[1];
static Direction direction_playerss_505_6_0 = {0, 6, 6, 0, 1, images_playerss_505_6_0, 1};
static Image* images_playerss_505_6_8[1];
static Direction direction_playerss_505_6_8 = {8, 6, 6, 0, 1, images_playerss_505_6_8, 1};
static Image* images_playerss_505_6_16[1];
static Direction direction_playerss_505_6_16 = {16, 6, 6, 0, 1, images_playerss_505_6_16, 1};
static Image* images_playerss_505_6_24[1];
static Direction direction_playerss_505_6_24 = {24, 6, 6, 0, 1, images_playerss_505_6_24, 1};
static Animation anim_playerss_505_6 = {&direction_playerss_505_6_0, &direction_playerss_505_6_0, &direction_playerss_505_6_0, &direction_playerss_505_6_0, NULL, &direction_playerss_505_6_8, &direction_playerss_505_6_8, &direction_playerss_505_6_8, &direction_playerss_505_6_8, &direction_playerss_505_6_8, &direction_playerss_505_6_8, &direction_playerss_505_6_8, NULL, &direction_playerss_505_6_16, &direction_playerss_505_6_16, &direction_playerss_505_6_16, &direction_playerss_505_6_16, &direction_playerss_505_6_16, &direction_playerss_505_6_16, &direction_playerss_505_6_16, NULL, &direction_playerss_505_6_24, &direction_playerss_505_6_24, &direction_playerss_505_6_24, &direction_playerss_505_6_24, &direction_playerss_505_6_24, &direction_playerss_505_6_24, &direction_playerss_505_6_24, NULL, &direction_playerss_505_6_0, &direction_playerss_505_6_0, &direction_playerss_505_6_0};
static Image* images_playerss_505_7_0[2];
static Direction direction_playerss_505_7_0 = {0, 10, 10, 0, -1, images_playerss_505_7_0, 2};
static Image* images_playerss_505_7_8[2];
static Direction direction_playerss_505_7_8 = {8, 10, 10, 0, -1, images_playerss_505_7_8, 2};
static Image* images_playerss_505_7_16[2];
static Direction direction_playerss_505_7_16 = {16, 10, 10, 0, -1, images_playerss_505_7_16, 2};
static Image* images_playerss_505_7_24[2];
static Direction direction_playerss_505_7_24 = {24, 10, 10, 0, -1, images_playerss_505_7_24, 2};
static Animation anim_playerss_505_7 = {&direction_playerss_505_7_0, &direction_playerss_505_7_0, &direction_playerss_505_7_0, &direction_playerss_505_7_0, NULL, &direction_playerss_505_7_8, &direction_playerss_505_7_8, &direction_playerss_505_7_8, &direction_playerss_505_7_8, &direction_playerss_505_7_8, &direction_playerss_505_7_8, &direction_playerss_505_7_8, NULL, &direction_playerss_505_7_16, &direction_playerss_505_7_16, &direction_playerss_505_7_16, &direction_playerss_505_7_16, &direction_playerss_505_7_16, &direction_playerss_505_7_16, &direction_playerss_505_7_16, NULL, &direction_playerss_505_7_24, &direction_playerss_505_7_24, &direction_playerss_505_7_24, &direction_playerss_505_7_24, &direction_playerss_505_7_24, &direction_playerss_505_7_24, &direction_playerss_505_7_24, NULL, &direction_playerss_505_7_0, &direction_playerss_505_7_0, &direction_playerss_505_7_0};
static Image* images_playerss_505_8_0[1];
static Direction direction_playerss_505_8_0 = {0, 50, 50, 0, -1, images_playerss_505_8_0, 1};
static Image* images_playerss_505_8_24[1];
static Direction direction_playerss_505_8_24 = {24, 50, 50, 0, -1, images_playerss_505_8_24, 1};
static Animation anim_playerss_505_8 = {&direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0, NULL, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, &direction_playerss_505_8_24, NULL, &direction_playerss_505_8_0, &direction_playerss_505_8_0, &direction_playerss_505_8_0};
static Image* images_playerss_505_10_0[5];
static Direction direction_playerss_505_10_0 = {0, 10, 10, 0, 1, images_playerss_505_10_0, 5};
static Animation anim_playerss_505_10 = {&direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, NULL, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0, &direction_playerss_505_10_0};
static Image* images_playerss_505_11_0[2];
static Direction direction_playerss_505_11_0 = {0, 10, 10, 0, -1, images_playerss_505_11_0, 2};
static Image* images_playerss_505_11_8[2];
static Direction direction_playerss_505_11_8 = {8, 10, 10, 0, -1, images_playerss_505_11_8, 2};
static Image* images_playerss_505_11_16[2];
static Direction direction_playerss_505_11_16 = {16, 10, 10, 0, -1, images_playerss_505_11_16, 2};
static Image* images_playerss_505_11_24[2];
static Direction direction_playerss_505_11_24 = {24, 10, 10, 0, -1, images_playerss_505_11_24, 2};
static Animation anim_playerss_505_11 = {&direction_playerss_505_11_0, &direction_playerss_505_11_0, &direction_playerss_505_11_0, &direction_playerss_505_11_0, NULL, &direction_playerss_505_11_8, &direction_playerss_505_11_8, &direction_playerss_505_11_8, &direction_playerss_505_11_8, &direction_playerss_505_11_8, &direction_playerss_505_11_8, &direction_playerss_505_11_8, NULL, &direction_playerss_505_11_16, &direction_playerss_505_11_16, &direction_playerss_505_11_16, &direction_playerss_505_11_16, &direction_playerss_505_11_16, &direction_playerss_505_11_16, &direction_playerss_505_11_16, NULL, &direction_playerss_505_11_24, &direction_playerss_505_11_24, &direction_playerss_505_11_24, &direction_playerss_505_11_24, &direction_playerss_505_11_24, &direction_playerss_505_11_24, &direction_playerss_505_11_24, NULL, &direction_playerss_505_11_0, &direction_playerss_505_11_0, &direction_playerss_505_11_0};
static Image* images_playerss_505_12_0[2];
static Direction direction_playerss_505_12_0 = {0, 10, 10, 0, -1, images_playerss_505_12_0, 2};
static Image* images_playerss_505_12_8[2];
static Direction direction_playerss_505_12_8 = {8, 10, 10, 0, -1, images_playerss_505_12_8, 2};
static Image* images_playerss_505_12_16[2];
static Direction direction_playerss_505_12_16 = {16, 10, 10, 0, -1, images_playerss_505_12_16, 2};
static Image* images_playerss_505_12_24[2];
static Direction direction_playerss_505_12_24 = {24, 10, 10, 0, -1, images_playerss_505_12_24, 2};
static Animation anim_playerss_505_12 = {&direction_playerss_505_12_0, &direction_playerss_505_12_0, &direction_playerss_505_12_0, &direction_playerss_505_12_0, NULL, &direction_playerss_505_12_8, &direction_playerss_505_12_8, &direction_playerss_505_12_8, &direction_playerss_505_12_8, &direction_playerss_505_12_8, &direction_playerss_505_12_8, &direction_playerss_505_12_8, NULL, &direction_playerss_505_12_16, &direction_playerss_505_12_16, &direction_playerss_505_12_16, &direction_playerss_505_12_16, &direction_playerss_505_12_16, &direction_playerss_505_12_16, &direction_playerss_505_12_16, NULL, &direction_playerss_505_12_24, &direction_playerss_505_12_24, &direction_playerss_505_12_24, &direction_playerss_505_12_24, &direction_playerss_505_12_24, &direction_playerss_505_12_24, &direction_playerss_505_12_24, NULL, &direction_playerss_505_12_0, &direction_playerss_505_12_0, &direction_playerss_505_12_0};
static Image* images_playerss_505_13_0[2];
static Direction direction_playerss_505_13_0 = {0, 10, 10, 0, -1, images_playerss_505_13_0, 2};
static Image* images_playerss_505_13_8[2];
static Direction direction_playerss_505_13_8 = {8, 10, 10, 0, -1, images_playerss_505_13_8, 2};
static Image* images_playerss_505_13_16[2];
static Direction direction_playerss_505_13_16 = {16, 10, 10, 0, -1, images_playerss_505_13_16, 2};
static Image* images_playerss_505_13_24[2];
static Direction direction_playerss_505_13_24 = {24, 10, 10, 0, -1, images_playerss_505_13_24, 2};
static Animation anim_playerss_505_13 = {&direction_playerss_505_13_0, &direction_playerss_505_13_0, &direction_playerss_505_13_0, &direction_playerss_505_13_0, NULL, &direction_playerss_505_13_8, &direction_playerss_505_13_8, &direction_playerss_505_13_8, &direction_playerss_505_13_8, &direction_playerss_505_13_8, &direction_playerss_505_13_8, &direction_playerss_505_13_8, NULL, &direction_playerss_505_13_16, &direction_playerss_505_13_16, &direction_playerss_505_13_16, &direction_playerss_505_13_16, &direction_playerss_505_13_16, &direction_playerss_505_13_16, &direction_playerss_505_13_16, NULL, &direction_playerss_505_13_24, &direction_playerss_505_13_24, &direction_playerss_505_13_24, &direction_playerss_505_13_24, &direction_playerss_505_13_24, &direction_playerss_505_13_24, &direction_playerss_505_13_24, NULL, &direction_playerss_505_13_0, &direction_playerss_505_13_0, &direction_playerss_505_13_0};
static Image* images_playerss_505_14_0[2];
static Direction direction_playerss_505_14_0 = {0, 10, 10, 0, -1, images_playerss_505_14_0, 2};
static Image* images_playerss_505_14_8[2];
static Direction direction_playerss_505_14_8 = {8, 10, 10, 0, -1, images_playerss_505_14_8, 2};
static Image* images_playerss_505_14_16[2];
static Direction direction_playerss_505_14_16 = {16, 10, 10, 0, -1, images_playerss_505_14_16, 2};
static Image* images_playerss_505_14_24[1];
static Direction direction_playerss_505_14_24 = {24, 10, 10, 0, -1, images_playerss_505_14_24, 1};
static Animation anim_playerss_505_14 = {&direction_playerss_505_14_0, &direction_playerss_505_14_0, &direction_playerss_505_14_0, &direction_playerss_505_14_0, NULL, &direction_playerss_505_14_8, &direction_playerss_505_14_8, &direction_playerss_505_14_8, &direction_playerss_505_14_8, &direction_playerss_505_14_8, &direction_playerss_505_14_8, &direction_playerss_505_14_8, NULL, &direction_playerss_505_14_16, &direction_playerss_505_14_16, &direction_playerss_505_14_16, &direction_playerss_505_14_16, &direction_playerss_505_14_16, &direction_playerss_505_14_16, &direction_playerss_505_14_16, NULL, &direction_playerss_505_14_24, &direction_playerss_505_14_24, &direction_playerss_505_14_24, &direction_playerss_505_14_24, &direction_playerss_505_14_24, &direction_playerss_505_14_24, &direction_playerss_505_14_24, NULL, &direction_playerss_505_14_0, &direction_playerss_505_14_0, &direction_playerss_505_14_0};
static Image* images_playerss_505_15_0[2];
static Direction direction_playerss_505_15_0 = {0, 10, 10, 0, -1, images_playerss_505_15_0, 2};
static Image* images_playerss_505_15_8[2];
static Direction direction_playerss_505_15_8 = {8, 10, 10, 0, -1, images_playerss_505_15_8, 2};
static Image* images_playerss_505_15_16[2];
static Direction direction_playerss_505_15_16 = {16, 10, 10, 0, -1, images_playerss_505_15_16, 2};
static Image* images_playerss_505_15_24[2];
static Direction direction_playerss_505_15_24 = {24, 10, 10, 0, -1, images_playerss_505_15_24, 2};
static Animation anim_playerss_505_15 = {&direction_playerss_505_15_0, &direction_playerss_505_15_0, &direction_playerss_505_15_0, &direction_playerss_505_15_0, NULL, &direction_playerss_505_15_8, &direction_playerss_505_15_8, &direction_playerss_505_15_8, &direction_playerss_505_15_8, &direction_playerss_505_15_8, &direction_playerss_505_15_8, &direction_playerss_505_15_8, NULL, &direction_playerss_505_15_16, &direction_playerss_505_15_16, &direction_playerss_505_15_16, &direction_playerss_505_15_16, &direction_playerss_505_15_16, &direction_playerss_505_15_16, &direction_playerss_505_15_16, NULL, &direction_playerss_505_15_24, &direction_playerss_505_15_24, &direction_playerss_505_15_24, &direction_playerss_505_15_24, &direction_playerss_505_15_24, &direction_playerss_505_15_24, &direction_playerss_505_15_24, NULL, &direction_playerss_505_15_0, &direction_playerss_505_15_0, &direction_playerss_505_15_0};
static Animation * anim_array_playerss_505[16] = {&anim_playerss_505_0, NULL, NULL, NULL, &anim_playerss_505_4, NULL, &anim_playerss_505_6, &anim_playerss_505_7, &anim_playerss_505_8, NULL, &anim_playerss_505_10, &anim_playerss_505_11, &anim_playerss_505_12, &anim_playerss_505_13, &anim_playerss_505_14, &anim_playerss_505_15};
static Animations anim_playerss_505 = {16, &anim_array_playerss_505[0]};
static bool anim_playerss_505_initialized;
class PlayerSS_505 : public Active
{
public:
    PlayerSS_505(int x, int y) : Active(x, y, PlayerSS_505_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_ SS", 10);
#endif
        this->animations = &anim_playerss_505;
        if (!anim_playerss_505_initialized) {
            anim_playerss_505_initialized = true;
            images_playerss_505_0_0[0] = get_internal_image(3954);
            images_playerss_505_0_0[1] = get_internal_image(3393);
            images_playerss_505_0_8[0] = get_internal_image(3398);
            images_playerss_505_0_8[1] = get_internal_image(3399);
            images_playerss_505_0_16[0] = get_internal_image(3955);
            images_playerss_505_0_16[1] = get_internal_image(3395);
            images_playerss_505_0_24[0] = get_internal_image(3396);
            images_playerss_505_0_24[1] = get_internal_image(3397);
            images_playerss_505_4_0[0] = get_internal_image(369);
            images_playerss_505_4_0[1] = get_internal_image(373);
            images_playerss_505_4_0[2] = get_internal_image(369);
            images_playerss_505_4_0[3] = get_internal_image(373);
            images_playerss_505_4_16[0] = get_internal_image(371);
            images_playerss_505_4_16[1] = get_internal_image(763);
            images_playerss_505_4_16[2] = get_internal_image(371);
            images_playerss_505_4_16[3] = get_internal_image(763);
            images_playerss_505_6_0[0] = get_internal_image(3403);
            images_playerss_505_6_8[0] = get_internal_image(3402);
            images_playerss_505_6_16[0] = get_internal_image(3400);
            images_playerss_505_6_24[0] = get_internal_image(3401);
            images_playerss_505_7_0[0] = get_internal_image(3406);
            images_playerss_505_7_0[1] = get_internal_image(3405);
            images_playerss_505_7_8[0] = get_internal_image(3410);
            images_playerss_505_7_8[1] = get_internal_image(3411);
            images_playerss_505_7_16[0] = get_internal_image(3404);
            images_playerss_505_7_16[1] = get_internal_image(3407);
            images_playerss_505_7_24[0] = get_internal_image(3408);
            images_playerss_505_7_24[1] = get_internal_image(3409);
            images_playerss_505_8_0[0] = get_internal_image(3493);
            images_playerss_505_8_24[0] = get_internal_image(3415);
            images_playerss_505_10_0[0] = get_internal_image(3687);
            images_playerss_505_10_0[1] = get_internal_image(3686);
            images_playerss_505_10_0[2] = get_internal_image(3685);
            images_playerss_505_10_0[3] = get_internal_image(3685);
            images_playerss_505_10_0[4] = get_internal_image(3686);
            images_playerss_505_11_0[0] = get_internal_image(3522);
            images_playerss_505_11_0[1] = get_internal_image(3521);
            images_playerss_505_11_8[0] = get_internal_image(3526);
            images_playerss_505_11_8[1] = get_internal_image(3527);
            images_playerss_505_11_16[0] = get_internal_image(3520);
            images_playerss_505_11_16[1] = get_internal_image(3523);
            images_playerss_505_11_24[0] = get_internal_image(3524);
            images_playerss_505_11_24[1] = get_internal_image(3525);
            images_playerss_505_12_0[0] = get_internal_image(3528);
            images_playerss_505_12_0[1] = get_internal_image(3529);
            images_playerss_505_12_8[0] = get_internal_image(3532);
            images_playerss_505_12_8[1] = get_internal_image(3535);
            images_playerss_505_12_16[0] = get_internal_image(3530);
            images_playerss_505_12_16[1] = get_internal_image(3531);
            images_playerss_505_12_24[0] = get_internal_image(3534);
            images_playerss_505_12_24[1] = get_internal_image(3533);
            images_playerss_505_13_0[0] = get_internal_image(3538);
            images_playerss_505_13_0[1] = get_internal_image(3537);
            images_playerss_505_13_8[0] = get_internal_image(3542);
            images_playerss_505_13_8[1] = get_internal_image(3543);
            images_playerss_505_13_16[0] = get_internal_image(3536);
            images_playerss_505_13_16[1] = get_internal_image(3539);
            images_playerss_505_13_24[0] = get_internal_image(3540);
            images_playerss_505_13_24[1] = get_internal_image(3541);
            images_playerss_505_14_0[0] = get_internal_image(3546);
            images_playerss_505_14_0[1] = get_internal_image(3544);
            images_playerss_505_14_8[0] = get_internal_image(3548);
            images_playerss_505_14_8[1] = get_internal_image(3549);
            images_playerss_505_14_16[0] = get_internal_image(3545);
            images_playerss_505_14_16[1] = get_internal_image(3547);
            images_playerss_505_14_24[0] = get_internal_image(3550);
            images_playerss_505_15_0[0] = get_internal_image(3553);
            images_playerss_505_15_0[1] = get_internal_image(3551);
            images_playerss_505_15_8[0] = get_internal_image(3555);
            images_playerss_505_15_8[1] = get_internal_image(3556);
            images_playerss_505_15_16[0] = get_internal_image(3552);
            images_playerss_505_15_16[1] = get_internal_image(3554);
            images_playerss_505_15_24[0] = get_internal_image(3557);
            images_playerss_505_15_24[1] = get_internal_image(3558);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_playerss_505(int x, int y)
{
    return new (Active::pool.create()) PlayerSS_505(x, y);
}
static Image* images_inmatess1_506_0_0[2];
static Direction direction_inmatess1_506_0_0 = {0, 10, 10, 0, -1, images_inmatess1_506_0_0, 2};
static Image* images_inmatess1_506_0_8[2];
static Direction direction_inmatess1_506_0_8 = {8, 10, 10, 0, -1, images_inmatess1_506_0_8, 2};
static Image* images_inmatess1_506_0_16[2];
static Direction direction_inmatess1_506_0_16 = {16, 10, 10, 0, -1, images_inmatess1_506_0_16, 2};
static Image* images_inmatess1_506_0_24[2];
static Direction direction_inmatess1_506_0_24 = {24, 10, 10, 0, -1, images_inmatess1_506_0_24, 2};
static Animation anim_inmatess1_506_0 = {&direction_inmatess1_506_0_0, &direction_inmatess1_506_0_0, &direction_inmatess1_506_0_0, &direction_inmatess1_506_0_0, NULL, &direction_inmatess1_506_0_8, &direction_inmatess1_506_0_8, &direction_inmatess1_506_0_8, &direction_inmatess1_506_0_8, &direction_inmatess1_506_0_8, &direction_inmatess1_506_0_8, &direction_inmatess1_506_0_8, NULL, &direction_inmatess1_506_0_16, &direction_inmatess1_506_0_16, &direction_inmatess1_506_0_16, &direction_inmatess1_506_0_16, &direction_inmatess1_506_0_16, &direction_inmatess1_506_0_16, &direction_inmatess1_506_0_16, NULL, &direction_inmatess1_506_0_24, &direction_inmatess1_506_0_24, &direction_inmatess1_506_0_24, &direction_inmatess1_506_0_24, &direction_inmatess1_506_0_24, &direction_inmatess1_506_0_24, &direction_inmatess1_506_0_24, NULL, &direction_inmatess1_506_0_0, &direction_inmatess1_506_0_0, &direction_inmatess1_506_0_0};
static Image* images_inmatess1_506_4_0[4];
static Direction direction_inmatess1_506_4_0 = {0, 20, 20, 0, 1, images_inmatess1_506_4_0, 4};
static Image* images_inmatess1_506_4_16[4];
static Direction direction_inmatess1_506_4_16 = {16, 20, 20, 0, 1, images_inmatess1_506_4_16, 4};
static Animation anim_inmatess1_506_4 = {&direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, NULL, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, &direction_inmatess1_506_4_16, NULL, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0, &direction_inmatess1_506_4_0};
static Image* images_inmatess1_506_6_0[1];
static Direction direction_inmatess1_506_6_0 = {0, 6, 6, 0, 1, images_inmatess1_506_6_0, 1};
static Image* images_inmatess1_506_6_8[1];
static Direction direction_inmatess1_506_6_8 = {8, 6, 6, 0, 1, images_inmatess1_506_6_8, 1};
static Image* images_inmatess1_506_6_16[1];
static Direction direction_inmatess1_506_6_16 = {16, 6, 6, 0, 1, images_inmatess1_506_6_16, 1};
static Image* images_inmatess1_506_6_24[1];
static Direction direction_inmatess1_506_6_24 = {24, 6, 6, 0, 1, images_inmatess1_506_6_24, 1};
static Animation anim_inmatess1_506_6 = {&direction_inmatess1_506_6_0, &direction_inmatess1_506_6_0, &direction_inmatess1_506_6_0, &direction_inmatess1_506_6_0, NULL, &direction_inmatess1_506_6_8, &direction_inmatess1_506_6_8, &direction_inmatess1_506_6_8, &direction_inmatess1_506_6_8, &direction_inmatess1_506_6_8, &direction_inmatess1_506_6_8, &direction_inmatess1_506_6_8, NULL, &direction_inmatess1_506_6_16, &direction_inmatess1_506_6_16, &direction_inmatess1_506_6_16, &direction_inmatess1_506_6_16, &direction_inmatess1_506_6_16, &direction_inmatess1_506_6_16, &direction_inmatess1_506_6_16, NULL, &direction_inmatess1_506_6_24, &direction_inmatess1_506_6_24, &direction_inmatess1_506_6_24, &direction_inmatess1_506_6_24, &direction_inmatess1_506_6_24, &direction_inmatess1_506_6_24, &direction_inmatess1_506_6_24, NULL, &direction_inmatess1_506_6_0, &direction_inmatess1_506_6_0, &direction_inmatess1_506_6_0};
static Image* images_inmatess1_506_8_0[1];
static Direction direction_inmatess1_506_8_0 = {0, 10, 10, 0, -1, images_inmatess1_506_8_0, 1};
static Image* images_inmatess1_506_8_16[2];
static Direction direction_inmatess1_506_8_16 = {16, 5, 5, 0, -1, images_inmatess1_506_8_16, 2};
static Image* images_inmatess1_506_8_24[1];
static Direction direction_inmatess1_506_8_24 = {24, 10, 10, 0, -1, images_inmatess1_506_8_24, 1};
static Animation anim_inmatess1_506_8 = {&direction_inmatess1_506_8_0, &direction_inmatess1_506_8_0, &direction_inmatess1_506_8_0, &direction_inmatess1_506_8_0, &direction_inmatess1_506_8_0, &direction_inmatess1_506_8_0, &direction_inmatess1_506_8_0, &direction_inmatess1_506_8_0, NULL, &direction_inmatess1_506_8_16, &direction_inmatess1_506_8_16, &direction_inmatess1_506_8_16, &direction_inmatess1_506_8_16, &direction_inmatess1_506_8_16, &direction_inmatess1_506_8_16, &direction_inmatess1_506_8_16, &direction_inmatess1_506_8_16, &direction_inmatess1_506_8_16, &direction_inmatess1_506_8_16, &direction_inmatess1_506_8_16, NULL, &direction_inmatess1_506_8_24, &direction_inmatess1_506_8_24, &direction_inmatess1_506_8_24, &direction_inmatess1_506_8_24, &direction_inmatess1_506_8_24, &direction_inmatess1_506_8_24, &direction_inmatess1_506_8_24, NULL, &direction_inmatess1_506_8_0, &direction_inmatess1_506_8_0, &direction_inmatess1_506_8_0};
static Image* images_inmatess1_506_10_0[5];
static Direction direction_inmatess1_506_10_0 = {0, 10, 10, 0, -1, images_inmatess1_506_10_0, 5};
static Animation anim_inmatess1_506_10 = {&direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, NULL, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0, &direction_inmatess1_506_10_0};
static Image* images_inmatess1_506_11_0[2];
static Direction direction_inmatess1_506_11_0 = {0, 6, 6, 0, -1, images_inmatess1_506_11_0, 2};
static Image* images_inmatess1_506_11_8[2];
static Direction direction_inmatess1_506_11_8 = {8, 6, 6, 0, -1, images_inmatess1_506_11_8, 2};
static Image* images_inmatess1_506_11_16[2];
static Direction direction_inmatess1_506_11_16 = {16, 6, 6, 0, -1, images_inmatess1_506_11_16, 2};
static Image* images_inmatess1_506_11_24[2];
static Direction direction_inmatess1_506_11_24 = {24, 6, 6, 0, -1, images_inmatess1_506_11_24, 2};
static Animation anim_inmatess1_506_11 = {&direction_inmatess1_506_11_0, &direction_inmatess1_506_11_0, &direction_inmatess1_506_11_0, &direction_inmatess1_506_11_0, NULL, &direction_inmatess1_506_11_8, &direction_inmatess1_506_11_8, &direction_inmatess1_506_11_8, &direction_inmatess1_506_11_8, &direction_inmatess1_506_11_8, &direction_inmatess1_506_11_8, &direction_inmatess1_506_11_8, NULL, &direction_inmatess1_506_11_16, &direction_inmatess1_506_11_16, &direction_inmatess1_506_11_16, &direction_inmatess1_506_11_16, &direction_inmatess1_506_11_16, &direction_inmatess1_506_11_16, &direction_inmatess1_506_11_16, NULL, &direction_inmatess1_506_11_24, &direction_inmatess1_506_11_24, &direction_inmatess1_506_11_24, &direction_inmatess1_506_11_24, &direction_inmatess1_506_11_24, &direction_inmatess1_506_11_24, &direction_inmatess1_506_11_24, NULL, &direction_inmatess1_506_11_0, &direction_inmatess1_506_11_0, &direction_inmatess1_506_11_0};
static Animation * anim_array_inmatess1_506[12] = {&anim_inmatess1_506_0, NULL, NULL, NULL, &anim_inmatess1_506_4, NULL, &anim_inmatess1_506_6, NULL, &anim_inmatess1_506_8, NULL, &anim_inmatess1_506_10, &anim_inmatess1_506_11};
static Animations anim_inmatess1_506 = {12, &anim_array_inmatess1_506[0]};
static bool anim_inmatess1_506_initialized;
class InmateSS1_506 : public Active
{
public:
    InmateSS1_506(int x, int y) : Active(x, y, InmateSS1_506_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 1", 11);
#endif
        this->animations = &anim_inmatess1_506;
        if (!anim_inmatess1_506_initialized) {
            anim_inmatess1_506_initialized = true;
            images_inmatess1_506_0_0[0] = get_internal_image(3347);
            images_inmatess1_506_0_0[1] = get_internal_image(3417);
            images_inmatess1_506_0_8[0] = get_internal_image(3422);
            images_inmatess1_506_0_8[1] = get_internal_image(3423);
            images_inmatess1_506_0_16[0] = get_internal_image(3418);
            images_inmatess1_506_0_16[1] = get_internal_image(3419);
            images_inmatess1_506_0_24[0] = get_internal_image(3420);
            images_inmatess1_506_0_24[1] = get_internal_image(3421);
            images_inmatess1_506_4_0[0] = get_internal_image(369);
            images_inmatess1_506_4_0[1] = get_internal_image(373);
            images_inmatess1_506_4_0[2] = get_internal_image(369);
            images_inmatess1_506_4_0[3] = get_internal_image(373);
            images_inmatess1_506_4_16[0] = get_internal_image(371);
            images_inmatess1_506_4_16[1] = get_internal_image(763);
            images_inmatess1_506_4_16[2] = get_internal_image(371);
            images_inmatess1_506_4_16[3] = get_internal_image(763);
            images_inmatess1_506_6_0[0] = get_internal_image(3373);
            images_inmatess1_506_6_8[0] = get_internal_image(3767);
            images_inmatess1_506_6_16[0] = get_internal_image(3765);
            images_inmatess1_506_6_24[0] = get_internal_image(3766);
            images_inmatess1_506_8_0[0] = get_internal_image(2730);
            images_inmatess1_506_8_16[0] = get_internal_image(3769);
            images_inmatess1_506_8_16[1] = get_internal_image(3771);
            images_inmatess1_506_8_24[0] = get_internal_image(3770);
            images_inmatess1_506_10_0[0] = get_internal_image(3782);
            images_inmatess1_506_10_0[1] = get_internal_image(3784);
            images_inmatess1_506_10_0[2] = get_internal_image(3785);
            images_inmatess1_506_10_0[3] = get_internal_image(3785);
            images_inmatess1_506_10_0[4] = get_internal_image(3784);
            images_inmatess1_506_11_0[0] = get_internal_image(3774);
            images_inmatess1_506_11_0[1] = get_internal_image(3773);
            images_inmatess1_506_11_8[0] = get_internal_image(3778);
            images_inmatess1_506_11_8[1] = get_internal_image(3779);
            images_inmatess1_506_11_16[0] = get_internal_image(3772);
            images_inmatess1_506_11_16[1] = get_internal_image(3775);
            images_inmatess1_506_11_24[0] = get_internal_image(3776);
            images_inmatess1_506_11_24[1] = get_internal_image(3777);
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
FrameObject * create_inmatess1_506(int x, int y)
{
    return new (Active::pool.create()) InmateSS1_506(x, y);
}
static Image* images_inmatess2_507_0_0[2];
static Direction direction_inmatess2_507_0_0 = {0, 10, 10, 0, -1, images_inmatess2_507_0_0, 2};
static Image* images_inmatess2_507_0_8[2];
static Direction direction_inmatess2_507_0_8 = {8, 10, 10, 0, -1, images_inmatess2_507_0_8, 2};
static Image* images_inmatess2_507_0_16[2];
static Direction direction_inmatess2_507_0_16 = {16, 10, 10, 0, -1, images_inmatess2_507_0_16, 2};
static Image* images_inmatess2_507_0_24[2];
static Direction direction_inmatess2_507_0_24 = {24, 10, 10, 0, -1, images_inmatess2_507_0_24, 2};
static Animation anim_inmatess2_507_0 = {&direction_inmatess2_507_0_0, &direction_inmatess2_507_0_0, &direction_inmatess2_507_0_0, &direction_inmatess2_507_0_0, NULL, &direction_inmatess2_507_0_8, &direction_inmatess2_507_0_8, &direction_inmatess2_507_0_8, &direction_inmatess2_507_0_8, &direction_inmatess2_507_0_8, &direction_inmatess2_507_0_8, &direction_inmatess2_507_0_8, NULL, &direction_inmatess2_507_0_16, &direction_inmatess2_507_0_16, &direction_inmatess2_507_0_16, &direction_inmatess2_507_0_16, &direction_inmatess2_507_0_16, &direction_inmatess2_507_0_16, &direction_inmatess2_507_0_16, NULL, &direction_inmatess2_507_0_24, &direction_inmatess2_507_0_24, &direction_inmatess2_507_0_24, &direction_inmatess2_507_0_24, &direction_inmatess2_507_0_24, &direction_inmatess2_507_0_24, &direction_inmatess2_507_0_24, NULL, &direction_inmatess2_507_0_0, &direction_inmatess2_507_0_0, &direction_inmatess2_507_0_0};
static Image* images_inmatess2_507_4_0[4];
static Direction direction_inmatess2_507_4_0 = {0, 20, 20, 0, 1, images_inmatess2_507_4_0, 4};
static Image* images_inmatess2_507_4_16[4];
static Direction direction_inmatess2_507_4_16 = {16, 20, 20, 0, 1, images_inmatess2_507_4_16, 4};
static Animation anim_inmatess2_507_4 = {&direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, NULL, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, &direction_inmatess2_507_4_16, NULL, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0, &direction_inmatess2_507_4_0};
static Image* images_inmatess2_507_6_0[1];
static Direction direction_inmatess2_507_6_0 = {0, 6, 6, 0, 1, images_inmatess2_507_6_0, 1};
static Image* images_inmatess2_507_6_8[1];
static Direction direction_inmatess2_507_6_8 = {8, 6, 6, 0, 1, images_inmatess2_507_6_8, 1};
static Image* images_inmatess2_507_6_16[1];
static Direction direction_inmatess2_507_6_16 = {16, 6, 6, 0, 1, images_inmatess2_507_6_16, 1};
static Image* images_inmatess2_507_6_24[1];
static Direction direction_inmatess2_507_6_24 = {24, 6, 6, 0, 1, images_inmatess2_507_6_24, 1};
static Animation anim_inmatess2_507_6 = {&direction_inmatess2_507_6_0, &direction_inmatess2_507_6_0, &direction_inmatess2_507_6_0, &direction_inmatess2_507_6_0, NULL, &direction_inmatess2_507_6_8, &direction_inmatess2_507_6_8, &direction_inmatess2_507_6_8, &direction_inmatess2_507_6_8, &direction_inmatess2_507_6_8, &direction_inmatess2_507_6_8, &direction_inmatess2_507_6_8, NULL, &direction_inmatess2_507_6_16, &direction_inmatess2_507_6_16, &direction_inmatess2_507_6_16, &direction_inmatess2_507_6_16, &direction_inmatess2_507_6_16, &direction_inmatess2_507_6_16, &direction_inmatess2_507_6_16, NULL, &direction_inmatess2_507_6_24, &direction_inmatess2_507_6_24, &direction_inmatess2_507_6_24, &direction_inmatess2_507_6_24, &direction_inmatess2_507_6_24, &direction_inmatess2_507_6_24, &direction_inmatess2_507_6_24, NULL, &direction_inmatess2_507_6_0, &direction_inmatess2_507_6_0, &direction_inmatess2_507_6_0};
static Image* images_inmatess2_507_8_0[1];
static Direction direction_inmatess2_507_8_0 = {0, 10, 10, 0, -1, images_inmatess2_507_8_0, 1};
static Image* images_inmatess2_507_8_16[2];
static Direction direction_inmatess2_507_8_16 = {16, 5, 5, 0, -1, images_inmatess2_507_8_16, 2};
static Image* images_inmatess2_507_8_24[1];
static Direction direction_inmatess2_507_8_24 = {24, 10, 10, 0, -1, images_inmatess2_507_8_24, 1};
static Animation anim_inmatess2_507_8 = {&direction_inmatess2_507_8_0, &direction_inmatess2_507_8_0, &direction_inmatess2_507_8_0, &direction_inmatess2_507_8_0, &direction_inmatess2_507_8_0, &direction_inmatess2_507_8_0, &direction_inmatess2_507_8_0, &direction_inmatess2_507_8_0, NULL, &direction_inmatess2_507_8_16, &direction_inmatess2_507_8_16, &direction_inmatess2_507_8_16, &direction_inmatess2_507_8_16, &direction_inmatess2_507_8_16, &direction_inmatess2_507_8_16, &direction_inmatess2_507_8_16, &direction_inmatess2_507_8_16, &direction_inmatess2_507_8_16, &direction_inmatess2_507_8_16, &direction_inmatess2_507_8_16, NULL, &direction_inmatess2_507_8_24, &direction_inmatess2_507_8_24, &direction_inmatess2_507_8_24, &direction_inmatess2_507_8_24, &direction_inmatess2_507_8_24, &direction_inmatess2_507_8_24, &direction_inmatess2_507_8_24, NULL, &direction_inmatess2_507_8_0, &direction_inmatess2_507_8_0, &direction_inmatess2_507_8_0};
static Image* images_inmatess2_507_10_0[5];
static Direction direction_inmatess2_507_10_0 = {0, 10, 10, 0, -1, images_inmatess2_507_10_0, 5};
static Animation anim_inmatess2_507_10 = {&direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, NULL, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0, &direction_inmatess2_507_10_0};
static Image* images_inmatess2_507_11_0[2];
static Direction direction_inmatess2_507_11_0 = {0, 6, 6, 0, -1, images_inmatess2_507_11_0, 2};
static Image* images_inmatess2_507_11_8[2];
static Direction direction_inmatess2_507_11_8 = {8, 6, 6, 0, -1, images_inmatess2_507_11_8, 2};
static Image* images_inmatess2_507_11_16[2];
static Direction direction_inmatess2_507_11_16 = {16, 6, 6, 0, -1, images_inmatess2_507_11_16, 2};
static Image* images_inmatess2_507_11_24[2];
static Direction direction_inmatess2_507_11_24 = {24, 6, 6, 0, -1, images_inmatess2_507_11_24, 2};
static Animation anim_inmatess2_507_11 = {&direction_inmatess2_507_11_0, &direction_inmatess2_507_11_0, &direction_inmatess2_507_11_0, &direction_inmatess2_507_11_0, NULL, &direction_inmatess2_507_11_8, &direction_inmatess2_507_11_8, &direction_inmatess2_507_11_8, &direction_inmatess2_507_11_8, &direction_inmatess2_507_11_8, &direction_inmatess2_507_11_8, &direction_inmatess2_507_11_8, NULL, &direction_inmatess2_507_11_16, &direction_inmatess2_507_11_16, &direction_inmatess2_507_11_16, &direction_inmatess2_507_11_16, &direction_inmatess2_507_11_16, &direction_inmatess2_507_11_16, &direction_inmatess2_507_11_16, NULL, &direction_inmatess2_507_11_24, &direction_inmatess2_507_11_24, &direction_inmatess2_507_11_24, &direction_inmatess2_507_11_24, &direction_inmatess2_507_11_24, &direction_inmatess2_507_11_24, &direction_inmatess2_507_11_24, NULL, &direction_inmatess2_507_11_0, &direction_inmatess2_507_11_0, &direction_inmatess2_507_11_0};
static Animation * anim_array_inmatess2_507[12] = {&anim_inmatess2_507_0, NULL, NULL, NULL, &anim_inmatess2_507_4, NULL, &anim_inmatess2_507_6, NULL, &anim_inmatess2_507_8, NULL, &anim_inmatess2_507_10, &anim_inmatess2_507_11};
static Animations anim_inmatess2_507 = {12, &anim_array_inmatess2_507[0]};
static bool anim_inmatess2_507_initialized;
class InmateSS2_507 : public Active
{
public:
    InmateSS2_507(int x, int y) : Active(x, y, InmateSS2_507_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 2", 11);
#endif
        this->animations = &anim_inmatess2_507;
        if (!anim_inmatess2_507_initialized) {
            anim_inmatess2_507_initialized = true;
            images_inmatess2_507_0_0[0] = get_internal_image(3424);
            images_inmatess2_507_0_0[1] = get_internal_image(3425);
            images_inmatess2_507_0_8[0] = get_internal_image(3432);
            images_inmatess2_507_0_8[1] = get_internal_image(3431);
            images_inmatess2_507_0_16[0] = get_internal_image(3426);
            images_inmatess2_507_0_16[1] = get_internal_image(3427);
            images_inmatess2_507_0_24[0] = get_internal_image(3429);
            images_inmatess2_507_0_24[1] = get_internal_image(3430);
            images_inmatess2_507_4_0[0] = get_internal_image(369);
            images_inmatess2_507_4_0[1] = get_internal_image(373);
            images_inmatess2_507_4_0[2] = get_internal_image(369);
            images_inmatess2_507_4_0[3] = get_internal_image(373);
            images_inmatess2_507_4_16[0] = get_internal_image(371);
            images_inmatess2_507_4_16[1] = get_internal_image(763);
            images_inmatess2_507_4_16[2] = get_internal_image(371);
            images_inmatess2_507_4_16[3] = get_internal_image(763);
            images_inmatess2_507_6_0[0] = get_internal_image(2914);
            images_inmatess2_507_6_8[0] = get_internal_image(3561);
            images_inmatess2_507_6_16[0] = get_internal_image(3559);
            images_inmatess2_507_6_24[0] = get_internal_image(3560);
            images_inmatess2_507_8_0[0] = get_internal_image(2730);
            images_inmatess2_507_8_16[0] = get_internal_image(3492);
            images_inmatess2_507_8_16[1] = get_internal_image(3495);
            images_inmatess2_507_8_24[0] = get_internal_image(3562);
            images_inmatess2_507_10_0[0] = get_internal_image(3681);
            images_inmatess2_507_10_0[1] = get_internal_image(3683);
            images_inmatess2_507_10_0[2] = get_internal_image(3684);
            images_inmatess2_507_10_0[3] = get_internal_image(3684);
            images_inmatess2_507_10_0[4] = get_internal_image(3683);
            images_inmatess2_507_11_0[0] = get_internal_image(3565);
            images_inmatess2_507_11_0[1] = get_internal_image(3564);
            images_inmatess2_507_11_8[0] = get_internal_image(3567);
            images_inmatess2_507_11_8[1] = get_internal_image(3568);
            images_inmatess2_507_11_16[0] = get_internal_image(3563);
            images_inmatess2_507_11_16[1] = get_internal_image(3566);
            images_inmatess2_507_11_24[0] = get_internal_image(3569);
            images_inmatess2_507_11_24[1] = get_internal_image(3570);
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
FrameObject * create_inmatess2_507(int x, int y)
{
    return new (Active::pool.create()) InmateSS2_507(x, y);
}
static Image* images_inmatess3_508_0_0[2];
static Direction direction_inmatess3_508_0_0 = {0, 10, 10, 0, -1, images_inmatess3_508_0_0, 2};
static Image* images_inmatess3_508_0_8[2];
static Direction direction_inmatess3_508_0_8 = {8, 10, 10, 0, -1, images_inmatess3_508_0_8, 2};
static Image* images_inmatess3_508_0_16[2];
static Direction direction_inmatess3_508_0_16 = {16, 10, 10, 0, -1, images_inmatess3_508_0_16, 2};
static Image* images_inmatess3_508_0_24[2];
static Direction direction_inmatess3_508_0_24 = {24, 10, 10, 0, -1, images_inmatess3_508_0_24, 2};
static Animation anim_inmatess3_508_0 = {&direction_inmatess3_508_0_0, &direction_inmatess3_508_0_0, &direction_inmatess3_508_0_0, &direction_inmatess3_508_0_0, NULL, &direction_inmatess3_508_0_8, &direction_inmatess3_508_0_8, &direction_inmatess3_508_0_8, &direction_inmatess3_508_0_8, &direction_inmatess3_508_0_8, &direction_inmatess3_508_0_8, &direction_inmatess3_508_0_8, NULL, &direction_inmatess3_508_0_16, &direction_inmatess3_508_0_16, &direction_inmatess3_508_0_16, &direction_inmatess3_508_0_16, &direction_inmatess3_508_0_16, &direction_inmatess3_508_0_16, &direction_inmatess3_508_0_16, NULL, &direction_inmatess3_508_0_24, &direction_inmatess3_508_0_24, &direction_inmatess3_508_0_24, &direction_inmatess3_508_0_24, &direction_inmatess3_508_0_24, &direction_inmatess3_508_0_24, &direction_inmatess3_508_0_24, NULL, &direction_inmatess3_508_0_0, &direction_inmatess3_508_0_0, &direction_inmatess3_508_0_0};
static Image* images_inmatess3_508_4_0[4];
static Direction direction_inmatess3_508_4_0 = {0, 20, 20, 0, 1, images_inmatess3_508_4_0, 4};
static Image* images_inmatess3_508_4_16[4];
static Direction direction_inmatess3_508_4_16 = {16, 20, 20, 0, 1, images_inmatess3_508_4_16, 4};
static Animation anim_inmatess3_508_4 = {&direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, NULL, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, &direction_inmatess3_508_4_16, NULL, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0, &direction_inmatess3_508_4_0};
static Image* images_inmatess3_508_6_0[1];
static Direction direction_inmatess3_508_6_0 = {0, 6, 6, 0, 1, images_inmatess3_508_6_0, 1};
static Image* images_inmatess3_508_6_8[1];
static Direction direction_inmatess3_508_6_8 = {8, 6, 6, 0, 1, images_inmatess3_508_6_8, 1};
static Image* images_inmatess3_508_6_16[1];
static Direction direction_inmatess3_508_6_16 = {16, 6, 6, 0, 1, images_inmatess3_508_6_16, 1};
static Image* images_inmatess3_508_6_24[1];
static Direction direction_inmatess3_508_6_24 = {24, 6, 6, 0, 1, images_inmatess3_508_6_24, 1};
static Animation anim_inmatess3_508_6 = {&direction_inmatess3_508_6_0, &direction_inmatess3_508_6_0, &direction_inmatess3_508_6_0, &direction_inmatess3_508_6_0, NULL, &direction_inmatess3_508_6_8, &direction_inmatess3_508_6_8, &direction_inmatess3_508_6_8, &direction_inmatess3_508_6_8, &direction_inmatess3_508_6_8, &direction_inmatess3_508_6_8, &direction_inmatess3_508_6_8, NULL, &direction_inmatess3_508_6_16, &direction_inmatess3_508_6_16, &direction_inmatess3_508_6_16, &direction_inmatess3_508_6_16, &direction_inmatess3_508_6_16, &direction_inmatess3_508_6_16, &direction_inmatess3_508_6_16, NULL, &direction_inmatess3_508_6_24, &direction_inmatess3_508_6_24, &direction_inmatess3_508_6_24, &direction_inmatess3_508_6_24, &direction_inmatess3_508_6_24, &direction_inmatess3_508_6_24, &direction_inmatess3_508_6_24, NULL, &direction_inmatess3_508_6_0, &direction_inmatess3_508_6_0, &direction_inmatess3_508_6_0};
static Image* images_inmatess3_508_8_0[1];
static Direction direction_inmatess3_508_8_0 = {0, 10, 10, 0, -1, images_inmatess3_508_8_0, 1};
static Image* images_inmatess3_508_8_16[2];
static Direction direction_inmatess3_508_8_16 = {16, 5, 5, 0, -1, images_inmatess3_508_8_16, 2};
static Image* images_inmatess3_508_8_24[1];
static Direction direction_inmatess3_508_8_24 = {24, 10, 10, 0, -1, images_inmatess3_508_8_24, 1};
static Animation anim_inmatess3_508_8 = {&direction_inmatess3_508_8_0, &direction_inmatess3_508_8_0, &direction_inmatess3_508_8_0, &direction_inmatess3_508_8_0, &direction_inmatess3_508_8_0, &direction_inmatess3_508_8_0, &direction_inmatess3_508_8_0, &direction_inmatess3_508_8_0, NULL, &direction_inmatess3_508_8_16, &direction_inmatess3_508_8_16, &direction_inmatess3_508_8_16, &direction_inmatess3_508_8_16, &direction_inmatess3_508_8_16, &direction_inmatess3_508_8_16, &direction_inmatess3_508_8_16, &direction_inmatess3_508_8_16, &direction_inmatess3_508_8_16, &direction_inmatess3_508_8_16, &direction_inmatess3_508_8_16, NULL, &direction_inmatess3_508_8_24, &direction_inmatess3_508_8_24, &direction_inmatess3_508_8_24, &direction_inmatess3_508_8_24, &direction_inmatess3_508_8_24, &direction_inmatess3_508_8_24, &direction_inmatess3_508_8_24, NULL, &direction_inmatess3_508_8_0, &direction_inmatess3_508_8_0, &direction_inmatess3_508_8_0};
static Image* images_inmatess3_508_10_0[5];
static Direction direction_inmatess3_508_10_0 = {0, 10, 10, 0, -1, images_inmatess3_508_10_0, 5};
static Animation anim_inmatess3_508_10 = {&direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, NULL, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0, &direction_inmatess3_508_10_0};
static Image* images_inmatess3_508_11_0[2];
static Direction direction_inmatess3_508_11_0 = {0, 6, 6, 0, -1, images_inmatess3_508_11_0, 2};
static Image* images_inmatess3_508_11_8[2];
static Direction direction_inmatess3_508_11_8 = {8, 6, 6, 0, -1, images_inmatess3_508_11_8, 2};
static Image* images_inmatess3_508_11_16[2];
static Direction direction_inmatess3_508_11_16 = {16, 6, 6, 0, -1, images_inmatess3_508_11_16, 2};
static Image* images_inmatess3_508_11_24[2];
static Direction direction_inmatess3_508_11_24 = {24, 6, 6, 0, -1, images_inmatess3_508_11_24, 2};
static Animation anim_inmatess3_508_11 = {&direction_inmatess3_508_11_0, &direction_inmatess3_508_11_0, &direction_inmatess3_508_11_0, &direction_inmatess3_508_11_0, NULL, &direction_inmatess3_508_11_8, &direction_inmatess3_508_11_8, &direction_inmatess3_508_11_8, &direction_inmatess3_508_11_8, &direction_inmatess3_508_11_8, &direction_inmatess3_508_11_8, &direction_inmatess3_508_11_8, NULL, &direction_inmatess3_508_11_16, &direction_inmatess3_508_11_16, &direction_inmatess3_508_11_16, &direction_inmatess3_508_11_16, &direction_inmatess3_508_11_16, &direction_inmatess3_508_11_16, &direction_inmatess3_508_11_16, NULL, &direction_inmatess3_508_11_24, &direction_inmatess3_508_11_24, &direction_inmatess3_508_11_24, &direction_inmatess3_508_11_24, &direction_inmatess3_508_11_24, &direction_inmatess3_508_11_24, &direction_inmatess3_508_11_24, NULL, &direction_inmatess3_508_11_0, &direction_inmatess3_508_11_0, &direction_inmatess3_508_11_0};
static Animation * anim_array_inmatess3_508[12] = {&anim_inmatess3_508_0, NULL, NULL, NULL, &anim_inmatess3_508_4, NULL, &anim_inmatess3_508_6, NULL, &anim_inmatess3_508_8, NULL, &anim_inmatess3_508_10, &anim_inmatess3_508_11};
static Animations anim_inmatess3_508 = {12, &anim_array_inmatess3_508[0]};
static bool anim_inmatess3_508_initialized;
class InmateSS3_508 : public Active
{
public:
    InmateSS3_508(int x, int y) : Active(x, y, InmateSS3_508_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 3", 11);
#endif
        this->animations = &anim_inmatess3_508;
        if (!anim_inmatess3_508_initialized) {
            anim_inmatess3_508_initialized = true;
            images_inmatess3_508_0_0[0] = get_internal_image(3428);
            images_inmatess3_508_0_0[1] = get_internal_image(3433);
            images_inmatess3_508_0_8[0] = get_internal_image(3438);
            images_inmatess3_508_0_8[1] = get_internal_image(3439);
            images_inmatess3_508_0_16[0] = get_internal_image(3434);
            images_inmatess3_508_0_16[1] = get_internal_image(3435);
            images_inmatess3_508_0_24[0] = get_internal_image(3436);
            images_inmatess3_508_0_24[1] = get_internal_image(3437);
            images_inmatess3_508_4_0[0] = get_internal_image(369);
            images_inmatess3_508_4_0[1] = get_internal_image(373);
            images_inmatess3_508_4_0[2] = get_internal_image(369);
            images_inmatess3_508_4_0[3] = get_internal_image(373);
            images_inmatess3_508_4_16[0] = get_internal_image(371);
            images_inmatess3_508_4_16[1] = get_internal_image(763);
            images_inmatess3_508_4_16[2] = get_internal_image(371);
            images_inmatess3_508_4_16[3] = get_internal_image(763);
            images_inmatess3_508_6_0[0] = get_internal_image(3796);
            images_inmatess3_508_6_8[0] = get_internal_image(3803);
            images_inmatess3_508_6_16[0] = get_internal_image(3802);
            images_inmatess3_508_6_24[0] = get_internal_image(3799);
            images_inmatess3_508_8_0[0] = get_internal_image(2730);
            images_inmatess3_508_8_16[0] = get_internal_image(3780);
            images_inmatess3_508_8_16[1] = get_internal_image(3783);
            images_inmatess3_508_8_24[0] = get_internal_image(3789);
            images_inmatess3_508_10_0[0] = get_internal_image(3798);
            images_inmatess3_508_10_0[1] = get_internal_image(3800);
            images_inmatess3_508_10_0[2] = get_internal_image(3801);
            images_inmatess3_508_10_0[3] = get_internal_image(3801);
            images_inmatess3_508_10_0[4] = get_internal_image(3800);
            images_inmatess3_508_11_0[0] = get_internal_image(3790);
            images_inmatess3_508_11_0[1] = get_internal_image(3788);
            images_inmatess3_508_11_8[0] = get_internal_image(3794);
            images_inmatess3_508_11_8[1] = get_internal_image(3795);
            images_inmatess3_508_11_16[0] = get_internal_image(3787);
            images_inmatess3_508_11_16[1] = get_internal_image(3791);
            images_inmatess3_508_11_24[0] = get_internal_image(3792);
            images_inmatess3_508_11_24[1] = get_internal_image(3793);
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
FrameObject * create_inmatess3_508(int x, int y)
{
    return new (Active::pool.create()) InmateSS3_508(x, y);
}
static Image* images_inmatess4_509_0_0[2];
static Direction direction_inmatess4_509_0_0 = {0, 10, 10, 0, -1, images_inmatess4_509_0_0, 2};
static Image* images_inmatess4_509_0_8[2];
static Direction direction_inmatess4_509_0_8 = {8, 10, 10, 0, -1, images_inmatess4_509_0_8, 2};
static Image* images_inmatess4_509_0_16[2];
static Direction direction_inmatess4_509_0_16 = {16, 10, 10, 0, -1, images_inmatess4_509_0_16, 2};
static Image* images_inmatess4_509_0_24[2];
static Direction direction_inmatess4_509_0_24 = {24, 10, 10, 0, -1, images_inmatess4_509_0_24, 2};
static Animation anim_inmatess4_509_0 = {&direction_inmatess4_509_0_0, &direction_inmatess4_509_0_0, &direction_inmatess4_509_0_0, &direction_inmatess4_509_0_0, NULL, &direction_inmatess4_509_0_8, &direction_inmatess4_509_0_8, &direction_inmatess4_509_0_8, &direction_inmatess4_509_0_8, &direction_inmatess4_509_0_8, &direction_inmatess4_509_0_8, &direction_inmatess4_509_0_8, NULL, &direction_inmatess4_509_0_16, &direction_inmatess4_509_0_16, &direction_inmatess4_509_0_16, &direction_inmatess4_509_0_16, &direction_inmatess4_509_0_16, &direction_inmatess4_509_0_16, &direction_inmatess4_509_0_16, NULL, &direction_inmatess4_509_0_24, &direction_inmatess4_509_0_24, &direction_inmatess4_509_0_24, &direction_inmatess4_509_0_24, &direction_inmatess4_509_0_24, &direction_inmatess4_509_0_24, &direction_inmatess4_509_0_24, NULL, &direction_inmatess4_509_0_0, &direction_inmatess4_509_0_0, &direction_inmatess4_509_0_0};
static Image* images_inmatess4_509_4_0[4];
static Direction direction_inmatess4_509_4_0 = {0, 20, 20, 0, 1, images_inmatess4_509_4_0, 4};
static Image* images_inmatess4_509_4_16[4];
static Direction direction_inmatess4_509_4_16 = {16, 20, 20, 0, 1, images_inmatess4_509_4_16, 4};
static Animation anim_inmatess4_509_4 = {&direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, NULL, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, &direction_inmatess4_509_4_16, NULL, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0, &direction_inmatess4_509_4_0};
static Image* images_inmatess4_509_6_0[1];
static Direction direction_inmatess4_509_6_0 = {0, 6, 6, 0, 1, images_inmatess4_509_6_0, 1};
static Image* images_inmatess4_509_6_8[1];
static Direction direction_inmatess4_509_6_8 = {8, 6, 6, 0, 1, images_inmatess4_509_6_8, 1};
static Image* images_inmatess4_509_6_16[1];
static Direction direction_inmatess4_509_6_16 = {16, 6, 6, 0, 1, images_inmatess4_509_6_16, 1};
static Image* images_inmatess4_509_6_24[1];
static Direction direction_inmatess4_509_6_24 = {24, 6, 6, 0, 1, images_inmatess4_509_6_24, 1};
static Animation anim_inmatess4_509_6 = {&direction_inmatess4_509_6_0, &direction_inmatess4_509_6_0, &direction_inmatess4_509_6_0, &direction_inmatess4_509_6_0, NULL, &direction_inmatess4_509_6_8, &direction_inmatess4_509_6_8, &direction_inmatess4_509_6_8, &direction_inmatess4_509_6_8, &direction_inmatess4_509_6_8, &direction_inmatess4_509_6_8, &direction_inmatess4_509_6_8, NULL, &direction_inmatess4_509_6_16, &direction_inmatess4_509_6_16, &direction_inmatess4_509_6_16, &direction_inmatess4_509_6_16, &direction_inmatess4_509_6_16, &direction_inmatess4_509_6_16, &direction_inmatess4_509_6_16, NULL, &direction_inmatess4_509_6_24, &direction_inmatess4_509_6_24, &direction_inmatess4_509_6_24, &direction_inmatess4_509_6_24, &direction_inmatess4_509_6_24, &direction_inmatess4_509_6_24, &direction_inmatess4_509_6_24, NULL, &direction_inmatess4_509_6_0, &direction_inmatess4_509_6_0, &direction_inmatess4_509_6_0};
static Image* images_inmatess4_509_8_0[1];
static Direction direction_inmatess4_509_8_0 = {0, 10, 10, 0, -1, images_inmatess4_509_8_0, 1};
static Image* images_inmatess4_509_8_16[2];
static Direction direction_inmatess4_509_8_16 = {16, 5, 5, 0, -1, images_inmatess4_509_8_16, 2};
static Image* images_inmatess4_509_8_24[1];
static Direction direction_inmatess4_509_8_24 = {24, 10, 10, 0, -1, images_inmatess4_509_8_24, 1};
static Animation anim_inmatess4_509_8 = {&direction_inmatess4_509_8_0, &direction_inmatess4_509_8_0, &direction_inmatess4_509_8_0, &direction_inmatess4_509_8_0, &direction_inmatess4_509_8_0, &direction_inmatess4_509_8_0, &direction_inmatess4_509_8_0, &direction_inmatess4_509_8_0, NULL, &direction_inmatess4_509_8_16, &direction_inmatess4_509_8_16, &direction_inmatess4_509_8_16, &direction_inmatess4_509_8_16, &direction_inmatess4_509_8_16, &direction_inmatess4_509_8_16, &direction_inmatess4_509_8_16, &direction_inmatess4_509_8_16, &direction_inmatess4_509_8_16, &direction_inmatess4_509_8_16, &direction_inmatess4_509_8_16, NULL, &direction_inmatess4_509_8_24, &direction_inmatess4_509_8_24, &direction_inmatess4_509_8_24, &direction_inmatess4_509_8_24, &direction_inmatess4_509_8_24, &direction_inmatess4_509_8_24, &direction_inmatess4_509_8_24, NULL, &direction_inmatess4_509_8_0, &direction_inmatess4_509_8_0, &direction_inmatess4_509_8_0};
static Image* images_inmatess4_509_10_0[5];
static Direction direction_inmatess4_509_10_0 = {0, 10, 10, 0, -1, images_inmatess4_509_10_0, 5};
static Animation anim_inmatess4_509_10 = {&direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, NULL, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0, &direction_inmatess4_509_10_0};
static Image* images_inmatess4_509_11_0[2];
static Direction direction_inmatess4_509_11_0 = {0, 6, 6, 0, -1, images_inmatess4_509_11_0, 2};
static Image* images_inmatess4_509_11_8[2];
static Direction direction_inmatess4_509_11_8 = {8, 6, 6, 0, -1, images_inmatess4_509_11_8, 2};
static Image* images_inmatess4_509_11_16[2];
static Direction direction_inmatess4_509_11_16 = {16, 6, 6, 0, -1, images_inmatess4_509_11_16, 2};
static Image* images_inmatess4_509_11_24[2];
static Direction direction_inmatess4_509_11_24 = {24, 6, 6, 0, -1, images_inmatess4_509_11_24, 2};
static Animation anim_inmatess4_509_11 = {&direction_inmatess4_509_11_0, &direction_inmatess4_509_11_0, &direction_inmatess4_509_11_0, &direction_inmatess4_509_11_0, NULL, &direction_inmatess4_509_11_8, &direction_inmatess4_509_11_8, &direction_inmatess4_509_11_8, &direction_inmatess4_509_11_8, &direction_inmatess4_509_11_8, &direction_inmatess4_509_11_8, &direction_inmatess4_509_11_8, NULL, &direction_inmatess4_509_11_16, &direction_inmatess4_509_11_16, &direction_inmatess4_509_11_16, &direction_inmatess4_509_11_16, &direction_inmatess4_509_11_16, &direction_inmatess4_509_11_16, &direction_inmatess4_509_11_16, NULL, &direction_inmatess4_509_11_24, &direction_inmatess4_509_11_24, &direction_inmatess4_509_11_24, &direction_inmatess4_509_11_24, &direction_inmatess4_509_11_24, &direction_inmatess4_509_11_24, &direction_inmatess4_509_11_24, NULL, &direction_inmatess4_509_11_0, &direction_inmatess4_509_11_0, &direction_inmatess4_509_11_0};
static Animation * anim_array_inmatess4_509[12] = {&anim_inmatess4_509_0, NULL, NULL, NULL, &anim_inmatess4_509_4, NULL, &anim_inmatess4_509_6, NULL, &anim_inmatess4_509_8, NULL, &anim_inmatess4_509_10, &anim_inmatess4_509_11};
static Animations anim_inmatess4_509 = {12, &anim_array_inmatess4_509[0]};
static bool anim_inmatess4_509_initialized;
class InmateSS4_509 : public Active
{
public:
    InmateSS4_509(int x, int y) : Active(x, y, InmateSS4_509_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 4", 11);
#endif
        this->animations = &anim_inmatess4_509;
        if (!anim_inmatess4_509_initialized) {
            anim_inmatess4_509_initialized = true;
            images_inmatess4_509_0_0[0] = get_internal_image(3440);
            images_inmatess4_509_0_0[1] = get_internal_image(3441);
            images_inmatess4_509_0_8[0] = get_internal_image(3444);
            images_inmatess4_509_0_8[1] = get_internal_image(3445);
            images_inmatess4_509_0_16[0] = get_internal_image(3442);
            images_inmatess4_509_0_16[1] = get_internal_image(3443);
            images_inmatess4_509_0_24[0] = get_internal_image(3446);
            images_inmatess4_509_0_24[1] = get_internal_image(3447);
            images_inmatess4_509_4_0[0] = get_internal_image(369);
            images_inmatess4_509_4_0[1] = get_internal_image(373);
            images_inmatess4_509_4_0[2] = get_internal_image(369);
            images_inmatess4_509_4_0[3] = get_internal_image(373);
            images_inmatess4_509_4_16[0] = get_internal_image(371);
            images_inmatess4_509_4_16[1] = get_internal_image(763);
            images_inmatess4_509_4_16[2] = get_internal_image(371);
            images_inmatess4_509_4_16[3] = get_internal_image(763);
            images_inmatess4_509_6_0[0] = get_internal_image(3511);
            images_inmatess4_509_6_8[0] = get_internal_image(3591);
            images_inmatess4_509_6_16[0] = get_internal_image(3336);
            images_inmatess4_509_6_24[0] = get_internal_image(3590);
            images_inmatess4_509_8_0[0] = get_internal_image(2730);
            images_inmatess4_509_8_16[0] = get_internal_image(3587);
            images_inmatess4_509_8_16[1] = get_internal_image(3588);
            images_inmatess4_509_8_24[0] = get_internal_image(3589);
            images_inmatess4_509_10_0[0] = get_internal_image(3682);
            images_inmatess4_509_10_0[1] = get_internal_image(3679);
            images_inmatess4_509_10_0[2] = get_internal_image(3678);
            images_inmatess4_509_10_0[3] = get_internal_image(3678);
            images_inmatess4_509_10_0[4] = get_internal_image(3679);
            images_inmatess4_509_11_0[0] = get_internal_image(3581);
            images_inmatess4_509_11_0[1] = get_internal_image(3580);
            images_inmatess4_509_11_8[0] = get_internal_image(3585);
            images_inmatess4_509_11_8[1] = get_internal_image(3586);
            images_inmatess4_509_11_16[0] = get_internal_image(3578);
            images_inmatess4_509_11_16[1] = get_internal_image(3582);
            images_inmatess4_509_11_24[0] = get_internal_image(3583);
            images_inmatess4_509_11_24[1] = get_internal_image(3584);
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
FrameObject * create_inmatess4_509(int x, int y)
{
    return new (Active::pool.create()) InmateSS4_509(x, y);
}
static Image* images_inmatess5_510_0_0[2];
static Direction direction_inmatess5_510_0_0 = {0, 10, 10, 0, -1, images_inmatess5_510_0_0, 2};
static Image* images_inmatess5_510_0_8[2];
static Direction direction_inmatess5_510_0_8 = {8, 10, 10, 0, -1, images_inmatess5_510_0_8, 2};
static Image* images_inmatess5_510_0_16[2];
static Direction direction_inmatess5_510_0_16 = {16, 10, 10, 0, -1, images_inmatess5_510_0_16, 2};
static Image* images_inmatess5_510_0_24[2];
static Direction direction_inmatess5_510_0_24 = {24, 10, 10, 0, -1, images_inmatess5_510_0_24, 2};
static Animation anim_inmatess5_510_0 = {&direction_inmatess5_510_0_0, &direction_inmatess5_510_0_0, &direction_inmatess5_510_0_0, &direction_inmatess5_510_0_0, NULL, &direction_inmatess5_510_0_8, &direction_inmatess5_510_0_8, &direction_inmatess5_510_0_8, &direction_inmatess5_510_0_8, &direction_inmatess5_510_0_8, &direction_inmatess5_510_0_8, &direction_inmatess5_510_0_8, NULL, &direction_inmatess5_510_0_16, &direction_inmatess5_510_0_16, &direction_inmatess5_510_0_16, &direction_inmatess5_510_0_16, &direction_inmatess5_510_0_16, &direction_inmatess5_510_0_16, &direction_inmatess5_510_0_16, NULL, &direction_inmatess5_510_0_24, &direction_inmatess5_510_0_24, &direction_inmatess5_510_0_24, &direction_inmatess5_510_0_24, &direction_inmatess5_510_0_24, &direction_inmatess5_510_0_24, &direction_inmatess5_510_0_24, NULL, &direction_inmatess5_510_0_0, &direction_inmatess5_510_0_0, &direction_inmatess5_510_0_0};
static Image* images_inmatess5_510_4_0[4];
static Direction direction_inmatess5_510_4_0 = {0, 20, 20, 0, 1, images_inmatess5_510_4_0, 4};
static Image* images_inmatess5_510_4_16[4];
static Direction direction_inmatess5_510_4_16 = {16, 20, 20, 0, 1, images_inmatess5_510_4_16, 4};
static Animation anim_inmatess5_510_4 = {&direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, NULL, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, &direction_inmatess5_510_4_16, NULL, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0, &direction_inmatess5_510_4_0};
static Image* images_inmatess5_510_6_0[1];
static Direction direction_inmatess5_510_6_0 = {0, 6, 6, 0, 1, images_inmatess5_510_6_0, 1};
static Image* images_inmatess5_510_6_8[1];
static Direction direction_inmatess5_510_6_8 = {8, 6, 6, 0, 1, images_inmatess5_510_6_8, 1};
static Image* images_inmatess5_510_6_16[1];
static Direction direction_inmatess5_510_6_16 = {16, 6, 6, 0, 1, images_inmatess5_510_6_16, 1};
static Image* images_inmatess5_510_6_24[1];
static Direction direction_inmatess5_510_6_24 = {24, 6, 6, 0, 1, images_inmatess5_510_6_24, 1};
static Animation anim_inmatess5_510_6 = {&direction_inmatess5_510_6_0, &direction_inmatess5_510_6_0, &direction_inmatess5_510_6_0, &direction_inmatess5_510_6_0, NULL, &direction_inmatess5_510_6_8, &direction_inmatess5_510_6_8, &direction_inmatess5_510_6_8, &direction_inmatess5_510_6_8, &direction_inmatess5_510_6_8, &direction_inmatess5_510_6_8, &direction_inmatess5_510_6_8, NULL, &direction_inmatess5_510_6_16, &direction_inmatess5_510_6_16, &direction_inmatess5_510_6_16, &direction_inmatess5_510_6_16, &direction_inmatess5_510_6_16, &direction_inmatess5_510_6_16, &direction_inmatess5_510_6_16, NULL, &direction_inmatess5_510_6_24, &direction_inmatess5_510_6_24, &direction_inmatess5_510_6_24, &direction_inmatess5_510_6_24, &direction_inmatess5_510_6_24, &direction_inmatess5_510_6_24, &direction_inmatess5_510_6_24, NULL, &direction_inmatess5_510_6_0, &direction_inmatess5_510_6_0, &direction_inmatess5_510_6_0};
static Image* images_inmatess5_510_8_0[1];
static Direction direction_inmatess5_510_8_0 = {0, 10, 10, 0, -1, images_inmatess5_510_8_0, 1};
static Image* images_inmatess5_510_8_16[2];
static Direction direction_inmatess5_510_8_16 = {16, 5, 5, 0, -1, images_inmatess5_510_8_16, 2};
static Image* images_inmatess5_510_8_24[1];
static Direction direction_inmatess5_510_8_24 = {24, 10, 10, 0, -1, images_inmatess5_510_8_24, 1};
static Animation anim_inmatess5_510_8 = {&direction_inmatess5_510_8_0, &direction_inmatess5_510_8_0, &direction_inmatess5_510_8_0, &direction_inmatess5_510_8_0, &direction_inmatess5_510_8_0, &direction_inmatess5_510_8_0, &direction_inmatess5_510_8_0, &direction_inmatess5_510_8_0, NULL, &direction_inmatess5_510_8_16, &direction_inmatess5_510_8_16, &direction_inmatess5_510_8_16, &direction_inmatess5_510_8_16, &direction_inmatess5_510_8_16, &direction_inmatess5_510_8_16, &direction_inmatess5_510_8_16, &direction_inmatess5_510_8_16, &direction_inmatess5_510_8_16, &direction_inmatess5_510_8_16, &direction_inmatess5_510_8_16, NULL, &direction_inmatess5_510_8_24, &direction_inmatess5_510_8_24, &direction_inmatess5_510_8_24, &direction_inmatess5_510_8_24, &direction_inmatess5_510_8_24, &direction_inmatess5_510_8_24, &direction_inmatess5_510_8_24, NULL, &direction_inmatess5_510_8_0, &direction_inmatess5_510_8_0, &direction_inmatess5_510_8_0};
static Image* images_inmatess5_510_10_0[5];
static Direction direction_inmatess5_510_10_0 = {0, 10, 10, 0, -1, images_inmatess5_510_10_0, 5};
static Animation anim_inmatess5_510_10 = {&direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, NULL, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0, &direction_inmatess5_510_10_0};
static Image* images_inmatess5_510_11_0[2];
static Direction direction_inmatess5_510_11_0 = {0, 6, 6, 0, -1, images_inmatess5_510_11_0, 2};
static Image* images_inmatess5_510_11_8[2];
static Direction direction_inmatess5_510_11_8 = {8, 6, 6, 0, -1, images_inmatess5_510_11_8, 2};
static Image* images_inmatess5_510_11_16[2];
static Direction direction_inmatess5_510_11_16 = {16, 6, 6, 0, -1, images_inmatess5_510_11_16, 2};
static Image* images_inmatess5_510_11_24[2];
static Direction direction_inmatess5_510_11_24 = {24, 6, 6, 0, -1, images_inmatess5_510_11_24, 2};
static Animation anim_inmatess5_510_11 = {&direction_inmatess5_510_11_0, &direction_inmatess5_510_11_0, &direction_inmatess5_510_11_0, &direction_inmatess5_510_11_0, NULL, &direction_inmatess5_510_11_8, &direction_inmatess5_510_11_8, &direction_inmatess5_510_11_8, &direction_inmatess5_510_11_8, &direction_inmatess5_510_11_8, &direction_inmatess5_510_11_8, &direction_inmatess5_510_11_8, NULL, &direction_inmatess5_510_11_16, &direction_inmatess5_510_11_16, &direction_inmatess5_510_11_16, &direction_inmatess5_510_11_16, &direction_inmatess5_510_11_16, &direction_inmatess5_510_11_16, &direction_inmatess5_510_11_16, NULL, &direction_inmatess5_510_11_24, &direction_inmatess5_510_11_24, &direction_inmatess5_510_11_24, &direction_inmatess5_510_11_24, &direction_inmatess5_510_11_24, &direction_inmatess5_510_11_24, &direction_inmatess5_510_11_24, NULL, &direction_inmatess5_510_11_0, &direction_inmatess5_510_11_0, &direction_inmatess5_510_11_0};
static Animation * anim_array_inmatess5_510[12] = {&anim_inmatess5_510_0, NULL, NULL, NULL, &anim_inmatess5_510_4, NULL, &anim_inmatess5_510_6, NULL, &anim_inmatess5_510_8, NULL, &anim_inmatess5_510_10, &anim_inmatess5_510_11};
static Animations anim_inmatess5_510 = {12, &anim_array_inmatess5_510[0]};
static bool anim_inmatess5_510_initialized;
class InmateSS5_510 : public Active
{
public:
    InmateSS5_510(int x, int y) : Active(x, y, InmateSS5_510_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 5", 11);
#endif
        this->animations = &anim_inmatess5_510;
        if (!anim_inmatess5_510_initialized) {
            anim_inmatess5_510_initialized = true;
            images_inmatess5_510_0_0[0] = get_internal_image(3448);
            images_inmatess5_510_0_0[1] = get_internal_image(3449);
            images_inmatess5_510_0_8[0] = get_internal_image(3454);
            images_inmatess5_510_0_8[1] = get_internal_image(3455);
            images_inmatess5_510_0_16[0] = get_internal_image(3450);
            images_inmatess5_510_0_16[1] = get_internal_image(3451);
            images_inmatess5_510_0_24[0] = get_internal_image(3452);
            images_inmatess5_510_0_24[1] = get_internal_image(3453);
            images_inmatess5_510_4_0[0] = get_internal_image(369);
            images_inmatess5_510_4_0[1] = get_internal_image(373);
            images_inmatess5_510_4_0[2] = get_internal_image(369);
            images_inmatess5_510_4_0[3] = get_internal_image(373);
            images_inmatess5_510_4_16[0] = get_internal_image(371);
            images_inmatess5_510_4_16[1] = get_internal_image(763);
            images_inmatess5_510_4_16[2] = get_internal_image(371);
            images_inmatess5_510_4_16[3] = get_internal_image(763);
            images_inmatess5_510_6_0[0] = get_internal_image(3804);
            images_inmatess5_510_6_8[0] = get_internal_image(3807);
            images_inmatess5_510_6_16[0] = get_internal_image(3805);
            images_inmatess5_510_6_24[0] = get_internal_image(3806);
            images_inmatess5_510_8_0[0] = get_internal_image(2730);
            images_inmatess5_510_8_16[0] = get_internal_image(3808);
            images_inmatess5_510_8_16[1] = get_internal_image(3809);
            images_inmatess5_510_8_24[0] = get_internal_image(3810);
            images_inmatess5_510_10_0[0] = get_internal_image(3821);
            images_inmatess5_510_10_0[1] = get_internal_image(3823);
            images_inmatess5_510_10_0[2] = get_internal_image(3824);
            images_inmatess5_510_10_0[3] = get_internal_image(3824);
            images_inmatess5_510_10_0[4] = get_internal_image(3823);
            images_inmatess5_510_11_0[0] = get_internal_image(3813);
            images_inmatess5_510_11_0[1] = get_internal_image(3812);
            images_inmatess5_510_11_8[0] = get_internal_image(3817);
            images_inmatess5_510_11_8[1] = get_internal_image(3818);
            images_inmatess5_510_11_16[0] = get_internal_image(3811);
            images_inmatess5_510_11_16[1] = get_internal_image(3814);
            images_inmatess5_510_11_24[0] = get_internal_image(3815);
            images_inmatess5_510_11_24[1] = get_internal_image(3816);
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
FrameObject * create_inmatess5_510(int x, int y)
{
    return new (Active::pool.create()) InmateSS5_510(x, y);
}
static Image* images_inmatess6_511_0_0[2];
static Direction direction_inmatess6_511_0_0 = {0, 10, 10, 0, -1, images_inmatess6_511_0_0, 2};
static Image* images_inmatess6_511_0_8[2];
static Direction direction_inmatess6_511_0_8 = {8, 10, 10, 0, -1, images_inmatess6_511_0_8, 2};
static Image* images_inmatess6_511_0_16[2];
static Direction direction_inmatess6_511_0_16 = {16, 10, 10, 0, -1, images_inmatess6_511_0_16, 2};
static Image* images_inmatess6_511_0_24[2];
static Direction direction_inmatess6_511_0_24 = {24, 10, 10, 0, -1, images_inmatess6_511_0_24, 2};
static Animation anim_inmatess6_511_0 = {&direction_inmatess6_511_0_0, &direction_inmatess6_511_0_0, &direction_inmatess6_511_0_0, &direction_inmatess6_511_0_0, NULL, &direction_inmatess6_511_0_8, &direction_inmatess6_511_0_8, &direction_inmatess6_511_0_8, &direction_inmatess6_511_0_8, &direction_inmatess6_511_0_8, &direction_inmatess6_511_0_8, &direction_inmatess6_511_0_8, NULL, &direction_inmatess6_511_0_16, &direction_inmatess6_511_0_16, &direction_inmatess6_511_0_16, &direction_inmatess6_511_0_16, &direction_inmatess6_511_0_16, &direction_inmatess6_511_0_16, &direction_inmatess6_511_0_16, NULL, &direction_inmatess6_511_0_24, &direction_inmatess6_511_0_24, &direction_inmatess6_511_0_24, &direction_inmatess6_511_0_24, &direction_inmatess6_511_0_24, &direction_inmatess6_511_0_24, &direction_inmatess6_511_0_24, NULL, &direction_inmatess6_511_0_0, &direction_inmatess6_511_0_0, &direction_inmatess6_511_0_0};
static Image* images_inmatess6_511_4_0[4];
static Direction direction_inmatess6_511_4_0 = {0, 20, 20, 0, 1, images_inmatess6_511_4_0, 4};
static Image* images_inmatess6_511_4_16[4];
static Direction direction_inmatess6_511_4_16 = {16, 20, 20, 0, 1, images_inmatess6_511_4_16, 4};
static Animation anim_inmatess6_511_4 = {&direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, NULL, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, &direction_inmatess6_511_4_16, NULL, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0, &direction_inmatess6_511_4_0};
static Image* images_inmatess6_511_6_0[1];
static Direction direction_inmatess6_511_6_0 = {0, 6, 6, 0, 1, images_inmatess6_511_6_0, 1};
static Image* images_inmatess6_511_6_8[1];
static Direction direction_inmatess6_511_6_8 = {8, 6, 6, 0, 1, images_inmatess6_511_6_8, 1};
static Image* images_inmatess6_511_6_16[1];
static Direction direction_inmatess6_511_6_16 = {16, 6, 6, 0, 1, images_inmatess6_511_6_16, 1};
static Image* images_inmatess6_511_6_24[1];
static Direction direction_inmatess6_511_6_24 = {24, 6, 6, 0, 1, images_inmatess6_511_6_24, 1};
static Animation anim_inmatess6_511_6 = {&direction_inmatess6_511_6_0, &direction_inmatess6_511_6_0, &direction_inmatess6_511_6_0, &direction_inmatess6_511_6_0, NULL, &direction_inmatess6_511_6_8, &direction_inmatess6_511_6_8, &direction_inmatess6_511_6_8, &direction_inmatess6_511_6_8, &direction_inmatess6_511_6_8, &direction_inmatess6_511_6_8, &direction_inmatess6_511_6_8, NULL, &direction_inmatess6_511_6_16, &direction_inmatess6_511_6_16, &direction_inmatess6_511_6_16, &direction_inmatess6_511_6_16, &direction_inmatess6_511_6_16, &direction_inmatess6_511_6_16, &direction_inmatess6_511_6_16, NULL, &direction_inmatess6_511_6_24, &direction_inmatess6_511_6_24, &direction_inmatess6_511_6_24, &direction_inmatess6_511_6_24, &direction_inmatess6_511_6_24, &direction_inmatess6_511_6_24, &direction_inmatess6_511_6_24, NULL, &direction_inmatess6_511_6_0, &direction_inmatess6_511_6_0, &direction_inmatess6_511_6_0};
static Image* images_inmatess6_511_8_0[1];
static Direction direction_inmatess6_511_8_0 = {0, 10, 10, 0, -1, images_inmatess6_511_8_0, 1};
static Image* images_inmatess6_511_8_16[2];
static Direction direction_inmatess6_511_8_16 = {16, 5, 5, 0, -1, images_inmatess6_511_8_16, 2};
static Image* images_inmatess6_511_8_24[1];
static Direction direction_inmatess6_511_8_24 = {24, 10, 10, 0, -1, images_inmatess6_511_8_24, 1};
static Animation anim_inmatess6_511_8 = {&direction_inmatess6_511_8_0, &direction_inmatess6_511_8_0, &direction_inmatess6_511_8_0, &direction_inmatess6_511_8_0, &direction_inmatess6_511_8_0, &direction_inmatess6_511_8_0, &direction_inmatess6_511_8_0, &direction_inmatess6_511_8_0, NULL, &direction_inmatess6_511_8_16, &direction_inmatess6_511_8_16, &direction_inmatess6_511_8_16, &direction_inmatess6_511_8_16, &direction_inmatess6_511_8_16, &direction_inmatess6_511_8_16, &direction_inmatess6_511_8_16, &direction_inmatess6_511_8_16, &direction_inmatess6_511_8_16, &direction_inmatess6_511_8_16, &direction_inmatess6_511_8_16, NULL, &direction_inmatess6_511_8_24, &direction_inmatess6_511_8_24, &direction_inmatess6_511_8_24, &direction_inmatess6_511_8_24, &direction_inmatess6_511_8_24, &direction_inmatess6_511_8_24, &direction_inmatess6_511_8_24, NULL, &direction_inmatess6_511_8_0, &direction_inmatess6_511_8_0, &direction_inmatess6_511_8_0};
static Image* images_inmatess6_511_10_0[5];
static Direction direction_inmatess6_511_10_0 = {0, 10, 10, 0, -1, images_inmatess6_511_10_0, 5};
static Animation anim_inmatess6_511_10 = {&direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, NULL, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0, &direction_inmatess6_511_10_0};
static Image* images_inmatess6_511_11_0[2];
static Direction direction_inmatess6_511_11_0 = {0, 6, 6, 0, -1, images_inmatess6_511_11_0, 2};
static Image* images_inmatess6_511_11_8[2];
static Direction direction_inmatess6_511_11_8 = {8, 6, 6, 0, -1, images_inmatess6_511_11_8, 2};
static Image* images_inmatess6_511_11_16[2];
static Direction direction_inmatess6_511_11_16 = {16, 6, 6, 0, -1, images_inmatess6_511_11_16, 2};
static Image* images_inmatess6_511_11_24[2];
static Direction direction_inmatess6_511_11_24 = {24, 6, 6, 0, -1, images_inmatess6_511_11_24, 2};
static Animation anim_inmatess6_511_11 = {&direction_inmatess6_511_11_0, &direction_inmatess6_511_11_0, &direction_inmatess6_511_11_0, &direction_inmatess6_511_11_0, NULL, &direction_inmatess6_511_11_8, &direction_inmatess6_511_11_8, &direction_inmatess6_511_11_8, &direction_inmatess6_511_11_8, &direction_inmatess6_511_11_8, &direction_inmatess6_511_11_8, &direction_inmatess6_511_11_8, NULL, &direction_inmatess6_511_11_16, &direction_inmatess6_511_11_16, &direction_inmatess6_511_11_16, &direction_inmatess6_511_11_16, &direction_inmatess6_511_11_16, &direction_inmatess6_511_11_16, &direction_inmatess6_511_11_16, NULL, &direction_inmatess6_511_11_24, &direction_inmatess6_511_11_24, &direction_inmatess6_511_11_24, &direction_inmatess6_511_11_24, &direction_inmatess6_511_11_24, &direction_inmatess6_511_11_24, &direction_inmatess6_511_11_24, NULL, &direction_inmatess6_511_11_0, &direction_inmatess6_511_11_0, &direction_inmatess6_511_11_0};
static Animation * anim_array_inmatess6_511[12] = {&anim_inmatess6_511_0, NULL, NULL, NULL, &anim_inmatess6_511_4, NULL, &anim_inmatess6_511_6, NULL, &anim_inmatess6_511_8, NULL, &anim_inmatess6_511_10, &anim_inmatess6_511_11};
static Animations anim_inmatess6_511 = {12, &anim_array_inmatess6_511[0]};
static bool anim_inmatess6_511_initialized;
class InmateSS6_511 : public Active
{
public:
    InmateSS6_511(int x, int y) : Active(x, y, InmateSS6_511_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 6", 11);
#endif
        this->animations = &anim_inmatess6_511;
        if (!anim_inmatess6_511_initialized) {
            anim_inmatess6_511_initialized = true;
            images_inmatess6_511_0_0[0] = get_internal_image(3456);
            images_inmatess6_511_0_0[1] = get_internal_image(3457);
            images_inmatess6_511_0_8[0] = get_internal_image(3460);
            images_inmatess6_511_0_8[1] = get_internal_image(3461);
            images_inmatess6_511_0_16[0] = get_internal_image(3458);
            images_inmatess6_511_0_16[1] = get_internal_image(3459);
            images_inmatess6_511_0_24[0] = get_internal_image(3462);
            images_inmatess6_511_0_24[1] = get_internal_image(3463);
            images_inmatess6_511_4_0[0] = get_internal_image(369);
            images_inmatess6_511_4_0[1] = get_internal_image(373);
            images_inmatess6_511_4_0[2] = get_internal_image(369);
            images_inmatess6_511_4_0[3] = get_internal_image(373);
            images_inmatess6_511_4_16[0] = get_internal_image(371);
            images_inmatess6_511_4_16[1] = get_internal_image(763);
            images_inmatess6_511_4_16[2] = get_internal_image(371);
            images_inmatess6_511_4_16[3] = get_internal_image(763);
            images_inmatess6_511_6_0[0] = get_internal_image(3593);
            images_inmatess6_511_6_8[0] = get_internal_image(3595);
            images_inmatess6_511_6_16[0] = get_internal_image(3592);
            images_inmatess6_511_6_24[0] = get_internal_image(3594);
            images_inmatess6_511_8_0[0] = get_internal_image(2730);
            images_inmatess6_511_8_16[0] = get_internal_image(3596);
            images_inmatess6_511_8_16[1] = get_internal_image(3600);
            images_inmatess6_511_8_24[0] = get_internal_image(3597);
            images_inmatess6_511_10_0[0] = get_internal_image(3691);
            images_inmatess6_511_10_0[1] = get_internal_image(3692);
            images_inmatess6_511_10_0[2] = get_internal_image(3693);
            images_inmatess6_511_10_0[3] = get_internal_image(3693);
            images_inmatess6_511_10_0[4] = get_internal_image(3692);
            images_inmatess6_511_11_0[0] = get_internal_image(3606);
            images_inmatess6_511_11_0[1] = get_internal_image(3605);
            images_inmatess6_511_11_8[0] = get_internal_image(3602);
            images_inmatess6_511_11_8[1] = get_internal_image(3603);
            images_inmatess6_511_11_16[0] = get_internal_image(3604);
            images_inmatess6_511_11_16[1] = get_internal_image(3607);
            images_inmatess6_511_11_24[0] = get_internal_image(3598);
            images_inmatess6_511_11_24[1] = get_internal_image(3601);
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
FrameObject * create_inmatess6_511(int x, int y)
{
    return new (Active::pool.create()) InmateSS6_511(x, y);
}
static Image* images_inmatess7_512_0_0[2];
static Direction direction_inmatess7_512_0_0 = {0, 10, 10, 0, -1, images_inmatess7_512_0_0, 2};
static Image* images_inmatess7_512_0_8[2];
static Direction direction_inmatess7_512_0_8 = {8, 10, 10, 0, -1, images_inmatess7_512_0_8, 2};
static Image* images_inmatess7_512_0_16[2];
static Direction direction_inmatess7_512_0_16 = {16, 10, 10, 0, -1, images_inmatess7_512_0_16, 2};
static Image* images_inmatess7_512_0_24[2];
static Direction direction_inmatess7_512_0_24 = {24, 10, 10, 0, -1, images_inmatess7_512_0_24, 2};
static Animation anim_inmatess7_512_0 = {&direction_inmatess7_512_0_0, &direction_inmatess7_512_0_0, &direction_inmatess7_512_0_0, &direction_inmatess7_512_0_0, NULL, &direction_inmatess7_512_0_8, &direction_inmatess7_512_0_8, &direction_inmatess7_512_0_8, &direction_inmatess7_512_0_8, &direction_inmatess7_512_0_8, &direction_inmatess7_512_0_8, &direction_inmatess7_512_0_8, NULL, &direction_inmatess7_512_0_16, &direction_inmatess7_512_0_16, &direction_inmatess7_512_0_16, &direction_inmatess7_512_0_16, &direction_inmatess7_512_0_16, &direction_inmatess7_512_0_16, &direction_inmatess7_512_0_16, NULL, &direction_inmatess7_512_0_24, &direction_inmatess7_512_0_24, &direction_inmatess7_512_0_24, &direction_inmatess7_512_0_24, &direction_inmatess7_512_0_24, &direction_inmatess7_512_0_24, &direction_inmatess7_512_0_24, NULL, &direction_inmatess7_512_0_0, &direction_inmatess7_512_0_0, &direction_inmatess7_512_0_0};
static Image* images_inmatess7_512_4_0[4];
static Direction direction_inmatess7_512_4_0 = {0, 20, 20, 0, 1, images_inmatess7_512_4_0, 4};
static Image* images_inmatess7_512_4_16[4];
static Direction direction_inmatess7_512_4_16 = {16, 20, 20, 0, 1, images_inmatess7_512_4_16, 4};
static Animation anim_inmatess7_512_4 = {&direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, NULL, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, &direction_inmatess7_512_4_16, NULL, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0, &direction_inmatess7_512_4_0};
static Image* images_inmatess7_512_6_0[1];
static Direction direction_inmatess7_512_6_0 = {0, 6, 6, 0, 1, images_inmatess7_512_6_0, 1};
static Image* images_inmatess7_512_6_8[1];
static Direction direction_inmatess7_512_6_8 = {8, 6, 6, 0, 1, images_inmatess7_512_6_8, 1};
static Image* images_inmatess7_512_6_16[1];
static Direction direction_inmatess7_512_6_16 = {16, 6, 6, 0, 1, images_inmatess7_512_6_16, 1};
static Image* images_inmatess7_512_6_24[1];
static Direction direction_inmatess7_512_6_24 = {24, 6, 6, 0, 1, images_inmatess7_512_6_24, 1};
static Animation anim_inmatess7_512_6 = {&direction_inmatess7_512_6_0, &direction_inmatess7_512_6_0, &direction_inmatess7_512_6_0, &direction_inmatess7_512_6_0, NULL, &direction_inmatess7_512_6_8, &direction_inmatess7_512_6_8, &direction_inmatess7_512_6_8, &direction_inmatess7_512_6_8, &direction_inmatess7_512_6_8, &direction_inmatess7_512_6_8, &direction_inmatess7_512_6_8, NULL, &direction_inmatess7_512_6_16, &direction_inmatess7_512_6_16, &direction_inmatess7_512_6_16, &direction_inmatess7_512_6_16, &direction_inmatess7_512_6_16, &direction_inmatess7_512_6_16, &direction_inmatess7_512_6_16, NULL, &direction_inmatess7_512_6_24, &direction_inmatess7_512_6_24, &direction_inmatess7_512_6_24, &direction_inmatess7_512_6_24, &direction_inmatess7_512_6_24, &direction_inmatess7_512_6_24, &direction_inmatess7_512_6_24, NULL, &direction_inmatess7_512_6_0, &direction_inmatess7_512_6_0, &direction_inmatess7_512_6_0};
static Image* images_inmatess7_512_8_0[1];
static Direction direction_inmatess7_512_8_0 = {0, 10, 10, 0, -1, images_inmatess7_512_8_0, 1};
static Image* images_inmatess7_512_8_16[2];
static Direction direction_inmatess7_512_8_16 = {16, 5, 5, 0, -1, images_inmatess7_512_8_16, 2};
static Image* images_inmatess7_512_8_24[1];
static Direction direction_inmatess7_512_8_24 = {24, 10, 10, 0, -1, images_inmatess7_512_8_24, 1};
static Animation anim_inmatess7_512_8 = {&direction_inmatess7_512_8_0, &direction_inmatess7_512_8_0, &direction_inmatess7_512_8_0, &direction_inmatess7_512_8_0, &direction_inmatess7_512_8_0, &direction_inmatess7_512_8_0, &direction_inmatess7_512_8_0, &direction_inmatess7_512_8_0, NULL, &direction_inmatess7_512_8_16, &direction_inmatess7_512_8_16, &direction_inmatess7_512_8_16, &direction_inmatess7_512_8_16, &direction_inmatess7_512_8_16, &direction_inmatess7_512_8_16, &direction_inmatess7_512_8_16, &direction_inmatess7_512_8_16, &direction_inmatess7_512_8_16, &direction_inmatess7_512_8_16, &direction_inmatess7_512_8_16, NULL, &direction_inmatess7_512_8_24, &direction_inmatess7_512_8_24, &direction_inmatess7_512_8_24, &direction_inmatess7_512_8_24, &direction_inmatess7_512_8_24, &direction_inmatess7_512_8_24, &direction_inmatess7_512_8_24, NULL, &direction_inmatess7_512_8_0, &direction_inmatess7_512_8_0, &direction_inmatess7_512_8_0};
static Image* images_inmatess7_512_10_0[5];
static Direction direction_inmatess7_512_10_0 = {0, 10, 10, 0, -1, images_inmatess7_512_10_0, 5};
static Animation anim_inmatess7_512_10 = {&direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, NULL, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0, &direction_inmatess7_512_10_0};
static Image* images_inmatess7_512_11_0[2];
static Direction direction_inmatess7_512_11_0 = {0, 6, 6, 0, -1, images_inmatess7_512_11_0, 2};
static Image* images_inmatess7_512_11_8[2];
static Direction direction_inmatess7_512_11_8 = {8, 6, 6, 0, -1, images_inmatess7_512_11_8, 2};
static Image* images_inmatess7_512_11_16[2];
static Direction direction_inmatess7_512_11_16 = {16, 6, 6, 0, -1, images_inmatess7_512_11_16, 2};
static Image* images_inmatess7_512_11_24[2];
static Direction direction_inmatess7_512_11_24 = {24, 6, 6, 0, -1, images_inmatess7_512_11_24, 2};
static Animation anim_inmatess7_512_11 = {&direction_inmatess7_512_11_0, &direction_inmatess7_512_11_0, &direction_inmatess7_512_11_0, &direction_inmatess7_512_11_0, NULL, &direction_inmatess7_512_11_8, &direction_inmatess7_512_11_8, &direction_inmatess7_512_11_8, &direction_inmatess7_512_11_8, &direction_inmatess7_512_11_8, &direction_inmatess7_512_11_8, &direction_inmatess7_512_11_8, NULL, &direction_inmatess7_512_11_16, &direction_inmatess7_512_11_16, &direction_inmatess7_512_11_16, &direction_inmatess7_512_11_16, &direction_inmatess7_512_11_16, &direction_inmatess7_512_11_16, &direction_inmatess7_512_11_16, NULL, &direction_inmatess7_512_11_24, &direction_inmatess7_512_11_24, &direction_inmatess7_512_11_24, &direction_inmatess7_512_11_24, &direction_inmatess7_512_11_24, &direction_inmatess7_512_11_24, &direction_inmatess7_512_11_24, NULL, &direction_inmatess7_512_11_0, &direction_inmatess7_512_11_0, &direction_inmatess7_512_11_0};
static Image* images_inmatess7_512_18_24[8];
static Direction direction_inmatess7_512_18_24 = {24, 10, 10, 0, -1, images_inmatess7_512_18_24, 8};
static Animation anim_inmatess7_512_18 = {&direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, NULL, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24, &direction_inmatess7_512_18_24};
static Image* images_inmatess7_512_19_24[6];
static Direction direction_inmatess7_512_19_24 = {24, 10, 10, 0, -1, images_inmatess7_512_19_24, 6};
static Animation anim_inmatess7_512_19 = {&direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, NULL, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24, &direction_inmatess7_512_19_24};
static Animation * anim_array_inmatess7_512[20] = {&anim_inmatess7_512_0, NULL, NULL, NULL, &anim_inmatess7_512_4, NULL, &anim_inmatess7_512_6, NULL, &anim_inmatess7_512_8, NULL, &anim_inmatess7_512_10, &anim_inmatess7_512_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmatess7_512_18, &anim_inmatess7_512_19};
static Animations anim_inmatess7_512 = {20, &anim_array_inmatess7_512[0]};
static bool anim_inmatess7_512_initialized;
class InmateSS7_512 : public Active
{
public:
    InmateSS7_512(int x, int y) : Active(x, y, InmateSS7_512_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 7", 11);
#endif
        this->animations = &anim_inmatess7_512;
        if (!anim_inmatess7_512_initialized) {
            anim_inmatess7_512_initialized = true;
            images_inmatess7_512_0_0[0] = get_internal_image(3464);
            images_inmatess7_512_0_0[1] = get_internal_image(3465);
            images_inmatess7_512_0_8[0] = get_internal_image(3469);
            images_inmatess7_512_0_8[1] = get_internal_image(3468);
            images_inmatess7_512_0_16[0] = get_internal_image(3466);
            images_inmatess7_512_0_16[1] = get_internal_image(3467);
            images_inmatess7_512_0_24[0] = get_internal_image(3470);
            images_inmatess7_512_0_24[1] = get_internal_image(3471);
            images_inmatess7_512_4_0[0] = get_internal_image(369);
            images_inmatess7_512_4_0[1] = get_internal_image(373);
            images_inmatess7_512_4_0[2] = get_internal_image(369);
            images_inmatess7_512_4_0[3] = get_internal_image(373);
            images_inmatess7_512_4_16[0] = get_internal_image(371);
            images_inmatess7_512_4_16[1] = get_internal_image(763);
            images_inmatess7_512_4_16[2] = get_internal_image(371);
            images_inmatess7_512_4_16[3] = get_internal_image(763);
            images_inmatess7_512_6_0[0] = get_internal_image(3822);
            images_inmatess7_512_6_8[0] = get_internal_image(3825);
            images_inmatess7_512_6_16[0] = get_internal_image(3819);
            images_inmatess7_512_6_24[0] = get_internal_image(3826);
            images_inmatess7_512_8_0[0] = get_internal_image(2730);
            images_inmatess7_512_8_16[0] = get_internal_image(3827);
            images_inmatess7_512_8_16[1] = get_internal_image(3828);
            images_inmatess7_512_8_24[0] = get_internal_image(3831);
            images_inmatess7_512_10_0[0] = get_internal_image(3840);
            images_inmatess7_512_10_0[1] = get_internal_image(3842);
            images_inmatess7_512_10_0[2] = get_internal_image(3843);
            images_inmatess7_512_10_0[3] = get_internal_image(3843);
            images_inmatess7_512_10_0[4] = get_internal_image(3842);
            images_inmatess7_512_11_0[0] = get_internal_image(3832);
            images_inmatess7_512_11_0[1] = get_internal_image(3830);
            images_inmatess7_512_11_8[0] = get_internal_image(3834);
            images_inmatess7_512_11_8[1] = get_internal_image(3835);
            images_inmatess7_512_11_16[0] = get_internal_image(3829);
            images_inmatess7_512_11_16[1] = get_internal_image(3833);
            images_inmatess7_512_11_24[0] = get_internal_image(3836);
            images_inmatess7_512_11_24[1] = get_internal_image(3837);
            images_inmatess7_512_18_24[0] = get_internal_image(2099);
            images_inmatess7_512_18_24[1] = get_internal_image(2112);
            images_inmatess7_512_18_24[2] = get_internal_image(2107);
            images_inmatess7_512_18_24[3] = get_internal_image(2108);
            images_inmatess7_512_18_24[4] = get_internal_image(2109);
            images_inmatess7_512_18_24[5] = get_internal_image(2114);
            images_inmatess7_512_18_24[6] = get_internal_image(2110);
            images_inmatess7_512_18_24[7] = get_internal_image(2111);
            images_inmatess7_512_19_24[0] = get_internal_image(2150);
            images_inmatess7_512_19_24[1] = get_internal_image(2156);
            images_inmatess7_512_19_24[2] = get_internal_image(2157);
            images_inmatess7_512_19_24[3] = get_internal_image(2157);
            images_inmatess7_512_19_24[4] = get_internal_image(2156);
            images_inmatess7_512_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmatess7_512(int x, int y)
{
    return new (Active::pool.create()) InmateSS7_512(x, y);
}
static Image* images_inmatess8_513_0_0[2];
static Direction direction_inmatess8_513_0_0 = {0, 10, 10, 0, -1, images_inmatess8_513_0_0, 2};
static Image* images_inmatess8_513_0_8[2];
static Direction direction_inmatess8_513_0_8 = {8, 10, 10, 0, -1, images_inmatess8_513_0_8, 2};
static Image* images_inmatess8_513_0_16[2];
static Direction direction_inmatess8_513_0_16 = {16, 10, 10, 0, -1, images_inmatess8_513_0_16, 2};
static Image* images_inmatess8_513_0_24[2];
static Direction direction_inmatess8_513_0_24 = {24, 10, 10, 0, -1, images_inmatess8_513_0_24, 2};
static Animation anim_inmatess8_513_0 = {&direction_inmatess8_513_0_0, &direction_inmatess8_513_0_0, &direction_inmatess8_513_0_0, &direction_inmatess8_513_0_0, NULL, &direction_inmatess8_513_0_8, &direction_inmatess8_513_0_8, &direction_inmatess8_513_0_8, &direction_inmatess8_513_0_8, &direction_inmatess8_513_0_8, &direction_inmatess8_513_0_8, &direction_inmatess8_513_0_8, NULL, &direction_inmatess8_513_0_16, &direction_inmatess8_513_0_16, &direction_inmatess8_513_0_16, &direction_inmatess8_513_0_16, &direction_inmatess8_513_0_16, &direction_inmatess8_513_0_16, &direction_inmatess8_513_0_16, NULL, &direction_inmatess8_513_0_24, &direction_inmatess8_513_0_24, &direction_inmatess8_513_0_24, &direction_inmatess8_513_0_24, &direction_inmatess8_513_0_24, &direction_inmatess8_513_0_24, &direction_inmatess8_513_0_24, NULL, &direction_inmatess8_513_0_0, &direction_inmatess8_513_0_0, &direction_inmatess8_513_0_0};
static Image* images_inmatess8_513_4_0[4];
static Direction direction_inmatess8_513_4_0 = {0, 20, 20, 0, 1, images_inmatess8_513_4_0, 4};
static Image* images_inmatess8_513_4_16[4];
static Direction direction_inmatess8_513_4_16 = {16, 20, 20, 0, 1, images_inmatess8_513_4_16, 4};
static Animation anim_inmatess8_513_4 = {&direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, NULL, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, &direction_inmatess8_513_4_16, NULL, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0, &direction_inmatess8_513_4_0};
static Image* images_inmatess8_513_6_0[1];
static Direction direction_inmatess8_513_6_0 = {0, 6, 6, 0, 1, images_inmatess8_513_6_0, 1};
static Image* images_inmatess8_513_6_8[1];
static Direction direction_inmatess8_513_6_8 = {8, 6, 6, 0, 1, images_inmatess8_513_6_8, 1};
static Image* images_inmatess8_513_6_16[1];
static Direction direction_inmatess8_513_6_16 = {16, 6, 6, 0, 1, images_inmatess8_513_6_16, 1};
static Image* images_inmatess8_513_6_24[1];
static Direction direction_inmatess8_513_6_24 = {24, 6, 6, 0, 1, images_inmatess8_513_6_24, 1};
static Animation anim_inmatess8_513_6 = {&direction_inmatess8_513_6_0, &direction_inmatess8_513_6_0, &direction_inmatess8_513_6_0, &direction_inmatess8_513_6_0, NULL, &direction_inmatess8_513_6_8, &direction_inmatess8_513_6_8, &direction_inmatess8_513_6_8, &direction_inmatess8_513_6_8, &direction_inmatess8_513_6_8, &direction_inmatess8_513_6_8, &direction_inmatess8_513_6_8, NULL, &direction_inmatess8_513_6_16, &direction_inmatess8_513_6_16, &direction_inmatess8_513_6_16, &direction_inmatess8_513_6_16, &direction_inmatess8_513_6_16, &direction_inmatess8_513_6_16, &direction_inmatess8_513_6_16, NULL, &direction_inmatess8_513_6_24, &direction_inmatess8_513_6_24, &direction_inmatess8_513_6_24, &direction_inmatess8_513_6_24, &direction_inmatess8_513_6_24, &direction_inmatess8_513_6_24, &direction_inmatess8_513_6_24, NULL, &direction_inmatess8_513_6_0, &direction_inmatess8_513_6_0, &direction_inmatess8_513_6_0};
static Image* images_inmatess8_513_8_0[1];
static Direction direction_inmatess8_513_8_0 = {0, 10, 10, 0, -1, images_inmatess8_513_8_0, 1};
static Image* images_inmatess8_513_8_16[2];
static Direction direction_inmatess8_513_8_16 = {16, 5, 5, 0, -1, images_inmatess8_513_8_16, 2};
static Image* images_inmatess8_513_8_24[1];
static Direction direction_inmatess8_513_8_24 = {24, 10, 10, 0, -1, images_inmatess8_513_8_24, 1};
static Animation anim_inmatess8_513_8 = {&direction_inmatess8_513_8_0, &direction_inmatess8_513_8_0, &direction_inmatess8_513_8_0, &direction_inmatess8_513_8_0, &direction_inmatess8_513_8_0, &direction_inmatess8_513_8_0, &direction_inmatess8_513_8_0, &direction_inmatess8_513_8_0, NULL, &direction_inmatess8_513_8_16, &direction_inmatess8_513_8_16, &direction_inmatess8_513_8_16, &direction_inmatess8_513_8_16, &direction_inmatess8_513_8_16, &direction_inmatess8_513_8_16, &direction_inmatess8_513_8_16, &direction_inmatess8_513_8_16, &direction_inmatess8_513_8_16, &direction_inmatess8_513_8_16, &direction_inmatess8_513_8_16, NULL, &direction_inmatess8_513_8_24, &direction_inmatess8_513_8_24, &direction_inmatess8_513_8_24, &direction_inmatess8_513_8_24, &direction_inmatess8_513_8_24, &direction_inmatess8_513_8_24, &direction_inmatess8_513_8_24, NULL, &direction_inmatess8_513_8_0, &direction_inmatess8_513_8_0, &direction_inmatess8_513_8_0};
static Image* images_inmatess8_513_10_0[5];
static Direction direction_inmatess8_513_10_0 = {0, 10, 10, 0, -1, images_inmatess8_513_10_0, 5};
static Animation anim_inmatess8_513_10 = {&direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, NULL, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0, &direction_inmatess8_513_10_0};
static Image* images_inmatess8_513_11_0[2];
static Direction direction_inmatess8_513_11_0 = {0, 6, 6, 0, -1, images_inmatess8_513_11_0, 2};
static Image* images_inmatess8_513_11_8[2];
static Direction direction_inmatess8_513_11_8 = {8, 6, 6, 0, -1, images_inmatess8_513_11_8, 2};
static Image* images_inmatess8_513_11_16[2];
static Direction direction_inmatess8_513_11_16 = {16, 6, 6, 0, -1, images_inmatess8_513_11_16, 2};
static Image* images_inmatess8_513_11_24[2];
static Direction direction_inmatess8_513_11_24 = {24, 6, 6, 0, -1, images_inmatess8_513_11_24, 2};
static Animation anim_inmatess8_513_11 = {&direction_inmatess8_513_11_0, &direction_inmatess8_513_11_0, &direction_inmatess8_513_11_0, &direction_inmatess8_513_11_0, NULL, &direction_inmatess8_513_11_8, &direction_inmatess8_513_11_8, &direction_inmatess8_513_11_8, &direction_inmatess8_513_11_8, &direction_inmatess8_513_11_8, &direction_inmatess8_513_11_8, &direction_inmatess8_513_11_8, NULL, &direction_inmatess8_513_11_16, &direction_inmatess8_513_11_16, &direction_inmatess8_513_11_16, &direction_inmatess8_513_11_16, &direction_inmatess8_513_11_16, &direction_inmatess8_513_11_16, &direction_inmatess8_513_11_16, NULL, &direction_inmatess8_513_11_24, &direction_inmatess8_513_11_24, &direction_inmatess8_513_11_24, &direction_inmatess8_513_11_24, &direction_inmatess8_513_11_24, &direction_inmatess8_513_11_24, &direction_inmatess8_513_11_24, NULL, &direction_inmatess8_513_11_0, &direction_inmatess8_513_11_0, &direction_inmatess8_513_11_0};
static Image* images_inmatess8_513_18_24[8];
static Direction direction_inmatess8_513_18_24 = {24, 10, 10, 0, -1, images_inmatess8_513_18_24, 8};
static Animation anim_inmatess8_513_18 = {&direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, NULL, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24, &direction_inmatess8_513_18_24};
static Image* images_inmatess8_513_19_24[6];
static Direction direction_inmatess8_513_19_24 = {24, 10, 10, 0, -1, images_inmatess8_513_19_24, 6};
static Animation anim_inmatess8_513_19 = {&direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, NULL, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24, &direction_inmatess8_513_19_24};
static Animation * anim_array_inmatess8_513[20] = {&anim_inmatess8_513_0, NULL, NULL, NULL, &anim_inmatess8_513_4, NULL, &anim_inmatess8_513_6, NULL, &anim_inmatess8_513_8, NULL, &anim_inmatess8_513_10, &anim_inmatess8_513_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmatess8_513_18, &anim_inmatess8_513_19};
static Animations anim_inmatess8_513 = {20, &anim_array_inmatess8_513[0]};
static bool anim_inmatess8_513_initialized;
class InmateSS8_513 : public Active
{
public:
    InmateSS8_513(int x, int y) : Active(x, y, InmateSS8_513_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 8", 11);
#endif
        this->animations = &anim_inmatess8_513;
        if (!anim_inmatess8_513_initialized) {
            anim_inmatess8_513_initialized = true;
            images_inmatess8_513_0_0[0] = get_internal_image(3472);
            images_inmatess8_513_0_0[1] = get_internal_image(3473);
            images_inmatess8_513_0_8[0] = get_internal_image(3476);
            images_inmatess8_513_0_8[1] = get_internal_image(3477);
            images_inmatess8_513_0_16[0] = get_internal_image(3474);
            images_inmatess8_513_0_16[1] = get_internal_image(3475);
            images_inmatess8_513_0_24[0] = get_internal_image(3478);
            images_inmatess8_513_0_24[1] = get_internal_image(3479);
            images_inmatess8_513_4_0[0] = get_internal_image(369);
            images_inmatess8_513_4_0[1] = get_internal_image(373);
            images_inmatess8_513_4_0[2] = get_internal_image(369);
            images_inmatess8_513_4_0[3] = get_internal_image(373);
            images_inmatess8_513_4_16[0] = get_internal_image(371);
            images_inmatess8_513_4_16[1] = get_internal_image(763);
            images_inmatess8_513_4_16[2] = get_internal_image(371);
            images_inmatess8_513_4_16[3] = get_internal_image(763);
            images_inmatess8_513_6_0[0] = get_internal_image(3838);
            images_inmatess8_513_6_8[0] = get_internal_image(3845);
            images_inmatess8_513_6_16[0] = get_internal_image(3841);
            images_inmatess8_513_6_24[0] = get_internal_image(3844);
            images_inmatess8_513_8_0[0] = get_internal_image(2730);
            images_inmatess8_513_8_16[0] = get_internal_image(3846);
            images_inmatess8_513_8_16[1] = get_internal_image(3847);
            images_inmatess8_513_8_24[0] = get_internal_image(3849);
            images_inmatess8_513_10_0[0] = get_internal_image(3859);
            images_inmatess8_513_10_0[1] = get_internal_image(3861);
            images_inmatess8_513_10_0[2] = get_internal_image(3862);
            images_inmatess8_513_10_0[3] = get_internal_image(3862);
            images_inmatess8_513_10_0[4] = get_internal_image(3861);
            images_inmatess8_513_11_0[0] = get_internal_image(3851);
            images_inmatess8_513_11_0[1] = get_internal_image(3850);
            images_inmatess8_513_11_8[0] = get_internal_image(3855);
            images_inmatess8_513_11_8[1] = get_internal_image(3856);
            images_inmatess8_513_11_16[0] = get_internal_image(3848);
            images_inmatess8_513_11_16[1] = get_internal_image(3852);
            images_inmatess8_513_11_24[0] = get_internal_image(3853);
            images_inmatess8_513_11_24[1] = get_internal_image(3854);
            images_inmatess8_513_18_24[0] = get_internal_image(2099);
            images_inmatess8_513_18_24[1] = get_internal_image(2112);
            images_inmatess8_513_18_24[2] = get_internal_image(2107);
            images_inmatess8_513_18_24[3] = get_internal_image(2108);
            images_inmatess8_513_18_24[4] = get_internal_image(2109);
            images_inmatess8_513_18_24[5] = get_internal_image(2114);
            images_inmatess8_513_18_24[6] = get_internal_image(2110);
            images_inmatess8_513_18_24[7] = get_internal_image(2111);
            images_inmatess8_513_19_24[0] = get_internal_image(2150);
            images_inmatess8_513_19_24[1] = get_internal_image(2156);
            images_inmatess8_513_19_24[2] = get_internal_image(2157);
            images_inmatess8_513_19_24[3] = get_internal_image(2157);
            images_inmatess8_513_19_24[4] = get_internal_image(2156);
            images_inmatess8_513_19_24[5] = get_internal_image(2150);
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
FrameObject * create_inmatess8_513(int x, int y)
{
    return new (Active::pool.create()) InmateSS8_513(x, y);
}
static Image* images_guard4_514_0_0[2];
static Direction direction_guard4_514_0_0 = {0, 10, 10, 0, -1, images_guard4_514_0_0, 2};
static Image* images_guard4_514_0_8[2];
static Direction direction_guard4_514_0_8 = {8, 10, 10, 0, -1, images_guard4_514_0_8, 2};
static Image* images_guard4_514_0_16[2];
static Direction direction_guard4_514_0_16 = {16, 10, 10, 0, -1, images_guard4_514_0_16, 2};
static Image* images_guard4_514_0_24[2];
static Direction direction_guard4_514_0_24 = {24, 10, 10, 0, -1, images_guard4_514_0_24, 2};
static Animation anim_guard4_514_0 = {&direction_guard4_514_0_0, &direction_guard4_514_0_0, &direction_guard4_514_0_0, &direction_guard4_514_0_0, NULL, &direction_guard4_514_0_8, &direction_guard4_514_0_8, &direction_guard4_514_0_8, &direction_guard4_514_0_8, &direction_guard4_514_0_8, &direction_guard4_514_0_8, &direction_guard4_514_0_8, NULL, &direction_guard4_514_0_16, &direction_guard4_514_0_16, &direction_guard4_514_0_16, &direction_guard4_514_0_16, &direction_guard4_514_0_16, &direction_guard4_514_0_16, &direction_guard4_514_0_16, NULL, &direction_guard4_514_0_24, &direction_guard4_514_0_24, &direction_guard4_514_0_24, &direction_guard4_514_0_24, &direction_guard4_514_0_24, &direction_guard4_514_0_24, &direction_guard4_514_0_24, NULL, &direction_guard4_514_0_0, &direction_guard4_514_0_0, &direction_guard4_514_0_0};
static Image* images_guard4_514_6_0[1];
static Direction direction_guard4_514_6_0 = {0, 6, 6, 0, 1, images_guard4_514_6_0, 1};
static Image* images_guard4_514_6_8[1];
static Direction direction_guard4_514_6_8 = {8, 6, 6, 0, 1, images_guard4_514_6_8, 1};
static Image* images_guard4_514_6_16[1];
static Direction direction_guard4_514_6_16 = {16, 6, 6, 0, 1, images_guard4_514_6_16, 1};
static Image* images_guard4_514_6_24[1];
static Direction direction_guard4_514_6_24 = {24, 6, 6, 0, 1, images_guard4_514_6_24, 1};
static Animation anim_guard4_514_6 = {&direction_guard4_514_6_0, &direction_guard4_514_6_0, &direction_guard4_514_6_0, &direction_guard4_514_6_0, NULL, &direction_guard4_514_6_8, &direction_guard4_514_6_8, &direction_guard4_514_6_8, &direction_guard4_514_6_8, &direction_guard4_514_6_8, &direction_guard4_514_6_8, &direction_guard4_514_6_8, NULL, &direction_guard4_514_6_16, &direction_guard4_514_6_16, &direction_guard4_514_6_16, &direction_guard4_514_6_16, &direction_guard4_514_6_16, &direction_guard4_514_6_16, &direction_guard4_514_6_16, NULL, &direction_guard4_514_6_24, &direction_guard4_514_6_24, &direction_guard4_514_6_24, &direction_guard4_514_6_24, &direction_guard4_514_6_24, &direction_guard4_514_6_24, &direction_guard4_514_6_24, NULL, &direction_guard4_514_6_0, &direction_guard4_514_6_0, &direction_guard4_514_6_0};
static Image* images_guard4_514_8_0[1];
static Direction direction_guard4_514_8_0 = {0, 50, 50, 0, -1, images_guard4_514_8_0, 1};
static Image* images_guard4_514_8_16[2];
static Direction direction_guard4_514_8_16 = {16, 5, 5, 0, -1, images_guard4_514_8_16, 2};
static Image* images_guard4_514_8_24[3];
static Direction direction_guard4_514_8_24 = {24, 10, 10, 0, -1, images_guard4_514_8_24, 3};
static Animation anim_guard4_514_8 = {&direction_guard4_514_8_0, &direction_guard4_514_8_0, &direction_guard4_514_8_0, &direction_guard4_514_8_0, &direction_guard4_514_8_0, &direction_guard4_514_8_0, &direction_guard4_514_8_0, &direction_guard4_514_8_0, NULL, &direction_guard4_514_8_16, &direction_guard4_514_8_16, &direction_guard4_514_8_16, &direction_guard4_514_8_16, &direction_guard4_514_8_16, &direction_guard4_514_8_16, &direction_guard4_514_8_16, &direction_guard4_514_8_16, &direction_guard4_514_8_16, &direction_guard4_514_8_16, &direction_guard4_514_8_16, NULL, &direction_guard4_514_8_24, &direction_guard4_514_8_24, &direction_guard4_514_8_24, &direction_guard4_514_8_24, &direction_guard4_514_8_24, &direction_guard4_514_8_24, &direction_guard4_514_8_24, NULL, &direction_guard4_514_8_0, &direction_guard4_514_8_0, &direction_guard4_514_8_0};
static Animation * anim_array_guard4_514[9] = {&anim_guard4_514_0, NULL, NULL, NULL, NULL, NULL, &anim_guard4_514_6, NULL, &anim_guard4_514_8};
static Animations anim_guard4_514 = {9, &anim_array_guard4_514[0]};
static bool anim_guard4_514_initialized;
class Guard4_514 : public Active
{
public:
    Guard4_514(int x, int y) : Active(x, y, Guard4_514_type)
    {
        // qualifiers: 31, 33
#ifndef NDEBUG
        name = std::string("Guard 4", 7);
#endif
        this->animations = &anim_guard4_514;
        if (!anim_guard4_514_initialized) {
            anim_guard4_514_initialized = true;
            images_guard4_514_0_0[0] = get_internal_image(3499);
            images_guard4_514_0_0[1] = get_internal_image(3500);
            images_guard4_514_0_8[0] = get_internal_image(3503);
            images_guard4_514_0_8[1] = get_internal_image(3504);
            images_guard4_514_0_16[0] = get_internal_image(3501);
            images_guard4_514_0_16[1] = get_internal_image(3502);
            images_guard4_514_0_24[0] = get_internal_image(3489);
            images_guard4_514_0_24[1] = get_internal_image(3498);
            images_guard4_514_6_0[0] = get_internal_image(3629);
            images_guard4_514_6_8[0] = get_internal_image(3626);
            images_guard4_514_6_16[0] = get_internal_image(3628);
            images_guard4_514_6_24[0] = get_internal_image(3625);
            images_guard4_514_8_0[0] = get_internal_image(3237);
            images_guard4_514_8_16[0] = get_internal_image(3623);
            images_guard4_514_8_16[1] = get_internal_image(3624);
            images_guard4_514_8_24[0] = get_internal_image(3622);
            images_guard4_514_8_24[1] = get_internal_image(3622);
            images_guard4_514_8_24[2] = get_internal_image(3622);
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
FrameObject * create_guard4_514(int x, int y)
{
    return new (Active::pool.create()) Guard4_514(x, y);
}
static Image* images_outfitguardss_515_0_0[2];
static Direction direction_outfitguardss_515_0_0 = {0, 6, 6, 0, -1, images_outfitguardss_515_0_0, 2};
static Image* images_outfitguardss_515_0_8[2];
static Direction direction_outfitguardss_515_0_8 = {8, 6, 6, 0, -1, images_outfitguardss_515_0_8, 2};
static Image* images_outfitguardss_515_0_16[2];
static Direction direction_outfitguardss_515_0_16 = {16, 6, 6, 0, -1, images_outfitguardss_515_0_16, 2};
static Image* images_outfitguardss_515_0_24[2];
static Direction direction_outfitguardss_515_0_24 = {24, 6, 6, 0, -1, images_outfitguardss_515_0_24, 2};
static Animation anim_outfitguardss_515_0 = {&direction_outfitguardss_515_0_0, &direction_outfitguardss_515_0_0, &direction_outfitguardss_515_0_0, &direction_outfitguardss_515_0_0, NULL, &direction_outfitguardss_515_0_8, &direction_outfitguardss_515_0_8, &direction_outfitguardss_515_0_8, &direction_outfitguardss_515_0_8, &direction_outfitguardss_515_0_8, &direction_outfitguardss_515_0_8, &direction_outfitguardss_515_0_8, NULL, &direction_outfitguardss_515_0_16, &direction_outfitguardss_515_0_16, &direction_outfitguardss_515_0_16, &direction_outfitguardss_515_0_16, &direction_outfitguardss_515_0_16, &direction_outfitguardss_515_0_16, &direction_outfitguardss_515_0_16, NULL, &direction_outfitguardss_515_0_24, &direction_outfitguardss_515_0_24, &direction_outfitguardss_515_0_24, &direction_outfitguardss_515_0_24, &direction_outfitguardss_515_0_24, &direction_outfitguardss_515_0_24, &direction_outfitguardss_515_0_24, NULL, &direction_outfitguardss_515_0_0, &direction_outfitguardss_515_0_0, &direction_outfitguardss_515_0_0};
static Image* images_outfitguardss_515_6_0[1];
static Direction direction_outfitguardss_515_6_0 = {0, 6, 6, 0, 1, images_outfitguardss_515_6_0, 1};
static Image* images_outfitguardss_515_6_8[1];
static Direction direction_outfitguardss_515_6_8 = {8, 6, 6, 0, 1, images_outfitguardss_515_6_8, 1};
static Image* images_outfitguardss_515_6_16[1];
static Direction direction_outfitguardss_515_6_16 = {16, 6, 6, 0, 1, images_outfitguardss_515_6_16, 1};
static Image* images_outfitguardss_515_6_24[1];
static Direction direction_outfitguardss_515_6_24 = {24, 6, 6, 0, 1, images_outfitguardss_515_6_24, 1};
static Animation anim_outfitguardss_515_6 = {&direction_outfitguardss_515_6_0, &direction_outfitguardss_515_6_0, &direction_outfitguardss_515_6_0, &direction_outfitguardss_515_6_0, NULL, &direction_outfitguardss_515_6_8, &direction_outfitguardss_515_6_8, &direction_outfitguardss_515_6_8, &direction_outfitguardss_515_6_8, &direction_outfitguardss_515_6_8, &direction_outfitguardss_515_6_8, &direction_outfitguardss_515_6_8, NULL, &direction_outfitguardss_515_6_16, &direction_outfitguardss_515_6_16, &direction_outfitguardss_515_6_16, &direction_outfitguardss_515_6_16, &direction_outfitguardss_515_6_16, &direction_outfitguardss_515_6_16, &direction_outfitguardss_515_6_16, NULL, &direction_outfitguardss_515_6_24, &direction_outfitguardss_515_6_24, &direction_outfitguardss_515_6_24, &direction_outfitguardss_515_6_24, &direction_outfitguardss_515_6_24, &direction_outfitguardss_515_6_24, &direction_outfitguardss_515_6_24, NULL, &direction_outfitguardss_515_6_0, &direction_outfitguardss_515_6_0, &direction_outfitguardss_515_6_0};
static Image* images_outfitguardss_515_7_0[2];
static Direction direction_outfitguardss_515_7_0 = {0, 10, 10, 0, -1, images_outfitguardss_515_7_0, 2};
static Image* images_outfitguardss_515_7_8[2];
static Direction direction_outfitguardss_515_7_8 = {8, 10, 10, 0, -1, images_outfitguardss_515_7_8, 2};
static Image* images_outfitguardss_515_7_16[2];
static Direction direction_outfitguardss_515_7_16 = {16, 10, 10, 0, -1, images_outfitguardss_515_7_16, 2};
static Image* images_outfitguardss_515_7_24[2];
static Direction direction_outfitguardss_515_7_24 = {24, 10, 10, 0, -1, images_outfitguardss_515_7_24, 2};
static Animation anim_outfitguardss_515_7 = {&direction_outfitguardss_515_7_0, &direction_outfitguardss_515_7_0, &direction_outfitguardss_515_7_0, &direction_outfitguardss_515_7_0, NULL, &direction_outfitguardss_515_7_8, &direction_outfitguardss_515_7_8, &direction_outfitguardss_515_7_8, &direction_outfitguardss_515_7_8, &direction_outfitguardss_515_7_8, &direction_outfitguardss_515_7_8, &direction_outfitguardss_515_7_8, NULL, &direction_outfitguardss_515_7_16, &direction_outfitguardss_515_7_16, &direction_outfitguardss_515_7_16, &direction_outfitguardss_515_7_16, &direction_outfitguardss_515_7_16, &direction_outfitguardss_515_7_16, &direction_outfitguardss_515_7_16, NULL, &direction_outfitguardss_515_7_24, &direction_outfitguardss_515_7_24, &direction_outfitguardss_515_7_24, &direction_outfitguardss_515_7_24, &direction_outfitguardss_515_7_24, &direction_outfitguardss_515_7_24, &direction_outfitguardss_515_7_24, NULL, &direction_outfitguardss_515_7_0, &direction_outfitguardss_515_7_0, &direction_outfitguardss_515_7_0};
static Image* images_outfitguardss_515_8_16[2];
static Direction direction_outfitguardss_515_8_16 = {16, 50, 50, 0, 1, images_outfitguardss_515_8_16, 2};
static Image* images_outfitguardss_515_8_24[3];
static Direction direction_outfitguardss_515_8_24 = {24, 50, 50, 0, -1, images_outfitguardss_515_8_24, 3};
static Animation anim_outfitguardss_515_8 = {&direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, NULL, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, &direction_outfitguardss_515_8_16, NULL, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24, &direction_outfitguardss_515_8_24};
static Image* images_outfitguardss_515_11_0[2];
static Direction direction_outfitguardss_515_11_0 = {0, 6, 6, 0, -1, images_outfitguardss_515_11_0, 2};
static Image* images_outfitguardss_515_11_8[2];
static Direction direction_outfitguardss_515_11_8 = {8, 6, 6, 0, -1, images_outfitguardss_515_11_8, 2};
static Image* images_outfitguardss_515_11_16[2];
static Direction direction_outfitguardss_515_11_16 = {16, 6, 6, 0, -1, images_outfitguardss_515_11_16, 2};
static Image* images_outfitguardss_515_11_24[2];
static Direction direction_outfitguardss_515_11_24 = {24, 6, 6, 0, -1, images_outfitguardss_515_11_24, 2};
static Animation anim_outfitguardss_515_11 = {&direction_outfitguardss_515_11_0, &direction_outfitguardss_515_11_0, &direction_outfitguardss_515_11_0, &direction_outfitguardss_515_11_0, NULL, &direction_outfitguardss_515_11_8, &direction_outfitguardss_515_11_8, &direction_outfitguardss_515_11_8, &direction_outfitguardss_515_11_8, &direction_outfitguardss_515_11_8, &direction_outfitguardss_515_11_8, &direction_outfitguardss_515_11_8, NULL, &direction_outfitguardss_515_11_16, &direction_outfitguardss_515_11_16, &direction_outfitguardss_515_11_16, &direction_outfitguardss_515_11_16, &direction_outfitguardss_515_11_16, &direction_outfitguardss_515_11_16, &direction_outfitguardss_515_11_16, NULL, &direction_outfitguardss_515_11_24, &direction_outfitguardss_515_11_24, &direction_outfitguardss_515_11_24, &direction_outfitguardss_515_11_24, &direction_outfitguardss_515_11_24, &direction_outfitguardss_515_11_24, &direction_outfitguardss_515_11_24, NULL, &direction_outfitguardss_515_11_0, &direction_outfitguardss_515_11_0, &direction_outfitguardss_515_11_0};
static Image* images_outfitguardss_515_12_0[2];
static Direction direction_outfitguardss_515_12_0 = {0, 10, 10, 0, -1, images_outfitguardss_515_12_0, 2};
static Image* images_outfitguardss_515_12_8[2];
static Direction direction_outfitguardss_515_12_8 = {8, 10, 10, 0, -1, images_outfitguardss_515_12_8, 2};
static Image* images_outfitguardss_515_12_16[2];
static Direction direction_outfitguardss_515_12_16 = {16, 10, 10, 0, -1, images_outfitguardss_515_12_16, 2};
static Image* images_outfitguardss_515_12_24[2];
static Direction direction_outfitguardss_515_12_24 = {24, 10, 10, 0, -1, images_outfitguardss_515_12_24, 2};
static Animation anim_outfitguardss_515_12 = {&direction_outfitguardss_515_12_0, &direction_outfitguardss_515_12_0, &direction_outfitguardss_515_12_0, &direction_outfitguardss_515_12_0, NULL, &direction_outfitguardss_515_12_8, &direction_outfitguardss_515_12_8, &direction_outfitguardss_515_12_8, &direction_outfitguardss_515_12_8, &direction_outfitguardss_515_12_8, &direction_outfitguardss_515_12_8, &direction_outfitguardss_515_12_8, NULL, &direction_outfitguardss_515_12_16, &direction_outfitguardss_515_12_16, &direction_outfitguardss_515_12_16, &direction_outfitguardss_515_12_16, &direction_outfitguardss_515_12_16, &direction_outfitguardss_515_12_16, &direction_outfitguardss_515_12_16, NULL, &direction_outfitguardss_515_12_24, &direction_outfitguardss_515_12_24, &direction_outfitguardss_515_12_24, &direction_outfitguardss_515_12_24, &direction_outfitguardss_515_12_24, &direction_outfitguardss_515_12_24, &direction_outfitguardss_515_12_24, NULL, &direction_outfitguardss_515_12_0, &direction_outfitguardss_515_12_0, &direction_outfitguardss_515_12_0};
static Image* images_outfitguardss_515_13_0[2];
static Direction direction_outfitguardss_515_13_0 = {0, 10, 10, 0, -1, images_outfitguardss_515_13_0, 2};
static Image* images_outfitguardss_515_13_8[2];
static Direction direction_outfitguardss_515_13_8 = {8, 10, 10, 0, -1, images_outfitguardss_515_13_8, 2};
static Image* images_outfitguardss_515_13_16[2];
static Direction direction_outfitguardss_515_13_16 = {16, 10, 10, 0, -1, images_outfitguardss_515_13_16, 2};
static Image* images_outfitguardss_515_13_24[2];
static Direction direction_outfitguardss_515_13_24 = {24, 10, 10, 0, -1, images_outfitguardss_515_13_24, 2};
static Animation anim_outfitguardss_515_13 = {&direction_outfitguardss_515_13_0, &direction_outfitguardss_515_13_0, &direction_outfitguardss_515_13_0, &direction_outfitguardss_515_13_0, NULL, &direction_outfitguardss_515_13_8, &direction_outfitguardss_515_13_8, &direction_outfitguardss_515_13_8, &direction_outfitguardss_515_13_8, &direction_outfitguardss_515_13_8, &direction_outfitguardss_515_13_8, &direction_outfitguardss_515_13_8, NULL, &direction_outfitguardss_515_13_16, &direction_outfitguardss_515_13_16, &direction_outfitguardss_515_13_16, &direction_outfitguardss_515_13_16, &direction_outfitguardss_515_13_16, &direction_outfitguardss_515_13_16, &direction_outfitguardss_515_13_16, NULL, &direction_outfitguardss_515_13_24, &direction_outfitguardss_515_13_24, &direction_outfitguardss_515_13_24, &direction_outfitguardss_515_13_24, &direction_outfitguardss_515_13_24, &direction_outfitguardss_515_13_24, &direction_outfitguardss_515_13_24, NULL, &direction_outfitguardss_515_13_0, &direction_outfitguardss_515_13_0, &direction_outfitguardss_515_13_0};
static Image* images_outfitguardss_515_14_0[2];
static Direction direction_outfitguardss_515_14_0 = {0, 10, 10, 0, -1, images_outfitguardss_515_14_0, 2};
static Image* images_outfitguardss_515_14_8[2];
static Direction direction_outfitguardss_515_14_8 = {8, 10, 10, 0, -1, images_outfitguardss_515_14_8, 2};
static Image* images_outfitguardss_515_14_16[2];
static Direction direction_outfitguardss_515_14_16 = {16, 10, 10, 0, -1, images_outfitguardss_515_14_16, 2};
static Image* images_outfitguardss_515_14_24[2];
static Direction direction_outfitguardss_515_14_24 = {24, 10, 10, 0, -1, images_outfitguardss_515_14_24, 2};
static Animation anim_outfitguardss_515_14 = {&direction_outfitguardss_515_14_0, &direction_outfitguardss_515_14_0, &direction_outfitguardss_515_14_0, &direction_outfitguardss_515_14_0, NULL, &direction_outfitguardss_515_14_8, &direction_outfitguardss_515_14_8, &direction_outfitguardss_515_14_8, &direction_outfitguardss_515_14_8, &direction_outfitguardss_515_14_8, &direction_outfitguardss_515_14_8, &direction_outfitguardss_515_14_8, NULL, &direction_outfitguardss_515_14_16, &direction_outfitguardss_515_14_16, &direction_outfitguardss_515_14_16, &direction_outfitguardss_515_14_16, &direction_outfitguardss_515_14_16, &direction_outfitguardss_515_14_16, &direction_outfitguardss_515_14_16, NULL, &direction_outfitguardss_515_14_24, &direction_outfitguardss_515_14_24, &direction_outfitguardss_515_14_24, &direction_outfitguardss_515_14_24, &direction_outfitguardss_515_14_24, &direction_outfitguardss_515_14_24, &direction_outfitguardss_515_14_24, NULL, &direction_outfitguardss_515_14_0, &direction_outfitguardss_515_14_0, &direction_outfitguardss_515_14_0};
static Image* images_outfitguardss_515_15_0[2];
static Direction direction_outfitguardss_515_15_0 = {0, 10, 10, 0, -1, images_outfitguardss_515_15_0, 2};
static Image* images_outfitguardss_515_15_8[2];
static Direction direction_outfitguardss_515_15_8 = {8, 10, 10, 0, -1, images_outfitguardss_515_15_8, 2};
static Image* images_outfitguardss_515_15_16[2];
static Direction direction_outfitguardss_515_15_16 = {16, 10, 10, 0, -1, images_outfitguardss_515_15_16, 2};
static Image* images_outfitguardss_515_15_24[2];
static Direction direction_outfitguardss_515_15_24 = {24, 10, 10, 0, -1, images_outfitguardss_515_15_24, 2};
static Animation anim_outfitguardss_515_15 = {&direction_outfitguardss_515_15_0, &direction_outfitguardss_515_15_0, &direction_outfitguardss_515_15_0, &direction_outfitguardss_515_15_0, NULL, &direction_outfitguardss_515_15_8, &direction_outfitguardss_515_15_8, &direction_outfitguardss_515_15_8, &direction_outfitguardss_515_15_8, &direction_outfitguardss_515_15_8, &direction_outfitguardss_515_15_8, &direction_outfitguardss_515_15_8, NULL, &direction_outfitguardss_515_15_16, &direction_outfitguardss_515_15_16, &direction_outfitguardss_515_15_16, &direction_outfitguardss_515_15_16, &direction_outfitguardss_515_15_16, &direction_outfitguardss_515_15_16, &direction_outfitguardss_515_15_16, NULL, &direction_outfitguardss_515_15_24, &direction_outfitguardss_515_15_24, &direction_outfitguardss_515_15_24, &direction_outfitguardss_515_15_24, &direction_outfitguardss_515_15_24, &direction_outfitguardss_515_15_24, &direction_outfitguardss_515_15_24, NULL, &direction_outfitguardss_515_15_0, &direction_outfitguardss_515_15_0, &direction_outfitguardss_515_15_0};
static Animation * anim_array_outfitguardss_515[16] = {&anim_outfitguardss_515_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitguardss_515_6, &anim_outfitguardss_515_7, &anim_outfitguardss_515_8, NULL, NULL, &anim_outfitguardss_515_11, &anim_outfitguardss_515_12, &anim_outfitguardss_515_13, &anim_outfitguardss_515_14, &anim_outfitguardss_515_15};
static Animations anim_outfitguardss_515 = {16, &anim_array_outfitguardss_515[0]};
static bool anim_outfitguardss_515_initialized;
class OutfitGuardSS_515 : public Active
{
public:
    OutfitGuardSS_515(int x, int y) : Active(x, y, OutfitGuardSS_515_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Guard SS", 17);
#endif
        this->animations = &anim_outfitguardss_515;
        if (!anim_outfitguardss_515_initialized) {
            anim_outfitguardss_515_initialized = true;
            images_outfitguardss_515_0_0[0] = get_internal_image(3505);
            images_outfitguardss_515_0_0[1] = get_internal_image(3507);
            images_outfitguardss_515_0_8[0] = get_internal_image(3509);
            images_outfitguardss_515_0_8[1] = get_internal_image(3510);
            images_outfitguardss_515_0_16[0] = get_internal_image(3506);
            images_outfitguardss_515_0_16[1] = get_internal_image(3508);
            images_outfitguardss_515_0_24[0] = get_internal_image(3350);
            images_outfitguardss_515_0_24[1] = get_internal_image(3352);
            images_outfitguardss_515_6_0[0] = get_internal_image(3608);
            images_outfitguardss_515_6_8[0] = get_internal_image(3611);
            images_outfitguardss_515_6_16[0] = get_internal_image(3609);
            images_outfitguardss_515_6_24[0] = get_internal_image(3610);
            images_outfitguardss_515_7_0[0] = get_internal_image(3614);
            images_outfitguardss_515_7_0[1] = get_internal_image(3612);
            images_outfitguardss_515_7_8[0] = get_internal_image(3616);
            images_outfitguardss_515_7_8[1] = get_internal_image(3617);
            images_outfitguardss_515_7_16[0] = get_internal_image(3613);
            images_outfitguardss_515_7_16[1] = get_internal_image(3615);
            images_outfitguardss_515_7_24[0] = get_internal_image(3618);
            images_outfitguardss_515_7_24[1] = get_internal_image(3619);
            images_outfitguardss_515_8_16[0] = get_internal_image(3627);
            images_outfitguardss_515_8_16[1] = get_internal_image(3632);
            images_outfitguardss_515_8_24[0] = get_internal_image(3634);
            images_outfitguardss_515_8_24[1] = get_internal_image(3634);
            images_outfitguardss_515_8_24[2] = get_internal_image(3634);
            images_outfitguardss_515_11_0[0] = get_internal_image(3635);
            images_outfitguardss_515_11_0[1] = get_internal_image(3636);
            images_outfitguardss_515_11_8[0] = get_internal_image(3641);
            images_outfitguardss_515_11_8[1] = get_internal_image(3642);
            images_outfitguardss_515_11_16[0] = get_internal_image(3637);
            images_outfitguardss_515_11_16[1] = get_internal_image(3638);
            images_outfitguardss_515_11_24[0] = get_internal_image(3639);
            images_outfitguardss_515_11_24[1] = get_internal_image(3640);
            images_outfitguardss_515_12_0[0] = get_internal_image(3645);
            images_outfitguardss_515_12_0[1] = get_internal_image(3644);
            images_outfitguardss_515_12_8[0] = get_internal_image(3647);
            images_outfitguardss_515_12_8[1] = get_internal_image(3648);
            images_outfitguardss_515_12_16[0] = get_internal_image(3643);
            images_outfitguardss_515_12_16[1] = get_internal_image(3646);
            images_outfitguardss_515_12_24[0] = get_internal_image(3651);
            images_outfitguardss_515_12_24[1] = get_internal_image(3650);
            images_outfitguardss_515_13_0[0] = get_internal_image(3649);
            images_outfitguardss_515_13_0[1] = get_internal_image(3652);
            images_outfitguardss_515_13_8[0] = get_internal_image(3655);
            images_outfitguardss_515_13_8[1] = get_internal_image(3658);
            images_outfitguardss_515_13_16[0] = get_internal_image(3653);
            images_outfitguardss_515_13_16[1] = get_internal_image(3654);
            images_outfitguardss_515_13_24[0] = get_internal_image(3657);
            images_outfitguardss_515_13_24[1] = get_internal_image(3656);
            images_outfitguardss_515_14_0[0] = get_internal_image(3659);
            images_outfitguardss_515_14_0[1] = get_internal_image(3660);
            images_outfitguardss_515_14_8[0] = get_internal_image(3663);
            images_outfitguardss_515_14_8[1] = get_internal_image(3664);
            images_outfitguardss_515_14_16[0] = get_internal_image(3661);
            images_outfitguardss_515_14_16[1] = get_internal_image(3662);
            images_outfitguardss_515_14_24[0] = get_internal_image(3665);
            images_outfitguardss_515_14_24[1] = get_internal_image(3666);
            images_outfitguardss_515_15_0[0] = get_internal_image(3667);
            images_outfitguardss_515_15_0[1] = get_internal_image(3668);
            images_outfitguardss_515_15_8[0] = get_internal_image(3671);
            images_outfitguardss_515_15_8[1] = get_internal_image(3675);
            images_outfitguardss_515_15_16[0] = get_internal_image(3669);
            images_outfitguardss_515_15_16[1] = get_internal_image(3670);
            images_outfitguardss_515_15_24[0] = get_internal_image(3673);
            images_outfitguardss_515_15_24[1] = get_internal_image(3672);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_outfitguardss_515(int x, int y)
{
    return new (Active::pool.create()) OutfitGuardSS_515(x, y);
}
static Image* images_inmatess0_516_0_0[2];
static Direction direction_inmatess0_516_0_0 = {0, 10, 10, 0, -1, images_inmatess0_516_0_0, 2};
static Image* images_inmatess0_516_0_8[2];
static Direction direction_inmatess0_516_0_8 = {8, 10, 10, 0, -1, images_inmatess0_516_0_8, 2};
static Image* images_inmatess0_516_0_16[2];
static Direction direction_inmatess0_516_0_16 = {16, 10, 10, 0, -1, images_inmatess0_516_0_16, 2};
static Image* images_inmatess0_516_0_24[2];
static Direction direction_inmatess0_516_0_24 = {24, 10, 10, 0, -1, images_inmatess0_516_0_24, 2};
static Animation anim_inmatess0_516_0 = {&direction_inmatess0_516_0_0, &direction_inmatess0_516_0_0, &direction_inmatess0_516_0_0, &direction_inmatess0_516_0_0, NULL, &direction_inmatess0_516_0_8, &direction_inmatess0_516_0_8, &direction_inmatess0_516_0_8, &direction_inmatess0_516_0_8, &direction_inmatess0_516_0_8, &direction_inmatess0_516_0_8, &direction_inmatess0_516_0_8, NULL, &direction_inmatess0_516_0_16, &direction_inmatess0_516_0_16, &direction_inmatess0_516_0_16, &direction_inmatess0_516_0_16, &direction_inmatess0_516_0_16, &direction_inmatess0_516_0_16, &direction_inmatess0_516_0_16, NULL, &direction_inmatess0_516_0_24, &direction_inmatess0_516_0_24, &direction_inmatess0_516_0_24, &direction_inmatess0_516_0_24, &direction_inmatess0_516_0_24, &direction_inmatess0_516_0_24, &direction_inmatess0_516_0_24, NULL, &direction_inmatess0_516_0_0, &direction_inmatess0_516_0_0, &direction_inmatess0_516_0_0};
static Image* images_inmatess0_516_4_0[4];
static Direction direction_inmatess0_516_4_0 = {0, 20, 20, 0, 1, images_inmatess0_516_4_0, 4};
static Image* images_inmatess0_516_4_16[4];
static Direction direction_inmatess0_516_4_16 = {16, 20, 20, 0, 1, images_inmatess0_516_4_16, 4};
static Animation anim_inmatess0_516_4 = {&direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, NULL, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, &direction_inmatess0_516_4_16, NULL, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0, &direction_inmatess0_516_4_0};
static Image* images_inmatess0_516_6_0[1];
static Direction direction_inmatess0_516_6_0 = {0, 6, 6, 0, 1, images_inmatess0_516_6_0, 1};
static Image* images_inmatess0_516_6_8[1];
static Direction direction_inmatess0_516_6_8 = {8, 6, 6, 0, 1, images_inmatess0_516_6_8, 1};
static Image* images_inmatess0_516_6_16[1];
static Direction direction_inmatess0_516_6_16 = {16, 6, 6, 0, 1, images_inmatess0_516_6_16, 1};
static Image* images_inmatess0_516_6_24[1];
static Direction direction_inmatess0_516_6_24 = {24, 6, 6, 0, 1, images_inmatess0_516_6_24, 1};
static Animation anim_inmatess0_516_6 = {&direction_inmatess0_516_6_0, &direction_inmatess0_516_6_0, &direction_inmatess0_516_6_0, &direction_inmatess0_516_6_0, NULL, &direction_inmatess0_516_6_8, &direction_inmatess0_516_6_8, &direction_inmatess0_516_6_8, &direction_inmatess0_516_6_8, &direction_inmatess0_516_6_8, &direction_inmatess0_516_6_8, &direction_inmatess0_516_6_8, NULL, &direction_inmatess0_516_6_16, &direction_inmatess0_516_6_16, &direction_inmatess0_516_6_16, &direction_inmatess0_516_6_16, &direction_inmatess0_516_6_16, &direction_inmatess0_516_6_16, &direction_inmatess0_516_6_16, NULL, &direction_inmatess0_516_6_24, &direction_inmatess0_516_6_24, &direction_inmatess0_516_6_24, &direction_inmatess0_516_6_24, &direction_inmatess0_516_6_24, &direction_inmatess0_516_6_24, &direction_inmatess0_516_6_24, NULL, &direction_inmatess0_516_6_0, &direction_inmatess0_516_6_0, &direction_inmatess0_516_6_0};
static Image* images_inmatess0_516_7_0[2];
static Direction direction_inmatess0_516_7_0 = {0, 10, 10, 0, -1, images_inmatess0_516_7_0, 2};
static Image* images_inmatess0_516_7_8[2];
static Direction direction_inmatess0_516_7_8 = {8, 10, 10, 0, -1, images_inmatess0_516_7_8, 2};
static Image* images_inmatess0_516_7_16[2];
static Direction direction_inmatess0_516_7_16 = {16, 10, 10, 0, -1, images_inmatess0_516_7_16, 2};
static Image* images_inmatess0_516_7_24[2];
static Direction direction_inmatess0_516_7_24 = {24, 10, 10, 0, -1, images_inmatess0_516_7_24, 2};
static Animation anim_inmatess0_516_7 = {&direction_inmatess0_516_7_0, &direction_inmatess0_516_7_0, &direction_inmatess0_516_7_0, &direction_inmatess0_516_7_0, NULL, &direction_inmatess0_516_7_8, &direction_inmatess0_516_7_8, &direction_inmatess0_516_7_8, &direction_inmatess0_516_7_8, &direction_inmatess0_516_7_8, &direction_inmatess0_516_7_8, &direction_inmatess0_516_7_8, NULL, &direction_inmatess0_516_7_16, &direction_inmatess0_516_7_16, &direction_inmatess0_516_7_16, &direction_inmatess0_516_7_16, &direction_inmatess0_516_7_16, &direction_inmatess0_516_7_16, &direction_inmatess0_516_7_16, NULL, &direction_inmatess0_516_7_24, &direction_inmatess0_516_7_24, &direction_inmatess0_516_7_24, &direction_inmatess0_516_7_24, &direction_inmatess0_516_7_24, &direction_inmatess0_516_7_24, &direction_inmatess0_516_7_24, NULL, &direction_inmatess0_516_7_0, &direction_inmatess0_516_7_0, &direction_inmatess0_516_7_0};
static Image* images_inmatess0_516_8_0[1];
static Direction direction_inmatess0_516_8_0 = {0, 50, 50, 0, -1, images_inmatess0_516_8_0, 1};
static Image* images_inmatess0_516_8_16[2];
static Direction direction_inmatess0_516_8_16 = {16, 6, 6, 0, -1, images_inmatess0_516_8_16, 2};
static Image* images_inmatess0_516_8_24[1];
static Direction direction_inmatess0_516_8_24 = {24, 50, 50, 0, -1, images_inmatess0_516_8_24, 1};
static Animation anim_inmatess0_516_8 = {&direction_inmatess0_516_8_0, &direction_inmatess0_516_8_0, &direction_inmatess0_516_8_0, &direction_inmatess0_516_8_0, &direction_inmatess0_516_8_0, &direction_inmatess0_516_8_0, &direction_inmatess0_516_8_0, &direction_inmatess0_516_8_0, NULL, &direction_inmatess0_516_8_16, &direction_inmatess0_516_8_16, &direction_inmatess0_516_8_16, &direction_inmatess0_516_8_16, &direction_inmatess0_516_8_16, &direction_inmatess0_516_8_16, &direction_inmatess0_516_8_16, &direction_inmatess0_516_8_16, &direction_inmatess0_516_8_16, &direction_inmatess0_516_8_16, &direction_inmatess0_516_8_16, NULL, &direction_inmatess0_516_8_24, &direction_inmatess0_516_8_24, &direction_inmatess0_516_8_24, &direction_inmatess0_516_8_24, &direction_inmatess0_516_8_24, &direction_inmatess0_516_8_24, &direction_inmatess0_516_8_24, NULL, &direction_inmatess0_516_8_0, &direction_inmatess0_516_8_0, &direction_inmatess0_516_8_0};
static Image* images_inmatess0_516_10_0[5];
static Direction direction_inmatess0_516_10_0 = {0, 10, 10, 0, -1, images_inmatess0_516_10_0, 5};
static Animation anim_inmatess0_516_10 = {&direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, NULL, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0, &direction_inmatess0_516_10_0};
static Image* images_inmatess0_516_11_0[2];
static Direction direction_inmatess0_516_11_0 = {0, 10, 10, 0, -1, images_inmatess0_516_11_0, 2};
static Image* images_inmatess0_516_11_8[2];
static Direction direction_inmatess0_516_11_8 = {8, 10, 10, 0, -1, images_inmatess0_516_11_8, 2};
static Image* images_inmatess0_516_11_16[2];
static Direction direction_inmatess0_516_11_16 = {16, 10, 10, 0, -1, images_inmatess0_516_11_16, 2};
static Image* images_inmatess0_516_11_24[2];
static Direction direction_inmatess0_516_11_24 = {24, 10, 10, 0, -1, images_inmatess0_516_11_24, 2};
static Animation anim_inmatess0_516_11 = {&direction_inmatess0_516_11_0, &direction_inmatess0_516_11_0, &direction_inmatess0_516_11_0, &direction_inmatess0_516_11_0, NULL, &direction_inmatess0_516_11_8, &direction_inmatess0_516_11_8, &direction_inmatess0_516_11_8, &direction_inmatess0_516_11_8, &direction_inmatess0_516_11_8, &direction_inmatess0_516_11_8, &direction_inmatess0_516_11_8, NULL, &direction_inmatess0_516_11_16, &direction_inmatess0_516_11_16, &direction_inmatess0_516_11_16, &direction_inmatess0_516_11_16, &direction_inmatess0_516_11_16, &direction_inmatess0_516_11_16, &direction_inmatess0_516_11_16, NULL, &direction_inmatess0_516_11_24, &direction_inmatess0_516_11_24, &direction_inmatess0_516_11_24, &direction_inmatess0_516_11_24, &direction_inmatess0_516_11_24, &direction_inmatess0_516_11_24, &direction_inmatess0_516_11_24, NULL, &direction_inmatess0_516_11_0, &direction_inmatess0_516_11_0, &direction_inmatess0_516_11_0};
static Animation * anim_array_inmatess0_516[12] = {&anim_inmatess0_516_0, NULL, NULL, NULL, &anim_inmatess0_516_4, NULL, &anim_inmatess0_516_6, &anim_inmatess0_516_7, &anim_inmatess0_516_8, NULL, &anim_inmatess0_516_10, &anim_inmatess0_516_11};
static Animations anim_inmatess0_516 = {12, &anim_array_inmatess0_516[0]};
static bool anim_inmatess0_516_initialized;
class InmateSS0_516 : public Active
{
public:
    InmateSS0_516(int x, int y) : Active(x, y, InmateSS0_516_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 0", 11);
#endif
        this->animations = &anim_inmatess0_516;
        if (!anim_inmatess0_516_initialized) {
            anim_inmatess0_516_initialized = true;
            images_inmatess0_516_0_0[0] = get_internal_image(3953);
            images_inmatess0_516_0_0[1] = get_internal_image(3393);
            images_inmatess0_516_0_8[0] = get_internal_image(3398);
            images_inmatess0_516_0_8[1] = get_internal_image(3399);
            images_inmatess0_516_0_16[0] = get_internal_image(3933);
            images_inmatess0_516_0_16[1] = get_internal_image(3395);
            images_inmatess0_516_0_24[0] = get_internal_image(3396);
            images_inmatess0_516_0_24[1] = get_internal_image(3397);
            images_inmatess0_516_4_0[0] = get_internal_image(369);
            images_inmatess0_516_4_0[1] = get_internal_image(373);
            images_inmatess0_516_4_0[2] = get_internal_image(369);
            images_inmatess0_516_4_0[3] = get_internal_image(373);
            images_inmatess0_516_4_16[0] = get_internal_image(371);
            images_inmatess0_516_4_16[1] = get_internal_image(763);
            images_inmatess0_516_4_16[2] = get_internal_image(371);
            images_inmatess0_516_4_16[3] = get_internal_image(763);
            images_inmatess0_516_6_0[0] = get_internal_image(3403);
            images_inmatess0_516_6_8[0] = get_internal_image(3402);
            images_inmatess0_516_6_16[0] = get_internal_image(3400);
            images_inmatess0_516_6_24[0] = get_internal_image(3401);
            images_inmatess0_516_7_0[0] = get_internal_image(3406);
            images_inmatess0_516_7_0[1] = get_internal_image(3405);
            images_inmatess0_516_7_8[0] = get_internal_image(3410);
            images_inmatess0_516_7_8[1] = get_internal_image(3411);
            images_inmatess0_516_7_16[0] = get_internal_image(3404);
            images_inmatess0_516_7_16[1] = get_internal_image(3407);
            images_inmatess0_516_7_24[0] = get_internal_image(3408);
            images_inmatess0_516_7_24[1] = get_internal_image(3409);
            images_inmatess0_516_8_0[0] = get_internal_image(2679);
            images_inmatess0_516_8_16[0] = get_internal_image(3620);
            images_inmatess0_516_8_16[1] = get_internal_image(3630);
            images_inmatess0_516_8_24[0] = get_internal_image(3415);
            images_inmatess0_516_10_0[0] = get_internal_image(3685);
            images_inmatess0_516_10_0[1] = get_internal_image(3686);
            images_inmatess0_516_10_0[2] = get_internal_image(3687);
            images_inmatess0_516_10_0[3] = get_internal_image(3263);
            images_inmatess0_516_10_0[4] = get_internal_image(3686);
            images_inmatess0_516_11_0[0] = get_internal_image(3522);
            images_inmatess0_516_11_0[1] = get_internal_image(3521);
            images_inmatess0_516_11_8[0] = get_internal_image(3526);
            images_inmatess0_516_11_8[1] = get_internal_image(3527);
            images_inmatess0_516_11_16[0] = get_internal_image(3520);
            images_inmatess0_516_11_16[1] = get_internal_image(3523);
            images_inmatess0_516_11_24[0] = get_internal_image(3524);
            images_inmatess0_516_11_24[1] = get_internal_image(3525);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(7, 15);
    }
};
FrameObject * create_inmatess0_516(int x, int y)
{
    return new (Active::pool.create()) InmateSS0_516(x, y);
}
static Image* images_invisiblock_517_0_0[1];
static Direction direction_invisiblock_517_0_0 = {0, 50, 50, 0, 1, images_invisiblock_517_0_0, 1};
static Animation anim_invisiblock_517_0 = {&direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, NULL, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0, &direction_invisiblock_517_0_0};
static Image* images_invisiblock_517_5_0[1];
static Direction direction_invisiblock_517_5_0 = {0, 50, 50, 0, -1, images_invisiblock_517_5_0, 1};
static Animation anim_invisiblock_517_5 = {&direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, NULL, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0, &direction_invisiblock_517_5_0};
static Animation * anim_array_invisiblock_517[6] = {&anim_invisiblock_517_0, NULL, NULL, NULL, NULL, &anim_invisiblock_517_5};
static Animations anim_invisiblock_517 = {6, &anim_array_invisiblock_517[0]};
static bool anim_invisiblock_517_initialized;
class InvisiBlock_517 : public Active
{
public:
    InvisiBlock_517(int x, int y) : Active(x, y, InvisiBlock_517_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("InvisiBlock", 11);
#endif
        this->animations = &anim_invisiblock_517;
        if (!anim_invisiblock_517_initialized) {
            anim_invisiblock_517_initialized = true;
            images_invisiblock_517_0_0[0] = get_internal_image(60);
            images_invisiblock_517_5_0[0] = get_internal_image(3924);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_invisiblock_517(int x, int y)
{
    return new (Active::pool.create()) InvisiBlock_517(x, y);
}
static Image* images_doornokey_518_0_0[1];
static Direction direction_doornokey_518_0_0 = {0, 50, 50, 0, -1, images_doornokey_518_0_0, 1};
static Animation anim_doornokey_518_0 = {&direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, NULL, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0, &direction_doornokey_518_0_0};
static Animation * anim_array_doornokey_518[1] = {&anim_doornokey_518_0};
static Animations anim_doornokey_518 = {1, &anim_array_doornokey_518[0]};
static bool anim_doornokey_518_initialized;
class DoorNoKey_518 : public Active
{
public:
    DoorNoKey_518(int x, int y) : Active(x, y, DoorNoKey_518_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - noKey", 12);
#endif
        this->animations = &anim_doornokey_518;
        if (!anim_doornokey_518_initialized) {
            anim_doornokey_518_initialized = true;
            images_doornokey_518_0_0[0] = get_internal_image(3925);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_main_37);
    }
};
FrameObject * create_doornokey_518(int x, int y)
{
    return new (Active::pool.create()) DoorNoKey_518(x, y);
}
static Image* images_cclsleigh_519_0_0[1];
static Direction direction_cclsleigh_519_0_0 = {0, 50, 50, 0, -1, images_cclsleigh_519_0_0, 1};
static Image* images_cclsleigh_519_0_8[1];
static Direction direction_cclsleigh_519_0_8 = {8, 50, 50, 0, -1, images_cclsleigh_519_0_8, 1};
static Image* images_cclsleigh_519_0_16[1];
static Direction direction_cclsleigh_519_0_16 = {16, 50, 50, 0, -1, images_cclsleigh_519_0_16, 1};
static Animation anim_cclsleigh_519_0 = {&direction_cclsleigh_519_0_0, &direction_cclsleigh_519_0_0, &direction_cclsleigh_519_0_0, &direction_cclsleigh_519_0_0, NULL, &direction_cclsleigh_519_0_8, &direction_cclsleigh_519_0_8, &direction_cclsleigh_519_0_8, &direction_cclsleigh_519_0_8, &direction_cclsleigh_519_0_8, &direction_cclsleigh_519_0_8, &direction_cclsleigh_519_0_8, NULL, &direction_cclsleigh_519_0_16, &direction_cclsleigh_519_0_16, &direction_cclsleigh_519_0_16, &direction_cclsleigh_519_0_16, &direction_cclsleigh_519_0_16, &direction_cclsleigh_519_0_16, &direction_cclsleigh_519_0_16, &direction_cclsleigh_519_0_16, &direction_cclsleigh_519_0_16, &direction_cclsleigh_519_0_16, &direction_cclsleigh_519_0_16, NULL, &direction_cclsleigh_519_0_0, &direction_cclsleigh_519_0_0, &direction_cclsleigh_519_0_0, &direction_cclsleigh_519_0_0, &direction_cclsleigh_519_0_0, &direction_cclsleigh_519_0_0, &direction_cclsleigh_519_0_0};
static Image* images_cclsleigh_519_5_24[1];
static Direction direction_cclsleigh_519_5_24 = {24, 50, 50, 0, -1, images_cclsleigh_519_5_24, 1};
static Animation anim_cclsleigh_519_5 = {&direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, NULL, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24, &direction_cclsleigh_519_5_24};
static Animation * anim_array_cclsleigh_519[6] = {&anim_cclsleigh_519_0, NULL, NULL, NULL, NULL, &anim_cclsleigh_519_5};
static Animations anim_cclsleigh_519 = {6, &anim_array_cclsleigh_519[0]};
static bool anim_cclsleigh_519_initialized;
class CCLSleigh_519 : public Active
{
public:
    CCLSleigh_519(int x, int y) : Active(x, y, CCLSleigh_519_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("CCL_sleigh", 10);
#endif
        this->animations = &anim_cclsleigh_519;
        if (!anim_cclsleigh_519_initialized) {
            anim_cclsleigh_519_initialized = true;
            images_cclsleigh_519_0_0[0] = get_internal_image(3952);
            images_cclsleigh_519_0_8[0] = get_internal_image(3956);
            images_cclsleigh_519_0_16[0] = get_internal_image(3957);
            images_cclsleigh_519_5_24[0] = get_internal_image(3959);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
        alterables->values.set(0, 1);
    }
};
FrameObject * create_cclsleigh_519(int x, int y)
{
    return new (Active::pool.create()) CCLSleigh_519(x, y);
}
class DebugList_520 : public ListObject
{
public:
    DebugList_520(int x, int y) : ListObject(x, y, DebugList_520_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DebugList", 9);
#endif
        flags &= ~SCROLL;
        add_line(std::string("Shovel_5", 8));
        add_line(std::string("Pickaxe_39", 10));
        add_line(std::string("Cutters_61", 10));
        add_line(std::string("Poster_99", 9));
        add_line(std::string("Red Key_1", 9));
        add_line(std::string("Orange Key_7", 12));
        add_line(std::string("Timber Brace_72", 15));
        add_line(std::string("Thruster_278", 12));
        add_line(std::string("Compass_276", 11));
        add_line(std::string("Guard Outfit_3", 14));
        add_line(std::string("Nav Lighting_270", 16));
        add_line(std::string("Cooked Carrots_275", 18));
        add_line(std::string("Molten Choc_105", 15));
        set_visible(false);
        list_flags |= SORT_LIST;
        index_offset = current_line = 0;
    }
};
FrameObject * create_debuglist_520(int x, int y)
{
    return new (ListObject::pool.create()) DebugList_520(x, y);
}
class ScStats_521 : public Text
{
public:
    ScStats_521(int x, int y) : Text(x, y, ScStats_521_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Sc_Stats", 8);
#endif
        flags &= ~SCROLL;
        width = 157;
        height = 96;
        blend_color = Color(255, 255, 255);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("DAYS TAKEN:\r\nAVG GUARD HEAT:\r\nPLAYTIME:\r\n\r\nSCORE:", 49));
        blend_color.a = 255;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_scstats_521(int x, int y)
{
    return new (Text::pool.create()) ScStats_521(x, y);
}
class CLICKTOCONT_522 : public Text
{
public:
    CLICKTOCONT_522(int x, int y) : Text(x, y, CLICKTOCONT_522_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("CLICK TO CONT", 13);
#endif
        flags &= ~SCROLL;
        width = 240;
        height = 12;
        blend_color = Color(102, 102, 102);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("CLICK TO CONTINUE", 17));
        blend_color.a = 255;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_clicktocont_522(int x, int y)
{
    return new (Text::pool.create()) CLICKTOCONT_522(x, y);
}
class Totals_523 : public Text
{
public:
    Totals_523(int x, int y) : Text(x, y, Totals_523_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Totals", 6);
#endif
        flags &= ~SCROLL;
        width = 110;
        height = 108;
        blend_color = Color(255, 255, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("12\r\n450%\r\n10 mins\r\n\r\n45665", 26));
        blend_color.a = 255;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_totals_523(int x, int y)
{
    return new (Text::pool.create()) Totals_523(x, y);
}
