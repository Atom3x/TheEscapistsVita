#include "collision.h"
#include "gencol.cpp"

static bool axisAlignedBox(const CollisionBase* collision) {
    if (!(collision->flags & BOX_COLLISION)) return false;
    if (collision->type != TRANSFORM_SPRITE_COLLISION) return true;

    float angle = static_cast<const SpriteCollision*>(collision)->angle;
    return angle == 0 || angle == 90 || angle == 180 || angle == 270;
}

template <bool check>
inline bool collide_template(CollisionBase * a, CollisionBase * b,
                             int * aabb_2)
{
    int * aabb_1 = a->aabb;

    if (check) {
        if (!collides(aabb_1, aabb_2))
            return false;
    }

    // Rotated boxes still need their source-rectangle test: a sight ray's
    // enclosing AABB can touch furniture that the ray itself never crosses.
    if (axisAlignedBox(a) && axisAlignedBox(b))
        return true;

    // calculate the overlapping area
    int x1, y1, x2, y2;
    intersect(aabb_1[0], aabb_1[1], aabb_1[2], aabb_1[3],
              aabb_2[0], aabb_2[1], aabb_2[2], aabb_2[3],
              x1, y1, x2, y2);

    // figure out the offsets of the overlapping area in each
    int offx1 = x1 - aabb_1[0];
    int offy1 = y1 - aabb_1[1];
    int offx2 = x1 - aabb_2[0];
    int offy2 = y1 - aabb_2[1];

    int w = x2 - x1;
    int h = y2 - y1;

    switch (a->type) {
        case BACKDROP_COLLISION:
            switch (b->type) {
                case SPRITE_COLLISION:
                    return collide_sprite_backdrop(b, a, w, h, offx2, offy2,
                                                   offx1, offy1);
                case TRANSFORM_SPRITE_COLLISION:
                    return collide_tsprite_backdrop(b, a, w, h, offx2, offy2,
                                                    offx1, offy1);
                default:
                    return collide_backdrop_box(a, w, h, offx1, offy1);
            }
        case SPRITE_COLLISION:
            switch (b->type) {
                case SPRITE_COLLISION:
                    return collide_sprite_sprite(a, b, w, h, offx1, offy1,
                                                 offx2, offy2);
                case TRANSFORM_SPRITE_COLLISION:
                    return collide_sprite_tsprite(a, b, w, h, offx1, offy1,
                                                  offx2, offy2);
                case BACKDROP_COLLISION:
                    return collide_sprite_backdrop(a, b, w, h, offx1, offy1,
                                                   offx2, offy2);
                case BACKGROUND_ITEM:
                    return collide_sprite_background(a, b, w, h, offx1, offy1,
                                                     offx2, offy2);
                default:
                    return collide_sprite_box(a, w, h, offx1, offy1);
            }
        case TRANSFORM_SPRITE_COLLISION:
            switch (b->type) {
                case SPRITE_COLLISION:
                    return collide_sprite_tsprite(b, a, w, h, offx2, offy2,
                                                 offx1, offy1);
                case TRANSFORM_SPRITE_COLLISION:
                    return collide_tsprite_tsprite(a, b, w, h, offx1, offy1,
                                                   offx2, offy2);
                case BACKDROP_COLLISION:
                    return collide_tsprite_backdrop(a, b, w, h, offx1, offy1,
                                                    offx2, offy2);
                case BACKGROUND_ITEM:
                    return collide_tsprite_background(a, b, w, h, offx1, offy1,
                                                      offx2, offy2);
                default:
                    return collide_tsprite_box(a, w, h, offx1, offy1);
            }
        case BACKGROUND_ITEM:
            switch (b->type) {
                case SPRITE_COLLISION:
                    return collide_sprite_background(b, a, w, h, offx2, offy2,
                                                     offx1, offy1);
                case TRANSFORM_SPRITE_COLLISION:
                    return collide_tsprite_background(b, a, w, h, offx2, offy2,
                                                      offx1, offy1);
                default:
                    return collide_background_box(a, w, h, offx1, offy1);
            }
        default:
            // case box
            switch (b->type) {
                case SPRITE_COLLISION:
                    return collide_sprite_box(b, w, h, offx2, offy2);
                case TRANSFORM_SPRITE_COLLISION:
                    return collide_tsprite_box(b, w, h, offx2, offy2);
                case BACKGROUND_ITEM:
                    return collide_background_box(b, w, h, offx2, offy2);
                case BACKDROP_COLLISION:
                    return collide_backdrop_box(b, w, h, offx2, offy2);
                default:
                    return true;
            }
    }
}

bool collide_direct(CollisionBase * a, CollisionBase * b)
{
    return collide_template<false>(a, b, b->aabb);
}

bool collide(CollisionBase * a, CollisionBase * b)
{
    return collide_template<true>(a, b, b->aabb);
}

bool collide(CollisionBase * a, CollisionBase * b, int * aabb_2)
{
    return collide_template<true>(a, b, aabb_2);
}
