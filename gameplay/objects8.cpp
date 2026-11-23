#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_dummies_746_0_0[1];
static Direction direction_dummies_746_0_0 = {0, 50, 50, 0, -1, images_dummies_746_0_0, 1};
static Animation anim_dummies_746_0 = {&direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, NULL, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0, &direction_dummies_746_0_0};
static Animation * anim_array_dummies_746[1] = {&anim_dummies_746_0};
static Animations anim_dummies_746 = {1, &anim_array_dummies_746[0]};
static bool anim_dummies_746_initialized;
class Dummies_746 : public Active
{
public:
    Dummies_746(int x, int y) : Active(x, y, Dummies_746_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Dummies", 7);
#endif
        this->animations = &anim_dummies_746;
        if (!anim_dummies_746_initialized) {
            anim_dummies_746_initialized = true;
            images_dummies_746_0_0[0] = get_internal_image(656);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_dummies_746(int x, int y)
{
    return new (Active::pool.create()) Dummies_746(x, y);
}
static Image* images_outfitpow_747_0_0[2];
static Direction direction_outfitpow_747_0_0 = {0, 6, 6, 0, -1, images_outfitpow_747_0_0, 2};
static Image* images_outfitpow_747_0_8[2];
static Direction direction_outfitpow_747_0_8 = {8, 6, 6, 0, -1, images_outfitpow_747_0_8, 2};
static Image* images_outfitpow_747_0_16[2];
static Direction direction_outfitpow_747_0_16 = {16, 6, 6, 0, -1, images_outfitpow_747_0_16, 2};
static Image* images_outfitpow_747_0_24[2];
static Direction direction_outfitpow_747_0_24 = {24, 6, 6, 0, -1, images_outfitpow_747_0_24, 2};
static Animation anim_outfitpow_747_0 = {&direction_outfitpow_747_0_0, &direction_outfitpow_747_0_0, &direction_outfitpow_747_0_0, &direction_outfitpow_747_0_0, NULL, &direction_outfitpow_747_0_8, &direction_outfitpow_747_0_8, &direction_outfitpow_747_0_8, &direction_outfitpow_747_0_8, &direction_outfitpow_747_0_8, &direction_outfitpow_747_0_8, &direction_outfitpow_747_0_8, NULL, &direction_outfitpow_747_0_16, &direction_outfitpow_747_0_16, &direction_outfitpow_747_0_16, &direction_outfitpow_747_0_16, &direction_outfitpow_747_0_16, &direction_outfitpow_747_0_16, &direction_outfitpow_747_0_16, NULL, &direction_outfitpow_747_0_24, &direction_outfitpow_747_0_24, &direction_outfitpow_747_0_24, &direction_outfitpow_747_0_24, &direction_outfitpow_747_0_24, &direction_outfitpow_747_0_24, &direction_outfitpow_747_0_24, NULL, &direction_outfitpow_747_0_0, &direction_outfitpow_747_0_0, &direction_outfitpow_747_0_0};
static Image* images_outfitpow_747_6_0[1];
static Direction direction_outfitpow_747_6_0 = {0, 6, 6, 0, 1, images_outfitpow_747_6_0, 1};
static Image* images_outfitpow_747_6_8[1];
static Direction direction_outfitpow_747_6_8 = {8, 6, 6, 0, 1, images_outfitpow_747_6_8, 1};
static Image* images_outfitpow_747_6_16[1];
static Direction direction_outfitpow_747_6_16 = {16, 6, 6, 0, 1, images_outfitpow_747_6_16, 1};
static Image* images_outfitpow_747_6_24[1];
static Direction direction_outfitpow_747_6_24 = {24, 6, 6, 0, 1, images_outfitpow_747_6_24, 1};
static Animation anim_outfitpow_747_6 = {&direction_outfitpow_747_6_0, &direction_outfitpow_747_6_0, &direction_outfitpow_747_6_0, &direction_outfitpow_747_6_0, NULL, &direction_outfitpow_747_6_8, &direction_outfitpow_747_6_8, &direction_outfitpow_747_6_8, &direction_outfitpow_747_6_8, &direction_outfitpow_747_6_8, &direction_outfitpow_747_6_8, &direction_outfitpow_747_6_8, NULL, &direction_outfitpow_747_6_16, &direction_outfitpow_747_6_16, &direction_outfitpow_747_6_16, &direction_outfitpow_747_6_16, &direction_outfitpow_747_6_16, &direction_outfitpow_747_6_16, &direction_outfitpow_747_6_16, NULL, &direction_outfitpow_747_6_24, &direction_outfitpow_747_6_24, &direction_outfitpow_747_6_24, &direction_outfitpow_747_6_24, &direction_outfitpow_747_6_24, &direction_outfitpow_747_6_24, &direction_outfitpow_747_6_24, NULL, &direction_outfitpow_747_6_0, &direction_outfitpow_747_6_0, &direction_outfitpow_747_6_0};
static Image* images_outfitpow_747_7_0[2];
static Direction direction_outfitpow_747_7_0 = {0, 6, 6, 0, -1, images_outfitpow_747_7_0, 2};
static Image* images_outfitpow_747_7_8[2];
static Direction direction_outfitpow_747_7_8 = {8, 6, 6, 0, -1, images_outfitpow_747_7_8, 2};
static Image* images_outfitpow_747_7_16[2];
static Direction direction_outfitpow_747_7_16 = {16, 6, 6, 0, -1, images_outfitpow_747_7_16, 2};
static Image* images_outfitpow_747_7_24[2];
static Direction direction_outfitpow_747_7_24 = {24, 6, 6, 0, -1, images_outfitpow_747_7_24, 2};
static Animation anim_outfitpow_747_7 = {&direction_outfitpow_747_7_0, &direction_outfitpow_747_7_0, &direction_outfitpow_747_7_0, &direction_outfitpow_747_7_0, NULL, &direction_outfitpow_747_7_8, &direction_outfitpow_747_7_8, &direction_outfitpow_747_7_8, &direction_outfitpow_747_7_8, &direction_outfitpow_747_7_8, &direction_outfitpow_747_7_8, &direction_outfitpow_747_7_8, NULL, &direction_outfitpow_747_7_16, &direction_outfitpow_747_7_16, &direction_outfitpow_747_7_16, &direction_outfitpow_747_7_16, &direction_outfitpow_747_7_16, &direction_outfitpow_747_7_16, &direction_outfitpow_747_7_16, NULL, &direction_outfitpow_747_7_24, &direction_outfitpow_747_7_24, &direction_outfitpow_747_7_24, &direction_outfitpow_747_7_24, &direction_outfitpow_747_7_24, &direction_outfitpow_747_7_24, &direction_outfitpow_747_7_24, NULL, &direction_outfitpow_747_7_0, &direction_outfitpow_747_7_0, &direction_outfitpow_747_7_0};
static Image* images_outfitpow_747_8_0[2];
static Direction direction_outfitpow_747_8_0 = {0, 10, 10, 0, -1, images_outfitpow_747_8_0, 2};
static Image* images_outfitpow_747_8_16[2];
static Direction direction_outfitpow_747_8_16 = {16, 5, 5, 0, -1, images_outfitpow_747_8_16, 2};
static Image* images_outfitpow_747_8_24[3];
static Direction direction_outfitpow_747_8_24 = {24, 50, 50, 0, -1, images_outfitpow_747_8_24, 3};
static Animation anim_outfitpow_747_8 = {&direction_outfitpow_747_8_0, &direction_outfitpow_747_8_0, &direction_outfitpow_747_8_0, &direction_outfitpow_747_8_0, &direction_outfitpow_747_8_0, &direction_outfitpow_747_8_0, &direction_outfitpow_747_8_0, &direction_outfitpow_747_8_0, NULL, &direction_outfitpow_747_8_16, &direction_outfitpow_747_8_16, &direction_outfitpow_747_8_16, &direction_outfitpow_747_8_16, &direction_outfitpow_747_8_16, &direction_outfitpow_747_8_16, &direction_outfitpow_747_8_16, &direction_outfitpow_747_8_16, &direction_outfitpow_747_8_16, &direction_outfitpow_747_8_16, &direction_outfitpow_747_8_16, NULL, &direction_outfitpow_747_8_24, &direction_outfitpow_747_8_24, &direction_outfitpow_747_8_24, &direction_outfitpow_747_8_24, &direction_outfitpow_747_8_24, &direction_outfitpow_747_8_24, &direction_outfitpow_747_8_24, NULL, &direction_outfitpow_747_8_0, &direction_outfitpow_747_8_0, &direction_outfitpow_747_8_0};
static Image* images_outfitpow_747_9_0[2];
static Direction direction_outfitpow_747_9_0 = {0, 50, 50, 0, -1, images_outfitpow_747_9_0, 2};
static Animation anim_outfitpow_747_9 = {&direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, NULL, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0, &direction_outfitpow_747_9_0};
static Image* images_outfitpow_747_10_0[5];
static Direction direction_outfitpow_747_10_0 = {0, 10, 10, 0, -1, images_outfitpow_747_10_0, 5};
static Animation anim_outfitpow_747_10 = {&direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, NULL, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0, &direction_outfitpow_747_10_0};
static Image* images_outfitpow_747_11_0[2];
static Direction direction_outfitpow_747_11_0 = {0, 6, 6, 0, -1, images_outfitpow_747_11_0, 2};
static Image* images_outfitpow_747_11_8[2];
static Direction direction_outfitpow_747_11_8 = {8, 6, 6, 0, -1, images_outfitpow_747_11_8, 2};
static Image* images_outfitpow_747_11_16[2];
static Direction direction_outfitpow_747_11_16 = {16, 6, 6, 0, -1, images_outfitpow_747_11_16, 2};
static Image* images_outfitpow_747_11_24[2];
static Direction direction_outfitpow_747_11_24 = {24, 6, 6, 0, -1, images_outfitpow_747_11_24, 2};
static Animation anim_outfitpow_747_11 = {&direction_outfitpow_747_11_0, &direction_outfitpow_747_11_0, &direction_outfitpow_747_11_0, &direction_outfitpow_747_11_0, NULL, &direction_outfitpow_747_11_8, &direction_outfitpow_747_11_8, &direction_outfitpow_747_11_8, &direction_outfitpow_747_11_8, &direction_outfitpow_747_11_8, &direction_outfitpow_747_11_8, &direction_outfitpow_747_11_8, NULL, &direction_outfitpow_747_11_16, &direction_outfitpow_747_11_16, &direction_outfitpow_747_11_16, &direction_outfitpow_747_11_16, &direction_outfitpow_747_11_16, &direction_outfitpow_747_11_16, &direction_outfitpow_747_11_16, NULL, &direction_outfitpow_747_11_24, &direction_outfitpow_747_11_24, &direction_outfitpow_747_11_24, &direction_outfitpow_747_11_24, &direction_outfitpow_747_11_24, &direction_outfitpow_747_11_24, &direction_outfitpow_747_11_24, NULL, &direction_outfitpow_747_11_0, &direction_outfitpow_747_11_0, &direction_outfitpow_747_11_0};
static Image* images_outfitpow_747_12_0[2];
static Direction direction_outfitpow_747_12_0 = {0, 50, 50, 0, -1, images_outfitpow_747_12_0, 2};
static Image* images_outfitpow_747_12_8[2];
static Direction direction_outfitpow_747_12_8 = {8, 10, 10, 0, -1, images_outfitpow_747_12_8, 2};
static Image* images_outfitpow_747_12_16[2];
static Direction direction_outfitpow_747_12_16 = {16, 50, 50, 0, -1, images_outfitpow_747_12_16, 2};
static Image* images_outfitpow_747_12_24[2];
static Direction direction_outfitpow_747_12_24 = {24, 10, 10, 0, -1, images_outfitpow_747_12_24, 2};
static Animation anim_outfitpow_747_12 = {&direction_outfitpow_747_12_0, &direction_outfitpow_747_12_0, &direction_outfitpow_747_12_0, &direction_outfitpow_747_12_0, NULL, &direction_outfitpow_747_12_8, &direction_outfitpow_747_12_8, &direction_outfitpow_747_12_8, &direction_outfitpow_747_12_8, &direction_outfitpow_747_12_8, &direction_outfitpow_747_12_8, &direction_outfitpow_747_12_8, NULL, &direction_outfitpow_747_12_16, &direction_outfitpow_747_12_16, &direction_outfitpow_747_12_16, &direction_outfitpow_747_12_16, &direction_outfitpow_747_12_16, &direction_outfitpow_747_12_16, &direction_outfitpow_747_12_16, NULL, &direction_outfitpow_747_12_24, &direction_outfitpow_747_12_24, &direction_outfitpow_747_12_24, &direction_outfitpow_747_12_24, &direction_outfitpow_747_12_24, &direction_outfitpow_747_12_24, &direction_outfitpow_747_12_24, NULL, &direction_outfitpow_747_12_0, &direction_outfitpow_747_12_0, &direction_outfitpow_747_12_0};
static Image* images_outfitpow_747_13_0[2];
static Direction direction_outfitpow_747_13_0 = {0, 10, 10, 0, -1, images_outfitpow_747_13_0, 2};
static Image* images_outfitpow_747_13_8[2];
static Direction direction_outfitpow_747_13_8 = {8, 10, 10, 0, -1, images_outfitpow_747_13_8, 2};
static Image* images_outfitpow_747_13_16[2];
static Direction direction_outfitpow_747_13_16 = {16, 10, 10, 0, -1, images_outfitpow_747_13_16, 2};
static Image* images_outfitpow_747_13_24[2];
static Direction direction_outfitpow_747_13_24 = {24, 10, 10, 0, -1, images_outfitpow_747_13_24, 2};
static Animation anim_outfitpow_747_13 = {&direction_outfitpow_747_13_0, &direction_outfitpow_747_13_0, &direction_outfitpow_747_13_0, &direction_outfitpow_747_13_0, NULL, &direction_outfitpow_747_13_8, &direction_outfitpow_747_13_8, &direction_outfitpow_747_13_8, &direction_outfitpow_747_13_8, &direction_outfitpow_747_13_8, &direction_outfitpow_747_13_8, &direction_outfitpow_747_13_8, NULL, &direction_outfitpow_747_13_16, &direction_outfitpow_747_13_16, &direction_outfitpow_747_13_16, &direction_outfitpow_747_13_16, &direction_outfitpow_747_13_16, &direction_outfitpow_747_13_16, &direction_outfitpow_747_13_16, NULL, &direction_outfitpow_747_13_24, &direction_outfitpow_747_13_24, &direction_outfitpow_747_13_24, &direction_outfitpow_747_13_24, &direction_outfitpow_747_13_24, &direction_outfitpow_747_13_24, &direction_outfitpow_747_13_24, NULL, &direction_outfitpow_747_13_0, &direction_outfitpow_747_13_0, &direction_outfitpow_747_13_0};
static Image* images_outfitpow_747_14_0[2];
static Direction direction_outfitpow_747_14_0 = {0, 10, 10, 0, -1, images_outfitpow_747_14_0, 2};
static Image* images_outfitpow_747_14_8[2];
static Direction direction_outfitpow_747_14_8 = {8, 10, 10, 0, -1, images_outfitpow_747_14_8, 2};
static Image* images_outfitpow_747_14_16[2];
static Direction direction_outfitpow_747_14_16 = {16, 10, 10, 0, -1, images_outfitpow_747_14_16, 2};
static Image* images_outfitpow_747_14_24[2];
static Direction direction_outfitpow_747_14_24 = {24, 10, 10, 0, -1, images_outfitpow_747_14_24, 2};
static Animation anim_outfitpow_747_14 = {&direction_outfitpow_747_14_0, &direction_outfitpow_747_14_0, &direction_outfitpow_747_14_0, &direction_outfitpow_747_14_0, NULL, &direction_outfitpow_747_14_8, &direction_outfitpow_747_14_8, &direction_outfitpow_747_14_8, &direction_outfitpow_747_14_8, &direction_outfitpow_747_14_8, &direction_outfitpow_747_14_8, &direction_outfitpow_747_14_8, NULL, &direction_outfitpow_747_14_16, &direction_outfitpow_747_14_16, &direction_outfitpow_747_14_16, &direction_outfitpow_747_14_16, &direction_outfitpow_747_14_16, &direction_outfitpow_747_14_16, &direction_outfitpow_747_14_16, NULL, &direction_outfitpow_747_14_24, &direction_outfitpow_747_14_24, &direction_outfitpow_747_14_24, &direction_outfitpow_747_14_24, &direction_outfitpow_747_14_24, &direction_outfitpow_747_14_24, &direction_outfitpow_747_14_24, NULL, &direction_outfitpow_747_14_0, &direction_outfitpow_747_14_0, &direction_outfitpow_747_14_0};
static Image* images_outfitpow_747_15_0[2];
static Direction direction_outfitpow_747_15_0 = {0, 10, 10, 0, -1, images_outfitpow_747_15_0, 2};
static Image* images_outfitpow_747_15_8[2];
static Direction direction_outfitpow_747_15_8 = {8, 10, 10, 0, -1, images_outfitpow_747_15_8, 2};
static Image* images_outfitpow_747_15_16[2];
static Direction direction_outfitpow_747_15_16 = {16, 10, 10, 0, -1, images_outfitpow_747_15_16, 2};
static Image* images_outfitpow_747_15_24[2];
static Direction direction_outfitpow_747_15_24 = {24, 10, 10, 0, -1, images_outfitpow_747_15_24, 2};
static Animation anim_outfitpow_747_15 = {&direction_outfitpow_747_15_0, &direction_outfitpow_747_15_0, &direction_outfitpow_747_15_0, &direction_outfitpow_747_15_0, NULL, &direction_outfitpow_747_15_8, &direction_outfitpow_747_15_8, &direction_outfitpow_747_15_8, &direction_outfitpow_747_15_8, &direction_outfitpow_747_15_8, &direction_outfitpow_747_15_8, &direction_outfitpow_747_15_8, NULL, &direction_outfitpow_747_15_16, &direction_outfitpow_747_15_16, &direction_outfitpow_747_15_16, &direction_outfitpow_747_15_16, &direction_outfitpow_747_15_16, &direction_outfitpow_747_15_16, &direction_outfitpow_747_15_16, NULL, &direction_outfitpow_747_15_24, &direction_outfitpow_747_15_24, &direction_outfitpow_747_15_24, &direction_outfitpow_747_15_24, &direction_outfitpow_747_15_24, &direction_outfitpow_747_15_24, &direction_outfitpow_747_15_24, NULL, &direction_outfitpow_747_15_0, &direction_outfitpow_747_15_0, &direction_outfitpow_747_15_0};
static Image* images_outfitpow_747_16_0[2];
static Direction direction_outfitpow_747_16_0 = {0, 10, 10, 0, -1, images_outfitpow_747_16_0, 2};
static Image* images_outfitpow_747_16_8[2];
static Direction direction_outfitpow_747_16_8 = {8, 10, 10, 0, -1, images_outfitpow_747_16_8, 2};
static Image* images_outfitpow_747_16_16[2];
static Direction direction_outfitpow_747_16_16 = {16, 10, 10, 0, -1, images_outfitpow_747_16_16, 2};
static Image* images_outfitpow_747_16_24[2];
static Direction direction_outfitpow_747_16_24 = {24, 10, 10, 0, -1, images_outfitpow_747_16_24, 2};
static Animation anim_outfitpow_747_16 = {&direction_outfitpow_747_16_0, &direction_outfitpow_747_16_0, &direction_outfitpow_747_16_0, &direction_outfitpow_747_16_0, NULL, &direction_outfitpow_747_16_8, &direction_outfitpow_747_16_8, &direction_outfitpow_747_16_8, &direction_outfitpow_747_16_8, &direction_outfitpow_747_16_8, &direction_outfitpow_747_16_8, &direction_outfitpow_747_16_8, NULL, &direction_outfitpow_747_16_16, &direction_outfitpow_747_16_16, &direction_outfitpow_747_16_16, &direction_outfitpow_747_16_16, &direction_outfitpow_747_16_16, &direction_outfitpow_747_16_16, &direction_outfitpow_747_16_16, NULL, &direction_outfitpow_747_16_24, &direction_outfitpow_747_16_24, &direction_outfitpow_747_16_24, &direction_outfitpow_747_16_24, &direction_outfitpow_747_16_24, &direction_outfitpow_747_16_24, &direction_outfitpow_747_16_24, NULL, &direction_outfitpow_747_16_0, &direction_outfitpow_747_16_0, &direction_outfitpow_747_16_0};
static Image* images_outfitpow_747_17_0[2];
static Direction direction_outfitpow_747_17_0 = {0, 5, 5, 1, -1, images_outfitpow_747_17_0, 2};
static Image* images_outfitpow_747_17_8[2];
static Direction direction_outfitpow_747_17_8 = {8, 5, 5, 1, -1, images_outfitpow_747_17_8, 2};
static Image* images_outfitpow_747_17_16[2];
static Direction direction_outfitpow_747_17_16 = {16, 5, 5, 1, -1, images_outfitpow_747_17_16, 2};
static Image* images_outfitpow_747_17_24[2];
static Direction direction_outfitpow_747_17_24 = {24, 5, 5, 1, -1, images_outfitpow_747_17_24, 2};
static Animation anim_outfitpow_747_17 = {&direction_outfitpow_747_17_0, &direction_outfitpow_747_17_0, &direction_outfitpow_747_17_0, &direction_outfitpow_747_17_0, NULL, &direction_outfitpow_747_17_8, &direction_outfitpow_747_17_8, &direction_outfitpow_747_17_8, &direction_outfitpow_747_17_8, &direction_outfitpow_747_17_8, &direction_outfitpow_747_17_8, &direction_outfitpow_747_17_8, NULL, &direction_outfitpow_747_17_16, &direction_outfitpow_747_17_16, &direction_outfitpow_747_17_16, &direction_outfitpow_747_17_16, &direction_outfitpow_747_17_16, &direction_outfitpow_747_17_16, &direction_outfitpow_747_17_16, NULL, &direction_outfitpow_747_17_24, &direction_outfitpow_747_17_24, &direction_outfitpow_747_17_24, &direction_outfitpow_747_17_24, &direction_outfitpow_747_17_24, &direction_outfitpow_747_17_24, &direction_outfitpow_747_17_24, NULL, &direction_outfitpow_747_17_0, &direction_outfitpow_747_17_0, &direction_outfitpow_747_17_0};
static Image* images_outfitpow_747_18_24[8];
static Direction direction_outfitpow_747_18_24 = {24, 25, 25, 0, -1, images_outfitpow_747_18_24, 8};
static Animation anim_outfitpow_747_18 = {&direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, NULL, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24, &direction_outfitpow_747_18_24};
static Animation * anim_array_outfitpow_747[19] = {&anim_outfitpow_747_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitpow_747_6, &anim_outfitpow_747_7, &anim_outfitpow_747_8, &anim_outfitpow_747_9, &anim_outfitpow_747_10, &anim_outfitpow_747_11, &anim_outfitpow_747_12, &anim_outfitpow_747_13, &anim_outfitpow_747_14, &anim_outfitpow_747_15, &anim_outfitpow_747_16, &anim_outfitpow_747_17, &anim_outfitpow_747_18};
static Animations anim_outfitpow_747 = {19, &anim_array_outfitpow_747[0]};
static bool anim_outfitpow_747_initialized;
class OutfitPOW_747 : public Active
{
public:
    OutfitPOW_747(int x, int y) : Active(x, y, OutfitPOW_747_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - POW", 12);
#endif
        this->animations = &anim_outfitpow_747;
        if (!anim_outfitpow_747_initialized) {
            anim_outfitpow_747_initialized = true;
            images_outfitpow_747_0_0[0] = get_internal_image(278);
            images_outfitpow_747_0_0[1] = get_internal_image(265);
            images_outfitpow_747_0_8[0] = get_internal_image(269);
            images_outfitpow_747_0_8[1] = get_internal_image(138);
            images_outfitpow_747_0_16[0] = get_internal_image(240);
            images_outfitpow_747_0_16[1] = get_internal_image(140);
            images_outfitpow_747_0_24[0] = get_internal_image(143);
            images_outfitpow_747_0_24[1] = get_internal_image(149);
            images_outfitpow_747_6_0[0] = get_internal_image(119);
            images_outfitpow_747_6_8[0] = get_internal_image(90);
            images_outfitpow_747_6_16[0] = get_internal_image(120);
            images_outfitpow_747_6_24[0] = get_internal_image(115);
            images_outfitpow_747_7_0[0] = get_internal_image(113);
            images_outfitpow_747_7_0[1] = get_internal_image(294);
            images_outfitpow_747_7_8[0] = get_internal_image(274);
            images_outfitpow_747_7_8[1] = get_internal_image(291);
            images_outfitpow_747_7_16[0] = get_internal_image(298);
            images_outfitpow_747_7_16[1] = get_internal_image(303);
            images_outfitpow_747_7_24[0] = get_internal_image(124);
            images_outfitpow_747_7_24[1] = get_internal_image(136);
            images_outfitpow_747_8_0[0] = get_internal_image(307);
            images_outfitpow_747_8_0[1] = get_internal_image(307);
            images_outfitpow_747_8_16[0] = get_internal_image(1090);
            images_outfitpow_747_8_16[1] = get_internal_image(1104);
            images_outfitpow_747_8_24[0] = get_internal_image(296);
            images_outfitpow_747_8_24[1] = get_internal_image(296);
            images_outfitpow_747_8_24[2] = get_internal_image(296);
            images_outfitpow_747_9_0[0] = get_internal_image(308);
            images_outfitpow_747_9_0[1] = get_internal_image(980);
            images_outfitpow_747_10_0[0] = get_internal_image(1234);
            images_outfitpow_747_10_0[1] = get_internal_image(304);
            images_outfitpow_747_10_0[2] = get_internal_image(1237);
            images_outfitpow_747_10_0[3] = get_internal_image(1238);
            images_outfitpow_747_10_0[4] = get_internal_image(1237);
            images_outfitpow_747_11_0[0] = get_internal_image(1474);
            images_outfitpow_747_11_0[1] = get_internal_image(1284);
            images_outfitpow_747_11_8[0] = get_internal_image(1288);
            images_outfitpow_747_11_8[1] = get_internal_image(1305);
            images_outfitpow_747_11_16[0] = get_internal_image(1282);
            images_outfitpow_747_11_16[1] = get_internal_image(1289);
            images_outfitpow_747_11_24[0] = get_internal_image(1281);
            images_outfitpow_747_11_24[1] = get_internal_image(1279);
            images_outfitpow_747_12_0[0] = get_internal_image(1507);
            images_outfitpow_747_12_0[1] = get_internal_image(1532);
            images_outfitpow_747_12_8[0] = get_internal_image(1928);
            images_outfitpow_747_12_8[1] = get_internal_image(1930);
            images_outfitpow_747_12_16[0] = get_internal_image(1524);
            images_outfitpow_747_12_16[1] = get_internal_image(1535);
            images_outfitpow_747_12_24[0] = get_internal_image(1931);
            images_outfitpow_747_12_24[1] = get_internal_image(1932);
            images_outfitpow_747_13_0[0] = get_internal_image(1929);
            images_outfitpow_747_13_0[1] = get_internal_image(1934);
            images_outfitpow_747_13_8[0] = get_internal_image(1940);
            images_outfitpow_747_13_8[1] = get_internal_image(1939);
            images_outfitpow_747_13_16[0] = get_internal_image(1933);
            images_outfitpow_747_13_16[1] = get_internal_image(1935);
            images_outfitpow_747_13_24[0] = get_internal_image(1937);
            images_outfitpow_747_13_24[1] = get_internal_image(1936);
            images_outfitpow_747_14_0[0] = get_internal_image(1941);
            images_outfitpow_747_14_0[1] = get_internal_image(1944);
            images_outfitpow_747_14_8[0] = get_internal_image(1942);
            images_outfitpow_747_14_8[1] = get_internal_image(1945);
            images_outfitpow_747_14_16[0] = get_internal_image(1947);
            images_outfitpow_747_14_16[1] = get_internal_image(1946);
            images_outfitpow_747_14_24[0] = get_internal_image(1938);
            images_outfitpow_747_14_24[1] = get_internal_image(1621);
            images_outfitpow_747_15_0[0] = get_internal_image(1950);
            images_outfitpow_747_15_0[1] = get_internal_image(1955);
            images_outfitpow_747_15_8[0] = get_internal_image(1949);
            images_outfitpow_747_15_8[1] = get_internal_image(1943);
            images_outfitpow_747_15_16[0] = get_internal_image(1954);
            images_outfitpow_747_15_16[1] = get_internal_image(1953);
            images_outfitpow_747_15_24[0] = get_internal_image(1952);
            images_outfitpow_747_15_24[1] = get_internal_image(1948);
            images_outfitpow_747_16_0[0] = get_internal_image(1929);
            images_outfitpow_747_16_0[1] = get_internal_image(1934);
            images_outfitpow_747_16_8[0] = get_internal_image(1940);
            images_outfitpow_747_16_8[1] = get_internal_image(1939);
            images_outfitpow_747_16_16[0] = get_internal_image(1933);
            images_outfitpow_747_16_16[1] = get_internal_image(1935);
            images_outfitpow_747_16_24[0] = get_internal_image(1937);
            images_outfitpow_747_16_24[1] = get_internal_image(1936);
            images_outfitpow_747_17_0[0] = get_internal_image(2054);
            images_outfitpow_747_17_0[1] = get_internal_image(2060);
            images_outfitpow_747_17_8[0] = get_internal_image(2057);
            images_outfitpow_747_17_8[1] = get_internal_image(2058);
            images_outfitpow_747_17_16[0] = get_internal_image(2051);
            images_outfitpow_747_17_16[1] = get_internal_image(2053);
            images_outfitpow_747_17_24[0] = get_internal_image(2055);
            images_outfitpow_747_17_24[1] = get_internal_image(2056);
            images_outfitpow_747_18_24[0] = get_internal_image(2192);
            images_outfitpow_747_18_24[1] = get_internal_image(2193);
            images_outfitpow_747_18_24[2] = get_internal_image(2184);
            images_outfitpow_747_18_24[3] = get_internal_image(2195);
            images_outfitpow_747_18_24[4] = get_internal_image(2191);
            images_outfitpow_747_18_24[5] = get_internal_image(2201);
            images_outfitpow_747_18_24[6] = get_internal_image(436);
            images_outfitpow_747_18_24[7] = get_internal_image(2183);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitpow_747(int x, int y)
{
    return new (Active::pool.create()) OutfitPOW_747(x, y);
}
static Image* images_hiding_748_0_8[1];
static Direction direction_hiding_748_0_8 = {8, 50, 50, 0, -1, images_hiding_748_0_8, 1};
static Animation anim_hiding_748_0 = {&direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, NULL, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8, &direction_hiding_748_0_8};
static Animation * anim_array_hiding_748[1] = {&anim_hiding_748_0};
static Animations anim_hiding_748 = {1, &anim_array_hiding_748[0]};
static bool anim_hiding_748_initialized;
class Hiding_748 : public Active
{
public:
    Hiding_748(int x, int y) : Active(x, y, Hiding_748_type)
    {
        // qualifiers: 28, 88
#ifndef NDEBUG
        name = std::string("Hiding", 6);
#endif
        this->animations = &anim_hiding_748;
        if (!anim_hiding_748_initialized) {
            anim_hiding_748_initialized = true;
            images_hiding_748_0_8[0] = get_internal_image(868);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_hiding_748(int x, int y)
{
    return new (Active::pool.create()) Hiding_748(x, y);
}
static Image* images_interwebs_749_0_0[1];
static Direction direction_interwebs_749_0_0 = {0, 50, 50, 0, -1, images_interwebs_749_0_0, 1};
static Animation anim_interwebs_749_0 = {&direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, NULL, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0, &direction_interwebs_749_0_0};
static Animation * anim_array_interwebs_749[1] = {&anim_interwebs_749_0};
static Animations anim_interwebs_749 = {1, &anim_array_interwebs_749[0]};
static bool anim_interwebs_749_initialized;
class Interwebs_749 : public Active
{
public:
    Interwebs_749(int x, int y) : Active(x, y, Interwebs_749_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("Interwebs", 9);
#endif
        this->animations = &anim_interwebs_749;
        if (!anim_interwebs_749_initialized) {
            anim_interwebs_749_initialized = true;
            images_interwebs_749_0_0[0] = get_internal_image(1290);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_interwebs_749(int x, int y)
{
    return new (Active::pool.create()) Interwebs_749(x, y);
}
static Image* images_extranpcs_750_0_0[2];
static Direction direction_extranpcs_750_0_0 = {0, 8, 8, 0, -1, images_extranpcs_750_0_0, 2};
static Image* images_extranpcs_750_0_8[2];
static Direction direction_extranpcs_750_0_8 = {8, 8, 8, 0, -1, images_extranpcs_750_0_8, 2};
static Image* images_extranpcs_750_0_16[2];
static Direction direction_extranpcs_750_0_16 = {16, 8, 8, 0, -1, images_extranpcs_750_0_16, 2};
static Image* images_extranpcs_750_0_24[2];
static Direction direction_extranpcs_750_0_24 = {24, 8, 8, 0, -1, images_extranpcs_750_0_24, 2};
static Animation anim_extranpcs_750_0 = {&direction_extranpcs_750_0_0, &direction_extranpcs_750_0_0, &direction_extranpcs_750_0_0, &direction_extranpcs_750_0_0, NULL, &direction_extranpcs_750_0_8, &direction_extranpcs_750_0_8, &direction_extranpcs_750_0_8, &direction_extranpcs_750_0_8, &direction_extranpcs_750_0_8, &direction_extranpcs_750_0_8, &direction_extranpcs_750_0_8, NULL, &direction_extranpcs_750_0_16, &direction_extranpcs_750_0_16, &direction_extranpcs_750_0_16, &direction_extranpcs_750_0_16, &direction_extranpcs_750_0_16, &direction_extranpcs_750_0_16, &direction_extranpcs_750_0_16, NULL, &direction_extranpcs_750_0_24, &direction_extranpcs_750_0_24, &direction_extranpcs_750_0_24, &direction_extranpcs_750_0_24, &direction_extranpcs_750_0_24, &direction_extranpcs_750_0_24, &direction_extranpcs_750_0_24, NULL, &direction_extranpcs_750_0_0, &direction_extranpcs_750_0_0, &direction_extranpcs_750_0_0};
static Image* images_extranpcs_750_1_0[2];
static Direction direction_extranpcs_750_1_0 = {0, 10, 10, 0, -1, images_extranpcs_750_1_0, 2};
static Image* images_extranpcs_750_1_8[2];
static Direction direction_extranpcs_750_1_8 = {8, 10, 10, 0, -1, images_extranpcs_750_1_8, 2};
static Image* images_extranpcs_750_1_16[2];
static Direction direction_extranpcs_750_1_16 = {16, 10, 10, 0, -1, images_extranpcs_750_1_16, 2};
static Image* images_extranpcs_750_1_24[2];
static Direction direction_extranpcs_750_1_24 = {24, 10, 10, 0, -1, images_extranpcs_750_1_24, 2};
static Animation anim_extranpcs_750_1 = {&direction_extranpcs_750_1_0, &direction_extranpcs_750_1_0, &direction_extranpcs_750_1_0, &direction_extranpcs_750_1_0, NULL, &direction_extranpcs_750_1_8, &direction_extranpcs_750_1_8, &direction_extranpcs_750_1_8, &direction_extranpcs_750_1_8, &direction_extranpcs_750_1_8, &direction_extranpcs_750_1_8, &direction_extranpcs_750_1_8, NULL, &direction_extranpcs_750_1_16, &direction_extranpcs_750_1_16, &direction_extranpcs_750_1_16, &direction_extranpcs_750_1_16, &direction_extranpcs_750_1_16, &direction_extranpcs_750_1_16, &direction_extranpcs_750_1_16, NULL, &direction_extranpcs_750_1_24, &direction_extranpcs_750_1_24, &direction_extranpcs_750_1_24, &direction_extranpcs_750_1_24, &direction_extranpcs_750_1_24, &direction_extranpcs_750_1_24, &direction_extranpcs_750_1_24, NULL, &direction_extranpcs_750_1_0, &direction_extranpcs_750_1_0, &direction_extranpcs_750_1_0};
static Image* images_extranpcs_750_2_0[2];
static Direction direction_extranpcs_750_2_0 = {0, 10, 10, 0, -1, images_extranpcs_750_2_0, 2};
static Image* images_extranpcs_750_2_8[2];
static Direction direction_extranpcs_750_2_8 = {8, 10, 10, 0, -1, images_extranpcs_750_2_8, 2};
static Image* images_extranpcs_750_2_16[2];
static Direction direction_extranpcs_750_2_16 = {16, 10, 10, 0, -1, images_extranpcs_750_2_16, 2};
static Image* images_extranpcs_750_2_24[2];
static Direction direction_extranpcs_750_2_24 = {24, 10, 10, 0, -1, images_extranpcs_750_2_24, 2};
static Animation anim_extranpcs_750_2 = {&direction_extranpcs_750_2_0, &direction_extranpcs_750_2_0, &direction_extranpcs_750_2_0, &direction_extranpcs_750_2_0, NULL, &direction_extranpcs_750_2_8, &direction_extranpcs_750_2_8, &direction_extranpcs_750_2_8, &direction_extranpcs_750_2_8, &direction_extranpcs_750_2_8, &direction_extranpcs_750_2_8, &direction_extranpcs_750_2_8, NULL, &direction_extranpcs_750_2_16, &direction_extranpcs_750_2_16, &direction_extranpcs_750_2_16, &direction_extranpcs_750_2_16, &direction_extranpcs_750_2_16, &direction_extranpcs_750_2_16, &direction_extranpcs_750_2_16, NULL, &direction_extranpcs_750_2_24, &direction_extranpcs_750_2_24, &direction_extranpcs_750_2_24, &direction_extranpcs_750_2_24, &direction_extranpcs_750_2_24, &direction_extranpcs_750_2_24, &direction_extranpcs_750_2_24, NULL, &direction_extranpcs_750_2_0, &direction_extranpcs_750_2_0, &direction_extranpcs_750_2_0};
static Image* images_extranpcs_750_12_0[2];
static Direction direction_extranpcs_750_12_0 = {0, 10, 10, 0, -1, images_extranpcs_750_12_0, 2};
static Image* images_extranpcs_750_12_8[2];
static Direction direction_extranpcs_750_12_8 = {8, 10, 10, 0, -1, images_extranpcs_750_12_8, 2};
static Image* images_extranpcs_750_12_16[2];
static Direction direction_extranpcs_750_12_16 = {16, 10, 10, 0, -1, images_extranpcs_750_12_16, 2};
static Image* images_extranpcs_750_12_24[2];
static Direction direction_extranpcs_750_12_24 = {24, 10, 10, 0, -1, images_extranpcs_750_12_24, 2};
static Animation anim_extranpcs_750_12 = {&direction_extranpcs_750_12_0, &direction_extranpcs_750_12_0, &direction_extranpcs_750_12_0, &direction_extranpcs_750_12_0, NULL, &direction_extranpcs_750_12_8, &direction_extranpcs_750_12_8, &direction_extranpcs_750_12_8, &direction_extranpcs_750_12_8, &direction_extranpcs_750_12_8, &direction_extranpcs_750_12_8, &direction_extranpcs_750_12_8, NULL, &direction_extranpcs_750_12_16, &direction_extranpcs_750_12_16, &direction_extranpcs_750_12_16, &direction_extranpcs_750_12_16, &direction_extranpcs_750_12_16, &direction_extranpcs_750_12_16, &direction_extranpcs_750_12_16, NULL, &direction_extranpcs_750_12_24, &direction_extranpcs_750_12_24, &direction_extranpcs_750_12_24, &direction_extranpcs_750_12_24, &direction_extranpcs_750_12_24, &direction_extranpcs_750_12_24, &direction_extranpcs_750_12_24, NULL, &direction_extranpcs_750_12_0, &direction_extranpcs_750_12_0, &direction_extranpcs_750_12_0};
static Image* images_extranpcs_750_13_0[2];
static Direction direction_extranpcs_750_13_0 = {0, 10, 10, 0, -1, images_extranpcs_750_13_0, 2};
static Image* images_extranpcs_750_13_8[2];
static Direction direction_extranpcs_750_13_8 = {8, 10, 10, 0, -1, images_extranpcs_750_13_8, 2};
static Image* images_extranpcs_750_13_16[2];
static Direction direction_extranpcs_750_13_16 = {16, 10, 10, 0, -1, images_extranpcs_750_13_16, 2};
static Image* images_extranpcs_750_13_24[2];
static Direction direction_extranpcs_750_13_24 = {24, 10, 10, 0, -1, images_extranpcs_750_13_24, 2};
static Animation anim_extranpcs_750_13 = {&direction_extranpcs_750_13_0, &direction_extranpcs_750_13_0, &direction_extranpcs_750_13_0, &direction_extranpcs_750_13_0, NULL, &direction_extranpcs_750_13_8, &direction_extranpcs_750_13_8, &direction_extranpcs_750_13_8, &direction_extranpcs_750_13_8, &direction_extranpcs_750_13_8, &direction_extranpcs_750_13_8, &direction_extranpcs_750_13_8, NULL, &direction_extranpcs_750_13_16, &direction_extranpcs_750_13_16, &direction_extranpcs_750_13_16, &direction_extranpcs_750_13_16, &direction_extranpcs_750_13_16, &direction_extranpcs_750_13_16, &direction_extranpcs_750_13_16, NULL, &direction_extranpcs_750_13_24, &direction_extranpcs_750_13_24, &direction_extranpcs_750_13_24, &direction_extranpcs_750_13_24, &direction_extranpcs_750_13_24, &direction_extranpcs_750_13_24, &direction_extranpcs_750_13_24, NULL, &direction_extranpcs_750_13_0, &direction_extranpcs_750_13_0, &direction_extranpcs_750_13_0};
static Image* images_extranpcs_750_14_0[2];
static Direction direction_extranpcs_750_14_0 = {0, 10, 10, 0, -1, images_extranpcs_750_14_0, 2};
static Image* images_extranpcs_750_14_8[2];
static Direction direction_extranpcs_750_14_8 = {8, 10, 10, 0, -1, images_extranpcs_750_14_8, 2};
static Image* images_extranpcs_750_14_16[2];
static Direction direction_extranpcs_750_14_16 = {16, 10, 10, 0, -1, images_extranpcs_750_14_16, 2};
static Image* images_extranpcs_750_14_24[2];
static Direction direction_extranpcs_750_14_24 = {24, 10, 10, 0, -1, images_extranpcs_750_14_24, 2};
static Animation anim_extranpcs_750_14 = {&direction_extranpcs_750_14_0, &direction_extranpcs_750_14_0, &direction_extranpcs_750_14_0, &direction_extranpcs_750_14_0, NULL, &direction_extranpcs_750_14_8, &direction_extranpcs_750_14_8, &direction_extranpcs_750_14_8, &direction_extranpcs_750_14_8, &direction_extranpcs_750_14_8, &direction_extranpcs_750_14_8, &direction_extranpcs_750_14_8, NULL, &direction_extranpcs_750_14_16, &direction_extranpcs_750_14_16, &direction_extranpcs_750_14_16, &direction_extranpcs_750_14_16, &direction_extranpcs_750_14_16, &direction_extranpcs_750_14_16, &direction_extranpcs_750_14_16, NULL, &direction_extranpcs_750_14_24, &direction_extranpcs_750_14_24, &direction_extranpcs_750_14_24, &direction_extranpcs_750_14_24, &direction_extranpcs_750_14_24, &direction_extranpcs_750_14_24, &direction_extranpcs_750_14_24, NULL, &direction_extranpcs_750_14_0, &direction_extranpcs_750_14_0, &direction_extranpcs_750_14_0};
static Image* images_extranpcs_750_15_0[2];
static Direction direction_extranpcs_750_15_0 = {0, 10, 10, 0, -1, images_extranpcs_750_15_0, 2};
static Image* images_extranpcs_750_15_8[2];
static Direction direction_extranpcs_750_15_8 = {8, 10, 10, 0, -1, images_extranpcs_750_15_8, 2};
static Image* images_extranpcs_750_15_16[2];
static Direction direction_extranpcs_750_15_16 = {16, 10, 10, 0, -1, images_extranpcs_750_15_16, 2};
static Image* images_extranpcs_750_15_24[2];
static Direction direction_extranpcs_750_15_24 = {24, 10, 10, 0, -1, images_extranpcs_750_15_24, 2};
static Animation anim_extranpcs_750_15 = {&direction_extranpcs_750_15_0, &direction_extranpcs_750_15_0, &direction_extranpcs_750_15_0, &direction_extranpcs_750_15_0, NULL, &direction_extranpcs_750_15_8, &direction_extranpcs_750_15_8, &direction_extranpcs_750_15_8, &direction_extranpcs_750_15_8, &direction_extranpcs_750_15_8, &direction_extranpcs_750_15_8, &direction_extranpcs_750_15_8, NULL, &direction_extranpcs_750_15_16, &direction_extranpcs_750_15_16, &direction_extranpcs_750_15_16, &direction_extranpcs_750_15_16, &direction_extranpcs_750_15_16, &direction_extranpcs_750_15_16, &direction_extranpcs_750_15_16, NULL, &direction_extranpcs_750_15_24, &direction_extranpcs_750_15_24, &direction_extranpcs_750_15_24, &direction_extranpcs_750_15_24, &direction_extranpcs_750_15_24, &direction_extranpcs_750_15_24, &direction_extranpcs_750_15_24, NULL, &direction_extranpcs_750_15_0, &direction_extranpcs_750_15_0, &direction_extranpcs_750_15_0};
static Image* images_extranpcs_750_16_0[2];
static Direction direction_extranpcs_750_16_0 = {0, 10, 10, 0, -1, images_extranpcs_750_16_0, 2};
static Image* images_extranpcs_750_16_8[2];
static Direction direction_extranpcs_750_16_8 = {8, 10, 10, 0, -1, images_extranpcs_750_16_8, 2};
static Image* images_extranpcs_750_16_16[2];
static Direction direction_extranpcs_750_16_16 = {16, 10, 10, 0, -1, images_extranpcs_750_16_16, 2};
static Image* images_extranpcs_750_16_24[2];
static Direction direction_extranpcs_750_16_24 = {24, 10, 10, 0, -1, images_extranpcs_750_16_24, 2};
static Animation anim_extranpcs_750_16 = {&direction_extranpcs_750_16_0, &direction_extranpcs_750_16_0, &direction_extranpcs_750_16_0, &direction_extranpcs_750_16_0, NULL, &direction_extranpcs_750_16_8, &direction_extranpcs_750_16_8, &direction_extranpcs_750_16_8, &direction_extranpcs_750_16_8, &direction_extranpcs_750_16_8, &direction_extranpcs_750_16_8, &direction_extranpcs_750_16_8, NULL, &direction_extranpcs_750_16_16, &direction_extranpcs_750_16_16, &direction_extranpcs_750_16_16, &direction_extranpcs_750_16_16, &direction_extranpcs_750_16_16, &direction_extranpcs_750_16_16, &direction_extranpcs_750_16_16, NULL, &direction_extranpcs_750_16_24, &direction_extranpcs_750_16_24, &direction_extranpcs_750_16_24, &direction_extranpcs_750_16_24, &direction_extranpcs_750_16_24, &direction_extranpcs_750_16_24, &direction_extranpcs_750_16_24, NULL, &direction_extranpcs_750_16_0, &direction_extranpcs_750_16_0, &direction_extranpcs_750_16_0};
static Image* images_extranpcs_750_17_0[2];
static Direction direction_extranpcs_750_17_0 = {0, 10, 10, 0, -1, images_extranpcs_750_17_0, 2};
static Image* images_extranpcs_750_17_8[2];
static Direction direction_extranpcs_750_17_8 = {8, 10, 10, 0, -1, images_extranpcs_750_17_8, 2};
static Image* images_extranpcs_750_17_16[2];
static Direction direction_extranpcs_750_17_16 = {16, 10, 10, 0, -1, images_extranpcs_750_17_16, 2};
static Image* images_extranpcs_750_17_24[2];
static Direction direction_extranpcs_750_17_24 = {24, 10, 10, 0, -1, images_extranpcs_750_17_24, 2};
static Animation anim_extranpcs_750_17 = {&direction_extranpcs_750_17_0, &direction_extranpcs_750_17_0, &direction_extranpcs_750_17_0, &direction_extranpcs_750_17_0, NULL, &direction_extranpcs_750_17_8, &direction_extranpcs_750_17_8, &direction_extranpcs_750_17_8, &direction_extranpcs_750_17_8, &direction_extranpcs_750_17_8, &direction_extranpcs_750_17_8, &direction_extranpcs_750_17_8, NULL, &direction_extranpcs_750_17_16, &direction_extranpcs_750_17_16, &direction_extranpcs_750_17_16, &direction_extranpcs_750_17_16, &direction_extranpcs_750_17_16, &direction_extranpcs_750_17_16, &direction_extranpcs_750_17_16, NULL, &direction_extranpcs_750_17_24, &direction_extranpcs_750_17_24, &direction_extranpcs_750_17_24, &direction_extranpcs_750_17_24, &direction_extranpcs_750_17_24, &direction_extranpcs_750_17_24, &direction_extranpcs_750_17_24, NULL, &direction_extranpcs_750_17_0, &direction_extranpcs_750_17_0, &direction_extranpcs_750_17_0};
static Image* images_extranpcs_750_18_0[2];
static Direction direction_extranpcs_750_18_0 = {0, 10, 10, 0, -1, images_extranpcs_750_18_0, 2};
static Image* images_extranpcs_750_18_8[2];
static Direction direction_extranpcs_750_18_8 = {8, 10, 10, 0, -1, images_extranpcs_750_18_8, 2};
static Image* images_extranpcs_750_18_16[2];
static Direction direction_extranpcs_750_18_16 = {16, 10, 10, 0, -1, images_extranpcs_750_18_16, 2};
static Image* images_extranpcs_750_18_24[2];
static Direction direction_extranpcs_750_18_24 = {24, 10, 10, 0, -1, images_extranpcs_750_18_24, 2};
static Animation anim_extranpcs_750_18 = {&direction_extranpcs_750_18_0, &direction_extranpcs_750_18_0, &direction_extranpcs_750_18_0, &direction_extranpcs_750_18_0, NULL, &direction_extranpcs_750_18_8, &direction_extranpcs_750_18_8, &direction_extranpcs_750_18_8, &direction_extranpcs_750_18_8, &direction_extranpcs_750_18_8, &direction_extranpcs_750_18_8, &direction_extranpcs_750_18_8, NULL, &direction_extranpcs_750_18_16, &direction_extranpcs_750_18_16, &direction_extranpcs_750_18_16, &direction_extranpcs_750_18_16, &direction_extranpcs_750_18_16, &direction_extranpcs_750_18_16, &direction_extranpcs_750_18_16, NULL, &direction_extranpcs_750_18_24, &direction_extranpcs_750_18_24, &direction_extranpcs_750_18_24, &direction_extranpcs_750_18_24, &direction_extranpcs_750_18_24, &direction_extranpcs_750_18_24, &direction_extranpcs_750_18_24, NULL, &direction_extranpcs_750_18_0, &direction_extranpcs_750_18_0, &direction_extranpcs_750_18_0};
static Image* images_extranpcs_750_19_0[2];
static Direction direction_extranpcs_750_19_0 = {0, 10, 10, 0, -1, images_extranpcs_750_19_0, 2};
static Image* images_extranpcs_750_19_8[2];
static Direction direction_extranpcs_750_19_8 = {8, 10, 10, 0, -1, images_extranpcs_750_19_8, 2};
static Image* images_extranpcs_750_19_16[2];
static Direction direction_extranpcs_750_19_16 = {16, 10, 10, 0, -1, images_extranpcs_750_19_16, 2};
static Image* images_extranpcs_750_19_24[2];
static Direction direction_extranpcs_750_19_24 = {24, 10, 10, 0, -1, images_extranpcs_750_19_24, 2};
static Animation anim_extranpcs_750_19 = {&direction_extranpcs_750_19_0, &direction_extranpcs_750_19_0, &direction_extranpcs_750_19_0, &direction_extranpcs_750_19_0, NULL, &direction_extranpcs_750_19_8, &direction_extranpcs_750_19_8, &direction_extranpcs_750_19_8, &direction_extranpcs_750_19_8, &direction_extranpcs_750_19_8, &direction_extranpcs_750_19_8, &direction_extranpcs_750_19_8, NULL, &direction_extranpcs_750_19_16, &direction_extranpcs_750_19_16, &direction_extranpcs_750_19_16, &direction_extranpcs_750_19_16, &direction_extranpcs_750_19_16, &direction_extranpcs_750_19_16, &direction_extranpcs_750_19_16, NULL, &direction_extranpcs_750_19_24, &direction_extranpcs_750_19_24, &direction_extranpcs_750_19_24, &direction_extranpcs_750_19_24, &direction_extranpcs_750_19_24, &direction_extranpcs_750_19_24, &direction_extranpcs_750_19_24, NULL, &direction_extranpcs_750_19_0, &direction_extranpcs_750_19_0, &direction_extranpcs_750_19_0};
static Animation * anim_array_extranpcs_750[20] = {&anim_extranpcs_750_0, &anim_extranpcs_750_1, &anim_extranpcs_750_2, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_extranpcs_750_12, &anim_extranpcs_750_13, &anim_extranpcs_750_14, &anim_extranpcs_750_15, &anim_extranpcs_750_16, &anim_extranpcs_750_17, &anim_extranpcs_750_18, &anim_extranpcs_750_19};
static Animations anim_extranpcs_750 = {20, &anim_array_extranpcs_750[0]};
static bool anim_extranpcs_750_initialized;
class ExtraNPCs_750 : public Active
{
public:
    ExtraNPCs_750(int x, int y) : Active(x, y, ExtraNPCs_750_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Extra NPCs", 10);
#endif
        this->animations = &anim_extranpcs_750;
        if (!anim_extranpcs_750_initialized) {
            anim_extranpcs_750_initialized = true;
            images_extranpcs_750_0_0[0] = get_internal_image(1325);
            images_extranpcs_750_0_0[1] = get_internal_image(1329);
            images_extranpcs_750_0_8[0] = get_internal_image(1331);
            images_extranpcs_750_0_8[1] = get_internal_image(1333);
            images_extranpcs_750_0_16[0] = get_internal_image(1328);
            images_extranpcs_750_0_16[1] = get_internal_image(1330);
            images_extranpcs_750_0_24[0] = get_internal_image(1326);
            images_extranpcs_750_0_24[1] = get_internal_image(1327);
            images_extranpcs_750_1_0[0] = get_internal_image(1320);
            images_extranpcs_750_1_0[1] = get_internal_image(1324);
            images_extranpcs_750_1_8[0] = get_internal_image(1337);
            images_extranpcs_750_1_8[1] = get_internal_image(1336);
            images_extranpcs_750_1_16[0] = get_internal_image(1332);
            images_extranpcs_750_1_16[1] = get_internal_image(1335);
            images_extranpcs_750_1_24[0] = get_internal_image(1339);
            images_extranpcs_750_1_24[1] = get_internal_image(1340);
            images_extranpcs_750_2_0[0] = get_internal_image(45);
            images_extranpcs_750_2_0[1] = get_internal_image(126);
            images_extranpcs_750_2_8[0] = get_internal_image(130);
            images_extranpcs_750_2_8[1] = get_internal_image(142);
            images_extranpcs_750_2_16[0] = get_internal_image(7);
            images_extranpcs_750_2_16[1] = get_internal_image(128);
            images_extranpcs_750_2_24[0] = get_internal_image(133);
            images_extranpcs_750_2_24[1] = get_internal_image(129);
            images_extranpcs_750_12_0[0] = get_internal_image(1317);
            images_extranpcs_750_12_0[1] = get_internal_image(1316);
            images_extranpcs_750_12_8[0] = get_internal_image(1319);
            images_extranpcs_750_12_8[1] = get_internal_image(1321);
            images_extranpcs_750_12_16[0] = get_internal_image(1307);
            images_extranpcs_750_12_16[1] = get_internal_image(1318);
            images_extranpcs_750_12_24[0] = get_internal_image(1322);
            images_extranpcs_750_12_24[1] = get_internal_image(1323);
            images_extranpcs_750_13_0[0] = get_internal_image(1309);
            images_extranpcs_750_13_0[1] = get_internal_image(1311);
            images_extranpcs_750_13_8[0] = get_internal_image(1312);
            images_extranpcs_750_13_8[1] = get_internal_image(1315);
            images_extranpcs_750_13_16[0] = get_internal_image(1310);
            images_extranpcs_750_13_16[1] = get_internal_image(1308);
            images_extranpcs_750_13_24[0] = get_internal_image(1313);
            images_extranpcs_750_13_24[1] = get_internal_image(1314);
            images_extranpcs_750_14_0[0] = get_internal_image(1374);
            images_extranpcs_750_14_0[1] = get_internal_image(1373);
            images_extranpcs_750_14_8[0] = get_internal_image(1375);
            images_extranpcs_750_14_8[1] = get_internal_image(1376);
            images_extranpcs_750_14_16[0] = get_internal_image(1377);
            images_extranpcs_750_14_16[1] = get_internal_image(1378);
            images_extranpcs_750_14_24[0] = get_internal_image(1379);
            images_extranpcs_750_14_24[1] = get_internal_image(1380);
            images_extranpcs_750_15_0[0] = get_internal_image(1349);
            images_extranpcs_750_15_0[1] = get_internal_image(1350);
            images_extranpcs_750_15_8[0] = get_internal_image(1353);
            images_extranpcs_750_15_8[1] = get_internal_image(1354);
            images_extranpcs_750_15_16[0] = get_internal_image(1346);
            images_extranpcs_750_15_16[1] = get_internal_image(1351);
            images_extranpcs_750_15_24[0] = get_internal_image(1352);
            images_extranpcs_750_15_24[1] = get_internal_image(1356);
            images_extranpcs_750_16_0[0] = get_internal_image(1370);
            images_extranpcs_750_16_0[1] = get_internal_image(1362);
            images_extranpcs_750_16_8[0] = get_internal_image(1368);
            images_extranpcs_750_16_8[1] = get_internal_image(1365);
            images_extranpcs_750_16_16[0] = get_internal_image(1367);
            images_extranpcs_750_16_16[1] = get_internal_image(1371);
            images_extranpcs_750_16_24[0] = get_internal_image(1366);
            images_extranpcs_750_16_24[1] = get_internal_image(1369);
            images_extranpcs_750_17_0[0] = get_internal_image(1355);
            images_extranpcs_750_17_0[1] = get_internal_image(1358);
            images_extranpcs_750_17_8[0] = get_internal_image(1360);
            images_extranpcs_750_17_8[1] = get_internal_image(1363);
            images_extranpcs_750_17_16[0] = get_internal_image(1357);
            images_extranpcs_750_17_16[1] = get_internal_image(1359);
            images_extranpcs_750_17_24[0] = get_internal_image(1361);
            images_extranpcs_750_17_24[1] = get_internal_image(1364);
            images_extranpcs_750_18_0[0] = get_internal_image(1344);
            images_extranpcs_750_18_0[1] = get_internal_image(1384);
            images_extranpcs_750_18_8[0] = get_internal_image(1381);
            images_extranpcs_750_18_8[1] = get_internal_image(1345);
            images_extranpcs_750_18_16[0] = get_internal_image(1348);
            images_extranpcs_750_18_16[1] = get_internal_image(1383);
            images_extranpcs_750_18_24[0] = get_internal_image(1385);
            images_extranpcs_750_18_24[1] = get_internal_image(1342);
            images_extranpcs_750_19_0[0] = get_internal_image(1391);
            images_extranpcs_750_19_0[1] = get_internal_image(1392);
            images_extranpcs_750_19_8[0] = get_internal_image(1393);
            images_extranpcs_750_19_8[1] = get_internal_image(1395);
            images_extranpcs_750_19_16[0] = get_internal_image(1387);
            images_extranpcs_750_19_16[1] = get_internal_image(1390);
            images_extranpcs_750_19_24[0] = get_internal_image(1382);
            images_extranpcs_750_19_24[1] = get_internal_image(1396);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(randrange(32));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(12);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 20;
        ((BallMovement*)movement)->init();
        create_alterables();
        alterables->values.set(2, 50);
        alterables->values.set(3, 3);
    }
};
FrameObject * create_extranpcs_750(int x, int y)
{
    return new (Active::pool.create()) ExtraNPCs_750(x, y);
}
static Image* images_truck_751_0_0[1];
static Direction direction_truck_751_0_0 = {0, 50, 50, 0, -1, images_truck_751_0_0, 1};
static Image* images_truck_751_0_8[1];
static Direction direction_truck_751_0_8 = {8, 50, 50, 0, -1, images_truck_751_0_8, 1};
static Image* images_truck_751_0_16[1];
static Direction direction_truck_751_0_16 = {16, 50, 50, 0, -1, images_truck_751_0_16, 1};
static Image* images_truck_751_0_24[1];
static Direction direction_truck_751_0_24 = {24, 50, 50, 0, -1, images_truck_751_0_24, 1};
static Animation anim_truck_751_0 = {&direction_truck_751_0_0, &direction_truck_751_0_0, &direction_truck_751_0_0, &direction_truck_751_0_0, NULL, &direction_truck_751_0_8, &direction_truck_751_0_8, &direction_truck_751_0_8, &direction_truck_751_0_8, &direction_truck_751_0_8, &direction_truck_751_0_8, &direction_truck_751_0_8, NULL, &direction_truck_751_0_16, &direction_truck_751_0_16, &direction_truck_751_0_16, &direction_truck_751_0_16, &direction_truck_751_0_16, &direction_truck_751_0_16, &direction_truck_751_0_16, NULL, &direction_truck_751_0_24, &direction_truck_751_0_24, &direction_truck_751_0_24, &direction_truck_751_0_24, &direction_truck_751_0_24, &direction_truck_751_0_24, &direction_truck_751_0_24, NULL, &direction_truck_751_0_0, &direction_truck_751_0_0, &direction_truck_751_0_0};
static Animation * anim_array_truck_751[1] = {&anim_truck_751_0};
static Animations anim_truck_751 = {1, &anim_array_truck_751[0]};
static bool anim_truck_751_initialized;
class Truck_751 : public Active
{
public:
    Truck_751(int x, int y) : Active(x, y, Truck_751_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Truck", 5);
#endif
        this->animations = &anim_truck_751;
        if (!anim_truck_751_initialized) {
            anim_truck_751_initialized = true;
            images_truck_751_0_0[0] = get_internal_image(1431);
            images_truck_751_0_8[0] = get_internal_image(1432);
            images_truck_751_0_16[0] = get_internal_image(1429);
            images_truck_751_0_24[0] = get_internal_image(1433);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(pick_random(4, 0, 8, 16, 24));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(10);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 20;
        ((BallMovement*)movement)->init();
        create_alterables();
    }
};
FrameObject * create_truck_751(int x, int y)
{
    return new (Active::pool.create()) Truck_751(x, y);
}
static Image* images_waypointtruckstart_752_0_0[1];
static Direction direction_waypointtruckstart_752_0_0 = {0, 50, 50, 0, 1, images_waypointtruckstart_752_0_0, 1};
static Animation anim_waypointtruckstart_752_0 = {&direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, NULL, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0, &direction_waypointtruckstart_752_0_0};
static Animation * anim_array_waypointtruckstart_752[1] = {&anim_waypointtruckstart_752_0};
static Animations anim_waypointtruckstart_752 = {1, &anim_array_waypointtruckstart_752[0]};
static bool anim_waypointtruckstart_752_initialized;
class WaypointTruckStart_752 : public Active
{
public:
    WaypointTruckStart_752(int x, int y) : Active(x, y, WaypointTruckStart_752_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Truck Start", 22);
#endif
        this->animations = &anim_waypointtruckstart_752;
        if (!anim_waypointtruckstart_752_initialized) {
            anim_waypointtruckstart_752_initialized = true;
            images_waypointtruckstart_752_0_0[0] = get_internal_image(733);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointtruckstart_752(int x, int y)
{
    return new (Active::pool.create()) WaypointTruckStart_752(x, y);
}
static Image* images_ziplinepostend_753_0_0[1];
static Direction direction_ziplinepostend_753_0_0 = {0, 50, 50, 0, 1, images_ziplinepostend_753_0_0, 1};
static Animation anim_ziplinepostend_753_0 = {&direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, NULL, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0, &direction_ziplinepostend_753_0_0};
static Animation * anim_array_ziplinepostend_753[1] = {&anim_ziplinepostend_753_0};
static Animations anim_ziplinepostend_753 = {1, &anim_array_ziplinepostend_753[0]};
static bool anim_ziplinepostend_753_initialized;
class ZiplinePostEND_753 : public Active
{
public:
    ZiplinePostEND_753(int x, int y) : Active(x, y, ZiplinePostEND_753_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Zipline Post - END", 18);
#endif
        this->animations = &anim_ziplinepostend_753;
        if (!anim_ziplinepostend_753_initialized) {
            anim_ziplinepostend_753_initialized = true;
            images_ziplinepostend_753_0_0[0] = get_internal_image(2125);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_ziplinepostend_753(int x, int y)
{
    return new (Active::pool.create()) ZiplinePostEND_753(x, y);
}
class Warden_754 : public ListObject
{
public:
    Warden_754(int x, int y) : ListObject(x, y, Warden_754_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Warden", 6);
#endif
        flags &= ~SCROLL;
        add_line(std::string("Dean Hall", 9));
        add_line(std::string("Jim Sterling", 12));
        add_line(std::string("Patrick Garratt", 15));
        add_line(std::string("Alberto Valero", 14));
        add_line(std::string("Paul Soares Jr", 14));
        add_line(std::string("Sparrow", 7));
        list_flags |= SORT_LIST;
        index_offset = current_line = -1;
    }
};
FrameObject * create_warden_754(int x, int y)
{
    return new (ListObject::pool.create()) Warden_754(x, y);
}
static Image* images_containertailorout_755_0_0[1];
static Direction direction_containertailorout_755_0_0 = {0, 50, 50, 0, -1, images_containertailorout_755_0_0, 1};
static Animation anim_containertailorout_755_0 = {&direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, NULL, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0, &direction_containertailorout_755_0_0};
static Animation * anim_array_containertailorout_755[1] = {&anim_containertailorout_755_0};
static Animations anim_containertailorout_755 = {1, &anim_array_containertailorout_755[0]};
static bool anim_containertailorout_755_initialized;
class ContainerTailorOUT_755 : public Active
{
public:
    ContainerTailorOUT_755(int x, int y) : Active(x, y, ContainerTailorOUT_755_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Container - Tailor OUT", 22);
#endif
        this->animations = &anim_containertailorout_755;
        if (!anim_containertailorout_755_initialized) {
            anim_containertailorout_755_initialized = true;
            images_containertailorout_755_0_0[0] = get_internal_image(1475);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_timber_20);
    }
};
FrameObject * create_containertailorout_755(int x, int y)
{
    return new (Active::pool.create()) ContainerTailorOUT_755(x, y);
}
static Image* images_containerdeliveries_756_0_0[1];
static Direction direction_containerdeliveries_756_0_0 = {0, 50, 50, 0, -1, images_containerdeliveries_756_0_0, 1};
static Animation anim_containerdeliveries_756_0 = {&direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, NULL, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0, &direction_containerdeliveries_756_0_0};
static Animation * anim_array_containerdeliveries_756[1] = {&anim_containerdeliveries_756_0};
static Animations anim_containerdeliveries_756 = {1, &anim_array_containerdeliveries_756[0]};
static bool anim_containerdeliveries_756_initialized;
class ContainerDeliveries_756 : public Active
{
public:
    ContainerDeliveries_756(int x, int y) : Active(x, y, ContainerDeliveries_756_type)
    {
        // qualifiers: 63, 80, 91
#ifndef NDEBUG
        name = std::string("Container - Deliveries", 22);
#endif
        this->animations = &anim_containerdeliveries_756;
        if (!anim_containerdeliveries_756_initialized) {
            anim_containerdeliveries_756_initialized = true;
            images_containerdeliveries_756_0_0[0] = get_internal_image(1430);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_storage_40);
    }
};
FrameObject * create_containerdeliveries_756(int x, int y)
{
    return new (Active::pool.create()) ContainerDeliveries_756(x, y);
}
static Image* images_containerdeliveries2_757_0_0[1];
static Direction direction_containerdeliveries2_757_0_0 = {0, 50, 50, 0, -1, images_containerdeliveries2_757_0_0, 1};
static Animation anim_containerdeliveries2_757_0 = {&direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, NULL, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0, &direction_containerdeliveries2_757_0_0};
static Animation * anim_array_containerdeliveries2_757[1] = {&anim_containerdeliveries2_757_0};
static Animations anim_containerdeliveries2_757 = {1, &anim_array_containerdeliveries2_757[0]};
static bool anim_containerdeliveries2_757_initialized;
class ContainerDeliveries2_757 : public Active
{
public:
    ContainerDeliveries2_757(int x, int y) : Active(x, y, ContainerDeliveries2_757_type)
    {
        // qualifiers: 63, 80, 91
#ifndef NDEBUG
        name = std::string("Container - Deliveries 2", 24);
#endif
        this->animations = &anim_containerdeliveries2_757;
        if (!anim_containerdeliveries2_757_initialized) {
            anim_containerdeliveries2_757_initialized = true;
            images_containerdeliveries2_757_0_0[0] = get_internal_image(1478);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_storage_40);
    }
};
FrameObject * create_containerdeliveries2_757(int x, int y)
{
    return new (Active::pool.create()) ContainerDeliveries2_757(x, y);
}
static Image* images_patroljeep_758_0_0[1];
static Direction direction_patroljeep_758_0_0 = {0, 10, 10, 0, -1, images_patroljeep_758_0_0, 1};
static Image* images_patroljeep_758_0_8[1];
static Direction direction_patroljeep_758_0_8 = {8, 10, 10, 0, -1, images_patroljeep_758_0_8, 1};
static Image* images_patroljeep_758_0_16[1];
static Direction direction_patroljeep_758_0_16 = {16, 10, 10, 0, -1, images_patroljeep_758_0_16, 1};
static Image* images_patroljeep_758_0_24[1];
static Direction direction_patroljeep_758_0_24 = {24, 10, 10, 0, -1, images_patroljeep_758_0_24, 1};
static Animation anim_patroljeep_758_0 = {&direction_patroljeep_758_0_0, &direction_patroljeep_758_0_0, &direction_patroljeep_758_0_0, &direction_patroljeep_758_0_0, NULL, &direction_patroljeep_758_0_8, &direction_patroljeep_758_0_8, &direction_patroljeep_758_0_8, &direction_patroljeep_758_0_8, &direction_patroljeep_758_0_8, &direction_patroljeep_758_0_8, &direction_patroljeep_758_0_8, NULL, &direction_patroljeep_758_0_16, &direction_patroljeep_758_0_16, &direction_patroljeep_758_0_16, &direction_patroljeep_758_0_16, &direction_patroljeep_758_0_16, &direction_patroljeep_758_0_16, &direction_patroljeep_758_0_16, NULL, &direction_patroljeep_758_0_24, &direction_patroljeep_758_0_24, &direction_patroljeep_758_0_24, &direction_patroljeep_758_0_24, &direction_patroljeep_758_0_24, &direction_patroljeep_758_0_24, &direction_patroljeep_758_0_24, NULL, &direction_patroljeep_758_0_0, &direction_patroljeep_758_0_0, &direction_patroljeep_758_0_0};
static Image* images_patroljeep_758_1_0[2];
static Direction direction_patroljeep_758_1_0 = {0, 10, 10, 0, -1, images_patroljeep_758_1_0, 2};
static Image* images_patroljeep_758_1_8[2];
static Direction direction_patroljeep_758_1_8 = {8, 10, 10, 0, -1, images_patroljeep_758_1_8, 2};
static Image* images_patroljeep_758_1_16[2];
static Direction direction_patroljeep_758_1_16 = {16, 10, 10, 0, -1, images_patroljeep_758_1_16, 2};
static Image* images_patroljeep_758_1_24[2];
static Direction direction_patroljeep_758_1_24 = {24, 10, 10, 0, -1, images_patroljeep_758_1_24, 2};
static Animation anim_patroljeep_758_1 = {&direction_patroljeep_758_1_0, &direction_patroljeep_758_1_0, &direction_patroljeep_758_1_0, &direction_patroljeep_758_1_0, NULL, &direction_patroljeep_758_1_8, &direction_patroljeep_758_1_8, &direction_patroljeep_758_1_8, &direction_patroljeep_758_1_8, &direction_patroljeep_758_1_8, &direction_patroljeep_758_1_8, &direction_patroljeep_758_1_8, NULL, &direction_patroljeep_758_1_16, &direction_patroljeep_758_1_16, &direction_patroljeep_758_1_16, &direction_patroljeep_758_1_16, &direction_patroljeep_758_1_16, &direction_patroljeep_758_1_16, &direction_patroljeep_758_1_16, NULL, &direction_patroljeep_758_1_24, &direction_patroljeep_758_1_24, &direction_patroljeep_758_1_24, &direction_patroljeep_758_1_24, &direction_patroljeep_758_1_24, &direction_patroljeep_758_1_24, &direction_patroljeep_758_1_24, NULL, &direction_patroljeep_758_1_0, &direction_patroljeep_758_1_0, &direction_patroljeep_758_1_0};
static Animation * anim_array_patroljeep_758[2] = {&anim_patroljeep_758_0, &anim_patroljeep_758_1};
static Animations anim_patroljeep_758 = {2, &anim_array_patroljeep_758[0]};
static bool anim_patroljeep_758_initialized;
class PatrolJeep_758 : public Active
{
public:
    PatrolJeep_758(int x, int y) : Active(x, y, PatrolJeep_758_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Patrol Jeep", 11);
#endif
        this->animations = &anim_patroljeep_758;
        if (!anim_patroljeep_758_initialized) {
            anim_patroljeep_758_initialized = true;
            images_patroljeep_758_0_0[0] = get_internal_image(1543);
            images_patroljeep_758_0_8[0] = get_internal_image(1549);
            images_patroljeep_758_0_16[0] = get_internal_image(1545);
            images_patroljeep_758_0_24[0] = get_internal_image(1547);
            images_patroljeep_758_1_0[0] = get_internal_image(1542);
            images_patroljeep_758_1_0[1] = get_internal_image(1543);
            images_patroljeep_758_1_8[0] = get_internal_image(1548);
            images_patroljeep_758_1_8[1] = get_internal_image(1549);
            images_patroljeep_758_1_16[0] = get_internal_image(1544);
            images_patroljeep_758_1_16[1] = get_internal_image(1545);
            images_patroljeep_758_1_24[0] = get_internal_image(1546);
            images_patroljeep_758_1_24[1] = get_internal_image(1547);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(pick_random(4, 0, 8, 16, 24));
        movement = new BallMovement(this);
        movement->index = 0;
        ((BallMovement*)movement)->set_max_speed(20);
        ((BallMovement*)movement)->set_deceleration(0);
        ((BallMovement*)movement)->randomizer = 20;
        ((BallMovement*)movement)->init();
        create_alterables();
    }
};
FrameObject * create_patroljeep_758(int x, int y)
{
    return new (Active::pool.create()) PatrolJeep_758(x, y);
}
static Image* images_tempplant_759_0_0[1];
static Direction direction_tempplant_759_0_0 = {0, 50, 50, 0, 1, images_tempplant_759_0_0, 1};
static Animation anim_tempplant_759_0 = {&direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, NULL, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0, &direction_tempplant_759_0_0};
static Animation * anim_array_tempplant_759[1] = {&anim_tempplant_759_0};
static Animations anim_tempplant_759 = {1, &anim_array_tempplant_759[0]};
static bool anim_tempplant_759_initialized;
class TempPLANT_759 : public Active
{
public:
    TempPLANT_759(int x, int y) : Active(x, y, TempPLANT_759_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("tempPLANT", 9);
#endif
        this->animations = &anim_tempplant_759;
        if (!anim_tempplant_759_initialized) {
            anim_tempplant_759_initialized = true;
            images_tempplant_759_0_0[0] = get_internal_image(2059);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 135);
        create_alterables();
    }
};
FrameObject * create_tempplant_759(int x, int y)
{
    return new (Active::pool.create()) TempPLANT_759(x, y);
}
class TempList_760 : public ListObject
{
public:
    TempList_760(int x, int y) : ListObject(x, y, TempList_760_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("tempList", 8);
#endif
        flags &= ~SCROLL;
        list_flags |= SORT_LIST;
        index_offset = current_line = 0;
    }
};
FrameObject * create_templist_760(int x, int y)
{
    return new (ListObject::pool.create()) TempList_760(x, y);
}
static Image* images_pushupmat2_761_0_16[1];
static Direction direction_pushupmat2_761_0_16 = {16, 50, 50, 0, -1, images_pushupmat2_761_0_16, 1};
static Animation anim_pushupmat2_761_0 = {NULL, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16, &direction_pushupmat2_761_0_16};
static Animation * anim_array_pushupmat2_761[1] = {&anim_pushupmat2_761_0};
static Animations anim_pushupmat2_761 = {1, &anim_array_pushupmat2_761[0]};
static bool anim_pushupmat2_761_initialized;
class PushupMat2_761 : public Active
{
public:
    PushupMat2_761(int x, int y) : Active(x, y, PushupMat2_761_type)
    {
        // qualifiers: 28, 93
#ifndef NDEBUG
        name = std::string("Pushup Mat 2", 12);
#endif
        this->animations = &anim_pushupmat2_761;
        if (!anim_pushupmat2_761_initialized) {
            anim_pushupmat2_761_initialized = true;
            images_pushupmat2_761_0_16[0] = get_internal_image(2128);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_press_ups_46);
    }
};
FrameObject * create_pushupmat2_761(int x, int y)
{
    return new (Active::pool.create()) PushupMat2_761(x, y);
}
static Image* images_zipline_762_0_0[1];
static Direction direction_zipline_762_0_0 = {0, 50, 50, 0, -1, images_zipline_762_0_0, 1};
static Image* images_zipline_762_0_8[1];
static Direction direction_zipline_762_0_8 = {8, 50, 50, 0, -1, images_zipline_762_0_8, 1};
static Animation anim_zipline_762_0 = {&direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0, NULL, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, &direction_zipline_762_0_8, NULL, &direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0, &direction_zipline_762_0_0};
static Animation * anim_array_zipline_762[1] = {&anim_zipline_762_0};
static Animations anim_zipline_762 = {1, &anim_array_zipline_762[0]};
static bool anim_zipline_762_initialized;
class ZIPLINE_762 : public Active
{
public:
    ZIPLINE_762(int x, int y) : Active(x, y, ZIPLINE_762_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("ZIP LINE", 8);
#endif
        this->animations = &anim_zipline_762;
        if (!anim_zipline_762_initialized) {
            anim_zipline_762_initialized = true;
            images_zipline_762_0_0[0] = get_internal_image(2127);
            images_zipline_762_0_8[0] = get_internal_image(2132);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_zipline_762(int x, int y)
{
    return new (Active::pool.create()) ZIPLINE_762(x, y);
}
static Image* images_icons_763_0_0[1];
static Direction direction_icons_763_0_0 = {0, 50, 50, 0, -1, images_icons_763_0_0, 1};
static Image* images_icons_763_0_8[1];
static Direction direction_icons_763_0_8 = {8, 50, 50, 0, -1, images_icons_763_0_8, 1};
static Image* images_icons_763_0_16[1];
static Direction direction_icons_763_0_16 = {16, 50, 50, 0, -1, images_icons_763_0_16, 1};
static Animation anim_icons_763_0 = {&direction_icons_763_0_0, &direction_icons_763_0_0, &direction_icons_763_0_0, &direction_icons_763_0_0, NULL, &direction_icons_763_0_8, &direction_icons_763_0_8, &direction_icons_763_0_8, &direction_icons_763_0_8, &direction_icons_763_0_8, &direction_icons_763_0_8, &direction_icons_763_0_8, NULL, &direction_icons_763_0_16, &direction_icons_763_0_16, &direction_icons_763_0_16, &direction_icons_763_0_16, &direction_icons_763_0_16, &direction_icons_763_0_16, &direction_icons_763_0_16, &direction_icons_763_0_16, &direction_icons_763_0_16, &direction_icons_763_0_16, &direction_icons_763_0_16, NULL, &direction_icons_763_0_0, &direction_icons_763_0_0, &direction_icons_763_0_0, &direction_icons_763_0_0, &direction_icons_763_0_0, &direction_icons_763_0_0, &direction_icons_763_0_0};
static Animation * anim_array_icons_763[1] = {&anim_icons_763_0};
static Animations anim_icons_763 = {1, &anim_array_icons_763[0]};
static bool anim_icons_763_initialized;
class Icons_763 : public Active
{
public:
    Icons_763(int x, int y) : Active(x, y, Icons_763_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Icons", 5);
#endif
        this->animations = &anim_icons_763;
        if (!anim_icons_763_initialized) {
            anim_icons_763_initialized = true;
            images_icons_763_0_0[0] = get_internal_image(975);
            images_icons_763_0_8[0] = get_internal_image(2327);
            images_icons_763_0_16[0] = get_internal_image(2202);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_icons_763(int x, int y)
{
    return new (Active::pool.create()) Icons_763(x, y);
}
static Image* images_speedbag_764_0_16[1];
static Direction direction_speedbag_764_0_16 = {16, 50, 50, 0, -1, images_speedbag_764_0_16, 1};
static Animation anim_speedbag_764_0 = {NULL, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16, &direction_speedbag_764_0_16};
static Animation * anim_array_speedbag_764[1] = {&anim_speedbag_764_0};
static Animations anim_speedbag_764 = {1, &anim_array_speedbag_764[0]};
static bool anim_speedbag_764_initialized;
class SpeedBag_764 : public Active
{
public:
    SpeedBag_764(int x, int y) : Active(x, y, SpeedBag_764_type)
    {
        // qualifiers: 28, 93
#ifndef NDEBUG
        name = std::string("speed bag", 9);
#endif
        this->animations = &anim_speedbag_764;
        if (!anim_speedbag_764_initialized) {
            anim_speedbag_764_initialized = true;
            images_speedbag_764_0_16[0] = get_internal_image(2306);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_speed_bag_49);
    }
};
FrameObject * create_speedbag_764(int x, int y)
{
    return new (Active::pool.create()) SpeedBag_764(x, y);
}
static Image* images_punchbag3_765_0_16[1];
static Direction direction_punchbag3_765_0_16 = {16, 50, 50, 0, -1, images_punchbag3_765_0_16, 1};
static Animation anim_punchbag3_765_0 = {NULL, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16, &direction_punchbag3_765_0_16};
static Image* images_punchbag3_765_1_0[2];
static Direction direction_punchbag3_765_1_0 = {0, 25, 25, 0, 1, images_punchbag3_765_1_0, 2};
static Animation anim_punchbag3_765_1 = {&direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, NULL, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0, &direction_punchbag3_765_1_0};
static Animation * anim_array_punchbag3_765[2] = {&anim_punchbag3_765_0, &anim_punchbag3_765_1};
static Animations anim_punchbag3_765 = {2, &anim_array_punchbag3_765[0]};
static bool anim_punchbag3_765_initialized;
class PunchBag3_765 : public Active
{
public:
    PunchBag3_765(int x, int y) : Active(x, y, PunchBag3_765_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("punch bag 3", 11);
#endif
        this->animations = &anim_punchbag3_765;
        if (!anim_punchbag3_765_initialized) {
            anim_punchbag3_765_initialized = true;
            images_punchbag3_765_0_16[0] = get_internal_image(2332);
            images_punchbag3_765_1_0[0] = get_internal_image(2333);
            images_punchbag3_765_1_0[1] = get_internal_image(2334);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_punchbag3_765(int x, int y)
{
    return new (Active::pool.create()) PunchBag3_765(x, y);
}
class SoilBackground_766 : public ActivePicture
{
public:
    SoilBackground_766(int x, int y) : ActivePicture(x, y, SoilBackground_766_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("soil background", 15);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
        set_transparent_color(Color(0, 0, 0));
        sprite_col.width = width = 98305500;
        sprite_col.height = height = 0;
        create_alterables();
    }
};
FrameObject * create_soilbackground_766(int x, int y)
{
    return new (ActivePicture::pool.create()) SoilBackground_766(x, y);
}
class FloorLayer_767 : public ActivePicture
{
public:
    FloorLayer_767(int x, int y) : ActivePicture(x, y, FloorLayer_767_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("floor layer", 11);
#endif
        flags |= BACKGROUND;
        set_transparent_color(Color(0, 0, 0));
        sprite_col.width = width = 98305500;
        sprite_col.height = height = 0;
        create_alterables();
    }
};
FrameObject * create_floorlayer_767(int x, int y)
{
    return new (ActivePicture::pool.create()) FloorLayer_767(x, y);
}
static Image* images_dreamOverlay_0_0[1];
static Direction direction_dreamOverlay_0_0 = {0, 50, 50, 0, 1, images_dreamOverlay_0_0, 1};
static Animation anim_dreamOverlay_0 = {&direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, NULL, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0, &direction_dreamOverlay_0_0};
static Animation * anim_array_dreamOverlay[1] = {&anim_dreamOverlay_0};
static Animations anim_dreamOverlay = {1, &anim_array_dreamOverlay[0]};
static bool anim_dreamOverlay_initialized;
class DreamOverlay : public Active
{
public:
    DreamOverlay(int x, int y) : Active(x, y, dreamOverlay_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dream Overlay", 13);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_dreamOverlay;
        if (!anim_dreamOverlay_initialized) {
            anim_dreamOverlay_initialized = true;
            images_dreamOverlay_0_0[0] = get_internal_image(101);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 105);
        set_shader(Render::LINEARDODGE);
        create_alterables();
    }
};
FrameObject * create_dreamOverlay(int x, int y)
{
    return new (Active::pool.create()) DreamOverlay(x, y);
}
static Image* images_tutguardleft_769_0_0[1];
static Direction direction_tutguardleft_769_0_0 = {0, 50, 50, 0, 1, images_tutguardleft_769_0_0, 1};
static Animation anim_tutguardleft_769_0 = {&direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, NULL, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0, &direction_tutguardleft_769_0_0};
static Animation * anim_array_tutguardleft_769[1] = {&anim_tutguardleft_769_0};
static Animations anim_tutguardleft_769 = {1, &anim_array_tutguardleft_769[0]};
static bool anim_tutguardleft_769_initialized;
class TUTGuardLEFT_769 : public Active
{
public:
    TUTGuardLEFT_769(int x, int y) : Active(x, y, TUTGuardLEFT_769_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TUT - Guard LEFT", 16);
#endif
        set_visible(false);
        this->animations = &anim_tutguardleft_769;
        if (!anim_tutguardleft_769_initialized) {
            anim_tutguardleft_769_initialized = true;
            images_tutguardleft_769_0_0[0] = get_internal_image(1408);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_tutguardleft_769(int x, int y)
{
    return new (Active::pool.create()) TUTGuardLEFT_769(x, y);
}
static Image* images_tutguardright_770_0_0[1];
static Direction direction_tutguardright_770_0_0 = {0, 50, 50, 0, 1, images_tutguardright_770_0_0, 1};
static Animation anim_tutguardright_770_0 = {&direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, NULL, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0, &direction_tutguardright_770_0_0};
static Animation * anim_array_tutguardright_770[1] = {&anim_tutguardright_770_0};
static Animations anim_tutguardright_770 = {1, &anim_array_tutguardright_770[0]};
static bool anim_tutguardright_770_initialized;
class TUTGuardRIGHT_770 : public Active
{
public:
    TUTGuardRIGHT_770(int x, int y) : Active(x, y, TUTGuardRIGHT_770_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TUT - Guard RIGHT", 17);
#endif
        set_visible(false);
        this->animations = &anim_tutguardright_770;
        if (!anim_tutguardright_770_initialized) {
            anim_tutguardright_770_initialized = true;
            images_tutguardright_770_0_0[0] = get_internal_image(1417);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_tutguardright_770(int x, int y)
{
    return new (Active::pool.create()) TUTGuardRIGHT_770(x, y);
}
static Image* images_playercollision_771_0_0[1];
static Direction direction_playercollision_771_0_0 = {0, 50, 50, 0, -1, images_playercollision_771_0_0, 1};
static Image* images_playercollision_771_0_8[1];
static Direction direction_playercollision_771_0_8 = {8, 50, 50, 0, -1, images_playercollision_771_0_8, 1};
static Image* images_playercollision_771_0_16[1];
static Direction direction_playercollision_771_0_16 = {16, 50, 50, 0, -1, images_playercollision_771_0_16, 1};
static Image* images_playercollision_771_0_24[1];
static Direction direction_playercollision_771_0_24 = {24, 50, 50, 0, -1, images_playercollision_771_0_24, 1};
static Animation anim_playercollision_771_0 = {&direction_playercollision_771_0_0, &direction_playercollision_771_0_0, &direction_playercollision_771_0_0, &direction_playercollision_771_0_0, NULL, &direction_playercollision_771_0_8, &direction_playercollision_771_0_8, &direction_playercollision_771_0_8, &direction_playercollision_771_0_8, &direction_playercollision_771_0_8, &direction_playercollision_771_0_8, &direction_playercollision_771_0_8, NULL, &direction_playercollision_771_0_16, &direction_playercollision_771_0_16, &direction_playercollision_771_0_16, &direction_playercollision_771_0_16, &direction_playercollision_771_0_16, &direction_playercollision_771_0_16, &direction_playercollision_771_0_16, NULL, &direction_playercollision_771_0_24, &direction_playercollision_771_0_24, &direction_playercollision_771_0_24, &direction_playercollision_771_0_24, &direction_playercollision_771_0_24, &direction_playercollision_771_0_24, &direction_playercollision_771_0_24, NULL, &direction_playercollision_771_0_0, &direction_playercollision_771_0_0, &direction_playercollision_771_0_0};
static Animation * anim_array_playercollision_771[1] = {&anim_playercollision_771_0};
static Animations anim_playercollision_771 = {1, &anim_array_playercollision_771[0]};
static bool anim_playercollision_771_initialized;
class PlayerCollision_771 : public Active
{
public:
    PlayerCollision_771(int x, int y) : Active(x, y, PlayerCollision_771_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Player Collision", 16);
#endif
        this->animations = &anim_playercollision_771;
        if (!anim_playercollision_771_initialized) {
            anim_playercollision_771_initialized = true;
            images_playercollision_771_0_0[0] = get_internal_image(649);
            images_playercollision_771_0_8[0] = get_internal_image(2161);
            images_playercollision_771_0_16[0] = get_internal_image(2166);
            images_playercollision_771_0_24[0] = get_internal_image(2175);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_playercollision_771(int x, int y)
{
    return new (Active::pool.create()) PlayerCollision_771(x, y);
}
static Image* images_tutorialArrow_0_0[4];
static Direction direction_tutorialArrow_0_0 = {0, 10, 10, 0, -1, images_tutorialArrow_0_0, 4};
static Image* images_tutorialArrow_0_16[4];
static Direction direction_tutorialArrow_0_16 = {16, 10, 10, 0, -1, images_tutorialArrow_0_16, 4};
static Image* images_tutorialArrow_0_24[4];
static Direction direction_tutorialArrow_0_24 = {24, 10, 10, 0, -1, images_tutorialArrow_0_24, 4};
static Animation anim_tutorialArrow_0 = {&direction_tutorialArrow_0_0, &direction_tutorialArrow_0_0, &direction_tutorialArrow_0_0, &direction_tutorialArrow_0_0, &direction_tutorialArrow_0_0, &direction_tutorialArrow_0_0, &direction_tutorialArrow_0_0, &direction_tutorialArrow_0_0, NULL, &direction_tutorialArrow_0_16, &direction_tutorialArrow_0_16, &direction_tutorialArrow_0_16, &direction_tutorialArrow_0_16, &direction_tutorialArrow_0_16, &direction_tutorialArrow_0_16, &direction_tutorialArrow_0_16, &direction_tutorialArrow_0_16, &direction_tutorialArrow_0_16, &direction_tutorialArrow_0_16, &direction_tutorialArrow_0_16, NULL, &direction_tutorialArrow_0_24, &direction_tutorialArrow_0_24, &direction_tutorialArrow_0_24, &direction_tutorialArrow_0_24, &direction_tutorialArrow_0_24, &direction_tutorialArrow_0_24, &direction_tutorialArrow_0_24, NULL, &direction_tutorialArrow_0_0, &direction_tutorialArrow_0_0, &direction_tutorialArrow_0_0};
static Image* images_tutorialArrow_2_0[2];
static Direction direction_tutorialArrow_2_0 = {0, 5, 5, 0, -1, images_tutorialArrow_2_0, 2};
static Animation anim_tutorialArrow_2 = {&direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, NULL, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0, &direction_tutorialArrow_2_0};
static Animation * anim_array_tutorialArrow[3] = {&anim_tutorialArrow_0, NULL, &anim_tutorialArrow_2};
static Animations anim_tutorialArrow = {3, &anim_array_tutorialArrow[0]};
static bool anim_tutorialArrow_initialized;
class TutorialArrow : public Active
{
public:
    TutorialArrow(int x, int y) : Active(x, y, tutorialArrow_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("TutArrow", 8);
#endif
        this->animations = &anim_tutorialArrow;
        if (!anim_tutorialArrow_initialized) {
            anim_tutorialArrow_initialized = true;
            images_tutorialArrow_0_0[0] = get_internal_image(2173);
            images_tutorialArrow_0_0[1] = get_internal_image(2352);
            images_tutorialArrow_0_0[2] = get_internal_image(2357);
            images_tutorialArrow_0_0[3] = get_internal_image(2352);
            images_tutorialArrow_0_16[0] = get_internal_image(2361);
            images_tutorialArrow_0_16[1] = get_internal_image(2358);
            images_tutorialArrow_0_16[2] = get_internal_image(2362);
            images_tutorialArrow_0_16[3] = get_internal_image(2358);
            images_tutorialArrow_0_24[0] = get_internal_image(2354);
            images_tutorialArrow_0_24[1] = get_internal_image(2356);
            images_tutorialArrow_0_24[2] = get_internal_image(2355);
            images_tutorialArrow_0_24[3] = get_internal_image(2356);
            images_tutorialArrow_2_0[0] = get_internal_image(162);
            images_tutorialArrow_2_0[1] = get_internal_image(2349);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_tutorialArrow(int x, int y)
{
    return new (Active::pool.create()) TutorialArrow(x, y);
}
static Image* images_tutarrow2_773_2_0[2];
static Direction direction_tutarrow2_773_2_0 = {0, 5, 5, 0, -1, images_tutarrow2_773_2_0, 2};
static Image* images_tutarrow2_773_2_16[2];
static Direction direction_tutarrow2_773_2_16 = {16, 10, 10, 0, -1, images_tutarrow2_773_2_16, 2};
static Animation anim_tutarrow2_773_2 = {&direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, NULL, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, &direction_tutarrow2_773_2_16, NULL, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0, &direction_tutarrow2_773_2_0};
static Animation * anim_array_tutarrow2_773[3] = {NULL, NULL, &anim_tutarrow2_773_2};
static Animations anim_tutarrow2_773 = {3, &anim_array_tutarrow2_773[0]};
static bool anim_tutarrow2_773_initialized;
class TutArrow2_773 : public Active
{
public:
    TutArrow2_773(int x, int y) : Active(x, y, TutArrow2_773_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("TutArrow 2", 10);
#endif
        this->animations = &anim_tutarrow2_773;
        if (!anim_tutarrow2_773_initialized) {
            anim_tutarrow2_773_initialized = true;
            images_tutarrow2_773_2_0[0] = get_internal_image(162);
            images_tutarrow2_773_2_0[1] = get_internal_image(2349);
            images_tutarrow2_773_2_16[0] = get_internal_image(2360);
            images_tutarrow2_773_2_16[1] = get_internal_image(2359);
        }
        active_flags |= TRANSPARENT;
        animation = RUNNING;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 95);
        create_alterables();
    }
};
FrameObject * create_tutarrow2_773(int x, int y)
{
    return new (Active::pool.create()) TutArrow2_773(x, y);
}
FRAMEOBJECT_IMPL(SteamObject)
FRAMEOBJECT_IMPL(StringTokenizer)
FRAMEOBJECT_IMPL(WindowControl)
FRAMEOBJECT_IMPL(ListObject)
FRAMEOBJECT_IMPL(SystemBox)
FRAMEOBJECT_IMPL(HTTPObject)
FRAMEOBJECT_IMPL(AdvancedDirection)
FRAMEOBJECT_IMPL(FrameObject)
FRAMEOBJECT_IMPL(AssociateArray)
FRAMEOBJECT_IMPL(Active)
FRAMEOBJECT_IMPL(MoveIt)
FRAMEOBJECT_IMPL(ActivePicture)
FRAMEOBJECT_IMPL(StringParser)
FRAMEOBJECT_IMPL(Counter)
FRAMEOBJECT_IMPL(PathPlanner)
FRAMEOBJECT_IMPL(EditObject)
FRAMEOBJECT_IMPL(ArrayObject)
FRAMEOBJECT_IMPL(Backdrop)
FRAMEOBJECT_IMPL(QuickBackdrop)
FRAMEOBJECT_IMPL(Text)
FRAMEOBJECT_IMPL(TextBlitter)
FRAMEOBJECT_IMPL(StringReplace)
FRAMEOBJECT_IMPL(INI)
FRAMEOBJECT_IMPL(LayerObject)
