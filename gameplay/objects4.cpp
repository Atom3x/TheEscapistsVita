#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

class ActivePicture_319 : public ActivePicture
{
public:
    ActivePicture_319(int x, int y) : ActivePicture(x, y, ActivePicture_319_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active Picture", 14);
#endif
        set_transparent_color(Color(255, 255, 255));
        sprite_col.width = width = 16;
        sprite_col.height = height = 16;
        create_alterables();
    }
};
FrameObject * create_activepicture_319(int x, int y)
{
    return new (ActivePicture::pool.create()) ActivePicture_319(x, y);
}
class GroundTiles : public ArrayObject {
public:
    GroundTiles(int x, int y) : ArrayObject(x, y, groundTiles_type) {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Ground_Tiles", 12);
#endif
        initialize(true, 0, 250, 250, 5);
    }
};
FrameObject* create_groundTiles(int x, int y) {
    return new (ArrayObject::pool.create()) GroundTiles(x, y);
}
class GroundObjects_321 : public ArrayObject
{
public:
    GroundObjects_321(int x, int y) : ArrayObject(x, y, GroundObjects_321_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Ground_Objects", 14);
#endif
        initialize(true, 0, 250, 250, 5);
    }
};
FrameObject * create_groundobjects_321(int x, int y)
{
    return new (ArrayObject::pool.create()) GroundObjects_321(x, y);
}
class Mapload_322 : public INI
{
public:
    Mapload_322(int x, int y) : INI(x, y, Mapload_322_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Mapload", 7);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
        create_alterables();
    }
};
FrameObject * create_mapload_322(int x, int y)
{
    return new (INI::pool.create()) Mapload_322(x, y);
}
static Image* images_mapsetupobstaclemarker_323_0_0[1];
static Direction direction_mapsetupobstaclemarker_323_0_0 = {0, 50, 50, 0, 1, images_mapsetupobstaclemarker_323_0_0, 1};
static Animation anim_mapsetupobstaclemarker_323_0 = {&direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, NULL, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0, &direction_mapsetupobstaclemarker_323_0_0};
static Animation * anim_array_mapsetupobstaclemarker_323[1] = {&anim_mapsetupobstaclemarker_323_0};
static Animations anim_mapsetupobstaclemarker_323 = {1, &anim_array_mapsetupobstaclemarker_323[0]};
static bool anim_mapsetupobstaclemarker_323_initialized;
class MapSetupObstacleMarker_323 : public Active
{
public:
    MapSetupObstacleMarker_323(int x, int y) : Active(x, y, MapSetupObstacleMarker_323_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MapSetupObstacleMarker", 22);
#endif
        this->animations = &anim_mapsetupobstaclemarker_323;
        if (!anim_mapsetupobstaclemarker_323_initialized) {
            anim_mapsetupobstaclemarker_323_initialized = true;
            images_mapsetupobstaclemarker_323_0_0[0] = get_internal_image(214);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_mapsetupobstaclemarker_323(int x, int y)
{
    return new (Active::pool.create()) MapSetupObstacleMarker_323(x, y);
}
static Image* images_shadow_324_0_0[1];
static Direction direction_shadow_324_0_0 = {0, 50, 50, 0, -1, images_shadow_324_0_0, 1};
static Image* images_shadow_324_0_8[1];
static Direction direction_shadow_324_0_8 = {8, 50, 50, 0, -1, images_shadow_324_0_8, 1};
static Image* images_shadow_324_0_16[1];
static Direction direction_shadow_324_0_16 = {16, 50, 50, 0, -1, images_shadow_324_0_16, 1};
static Image* images_shadow_324_0_24[1];
static Direction direction_shadow_324_0_24 = {24, 50, 50, 0, -1, images_shadow_324_0_24, 1};
static Animation anim_shadow_324_0 = {&direction_shadow_324_0_0, &direction_shadow_324_0_0, &direction_shadow_324_0_0, &direction_shadow_324_0_0, NULL, &direction_shadow_324_0_8, &direction_shadow_324_0_8, &direction_shadow_324_0_8, &direction_shadow_324_0_8, &direction_shadow_324_0_8, &direction_shadow_324_0_8, &direction_shadow_324_0_8, NULL, &direction_shadow_324_0_16, &direction_shadow_324_0_16, &direction_shadow_324_0_16, &direction_shadow_324_0_16, &direction_shadow_324_0_16, &direction_shadow_324_0_16, &direction_shadow_324_0_16, NULL, &direction_shadow_324_0_24, &direction_shadow_324_0_24, &direction_shadow_324_0_24, &direction_shadow_324_0_24, &direction_shadow_324_0_24, &direction_shadow_324_0_24, &direction_shadow_324_0_24, NULL, &direction_shadow_324_0_0, &direction_shadow_324_0_0, &direction_shadow_324_0_0};
static Image* images_shadow_324_2_0[1];
static Direction direction_shadow_324_2_0 = {0, 50, 50, 0, -1, images_shadow_324_2_0, 1};
static Image* images_shadow_324_2_8[1];
static Direction direction_shadow_324_2_8 = {8, 50, 50, 0, -1, images_shadow_324_2_8, 1};
static Animation anim_shadow_324_2 = {&direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0, NULL, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, &direction_shadow_324_2_8, NULL, &direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0, &direction_shadow_324_2_0};
static Image* images_shadow_324_5_0[1];
static Direction direction_shadow_324_5_0 = {0, 50, 50, 0, -1, images_shadow_324_5_0, 1};
static Animation anim_shadow_324_5 = {&direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, NULL, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0, &direction_shadow_324_5_0};
static Animation * anim_array_shadow_324[6] = {&anim_shadow_324_0, NULL, &anim_shadow_324_2, NULL, NULL, &anim_shadow_324_5};
static Animations anim_shadow_324 = {6, &anim_array_shadow_324[0]};
static bool anim_shadow_324_initialized;
class Shadow_324 : public Active
{
public:
    Shadow_324(int x, int y) : Active(x, y, Shadow_324_type)
    {
        // qualifiers: 87
#ifndef NDEBUG
        name = std::string("Shadow", 6);
#endif
        this->animations = &anim_shadow_324;
        if (!anim_shadow_324_initialized) {
            anim_shadow_324_initialized = true;
            images_shadow_324_0_0[0] = get_internal_image(913);
            images_shadow_324_0_8[0] = get_internal_image(963);
            images_shadow_324_0_16[0] = get_internal_image(962);
            images_shadow_324_0_24[0] = get_internal_image(2815);
            images_shadow_324_2_0[0] = get_internal_image(950);
            images_shadow_324_2_8[0] = get_internal_image(955);
            images_shadow_324_5_0[0] = get_internal_image(2415);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 215);
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_shadow_324(int x, int y)
{
    return new (Active::pool.create()) Shadow_324(x, y);
}
static Image* images_containertimber2_325_0_0[1];
static Direction direction_containertimber2_325_0_0 = {0, 50, 50, 0, -1, images_containertimber2_325_0_0, 1};
static Animation anim_containertimber2_325_0 = {&direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, NULL, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0, &direction_containertimber2_325_0_0};
static Animation * anim_array_containertimber2_325[1] = {&anim_containertimber2_325_0};
static Animations anim_containertimber2_325 = {1, &anim_array_containertimber2_325[0]};
static bool anim_containertimber2_325_initialized;
class ContainerTimber2_325 : public Active
{
public:
    ContainerTimber2_325(int x, int y) : Active(x, y, ContainerTimber2_325_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Container - Timber 2", 20);
#endif
        this->animations = &anim_containertimber2_325;
        if (!anim_containertimber2_325_initialized) {
            anim_containertimber2_325_initialized = true;
            images_containertimber2_325_0_0[0] = get_internal_image(478);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_timber_20);
    }
};
FrameObject * create_containertimber2_325(int x, int y)
{
    return new (Active::pool.create()) ContainerTimber2_325(x, y);
}
static Image* images_metalshop_326_0_0[1];
static Direction direction_metalshop_326_0_0 = {0, 50, 50, 0, 1, images_metalshop_326_0_0, 1};
static Animation anim_metalshop_326_0 = {&direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, NULL, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0, &direction_metalshop_326_0_0};
static Animation * anim_array_metalshop_326[1] = {&anim_metalshop_326_0};
static Animations anim_metalshop_326 = {1, &anim_array_metalshop_326[0]};
static bool anim_metalshop_326_initialized;
class Metalshop_326 : public Active
{
public:
    Metalshop_326(int x, int y) : Active(x, y, Metalshop_326_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Metalshop", 9);
#endif
        this->animations = &anim_metalshop_326;
        if (!anim_metalshop_326_initialized) {
            anim_metalshop_326_initialized = true;
            images_metalshop_326_0_0[0] = get_internal_image(923);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_timber_20);
    }
};
FrameObject * create_metalshop_326(int x, int y)
{
    return new (Active::pool.create()) Metalshop_326(x, y);
}
static Image* images_metalshop2_327_0_0[1];
static Direction direction_metalshop2_327_0_0 = {0, 50, 50, 0, 1, images_metalshop2_327_0_0, 1};
static Animation anim_metalshop2_327_0 = {&direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, NULL, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0, &direction_metalshop2_327_0_0};
static Animation * anim_array_metalshop2_327[1] = {&anim_metalshop2_327_0};
static Animations anim_metalshop2_327 = {1, &anim_array_metalshop2_327[0]};
static bool anim_metalshop2_327_initialized;
class Metalshop2_327 : public Active
{
public:
    Metalshop2_327(int x, int y) : Active(x, y, Metalshop2_327_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Metalshop 2", 11);
#endif
        this->animations = &anim_metalshop2_327;
        if (!anim_metalshop2_327_initialized) {
            anim_metalshop2_327_initialized = true;
            images_metalshop2_327_0_0[0] = get_internal_image(925);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_timber_20);
    }
};
FrameObject * create_metalshop2_327(int x, int y)
{
    return new (Active::pool.create()) Metalshop2_327(x, y);
}
static Image* images_doormetalshop_328_0_0[1];
static Direction direction_doormetalshop_328_0_0 = {0, 50, 50, 0, -1, images_doormetalshop_328_0_0, 1};
static Image* images_doormetalshop_328_0_16[1];
static Direction direction_doormetalshop_328_0_16 = {16, 50, 50, 0, -1, images_doormetalshop_328_0_16, 1};
static Animation anim_doormetalshop_328_0 = {&direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, NULL, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, &direction_doormetalshop_328_0_16, NULL, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0, &direction_doormetalshop_328_0_0};
static Animation * anim_array_doormetalshop_328[1] = {&anim_doormetalshop_328_0};
static Animations anim_doormetalshop_328 = {1, &anim_array_doormetalshop_328[0]};
static bool anim_doormetalshop_328_initialized;
class DoorMetalshop_328 : public Active
{
public:
    DoorMetalshop_328(int x, int y) : Active(x, y, DoorMetalshop_328_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Metalshop", 16);
#endif
        this->animations = &anim_doormetalshop_328;
        if (!anim_doormetalshop_328_initialized) {
            anim_doormetalshop_328_initialized = true;
            images_doormetalshop_328_0_0[0] = get_internal_image(1221);
            images_doormetalshop_328_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_metalshop_35);
    }
};
FrameObject * create_doormetalshop_328(int x, int y)
{
    return new (Active::pool.create()) DoorMetalshop_328(x, y);
}
static Image* images_licenseprints_329_0_0[1];
static Direction direction_licenseprints_329_0_0 = {0, 50, 50, 0, -1, images_licenseprints_329_0_0, 1};
static Animation anim_licenseprints_329_0 = {&direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, NULL, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0, &direction_licenseprints_329_0_0};
static Image* images_licenseprints_329_1_0[2];
static Direction direction_licenseprints_329_1_0 = {0, 20, 20, 0, 5, images_licenseprints_329_1_0, 2};
static Animation anim_licenseprints_329_1 = {&direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, NULL, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0, &direction_licenseprints_329_1_0};
static Image* images_licenseprints_329_5_0[1];
static Direction direction_licenseprints_329_5_0 = {0, 50, 50, 0, -1, images_licenseprints_329_5_0, 1};
static Animation anim_licenseprints_329_5 = {&direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, NULL, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0, &direction_licenseprints_329_5_0};
static Animation * anim_array_licenseprints_329[6] = {&anim_licenseprints_329_0, &anim_licenseprints_329_1, NULL, NULL, NULL, &anim_licenseprints_329_5};
static Animations anim_licenseprints_329 = {6, &anim_array_licenseprints_329[0]};
static bool anim_licenseprints_329_initialized;
class LicensePrints_329 : public Active
{
public:
    LicensePrints_329(int x, int y) : Active(x, y, LicensePrints_329_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("License Prints", 14);
#endif
        this->animations = &anim_licenseprints_329;
        if (!anim_licenseprints_329_initialized) {
            anim_licenseprints_329_initialized = true;
            images_licenseprints_329_0_0[0] = get_internal_image(924);
            images_licenseprints_329_1_0[0] = get_internal_image(926);
            images_licenseprints_329_1_0[1] = get_internal_image(924);
            images_licenseprints_329_5_0[0] = get_internal_image(1002);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_licenseprints_329(int x, int y)
{
    return new (Active::pool.create()) LicensePrints_329(x, y);
}
static Image* images_light_330_0_0[1];
static Direction direction_light_330_0_0 = {0, 50, 50, 0, 1, images_light_330_0_0, 1};
static Animation anim_light_330_0 = {&direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, NULL, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0, &direction_light_330_0_0};
static Image* images_light_330_5_0[1];
static Direction direction_light_330_5_0 = {0, 5, 5, 0, -1, images_light_330_5_0, 1};
static Animation anim_light_330_5 = {&direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, NULL, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0, &direction_light_330_5_0};
static Image* images_light_330_7_0[2];
static Direction direction_light_330_7_0 = {0, 5, 5, 0, -1, images_light_330_7_0, 2};
static Animation anim_light_330_7 = {&direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, NULL, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0, &direction_light_330_7_0};
static Animation * anim_array_light_330[8] = {&anim_light_330_0, NULL, NULL, NULL, NULL, &anim_light_330_5, NULL, &anim_light_330_7};
static Animations anim_light_330 = {8, &anim_array_light_330[0]};
static bool anim_light_330_initialized;
class Light_330 : public Active
{
public:
    Light_330(int x, int y) : Active(x, y, Light_330_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Light", 5);
#endif
        set_visible(false);
        this->animations = &anim_light_330;
        if (!anim_light_330_initialized) {
            anim_light_330_initialized = true;
            images_light_330_0_0[0] = get_internal_image(953);
            images_light_330_5_0[0] = get_internal_image(935);
            images_light_330_7_0[0] = get_internal_image(600);
            images_light_330_7_0[1] = get_internal_image(944);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 225);
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(0, 15);
    }
};
FrameObject * create_light_330(int x, int y)
{
    return new (Active::pool.create()) Light_330(x, y);
}
static Image* images_torch_331_0_0[1];
static Direction direction_torch_331_0_0 = {0, 50, 50, 0, 1, images_torch_331_0_0, 1};
static Image* images_torch_331_0_1[1];
static Direction direction_torch_331_0_1 = {1, 50, 50, 0, 1, images_torch_331_0_1, 1};
static Image* images_torch_331_0_2[1];
static Direction direction_torch_331_0_2 = {2, 50, 50, 0, 1, images_torch_331_0_2, 1};
static Image* images_torch_331_0_3[1];
static Direction direction_torch_331_0_3 = {3, 50, 50, 0, 1, images_torch_331_0_3, 1};
static Image* images_torch_331_0_4[1];
static Direction direction_torch_331_0_4 = {4, 50, 50, 0, 1, images_torch_331_0_4, 1};
static Image* images_torch_331_0_5[1];
static Direction direction_torch_331_0_5 = {5, 50, 50, 0, 1, images_torch_331_0_5, 1};
static Image* images_torch_331_0_6[1];
static Direction direction_torch_331_0_6 = {6, 50, 50, 0, 1, images_torch_331_0_6, 1};
static Image* images_torch_331_0_7[1];
static Direction direction_torch_331_0_7 = {7, 50, 50, 0, 1, images_torch_331_0_7, 1};
static Image* images_torch_331_0_8[1];
static Direction direction_torch_331_0_8 = {8, 50, 50, 0, 1, images_torch_331_0_8, 1};
static Image* images_torch_331_0_9[1];
static Direction direction_torch_331_0_9 = {9, 50, 50, 0, 1, images_torch_331_0_9, 1};
static Image* images_torch_331_0_10[1];
static Direction direction_torch_331_0_10 = {10, 50, 50, 0, 1, images_torch_331_0_10, 1};
static Image* images_torch_331_0_11[1];
static Direction direction_torch_331_0_11 = {11, 50, 50, 0, 1, images_torch_331_0_11, 1};
static Image* images_torch_331_0_12[1];
static Direction direction_torch_331_0_12 = {12, 50, 50, 0, 1, images_torch_331_0_12, 1};
static Image* images_torch_331_0_13[1];
static Direction direction_torch_331_0_13 = {13, 50, 50, 0, 1, images_torch_331_0_13, 1};
static Image* images_torch_331_0_14[1];
static Direction direction_torch_331_0_14 = {14, 50, 50, 0, 1, images_torch_331_0_14, 1};
static Image* images_torch_331_0_15[1];
static Direction direction_torch_331_0_15 = {15, 50, 50, 0, 1, images_torch_331_0_15, 1};
static Image* images_torch_331_0_16[1];
static Direction direction_torch_331_0_16 = {16, 50, 50, 0, 1, images_torch_331_0_16, 1};
static Image* images_torch_331_0_17[1];
static Direction direction_torch_331_0_17 = {17, 50, 50, 0, 1, images_torch_331_0_17, 1};
static Image* images_torch_331_0_18[1];
static Direction direction_torch_331_0_18 = {18, 50, 50, 0, 1, images_torch_331_0_18, 1};
static Image* images_torch_331_0_19[1];
static Direction direction_torch_331_0_19 = {19, 50, 50, 0, 1, images_torch_331_0_19, 1};
static Image* images_torch_331_0_20[1];
static Direction direction_torch_331_0_20 = {20, 50, 50, 0, 1, images_torch_331_0_20, 1};
static Image* images_torch_331_0_21[1];
static Direction direction_torch_331_0_21 = {21, 50, 50, 0, 1, images_torch_331_0_21, 1};
static Image* images_torch_331_0_22[1];
static Direction direction_torch_331_0_22 = {22, 50, 50, 0, 1, images_torch_331_0_22, 1};
static Image* images_torch_331_0_23[1];
static Direction direction_torch_331_0_23 = {23, 50, 50, 0, 1, images_torch_331_0_23, 1};
static Image* images_torch_331_0_24[1];
static Direction direction_torch_331_0_24 = {24, 50, 50, 0, 1, images_torch_331_0_24, 1};
static Image* images_torch_331_0_25[1];
static Direction direction_torch_331_0_25 = {25, 50, 50, 0, 1, images_torch_331_0_25, 1};
static Image* images_torch_331_0_26[1];
static Direction direction_torch_331_0_26 = {26, 50, 50, 0, 1, images_torch_331_0_26, 1};
static Image* images_torch_331_0_27[1];
static Direction direction_torch_331_0_27 = {27, 50, 50, 0, 1, images_torch_331_0_27, 1};
static Image* images_torch_331_0_28[1];
static Direction direction_torch_331_0_28 = {28, 50, 50, 0, 1, images_torch_331_0_28, 1};
static Image* images_torch_331_0_29[1];
static Direction direction_torch_331_0_29 = {29, 50, 50, 0, 1, images_torch_331_0_29, 1};
static Image* images_torch_331_0_30[1];
static Direction direction_torch_331_0_30 = {30, 50, 50, 0, 1, images_torch_331_0_30, 1};
static Image* images_torch_331_0_31[1];
static Direction direction_torch_331_0_31 = {31, 50, 50, 0, 1, images_torch_331_0_31, 1};
static Animation anim_torch_331_0 = {&direction_torch_331_0_0, &direction_torch_331_0_1, &direction_torch_331_0_2, &direction_torch_331_0_3, &direction_torch_331_0_4, &direction_torch_331_0_5, &direction_torch_331_0_6, &direction_torch_331_0_7, &direction_torch_331_0_8, &direction_torch_331_0_9, &direction_torch_331_0_10, &direction_torch_331_0_11, &direction_torch_331_0_12, &direction_torch_331_0_13, &direction_torch_331_0_14, &direction_torch_331_0_15, &direction_torch_331_0_16, &direction_torch_331_0_17, &direction_torch_331_0_18, &direction_torch_331_0_19, &direction_torch_331_0_20, &direction_torch_331_0_21, &direction_torch_331_0_22, &direction_torch_331_0_23, &direction_torch_331_0_24, &direction_torch_331_0_25, &direction_torch_331_0_26, &direction_torch_331_0_27, &direction_torch_331_0_28, &direction_torch_331_0_29, &direction_torch_331_0_30, &direction_torch_331_0_31};
static Image* images_torch_331_5_0[1];
static Direction direction_torch_331_5_0 = {0, 50, 50, 0, 1, images_torch_331_5_0, 1};
static Animation anim_torch_331_5 = {&direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, NULL, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0, &direction_torch_331_5_0};
static Animation * anim_array_torch_331[6] = {&anim_torch_331_0, NULL, NULL, NULL, NULL, &anim_torch_331_5};
static Animations anim_torch_331 = {6, &anim_array_torch_331[0]};
static bool anim_torch_331_initialized;
class Torch_331 : public Active
{
public:
    Torch_331(int x, int y) : Active(x, y, Torch_331_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("torch", 5);
#endif
        this->animations = &anim_torch_331;
        if (!anim_torch_331_initialized) {
            anim_torch_331_initialized = true;
            images_torch_331_0_0[0] = get_internal_image(212);
            images_torch_331_0_1[0] = get_internal_image(210);
            images_torch_331_0_2[0] = get_internal_image(213);
            images_torch_331_0_3[0] = get_internal_image(229);
            images_torch_331_0_4[0] = get_internal_image(230);
            images_torch_331_0_5[0] = get_internal_image(257);
            images_torch_331_0_6[0] = get_internal_image(268);
            images_torch_331_0_7[0] = get_internal_image(276);
            images_torch_331_0_8[0] = get_internal_image(347);
            images_torch_331_0_9[0] = get_internal_image(349);
            images_torch_331_0_10[0] = get_internal_image(354);
            images_torch_331_0_11[0] = get_internal_image(370);
            images_torch_331_0_12[0] = get_internal_image(372);
            images_torch_331_0_13[0] = get_internal_image(374);
            images_torch_331_0_14[0] = get_internal_image(377);
            images_torch_331_0_15[0] = get_internal_image(390);
            images_torch_331_0_16[0] = get_internal_image(391);
            images_torch_331_0_17[0] = get_internal_image(406);
            images_torch_331_0_18[0] = get_internal_image(407);
            images_torch_331_0_19[0] = get_internal_image(410);
            images_torch_331_0_20[0] = get_internal_image(411);
            images_torch_331_0_21[0] = get_internal_image(412);
            images_torch_331_0_22[0] = get_internal_image(415);
            images_torch_331_0_23[0] = get_internal_image(417);
            images_torch_331_0_24[0] = get_internal_image(419);
            images_torch_331_0_25[0] = get_internal_image(420);
            images_torch_331_0_26[0] = get_internal_image(421);
            images_torch_331_0_27[0] = get_internal_image(440);
            images_torch_331_0_28[0] = get_internal_image(443);
            images_torch_331_0_29[0] = get_internal_image(449);
            images_torch_331_0_30[0] = get_internal_image(451);
            images_torch_331_0_31[0] = get_internal_image(452);
            images_torch_331_5_0[0] = get_internal_image(225);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 205);
        set_shader(Render::ADDITIVE);
        create_alterables();
    }
};
FrameObject * create_torch_331(int x, int y)
{
    return new (Active::pool.create()) Torch_331(x, y);
}
static Image* images_markervendor_332_0_0[2];
static Direction direction_markervendor_332_0_0 = {0, 3, 3, 0, -1, images_markervendor_332_0_0, 2};
static Animation anim_markervendor_332_0 = {&direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, NULL, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0, &direction_markervendor_332_0_0};
static Image* images_markervendor_332_5_0[2];
static Direction direction_markervendor_332_5_0 = {0, 3, 3, 0, -1, images_markervendor_332_5_0, 2};
static Animation anim_markervendor_332_5 = {&direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, NULL, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0, &direction_markervendor_332_5_0};
static Animation * anim_array_markervendor_332[6] = {&anim_markervendor_332_0, NULL, NULL, NULL, NULL, &anim_markervendor_332_5};
static Animations anim_markervendor_332 = {6, &anim_array_markervendor_332[0]};
static bool anim_markervendor_332_initialized;
class MarkerVendor_332 : public Active
{
public:
    MarkerVendor_332(int x, int y) : Active(x, y, MarkerVendor_332_type)
    {
        // qualifiers: 79
#ifndef NDEBUG
        name = std::string("Marker - Vendor", 15);
#endif
        this->animations = &anim_markervendor_332;
        if (!anim_markervendor_332_initialized) {
            anim_markervendor_332_initialized = true;
            images_markervendor_332_0_0[0] = get_internal_image(259);
            images_markervendor_332_0_0[1] = get_internal_image(815);
            images_markervendor_332_5_0[0] = get_internal_image(49);
            images_markervendor_332_5_0[1] = get_internal_image(815);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_markervendor_332(int x, int y)
{
    return new (Active::pool.create()) MarkerVendor_332(x, y);
}
class FatigueText : public TextBlitter
{
public:
    FatigueText(int x, int y) : TextBlitter(x, y, fatigueText_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Text_Fatigue", 12);
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
        image = get_internal_image(111);
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
        alterables->strings.set(5, str_fatigue_36);
    }
};
FrameObject * create_fatigueText(int x, int y)
{
    return new (TextBlitter::pool.create()) FatigueText(x, y);
}
class VentTileRow : public StringTokenizer
{
public:
    VentTileRow(int x, int y) : StringTokenizer(x, y, ventTileRow_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("vents", 5);
#endif
    }
};
FrameObject * create_ventTileRow(int x, int y)
{
    return new (StringTokenizer::pool.create()) VentTileRow(x, y);
}
class RoofTileRow : public StringTokenizer
{
public:
    RoofTileRow(int x, int y) : StringTokenizer(x, y, roofTileRow_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("roof", 4);
#endif
    }
};
FrameObject * create_roofTileRow(int x, int y)
{
    return new (StringTokenizer::pool.create()) RoofTileRow(x, y);
}
static Image* images_ladders_336_0_8[1];
static Direction direction_ladders_336_0_8 = {8, 50, 50, 0, -1, images_ladders_336_0_8, 1};
static Image* images_ladders_336_0_24[1];
static Direction direction_ladders_336_0_24 = {24, 50, 50, 0, -1, images_ladders_336_0_24, 1};
static Animation anim_ladders_336_0 = {NULL, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, &direction_ladders_336_0_8, NULL, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24, &direction_ladders_336_0_24};
static Animation * anim_array_ladders_336[1] = {&anim_ladders_336_0};
static Animations anim_ladders_336 = {1, &anim_array_ladders_336[0]};
static bool anim_ladders_336_initialized;
class Ladders_336 : public Active
{
public:
    Ladders_336(int x, int y) : Active(x, y, Ladders_336_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Ladders", 7);
#endif
        this->animations = &anim_ladders_336;
        if (!anim_ladders_336_initialized) {
            anim_ladders_336_initialized = true;
            images_ladders_336_0_8[0] = get_internal_image(647);
            images_ladders_336_0_24[0] = get_internal_image(184);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_ladders_336(int x, int y)
{
    return new (Active::pool.create()) Ladders_336(x, y);
}
static Image* images_bedguard_337_0_24[1];
static Direction direction_bedguard_337_0_24 = {24, 50, 50, 0, -1, images_bedguard_337_0_24, 1};
static Animation anim_bedguard_337_0 = {&direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, NULL, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24, &direction_bedguard_337_0_24};
static Image* images_bedguard_337_1_0[1];
static Direction direction_bedguard_337_1_0 = {0, 50, 50, 0, -1, images_bedguard_337_1_0, 1};
static Animation anim_bedguard_337_1 = {&direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, NULL, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0, &direction_bedguard_337_1_0};
static Animation * anim_array_bedguard_337[2] = {&anim_bedguard_337_0, &anim_bedguard_337_1};
static Animations anim_bedguard_337 = {2, &anim_array_bedguard_337[0]};
static bool anim_bedguard_337_initialized;
class BedGuard_337 : public Active
{
public:
    BedGuard_337(int x, int y) : Active(x, y, BedGuard_337_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Bed -guard", 10);
#endif
        this->animations = &anim_bedguard_337;
        if (!anim_bedguard_337_initialized) {
            anim_bedguard_337_initialized = true;
            images_bedguard_337_0_24[0] = get_internal_image(137);
            images_bedguard_337_1_0[0] = get_internal_image(179);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_bedguard_337(int x, int y)
{
    return new (Active::pool.create()) BedGuard_337(x, y);
}
static Image* images_bedplayer_338_0_0[1];
static Direction direction_bedplayer_338_0_0 = {0, 50, 50, 0, -1, images_bedplayer_338_0_0, 1};
static Image* images_bedplayer_338_0_24[1];
static Direction direction_bedplayer_338_0_24 = {24, 50, 50, 0, -1, images_bedplayer_338_0_24, 1};
static Animation anim_bedplayer_338_0 = {&direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, NULL, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, &direction_bedplayer_338_0_24, NULL, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0, &direction_bedplayer_338_0_0};
static Image* images_bedplayer_338_1_0[1];
static Direction direction_bedplayer_338_1_0 = {0, 50, 50, 0, -1, images_bedplayer_338_1_0, 1};
static Image* images_bedplayer_338_1_24[1];
static Direction direction_bedplayer_338_1_24 = {24, 50, 50, 0, -1, images_bedplayer_338_1_24, 1};
static Animation anim_bedplayer_338_1 = {&direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, NULL, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, &direction_bedplayer_338_1_24, NULL, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0, &direction_bedplayer_338_1_0};
static Image* images_bedplayer_338_2_0[1];
static Direction direction_bedplayer_338_2_0 = {0, 50, 50, 0, -1, images_bedplayer_338_2_0, 1};
static Image* images_bedplayer_338_2_24[1];
static Direction direction_bedplayer_338_2_24 = {24, 50, 50, 0, -1, images_bedplayer_338_2_24, 1};
static Animation anim_bedplayer_338_2 = {&direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, NULL, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, &direction_bedplayer_338_2_24, NULL, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0, &direction_bedplayer_338_2_0};
static Animation * anim_array_bedplayer_338[3] = {&anim_bedplayer_338_0, &anim_bedplayer_338_1, &anim_bedplayer_338_2};
static Animations anim_bedplayer_338 = {3, &anim_array_bedplayer_338[0]};
static bool anim_bedplayer_338_initialized;
class BedPlayer_338 : public Active
{
public:
    BedPlayer_338(int x, int y) : Active(x, y, BedPlayer_338_type)
    {
        // qualifiers: 14, 28
#ifndef NDEBUG
        name = std::string("Bed - Player", 12);
#endif
        this->animations = &anim_bedplayer_338;
        if (!anim_bedplayer_338_initialized) {
            anim_bedplayer_338_initialized = true;
            images_bedplayer_338_0_0[0] = get_internal_image(2458);
            images_bedplayer_338_0_24[0] = get_internal_image(2456);
            images_bedplayer_338_1_0[0] = get_internal_image(2475);
            images_bedplayer_338_1_24[0] = get_internal_image(2463);
            images_bedplayer_338_2_0[0] = get_internal_image(2477);
            images_bedplayer_338_2_24[0] = get_internal_image(2464);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_bedplayer_338(int x, int y)
{
    return new (Active::pool.create()) BedPlayer_338(x, y);
}
static Image* images_towershoottrail_339_0_0[1];
static Direction direction_towershoottrail_339_0_0 = {0, 50, 50, 0, -1, images_towershoottrail_339_0_0, 1};
static Animation anim_towershoottrail_339_0 = {&direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, NULL, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0, &direction_towershoottrail_339_0_0};
static Animation * anim_array_towershoottrail_339[1] = {&anim_towershoottrail_339_0};
static Animations anim_towershoottrail_339 = {1, &anim_array_towershoottrail_339[0]};
static bool anim_towershoottrail_339_initialized;
class TowerShootTrail_339 : public Active
{
public:
    TowerShootTrail_339(int x, int y) : Active(x, y, TowerShootTrail_339_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TowerShootTrail", 15);
#endif
        this->animations = &anim_towershoottrail_339;
        if (!anim_towershoottrail_339_initialized) {
            anim_towershoottrail_339_initialized = true;
            images_towershoottrail_339_0_0[0] = get_internal_image(318);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 10);
    }
};
FrameObject * create_towershoottrail_339(int x, int y)
{
    return new (Active::pool.create()) TowerShootTrail_339(x, y);
}
class Stats_340 : public TextBlitter
{
public:
    Stats_340(int x, int y) : TextBlitter(x, y, Stats_340_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("stats", 5);
#endif
        width = 40;
        height = 15;
        char_width = 5;
        char_height = 8;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(2178);
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
        set_text(std::string("B", 1));
        has_callback = false;
        blend_color = Color(255, 255, 255, 255);
        create_alterables();
    }
};
FrameObject * create_stats_340(int x, int y)
{
    return new (TextBlitter::pool.create()) Stats_340(x, y);
}
static Image* images_waypointtowerent_341_0_0[1];
static Direction direction_waypointtowerent_341_0_0 = {0, 50, 50, 0, 1, images_waypointtowerent_341_0_0, 1};
static Animation anim_waypointtowerent_341_0 = {&direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, NULL, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0, &direction_waypointtowerent_341_0_0};
static Animation * anim_array_waypointtowerent_341[1] = {&anim_waypointtowerent_341_0};
static Animations anim_waypointtowerent_341 = {1, &anim_array_waypointtowerent_341[0]};
static bool anim_waypointtowerent_341_initialized;
class WaypointTowerEnt_341 : public Active
{
public:
    WaypointTowerEnt_341(int x, int y) : Active(x, y, WaypointTowerEnt_341_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Tower Ent", 20);
#endif
        set_visible(false);
        this->animations = &anim_waypointtowerent_341;
        if (!anim_waypointtowerent_341_initialized) {
            anim_waypointtowerent_341_initialized = true;
            images_waypointtowerent_341_0_0[0] = get_internal_image(615);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointtowerent_341(int x, int y)
{
    return new (Active::pool.create()) WaypointTowerEnt_341(x, y);
}
static Image* images_towerguard_342_0_0[2];
static Direction direction_towerguard_342_0_0 = {0, 10, 10, 0, -1, images_towerguard_342_0_0, 2};
static Image* images_towerguard_342_0_8[2];
static Direction direction_towerguard_342_0_8 = {8, 10, 10, 0, -1, images_towerguard_342_0_8, 2};
static Image* images_towerguard_342_0_16[2];
static Direction direction_towerguard_342_0_16 = {16, 10, 10, 0, -1, images_towerguard_342_0_16, 2};
static Image* images_towerguard_342_0_24[2];
static Direction direction_towerguard_342_0_24 = {24, 10, 10, 0, -1, images_towerguard_342_0_24, 2};
static Animation anim_towerguard_342_0 = {&direction_towerguard_342_0_0, &direction_towerguard_342_0_0, &direction_towerguard_342_0_0, &direction_towerguard_342_0_0, NULL, &direction_towerguard_342_0_8, &direction_towerguard_342_0_8, &direction_towerguard_342_0_8, &direction_towerguard_342_0_8, &direction_towerguard_342_0_8, &direction_towerguard_342_0_8, &direction_towerguard_342_0_8, NULL, &direction_towerguard_342_0_16, &direction_towerguard_342_0_16, &direction_towerguard_342_0_16, &direction_towerguard_342_0_16, &direction_towerguard_342_0_16, &direction_towerguard_342_0_16, &direction_towerguard_342_0_16, NULL, &direction_towerguard_342_0_24, &direction_towerguard_342_0_24, &direction_towerguard_342_0_24, &direction_towerguard_342_0_24, &direction_towerguard_342_0_24, &direction_towerguard_342_0_24, &direction_towerguard_342_0_24, NULL, &direction_towerguard_342_0_0, &direction_towerguard_342_0_0, &direction_towerguard_342_0_0};
static Image* images_towerguard_342_4_24[3];
static Direction direction_towerguard_342_4_24 = {24, 10, 10, 0, -1, images_towerguard_342_4_24, 3};
static Animation anim_towerguard_342_4 = {&direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, NULL, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24, &direction_towerguard_342_4_24};
static Image* images_towerguard_342_6_0[1];
static Direction direction_towerguard_342_6_0 = {0, 6, 6, 0, 1, images_towerguard_342_6_0, 1};
static Image* images_towerguard_342_6_8[1];
static Direction direction_towerguard_342_6_8 = {8, 6, 6, 0, 1, images_towerguard_342_6_8, 1};
static Image* images_towerguard_342_6_16[1];
static Direction direction_towerguard_342_6_16 = {16, 6, 6, 0, 1, images_towerguard_342_6_16, 1};
static Image* images_towerguard_342_6_24[1];
static Direction direction_towerguard_342_6_24 = {24, 6, 6, 0, 1, images_towerguard_342_6_24, 1};
static Animation anim_towerguard_342_6 = {&direction_towerguard_342_6_0, &direction_towerguard_342_6_0, &direction_towerguard_342_6_0, &direction_towerguard_342_6_0, NULL, &direction_towerguard_342_6_8, &direction_towerguard_342_6_8, &direction_towerguard_342_6_8, &direction_towerguard_342_6_8, &direction_towerguard_342_6_8, &direction_towerguard_342_6_8, &direction_towerguard_342_6_8, NULL, &direction_towerguard_342_6_16, &direction_towerguard_342_6_16, &direction_towerguard_342_6_16, &direction_towerguard_342_6_16, &direction_towerguard_342_6_16, &direction_towerguard_342_6_16, &direction_towerguard_342_6_16, NULL, &direction_towerguard_342_6_24, &direction_towerguard_342_6_24, &direction_towerguard_342_6_24, &direction_towerguard_342_6_24, &direction_towerguard_342_6_24, &direction_towerguard_342_6_24, &direction_towerguard_342_6_24, NULL, &direction_towerguard_342_6_0, &direction_towerguard_342_6_0, &direction_towerguard_342_6_0};
static Image* images_towerguard_342_8_0[1];
static Direction direction_towerguard_342_8_0 = {0, 50, 50, 0, -1, images_towerguard_342_8_0, 1};
static Image* images_towerguard_342_8_16[2];
static Direction direction_towerguard_342_8_16 = {16, 5, 5, 0, -1, images_towerguard_342_8_16, 2};
static Animation anim_towerguard_342_8 = {&direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, NULL, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, &direction_towerguard_342_8_16, NULL, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0, &direction_towerguard_342_8_0};
static Image* images_towerguard_342_9_0[2];
static Direction direction_towerguard_342_9_0 = {0, 6, 6, 0, 2, images_towerguard_342_9_0, 2};
static Image* images_towerguard_342_9_8[2];
static Direction direction_towerguard_342_9_8 = {8, 6, 6, 0, 2, images_towerguard_342_9_8, 2};
static Image* images_towerguard_342_9_16[2];
static Direction direction_towerguard_342_9_16 = {16, 6, 6, 0, 2, images_towerguard_342_9_16, 2};
static Image* images_towerguard_342_9_24[2];
static Direction direction_towerguard_342_9_24 = {24, 6, 6, 0, 2, images_towerguard_342_9_24, 2};
static Animation anim_towerguard_342_9 = {&direction_towerguard_342_9_0, &direction_towerguard_342_9_0, &direction_towerguard_342_9_0, &direction_towerguard_342_9_0, NULL, &direction_towerguard_342_9_8, &direction_towerguard_342_9_8, &direction_towerguard_342_9_8, &direction_towerguard_342_9_8, &direction_towerguard_342_9_8, &direction_towerguard_342_9_8, &direction_towerguard_342_9_8, NULL, &direction_towerguard_342_9_16, &direction_towerguard_342_9_16, &direction_towerguard_342_9_16, &direction_towerguard_342_9_16, &direction_towerguard_342_9_16, &direction_towerguard_342_9_16, &direction_towerguard_342_9_16, NULL, &direction_towerguard_342_9_24, &direction_towerguard_342_9_24, &direction_towerguard_342_9_24, &direction_towerguard_342_9_24, &direction_towerguard_342_9_24, &direction_towerguard_342_9_24, &direction_towerguard_342_9_24, NULL, &direction_towerguard_342_9_0, &direction_towerguard_342_9_0, &direction_towerguard_342_9_0};
static Animation * anim_array_towerguard_342[10] = {&anim_towerguard_342_0, NULL, NULL, NULL, &anim_towerguard_342_4, NULL, &anim_towerguard_342_6, NULL, &anim_towerguard_342_8, &anim_towerguard_342_9};
static Animations anim_towerguard_342 = {10, &anim_array_towerguard_342[0]};
static bool anim_towerguard_342_initialized;
class TowerGuard_342 : public Active
{
public:
    TowerGuard_342(int x, int y) : Active(x, y, TowerGuard_342_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Tower Guard", 11);
#endif
        this->animations = &anim_towerguard_342;
        if (!anim_towerguard_342_initialized) {
            anim_towerguard_342_initialized = true;
            images_towerguard_342_0_0[0] = get_internal_image(991);
            images_towerguard_342_0_0[1] = get_internal_image(1044);
            images_towerguard_342_0_8[0] = get_internal_image(1000);
            images_towerguard_342_0_8[1] = get_internal_image(472);
            images_towerguard_342_0_16[0] = get_internal_image(1299);
            images_towerguard_342_0_16[1] = get_internal_image(1300);
            images_towerguard_342_0_24[0] = get_internal_image(21);
            images_towerguard_342_0_24[1] = get_internal_image(11);
            images_towerguard_342_4_24[0] = get_internal_image(707);
            images_towerguard_342_4_24[1] = get_internal_image(703);
            images_towerguard_342_4_24[2] = get_internal_image(706);
            images_towerguard_342_6_0[0] = get_internal_image(510);
            images_towerguard_342_6_8[0] = get_internal_image(513);
            images_towerguard_342_6_16[0] = get_internal_image(511);
            images_towerguard_342_6_24[0] = get_internal_image(512);
            images_towerguard_342_8_0[0] = get_internal_image(516);
            images_towerguard_342_8_16[0] = get_internal_image(492);
            images_towerguard_342_8_16[1] = get_internal_image(644);
            images_towerguard_342_9_0[0] = get_internal_image(68);
            images_towerguard_342_9_0[1] = get_internal_image(312);
            images_towerguard_342_9_8[0] = get_internal_image(316);
            images_towerguard_342_9_8[1] = get_internal_image(92);
            images_towerguard_342_9_16[0] = get_internal_image(82);
            images_towerguard_342_9_16[1] = get_internal_image(313);
            images_towerguard_342_9_24[0] = get_internal_image(315);
            images_towerguard_342_9_24[1] = get_internal_image(24);
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
FrameObject * create_towerguard_342(int x, int y)
{
    return new (Active::pool.create()) TowerGuard_342(x, y);
}
static Image* images_screenFade_0_0[1];
static Direction direction_screenFade_0_0 = {0, 50, 50, 0, -1, images_screenFade_0_0, 1};
static Animation anim_screenFade_0 = {&direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, NULL, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0, &direction_screenFade_0_0};
static Animation * anim_array_screenFade[1] = {&anim_screenFade_0};
static Animations anim_screenFade = {1, &anim_array_screenFade[0]};
static bool anim_screenFade_initialized;
class ScreenFade : public Active
{
public:
    ScreenFade(int x, int y) : Active(x, y, screenFade_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FADE", 4);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_screenFade;
        if (!anim_screenFade_initialized) {
            anim_screenFade_initialized = true;
            images_screenFade_0_0[0] = get_internal_image(735);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_screenFade(int x, int y)
{
    return new (Active::pool.create()) ScreenFade(x, y);
}
static Image* images_bedsolitary_344_0_24[1];
static Direction direction_bedsolitary_344_0_24 = {24, 50, 50, 0, -1, images_bedsolitary_344_0_24, 1};
static Animation anim_bedsolitary_344_0 = {&direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, NULL, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24, &direction_bedsolitary_344_0_24};
static Image* images_bedsolitary_344_1_0[1];
static Direction direction_bedsolitary_344_1_0 = {0, 50, 50, 0, -1, images_bedsolitary_344_1_0, 1};
static Animation anim_bedsolitary_344_1 = {&direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, NULL, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0, &direction_bedsolitary_344_1_0};
static Animation * anim_array_bedsolitary_344[2] = {&anim_bedsolitary_344_0, &anim_bedsolitary_344_1};
static Animations anim_bedsolitary_344 = {2, &anim_array_bedsolitary_344[0]};
static bool anim_bedsolitary_344_initialized;
class BedSolitary_344 : public Active
{
public:
    BedSolitary_344(int x, int y) : Active(x, y, BedSolitary_344_type)
    {
        // qualifiers: 14, 28, 88
#ifndef NDEBUG
        name = std::string("Bed - Solitary", 14);
#endif
        this->animations = &anim_bedsolitary_344;
        if (!anim_bedsolitary_344_initialized) {
            anim_bedsolitary_344_initialized = true;
            images_bedsolitary_344_0_24[0] = get_internal_image(674);
            images_bedsolitary_344_1_0[0] = get_internal_image(179);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_bedsolitary_344(int x, int y)
{
    return new (Active::pool.create()) BedSolitary_344(x, y);
}
static Image* images_grapplingrope_345_0_0[1];
static Direction direction_grapplingrope_345_0_0 = {0, 50, 50, 0, -1, images_grapplingrope_345_0_0, 1};
static Animation anim_grapplingrope_345_0 = {&direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, NULL, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0, &direction_grapplingrope_345_0_0};
static Image* images_grapplingrope_345_2_0[1];
static Direction direction_grapplingrope_345_2_0 = {0, 50, 50, 0, -1, images_grapplingrope_345_2_0, 1};
static Animation anim_grapplingrope_345_2 = {&direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, NULL, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0, &direction_grapplingrope_345_2_0};
static Animation * anim_array_grapplingrope_345[3] = {&anim_grapplingrope_345_0, NULL, &anim_grapplingrope_345_2};
static Animations anim_grapplingrope_345 = {3, &anim_array_grapplingrope_345[0]};
static bool anim_grapplingrope_345_initialized;
class GrapplingRope_345 : public Active
{
public:
    GrapplingRope_345(int x, int y) : Active(x, y, GrapplingRope_345_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("GrapplingRope", 13);
#endif
        this->animations = &anim_grapplingrope_345;
        if (!anim_grapplingrope_345_initialized) {
            anim_grapplingrope_345_initialized = true;
            images_grapplingrope_345_0_0[0] = get_internal_image(949);
            images_grapplingrope_345_2_0[0] = get_internal_image(940);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_grapplingrope_345(int x, int y)
{
    return new (Active::pool.create()) GrapplingRope_345(x, y);
}
class CraftSort_346 : public ListObject
{
public:
    CraftSort_346(int x, int y) : ListObject(x, y, CraftSort_346_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("CraftSort", 9);
#endif
        flags &= ~SCROLL;
        set_visible(false);
        list_flags |= SORT_LIST;
        index_offset = current_line = -1;
    }
};
FrameObject * create_craftsort_346(int x, int y)
{
    return new (ListObject::pool.create()) CraftSort_346(x, y);
}
static Image* images_shadow2_347_0_0[1];
static Direction direction_shadow2_347_0_0 = {0, 50, 50, 0, 1, images_shadow2_347_0_0, 1};
static Image* images_shadow2_347_0_8[1];
static Direction direction_shadow2_347_0_8 = {8, 50, 50, 0, 1, images_shadow2_347_0_8, 1};
static Image* images_shadow2_347_0_16[1];
static Direction direction_shadow2_347_0_16 = {16, 50, 50, 0, 1, images_shadow2_347_0_16, 1};
static Animation anim_shadow2_347_0 = {&direction_shadow2_347_0_0, &direction_shadow2_347_0_0, &direction_shadow2_347_0_0, &direction_shadow2_347_0_0, NULL, &direction_shadow2_347_0_8, &direction_shadow2_347_0_8, &direction_shadow2_347_0_8, &direction_shadow2_347_0_8, &direction_shadow2_347_0_8, &direction_shadow2_347_0_8, &direction_shadow2_347_0_8, NULL, &direction_shadow2_347_0_16, &direction_shadow2_347_0_16, &direction_shadow2_347_0_16, &direction_shadow2_347_0_16, &direction_shadow2_347_0_16, &direction_shadow2_347_0_16, &direction_shadow2_347_0_16, &direction_shadow2_347_0_16, &direction_shadow2_347_0_16, &direction_shadow2_347_0_16, &direction_shadow2_347_0_16, NULL, &direction_shadow2_347_0_0, &direction_shadow2_347_0_0, &direction_shadow2_347_0_0, &direction_shadow2_347_0_0, &direction_shadow2_347_0_0, &direction_shadow2_347_0_0, &direction_shadow2_347_0_0};
static Animation * anim_array_shadow2_347[1] = {&anim_shadow2_347_0};
static Animations anim_shadow2_347 = {1, &anim_array_shadow2_347[0]};
static bool anim_shadow2_347_initialized;
class Shadow2_347 : public Active
{
public:
    Shadow2_347(int x, int y) : Active(x, y, Shadow2_347_type)
    {
        // qualifiers: 87
#ifndef NDEBUG
        name = std::string("Shadow 2", 8);
#endif
        this->animations = &anim_shadow2_347;
        if (!anim_shadow2_347_initialized) {
            anim_shadow2_347_initialized = true;
            images_shadow2_347_0_0[0] = get_internal_image(913);
            images_shadow2_347_0_8[0] = get_internal_image(916);
            images_shadow2_347_0_16[0] = get_internal_image(915);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_shadow2_347(int x, int y)
{
    return new (Active::pool.create()) Shadow2_347(x, y);
}
static Image* images_shady_348_0_0[1];
static Direction direction_shady_348_0_0 = {0, 50, 50, 0, 1, images_shady_348_0_0, 1};
static Image* images_shady_348_0_8[1];
static Direction direction_shady_348_0_8 = {8, 50, 50, 0, 1, images_shady_348_0_8, 1};
static Image* images_shady_348_0_16[1];
static Direction direction_shady_348_0_16 = {16, 50, 50, 0, 1, images_shady_348_0_16, 1};
static Animation anim_shady_348_0 = {&direction_shady_348_0_0, &direction_shady_348_0_0, &direction_shady_348_0_0, &direction_shady_348_0_0, NULL, &direction_shady_348_0_8, &direction_shady_348_0_8, &direction_shady_348_0_8, &direction_shady_348_0_8, &direction_shady_348_0_8, &direction_shady_348_0_8, &direction_shady_348_0_8, NULL, &direction_shady_348_0_16, &direction_shady_348_0_16, &direction_shady_348_0_16, &direction_shady_348_0_16, &direction_shady_348_0_16, &direction_shady_348_0_16, &direction_shady_348_0_16, &direction_shady_348_0_16, &direction_shady_348_0_16, &direction_shady_348_0_16, &direction_shady_348_0_16, NULL, &direction_shady_348_0_0, &direction_shady_348_0_0, &direction_shady_348_0_0, &direction_shady_348_0_0, &direction_shady_348_0_0, &direction_shady_348_0_0, &direction_shady_348_0_0};
static Animation * anim_array_shady_348[1] = {&anim_shady_348_0};
static Animations anim_shady_348 = {1, &anim_array_shady_348[0]};
static bool anim_shady_348_initialized;
class Shady_348 : public Active
{
public:
    Shady_348(int x, int y) : Active(x, y, Shady_348_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("shady", 5);
#endif
        this->animations = &anim_shady_348;
        if (!anim_shady_348_initialized) {
            anim_shady_348_initialized = true;
            images_shady_348_0_0[0] = get_internal_image(913);
            images_shady_348_0_8[0] = get_internal_image(916);
            images_shady_348_0_16[0] = get_internal_image(915);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 215);
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_shady_348(int x, int y)
{
    return new (Active::pool.create()) Shady_348(x, y);
}
class CraftingPossibles_349 : public ListObject
{
public:
    CraftingPossibles_349(int x, int y) : ListObject(x, y, CraftingPossibles_349_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Crafting Possibles", 18);
#endif
        flags &= ~SCROLL;
        set_visible(false);
        list_flags |= SORT_LIST;
        index_offset = current_line = 0;
    }
};
FrameObject * create_craftingpossibles_349(int x, int y)
{
    return new (ListObject::pool.create()) CraftingPossibles_349(x, y);
}
class SAVING_350 : public INI
{
public:
    SAVING_350(int x, int y) : INI(x, y, SAVING_350_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SAVING", 6);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
        create_alterables();
    }
};
FrameObject * create_saving_350(int x, int y)
{
    return new (INI::pool.create()) SAVING_350(x, y);
}
static Image* images_savecheckground_351_0_0[1];
static Direction direction_savecheckground_351_0_0 = {0, 5, 5, 0, -1, images_savecheckground_351_0_0, 1};
static Animation anim_savecheckground_351_0 = {&direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, NULL, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0, &direction_savecheckground_351_0_0};
static Animation * anim_array_savecheckground_351[1] = {&anim_savecheckground_351_0};
static Animations anim_savecheckground_351 = {1, &anim_array_savecheckground_351[0]};
static bool anim_savecheckground_351_initialized;
class SAVECHECKGround_351 : public Active
{
public:
    SAVECHECKGround_351(int x, int y) : Active(x, y, SAVECHECKGround_351_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("SAVE CHECK (ground)", 19);
#endif
        this->animations = &anim_savecheckground_351;
        if (!anim_savecheckground_351_initialized) {
            anim_savecheckground_351_initialized = true;
            images_savecheckground_351_0_0[0] = get_internal_image(913);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_savecheckground_351(int x, int y)
{
    return new (Active::pool.create()) SAVECHECKGround_351(x, y);
}
class Dialogue4_352 : public Text
{
public:
    Dialogue4_352(int x, int y) : Text(x, y, Dialogue4_352_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Dialogue 4", 10);
#endif
        flags &= ~SCROLL;
        width = 170;
        height = 104;
        blend_color = Color(255, 255, 255);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_LEFT | ALIGN_TOP;
        add_line(std::string("Flush", 5));
        create_alterables();
    }
};
FrameObject * create_dialogue4_352(int x, int y)
{
    return new (Text::pool.create()) Dialogue4_352(x, y);
}
static Image* images_powerupplot_353_0_0[1];
static Direction direction_powerupplot_353_0_0 = {0, 50, 50, 0, 1, images_powerupplot_353_0_0, 1};
static Image* images_powerupplot_353_0_16[1];
static Direction direction_powerupplot_353_0_16 = {16, 50, 50, 0, 1, images_powerupplot_353_0_16, 1};
static Animation anim_powerupplot_353_0 = {&direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, NULL, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, &direction_powerupplot_353_0_16, NULL, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0, &direction_powerupplot_353_0_0};
static Animation * anim_array_powerupplot_353[1] = {&anim_powerupplot_353_0};
static Animations anim_powerupplot_353 = {1, &anim_array_powerupplot_353[0]};
static bool anim_powerupplot_353_initialized;
class PowerupPlot_353 : public Active
{
public:
    PowerupPlot_353(int x, int y) : Active(x, y, PowerupPlot_353_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Powerup Plot", 12);
#endif
        this->animations = &anim_powerupplot_353;
        if (!anim_powerupplot_353_initialized) {
            anim_powerupplot_353_initialized = true;
            images_powerupplot_353_0_0[0] = get_internal_image(768);
            images_powerupplot_353_0_16[0] = get_internal_image(148);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_powerupplot_353(int x, int y)
{
    return new (Active::pool.create()) PowerupPlot_353(x, y);
}
static Image* images_kettle_354_0_0[1];
static Direction direction_kettle_354_0_0 = {0, 50, 50, 0, -1, images_kettle_354_0_0, 1};
static Animation anim_kettle_354_0 = {&direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, NULL, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0, &direction_kettle_354_0_0};
static Animation * anim_array_kettle_354[1] = {&anim_kettle_354_0};
static Animations anim_kettle_354 = {1, &anim_array_kettle_354[0]};
static bool anim_kettle_354_initialized;
class Kettle_354 : public Active
{
public:
    Kettle_354(int x, int y) : Active(x, y, Kettle_354_type)
    {
        // qualifiers: 63
#ifndef NDEBUG
        name = std::string("Kettle", 6);
#endif
        this->animations = &anim_kettle_354;
        if (!anim_kettle_354_initialized) {
            anim_kettle_354_initialized = true;
            images_kettle_354_0_0[0] = get_internal_image(772);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_kettle_354(int x, int y)
{
    return new (Active::pool.create()) Kettle_354(x, y);
}
static Image* images_shadow3_355_0_8[1];
static Direction direction_shadow3_355_0_8 = {8, 50, 50, 0, -1, images_shadow3_355_0_8, 1};
static Image* images_shadow3_355_0_16[1];
static Direction direction_shadow3_355_0_16 = {16, 50, 50, 0, -1, images_shadow3_355_0_16, 1};
static Animation anim_shadow3_355_0 = {&direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, NULL, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, &direction_shadow3_355_0_16, NULL, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8, &direction_shadow3_355_0_8};
static Animation * anim_array_shadow3_355[1] = {&anim_shadow3_355_0};
static Animations anim_shadow3_355 = {1, &anim_array_shadow3_355[0]};
static bool anim_shadow3_355_initialized;
class Shadow3_355 : public Active
{
public:
    Shadow3_355(int x, int y) : Active(x, y, Shadow3_355_type)
    {
        // qualifiers: 87
#ifndef NDEBUG
        name = std::string("Shadow 3", 8);
#endif
        this->animations = &anim_shadow3_355;
        if (!anim_shadow3_355_initialized) {
            anim_shadow3_355_initialized = true;
            images_shadow3_355_0_8[0] = get_internal_image(963);
            images_shadow3_355_0_16[0] = get_internal_image(962);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_shadow3_355(int x, int y)
{
    return new (Active::pool.create()) Shadow3_355(x, y);
}
class Shadows_356 : public ArrayObject
{
public:
    Shadows_356(int x, int y) : ArrayObject(x, y, Shadows_356_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("shadows", 7);
#endif
        initialize(true, 0, 250, 250, 5);
    }
};
FrameObject * create_shadows_356(int x, int y)
{
    return new (ArrayObject::pool.create()) Shadows_356(x, y);
}
static Image* images_settingsSlider_0_0[1];
static Direction direction_settingsSlider_0_0 = {0, 50, 50, 0, 1, images_settingsSlider_0_0, 1};
static Animation anim_settingsSlider_0 = {&direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, NULL, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0, &direction_settingsSlider_0_0};
static Image* images_settingsSlider_1_0[1];
static Direction direction_settingsSlider_1_0 = {0, 50, 50, 0, -1, images_settingsSlider_1_0, 1};
static Animation anim_settingsSlider_1 = {&direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, NULL, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0, &direction_settingsSlider_1_0};
static Image* images_settingsSlider_5_0[1];
static Direction direction_settingsSlider_5_0 = {0, 50, 50, 0, -1, images_settingsSlider_5_0, 1};
static Image* images_settingsSlider_5_16[1];
static Direction direction_settingsSlider_5_16 = {16, 50, 50, 0, -1, images_settingsSlider_5_16, 1};
static Animation anim_settingsSlider_5 = {&direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, NULL, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, &direction_settingsSlider_5_16, NULL, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0, &direction_settingsSlider_5_0};
static Image* images_settingsSlider_6_0[1];
static Direction direction_settingsSlider_6_0 = {0, 50, 50, 0, -1, images_settingsSlider_6_0, 1};
static Image* images_settingsSlider_6_16[1];
static Direction direction_settingsSlider_6_16 = {16, 50, 50, 0, -1, images_settingsSlider_6_16, 1};
static Animation anim_settingsSlider_6 = {&direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, NULL, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, &direction_settingsSlider_6_16, NULL, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0, &direction_settingsSlider_6_0};
static Animation * anim_array_settingsSlider[7] = {&anim_settingsSlider_0, &anim_settingsSlider_1, NULL, NULL, NULL, &anim_settingsSlider_5, &anim_settingsSlider_6};
static Animations anim_settingsSlider = {7, &anim_array_settingsSlider[0]};
static bool anim_settingsSlider_initialized;
class SettingsSlider : public Active
{
public:
    SettingsSlider(int x, int y) : Active(x, y, settingsSlider_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Slider", 6);
#endif
        this->animations = &anim_settingsSlider;
        if (!anim_settingsSlider_initialized) {
            anim_settingsSlider_initialized = true;
            images_settingsSlider_0_0[0] = get_internal_image(1565);
            images_settingsSlider_1_0[0] = get_internal_image(1563);
            images_settingsSlider_5_0[0] = get_internal_image(1964);
            images_settingsSlider_5_16[0] = get_internal_image(2123);
            images_settingsSlider_6_0[0] = get_internal_image(1964);
            images_settingsSlider_6_16[0] = get_internal_image(2123);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_settingsSlider(int x, int y)
{
    return new (Active::pool.create()) SettingsSlider(x, y);
}
class Quota_358 : public Text
{
public:
    Quota_358(int x, int y) : Text(x, y, Quota_358_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Quota", 5);
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
FrameObject * create_quota_358(int x, int y)
{
    return new (Text::pool.create()) Quota_358(x, y);
}
class FloorGrassDEL_359 : public SystemBox
{
public:
    FloorGrassDEL_359(int x, int y) : SystemBox(x, y, FloorGrassDEL_359_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Floor - Grass - DEL", 19);
#endif
        flags |= BACKGROUND;
        width = 1500;
        height = 1500;
        image = get_internal_image(833);
        type = PATTERN_IMAGE;
        create_alterables();
    }
};
FrameObject * create_floorgrassdel_359(int x, int y)
{
    return new (SystemBox::pool.create()) FloorGrassDEL_359(x, y);
}
static Image* images_powergen_360_0_0[2];
static Direction direction_powergen_360_0_0 = {0, 5, 5, 0, -1, images_powergen_360_0_0, 2};
static Animation anim_powergen_360_0 = {&direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, NULL, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0, &direction_powergen_360_0_0};
static Image* images_powergen_360_2_0[2];
static Direction direction_powergen_360_2_0 = {0, 5, 5, 0, -1, images_powergen_360_2_0, 2};
static Animation anim_powergen_360_2 = {&direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, NULL, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0, &direction_powergen_360_2_0};
static Animation * anim_array_powergen_360[3] = {&anim_powergen_360_0, NULL, &anim_powergen_360_2};
static Animations anim_powergen_360 = {3, &anim_array_powergen_360[0]};
static bool anim_powergen_360_initialized;
class POWERGEN_360 : public Active
{
public:
    POWERGEN_360(int x, int y) : Active(x, y, POWERGEN_360_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("POWER GEN", 9);
#endif
        this->animations = &anim_powergen_360;
        if (!anim_powergen_360_initialized) {
            anim_powergen_360_initialized = true;
            images_powergen_360_0_0[0] = get_internal_image(978);
            images_powergen_360_0_0[1] = get_internal_image(1042);
            images_powergen_360_2_0[0] = get_internal_image(799);
            images_powergen_360_2_0[1] = get_internal_image(1006);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_powergen_360(int x, int y)
{
    return new (Active::pool.create()) POWERGEN_360(x, y);
}
static Image* images_favourdel_361_0_0[1];
static Direction direction_favourdel_361_0_0 = {0, 50, 50, 0, 1, images_favourdel_361_0_0, 1};
static Animation anim_favourdel_361_0 = {&direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, NULL, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0, &direction_favourdel_361_0_0};
static Image* images_favourdel_361_1_0[1];
static Direction direction_favourdel_361_1_0 = {0, 50, 50, 0, -1, images_favourdel_361_1_0, 1};
static Animation anim_favourdel_361_1 = {&direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, NULL, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0, &direction_favourdel_361_1_0};
static Image* images_favourdel_361_5_0[1];
static Direction direction_favourdel_361_5_0 = {0, 50, 50, 0, -1, images_favourdel_361_5_0, 1};
static Image* images_favourdel_361_5_16[1];
static Direction direction_favourdel_361_5_16 = {16, 50, 50, 0, -1, images_favourdel_361_5_16, 1};
static Animation anim_favourdel_361_5 = {&direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, NULL, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, &direction_favourdel_361_5_16, NULL, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0, &direction_favourdel_361_5_0};
static Image* images_favourdel_361_6_0[1];
static Direction direction_favourdel_361_6_0 = {0, 50, 50, 0, -1, images_favourdel_361_6_0, 1};
static Image* images_favourdel_361_6_16[1];
static Direction direction_favourdel_361_6_16 = {16, 50, 50, 0, -1, images_favourdel_361_6_16, 1};
static Animation anim_favourdel_361_6 = {&direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, NULL, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, &direction_favourdel_361_6_16, NULL, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0, &direction_favourdel_361_6_0};
static Animation * anim_array_favourdel_361[7] = {&anim_favourdel_361_0, &anim_favourdel_361_1, NULL, NULL, NULL, &anim_favourdel_361_5, &anim_favourdel_361_6};
static Animations anim_favourdel_361 = {7, &anim_array_favourdel_361[0]};
static bool anim_favourdel_361_initialized;
class FavourDel_361 : public Active
{
public:
    FavourDel_361(int x, int y) : Active(x, y, FavourDel_361_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("FavourDel", 9);
#endif
        this->animations = &anim_favourdel_361;
        if (!anim_favourdel_361_initialized) {
            anim_favourdel_361_initialized = true;
            images_favourdel_361_0_0[0] = get_internal_image(334);
            images_favourdel_361_1_0[0] = get_internal_image(53);
            images_favourdel_361_5_0[0] = get_internal_image(1043);
            images_favourdel_361_5_16[0] = get_internal_image(1015);
            images_favourdel_361_6_0[0] = get_internal_image(1023);
            images_favourdel_361_6_16[0] = get_internal_image(1040);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_favourdel_361(int x, int y)
{
    return new (Active::pool.create()) FavourDel_361(x, y);
}
class MoveIt_362 : public MoveIt
{
public:
    MoveIt_362(int x, int y) : MoveIt(x, y, MoveIt_362_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MoveIt", 6);
#endif
    }
};
FrameObject * create_moveit_362(int x, int y)
{
    return new (MoveIt::pool.create()) MoveIt_362(x, y);
}
class NoticeText_363 : public Text
{
public:
    NoticeText_363(int x, int y) : Text(x, y, NoticeText_363_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("NoticeText", 10);
#endif
        flags &= ~SCROLL;
        width = 220;
        height = 33;
        blend_color = Color(255, 255, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("DOORS TO THE MAIN PRISON\r\nWILL CLOSE AT 22:00", 45));
        blend_color.a = 254;
        set_shader(Render::PIXELOUTLINE);
        set_shader_parameter(std::string("color", 5), Color(0, 0, 0, 0));
        create_alterables();
    }
};
FrameObject * create_noticetext_363(int x, int y)
{
    return new (Text::pool.create()) NoticeText_363(x, y);
}
static Image* images_doorcheck_364_0_0[1];
static Direction direction_doorcheck_364_0_0 = {0, 50, 50, 0, 1, images_doorcheck_364_0_0, 1};
static Animation anim_doorcheck_364_0 = {&direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, NULL, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0, &direction_doorcheck_364_0_0};
static Animation * anim_array_doorcheck_364[1] = {&anim_doorcheck_364_0};
static Animations anim_doorcheck_364 = {1, &anim_array_doorcheck_364[0]};
static bool anim_doorcheck_364_initialized;
class DoorCheck_364 : public Active
{
public:
    DoorCheck_364(int x, int y) : Active(x, y, DoorCheck_364_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("DoorCheck", 9);
#endif
        this->animations = &anim_doorcheck_364;
        if (!anim_doorcheck_364_initialized) {
            anim_doorcheck_364_initialized = true;
            images_doorcheck_364_0_0[0] = get_internal_image(1083);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_doorcheck_364(int x, int y)
{
    return new (Active::pool.create()) DoorCheck_364(x, y);
}
static Image* images_lockdownlook_365_0_0[1];
static Direction direction_lockdownlook_365_0_0 = {0, 50, 50, 0, 1, images_lockdownlook_365_0_0, 1};
static Animation anim_lockdownlook_365_0 = {&direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, NULL, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0, &direction_lockdownlook_365_0_0};
static Animation * anim_array_lockdownlook_365[1] = {&anim_lockdownlook_365_0};
static Animations anim_lockdownlook_365 = {1, &anim_array_lockdownlook_365[0]};
static bool anim_lockdownlook_365_initialized;
class LockdownLook_365 : public Active
{
public:
    LockdownLook_365(int x, int y) : Active(x, y, LockdownLook_365_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Lockdown Look", 13);
#endif
        this->animations = &anim_lockdownlook_365;
        if (!anim_lockdownlook_365_initialized) {
            anim_lockdownlook_365_initialized = true;
            images_lockdownlook_365_0_0[0] = get_internal_image(987);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_lockdownlook_365(int x, int y)
{
    return new (Active::pool.create()) LockdownLook_365(x, y);
}
static Image* images_player1_366_0_0[2];
static Direction direction_player1_366_0_0 = {0, 10, 10, 0, -1, images_player1_366_0_0, 2};
static Image* images_player1_366_0_8[2];
static Direction direction_player1_366_0_8 = {8, 10, 10, 0, -1, images_player1_366_0_8, 2};
static Image* images_player1_366_0_16[2];
static Direction direction_player1_366_0_16 = {16, 10, 10, 0, -1, images_player1_366_0_16, 2};
static Image* images_player1_366_0_24[2];
static Direction direction_player1_366_0_24 = {24, 10, 10, 0, -1, images_player1_366_0_24, 2};
static Animation anim_player1_366_0 = {&direction_player1_366_0_0, &direction_player1_366_0_0, &direction_player1_366_0_0, &direction_player1_366_0_0, NULL, &direction_player1_366_0_8, &direction_player1_366_0_8, &direction_player1_366_0_8, &direction_player1_366_0_8, &direction_player1_366_0_8, &direction_player1_366_0_8, &direction_player1_366_0_8, NULL, &direction_player1_366_0_16, &direction_player1_366_0_16, &direction_player1_366_0_16, &direction_player1_366_0_16, &direction_player1_366_0_16, &direction_player1_366_0_16, &direction_player1_366_0_16, NULL, &direction_player1_366_0_24, &direction_player1_366_0_24, &direction_player1_366_0_24, &direction_player1_366_0_24, &direction_player1_366_0_24, &direction_player1_366_0_24, &direction_player1_366_0_24, NULL, &direction_player1_366_0_0, &direction_player1_366_0_0, &direction_player1_366_0_0};
static Image* images_player1_366_4_0[4];
static Direction direction_player1_366_4_0 = {0, 20, 20, 0, 1, images_player1_366_4_0, 4};
static Image* images_player1_366_4_16[4];
static Direction direction_player1_366_4_16 = {16, 20, 20, 0, 1, images_player1_366_4_16, 4};
static Animation anim_player1_366_4 = {&direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0, NULL, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, &direction_player1_366_4_16, NULL, &direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0, &direction_player1_366_4_0};
static Image* images_player1_366_6_0[1];
static Direction direction_player1_366_6_0 = {0, 6, 6, 0, 1, images_player1_366_6_0, 1};
static Image* images_player1_366_6_8[1];
static Direction direction_player1_366_6_8 = {8, 6, 6, 0, 1, images_player1_366_6_8, 1};
static Image* images_player1_366_6_16[1];
static Direction direction_player1_366_6_16 = {16, 6, 6, 0, 1, images_player1_366_6_16, 1};
static Image* images_player1_366_6_24[1];
static Direction direction_player1_366_6_24 = {24, 6, 6, 0, 1, images_player1_366_6_24, 1};
static Animation anim_player1_366_6 = {&direction_player1_366_6_0, &direction_player1_366_6_0, &direction_player1_366_6_0, &direction_player1_366_6_0, NULL, &direction_player1_366_6_8, &direction_player1_366_6_8, &direction_player1_366_6_8, &direction_player1_366_6_8, &direction_player1_366_6_8, &direction_player1_366_6_8, &direction_player1_366_6_8, NULL, &direction_player1_366_6_16, &direction_player1_366_6_16, &direction_player1_366_6_16, &direction_player1_366_6_16, &direction_player1_366_6_16, &direction_player1_366_6_16, &direction_player1_366_6_16, NULL, &direction_player1_366_6_24, &direction_player1_366_6_24, &direction_player1_366_6_24, &direction_player1_366_6_24, &direction_player1_366_6_24, &direction_player1_366_6_24, &direction_player1_366_6_24, NULL, &direction_player1_366_6_0, &direction_player1_366_6_0, &direction_player1_366_6_0};
static Image* images_player1_366_7_0[2];
static Direction direction_player1_366_7_0 = {0, 10, 10, 0, -1, images_player1_366_7_0, 2};
static Image* images_player1_366_7_8[2];
static Direction direction_player1_366_7_8 = {8, 10, 10, 0, -1, images_player1_366_7_8, 2};
static Image* images_player1_366_7_16[2];
static Direction direction_player1_366_7_16 = {16, 10, 10, 0, -1, images_player1_366_7_16, 2};
static Image* images_player1_366_7_24[2];
static Direction direction_player1_366_7_24 = {24, 10, 10, 0, -1, images_player1_366_7_24, 2};
static Animation anim_player1_366_7 = {&direction_player1_366_7_0, &direction_player1_366_7_0, &direction_player1_366_7_0, &direction_player1_366_7_0, NULL, &direction_player1_366_7_8, &direction_player1_366_7_8, &direction_player1_366_7_8, &direction_player1_366_7_8, &direction_player1_366_7_8, &direction_player1_366_7_8, &direction_player1_366_7_8, NULL, &direction_player1_366_7_16, &direction_player1_366_7_16, &direction_player1_366_7_16, &direction_player1_366_7_16, &direction_player1_366_7_16, &direction_player1_366_7_16, &direction_player1_366_7_16, NULL, &direction_player1_366_7_24, &direction_player1_366_7_24, &direction_player1_366_7_24, &direction_player1_366_7_24, &direction_player1_366_7_24, &direction_player1_366_7_24, &direction_player1_366_7_24, NULL, &direction_player1_366_7_0, &direction_player1_366_7_0, &direction_player1_366_7_0};
static Image* images_player1_366_8_0[1];
static Direction direction_player1_366_8_0 = {0, 50, 50, 0, -1, images_player1_366_8_0, 1};
static Image* images_player1_366_8_24[1];
static Direction direction_player1_366_8_24 = {24, 10, 10, 0, -1, images_player1_366_8_24, 1};
static Animation anim_player1_366_8 = {&direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0, NULL, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, &direction_player1_366_8_24, NULL, &direction_player1_366_8_0, &direction_player1_366_8_0, &direction_player1_366_8_0};
static Image* images_player1_366_9_0[2];
static Direction direction_player1_366_9_0 = {0, 50, 50, 0, -1, images_player1_366_9_0, 2};
static Animation anim_player1_366_9 = {&direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, NULL, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0, &direction_player1_366_9_0};
static Image* images_player1_366_10_0[5];
static Direction direction_player1_366_10_0 = {0, 10, 10, 0, -1, images_player1_366_10_0, 5};
static Animation anim_player1_366_10 = {&direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, NULL, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0, &direction_player1_366_10_0};
static Image* images_player1_366_11_0[2];
static Direction direction_player1_366_11_0 = {0, 6, 6, 0, -1, images_player1_366_11_0, 2};
static Image* images_player1_366_11_8[2];
static Direction direction_player1_366_11_8 = {8, 6, 6, 0, -1, images_player1_366_11_8, 2};
static Image* images_player1_366_11_16[2];
static Direction direction_player1_366_11_16 = {16, 6, 6, 0, -1, images_player1_366_11_16, 2};
static Image* images_player1_366_11_24[2];
static Direction direction_player1_366_11_24 = {24, 6, 6, 0, -1, images_player1_366_11_24, 2};
static Animation anim_player1_366_11 = {&direction_player1_366_11_0, &direction_player1_366_11_0, &direction_player1_366_11_0, &direction_player1_366_11_0, NULL, &direction_player1_366_11_8, &direction_player1_366_11_8, &direction_player1_366_11_8, &direction_player1_366_11_8, &direction_player1_366_11_8, &direction_player1_366_11_8, &direction_player1_366_11_8, NULL, &direction_player1_366_11_16, &direction_player1_366_11_16, &direction_player1_366_11_16, &direction_player1_366_11_16, &direction_player1_366_11_16, &direction_player1_366_11_16, &direction_player1_366_11_16, NULL, &direction_player1_366_11_24, &direction_player1_366_11_24, &direction_player1_366_11_24, &direction_player1_366_11_24, &direction_player1_366_11_24, &direction_player1_366_11_24, &direction_player1_366_11_24, NULL, &direction_player1_366_11_0, &direction_player1_366_11_0, &direction_player1_366_11_0};
static Image* images_player1_366_12_0[2];
static Direction direction_player1_366_12_0 = {0, 10, 10, 0, -1, images_player1_366_12_0, 2};
static Image* images_player1_366_12_8[2];
static Direction direction_player1_366_12_8 = {8, 10, 10, 0, -1, images_player1_366_12_8, 2};
static Image* images_player1_366_12_16[2];
static Direction direction_player1_366_12_16 = {16, 10, 10, 0, -1, images_player1_366_12_16, 2};
static Image* images_player1_366_12_24[2];
static Direction direction_player1_366_12_24 = {24, 10, 10, 0, -1, images_player1_366_12_24, 2};
static Animation anim_player1_366_12 = {&direction_player1_366_12_0, &direction_player1_366_12_0, &direction_player1_366_12_0, &direction_player1_366_12_0, NULL, &direction_player1_366_12_8, &direction_player1_366_12_8, &direction_player1_366_12_8, &direction_player1_366_12_8, &direction_player1_366_12_8, &direction_player1_366_12_8, &direction_player1_366_12_8, NULL, &direction_player1_366_12_16, &direction_player1_366_12_16, &direction_player1_366_12_16, &direction_player1_366_12_16, &direction_player1_366_12_16, &direction_player1_366_12_16, &direction_player1_366_12_16, NULL, &direction_player1_366_12_24, &direction_player1_366_12_24, &direction_player1_366_12_24, &direction_player1_366_12_24, &direction_player1_366_12_24, &direction_player1_366_12_24, &direction_player1_366_12_24, NULL, &direction_player1_366_12_0, &direction_player1_366_12_0, &direction_player1_366_12_0};
static Image* images_player1_366_13_0[2];
static Direction direction_player1_366_13_0 = {0, 10, 10, 0, -1, images_player1_366_13_0, 2};
static Image* images_player1_366_13_8[2];
static Direction direction_player1_366_13_8 = {8, 10, 10, 0, -1, images_player1_366_13_8, 2};
static Image* images_player1_366_13_16[2];
static Direction direction_player1_366_13_16 = {16, 10, 10, 0, -1, images_player1_366_13_16, 2};
static Image* images_player1_366_13_24[2];
static Direction direction_player1_366_13_24 = {24, 10, 10, 0, -1, images_player1_366_13_24, 2};
static Animation anim_player1_366_13 = {&direction_player1_366_13_0, &direction_player1_366_13_0, &direction_player1_366_13_0, &direction_player1_366_13_0, NULL, &direction_player1_366_13_8, &direction_player1_366_13_8, &direction_player1_366_13_8, &direction_player1_366_13_8, &direction_player1_366_13_8, &direction_player1_366_13_8, &direction_player1_366_13_8, NULL, &direction_player1_366_13_16, &direction_player1_366_13_16, &direction_player1_366_13_16, &direction_player1_366_13_16, &direction_player1_366_13_16, &direction_player1_366_13_16, &direction_player1_366_13_16, NULL, &direction_player1_366_13_24, &direction_player1_366_13_24, &direction_player1_366_13_24, &direction_player1_366_13_24, &direction_player1_366_13_24, &direction_player1_366_13_24, &direction_player1_366_13_24, NULL, &direction_player1_366_13_0, &direction_player1_366_13_0, &direction_player1_366_13_0};
static Image* images_player1_366_14_0[2];
static Direction direction_player1_366_14_0 = {0, 10, 10, 0, -1, images_player1_366_14_0, 2};
static Image* images_player1_366_14_8[2];
static Direction direction_player1_366_14_8 = {8, 10, 10, 0, -1, images_player1_366_14_8, 2};
static Image* images_player1_366_14_16[2];
static Direction direction_player1_366_14_16 = {16, 10, 10, 0, -1, images_player1_366_14_16, 2};
static Image* images_player1_366_14_24[2];
static Direction direction_player1_366_14_24 = {24, 10, 10, 0, -1, images_player1_366_14_24, 2};
static Animation anim_player1_366_14 = {&direction_player1_366_14_0, &direction_player1_366_14_0, &direction_player1_366_14_0, &direction_player1_366_14_0, NULL, &direction_player1_366_14_8, &direction_player1_366_14_8, &direction_player1_366_14_8, &direction_player1_366_14_8, &direction_player1_366_14_8, &direction_player1_366_14_8, &direction_player1_366_14_8, NULL, &direction_player1_366_14_16, &direction_player1_366_14_16, &direction_player1_366_14_16, &direction_player1_366_14_16, &direction_player1_366_14_16, &direction_player1_366_14_16, &direction_player1_366_14_16, NULL, &direction_player1_366_14_24, &direction_player1_366_14_24, &direction_player1_366_14_24, &direction_player1_366_14_24, &direction_player1_366_14_24, &direction_player1_366_14_24, &direction_player1_366_14_24, NULL, &direction_player1_366_14_0, &direction_player1_366_14_0, &direction_player1_366_14_0};
static Image* images_player1_366_15_0[2];
static Direction direction_player1_366_15_0 = {0, 10, 10, 0, -1, images_player1_366_15_0, 2};
static Image* images_player1_366_15_8[2];
static Direction direction_player1_366_15_8 = {8, 10, 10, 0, -1, images_player1_366_15_8, 2};
static Image* images_player1_366_15_16[2];
static Direction direction_player1_366_15_16 = {16, 10, 10, 0, -1, images_player1_366_15_16, 2};
static Image* images_player1_366_15_24[2];
static Direction direction_player1_366_15_24 = {24, 10, 10, 0, -1, images_player1_366_15_24, 2};
static Animation anim_player1_366_15 = {&direction_player1_366_15_0, &direction_player1_366_15_0, &direction_player1_366_15_0, &direction_player1_366_15_0, NULL, &direction_player1_366_15_8, &direction_player1_366_15_8, &direction_player1_366_15_8, &direction_player1_366_15_8, &direction_player1_366_15_8, &direction_player1_366_15_8, &direction_player1_366_15_8, NULL, &direction_player1_366_15_16, &direction_player1_366_15_16, &direction_player1_366_15_16, &direction_player1_366_15_16, &direction_player1_366_15_16, &direction_player1_366_15_16, &direction_player1_366_15_16, NULL, &direction_player1_366_15_24, &direction_player1_366_15_24, &direction_player1_366_15_24, &direction_player1_366_15_24, &direction_player1_366_15_24, &direction_player1_366_15_24, &direction_player1_366_15_24, NULL, &direction_player1_366_15_0, &direction_player1_366_15_0, &direction_player1_366_15_0};
static Image* images_player1_366_16_0[2];
static Direction direction_player1_366_16_0 = {0, 10, 10, 0, -1, images_player1_366_16_0, 2};
static Image* images_player1_366_16_8[2];
static Direction direction_player1_366_16_8 = {8, 10, 10, 0, -1, images_player1_366_16_8, 2};
static Image* images_player1_366_16_16[2];
static Direction direction_player1_366_16_16 = {16, 10, 10, 0, -1, images_player1_366_16_16, 2};
static Image* images_player1_366_16_24[2];
static Direction direction_player1_366_16_24 = {24, 10, 10, 0, -1, images_player1_366_16_24, 2};
static Animation anim_player1_366_16 = {&direction_player1_366_16_0, &direction_player1_366_16_0, &direction_player1_366_16_0, &direction_player1_366_16_0, NULL, &direction_player1_366_16_8, &direction_player1_366_16_8, &direction_player1_366_16_8, &direction_player1_366_16_8, &direction_player1_366_16_8, &direction_player1_366_16_8, &direction_player1_366_16_8, NULL, &direction_player1_366_16_16, &direction_player1_366_16_16, &direction_player1_366_16_16, &direction_player1_366_16_16, &direction_player1_366_16_16, &direction_player1_366_16_16, &direction_player1_366_16_16, NULL, &direction_player1_366_16_24, &direction_player1_366_16_24, &direction_player1_366_16_24, &direction_player1_366_16_24, &direction_player1_366_16_24, &direction_player1_366_16_24, &direction_player1_366_16_24, NULL, &direction_player1_366_16_0, &direction_player1_366_16_0, &direction_player1_366_16_0};
static Image* images_player1_366_17_0[2];
static Direction direction_player1_366_17_0 = {0, 5, 5, 1, -1, images_player1_366_17_0, 2};
static Image* images_player1_366_17_8[2];
static Direction direction_player1_366_17_8 = {8, 5, 5, 1, -1, images_player1_366_17_8, 2};
static Image* images_player1_366_17_16[2];
static Direction direction_player1_366_17_16 = {16, 5, 5, 1, -1, images_player1_366_17_16, 2};
static Image* images_player1_366_17_24[2];
static Direction direction_player1_366_17_24 = {24, 5, 5, 1, -1, images_player1_366_17_24, 2};
static Animation anim_player1_366_17 = {&direction_player1_366_17_0, &direction_player1_366_17_0, &direction_player1_366_17_0, &direction_player1_366_17_0, NULL, &direction_player1_366_17_8, &direction_player1_366_17_8, &direction_player1_366_17_8, &direction_player1_366_17_8, &direction_player1_366_17_8, &direction_player1_366_17_8, &direction_player1_366_17_8, NULL, &direction_player1_366_17_16, &direction_player1_366_17_16, &direction_player1_366_17_16, &direction_player1_366_17_16, &direction_player1_366_17_16, &direction_player1_366_17_16, &direction_player1_366_17_16, NULL, &direction_player1_366_17_24, &direction_player1_366_17_24, &direction_player1_366_17_24, &direction_player1_366_17_24, &direction_player1_366_17_24, &direction_player1_366_17_24, &direction_player1_366_17_24, NULL, &direction_player1_366_17_0, &direction_player1_366_17_0, &direction_player1_366_17_0};
static Image* images_player1_366_18_24[8];
static Direction direction_player1_366_18_24 = {24, 10, 10, 0, -1, images_player1_366_18_24, 8};
static Animation anim_player1_366_18 = {&direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, NULL, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24, &direction_player1_366_18_24};
static Image* images_player1_366_19_24[5];
static Direction direction_player1_366_19_24 = {24, 10, 10, 0, -1, images_player1_366_19_24, 5};
static Animation anim_player1_366_19 = {&direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, NULL, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24, &direction_player1_366_19_24};
static Animation * anim_array_player1_366[20] = {&anim_player1_366_0, NULL, NULL, NULL, &anim_player1_366_4, NULL, &anim_player1_366_6, &anim_player1_366_7, &anim_player1_366_8, &anim_player1_366_9, &anim_player1_366_10, &anim_player1_366_11, &anim_player1_366_12, &anim_player1_366_13, &anim_player1_366_14, &anim_player1_366_15, &anim_player1_366_16, &anim_player1_366_17, &anim_player1_366_18, &anim_player1_366_19};
static Animations anim_player1_366 = {20, &anim_array_player1_366[0]};
static bool anim_player1_366_initialized;
class Player1_366 : public Active
{
public:
    Player1_366(int x, int y) : Active(x, y, Player1_366_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_1", 8);
#endif
        this->animations = &anim_player1_366;
        if (!anim_player1_366_initialized) {
            anim_player1_366_initialized = true;
            images_player1_366_0_0[0] = get_internal_image(574);
            images_player1_366_0_0[1] = get_internal_image(575);
            images_player1_366_0_8[0] = get_internal_image(552);
            images_player1_366_0_8[1] = get_internal_image(553);
            images_player1_366_0_16[0] = get_internal_image(573);
            images_player1_366_0_16[1] = get_internal_image(576);
            images_player1_366_0_24[0] = get_internal_image(550);
            images_player1_366_0_24[1] = get_internal_image(551);
            images_player1_366_4_0[0] = get_internal_image(369);
            images_player1_366_4_0[1] = get_internal_image(373);
            images_player1_366_4_0[2] = get_internal_image(369);
            images_player1_366_4_0[3] = get_internal_image(373);
            images_player1_366_4_16[0] = get_internal_image(371);
            images_player1_366_4_16[1] = get_internal_image(763);
            images_player1_366_4_16[2] = get_internal_image(371);
            images_player1_366_4_16[3] = get_internal_image(763);
            images_player1_366_6_0[0] = get_internal_image(803);
            images_player1_366_6_8[0] = get_internal_image(1066);
            images_player1_366_6_16[0] = get_internal_image(804);
            images_player1_366_6_24[0] = get_internal_image(1071);
            images_player1_366_7_0[0] = get_internal_image(1106);
            images_player1_366_7_0[1] = get_internal_image(1101);
            images_player1_366_7_8[0] = get_internal_image(1126);
            images_player1_366_7_8[1] = get_internal_image(1127);
            images_player1_366_7_16[0] = get_internal_image(1108);
            images_player1_366_7_16[1] = get_internal_image(1122);
            images_player1_366_7_24[0] = get_internal_image(1124);
            images_player1_366_7_24[1] = get_internal_image(1125);
            images_player1_366_8_0[0] = get_internal_image(2479);
            images_player1_366_8_24[0] = get_internal_image(1177);
            images_player1_366_9_0[0] = get_internal_image(1019);
            images_player1_366_9_0[1] = get_internal_image(1488);
            images_player1_366_10_0[0] = get_internal_image(583);
            images_player1_366_10_0[1] = get_internal_image(580);
            images_player1_366_10_0[2] = get_internal_image(579);
            images_player1_366_10_0[3] = get_internal_image(580);
            images_player1_366_10_0[4] = get_internal_image(581);
            images_player1_366_11_0[0] = get_internal_image(1188);
            images_player1_366_11_0[1] = get_internal_image(1218);
            images_player1_366_11_8[0] = get_internal_image(588);
            images_player1_366_11_8[1] = get_internal_image(589);
            images_player1_366_11_16[0] = get_internal_image(1219);
            images_player1_366_11_16[1] = get_internal_image(1220);
            images_player1_366_11_24[0] = get_internal_image(599);
            images_player1_366_11_24[1] = get_internal_image(104);
            images_player1_366_12_0[0] = get_internal_image(1207);
            images_player1_366_12_0[1] = get_internal_image(1210);
            images_player1_366_12_8[0] = get_internal_image(1767);
            images_player1_366_12_8[1] = get_internal_image(1772);
            images_player1_366_12_16[0] = get_internal_image(1208);
            images_player1_366_12_16[1] = get_internal_image(1206);
            images_player1_366_12_24[0] = get_internal_image(1587);
            images_player1_366_12_24[1] = get_internal_image(1582);
            images_player1_366_13_0[0] = get_internal_image(1829);
            images_player1_366_13_0[1] = get_internal_image(1831);
            images_player1_366_13_8[0] = get_internal_image(1837);
            images_player1_366_13_8[1] = get_internal_image(1833);
            images_player1_366_13_16[0] = get_internal_image(1830);
            images_player1_366_13_16[1] = get_internal_image(1832);
            images_player1_366_13_24[0] = get_internal_image(1835);
            images_player1_366_13_24[1] = get_internal_image(1834);
            images_player1_366_14_0[0] = get_internal_image(1653);
            images_player1_366_14_0[1] = get_internal_image(1655);
            images_player1_366_14_8[0] = get_internal_image(1661);
            images_player1_366_14_8[1] = get_internal_image(1659);
            images_player1_366_14_16[0] = get_internal_image(1654);
            images_player1_366_14_16[1] = get_internal_image(1656);
            images_player1_366_14_24[0] = get_internal_image(1658);
            images_player1_366_14_24[1] = get_internal_image(1657);
            images_player1_366_15_0[0] = get_internal_image(1956);
            images_player1_366_15_0[1] = get_internal_image(1951);
            images_player1_366_15_8[0] = get_internal_image(1962);
            images_player1_366_15_8[1] = get_internal_image(1963);
            images_player1_366_15_16[0] = get_internal_image(1957);
            images_player1_366_15_16[1] = get_internal_image(1958);
            images_player1_366_15_24[0] = get_internal_image(1960);
            images_player1_366_15_24[1] = get_internal_image(1959);
            images_player1_366_16_0[0] = get_internal_image(1870);
            images_player1_366_16_0[1] = get_internal_image(1871);
            images_player1_366_16_8[0] = get_internal_image(1607);
            images_player1_366_16_8[1] = get_internal_image(1602);
            images_player1_366_16_16[0] = get_internal_image(1869);
            images_player1_366_16_16[1] = get_internal_image(1872);
            images_player1_366_16_24[0] = get_internal_image(1902);
            images_player1_366_16_24[1] = get_internal_image(1903);
            images_player1_366_17_0[0] = get_internal_image(2018);
            images_player1_366_17_0[1] = get_internal_image(2016);
            images_player1_366_17_8[0] = get_internal_image(2020);
            images_player1_366_17_8[1] = get_internal_image(2022);
            images_player1_366_17_16[0] = get_internal_image(2017);
            images_player1_366_17_16[1] = get_internal_image(2019);
            images_player1_366_17_24[0] = get_internal_image(2021);
            images_player1_366_17_24[1] = get_internal_image(2023);
            images_player1_366_18_24[0] = get_internal_image(2096);
            images_player1_366_18_24[1] = get_internal_image(2098);
            images_player1_366_18_24[2] = get_internal_image(2097);
            images_player1_366_18_24[3] = get_internal_image(2093);
            images_player1_366_18_24[4] = get_internal_image(2094);
            images_player1_366_18_24[5] = get_internal_image(2092);
            images_player1_366_18_24[6] = get_internal_image(2097);
            images_player1_366_18_24[7] = get_internal_image(2095);
            images_player1_366_19_24[0] = get_internal_image(2152);
            images_player1_366_19_24[1] = get_internal_image(2151);
            images_player1_366_19_24[2] = get_internal_image(2151);
            images_player1_366_19_24[3] = get_internal_image(2148);
            images_player1_366_19_24[4] = get_internal_image(2148);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player1_366(int x, int y)
{
    return new (Active::pool.create()) Player1_366(x, y);
}
static Image* images_player2_367_0_0[2];
static Direction direction_player2_367_0_0 = {0, 10, 10, 0, -1, images_player2_367_0_0, 2};
static Image* images_player2_367_0_8[2];
static Direction direction_player2_367_0_8 = {8, 10, 10, 0, -1, images_player2_367_0_8, 2};
static Image* images_player2_367_0_16[2];
static Direction direction_player2_367_0_16 = {16, 10, 10, 0, -1, images_player2_367_0_16, 2};
static Image* images_player2_367_0_24[2];
static Direction direction_player2_367_0_24 = {24, 10, 10, 0, -1, images_player2_367_0_24, 2};
static Animation anim_player2_367_0 = {&direction_player2_367_0_0, &direction_player2_367_0_0, &direction_player2_367_0_0, &direction_player2_367_0_0, NULL, &direction_player2_367_0_8, &direction_player2_367_0_8, &direction_player2_367_0_8, &direction_player2_367_0_8, &direction_player2_367_0_8, &direction_player2_367_0_8, &direction_player2_367_0_8, NULL, &direction_player2_367_0_16, &direction_player2_367_0_16, &direction_player2_367_0_16, &direction_player2_367_0_16, &direction_player2_367_0_16, &direction_player2_367_0_16, &direction_player2_367_0_16, NULL, &direction_player2_367_0_24, &direction_player2_367_0_24, &direction_player2_367_0_24, &direction_player2_367_0_24, &direction_player2_367_0_24, &direction_player2_367_0_24, &direction_player2_367_0_24, NULL, &direction_player2_367_0_0, &direction_player2_367_0_0, &direction_player2_367_0_0};
static Image* images_player2_367_4_0[4];
static Direction direction_player2_367_4_0 = {0, 20, 20, 0, 1, images_player2_367_4_0, 4};
static Image* images_player2_367_4_16[4];
static Direction direction_player2_367_4_16 = {16, 20, 20, 0, 1, images_player2_367_4_16, 4};
static Animation anim_player2_367_4 = {&direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0, NULL, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, &direction_player2_367_4_16, NULL, &direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0, &direction_player2_367_4_0};
static Image* images_player2_367_6_0[1];
static Direction direction_player2_367_6_0 = {0, 6, 6, 0, 1, images_player2_367_6_0, 1};
static Image* images_player2_367_6_8[1];
static Direction direction_player2_367_6_8 = {8, 6, 6, 0, 1, images_player2_367_6_8, 1};
static Image* images_player2_367_6_16[1];
static Direction direction_player2_367_6_16 = {16, 6, 6, 0, 1, images_player2_367_6_16, 1};
static Image* images_player2_367_6_24[1];
static Direction direction_player2_367_6_24 = {24, 6, 6, 0, 1, images_player2_367_6_24, 1};
static Animation anim_player2_367_6 = {&direction_player2_367_6_0, &direction_player2_367_6_0, &direction_player2_367_6_0, &direction_player2_367_6_0, NULL, &direction_player2_367_6_8, &direction_player2_367_6_8, &direction_player2_367_6_8, &direction_player2_367_6_8, &direction_player2_367_6_8, &direction_player2_367_6_8, &direction_player2_367_6_8, NULL, &direction_player2_367_6_16, &direction_player2_367_6_16, &direction_player2_367_6_16, &direction_player2_367_6_16, &direction_player2_367_6_16, &direction_player2_367_6_16, &direction_player2_367_6_16, NULL, &direction_player2_367_6_24, &direction_player2_367_6_24, &direction_player2_367_6_24, &direction_player2_367_6_24, &direction_player2_367_6_24, &direction_player2_367_6_24, &direction_player2_367_6_24, NULL, &direction_player2_367_6_0, &direction_player2_367_6_0, &direction_player2_367_6_0};
static Image* images_player2_367_7_0[2];
static Direction direction_player2_367_7_0 = {0, 10, 10, 0, -1, images_player2_367_7_0, 2};
static Image* images_player2_367_7_8[2];
static Direction direction_player2_367_7_8 = {8, 10, 10, 0, -1, images_player2_367_7_8, 2};
static Image* images_player2_367_7_16[2];
static Direction direction_player2_367_7_16 = {16, 10, 10, 0, -1, images_player2_367_7_16, 2};
static Image* images_player2_367_7_24[2];
static Direction direction_player2_367_7_24 = {24, 10, 10, 0, -1, images_player2_367_7_24, 2};
static Animation anim_player2_367_7 = {&direction_player2_367_7_0, &direction_player2_367_7_0, &direction_player2_367_7_0, &direction_player2_367_7_0, NULL, &direction_player2_367_7_8, &direction_player2_367_7_8, &direction_player2_367_7_8, &direction_player2_367_7_8, &direction_player2_367_7_8, &direction_player2_367_7_8, &direction_player2_367_7_8, NULL, &direction_player2_367_7_16, &direction_player2_367_7_16, &direction_player2_367_7_16, &direction_player2_367_7_16, &direction_player2_367_7_16, &direction_player2_367_7_16, &direction_player2_367_7_16, NULL, &direction_player2_367_7_24, &direction_player2_367_7_24, &direction_player2_367_7_24, &direction_player2_367_7_24, &direction_player2_367_7_24, &direction_player2_367_7_24, &direction_player2_367_7_24, NULL, &direction_player2_367_7_0, &direction_player2_367_7_0, &direction_player2_367_7_0};
static Image* images_player2_367_8_0[1];
static Direction direction_player2_367_8_0 = {0, 50, 50, 0, -1, images_player2_367_8_0, 1};
static Image* images_player2_367_8_24[1];
static Direction direction_player2_367_8_24 = {24, 10, 10, 0, -1, images_player2_367_8_24, 1};
static Animation anim_player2_367_8 = {&direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0, NULL, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, &direction_player2_367_8_24, NULL, &direction_player2_367_8_0, &direction_player2_367_8_0, &direction_player2_367_8_0};
static Image* images_player2_367_9_0[2];
static Direction direction_player2_367_9_0 = {0, 50, 50, 0, -1, images_player2_367_9_0, 2};
static Animation anim_player2_367_9 = {&direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, NULL, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0, &direction_player2_367_9_0};
static Image* images_player2_367_10_0[5];
static Direction direction_player2_367_10_0 = {0, 10, 10, 0, -1, images_player2_367_10_0, 5};
static Animation anim_player2_367_10 = {&direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, NULL, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0, &direction_player2_367_10_0};
static Image* images_player2_367_11_0[2];
static Direction direction_player2_367_11_0 = {0, 6, 6, 0, -1, images_player2_367_11_0, 2};
static Image* images_player2_367_11_8[2];
static Direction direction_player2_367_11_8 = {8, 6, 6, 0, -1, images_player2_367_11_8, 2};
static Image* images_player2_367_11_16[2];
static Direction direction_player2_367_11_16 = {16, 6, 6, 0, -1, images_player2_367_11_16, 2};
static Image* images_player2_367_11_24[2];
static Direction direction_player2_367_11_24 = {24, 6, 6, 0, -1, images_player2_367_11_24, 2};
static Animation anim_player2_367_11 = {&direction_player2_367_11_0, &direction_player2_367_11_0, &direction_player2_367_11_0, &direction_player2_367_11_0, NULL, &direction_player2_367_11_8, &direction_player2_367_11_8, &direction_player2_367_11_8, &direction_player2_367_11_8, &direction_player2_367_11_8, &direction_player2_367_11_8, &direction_player2_367_11_8, NULL, &direction_player2_367_11_16, &direction_player2_367_11_16, &direction_player2_367_11_16, &direction_player2_367_11_16, &direction_player2_367_11_16, &direction_player2_367_11_16, &direction_player2_367_11_16, NULL, &direction_player2_367_11_24, &direction_player2_367_11_24, &direction_player2_367_11_24, &direction_player2_367_11_24, &direction_player2_367_11_24, &direction_player2_367_11_24, &direction_player2_367_11_24, NULL, &direction_player2_367_11_0, &direction_player2_367_11_0, &direction_player2_367_11_0};
static Image* images_player2_367_12_0[2];
static Direction direction_player2_367_12_0 = {0, 10, 10, 0, -1, images_player2_367_12_0, 2};
static Image* images_player2_367_12_8[2];
static Direction direction_player2_367_12_8 = {8, 10, 10, 0, -1, images_player2_367_12_8, 2};
static Image* images_player2_367_12_16[2];
static Direction direction_player2_367_12_16 = {16, 10, 10, 0, -1, images_player2_367_12_16, 2};
static Image* images_player2_367_12_24[2];
static Direction direction_player2_367_12_24 = {24, 10, 10, 0, -1, images_player2_367_12_24, 2};
static Animation anim_player2_367_12 = {&direction_player2_367_12_0, &direction_player2_367_12_0, &direction_player2_367_12_0, &direction_player2_367_12_0, NULL, &direction_player2_367_12_8, &direction_player2_367_12_8, &direction_player2_367_12_8, &direction_player2_367_12_8, &direction_player2_367_12_8, &direction_player2_367_12_8, &direction_player2_367_12_8, NULL, &direction_player2_367_12_16, &direction_player2_367_12_16, &direction_player2_367_12_16, &direction_player2_367_12_16, &direction_player2_367_12_16, &direction_player2_367_12_16, &direction_player2_367_12_16, NULL, &direction_player2_367_12_24, &direction_player2_367_12_24, &direction_player2_367_12_24, &direction_player2_367_12_24, &direction_player2_367_12_24, &direction_player2_367_12_24, &direction_player2_367_12_24, NULL, &direction_player2_367_12_0, &direction_player2_367_12_0, &direction_player2_367_12_0};
static Image* images_player2_367_13_0[2];
static Direction direction_player2_367_13_0 = {0, 10, 10, 0, -1, images_player2_367_13_0, 2};
static Image* images_player2_367_13_8[2];
static Direction direction_player2_367_13_8 = {8, 10, 10, 0, -1, images_player2_367_13_8, 2};
static Image* images_player2_367_13_16[2];
static Direction direction_player2_367_13_16 = {16, 10, 10, 0, -1, images_player2_367_13_16, 2};
static Image* images_player2_367_13_24[2];
static Direction direction_player2_367_13_24 = {24, 10, 10, 0, -1, images_player2_367_13_24, 2};
static Animation anim_player2_367_13 = {&direction_player2_367_13_0, &direction_player2_367_13_0, &direction_player2_367_13_0, &direction_player2_367_13_0, NULL, &direction_player2_367_13_8, &direction_player2_367_13_8, &direction_player2_367_13_8, &direction_player2_367_13_8, &direction_player2_367_13_8, &direction_player2_367_13_8, &direction_player2_367_13_8, NULL, &direction_player2_367_13_16, &direction_player2_367_13_16, &direction_player2_367_13_16, &direction_player2_367_13_16, &direction_player2_367_13_16, &direction_player2_367_13_16, &direction_player2_367_13_16, NULL, &direction_player2_367_13_24, &direction_player2_367_13_24, &direction_player2_367_13_24, &direction_player2_367_13_24, &direction_player2_367_13_24, &direction_player2_367_13_24, &direction_player2_367_13_24, NULL, &direction_player2_367_13_0, &direction_player2_367_13_0, &direction_player2_367_13_0};
static Image* images_player2_367_14_0[2];
static Direction direction_player2_367_14_0 = {0, 10, 10, 0, -1, images_player2_367_14_0, 2};
static Image* images_player2_367_14_8[2];
static Direction direction_player2_367_14_8 = {8, 10, 10, 0, -1, images_player2_367_14_8, 2};
static Image* images_player2_367_14_16[2];
static Direction direction_player2_367_14_16 = {16, 10, 10, 0, -1, images_player2_367_14_16, 2};
static Image* images_player2_367_14_24[2];
static Direction direction_player2_367_14_24 = {24, 10, 10, 0, -1, images_player2_367_14_24, 2};
static Animation anim_player2_367_14 = {&direction_player2_367_14_0, &direction_player2_367_14_0, &direction_player2_367_14_0, &direction_player2_367_14_0, NULL, &direction_player2_367_14_8, &direction_player2_367_14_8, &direction_player2_367_14_8, &direction_player2_367_14_8, &direction_player2_367_14_8, &direction_player2_367_14_8, &direction_player2_367_14_8, NULL, &direction_player2_367_14_16, &direction_player2_367_14_16, &direction_player2_367_14_16, &direction_player2_367_14_16, &direction_player2_367_14_16, &direction_player2_367_14_16, &direction_player2_367_14_16, NULL, &direction_player2_367_14_24, &direction_player2_367_14_24, &direction_player2_367_14_24, &direction_player2_367_14_24, &direction_player2_367_14_24, &direction_player2_367_14_24, &direction_player2_367_14_24, NULL, &direction_player2_367_14_0, &direction_player2_367_14_0, &direction_player2_367_14_0};
static Image* images_player2_367_15_0[2];
static Direction direction_player2_367_15_0 = {0, 10, 10, 0, -1, images_player2_367_15_0, 2};
static Image* images_player2_367_15_8[2];
static Direction direction_player2_367_15_8 = {8, 10, 10, 0, -1, images_player2_367_15_8, 2};
static Image* images_player2_367_15_16[2];
static Direction direction_player2_367_15_16 = {16, 10, 10, 0, -1, images_player2_367_15_16, 2};
static Image* images_player2_367_15_24[2];
static Direction direction_player2_367_15_24 = {24, 10, 10, 0, -1, images_player2_367_15_24, 2};
static Animation anim_player2_367_15 = {&direction_player2_367_15_0, &direction_player2_367_15_0, &direction_player2_367_15_0, &direction_player2_367_15_0, NULL, &direction_player2_367_15_8, &direction_player2_367_15_8, &direction_player2_367_15_8, &direction_player2_367_15_8, &direction_player2_367_15_8, &direction_player2_367_15_8, &direction_player2_367_15_8, NULL, &direction_player2_367_15_16, &direction_player2_367_15_16, &direction_player2_367_15_16, &direction_player2_367_15_16, &direction_player2_367_15_16, &direction_player2_367_15_16, &direction_player2_367_15_16, NULL, &direction_player2_367_15_24, &direction_player2_367_15_24, &direction_player2_367_15_24, &direction_player2_367_15_24, &direction_player2_367_15_24, &direction_player2_367_15_24, &direction_player2_367_15_24, NULL, &direction_player2_367_15_0, &direction_player2_367_15_0, &direction_player2_367_15_0};
static Image* images_player2_367_16_0[2];
static Direction direction_player2_367_16_0 = {0, 10, 10, 0, -1, images_player2_367_16_0, 2};
static Image* images_player2_367_16_8[2];
static Direction direction_player2_367_16_8 = {8, 10, 10, 0, -1, images_player2_367_16_8, 2};
static Image* images_player2_367_16_16[2];
static Direction direction_player2_367_16_16 = {16, 10, 10, 0, -1, images_player2_367_16_16, 2};
static Image* images_player2_367_16_24[2];
static Direction direction_player2_367_16_24 = {24, 10, 10, 0, -1, images_player2_367_16_24, 2};
static Animation anim_player2_367_16 = {&direction_player2_367_16_0, &direction_player2_367_16_0, &direction_player2_367_16_0, &direction_player2_367_16_0, NULL, &direction_player2_367_16_8, &direction_player2_367_16_8, &direction_player2_367_16_8, &direction_player2_367_16_8, &direction_player2_367_16_8, &direction_player2_367_16_8, &direction_player2_367_16_8, NULL, &direction_player2_367_16_16, &direction_player2_367_16_16, &direction_player2_367_16_16, &direction_player2_367_16_16, &direction_player2_367_16_16, &direction_player2_367_16_16, &direction_player2_367_16_16, NULL, &direction_player2_367_16_24, &direction_player2_367_16_24, &direction_player2_367_16_24, &direction_player2_367_16_24, &direction_player2_367_16_24, &direction_player2_367_16_24, &direction_player2_367_16_24, NULL, &direction_player2_367_16_0, &direction_player2_367_16_0, &direction_player2_367_16_0};
static Image* images_player2_367_17_0[2];
static Direction direction_player2_367_17_0 = {0, 5, 5, 1, -1, images_player2_367_17_0, 2};
static Image* images_player2_367_17_8[2];
static Direction direction_player2_367_17_8 = {8, 5, 5, 1, -1, images_player2_367_17_8, 2};
static Image* images_player2_367_17_16[2];
static Direction direction_player2_367_17_16 = {16, 5, 5, 1, -1, images_player2_367_17_16, 2};
static Image* images_player2_367_17_24[2];
static Direction direction_player2_367_17_24 = {24, 5, 5, 1, -1, images_player2_367_17_24, 2};
static Animation anim_player2_367_17 = {&direction_player2_367_17_0, &direction_player2_367_17_0, &direction_player2_367_17_0, &direction_player2_367_17_0, NULL, &direction_player2_367_17_8, &direction_player2_367_17_8, &direction_player2_367_17_8, &direction_player2_367_17_8, &direction_player2_367_17_8, &direction_player2_367_17_8, &direction_player2_367_17_8, NULL, &direction_player2_367_17_16, &direction_player2_367_17_16, &direction_player2_367_17_16, &direction_player2_367_17_16, &direction_player2_367_17_16, &direction_player2_367_17_16, &direction_player2_367_17_16, NULL, &direction_player2_367_17_24, &direction_player2_367_17_24, &direction_player2_367_17_24, &direction_player2_367_17_24, &direction_player2_367_17_24, &direction_player2_367_17_24, &direction_player2_367_17_24, NULL, &direction_player2_367_17_0, &direction_player2_367_17_0, &direction_player2_367_17_0};
static Image* images_player2_367_18_24[8];
static Direction direction_player2_367_18_24 = {24, 10, 10, 0, -1, images_player2_367_18_24, 8};
static Animation anim_player2_367_18 = {&direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, NULL, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24, &direction_player2_367_18_24};
static Image* images_player2_367_19_24[5];
static Direction direction_player2_367_19_24 = {24, 10, 10, 0, -1, images_player2_367_19_24, 5};
static Animation anim_player2_367_19 = {&direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, NULL, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24, &direction_player2_367_19_24};
static Animation * anim_array_player2_367[20] = {&anim_player2_367_0, NULL, NULL, NULL, &anim_player2_367_4, NULL, &anim_player2_367_6, &anim_player2_367_7, &anim_player2_367_8, &anim_player2_367_9, &anim_player2_367_10, &anim_player2_367_11, &anim_player2_367_12, &anim_player2_367_13, &anim_player2_367_14, &anim_player2_367_15, &anim_player2_367_16, &anim_player2_367_17, &anim_player2_367_18, &anim_player2_367_19};
static Animations anim_player2_367 = {20, &anim_array_player2_367[0]};
static bool anim_player2_367_initialized;
class Player2_367 : public Active
{
public:
    Player2_367(int x, int y) : Active(x, y, Player2_367_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_2", 8);
#endif
        this->animations = &anim_player2_367;
        if (!anim_player2_367_initialized) {
            anim_player2_367_initialized = true;
            images_player2_367_0_0[0] = get_internal_image(414);
            images_player2_367_0_0[1] = get_internal_image(609);
            images_player2_367_0_8[0] = get_internal_image(638);
            images_player2_367_0_8[1] = get_internal_image(639);
            images_player2_367_0_16[0] = get_internal_image(363);
            images_player2_367_0_16[1] = get_internal_image(622);
            images_player2_367_0_24[0] = get_internal_image(637);
            images_player2_367_0_24[1] = get_internal_image(624);
            images_player2_367_4_0[0] = get_internal_image(369);
            images_player2_367_4_0[1] = get_internal_image(373);
            images_player2_367_4_0[2] = get_internal_image(369);
            images_player2_367_4_0[3] = get_internal_image(373);
            images_player2_367_4_16[0] = get_internal_image(371);
            images_player2_367_4_16[1] = get_internal_image(763);
            images_player2_367_4_16[2] = get_internal_image(371);
            images_player2_367_4_16[3] = get_internal_image(763);
            images_player2_367_6_0[0] = get_internal_image(167);
            images_player2_367_6_8[0] = get_internal_image(793);
            images_player2_367_6_16[0] = get_internal_image(258);
            images_player2_367_6_24[0] = get_internal_image(788);
            images_player2_367_7_0[0] = get_internal_image(1162);
            images_player2_367_7_0[1] = get_internal_image(1163);
            images_player2_367_7_8[0] = get_internal_image(1165);
            images_player2_367_7_8[1] = get_internal_image(1169);
            images_player2_367_7_16[0] = get_internal_image(1157);
            images_player2_367_7_16[1] = get_internal_image(1164);
            images_player2_367_7_24[0] = get_internal_image(1166);
            images_player2_367_7_24[1] = get_internal_image(1167);
            images_player2_367_8_0[0] = get_internal_image(2478);
            images_player2_367_8_24[0] = get_internal_image(1181);
            images_player2_367_9_0[0] = get_internal_image(1505);
            images_player2_367_9_0[1] = get_internal_image(1504);
            images_player2_367_10_0[0] = get_internal_image(2344);
            images_player2_367_10_0[1] = get_internal_image(2340);
            images_player2_367_10_0[2] = get_internal_image(2337);
            images_player2_367_10_0[3] = get_internal_image(2338);
            images_player2_367_10_0[4] = get_internal_image(2337);
            images_player2_367_11_0[0] = get_internal_image(676);
            images_player2_367_11_0[1] = get_internal_image(969);
            images_player2_367_11_8[0] = get_internal_image(1089);
            images_player2_367_11_8[1] = get_internal_image(1091);
            images_player2_367_11_16[0] = get_internal_image(248);
            images_player2_367_11_16[1] = get_internal_image(1082);
            images_player2_367_11_24[0] = get_internal_image(605);
            images_player2_367_11_24[1] = get_internal_image(732);
            images_player2_367_12_0[0] = get_internal_image(1199);
            images_player2_367_12_0[1] = get_internal_image(1193);
            images_player2_367_12_8[0] = get_internal_image(1768);
            images_player2_367_12_8[1] = get_internal_image(1769);
            images_player2_367_12_16[0] = get_internal_image(1200);
            images_player2_367_12_16[1] = get_internal_image(1201);
            images_player2_367_12_24[0] = get_internal_image(1784);
            images_player2_367_12_24[1] = get_internal_image(1785);
            images_player2_367_13_0[0] = get_internal_image(1836);
            images_player2_367_13_0[1] = get_internal_image(1839);
            images_player2_367_13_8[0] = get_internal_image(1844);
            images_player2_367_13_8[1] = get_internal_image(1845);
            images_player2_367_13_16[0] = get_internal_image(1838);
            images_player2_367_13_16[1] = get_internal_image(1840);
            images_player2_367_13_24[0] = get_internal_image(1842);
            images_player2_367_13_24[1] = get_internal_image(1841);
            images_player2_367_14_0[0] = get_internal_image(1702);
            images_player2_367_14_0[1] = get_internal_image(1703);
            images_player2_367_14_8[0] = get_internal_image(1709);
            images_player2_367_14_8[1] = get_internal_image(1708);
            images_player2_367_14_16[0] = get_internal_image(1705);
            images_player2_367_14_16[1] = get_internal_image(1706);
            images_player2_367_14_24[0] = get_internal_image(1707);
            images_player2_367_14_24[1] = get_internal_image(1704);
            images_player2_367_15_0[0] = get_internal_image(1753);
            images_player2_367_15_0[1] = get_internal_image(1754);
            images_player2_367_15_8[0] = get_internal_image(1757);
            images_player2_367_15_8[1] = get_internal_image(1760);
            images_player2_367_15_16[0] = get_internal_image(1756);
            images_player2_367_15_16[1] = get_internal_image(1755);
            images_player2_367_15_24[0] = get_internal_image(1752);
            images_player2_367_15_24[1] = get_internal_image(1758);
            images_player2_367_16_0[0] = get_internal_image(1873);
            images_player2_367_16_0[1] = get_internal_image(1874);
            images_player2_367_16_8[0] = get_internal_image(1640);
            images_player2_367_16_8[1] = get_internal_image(1915);
            images_player2_367_16_16[0] = get_internal_image(1876);
            images_player2_367_16_16[1] = get_internal_image(1877);
            images_player2_367_16_24[0] = get_internal_image(1904);
            images_player2_367_16_24[1] = get_internal_image(1905);
            images_player2_367_17_0[0] = get_internal_image(2025);
            images_player2_367_17_0[1] = get_internal_image(2026);
            images_player2_367_17_8[0] = get_internal_image(2029);
            images_player2_367_17_8[1] = get_internal_image(2031);
            images_player2_367_17_16[0] = get_internal_image(2024);
            images_player2_367_17_16[1] = get_internal_image(2027);
            images_player2_367_17_24[0] = get_internal_image(2028);
            images_player2_367_17_24[1] = get_internal_image(2030);
            images_player2_367_18_24[0] = get_internal_image(2089);
            images_player2_367_18_24[1] = get_internal_image(2105);
            images_player2_367_18_24[2] = get_internal_image(2104);
            images_player2_367_18_24[3] = get_internal_image(2100);
            images_player2_367_18_24[4] = get_internal_image(2101);
            images_player2_367_18_24[5] = get_internal_image(2106);
            images_player2_367_18_24[6] = get_internal_image(2103);
            images_player2_367_18_24[7] = get_internal_image(2102);
            images_player2_367_19_24[0] = get_internal_image(2153);
            images_player2_367_19_24[1] = get_internal_image(2154);
            images_player2_367_19_24[2] = get_internal_image(2154);
            images_player2_367_19_24[3] = get_internal_image(2155);
            images_player2_367_19_24[4] = get_internal_image(2155);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player2_367(int x, int y)
{
    return new (Active::pool.create()) Player2_367(x, y);
}
static Image* images_player3_368_0_0[2];
static Direction direction_player3_368_0_0 = {0, 10, 10, 0, -1, images_player3_368_0_0, 2};
static Image* images_player3_368_0_8[2];
static Direction direction_player3_368_0_8 = {8, 10, 10, 0, -1, images_player3_368_0_8, 2};
static Image* images_player3_368_0_16[2];
static Direction direction_player3_368_0_16 = {16, 10, 10, 0, -1, images_player3_368_0_16, 2};
static Image* images_player3_368_0_24[2];
static Direction direction_player3_368_0_24 = {24, 10, 10, 0, -1, images_player3_368_0_24, 2};
static Animation anim_player3_368_0 = {&direction_player3_368_0_0, &direction_player3_368_0_0, &direction_player3_368_0_0, &direction_player3_368_0_0, NULL, &direction_player3_368_0_8, &direction_player3_368_0_8, &direction_player3_368_0_8, &direction_player3_368_0_8, &direction_player3_368_0_8, &direction_player3_368_0_8, &direction_player3_368_0_8, NULL, &direction_player3_368_0_16, &direction_player3_368_0_16, &direction_player3_368_0_16, &direction_player3_368_0_16, &direction_player3_368_0_16, &direction_player3_368_0_16, &direction_player3_368_0_16, NULL, &direction_player3_368_0_24, &direction_player3_368_0_24, &direction_player3_368_0_24, &direction_player3_368_0_24, &direction_player3_368_0_24, &direction_player3_368_0_24, &direction_player3_368_0_24, NULL, &direction_player3_368_0_0, &direction_player3_368_0_0, &direction_player3_368_0_0};
static Image* images_player3_368_4_0[4];
static Direction direction_player3_368_4_0 = {0, 20, 20, 0, 1, images_player3_368_4_0, 4};
static Image* images_player3_368_4_16[4];
static Direction direction_player3_368_4_16 = {16, 20, 20, 0, 1, images_player3_368_4_16, 4};
static Animation anim_player3_368_4 = {&direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0, NULL, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, &direction_player3_368_4_16, NULL, &direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0, &direction_player3_368_4_0};
static Image* images_player3_368_6_0[1];
static Direction direction_player3_368_6_0 = {0, 6, 6, 0, 1, images_player3_368_6_0, 1};
static Image* images_player3_368_6_8[1];
static Direction direction_player3_368_6_8 = {8, 6, 6, 0, 1, images_player3_368_6_8, 1};
static Image* images_player3_368_6_16[1];
static Direction direction_player3_368_6_16 = {16, 6, 6, 0, 1, images_player3_368_6_16, 1};
static Image* images_player3_368_6_24[1];
static Direction direction_player3_368_6_24 = {24, 6, 6, 0, 1, images_player3_368_6_24, 1};
static Animation anim_player3_368_6 = {&direction_player3_368_6_0, &direction_player3_368_6_0, &direction_player3_368_6_0, &direction_player3_368_6_0, NULL, &direction_player3_368_6_8, &direction_player3_368_6_8, &direction_player3_368_6_8, &direction_player3_368_6_8, &direction_player3_368_6_8, &direction_player3_368_6_8, &direction_player3_368_6_8, NULL, &direction_player3_368_6_16, &direction_player3_368_6_16, &direction_player3_368_6_16, &direction_player3_368_6_16, &direction_player3_368_6_16, &direction_player3_368_6_16, &direction_player3_368_6_16, NULL, &direction_player3_368_6_24, &direction_player3_368_6_24, &direction_player3_368_6_24, &direction_player3_368_6_24, &direction_player3_368_6_24, &direction_player3_368_6_24, &direction_player3_368_6_24, NULL, &direction_player3_368_6_0, &direction_player3_368_6_0, &direction_player3_368_6_0};
static Image* images_player3_368_7_0[2];
static Direction direction_player3_368_7_0 = {0, 10, 10, 0, -1, images_player3_368_7_0, 2};
static Image* images_player3_368_7_8[2];
static Direction direction_player3_368_7_8 = {8, 10, 10, 0, -1, images_player3_368_7_8, 2};
static Image* images_player3_368_7_16[2];
static Direction direction_player3_368_7_16 = {16, 10, 10, 0, -1, images_player3_368_7_16, 2};
static Image* images_player3_368_7_24[2];
static Direction direction_player3_368_7_24 = {24, 10, 10, 0, -1, images_player3_368_7_24, 2};
static Animation anim_player3_368_7 = {&direction_player3_368_7_0, &direction_player3_368_7_0, &direction_player3_368_7_0, &direction_player3_368_7_0, NULL, &direction_player3_368_7_8, &direction_player3_368_7_8, &direction_player3_368_7_8, &direction_player3_368_7_8, &direction_player3_368_7_8, &direction_player3_368_7_8, &direction_player3_368_7_8, NULL, &direction_player3_368_7_16, &direction_player3_368_7_16, &direction_player3_368_7_16, &direction_player3_368_7_16, &direction_player3_368_7_16, &direction_player3_368_7_16, &direction_player3_368_7_16, NULL, &direction_player3_368_7_24, &direction_player3_368_7_24, &direction_player3_368_7_24, &direction_player3_368_7_24, &direction_player3_368_7_24, &direction_player3_368_7_24, &direction_player3_368_7_24, NULL, &direction_player3_368_7_0, &direction_player3_368_7_0, &direction_player3_368_7_0};
static Image* images_player3_368_8_0[1];
static Direction direction_player3_368_8_0 = {0, 50, 50, 0, -1, images_player3_368_8_0, 1};
static Image* images_player3_368_8_24[1];
static Direction direction_player3_368_8_24 = {24, 10, 10, 0, -1, images_player3_368_8_24, 1};
static Animation anim_player3_368_8 = {&direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0, NULL, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, &direction_player3_368_8_24, NULL, &direction_player3_368_8_0, &direction_player3_368_8_0, &direction_player3_368_8_0};
static Image* images_player3_368_9_0[2];
static Direction direction_player3_368_9_0 = {0, 50, 50, 0, -1, images_player3_368_9_0, 2};
static Animation anim_player3_368_9 = {&direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, NULL, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0, &direction_player3_368_9_0};
static Image* images_player3_368_10_0[5];
static Direction direction_player3_368_10_0 = {0, 10, 10, 0, -1, images_player3_368_10_0, 5};
static Animation anim_player3_368_10 = {&direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, NULL, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0, &direction_player3_368_10_0};
static Image* images_player3_368_11_0[2];
static Direction direction_player3_368_11_0 = {0, 10, 10, 0, -1, images_player3_368_11_0, 2};
static Image* images_player3_368_11_8[2];
static Direction direction_player3_368_11_8 = {8, 10, 10, 0, -1, images_player3_368_11_8, 2};
static Image* images_player3_368_11_16[2];
static Direction direction_player3_368_11_16 = {16, 10, 10, 0, -1, images_player3_368_11_16, 2};
static Image* images_player3_368_11_24[2];
static Direction direction_player3_368_11_24 = {24, 10, 10, 0, -1, images_player3_368_11_24, 2};
static Animation anim_player3_368_11 = {&direction_player3_368_11_0, &direction_player3_368_11_0, &direction_player3_368_11_0, &direction_player3_368_11_0, NULL, &direction_player3_368_11_8, &direction_player3_368_11_8, &direction_player3_368_11_8, &direction_player3_368_11_8, &direction_player3_368_11_8, &direction_player3_368_11_8, &direction_player3_368_11_8, NULL, &direction_player3_368_11_16, &direction_player3_368_11_16, &direction_player3_368_11_16, &direction_player3_368_11_16, &direction_player3_368_11_16, &direction_player3_368_11_16, &direction_player3_368_11_16, NULL, &direction_player3_368_11_24, &direction_player3_368_11_24, &direction_player3_368_11_24, &direction_player3_368_11_24, &direction_player3_368_11_24, &direction_player3_368_11_24, &direction_player3_368_11_24, NULL, &direction_player3_368_11_0, &direction_player3_368_11_0, &direction_player3_368_11_0};
static Image* images_player3_368_12_0[2];
static Direction direction_player3_368_12_0 = {0, 10, 10, 0, -1, images_player3_368_12_0, 2};
static Image* images_player3_368_12_8[2];
static Direction direction_player3_368_12_8 = {8, 10, 10, 0, -1, images_player3_368_12_8, 2};
static Image* images_player3_368_12_16[2];
static Direction direction_player3_368_12_16 = {16, 10, 10, 0, -1, images_player3_368_12_16, 2};
static Image* images_player3_368_12_24[2];
static Direction direction_player3_368_12_24 = {24, 10, 10, 0, -1, images_player3_368_12_24, 2};
static Animation anim_player3_368_12 = {&direction_player3_368_12_0, &direction_player3_368_12_0, &direction_player3_368_12_0, &direction_player3_368_12_0, NULL, &direction_player3_368_12_8, &direction_player3_368_12_8, &direction_player3_368_12_8, &direction_player3_368_12_8, &direction_player3_368_12_8, &direction_player3_368_12_8, &direction_player3_368_12_8, NULL, &direction_player3_368_12_16, &direction_player3_368_12_16, &direction_player3_368_12_16, &direction_player3_368_12_16, &direction_player3_368_12_16, &direction_player3_368_12_16, &direction_player3_368_12_16, NULL, &direction_player3_368_12_24, &direction_player3_368_12_24, &direction_player3_368_12_24, &direction_player3_368_12_24, &direction_player3_368_12_24, &direction_player3_368_12_24, &direction_player3_368_12_24, NULL, &direction_player3_368_12_0, &direction_player3_368_12_0, &direction_player3_368_12_0};
static Image* images_player3_368_13_0[2];
static Direction direction_player3_368_13_0 = {0, 10, 10, 0, -1, images_player3_368_13_0, 2};
static Image* images_player3_368_13_8[2];
static Direction direction_player3_368_13_8 = {8, 10, 10, 0, -1, images_player3_368_13_8, 2};
static Image* images_player3_368_13_16[2];
static Direction direction_player3_368_13_16 = {16, 10, 10, 0, -1, images_player3_368_13_16, 2};
static Image* images_player3_368_13_24[2];
static Direction direction_player3_368_13_24 = {24, 10, 10, 0, -1, images_player3_368_13_24, 2};
static Animation anim_player3_368_13 = {&direction_player3_368_13_0, &direction_player3_368_13_0, &direction_player3_368_13_0, &direction_player3_368_13_0, NULL, &direction_player3_368_13_8, &direction_player3_368_13_8, &direction_player3_368_13_8, &direction_player3_368_13_8, &direction_player3_368_13_8, &direction_player3_368_13_8, &direction_player3_368_13_8, NULL, &direction_player3_368_13_16, &direction_player3_368_13_16, &direction_player3_368_13_16, &direction_player3_368_13_16, &direction_player3_368_13_16, &direction_player3_368_13_16, &direction_player3_368_13_16, NULL, &direction_player3_368_13_24, &direction_player3_368_13_24, &direction_player3_368_13_24, &direction_player3_368_13_24, &direction_player3_368_13_24, &direction_player3_368_13_24, &direction_player3_368_13_24, NULL, &direction_player3_368_13_0, &direction_player3_368_13_0, &direction_player3_368_13_0};
static Image* images_player3_368_14_0[2];
static Direction direction_player3_368_14_0 = {0, 10, 10, 0, -1, images_player3_368_14_0, 2};
static Image* images_player3_368_14_8[2];
static Direction direction_player3_368_14_8 = {8, 10, 10, 0, -1, images_player3_368_14_8, 2};
static Image* images_player3_368_14_16[2];
static Direction direction_player3_368_14_16 = {16, 10, 10, 0, -1, images_player3_368_14_16, 2};
static Image* images_player3_368_14_24[2];
static Direction direction_player3_368_14_24 = {24, 10, 10, 0, -1, images_player3_368_14_24, 2};
static Animation anim_player3_368_14 = {&direction_player3_368_14_0, &direction_player3_368_14_0, &direction_player3_368_14_0, &direction_player3_368_14_0, NULL, &direction_player3_368_14_8, &direction_player3_368_14_8, &direction_player3_368_14_8, &direction_player3_368_14_8, &direction_player3_368_14_8, &direction_player3_368_14_8, &direction_player3_368_14_8, NULL, &direction_player3_368_14_16, &direction_player3_368_14_16, &direction_player3_368_14_16, &direction_player3_368_14_16, &direction_player3_368_14_16, &direction_player3_368_14_16, &direction_player3_368_14_16, NULL, &direction_player3_368_14_24, &direction_player3_368_14_24, &direction_player3_368_14_24, &direction_player3_368_14_24, &direction_player3_368_14_24, &direction_player3_368_14_24, &direction_player3_368_14_24, NULL, &direction_player3_368_14_0, &direction_player3_368_14_0, &direction_player3_368_14_0};
static Image* images_player3_368_15_0[2];
static Direction direction_player3_368_15_0 = {0, 10, 10, 0, -1, images_player3_368_15_0, 2};
static Image* images_player3_368_15_8[2];
static Direction direction_player3_368_15_8 = {8, 10, 10, 0, -1, images_player3_368_15_8, 2};
static Image* images_player3_368_15_16[2];
static Direction direction_player3_368_15_16 = {16, 10, 10, 0, -1, images_player3_368_15_16, 2};
static Image* images_player3_368_15_24[2];
static Direction direction_player3_368_15_24 = {24, 10, 10, 0, -1, images_player3_368_15_24, 2};
static Animation anim_player3_368_15 = {&direction_player3_368_15_0, &direction_player3_368_15_0, &direction_player3_368_15_0, &direction_player3_368_15_0, NULL, &direction_player3_368_15_8, &direction_player3_368_15_8, &direction_player3_368_15_8, &direction_player3_368_15_8, &direction_player3_368_15_8, &direction_player3_368_15_8, &direction_player3_368_15_8, NULL, &direction_player3_368_15_16, &direction_player3_368_15_16, &direction_player3_368_15_16, &direction_player3_368_15_16, &direction_player3_368_15_16, &direction_player3_368_15_16, &direction_player3_368_15_16, NULL, &direction_player3_368_15_24, &direction_player3_368_15_24, &direction_player3_368_15_24, &direction_player3_368_15_24, &direction_player3_368_15_24, &direction_player3_368_15_24, &direction_player3_368_15_24, NULL, &direction_player3_368_15_0, &direction_player3_368_15_0, &direction_player3_368_15_0};
static Image* images_player3_368_16_0[2];
static Direction direction_player3_368_16_0 = {0, 10, 10, 0, -1, images_player3_368_16_0, 2};
static Image* images_player3_368_16_8[2];
static Direction direction_player3_368_16_8 = {8, 10, 10, 0, -1, images_player3_368_16_8, 2};
static Image* images_player3_368_16_16[2];
static Direction direction_player3_368_16_16 = {16, 10, 10, 0, -1, images_player3_368_16_16, 2};
static Image* images_player3_368_16_24[2];
static Direction direction_player3_368_16_24 = {24, 10, 10, 0, -1, images_player3_368_16_24, 2};
static Animation anim_player3_368_16 = {&direction_player3_368_16_0, &direction_player3_368_16_0, &direction_player3_368_16_0, &direction_player3_368_16_0, NULL, &direction_player3_368_16_8, &direction_player3_368_16_8, &direction_player3_368_16_8, &direction_player3_368_16_8, &direction_player3_368_16_8, &direction_player3_368_16_8, &direction_player3_368_16_8, NULL, &direction_player3_368_16_16, &direction_player3_368_16_16, &direction_player3_368_16_16, &direction_player3_368_16_16, &direction_player3_368_16_16, &direction_player3_368_16_16, &direction_player3_368_16_16, NULL, &direction_player3_368_16_24, &direction_player3_368_16_24, &direction_player3_368_16_24, &direction_player3_368_16_24, &direction_player3_368_16_24, &direction_player3_368_16_24, &direction_player3_368_16_24, NULL, &direction_player3_368_16_0, &direction_player3_368_16_0, &direction_player3_368_16_0};
static Image* images_player3_368_17_0[2];
static Direction direction_player3_368_17_0 = {0, 5, 5, 1, -1, images_player3_368_17_0, 2};
static Image* images_player3_368_17_8[2];
static Direction direction_player3_368_17_8 = {8, 5, 5, 1, -1, images_player3_368_17_8, 2};
static Image* images_player3_368_17_16[2];
static Direction direction_player3_368_17_16 = {16, 5, 5, 1, -1, images_player3_368_17_16, 2};
static Image* images_player3_368_17_24[2];
static Direction direction_player3_368_17_24 = {24, 5, 5, 1, -1, images_player3_368_17_24, 2};
static Animation anim_player3_368_17 = {&direction_player3_368_17_0, &direction_player3_368_17_0, &direction_player3_368_17_0, &direction_player3_368_17_0, NULL, &direction_player3_368_17_8, &direction_player3_368_17_8, &direction_player3_368_17_8, &direction_player3_368_17_8, &direction_player3_368_17_8, &direction_player3_368_17_8, &direction_player3_368_17_8, NULL, &direction_player3_368_17_16, &direction_player3_368_17_16, &direction_player3_368_17_16, &direction_player3_368_17_16, &direction_player3_368_17_16, &direction_player3_368_17_16, &direction_player3_368_17_16, NULL, &direction_player3_368_17_24, &direction_player3_368_17_24, &direction_player3_368_17_24, &direction_player3_368_17_24, &direction_player3_368_17_24, &direction_player3_368_17_24, &direction_player3_368_17_24, NULL, &direction_player3_368_17_0, &direction_player3_368_17_0, &direction_player3_368_17_0};
static Image* images_player3_368_18_24[8];
static Direction direction_player3_368_18_24 = {24, 10, 10, 0, -1, images_player3_368_18_24, 8};
static Animation anim_player3_368_18 = {&direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, NULL, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24, &direction_player3_368_18_24};
static Image* images_player3_368_19_24[5];
static Direction direction_player3_368_19_24 = {24, 10, 10, 0, -1, images_player3_368_19_24, 5};
static Animation anim_player3_368_19 = {&direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, NULL, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24, &direction_player3_368_19_24};
static Animation * anim_array_player3_368[20] = {&anim_player3_368_0, NULL, NULL, NULL, &anim_player3_368_4, NULL, &anim_player3_368_6, &anim_player3_368_7, &anim_player3_368_8, &anim_player3_368_9, &anim_player3_368_10, &anim_player3_368_11, &anim_player3_368_12, &anim_player3_368_13, &anim_player3_368_14, &anim_player3_368_15, &anim_player3_368_16, &anim_player3_368_17, &anim_player3_368_18, &anim_player3_368_19};
static Animations anim_player3_368 = {20, &anim_array_player3_368[0]};
static bool anim_player3_368_initialized;
class Player3_368 : public Active
{
public:
    Player3_368(int x, int y) : Active(x, y, Player3_368_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_3", 8);
#endif
        this->animations = &anim_player3_368;
        if (!anim_player3_368_initialized) {
            anim_player3_368_initialized = true;
            images_player3_368_0_0[0] = get_internal_image(665);
            images_player3_368_0_0[1] = get_internal_image(666);
            images_player3_368_0_8[0] = get_internal_image(672);
            images_player3_368_0_8[1] = get_internal_image(671);
            images_player3_368_0_16[0] = get_internal_image(668);
            images_player3_368_0_16[1] = get_internal_image(667);
            images_player3_368_0_24[0] = get_internal_image(474);
            images_player3_368_0_24[1] = get_internal_image(604);
            images_player3_368_4_0[0] = get_internal_image(369);
            images_player3_368_4_0[1] = get_internal_image(373);
            images_player3_368_4_0[2] = get_internal_image(369);
            images_player3_368_4_0[3] = get_internal_image(373);
            images_player3_368_4_16[0] = get_internal_image(371);
            images_player3_368_4_16[1] = get_internal_image(763);
            images_player3_368_4_16[2] = get_internal_image(371);
            images_player3_368_4_16[3] = get_internal_image(763);
            images_player3_368_6_0[0] = get_internal_image(250);
            images_player3_368_6_8[0] = get_internal_image(1063);
            images_player3_368_6_16[0] = get_internal_image(602);
            images_player3_368_6_24[0] = get_internal_image(1070);
            images_player3_368_7_0[0] = get_internal_image(1123);
            images_player3_368_7_0[1] = get_internal_image(1129);
            images_player3_368_7_8[0] = get_internal_image(1134);
            images_player3_368_7_8[1] = get_internal_image(1135);
            images_player3_368_7_16[0] = get_internal_image(1130);
            images_player3_368_7_16[1] = get_internal_image(1131);
            images_player3_368_7_24[0] = get_internal_image(1128);
            images_player3_368_7_24[1] = get_internal_image(1137);
            images_player3_368_8_0[0] = get_internal_image(2481);
            images_player3_368_8_24[0] = get_internal_image(1178);
            images_player3_368_9_0[0] = get_internal_image(1301);
            images_player3_368_9_0[1] = get_internal_image(1494);
            images_player3_368_10_0[0] = get_internal_image(270);
            images_player3_368_10_0[1] = get_internal_image(271);
            images_player3_368_10_0[2] = get_internal_image(595);
            images_player3_368_10_0[3] = get_internal_image(2345);
            images_player3_368_10_0[4] = get_internal_image(595);
            images_player3_368_11_0[0] = get_internal_image(645);
            images_player3_368_11_0[1] = get_internal_image(646);
            images_player3_368_11_8[0] = get_internal_image(675);
            images_player3_368_11_8[1] = get_internal_image(673);
            images_player3_368_11_16[0] = get_internal_image(669);
            images_player3_368_11_16[1] = get_internal_image(670);
            images_player3_368_11_24[0] = get_internal_image(713);
            images_player3_368_11_24[1] = get_internal_image(714);
            images_player3_368_12_0[0] = get_internal_image(1190);
            images_player3_368_12_0[1] = get_internal_image(1686);
            images_player3_368_12_8[0] = get_internal_image(1627);
            images_player3_368_12_8[1] = get_internal_image(1759);
            images_player3_368_12_16[0] = get_internal_image(2372);
            images_player3_368_12_16[1] = get_internal_image(2373);
            images_player3_368_12_24[0] = get_internal_image(1774);
            images_player3_368_12_24[1] = get_internal_image(1775);
            images_player3_368_13_0[0] = get_internal_image(1617);
            images_player3_368_13_0[1] = get_internal_image(1787);
            images_player3_368_13_8[0] = get_internal_image(1791);
            images_player3_368_13_8[1] = get_internal_image(1792);
            images_player3_368_13_16[0] = get_internal_image(1789);
            images_player3_368_13_16[1] = get_internal_image(1790);
            images_player3_368_13_24[0] = get_internal_image(1618);
            images_player3_368_13_24[1] = get_internal_image(1788);
            images_player3_368_14_0[0] = get_internal_image(1687);
            images_player3_368_14_0[1] = get_internal_image(1685);
            images_player3_368_14_8[0] = get_internal_image(1692);
            images_player3_368_14_8[1] = get_internal_image(1694);
            images_player3_368_14_16[0] = get_internal_image(1690);
            images_player3_368_14_16[1] = get_internal_image(1689);
            images_player3_368_14_24[0] = get_internal_image(1688);
            images_player3_368_14_24[1] = get_internal_image(1691);
            images_player3_368_15_0[0] = get_internal_image(1628);
            images_player3_368_15_0[1] = get_internal_image(1629);
            images_player3_368_15_8[0] = get_internal_image(1722);
            images_player3_368_15_8[1] = get_internal_image(1723);
            images_player3_368_15_16[0] = get_internal_image(1720);
            images_player3_368_15_16[1] = get_internal_image(1719);
            images_player3_368_15_24[0] = get_internal_image(1716);
            images_player3_368_15_24[1] = get_internal_image(1721);
            images_player3_368_16_0[0] = get_internal_image(1875);
            images_player3_368_16_0[1] = get_internal_image(1878);
            images_player3_368_16_8[0] = get_internal_image(1916);
            images_player3_368_16_8[1] = get_internal_image(1917);
            images_player3_368_16_16[0] = get_internal_image(1880);
            images_player3_368_16_16[1] = get_internal_image(1881);
            images_player3_368_16_24[0] = get_internal_image(1899);
            images_player3_368_16_24[1] = get_internal_image(1906);
            images_player3_368_17_0[0] = get_internal_image(1972);
            images_player3_368_17_0[1] = get_internal_image(1973);
            images_player3_368_17_8[0] = get_internal_image(1979);
            images_player3_368_17_8[1] = get_internal_image(1980);
            images_player3_368_17_16[0] = get_internal_image(1975);
            images_player3_368_17_16[1] = get_internal_image(1976);
            images_player3_368_17_24[0] = get_internal_image(1981);
            images_player3_368_17_24[1] = get_internal_image(1977);
            images_player3_368_18_24[0] = get_internal_image(1965);
            images_player3_368_18_24[1] = get_internal_image(2069);
            images_player3_368_18_24[2] = get_internal_image(2064);
            images_player3_368_18_24[3] = get_internal_image(2066);
            images_player3_368_18_24[4] = get_internal_image(2065);
            images_player3_368_18_24[5] = get_internal_image(2068);
            images_player3_368_18_24[6] = get_internal_image(2064);
            images_player3_368_18_24[7] = get_internal_image(2067);
            images_player3_368_19_24[0] = get_internal_image(2136);
            images_player3_368_19_24[1] = get_internal_image(2140);
            images_player3_368_19_24[2] = get_internal_image(2140);
            images_player3_368_19_24[3] = get_internal_image(2138);
            images_player3_368_19_24[4] = get_internal_image(2138);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player3_368(int x, int y)
{
    return new (Active::pool.create()) Player3_368(x, y);
}
static Image* images_player4_369_0_0[2];
static Direction direction_player4_369_0_0 = {0, 10, 10, 0, -1, images_player4_369_0_0, 2};
static Image* images_player4_369_0_8[2];
static Direction direction_player4_369_0_8 = {8, 10, 10, 0, -1, images_player4_369_0_8, 2};
static Image* images_player4_369_0_16[2];
static Direction direction_player4_369_0_16 = {16, 10, 10, 0, -1, images_player4_369_0_16, 2};
static Image* images_player4_369_0_24[2];
static Direction direction_player4_369_0_24 = {24, 10, 10, 0, -1, images_player4_369_0_24, 2};
static Animation anim_player4_369_0 = {&direction_player4_369_0_0, &direction_player4_369_0_0, &direction_player4_369_0_0, &direction_player4_369_0_0, NULL, &direction_player4_369_0_8, &direction_player4_369_0_8, &direction_player4_369_0_8, &direction_player4_369_0_8, &direction_player4_369_0_8, &direction_player4_369_0_8, &direction_player4_369_0_8, NULL, &direction_player4_369_0_16, &direction_player4_369_0_16, &direction_player4_369_0_16, &direction_player4_369_0_16, &direction_player4_369_0_16, &direction_player4_369_0_16, &direction_player4_369_0_16, NULL, &direction_player4_369_0_24, &direction_player4_369_0_24, &direction_player4_369_0_24, &direction_player4_369_0_24, &direction_player4_369_0_24, &direction_player4_369_0_24, &direction_player4_369_0_24, NULL, &direction_player4_369_0_0, &direction_player4_369_0_0, &direction_player4_369_0_0};
static Image* images_player4_369_4_0[4];
static Direction direction_player4_369_4_0 = {0, 20, 20, 0, 1, images_player4_369_4_0, 4};
static Image* images_player4_369_4_16[4];
static Direction direction_player4_369_4_16 = {16, 20, 20, 0, 1, images_player4_369_4_16, 4};
static Animation anim_player4_369_4 = {&direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0, NULL, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, &direction_player4_369_4_16, NULL, &direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0, &direction_player4_369_4_0};
static Image* images_player4_369_6_0[1];
static Direction direction_player4_369_6_0 = {0, 6, 6, 0, 1, images_player4_369_6_0, 1};
static Image* images_player4_369_6_8[1];
static Direction direction_player4_369_6_8 = {8, 6, 6, 0, 1, images_player4_369_6_8, 1};
static Image* images_player4_369_6_16[1];
static Direction direction_player4_369_6_16 = {16, 6, 6, 0, 1, images_player4_369_6_16, 1};
static Image* images_player4_369_6_24[1];
static Direction direction_player4_369_6_24 = {24, 6, 6, 0, 1, images_player4_369_6_24, 1};
static Animation anim_player4_369_6 = {&direction_player4_369_6_0, &direction_player4_369_6_0, &direction_player4_369_6_0, &direction_player4_369_6_0, NULL, &direction_player4_369_6_8, &direction_player4_369_6_8, &direction_player4_369_6_8, &direction_player4_369_6_8, &direction_player4_369_6_8, &direction_player4_369_6_8, &direction_player4_369_6_8, NULL, &direction_player4_369_6_16, &direction_player4_369_6_16, &direction_player4_369_6_16, &direction_player4_369_6_16, &direction_player4_369_6_16, &direction_player4_369_6_16, &direction_player4_369_6_16, NULL, &direction_player4_369_6_24, &direction_player4_369_6_24, &direction_player4_369_6_24, &direction_player4_369_6_24, &direction_player4_369_6_24, &direction_player4_369_6_24, &direction_player4_369_6_24, NULL, &direction_player4_369_6_0, &direction_player4_369_6_0, &direction_player4_369_6_0};
static Image* images_player4_369_7_0[2];
static Direction direction_player4_369_7_0 = {0, 10, 10, 0, -1, images_player4_369_7_0, 2};
static Image* images_player4_369_7_8[2];
static Direction direction_player4_369_7_8 = {8, 10, 10, 0, -1, images_player4_369_7_8, 2};
static Image* images_player4_369_7_16[2];
static Direction direction_player4_369_7_16 = {16, 10, 10, 0, -1, images_player4_369_7_16, 2};
static Image* images_player4_369_7_24[2];
static Direction direction_player4_369_7_24 = {24, 10, 10, 0, -1, images_player4_369_7_24, 2};
static Animation anim_player4_369_7 = {&direction_player4_369_7_0, &direction_player4_369_7_0, &direction_player4_369_7_0, &direction_player4_369_7_0, NULL, &direction_player4_369_7_8, &direction_player4_369_7_8, &direction_player4_369_7_8, &direction_player4_369_7_8, &direction_player4_369_7_8, &direction_player4_369_7_8, &direction_player4_369_7_8, NULL, &direction_player4_369_7_16, &direction_player4_369_7_16, &direction_player4_369_7_16, &direction_player4_369_7_16, &direction_player4_369_7_16, &direction_player4_369_7_16, &direction_player4_369_7_16, NULL, &direction_player4_369_7_24, &direction_player4_369_7_24, &direction_player4_369_7_24, &direction_player4_369_7_24, &direction_player4_369_7_24, &direction_player4_369_7_24, &direction_player4_369_7_24, NULL, &direction_player4_369_7_0, &direction_player4_369_7_0, &direction_player4_369_7_0};
static Image* images_player4_369_8_0[1];
static Direction direction_player4_369_8_0 = {0, 50, 50, 0, -1, images_player4_369_8_0, 1};
static Image* images_player4_369_8_24[1];
static Direction direction_player4_369_8_24 = {24, 10, 10, 0, -1, images_player4_369_8_24, 1};
static Animation anim_player4_369_8 = {&direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0, NULL, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, &direction_player4_369_8_24, NULL, &direction_player4_369_8_0, &direction_player4_369_8_0, &direction_player4_369_8_0};
static Image* images_player4_369_9_0[2];
static Direction direction_player4_369_9_0 = {0, 50, 50, 0, -1, images_player4_369_9_0, 2};
static Animation anim_player4_369_9 = {&direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, NULL, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0, &direction_player4_369_9_0};
static Image* images_player4_369_10_0[5];
static Direction direction_player4_369_10_0 = {0, 10, 10, 0, -1, images_player4_369_10_0, 5};
static Animation anim_player4_369_10 = {&direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, NULL, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0, &direction_player4_369_10_0};
static Image* images_player4_369_11_0[2];
static Direction direction_player4_369_11_0 = {0, 6, 6, 0, -1, images_player4_369_11_0, 2};
static Image* images_player4_369_11_8[2];
static Direction direction_player4_369_11_8 = {8, 6, 6, 0, -1, images_player4_369_11_8, 2};
static Image* images_player4_369_11_16[2];
static Direction direction_player4_369_11_16 = {16, 6, 6, 0, -1, images_player4_369_11_16, 2};
static Image* images_player4_369_11_24[2];
static Direction direction_player4_369_11_24 = {24, 6, 6, 0, -1, images_player4_369_11_24, 2};
static Animation anim_player4_369_11 = {&direction_player4_369_11_0, &direction_player4_369_11_0, &direction_player4_369_11_0, &direction_player4_369_11_0, NULL, &direction_player4_369_11_8, &direction_player4_369_11_8, &direction_player4_369_11_8, &direction_player4_369_11_8, &direction_player4_369_11_8, &direction_player4_369_11_8, &direction_player4_369_11_8, NULL, &direction_player4_369_11_16, &direction_player4_369_11_16, &direction_player4_369_11_16, &direction_player4_369_11_16, &direction_player4_369_11_16, &direction_player4_369_11_16, &direction_player4_369_11_16, NULL, &direction_player4_369_11_24, &direction_player4_369_11_24, &direction_player4_369_11_24, &direction_player4_369_11_24, &direction_player4_369_11_24, &direction_player4_369_11_24, &direction_player4_369_11_24, NULL, &direction_player4_369_11_0, &direction_player4_369_11_0, &direction_player4_369_11_0};
static Image* images_player4_369_12_0[2];
static Direction direction_player4_369_12_0 = {0, 10, 10, 0, -1, images_player4_369_12_0, 2};
static Image* images_player4_369_12_8[2];
static Direction direction_player4_369_12_8 = {8, 10, 10, 0, -1, images_player4_369_12_8, 2};
static Image* images_player4_369_12_16[2];
static Direction direction_player4_369_12_16 = {16, 10, 10, 0, -1, images_player4_369_12_16, 2};
static Image* images_player4_369_12_24[2];
static Direction direction_player4_369_12_24 = {24, 10, 10, 0, -1, images_player4_369_12_24, 2};
static Animation anim_player4_369_12 = {&direction_player4_369_12_0, &direction_player4_369_12_0, &direction_player4_369_12_0, &direction_player4_369_12_0, NULL, &direction_player4_369_12_8, &direction_player4_369_12_8, &direction_player4_369_12_8, &direction_player4_369_12_8, &direction_player4_369_12_8, &direction_player4_369_12_8, &direction_player4_369_12_8, NULL, &direction_player4_369_12_16, &direction_player4_369_12_16, &direction_player4_369_12_16, &direction_player4_369_12_16, &direction_player4_369_12_16, &direction_player4_369_12_16, &direction_player4_369_12_16, NULL, &direction_player4_369_12_24, &direction_player4_369_12_24, &direction_player4_369_12_24, &direction_player4_369_12_24, &direction_player4_369_12_24, &direction_player4_369_12_24, &direction_player4_369_12_24, NULL, &direction_player4_369_12_0, &direction_player4_369_12_0, &direction_player4_369_12_0};
static Image* images_player4_369_13_0[2];
static Direction direction_player4_369_13_0 = {0, 10, 10, 0, -1, images_player4_369_13_0, 2};
static Image* images_player4_369_13_8[2];
static Direction direction_player4_369_13_8 = {8, 10, 10, 0, -1, images_player4_369_13_8, 2};
static Image* images_player4_369_13_16[2];
static Direction direction_player4_369_13_16 = {16, 10, 10, 0, -1, images_player4_369_13_16, 2};
static Image* images_player4_369_13_24[2];
static Direction direction_player4_369_13_24 = {24, 10, 10, 0, -1, images_player4_369_13_24, 2};
static Animation anim_player4_369_13 = {&direction_player4_369_13_0, &direction_player4_369_13_0, &direction_player4_369_13_0, &direction_player4_369_13_0, NULL, &direction_player4_369_13_8, &direction_player4_369_13_8, &direction_player4_369_13_8, &direction_player4_369_13_8, &direction_player4_369_13_8, &direction_player4_369_13_8, &direction_player4_369_13_8, NULL, &direction_player4_369_13_16, &direction_player4_369_13_16, &direction_player4_369_13_16, &direction_player4_369_13_16, &direction_player4_369_13_16, &direction_player4_369_13_16, &direction_player4_369_13_16, NULL, &direction_player4_369_13_24, &direction_player4_369_13_24, &direction_player4_369_13_24, &direction_player4_369_13_24, &direction_player4_369_13_24, &direction_player4_369_13_24, &direction_player4_369_13_24, NULL, &direction_player4_369_13_0, &direction_player4_369_13_0, &direction_player4_369_13_0};
static Image* images_player4_369_14_0[2];
static Direction direction_player4_369_14_0 = {0, 10, 10, 0, -1, images_player4_369_14_0, 2};
static Image* images_player4_369_14_8[2];
static Direction direction_player4_369_14_8 = {8, 10, 10, 0, -1, images_player4_369_14_8, 2};
static Image* images_player4_369_14_16[2];
static Direction direction_player4_369_14_16 = {16, 10, 10, 0, -1, images_player4_369_14_16, 2};
static Image* images_player4_369_14_24[2];
static Direction direction_player4_369_14_24 = {24, 10, 10, 0, -1, images_player4_369_14_24, 2};
static Animation anim_player4_369_14 = {&direction_player4_369_14_0, &direction_player4_369_14_0, &direction_player4_369_14_0, &direction_player4_369_14_0, NULL, &direction_player4_369_14_8, &direction_player4_369_14_8, &direction_player4_369_14_8, &direction_player4_369_14_8, &direction_player4_369_14_8, &direction_player4_369_14_8, &direction_player4_369_14_8, NULL, &direction_player4_369_14_16, &direction_player4_369_14_16, &direction_player4_369_14_16, &direction_player4_369_14_16, &direction_player4_369_14_16, &direction_player4_369_14_16, &direction_player4_369_14_16, NULL, &direction_player4_369_14_24, &direction_player4_369_14_24, &direction_player4_369_14_24, &direction_player4_369_14_24, &direction_player4_369_14_24, &direction_player4_369_14_24, &direction_player4_369_14_24, NULL, &direction_player4_369_14_0, &direction_player4_369_14_0, &direction_player4_369_14_0};
static Image* images_player4_369_15_0[2];
static Direction direction_player4_369_15_0 = {0, 10, 10, 0, -1, images_player4_369_15_0, 2};
static Image* images_player4_369_15_8[2];
static Direction direction_player4_369_15_8 = {8, 10, 10, 0, -1, images_player4_369_15_8, 2};
static Image* images_player4_369_15_16[2];
static Direction direction_player4_369_15_16 = {16, 10, 10, 0, -1, images_player4_369_15_16, 2};
static Image* images_player4_369_15_24[2];
static Direction direction_player4_369_15_24 = {24, 10, 10, 0, -1, images_player4_369_15_24, 2};
static Animation anim_player4_369_15 = {&direction_player4_369_15_0, &direction_player4_369_15_0, &direction_player4_369_15_0, &direction_player4_369_15_0, NULL, &direction_player4_369_15_8, &direction_player4_369_15_8, &direction_player4_369_15_8, &direction_player4_369_15_8, &direction_player4_369_15_8, &direction_player4_369_15_8, &direction_player4_369_15_8, NULL, &direction_player4_369_15_16, &direction_player4_369_15_16, &direction_player4_369_15_16, &direction_player4_369_15_16, &direction_player4_369_15_16, &direction_player4_369_15_16, &direction_player4_369_15_16, NULL, &direction_player4_369_15_24, &direction_player4_369_15_24, &direction_player4_369_15_24, &direction_player4_369_15_24, &direction_player4_369_15_24, &direction_player4_369_15_24, &direction_player4_369_15_24, NULL, &direction_player4_369_15_0, &direction_player4_369_15_0, &direction_player4_369_15_0};
static Image* images_player4_369_16_0[2];
static Direction direction_player4_369_16_0 = {0, 10, 10, 0, -1, images_player4_369_16_0, 2};
static Image* images_player4_369_16_8[2];
static Direction direction_player4_369_16_8 = {8, 10, 10, 0, -1, images_player4_369_16_8, 2};
static Image* images_player4_369_16_16[2];
static Direction direction_player4_369_16_16 = {16, 10, 10, 0, -1, images_player4_369_16_16, 2};
static Image* images_player4_369_16_24[2];
static Direction direction_player4_369_16_24 = {24, 10, 10, 0, -1, images_player4_369_16_24, 2};
static Animation anim_player4_369_16 = {&direction_player4_369_16_0, &direction_player4_369_16_0, &direction_player4_369_16_0, &direction_player4_369_16_0, NULL, &direction_player4_369_16_8, &direction_player4_369_16_8, &direction_player4_369_16_8, &direction_player4_369_16_8, &direction_player4_369_16_8, &direction_player4_369_16_8, &direction_player4_369_16_8, NULL, &direction_player4_369_16_16, &direction_player4_369_16_16, &direction_player4_369_16_16, &direction_player4_369_16_16, &direction_player4_369_16_16, &direction_player4_369_16_16, &direction_player4_369_16_16, NULL, &direction_player4_369_16_24, &direction_player4_369_16_24, &direction_player4_369_16_24, &direction_player4_369_16_24, &direction_player4_369_16_24, &direction_player4_369_16_24, &direction_player4_369_16_24, NULL, &direction_player4_369_16_0, &direction_player4_369_16_0, &direction_player4_369_16_0};
static Image* images_player4_369_17_0[2];
static Direction direction_player4_369_17_0 = {0, 5, 5, 1, -1, images_player4_369_17_0, 2};
static Image* images_player4_369_17_8[2];
static Direction direction_player4_369_17_8 = {8, 5, 5, 1, -1, images_player4_369_17_8, 2};
static Image* images_player4_369_17_16[2];
static Direction direction_player4_369_17_16 = {16, 5, 5, 1, -1, images_player4_369_17_16, 2};
static Image* images_player4_369_17_24[2];
static Direction direction_player4_369_17_24 = {24, 5, 5, 1, -1, images_player4_369_17_24, 2};
static Animation anim_player4_369_17 = {&direction_player4_369_17_0, &direction_player4_369_17_0, &direction_player4_369_17_0, &direction_player4_369_17_0, NULL, &direction_player4_369_17_8, &direction_player4_369_17_8, &direction_player4_369_17_8, &direction_player4_369_17_8, &direction_player4_369_17_8, &direction_player4_369_17_8, &direction_player4_369_17_8, NULL, &direction_player4_369_17_16, &direction_player4_369_17_16, &direction_player4_369_17_16, &direction_player4_369_17_16, &direction_player4_369_17_16, &direction_player4_369_17_16, &direction_player4_369_17_16, NULL, &direction_player4_369_17_24, &direction_player4_369_17_24, &direction_player4_369_17_24, &direction_player4_369_17_24, &direction_player4_369_17_24, &direction_player4_369_17_24, &direction_player4_369_17_24, NULL, &direction_player4_369_17_0, &direction_player4_369_17_0, &direction_player4_369_17_0};
static Image* images_player4_369_18_24[8];
static Direction direction_player4_369_18_24 = {24, 10, 10, 0, -1, images_player4_369_18_24, 8};
static Animation anim_player4_369_18 = {&direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, NULL, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24, &direction_player4_369_18_24};
static Image* images_player4_369_19_24[5];
static Direction direction_player4_369_19_24 = {24, 10, 10, 0, -1, images_player4_369_19_24, 5};
static Animation anim_player4_369_19 = {&direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, NULL, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24, &direction_player4_369_19_24};
static Animation * anim_array_player4_369[20] = {&anim_player4_369_0, NULL, NULL, NULL, &anim_player4_369_4, NULL, &anim_player4_369_6, &anim_player4_369_7, &anim_player4_369_8, &anim_player4_369_9, &anim_player4_369_10, &anim_player4_369_11, &anim_player4_369_12, &anim_player4_369_13, &anim_player4_369_14, &anim_player4_369_15, &anim_player4_369_16, &anim_player4_369_17, &anim_player4_369_18, &anim_player4_369_19};
static Animations anim_player4_369 = {20, &anim_array_player4_369[0]};
static bool anim_player4_369_initialized;
class Player4_369 : public Active
{
public:
    Player4_369(int x, int y) : Active(x, y, Player4_369_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_4", 8);
#endif
        this->animations = &anim_player4_369;
        if (!anim_player4_369_initialized) {
            anim_player4_369_initialized = true;
            images_player4_369_0_0[0] = get_internal_image(720);
            images_player4_369_0_0[1] = get_internal_image(725);
            images_player4_369_0_8[0] = get_internal_image(752);
            images_player4_369_0_8[1] = get_internal_image(753);
            images_player4_369_0_16[0] = get_internal_image(746);
            images_player4_369_0_16[1] = get_internal_image(745);
            images_player4_369_0_24[0] = get_internal_image(693);
            images_player4_369_0_24[1] = get_internal_image(698);
            images_player4_369_4_0[0] = get_internal_image(369);
            images_player4_369_4_0[1] = get_internal_image(373);
            images_player4_369_4_0[2] = get_internal_image(369);
            images_player4_369_4_0[3] = get_internal_image(373);
            images_player4_369_4_16[0] = get_internal_image(371);
            images_player4_369_4_16[1] = get_internal_image(763);
            images_player4_369_4_16[2] = get_internal_image(371);
            images_player4_369_4_16[3] = get_internal_image(763);
            images_player4_369_6_0[0] = get_internal_image(155);
            images_player4_369_6_8[0] = get_internal_image(1065);
            images_player4_369_6_16[0] = get_internal_image(163);
            images_player4_369_6_24[0] = get_internal_image(1068);
            images_player4_369_7_0[0] = get_internal_image(1149);
            images_player4_369_7_0[1] = get_internal_image(1155);
            images_player4_369_7_8[0] = get_internal_image(1160);
            images_player4_369_7_8[1] = get_internal_image(1161);
            images_player4_369_7_16[0] = get_internal_image(1154);
            images_player4_369_7_16[1] = get_internal_image(1156);
            images_player4_369_7_24[0] = get_internal_image(1158);
            images_player4_369_7_24[1] = get_internal_image(1159);
            images_player4_369_8_0[0] = get_internal_image(2485);
            images_player4_369_8_24[0] = get_internal_image(1180);
            images_player4_369_9_0[0] = get_internal_image(1503);
            images_player4_369_9_0[1] = get_internal_image(1498);
            images_player4_369_10_0[0] = get_internal_image(756);
            images_player4_369_10_0[1] = get_internal_image(754);
            images_player4_369_10_0[2] = get_internal_image(548);
            images_player4_369_10_0[3] = get_internal_image(2346);
            images_player4_369_10_0[4] = get_internal_image(548);
            images_player4_369_11_0[0] = get_internal_image(1099);
            images_player4_369_11_0[1] = get_internal_image(1103);
            images_player4_369_11_8[0] = get_internal_image(749);
            images_player4_369_11_8[1] = get_internal_image(750);
            images_player4_369_11_16[0] = get_internal_image(1110);
            images_player4_369_11_16[1] = get_internal_image(1112);
            images_player4_369_11_24[0] = get_internal_image(724);
            images_player4_369_11_24[1] = get_internal_image(730);
            images_player4_369_12_0[0] = get_internal_image(1195);
            images_player4_369_12_0[1] = get_internal_image(1196);
            images_player4_369_12_8[0] = get_internal_image(1764);
            images_player4_369_12_8[1] = get_internal_image(1763);
            images_player4_369_12_16[0] = get_internal_image(1198);
            images_player4_369_12_16[1] = get_internal_image(1197);
            images_player4_369_12_24[0] = get_internal_image(1779);
            images_player4_369_12_24[1] = get_internal_image(1782);
            images_player4_369_13_0[0] = get_internal_image(1822);
            images_player4_369_13_0[1] = get_internal_image(1820);
            images_player4_369_13_8[0] = get_internal_image(1828);
            images_player4_369_13_8[1] = get_internal_image(1826);
            images_player4_369_13_16[0] = get_internal_image(1823);
            images_player4_369_13_16[1] = get_internal_image(1824);
            images_player4_369_13_24[0] = get_internal_image(1825);
            images_player4_369_13_24[1] = get_internal_image(1827);
            images_player4_369_14_0[0] = get_internal_image(1672);
            images_player4_369_14_0[1] = get_internal_image(1678);
            images_player4_369_14_8[0] = get_internal_image(1683);
            images_player4_369_14_8[1] = get_internal_image(1684);
            images_player4_369_14_16[0] = get_internal_image(1680);
            images_player4_369_14_16[1] = get_internal_image(1681);
            images_player4_369_14_24[0] = get_internal_image(1679);
            images_player4_369_14_24[1] = get_internal_image(1682);
            images_player4_369_15_0[0] = get_internal_image(1743);
            images_player4_369_15_0[1] = get_internal_image(1748);
            images_player4_369_15_8[0] = get_internal_image(1750);
            images_player4_369_15_8[1] = get_internal_image(1751);
            images_player4_369_15_16[0] = get_internal_image(1746);
            images_player4_369_15_16[1] = get_internal_image(1745);
            images_player4_369_15_24[0] = get_internal_image(1747);
            images_player4_369_15_24[1] = get_internal_image(1749);
            images_player4_369_16_0[0] = get_internal_image(1879);
            images_player4_369_16_0[1] = get_internal_image(1882);
            images_player4_369_16_8[0] = get_internal_image(1918);
            images_player4_369_16_8[1] = get_internal_image(1919);
            images_player4_369_16_16[0] = get_internal_image(1884);
            images_player4_369_16_16[1] = get_internal_image(1885);
            images_player4_369_16_24[0] = get_internal_image(1907);
            images_player4_369_16_24[1] = get_internal_image(1908);
            images_player4_369_17_0[0] = get_internal_image(2003);
            images_player4_369_17_0[1] = get_internal_image(2009);
            images_player4_369_17_8[0] = get_internal_image(2014);
            images_player4_369_17_8[1] = get_internal_image(2015);
            images_player4_369_17_16[0] = get_internal_image(2010);
            images_player4_369_17_16[1] = get_internal_image(2011);
            images_player4_369_17_24[0] = get_internal_image(2012);
            images_player4_369_17_24[1] = get_internal_image(2013);
            images_player4_369_18_24[0] = get_internal_image(2082);
            images_player4_369_18_24[1] = get_internal_image(2090);
            images_player4_369_18_24[2] = get_internal_image(2085);
            images_player4_369_18_24[3] = get_internal_image(2086);
            images_player4_369_18_24[4] = get_internal_image(2087);
            images_player4_369_18_24[5] = get_internal_image(2091);
            images_player4_369_18_24[6] = get_internal_image(2085);
            images_player4_369_18_24[7] = get_internal_image(2088);
            images_player4_369_19_24[0] = get_internal_image(2145);
            images_player4_369_19_24[1] = get_internal_image(2147);
            images_player4_369_19_24[2] = get_internal_image(2147);
            images_player4_369_19_24[3] = get_internal_image(2149);
            images_player4_369_19_24[4] = get_internal_image(2149);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player4_369(int x, int y)
{
    return new (Active::pool.create()) Player4_369(x, y);
}
static Image* images_player5_370_0_0[2];
static Direction direction_player5_370_0_0 = {0, 10, 10, 0, -1, images_player5_370_0_0, 2};
static Image* images_player5_370_0_8[2];
static Direction direction_player5_370_0_8 = {8, 10, 10, 0, -1, images_player5_370_0_8, 2};
static Image* images_player5_370_0_16[2];
static Direction direction_player5_370_0_16 = {16, 10, 10, 0, -1, images_player5_370_0_16, 2};
static Image* images_player5_370_0_24[2];
static Direction direction_player5_370_0_24 = {24, 10, 10, 0, -1, images_player5_370_0_24, 2};
static Animation anim_player5_370_0 = {&direction_player5_370_0_0, &direction_player5_370_0_0, &direction_player5_370_0_0, &direction_player5_370_0_0, NULL, &direction_player5_370_0_8, &direction_player5_370_0_8, &direction_player5_370_0_8, &direction_player5_370_0_8, &direction_player5_370_0_8, &direction_player5_370_0_8, &direction_player5_370_0_8, NULL, &direction_player5_370_0_16, &direction_player5_370_0_16, &direction_player5_370_0_16, &direction_player5_370_0_16, &direction_player5_370_0_16, &direction_player5_370_0_16, &direction_player5_370_0_16, NULL, &direction_player5_370_0_24, &direction_player5_370_0_24, &direction_player5_370_0_24, &direction_player5_370_0_24, &direction_player5_370_0_24, &direction_player5_370_0_24, &direction_player5_370_0_24, NULL, &direction_player5_370_0_0, &direction_player5_370_0_0, &direction_player5_370_0_0};
static Image* images_player5_370_4_0[4];
static Direction direction_player5_370_4_0 = {0, 20, 20, 0, 1, images_player5_370_4_0, 4};
static Image* images_player5_370_4_16[4];
static Direction direction_player5_370_4_16 = {16, 20, 20, 0, 1, images_player5_370_4_16, 4};
static Animation anim_player5_370_4 = {&direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0, NULL, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, &direction_player5_370_4_16, NULL, &direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0, &direction_player5_370_4_0};
static Image* images_player5_370_6_0[1];
static Direction direction_player5_370_6_0 = {0, 6, 6, 0, 1, images_player5_370_6_0, 1};
static Image* images_player5_370_6_8[1];
static Direction direction_player5_370_6_8 = {8, 6, 6, 0, 1, images_player5_370_6_8, 1};
static Image* images_player5_370_6_16[1];
static Direction direction_player5_370_6_16 = {16, 6, 6, 0, 1, images_player5_370_6_16, 1};
static Image* images_player5_370_6_24[1];
static Direction direction_player5_370_6_24 = {24, 6, 6, 0, 1, images_player5_370_6_24, 1};
static Animation anim_player5_370_6 = {&direction_player5_370_6_0, &direction_player5_370_6_0, &direction_player5_370_6_0, &direction_player5_370_6_0, NULL, &direction_player5_370_6_8, &direction_player5_370_6_8, &direction_player5_370_6_8, &direction_player5_370_6_8, &direction_player5_370_6_8, &direction_player5_370_6_8, &direction_player5_370_6_8, NULL, &direction_player5_370_6_16, &direction_player5_370_6_16, &direction_player5_370_6_16, &direction_player5_370_6_16, &direction_player5_370_6_16, &direction_player5_370_6_16, &direction_player5_370_6_16, NULL, &direction_player5_370_6_24, &direction_player5_370_6_24, &direction_player5_370_6_24, &direction_player5_370_6_24, &direction_player5_370_6_24, &direction_player5_370_6_24, &direction_player5_370_6_24, NULL, &direction_player5_370_6_0, &direction_player5_370_6_0, &direction_player5_370_6_0};
static Image* images_player5_370_7_0[2];
static Direction direction_player5_370_7_0 = {0, 10, 10, 0, -1, images_player5_370_7_0, 2};
static Image* images_player5_370_7_8[2];
static Direction direction_player5_370_7_8 = {8, 10, 10, 0, -1, images_player5_370_7_8, 2};
static Image* images_player5_370_7_16[2];
static Direction direction_player5_370_7_16 = {16, 10, 10, 0, -1, images_player5_370_7_16, 2};
static Image* images_player5_370_7_24[2];
static Direction direction_player5_370_7_24 = {24, 10, 10, 0, -1, images_player5_370_7_24, 2};
static Animation anim_player5_370_7 = {&direction_player5_370_7_0, &direction_player5_370_7_0, &direction_player5_370_7_0, &direction_player5_370_7_0, NULL, &direction_player5_370_7_8, &direction_player5_370_7_8, &direction_player5_370_7_8, &direction_player5_370_7_8, &direction_player5_370_7_8, &direction_player5_370_7_8, &direction_player5_370_7_8, NULL, &direction_player5_370_7_16, &direction_player5_370_7_16, &direction_player5_370_7_16, &direction_player5_370_7_16, &direction_player5_370_7_16, &direction_player5_370_7_16, &direction_player5_370_7_16, NULL, &direction_player5_370_7_24, &direction_player5_370_7_24, &direction_player5_370_7_24, &direction_player5_370_7_24, &direction_player5_370_7_24, &direction_player5_370_7_24, &direction_player5_370_7_24, NULL, &direction_player5_370_7_0, &direction_player5_370_7_0, &direction_player5_370_7_0};
static Image* images_player5_370_8_0[1];
static Direction direction_player5_370_8_0 = {0, 50, 50, 0, -1, images_player5_370_8_0, 1};
static Image* images_player5_370_8_24[1];
static Direction direction_player5_370_8_24 = {24, 10, 10, 0, -1, images_player5_370_8_24, 1};
static Animation anim_player5_370_8 = {&direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0, NULL, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, &direction_player5_370_8_24, NULL, &direction_player5_370_8_0, &direction_player5_370_8_0, &direction_player5_370_8_0};
static Image* images_player5_370_9_0[2];
static Direction direction_player5_370_9_0 = {0, 50, 50, 0, -1, images_player5_370_9_0, 2};
static Animation anim_player5_370_9 = {&direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, NULL, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0, &direction_player5_370_9_0};
static Image* images_player5_370_10_0[5];
static Direction direction_player5_370_10_0 = {0, 10, 10, 0, -1, images_player5_370_10_0, 5};
static Animation anim_player5_370_10 = {&direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, NULL, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0, &direction_player5_370_10_0};
static Image* images_player5_370_11_0[2];
static Direction direction_player5_370_11_0 = {0, 10, 10, 0, -1, images_player5_370_11_0, 2};
static Image* images_player5_370_11_8[2];
static Direction direction_player5_370_11_8 = {8, 10, 10, 0, -1, images_player5_370_11_8, 2};
static Image* images_player5_370_11_16[2];
static Direction direction_player5_370_11_16 = {16, 10, 10, 0, -1, images_player5_370_11_16, 2};
static Image* images_player5_370_11_24[2];
static Direction direction_player5_370_11_24 = {24, 10, 10, 0, -1, images_player5_370_11_24, 2};
static Animation anim_player5_370_11 = {&direction_player5_370_11_0, &direction_player5_370_11_0, &direction_player5_370_11_0, &direction_player5_370_11_0, NULL, &direction_player5_370_11_8, &direction_player5_370_11_8, &direction_player5_370_11_8, &direction_player5_370_11_8, &direction_player5_370_11_8, &direction_player5_370_11_8, &direction_player5_370_11_8, NULL, &direction_player5_370_11_16, &direction_player5_370_11_16, &direction_player5_370_11_16, &direction_player5_370_11_16, &direction_player5_370_11_16, &direction_player5_370_11_16, &direction_player5_370_11_16, NULL, &direction_player5_370_11_24, &direction_player5_370_11_24, &direction_player5_370_11_24, &direction_player5_370_11_24, &direction_player5_370_11_24, &direction_player5_370_11_24, &direction_player5_370_11_24, NULL, &direction_player5_370_11_0, &direction_player5_370_11_0, &direction_player5_370_11_0};
static Image* images_player5_370_12_0[2];
static Direction direction_player5_370_12_0 = {0, 10, 10, 0, -1, images_player5_370_12_0, 2};
static Image* images_player5_370_12_8[2];
static Direction direction_player5_370_12_8 = {8, 10, 10, 0, -1, images_player5_370_12_8, 2};
static Image* images_player5_370_12_16[2];
static Direction direction_player5_370_12_16 = {16, 10, 10, 0, -1, images_player5_370_12_16, 2};
static Image* images_player5_370_12_24[2];
static Direction direction_player5_370_12_24 = {24, 10, 10, 0, -1, images_player5_370_12_24, 2};
static Animation anim_player5_370_12 = {&direction_player5_370_12_0, &direction_player5_370_12_0, &direction_player5_370_12_0, &direction_player5_370_12_0, NULL, &direction_player5_370_12_8, &direction_player5_370_12_8, &direction_player5_370_12_8, &direction_player5_370_12_8, &direction_player5_370_12_8, &direction_player5_370_12_8, &direction_player5_370_12_8, NULL, &direction_player5_370_12_16, &direction_player5_370_12_16, &direction_player5_370_12_16, &direction_player5_370_12_16, &direction_player5_370_12_16, &direction_player5_370_12_16, &direction_player5_370_12_16, NULL, &direction_player5_370_12_24, &direction_player5_370_12_24, &direction_player5_370_12_24, &direction_player5_370_12_24, &direction_player5_370_12_24, &direction_player5_370_12_24, &direction_player5_370_12_24, NULL, &direction_player5_370_12_0, &direction_player5_370_12_0, &direction_player5_370_12_0};
static Image* images_player5_370_13_0[2];
static Direction direction_player5_370_13_0 = {0, 10, 10, 0, -1, images_player5_370_13_0, 2};
static Image* images_player5_370_13_8[2];
static Direction direction_player5_370_13_8 = {8, 10, 10, 0, -1, images_player5_370_13_8, 2};
static Image* images_player5_370_13_16[2];
static Direction direction_player5_370_13_16 = {16, 10, 10, 0, -1, images_player5_370_13_16, 2};
static Image* images_player5_370_13_24[2];
static Direction direction_player5_370_13_24 = {24, 10, 10, 0, -1, images_player5_370_13_24, 2};
static Animation anim_player5_370_13 = {&direction_player5_370_13_0, &direction_player5_370_13_0, &direction_player5_370_13_0, &direction_player5_370_13_0, NULL, &direction_player5_370_13_8, &direction_player5_370_13_8, &direction_player5_370_13_8, &direction_player5_370_13_8, &direction_player5_370_13_8, &direction_player5_370_13_8, &direction_player5_370_13_8, NULL, &direction_player5_370_13_16, &direction_player5_370_13_16, &direction_player5_370_13_16, &direction_player5_370_13_16, &direction_player5_370_13_16, &direction_player5_370_13_16, &direction_player5_370_13_16, NULL, &direction_player5_370_13_24, &direction_player5_370_13_24, &direction_player5_370_13_24, &direction_player5_370_13_24, &direction_player5_370_13_24, &direction_player5_370_13_24, &direction_player5_370_13_24, NULL, &direction_player5_370_13_0, &direction_player5_370_13_0, &direction_player5_370_13_0};
static Image* images_player5_370_14_0[2];
static Direction direction_player5_370_14_0 = {0, 10, 10, 0, -1, images_player5_370_14_0, 2};
static Image* images_player5_370_14_8[2];
static Direction direction_player5_370_14_8 = {8, 10, 10, 0, -1, images_player5_370_14_8, 2};
static Image* images_player5_370_14_16[2];
static Direction direction_player5_370_14_16 = {16, 10, 10, 0, -1, images_player5_370_14_16, 2};
static Image* images_player5_370_14_24[2];
static Direction direction_player5_370_14_24 = {24, 10, 10, 0, -1, images_player5_370_14_24, 2};
static Animation anim_player5_370_14 = {&direction_player5_370_14_0, &direction_player5_370_14_0, &direction_player5_370_14_0, &direction_player5_370_14_0, NULL, &direction_player5_370_14_8, &direction_player5_370_14_8, &direction_player5_370_14_8, &direction_player5_370_14_8, &direction_player5_370_14_8, &direction_player5_370_14_8, &direction_player5_370_14_8, NULL, &direction_player5_370_14_16, &direction_player5_370_14_16, &direction_player5_370_14_16, &direction_player5_370_14_16, &direction_player5_370_14_16, &direction_player5_370_14_16, &direction_player5_370_14_16, NULL, &direction_player5_370_14_24, &direction_player5_370_14_24, &direction_player5_370_14_24, &direction_player5_370_14_24, &direction_player5_370_14_24, &direction_player5_370_14_24, &direction_player5_370_14_24, NULL, &direction_player5_370_14_0, &direction_player5_370_14_0, &direction_player5_370_14_0};
static Image* images_player5_370_15_0[2];
static Direction direction_player5_370_15_0 = {0, 10, 10, 0, -1, images_player5_370_15_0, 2};
static Image* images_player5_370_15_8[2];
static Direction direction_player5_370_15_8 = {8, 10, 10, 0, -1, images_player5_370_15_8, 2};
static Image* images_player5_370_15_16[2];
static Direction direction_player5_370_15_16 = {16, 10, 10, 0, -1, images_player5_370_15_16, 2};
static Image* images_player5_370_15_24[2];
static Direction direction_player5_370_15_24 = {24, 10, 10, 0, -1, images_player5_370_15_24, 2};
static Animation anim_player5_370_15 = {&direction_player5_370_15_0, &direction_player5_370_15_0, &direction_player5_370_15_0, &direction_player5_370_15_0, NULL, &direction_player5_370_15_8, &direction_player5_370_15_8, &direction_player5_370_15_8, &direction_player5_370_15_8, &direction_player5_370_15_8, &direction_player5_370_15_8, &direction_player5_370_15_8, NULL, &direction_player5_370_15_16, &direction_player5_370_15_16, &direction_player5_370_15_16, &direction_player5_370_15_16, &direction_player5_370_15_16, &direction_player5_370_15_16, &direction_player5_370_15_16, NULL, &direction_player5_370_15_24, &direction_player5_370_15_24, &direction_player5_370_15_24, &direction_player5_370_15_24, &direction_player5_370_15_24, &direction_player5_370_15_24, &direction_player5_370_15_24, NULL, &direction_player5_370_15_0, &direction_player5_370_15_0, &direction_player5_370_15_0};
static Image* images_player5_370_16_0[2];
static Direction direction_player5_370_16_0 = {0, 10, 10, 0, -1, images_player5_370_16_0, 2};
static Image* images_player5_370_16_8[2];
static Direction direction_player5_370_16_8 = {8, 10, 10, 0, -1, images_player5_370_16_8, 2};
static Image* images_player5_370_16_16[2];
static Direction direction_player5_370_16_16 = {16, 10, 10, 0, -1, images_player5_370_16_16, 2};
static Image* images_player5_370_16_24[2];
static Direction direction_player5_370_16_24 = {24, 10, 10, 0, -1, images_player5_370_16_24, 2};
static Animation anim_player5_370_16 = {&direction_player5_370_16_0, &direction_player5_370_16_0, &direction_player5_370_16_0, &direction_player5_370_16_0, NULL, &direction_player5_370_16_8, &direction_player5_370_16_8, &direction_player5_370_16_8, &direction_player5_370_16_8, &direction_player5_370_16_8, &direction_player5_370_16_8, &direction_player5_370_16_8, NULL, &direction_player5_370_16_16, &direction_player5_370_16_16, &direction_player5_370_16_16, &direction_player5_370_16_16, &direction_player5_370_16_16, &direction_player5_370_16_16, &direction_player5_370_16_16, NULL, &direction_player5_370_16_24, &direction_player5_370_16_24, &direction_player5_370_16_24, &direction_player5_370_16_24, &direction_player5_370_16_24, &direction_player5_370_16_24, &direction_player5_370_16_24, NULL, &direction_player5_370_16_0, &direction_player5_370_16_0, &direction_player5_370_16_0};
static Image* images_player5_370_17_0[2];
static Direction direction_player5_370_17_0 = {0, 5, 5, 1, -1, images_player5_370_17_0, 2};
static Image* images_player5_370_17_8[2];
static Direction direction_player5_370_17_8 = {8, 5, 5, 1, -1, images_player5_370_17_8, 2};
static Image* images_player5_370_17_16[2];
static Direction direction_player5_370_17_16 = {16, 5, 5, 1, -1, images_player5_370_17_16, 2};
static Image* images_player5_370_17_24[2];
static Direction direction_player5_370_17_24 = {24, 5, 5, 1, -1, images_player5_370_17_24, 2};
static Animation anim_player5_370_17 = {&direction_player5_370_17_0, &direction_player5_370_17_0, &direction_player5_370_17_0, &direction_player5_370_17_0, NULL, &direction_player5_370_17_8, &direction_player5_370_17_8, &direction_player5_370_17_8, &direction_player5_370_17_8, &direction_player5_370_17_8, &direction_player5_370_17_8, &direction_player5_370_17_8, NULL, &direction_player5_370_17_16, &direction_player5_370_17_16, &direction_player5_370_17_16, &direction_player5_370_17_16, &direction_player5_370_17_16, &direction_player5_370_17_16, &direction_player5_370_17_16, NULL, &direction_player5_370_17_24, &direction_player5_370_17_24, &direction_player5_370_17_24, &direction_player5_370_17_24, &direction_player5_370_17_24, &direction_player5_370_17_24, &direction_player5_370_17_24, NULL, &direction_player5_370_17_0, &direction_player5_370_17_0, &direction_player5_370_17_0};
static Image* images_player5_370_18_24[8];
static Direction direction_player5_370_18_24 = {24, 10, 10, 0, -1, images_player5_370_18_24, 8};
static Animation anim_player5_370_18 = {&direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, NULL, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24, &direction_player5_370_18_24};
static Image* images_player5_370_19_24[5];
static Direction direction_player5_370_19_24 = {24, 10, 10, 0, -1, images_player5_370_19_24, 5};
static Animation anim_player5_370_19 = {&direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, NULL, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24, &direction_player5_370_19_24};
static Animation * anim_array_player5_370[20] = {&anim_player5_370_0, NULL, NULL, NULL, &anim_player5_370_4, NULL, &anim_player5_370_6, &anim_player5_370_7, &anim_player5_370_8, &anim_player5_370_9, &anim_player5_370_10, &anim_player5_370_11, &anim_player5_370_12, &anim_player5_370_13, &anim_player5_370_14, &anim_player5_370_15, &anim_player5_370_16, &anim_player5_370_17, &anim_player5_370_18, &anim_player5_370_19};
static Animations anim_player5_370 = {20, &anim_array_player5_370[0]};
static bool anim_player5_370_initialized;
class Player5_370 : public Active
{
public:
    Player5_370(int x, int y) : Active(x, y, Player5_370_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_5", 8);
#endif
        this->animations = &anim_player5_370;
        if (!anim_player5_370_initialized) {
            anim_player5_370_initialized = true;
            images_player5_370_0_0[0] = get_internal_image(277);
            images_player5_370_0_0[1] = get_internal_image(280);
            images_player5_370_0_8[0] = get_internal_image(546);
            images_player5_370_0_8[1] = get_internal_image(764);
            images_player5_370_0_16[0] = get_internal_image(266);
            images_player5_370_0_16[1] = get_internal_image(281);
            images_player5_370_0_24[0] = get_internal_image(239);
            images_player5_370_0_24[1] = get_internal_image(245);
            images_player5_370_4_0[0] = get_internal_image(369);
            images_player5_370_4_0[1] = get_internal_image(373);
            images_player5_370_4_0[2] = get_internal_image(369);
            images_player5_370_4_0[3] = get_internal_image(373);
            images_player5_370_4_16[0] = get_internal_image(371);
            images_player5_370_4_16[1] = get_internal_image(763);
            images_player5_370_4_16[2] = get_internal_image(371);
            images_player5_370_4_16[3] = get_internal_image(763);
            images_player5_370_6_0[0] = get_internal_image(161);
            images_player5_370_6_8[0] = get_internal_image(1064);
            images_player5_370_6_16[0] = get_internal_image(220);
            images_player5_370_6_24[0] = get_internal_image(1069);
            images_player5_370_7_0[0] = get_internal_image(1146);
            images_player5_370_7_0[1] = get_internal_image(1147);
            images_player5_370_7_8[0] = get_internal_image(1150);
            images_player5_370_7_8[1] = get_internal_image(1151);
            images_player5_370_7_16[0] = get_internal_image(1145);
            images_player5_370_7_16[1] = get_internal_image(1148);
            images_player5_370_7_24[0] = get_internal_image(1152);
            images_player5_370_7_24[1] = get_internal_image(1153);
            images_player5_370_8_0[0] = get_internal_image(2484);
            images_player5_370_8_24[0] = get_internal_image(1182);
            images_player5_370_9_0[0] = get_internal_image(1500);
            images_player5_370_9_0[1] = get_internal_image(1501);
            images_player5_370_10_0[0] = get_internal_image(275);
            images_player5_370_10_0[1] = get_internal_image(290);
            images_player5_370_10_0[2] = get_internal_image(292);
            images_player5_370_10_0[3] = get_internal_image(2346);
            images_player5_370_10_0[4] = get_internal_image(292);
            images_player5_370_11_0[0] = get_internal_image(228);
            images_player5_370_11_0[1] = get_internal_image(255);
            images_player5_370_11_8[0] = get_internal_image(348);
            images_player5_370_11_8[1] = get_internal_image(1272);
            images_player5_370_11_16[0] = get_internal_image(261);
            images_player5_370_11_16[1] = get_internal_image(263);
            images_player5_370_11_24[0] = get_internal_image(717);
            images_player5_370_11_24[1] = get_internal_image(719);
            images_player5_370_12_0[0] = get_internal_image(1209);
            images_player5_370_12_0[1] = get_internal_image(1211);
            images_player5_370_12_8[0] = get_internal_image(1625);
            images_player5_370_12_8[1] = get_internal_image(1600);
            images_player5_370_12_16[0] = get_internal_image(1214);
            images_player5_370_12_16[1] = get_internal_image(1212);
            images_player5_370_12_24[0] = get_internal_image(1777);
            images_player5_370_12_24[1] = get_internal_image(1778);
            images_player5_370_13_0[0] = get_internal_image(1802);
            images_player5_370_13_0[1] = get_internal_image(1804);
            images_player5_370_13_8[0] = get_internal_image(1809);
            images_player5_370_13_8[1] = get_internal_image(1810);
            images_player5_370_13_16[0] = get_internal_image(1806);
            images_player5_370_13_16[1] = get_internal_image(1805);
            images_player5_370_13_24[0] = get_internal_image(1819);
            images_player5_370_13_24[1] = get_internal_image(1821);
            images_player5_370_14_0[0] = get_internal_image(1662);
            images_player5_370_14_0[1] = get_internal_image(1660);
            images_player5_370_14_8[0] = get_internal_image(1667);
            images_player5_370_14_8[1] = get_internal_image(1668);
            images_player5_370_14_16[0] = get_internal_image(1664);
            images_player5_370_14_16[1] = get_internal_image(1663);
            images_player5_370_14_24[0] = get_internal_image(1665);
            images_player5_370_14_24[1] = get_internal_image(1666);
            images_player5_370_15_0[0] = get_internal_image(678);
            images_player5_370_15_0[1] = get_internal_image(1614);
            images_player5_370_15_8[0] = get_internal_image(1734);
            images_player5_370_15_8[1] = get_internal_image(1735);
            images_player5_370_15_16[0] = get_internal_image(1623);
            images_player5_370_15_16[1] = get_internal_image(1726);
            images_player5_370_15_24[0] = get_internal_image(1733);
            images_player5_370_15_24[1] = get_internal_image(1624);
            images_player5_370_16_0[0] = get_internal_image(1883);
            images_player5_370_16_0[1] = get_internal_image(1886);
            images_player5_370_16_8[0] = get_internal_image(1920);
            images_player5_370_16_8[1] = get_internal_image(1921);
            images_player5_370_16_16[0] = get_internal_image(1888);
            images_player5_370_16_16[1] = get_internal_image(1889);
            images_player5_370_16_24[0] = get_internal_image(1909);
            images_player5_370_16_24[1] = get_internal_image(1910);
            images_player5_370_17_0[0] = get_internal_image(1990);
            images_player5_370_17_0[1] = get_internal_image(1993);
            images_player5_370_17_8[0] = get_internal_image(1994);
            images_player5_370_17_8[1] = get_internal_image(2007);
            images_player5_370_17_16[0] = get_internal_image(1991);
            images_player5_370_17_16[1] = get_internal_image(1992);
            images_player5_370_17_24[0] = get_internal_image(1995);
            images_player5_370_17_24[1] = get_internal_image(1996);
            images_player5_370_18_24[0] = get_internal_image(2121);
            images_player5_370_18_24[1] = get_internal_image(2116);
            images_player5_370_18_24[2] = get_internal_image(2115);
            images_player5_370_18_24[3] = get_internal_image(2117);
            images_player5_370_18_24[4] = get_internal_image(2118);
            images_player5_370_18_24[5] = get_internal_image(2120);
            images_player5_370_18_24[6] = get_internal_image(2115);
            images_player5_370_18_24[7] = get_internal_image(2119);
            images_player5_370_19_24[0] = get_internal_image(2137);
            images_player5_370_19_24[1] = get_internal_image(2141);
            images_player5_370_19_24[2] = get_internal_image(2141);
            images_player5_370_19_24[3] = get_internal_image(2142);
            images_player5_370_19_24[4] = get_internal_image(2142);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player5_370(int x, int y)
{
    return new (Active::pool.create()) Player5_370(x, y);
}
static Image* images_player6_371_0_0[2];
static Direction direction_player6_371_0_0 = {0, 10, 10, 0, -1, images_player6_371_0_0, 2};
static Image* images_player6_371_0_8[2];
static Direction direction_player6_371_0_8 = {8, 10, 10, 0, -1, images_player6_371_0_8, 2};
static Image* images_player6_371_0_16[2];
static Direction direction_player6_371_0_16 = {16, 10, 10, 0, -1, images_player6_371_0_16, 2};
static Image* images_player6_371_0_24[2];
static Direction direction_player6_371_0_24 = {24, 10, 10, 0, -1, images_player6_371_0_24, 2};
static Animation anim_player6_371_0 = {&direction_player6_371_0_0, &direction_player6_371_0_0, &direction_player6_371_0_0, &direction_player6_371_0_0, NULL, &direction_player6_371_0_8, &direction_player6_371_0_8, &direction_player6_371_0_8, &direction_player6_371_0_8, &direction_player6_371_0_8, &direction_player6_371_0_8, &direction_player6_371_0_8, NULL, &direction_player6_371_0_16, &direction_player6_371_0_16, &direction_player6_371_0_16, &direction_player6_371_0_16, &direction_player6_371_0_16, &direction_player6_371_0_16, &direction_player6_371_0_16, NULL, &direction_player6_371_0_24, &direction_player6_371_0_24, &direction_player6_371_0_24, &direction_player6_371_0_24, &direction_player6_371_0_24, &direction_player6_371_0_24, &direction_player6_371_0_24, NULL, &direction_player6_371_0_0, &direction_player6_371_0_0, &direction_player6_371_0_0};
static Image* images_player6_371_4_0[4];
static Direction direction_player6_371_4_0 = {0, 20, 20, 0, 1, images_player6_371_4_0, 4};
static Image* images_player6_371_4_16[4];
static Direction direction_player6_371_4_16 = {16, 20, 20, 0, 1, images_player6_371_4_16, 4};
static Animation anim_player6_371_4 = {&direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0, NULL, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, &direction_player6_371_4_16, NULL, &direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0, &direction_player6_371_4_0};
static Image* images_player6_371_6_0[1];
static Direction direction_player6_371_6_0 = {0, 6, 6, 0, 1, images_player6_371_6_0, 1};
static Image* images_player6_371_6_8[1];
static Direction direction_player6_371_6_8 = {8, 6, 6, 0, 1, images_player6_371_6_8, 1};
static Image* images_player6_371_6_16[1];
static Direction direction_player6_371_6_16 = {16, 6, 6, 0, 1, images_player6_371_6_16, 1};
static Image* images_player6_371_6_24[1];
static Direction direction_player6_371_6_24 = {24, 6, 6, 0, 1, images_player6_371_6_24, 1};
static Animation anim_player6_371_6 = {&direction_player6_371_6_0, &direction_player6_371_6_0, &direction_player6_371_6_0, &direction_player6_371_6_0, NULL, &direction_player6_371_6_8, &direction_player6_371_6_8, &direction_player6_371_6_8, &direction_player6_371_6_8, &direction_player6_371_6_8, &direction_player6_371_6_8, &direction_player6_371_6_8, NULL, &direction_player6_371_6_16, &direction_player6_371_6_16, &direction_player6_371_6_16, &direction_player6_371_6_16, &direction_player6_371_6_16, &direction_player6_371_6_16, &direction_player6_371_6_16, NULL, &direction_player6_371_6_24, &direction_player6_371_6_24, &direction_player6_371_6_24, &direction_player6_371_6_24, &direction_player6_371_6_24, &direction_player6_371_6_24, &direction_player6_371_6_24, NULL, &direction_player6_371_6_0, &direction_player6_371_6_0, &direction_player6_371_6_0};
static Image* images_player6_371_7_0[2];
static Direction direction_player6_371_7_0 = {0, 10, 10, 0, -1, images_player6_371_7_0, 2};
static Image* images_player6_371_7_8[2];
static Direction direction_player6_371_7_8 = {8, 10, 10, 0, -1, images_player6_371_7_8, 2};
static Image* images_player6_371_7_16[2];
static Direction direction_player6_371_7_16 = {16, 10, 10, 0, -1, images_player6_371_7_16, 2};
static Image* images_player6_371_7_24[2];
static Direction direction_player6_371_7_24 = {24, 10, 10, 0, -1, images_player6_371_7_24, 2};
static Animation anim_player6_371_7 = {&direction_player6_371_7_0, &direction_player6_371_7_0, &direction_player6_371_7_0, &direction_player6_371_7_0, NULL, &direction_player6_371_7_8, &direction_player6_371_7_8, &direction_player6_371_7_8, &direction_player6_371_7_8, &direction_player6_371_7_8, &direction_player6_371_7_8, &direction_player6_371_7_8, NULL, &direction_player6_371_7_16, &direction_player6_371_7_16, &direction_player6_371_7_16, &direction_player6_371_7_16, &direction_player6_371_7_16, &direction_player6_371_7_16, &direction_player6_371_7_16, NULL, &direction_player6_371_7_24, &direction_player6_371_7_24, &direction_player6_371_7_24, &direction_player6_371_7_24, &direction_player6_371_7_24, &direction_player6_371_7_24, &direction_player6_371_7_24, NULL, &direction_player6_371_7_0, &direction_player6_371_7_0, &direction_player6_371_7_0};
static Image* images_player6_371_8_0[1];
static Direction direction_player6_371_8_0 = {0, 50, 50, 0, -1, images_player6_371_8_0, 1};
static Image* images_player6_371_8_24[1];
static Direction direction_player6_371_8_24 = {24, 10, 10, 0, -1, images_player6_371_8_24, 1};
static Animation anim_player6_371_8 = {&direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0, NULL, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, &direction_player6_371_8_24, NULL, &direction_player6_371_8_0, &direction_player6_371_8_0, &direction_player6_371_8_0};
static Image* images_player6_371_9_0[2];
static Direction direction_player6_371_9_0 = {0, 50, 50, 0, -1, images_player6_371_9_0, 2};
static Animation anim_player6_371_9 = {&direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, NULL, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0, &direction_player6_371_9_0};
static Image* images_player6_371_10_0[5];
static Direction direction_player6_371_10_0 = {0, 10, 10, 0, -1, images_player6_371_10_0, 5};
static Animation anim_player6_371_10 = {&direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, NULL, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0, &direction_player6_371_10_0};
static Image* images_player6_371_11_0[2];
static Direction direction_player6_371_11_0 = {0, 6, 6, 0, -1, images_player6_371_11_0, 2};
static Image* images_player6_371_11_8[2];
static Direction direction_player6_371_11_8 = {8, 6, 6, 0, -1, images_player6_371_11_8, 2};
static Image* images_player6_371_11_16[2];
static Direction direction_player6_371_11_16 = {16, 6, 6, 0, -1, images_player6_371_11_16, 2};
static Image* images_player6_371_11_24[2];
static Direction direction_player6_371_11_24 = {24, 6, 6, 0, -1, images_player6_371_11_24, 2};
static Animation anim_player6_371_11 = {&direction_player6_371_11_0, &direction_player6_371_11_0, &direction_player6_371_11_0, &direction_player6_371_11_0, NULL, &direction_player6_371_11_8, &direction_player6_371_11_8, &direction_player6_371_11_8, &direction_player6_371_11_8, &direction_player6_371_11_8, &direction_player6_371_11_8, &direction_player6_371_11_8, NULL, &direction_player6_371_11_16, &direction_player6_371_11_16, &direction_player6_371_11_16, &direction_player6_371_11_16, &direction_player6_371_11_16, &direction_player6_371_11_16, &direction_player6_371_11_16, NULL, &direction_player6_371_11_24, &direction_player6_371_11_24, &direction_player6_371_11_24, &direction_player6_371_11_24, &direction_player6_371_11_24, &direction_player6_371_11_24, &direction_player6_371_11_24, NULL, &direction_player6_371_11_0, &direction_player6_371_11_0, &direction_player6_371_11_0};
static Image* images_player6_371_12_0[2];
static Direction direction_player6_371_12_0 = {0, 10, 10, 0, -1, images_player6_371_12_0, 2};
static Image* images_player6_371_12_8[2];
static Direction direction_player6_371_12_8 = {8, 10, 10, 0, -1, images_player6_371_12_8, 2};
static Image* images_player6_371_12_16[2];
static Direction direction_player6_371_12_16 = {16, 10, 10, 0, -1, images_player6_371_12_16, 2};
static Image* images_player6_371_12_24[2];
static Direction direction_player6_371_12_24 = {24, 10, 10, 0, -1, images_player6_371_12_24, 2};
static Animation anim_player6_371_12 = {&direction_player6_371_12_0, &direction_player6_371_12_0, &direction_player6_371_12_0, &direction_player6_371_12_0, NULL, &direction_player6_371_12_8, &direction_player6_371_12_8, &direction_player6_371_12_8, &direction_player6_371_12_8, &direction_player6_371_12_8, &direction_player6_371_12_8, &direction_player6_371_12_8, NULL, &direction_player6_371_12_16, &direction_player6_371_12_16, &direction_player6_371_12_16, &direction_player6_371_12_16, &direction_player6_371_12_16, &direction_player6_371_12_16, &direction_player6_371_12_16, NULL, &direction_player6_371_12_24, &direction_player6_371_12_24, &direction_player6_371_12_24, &direction_player6_371_12_24, &direction_player6_371_12_24, &direction_player6_371_12_24, &direction_player6_371_12_24, NULL, &direction_player6_371_12_0, &direction_player6_371_12_0, &direction_player6_371_12_0};
static Image* images_player6_371_13_0[2];
static Direction direction_player6_371_13_0 = {0, 10, 10, 0, -1, images_player6_371_13_0, 2};
static Image* images_player6_371_13_8[2];
static Direction direction_player6_371_13_8 = {8, 10, 10, 0, -1, images_player6_371_13_8, 2};
static Image* images_player6_371_13_16[2];
static Direction direction_player6_371_13_16 = {16, 10, 10, 0, -1, images_player6_371_13_16, 2};
static Image* images_player6_371_13_24[2];
static Direction direction_player6_371_13_24 = {24, 10, 10, 0, -1, images_player6_371_13_24, 2};
static Animation anim_player6_371_13 = {&direction_player6_371_13_0, &direction_player6_371_13_0, &direction_player6_371_13_0, &direction_player6_371_13_0, NULL, &direction_player6_371_13_8, &direction_player6_371_13_8, &direction_player6_371_13_8, &direction_player6_371_13_8, &direction_player6_371_13_8, &direction_player6_371_13_8, &direction_player6_371_13_8, NULL, &direction_player6_371_13_16, &direction_player6_371_13_16, &direction_player6_371_13_16, &direction_player6_371_13_16, &direction_player6_371_13_16, &direction_player6_371_13_16, &direction_player6_371_13_16, NULL, &direction_player6_371_13_24, &direction_player6_371_13_24, &direction_player6_371_13_24, &direction_player6_371_13_24, &direction_player6_371_13_24, &direction_player6_371_13_24, &direction_player6_371_13_24, NULL, &direction_player6_371_13_0, &direction_player6_371_13_0, &direction_player6_371_13_0};
static Image* images_player6_371_14_0[2];
static Direction direction_player6_371_14_0 = {0, 10, 10, 0, -1, images_player6_371_14_0, 2};
static Image* images_player6_371_14_8[2];
static Direction direction_player6_371_14_8 = {8, 10, 10, 0, -1, images_player6_371_14_8, 2};
static Image* images_player6_371_14_16[2];
static Direction direction_player6_371_14_16 = {16, 10, 10, 0, -1, images_player6_371_14_16, 2};
static Image* images_player6_371_14_24[2];
static Direction direction_player6_371_14_24 = {24, 10, 10, 0, -1, images_player6_371_14_24, 2};
static Animation anim_player6_371_14 = {&direction_player6_371_14_0, &direction_player6_371_14_0, &direction_player6_371_14_0, &direction_player6_371_14_0, NULL, &direction_player6_371_14_8, &direction_player6_371_14_8, &direction_player6_371_14_8, &direction_player6_371_14_8, &direction_player6_371_14_8, &direction_player6_371_14_8, &direction_player6_371_14_8, NULL, &direction_player6_371_14_16, &direction_player6_371_14_16, &direction_player6_371_14_16, &direction_player6_371_14_16, &direction_player6_371_14_16, &direction_player6_371_14_16, &direction_player6_371_14_16, NULL, &direction_player6_371_14_24, &direction_player6_371_14_24, &direction_player6_371_14_24, &direction_player6_371_14_24, &direction_player6_371_14_24, &direction_player6_371_14_24, &direction_player6_371_14_24, NULL, &direction_player6_371_14_0, &direction_player6_371_14_0, &direction_player6_371_14_0};
static Image* images_player6_371_15_0[2];
static Direction direction_player6_371_15_0 = {0, 10, 10, 0, -1, images_player6_371_15_0, 2};
static Image* images_player6_371_15_8[2];
static Direction direction_player6_371_15_8 = {8, 10, 10, 0, -1, images_player6_371_15_8, 2};
static Image* images_player6_371_15_16[2];
static Direction direction_player6_371_15_16 = {16, 10, 10, 0, -1, images_player6_371_15_16, 2};
static Image* images_player6_371_15_24[2];
static Direction direction_player6_371_15_24 = {24, 10, 10, 0, -1, images_player6_371_15_24, 2};
static Animation anim_player6_371_15 = {&direction_player6_371_15_0, &direction_player6_371_15_0, &direction_player6_371_15_0, &direction_player6_371_15_0, NULL, &direction_player6_371_15_8, &direction_player6_371_15_8, &direction_player6_371_15_8, &direction_player6_371_15_8, &direction_player6_371_15_8, &direction_player6_371_15_8, &direction_player6_371_15_8, NULL, &direction_player6_371_15_16, &direction_player6_371_15_16, &direction_player6_371_15_16, &direction_player6_371_15_16, &direction_player6_371_15_16, &direction_player6_371_15_16, &direction_player6_371_15_16, NULL, &direction_player6_371_15_24, &direction_player6_371_15_24, &direction_player6_371_15_24, &direction_player6_371_15_24, &direction_player6_371_15_24, &direction_player6_371_15_24, &direction_player6_371_15_24, NULL, &direction_player6_371_15_0, &direction_player6_371_15_0, &direction_player6_371_15_0};
static Image* images_player6_371_16_0[2];
static Direction direction_player6_371_16_0 = {0, 10, 10, 0, -1, images_player6_371_16_0, 2};
static Image* images_player6_371_16_8[2];
static Direction direction_player6_371_16_8 = {8, 10, 10, 0, -1, images_player6_371_16_8, 2};
static Image* images_player6_371_16_16[2];
static Direction direction_player6_371_16_16 = {16, 10, 10, 0, -1, images_player6_371_16_16, 2};
static Image* images_player6_371_16_24[2];
static Direction direction_player6_371_16_24 = {24, 10, 10, 0, -1, images_player6_371_16_24, 2};
static Animation anim_player6_371_16 = {&direction_player6_371_16_0, &direction_player6_371_16_0, &direction_player6_371_16_0, &direction_player6_371_16_0, NULL, &direction_player6_371_16_8, &direction_player6_371_16_8, &direction_player6_371_16_8, &direction_player6_371_16_8, &direction_player6_371_16_8, &direction_player6_371_16_8, &direction_player6_371_16_8, NULL, &direction_player6_371_16_16, &direction_player6_371_16_16, &direction_player6_371_16_16, &direction_player6_371_16_16, &direction_player6_371_16_16, &direction_player6_371_16_16, &direction_player6_371_16_16, NULL, &direction_player6_371_16_24, &direction_player6_371_16_24, &direction_player6_371_16_24, &direction_player6_371_16_24, &direction_player6_371_16_24, &direction_player6_371_16_24, &direction_player6_371_16_24, NULL, &direction_player6_371_16_0, &direction_player6_371_16_0, &direction_player6_371_16_0};
static Image* images_player6_371_17_0[2];
static Direction direction_player6_371_17_0 = {0, 5, 5, 1, -1, images_player6_371_17_0, 2};
static Image* images_player6_371_17_8[2];
static Direction direction_player6_371_17_8 = {8, 5, 5, 1, -1, images_player6_371_17_8, 2};
static Image* images_player6_371_17_16[2];
static Direction direction_player6_371_17_16 = {16, 5, 5, 1, -1, images_player6_371_17_16, 2};
static Image* images_player6_371_17_24[2];
static Direction direction_player6_371_17_24 = {24, 5, 5, 1, -1, images_player6_371_17_24, 2};
static Animation anim_player6_371_17 = {&direction_player6_371_17_0, &direction_player6_371_17_0, &direction_player6_371_17_0, &direction_player6_371_17_0, NULL, &direction_player6_371_17_8, &direction_player6_371_17_8, &direction_player6_371_17_8, &direction_player6_371_17_8, &direction_player6_371_17_8, &direction_player6_371_17_8, &direction_player6_371_17_8, NULL, &direction_player6_371_17_16, &direction_player6_371_17_16, &direction_player6_371_17_16, &direction_player6_371_17_16, &direction_player6_371_17_16, &direction_player6_371_17_16, &direction_player6_371_17_16, NULL, &direction_player6_371_17_24, &direction_player6_371_17_24, &direction_player6_371_17_24, &direction_player6_371_17_24, &direction_player6_371_17_24, &direction_player6_371_17_24, &direction_player6_371_17_24, NULL, &direction_player6_371_17_0, &direction_player6_371_17_0, &direction_player6_371_17_0};
static Image* images_player6_371_18_24[8];
static Direction direction_player6_371_18_24 = {24, 10, 10, 0, -1, images_player6_371_18_24, 8};
static Animation anim_player6_371_18 = {&direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, NULL, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24, &direction_player6_371_18_24};
static Image* images_player6_371_19_24[5];
static Direction direction_player6_371_19_24 = {24, 10, 10, 0, -1, images_player6_371_19_24, 5};
static Animation anim_player6_371_19 = {&direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, NULL, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24, &direction_player6_371_19_24};
static Animation * anim_array_player6_371[20] = {&anim_player6_371_0, NULL, NULL, NULL, &anim_player6_371_4, NULL, &anim_player6_371_6, &anim_player6_371_7, &anim_player6_371_8, &anim_player6_371_9, &anim_player6_371_10, &anim_player6_371_11, &anim_player6_371_12, &anim_player6_371_13, &anim_player6_371_14, &anim_player6_371_15, &anim_player6_371_16, &anim_player6_371_17, &anim_player6_371_18, &anim_player6_371_19};
static Animations anim_player6_371 = {20, &anim_array_player6_371[0]};
static bool anim_player6_371_initialized;
class Player6_371 : public Active
{
public:
    Player6_371(int x, int y) : Active(x, y, Player6_371_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_6", 8);
#endif
        this->animations = &anim_player6_371;
        if (!anim_player6_371_initialized) {
            anim_player6_371_initialized = true;
            images_player6_371_0_0[0] = get_internal_image(293);
            images_player6_371_0_0[1] = get_internal_image(282);
            images_player6_371_0_8[0] = get_internal_image(302);
            images_player6_371_0_8[1] = get_internal_image(301);
            images_player6_371_0_16[0] = get_internal_image(297);
            images_player6_371_0_16[1] = get_internal_image(295);
            images_player6_371_0_24[0] = get_internal_image(299);
            images_player6_371_0_24[1] = get_internal_image(300);
            images_player6_371_4_0[0] = get_internal_image(369);
            images_player6_371_4_0[1] = get_internal_image(373);
            images_player6_371_4_0[2] = get_internal_image(369);
            images_player6_371_4_0[3] = get_internal_image(373);
            images_player6_371_4_16[0] = get_internal_image(371);
            images_player6_371_4_16[1] = get_internal_image(763);
            images_player6_371_4_16[2] = get_internal_image(371);
            images_player6_371_4_16[3] = get_internal_image(763);
            images_player6_371_6_0[0] = get_internal_image(801);
            images_player6_371_6_8[0] = get_internal_image(800);
            images_player6_371_6_16[0] = get_internal_image(798);
            images_player6_371_6_24[0] = get_internal_image(802);
            images_player6_371_7_0[0] = get_internal_image(1173);
            images_player6_371_7_0[1] = get_internal_image(1171);
            images_player6_371_7_8[0] = get_internal_image(1175);
            images_player6_371_7_8[1] = get_internal_image(1176);
            images_player6_371_7_16[0] = get_internal_image(1172);
            images_player6_371_7_16[1] = get_internal_image(1174);
            images_player6_371_7_24[0] = get_internal_image(1168);
            images_player6_371_7_24[1] = get_internal_image(1170);
            images_player6_371_8_0[0] = get_internal_image(2486);
            images_player6_371_8_24[0] = get_internal_image(1184);
            images_player6_371_9_0[0] = get_internal_image(1502);
            images_player6_371_9_0[1] = get_internal_image(1506);
            images_player6_371_10_0[0] = get_internal_image(2343);
            images_player6_371_10_0[1] = get_internal_image(2339);
            images_player6_371_10_0[2] = get_internal_image(2342);
            images_player6_371_10_0[3] = get_internal_image(2338);
            images_player6_371_10_0[4] = get_internal_image(2342);
            images_player6_371_11_0[0] = get_internal_image(1086);
            images_player6_371_11_0[1] = get_internal_image(1087);
            images_player6_371_11_8[0] = get_internal_image(344);
            images_player6_371_11_8[1] = get_internal_image(343);
            images_player6_371_11_16[0] = get_internal_image(1088);
            images_player6_371_11_16[1] = get_internal_image(1085);
            images_player6_371_11_24[0] = get_internal_image(728);
            images_player6_371_11_24[1] = get_internal_image(729);
            images_player6_371_12_0[0] = get_internal_image(1202);
            images_player6_371_12_0[1] = get_internal_image(1204);
            images_player6_371_12_8[0] = get_internal_image(1770);
            images_player6_371_12_8[1] = get_internal_image(1771);
            images_player6_371_12_16[0] = get_internal_image(1203);
            images_player6_371_12_16[1] = get_internal_image(1205);
            images_player6_371_12_24[0] = get_internal_image(1783);
            images_player6_371_12_24[1] = get_internal_image(1786);
            images_player6_371_13_0[0] = get_internal_image(1846);
            images_player6_371_13_0[1] = get_internal_image(1843);
            images_player6_371_13_8[0] = get_internal_image(1852);
            images_player6_371_13_8[1] = get_internal_image(1851);
            images_player6_371_13_16[0] = get_internal_image(1847);
            images_player6_371_13_16[1] = get_internal_image(1848);
            images_player6_371_13_24[0] = get_internal_image(1850);
            images_player6_371_13_24[1] = get_internal_image(1849);
            images_player6_371_14_0[0] = get_internal_image(1710);
            images_player6_371_14_0[1] = get_internal_image(1711);
            images_player6_371_14_8[0] = get_internal_image(1717);
            images_player6_371_14_8[1] = get_internal_image(1718);
            images_player6_371_14_16[0] = get_internal_image(1714);
            images_player6_371_14_16[1] = get_internal_image(1713);
            images_player6_371_14_24[0] = get_internal_image(1712);
            images_player6_371_14_24[1] = get_internal_image(1715);
            images_player6_371_15_0[0] = get_internal_image(439);
            images_player6_371_15_0[1] = get_internal_image(467);
            images_player6_371_15_8[0] = get_internal_image(1570);
            images_player6_371_15_8[1] = get_internal_image(1579);
            images_player6_371_15_16[0] = get_internal_image(680);
            images_player6_371_15_16[1] = get_internal_image(79);
            images_player6_371_15_24[0] = get_internal_image(470);
            images_player6_371_15_24[1] = get_internal_image(1194);
            images_player6_371_16_0[0] = get_internal_image(1887);
            images_player6_371_16_0[1] = get_internal_image(1890);
            images_player6_371_16_8[0] = get_internal_image(1922);
            images_player6_371_16_8[1] = get_internal_image(1923);
            images_player6_371_16_16[0] = get_internal_image(1892);
            images_player6_371_16_16[1] = get_internal_image(1893);
            images_player6_371_16_24[0] = get_internal_image(1911);
            images_player6_371_16_24[1] = get_internal_image(1912);
            images_player6_371_17_0[0] = get_internal_image(2033);
            images_player6_371_17_0[1] = get_internal_image(2032);
            images_player6_371_17_8[0] = get_internal_image(2038);
            images_player6_371_17_8[1] = get_internal_image(2040);
            images_player6_371_17_16[0] = get_internal_image(2034);
            images_player6_371_17_16[1] = get_internal_image(2035);
            images_player6_371_17_24[0] = get_internal_image(2036);
            images_player6_371_17_24[1] = get_internal_image(2037);
            images_player6_371_18_24[0] = get_internal_image(2099);
            images_player6_371_18_24[1] = get_internal_image(2112);
            images_player6_371_18_24[2] = get_internal_image(2107);
            images_player6_371_18_24[3] = get_internal_image(2108);
            images_player6_371_18_24[4] = get_internal_image(2109);
            images_player6_371_18_24[5] = get_internal_image(2114);
            images_player6_371_18_24[6] = get_internal_image(2110);
            images_player6_371_18_24[7] = get_internal_image(2111);
            images_player6_371_19_24[0] = get_internal_image(2150);
            images_player6_371_19_24[1] = get_internal_image(2156);
            images_player6_371_19_24[2] = get_internal_image(2156);
            images_player6_371_19_24[3] = get_internal_image(2157);
            images_player6_371_19_24[4] = get_internal_image(2157);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player6_371(int x, int y)
{
    return new (Active::pool.create()) Player6_371(x, y);
}
static Image* images_player7_372_0_0[2];
static Direction direction_player7_372_0_0 = {0, 10, 10, 0, -1, images_player7_372_0_0, 2};
static Image* images_player7_372_0_8[2];
static Direction direction_player7_372_0_8 = {8, 10, 10, 0, -1, images_player7_372_0_8, 2};
static Image* images_player7_372_0_16[2];
static Direction direction_player7_372_0_16 = {16, 10, 10, 0, -1, images_player7_372_0_16, 2};
static Image* images_player7_372_0_24[2];
static Direction direction_player7_372_0_24 = {24, 10, 10, 0, -1, images_player7_372_0_24, 2};
static Animation anim_player7_372_0 = {&direction_player7_372_0_0, &direction_player7_372_0_0, &direction_player7_372_0_0, &direction_player7_372_0_0, NULL, &direction_player7_372_0_8, &direction_player7_372_0_8, &direction_player7_372_0_8, &direction_player7_372_0_8, &direction_player7_372_0_8, &direction_player7_372_0_8, &direction_player7_372_0_8, NULL, &direction_player7_372_0_16, &direction_player7_372_0_16, &direction_player7_372_0_16, &direction_player7_372_0_16, &direction_player7_372_0_16, &direction_player7_372_0_16, &direction_player7_372_0_16, NULL, &direction_player7_372_0_24, &direction_player7_372_0_24, &direction_player7_372_0_24, &direction_player7_372_0_24, &direction_player7_372_0_24, &direction_player7_372_0_24, &direction_player7_372_0_24, NULL, &direction_player7_372_0_0, &direction_player7_372_0_0, &direction_player7_372_0_0};
static Image* images_player7_372_4_0[4];
static Direction direction_player7_372_4_0 = {0, 20, 20, 0, 1, images_player7_372_4_0, 4};
static Image* images_player7_372_4_16[4];
static Direction direction_player7_372_4_16 = {16, 20, 20, 0, 1, images_player7_372_4_16, 4};
static Animation anim_player7_372_4 = {&direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0, NULL, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, &direction_player7_372_4_16, NULL, &direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0, &direction_player7_372_4_0};
static Image* images_player7_372_6_0[1];
static Direction direction_player7_372_6_0 = {0, 6, 6, 0, 1, images_player7_372_6_0, 1};
static Image* images_player7_372_6_8[1];
static Direction direction_player7_372_6_8 = {8, 6, 6, 0, 1, images_player7_372_6_8, 1};
static Image* images_player7_372_6_16[1];
static Direction direction_player7_372_6_16 = {16, 6, 6, 0, 1, images_player7_372_6_16, 1};
static Image* images_player7_372_6_24[1];
static Direction direction_player7_372_6_24 = {24, 6, 6, 0, 1, images_player7_372_6_24, 1};
static Animation anim_player7_372_6 = {&direction_player7_372_6_0, &direction_player7_372_6_0, &direction_player7_372_6_0, &direction_player7_372_6_0, NULL, &direction_player7_372_6_8, &direction_player7_372_6_8, &direction_player7_372_6_8, &direction_player7_372_6_8, &direction_player7_372_6_8, &direction_player7_372_6_8, &direction_player7_372_6_8, NULL, &direction_player7_372_6_16, &direction_player7_372_6_16, &direction_player7_372_6_16, &direction_player7_372_6_16, &direction_player7_372_6_16, &direction_player7_372_6_16, &direction_player7_372_6_16, NULL, &direction_player7_372_6_24, &direction_player7_372_6_24, &direction_player7_372_6_24, &direction_player7_372_6_24, &direction_player7_372_6_24, &direction_player7_372_6_24, &direction_player7_372_6_24, NULL, &direction_player7_372_6_0, &direction_player7_372_6_0, &direction_player7_372_6_0};
static Image* images_player7_372_7_0[2];
static Direction direction_player7_372_7_0 = {0, 10, 10, 0, -1, images_player7_372_7_0, 2};
static Image* images_player7_372_7_8[2];
static Direction direction_player7_372_7_8 = {8, 10, 10, 0, -1, images_player7_372_7_8, 2};
static Image* images_player7_372_7_16[2];
static Direction direction_player7_372_7_16 = {16, 10, 10, 0, -1, images_player7_372_7_16, 2};
static Image* images_player7_372_7_24[2];
static Direction direction_player7_372_7_24 = {24, 10, 10, 0, -1, images_player7_372_7_24, 2};
static Animation anim_player7_372_7 = {&direction_player7_372_7_0, &direction_player7_372_7_0, &direction_player7_372_7_0, &direction_player7_372_7_0, NULL, &direction_player7_372_7_8, &direction_player7_372_7_8, &direction_player7_372_7_8, &direction_player7_372_7_8, &direction_player7_372_7_8, &direction_player7_372_7_8, &direction_player7_372_7_8, NULL, &direction_player7_372_7_16, &direction_player7_372_7_16, &direction_player7_372_7_16, &direction_player7_372_7_16, &direction_player7_372_7_16, &direction_player7_372_7_16, &direction_player7_372_7_16, NULL, &direction_player7_372_7_24, &direction_player7_372_7_24, &direction_player7_372_7_24, &direction_player7_372_7_24, &direction_player7_372_7_24, &direction_player7_372_7_24, &direction_player7_372_7_24, NULL, &direction_player7_372_7_0, &direction_player7_372_7_0, &direction_player7_372_7_0};
static Image* images_player7_372_8_0[1];
static Direction direction_player7_372_8_0 = {0, 50, 50, 0, -1, images_player7_372_8_0, 1};
static Image* images_player7_372_8_24[1];
static Direction direction_player7_372_8_24 = {24, 10, 10, 0, -1, images_player7_372_8_24, 1};
static Animation anim_player7_372_8 = {&direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0, NULL, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, &direction_player7_372_8_24, NULL, &direction_player7_372_8_0, &direction_player7_372_8_0, &direction_player7_372_8_0};
static Image* images_player7_372_9_0[2];
static Direction direction_player7_372_9_0 = {0, 50, 50, 0, -1, images_player7_372_9_0, 2};
static Animation anim_player7_372_9 = {&direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, NULL, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0, &direction_player7_372_9_0};
static Image* images_player7_372_10_0[5];
static Direction direction_player7_372_10_0 = {0, 10, 10, 0, -1, images_player7_372_10_0, 5};
static Animation anim_player7_372_10 = {&direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, NULL, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0, &direction_player7_372_10_0};
static Image* images_player7_372_11_0[2];
static Direction direction_player7_372_11_0 = {0, 10, 10, 0, -1, images_player7_372_11_0, 2};
static Image* images_player7_372_11_8[2];
static Direction direction_player7_372_11_8 = {8, 10, 10, 0, -1, images_player7_372_11_8, 2};
static Image* images_player7_372_11_16[2];
static Direction direction_player7_372_11_16 = {16, 10, 10, 0, -1, images_player7_372_11_16, 2};
static Image* images_player7_372_11_24[2];
static Direction direction_player7_372_11_24 = {24, 10, 10, 0, -1, images_player7_372_11_24, 2};
static Animation anim_player7_372_11 = {&direction_player7_372_11_0, &direction_player7_372_11_0, &direction_player7_372_11_0, &direction_player7_372_11_0, NULL, &direction_player7_372_11_8, &direction_player7_372_11_8, &direction_player7_372_11_8, &direction_player7_372_11_8, &direction_player7_372_11_8, &direction_player7_372_11_8, &direction_player7_372_11_8, NULL, &direction_player7_372_11_16, &direction_player7_372_11_16, &direction_player7_372_11_16, &direction_player7_372_11_16, &direction_player7_372_11_16, &direction_player7_372_11_16, &direction_player7_372_11_16, NULL, &direction_player7_372_11_24, &direction_player7_372_11_24, &direction_player7_372_11_24, &direction_player7_372_11_24, &direction_player7_372_11_24, &direction_player7_372_11_24, &direction_player7_372_11_24, NULL, &direction_player7_372_11_0, &direction_player7_372_11_0, &direction_player7_372_11_0};
static Image* images_player7_372_12_0[2];
static Direction direction_player7_372_12_0 = {0, 10, 10, 0, -1, images_player7_372_12_0, 2};
static Image* images_player7_372_12_8[2];
static Direction direction_player7_372_12_8 = {8, 10, 10, 0, -1, images_player7_372_12_8, 2};
static Image* images_player7_372_12_16[2];
static Direction direction_player7_372_12_16 = {16, 10, 10, 0, -1, images_player7_372_12_16, 2};
static Image* images_player7_372_12_24[2];
static Direction direction_player7_372_12_24 = {24, 10, 10, 0, -1, images_player7_372_12_24, 2};
static Animation anim_player7_372_12 = {&direction_player7_372_12_0, &direction_player7_372_12_0, &direction_player7_372_12_0, &direction_player7_372_12_0, NULL, &direction_player7_372_12_8, &direction_player7_372_12_8, &direction_player7_372_12_8, &direction_player7_372_12_8, &direction_player7_372_12_8, &direction_player7_372_12_8, &direction_player7_372_12_8, NULL, &direction_player7_372_12_16, &direction_player7_372_12_16, &direction_player7_372_12_16, &direction_player7_372_12_16, &direction_player7_372_12_16, &direction_player7_372_12_16, &direction_player7_372_12_16, NULL, &direction_player7_372_12_24, &direction_player7_372_12_24, &direction_player7_372_12_24, &direction_player7_372_12_24, &direction_player7_372_12_24, &direction_player7_372_12_24, &direction_player7_372_12_24, NULL, &direction_player7_372_12_0, &direction_player7_372_12_0, &direction_player7_372_12_0};
static Image* images_player7_372_13_0[2];
static Direction direction_player7_372_13_0 = {0, 10, 10, 0, -1, images_player7_372_13_0, 2};
static Image* images_player7_372_13_8[2];
static Direction direction_player7_372_13_8 = {8, 10, 10, 0, -1, images_player7_372_13_8, 2};
static Image* images_player7_372_13_16[2];
static Direction direction_player7_372_13_16 = {16, 10, 10, 0, -1, images_player7_372_13_16, 2};
static Image* images_player7_372_13_24[2];
static Direction direction_player7_372_13_24 = {24, 10, 10, 0, -1, images_player7_372_13_24, 2};
static Animation anim_player7_372_13 = {&direction_player7_372_13_0, &direction_player7_372_13_0, &direction_player7_372_13_0, &direction_player7_372_13_0, NULL, &direction_player7_372_13_8, &direction_player7_372_13_8, &direction_player7_372_13_8, &direction_player7_372_13_8, &direction_player7_372_13_8, &direction_player7_372_13_8, &direction_player7_372_13_8, NULL, &direction_player7_372_13_16, &direction_player7_372_13_16, &direction_player7_372_13_16, &direction_player7_372_13_16, &direction_player7_372_13_16, &direction_player7_372_13_16, &direction_player7_372_13_16, NULL, &direction_player7_372_13_24, &direction_player7_372_13_24, &direction_player7_372_13_24, &direction_player7_372_13_24, &direction_player7_372_13_24, &direction_player7_372_13_24, &direction_player7_372_13_24, NULL, &direction_player7_372_13_0, &direction_player7_372_13_0, &direction_player7_372_13_0};
static Image* images_player7_372_14_0[2];
static Direction direction_player7_372_14_0 = {0, 10, 10, 0, -1, images_player7_372_14_0, 2};
static Image* images_player7_372_14_8[2];
static Direction direction_player7_372_14_8 = {8, 10, 10, 0, -1, images_player7_372_14_8, 2};
static Image* images_player7_372_14_16[2];
static Direction direction_player7_372_14_16 = {16, 10, 10, 0, -1, images_player7_372_14_16, 2};
static Image* images_player7_372_14_24[2];
static Direction direction_player7_372_14_24 = {24, 10, 10, 0, -1, images_player7_372_14_24, 2};
static Animation anim_player7_372_14 = {&direction_player7_372_14_0, &direction_player7_372_14_0, &direction_player7_372_14_0, &direction_player7_372_14_0, NULL, &direction_player7_372_14_8, &direction_player7_372_14_8, &direction_player7_372_14_8, &direction_player7_372_14_8, &direction_player7_372_14_8, &direction_player7_372_14_8, &direction_player7_372_14_8, NULL, &direction_player7_372_14_16, &direction_player7_372_14_16, &direction_player7_372_14_16, &direction_player7_372_14_16, &direction_player7_372_14_16, &direction_player7_372_14_16, &direction_player7_372_14_16, NULL, &direction_player7_372_14_24, &direction_player7_372_14_24, &direction_player7_372_14_24, &direction_player7_372_14_24, &direction_player7_372_14_24, &direction_player7_372_14_24, &direction_player7_372_14_24, NULL, &direction_player7_372_14_0, &direction_player7_372_14_0, &direction_player7_372_14_0};
static Image* images_player7_372_15_0[2];
static Direction direction_player7_372_15_0 = {0, 10, 10, 0, -1, images_player7_372_15_0, 2};
static Image* images_player7_372_15_8[2];
static Direction direction_player7_372_15_8 = {8, 10, 10, 0, -1, images_player7_372_15_8, 2};
static Image* images_player7_372_15_16[2];
static Direction direction_player7_372_15_16 = {16, 10, 10, 0, -1, images_player7_372_15_16, 2};
static Image* images_player7_372_15_24[2];
static Direction direction_player7_372_15_24 = {24, 10, 10, 0, -1, images_player7_372_15_24, 2};
static Animation anim_player7_372_15 = {&direction_player7_372_15_0, &direction_player7_372_15_0, &direction_player7_372_15_0, &direction_player7_372_15_0, NULL, &direction_player7_372_15_8, &direction_player7_372_15_8, &direction_player7_372_15_8, &direction_player7_372_15_8, &direction_player7_372_15_8, &direction_player7_372_15_8, &direction_player7_372_15_8, NULL, &direction_player7_372_15_16, &direction_player7_372_15_16, &direction_player7_372_15_16, &direction_player7_372_15_16, &direction_player7_372_15_16, &direction_player7_372_15_16, &direction_player7_372_15_16, NULL, &direction_player7_372_15_24, &direction_player7_372_15_24, &direction_player7_372_15_24, &direction_player7_372_15_24, &direction_player7_372_15_24, &direction_player7_372_15_24, &direction_player7_372_15_24, NULL, &direction_player7_372_15_0, &direction_player7_372_15_0, &direction_player7_372_15_0};
static Image* images_player7_372_16_0[2];
static Direction direction_player7_372_16_0 = {0, 10, 10, 0, -1, images_player7_372_16_0, 2};
static Image* images_player7_372_16_8[2];
static Direction direction_player7_372_16_8 = {8, 10, 10, 0, -1, images_player7_372_16_8, 2};
static Image* images_player7_372_16_16[2];
static Direction direction_player7_372_16_16 = {16, 10, 10, 0, -1, images_player7_372_16_16, 2};
static Image* images_player7_372_16_24[2];
static Direction direction_player7_372_16_24 = {24, 10, 10, 0, -1, images_player7_372_16_24, 2};
static Animation anim_player7_372_16 = {&direction_player7_372_16_0, &direction_player7_372_16_0, &direction_player7_372_16_0, &direction_player7_372_16_0, NULL, &direction_player7_372_16_8, &direction_player7_372_16_8, &direction_player7_372_16_8, &direction_player7_372_16_8, &direction_player7_372_16_8, &direction_player7_372_16_8, &direction_player7_372_16_8, NULL, &direction_player7_372_16_16, &direction_player7_372_16_16, &direction_player7_372_16_16, &direction_player7_372_16_16, &direction_player7_372_16_16, &direction_player7_372_16_16, &direction_player7_372_16_16, NULL, &direction_player7_372_16_24, &direction_player7_372_16_24, &direction_player7_372_16_24, &direction_player7_372_16_24, &direction_player7_372_16_24, &direction_player7_372_16_24, &direction_player7_372_16_24, NULL, &direction_player7_372_16_0, &direction_player7_372_16_0, &direction_player7_372_16_0};
static Image* images_player7_372_17_0[2];
static Direction direction_player7_372_17_0 = {0, 5, 5, 1, -1, images_player7_372_17_0, 2};
static Image* images_player7_372_17_8[2];
static Direction direction_player7_372_17_8 = {8, 5, 5, 1, -1, images_player7_372_17_8, 2};
static Image* images_player7_372_17_16[2];
static Direction direction_player7_372_17_16 = {16, 5, 5, 1, -1, images_player7_372_17_16, 2};
static Image* images_player7_372_17_24[2];
static Direction direction_player7_372_17_24 = {24, 5, 5, 1, -1, images_player7_372_17_24, 2};
static Animation anim_player7_372_17 = {&direction_player7_372_17_0, &direction_player7_372_17_0, &direction_player7_372_17_0, &direction_player7_372_17_0, NULL, &direction_player7_372_17_8, &direction_player7_372_17_8, &direction_player7_372_17_8, &direction_player7_372_17_8, &direction_player7_372_17_8, &direction_player7_372_17_8, &direction_player7_372_17_8, NULL, &direction_player7_372_17_16, &direction_player7_372_17_16, &direction_player7_372_17_16, &direction_player7_372_17_16, &direction_player7_372_17_16, &direction_player7_372_17_16, &direction_player7_372_17_16, NULL, &direction_player7_372_17_24, &direction_player7_372_17_24, &direction_player7_372_17_24, &direction_player7_372_17_24, &direction_player7_372_17_24, &direction_player7_372_17_24, &direction_player7_372_17_24, NULL, &direction_player7_372_17_0, &direction_player7_372_17_0, &direction_player7_372_17_0};
static Image* images_player7_372_18_24[8];
static Direction direction_player7_372_18_24 = {24, 10, 10, 0, -1, images_player7_372_18_24, 8};
static Animation anim_player7_372_18 = {&direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, NULL, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24, &direction_player7_372_18_24};
static Image* images_player7_372_19_24[5];
static Direction direction_player7_372_19_24 = {24, 10, 10, 0, -1, images_player7_372_19_24, 5};
static Animation anim_player7_372_19 = {&direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, NULL, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24, &direction_player7_372_19_24};
static Animation * anim_array_player7_372[20] = {&anim_player7_372_0, NULL, NULL, NULL, &anim_player7_372_4, NULL, &anim_player7_372_6, &anim_player7_372_7, &anim_player7_372_8, &anim_player7_372_9, &anim_player7_372_10, &anim_player7_372_11, &anim_player7_372_12, &anim_player7_372_13, &anim_player7_372_14, &anim_player7_372_15, &anim_player7_372_16, &anim_player7_372_17, &anim_player7_372_18, &anim_player7_372_19};
static Animations anim_player7_372 = {20, &anim_array_player7_372[0]};
static bool anim_player7_372_initialized;
class Player7_372 : public Active
{
public:
    Player7_372(int x, int y) : Active(x, y, Player7_372_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_7", 8);
#endif
        this->animations = &anim_player7_372;
        if (!anim_player7_372_initialized) {
            anim_player7_372_initialized = true;
            images_player7_372_0_0[0] = get_internal_image(441);
            images_player7_372_0_0[1] = get_internal_image(442);
            images_player7_372_0_8[0] = get_internal_image(459);
            images_player7_372_0_8[1] = get_internal_image(1372);
            images_player7_372_0_16[0] = get_internal_image(447);
            images_player7_372_0_16[1] = get_internal_image(444);
            images_player7_372_0_24[0] = get_internal_image(384);
            images_player7_372_0_24[1] = get_internal_image(381);
            images_player7_372_4_0[0] = get_internal_image(369);
            images_player7_372_4_0[1] = get_internal_image(373);
            images_player7_372_4_0[2] = get_internal_image(369);
            images_player7_372_4_0[3] = get_internal_image(373);
            images_player7_372_4_16[0] = get_internal_image(371);
            images_player7_372_4_16[1] = get_internal_image(763);
            images_player7_372_4_16[2] = get_internal_image(371);
            images_player7_372_4_16[3] = get_internal_image(763);
            images_player7_372_6_0[0] = get_internal_image(170);
            images_player7_372_6_8[0] = get_internal_image(601);
            images_player7_372_6_16[0] = get_internal_image(317);
            images_player7_372_6_24[0] = get_internal_image(1067);
            images_player7_372_7_0[0] = get_internal_image(1138);
            images_player7_372_7_0[1] = get_internal_image(1139);
            images_player7_372_7_8[0] = get_internal_image(1136);
            images_player7_372_7_8[1] = get_internal_image(1143);
            images_player7_372_7_16[0] = get_internal_image(1140);
            images_player7_372_7_16[1] = get_internal_image(1141);
            images_player7_372_7_24[0] = get_internal_image(1142);
            images_player7_372_7_24[1] = get_internal_image(1144);
            images_player7_372_8_0[0] = get_internal_image(2483);
            images_player7_372_8_24[0] = get_internal_image(1183);
            images_player7_372_9_0[0] = get_internal_image(1495);
            images_player7_372_9_0[1] = get_internal_image(1496);
            images_player7_372_10_0[0] = get_internal_image(456);
            images_player7_372_10_0[1] = get_internal_image(461);
            images_player7_372_10_0[2] = get_internal_image(595);
            images_player7_372_10_0[3] = get_internal_image(2341);
            images_player7_372_10_0[4] = get_internal_image(595);
            images_player7_372_11_0[0] = get_internal_image(413);
            images_player7_372_11_0[1] = get_internal_image(404);
            images_player7_372_11_8[0] = get_internal_image(457);
            images_player7_372_11_8[1] = get_internal_image(458);
            images_player7_372_11_16[0] = get_internal_image(448);
            images_player7_372_11_16[1] = get_internal_image(450);
            images_player7_372_11_24[0] = get_internal_image(715);
            images_player7_372_11_24[1] = get_internal_image(716);
            images_player7_372_12_0[0] = get_internal_image(1185);
            images_player7_372_12_0[1] = get_internal_image(1186);
            images_player7_372_12_8[0] = get_internal_image(1762);
            images_player7_372_12_8[1] = get_internal_image(1761);
            images_player7_372_12_16[0] = get_internal_image(1187);
            images_player7_372_12_16[1] = get_internal_image(1179);
            images_player7_372_12_24[0] = get_internal_image(1776);
            images_player7_372_12_24[1] = get_internal_image(1773);
            images_player7_372_13_0[0] = get_internal_image(1798);
            images_player7_372_13_0[1] = get_internal_image(1795);
            images_player7_372_13_8[0] = get_internal_image(1799);
            images_player7_372_13_8[1] = get_internal_image(1801);
            images_player7_372_13_16[0] = get_internal_image(1793);
            images_player7_372_13_16[1] = get_internal_image(1796);
            images_player7_372_13_24[0] = get_internal_image(1797);
            images_player7_372_13_24[1] = get_internal_image(1800);
            images_player7_372_14_0[0] = get_internal_image(1693);
            images_player7_372_14_0[1] = get_internal_image(1696);
            images_player7_372_14_8[0] = get_internal_image(1700);
            images_player7_372_14_8[1] = get_internal_image(1701);
            images_player7_372_14_16[0] = get_internal_image(1695);
            images_player7_372_14_16[1] = get_internal_image(1698);
            images_player7_372_14_24[0] = get_internal_image(1697);
            images_player7_372_14_24[1] = get_internal_image(1699);
            images_player7_372_15_0[0] = get_internal_image(1732);
            images_player7_372_15_0[1] = get_internal_image(1727);
            images_player7_372_15_8[0] = get_internal_image(1729);
            images_player7_372_15_8[1] = get_internal_image(1731);
            images_player7_372_15_16[0] = get_internal_image(1724);
            images_player7_372_15_16[1] = get_internal_image(1725);
            images_player7_372_15_24[0] = get_internal_image(1730);
            images_player7_372_15_24[1] = get_internal_image(1728);
            images_player7_372_16_0[0] = get_internal_image(1891);
            images_player7_372_16_0[1] = get_internal_image(1894);
            images_player7_372_16_8[0] = get_internal_image(1924);
            images_player7_372_16_8[1] = get_internal_image(1925);
            images_player7_372_16_16[0] = get_internal_image(1896);
            images_player7_372_16_16[1] = get_internal_image(1897);
            images_player7_372_16_24[0] = get_internal_image(1913);
            images_player7_372_16_24[1] = get_internal_image(1914);
            images_player7_372_17_0[0] = get_internal_image(1978);
            images_player7_372_17_0[1] = get_internal_image(1982);
            images_player7_372_17_8[0] = get_internal_image(1987);
            images_player7_372_17_8[1] = get_internal_image(1988);
            images_player7_372_17_16[0] = get_internal_image(1983);
            images_player7_372_17_16[1] = get_internal_image(1984);
            images_player7_372_17_24[0] = get_internal_image(1985);
            images_player7_372_17_24[1] = get_internal_image(1986);
            images_player7_372_18_24[0] = get_internal_image(2070);
            images_player7_372_18_24[1] = get_internal_image(2076);
            images_player7_372_18_24[2] = get_internal_image(2071);
            images_player7_372_18_24[3] = get_internal_image(2072);
            images_player7_372_18_24[4] = get_internal_image(2073);
            images_player7_372_18_24[5] = get_internal_image(2075);
            images_player7_372_18_24[6] = get_internal_image(2071);
            images_player7_372_18_24[7] = get_internal_image(2074);
            images_player7_372_19_24[0] = get_internal_image(2404);
            images_player7_372_19_24[1] = get_internal_image(1031);
            images_player7_372_19_24[2] = get_internal_image(2409);
            images_player7_372_19_24[3] = get_internal_image(2406);
            images_player7_372_19_24[4] = get_internal_image(2406);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player7_372(int x, int y)
{
    return new (Active::pool.create()) Player7_372(x, y);
}
static Image* images_player8_373_0_0[2];
static Direction direction_player8_373_0_0 = {0, 10, 10, 0, -1, images_player8_373_0_0, 2};
static Image* images_player8_373_0_8[2];
static Direction direction_player8_373_0_8 = {8, 10, 10, 0, -1, images_player8_373_0_8, 2};
static Image* images_player8_373_0_16[2];
static Direction direction_player8_373_0_16 = {16, 10, 10, 0, -1, images_player8_373_0_16, 2};
static Image* images_player8_373_0_24[2];
static Direction direction_player8_373_0_24 = {24, 10, 10, 0, -1, images_player8_373_0_24, 2};
static Animation anim_player8_373_0 = {&direction_player8_373_0_0, &direction_player8_373_0_0, &direction_player8_373_0_0, &direction_player8_373_0_0, NULL, &direction_player8_373_0_8, &direction_player8_373_0_8, &direction_player8_373_0_8, &direction_player8_373_0_8, &direction_player8_373_0_8, &direction_player8_373_0_8, &direction_player8_373_0_8, NULL, &direction_player8_373_0_16, &direction_player8_373_0_16, &direction_player8_373_0_16, &direction_player8_373_0_16, &direction_player8_373_0_16, &direction_player8_373_0_16, &direction_player8_373_0_16, NULL, &direction_player8_373_0_24, &direction_player8_373_0_24, &direction_player8_373_0_24, &direction_player8_373_0_24, &direction_player8_373_0_24, &direction_player8_373_0_24, &direction_player8_373_0_24, NULL, &direction_player8_373_0_0, &direction_player8_373_0_0, &direction_player8_373_0_0};
static Image* images_player8_373_4_0[4];
static Direction direction_player8_373_4_0 = {0, 20, 20, 0, 1, images_player8_373_4_0, 4};
static Image* images_player8_373_4_16[4];
static Direction direction_player8_373_4_16 = {16, 20, 20, 0, 1, images_player8_373_4_16, 4};
static Animation anim_player8_373_4 = {&direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0, NULL, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, &direction_player8_373_4_16, NULL, &direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0, &direction_player8_373_4_0};
static Image* images_player8_373_6_0[1];
static Direction direction_player8_373_6_0 = {0, 6, 6, 0, 1, images_player8_373_6_0, 1};
static Image* images_player8_373_6_8[1];
static Direction direction_player8_373_6_8 = {8, 6, 6, 0, 1, images_player8_373_6_8, 1};
static Image* images_player8_373_6_16[1];
static Direction direction_player8_373_6_16 = {16, 6, 6, 0, 1, images_player8_373_6_16, 1};
static Image* images_player8_373_6_24[1];
static Direction direction_player8_373_6_24 = {24, 6, 6, 0, 1, images_player8_373_6_24, 1};
static Animation anim_player8_373_6 = {&direction_player8_373_6_0, &direction_player8_373_6_0, &direction_player8_373_6_0, &direction_player8_373_6_0, NULL, &direction_player8_373_6_8, &direction_player8_373_6_8, &direction_player8_373_6_8, &direction_player8_373_6_8, &direction_player8_373_6_8, &direction_player8_373_6_8, &direction_player8_373_6_8, NULL, &direction_player8_373_6_16, &direction_player8_373_6_16, &direction_player8_373_6_16, &direction_player8_373_6_16, &direction_player8_373_6_16, &direction_player8_373_6_16, &direction_player8_373_6_16, NULL, &direction_player8_373_6_24, &direction_player8_373_6_24, &direction_player8_373_6_24, &direction_player8_373_6_24, &direction_player8_373_6_24, &direction_player8_373_6_24, &direction_player8_373_6_24, NULL, &direction_player8_373_6_0, &direction_player8_373_6_0, &direction_player8_373_6_0};
static Image* images_player8_373_7_0[2];
static Direction direction_player8_373_7_0 = {0, 10, 10, 0, -1, images_player8_373_7_0, 2};
static Image* images_player8_373_7_8[2];
static Direction direction_player8_373_7_8 = {8, 10, 10, 0, -1, images_player8_373_7_8, 2};
static Image* images_player8_373_7_16[2];
static Direction direction_player8_373_7_16 = {16, 10, 10, 0, -1, images_player8_373_7_16, 2};
static Image* images_player8_373_7_24[2];
static Direction direction_player8_373_7_24 = {24, 10, 10, 0, -1, images_player8_373_7_24, 2};
static Animation anim_player8_373_7 = {&direction_player8_373_7_0, &direction_player8_373_7_0, &direction_player8_373_7_0, &direction_player8_373_7_0, NULL, &direction_player8_373_7_8, &direction_player8_373_7_8, &direction_player8_373_7_8, &direction_player8_373_7_8, &direction_player8_373_7_8, &direction_player8_373_7_8, &direction_player8_373_7_8, NULL, &direction_player8_373_7_16, &direction_player8_373_7_16, &direction_player8_373_7_16, &direction_player8_373_7_16, &direction_player8_373_7_16, &direction_player8_373_7_16, &direction_player8_373_7_16, NULL, &direction_player8_373_7_24, &direction_player8_373_7_24, &direction_player8_373_7_24, &direction_player8_373_7_24, &direction_player8_373_7_24, &direction_player8_373_7_24, &direction_player8_373_7_24, NULL, &direction_player8_373_7_0, &direction_player8_373_7_0, &direction_player8_373_7_0};
static Image* images_player8_373_8_0[1];
static Direction direction_player8_373_8_0 = {0, 50, 50, 0, -1, images_player8_373_8_0, 1};
static Image* images_player8_373_8_24[1];
static Direction direction_player8_373_8_24 = {24, 10, 10, 0, -1, images_player8_373_8_24, 1};
static Animation anim_player8_373_8 = {&direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0, NULL, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, &direction_player8_373_8_24, NULL, &direction_player8_373_8_0, &direction_player8_373_8_0, &direction_player8_373_8_0};
static Image* images_player8_373_9_0[2];
static Direction direction_player8_373_9_0 = {0, 50, 50, 0, -1, images_player8_373_9_0, 2};
static Animation anim_player8_373_9 = {&direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, NULL, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0, &direction_player8_373_9_0};
static Image* images_player8_373_10_0[5];
static Direction direction_player8_373_10_0 = {0, 10, 10, 0, -1, images_player8_373_10_0, 5};
static Animation anim_player8_373_10 = {&direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, NULL, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0, &direction_player8_373_10_0};
static Image* images_player8_373_11_0[2];
static Direction direction_player8_373_11_0 = {0, 6, 6, 0, -1, images_player8_373_11_0, 2};
static Image* images_player8_373_11_8[2];
static Direction direction_player8_373_11_8 = {8, 6, 6, 0, -1, images_player8_373_11_8, 2};
static Image* images_player8_373_11_16[2];
static Direction direction_player8_373_11_16 = {16, 6, 6, 0, -1, images_player8_373_11_16, 2};
static Image* images_player8_373_11_24[2];
static Direction direction_player8_373_11_24 = {24, 6, 6, 0, -1, images_player8_373_11_24, 2};
static Animation anim_player8_373_11 = {&direction_player8_373_11_0, &direction_player8_373_11_0, &direction_player8_373_11_0, &direction_player8_373_11_0, NULL, &direction_player8_373_11_8, &direction_player8_373_11_8, &direction_player8_373_11_8, &direction_player8_373_11_8, &direction_player8_373_11_8, &direction_player8_373_11_8, &direction_player8_373_11_8, NULL, &direction_player8_373_11_16, &direction_player8_373_11_16, &direction_player8_373_11_16, &direction_player8_373_11_16, &direction_player8_373_11_16, &direction_player8_373_11_16, &direction_player8_373_11_16, NULL, &direction_player8_373_11_24, &direction_player8_373_11_24, &direction_player8_373_11_24, &direction_player8_373_11_24, &direction_player8_373_11_24, &direction_player8_373_11_24, &direction_player8_373_11_24, NULL, &direction_player8_373_11_0, &direction_player8_373_11_0, &direction_player8_373_11_0};
static Image* images_player8_373_12_0[2];
static Direction direction_player8_373_12_0 = {0, 10, 10, 0, -1, images_player8_373_12_0, 2};
static Image* images_player8_373_12_8[2];
static Direction direction_player8_373_12_8 = {8, 10, 10, 0, -1, images_player8_373_12_8, 2};
static Image* images_player8_373_12_16[2];
static Direction direction_player8_373_12_16 = {16, 10, 10, 0, -1, images_player8_373_12_16, 2};
static Image* images_player8_373_12_24[2];
static Direction direction_player8_373_12_24 = {24, 10, 10, 0, -1, images_player8_373_12_24, 2};
static Animation anim_player8_373_12 = {&direction_player8_373_12_0, &direction_player8_373_12_0, &direction_player8_373_12_0, &direction_player8_373_12_0, NULL, &direction_player8_373_12_8, &direction_player8_373_12_8, &direction_player8_373_12_8, &direction_player8_373_12_8, &direction_player8_373_12_8, &direction_player8_373_12_8, &direction_player8_373_12_8, NULL, &direction_player8_373_12_16, &direction_player8_373_12_16, &direction_player8_373_12_16, &direction_player8_373_12_16, &direction_player8_373_12_16, &direction_player8_373_12_16, &direction_player8_373_12_16, NULL, &direction_player8_373_12_24, &direction_player8_373_12_24, &direction_player8_373_12_24, &direction_player8_373_12_24, &direction_player8_373_12_24, &direction_player8_373_12_24, &direction_player8_373_12_24, NULL, &direction_player8_373_12_0, &direction_player8_373_12_0, &direction_player8_373_12_0};
static Image* images_player8_373_13_0[2];
static Direction direction_player8_373_13_0 = {0, 10, 10, 0, -1, images_player8_373_13_0, 2};
static Image* images_player8_373_13_8[2];
static Direction direction_player8_373_13_8 = {8, 10, 10, 0, -1, images_player8_373_13_8, 2};
static Image* images_player8_373_13_16[2];
static Direction direction_player8_373_13_16 = {16, 10, 10, 0, -1, images_player8_373_13_16, 2};
static Image* images_player8_373_13_24[2];
static Direction direction_player8_373_13_24 = {24, 10, 10, 0, -1, images_player8_373_13_24, 2};
static Animation anim_player8_373_13 = {&direction_player8_373_13_0, &direction_player8_373_13_0, &direction_player8_373_13_0, &direction_player8_373_13_0, NULL, &direction_player8_373_13_8, &direction_player8_373_13_8, &direction_player8_373_13_8, &direction_player8_373_13_8, &direction_player8_373_13_8, &direction_player8_373_13_8, &direction_player8_373_13_8, NULL, &direction_player8_373_13_16, &direction_player8_373_13_16, &direction_player8_373_13_16, &direction_player8_373_13_16, &direction_player8_373_13_16, &direction_player8_373_13_16, &direction_player8_373_13_16, NULL, &direction_player8_373_13_24, &direction_player8_373_13_24, &direction_player8_373_13_24, &direction_player8_373_13_24, &direction_player8_373_13_24, &direction_player8_373_13_24, &direction_player8_373_13_24, NULL, &direction_player8_373_13_0, &direction_player8_373_13_0, &direction_player8_373_13_0};
static Image* images_player8_373_14_0[2];
static Direction direction_player8_373_14_0 = {0, 10, 10, 0, -1, images_player8_373_14_0, 2};
static Image* images_player8_373_14_8[2];
static Direction direction_player8_373_14_8 = {8, 10, 10, 0, -1, images_player8_373_14_8, 2};
static Image* images_player8_373_14_16[2];
static Direction direction_player8_373_14_16 = {16, 10, 10, 0, -1, images_player8_373_14_16, 2};
static Image* images_player8_373_14_24[2];
static Direction direction_player8_373_14_24 = {24, 10, 10, 0, -1, images_player8_373_14_24, 2};
static Animation anim_player8_373_14 = {&direction_player8_373_14_0, &direction_player8_373_14_0, &direction_player8_373_14_0, &direction_player8_373_14_0, NULL, &direction_player8_373_14_8, &direction_player8_373_14_8, &direction_player8_373_14_8, &direction_player8_373_14_8, &direction_player8_373_14_8, &direction_player8_373_14_8, &direction_player8_373_14_8, NULL, &direction_player8_373_14_16, &direction_player8_373_14_16, &direction_player8_373_14_16, &direction_player8_373_14_16, &direction_player8_373_14_16, &direction_player8_373_14_16, &direction_player8_373_14_16, NULL, &direction_player8_373_14_24, &direction_player8_373_14_24, &direction_player8_373_14_24, &direction_player8_373_14_24, &direction_player8_373_14_24, &direction_player8_373_14_24, &direction_player8_373_14_24, NULL, &direction_player8_373_14_0, &direction_player8_373_14_0, &direction_player8_373_14_0};
static Image* images_player8_373_15_0[2];
static Direction direction_player8_373_15_0 = {0, 10, 10, 0, -1, images_player8_373_15_0, 2};
static Image* images_player8_373_15_8[2];
static Direction direction_player8_373_15_8 = {8, 10, 10, 0, -1, images_player8_373_15_8, 2};
static Image* images_player8_373_15_16[2];
static Direction direction_player8_373_15_16 = {16, 10, 10, 0, -1, images_player8_373_15_16, 2};
static Image* images_player8_373_15_24[2];
static Direction direction_player8_373_15_24 = {24, 10, 10, 0, -1, images_player8_373_15_24, 2};
static Animation anim_player8_373_15 = {&direction_player8_373_15_0, &direction_player8_373_15_0, &direction_player8_373_15_0, &direction_player8_373_15_0, NULL, &direction_player8_373_15_8, &direction_player8_373_15_8, &direction_player8_373_15_8, &direction_player8_373_15_8, &direction_player8_373_15_8, &direction_player8_373_15_8, &direction_player8_373_15_8, NULL, &direction_player8_373_15_16, &direction_player8_373_15_16, &direction_player8_373_15_16, &direction_player8_373_15_16, &direction_player8_373_15_16, &direction_player8_373_15_16, &direction_player8_373_15_16, NULL, &direction_player8_373_15_24, &direction_player8_373_15_24, &direction_player8_373_15_24, &direction_player8_373_15_24, &direction_player8_373_15_24, &direction_player8_373_15_24, &direction_player8_373_15_24, NULL, &direction_player8_373_15_0, &direction_player8_373_15_0, &direction_player8_373_15_0};
static Image* images_player8_373_16_0[2];
static Direction direction_player8_373_16_0 = {0, 10, 10, 0, -1, images_player8_373_16_0, 2};
static Image* images_player8_373_16_8[2];
static Direction direction_player8_373_16_8 = {8, 10, 10, 0, -1, images_player8_373_16_8, 2};
static Image* images_player8_373_16_16[2];
static Direction direction_player8_373_16_16 = {16, 10, 10, 0, -1, images_player8_373_16_16, 2};
static Image* images_player8_373_16_24[2];
static Direction direction_player8_373_16_24 = {24, 10, 10, 0, -1, images_player8_373_16_24, 2};
static Animation anim_player8_373_16 = {&direction_player8_373_16_0, &direction_player8_373_16_0, &direction_player8_373_16_0, &direction_player8_373_16_0, NULL, &direction_player8_373_16_8, &direction_player8_373_16_8, &direction_player8_373_16_8, &direction_player8_373_16_8, &direction_player8_373_16_8, &direction_player8_373_16_8, &direction_player8_373_16_8, NULL, &direction_player8_373_16_16, &direction_player8_373_16_16, &direction_player8_373_16_16, &direction_player8_373_16_16, &direction_player8_373_16_16, &direction_player8_373_16_16, &direction_player8_373_16_16, NULL, &direction_player8_373_16_24, &direction_player8_373_16_24, &direction_player8_373_16_24, &direction_player8_373_16_24, &direction_player8_373_16_24, &direction_player8_373_16_24, &direction_player8_373_16_24, NULL, &direction_player8_373_16_0, &direction_player8_373_16_0, &direction_player8_373_16_0};
static Image* images_player8_373_17_0[2];
static Direction direction_player8_373_17_0 = {0, 5, 5, 1, -1, images_player8_373_17_0, 2};
static Image* images_player8_373_17_8[2];
static Direction direction_player8_373_17_8 = {8, 5, 5, 1, -1, images_player8_373_17_8, 2};
static Image* images_player8_373_17_16[2];
static Direction direction_player8_373_17_16 = {16, 5, 5, 1, -1, images_player8_373_17_16, 2};
static Image* images_player8_373_17_24[2];
static Direction direction_player8_373_17_24 = {24, 5, 5, 1, -1, images_player8_373_17_24, 2};
static Animation anim_player8_373_17 = {&direction_player8_373_17_0, &direction_player8_373_17_0, &direction_player8_373_17_0, &direction_player8_373_17_0, NULL, &direction_player8_373_17_8, &direction_player8_373_17_8, &direction_player8_373_17_8, &direction_player8_373_17_8, &direction_player8_373_17_8, &direction_player8_373_17_8, &direction_player8_373_17_8, NULL, &direction_player8_373_17_16, &direction_player8_373_17_16, &direction_player8_373_17_16, &direction_player8_373_17_16, &direction_player8_373_17_16, &direction_player8_373_17_16, &direction_player8_373_17_16, NULL, &direction_player8_373_17_24, &direction_player8_373_17_24, &direction_player8_373_17_24, &direction_player8_373_17_24, &direction_player8_373_17_24, &direction_player8_373_17_24, &direction_player8_373_17_24, NULL, &direction_player8_373_17_0, &direction_player8_373_17_0, &direction_player8_373_17_0};
static Image* images_player8_373_18_24[8];
static Direction direction_player8_373_18_24 = {24, 10, 10, 0, -1, images_player8_373_18_24, 8};
static Animation anim_player8_373_18 = {&direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, NULL, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24, &direction_player8_373_18_24};
static Image* images_player8_373_19_24[5];
static Direction direction_player8_373_19_24 = {24, 10, 10, 0, -1, images_player8_373_19_24, 5};
static Animation anim_player8_373_19 = {&direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, NULL, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24, &direction_player8_373_19_24};
static Animation * anim_array_player8_373[20] = {&anim_player8_373_0, NULL, NULL, NULL, &anim_player8_373_4, NULL, &anim_player8_373_6, &anim_player8_373_7, &anim_player8_373_8, &anim_player8_373_9, &anim_player8_373_10, &anim_player8_373_11, &anim_player8_373_12, &anim_player8_373_13, &anim_player8_373_14, &anim_player8_373_15, &anim_player8_373_16, &anim_player8_373_17, &anim_player8_373_18, &anim_player8_373_19};
static Animations anim_player8_373 = {20, &anim_array_player8_373[0]};
static bool anim_player8_373_initialized;
class Player8_373 : public Active
{
public:
    Player8_373(int x, int y) : Active(x, y, Player8_373_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_8", 8);
#endif
        this->animations = &anim_player8_373;
        if (!anim_player8_373_initialized) {
            anim_player8_373_initialized = true;
            images_player8_373_0_0[0] = get_internal_image(570);
            images_player8_373_0_0[1] = get_internal_image(566);
            images_player8_373_0_8[0] = get_internal_image(543);
            images_player8_373_0_8[1] = get_internal_image(544);
            images_player8_373_0_16[0] = get_internal_image(571);
            images_player8_373_0_16[1] = get_internal_image(572);
            images_player8_373_0_24[0] = get_internal_image(541);
            images_player8_373_0_24[1] = get_internal_image(540);
            images_player8_373_4_0[0] = get_internal_image(369);
            images_player8_373_4_0[1] = get_internal_image(373);
            images_player8_373_4_0[2] = get_internal_image(369);
            images_player8_373_4_0[3] = get_internal_image(373);
            images_player8_373_4_16[0] = get_internal_image(371);
            images_player8_373_4_16[1] = get_internal_image(763);
            images_player8_373_4_16[2] = get_internal_image(371);
            images_player8_373_4_16[3] = get_internal_image(763);
            images_player8_373_6_0[0] = get_internal_image(1058);
            images_player8_373_6_8[0] = get_internal_image(1059);
            images_player8_373_6_16[0] = get_internal_image(1060);
            images_player8_373_6_24[0] = get_internal_image(1062);
            images_player8_373_7_0[0] = get_internal_image(2139);
            images_player8_373_7_0[1] = get_internal_image(2159);
            images_player8_373_7_8[0] = get_internal_image(2163);
            images_player8_373_7_8[1] = get_internal_image(2164);
            images_player8_373_7_16[0] = get_internal_image(1426);
            images_player8_373_7_16[1] = get_internal_image(2158);
            images_player8_373_7_24[0] = get_internal_image(2160);
            images_player8_373_7_24[1] = get_internal_image(2162);
            images_player8_373_8_0[0] = get_internal_image(2476);
            images_player8_373_8_24[0] = get_internal_image(1189);
            images_player8_373_9_0[0] = get_internal_image(1497);
            images_player8_373_9_0[1] = get_internal_image(1499);
            images_player8_373_10_0[0] = get_internal_image(547);
            images_player8_373_10_0[1] = get_internal_image(542);
            images_player8_373_10_0[2] = get_internal_image(548);
            images_player8_373_10_0[3] = get_internal_image(2341);
            images_player8_373_10_0[4] = get_internal_image(548);
            images_player8_373_11_0[0] = get_internal_image(1012);
            images_player8_373_11_0[1] = get_internal_image(483);
            images_player8_373_11_8[0] = get_internal_image(584);
            images_player8_373_11_8[1] = get_internal_image(585);
            images_player8_373_11_16[0] = get_internal_image(1017);
            images_player8_373_11_16[1] = get_internal_image(1098);
            images_player8_373_11_24[0] = get_internal_image(320);
            images_player8_373_11_24[1] = get_internal_image(251);
            images_player8_373_12_0[0] = get_internal_image(57);
            images_player8_373_12_0[1] = get_internal_image(796);
            images_player8_373_12_8[0] = get_internal_image(1765);
            images_player8_373_12_8[1] = get_internal_image(1766);
            images_player8_373_12_16[0] = get_internal_image(1011);
            images_player8_373_12_16[1] = get_internal_image(39);
            images_player8_373_12_24[0] = get_internal_image(1780);
            images_player8_373_12_24[1] = get_internal_image(1781);
            images_player8_373_13_0[0] = get_internal_image(1813);
            images_player8_373_13_0[1] = get_internal_image(1811);
            images_player8_373_13_8[0] = get_internal_image(1815);
            images_player8_373_13_8[1] = get_internal_image(1817);
            images_player8_373_13_16[0] = get_internal_image(1812);
            images_player8_373_13_16[1] = get_internal_image(1814);
            images_player8_373_13_24[0] = get_internal_image(1818);
            images_player8_373_13_24[1] = get_internal_image(1816);
            images_player8_373_14_0[0] = get_internal_image(1669);
            images_player8_373_14_0[1] = get_internal_image(1670);
            images_player8_373_14_8[0] = get_internal_image(1676);
            images_player8_373_14_8[1] = get_internal_image(1677);
            images_player8_373_14_16[0] = get_internal_image(1671);
            images_player8_373_14_16[1] = get_internal_image(1673);
            images_player8_373_14_24[0] = get_internal_image(1674);
            images_player8_373_14_24[1] = get_internal_image(1675);
            images_player8_373_15_0[0] = get_internal_image(1736);
            images_player8_373_15_0[1] = get_internal_image(1737);
            images_player8_373_15_8[0] = get_internal_image(1742);
            images_player8_373_15_8[1] = get_internal_image(1744);
            images_player8_373_15_16[0] = get_internal_image(1738);
            images_player8_373_15_16[1] = get_internal_image(1740);
            images_player8_373_15_24[0] = get_internal_image(1741);
            images_player8_373_15_24[1] = get_internal_image(1739);
            images_player8_373_16_0[0] = get_internal_image(1895);
            images_player8_373_16_0[1] = get_internal_image(1898);
            images_player8_373_16_8[0] = get_internal_image(1926);
            images_player8_373_16_8[1] = get_internal_image(1927);
            images_player8_373_16_16[0] = get_internal_image(1900);
            images_player8_373_16_16[1] = get_internal_image(1901);
            images_player8_373_16_24[0] = get_internal_image(1605);
            images_player8_373_16_24[1] = get_internal_image(1606);
            images_player8_373_17_0[0] = get_internal_image(1999);
            images_player8_373_17_0[1] = get_internal_image(1998);
            images_player8_373_17_8[0] = get_internal_image(2005);
            images_player8_373_17_8[1] = get_internal_image(2008);
            images_player8_373_17_16[0] = get_internal_image(2000);
            images_player8_373_17_16[1] = get_internal_image(2001);
            images_player8_373_17_24[0] = get_internal_image(2002);
            images_player8_373_17_24[1] = get_internal_image(2004);
            images_player8_373_18_24[0] = get_internal_image(2078);
            images_player8_373_18_24[1] = get_internal_image(2077);
            images_player8_373_18_24[2] = get_internal_image(2081);
            images_player8_373_18_24[3] = get_internal_image(2079);
            images_player8_373_18_24[4] = get_internal_image(2080);
            images_player8_373_18_24[5] = get_internal_image(2084);
            images_player8_373_18_24[6] = get_internal_image(2081);
            images_player8_373_18_24[7] = get_internal_image(2083);
            images_player8_373_19_24[0] = get_internal_image(2144);
            images_player8_373_19_24[1] = get_internal_image(2143);
            images_player8_373_19_24[2] = get_internal_image(2143);
            images_player8_373_19_24[3] = get_internal_image(2146);
            images_player8_373_19_24[4] = get_internal_image(2146);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player8_373(int x, int y)
{
    return new (Active::pool.create()) Player8_373(x, y);
}
static Image* images_dummies_374_0_0[1];
static Direction direction_dummies_374_0_0 = {0, 50, 50, 0, -1, images_dummies_374_0_0, 1};
static Image* images_dummies_374_0_24[1];
static Direction direction_dummies_374_0_24 = {24, 50, 50, 0, -1, images_dummies_374_0_24, 1};
static Animation anim_dummies_374_0 = {&direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0, NULL, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, &direction_dummies_374_0_24, NULL, &direction_dummies_374_0_0, &direction_dummies_374_0_0, &direction_dummies_374_0_0};
static Animation * anim_array_dummies_374[1] = {&anim_dummies_374_0};
static Animations anim_dummies_374 = {1, &anim_array_dummies_374[0]};
static bool anim_dummies_374_initialized;
class Dummies_374 : public Active
{
public:
    Dummies_374(int x, int y) : Active(x, y, Dummies_374_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Dummies", 7);
#endif
        this->animations = &anim_dummies_374;
        if (!anim_dummies_374_initialized) {
            anim_dummies_374_initialized = true;
            images_dummies_374_0_0[0] = get_internal_image(2455);
            images_dummies_374_0_24[0] = get_internal_image(2375);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_dummies_374(int x, int y)
{
    return new (Active::pool.create()) Dummies_374(x, y);
}
static Image* images_outfitoveralls_375_0_0[2];
static Direction direction_outfitoveralls_375_0_0 = {0, 6, 6, 0, -1, images_outfitoveralls_375_0_0, 2};
static Image* images_outfitoveralls_375_0_8[2];
static Direction direction_outfitoveralls_375_0_8 = {8, 6, 6, 0, -1, images_outfitoveralls_375_0_8, 2};
static Image* images_outfitoveralls_375_0_16[2];
static Direction direction_outfitoveralls_375_0_16 = {16, 6, 6, 0, -1, images_outfitoveralls_375_0_16, 2};
static Image* images_outfitoveralls_375_0_24[2];
static Direction direction_outfitoveralls_375_0_24 = {24, 6, 6, 0, -1, images_outfitoveralls_375_0_24, 2};
static Animation anim_outfitoveralls_375_0 = {&direction_outfitoveralls_375_0_0, &direction_outfitoveralls_375_0_0, &direction_outfitoveralls_375_0_0, &direction_outfitoveralls_375_0_0, NULL, &direction_outfitoveralls_375_0_8, &direction_outfitoveralls_375_0_8, &direction_outfitoveralls_375_0_8, &direction_outfitoveralls_375_0_8, &direction_outfitoveralls_375_0_8, &direction_outfitoveralls_375_0_8, &direction_outfitoveralls_375_0_8, NULL, &direction_outfitoveralls_375_0_16, &direction_outfitoveralls_375_0_16, &direction_outfitoveralls_375_0_16, &direction_outfitoveralls_375_0_16, &direction_outfitoveralls_375_0_16, &direction_outfitoveralls_375_0_16, &direction_outfitoveralls_375_0_16, NULL, &direction_outfitoveralls_375_0_24, &direction_outfitoveralls_375_0_24, &direction_outfitoveralls_375_0_24, &direction_outfitoveralls_375_0_24, &direction_outfitoveralls_375_0_24, &direction_outfitoveralls_375_0_24, &direction_outfitoveralls_375_0_24, NULL, &direction_outfitoveralls_375_0_0, &direction_outfitoveralls_375_0_0, &direction_outfitoveralls_375_0_0};
static Image* images_outfitoveralls_375_6_0[1];
static Direction direction_outfitoveralls_375_6_0 = {0, 6, 6, 0, 1, images_outfitoveralls_375_6_0, 1};
static Image* images_outfitoveralls_375_6_8[1];
static Direction direction_outfitoveralls_375_6_8 = {8, 6, 6, 0, 1, images_outfitoveralls_375_6_8, 1};
static Image* images_outfitoveralls_375_6_16[1];
static Direction direction_outfitoveralls_375_6_16 = {16, 6, 6, 0, 1, images_outfitoveralls_375_6_16, 1};
static Image* images_outfitoveralls_375_6_24[1];
static Direction direction_outfitoveralls_375_6_24 = {24, 6, 6, 0, 1, images_outfitoveralls_375_6_24, 1};
static Animation anim_outfitoveralls_375_6 = {&direction_outfitoveralls_375_6_0, &direction_outfitoveralls_375_6_0, &direction_outfitoveralls_375_6_0, &direction_outfitoveralls_375_6_0, NULL, &direction_outfitoveralls_375_6_8, &direction_outfitoveralls_375_6_8, &direction_outfitoveralls_375_6_8, &direction_outfitoveralls_375_6_8, &direction_outfitoveralls_375_6_8, &direction_outfitoveralls_375_6_8, &direction_outfitoveralls_375_6_8, NULL, &direction_outfitoveralls_375_6_16, &direction_outfitoveralls_375_6_16, &direction_outfitoveralls_375_6_16, &direction_outfitoveralls_375_6_16, &direction_outfitoveralls_375_6_16, &direction_outfitoveralls_375_6_16, &direction_outfitoveralls_375_6_16, NULL, &direction_outfitoveralls_375_6_24, &direction_outfitoveralls_375_6_24, &direction_outfitoveralls_375_6_24, &direction_outfitoveralls_375_6_24, &direction_outfitoveralls_375_6_24, &direction_outfitoveralls_375_6_24, &direction_outfitoveralls_375_6_24, NULL, &direction_outfitoveralls_375_6_0, &direction_outfitoveralls_375_6_0, &direction_outfitoveralls_375_6_0};
static Image* images_outfitoveralls_375_7_0[2];
static Direction direction_outfitoveralls_375_7_0 = {0, 6, 6, 0, -1, images_outfitoveralls_375_7_0, 2};
static Image* images_outfitoveralls_375_7_8[2];
static Direction direction_outfitoveralls_375_7_8 = {8, 6, 6, 0, -1, images_outfitoveralls_375_7_8, 2};
static Image* images_outfitoveralls_375_7_16[2];
static Direction direction_outfitoveralls_375_7_16 = {16, 6, 6, 0, -1, images_outfitoveralls_375_7_16, 2};
static Image* images_outfitoveralls_375_7_24[2];
static Direction direction_outfitoveralls_375_7_24 = {24, 6, 6, 0, -1, images_outfitoveralls_375_7_24, 2};
static Animation anim_outfitoveralls_375_7 = {&direction_outfitoveralls_375_7_0, &direction_outfitoveralls_375_7_0, &direction_outfitoveralls_375_7_0, &direction_outfitoveralls_375_7_0, NULL, &direction_outfitoveralls_375_7_8, &direction_outfitoveralls_375_7_8, &direction_outfitoveralls_375_7_8, &direction_outfitoveralls_375_7_8, &direction_outfitoveralls_375_7_8, &direction_outfitoveralls_375_7_8, &direction_outfitoveralls_375_7_8, NULL, &direction_outfitoveralls_375_7_16, &direction_outfitoveralls_375_7_16, &direction_outfitoveralls_375_7_16, &direction_outfitoveralls_375_7_16, &direction_outfitoveralls_375_7_16, &direction_outfitoveralls_375_7_16, &direction_outfitoveralls_375_7_16, NULL, &direction_outfitoveralls_375_7_24, &direction_outfitoveralls_375_7_24, &direction_outfitoveralls_375_7_24, &direction_outfitoveralls_375_7_24, &direction_outfitoveralls_375_7_24, &direction_outfitoveralls_375_7_24, &direction_outfitoveralls_375_7_24, NULL, &direction_outfitoveralls_375_7_0, &direction_outfitoveralls_375_7_0, &direction_outfitoveralls_375_7_0};
static Image* images_outfitoveralls_375_8_24[1];
static Direction direction_outfitoveralls_375_8_24 = {24, 50, 50, 0, -1, images_outfitoveralls_375_8_24, 1};
static Animation anim_outfitoveralls_375_8 = {&direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, NULL, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24, &direction_outfitoveralls_375_8_24};
static Image* images_outfitoveralls_375_11_0[2];
static Direction direction_outfitoveralls_375_11_0 = {0, 10, 10, 0, -1, images_outfitoveralls_375_11_0, 2};
static Image* images_outfitoveralls_375_11_8[2];
static Direction direction_outfitoveralls_375_11_8 = {8, 10, 10, 0, -1, images_outfitoveralls_375_11_8, 2};
static Image* images_outfitoveralls_375_11_16[2];
static Direction direction_outfitoveralls_375_11_16 = {16, 10, 10, 0, -1, images_outfitoveralls_375_11_16, 2};
static Image* images_outfitoveralls_375_11_24[2];
static Direction direction_outfitoveralls_375_11_24 = {24, 10, 10, 0, -1, images_outfitoveralls_375_11_24, 2};
static Animation anim_outfitoveralls_375_11 = {&direction_outfitoveralls_375_11_0, &direction_outfitoveralls_375_11_0, &direction_outfitoveralls_375_11_0, &direction_outfitoveralls_375_11_0, NULL, &direction_outfitoveralls_375_11_8, &direction_outfitoveralls_375_11_8, &direction_outfitoveralls_375_11_8, &direction_outfitoveralls_375_11_8, &direction_outfitoveralls_375_11_8, &direction_outfitoveralls_375_11_8, &direction_outfitoveralls_375_11_8, NULL, &direction_outfitoveralls_375_11_16, &direction_outfitoveralls_375_11_16, &direction_outfitoveralls_375_11_16, &direction_outfitoveralls_375_11_16, &direction_outfitoveralls_375_11_16, &direction_outfitoveralls_375_11_16, &direction_outfitoveralls_375_11_16, NULL, &direction_outfitoveralls_375_11_24, &direction_outfitoveralls_375_11_24, &direction_outfitoveralls_375_11_24, &direction_outfitoveralls_375_11_24, &direction_outfitoveralls_375_11_24, &direction_outfitoveralls_375_11_24, &direction_outfitoveralls_375_11_24, NULL, &direction_outfitoveralls_375_11_0, &direction_outfitoveralls_375_11_0, &direction_outfitoveralls_375_11_0};
static Image* images_outfitoveralls_375_12_0[2];
static Direction direction_outfitoveralls_375_12_0 = {0, 10, 10, 0, -1, images_outfitoveralls_375_12_0, 2};
static Image* images_outfitoveralls_375_12_16[2];
static Direction direction_outfitoveralls_375_12_16 = {16, 10, 10, 0, -1, images_outfitoveralls_375_12_16, 2};
static Animation anim_outfitoveralls_375_12 = {&direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, NULL, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, &direction_outfitoveralls_375_12_16, NULL, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0, &direction_outfitoveralls_375_12_0};
static Image* images_outfitoveralls_375_13_0[2];
static Direction direction_outfitoveralls_375_13_0 = {0, 10, 10, 0, -1, images_outfitoveralls_375_13_0, 2};
static Image* images_outfitoveralls_375_13_16[2];
static Direction direction_outfitoveralls_375_13_16 = {16, 10, 10, 0, -1, images_outfitoveralls_375_13_16, 2};
static Animation anim_outfitoveralls_375_13 = {&direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, NULL, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, &direction_outfitoveralls_375_13_16, NULL, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0, &direction_outfitoveralls_375_13_0};
static Animation * anim_array_outfitoveralls_375[14] = {&anim_outfitoveralls_375_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitoveralls_375_6, &anim_outfitoveralls_375_7, &anim_outfitoveralls_375_8, NULL, NULL, &anim_outfitoveralls_375_11, &anim_outfitoveralls_375_12, &anim_outfitoveralls_375_13};
static Animations anim_outfitoveralls_375 = {14, &anim_array_outfitoveralls_375[0]};
static bool anim_outfitoveralls_375_initialized;
class OutfitOveralls_375 : public Active
{
public:
    OutfitOveralls_375(int x, int y) : Active(x, y, OutfitOveralls_375_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Overalls", 17);
#endif
        this->animations = &anim_outfitoveralls_375;
        if (!anim_outfitoveralls_375_initialized) {
            anim_outfitoveralls_375_initialized = true;
            images_outfitoveralls_375_0_0[0] = get_internal_image(1249);
            images_outfitoveralls_375_0_0[1] = get_internal_image(1248);
            images_outfitoveralls_375_0_8[0] = get_internal_image(1236);
            images_outfitoveralls_375_0_8[1] = get_internal_image(1246);
            images_outfitoveralls_375_0_16[0] = get_internal_image(1250);
            images_outfitoveralls_375_0_16[1] = get_internal_image(1247);
            images_outfitoveralls_375_0_24[0] = get_internal_image(1244);
            images_outfitoveralls_375_0_24[1] = get_internal_image(1245);
            images_outfitoveralls_375_6_0[0] = get_internal_image(1259);
            images_outfitoveralls_375_6_8[0] = get_internal_image(1258);
            images_outfitoveralls_375_6_16[0] = get_internal_image(1256);
            images_outfitoveralls_375_6_24[0] = get_internal_image(1257);
            images_outfitoveralls_375_7_0[0] = get_internal_image(1263);
            images_outfitoveralls_375_7_0[1] = get_internal_image(1265);
            images_outfitoveralls_375_7_8[0] = get_internal_image(1262);
            images_outfitoveralls_375_7_8[1] = get_internal_image(1261);
            images_outfitoveralls_375_7_16[0] = get_internal_image(1264);
            images_outfitoveralls_375_7_16[1] = get_internal_image(1266);
            images_outfitoveralls_375_7_24[0] = get_internal_image(1260);
            images_outfitoveralls_375_7_24[1] = get_internal_image(1253);
            images_outfitoveralls_375_8_24[0] = get_internal_image(1268);
            images_outfitoveralls_375_11_0[0] = get_internal_image(1273);
            images_outfitoveralls_375_11_0[1] = get_internal_image(1274);
            images_outfitoveralls_375_11_8[0] = get_internal_image(1277);
            images_outfitoveralls_375_11_8[1] = get_internal_image(1276);
            images_outfitoveralls_375_11_16[0] = get_internal_image(1275);
            images_outfitoveralls_375_11_16[1] = get_internal_image(1270);
            images_outfitoveralls_375_11_24[0] = get_internal_image(1278);
            images_outfitoveralls_375_11_24[1] = get_internal_image(1280);
            images_outfitoveralls_375_12_0[0] = get_internal_image(488);
            images_outfitoveralls_375_12_0[1] = get_internal_image(15);
            images_outfitoveralls_375_12_16[0] = get_internal_image(519);
            images_outfitoveralls_375_12_16[1] = get_internal_image(554);
            images_outfitoveralls_375_13_0[0] = get_internal_image(690);
            images_outfitoveralls_375_13_0[1] = get_internal_image(691);
            images_outfitoveralls_375_13_16[0] = get_internal_image(689);
            images_outfitoveralls_375_13_16[1] = get_internal_image(686);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitoveralls_375(int x, int y)
{
    return new (Active::pool.create()) OutfitOveralls_375(x, y);
}
static Image* images_outfitpow_376_0_0[2];
static Direction direction_outfitpow_376_0_0 = {0, 6, 6, 0, -1, images_outfitpow_376_0_0, 2};
static Image* images_outfitpow_376_0_8[2];
static Direction direction_outfitpow_376_0_8 = {8, 6, 6, 0, -1, images_outfitpow_376_0_8, 2};
static Image* images_outfitpow_376_0_16[2];
static Direction direction_outfitpow_376_0_16 = {16, 6, 6, 0, -1, images_outfitpow_376_0_16, 2};
static Image* images_outfitpow_376_0_24[2];
static Direction direction_outfitpow_376_0_24 = {24, 6, 6, 0, -1, images_outfitpow_376_0_24, 2};
static Animation anim_outfitpow_376_0 = {&direction_outfitpow_376_0_0, &direction_outfitpow_376_0_0, &direction_outfitpow_376_0_0, &direction_outfitpow_376_0_0, NULL, &direction_outfitpow_376_0_8, &direction_outfitpow_376_0_8, &direction_outfitpow_376_0_8, &direction_outfitpow_376_0_8, &direction_outfitpow_376_0_8, &direction_outfitpow_376_0_8, &direction_outfitpow_376_0_8, NULL, &direction_outfitpow_376_0_16, &direction_outfitpow_376_0_16, &direction_outfitpow_376_0_16, &direction_outfitpow_376_0_16, &direction_outfitpow_376_0_16, &direction_outfitpow_376_0_16, &direction_outfitpow_376_0_16, NULL, &direction_outfitpow_376_0_24, &direction_outfitpow_376_0_24, &direction_outfitpow_376_0_24, &direction_outfitpow_376_0_24, &direction_outfitpow_376_0_24, &direction_outfitpow_376_0_24, &direction_outfitpow_376_0_24, NULL, &direction_outfitpow_376_0_0, &direction_outfitpow_376_0_0, &direction_outfitpow_376_0_0};
static Image* images_outfitpow_376_6_0[1];
static Direction direction_outfitpow_376_6_0 = {0, 6, 6, 0, 1, images_outfitpow_376_6_0, 1};
static Image* images_outfitpow_376_6_8[1];
static Direction direction_outfitpow_376_6_8 = {8, 6, 6, 0, 1, images_outfitpow_376_6_8, 1};
static Image* images_outfitpow_376_6_16[1];
static Direction direction_outfitpow_376_6_16 = {16, 6, 6, 0, 1, images_outfitpow_376_6_16, 1};
static Image* images_outfitpow_376_6_24[1];
static Direction direction_outfitpow_376_6_24 = {24, 6, 6, 0, 1, images_outfitpow_376_6_24, 1};
static Animation anim_outfitpow_376_6 = {&direction_outfitpow_376_6_0, &direction_outfitpow_376_6_0, &direction_outfitpow_376_6_0, &direction_outfitpow_376_6_0, NULL, &direction_outfitpow_376_6_8, &direction_outfitpow_376_6_8, &direction_outfitpow_376_6_8, &direction_outfitpow_376_6_8, &direction_outfitpow_376_6_8, &direction_outfitpow_376_6_8, &direction_outfitpow_376_6_8, NULL, &direction_outfitpow_376_6_16, &direction_outfitpow_376_6_16, &direction_outfitpow_376_6_16, &direction_outfitpow_376_6_16, &direction_outfitpow_376_6_16, &direction_outfitpow_376_6_16, &direction_outfitpow_376_6_16, NULL, &direction_outfitpow_376_6_24, &direction_outfitpow_376_6_24, &direction_outfitpow_376_6_24, &direction_outfitpow_376_6_24, &direction_outfitpow_376_6_24, &direction_outfitpow_376_6_24, &direction_outfitpow_376_6_24, NULL, &direction_outfitpow_376_6_0, &direction_outfitpow_376_6_0, &direction_outfitpow_376_6_0};
static Image* images_outfitpow_376_7_0[2];
static Direction direction_outfitpow_376_7_0 = {0, 6, 6, 0, -1, images_outfitpow_376_7_0, 2};
static Image* images_outfitpow_376_7_8[2];
static Direction direction_outfitpow_376_7_8 = {8, 6, 6, 0, -1, images_outfitpow_376_7_8, 2};
static Image* images_outfitpow_376_7_16[2];
static Direction direction_outfitpow_376_7_16 = {16, 6, 6, 0, -1, images_outfitpow_376_7_16, 2};
static Image* images_outfitpow_376_7_24[2];
static Direction direction_outfitpow_376_7_24 = {24, 6, 6, 0, -1, images_outfitpow_376_7_24, 2};
static Animation anim_outfitpow_376_7 = {&direction_outfitpow_376_7_0, &direction_outfitpow_376_7_0, &direction_outfitpow_376_7_0, &direction_outfitpow_376_7_0, NULL, &direction_outfitpow_376_7_8, &direction_outfitpow_376_7_8, &direction_outfitpow_376_7_8, &direction_outfitpow_376_7_8, &direction_outfitpow_376_7_8, &direction_outfitpow_376_7_8, &direction_outfitpow_376_7_8, NULL, &direction_outfitpow_376_7_16, &direction_outfitpow_376_7_16, &direction_outfitpow_376_7_16, &direction_outfitpow_376_7_16, &direction_outfitpow_376_7_16, &direction_outfitpow_376_7_16, &direction_outfitpow_376_7_16, NULL, &direction_outfitpow_376_7_24, &direction_outfitpow_376_7_24, &direction_outfitpow_376_7_24, &direction_outfitpow_376_7_24, &direction_outfitpow_376_7_24, &direction_outfitpow_376_7_24, &direction_outfitpow_376_7_24, NULL, &direction_outfitpow_376_7_0, &direction_outfitpow_376_7_0, &direction_outfitpow_376_7_0};
static Image* images_outfitpow_376_8_0[1];
static Direction direction_outfitpow_376_8_0 = {0, 10, 10, 0, -1, images_outfitpow_376_8_0, 1};
static Image* images_outfitpow_376_8_16[2];
static Direction direction_outfitpow_376_8_16 = {16, 5, 5, 0, -1, images_outfitpow_376_8_16, 2};
static Image* images_outfitpow_376_8_24[3];
static Direction direction_outfitpow_376_8_24 = {24, 50, 50, 0, -1, images_outfitpow_376_8_24, 3};
static Animation anim_outfitpow_376_8 = {&direction_outfitpow_376_8_0, &direction_outfitpow_376_8_0, &direction_outfitpow_376_8_0, &direction_outfitpow_376_8_0, &direction_outfitpow_376_8_0, &direction_outfitpow_376_8_0, &direction_outfitpow_376_8_0, &direction_outfitpow_376_8_0, NULL, &direction_outfitpow_376_8_16, &direction_outfitpow_376_8_16, &direction_outfitpow_376_8_16, &direction_outfitpow_376_8_16, &direction_outfitpow_376_8_16, &direction_outfitpow_376_8_16, &direction_outfitpow_376_8_16, &direction_outfitpow_376_8_16, &direction_outfitpow_376_8_16, &direction_outfitpow_376_8_16, &direction_outfitpow_376_8_16, NULL, &direction_outfitpow_376_8_24, &direction_outfitpow_376_8_24, &direction_outfitpow_376_8_24, &direction_outfitpow_376_8_24, &direction_outfitpow_376_8_24, &direction_outfitpow_376_8_24, &direction_outfitpow_376_8_24, NULL, &direction_outfitpow_376_8_0, &direction_outfitpow_376_8_0, &direction_outfitpow_376_8_0};
static Image* images_outfitpow_376_9_0[2];
static Direction direction_outfitpow_376_9_0 = {0, 50, 50, 0, -1, images_outfitpow_376_9_0, 2};
static Animation anim_outfitpow_376_9 = {&direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, NULL, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0, &direction_outfitpow_376_9_0};
static Image* images_outfitpow_376_10_0[5];
static Direction direction_outfitpow_376_10_0 = {0, 10, 10, 0, -1, images_outfitpow_376_10_0, 5};
static Animation anim_outfitpow_376_10 = {&direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, NULL, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0, &direction_outfitpow_376_10_0};
static Image* images_outfitpow_376_11_0[2];
static Direction direction_outfitpow_376_11_0 = {0, 6, 6, 0, -1, images_outfitpow_376_11_0, 2};
static Image* images_outfitpow_376_11_8[2];
static Direction direction_outfitpow_376_11_8 = {8, 6, 6, 0, -1, images_outfitpow_376_11_8, 2};
static Image* images_outfitpow_376_11_16[2];
static Direction direction_outfitpow_376_11_16 = {16, 6, 6, 0, -1, images_outfitpow_376_11_16, 2};
static Image* images_outfitpow_376_11_24[2];
static Direction direction_outfitpow_376_11_24 = {24, 6, 6, 0, -1, images_outfitpow_376_11_24, 2};
static Animation anim_outfitpow_376_11 = {&direction_outfitpow_376_11_0, &direction_outfitpow_376_11_0, &direction_outfitpow_376_11_0, &direction_outfitpow_376_11_0, NULL, &direction_outfitpow_376_11_8, &direction_outfitpow_376_11_8, &direction_outfitpow_376_11_8, &direction_outfitpow_376_11_8, &direction_outfitpow_376_11_8, &direction_outfitpow_376_11_8, &direction_outfitpow_376_11_8, NULL, &direction_outfitpow_376_11_16, &direction_outfitpow_376_11_16, &direction_outfitpow_376_11_16, &direction_outfitpow_376_11_16, &direction_outfitpow_376_11_16, &direction_outfitpow_376_11_16, &direction_outfitpow_376_11_16, NULL, &direction_outfitpow_376_11_24, &direction_outfitpow_376_11_24, &direction_outfitpow_376_11_24, &direction_outfitpow_376_11_24, &direction_outfitpow_376_11_24, &direction_outfitpow_376_11_24, &direction_outfitpow_376_11_24, NULL, &direction_outfitpow_376_11_0, &direction_outfitpow_376_11_0, &direction_outfitpow_376_11_0};
static Image* images_outfitpow_376_12_0[2];
static Direction direction_outfitpow_376_12_0 = {0, 50, 50, 0, -1, images_outfitpow_376_12_0, 2};
static Image* images_outfitpow_376_12_8[2];
static Direction direction_outfitpow_376_12_8 = {8, 10, 10, 0, -1, images_outfitpow_376_12_8, 2};
static Image* images_outfitpow_376_12_16[2];
static Direction direction_outfitpow_376_12_16 = {16, 50, 50, 0, -1, images_outfitpow_376_12_16, 2};
static Image* images_outfitpow_376_12_24[2];
static Direction direction_outfitpow_376_12_24 = {24, 10, 10, 0, -1, images_outfitpow_376_12_24, 2};
static Animation anim_outfitpow_376_12 = {&direction_outfitpow_376_12_0, &direction_outfitpow_376_12_0, &direction_outfitpow_376_12_0, &direction_outfitpow_376_12_0, NULL, &direction_outfitpow_376_12_8, &direction_outfitpow_376_12_8, &direction_outfitpow_376_12_8, &direction_outfitpow_376_12_8, &direction_outfitpow_376_12_8, &direction_outfitpow_376_12_8, &direction_outfitpow_376_12_8, NULL, &direction_outfitpow_376_12_16, &direction_outfitpow_376_12_16, &direction_outfitpow_376_12_16, &direction_outfitpow_376_12_16, &direction_outfitpow_376_12_16, &direction_outfitpow_376_12_16, &direction_outfitpow_376_12_16, NULL, &direction_outfitpow_376_12_24, &direction_outfitpow_376_12_24, &direction_outfitpow_376_12_24, &direction_outfitpow_376_12_24, &direction_outfitpow_376_12_24, &direction_outfitpow_376_12_24, &direction_outfitpow_376_12_24, NULL, &direction_outfitpow_376_12_0, &direction_outfitpow_376_12_0, &direction_outfitpow_376_12_0};
static Image* images_outfitpow_376_13_0[2];
static Direction direction_outfitpow_376_13_0 = {0, 10, 10, 0, -1, images_outfitpow_376_13_0, 2};
static Image* images_outfitpow_376_13_8[2];
static Direction direction_outfitpow_376_13_8 = {8, 10, 10, 0, -1, images_outfitpow_376_13_8, 2};
static Image* images_outfitpow_376_13_16[2];
static Direction direction_outfitpow_376_13_16 = {16, 10, 10, 0, -1, images_outfitpow_376_13_16, 2};
static Image* images_outfitpow_376_13_24[2];
static Direction direction_outfitpow_376_13_24 = {24, 10, 10, 0, -1, images_outfitpow_376_13_24, 2};
static Animation anim_outfitpow_376_13 = {&direction_outfitpow_376_13_0, &direction_outfitpow_376_13_0, &direction_outfitpow_376_13_0, &direction_outfitpow_376_13_0, NULL, &direction_outfitpow_376_13_8, &direction_outfitpow_376_13_8, &direction_outfitpow_376_13_8, &direction_outfitpow_376_13_8, &direction_outfitpow_376_13_8, &direction_outfitpow_376_13_8, &direction_outfitpow_376_13_8, NULL, &direction_outfitpow_376_13_16, &direction_outfitpow_376_13_16, &direction_outfitpow_376_13_16, &direction_outfitpow_376_13_16, &direction_outfitpow_376_13_16, &direction_outfitpow_376_13_16, &direction_outfitpow_376_13_16, NULL, &direction_outfitpow_376_13_24, &direction_outfitpow_376_13_24, &direction_outfitpow_376_13_24, &direction_outfitpow_376_13_24, &direction_outfitpow_376_13_24, &direction_outfitpow_376_13_24, &direction_outfitpow_376_13_24, NULL, &direction_outfitpow_376_13_0, &direction_outfitpow_376_13_0, &direction_outfitpow_376_13_0};
static Image* images_outfitpow_376_14_0[2];
static Direction direction_outfitpow_376_14_0 = {0, 10, 10, 0, -1, images_outfitpow_376_14_0, 2};
static Image* images_outfitpow_376_14_8[2];
static Direction direction_outfitpow_376_14_8 = {8, 10, 10, 0, -1, images_outfitpow_376_14_8, 2};
static Image* images_outfitpow_376_14_16[2];
static Direction direction_outfitpow_376_14_16 = {16, 10, 10, 0, -1, images_outfitpow_376_14_16, 2};
static Image* images_outfitpow_376_14_24[2];
static Direction direction_outfitpow_376_14_24 = {24, 10, 10, 0, -1, images_outfitpow_376_14_24, 2};
static Animation anim_outfitpow_376_14 = {&direction_outfitpow_376_14_0, &direction_outfitpow_376_14_0, &direction_outfitpow_376_14_0, &direction_outfitpow_376_14_0, NULL, &direction_outfitpow_376_14_8, &direction_outfitpow_376_14_8, &direction_outfitpow_376_14_8, &direction_outfitpow_376_14_8, &direction_outfitpow_376_14_8, &direction_outfitpow_376_14_8, &direction_outfitpow_376_14_8, NULL, &direction_outfitpow_376_14_16, &direction_outfitpow_376_14_16, &direction_outfitpow_376_14_16, &direction_outfitpow_376_14_16, &direction_outfitpow_376_14_16, &direction_outfitpow_376_14_16, &direction_outfitpow_376_14_16, NULL, &direction_outfitpow_376_14_24, &direction_outfitpow_376_14_24, &direction_outfitpow_376_14_24, &direction_outfitpow_376_14_24, &direction_outfitpow_376_14_24, &direction_outfitpow_376_14_24, &direction_outfitpow_376_14_24, NULL, &direction_outfitpow_376_14_0, &direction_outfitpow_376_14_0, &direction_outfitpow_376_14_0};
static Image* images_outfitpow_376_15_0[2];
static Direction direction_outfitpow_376_15_0 = {0, 10, 10, 0, -1, images_outfitpow_376_15_0, 2};
static Image* images_outfitpow_376_15_8[2];
static Direction direction_outfitpow_376_15_8 = {8, 10, 10, 0, -1, images_outfitpow_376_15_8, 2};
static Image* images_outfitpow_376_15_16[2];
static Direction direction_outfitpow_376_15_16 = {16, 10, 10, 0, -1, images_outfitpow_376_15_16, 2};
static Image* images_outfitpow_376_15_24[2];
static Direction direction_outfitpow_376_15_24 = {24, 10, 10, 0, -1, images_outfitpow_376_15_24, 2};
static Animation anim_outfitpow_376_15 = {&direction_outfitpow_376_15_0, &direction_outfitpow_376_15_0, &direction_outfitpow_376_15_0, &direction_outfitpow_376_15_0, NULL, &direction_outfitpow_376_15_8, &direction_outfitpow_376_15_8, &direction_outfitpow_376_15_8, &direction_outfitpow_376_15_8, &direction_outfitpow_376_15_8, &direction_outfitpow_376_15_8, &direction_outfitpow_376_15_8, NULL, &direction_outfitpow_376_15_16, &direction_outfitpow_376_15_16, &direction_outfitpow_376_15_16, &direction_outfitpow_376_15_16, &direction_outfitpow_376_15_16, &direction_outfitpow_376_15_16, &direction_outfitpow_376_15_16, NULL, &direction_outfitpow_376_15_24, &direction_outfitpow_376_15_24, &direction_outfitpow_376_15_24, &direction_outfitpow_376_15_24, &direction_outfitpow_376_15_24, &direction_outfitpow_376_15_24, &direction_outfitpow_376_15_24, NULL, &direction_outfitpow_376_15_0, &direction_outfitpow_376_15_0, &direction_outfitpow_376_15_0};
static Image* images_outfitpow_376_16_0[2];
static Direction direction_outfitpow_376_16_0 = {0, 10, 10, 0, -1, images_outfitpow_376_16_0, 2};
static Image* images_outfitpow_376_16_8[2];
static Direction direction_outfitpow_376_16_8 = {8, 10, 10, 0, -1, images_outfitpow_376_16_8, 2};
static Image* images_outfitpow_376_16_16[2];
static Direction direction_outfitpow_376_16_16 = {16, 10, 10, 0, -1, images_outfitpow_376_16_16, 2};
static Image* images_outfitpow_376_16_24[2];
static Direction direction_outfitpow_376_16_24 = {24, 10, 10, 0, -1, images_outfitpow_376_16_24, 2};
static Animation anim_outfitpow_376_16 = {&direction_outfitpow_376_16_0, &direction_outfitpow_376_16_0, &direction_outfitpow_376_16_0, &direction_outfitpow_376_16_0, NULL, &direction_outfitpow_376_16_8, &direction_outfitpow_376_16_8, &direction_outfitpow_376_16_8, &direction_outfitpow_376_16_8, &direction_outfitpow_376_16_8, &direction_outfitpow_376_16_8, &direction_outfitpow_376_16_8, NULL, &direction_outfitpow_376_16_16, &direction_outfitpow_376_16_16, &direction_outfitpow_376_16_16, &direction_outfitpow_376_16_16, &direction_outfitpow_376_16_16, &direction_outfitpow_376_16_16, &direction_outfitpow_376_16_16, NULL, &direction_outfitpow_376_16_24, &direction_outfitpow_376_16_24, &direction_outfitpow_376_16_24, &direction_outfitpow_376_16_24, &direction_outfitpow_376_16_24, &direction_outfitpow_376_16_24, &direction_outfitpow_376_16_24, NULL, &direction_outfitpow_376_16_0, &direction_outfitpow_376_16_0, &direction_outfitpow_376_16_0};
static Image* images_outfitpow_376_17_0[2];
static Direction direction_outfitpow_376_17_0 = {0, 5, 5, 1, -1, images_outfitpow_376_17_0, 2};
static Image* images_outfitpow_376_17_8[2];
static Direction direction_outfitpow_376_17_8 = {8, 5, 5, 1, -1, images_outfitpow_376_17_8, 2};
static Image* images_outfitpow_376_17_16[2];
static Direction direction_outfitpow_376_17_16 = {16, 5, 5, 1, -1, images_outfitpow_376_17_16, 2};
static Image* images_outfitpow_376_17_24[2];
static Direction direction_outfitpow_376_17_24 = {24, 5, 5, 1, -1, images_outfitpow_376_17_24, 2};
static Animation anim_outfitpow_376_17 = {&direction_outfitpow_376_17_0, &direction_outfitpow_376_17_0, &direction_outfitpow_376_17_0, &direction_outfitpow_376_17_0, NULL, &direction_outfitpow_376_17_8, &direction_outfitpow_376_17_8, &direction_outfitpow_376_17_8, &direction_outfitpow_376_17_8, &direction_outfitpow_376_17_8, &direction_outfitpow_376_17_8, &direction_outfitpow_376_17_8, NULL, &direction_outfitpow_376_17_16, &direction_outfitpow_376_17_16, &direction_outfitpow_376_17_16, &direction_outfitpow_376_17_16, &direction_outfitpow_376_17_16, &direction_outfitpow_376_17_16, &direction_outfitpow_376_17_16, NULL, &direction_outfitpow_376_17_24, &direction_outfitpow_376_17_24, &direction_outfitpow_376_17_24, &direction_outfitpow_376_17_24, &direction_outfitpow_376_17_24, &direction_outfitpow_376_17_24, &direction_outfitpow_376_17_24, NULL, &direction_outfitpow_376_17_0, &direction_outfitpow_376_17_0, &direction_outfitpow_376_17_0};
static Image* images_outfitpow_376_18_24[8];
static Direction direction_outfitpow_376_18_24 = {24, 25, 25, 0, -1, images_outfitpow_376_18_24, 8};
static Animation anim_outfitpow_376_18 = {&direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, NULL, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24, &direction_outfitpow_376_18_24};
static Image* images_outfitpow_376_19_24[5];
static Direction direction_outfitpow_376_19_24 = {24, 10, 10, 0, -1, images_outfitpow_376_19_24, 5};
static Animation anim_outfitpow_376_19 = {&direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, NULL, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24, &direction_outfitpow_376_19_24};
static Animation * anim_array_outfitpow_376[20] = {&anim_outfitpow_376_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitpow_376_6, &anim_outfitpow_376_7, &anim_outfitpow_376_8, &anim_outfitpow_376_9, &anim_outfitpow_376_10, &anim_outfitpow_376_11, &anim_outfitpow_376_12, &anim_outfitpow_376_13, &anim_outfitpow_376_14, &anim_outfitpow_376_15, &anim_outfitpow_376_16, &anim_outfitpow_376_17, &anim_outfitpow_376_18, &anim_outfitpow_376_19};
static Animations anim_outfitpow_376 = {20, &anim_array_outfitpow_376[0]};
static bool anim_outfitpow_376_initialized;
class OutfitPOW_376 : public Active
{
public:
    OutfitPOW_376(int x, int y) : Active(x, y, OutfitPOW_376_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - POW", 12);
#endif
        this->animations = &anim_outfitpow_376;
        if (!anim_outfitpow_376_initialized) {
            anim_outfitpow_376_initialized = true;
            images_outfitpow_376_0_0[0] = get_internal_image(278);
            images_outfitpow_376_0_0[1] = get_internal_image(265);
            images_outfitpow_376_0_8[0] = get_internal_image(269);
            images_outfitpow_376_0_8[1] = get_internal_image(138);
            images_outfitpow_376_0_16[0] = get_internal_image(240);
            images_outfitpow_376_0_16[1] = get_internal_image(140);
            images_outfitpow_376_0_24[0] = get_internal_image(143);
            images_outfitpow_376_0_24[1] = get_internal_image(149);
            images_outfitpow_376_6_0[0] = get_internal_image(119);
            images_outfitpow_376_6_8[0] = get_internal_image(90);
            images_outfitpow_376_6_16[0] = get_internal_image(120);
            images_outfitpow_376_6_24[0] = get_internal_image(115);
            images_outfitpow_376_7_0[0] = get_internal_image(113);
            images_outfitpow_376_7_0[1] = get_internal_image(294);
            images_outfitpow_376_7_8[0] = get_internal_image(274);
            images_outfitpow_376_7_8[1] = get_internal_image(291);
            images_outfitpow_376_7_16[0] = get_internal_image(298);
            images_outfitpow_376_7_16[1] = get_internal_image(303);
            images_outfitpow_376_7_24[0] = get_internal_image(124);
            images_outfitpow_376_7_24[1] = get_internal_image(136);
            images_outfitpow_376_8_0[0] = get_internal_image(2488);
            images_outfitpow_376_8_16[0] = get_internal_image(1090);
            images_outfitpow_376_8_16[1] = get_internal_image(1104);
            images_outfitpow_376_8_24[0] = get_internal_image(296);
            images_outfitpow_376_8_24[1] = get_internal_image(296);
            images_outfitpow_376_8_24[2] = get_internal_image(296);
            images_outfitpow_376_9_0[0] = get_internal_image(308);
            images_outfitpow_376_9_0[1] = get_internal_image(980);
            images_outfitpow_376_10_0[0] = get_internal_image(1234);
            images_outfitpow_376_10_0[1] = get_internal_image(304);
            images_outfitpow_376_10_0[2] = get_internal_image(1237);
            images_outfitpow_376_10_0[3] = get_internal_image(1238);
            images_outfitpow_376_10_0[4] = get_internal_image(1237);
            images_outfitpow_376_11_0[0] = get_internal_image(1474);
            images_outfitpow_376_11_0[1] = get_internal_image(1284);
            images_outfitpow_376_11_8[0] = get_internal_image(1288);
            images_outfitpow_376_11_8[1] = get_internal_image(1305);
            images_outfitpow_376_11_16[0] = get_internal_image(1282);
            images_outfitpow_376_11_16[1] = get_internal_image(1289);
            images_outfitpow_376_11_24[0] = get_internal_image(1281);
            images_outfitpow_376_11_24[1] = get_internal_image(1279);
            images_outfitpow_376_12_0[0] = get_internal_image(1507);
            images_outfitpow_376_12_0[1] = get_internal_image(1532);
            images_outfitpow_376_12_8[0] = get_internal_image(1928);
            images_outfitpow_376_12_8[1] = get_internal_image(1930);
            images_outfitpow_376_12_16[0] = get_internal_image(1524);
            images_outfitpow_376_12_16[1] = get_internal_image(1535);
            images_outfitpow_376_12_24[0] = get_internal_image(1931);
            images_outfitpow_376_12_24[1] = get_internal_image(1932);
            images_outfitpow_376_13_0[0] = get_internal_image(1929);
            images_outfitpow_376_13_0[1] = get_internal_image(1934);
            images_outfitpow_376_13_8[0] = get_internal_image(1940);
            images_outfitpow_376_13_8[1] = get_internal_image(1939);
            images_outfitpow_376_13_16[0] = get_internal_image(1933);
            images_outfitpow_376_13_16[1] = get_internal_image(1935);
            images_outfitpow_376_13_24[0] = get_internal_image(1937);
            images_outfitpow_376_13_24[1] = get_internal_image(1936);
            images_outfitpow_376_14_0[0] = get_internal_image(1941);
            images_outfitpow_376_14_0[1] = get_internal_image(1944);
            images_outfitpow_376_14_8[0] = get_internal_image(1942);
            images_outfitpow_376_14_8[1] = get_internal_image(1945);
            images_outfitpow_376_14_16[0] = get_internal_image(1947);
            images_outfitpow_376_14_16[1] = get_internal_image(1946);
            images_outfitpow_376_14_24[0] = get_internal_image(1938);
            images_outfitpow_376_14_24[1] = get_internal_image(1621);
            images_outfitpow_376_15_0[0] = get_internal_image(1950);
            images_outfitpow_376_15_0[1] = get_internal_image(1955);
            images_outfitpow_376_15_8[0] = get_internal_image(1949);
            images_outfitpow_376_15_8[1] = get_internal_image(1943);
            images_outfitpow_376_15_16[0] = get_internal_image(1954);
            images_outfitpow_376_15_16[1] = get_internal_image(1953);
            images_outfitpow_376_15_24[0] = get_internal_image(1952);
            images_outfitpow_376_15_24[1] = get_internal_image(1948);
            images_outfitpow_376_16_0[0] = get_internal_image(1929);
            images_outfitpow_376_16_0[1] = get_internal_image(1934);
            images_outfitpow_376_16_8[0] = get_internal_image(1940);
            images_outfitpow_376_16_8[1] = get_internal_image(1939);
            images_outfitpow_376_16_16[0] = get_internal_image(1933);
            images_outfitpow_376_16_16[1] = get_internal_image(1935);
            images_outfitpow_376_16_24[0] = get_internal_image(1937);
            images_outfitpow_376_16_24[1] = get_internal_image(1936);
            images_outfitpow_376_17_0[0] = get_internal_image(2054);
            images_outfitpow_376_17_0[1] = get_internal_image(2060);
            images_outfitpow_376_17_8[0] = get_internal_image(2057);
            images_outfitpow_376_17_8[1] = get_internal_image(2058);
            images_outfitpow_376_17_16[0] = get_internal_image(2051);
            images_outfitpow_376_17_16[1] = get_internal_image(2053);
            images_outfitpow_376_17_24[0] = get_internal_image(2055);
            images_outfitpow_376_17_24[1] = get_internal_image(2056);
            images_outfitpow_376_18_24[0] = get_internal_image(2192);
            images_outfitpow_376_18_24[1] = get_internal_image(2193);
            images_outfitpow_376_18_24[2] = get_internal_image(2184);
            images_outfitpow_376_18_24[3] = get_internal_image(2195);
            images_outfitpow_376_18_24[4] = get_internal_image(2191);
            images_outfitpow_376_18_24[5] = get_internal_image(2201);
            images_outfitpow_376_18_24[6] = get_internal_image(436);
            images_outfitpow_376_18_24[7] = get_internal_image(2183);
            images_outfitpow_376_19_24[0] = get_internal_image(2412);
            images_outfitpow_376_19_24[1] = get_internal_image(2421);
            images_outfitpow_376_19_24[2] = get_internal_image(2421);
            images_outfitpow_376_19_24[3] = get_internal_image(2420);
            images_outfitpow_376_19_24[4] = get_internal_image(2420);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitpow_376(int x, int y)
{
    return new (Active::pool.create()) OutfitPOW_376(x, y);
}
static Image* images_fire_377_0_0[4];
static Direction direction_fire_377_0_0 = {0, 20, 20, 0, -1, images_fire_377_0_0, 4};
static Animation anim_fire_377_0 = {&direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, NULL, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0, &direction_fire_377_0_0};
static Animation * anim_array_fire_377[1] = {&anim_fire_377_0};
static Animations anim_fire_377 = {1, &anim_array_fire_377[0]};
static bool anim_fire_377_initialized;
class Fire_377 : public Active
{
public:
    Fire_377(int x, int y) : Active(x, y, Fire_377_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Fire", 4);
#endif
        this->animations = &anim_fire_377;
        if (!anim_fire_377_initialized) {
            anim_fire_377_initialized = true;
            images_fire_377_0_0[0] = get_internal_image(1302);
            images_fire_377_0_0[1] = get_internal_image(1297);
            images_fire_377_0_0[2] = get_internal_image(1294);
            images_fire_377_0_0[3] = get_internal_image(1296);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 205);
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 500);
        alterables->values.set(2, 3);
        alterables->values.set(3, 1);
    }
};
FrameObject * create_fire_377(int x, int y)
{
    return new (Active::pool.create()) Fire_377(x, y);
}
static Image* images_usespot2_378_0_0[1];
static Direction direction_usespot2_378_0_0 = {0, 5, 5, 0, -1, images_usespot2_378_0_0, 1};
static Animation anim_usespot2_378_0 = {&direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, NULL, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0, &direction_usespot2_378_0_0};
static Animation * anim_array_usespot2_378[1] = {&anim_usespot2_378_0};
static Animations anim_usespot2_378 = {1, &anim_array_usespot2_378[0]};
static bool anim_usespot2_378_initialized;
class UseSpot2_378 : public Active
{
public:
    UseSpot2_378(int x, int y) : Active(x, y, UseSpot2_378_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("UseSpot 2", 9);
#endif
        set_visible(false);
        this->animations = &anim_usespot2_378;
        if (!anim_usespot2_378_initialized) {
            anim_usespot2_378_initialized = true;
            images_usespot2_378_0_0[0] = get_internal_image(1287);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_usespot2_378(int x, int y)
{
    return new (Active::pool.create()) UseSpot2_378(x, y);
}
static Image* images_hiding_379_0_8[1];
static Direction direction_hiding_379_0_8 = {8, 50, 50, 0, -1, images_hiding_379_0_8, 1};
static Animation anim_hiding_379_0 = {&direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, NULL, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8, &direction_hiding_379_0_8};
static Image* images_hiding_379_5_8[1];
static Direction direction_hiding_379_5_8 = {8, 50, 50, 0, -1, images_hiding_379_5_8, 1};
static Animation anim_hiding_379_5 = {&direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, NULL, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8, &direction_hiding_379_5_8};
static Animation * anim_array_hiding_379[6] = {&anim_hiding_379_0, NULL, NULL, NULL, NULL, &anim_hiding_379_5};
static Animations anim_hiding_379 = {6, &anim_array_hiding_379[0]};
static bool anim_hiding_379_initialized;
class Hiding_379 : public Active
{
public:
    Hiding_379(int x, int y) : Active(x, y, Hiding_379_type)
    {
        // qualifiers: 28, 88
#ifndef NDEBUG
        name = std::string("Hiding", 6);
#endif
        this->animations = &anim_hiding_379;
        if (!anim_hiding_379_initialized) {
            anim_hiding_379_initialized = true;
            images_hiding_379_0_8[0] = get_internal_image(868);
            images_hiding_379_5_8[0] = get_internal_image(994);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_hiding_379(int x, int y)
{
    return new (Active::pool.create()) Hiding_379(x, y);
}
static Image* images_interwebs_380_0_0[1];
static Direction direction_interwebs_380_0_0 = {0, 50, 50, 0, -1, images_interwebs_380_0_0, 1};
static Animation anim_interwebs_380_0 = {&direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, NULL, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0, &direction_interwebs_380_0_0};
static Animation * anim_array_interwebs_380[1] = {&anim_interwebs_380_0};
static Animations anim_interwebs_380 = {1, &anim_array_interwebs_380[0]};
static bool anim_interwebs_380_initialized;
class Interwebs_380 : public Active
{
public:
    Interwebs_380(int x, int y) : Active(x, y, Interwebs_380_type)
    {
        // qualifiers: 62, 80, 88
#ifndef NDEBUG
        name = std::string("Interwebs", 9);
#endif
        this->animations = &anim_interwebs_380;
        if (!anim_interwebs_380_initialized) {
            anim_interwebs_380_initialized = true;
            images_interwebs_380_0_0[0] = get_internal_image(1290);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_interwebs_380(int x, int y)
{
    return new (Active::pool.create()) Interwebs_380(x, y);
}
static Image* images_visitationvisitor_381_0_8[1];
static Direction direction_visitationvisitor_381_0_8 = {8, 50, 50, 0, -1, images_visitationvisitor_381_0_8, 1};
static Animation anim_visitationvisitor_381_0 = {&direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, NULL, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8, &direction_visitationvisitor_381_0_8};
static Animation * anim_array_visitationvisitor_381[1] = {&anim_visitationvisitor_381_0};
static Animations anim_visitationvisitor_381 = {1, &anim_array_visitationvisitor_381[0]};
static bool anim_visitationvisitor_381_initialized;
class VisitationVisitor_381 : public Active
{
public:
    VisitationVisitor_381(int x, int y) : Active(x, y, VisitationVisitor_381_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Visitation - Visitor", 20);
#endif
        this->animations = &anim_visitationvisitor_381;
        if (!anim_visitationvisitor_381_initialized) {
            anim_visitationvisitor_381_initialized = true;
            images_visitationvisitor_381_0_8[0] = get_internal_image(921);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_visitationvisitor_381(int x, int y)
{
    return new (Active::pool.create()) VisitationVisitor_381(x, y);
}
static Image* images_visitationinmate_382_0_8[1];
static Direction direction_visitationinmate_382_0_8 = {8, 50, 50, 0, -1, images_visitationinmate_382_0_8, 1};
static Animation anim_visitationinmate_382_0 = {&direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, NULL, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8, &direction_visitationinmate_382_0_8};
static Animation * anim_array_visitationinmate_382[1] = {&anim_visitationinmate_382_0};
static Animations anim_visitationinmate_382 = {1, &anim_array_visitationinmate_382[0]};
static bool anim_visitationinmate_382_initialized;
class VisitationInmate_382 : public Active
{
public:
    VisitationInmate_382(int x, int y) : Active(x, y, VisitationInmate_382_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Visitation - Inmate", 19);
#endif
        this->animations = &anim_visitationinmate_382;
        if (!anim_visitationinmate_382_initialized) {
            anim_visitationinmate_382_initialized = true;
            images_visitationinmate_382_0_8[0] = get_internal_image(921);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_visitationinmate_382(int x, int y)
{
    return new (Active::pool.create()) VisitationInmate_382(x, y);
}
static Image* images_serviceNpc_0_0[2];
static Direction direction_serviceNpc_0_0 = {0, 8, 8, 0, -1, images_serviceNpc_0_0, 2};
static Image* images_serviceNpc_0_8[2];
static Direction direction_serviceNpc_0_8 = {8, 8, 8, 0, -1, images_serviceNpc_0_8, 2};
static Image* images_serviceNpc_0_16[2];
static Direction direction_serviceNpc_0_16 = {16, 8, 8, 0, -1, images_serviceNpc_0_16, 2};
static Image* images_serviceNpc_0_24[2];
static Direction direction_serviceNpc_0_24 = {24, 8, 8, 0, -1, images_serviceNpc_0_24, 2};
static Animation anim_serviceNpc_0 = {&direction_serviceNpc_0_0, &direction_serviceNpc_0_0, &direction_serviceNpc_0_0, &direction_serviceNpc_0_0, NULL, &direction_serviceNpc_0_8, &direction_serviceNpc_0_8, &direction_serviceNpc_0_8, &direction_serviceNpc_0_8, &direction_serviceNpc_0_8, &direction_serviceNpc_0_8, &direction_serviceNpc_0_8, NULL, &direction_serviceNpc_0_16, &direction_serviceNpc_0_16, &direction_serviceNpc_0_16, &direction_serviceNpc_0_16, &direction_serviceNpc_0_16, &direction_serviceNpc_0_16, &direction_serviceNpc_0_16, NULL, &direction_serviceNpc_0_24, &direction_serviceNpc_0_24, &direction_serviceNpc_0_24, &direction_serviceNpc_0_24, &direction_serviceNpc_0_24, &direction_serviceNpc_0_24, &direction_serviceNpc_0_24, NULL, &direction_serviceNpc_0_0, &direction_serviceNpc_0_0, &direction_serviceNpc_0_0};
static Image* images_serviceNpc_1_0[2];
static Direction direction_serviceNpc_1_0 = {0, 10, 10, 0, -1, images_serviceNpc_1_0, 2};
static Image* images_serviceNpc_1_8[2];
static Direction direction_serviceNpc_1_8 = {8, 10, 10, 0, -1, images_serviceNpc_1_8, 2};
static Image* images_serviceNpc_1_16[2];
static Direction direction_serviceNpc_1_16 = {16, 10, 10, 0, -1, images_serviceNpc_1_16, 2};
static Image* images_serviceNpc_1_24[2];
static Direction direction_serviceNpc_1_24 = {24, 10, 10, 0, -1, images_serviceNpc_1_24, 2};
static Animation anim_serviceNpc_1 = {&direction_serviceNpc_1_0, &direction_serviceNpc_1_0, &direction_serviceNpc_1_0, &direction_serviceNpc_1_0, NULL, &direction_serviceNpc_1_8, &direction_serviceNpc_1_8, &direction_serviceNpc_1_8, &direction_serviceNpc_1_8, &direction_serviceNpc_1_8, &direction_serviceNpc_1_8, &direction_serviceNpc_1_8, NULL, &direction_serviceNpc_1_16, &direction_serviceNpc_1_16, &direction_serviceNpc_1_16, &direction_serviceNpc_1_16, &direction_serviceNpc_1_16, &direction_serviceNpc_1_16, &direction_serviceNpc_1_16, NULL, &direction_serviceNpc_1_24, &direction_serviceNpc_1_24, &direction_serviceNpc_1_24, &direction_serviceNpc_1_24, &direction_serviceNpc_1_24, &direction_serviceNpc_1_24, &direction_serviceNpc_1_24, NULL, &direction_serviceNpc_1_0, &direction_serviceNpc_1_0, &direction_serviceNpc_1_0};
static Image* images_serviceNpc_2_0[2];
static Direction direction_serviceNpc_2_0 = {0, 10, 10, 0, -1, images_serviceNpc_2_0, 2};
static Image* images_serviceNpc_2_8[2];
static Direction direction_serviceNpc_2_8 = {8, 10, 10, 0, -1, images_serviceNpc_2_8, 2};
static Image* images_serviceNpc_2_16[2];
static Direction direction_serviceNpc_2_16 = {16, 10, 10, 0, -1, images_serviceNpc_2_16, 2};
static Image* images_serviceNpc_2_24[2];
static Direction direction_serviceNpc_2_24 = {24, 10, 10, 0, -1, images_serviceNpc_2_24, 2};
static Animation anim_serviceNpc_2 = {&direction_serviceNpc_2_0, &direction_serviceNpc_2_0, &direction_serviceNpc_2_0, &direction_serviceNpc_2_0, NULL, &direction_serviceNpc_2_8, &direction_serviceNpc_2_8, &direction_serviceNpc_2_8, &direction_serviceNpc_2_8, &direction_serviceNpc_2_8, &direction_serviceNpc_2_8, &direction_serviceNpc_2_8, NULL, &direction_serviceNpc_2_16, &direction_serviceNpc_2_16, &direction_serviceNpc_2_16, &direction_serviceNpc_2_16, &direction_serviceNpc_2_16, &direction_serviceNpc_2_16, &direction_serviceNpc_2_16, NULL, &direction_serviceNpc_2_24, &direction_serviceNpc_2_24, &direction_serviceNpc_2_24, &direction_serviceNpc_2_24, &direction_serviceNpc_2_24, &direction_serviceNpc_2_24, &direction_serviceNpc_2_24, NULL, &direction_serviceNpc_2_0, &direction_serviceNpc_2_0, &direction_serviceNpc_2_0};
static Image* images_serviceNpc_12_0[2];
static Direction direction_serviceNpc_12_0 = {0, 10, 10, 0, -1, images_serviceNpc_12_0, 2};
static Image* images_serviceNpc_12_8[2];
static Direction direction_serviceNpc_12_8 = {8, 10, 10, 0, -1, images_serviceNpc_12_8, 2};
static Image* images_serviceNpc_12_16[2];
static Direction direction_serviceNpc_12_16 = {16, 10, 10, 0, -1, images_serviceNpc_12_16, 2};
static Image* images_serviceNpc_12_24[2];
static Direction direction_serviceNpc_12_24 = {24, 10, 10, 0, -1, images_serviceNpc_12_24, 2};
static Animation anim_serviceNpc_12 = {&direction_serviceNpc_12_0, &direction_serviceNpc_12_0, &direction_serviceNpc_12_0, &direction_serviceNpc_12_0, NULL, &direction_serviceNpc_12_8, &direction_serviceNpc_12_8, &direction_serviceNpc_12_8, &direction_serviceNpc_12_8, &direction_serviceNpc_12_8, &direction_serviceNpc_12_8, &direction_serviceNpc_12_8, NULL, &direction_serviceNpc_12_16, &direction_serviceNpc_12_16, &direction_serviceNpc_12_16, &direction_serviceNpc_12_16, &direction_serviceNpc_12_16, &direction_serviceNpc_12_16, &direction_serviceNpc_12_16, NULL, &direction_serviceNpc_12_24, &direction_serviceNpc_12_24, &direction_serviceNpc_12_24, &direction_serviceNpc_12_24, &direction_serviceNpc_12_24, &direction_serviceNpc_12_24, &direction_serviceNpc_12_24, NULL, &direction_serviceNpc_12_0, &direction_serviceNpc_12_0, &direction_serviceNpc_12_0};
static Image* images_serviceNpc_13_0[2];
static Direction direction_serviceNpc_13_0 = {0, 10, 10, 0, -1, images_serviceNpc_13_0, 2};
static Image* images_serviceNpc_13_8[2];
static Direction direction_serviceNpc_13_8 = {8, 10, 10, 0, -1, images_serviceNpc_13_8, 2};
static Image* images_serviceNpc_13_16[2];
static Direction direction_serviceNpc_13_16 = {16, 10, 10, 0, -1, images_serviceNpc_13_16, 2};
static Image* images_serviceNpc_13_24[2];
static Direction direction_serviceNpc_13_24 = {24, 10, 10, 0, -1, images_serviceNpc_13_24, 2};
static Animation anim_serviceNpc_13 = {&direction_serviceNpc_13_0, &direction_serviceNpc_13_0, &direction_serviceNpc_13_0, &direction_serviceNpc_13_0, NULL, &direction_serviceNpc_13_8, &direction_serviceNpc_13_8, &direction_serviceNpc_13_8, &direction_serviceNpc_13_8, &direction_serviceNpc_13_8, &direction_serviceNpc_13_8, &direction_serviceNpc_13_8, NULL, &direction_serviceNpc_13_16, &direction_serviceNpc_13_16, &direction_serviceNpc_13_16, &direction_serviceNpc_13_16, &direction_serviceNpc_13_16, &direction_serviceNpc_13_16, &direction_serviceNpc_13_16, NULL, &direction_serviceNpc_13_24, &direction_serviceNpc_13_24, &direction_serviceNpc_13_24, &direction_serviceNpc_13_24, &direction_serviceNpc_13_24, &direction_serviceNpc_13_24, &direction_serviceNpc_13_24, NULL, &direction_serviceNpc_13_0, &direction_serviceNpc_13_0, &direction_serviceNpc_13_0};
static Image* images_serviceNpc_14_0[2];
static Direction direction_serviceNpc_14_0 = {0, 10, 10, 0, -1, images_serviceNpc_14_0, 2};
static Image* images_serviceNpc_14_8[2];
static Direction direction_serviceNpc_14_8 = {8, 10, 10, 0, -1, images_serviceNpc_14_8, 2};
static Image* images_serviceNpc_14_16[2];
static Direction direction_serviceNpc_14_16 = {16, 10, 10, 0, -1, images_serviceNpc_14_16, 2};
static Image* images_serviceNpc_14_24[2];
static Direction direction_serviceNpc_14_24 = {24, 10, 10, 0, -1, images_serviceNpc_14_24, 2};
static Animation anim_serviceNpc_14 = {&direction_serviceNpc_14_0, &direction_serviceNpc_14_0, &direction_serviceNpc_14_0, &direction_serviceNpc_14_0, NULL, &direction_serviceNpc_14_8, &direction_serviceNpc_14_8, &direction_serviceNpc_14_8, &direction_serviceNpc_14_8, &direction_serviceNpc_14_8, &direction_serviceNpc_14_8, &direction_serviceNpc_14_8, NULL, &direction_serviceNpc_14_16, &direction_serviceNpc_14_16, &direction_serviceNpc_14_16, &direction_serviceNpc_14_16, &direction_serviceNpc_14_16, &direction_serviceNpc_14_16, &direction_serviceNpc_14_16, NULL, &direction_serviceNpc_14_24, &direction_serviceNpc_14_24, &direction_serviceNpc_14_24, &direction_serviceNpc_14_24, &direction_serviceNpc_14_24, &direction_serviceNpc_14_24, &direction_serviceNpc_14_24, NULL, &direction_serviceNpc_14_0, &direction_serviceNpc_14_0, &direction_serviceNpc_14_0};
static Image* images_serviceNpc_15_0[2];
static Direction direction_serviceNpc_15_0 = {0, 10, 10, 0, -1, images_serviceNpc_15_0, 2};
static Image* images_serviceNpc_15_8[2];
static Direction direction_serviceNpc_15_8 = {8, 10, 10, 0, -1, images_serviceNpc_15_8, 2};
static Image* images_serviceNpc_15_16[2];
static Direction direction_serviceNpc_15_16 = {16, 10, 10, 0, -1, images_serviceNpc_15_16, 2};
static Image* images_serviceNpc_15_24[2];
static Direction direction_serviceNpc_15_24 = {24, 10, 10, 0, -1, images_serviceNpc_15_24, 2};
static Animation anim_serviceNpc_15 = {&direction_serviceNpc_15_0, &direction_serviceNpc_15_0, &direction_serviceNpc_15_0, &direction_serviceNpc_15_0, NULL, &direction_serviceNpc_15_8, &direction_serviceNpc_15_8, &direction_serviceNpc_15_8, &direction_serviceNpc_15_8, &direction_serviceNpc_15_8, &direction_serviceNpc_15_8, &direction_serviceNpc_15_8, NULL, &direction_serviceNpc_15_16, &direction_serviceNpc_15_16, &direction_serviceNpc_15_16, &direction_serviceNpc_15_16, &direction_serviceNpc_15_16, &direction_serviceNpc_15_16, &direction_serviceNpc_15_16, NULL, &direction_serviceNpc_15_24, &direction_serviceNpc_15_24, &direction_serviceNpc_15_24, &direction_serviceNpc_15_24, &direction_serviceNpc_15_24, &direction_serviceNpc_15_24, &direction_serviceNpc_15_24, NULL, &direction_serviceNpc_15_0, &direction_serviceNpc_15_0, &direction_serviceNpc_15_0};
static Image* images_serviceNpc_16_0[2];
static Direction direction_serviceNpc_16_0 = {0, 10, 10, 0, -1, images_serviceNpc_16_0, 2};
static Image* images_serviceNpc_16_8[2];
static Direction direction_serviceNpc_16_8 = {8, 10, 10, 0, -1, images_serviceNpc_16_8, 2};
static Image* images_serviceNpc_16_16[2];
static Direction direction_serviceNpc_16_16 = {16, 10, 10, 0, -1, images_serviceNpc_16_16, 2};
static Image* images_serviceNpc_16_24[2];
static Direction direction_serviceNpc_16_24 = {24, 10, 10, 0, -1, images_serviceNpc_16_24, 2};
static Animation anim_serviceNpc_16 = {&direction_serviceNpc_16_0, &direction_serviceNpc_16_0, &direction_serviceNpc_16_0, &direction_serviceNpc_16_0, NULL, &direction_serviceNpc_16_8, &direction_serviceNpc_16_8, &direction_serviceNpc_16_8, &direction_serviceNpc_16_8, &direction_serviceNpc_16_8, &direction_serviceNpc_16_8, &direction_serviceNpc_16_8, NULL, &direction_serviceNpc_16_16, &direction_serviceNpc_16_16, &direction_serviceNpc_16_16, &direction_serviceNpc_16_16, &direction_serviceNpc_16_16, &direction_serviceNpc_16_16, &direction_serviceNpc_16_16, NULL, &direction_serviceNpc_16_24, &direction_serviceNpc_16_24, &direction_serviceNpc_16_24, &direction_serviceNpc_16_24, &direction_serviceNpc_16_24, &direction_serviceNpc_16_24, &direction_serviceNpc_16_24, NULL, &direction_serviceNpc_16_0, &direction_serviceNpc_16_0, &direction_serviceNpc_16_0};
static Image* images_serviceNpc_17_0[2];
static Direction direction_serviceNpc_17_0 = {0, 10, 10, 0, -1, images_serviceNpc_17_0, 2};
static Image* images_serviceNpc_17_8[2];
static Direction direction_serviceNpc_17_8 = {8, 10, 10, 0, -1, images_serviceNpc_17_8, 2};
static Image* images_serviceNpc_17_16[2];
static Direction direction_serviceNpc_17_16 = {16, 10, 10, 0, -1, images_serviceNpc_17_16, 2};
static Image* images_serviceNpc_17_24[2];
static Direction direction_serviceNpc_17_24 = {24, 10, 10, 0, -1, images_serviceNpc_17_24, 2};
static Animation anim_serviceNpc_17 = {&direction_serviceNpc_17_0, &direction_serviceNpc_17_0, &direction_serviceNpc_17_0, &direction_serviceNpc_17_0, NULL, &direction_serviceNpc_17_8, &direction_serviceNpc_17_8, &direction_serviceNpc_17_8, &direction_serviceNpc_17_8, &direction_serviceNpc_17_8, &direction_serviceNpc_17_8, &direction_serviceNpc_17_8, NULL, &direction_serviceNpc_17_16, &direction_serviceNpc_17_16, &direction_serviceNpc_17_16, &direction_serviceNpc_17_16, &direction_serviceNpc_17_16, &direction_serviceNpc_17_16, &direction_serviceNpc_17_16, NULL, &direction_serviceNpc_17_24, &direction_serviceNpc_17_24, &direction_serviceNpc_17_24, &direction_serviceNpc_17_24, &direction_serviceNpc_17_24, &direction_serviceNpc_17_24, &direction_serviceNpc_17_24, NULL, &direction_serviceNpc_17_0, &direction_serviceNpc_17_0, &direction_serviceNpc_17_0};
static Image* images_serviceNpc_18_0[2];
static Direction direction_serviceNpc_18_0 = {0, 10, 10, 0, -1, images_serviceNpc_18_0, 2};
static Image* images_serviceNpc_18_8[2];
static Direction direction_serviceNpc_18_8 = {8, 10, 10, 0, -1, images_serviceNpc_18_8, 2};
static Image* images_serviceNpc_18_16[2];
static Direction direction_serviceNpc_18_16 = {16, 10, 10, 0, -1, images_serviceNpc_18_16, 2};
static Image* images_serviceNpc_18_24[2];
static Direction direction_serviceNpc_18_24 = {24, 10, 10, 0, -1, images_serviceNpc_18_24, 2};
static Animation anim_serviceNpc_18 = {&direction_serviceNpc_18_0, &direction_serviceNpc_18_0, &direction_serviceNpc_18_0, &direction_serviceNpc_18_0, NULL, &direction_serviceNpc_18_8, &direction_serviceNpc_18_8, &direction_serviceNpc_18_8, &direction_serviceNpc_18_8, &direction_serviceNpc_18_8, &direction_serviceNpc_18_8, &direction_serviceNpc_18_8, NULL, &direction_serviceNpc_18_16, &direction_serviceNpc_18_16, &direction_serviceNpc_18_16, &direction_serviceNpc_18_16, &direction_serviceNpc_18_16, &direction_serviceNpc_18_16, &direction_serviceNpc_18_16, NULL, &direction_serviceNpc_18_24, &direction_serviceNpc_18_24, &direction_serviceNpc_18_24, &direction_serviceNpc_18_24, &direction_serviceNpc_18_24, &direction_serviceNpc_18_24, &direction_serviceNpc_18_24, NULL, &direction_serviceNpc_18_0, &direction_serviceNpc_18_0, &direction_serviceNpc_18_0};
static Image* images_serviceNpc_19_0[2];
static Direction direction_serviceNpc_19_0 = {0, 10, 10, 0, -1, images_serviceNpc_19_0, 2};
static Image* images_serviceNpc_19_8[2];
static Direction direction_serviceNpc_19_8 = {8, 10, 10, 0, -1, images_serviceNpc_19_8, 2};
static Image* images_serviceNpc_19_16[2];
static Direction direction_serviceNpc_19_16 = {16, 10, 10, 0, -1, images_serviceNpc_19_16, 2};
static Image* images_serviceNpc_19_24[2];
static Direction direction_serviceNpc_19_24 = {24, 10, 10, 0, -1, images_serviceNpc_19_24, 2};
static Animation anim_serviceNpc_19 = {&direction_serviceNpc_19_0, &direction_serviceNpc_19_0, &direction_serviceNpc_19_0, &direction_serviceNpc_19_0, NULL, &direction_serviceNpc_19_8, &direction_serviceNpc_19_8, &direction_serviceNpc_19_8, &direction_serviceNpc_19_8, &direction_serviceNpc_19_8, &direction_serviceNpc_19_8, &direction_serviceNpc_19_8, NULL, &direction_serviceNpc_19_16, &direction_serviceNpc_19_16, &direction_serviceNpc_19_16, &direction_serviceNpc_19_16, &direction_serviceNpc_19_16, &direction_serviceNpc_19_16, &direction_serviceNpc_19_16, NULL, &direction_serviceNpc_19_24, &direction_serviceNpc_19_24, &direction_serviceNpc_19_24, &direction_serviceNpc_19_24, &direction_serviceNpc_19_24, &direction_serviceNpc_19_24, &direction_serviceNpc_19_24, NULL, &direction_serviceNpc_19_0, &direction_serviceNpc_19_0, &direction_serviceNpc_19_0};
static Image* images_serviceNpc_20_0[2];
static Direction direction_serviceNpc_20_0 = {0, 10, 10, 0, -1, images_serviceNpc_20_0, 2};
static Image* images_serviceNpc_20_8[2];
static Direction direction_serviceNpc_20_8 = {8, 10, 10, 0, -1, images_serviceNpc_20_8, 2};
static Image* images_serviceNpc_20_16[2];
static Direction direction_serviceNpc_20_16 = {16, 10, 10, 0, -1, images_serviceNpc_20_16, 2};
static Image* images_serviceNpc_20_24[2];
static Direction direction_serviceNpc_20_24 = {24, 10, 10, 0, -1, images_serviceNpc_20_24, 2};
static Animation anim_serviceNpc_20 = {&direction_serviceNpc_20_0, &direction_serviceNpc_20_0, &direction_serviceNpc_20_0, &direction_serviceNpc_20_0, NULL, &direction_serviceNpc_20_8, &direction_serviceNpc_20_8, &direction_serviceNpc_20_8, &direction_serviceNpc_20_8, &direction_serviceNpc_20_8, &direction_serviceNpc_20_8, &direction_serviceNpc_20_8, NULL, &direction_serviceNpc_20_16, &direction_serviceNpc_20_16, &direction_serviceNpc_20_16, &direction_serviceNpc_20_16, &direction_serviceNpc_20_16, &direction_serviceNpc_20_16, &direction_serviceNpc_20_16, NULL, &direction_serviceNpc_20_24, &direction_serviceNpc_20_24, &direction_serviceNpc_20_24, &direction_serviceNpc_20_24, &direction_serviceNpc_20_24, &direction_serviceNpc_20_24, &direction_serviceNpc_20_24, NULL, &direction_serviceNpc_20_0, &direction_serviceNpc_20_0, &direction_serviceNpc_20_0};
static Image* images_serviceNpc_21_0[2];
static Direction direction_serviceNpc_21_0 = {0, 10, 10, 0, -1, images_serviceNpc_21_0, 2};
static Image* images_serviceNpc_21_8[2];
static Direction direction_serviceNpc_21_8 = {8, 10, 10, 0, -1, images_serviceNpc_21_8, 2};
static Image* images_serviceNpc_21_16[2];
static Direction direction_serviceNpc_21_16 = {16, 10, 10, 0, -1, images_serviceNpc_21_16, 2};
static Image* images_serviceNpc_21_24[2];
static Direction direction_serviceNpc_21_24 = {24, 10, 10, 0, -1, images_serviceNpc_21_24, 2};
static Animation anim_serviceNpc_21 = {&direction_serviceNpc_21_0, &direction_serviceNpc_21_0, &direction_serviceNpc_21_0, &direction_serviceNpc_21_0, NULL, &direction_serviceNpc_21_8, &direction_serviceNpc_21_8, &direction_serviceNpc_21_8, &direction_serviceNpc_21_8, &direction_serviceNpc_21_8, &direction_serviceNpc_21_8, &direction_serviceNpc_21_8, NULL, &direction_serviceNpc_21_16, &direction_serviceNpc_21_16, &direction_serviceNpc_21_16, &direction_serviceNpc_21_16, &direction_serviceNpc_21_16, &direction_serviceNpc_21_16, &direction_serviceNpc_21_16, NULL, &direction_serviceNpc_21_24, &direction_serviceNpc_21_24, &direction_serviceNpc_21_24, &direction_serviceNpc_21_24, &direction_serviceNpc_21_24, &direction_serviceNpc_21_24, &direction_serviceNpc_21_24, NULL, &direction_serviceNpc_21_0, &direction_serviceNpc_21_0, &direction_serviceNpc_21_0};
static Image* images_serviceNpc_22_0[2];
static Direction direction_serviceNpc_22_0 = {0, 10, 10, 0, -1, images_serviceNpc_22_0, 2};
static Image* images_serviceNpc_22_8[2];
static Direction direction_serviceNpc_22_8 = {8, 10, 10, 0, -1, images_serviceNpc_22_8, 2};
static Image* images_serviceNpc_22_16[2];
static Direction direction_serviceNpc_22_16 = {16, 10, 10, 0, -1, images_serviceNpc_22_16, 2};
static Image* images_serviceNpc_22_24[2];
static Direction direction_serviceNpc_22_24 = {24, 10, 10, 0, -1, images_serviceNpc_22_24, 2};
static Animation anim_serviceNpc_22 = {&direction_serviceNpc_22_0, &direction_serviceNpc_22_0, &direction_serviceNpc_22_0, &direction_serviceNpc_22_0, NULL, &direction_serviceNpc_22_8, &direction_serviceNpc_22_8, &direction_serviceNpc_22_8, &direction_serviceNpc_22_8, &direction_serviceNpc_22_8, &direction_serviceNpc_22_8, &direction_serviceNpc_22_8, NULL, &direction_serviceNpc_22_16, &direction_serviceNpc_22_16, &direction_serviceNpc_22_16, &direction_serviceNpc_22_16, &direction_serviceNpc_22_16, &direction_serviceNpc_22_16, &direction_serviceNpc_22_16, NULL, &direction_serviceNpc_22_24, &direction_serviceNpc_22_24, &direction_serviceNpc_22_24, &direction_serviceNpc_22_24, &direction_serviceNpc_22_24, &direction_serviceNpc_22_24, &direction_serviceNpc_22_24, NULL, &direction_serviceNpc_22_0, &direction_serviceNpc_22_0, &direction_serviceNpc_22_0};
static Image* images_serviceNpc_23_0[2];
static Direction direction_serviceNpc_23_0 = {0, 6, 6, 0, -1, images_serviceNpc_23_0, 2};
static Image* images_serviceNpc_23_8[2];
static Direction direction_serviceNpc_23_8 = {8, 6, 6, 0, -1, images_serviceNpc_23_8, 2};
static Image* images_serviceNpc_23_16[2];
static Direction direction_serviceNpc_23_16 = {16, 6, 6, 0, -1, images_serviceNpc_23_16, 2};
static Image* images_serviceNpc_23_24[2];
static Direction direction_serviceNpc_23_24 = {24, 6, 6, 0, -1, images_serviceNpc_23_24, 2};
static Animation anim_serviceNpc_23 = {&direction_serviceNpc_23_0, &direction_serviceNpc_23_0, &direction_serviceNpc_23_0, &direction_serviceNpc_23_0, NULL, &direction_serviceNpc_23_8, &direction_serviceNpc_23_8, &direction_serviceNpc_23_8, &direction_serviceNpc_23_8, &direction_serviceNpc_23_8, &direction_serviceNpc_23_8, &direction_serviceNpc_23_8, NULL, &direction_serviceNpc_23_16, &direction_serviceNpc_23_16, &direction_serviceNpc_23_16, &direction_serviceNpc_23_16, &direction_serviceNpc_23_16, &direction_serviceNpc_23_16, &direction_serviceNpc_23_16, NULL, &direction_serviceNpc_23_24, &direction_serviceNpc_23_24, &direction_serviceNpc_23_24, &direction_serviceNpc_23_24, &direction_serviceNpc_23_24, &direction_serviceNpc_23_24, &direction_serviceNpc_23_24, NULL, &direction_serviceNpc_23_0, &direction_serviceNpc_23_0, &direction_serviceNpc_23_0};
static Image* images_serviceNpc_24_0[2];
static Direction direction_serviceNpc_24_0 = {0, 6, 6, 0, -1, images_serviceNpc_24_0, 2};
static Image* images_serviceNpc_24_8[2];
static Direction direction_serviceNpc_24_8 = {8, 6, 6, 0, -1, images_serviceNpc_24_8, 2};
static Image* images_serviceNpc_24_16[2];
static Direction direction_serviceNpc_24_16 = {16, 6, 6, 0, -1, images_serviceNpc_24_16, 2};
static Image* images_serviceNpc_24_24[2];
static Direction direction_serviceNpc_24_24 = {24, 6, 6, 0, -1, images_serviceNpc_24_24, 2};
static Animation anim_serviceNpc_24 = {&direction_serviceNpc_24_0, &direction_serviceNpc_24_0, &direction_serviceNpc_24_0, &direction_serviceNpc_24_0, NULL, &direction_serviceNpc_24_8, &direction_serviceNpc_24_8, &direction_serviceNpc_24_8, &direction_serviceNpc_24_8, &direction_serviceNpc_24_8, &direction_serviceNpc_24_8, &direction_serviceNpc_24_8, NULL, &direction_serviceNpc_24_16, &direction_serviceNpc_24_16, &direction_serviceNpc_24_16, &direction_serviceNpc_24_16, &direction_serviceNpc_24_16, &direction_serviceNpc_24_16, &direction_serviceNpc_24_16, NULL, &direction_serviceNpc_24_24, &direction_serviceNpc_24_24, &direction_serviceNpc_24_24, &direction_serviceNpc_24_24, &direction_serviceNpc_24_24, &direction_serviceNpc_24_24, &direction_serviceNpc_24_24, NULL, &direction_serviceNpc_24_0, &direction_serviceNpc_24_0, &direction_serviceNpc_24_0};
static Image* images_serviceNpc_25_0[2];
static Direction direction_serviceNpc_25_0 = {0, 6, 6, 0, -1, images_serviceNpc_25_0, 2};
static Image* images_serviceNpc_25_8[2];
static Direction direction_serviceNpc_25_8 = {8, 6, 6, 0, -1, images_serviceNpc_25_8, 2};
static Image* images_serviceNpc_25_16[2];
static Direction direction_serviceNpc_25_16 = {16, 6, 6, 0, -1, images_serviceNpc_25_16, 2};
static Image* images_serviceNpc_25_24[2];
static Direction direction_serviceNpc_25_24 = {24, 6, 6, 0, -1, images_serviceNpc_25_24, 2};
static Animation anim_serviceNpc_25 = {&direction_serviceNpc_25_0, &direction_serviceNpc_25_0, &direction_serviceNpc_25_0, &direction_serviceNpc_25_0, NULL, &direction_serviceNpc_25_8, &direction_serviceNpc_25_8, &direction_serviceNpc_25_8, &direction_serviceNpc_25_8, &direction_serviceNpc_25_8, &direction_serviceNpc_25_8, &direction_serviceNpc_25_8, NULL, &direction_serviceNpc_25_16, &direction_serviceNpc_25_16, &direction_serviceNpc_25_16, &direction_serviceNpc_25_16, &direction_serviceNpc_25_16, &direction_serviceNpc_25_16, &direction_serviceNpc_25_16, NULL, &direction_serviceNpc_25_24, &direction_serviceNpc_25_24, &direction_serviceNpc_25_24, &direction_serviceNpc_25_24, &direction_serviceNpc_25_24, &direction_serviceNpc_25_24, &direction_serviceNpc_25_24, NULL, &direction_serviceNpc_25_0, &direction_serviceNpc_25_0, &direction_serviceNpc_25_0};
static Image* images_serviceNpc_26_0[2];
static Direction direction_serviceNpc_26_0 = {0, 6, 6, 0, -1, images_serviceNpc_26_0, 2};
static Image* images_serviceNpc_26_8[2];
static Direction direction_serviceNpc_26_8 = {8, 6, 6, 0, -1, images_serviceNpc_26_8, 2};
static Image* images_serviceNpc_26_16[2];
static Direction direction_serviceNpc_26_16 = {16, 6, 6, 0, -1, images_serviceNpc_26_16, 2};
static Image* images_serviceNpc_26_24[2];
static Direction direction_serviceNpc_26_24 = {24, 6, 6, 0, -1, images_serviceNpc_26_24, 2};
static Animation anim_serviceNpc_26 = {&direction_serviceNpc_26_0, &direction_serviceNpc_26_0, &direction_serviceNpc_26_0, &direction_serviceNpc_26_0, NULL, &direction_serviceNpc_26_8, &direction_serviceNpc_26_8, &direction_serviceNpc_26_8, &direction_serviceNpc_26_8, &direction_serviceNpc_26_8, &direction_serviceNpc_26_8, &direction_serviceNpc_26_8, NULL, &direction_serviceNpc_26_16, &direction_serviceNpc_26_16, &direction_serviceNpc_26_16, &direction_serviceNpc_26_16, &direction_serviceNpc_26_16, &direction_serviceNpc_26_16, &direction_serviceNpc_26_16, NULL, &direction_serviceNpc_26_24, &direction_serviceNpc_26_24, &direction_serviceNpc_26_24, &direction_serviceNpc_26_24, &direction_serviceNpc_26_24, &direction_serviceNpc_26_24, &direction_serviceNpc_26_24, NULL, &direction_serviceNpc_26_0, &direction_serviceNpc_26_0, &direction_serviceNpc_26_0};
static Image* images_serviceNpc_27_0[2];
static Direction direction_serviceNpc_27_0 = {0, 6, 6, 0, -1, images_serviceNpc_27_0, 2};
static Image* images_serviceNpc_27_8[2];
static Direction direction_serviceNpc_27_8 = {8, 6, 6, 0, -1, images_serviceNpc_27_8, 2};
static Image* images_serviceNpc_27_16[2];
static Direction direction_serviceNpc_27_16 = {16, 6, 6, 0, -1, images_serviceNpc_27_16, 2};
static Image* images_serviceNpc_27_24[2];
static Direction direction_serviceNpc_27_24 = {24, 6, 6, 0, -1, images_serviceNpc_27_24, 2};
static Animation anim_serviceNpc_27 = {&direction_serviceNpc_27_0, &direction_serviceNpc_27_0, &direction_serviceNpc_27_0, &direction_serviceNpc_27_0, NULL, &direction_serviceNpc_27_8, &direction_serviceNpc_27_8, &direction_serviceNpc_27_8, &direction_serviceNpc_27_8, &direction_serviceNpc_27_8, &direction_serviceNpc_27_8, &direction_serviceNpc_27_8, NULL, &direction_serviceNpc_27_16, &direction_serviceNpc_27_16, &direction_serviceNpc_27_16, &direction_serviceNpc_27_16, &direction_serviceNpc_27_16, &direction_serviceNpc_27_16, &direction_serviceNpc_27_16, NULL, &direction_serviceNpc_27_24, &direction_serviceNpc_27_24, &direction_serviceNpc_27_24, &direction_serviceNpc_27_24, &direction_serviceNpc_27_24, &direction_serviceNpc_27_24, &direction_serviceNpc_27_24, NULL, &direction_serviceNpc_27_0, &direction_serviceNpc_27_0, &direction_serviceNpc_27_0};
static Image* images_serviceNpc_28_0[2];
static Direction direction_serviceNpc_28_0 = {0, 6, 6, 0, -1, images_serviceNpc_28_0, 2};
static Image* images_serviceNpc_28_8[2];
static Direction direction_serviceNpc_28_8 = {8, 6, 6, 0, -1, images_serviceNpc_28_8, 2};
static Image* images_serviceNpc_28_16[2];
static Direction direction_serviceNpc_28_16 = {16, 6, 6, 0, -1, images_serviceNpc_28_16, 2};
static Image* images_serviceNpc_28_24[2];
static Direction direction_serviceNpc_28_24 = {24, 6, 6, 0, -1, images_serviceNpc_28_24, 2};
static Animation anim_serviceNpc_28 = {&direction_serviceNpc_28_0, &direction_serviceNpc_28_0, &direction_serviceNpc_28_0, &direction_serviceNpc_28_0, NULL, &direction_serviceNpc_28_8, &direction_serviceNpc_28_8, &direction_serviceNpc_28_8, &direction_serviceNpc_28_8, &direction_serviceNpc_28_8, &direction_serviceNpc_28_8, &direction_serviceNpc_28_8, NULL, &direction_serviceNpc_28_16, &direction_serviceNpc_28_16, &direction_serviceNpc_28_16, &direction_serviceNpc_28_16, &direction_serviceNpc_28_16, &direction_serviceNpc_28_16, &direction_serviceNpc_28_16, NULL, &direction_serviceNpc_28_24, &direction_serviceNpc_28_24, &direction_serviceNpc_28_24, &direction_serviceNpc_28_24, &direction_serviceNpc_28_24, &direction_serviceNpc_28_24, &direction_serviceNpc_28_24, NULL, &direction_serviceNpc_28_0, &direction_serviceNpc_28_0, &direction_serviceNpc_28_0};
static Animation* anim_array_serviceNpc[29] = {&anim_serviceNpc_0, &anim_serviceNpc_1, &anim_serviceNpc_2, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_serviceNpc_12, &anim_serviceNpc_13, &anim_serviceNpc_14, &anim_serviceNpc_15, &anim_serviceNpc_16, &anim_serviceNpc_17, &anim_serviceNpc_18, &anim_serviceNpc_19, &anim_serviceNpc_20, &anim_serviceNpc_21, &anim_serviceNpc_22, &anim_serviceNpc_23, &anim_serviceNpc_24, &anim_serviceNpc_25, &anim_serviceNpc_26, &anim_serviceNpc_27, &anim_serviceNpc_28};
static Animations anim_serviceNpc = {29, &anim_array_serviceNpc[0]};
static bool anim_serviceNpc_initialized;
class ServiceNpc : public Active {
public:
    ServiceNpc(int x, int y) : Active(x, y, serviceNpc_type) {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Extra NPCs", 10);
#endif
        this->animations = &anim_serviceNpc;
        if (!anim_serviceNpc_initialized) {
            anim_serviceNpc_initialized = true;
            images_serviceNpc_0_0[0] = get_internal_image(1325);
            images_serviceNpc_0_0[1] = get_internal_image(1329);
            images_serviceNpc_0_8[0] = get_internal_image(1331);
            images_serviceNpc_0_8[1] = get_internal_image(1333);
            images_serviceNpc_0_16[0] = get_internal_image(1328);
            images_serviceNpc_0_16[1] = get_internal_image(1330);
            images_serviceNpc_0_24[0] = get_internal_image(1326);
            images_serviceNpc_0_24[1] = get_internal_image(1327);
            images_serviceNpc_1_0[0] = get_internal_image(1320);
            images_serviceNpc_1_0[1] = get_internal_image(1324);
            images_serviceNpc_1_8[0] = get_internal_image(1337);
            images_serviceNpc_1_8[1] = get_internal_image(1336);
            images_serviceNpc_1_16[0] = get_internal_image(1332);
            images_serviceNpc_1_16[1] = get_internal_image(1335);
            images_serviceNpc_1_24[0] = get_internal_image(1339);
            images_serviceNpc_1_24[1] = get_internal_image(1340);
            images_serviceNpc_2_0[0] = get_internal_image(45);
            images_serviceNpc_2_0[1] = get_internal_image(126);
            images_serviceNpc_2_8[0] = get_internal_image(130);
            images_serviceNpc_2_8[1] = get_internal_image(142);
            images_serviceNpc_2_16[0] = get_internal_image(7);
            images_serviceNpc_2_16[1] = get_internal_image(128);
            images_serviceNpc_2_24[0] = get_internal_image(133);
            images_serviceNpc_2_24[1] = get_internal_image(129);
            images_serviceNpc_12_0[0] = get_internal_image(1317);
            images_serviceNpc_12_0[1] = get_internal_image(1316);
            images_serviceNpc_12_8[0] = get_internal_image(1319);
            images_serviceNpc_12_8[1] = get_internal_image(1321);
            images_serviceNpc_12_16[0] = get_internal_image(1307);
            images_serviceNpc_12_16[1] = get_internal_image(1318);
            images_serviceNpc_12_24[0] = get_internal_image(1322);
            images_serviceNpc_12_24[1] = get_internal_image(1323);
            images_serviceNpc_13_0[0] = get_internal_image(1309);
            images_serviceNpc_13_0[1] = get_internal_image(1311);
            images_serviceNpc_13_8[0] = get_internal_image(1312);
            images_serviceNpc_13_8[1] = get_internal_image(1315);
            images_serviceNpc_13_16[0] = get_internal_image(1310);
            images_serviceNpc_13_16[1] = get_internal_image(1308);
            images_serviceNpc_13_24[0] = get_internal_image(1313);
            images_serviceNpc_13_24[1] = get_internal_image(1314);
            images_serviceNpc_14_0[0] = get_internal_image(1374);
            images_serviceNpc_14_0[1] = get_internal_image(1373);
            images_serviceNpc_14_8[0] = get_internal_image(1375);
            images_serviceNpc_14_8[1] = get_internal_image(1376);
            images_serviceNpc_14_16[0] = get_internal_image(1377);
            images_serviceNpc_14_16[1] = get_internal_image(1378);
            images_serviceNpc_14_24[0] = get_internal_image(1379);
            images_serviceNpc_14_24[1] = get_internal_image(1380);
            images_serviceNpc_15_0[0] = get_internal_image(1349);
            images_serviceNpc_15_0[1] = get_internal_image(1350);
            images_serviceNpc_15_8[0] = get_internal_image(1353);
            images_serviceNpc_15_8[1] = get_internal_image(1354);
            images_serviceNpc_15_16[0] = get_internal_image(1346);
            images_serviceNpc_15_16[1] = get_internal_image(1351);
            images_serviceNpc_15_24[0] = get_internal_image(1352);
            images_serviceNpc_15_24[1] = get_internal_image(1356);
            images_serviceNpc_16_0[0] = get_internal_image(1370);
            images_serviceNpc_16_0[1] = get_internal_image(1362);
            images_serviceNpc_16_8[0] = get_internal_image(1368);
            images_serviceNpc_16_8[1] = get_internal_image(1365);
            images_serviceNpc_16_16[0] = get_internal_image(1367);
            images_serviceNpc_16_16[1] = get_internal_image(1371);
            images_serviceNpc_16_24[0] = get_internal_image(1366);
            images_serviceNpc_16_24[1] = get_internal_image(1369);
            images_serviceNpc_17_0[0] = get_internal_image(1355);
            images_serviceNpc_17_0[1] = get_internal_image(1358);
            images_serviceNpc_17_8[0] = get_internal_image(1360);
            images_serviceNpc_17_8[1] = get_internal_image(1363);
            images_serviceNpc_17_16[0] = get_internal_image(1357);
            images_serviceNpc_17_16[1] = get_internal_image(1359);
            images_serviceNpc_17_24[0] = get_internal_image(1361);
            images_serviceNpc_17_24[1] = get_internal_image(1364);
            images_serviceNpc_18_0[0] = get_internal_image(1344);
            images_serviceNpc_18_0[1] = get_internal_image(1384);
            images_serviceNpc_18_8[0] = get_internal_image(1381);
            images_serviceNpc_18_8[1] = get_internal_image(1345);
            images_serviceNpc_18_16[0] = get_internal_image(1348);
            images_serviceNpc_18_16[1] = get_internal_image(1383);
            images_serviceNpc_18_24[0] = get_internal_image(1385);
            images_serviceNpc_18_24[1] = get_internal_image(1342);
            images_serviceNpc_19_0[0] = get_internal_image(1391);
            images_serviceNpc_19_0[1] = get_internal_image(1392);
            images_serviceNpc_19_8[0] = get_internal_image(1393);
            images_serviceNpc_19_8[1] = get_internal_image(1395);
            images_serviceNpc_19_16[0] = get_internal_image(1387);
            images_serviceNpc_19_16[1] = get_internal_image(1390);
            images_serviceNpc_19_24[0] = get_internal_image(1382);
            images_serviceNpc_19_24[1] = get_internal_image(1396);
            images_serviceNpc_20_0[0] = get_internal_image(2436);
            images_serviceNpc_20_0[1] = get_internal_image(2438);
            images_serviceNpc_20_8[0] = get_internal_image(2443);
            images_serviceNpc_20_8[1] = get_internal_image(2444);
            images_serviceNpc_20_16[0] = get_internal_image(2446);
            images_serviceNpc_20_16[1] = get_internal_image(2442);
            images_serviceNpc_20_24[0] = get_internal_image(2447);
            images_serviceNpc_20_24[1] = get_internal_image(2448);
            images_serviceNpc_21_0[0] = get_internal_image(2750);
            images_serviceNpc_21_0[1] = get_internal_image(2753);
            images_serviceNpc_21_8[0] = get_internal_image(2758);
            images_serviceNpc_21_8[1] = get_internal_image(2759);
            images_serviceNpc_21_16[0] = get_internal_image(2754);
            images_serviceNpc_21_16[1] = get_internal_image(2755);
            images_serviceNpc_21_24[0] = get_internal_image(2756);
            images_serviceNpc_21_24[1] = get_internal_image(2757);
            images_serviceNpc_22_0[0] = get_internal_image(3218);
            images_serviceNpc_22_0[1] = get_internal_image(3217);
            images_serviceNpc_22_8[0] = get_internal_image(3221);
            images_serviceNpc_22_8[1] = get_internal_image(3223);
            images_serviceNpc_22_16[0] = get_internal_image(3174);
            images_serviceNpc_22_16[1] = get_internal_image(3219);
            images_serviceNpc_22_24[0] = get_internal_image(3220);
            images_serviceNpc_22_24[1] = get_internal_image(3222);
            images_serviceNpc_23_0[0] = get_internal_image(3359);
            images_serviceNpc_23_0[1] = get_internal_image(3412);
            images_serviceNpc_23_8[0] = get_internal_image(3486);
            images_serviceNpc_23_8[1] = get_internal_image(3487);
            images_serviceNpc_23_16[0] = get_internal_image(3480);
            images_serviceNpc_23_16[1] = get_internal_image(3481);
            images_serviceNpc_23_24[0] = get_internal_image(3490);
            images_serviceNpc_23_24[1] = get_internal_image(3488);
            images_serviceNpc_24_0[0] = get_internal_image(3599);
            images_serviceNpc_24_0[1] = get_internal_image(3676);
            images_serviceNpc_24_8[0] = get_internal_image(3721);
            images_serviceNpc_24_8[1] = get_internal_image(3688);
            images_serviceNpc_24_16[0] = get_internal_image(3677);
            images_serviceNpc_24_16[1] = get_internal_image(3674);
            images_serviceNpc_24_24[0] = get_internal_image(3689);
            images_serviceNpc_24_24[1] = get_internal_image(3680);
            images_serviceNpc_25_0[0] = get_internal_image(3718);
            images_serviceNpc_25_0[1] = get_internal_image(3723);
            images_serviceNpc_25_8[0] = get_internal_image(3729);
            images_serviceNpc_25_8[1] = get_internal_image(3726);
            images_serviceNpc_25_16[0] = get_internal_image(3722);
            images_serviceNpc_25_16[1] = get_internal_image(3724);
            images_serviceNpc_25_24[0] = get_internal_image(3727);
            images_serviceNpc_25_24[1] = get_internal_image(3725);
            images_serviceNpc_26_0[0] = get_internal_image(3728);
            images_serviceNpc_26_0[1] = get_internal_image(3731);
            images_serviceNpc_26_8[0] = get_internal_image(3733);
            images_serviceNpc_26_8[1] = get_internal_image(3734);
            images_serviceNpc_26_16[0] = get_internal_image(3730);
            images_serviceNpc_26_16[1] = get_internal_image(3732);
            images_serviceNpc_26_24[0] = get_internal_image(3735);
            images_serviceNpc_26_24[1] = get_internal_image(3736);
            images_serviceNpc_27_0[0] = get_internal_image(3737);
            images_serviceNpc_27_0[1] = get_internal_image(3739);
            images_serviceNpc_27_8[0] = get_internal_image(3743);
            images_serviceNpc_27_8[1] = get_internal_image(3744);
            images_serviceNpc_27_16[0] = get_internal_image(3738);
            images_serviceNpc_27_16[1] = get_internal_image(3740);
            images_serviceNpc_27_24[0] = get_internal_image(3741);
            images_serviceNpc_27_24[1] = get_internal_image(3742);
            images_serviceNpc_28_0[0] = get_internal_image(3745);
            images_serviceNpc_28_0[1] = get_internal_image(3747);
            images_serviceNpc_28_8[0] = get_internal_image(3750);
            images_serviceNpc_28_8[1] = get_internal_image(3752);
            images_serviceNpc_28_16[0] = get_internal_image(3746);
            images_serviceNpc_28_16[1] = get_internal_image(3748);
            images_serviceNpc_28_24[0] = get_internal_image(3751);
            images_serviceNpc_28_24[1] = get_internal_image(3749);
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
FrameObject* create_serviceNpc(int x, int y) {
    return new (Active::pool.create()) ServiceNpc(x, y);
}
static Image* images_npcspawn_384_0_8[1];
static Direction direction_npcspawn_384_0_8 = {8, 50, 50, 0, -1, images_npcspawn_384_0_8, 1};
static Animation anim_npcspawn_384_0 = {&direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, NULL, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8, &direction_npcspawn_384_0_8};
static Animation * anim_array_npcspawn_384[1] = {&anim_npcspawn_384_0};
static Animations anim_npcspawn_384 = {1, &anim_array_npcspawn_384[0]};
static bool anim_npcspawn_384_initialized;
class NPCSpawn_384 : public Active
{
public:
    NPCSpawn_384(int x, int y) : Active(x, y, NPCSpawn_384_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NPC Spawn", 9);
#endif
        set_visible(false);
        this->animations = &anim_npcspawn_384;
        if (!anim_npcspawn_384_initialized) {
            anim_npcspawn_384_initialized = true;
            images_npcspawn_384_0_8[0] = get_internal_image(1334);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_npcspawn_384(int x, int y)
{
    return new (Active::pool.create()) NPCSpawn_384(x, y);
}
static Image* images_staffjoboffice_385_0_8[1];
static Direction direction_staffjoboffice_385_0_8 = {8, 50, 50, 0, -1, images_staffjoboffice_385_0_8, 1};
static Animation anim_staffjoboffice_385_0 = {&direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, NULL, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8, &direction_staffjoboffice_385_0_8};
static Animation * anim_array_staffjoboffice_385[1] = {&anim_staffjoboffice_385_0};
static Animations anim_staffjoboffice_385 = {1, &anim_array_staffjoboffice_385[0]};
static bool anim_staffjoboffice_385_initialized;
class StaffJobOffice_385 : public Active
{
public:
    StaffJobOffice_385(int x, int y) : Active(x, y, StaffJobOffice_385_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Staff - Job Office", 18);
#endif
        set_visible(false);
        this->animations = &anim_staffjoboffice_385;
        if (!anim_staffjoboffice_385_initialized) {
            anim_staffjoboffice_385_initialized = true;
            images_staffjoboffice_385_0_8[0] = get_internal_image(1303);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_staffjoboffice_385(int x, int y)
{
    return new (Active::pool.create()) StaffJobOffice_385(x, y);
}
static Image* images_payphone_386_0_0[1];
static Direction direction_payphone_386_0_0 = {0, 50, 50, 0, -1, images_payphone_386_0_0, 1};
static Animation anim_payphone_386_0 = {&direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, NULL, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0, &direction_payphone_386_0_0};
static Animation * anim_array_payphone_386[1] = {&anim_payphone_386_0};
static Animations anim_payphone_386 = {1, &anim_array_payphone_386[0]};
static bool anim_payphone_386_initialized;
class Payphone_386 : public Active
{
public:
    Payphone_386(int x, int y) : Active(x, y, Payphone_386_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("Payphone", 8);
#endif
        this->animations = &anim_payphone_386;
        if (!anim_payphone_386_initialized) {
            anim_payphone_386_initialized = true;
            images_payphone_386_0_0[0] = get_internal_image(1388);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_payphone_386(int x, int y)
{
    return new (Active::pool.create()) Payphone_386(x, y);
}
static Image* images_doormaster_387_0_0[1];
static Direction direction_doormaster_387_0_0 = {0, 50, 50, 0, -1, images_doormaster_387_0_0, 1};
static Image* images_doormaster_387_0_16[1];
static Direction direction_doormaster_387_0_16 = {16, 50, 50, 0, -1, images_doormaster_387_0_16, 1};
static Animation anim_doormaster_387_0 = {&direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, NULL, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, &direction_doormaster_387_0_16, NULL, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0, &direction_doormaster_387_0_0};
static Animation * anim_array_doormaster_387[1] = {&anim_doormaster_387_0};
static Animations anim_doormaster_387 = {1, &anim_array_doormaster_387[0]};
static bool anim_doormaster_387_initialized;
class DoorMaster_387 : public Active
{
public:
    DoorMaster_387(int x, int y) : Active(x, y, DoorMaster_387_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Master", 13);
#endif
        this->animations = &anim_doormaster_387;
        if (!anim_doormaster_387_initialized) {
            anim_doormaster_387_initialized = true;
            images_doormaster_387_0_0[0] = get_internal_image(1267);
            images_doormaster_387_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_main_37);
    }
};
FrameObject * create_doormaster_387(int x, int y)
{
    return new (Active::pool.create()) DoorMaster_387(x, y);
}
static Image* images_truck_388_0_0[1];
static Direction direction_truck_388_0_0 = {0, 50, 50, 0, -1, images_truck_388_0_0, 1};
static Image* images_truck_388_0_8[1];
static Direction direction_truck_388_0_8 = {8, 50, 50, 0, -1, images_truck_388_0_8, 1};
static Image* images_truck_388_0_16[1];
static Direction direction_truck_388_0_16 = {16, 50, 50, 0, -1, images_truck_388_0_16, 1};
static Image* images_truck_388_0_24[1];
static Direction direction_truck_388_0_24 = {24, 50, 50, 0, 1, images_truck_388_0_24, 1};
static Animation anim_truck_388_0 = {&direction_truck_388_0_0, &direction_truck_388_0_0, &direction_truck_388_0_0, &direction_truck_388_0_0, NULL, &direction_truck_388_0_8, &direction_truck_388_0_8, &direction_truck_388_0_8, &direction_truck_388_0_8, &direction_truck_388_0_8, &direction_truck_388_0_8, &direction_truck_388_0_8, NULL, &direction_truck_388_0_16, &direction_truck_388_0_16, &direction_truck_388_0_16, &direction_truck_388_0_16, &direction_truck_388_0_16, &direction_truck_388_0_16, &direction_truck_388_0_16, NULL, &direction_truck_388_0_24, &direction_truck_388_0_24, &direction_truck_388_0_24, &direction_truck_388_0_24, &direction_truck_388_0_24, &direction_truck_388_0_24, &direction_truck_388_0_24, NULL, &direction_truck_388_0_0, &direction_truck_388_0_0, &direction_truck_388_0_0};
static Image* images_truck_388_1_0[1];
static Direction direction_truck_388_1_0 = {0, 50, 50, 0, -1, images_truck_388_1_0, 1};
static Animation anim_truck_388_1 = {&direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, NULL, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0, &direction_truck_388_1_0};
static Animation * anim_array_truck_388[2] = {&anim_truck_388_0, &anim_truck_388_1};
static Animations anim_truck_388 = {2, &anim_array_truck_388[0]};
static bool anim_truck_388_initialized;
class Truck_388 : public Active
{
public:
    Truck_388(int x, int y) : Active(x, y, Truck_388_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("Truck", 5);
#endif
        this->animations = &anim_truck_388;
        if (!anim_truck_388_initialized) {
            anim_truck_388_initialized = true;
            images_truck_388_0_0[0] = get_internal_image(1568);
            images_truck_388_0_8[0] = get_internal_image(1432);
            images_truck_388_0_16[0] = get_internal_image(1304);
            images_truck_388_0_24[0] = get_internal_image(1429);
            images_truck_388_1_0[0] = get_internal_image(3333);
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
FrameObject * create_truck_388(int x, int y)
{
    return new (Active::pool.create()) Truck_388(x, y);
}
static Image* images_zipstart_389_0_0[1];
static Direction direction_zipstart_389_0_0 = {0, 50, 50, 0, 1, images_zipstart_389_0_0, 1};
static Animation anim_zipstart_389_0 = {&direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, NULL, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0, &direction_zipstart_389_0_0};
static Animation * anim_array_zipstart_389[1] = {&anim_zipstart_389_0};
static Animations anim_zipstart_389 = {1, &anim_array_zipstart_389[0]};
static bool anim_zipstart_389_initialized;
class ZipStart_389 : public Active
{
public:
    ZipStart_389(int x, int y) : Active(x, y, ZipStart_389_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Zip Start", 9);
#endif
        this->animations = &anim_zipstart_389;
        if (!anim_zipstart_389_initialized) {
            anim_zipstart_389_initialized = true;
            images_zipstart_389_0_0[0] = get_internal_image(2407);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_up_38);
    }
};
FrameObject * create_zipstart_389(int x, int y)
{
    return new (Active::pool.create()) ZipStart_389(x, y);
}
static Image* images_zipend_390_0_0[1];
static Direction direction_zipend_390_0_0 = {0, 50, 50, 0, 1, images_zipend_390_0_0, 1};
static Animation anim_zipend_390_0 = {&direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, NULL, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0, &direction_zipend_390_0_0};
static Animation * anim_array_zipend_390[1] = {&anim_zipend_390_0};
static Animations anim_zipend_390 = {1, &anim_array_zipend_390[0]};
static bool anim_zipend_390_initialized;
class ZipEnd_390 : public Active
{
public:
    ZipEnd_390(int x, int y) : Active(x, y, ZipEnd_390_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Zip End", 7);
#endif
        this->animations = &anim_zipend_390;
        if (!anim_zipend_390_initialized) {
            anim_zipend_390_initialized = true;
            images_zipend_390_0_0[0] = get_internal_image(2408);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_zipend_390(int x, int y)
{
    return new (Active::pool.create()) ZipEnd_390(x, y);
}
static Image* images_waypointtruckpark_391_0_0[1];
static Direction direction_waypointtruckpark_391_0_0 = {0, 50, 50, 0, 1, images_waypointtruckpark_391_0_0, 1};
static Animation anim_waypointtruckpark_391_0 = {&direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, NULL, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0, &direction_waypointtruckpark_391_0_0};
static Animation * anim_array_waypointtruckpark_391[1] = {&anim_waypointtruckpark_391_0};
static Animations anim_waypointtruckpark_391 = {1, &anim_array_waypointtruckpark_391[0]};
static bool anim_waypointtruckpark_391_initialized;
class WaypointTruckPARK_391 : public Active
{
public:
    WaypointTruckPARK_391(int x, int y) : Active(x, y, WaypointTruckPARK_391_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Waypoint - Truck PARK", 21);
#endif
        set_visible(false);
        this->animations = &anim_waypointtruckpark_391;
        if (!anim_waypointtruckpark_391_initialized) {
            anim_waypointtruckpark_391_initialized = true;
            images_waypointtruckpark_391_0_0[0] = get_internal_image(1428);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_waypointtruckpark_391(int x, int y)
{
    return new (Active::pool.create()) WaypointTruckPARK_391(x, y);
}
class Warden_392 : public ListObject
{
public:
    Warden_392(int x, int y) : ListObject(x, y, Warden_392_type)
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
        add_line(std::string("Chinsworth", 10));
        add_line(std::string("Stuart Foot", 11));
        add_line(std::string("Monkey Alan", 11));
        add_line(std::string("Craig Monkford", 14));
        add_line(std::string("Geoff Lamp", 10));
        add_line(std::string("Davis", 5));
        list_flags |= SORT_LIST;
        index_offset = current_line = -1;
    }
};
FrameObject * create_warden_392(int x, int y)
{
    return new (ListObject::pool.create()) Warden_392(x, y);
}
class BuddiesText : public TextBlitter
{
public:
    BuddiesText(int x, int y) : TextBlitter(x, y, buddiesText_type)
    {
        // qualifiers: 55
#ifndef NDEBUG
        name = std::string("Text_Buddies", 12);
#endif
        flags &= ~SCROLL;
        width = 52;
        height = 15;
        char_width = 9;
        char_height = 13;
        x_spacing = 0;
        y_spacing = 0;
        char_offset = 0;
        x_off = 0;
        y_off = 0;
        image = get_internal_image(1439);
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
        set_text(std::string("+x5", 3));
        has_callback = false;
        create_alterables();
        alterables->strings.set(5, str_buddies_39);
    }
};
FrameObject * create_buddiesText(int x, int y)
{
    return new (TextBlitter::pool.create()) BuddiesText(x, y);
}
static Image* images_lookinmateflag60_394_0_0[1];
static Direction direction_lookinmateflag60_394_0_0 = {0, 50, 50, 0, 1, images_lookinmateflag60_394_0_0, 1};
static Animation anim_lookinmateflag60_394_0 = {&direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, NULL, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0, &direction_lookinmateflag60_394_0_0};
static Image* images_lookinmateflag60_394_5_0[1];
static Direction direction_lookinmateflag60_394_5_0 = {0, 50, 50, 0, -1, images_lookinmateflag60_394_5_0, 1};
static Animation anim_lookinmateflag60_394_5 = {&direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, NULL, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0, &direction_lookinmateflag60_394_5_0};
static Animation * anim_array_lookinmateflag60_394[6] = {&anim_lookinmateflag60_394_0, NULL, NULL, NULL, NULL, &anim_lookinmateflag60_394_5};
static Animations anim_lookinmateflag60_394 = {6, &anim_array_lookinmateflag60_394[0]};
static bool anim_lookinmateflag60_394_initialized;
class LookInmateFlag60_394 : public Active
{
public:
    LookInmateFlag60_394(int x, int y) : Active(x, y, LookInmateFlag60_394_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Look - Inmate - flag 60", 23);
#endif
        this->animations = &anim_lookinmateflag60_394;
        if (!anim_lookinmateflag60_394_initialized) {
            anim_lookinmateflag60_394_initialized = true;
            images_lookinmateflag60_394_0_0[0] = get_internal_image(2330);
            images_lookinmateflag60_394_5_0[0] = get_internal_image(1008);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_lookinmateflag60_394(int x, int y)
{
    return new (Active::pool.create()) LookInmateFlag60_394(x, y);
}
static Image* images_containertailorout_395_0_0[1];
static Direction direction_containertailorout_395_0_0 = {0, 50, 50, 0, -1, images_containertailorout_395_0_0, 1};
static Image* images_containertailorout_395_0_16[1];
static Direction direction_containertailorout_395_0_16 = {16, 50, 50, 0, -1, images_containertailorout_395_0_16, 1};
static Animation anim_containertailorout_395_0 = {&direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, NULL, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, &direction_containertailorout_395_0_16, NULL, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0, &direction_containertailorout_395_0_0};
static Animation * anim_array_containertailorout_395[1] = {&anim_containertailorout_395_0};
static Animations anim_containertailorout_395 = {1, &anim_array_containertailorout_395[0]};
static bool anim_containertailorout_395_initialized;
class ContainerTailorOUT_395 : public Active
{
public:
    ContainerTailorOUT_395(int x, int y) : Active(x, y, ContainerTailorOUT_395_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Container - Tailor OUT", 22);
#endif
        this->animations = &anim_containertailorout_395;
        if (!anim_containertailorout_395_initialized) {
            anim_containertailorout_395_initialized = true;
            images_containertailorout_395_0_0[0] = get_internal_image(1475);
            images_containertailorout_395_0_16[0] = get_internal_image(3349);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_timber_20);
    }
};
FrameObject * create_containertailorout_395(int x, int y)
{
    return new (Active::pool.create()) ContainerTailorOUT_395(x, y);
}
static Image* images_containertailorin_396_0_0[1];
static Direction direction_containertailorin_396_0_0 = {0, 50, 50, 0, -1, images_containertailorin_396_0_0, 1};
static Animation anim_containertailorin_396_0 = {&direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, NULL, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0, &direction_containertailorin_396_0_0};
static Animation * anim_array_containertailorin_396[1] = {&anim_containertailorin_396_0};
static Animations anim_containertailorin_396 = {1, &anim_array_containertailorin_396[0]};
static bool anim_containertailorin_396_initialized;
class ContainerTailorIN_396 : public Active
{
public:
    ContainerTailorIN_396(int x, int y) : Active(x, y, ContainerTailorIN_396_type)
    {
        // qualifiers: 63, 80
#ifndef NDEBUG
        name = std::string("Container - Tailor IN", 21);
#endif
        this->animations = &anim_containertailorin_396;
        if (!anim_containertailorin_396_initialized) {
            anim_containertailorin_396_initialized = true;
            images_containertailorin_396_0_0[0] = get_internal_image(1476);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_timber_20);
    }
};
FrameObject * create_containertailorin_396(int x, int y)
{
    return new (Active::pool.create()) ContainerTailorIN_396(x, y);
}
static Image* images_containerdeliveries_397_0_0[1];
static Direction direction_containerdeliveries_397_0_0 = {0, 50, 50, 0, -1, images_containerdeliveries_397_0_0, 1};
static Animation anim_containerdeliveries_397_0 = {&direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, NULL, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0, &direction_containerdeliveries_397_0_0};
static Image* images_containerdeliveries_397_5_0[1];
static Direction direction_containerdeliveries_397_5_0 = {0, 50, 50, 0, -1, images_containerdeliveries_397_5_0, 1};
static Animation anim_containerdeliveries_397_5 = {&direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, NULL, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0, &direction_containerdeliveries_397_5_0};
static Animation * anim_array_containerdeliveries_397[6] = {&anim_containerdeliveries_397_0, NULL, NULL, NULL, NULL, &anim_containerdeliveries_397_5};
static Animations anim_containerdeliveries_397 = {6, &anim_array_containerdeliveries_397[0]};
static bool anim_containerdeliveries_397_initialized;
class ContainerDeliveries_397 : public Active
{
public:
    ContainerDeliveries_397(int x, int y) : Active(x, y, ContainerDeliveries_397_type)
    {
        // qualifiers: 80, 88, 91
#ifndef NDEBUG
        name = std::string("Container - Deliveries", 22);
#endif
        this->animations = &anim_containerdeliveries_397;
        if (!anim_containerdeliveries_397_initialized) {
            anim_containerdeliveries_397_initialized = true;
            images_containerdeliveries_397_0_0[0] = get_internal_image(1430);
            images_containerdeliveries_397_5_0[0] = get_internal_image(3355);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_storage_40);
    }
};
FrameObject * create_containerdeliveries_397(int x, int y)
{
    return new (Active::pool.create()) ContainerDeliveries_397(x, y);
}
static Image* images_containerdeliveries2_398_0_0[1];
static Direction direction_containerdeliveries2_398_0_0 = {0, 50, 50, 0, -1, images_containerdeliveries2_398_0_0, 1};
static Animation anim_containerdeliveries2_398_0 = {&direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, NULL, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0, &direction_containerdeliveries2_398_0_0};
static Image* images_containerdeliveries2_398_5_0[4];
static Direction direction_containerdeliveries2_398_5_0 = {0, 25, 25, 0, -1, images_containerdeliveries2_398_5_0, 4};
static Animation anim_containerdeliveries2_398_5 = {&direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, NULL, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0, &direction_containerdeliveries2_398_5_0};
static Animation * anim_array_containerdeliveries2_398[6] = {&anim_containerdeliveries2_398_0, NULL, NULL, NULL, NULL, &anim_containerdeliveries2_398_5};
static Animations anim_containerdeliveries2_398 = {6, &anim_array_containerdeliveries2_398[0]};
static bool anim_containerdeliveries2_398_initialized;
class ContainerDeliveries2_398 : public Active
{
public:
    ContainerDeliveries2_398(int x, int y) : Active(x, y, ContainerDeliveries2_398_type)
    {
        // qualifiers: 80, 88, 91
#ifndef NDEBUG
        name = std::string("Container - Deliveries 2", 24);
#endif
        this->animations = &anim_containerdeliveries2_398;
        if (!anim_containerdeliveries2_398_initialized) {
            anim_containerdeliveries2_398_initialized = true;
            images_containerdeliveries2_398_0_0[0] = get_internal_image(1478);
            images_containerdeliveries2_398_5_0[0] = get_internal_image(3358);
            images_containerdeliveries2_398_5_0[1] = get_internal_image(3357);
            images_containerdeliveries2_398_5_0[2] = get_internal_image(3356);
            images_containerdeliveries2_398_5_0[3] = get_internal_image(3357);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_storage_40);
    }
};
FrameObject * create_containerdeliveries2_398(int x, int y)
{
    return new (Active::pool.create()) ContainerDeliveries2_398(x, y);
}
static Image* images_containermail_399_0_0[1];
static Direction direction_containermail_399_0_0 = {0, 50, 50, 0, -1, images_containermail_399_0_0, 1};
static Animation anim_containermail_399_0 = {&direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, NULL, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0, &direction_containermail_399_0_0};
static Animation * anim_array_containermail_399[1] = {&anim_containermail_399_0};
static Animations anim_containermail_399 = {1, &anim_array_containermail_399[0]};
static bool anim_containermail_399_initialized;
class ContainerMail_399 : public Active
{
public:
    ContainerMail_399(int x, int y) : Active(x, y, ContainerMail_399_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("container - mail", 16);
#endif
        this->animations = &anim_containermail_399;
        if (!anim_containermail_399_initialized) {
            anim_containermail_399_initialized = true;
            images_containermail_399_0_0[0] = get_internal_image(1481);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_timber_20);
    }
};
FrameObject * create_containermail_399(int x, int y)
{
    return new (Active::pool.create()) ContainerMail_399(x, y);
}
static Image* images_doormailroom_400_0_0[1];
static Direction direction_doormailroom_400_0_0 = {0, 50, 50, 0, -1, images_doormailroom_400_0_0, 1};
static Image* images_doormailroom_400_0_16[1];
static Direction direction_doormailroom_400_0_16 = {16, 50, 50, 0, -1, images_doormailroom_400_0_16, 1};
static Animation anim_doormailroom_400_0 = {&direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, NULL, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, &direction_doormailroom_400_0_16, NULL, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0, &direction_doormailroom_400_0_0};
static Animation * anim_array_doormailroom_400[1] = {&anim_doormailroom_400_0};
static Animations anim_doormailroom_400 = {1, &anim_array_doormailroom_400[0]};
static bool anim_doormailroom_400_initialized;
class DoorMailroom_400 : public Active
{
public:
    DoorMailroom_400(int x, int y) : Active(x, y, DoorMailroom_400_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Mailroom", 15);
#endif
        this->animations = &anim_doormailroom_400;
        if (!anim_doormailroom_400_initialized) {
            anim_doormailroom_400_initialized = true;
            images_doormailroom_400_0_0[0] = get_internal_image(1221);
            images_doormailroom_400_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_mailroom_41);
    }
};
FrameObject * create_doormailroom_400(int x, int y)
{
    return new (Active::pool.create()) DoorMailroom_400(x, y);
}
static Image* images_doordeliveries_401_0_0[1];
static Direction direction_doordeliveries_401_0_0 = {0, 50, 50, 0, -1, images_doordeliveries_401_0_0, 1};
static Image* images_doordeliveries_401_0_16[1];
static Direction direction_doordeliveries_401_0_16 = {16, 50, 50, 0, -1, images_doordeliveries_401_0_16, 1};
static Animation anim_doordeliveries_401_0 = {&direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, NULL, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, &direction_doordeliveries_401_0_16, NULL, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0, &direction_doordeliveries_401_0_0};
static Animation * anim_array_doordeliveries_401[1] = {&anim_doordeliveries_401_0};
static Animations anim_doordeliveries_401 = {1, &anim_array_doordeliveries_401[0]};
static bool anim_doordeliveries_401_initialized;
class DoorDeliveries_401 : public Active
{
public:
    DoorDeliveries_401(int x, int y) : Active(x, y, DoorDeliveries_401_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Deliveries", 17);
#endif
        this->animations = &anim_doordeliveries_401;
        if (!anim_doordeliveries_401_initialized) {
            anim_doordeliveries_401_initialized = true;
            images_doordeliveries_401_0_0[0] = get_internal_image(1221);
            images_doordeliveries_401_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_unloading_42);
    }
};
FrameObject * create_doordeliveries_401(int x, int y)
{
    return new (Active::pool.create()) DoorDeliveries_401(x, y);
}
static Image* images_doorgardening_402_0_0[1];
static Direction direction_doorgardening_402_0_0 = {0, 50, 50, 0, -1, images_doorgardening_402_0_0, 1};
static Image* images_doorgardening_402_0_16[1];
static Direction direction_doorgardening_402_0_16 = {16, 50, 50, 0, -1, images_doorgardening_402_0_16, 1};
static Animation anim_doorgardening_402_0 = {&direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, NULL, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, &direction_doorgardening_402_0_16, NULL, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0, &direction_doorgardening_402_0_0};
static Animation * anim_array_doorgardening_402[1] = {&anim_doorgardening_402_0};
static Animations anim_doorgardening_402 = {1, &anim_array_doorgardening_402[0]};
static bool anim_doorgardening_402_initialized;
class DoorGardening_402 : public Active
{
public:
    DoorGardening_402(int x, int y) : Active(x, y, DoorGardening_402_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Gardening", 16);
#endif
        this->animations = &anim_doorgardening_402;
        if (!anim_doorgardening_402_initialized) {
            anim_doorgardening_402_initialized = true;
            images_doorgardening_402_0_0[0] = get_internal_image(1221);
            images_doorgardening_402_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_gardening_43);
    }
};
FrameObject * create_doorgardening_402(int x, int y)
{
    return new (Active::pool.create()) DoorGardening_402(x, y);
}
static Image* images_doortailor_403_0_0[1];
static Direction direction_doortailor_403_0_0 = {0, 50, 50, 0, -1, images_doortailor_403_0_0, 1};
static Image* images_doortailor_403_0_16[1];
static Direction direction_doortailor_403_0_16 = {16, 50, 50, 0, -1, images_doortailor_403_0_16, 1};
static Animation anim_doortailor_403_0 = {&direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, NULL, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, &direction_doortailor_403_0_16, NULL, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0, &direction_doortailor_403_0_0};
static Animation * anim_array_doortailor_403[1] = {&anim_doortailor_403_0};
static Animations anim_doortailor_403 = {1, &anim_array_doortailor_403[0]};
static bool anim_doortailor_403_initialized;
class DoorTailor_403 : public Active
{
public:
    DoorTailor_403(int x, int y) : Active(x, y, DoorTailor_403_type)
    {
        // qualifiers: 11
#ifndef NDEBUG
        name = std::string("Door - Tailor", 13);
#endif
        this->animations = &anim_doortailor_403;
        if (!anim_doortailor_403_initialized) {
            anim_doortailor_403_initialized = true;
            images_doortailor_403_0_0[0] = get_internal_image(1221);
            images_doortailor_403_0_16[0] = get_internal_image(1227);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_tailorshop_44);
    }
};
FrameObject * create_doortailor_403(int x, int y)
{
    return new (Active::pool.create()) DoorTailor_403(x, y);
}
static Image* images_tv_404_0_0[1];
static Direction direction_tv_404_0_0 = {0, 5, 5, 0, -1, images_tv_404_0_0, 1};
static Animation anim_tv_404_0 = {&direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, NULL, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0, &direction_tv_404_0_0};
static Image* images_tv_404_1_0[5];
static Direction direction_tv_404_1_0 = {0, 50, 50, 0, -1, images_tv_404_1_0, 5};
static Animation anim_tv_404_1 = {&direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, NULL, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0, &direction_tv_404_1_0};
static Animation * anim_array_tv_404[2] = {&anim_tv_404_0, &anim_tv_404_1};
static Animations anim_tv_404 = {2, &anim_array_tv_404[0]};
static bool anim_tv_404_initialized;
class TV_404 : public Active
{
public:
    TV_404(int x, int y) : Active(x, y, TV_404_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("TV", 2);
#endif
        this->animations = &anim_tv_404;
        if (!anim_tv_404_initialized) {
            anim_tv_404_initialized = true;
            images_tv_404_0_0[0] = get_internal_image(683);
            images_tv_404_1_0[0] = get_internal_image(1482);
            images_tv_404_1_0[1] = get_internal_image(1477);
            images_tv_404_1_0[2] = get_internal_image(1483);
            images_tv_404_1_0[3] = get_internal_image(1485);
            images_tv_404_1_0[4] = get_internal_image(1483);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_tv_404(int x, int y)
{
    return new (Active::pool.create()) TV_404(x, y);
}
static Image* images_bedlounger_405_0_24[1];
static Direction direction_bedlounger_405_0_24 = {24, 50, 50, 0, -1, images_bedlounger_405_0_24, 1};
static Animation anim_bedlounger_405_0 = {&direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, NULL, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24, &direction_bedlounger_405_0_24};
static Animation * anim_array_bedlounger_405[1] = {&anim_bedlounger_405_0};
static Animations anim_bedlounger_405 = {1, &anim_array_bedlounger_405[0]};
static bool anim_bedlounger_405_initialized;
class BedLounger_405 : public Active
{
public:
    BedLounger_405(int x, int y) : Active(x, y, BedLounger_405_type)
    {
        // qualifiers: 14, 28
#ifndef NDEBUG
        name = std::string("Bed - Lounger", 13);
#endif
        this->animations = &anim_bedlounger_405;
        if (!anim_bedlounger_405_initialized) {
            anim_bedlounger_405_initialized = true;
            images_bedlounger_405_0_24[0] = get_internal_image(1480);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_bedlounger_405(int x, int y)
{
    return new (Active::pool.create()) BedLounger_405(x, y);
}
static Image* images_helpTopicCursor_0_0[1];
static Direction direction_helpTopicCursor_0_0 = {0, 50, 50, 0, 1, images_helpTopicCursor_0_0, 1};
static Animation anim_helpTopicCursor_0 = {&direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, NULL, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0, &direction_helpTopicCursor_0_0};
static Animation * anim_array_helpTopicCursor[1] = {&anim_helpTopicCursor_0};
static Animations anim_helpTopicCursor = {1, &anim_array_helpTopicCursor[0]};
static bool anim_helpTopicCursor_initialized;
class HelpTopicCursor : public Active
{
public:
    HelpTopicCursor(int x, int y) : Active(x, y, helpTopicCursor_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Menu Cursor", 11);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_helpTopicCursor;
        if (!anim_helpTopicCursor_initialized) {
            anim_helpTopicCursor_initialized = true;
            images_helpTopicCursor_0_0[0] = get_internal_image(1291);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(192, 192, 192, 115);
        set_shader(Render::INVERT);
        create_alterables();
    }
};
FrameObject * create_helpTopicCursor(int x, int y)
{
    return new (Active::pool.create()) HelpTopicCursor(x, y);
}
static Image* images_joggingmat_407_0_0[1];
static Direction direction_joggingmat_407_0_0 = {0, 50, 50, 0, -1, images_joggingmat_407_0_0, 1};
static Animation anim_joggingmat_407_0 = {&direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, NULL, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0, &direction_joggingmat_407_0_0};
static Animation * anim_array_joggingmat_407[1] = {&anim_joggingmat_407_0};
static Animations anim_joggingmat_407 = {1, &anim_array_joggingmat_407[0]};
static bool anim_joggingmat_407_initialized;
class JoggingMat_407 : public Active
{
public:
    JoggingMat_407(int x, int y) : Active(x, y, JoggingMat_407_type)
    {
        // qualifiers: 28, 93
#ifndef NDEBUG
        name = std::string("Jogging Mat", 11);
#endif
        this->animations = &anim_joggingmat_407;
        if (!anim_joggingmat_407_initialized) {
            anim_joggingmat_407_initialized = true;
            images_joggingmat_407_0_0[0] = get_internal_image(1293);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_jogging_45);
    }
};
FrameObject * create_joggingmat_407(int x, int y)
{
    return new (Active::pool.create()) JoggingMat_407(x, y);
}
static Image* images_pushupmat_408_0_16[1];
static Direction direction_pushupmat_408_0_16 = {16, 50, 50, 0, -1, images_pushupmat_408_0_16, 1};
static Animation anim_pushupmat_408_0 = {NULL, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16, &direction_pushupmat_408_0_16};
static Animation * anim_array_pushupmat_408[1] = {&anim_pushupmat_408_0};
static Animations anim_pushupmat_408 = {1, &anim_array_pushupmat_408[0]};
static bool anim_pushupmat_408_initialized;
class PushupMat_408 : public Active
{
public:
    PushupMat_408(int x, int y) : Active(x, y, PushupMat_408_type)
    {
        // qualifiers: 28, 93
#ifndef NDEBUG
        name = std::string("Pushup Mat", 10);
#endif
        this->animations = &anim_pushupmat_408;
        if (!anim_pushupmat_408_initialized) {
            anim_pushupmat_408_initialized = true;
            images_pushupmat_408_0_16[0] = get_internal_image(1489);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_press_ups_46);
    }
};
FrameObject * create_pushupmat_408(int x, int y)
{
    return new (Active::pool.create()) PushupMat_408(x, y);
}
static Image* images_containergardening_409_0_0[1];
static Direction direction_containergardening_409_0_0 = {0, 50, 50, 0, -1, images_containergardening_409_0_0, 1};
static Animation anim_containergardening_409_0 = {&direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, NULL, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0, &direction_containergardening_409_0_0};
static Animation * anim_array_containergardening_409[1] = {&anim_containergardening_409_0};
static Animations anim_containergardening_409 = {1, &anim_array_containergardening_409[0]};
static bool anim_containergardening_409_initialized;
class ContainerGardening_409 : public Active
{
public:
    ContainerGardening_409(int x, int y) : Active(x, y, ContainerGardening_409_type)
    {
        // qualifiers: 15, 26, 63
#ifndef NDEBUG
        name = std::string("Container - Gardening", 21);
#endif
        this->animations = &anim_containergardening_409;
        if (!anim_containergardening_409_initialized) {
            anim_containergardening_409_initialized = true;
            images_containergardening_409_0_0[0] = get_internal_image(1441);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_gardening_43);
    }
};
FrameObject * create_containergardening_409(int x, int y)
{
    return new (Active::pool.create()) ContainerGardening_409(x, y);
}
static Image* images_minimapwall_410_0_0[1];
static Direction direction_minimapwall_410_0_0 = {0, 50, 50, 0, 1, images_minimapwall_410_0_0, 1};
static Animation anim_minimapwall_410_0 = {&direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, NULL, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0, &direction_minimapwall_410_0_0};
static Animation * anim_array_minimapwall_410[1] = {&anim_minimapwall_410_0};
static Animations anim_minimapwall_410 = {1, &anim_array_minimapwall_410[0]};
static bool anim_minimapwall_410_initialized;
class MinimapWall_410 : public Active
{
public:
    MinimapWall_410(int x, int y) : Active(x, y, MinimapWall_410_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("minimap_wall", 12);
#endif
        this->animations = &anim_minimapwall_410;
        if (!anim_minimapwall_410_initialized) {
            anim_minimapwall_410_initialized = true;
            images_minimapwall_410_0_0[0] = get_internal_image(89);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_minimapwall_410(int x, int y)
{
    return new (Active::pool.create()) MinimapWall_410(x, y);
}
static Image* images_active2_411_0_0[1];
static Direction direction_active2_411_0_0 = {0, 50, 50, 0, 1, images_active2_411_0_0, 1};
static Animation anim_active2_411_0 = {&direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, NULL, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0, &direction_active2_411_0_0};
static Animation * anim_array_active2_411[1] = {&anim_active2_411_0};
static Animations anim_active2_411 = {1, &anim_array_active2_411[0]};
static bool anim_active2_411_initialized;
class Active2_411 : public Active
{
public:
    Active2_411(int x, int y) : Active(x, y, Active2_411_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 2", 8);
#endif
        this->animations = &anim_active2_411;
        if (!anim_active2_411_initialized) {
            anim_active2_411_initialized = true;
            images_active2_411_0_0[0] = get_internal_image(100);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_active2_411(int x, int y)
{
    return new (Active::pool.create()) Active2_411(x, y);
}
static Image* images_brace_412_0_0[1];
static Direction direction_brace_412_0_0 = {0, 50, 50, 0, -1, images_brace_412_0_0, 1};
static Animation anim_brace_412_0 = {&direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, NULL, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0, &direction_brace_412_0_0};
static Animation * anim_array_brace_412[1] = {&anim_brace_412_0};
static Animations anim_brace_412 = {1, &anim_array_brace_412[0]};
static bool anim_brace_412_initialized;
class Brace_412 : public Active
{
public:
    Brace_412(int x, int y) : Active(x, y, Brace_412_type)
    {
        // qualifiers: 99
#ifndef NDEBUG
        name = std::string("Brace", 5);
#endif
        this->animations = &anim_brace_412;
        if (!anim_brace_412_initialized) {
            anim_brace_412_initialized = true;
            images_brace_412_0_0[0] = get_internal_image(932);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_brace_412(int x, int y)
{
    return new (Active::pool.create()) Brace_412(x, y);
}
static Image* images_snow_413_0_0[1];
static Direction direction_snow_413_0_0 = {0, 50, 50, 0, 1, images_snow_413_0_0, 1};
static Animation anim_snow_413_0 = {&direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, NULL, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0, &direction_snow_413_0_0};
static Image* images_snow_413_6_0[1];
static Direction direction_snow_413_6_0 = {0, 50, 50, 0, -1, images_snow_413_6_0, 1};
static Animation anim_snow_413_6 = {&direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, NULL, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0, &direction_snow_413_6_0};
static Animation * anim_array_snow_413[7] = {&anim_snow_413_0, NULL, NULL, NULL, NULL, NULL, &anim_snow_413_6};
static Animations anim_snow_413 = {7, &anim_array_snow_413[0]};
static bool anim_snow_413_initialized;
class Snow_413 : public Active
{
public:
    Snow_413(int x, int y) : Active(x, y, Snow_413_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Snow", 4);
#endif
        this->animations = &anim_snow_413;
        if (!anim_snow_413_initialized) {
            anim_snow_413_initialized = true;
            images_snow_413_0_0[0] = get_internal_image(102);
            images_snow_413_6_0[0] = get_internal_image(1252);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::ADDITIVE);
        set_direction(pick_random(5, 22, 23, 24, 25, 26));
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
FrameObject * create_snow_413(int x, int y)
{
    return new (Active::pool.create()) Snow_413(x, y);
}
static Image* images_mine_414_0_0[2];
static Direction direction_mine_414_0_0 = {0, 5, 5, 0, -1, images_mine_414_0_0, 2};
static Animation anim_mine_414_0 = {&direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, NULL, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0, &direction_mine_414_0_0};
static Animation * anim_array_mine_414[1] = {&anim_mine_414_0};
static Animations anim_mine_414 = {1, &anim_array_mine_414[0]};
static bool anim_mine_414_initialized;
class Mine_414 : public Active
{
public:
    Mine_414(int x, int y) : Active(x, y, Mine_414_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Mine", 4);
#endif
        this->animations = &anim_mine_414;
        if (!anim_mine_414_initialized) {
            anim_mine_414_initialized = true;
            images_mine_414_0_0[0] = get_internal_image(591);
            images_mine_414_0_0[1] = get_internal_image(755);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(4, 100);
    }
};
FrameObject * create_mine_414(int x, int y)
{
    return new (Active::pool.create()) Mine_414(x, y);
}
static Image* images_patroljeepwpright_415_0_0[1];
static Direction direction_patroljeepwpright_415_0_0 = {0, 50, 50, 0, -1, images_patroljeepwpright_415_0_0, 1};
static Animation anim_patroljeepwpright_415_0 = {&direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, NULL, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0, &direction_patroljeepwpright_415_0_0};
static Animation * anim_array_patroljeepwpright_415[1] = {&anim_patroljeepwpright_415_0};
static Animations anim_patroljeepwpright_415 = {1, &anim_array_patroljeepwpright_415[0]};
static bool anim_patroljeepwpright_415_initialized;
class PatrolJeepWPRight_415 : public Active
{
public:
    PatrolJeepWPRight_415(int x, int y) : Active(x, y, PatrolJeepWPRight_415_type)
    {
        // qualifiers: 92
#ifndef NDEBUG
        name = std::string("Patrol Jeep WP - Right", 22);
#endif
        set_visible(false);
        this->animations = &anim_patroljeepwpright_415;
        if (!anim_patroljeepwpright_415_initialized) {
            anim_patroljeepwpright_415_initialized = true;
            images_patroljeepwpright_415_0_0[0] = get_internal_image(1487);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(0);
        create_alterables();
    }
};
FrameObject * create_patroljeepwpright_415(int x, int y)
{
    return new (Active::pool.create()) PatrolJeepWPRight_415(x, y);
}
static Image* images_patroljeep_416_0_0[3];
static Direction direction_patroljeep_416_0_0 = {0, 10, 10, 0, -1, images_patroljeep_416_0_0, 3};
static Image* images_patroljeep_416_0_8[1];
static Direction direction_patroljeep_416_0_8 = {8, 10, 10, 0, -1, images_patroljeep_416_0_8, 1};
static Image* images_patroljeep_416_0_16[1];
static Direction direction_patroljeep_416_0_16 = {16, 10, 10, 0, -1, images_patroljeep_416_0_16, 1};
static Image* images_patroljeep_416_0_24[1];
static Direction direction_patroljeep_416_0_24 = {24, 10, 10, 0, -1, images_patroljeep_416_0_24, 1};
static Animation anim_patroljeep_416_0 = {&direction_patroljeep_416_0_0, &direction_patroljeep_416_0_0, &direction_patroljeep_416_0_0, &direction_patroljeep_416_0_0, NULL, &direction_patroljeep_416_0_8, &direction_patroljeep_416_0_8, &direction_patroljeep_416_0_8, &direction_patroljeep_416_0_8, &direction_patroljeep_416_0_8, &direction_patroljeep_416_0_8, &direction_patroljeep_416_0_8, NULL, &direction_patroljeep_416_0_16, &direction_patroljeep_416_0_16, &direction_patroljeep_416_0_16, &direction_patroljeep_416_0_16, &direction_patroljeep_416_0_16, &direction_patroljeep_416_0_16, &direction_patroljeep_416_0_16, NULL, &direction_patroljeep_416_0_24, &direction_patroljeep_416_0_24, &direction_patroljeep_416_0_24, &direction_patroljeep_416_0_24, &direction_patroljeep_416_0_24, &direction_patroljeep_416_0_24, &direction_patroljeep_416_0_24, NULL, &direction_patroljeep_416_0_0, &direction_patroljeep_416_0_0, &direction_patroljeep_416_0_0};
static Image* images_patroljeep_416_1_0[2];
static Direction direction_patroljeep_416_1_0 = {0, 10, 10, 0, -1, images_patroljeep_416_1_0, 2};
static Image* images_patroljeep_416_1_8[2];
static Direction direction_patroljeep_416_1_8 = {8, 10, 10, 0, -1, images_patroljeep_416_1_8, 2};
static Image* images_patroljeep_416_1_16[2];
static Direction direction_patroljeep_416_1_16 = {16, 10, 10, 0, -1, images_patroljeep_416_1_16, 2};
static Image* images_patroljeep_416_1_24[2];
static Direction direction_patroljeep_416_1_24 = {24, 10, 10, 0, -1, images_patroljeep_416_1_24, 2};
static Animation anim_patroljeep_416_1 = {&direction_patroljeep_416_1_0, &direction_patroljeep_416_1_0, &direction_patroljeep_416_1_0, &direction_patroljeep_416_1_0, NULL, &direction_patroljeep_416_1_8, &direction_patroljeep_416_1_8, &direction_patroljeep_416_1_8, &direction_patroljeep_416_1_8, &direction_patroljeep_416_1_8, &direction_patroljeep_416_1_8, &direction_patroljeep_416_1_8, NULL, &direction_patroljeep_416_1_16, &direction_patroljeep_416_1_16, &direction_patroljeep_416_1_16, &direction_patroljeep_416_1_16, &direction_patroljeep_416_1_16, &direction_patroljeep_416_1_16, &direction_patroljeep_416_1_16, NULL, &direction_patroljeep_416_1_24, &direction_patroljeep_416_1_24, &direction_patroljeep_416_1_24, &direction_patroljeep_416_1_24, &direction_patroljeep_416_1_24, &direction_patroljeep_416_1_24, &direction_patroljeep_416_1_24, NULL, &direction_patroljeep_416_1_0, &direction_patroljeep_416_1_0, &direction_patroljeep_416_1_0};
static Animation * anim_array_patroljeep_416[2] = {&anim_patroljeep_416_0, &anim_patroljeep_416_1};
static Animations anim_patroljeep_416 = {2, &anim_array_patroljeep_416[0]};
static bool anim_patroljeep_416_initialized;
class PatrolJeep_416 : public Active
{
public:
    PatrolJeep_416(int x, int y) : Active(x, y, PatrolJeep_416_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Patrol Jeep", 11);
#endif
        this->animations = &anim_patroljeep_416;
        if (!anim_patroljeep_416_initialized) {
            anim_patroljeep_416_initialized = true;
            images_patroljeep_416_0_0[0] = get_internal_image(1543);
            images_patroljeep_416_0_0[1] = get_internal_image(3880);
            images_patroljeep_416_0_0[2] = get_internal_image(3893);
            images_patroljeep_416_0_8[0] = get_internal_image(1549);
            images_patroljeep_416_0_16[0] = get_internal_image(1545);
            images_patroljeep_416_0_24[0] = get_internal_image(1547);
            images_patroljeep_416_1_0[0] = get_internal_image(1542);
            images_patroljeep_416_1_0[1] = get_internal_image(1543);
            images_patroljeep_416_1_8[0] = get_internal_image(1548);
            images_patroljeep_416_1_8[1] = get_internal_image(1549);
            images_patroljeep_416_1_16[0] = get_internal_image(1544);
            images_patroljeep_416_1_16[1] = get_internal_image(1545);
            images_patroljeep_416_1_24[0] = get_internal_image(1546);
            images_patroljeep_416_1_24[1] = get_internal_image(1547);
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
FrameObject * create_patroljeep_416(int x, int y)
{
    return new (Active::pool.create()) PatrolJeep_416(x, y);
}
static Image* images_patroljeepwpdown_417_0_24[1];
static Direction direction_patroljeepwpdown_417_0_24 = {24, 50, 50, 0, -1, images_patroljeepwpdown_417_0_24, 1};
static Animation anim_patroljeepwpdown_417_0 = {&direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, NULL, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24, &direction_patroljeepwpdown_417_0_24};
static Animation * anim_array_patroljeepwpdown_417[1] = {&anim_patroljeepwpdown_417_0};
static Animations anim_patroljeepwpdown_417 = {1, &anim_array_patroljeepwpdown_417[0]};
static bool anim_patroljeepwpdown_417_initialized;
class PatrolJeepWPDown_417 : public Active
{
public:
    PatrolJeepWPDown_417(int x, int y) : Active(x, y, PatrolJeepWPDown_417_type)
    {
        // qualifiers: 92
#ifndef NDEBUG
        name = std::string("Patrol Jeep WP - Down", 21);
#endif
        set_visible(false);
        this->animations = &anim_patroljeepwpdown_417;
        if (!anim_patroljeepwpdown_417_initialized) {
            anim_patroljeepwpdown_417_initialized = true;
            images_patroljeepwpdown_417_0_24[0] = get_internal_image(1510);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_patroljeepwpdown_417(int x, int y)
{
    return new (Active::pool.create()) PatrolJeepWPDown_417(x, y);
}
static Image* images_patroljeepwpleft_418_0_16[1];
static Direction direction_patroljeepwpleft_418_0_16 = {16, 50, 50, 0, -1, images_patroljeepwpleft_418_0_16, 1};
static Animation anim_patroljeepwpleft_418_0 = {NULL, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16, &direction_patroljeepwpleft_418_0_16};
static Animation * anim_array_patroljeepwpleft_418[1] = {&anim_patroljeepwpleft_418_0};
static Animations anim_patroljeepwpleft_418 = {1, &anim_array_patroljeepwpleft_418[0]};
static bool anim_patroljeepwpleft_418_initialized;
class PatrolJeepWPLeft_418 : public Active
{
public:
    PatrolJeepWPLeft_418(int x, int y) : Active(x, y, PatrolJeepWPLeft_418_type)
    {
        // qualifiers: 92
#ifndef NDEBUG
        name = std::string("Patrol Jeep WP - Left", 21);
#endif
        set_visible(false);
        this->animations = &anim_patroljeepwpleft_418;
        if (!anim_patroljeepwpleft_418_initialized) {
            anim_patroljeepwpleft_418_initialized = true;
            images_patroljeepwpleft_418_0_16[0] = get_internal_image(1531);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(16);
        create_alterables();
    }
};
FrameObject * create_patroljeepwpleft_418(int x, int y)
{
    return new (Active::pool.create()) PatrolJeepWPLeft_418(x, y);
}
