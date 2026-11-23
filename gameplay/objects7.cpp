#include "objects.h"
#include "common.h"
#include "fonts.h"
#include "font.h"
#include "lists.h"

static Image* images_inmate7_628_0_24[2];
static Direction direction_inmate7_628_0_24 = {24, 6, 6, 0, -1, images_inmate7_628_0_24, 2};
static Animation anim_inmate7_628_0 = {&direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, NULL, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24, &direction_inmate7_628_0_24};
static Animation * anim_array_inmate7_628[1] = {&anim_inmate7_628_0};
static Animations anim_inmate7_628 = {1, &anim_array_inmate7_628[0]};
static bool anim_inmate7_628_initialized;
class Inmate7_628 : public Active
{
public:
    Inmate7_628(int x, int y) : Active(x, y, Inmate7_628_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 7", 8);
#endif
        this->animations = &anim_inmate7_628;
        if (!anim_inmate7_628_initialized) {
            anim_inmate7_628_initialized = true;
            images_inmate7_628_0_24[0] = get_internal_image(474);
            images_inmate7_628_0_24[1] = get_internal_image(604);
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
FrameObject * create_inmate7_628(int x, int y)
{
    return new (Active::pool.create()) Inmate7_628(x, y);
}
static Image* images_inmate2_629_0_24[2];
static Direction direction_inmate2_629_0_24 = {24, 6, 6, 0, -1, images_inmate2_629_0_24, 2};
static Animation anim_inmate2_629_0 = {&direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, NULL, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24, &direction_inmate2_629_0_24};
static Animation * anim_array_inmate2_629[1] = {&anim_inmate2_629_0};
static Animations anim_inmate2_629 = {1, &anim_array_inmate2_629[0]};
static bool anim_inmate2_629_initialized;
class Inmate2_629 : public Active
{
public:
    Inmate2_629(int x, int y) : Active(x, y, Inmate2_629_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 2", 8);
#endif
        this->animations = &anim_inmate2_629;
        if (!anim_inmate2_629_initialized) {
            anim_inmate2_629_initialized = true;
            images_inmate2_629_0_24[0] = get_internal_image(637);
            images_inmate2_629_0_24[1] = get_internal_image(624);
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
FrameObject * create_inmate2_629(int x, int y)
{
    return new (Active::pool.create()) Inmate2_629(x, y);
}
static Image* images_inmate8_630_0_24[2];
static Direction direction_inmate8_630_0_24 = {24, 6, 6, 0, -1, images_inmate8_630_0_24, 2};
static Animation anim_inmate8_630_0 = {&direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, NULL, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24, &direction_inmate8_630_0_24};
static Animation * anim_array_inmate8_630[1] = {&anim_inmate8_630_0};
static Animations anim_inmate8_630 = {1, &anim_array_inmate8_630[0]};
static bool anim_inmate8_630_initialized;
class Inmate8_630 : public Active
{
public:
    Inmate8_630(int x, int y) : Active(x, y, Inmate8_630_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 8", 8);
#endif
        this->animations = &anim_inmate8_630;
        if (!anim_inmate8_630_initialized) {
            anim_inmate8_630_initialized = true;
            images_inmate8_630_0_24[0] = get_internal_image(299);
            images_inmate8_630_0_24[1] = get_internal_image(300);
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
FrameObject * create_inmate8_630(int x, int y)
{
    return new (Active::pool.create()) Inmate8_630(x, y);
}
static Image* images_guard_631_0_24[2];
static Direction direction_guard_631_0_24 = {24, 6, 6, 0, -1, images_guard_631_0_24, 2};
static Animation anim_guard_631_0 = {&direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, NULL, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24, &direction_guard_631_0_24};
static Animation * anim_array_guard_631[1] = {&anim_guard_631_0};
static Animations anim_guard_631 = {1, &anim_array_guard_631[0]};
static bool anim_guard_631_initialized;
class Guard_631 : public Active
{
public:
    Guard_631(int x, int y) : Active(x, y, Guard_631_type)
    {
        // qualifiers: 31, 33
#ifndef NDEBUG
        name = std::string("Guard", 5);
#endif
        this->animations = &anim_guard_631;
        if (!anim_guard_631_initialized) {
            anim_guard_631_initialized = true;
            images_guard_631_0_24[0] = get_internal_image(507);
            images_guard_631_0_24[1] = get_internal_image(508);
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
FrameObject * create_guard_631(int x, int y)
{
    return new (Active::pool.create()) Guard_631(x, y);
}
static Image* images_placer_632_0_0[1];
static Direction direction_placer_632_0_0 = {0, 10, 10, 0, -1, images_placer_632_0_0, 1};
static Animation anim_placer_632_0 = {&direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, NULL, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0, &direction_placer_632_0_0};
static Animation * anim_array_placer_632[1] = {&anim_placer_632_0};
static Animations anim_placer_632 = {1, &anim_array_placer_632[0]};
static bool anim_placer_632_initialized;
class Placer_632 : public Active
{
public:
    Placer_632(int x, int y) : Active(x, y, Placer_632_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("placer", 6);
#endif
        set_visible(false);
        this->animations = &anim_placer_632;
        if (!anim_placer_632_initialized) {
            anim_placer_632_initialized = true;
            images_placer_632_0_0[0] = get_internal_image(1586);
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
        alterables->values.set(0, 1);
    }
};
FrameObject * create_placer_632(int x, int y)
{
    return new (Active::pool.create()) Placer_632(x, y);
}
class Names_633 : public ListObject
{
public:
    Names_633(int x, int y) : ListObject(x, y, Names_633_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Names", 5);
#endif
        add_line(std::string("Simon", 5));
        add_line(std::string("Mike", 4));
        add_line(std::string("Chris", 5));
        add_line(std::string("Rich", 4));
        add_line(std::string("Steve", 5));
        add_line(std::string("Levi", 4));
        add_line(std::string("Taylor", 6));
        add_line(std::string("Martin", 6));
        add_line(std::string("Gary", 4));
        add_line(std::string("Shane", 5));
        add_line(std::string("Darren", 6));
        add_line(std::string("Adam", 4));
        add_line(std::string("Lee", 3));
        add_line(std::string("Craig", 5));
        add_line(std::string("Matt", 4));
        add_line(std::string("Stuart", 6));
        add_line(std::string("Ricky", 5));
        add_line(std::string("Trevor", 6));
        add_line(std::string("Carl", 4));
        add_line(std::string("Leeroy", 6));
        add_line(std::string("Jared", 5));
        add_line(std::string("Wayne", 5));
        add_line(std::string("John", 4));
        add_line(std::string("William", 7));
        add_line(std::string("Edgar", 5));
        add_line(std::string("Nick", 4));
        add_line(std::string("Walder", 6));
        add_line(std::string("Brad", 4));
        add_line(std::string("Ross", 4));
        add_line(std::string("Max", 3));
        add_line(std::string("Paul", 4));
        add_line(std::string("Hans", 4));
        add_line(std::string("Clark", 5));
        add_line(std::string("Hank", 4));
        add_line(std::string("Walt", 4));
        add_line(std::string("Pierre", 6));
        add_line(std::string("Larcen", 6));
        add_line(std::string("Ervin", 5));
        add_line(std::string("Buster", 6));
        add_line(std::string("Marcus", 6));
        add_line(std::string("Whitney", 7));
        add_line(std::string("Gregg", 5));
        add_line(std::string("Chung", 5));
        add_line(std::string("Rory", 4));
        add_line(std::string("Marshall", 8));
        add_line(std::string("Gil", 3));
        add_line(std::string("Terrell", 7));
        add_line(std::string("Odell", 5));
        add_line(std::string("Samuel", 6));
        add_line(std::string("Lance", 5));
        add_line(std::string("Raphael", 7));
        add_line(std::string("Sang", 4));
        add_line(std::string("Shelby", 6));
        add_line(std::string("Rolando", 7));
        add_line(std::string("Micah", 5));
        add_line(std::string("Ronald", 6));
        add_line(std::string("Noah", 4));
        add_line(std::string("Liam", 4));
        add_line(std::string("Jacob", 5));
        add_line(std::string("Mason", 5));
        add_line(std::string("William", 7));
        add_line(std::string("Ethan", 5));
        add_line(std::string("Michael", 7));
        add_line(std::string("Alexander", 9));
        add_line(std::string("Jayden", 6));
        add_line(std::string("Daniel", 6));
        add_line(std::string("Elijah", 6));
        add_line(std::string("Aiden", 5));
        add_line(std::string("James", 5));
        add_line(std::string("Benjamin", 8));
        add_line(std::string("Matthew", 7));
        add_line(std::string("Jackson", 7));
        add_line(std::string("Logan", 5));
        add_line(std::string("David", 5));
        add_line(std::string("Anthony", 7));
        add_line(std::string("Joseph", 6));
        add_line(std::string("Joshua", 6));
        add_line(std::string("Andrew", 6));
        add_line(std::string("Lucas", 5));
        add_line(std::string("Isaac", 5));
        add_line(std::string("Caleb", 5));
        add_line(std::string("Henry", 5));
        add_line(std::string("Carter", 6));
        add_line(std::string("Hunter", 6));
        add_line(std::string("Owen", 4));
        add_line(std::string("Sebastian", 9));
        add_line(std::string("Isaiah", 6));
        add_line(std::string("Wyatt", 5));
        add_line(std::string("Gavin", 5));
        add_line(std::string("Julian", 6));
        add_line(std::string("Aaron", 5));
        add_line(std::string("Cameron", 7));
        add_line(std::string("Tobias", 6));
        add_line(std::string("Chase", 5));
        add_line(std::string("Bentley", 7));
        add_line(std::string("Xavier", 6));
        add_line(std::string("Mick", 4));
        add_line(std::string("Cooper", 6));
        add_line(std::string("Luis", 4));
        add_line(std::string("Jessie", 6));
        add_line(std::string("Bruce", 5));
        add_line(std::string("Morales", 7));
        add_line(std::string("Heiko", 5));
        add_line(std::string("Irwingvh", 8));
        add_line(std::string("Tasty", 5));
        add_line(std::string("Rahool", 6));
        add_line(std::string("Wolferine", 9));
        add_line(std::string("Fraggdya", 8));
        add_line(std::string("Boogie", 6));
        add_line(std::string("Supercol", 8));
        add_line(std::string("LeVeque", 7));
        add_line(std::string("Keno", 4));
        add_line(std::string("Blanks", 6));
        add_line(std::string("Morris", 6));
        add_line(std::string("Radford", 7));
        add_line(std::string("MD", 2));
        add_line(std::string("Mickknew", 8));
        add_line(std::string("Spud", 4));
        add_line(std::string("Steptoe", 7));
        add_line(std::string("Rodney", 6));
        add_line(std::string("Jevon", 5));
        add_line(std::string("Jamal", 5));
        add_line(std::string("Wesker", 6));
        add_line(std::string("Redford", 7));
        set_visible(false);
        index_offset = current_line = -1;
    }
};
FrameObject * create_names_633(int x, int y)
{
    return new (ListObject::pool.create()) Names_633(x, y);
}
static Image* images_active3_634_0_0[1];
static Direction direction_active3_634_0_0 = {0, 50, 50, 0, -1, images_active3_634_0_0, 1};
static Animation anim_active3_634_0 = {&direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, NULL, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0, &direction_active3_634_0_0};
static Image* images_active3_634_5_0[1];
static Direction direction_active3_634_5_0 = {0, 50, 50, 0, -1, images_active3_634_5_0, 1};
static Animation anim_active3_634_5 = {&direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, NULL, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0, &direction_active3_634_5_0};
static Animation * anim_array_active3_634[6] = {&anim_active3_634_0, NULL, NULL, NULL, NULL, &anim_active3_634_5};
static Animations anim_active3_634 = {6, &anim_array_active3_634[0]};
static bool anim_active3_634_initialized;
class Active3_634 : public Active
{
public:
    Active3_634(int x, int y) : Active(x, y, Active3_634_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 3", 8);
#endif
        this->animations = &anim_active3_634;
        if (!anim_active3_634_initialized) {
            anim_active3_634_initialized = true;
            images_active3_634_0_0[0] = get_internal_image(1445);
            images_active3_634_5_0[0] = get_internal_image(1534);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_active3_634(int x, int y)
{
    return new (Active::pool.create()) Active3_634(x, y);
}
static Image* images_back_635_5_0[1];
static Direction direction_back_635_5_0 = {0, 50, 50, 0, -1, images_back_635_5_0, 1};
static Image* images_back_635_5_16[1];
static Direction direction_back_635_5_16 = {16, 50, 50, 0, 1, images_back_635_5_16, 1};
static Animation anim_back_635_5 = {&direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0, NULL, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, &direction_back_635_5_16, NULL, &direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0, &direction_back_635_5_0};
static Animation * anim_array_back_635[6] = {NULL, NULL, NULL, NULL, NULL, &anim_back_635_5};
static Animations anim_back_635 = {6, &anim_array_back_635[0]};
static bool anim_back_635_initialized;
class Back_635 : public Active
{
public:
    Back_635(int x, int y) : Active(x, y, Back_635_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("back", 4);
#endif
        this->animations = &anim_back_635;
        if (!anim_back_635_initialized) {
            anim_back_635_initialized = true;
            images_back_635_5_0[0] = get_internal_image(1583);
            images_back_635_5_16[0] = get_internal_image(1192);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_back_635(int x, int y)
{
    return new (Active::pool.create()) Back_635(x, y);
}
class Back2_636 : public Text
{
public:
    Back2_636(int x, int y) : Text(x, y, Back2_636_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("back 2", 6);
#endif
        flags &= ~SCROLL;
        width = 52;
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
FrameObject * create_back2_636(int x, int y)
{
    return new (Text::pool.create()) Back2_636(x, y);
}
static Image* images_outfitinmate_637_0_24[2];
static Direction direction_outfitinmate_637_0_24 = {24, 6, 6, 0, -1, images_outfitinmate_637_0_24, 2};
static Animation anim_outfitinmate_637_0 = {&direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, NULL, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24, &direction_outfitinmate_637_0_24};
static Animation * anim_array_outfitinmate_637[1] = {&anim_outfitinmate_637_0};
static Animations anim_outfitinmate_637 = {1, &anim_array_outfitinmate_637[0]};
static bool anim_outfitinmate_637_initialized;
class OutfitInmate_637 : public Active
{
public:
    OutfitInmate_637(int x, int y) : Active(x, y, OutfitInmate_637_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate", 15);
#endif
        this->animations = &anim_outfitinmate_637;
        if (!anim_outfitinmate_637_initialized) {
            anim_outfitinmate_637_initialized = true;
            images_outfitinmate_637_0_24[0] = get_internal_image(555);
            images_outfitinmate_637_0_24[1] = get_internal_image(549);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmate_637(int x, int y)
{
    return new (Active::pool.create()) OutfitInmate_637(x, y);
}
static Image* images_outfitguard_638_0_24[2];
static Direction direction_outfitguard_638_0_24 = {24, 6, 6, 0, -1, images_outfitguard_638_0_24, 2};
static Animation anim_outfitguard_638_0 = {&direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, NULL, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24, &direction_outfitguard_638_0_24};
static Animation * anim_array_outfitguard_638[1] = {&anim_outfitguard_638_0};
static Animations anim_outfitguard_638 = {1, &anim_array_outfitguard_638[0]};
static bool anim_outfitguard_638_initialized;
class OutfitGuard_638 : public Active
{
public:
    OutfitGuard_638(int x, int y) : Active(x, y, OutfitGuard_638_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Guard", 14);
#endif
        this->animations = &anim_outfitguard_638;
        if (!anim_outfitguard_638_initialized) {
            anim_outfitguard_638_initialized = true;
            images_outfitguard_638_0_24[0] = get_internal_image(502);
            images_outfitguard_638_0_24[1] = get_internal_image(783);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_outfitguard_638(int x, int y)
{
    return new (Active::pool.create()) OutfitGuard_638(x, y);
}
static Image* images_outfitinmate2_639_0_24[2];
static Direction direction_outfitinmate2_639_0_24 = {24, 6, 6, 0, -1, images_outfitinmate2_639_0_24, 2};
static Animation anim_outfitinmate2_639_0 = {&direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, NULL, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24, &direction_outfitinmate2_639_0_24};
static Animation * anim_array_outfitinmate2_639[1] = {&anim_outfitinmate2_639_0};
static Animations anim_outfitinmate2_639 = {1, &anim_array_outfitinmate2_639[0]};
static bool anim_outfitinmate2_639_initialized;
class OutfitInmate2_639 : public Active
{
public:
    OutfitInmate2_639(int x, int y) : Active(x, y, OutfitInmate2_639_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate 2", 17);
#endif
        this->animations = &anim_outfitinmate2_639;
        if (!anim_outfitinmate2_639_initialized) {
            anim_outfitinmate2_639_initialized = true;
            images_outfitinmate2_639_0_24[0] = get_internal_image(143);
            images_outfitinmate2_639_0_24[1] = get_internal_image(149);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmate2_639(int x, int y)
{
    return new (Active::pool.create()) OutfitInmate2_639(x, y);
}
static Image* images_mix_640_5_0[1];
static Direction direction_mix_640_5_0 = {0, 50, 50, 0, -1, images_mix_640_5_0, 1};
static Image* images_mix_640_5_16[1];
static Direction direction_mix_640_5_16 = {16, 50, 50, 0, 1, images_mix_640_5_16, 1};
static Animation anim_mix_640_5 = {&direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0, NULL, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, &direction_mix_640_5_16, NULL, &direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0, &direction_mix_640_5_0};
static Animation * anim_array_mix_640[6] = {NULL, NULL, NULL, NULL, NULL, &anim_mix_640_5};
static Animations anim_mix_640 = {6, &anim_array_mix_640[0]};
static bool anim_mix_640_initialized;
class Mix_640 : public Active
{
public:
    Mix_640(int x, int y) : Active(x, y, Mix_640_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("mix", 3);
#endif
        this->animations = &anim_mix_640;
        if (!anim_mix_640_initialized) {
            anim_mix_640_initialized = true;
            images_mix_640_5_0[0] = get_internal_image(1243);
            images_mix_640_5_16[0] = get_internal_image(1538);
        }
        active_flags |= TRANSPARENT;
        animation = BOUNCING;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_mix_640(int x, int y)
{
    return new (Active::pool.create()) Mix_640(x, y);
}
class Random_641 : public Text
{
public:
    Random_641(int x, int y) : Text(x, y, Random_641_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("random", 6);
#endif
        flags &= ~SCROLL;
        width = 62;
        height = 10;
        blend_color = Color(127, 127, 127);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_VCENTER;
        add_line(std::string("random", 6));
        create_alterables();
    }
};
FrameObject * create_random_641(int x, int y)
{
    return new (Text::pool.create()) Random_641(x, y);
}
class String5_642 : public Text
{
public:
    String5_642(int x, int y) : Text(x, y, String5_642_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("String 5", 8);
#endif
        flags &= ~SCROLL;
        width = 292;
        height = 27;
        blend_color = Color(255, 0, 0);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_HCENTER | ALIGN_BOTTOM;
        add_line(std::string("ERROR", 5));
        create_alterables();
    }
};
FrameObject * create_string5_642(int x, int y)
{
    return new (Text::pool.create()) String5_642(x, y);
}
class NEWMAPLOAD_643 : public INI
{
public:
    NEWMAPLOAD_643(int x, int y) : INI(x, y, NEWMAPLOAD_643_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("NEW_MAP_LOAD", 12);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
    }
};
FrameObject * create_newmapload_643(int x, int y)
{
    return new (INI::pool.create()) NEWMAPLOAD_643(x, y);
}
static Image* images_inmate12_644_0_24[2];
static Direction direction_inmate12_644_0_24 = {24, 6, 6, 0, -1, images_inmate12_644_0_24, 2};
static Animation anim_inmate12_644_0 = {&direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, NULL, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24, &direction_inmate12_644_0_24};
static Animation * anim_array_inmate12_644[1] = {&anim_inmate12_644_0};
static Animations anim_inmate12_644 = {1, &anim_array_inmate12_644[0]};
static bool anim_inmate12_644_initialized;
class Inmate12_644 : public Active
{
public:
    Inmate12_644(int x, int y) : Active(x, y, Inmate12_644_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 12", 9);
#endif
        this->animations = &anim_inmate12_644;
        if (!anim_inmate12_644_initialized) {
            anim_inmate12_644_initialized = true;
            images_inmate12_644_0_24[0] = get_internal_image(2528);
            images_inmate12_644_0_24[1] = get_internal_image(2527);
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
FrameObject * create_inmate12_644(int x, int y)
{
    return new (Active::pool.create()) Inmate12_644(x, y);
}
static Image* images_inmate13_645_0_24[2];
static Direction direction_inmate13_645_0_24 = {24, 6, 6, 0, -1, images_inmate13_645_0_24, 2};
static Animation anim_inmate13_645_0 = {&direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, NULL, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24, &direction_inmate13_645_0_24};
static Animation * anim_array_inmate13_645[1] = {&anim_inmate13_645_0};
static Animations anim_inmate13_645 = {1, &anim_array_inmate13_645[0]};
static bool anim_inmate13_645_initialized;
class Inmate13_645 : public Active
{
public:
    Inmate13_645(int x, int y) : Active(x, y, Inmate13_645_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 13", 9);
#endif
        this->animations = &anim_inmate13_645;
        if (!anim_inmate13_645_initialized) {
            anim_inmate13_645_initialized = true;
            images_inmate13_645_0_24[0] = get_internal_image(2534);
            images_inmate13_645_0_24[1] = get_internal_image(2535);
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
FrameObject * create_inmate13_645(int x, int y)
{
    return new (Active::pool.create()) Inmate13_645(x, y);
}
static Image* images_inmate14_646_0_24[2];
static Direction direction_inmate14_646_0_24 = {24, 6, 6, 0, -1, images_inmate14_646_0_24, 2};
static Animation anim_inmate14_646_0 = {&direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, NULL, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24, &direction_inmate14_646_0_24};
static Animation * anim_array_inmate14_646[1] = {&anim_inmate14_646_0};
static Animations anim_inmate14_646 = {1, &anim_array_inmate14_646[0]};
static bool anim_inmate14_646_initialized;
class Inmate14_646 : public Active
{
public:
    Inmate14_646(int x, int y) : Active(x, y, Inmate14_646_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 14", 9);
#endif
        this->animations = &anim_inmate14_646;
        if (!anim_inmate14_646_initialized) {
            anim_inmate14_646_initialized = true;
            images_inmate14_646_0_24[0] = get_internal_image(2542);
            images_inmate14_646_0_24[1] = get_internal_image(2543);
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
FrameObject * create_inmate14_646(int x, int y)
{
    return new (Active::pool.create()) Inmate14_646(x, y);
}
static Image* images_outfitinmate3_647_0_24[2];
static Direction direction_outfitinmate3_647_0_24 = {24, 6, 6, 0, -1, images_outfitinmate3_647_0_24, 2};
static Animation anim_outfitinmate3_647_0 = {&direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, NULL, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24, &direction_outfitinmate3_647_0_24};
static Animation * anim_array_outfitinmate3_647[1] = {&anim_outfitinmate3_647_0};
static Animations anim_outfitinmate3_647 = {1, &anim_array_outfitinmate3_647[0]};
static bool anim_outfitinmate3_647_initialized;
class OutfitInmate3_647 : public Active
{
public:
    OutfitInmate3_647(int x, int y) : Active(x, y, OutfitInmate3_647_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate 3", 17);
#endif
        this->animations = &anim_outfitinmate3_647;
        if (!anim_outfitinmate3_647_initialized) {
            anim_outfitinmate3_647_initialized = true;
            images_outfitinmate3_647_0_24[0] = get_internal_image(2575);
            images_outfitinmate3_647_0_24[1] = get_internal_image(2614);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmate3_647(int x, int y)
{
    return new (Active::pool.create()) OutfitInmate3_647(x, y);
}
static Image* images_outfitguard2_648_0_24[2];
static Direction direction_outfitguard2_648_0_24 = {24, 6, 6, 0, -1, images_outfitguard2_648_0_24, 2};
static Animation anim_outfitguard2_648_0 = {&direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, NULL, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24, &direction_outfitguard2_648_0_24};
static Animation * anim_array_outfitguard2_648[1] = {&anim_outfitguard2_648_0};
static Animations anim_outfitguard2_648 = {1, &anim_array_outfitguard2_648[0]};
static bool anim_outfitguard2_648_initialized;
class OutfitGuard2_648 : public Active
{
public:
    OutfitGuard2_648(int x, int y) : Active(x, y, OutfitGuard2_648_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Guard 2", 16);
#endif
        this->animations = &anim_outfitguard2_648;
        if (!anim_outfitguard2_648_initialized) {
            anim_outfitguard2_648_initialized = true;
            images_outfitguard2_648_0_24[0] = get_internal_image(2514);
            images_outfitguard2_648_0_24[1] = get_internal_image(2546);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_outfitguard2_648(int x, int y)
{
    return new (Active::pool.create()) OutfitGuard2_648(x, y);
}
static Image* images_outfitinmate4_649_0_24[2];
static Direction direction_outfitinmate4_649_0_24 = {24, 6, 6, 0, -1, images_outfitinmate4_649_0_24, 2};
static Animation anim_outfitinmate4_649_0 = {&direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, NULL, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24, &direction_outfitinmate4_649_0_24};
static Animation * anim_array_outfitinmate4_649[1] = {&anim_outfitinmate4_649_0};
static Animations anim_outfitinmate4_649 = {1, &anim_array_outfitinmate4_649[0]};
static bool anim_outfitinmate4_649_initialized;
class OutfitInmate4_649 : public Active
{
public:
    OutfitInmate4_649(int x, int y) : Active(x, y, OutfitInmate4_649_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate 4", 17);
#endif
        this->animations = &anim_outfitinmate4_649;
        if (!anim_outfitinmate4_649_initialized) {
            anim_outfitinmate4_649_initialized = true;
            images_outfitinmate4_649_0_24[0] = get_internal_image(2840);
            images_outfitinmate4_649_0_24[1] = get_internal_image(2841);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmate4_649(int x, int y)
{
    return new (Active::pool.create()) OutfitInmate4_649(x, y);
}
static Image* images_outfitguard3_650_0_24[2];
static Direction direction_outfitguard3_650_0_24 = {24, 6, 6, 0, -1, images_outfitguard3_650_0_24, 2};
static Animation anim_outfitguard3_650_0 = {&direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, NULL, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24, &direction_outfitguard3_650_0_24};
static Animation * anim_array_outfitguard3_650[1] = {&anim_outfitguard3_650_0};
static Animations anim_outfitguard3_650 = {1, &anim_array_outfitguard3_650[0]};
static bool anim_outfitguard3_650_initialized;
class OutfitGuard3_650 : public Active
{
public:
    OutfitGuard3_650(int x, int y) : Active(x, y, OutfitGuard3_650_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Guard 3", 16);
#endif
        this->animations = &anim_outfitguard3_650;
        if (!anim_outfitguard3_650_initialized) {
            anim_outfitguard3_650_initialized = true;
            images_outfitguard3_650_0_24[0] = get_internal_image(2821);
            images_outfitguard3_650_0_24[1] = get_internal_image(2822);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_outfitguard3_650(int x, int y)
{
    return new (Active::pool.create()) OutfitGuard3_650(x, y);
}
static Image* images_inmatedtaf1_651_0_24[2];
static Direction direction_inmatedtaf1_651_0_24 = {24, 6, 6, 0, -1, images_inmatedtaf1_651_0_24, 2};
static Animation anim_inmatedtaf1_651_0 = {&direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, NULL, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24, &direction_inmatedtaf1_651_0_24};
static Animation * anim_array_inmatedtaf1_651[1] = {&anim_inmatedtaf1_651_0};
static Animations anim_inmatedtaf1_651 = {1, &anim_array_inmatedtaf1_651[0]};
static bool anim_inmatedtaf1_651_initialized;
class InmateDTAF1_651 : public Active
{
public:
    InmateDTAF1_651(int x, int y) : Active(x, y, InmateDTAF1_651_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 1", 13);
#endif
        this->animations = &anim_inmatedtaf1_651;
        if (!anim_inmatedtaf1_651_initialized) {
            anim_inmatedtaf1_651_initialized = true;
            images_inmatedtaf1_651_0_24[0] = get_internal_image(2915);
            images_inmatedtaf1_651_0_24[1] = get_internal_image(2916);
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
FrameObject * create_inmatedtaf1_651(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF1_651(x, y);
}
static Image* images_inmatedtaf2_652_0_24[2];
static Direction direction_inmatedtaf2_652_0_24 = {24, 10, 10, 0, -1, images_inmatedtaf2_652_0_24, 2};
static Animation anim_inmatedtaf2_652_0 = {&direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, NULL, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24, &direction_inmatedtaf2_652_0_24};
static Animation * anim_array_inmatedtaf2_652[1] = {&anim_inmatedtaf2_652_0};
static Animations anim_inmatedtaf2_652 = {1, &anim_array_inmatedtaf2_652[0]};
static bool anim_inmatedtaf2_652_initialized;
class InmateDTAF2_652 : public Active
{
public:
    InmateDTAF2_652(int x, int y) : Active(x, y, InmateDTAF2_652_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 2", 13);
#endif
        this->animations = &anim_inmatedtaf2_652;
        if (!anim_inmatedtaf2_652_initialized) {
            anim_inmatedtaf2_652_initialized = true;
            images_inmatedtaf2_652_0_24[0] = get_internal_image(2925);
            images_inmatedtaf2_652_0_24[1] = get_internal_image(2926);
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
FrameObject * create_inmatedtaf2_652(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF2_652(x, y);
}
static Image* images_inmatedtaf3_653_0_24[2];
static Direction direction_inmatedtaf3_653_0_24 = {24, 6, 6, 0, -1, images_inmatedtaf3_653_0_24, 2};
static Animation anim_inmatedtaf3_653_0 = {&direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, NULL, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24, &direction_inmatedtaf3_653_0_24};
static Animation * anim_array_inmatedtaf3_653[1] = {&anim_inmatedtaf3_653_0};
static Animations anim_inmatedtaf3_653 = {1, &anim_array_inmatedtaf3_653[0]};
static bool anim_inmatedtaf3_653_initialized;
class InmateDTAF3_653 : public Active
{
public:
    InmateDTAF3_653(int x, int y) : Active(x, y, InmateDTAF3_653_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 3", 13);
#endif
        this->animations = &anim_inmatedtaf3_653;
        if (!anim_inmatedtaf3_653_initialized) {
            anim_inmatedtaf3_653_initialized = true;
            images_inmatedtaf3_653_0_24[0] = get_internal_image(2927);
            images_inmatedtaf3_653_0_24[1] = get_internal_image(2929);
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
FrameObject * create_inmatedtaf3_653(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF3_653(x, y);
}
static Image* images_inmatedtaf4_654_0_24[2];
static Direction direction_inmatedtaf4_654_0_24 = {24, 6, 6, 0, -1, images_inmatedtaf4_654_0_24, 2};
static Animation anim_inmatedtaf4_654_0 = {&direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, NULL, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24, &direction_inmatedtaf4_654_0_24};
static Animation * anim_array_inmatedtaf4_654[1] = {&anim_inmatedtaf4_654_0};
static Animations anim_inmatedtaf4_654 = {1, &anim_array_inmatedtaf4_654[0]};
static bool anim_inmatedtaf4_654_initialized;
class InmateDTAF4_654 : public Active
{
public:
    InmateDTAF4_654(int x, int y) : Active(x, y, InmateDTAF4_654_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 4", 13);
#endif
        this->animations = &anim_inmatedtaf4_654;
        if (!anim_inmatedtaf4_654_initialized) {
            anim_inmatedtaf4_654_initialized = true;
            images_inmatedtaf4_654_0_24[0] = get_internal_image(2980);
            images_inmatedtaf4_654_0_24[1] = get_internal_image(2981);
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
FrameObject * create_inmatedtaf4_654(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF4_654(x, y);
}
static Image* images_inmatedtaf5_655_0_24[2];
static Direction direction_inmatedtaf5_655_0_24 = {24, 6, 6, 0, -1, images_inmatedtaf5_655_0_24, 2};
static Animation anim_inmatedtaf5_655_0 = {&direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, NULL, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24, &direction_inmatedtaf5_655_0_24};
static Animation * anim_array_inmatedtaf5_655[1] = {&anim_inmatedtaf5_655_0};
static Animations anim_inmatedtaf5_655 = {1, &anim_array_inmatedtaf5_655[0]};
static bool anim_inmatedtaf5_655_initialized;
class InmateDTAF5_655 : public Active
{
public:
    InmateDTAF5_655(int x, int y) : Active(x, y, InmateDTAF5_655_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 5", 13);
#endif
        this->animations = &anim_inmatedtaf5_655;
        if (!anim_inmatedtaf5_655_initialized) {
            anim_inmatedtaf5_655_initialized = true;
            images_inmatedtaf5_655_0_24[0] = get_internal_image(2940);
            images_inmatedtaf5_655_0_24[1] = get_internal_image(2941);
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
FrameObject * create_inmatedtaf5_655(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF5_655(x, y);
}
static Image* images_inmatedtaf6_656_0_24[2];
static Direction direction_inmatedtaf6_656_0_24 = {24, 6, 6, 0, -1, images_inmatedtaf6_656_0_24, 2};
static Animation anim_inmatedtaf6_656_0 = {&direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, NULL, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24, &direction_inmatedtaf6_656_0_24};
static Animation * anim_array_inmatedtaf6_656[1] = {&anim_inmatedtaf6_656_0};
static Animations anim_inmatedtaf6_656 = {1, &anim_array_inmatedtaf6_656[0]};
static bool anim_inmatedtaf6_656_initialized;
class InmateDTAF6_656 : public Active
{
public:
    InmateDTAF6_656(int x, int y) : Active(x, y, InmateDTAF6_656_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 6", 13);
#endif
        this->animations = &anim_inmatedtaf6_656;
        if (!anim_inmatedtaf6_656_initialized) {
            anim_inmatedtaf6_656_initialized = true;
            images_inmatedtaf6_656_0_24[0] = get_internal_image(2948);
            images_inmatedtaf6_656_0_24[1] = get_internal_image(2949);
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
FrameObject * create_inmatedtaf6_656(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF6_656(x, y);
}
static Image* images_inmatedtaf7_657_0_24[2];
static Direction direction_inmatedtaf7_657_0_24 = {24, 6, 6, 0, -1, images_inmatedtaf7_657_0_24, 2};
static Animation anim_inmatedtaf7_657_0 = {&direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, NULL, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24, &direction_inmatedtaf7_657_0_24};
static Animation * anim_array_inmatedtaf7_657[1] = {&anim_inmatedtaf7_657_0};
static Animations anim_inmatedtaf7_657 = {1, &anim_array_inmatedtaf7_657[0]};
static bool anim_inmatedtaf7_657_initialized;
class InmateDTAF7_657 : public Active
{
public:
    InmateDTAF7_657(int x, int y) : Active(x, y, InmateDTAF7_657_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 7", 13);
#endif
        this->animations = &anim_inmatedtaf7_657;
        if (!anim_inmatedtaf7_657_initialized) {
            anim_inmatedtaf7_657_initialized = true;
            images_inmatedtaf7_657_0_24[0] = get_internal_image(2958);
            images_inmatedtaf7_657_0_24[1] = get_internal_image(2959);
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
FrameObject * create_inmatedtaf7_657(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF7_657(x, y);
}
static Image* images_inmatedtaf8_658_0_24[2];
static Direction direction_inmatedtaf8_658_0_24 = {24, 6, 6, 0, -1, images_inmatedtaf8_658_0_24, 2};
static Animation anim_inmatedtaf8_658_0 = {&direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, NULL, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24, &direction_inmatedtaf8_658_0_24};
static Animation * anim_array_inmatedtaf8_658[1] = {&anim_inmatedtaf8_658_0};
static Animations anim_inmatedtaf8_658 = {1, &anim_array_inmatedtaf8_658[0]};
static bool anim_inmatedtaf8_658_initialized;
class InmateDTAF8_658 : public Active
{
public:
    InmateDTAF8_658(int x, int y) : Active(x, y, InmateDTAF8_658_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 8", 13);
#endif
        this->animations = &anim_inmatedtaf8_658;
        if (!anim_inmatedtaf8_658_initialized) {
            anim_inmatedtaf8_658_initialized = true;
            images_inmatedtaf8_658_0_24[0] = get_internal_image(2964);
            images_inmatedtaf8_658_0_24[1] = get_internal_image(2965);
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
FrameObject * create_inmatedtaf8_658(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF8_658(x, y);
}
static Image* images_inmatedtaf9_659_0_24[2];
static Direction direction_inmatedtaf9_659_0_24 = {24, 6, 6, 0, -1, images_inmatedtaf9_659_0_24, 2};
static Animation anim_inmatedtaf9_659_0 = {&direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, NULL, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24, &direction_inmatedtaf9_659_0_24};
static Animation * anim_array_inmatedtaf9_659[1] = {&anim_inmatedtaf9_659_0};
static Animations anim_inmatedtaf9_659 = {1, &anim_array_inmatedtaf9_659[0]};
static bool anim_inmatedtaf9_659_initialized;
class InmateDTAF9_659 : public Active
{
public:
    InmateDTAF9_659(int x, int y) : Active(x, y, InmateDTAF9_659_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate DTAF 9", 13);
#endif
        this->animations = &anim_inmatedtaf9_659;
        if (!anim_inmatedtaf9_659_initialized) {
            anim_inmatedtaf9_659_initialized = true;
            images_inmatedtaf9_659_0_24[0] = get_internal_image(2972);
            images_inmatedtaf9_659_0_24[1] = get_internal_image(2973);
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
FrameObject * create_inmatedtaf9_659(int x, int y)
{
    return new (Active::pool.create()) InmateDTAF9_659(x, y);
}
static Image* images_inmatess1_660_0_24[2];
static Direction direction_inmatess1_660_0_24 = {24, 10, 10, 0, -1, images_inmatess1_660_0_24, 2};
static Animation anim_inmatess1_660_0 = {&direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, NULL, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24, &direction_inmatess1_660_0_24};
static Animation * anim_array_inmatess1_660[1] = {&anim_inmatess1_660_0};
static Animations anim_inmatess1_660 = {1, &anim_array_inmatess1_660[0]};
static bool anim_inmatess1_660_initialized;
class InmateSS1_660 : public Active
{
public:
    InmateSS1_660(int x, int y) : Active(x, y, InmateSS1_660_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 1", 11);
#endif
        this->animations = &anim_inmatess1_660;
        if (!anim_inmatess1_660_initialized) {
            anim_inmatess1_660_initialized = true;
            images_inmatess1_660_0_24[0] = get_internal_image(3420);
            images_inmatess1_660_0_24[1] = get_internal_image(3421);
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
FrameObject * create_inmatess1_660(int x, int y)
{
    return new (Active::pool.create()) InmateSS1_660(x, y);
}
static Image* images_inmatess2_661_0_24[2];
static Direction direction_inmatess2_661_0_24 = {24, 10, 10, 0, -1, images_inmatess2_661_0_24, 2};
static Animation anim_inmatess2_661_0 = {&direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, NULL, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24, &direction_inmatess2_661_0_24};
static Animation * anim_array_inmatess2_661[1] = {&anim_inmatess2_661_0};
static Animations anim_inmatess2_661 = {1, &anim_array_inmatess2_661[0]};
static bool anim_inmatess2_661_initialized;
class InmateSS2_661 : public Active
{
public:
    InmateSS2_661(int x, int y) : Active(x, y, InmateSS2_661_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 2", 11);
#endif
        this->animations = &anim_inmatess2_661;
        if (!anim_inmatess2_661_initialized) {
            anim_inmatess2_661_initialized = true;
            images_inmatess2_661_0_24[0] = get_internal_image(3429);
            images_inmatess2_661_0_24[1] = get_internal_image(3430);
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
FrameObject * create_inmatess2_661(int x, int y)
{
    return new (Active::pool.create()) InmateSS2_661(x, y);
}
static Image* images_inmatess3_662_0_24[2];
static Direction direction_inmatess3_662_0_24 = {24, 10, 10, 0, -1, images_inmatess3_662_0_24, 2};
static Animation anim_inmatess3_662_0 = {&direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, NULL, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24, &direction_inmatess3_662_0_24};
static Animation * anim_array_inmatess3_662[1] = {&anim_inmatess3_662_0};
static Animations anim_inmatess3_662 = {1, &anim_array_inmatess3_662[0]};
static bool anim_inmatess3_662_initialized;
class InmateSS3_662 : public Active
{
public:
    InmateSS3_662(int x, int y) : Active(x, y, InmateSS3_662_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 3", 11);
#endif
        this->animations = &anim_inmatess3_662;
        if (!anim_inmatess3_662_initialized) {
            anim_inmatess3_662_initialized = true;
            images_inmatess3_662_0_24[0] = get_internal_image(3436);
            images_inmatess3_662_0_24[1] = get_internal_image(3437);
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
FrameObject * create_inmatess3_662(int x, int y)
{
    return new (Active::pool.create()) InmateSS3_662(x, y);
}
static Image* images_inmatess4_663_0_24[2];
static Direction direction_inmatess4_663_0_24 = {24, 10, 10, 0, -1, images_inmatess4_663_0_24, 2};
static Animation anim_inmatess4_663_0 = {&direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, NULL, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24, &direction_inmatess4_663_0_24};
static Animation * anim_array_inmatess4_663[1] = {&anim_inmatess4_663_0};
static Animations anim_inmatess4_663 = {1, &anim_array_inmatess4_663[0]};
static bool anim_inmatess4_663_initialized;
class InmateSS4_663 : public Active
{
public:
    InmateSS4_663(int x, int y) : Active(x, y, InmateSS4_663_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 4", 11);
#endif
        this->animations = &anim_inmatess4_663;
        if (!anim_inmatess4_663_initialized) {
            anim_inmatess4_663_initialized = true;
            images_inmatess4_663_0_24[0] = get_internal_image(3446);
            images_inmatess4_663_0_24[1] = get_internal_image(3447);
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
FrameObject * create_inmatess4_663(int x, int y)
{
    return new (Active::pool.create()) InmateSS4_663(x, y);
}
static Image* images_inmatess5_664_0_24[2];
static Direction direction_inmatess5_664_0_24 = {24, 10, 10, 0, -1, images_inmatess5_664_0_24, 2};
static Animation anim_inmatess5_664_0 = {&direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, NULL, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24, &direction_inmatess5_664_0_24};
static Animation * anim_array_inmatess5_664[1] = {&anim_inmatess5_664_0};
static Animations anim_inmatess5_664 = {1, &anim_array_inmatess5_664[0]};
static bool anim_inmatess5_664_initialized;
class InmateSS5_664 : public Active
{
public:
    InmateSS5_664(int x, int y) : Active(x, y, InmateSS5_664_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 5", 11);
#endif
        this->animations = &anim_inmatess5_664;
        if (!anim_inmatess5_664_initialized) {
            anim_inmatess5_664_initialized = true;
            images_inmatess5_664_0_24[0] = get_internal_image(3452);
            images_inmatess5_664_0_24[1] = get_internal_image(3453);
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
FrameObject * create_inmatess5_664(int x, int y)
{
    return new (Active::pool.create()) InmateSS5_664(x, y);
}
static Image* images_inmatess6_665_0_24[2];
static Direction direction_inmatess6_665_0_24 = {24, 10, 10, 0, -1, images_inmatess6_665_0_24, 2};
static Animation anim_inmatess6_665_0 = {&direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, NULL, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24, &direction_inmatess6_665_0_24};
static Animation * anim_array_inmatess6_665[1] = {&anim_inmatess6_665_0};
static Animations anim_inmatess6_665 = {1, &anim_array_inmatess6_665[0]};
static bool anim_inmatess6_665_initialized;
class InmateSS6_665 : public Active
{
public:
    InmateSS6_665(int x, int y) : Active(x, y, InmateSS6_665_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 6", 11);
#endif
        this->animations = &anim_inmatess6_665;
        if (!anim_inmatess6_665_initialized) {
            anim_inmatess6_665_initialized = true;
            images_inmatess6_665_0_24[0] = get_internal_image(3462);
            images_inmatess6_665_0_24[1] = get_internal_image(3463);
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
FrameObject * create_inmatess6_665(int x, int y)
{
    return new (Active::pool.create()) InmateSS6_665(x, y);
}
static Image* images_inmatess7_666_0_24[2];
static Direction direction_inmatess7_666_0_24 = {24, 10, 10, 0, -1, images_inmatess7_666_0_24, 2};
static Animation anim_inmatess7_666_0 = {&direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, NULL, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24, &direction_inmatess7_666_0_24};
static Animation * anim_array_inmatess7_666[1] = {&anim_inmatess7_666_0};
static Animations anim_inmatess7_666 = {1, &anim_array_inmatess7_666[0]};
static bool anim_inmatess7_666_initialized;
class InmateSS7_666 : public Active
{
public:
    InmateSS7_666(int x, int y) : Active(x, y, InmateSS7_666_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 7", 11);
#endif
        this->animations = &anim_inmatess7_666;
        if (!anim_inmatess7_666_initialized) {
            anim_inmatess7_666_initialized = true;
            images_inmatess7_666_0_24[0] = get_internal_image(3470);
            images_inmatess7_666_0_24[1] = get_internal_image(3471);
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
FrameObject * create_inmatess7_666(int x, int y)
{
    return new (Active::pool.create()) InmateSS7_666(x, y);
}
static Image* images_inmatess8_667_0_24[2];
static Direction direction_inmatess8_667_0_24 = {24, 10, 10, 0, -1, images_inmatess8_667_0_24, 2};
static Animation anim_inmatess8_667_0 = {&direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, NULL, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24, &direction_inmatess8_667_0_24};
static Animation * anim_array_inmatess8_667[1] = {&anim_inmatess8_667_0};
static Animations anim_inmatess8_667 = {1, &anim_array_inmatess8_667[0]};
static bool anim_inmatess8_667_initialized;
class InmateSS8_667 : public Active
{
public:
    InmateSS8_667(int x, int y) : Active(x, y, InmateSS8_667_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 8", 11);
#endif
        this->animations = &anim_inmatess8_667;
        if (!anim_inmatess8_667_initialized) {
            anim_inmatess8_667_initialized = true;
            images_inmatess8_667_0_24[0] = get_internal_image(3478);
            images_inmatess8_667_0_24[1] = get_internal_image(3479);
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
FrameObject * create_inmatess8_667(int x, int y)
{
    return new (Active::pool.create()) InmateSS8_667(x, y);
}
static Image* images_outfitinmatess_668_0_24[2];
static Direction direction_outfitinmatess_668_0_24 = {24, 6, 6, 0, -1, images_outfitinmatess_668_0_24, 2};
static Animation anim_outfitinmatess_668_0 = {&direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, NULL, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24, &direction_outfitinmatess_668_0_24};
static Animation * anim_array_outfitinmatess_668[1] = {&anim_outfitinmatess_668_0};
static Animations anim_outfitinmatess_668 = {1, &anim_array_outfitinmatess_668[0]};
static bool anim_outfitinmatess_668_initialized;
class OutfitInmateSS_668 : public Active
{
public:
    OutfitInmateSS_668(int x, int y) : Active(x, y, OutfitInmateSS_668_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate SS", 18);
#endif
        this->animations = &anim_outfitinmatess_668;
        if (!anim_outfitinmatess_668_initialized) {
            anim_outfitinmatess_668_initialized = true;
            images_outfitinmatess_668_0_24[0] = get_internal_image(3344);
            images_outfitinmatess_668_0_24[1] = get_internal_image(3345);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmatess_668(int x, int y)
{
    return new (Active::pool.create()) OutfitInmateSS_668(x, y);
}
static Image* images_outfitinmatess2_669_0_24[2];
static Direction direction_outfitinmatess2_669_0_24 = {24, 6, 6, 0, -1, images_outfitinmatess2_669_0_24, 2};
static Animation anim_outfitinmatess2_669_0 = {&direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, NULL, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24, &direction_outfitinmatess2_669_0_24};
static Animation * anim_array_outfitinmatess2_669[1] = {&anim_outfitinmatess2_669_0};
static Animations anim_outfitinmatess2_669 = {1, &anim_array_outfitinmatess2_669[0]};
static bool anim_outfitinmatess2_669_initialized;
class OutfitInmateSS2_669 : public Active
{
public:
    OutfitInmateSS2_669(int x, int y) : Active(x, y, OutfitInmateSS2_669_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate SS 2", 20);
#endif
        this->animations = &anim_outfitinmatess2_669;
        if (!anim_outfitinmatess2_669_initialized) {
            anim_outfitinmatess2_669_initialized = true;
            images_outfitinmatess2_669_0_24[0] = get_internal_image(3350);
            images_outfitinmatess2_669_0_24[1] = get_internal_image(3352);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmatess2_669(int x, int y)
{
    return new (Active::pool.create()) OutfitInmateSS2_669(x, y);
}
static Image* images_guard2_670_0_24[2];
static Direction direction_guard2_670_0_24 = {24, 6, 6, 0, -1, images_guard2_670_0_24, 2};
static Animation anim_guard2_670_0 = {&direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, NULL, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24, &direction_guard2_670_0_24};
static Animation * anim_array_guard2_670[1] = {&anim_guard2_670_0};
static Animations anim_guard2_670 = {1, &anim_array_guard2_670[0]};
static bool anim_guard2_670_initialized;
class Guard2_670 : public Active
{
public:
    Guard2_670(int x, int y) : Active(x, y, Guard2_670_type)
    {
        // qualifiers: 31, 33
#ifndef NDEBUG
        name = std::string("Guard 2", 7);
#endif
        this->animations = &anim_guard2_670;
        if (!anim_guard2_670_initialized) {
            anim_guard2_670_initialized = true;
            images_guard2_670_0_24[0] = get_internal_image(3489);
            images_guard2_670_0_24[1] = get_internal_image(3498);
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
FrameObject * create_guard2_670(int x, int y)
{
    return new (Active::pool.create()) Guard2_670(x, y);
}
static Image* images_inmatess0_671_0_24[2];
static Direction direction_inmatess0_671_0_24 = {24, 10, 10, 0, -1, images_inmatess0_671_0_24, 2};
static Animation anim_inmatess0_671_0 = {&direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, NULL, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24, &direction_inmatess0_671_0_24};
static Animation * anim_array_inmatess0_671[1] = {&anim_inmatess0_671_0};
static Animations anim_inmatess0_671 = {1, &anim_array_inmatess0_671[0]};
static bool anim_inmatess0_671_initialized;
class InmateSS0_671 : public Active
{
public:
    InmateSS0_671(int x, int y) : Active(x, y, InmateSS0_671_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate SS 0", 11);
#endif
        this->animations = &anim_inmatess0_671;
        if (!anim_inmatess0_671_initialized) {
            anim_inmatess0_671_initialized = true;
            images_inmatess0_671_0_24[0] = get_internal_image(3396);
            images_inmatess0_671_0_24[1] = get_internal_image(3397);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_inmatess0_671(int x, int y)
{
    return new (Active::pool.create()) InmateSS0_671(x, y);
}
static Image* images_guard_672_0_0[2];
static Direction direction_guard_672_0_0 = {0, 10, 10, 0, -1, images_guard_672_0_0, 2};
static Image* images_guard_672_0_8[2];
static Direction direction_guard_672_0_8 = {8, 10, 10, 0, -1, images_guard_672_0_8, 2};
static Image* images_guard_672_0_16[2];
static Direction direction_guard_672_0_16 = {16, 10, 10, 0, -1, images_guard_672_0_16, 2};
static Image* images_guard_672_0_24[2];
static Direction direction_guard_672_0_24 = {24, 10, 10, 0, -1, images_guard_672_0_24, 2};
static Animation anim_guard_672_0 = {&direction_guard_672_0_0, &direction_guard_672_0_0, &direction_guard_672_0_0, &direction_guard_672_0_0, NULL, &direction_guard_672_0_8, &direction_guard_672_0_8, &direction_guard_672_0_8, &direction_guard_672_0_8, &direction_guard_672_0_8, &direction_guard_672_0_8, &direction_guard_672_0_8, NULL, &direction_guard_672_0_16, &direction_guard_672_0_16, &direction_guard_672_0_16, &direction_guard_672_0_16, &direction_guard_672_0_16, &direction_guard_672_0_16, &direction_guard_672_0_16, NULL, &direction_guard_672_0_24, &direction_guard_672_0_24, &direction_guard_672_0_24, &direction_guard_672_0_24, &direction_guard_672_0_24, &direction_guard_672_0_24, &direction_guard_672_0_24, NULL, &direction_guard_672_0_0, &direction_guard_672_0_0, &direction_guard_672_0_0};
static Image* images_guard_672_6_0[1];
static Direction direction_guard_672_6_0 = {0, 6, 6, 0, 1, images_guard_672_6_0, 1};
static Image* images_guard_672_6_8[1];
static Direction direction_guard_672_6_8 = {8, 6, 6, 0, 1, images_guard_672_6_8, 1};
static Image* images_guard_672_6_16[1];
static Direction direction_guard_672_6_16 = {16, 6, 6, 0, 1, images_guard_672_6_16, 1};
static Image* images_guard_672_6_24[1];
static Direction direction_guard_672_6_24 = {24, 6, 6, 0, 1, images_guard_672_6_24, 1};
static Animation anim_guard_672_6 = {&direction_guard_672_6_0, &direction_guard_672_6_0, &direction_guard_672_6_0, &direction_guard_672_6_0, NULL, &direction_guard_672_6_8, &direction_guard_672_6_8, &direction_guard_672_6_8, &direction_guard_672_6_8, &direction_guard_672_6_8, &direction_guard_672_6_8, &direction_guard_672_6_8, NULL, &direction_guard_672_6_16, &direction_guard_672_6_16, &direction_guard_672_6_16, &direction_guard_672_6_16, &direction_guard_672_6_16, &direction_guard_672_6_16, &direction_guard_672_6_16, NULL, &direction_guard_672_6_24, &direction_guard_672_6_24, &direction_guard_672_6_24, &direction_guard_672_6_24, &direction_guard_672_6_24, &direction_guard_672_6_24, &direction_guard_672_6_24, NULL, &direction_guard_672_6_0, &direction_guard_672_6_0, &direction_guard_672_6_0};
static Image* images_guard_672_8_0[1];
static Direction direction_guard_672_8_0 = {0, 50, 50, 0, -1, images_guard_672_8_0, 1};
static Image* images_guard_672_8_16[2];
static Direction direction_guard_672_8_16 = {16, 5, 5, 0, -1, images_guard_672_8_16, 2};
static Image* images_guard_672_8_24[3];
static Direction direction_guard_672_8_24 = {24, 10, 10, 0, -1, images_guard_672_8_24, 3};
static Animation anim_guard_672_8 = {&direction_guard_672_8_0, &direction_guard_672_8_0, &direction_guard_672_8_0, &direction_guard_672_8_0, &direction_guard_672_8_0, &direction_guard_672_8_0, &direction_guard_672_8_0, &direction_guard_672_8_0, NULL, &direction_guard_672_8_16, &direction_guard_672_8_16, &direction_guard_672_8_16, &direction_guard_672_8_16, &direction_guard_672_8_16, &direction_guard_672_8_16, &direction_guard_672_8_16, &direction_guard_672_8_16, &direction_guard_672_8_16, &direction_guard_672_8_16, &direction_guard_672_8_16, NULL, &direction_guard_672_8_24, &direction_guard_672_8_24, &direction_guard_672_8_24, &direction_guard_672_8_24, &direction_guard_672_8_24, &direction_guard_672_8_24, &direction_guard_672_8_24, NULL, &direction_guard_672_8_0, &direction_guard_672_8_0, &direction_guard_672_8_0};
static Image* images_guard_672_9_0[2];
static Direction direction_guard_672_9_0 = {0, 6, 6, 0, 2, images_guard_672_9_0, 2};
static Image* images_guard_672_9_8[2];
static Direction direction_guard_672_9_8 = {8, 6, 6, 0, 2, images_guard_672_9_8, 2};
static Image* images_guard_672_9_16[2];
static Direction direction_guard_672_9_16 = {16, 6, 6, 0, 2, images_guard_672_9_16, 2};
static Image* images_guard_672_9_24[2];
static Direction direction_guard_672_9_24 = {24, 6, 6, 0, 2, images_guard_672_9_24, 2};
static Animation anim_guard_672_9 = {&direction_guard_672_9_0, &direction_guard_672_9_0, &direction_guard_672_9_0, &direction_guard_672_9_0, NULL, &direction_guard_672_9_8, &direction_guard_672_9_8, &direction_guard_672_9_8, &direction_guard_672_9_8, &direction_guard_672_9_8, &direction_guard_672_9_8, &direction_guard_672_9_8, NULL, &direction_guard_672_9_16, &direction_guard_672_9_16, &direction_guard_672_9_16, &direction_guard_672_9_16, &direction_guard_672_9_16, &direction_guard_672_9_16, &direction_guard_672_9_16, NULL, &direction_guard_672_9_24, &direction_guard_672_9_24, &direction_guard_672_9_24, &direction_guard_672_9_24, &direction_guard_672_9_24, &direction_guard_672_9_24, &direction_guard_672_9_24, NULL, &direction_guard_672_9_0, &direction_guard_672_9_0, &direction_guard_672_9_0};
static Animation * anim_array_guard_672[10] = {&anim_guard_672_0, NULL, NULL, NULL, NULL, NULL, &anim_guard_672_6, NULL, &anim_guard_672_8, &anim_guard_672_9};
static Animations anim_guard_672 = {10, &anim_array_guard_672[0]};
static bool anim_guard_672_initialized;
class Guard_672 : public Active
{
public:
    Guard_672(int x, int y) : Active(x, y, Guard_672_type)
    {
        // qualifiers: 31, 33
#ifndef NDEBUG
        name = std::string("Guard", 5);
#endif
        this->animations = &anim_guard_672;
        if (!anim_guard_672_initialized) {
            anim_guard_672_initialized = true;
            images_guard_672_0_0[0] = get_internal_image(496);
            images_guard_672_0_0[1] = get_internal_image(503);
            images_guard_672_0_8[0] = get_internal_image(506);
            images_guard_672_0_8[1] = get_internal_image(509);
            images_guard_672_0_16[0] = get_internal_image(505);
            images_guard_672_0_16[1] = get_internal_image(504);
            images_guard_672_0_24[0] = get_internal_image(507);
            images_guard_672_0_24[1] = get_internal_image(508);
            images_guard_672_6_0[0] = get_internal_image(510);
            images_guard_672_6_8[0] = get_internal_image(513);
            images_guard_672_6_16[0] = get_internal_image(511);
            images_guard_672_6_24[0] = get_internal_image(512);
            images_guard_672_8_0[0] = get_internal_image(516);
            images_guard_672_8_16[0] = get_internal_image(492);
            images_guard_672_8_16[1] = get_internal_image(644);
            images_guard_672_8_24[0] = get_internal_image(707);
            images_guard_672_8_24[1] = get_internal_image(703);
            images_guard_672_8_24[2] = get_internal_image(706);
            images_guard_672_9_0[0] = get_internal_image(68);
            images_guard_672_9_0[1] = get_internal_image(312);
            images_guard_672_9_8[0] = get_internal_image(316);
            images_guard_672_9_8[1] = get_internal_image(92);
            images_guard_672_9_16[0] = get_internal_image(82);
            images_guard_672_9_16[1] = get_internal_image(313);
            images_guard_672_9_24[0] = get_internal_image(315);
            images_guard_672_9_24[1] = get_internal_image(24);
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
FrameObject * create_guard_672(int x, int y)
{
    return new (Active::pool.create()) Guard_672(x, y);
}
static Image* images_player0_673_0_0[2];
static Direction direction_player0_673_0_0 = {0, 10, 10, 0, -1, images_player0_673_0_0, 2};
static Image* images_player0_673_0_8[2];
static Direction direction_player0_673_0_8 = {8, 10, 10, 0, -1, images_player0_673_0_8, 2};
static Image* images_player0_673_0_16[2];
static Direction direction_player0_673_0_16 = {16, 10, 10, 0, -1, images_player0_673_0_16, 2};
static Image* images_player0_673_0_24[2];
static Direction direction_player0_673_0_24 = {24, 10, 10, 0, -1, images_player0_673_0_24, 2};
static Animation anim_player0_673_0 = {&direction_player0_673_0_0, &direction_player0_673_0_0, &direction_player0_673_0_0, &direction_player0_673_0_0, NULL, &direction_player0_673_0_8, &direction_player0_673_0_8, &direction_player0_673_0_8, &direction_player0_673_0_8, &direction_player0_673_0_8, &direction_player0_673_0_8, &direction_player0_673_0_8, NULL, &direction_player0_673_0_16, &direction_player0_673_0_16, &direction_player0_673_0_16, &direction_player0_673_0_16, &direction_player0_673_0_16, &direction_player0_673_0_16, &direction_player0_673_0_16, NULL, &direction_player0_673_0_24, &direction_player0_673_0_24, &direction_player0_673_0_24, &direction_player0_673_0_24, &direction_player0_673_0_24, &direction_player0_673_0_24, &direction_player0_673_0_24, NULL, &direction_player0_673_0_0, &direction_player0_673_0_0, &direction_player0_673_0_0};
static Image* images_player0_673_4_0[4];
static Direction direction_player0_673_4_0 = {0, 20, 20, 0, 1, images_player0_673_4_0, 4};
static Image* images_player0_673_4_16[4];
static Direction direction_player0_673_4_16 = {16, 20, 20, 0, 1, images_player0_673_4_16, 4};
static Animation anim_player0_673_4 = {&direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0, NULL, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, &direction_player0_673_4_16, NULL, &direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0, &direction_player0_673_4_0};
static Image* images_player0_673_6_0[1];
static Direction direction_player0_673_6_0 = {0, 6, 6, 0, 1, images_player0_673_6_0, 1};
static Image* images_player0_673_6_8[1];
static Direction direction_player0_673_6_8 = {8, 6, 6, 0, 1, images_player0_673_6_8, 1};
static Image* images_player0_673_6_16[1];
static Direction direction_player0_673_6_16 = {16, 6, 6, 0, 1, images_player0_673_6_16, 1};
static Image* images_player0_673_6_24[1];
static Direction direction_player0_673_6_24 = {24, 6, 6, 0, 1, images_player0_673_6_24, 1};
static Animation anim_player0_673_6 = {&direction_player0_673_6_0, &direction_player0_673_6_0, &direction_player0_673_6_0, &direction_player0_673_6_0, NULL, &direction_player0_673_6_8, &direction_player0_673_6_8, &direction_player0_673_6_8, &direction_player0_673_6_8, &direction_player0_673_6_8, &direction_player0_673_6_8, &direction_player0_673_6_8, NULL, &direction_player0_673_6_16, &direction_player0_673_6_16, &direction_player0_673_6_16, &direction_player0_673_6_16, &direction_player0_673_6_16, &direction_player0_673_6_16, &direction_player0_673_6_16, NULL, &direction_player0_673_6_24, &direction_player0_673_6_24, &direction_player0_673_6_24, &direction_player0_673_6_24, &direction_player0_673_6_24, &direction_player0_673_6_24, &direction_player0_673_6_24, NULL, &direction_player0_673_6_0, &direction_player0_673_6_0, &direction_player0_673_6_0};
static Image* images_player0_673_7_0[2];
static Direction direction_player0_673_7_0 = {0, 10, 10, 0, -1, images_player0_673_7_0, 2};
static Image* images_player0_673_7_8[2];
static Direction direction_player0_673_7_8 = {8, 10, 10, 0, -1, images_player0_673_7_8, 2};
static Image* images_player0_673_7_16[2];
static Direction direction_player0_673_7_16 = {16, 10, 10, 0, -1, images_player0_673_7_16, 2};
static Image* images_player0_673_7_24[2];
static Direction direction_player0_673_7_24 = {24, 10, 10, 0, -1, images_player0_673_7_24, 2};
static Animation anim_player0_673_7 = {&direction_player0_673_7_0, &direction_player0_673_7_0, &direction_player0_673_7_0, &direction_player0_673_7_0, NULL, &direction_player0_673_7_8, &direction_player0_673_7_8, &direction_player0_673_7_8, &direction_player0_673_7_8, &direction_player0_673_7_8, &direction_player0_673_7_8, &direction_player0_673_7_8, NULL, &direction_player0_673_7_16, &direction_player0_673_7_16, &direction_player0_673_7_16, &direction_player0_673_7_16, &direction_player0_673_7_16, &direction_player0_673_7_16, &direction_player0_673_7_16, NULL, &direction_player0_673_7_24, &direction_player0_673_7_24, &direction_player0_673_7_24, &direction_player0_673_7_24, &direction_player0_673_7_24, &direction_player0_673_7_24, &direction_player0_673_7_24, NULL, &direction_player0_673_7_0, &direction_player0_673_7_0, &direction_player0_673_7_0};
static Image* images_player0_673_8_24[1];
static Direction direction_player0_673_8_24 = {24, 50, 50, 0, -1, images_player0_673_8_24, 1};
static Animation anim_player0_673_8 = {&direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, NULL, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24, &direction_player0_673_8_24};
static Image* images_player0_673_9_0[2];
static Direction direction_player0_673_9_0 = {0, 5, 5, 0, -1, images_player0_673_9_0, 2};
static Animation anim_player0_673_9 = {&direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, NULL, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0, &direction_player0_673_9_0};
static Image* images_player0_673_10_0[5];
static Direction direction_player0_673_10_0 = {0, 10, 10, 0, 1, images_player0_673_10_0, 5};
static Animation anim_player0_673_10 = {&direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, NULL, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0, &direction_player0_673_10_0};
static Image* images_player0_673_11_0[2];
static Direction direction_player0_673_11_0 = {0, 10, 10, 0, -1, images_player0_673_11_0, 2};
static Image* images_player0_673_11_8[2];
static Direction direction_player0_673_11_8 = {8, 10, 10, 0, -1, images_player0_673_11_8, 2};
static Image* images_player0_673_11_16[2];
static Direction direction_player0_673_11_16 = {16, 10, 10, 0, -1, images_player0_673_11_16, 2};
static Image* images_player0_673_11_24[2];
static Direction direction_player0_673_11_24 = {24, 10, 10, 0, -1, images_player0_673_11_24, 2};
static Animation anim_player0_673_11 = {&direction_player0_673_11_0, &direction_player0_673_11_0, &direction_player0_673_11_0, &direction_player0_673_11_0, NULL, &direction_player0_673_11_8, &direction_player0_673_11_8, &direction_player0_673_11_8, &direction_player0_673_11_8, &direction_player0_673_11_8, &direction_player0_673_11_8, &direction_player0_673_11_8, NULL, &direction_player0_673_11_16, &direction_player0_673_11_16, &direction_player0_673_11_16, &direction_player0_673_11_16, &direction_player0_673_11_16, &direction_player0_673_11_16, &direction_player0_673_11_16, NULL, &direction_player0_673_11_24, &direction_player0_673_11_24, &direction_player0_673_11_24, &direction_player0_673_11_24, &direction_player0_673_11_24, &direction_player0_673_11_24, &direction_player0_673_11_24, NULL, &direction_player0_673_11_0, &direction_player0_673_11_0, &direction_player0_673_11_0};
static Image* images_player0_673_12_0[2];
static Direction direction_player0_673_12_0 = {0, 10, 10, 0, -1, images_player0_673_12_0, 2};
static Image* images_player0_673_12_8[2];
static Direction direction_player0_673_12_8 = {8, 10, 10, 0, -1, images_player0_673_12_8, 2};
static Image* images_player0_673_12_16[2];
static Direction direction_player0_673_12_16 = {16, 10, 10, 0, -1, images_player0_673_12_16, 2};
static Image* images_player0_673_12_24[2];
static Direction direction_player0_673_12_24 = {24, 10, 10, 0, -1, images_player0_673_12_24, 2};
static Animation anim_player0_673_12 = {&direction_player0_673_12_0, &direction_player0_673_12_0, &direction_player0_673_12_0, &direction_player0_673_12_0, NULL, &direction_player0_673_12_8, &direction_player0_673_12_8, &direction_player0_673_12_8, &direction_player0_673_12_8, &direction_player0_673_12_8, &direction_player0_673_12_8, &direction_player0_673_12_8, NULL, &direction_player0_673_12_16, &direction_player0_673_12_16, &direction_player0_673_12_16, &direction_player0_673_12_16, &direction_player0_673_12_16, &direction_player0_673_12_16, &direction_player0_673_12_16, NULL, &direction_player0_673_12_24, &direction_player0_673_12_24, &direction_player0_673_12_24, &direction_player0_673_12_24, &direction_player0_673_12_24, &direction_player0_673_12_24, &direction_player0_673_12_24, NULL, &direction_player0_673_12_0, &direction_player0_673_12_0, &direction_player0_673_12_0};
static Image* images_player0_673_13_0[2];
static Direction direction_player0_673_13_0 = {0, 10, 10, 0, -1, images_player0_673_13_0, 2};
static Image* images_player0_673_13_8[2];
static Direction direction_player0_673_13_8 = {8, 10, 10, 0, -1, images_player0_673_13_8, 2};
static Image* images_player0_673_13_16[2];
static Direction direction_player0_673_13_16 = {16, 10, 10, 0, -1, images_player0_673_13_16, 2};
static Image* images_player0_673_13_24[2];
static Direction direction_player0_673_13_24 = {24, 10, 10, 0, -1, images_player0_673_13_24, 2};
static Animation anim_player0_673_13 = {&direction_player0_673_13_0, &direction_player0_673_13_0, &direction_player0_673_13_0, &direction_player0_673_13_0, NULL, &direction_player0_673_13_8, &direction_player0_673_13_8, &direction_player0_673_13_8, &direction_player0_673_13_8, &direction_player0_673_13_8, &direction_player0_673_13_8, &direction_player0_673_13_8, NULL, &direction_player0_673_13_16, &direction_player0_673_13_16, &direction_player0_673_13_16, &direction_player0_673_13_16, &direction_player0_673_13_16, &direction_player0_673_13_16, &direction_player0_673_13_16, NULL, &direction_player0_673_13_24, &direction_player0_673_13_24, &direction_player0_673_13_24, &direction_player0_673_13_24, &direction_player0_673_13_24, &direction_player0_673_13_24, &direction_player0_673_13_24, NULL, &direction_player0_673_13_0, &direction_player0_673_13_0, &direction_player0_673_13_0};
static Image* images_player0_673_14_0[2];
static Direction direction_player0_673_14_0 = {0, 10, 10, 0, -1, images_player0_673_14_0, 2};
static Image* images_player0_673_14_8[2];
static Direction direction_player0_673_14_8 = {8, 10, 10, 0, -1, images_player0_673_14_8, 2};
static Image* images_player0_673_14_16[2];
static Direction direction_player0_673_14_16 = {16, 10, 10, 0, -1, images_player0_673_14_16, 2};
static Image* images_player0_673_14_24[2];
static Direction direction_player0_673_14_24 = {24, 10, 10, 0, -1, images_player0_673_14_24, 2};
static Animation anim_player0_673_14 = {&direction_player0_673_14_0, &direction_player0_673_14_0, &direction_player0_673_14_0, &direction_player0_673_14_0, NULL, &direction_player0_673_14_8, &direction_player0_673_14_8, &direction_player0_673_14_8, &direction_player0_673_14_8, &direction_player0_673_14_8, &direction_player0_673_14_8, &direction_player0_673_14_8, NULL, &direction_player0_673_14_16, &direction_player0_673_14_16, &direction_player0_673_14_16, &direction_player0_673_14_16, &direction_player0_673_14_16, &direction_player0_673_14_16, &direction_player0_673_14_16, NULL, &direction_player0_673_14_24, &direction_player0_673_14_24, &direction_player0_673_14_24, &direction_player0_673_14_24, &direction_player0_673_14_24, &direction_player0_673_14_24, &direction_player0_673_14_24, NULL, &direction_player0_673_14_0, &direction_player0_673_14_0, &direction_player0_673_14_0};
static Image* images_player0_673_15_0[2];
static Direction direction_player0_673_15_0 = {0, 10, 10, 0, -1, images_player0_673_15_0, 2};
static Image* images_player0_673_15_8[2];
static Direction direction_player0_673_15_8 = {8, 10, 10, 0, -1, images_player0_673_15_8, 2};
static Image* images_player0_673_15_16[2];
static Direction direction_player0_673_15_16 = {16, 10, 10, 0, -1, images_player0_673_15_16, 2};
static Image* images_player0_673_15_24[2];
static Direction direction_player0_673_15_24 = {24, 10, 10, 0, -1, images_player0_673_15_24, 2};
static Animation anim_player0_673_15 = {&direction_player0_673_15_0, &direction_player0_673_15_0, &direction_player0_673_15_0, &direction_player0_673_15_0, NULL, &direction_player0_673_15_8, &direction_player0_673_15_8, &direction_player0_673_15_8, &direction_player0_673_15_8, &direction_player0_673_15_8, &direction_player0_673_15_8, &direction_player0_673_15_8, NULL, &direction_player0_673_15_16, &direction_player0_673_15_16, &direction_player0_673_15_16, &direction_player0_673_15_16, &direction_player0_673_15_16, &direction_player0_673_15_16, &direction_player0_673_15_16, NULL, &direction_player0_673_15_24, &direction_player0_673_15_24, &direction_player0_673_15_24, &direction_player0_673_15_24, &direction_player0_673_15_24, &direction_player0_673_15_24, &direction_player0_673_15_24, NULL, &direction_player0_673_15_0, &direction_player0_673_15_0, &direction_player0_673_15_0};
static Image* images_player0_673_16_0[2];
static Direction direction_player0_673_16_0 = {0, 10, 10, 0, -1, images_player0_673_16_0, 2};
static Image* images_player0_673_16_8[2];
static Direction direction_player0_673_16_8 = {8, 10, 10, 0, -1, images_player0_673_16_8, 2};
static Image* images_player0_673_16_16[2];
static Direction direction_player0_673_16_16 = {16, 10, 10, 0, -1, images_player0_673_16_16, 2};
static Image* images_player0_673_16_24[2];
static Direction direction_player0_673_16_24 = {24, 10, 10, 0, -1, images_player0_673_16_24, 2};
static Animation anim_player0_673_16 = {&direction_player0_673_16_0, &direction_player0_673_16_0, &direction_player0_673_16_0, &direction_player0_673_16_0, NULL, &direction_player0_673_16_8, &direction_player0_673_16_8, &direction_player0_673_16_8, &direction_player0_673_16_8, &direction_player0_673_16_8, &direction_player0_673_16_8, &direction_player0_673_16_8, NULL, &direction_player0_673_16_16, &direction_player0_673_16_16, &direction_player0_673_16_16, &direction_player0_673_16_16, &direction_player0_673_16_16, &direction_player0_673_16_16, &direction_player0_673_16_16, NULL, &direction_player0_673_16_24, &direction_player0_673_16_24, &direction_player0_673_16_24, &direction_player0_673_16_24, &direction_player0_673_16_24, &direction_player0_673_16_24, &direction_player0_673_16_24, NULL, &direction_player0_673_16_0, &direction_player0_673_16_0, &direction_player0_673_16_0};
static Image* images_player0_673_17_0[2];
static Direction direction_player0_673_17_0 = {0, 5, 5, 1, -1, images_player0_673_17_0, 2};
static Image* images_player0_673_17_8[2];
static Direction direction_player0_673_17_8 = {8, 5, 5, 1, -1, images_player0_673_17_8, 2};
static Image* images_player0_673_17_16[2];
static Direction direction_player0_673_17_16 = {16, 5, 5, 1, -1, images_player0_673_17_16, 2};
static Image* images_player0_673_17_24[2];
static Direction direction_player0_673_17_24 = {24, 5, 5, 1, -1, images_player0_673_17_24, 2};
static Animation anim_player0_673_17 = {&direction_player0_673_17_0, &direction_player0_673_17_0, &direction_player0_673_17_0, &direction_player0_673_17_0, NULL, &direction_player0_673_17_8, &direction_player0_673_17_8, &direction_player0_673_17_8, &direction_player0_673_17_8, &direction_player0_673_17_8, &direction_player0_673_17_8, &direction_player0_673_17_8, NULL, &direction_player0_673_17_16, &direction_player0_673_17_16, &direction_player0_673_17_16, &direction_player0_673_17_16, &direction_player0_673_17_16, &direction_player0_673_17_16, &direction_player0_673_17_16, NULL, &direction_player0_673_17_24, &direction_player0_673_17_24, &direction_player0_673_17_24, &direction_player0_673_17_24, &direction_player0_673_17_24, &direction_player0_673_17_24, &direction_player0_673_17_24, NULL, &direction_player0_673_17_0, &direction_player0_673_17_0, &direction_player0_673_17_0};
static Image* images_player0_673_18_24[8];
static Direction direction_player0_673_18_24 = {24, 10, 10, 0, -1, images_player0_673_18_24, 8};
static Animation anim_player0_673_18 = {&direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, NULL, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24, &direction_player0_673_18_24};
static Image* images_player0_673_19_24[4];
static Direction direction_player0_673_19_24 = {24, 10, 10, 0, -1, images_player0_673_19_24, 4};
static Animation anim_player0_673_19 = {&direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, NULL, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24, &direction_player0_673_19_24};
static Animation * anim_array_player0_673[20] = {&anim_player0_673_0, NULL, NULL, NULL, &anim_player0_673_4, NULL, &anim_player0_673_6, &anim_player0_673_7, &anim_player0_673_8, &anim_player0_673_9, &anim_player0_673_10, &anim_player0_673_11, &anim_player0_673_12, &anim_player0_673_13, &anim_player0_673_14, &anim_player0_673_15, &anim_player0_673_16, &anim_player0_673_17, &anim_player0_673_18, &anim_player0_673_19};
static Animations anim_player0_673 = {20, &anim_array_player0_673[0]};
static bool anim_player0_673_initialized;
class Player0_673 : public Active
{
public:
    Player0_673(int x, int y) : Active(x, y, Player0_673_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_0", 8);
#endif
        this->animations = &anim_player0_673;
        if (!anim_player0_673_initialized) {
            anim_player0_673_initialized = true;
            images_player0_673_0_0[0] = get_internal_image(556);
            images_player0_673_0_0[1] = get_internal_image(558);
            images_player0_673_0_8[0] = get_internal_image(561);
            images_player0_673_0_8[1] = get_internal_image(563);
            images_player0_673_0_16[0] = get_internal_image(559);
            images_player0_673_0_16[1] = get_internal_image(557);
            images_player0_673_0_24[0] = get_internal_image(560);
            images_player0_673_0_24[1] = get_internal_image(562);
            images_player0_673_4_0[0] = get_internal_image(369);
            images_player0_673_4_0[1] = get_internal_image(373);
            images_player0_673_4_0[2] = get_internal_image(369);
            images_player0_673_4_0[3] = get_internal_image(373);
            images_player0_673_4_16[0] = get_internal_image(371);
            images_player0_673_4_16[1] = get_internal_image(763);
            images_player0_673_4_16[2] = get_internal_image(371);
            images_player0_673_4_16[3] = get_internal_image(763);
            images_player0_673_6_0[0] = get_internal_image(1119);
            images_player0_673_6_8[0] = get_internal_image(1216);
            images_player0_673_6_16[0] = get_internal_image(1215);
            images_player0_673_6_24[0] = get_internal_image(1217);
            images_player0_673_7_0[0] = get_internal_image(626);
            images_player0_673_7_0[1] = get_internal_image(628);
            images_player0_673_7_8[0] = get_internal_image(633);
            images_player0_673_7_8[1] = get_internal_image(635);
            images_player0_673_7_16[0] = get_internal_image(627);
            images_player0_673_7_16[1] = get_internal_image(629);
            images_player0_673_7_24[0] = get_internal_image(631);
            images_player0_673_7_24[1] = get_internal_image(630);
            images_player0_673_8_24[0] = get_internal_image(597);
            images_player0_673_9_0[0] = get_internal_image(1490);
            images_player0_673_9_0[1] = get_internal_image(1491);
            images_player0_673_10_0[0] = get_internal_image(596);
            images_player0_673_10_0[1] = get_internal_image(493);
            images_player0_673_10_0[2] = get_internal_image(595);
            images_player0_673_10_0[3] = get_internal_image(234);
            images_player0_673_10_0[4] = get_internal_image(595);
            images_player0_673_11_0[0] = get_internal_image(535);
            images_player0_673_11_0[1] = get_internal_image(537);
            images_player0_673_11_8[0] = get_internal_image(742);
            images_player0_673_11_8[1] = get_internal_image(743);
            images_player0_673_11_16[0] = get_internal_image(539);
            images_player0_673_11_16[1] = get_internal_image(538);
            images_player0_673_11_24[0] = get_internal_image(165);
            images_player0_673_11_24[1] = get_internal_image(711);
            images_player0_673_12_0[0] = get_internal_image(1020);
            images_player0_673_12_0[1] = get_internal_image(1021);
            images_player0_673_12_8[0] = get_internal_image(1598);
            images_player0_673_12_8[1] = get_internal_image(684);
            images_player0_673_12_16[0] = get_internal_image(2062);
            images_player0_673_12_16[1] = get_internal_image(2063);
            images_player0_673_12_24[0] = get_internal_image(1581);
            images_player0_673_12_24[1] = get_internal_image(1584);
            images_player0_673_13_0[0] = get_internal_image(1853);
            images_player0_673_13_0[1] = get_internal_image(1854);
            images_player0_673_13_8[0] = get_internal_image(1595);
            images_player0_673_13_8[1] = get_internal_image(1591);
            images_player0_673_13_16[0] = get_internal_image(1855);
            images_player0_673_13_16[1] = get_internal_image(1856);
            images_player0_673_13_24[0] = get_internal_image(1590);
            images_player0_673_13_24[1] = get_internal_image(1593);
            images_player0_673_14_0[0] = get_internal_image(1645);
            images_player0_673_14_0[1] = get_internal_image(1646);
            images_player0_673_14_8[0] = get_internal_image(1641);
            images_player0_673_14_8[1] = get_internal_image(1642);
            images_player0_673_14_16[0] = get_internal_image(1647);
            images_player0_673_14_16[1] = get_internal_image(1648);
            images_player0_673_14_24[0] = get_internal_image(1594);
            images_player0_673_14_24[1] = get_internal_image(1592);
            images_player0_673_15_0[0] = get_internal_image(1631);
            images_player0_673_15_0[1] = get_internal_image(1633);
            images_player0_673_15_8[0] = get_internal_image(1597);
            images_player0_673_15_8[1] = get_internal_image(1601);
            images_player0_673_15_16[0] = get_internal_image(1634);
            images_player0_673_15_16[1] = get_internal_image(1635);
            images_player0_673_15_24[0] = get_internal_image(1604);
            images_player0_673_15_24[1] = get_internal_image(1603);
            images_player0_673_16_0[0] = get_internal_image(1865);
            images_player0_673_16_0[1] = get_internal_image(1866);
            images_player0_673_16_8[0] = get_internal_image(1611);
            images_player0_673_16_8[1] = get_internal_image(1610);
            images_player0_673_16_16[0] = get_internal_image(1867);
            images_player0_673_16_16[1] = get_internal_image(1868);
            images_player0_673_16_24[0] = get_internal_image(1608);
            images_player0_673_16_24[1] = get_internal_image(1609);
            images_player0_673_17_0[0] = get_internal_image(1969);
            images_player0_673_17_0[1] = get_internal_image(1970);
            images_player0_673_17_8[0] = get_internal_image(1967);
            images_player0_673_17_8[1] = get_internal_image(1974);
            images_player0_673_17_16[0] = get_internal_image(1961);
            images_player0_673_17_16[1] = get_internal_image(1971);
            images_player0_673_17_24[0] = get_internal_image(1966);
            images_player0_673_17_24[1] = get_internal_image(1968);
            images_player0_673_18_24[0] = get_internal_image(1989);
            images_player0_673_18_24[1] = get_internal_image(1997);
            images_player0_673_18_24[2] = get_internal_image(2006);
            images_player0_673_18_24[3] = get_internal_image(2048);
            images_player0_673_18_24[4] = get_internal_image(2039);
            images_player0_673_18_24[5] = get_internal_image(2042);
            images_player0_673_18_24[6] = get_internal_image(2006);
            images_player0_673_18_24[7] = get_internal_image(2052);
            images_player0_673_19_24[0] = get_internal_image(2134);
            images_player0_673_19_24[1] = get_internal_image(2135);
            images_player0_673_19_24[2] = get_internal_image(2133);
            images_player0_673_19_24[3] = get_internal_image(2135);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player0_673(int x, int y)
{
    return new (Active::pool.create()) Player0_673(x, y);
}
static Image* images_baseyou_674_0_0[1];
static Direction direction_baseyou_674_0_0 = {0, 50, 50, 0, 1, images_baseyou_674_0_0, 1};
static Animation anim_baseyou_674_0 = {&direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, NULL, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0, &direction_baseyou_674_0_0};
static Animation * anim_array_baseyou_674[1] = {&anim_baseyou_674_0};
static Animations anim_baseyou_674 = {1, &anim_array_baseyou_674[0]};
static bool anim_baseyou_674_initialized;
class BASEYou_674 : public Active
{
public:
    BASEYou_674(int x, int y) : Active(x, y, BASEYou_674_type)
    {
        // qualifiers: 0, 45
#ifndef NDEBUG
        name = std::string("BASE - You", 10);
#endif
        set_visible(false);
        this->animations = &anim_baseyou_674;
        if (!anim_baseyou_674_initialized) {
            anim_baseyou_674_initialized = true;
            images_baseyou_674_0_0[0] = get_internal_image(528);
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
FrameObject * create_baseyou_674(int x, int y)
{
    return new (Active::pool.create()) BASEYou_674(x, y);
}
static Image* images_soil_675_0_0[1];
static Direction direction_soil_675_0_0 = {0, 50, 50, 0, 1, images_soil_675_0_0, 1};
static Animation anim_soil_675_0 = {&direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, NULL, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0, &direction_soil_675_0_0};
static Image* images_soil_675_5_0[1];
static Direction direction_soil_675_5_0 = {0, 50, 50, 0, 1, images_soil_675_5_0, 1};
static Image* images_soil_675_5_1[1];
static Direction direction_soil_675_5_1 = {1, 50, 50, 0, 1, images_soil_675_5_1, 1};
static Image* images_soil_675_5_2[1];
static Direction direction_soil_675_5_2 = {2, 50, 50, 0, 1, images_soil_675_5_2, 1};
static Image* images_soil_675_5_3[1];
static Direction direction_soil_675_5_3 = {3, 50, 50, 0, 1, images_soil_675_5_3, 1};
static Image* images_soil_675_5_4[1];
static Direction direction_soil_675_5_4 = {4, 50, 50, 0, 1, images_soil_675_5_4, 1};
static Image* images_soil_675_5_5[1];
static Direction direction_soil_675_5_5 = {5, 50, 50, 0, 1, images_soil_675_5_5, 1};
static Image* images_soil_675_5_6[1];
static Direction direction_soil_675_5_6 = {6, 50, 50, 0, 1, images_soil_675_5_6, 1};
static Animation anim_soil_675_5 = {&direction_soil_675_5_0, &direction_soil_675_5_1, &direction_soil_675_5_2, &direction_soil_675_5_3, &direction_soil_675_5_4, &direction_soil_675_5_5, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, &direction_soil_675_5_6, NULL, &direction_soil_675_5_0, &direction_soil_675_5_0, &direction_soil_675_5_0, &direction_soil_675_5_0, &direction_soil_675_5_0, &direction_soil_675_5_0, &direction_soil_675_5_0, &direction_soil_675_5_0, &direction_soil_675_5_0, &direction_soil_675_5_0, &direction_soil_675_5_0, &direction_soil_675_5_0};
static Image* images_soil_675_6_0[1];
static Direction direction_soil_675_6_0 = {0, 50, 50, 0, -1, images_soil_675_6_0, 1};
static Animation anim_soil_675_6 = {&direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, NULL, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0, &direction_soil_675_6_0};
static Animation * anim_array_soil_675[7] = {&anim_soil_675_0, NULL, NULL, NULL, NULL, &anim_soil_675_5, &anim_soil_675_6};
static Animations anim_soil_675 = {7, &anim_array_soil_675[0]};
static bool anim_soil_675_initialized;
class Soil_675 : public Active
{
public:
    Soil_675(int x, int y) : Active(x, y, Soil_675_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("soil", 4);
#endif
        this->animations = &anim_soil_675;
        if (!anim_soil_675_initialized) {
            anim_soil_675_initialized = true;
            images_soil_675_0_0[0] = get_internal_image(235);
            images_soil_675_5_0[0] = get_internal_image(389);
            images_soil_675_5_1[0] = get_internal_image(207);
            images_soil_675_5_2[0] = get_internal_image(191);
            images_soil_675_5_3[0] = get_internal_image(206);
            images_soil_675_5_4[0] = get_internal_image(211);
            images_soil_675_5_5[0] = get_internal_image(204);
            images_soil_675_5_6[0] = get_internal_image(194);
            images_soil_675_6_0[0] = get_internal_image(1422);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_soil_675(int x, int y)
{
    return new (Active::pool.create()) Soil_675(x, y);
}
static Image* images_inmate_676_0_0[2];
static Direction direction_inmate_676_0_0 = {0, 10, 10, 0, -1, images_inmate_676_0_0, 2};
static Image* images_inmate_676_0_8[2];
static Direction direction_inmate_676_0_8 = {8, 10, 10, 0, -1, images_inmate_676_0_8, 2};
static Image* images_inmate_676_0_16[2];
static Direction direction_inmate_676_0_16 = {16, 10, 10, 0, -1, images_inmate_676_0_16, 2};
static Image* images_inmate_676_0_24[2];
static Direction direction_inmate_676_0_24 = {24, 10, 10, 0, -1, images_inmate_676_0_24, 2};
static Animation anim_inmate_676_0 = {&direction_inmate_676_0_0, &direction_inmate_676_0_0, &direction_inmate_676_0_0, &direction_inmate_676_0_0, NULL, &direction_inmate_676_0_8, &direction_inmate_676_0_8, &direction_inmate_676_0_8, &direction_inmate_676_0_8, &direction_inmate_676_0_8, &direction_inmate_676_0_8, &direction_inmate_676_0_8, NULL, &direction_inmate_676_0_16, &direction_inmate_676_0_16, &direction_inmate_676_0_16, &direction_inmate_676_0_16, &direction_inmate_676_0_16, &direction_inmate_676_0_16, &direction_inmate_676_0_16, NULL, &direction_inmate_676_0_24, &direction_inmate_676_0_24, &direction_inmate_676_0_24, &direction_inmate_676_0_24, &direction_inmate_676_0_24, &direction_inmate_676_0_24, &direction_inmate_676_0_24, NULL, &direction_inmate_676_0_0, &direction_inmate_676_0_0, &direction_inmate_676_0_0};
static Image* images_inmate_676_6_0[1];
static Direction direction_inmate_676_6_0 = {0, 6, 6, 0, 1, images_inmate_676_6_0, 1};
static Image* images_inmate_676_6_8[1];
static Direction direction_inmate_676_6_8 = {8, 6, 6, 0, 1, images_inmate_676_6_8, 1};
static Image* images_inmate_676_6_16[1];
static Direction direction_inmate_676_6_16 = {16, 6, 6, 0, 1, images_inmate_676_6_16, 1};
static Image* images_inmate_676_6_24[1];
static Direction direction_inmate_676_6_24 = {24, 6, 6, 0, 1, images_inmate_676_6_24, 1};
static Animation anim_inmate_676_6 = {&direction_inmate_676_6_0, &direction_inmate_676_6_0, &direction_inmate_676_6_0, &direction_inmate_676_6_0, NULL, &direction_inmate_676_6_8, &direction_inmate_676_6_8, &direction_inmate_676_6_8, &direction_inmate_676_6_8, &direction_inmate_676_6_8, &direction_inmate_676_6_8, &direction_inmate_676_6_8, NULL, &direction_inmate_676_6_16, &direction_inmate_676_6_16, &direction_inmate_676_6_16, &direction_inmate_676_6_16, &direction_inmate_676_6_16, &direction_inmate_676_6_16, &direction_inmate_676_6_16, NULL, &direction_inmate_676_6_24, &direction_inmate_676_6_24, &direction_inmate_676_6_24, &direction_inmate_676_6_24, &direction_inmate_676_6_24, &direction_inmate_676_6_24, &direction_inmate_676_6_24, NULL, &direction_inmate_676_6_0, &direction_inmate_676_6_0, &direction_inmate_676_6_0};
static Image* images_inmate_676_8_0[2];
static Direction direction_inmate_676_8_0 = {0, 10, 10, 0, -1, images_inmate_676_8_0, 2};
static Image* images_inmate_676_8_16[2];
static Direction direction_inmate_676_8_16 = {16, 5, 5, 0, -1, images_inmate_676_8_16, 2};
static Image* images_inmate_676_8_24[3];
static Direction direction_inmate_676_8_24 = {24, 10, 10, 0, -1, images_inmate_676_8_24, 3};
static Animation anim_inmate_676_8 = {&direction_inmate_676_8_0, &direction_inmate_676_8_0, &direction_inmate_676_8_0, &direction_inmate_676_8_0, &direction_inmate_676_8_0, &direction_inmate_676_8_0, &direction_inmate_676_8_0, &direction_inmate_676_8_0, NULL, &direction_inmate_676_8_16, &direction_inmate_676_8_16, &direction_inmate_676_8_16, &direction_inmate_676_8_16, &direction_inmate_676_8_16, &direction_inmate_676_8_16, &direction_inmate_676_8_16, &direction_inmate_676_8_16, &direction_inmate_676_8_16, &direction_inmate_676_8_16, &direction_inmate_676_8_16, NULL, &direction_inmate_676_8_24, &direction_inmate_676_8_24, &direction_inmate_676_8_24, &direction_inmate_676_8_24, &direction_inmate_676_8_24, &direction_inmate_676_8_24, &direction_inmate_676_8_24, NULL, &direction_inmate_676_8_0, &direction_inmate_676_8_0, &direction_inmate_676_8_0};
static Image* images_inmate_676_9_0[2];
static Direction direction_inmate_676_9_0 = {0, 5, 5, 0, -1, images_inmate_676_9_0, 2};
static Animation anim_inmate_676_9 = {&direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, NULL, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0, &direction_inmate_676_9_0};
static Image* images_inmate_676_10_0[5];
static Direction direction_inmate_676_10_0 = {0, 10, 10, 0, -1, images_inmate_676_10_0, 5};
static Animation anim_inmate_676_10 = {&direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, NULL, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0, &direction_inmate_676_10_0};
static Image* images_inmate_676_11_0[2];
static Direction direction_inmate_676_11_0 = {0, 6, 6, 0, -1, images_inmate_676_11_0, 2};
static Image* images_inmate_676_11_8[2];
static Direction direction_inmate_676_11_8 = {8, 6, 6, 0, -1, images_inmate_676_11_8, 2};
static Image* images_inmate_676_11_16[2];
static Direction direction_inmate_676_11_16 = {16, 6, 6, 0, -1, images_inmate_676_11_16, 2};
static Image* images_inmate_676_11_24[2];
static Direction direction_inmate_676_11_24 = {24, 6, 6, 0, -1, images_inmate_676_11_24, 2};
static Animation anim_inmate_676_11 = {&direction_inmate_676_11_0, &direction_inmate_676_11_0, &direction_inmate_676_11_0, &direction_inmate_676_11_0, NULL, &direction_inmate_676_11_8, &direction_inmate_676_11_8, &direction_inmate_676_11_8, &direction_inmate_676_11_8, &direction_inmate_676_11_8, &direction_inmate_676_11_8, &direction_inmate_676_11_8, NULL, &direction_inmate_676_11_16, &direction_inmate_676_11_16, &direction_inmate_676_11_16, &direction_inmate_676_11_16, &direction_inmate_676_11_16, &direction_inmate_676_11_16, &direction_inmate_676_11_16, NULL, &direction_inmate_676_11_24, &direction_inmate_676_11_24, &direction_inmate_676_11_24, &direction_inmate_676_11_24, &direction_inmate_676_11_24, &direction_inmate_676_11_24, &direction_inmate_676_11_24, NULL, &direction_inmate_676_11_0, &direction_inmate_676_11_0, &direction_inmate_676_11_0};
static Image* images_inmate_676_18_24[8];
static Direction direction_inmate_676_18_24 = {24, 10, 10, 0, -1, images_inmate_676_18_24, 8};
static Animation anim_inmate_676_18 = {&direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, NULL, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24, &direction_inmate_676_18_24};
static Animation * anim_array_inmate_676[19] = {&anim_inmate_676_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate_676_6, NULL, &anim_inmate_676_8, &anim_inmate_676_9, &anim_inmate_676_10, &anim_inmate_676_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate_676_18};
static Animations anim_inmate_676 = {19, &anim_array_inmate_676[0]};
static bool anim_inmate_676_initialized;
class Inmate_676 : public Active
{
public:
    Inmate_676(int x, int y) : Active(x, y, Inmate_676_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate", 6);
#endif
        this->animations = &anim_inmate_676;
        if (!anim_inmate_676_initialized) {
            anim_inmate_676_initialized = true;
            images_inmate_676_0_0[0] = get_internal_image(570);
            images_inmate_676_0_0[1] = get_internal_image(566);
            images_inmate_676_0_8[0] = get_internal_image(543);
            images_inmate_676_0_8[1] = get_internal_image(544);
            images_inmate_676_0_16[0] = get_internal_image(571);
            images_inmate_676_0_16[1] = get_internal_image(572);
            images_inmate_676_0_24[0] = get_internal_image(541);
            images_inmate_676_0_24[1] = get_internal_image(540);
            images_inmate_676_6_0[0] = get_internal_image(1058);
            images_inmate_676_6_8[0] = get_internal_image(1059);
            images_inmate_676_6_16[0] = get_internal_image(1060);
            images_inmate_676_6_24[0] = get_internal_image(1062);
            images_inmate_676_8_0[0] = get_internal_image(757);
            images_inmate_676_8_0[1] = get_internal_image(777);
            images_inmate_676_8_16[0] = get_internal_image(650);
            images_inmate_676_8_16[1] = get_internal_image(651);
            images_inmate_676_8_24[0] = get_internal_image(205);
            images_inmate_676_8_24[1] = get_internal_image(209);
            images_inmate_676_8_24[2] = get_internal_image(160);
            images_inmate_676_9_0[0] = get_internal_image(1497);
            images_inmate_676_9_0[1] = get_internal_image(1499);
            images_inmate_676_10_0[0] = get_internal_image(548);
            images_inmate_676_10_0[1] = get_internal_image(542);
            images_inmate_676_10_0[2] = get_internal_image(577);
            images_inmate_676_10_0[3] = get_internal_image(547);
            images_inmate_676_10_0[4] = get_internal_image(542);
            images_inmate_676_11_0[0] = get_internal_image(523);
            images_inmate_676_11_0[1] = get_internal_image(517);
            images_inmate_676_11_8[0] = get_internal_image(584);
            images_inmate_676_11_8[1] = get_internal_image(585);
            images_inmate_676_11_16[0] = get_internal_image(522);
            images_inmate_676_11_16[1] = get_internal_image(524);
            images_inmate_676_11_24[0] = get_internal_image(320);
            images_inmate_676_11_24[1] = get_internal_image(251);
            images_inmate_676_18_24[0] = get_internal_image(2078);
            images_inmate_676_18_24[1] = get_internal_image(2077);
            images_inmate_676_18_24[2] = get_internal_image(2081);
            images_inmate_676_18_24[3] = get_internal_image(2079);
            images_inmate_676_18_24[4] = get_internal_image(2080);
            images_inmate_676_18_24[5] = get_internal_image(2084);
            images_inmate_676_18_24[6] = get_internal_image(2081);
            images_inmate_676_18_24[7] = get_internal_image(2083);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_inmate_676(int x, int y)
{
    return new (Active::pool.create()) Inmate_676(x, y);
}
class TutorialDialogText : public Text
{
public:
    TutorialDialogText(int x, int y) : Text(x, y, tutorialDialogText_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("Dialogue 2", 10);
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
        add_line(std::string("fsdfdf", 6));
        create_alterables();
    }
};
FrameObject * create_tutorialDialogText(int x, int y)
{
    return new (Text::pool.create()) TutorialDialogText(x, y);
}
static Image* images_items_679_0_0[1];
static Direction direction_items_679_0_0 = {0, 50, 50, 0, 1, images_items_679_0_0, 1};
static Image* images_items_679_0_1[1];
static Direction direction_items_679_0_1 = {1, 50, 50, 0, 1, images_items_679_0_1, 1};
static Image* images_items_679_0_2[1];
static Direction direction_items_679_0_2 = {2, 50, 50, 0, 1, images_items_679_0_2, 1};
static Image* images_items_679_0_3[1];
static Direction direction_items_679_0_3 = {3, 50, 50, 0, 1, images_items_679_0_3, 1};
static Image* images_items_679_0_4[1];
static Direction direction_items_679_0_4 = {4, 50, 50, 0, 1, images_items_679_0_4, 1};
static Image* images_items_679_0_5[1];
static Direction direction_items_679_0_5 = {5, 50, 50, 0, 1, images_items_679_0_5, 1};
static Image* images_items_679_0_6[1];
static Direction direction_items_679_0_6 = {6, 50, 50, 0, 1, images_items_679_0_6, 1};
static Image* images_items_679_0_7[1];
static Direction direction_items_679_0_7 = {7, 50, 50, 0, 1, images_items_679_0_7, 1};
static Image* images_items_679_0_8[1];
static Direction direction_items_679_0_8 = {8, 50, 50, 0, 1, images_items_679_0_8, 1};
static Image* images_items_679_0_9[1];
static Direction direction_items_679_0_9 = {9, 50, 50, 0, 1, images_items_679_0_9, 1};
static Image* images_items_679_0_10[1];
static Direction direction_items_679_0_10 = {10, 50, 50, 0, 1, images_items_679_0_10, 1};
static Image* images_items_679_0_11[1];
static Direction direction_items_679_0_11 = {11, 50, 50, 0, 1, images_items_679_0_11, 1};
static Image* images_items_679_0_12[1];
static Direction direction_items_679_0_12 = {12, 50, 50, 0, 1, images_items_679_0_12, 1};
static Image* images_items_679_0_13[1];
static Direction direction_items_679_0_13 = {13, 50, 50, 0, 1, images_items_679_0_13, 1};
static Image* images_items_679_0_14[1];
static Direction direction_items_679_0_14 = {14, 50, 50, 0, 1, images_items_679_0_14, 1};
static Image* images_items_679_0_15[1];
static Direction direction_items_679_0_15 = {15, 50, 50, 0, 1, images_items_679_0_15, 1};
static Image* images_items_679_0_16[1];
static Direction direction_items_679_0_16 = {16, 50, 50, 0, 1, images_items_679_0_16, 1};
static Image* images_items_679_0_17[1];
static Direction direction_items_679_0_17 = {17, 50, 50, 0, 1, images_items_679_0_17, 1};
static Image* images_items_679_0_18[1];
static Direction direction_items_679_0_18 = {18, 50, 50, 0, 1, images_items_679_0_18, 1};
static Image* images_items_679_0_19[1];
static Direction direction_items_679_0_19 = {19, 50, 50, 0, -1, images_items_679_0_19, 1};
static Image* images_items_679_0_20[1];
static Direction direction_items_679_0_20 = {20, 50, 50, 0, 1, images_items_679_0_20, 1};
static Image* images_items_679_0_21[1];
static Direction direction_items_679_0_21 = {21, 50, 50, 0, 1, images_items_679_0_21, 1};
static Image* images_items_679_0_22[1];
static Direction direction_items_679_0_22 = {22, 50, 50, 0, 1, images_items_679_0_22, 1};
static Image* images_items_679_0_23[1];
static Direction direction_items_679_0_23 = {23, 50, 50, 0, 1, images_items_679_0_23, 1};
static Image* images_items_679_0_24[1];
static Direction direction_items_679_0_24 = {24, 50, 50, 0, 1, images_items_679_0_24, 1};
static Image* images_items_679_0_25[1];
static Direction direction_items_679_0_25 = {25, 50, 50, 0, 1, images_items_679_0_25, 1};
static Image* images_items_679_0_26[1];
static Direction direction_items_679_0_26 = {26, 50, 50, 0, 1, images_items_679_0_26, 1};
static Image* images_items_679_0_27[1];
static Direction direction_items_679_0_27 = {27, 50, 50, 0, 1, images_items_679_0_27, 1};
static Image* images_items_679_0_28[1];
static Direction direction_items_679_0_28 = {28, 50, 50, 0, 1, images_items_679_0_28, 1};
static Image* images_items_679_0_29[1];
static Direction direction_items_679_0_29 = {29, 50, 50, 0, 1, images_items_679_0_29, 1};
static Image* images_items_679_0_30[1];
static Direction direction_items_679_0_30 = {30, 50, 50, 0, 1, images_items_679_0_30, 1};
static Image* images_items_679_0_31[1];
static Direction direction_items_679_0_31 = {31, 50, 50, 0, 1, images_items_679_0_31, 1};
static Animation anim_items_679_0 = {&direction_items_679_0_0, &direction_items_679_0_1, &direction_items_679_0_2, &direction_items_679_0_3, &direction_items_679_0_4, &direction_items_679_0_5, &direction_items_679_0_6, &direction_items_679_0_7, &direction_items_679_0_8, &direction_items_679_0_9, &direction_items_679_0_10, &direction_items_679_0_11, &direction_items_679_0_12, &direction_items_679_0_13, &direction_items_679_0_14, &direction_items_679_0_15, &direction_items_679_0_16, &direction_items_679_0_17, &direction_items_679_0_18, &direction_items_679_0_19, &direction_items_679_0_20, &direction_items_679_0_21, &direction_items_679_0_22, &direction_items_679_0_23, &direction_items_679_0_24, &direction_items_679_0_25, &direction_items_679_0_26, &direction_items_679_0_27, &direction_items_679_0_28, &direction_items_679_0_29, &direction_items_679_0_30, &direction_items_679_0_31};
static Image* images_items_679_1_0[1];
static Direction direction_items_679_1_0 = {0, 50, 50, 0, -1, images_items_679_1_0, 1};
static Image* images_items_679_1_1[1];
static Direction direction_items_679_1_1 = {1, 50, 50, 0, -1, images_items_679_1_1, 1};
static Image* images_items_679_1_2[1];
static Direction direction_items_679_1_2 = {2, 50, 50, 0, -1, images_items_679_1_2, 1};
static Image* images_items_679_1_3[1];
static Direction direction_items_679_1_3 = {3, 50, 50, 0, -1, images_items_679_1_3, 1};
static Image* images_items_679_1_4[1];
static Direction direction_items_679_1_4 = {4, 50, 50, 0, -1, images_items_679_1_4, 1};
static Image* images_items_679_1_5[1];
static Direction direction_items_679_1_5 = {5, 50, 50, 0, -1, images_items_679_1_5, 1};
static Image* images_items_679_1_6[1];
static Direction direction_items_679_1_6 = {6, 50, 50, 0, -1, images_items_679_1_6, 1};
static Image* images_items_679_1_7[1];
static Direction direction_items_679_1_7 = {7, 50, 50, 0, -1, images_items_679_1_7, 1};
static Image* images_items_679_1_8[1];
static Direction direction_items_679_1_8 = {8, 50, 50, 0, -1, images_items_679_1_8, 1};
static Image* images_items_679_1_9[1];
static Direction direction_items_679_1_9 = {9, 50, 50, 0, -1, images_items_679_1_9, 1};
static Image* images_items_679_1_10[1];
static Direction direction_items_679_1_10 = {10, 50, 50, 0, -1, images_items_679_1_10, 1};
static Image* images_items_679_1_11[1];
static Direction direction_items_679_1_11 = {11, 50, 50, 0, -1, images_items_679_1_11, 1};
static Image* images_items_679_1_12[1];
static Direction direction_items_679_1_12 = {12, 50, 50, 0, -1, images_items_679_1_12, 1};
static Image* images_items_679_1_13[1];
static Direction direction_items_679_1_13 = {13, 50, 50, 0, -1, images_items_679_1_13, 1};
static Image* images_items_679_1_14[1];
static Direction direction_items_679_1_14 = {14, 50, 50, 0, -1, images_items_679_1_14, 1};
static Image* images_items_679_1_15[1];
static Direction direction_items_679_1_15 = {15, 50, 50, 0, -1, images_items_679_1_15, 1};
static Image* images_items_679_1_16[1];
static Direction direction_items_679_1_16 = {16, 50, 50, 0, -1, images_items_679_1_16, 1};
static Image* images_items_679_1_17[1];
static Direction direction_items_679_1_17 = {17, 50, 50, 0, -1, images_items_679_1_17, 1};
static Image* images_items_679_1_18[1];
static Direction direction_items_679_1_18 = {18, 50, 50, 0, -1, images_items_679_1_18, 1};
static Image* images_items_679_1_19[1];
static Direction direction_items_679_1_19 = {19, 50, 50, 0, -1, images_items_679_1_19, 1};
static Image* images_items_679_1_20[1];
static Direction direction_items_679_1_20 = {20, 50, 50, 0, -1, images_items_679_1_20, 1};
static Image* images_items_679_1_21[1];
static Direction direction_items_679_1_21 = {21, 50, 50, 0, -1, images_items_679_1_21, 1};
static Image* images_items_679_1_22[1];
static Direction direction_items_679_1_22 = {22, 50, 50, 0, -1, images_items_679_1_22, 1};
static Image* images_items_679_1_23[1];
static Direction direction_items_679_1_23 = {23, 50, 50, 0, -1, images_items_679_1_23, 1};
static Image* images_items_679_1_24[1];
static Direction direction_items_679_1_24 = {24, 50, 50, 0, -1, images_items_679_1_24, 1};
static Image* images_items_679_1_25[1];
static Direction direction_items_679_1_25 = {25, 50, 50, 0, -1, images_items_679_1_25, 1};
static Image* images_items_679_1_26[1];
static Direction direction_items_679_1_26 = {26, 50, 50, 0, -1, images_items_679_1_26, 1};
static Image* images_items_679_1_27[1];
static Direction direction_items_679_1_27 = {27, 50, 50, 0, -1, images_items_679_1_27, 1};
static Image* images_items_679_1_28[1];
static Direction direction_items_679_1_28 = {28, 50, 50, 0, -1, images_items_679_1_28, 1};
static Image* images_items_679_1_29[1];
static Direction direction_items_679_1_29 = {29, 50, 50, 0, -1, images_items_679_1_29, 1};
static Image* images_items_679_1_30[1];
static Direction direction_items_679_1_30 = {30, 50, 50, 0, -1, images_items_679_1_30, 1};
static Image* images_items_679_1_31[1];
static Direction direction_items_679_1_31 = {31, 50, 50, 0, -1, images_items_679_1_31, 1};
static Animation anim_items_679_1 = {&direction_items_679_1_0, &direction_items_679_1_1, &direction_items_679_1_2, &direction_items_679_1_3, &direction_items_679_1_4, &direction_items_679_1_5, &direction_items_679_1_6, &direction_items_679_1_7, &direction_items_679_1_8, &direction_items_679_1_9, &direction_items_679_1_10, &direction_items_679_1_11, &direction_items_679_1_12, &direction_items_679_1_13, &direction_items_679_1_14, &direction_items_679_1_15, &direction_items_679_1_16, &direction_items_679_1_17, &direction_items_679_1_18, &direction_items_679_1_19, &direction_items_679_1_20, &direction_items_679_1_21, &direction_items_679_1_22, &direction_items_679_1_23, &direction_items_679_1_24, &direction_items_679_1_25, &direction_items_679_1_26, &direction_items_679_1_27, &direction_items_679_1_28, &direction_items_679_1_29, &direction_items_679_1_30, &direction_items_679_1_31};
static Image* images_items_679_2_0[1];
static Direction direction_items_679_2_0 = {0, 50, 50, 0, -1, images_items_679_2_0, 1};
static Image* images_items_679_2_1[1];
static Direction direction_items_679_2_1 = {1, 50, 50, 0, -1, images_items_679_2_1, 1};
static Image* images_items_679_2_2[1];
static Direction direction_items_679_2_2 = {2, 50, 50, 0, -1, images_items_679_2_2, 1};
static Image* images_items_679_2_3[1];
static Direction direction_items_679_2_3 = {3, 50, 50, 0, -1, images_items_679_2_3, 1};
static Image* images_items_679_2_4[1];
static Direction direction_items_679_2_4 = {4, 50, 50, 0, -1, images_items_679_2_4, 1};
static Image* images_items_679_2_5[1];
static Direction direction_items_679_2_5 = {5, 50, 50, 0, -1, images_items_679_2_5, 1};
static Image* images_items_679_2_6[1];
static Direction direction_items_679_2_6 = {6, 50, 50, 0, -1, images_items_679_2_6, 1};
static Image* images_items_679_2_7[1];
static Direction direction_items_679_2_7 = {7, 50, 50, 0, -1, images_items_679_2_7, 1};
static Image* images_items_679_2_8[1];
static Direction direction_items_679_2_8 = {8, 50, 50, 0, -1, images_items_679_2_8, 1};
static Image* images_items_679_2_9[1];
static Direction direction_items_679_2_9 = {9, 50, 50, 0, -1, images_items_679_2_9, 1};
static Image* images_items_679_2_10[1];
static Direction direction_items_679_2_10 = {10, 50, 50, 0, -1, images_items_679_2_10, 1};
static Image* images_items_679_2_11[1];
static Direction direction_items_679_2_11 = {11, 50, 50, 0, -1, images_items_679_2_11, 1};
static Image* images_items_679_2_12[1];
static Direction direction_items_679_2_12 = {12, 50, 50, 0, -1, images_items_679_2_12, 1};
static Image* images_items_679_2_13[1];
static Direction direction_items_679_2_13 = {13, 50, 50, 0, -1, images_items_679_2_13, 1};
static Image* images_items_679_2_14[1];
static Direction direction_items_679_2_14 = {14, 50, 50, 0, -1, images_items_679_2_14, 1};
static Image* images_items_679_2_15[1];
static Direction direction_items_679_2_15 = {15, 50, 50, 0, -1, images_items_679_2_15, 1};
static Image* images_items_679_2_16[1];
static Direction direction_items_679_2_16 = {16, 50, 50, 0, -1, images_items_679_2_16, 1};
static Image* images_items_679_2_17[1];
static Direction direction_items_679_2_17 = {17, 50, 50, 0, -1, images_items_679_2_17, 1};
static Image* images_items_679_2_18[1];
static Direction direction_items_679_2_18 = {18, 50, 50, 0, -1, images_items_679_2_18, 1};
static Image* images_items_679_2_19[1];
static Direction direction_items_679_2_19 = {19, 50, 50, 0, -1, images_items_679_2_19, 1};
static Image* images_items_679_2_20[1];
static Direction direction_items_679_2_20 = {20, 50, 50, 0, -1, images_items_679_2_20, 1};
static Image* images_items_679_2_21[1];
static Direction direction_items_679_2_21 = {21, 50, 50, 0, -1, images_items_679_2_21, 1};
static Image* images_items_679_2_22[1];
static Direction direction_items_679_2_22 = {22, 50, 50, 0, -1, images_items_679_2_22, 1};
static Image* images_items_679_2_23[1];
static Direction direction_items_679_2_23 = {23, 50, 50, 0, -1, images_items_679_2_23, 1};
static Image* images_items_679_2_24[1];
static Direction direction_items_679_2_24 = {24, 50, 50, 0, -1, images_items_679_2_24, 1};
static Image* images_items_679_2_25[1];
static Direction direction_items_679_2_25 = {25, 50, 50, 0, -1, images_items_679_2_25, 1};
static Image* images_items_679_2_26[1];
static Direction direction_items_679_2_26 = {26, 50, 50, 0, -1, images_items_679_2_26, 1};
static Image* images_items_679_2_27[1];
static Direction direction_items_679_2_27 = {27, 50, 50, 0, -1, images_items_679_2_27, 1};
static Image* images_items_679_2_28[1];
static Direction direction_items_679_2_28 = {28, 50, 50, 0, -1, images_items_679_2_28, 1};
static Image* images_items_679_2_29[1];
static Direction direction_items_679_2_29 = {29, 50, 50, 0, -1, images_items_679_2_29, 1};
static Image* images_items_679_2_30[1];
static Direction direction_items_679_2_30 = {30, 50, 50, 0, -1, images_items_679_2_30, 1};
static Image* images_items_679_2_31[1];
static Direction direction_items_679_2_31 = {31, 50, 50, 0, -1, images_items_679_2_31, 1};
static Animation anim_items_679_2 = {&direction_items_679_2_0, &direction_items_679_2_1, &direction_items_679_2_2, &direction_items_679_2_3, &direction_items_679_2_4, &direction_items_679_2_5, &direction_items_679_2_6, &direction_items_679_2_7, &direction_items_679_2_8, &direction_items_679_2_9, &direction_items_679_2_10, &direction_items_679_2_11, &direction_items_679_2_12, &direction_items_679_2_13, &direction_items_679_2_14, &direction_items_679_2_15, &direction_items_679_2_16, &direction_items_679_2_17, &direction_items_679_2_18, &direction_items_679_2_19, &direction_items_679_2_20, &direction_items_679_2_21, &direction_items_679_2_22, &direction_items_679_2_23, &direction_items_679_2_24, &direction_items_679_2_25, &direction_items_679_2_26, &direction_items_679_2_27, &direction_items_679_2_28, &direction_items_679_2_29, &direction_items_679_2_30, &direction_items_679_2_31};
static Image* images_items_679_5_0[1];
static Direction direction_items_679_5_0 = {0, 50, 50, 0, -1, images_items_679_5_0, 1};
static Image* images_items_679_5_1[1];
static Direction direction_items_679_5_1 = {1, 50, 50, 0, -1, images_items_679_5_1, 1};
static Image* images_items_679_5_2[1];
static Direction direction_items_679_5_2 = {2, 50, 50, 0, -1, images_items_679_5_2, 1};
static Image* images_items_679_5_3[1];
static Direction direction_items_679_5_3 = {3, 50, 50, 0, -1, images_items_679_5_3, 1};
static Image* images_items_679_5_4[1];
static Direction direction_items_679_5_4 = {4, 50, 50, 0, -1, images_items_679_5_4, 1};
static Image* images_items_679_5_5[1];
static Direction direction_items_679_5_5 = {5, 50, 50, 0, -1, images_items_679_5_5, 1};
static Image* images_items_679_5_6[1];
static Direction direction_items_679_5_6 = {6, 50, 50, 0, -1, images_items_679_5_6, 1};
static Image* images_items_679_5_7[1];
static Direction direction_items_679_5_7 = {7, 50, 50, 0, -1, images_items_679_5_7, 1};
static Image* images_items_679_5_8[1];
static Direction direction_items_679_5_8 = {8, 50, 50, 0, -1, images_items_679_5_8, 1};
static Image* images_items_679_5_9[1];
static Direction direction_items_679_5_9 = {9, 50, 50, 0, -1, images_items_679_5_9, 1};
static Image* images_items_679_5_10[1];
static Direction direction_items_679_5_10 = {10, 50, 50, 0, -1, images_items_679_5_10, 1};
static Image* images_items_679_5_11[1];
static Direction direction_items_679_5_11 = {11, 50, 50, 0, -1, images_items_679_5_11, 1};
static Image* images_items_679_5_12[1];
static Direction direction_items_679_5_12 = {12, 50, 50, 0, -1, images_items_679_5_12, 1};
static Image* images_items_679_5_13[1];
static Direction direction_items_679_5_13 = {13, 50, 50, 0, -1, images_items_679_5_13, 1};
static Image* images_items_679_5_14[1];
static Direction direction_items_679_5_14 = {14, 50, 50, 0, -1, images_items_679_5_14, 1};
static Image* images_items_679_5_15[1];
static Direction direction_items_679_5_15 = {15, 50, 50, 0, -1, images_items_679_5_15, 1};
static Image* images_items_679_5_16[1];
static Direction direction_items_679_5_16 = {16, 50, 50, 0, -1, images_items_679_5_16, 1};
static Image* images_items_679_5_17[1];
static Direction direction_items_679_5_17 = {17, 50, 50, 0, -1, images_items_679_5_17, 1};
static Image* images_items_679_5_18[1];
static Direction direction_items_679_5_18 = {18, 50, 50, 0, -1, images_items_679_5_18, 1};
static Image* images_items_679_5_19[1];
static Direction direction_items_679_5_19 = {19, 50, 50, 0, -1, images_items_679_5_19, 1};
static Image* images_items_679_5_20[1];
static Direction direction_items_679_5_20 = {20, 50, 50, 0, -1, images_items_679_5_20, 1};
static Image* images_items_679_5_21[1];
static Direction direction_items_679_5_21 = {21, 50, 50, 0, -1, images_items_679_5_21, 1};
static Image* images_items_679_5_22[1];
static Direction direction_items_679_5_22 = {22, 50, 50, 0, -1, images_items_679_5_22, 1};
static Image* images_items_679_5_23[1];
static Direction direction_items_679_5_23 = {23, 50, 50, 0, -1, images_items_679_5_23, 1};
static Image* images_items_679_5_24[1];
static Direction direction_items_679_5_24 = {24, 50, 50, 0, -1, images_items_679_5_24, 1};
static Image* images_items_679_5_25[1];
static Direction direction_items_679_5_25 = {25, 50, 50, 0, -1, images_items_679_5_25, 1};
static Image* images_items_679_5_26[1];
static Direction direction_items_679_5_26 = {26, 50, 50, 0, -1, images_items_679_5_26, 1};
static Image* images_items_679_5_27[7];
static Direction direction_items_679_5_27 = {27, 15, 15, 0, -1, images_items_679_5_27, 7};
static Image* images_items_679_5_28[1];
static Direction direction_items_679_5_28 = {28, 50, 50, 0, -1, images_items_679_5_28, 1};
static Image* images_items_679_5_29[1];
static Direction direction_items_679_5_29 = {29, 50, 50, 0, -1, images_items_679_5_29, 1};
static Image* images_items_679_5_30[1];
static Direction direction_items_679_5_30 = {30, 50, 50, 0, -1, images_items_679_5_30, 1};
static Image* images_items_679_5_31[1];
static Direction direction_items_679_5_31 = {31, 50, 50, 0, -1, images_items_679_5_31, 1};
static Animation anim_items_679_5 = {&direction_items_679_5_0, &direction_items_679_5_1, &direction_items_679_5_2, &direction_items_679_5_3, &direction_items_679_5_4, &direction_items_679_5_5, &direction_items_679_5_6, &direction_items_679_5_7, &direction_items_679_5_8, &direction_items_679_5_9, &direction_items_679_5_10, &direction_items_679_5_11, &direction_items_679_5_12, &direction_items_679_5_13, &direction_items_679_5_14, &direction_items_679_5_15, &direction_items_679_5_16, &direction_items_679_5_17, &direction_items_679_5_18, &direction_items_679_5_19, &direction_items_679_5_20, &direction_items_679_5_21, &direction_items_679_5_22, &direction_items_679_5_23, &direction_items_679_5_24, &direction_items_679_5_25, &direction_items_679_5_26, &direction_items_679_5_27, &direction_items_679_5_28, &direction_items_679_5_29, &direction_items_679_5_30, &direction_items_679_5_31};
static Image* images_items_679_6_0[1];
static Direction direction_items_679_6_0 = {0, 15, 15, 0, -1, images_items_679_6_0, 1};
static Image* images_items_679_6_1[1];
static Direction direction_items_679_6_1 = {1, 15, 15, 0, -1, images_items_679_6_1, 1};
static Image* images_items_679_6_2[1];
static Direction direction_items_679_6_2 = {2, 15, 15, 0, -1, images_items_679_6_2, 1};
static Image* images_items_679_6_3[1];
static Direction direction_items_679_6_3 = {3, 50, 50, 0, -1, images_items_679_6_3, 1};
static Image* images_items_679_6_4[1];
static Direction direction_items_679_6_4 = {4, 50, 50, 0, -1, images_items_679_6_4, 1};
static Image* images_items_679_6_5[1];
static Direction direction_items_679_6_5 = {5, 50, 50, 0, -1, images_items_679_6_5, 1};
static Image* images_items_679_6_6[1];
static Direction direction_items_679_6_6 = {6, 50, 50, 0, -1, images_items_679_6_6, 1};
static Image* images_items_679_6_7[1];
static Direction direction_items_679_6_7 = {7, 50, 50, 0, -1, images_items_679_6_7, 1};
static Image* images_items_679_6_8[1];
static Direction direction_items_679_6_8 = {8, 50, 50, 0, -1, images_items_679_6_8, 1};
static Image* images_items_679_6_9[1];
static Direction direction_items_679_6_9 = {9, 50, 50, 0, -1, images_items_679_6_9, 1};
static Image* images_items_679_6_10[1];
static Direction direction_items_679_6_10 = {10, 50, 50, 0, -1, images_items_679_6_10, 1};
static Image* images_items_679_6_11[1];
static Direction direction_items_679_6_11 = {11, 50, 50, 0, -1, images_items_679_6_11, 1};
static Image* images_items_679_6_12[1];
static Direction direction_items_679_6_12 = {12, 50, 50, 0, -1, images_items_679_6_12, 1};
static Image* images_items_679_6_13[1];
static Direction direction_items_679_6_13 = {13, 50, 50, 0, -1, images_items_679_6_13, 1};
static Image* images_items_679_6_14[1];
static Direction direction_items_679_6_14 = {14, 5, 5, 0, -1, images_items_679_6_14, 1};
static Image* images_items_679_6_15[1];
static Direction direction_items_679_6_15 = {15, 5, 5, 0, -1, images_items_679_6_15, 1};
static Image* images_items_679_6_16[1];
static Direction direction_items_679_6_16 = {16, 5, 5, 0, -1, images_items_679_6_16, 1};
static Image* images_items_679_6_17[1];
static Direction direction_items_679_6_17 = {17, 50, 50, 0, -1, images_items_679_6_17, 1};
static Image* images_items_679_6_18[1];
static Direction direction_items_679_6_18 = {18, 50, 50, 0, -1, images_items_679_6_18, 1};
static Image* images_items_679_6_19[1];
static Direction direction_items_679_6_19 = {19, 50, 50, 0, -1, images_items_679_6_19, 1};
static Image* images_items_679_6_20[1];
static Direction direction_items_679_6_20 = {20, 50, 50, 0, -1, images_items_679_6_20, 1};
static Image* images_items_679_6_21[1];
static Direction direction_items_679_6_21 = {21, 50, 50, 0, -1, images_items_679_6_21, 1};
static Image* images_items_679_6_22[1];
static Direction direction_items_679_6_22 = {22, 50, 50, 0, -1, images_items_679_6_22, 1};
static Image* images_items_679_6_23[1];
static Direction direction_items_679_6_23 = {23, 50, 50, 0, -1, images_items_679_6_23, 1};
static Image* images_items_679_6_24[1];
static Direction direction_items_679_6_24 = {24, 50, 50, 0, -1, images_items_679_6_24, 1};
static Image* images_items_679_6_25[1];
static Direction direction_items_679_6_25 = {25, 50, 50, 0, -1, images_items_679_6_25, 1};
static Image* images_items_679_6_26[1];
static Direction direction_items_679_6_26 = {26, 50, 50, 0, -1, images_items_679_6_26, 1};
static Image* images_items_679_6_27[1];
static Direction direction_items_679_6_27 = {27, 50, 50, 0, -1, images_items_679_6_27, 1};
static Image* images_items_679_6_28[1];
static Direction direction_items_679_6_28 = {28, 50, 50, 0, -1, images_items_679_6_28, 1};
static Image* images_items_679_6_29[1];
static Direction direction_items_679_6_29 = {29, 50, 50, 0, -1, images_items_679_6_29, 1};
static Image* images_items_679_6_30[1];
static Direction direction_items_679_6_30 = {30, 50, 50, 0, -1, images_items_679_6_30, 1};
static Image* images_items_679_6_31[1];
static Direction direction_items_679_6_31 = {31, 50, 50, 0, -1, images_items_679_6_31, 1};
static Animation anim_items_679_6 = {&direction_items_679_6_0, &direction_items_679_6_1, &direction_items_679_6_2, &direction_items_679_6_3, &direction_items_679_6_4, &direction_items_679_6_5, &direction_items_679_6_6, &direction_items_679_6_7, &direction_items_679_6_8, &direction_items_679_6_9, &direction_items_679_6_10, &direction_items_679_6_11, &direction_items_679_6_12, &direction_items_679_6_13, &direction_items_679_6_14, &direction_items_679_6_15, &direction_items_679_6_16, &direction_items_679_6_17, &direction_items_679_6_18, &direction_items_679_6_19, &direction_items_679_6_20, &direction_items_679_6_21, &direction_items_679_6_22, &direction_items_679_6_23, &direction_items_679_6_24, &direction_items_679_6_25, &direction_items_679_6_26, &direction_items_679_6_27, &direction_items_679_6_28, &direction_items_679_6_29, &direction_items_679_6_30, &direction_items_679_6_31};
static Image* images_items_679_7_0[1];
static Direction direction_items_679_7_0 = {0, 50, 50, 0, -1, images_items_679_7_0, 1};
static Image* images_items_679_7_1[1];
static Direction direction_items_679_7_1 = {1, 50, 50, 0, -1, images_items_679_7_1, 1};
static Image* images_items_679_7_2[1];
static Direction direction_items_679_7_2 = {2, 50, 50, 0, -1, images_items_679_7_2, 1};
static Image* images_items_679_7_3[1];
static Direction direction_items_679_7_3 = {3, 50, 50, 0, -1, images_items_679_7_3, 1};
static Image* images_items_679_7_4[1];
static Direction direction_items_679_7_4 = {4, 50, 50, 0, -1, images_items_679_7_4, 1};
static Image* images_items_679_7_5[1];
static Direction direction_items_679_7_5 = {5, 50, 50, 0, -1, images_items_679_7_5, 1};
static Image* images_items_679_7_6[1];
static Direction direction_items_679_7_6 = {6, 50, 50, 0, -1, images_items_679_7_6, 1};
static Image* images_items_679_7_7[1];
static Direction direction_items_679_7_7 = {7, 50, 50, 0, -1, images_items_679_7_7, 1};
static Image* images_items_679_7_8[1];
static Direction direction_items_679_7_8 = {8, 50, 50, 0, -1, images_items_679_7_8, 1};
static Image* images_items_679_7_9[1];
static Direction direction_items_679_7_9 = {9, 50, 50, 0, -1, images_items_679_7_9, 1};
static Image* images_items_679_7_10[1];
static Direction direction_items_679_7_10 = {10, 50, 50, 0, -1, images_items_679_7_10, 1};
static Image* images_items_679_7_11[1];
static Direction direction_items_679_7_11 = {11, 50, 50, 0, -1, images_items_679_7_11, 1};
static Image* images_items_679_7_12[1];
static Direction direction_items_679_7_12 = {12, 50, 50, 0, -1, images_items_679_7_12, 1};
static Image* images_items_679_7_13[1];
static Direction direction_items_679_7_13 = {13, 50, 50, 0, -1, images_items_679_7_13, 1};
static Image* images_items_679_7_14[1];
static Direction direction_items_679_7_14 = {14, 50, 50, 0, -1, images_items_679_7_14, 1};
static Image* images_items_679_7_15[1];
static Direction direction_items_679_7_15 = {15, 50, 50, 0, -1, images_items_679_7_15, 1};
static Image* images_items_679_7_16[1];
static Direction direction_items_679_7_16 = {16, 50, 50, 0, -1, images_items_679_7_16, 1};
static Image* images_items_679_7_17[1];
static Direction direction_items_679_7_17 = {17, 50, 50, 0, -1, images_items_679_7_17, 1};
static Image* images_items_679_7_18[1];
static Direction direction_items_679_7_18 = {18, 50, 50, 0, -1, images_items_679_7_18, 1};
static Image* images_items_679_7_19[1];
static Direction direction_items_679_7_19 = {19, 50, 50, 0, -1, images_items_679_7_19, 1};
static Image* images_items_679_7_20[1];
static Direction direction_items_679_7_20 = {20, 50, 50, 0, -1, images_items_679_7_20, 1};
static Image* images_items_679_7_21[1];
static Direction direction_items_679_7_21 = {21, 50, 50, 0, -1, images_items_679_7_21, 1};
static Image* images_items_679_7_22[1];
static Direction direction_items_679_7_22 = {22, 50, 50, 0, -1, images_items_679_7_22, 1};
static Image* images_items_679_7_23[1];
static Direction direction_items_679_7_23 = {23, 50, 50, 0, -1, images_items_679_7_23, 1};
static Image* images_items_679_7_24[1];
static Direction direction_items_679_7_24 = {24, 50, 50, 0, -1, images_items_679_7_24, 1};
static Image* images_items_679_7_25[1];
static Direction direction_items_679_7_25 = {25, 50, 50, 0, -1, images_items_679_7_25, 1};
static Image* images_items_679_7_26[1];
static Direction direction_items_679_7_26 = {26, 50, 50, 0, -1, images_items_679_7_26, 1};
static Image* images_items_679_7_27[1];
static Direction direction_items_679_7_27 = {27, 50, 50, 0, -1, images_items_679_7_27, 1};
static Image* images_items_679_7_28[1];
static Direction direction_items_679_7_28 = {28, 50, 50, 0, -1, images_items_679_7_28, 1};
static Image* images_items_679_7_29[1];
static Direction direction_items_679_7_29 = {29, 50, 50, 0, -1, images_items_679_7_29, 1};
static Image* images_items_679_7_30[1];
static Direction direction_items_679_7_30 = {30, 50, 50, 0, -1, images_items_679_7_30, 1};
static Animation anim_items_679_7 = {&direction_items_679_7_0, &direction_items_679_7_1, &direction_items_679_7_2, &direction_items_679_7_3, &direction_items_679_7_4, &direction_items_679_7_5, &direction_items_679_7_6, &direction_items_679_7_7, &direction_items_679_7_8, &direction_items_679_7_9, &direction_items_679_7_10, &direction_items_679_7_11, &direction_items_679_7_12, &direction_items_679_7_13, &direction_items_679_7_14, &direction_items_679_7_15, &direction_items_679_7_16, &direction_items_679_7_17, &direction_items_679_7_18, &direction_items_679_7_19, &direction_items_679_7_20, &direction_items_679_7_21, &direction_items_679_7_22, &direction_items_679_7_23, &direction_items_679_7_24, &direction_items_679_7_25, &direction_items_679_7_26, &direction_items_679_7_27, &direction_items_679_7_28, &direction_items_679_7_29, &direction_items_679_7_30, NULL};
static Animation * anim_array_items_679[8] = {&anim_items_679_0, &anim_items_679_1, &anim_items_679_2, NULL, NULL, &anim_items_679_5, &anim_items_679_6, &anim_items_679_7};
static Animations anim_items_679 = {8, &anim_array_items_679[0]};
static bool anim_items_679_initialized;
class Items_679 : public Active
{
public:
    Items_679(int x, int y) : Active(x, y, Items_679_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Items", 5);
#endif
        this->animations = &anim_items_679;
        if (!anim_items_679_initialized) {
            anim_items_679_initialized = true;
            images_items_679_0_0[0] = get_internal_image(237);
            images_items_679_0_1[0] = get_internal_image(238);
            images_items_679_0_2[0] = get_internal_image(1269);
            images_items_679_0_3[0] = get_internal_image(279);
            images_items_679_0_4[0] = get_internal_image(287);
            images_items_679_0_5[0] = get_internal_image(324);
            images_items_679_0_6[0] = get_internal_image(325);
            images_items_679_0_7[0] = get_internal_image(252);
            images_items_679_0_8[0] = get_internal_image(328);
            images_items_679_0_9[0] = get_internal_image(327);
            images_items_679_0_10[0] = get_internal_image(288);
            images_items_679_0_11[0] = get_internal_image(946);
            images_items_679_0_12[0] = get_internal_image(330);
            images_items_679_0_13[0] = get_internal_image(405);
            images_items_679_0_14[0] = get_internal_image(226);
            images_items_679_0_15[0] = get_internal_image(246);
            images_items_679_0_16[0] = get_internal_image(284);
            images_items_679_0_17[0] = get_internal_image(400);
            images_items_679_0_18[0] = get_internal_image(221);
            images_items_679_0_19[0] = get_internal_image(3);
            images_items_679_0_20[0] = get_internal_image(9);
            images_items_679_0_21[0] = get_internal_image(4);
            images_items_679_0_22[0] = get_internal_image(12);
            images_items_679_0_23[0] = get_internal_image(937);
            images_items_679_0_24[0] = get_internal_image(13);
            images_items_679_0_25[0] = get_internal_image(14);
            images_items_679_0_26[0] = get_internal_image(29);
            images_items_679_0_27[0] = get_internal_image(948);
            images_items_679_0_28[0] = get_internal_image(947);
            images_items_679_0_29[0] = get_internal_image(105);
            images_items_679_0_30[0] = get_internal_image(108);
            images_items_679_0_31[0] = get_internal_image(1079);
            images_items_679_1_0[0] = get_internal_image(109);
            images_items_679_1_1[0] = get_internal_image(110);
            images_items_679_1_2[0] = get_internal_image(117);
            images_items_679_1_3[0] = get_internal_image(122);
            images_items_679_1_4[0] = get_internal_image(192);
            images_items_679_1_5[0] = get_internal_image(10);
            images_items_679_1_6[0] = get_internal_image(397);
            images_items_679_1_7[0] = get_internal_image(398);
            images_items_679_1_8[0] = get_internal_image(401);
            images_items_679_1_9[0] = get_internal_image(116);
            images_items_679_1_10[0] = get_internal_image(403);
            images_items_679_1_11[0] = get_internal_image(1233);
            images_items_679_1_12[0] = get_internal_image(486);
            images_items_679_1_13[0] = get_internal_image(477);
            images_items_679_1_14[0] = get_internal_image(515);
            images_items_679_1_15[0] = get_internal_image(533);
            images_items_679_1_16[0] = get_internal_image(514);
            images_items_679_1_17[0] = get_internal_image(534);
            images_items_679_1_18[0] = get_internal_image(654);
            images_items_679_1_19[0] = get_internal_image(469);
            images_items_679_1_20[0] = get_internal_image(536);
            images_items_679_1_21[0] = get_internal_image(657);
            images_items_679_1_22[0] = get_internal_image(329);
            images_items_679_1_23[0] = get_internal_image(153);
            images_items_679_1_24[0] = get_internal_image(658);
            images_items_679_1_25[0] = get_internal_image(658);
            images_items_679_1_26[0] = get_internal_image(1235);
            images_items_679_1_27[0] = get_internal_image(658);
            images_items_679_1_28[0] = get_internal_image(685);
            images_items_679_1_29[0] = get_internal_image(956);
            images_items_679_1_30[0] = get_internal_image(692);
            images_items_679_1_31[0] = get_internal_image(69);
            images_items_679_2_0[0] = get_internal_image(722);
            images_items_679_2_1[0] = get_internal_image(699);
            images_items_679_2_2[0] = get_internal_image(709);
            images_items_679_2_3[0] = get_internal_image(139);
            images_items_679_2_4[0] = get_internal_image(256);
            images_items_679_2_5[0] = get_internal_image(345);
            images_items_679_2_6[0] = get_internal_image(455);
            images_items_679_2_7[0] = get_internal_image(658);
            images_items_679_2_8[0] = get_internal_image(869);
            images_items_679_2_9[0] = get_internal_image(873);
            images_items_679_2_10[0] = get_internal_image(866);
            images_items_679_2_11[0] = get_internal_image(922);
            images_items_679_2_12[0] = get_internal_image(857);
            images_items_679_2_13[0] = get_internal_image(927);
            images_items_679_2_14[0] = get_internal_image(455);
            images_items_679_2_15[0] = get_internal_image(19);
            images_items_679_2_16[0] = get_internal_image(31);
            images_items_679_2_17[0] = get_internal_image(54);
            images_items_679_2_18[0] = get_internal_image(658);
            images_items_679_2_19[0] = get_internal_image(658);
            images_items_679_2_20[0] = get_internal_image(326);
            images_items_679_2_21[0] = get_internal_image(338);
            images_items_679_2_22[0] = get_internal_image(341);
            images_items_679_2_23[0] = get_internal_image(366);
            images_items_679_2_24[0] = get_internal_image(490);
            images_items_679_2_25[0] = get_internal_image(658);
            images_items_679_2_26[0] = get_internal_image(641);
            images_items_679_2_27[0] = get_internal_image(785);
            images_items_679_2_28[0] = get_internal_image(809);
            images_items_679_2_29[0] = get_internal_image(917);
            images_items_679_2_30[0] = get_internal_image(784);
            images_items_679_2_31[0] = get_internal_image(831);
            images_items_679_5_0[0] = get_internal_image(812);
            images_items_679_5_1[0] = get_internal_image(843);
            images_items_679_5_2[0] = get_internal_image(852);
            images_items_679_5_3[0] = get_internal_image(775);
            images_items_679_5_4[0] = get_internal_image(876);
            images_items_679_5_5[0] = get_internal_image(908);
            images_items_679_5_6[0] = get_internal_image(933);
            images_items_679_5_7[0] = get_internal_image(875);
            images_items_679_5_8[0] = get_internal_image(875);
            images_items_679_5_9[0] = get_internal_image(934);
            images_items_679_5_10[0] = get_internal_image(939);
            images_items_679_5_11[0] = get_internal_image(938);
            images_items_679_5_12[0] = get_internal_image(95);
            images_items_679_5_13[0] = get_internal_image(936);
            images_items_679_5_14[0] = get_internal_image(943);
            images_items_679_5_15[0] = get_internal_image(942);
            images_items_679_5_16[0] = get_internal_image(941);
            images_items_679_5_17[0] = get_internal_image(945);
            images_items_679_5_18[0] = get_internal_image(324);
            images_items_679_5_19[0] = get_internal_image(324);
            images_items_679_5_20[0] = get_internal_image(954);
            images_items_679_5_21[0] = get_internal_image(958);
            images_items_679_5_22[0] = get_internal_image(398);
            images_items_679_5_23[0] = get_internal_image(398);
            images_items_679_5_24[0] = get_internal_image(956);
            images_items_679_5_25[0] = get_internal_image(956);
            images_items_679_5_26[0] = get_internal_image(828);
            images_items_679_5_27[0] = get_internal_image(770);
            images_items_679_5_27[1] = get_internal_image(829);
            images_items_679_5_27[2] = get_internal_image(468);
            images_items_679_5_27[3] = get_internal_image(468);
            images_items_679_5_27[4] = get_internal_image(468);
            images_items_679_5_27[5] = get_internal_image(468);
            images_items_679_5_27[6] = get_internal_image(468);
            images_items_679_5_28[0] = get_internal_image(1003);
            images_items_679_5_29[0] = get_internal_image(1080);
            images_items_679_5_30[0] = get_internal_image(127);
            images_items_679_5_31[0] = get_internal_image(1230);
            images_items_679_6_0[0] = get_internal_image(1242);
            images_items_679_6_1[0] = get_internal_image(1240);
            images_items_679_6_2[0] = get_internal_image(306);
            images_items_679_6_3[0] = get_internal_image(285);
            images_items_679_6_4[0] = get_internal_image(91);
            images_items_679_6_5[0] = get_internal_image(337);
            images_items_679_6_6[0] = get_internal_image(118);
            images_items_679_6_7[0] = get_internal_image(611);
            images_items_679_6_8[0] = get_internal_image(766);
            images_items_679_6_9[0] = get_internal_image(1048);
            images_items_679_6_10[0] = get_internal_image(26);
            images_items_679_6_11[0] = get_internal_image(863);
            images_items_679_6_12[0] = get_internal_image(1427);
            images_items_679_6_13[0] = get_internal_image(1479);
            images_items_679_6_14[0] = get_internal_image(1239);
            images_items_679_6_15[0] = get_internal_image(1231);
            images_items_679_6_16[0] = get_internal_image(734);
            images_items_679_6_17[0] = get_internal_image(28);
            images_items_679_6_18[0] = get_internal_image(305);
            images_items_679_6_19[0] = get_internal_image(365);
            images_items_679_6_20[0] = get_internal_image(402);
            images_items_679_6_21[0] = get_internal_image(27);
            images_items_679_6_22[0] = get_internal_image(606);
            images_items_679_6_23[0] = get_internal_image(914);
            images_items_679_6_24[0] = get_internal_image(640);
            images_items_679_6_25[0] = get_internal_image(1096);
            images_items_679_6_26[0] = get_internal_image(1097);
            images_items_679_6_27[0] = get_internal_image(1094);
            images_items_679_6_28[0] = get_internal_image(1443);
            images_items_679_6_29[0] = get_internal_image(1222);
            images_items_679_6_30[0] = get_internal_image(1511);
            images_items_679_6_31[0] = get_internal_image(1448);
            images_items_679_7_0[0] = get_internal_image(1533);
            images_items_679_7_1[0] = get_internal_image(1537);
            images_items_679_7_2[0] = get_internal_image(1536);
            images_items_679_7_3[0] = get_internal_image(1539);
            images_items_679_7_4[0] = get_internal_image(1550);
            images_items_679_7_5[0] = get_internal_image(1541);
            images_items_679_7_6[0] = get_internal_image(1552);
            images_items_679_7_7[0] = get_internal_image(1551);
            images_items_679_7_8[0] = get_internal_image(1554);
            images_items_679_7_9[0] = get_internal_image(1555);
            images_items_679_7_10[0] = get_internal_image(1556);
            images_items_679_7_11[0] = get_internal_image(1557);
            images_items_679_7_12[0] = get_internal_image(1553);
            images_items_679_7_13[0] = get_internal_image(1558);
            images_items_679_7_14[0] = get_internal_image(1585);
            images_items_679_7_15[0] = get_internal_image(1484);
            images_items_679_7_16[0] = get_internal_image(1571);
            images_items_679_7_17[0] = get_internal_image(1564);
            images_items_679_7_18[0] = get_internal_image(1572);
            images_items_679_7_19[0] = get_internal_image(1573);
            images_items_679_7_20[0] = get_internal_image(1589);
            images_items_679_7_21[0] = get_internal_image(2170);
            images_items_679_7_22[0] = get_internal_image(2165);
            images_items_679_7_23[0] = get_internal_image(679);
            images_items_679_7_24[0] = get_internal_image(2174);
            images_items_679_7_25[0] = get_internal_image(2172);
            images_items_679_7_26[0] = get_internal_image(2177);
            images_items_679_7_27[0] = get_internal_image(2230);
            images_items_679_7_28[0] = get_internal_image(2236);
            images_items_679_7_29[0] = get_internal_image(2246);
            images_items_679_7_30[0] = get_internal_image(2302);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(8, 1);
    }
};
FrameObject * create_items_679(int x, int y)
{
    return new (Active::pool.create()) Items_679(x, y);
}
static Image* images_textbox_680_0_0[1];
static Direction direction_textbox_680_0_0 = {0, 50, 50, 0, -1, images_textbox_680_0_0, 1};
static Animation anim_textbox_680_0 = {&direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, NULL, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0, &direction_textbox_680_0_0};
static Image* images_textbox_680_12_0[1];
static Direction direction_textbox_680_12_0 = {0, 50, 50, 0, -1, images_textbox_680_12_0, 1};
static Image* images_textbox_680_12_16[1];
static Direction direction_textbox_680_12_16 = {16, 50, 50, 0, -1, images_textbox_680_12_16, 1};
static Animation anim_textbox_680_12 = {&direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0, NULL, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, &direction_textbox_680_12_16, NULL, &direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0, &direction_textbox_680_12_0};
static Image* images_textbox_680_13_0[1];
static Direction direction_textbox_680_13_0 = {0, 50, 50, 0, -1, images_textbox_680_13_0, 1};
static Animation anim_textbox_680_13 = {&direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, NULL, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0, &direction_textbox_680_13_0};
static Image* images_textbox_680_14_0[1];
static Direction direction_textbox_680_14_0 = {0, 50, 50, 0, -1, images_textbox_680_14_0, 1};
static Image* images_textbox_680_14_16[1];
static Direction direction_textbox_680_14_16 = {16, 50, 50, 0, -1, images_textbox_680_14_16, 1};
static Image* images_textbox_680_14_24[1];
static Direction direction_textbox_680_14_24 = {24, 50, 50, 0, -1, images_textbox_680_14_24, 1};
static Animation anim_textbox_680_14 = {&direction_textbox_680_14_0, &direction_textbox_680_14_0, &direction_textbox_680_14_0, &direction_textbox_680_14_0, &direction_textbox_680_14_0, &direction_textbox_680_14_0, &direction_textbox_680_14_0, &direction_textbox_680_14_0, NULL, &direction_textbox_680_14_16, &direction_textbox_680_14_16, &direction_textbox_680_14_16, &direction_textbox_680_14_16, &direction_textbox_680_14_16, &direction_textbox_680_14_16, &direction_textbox_680_14_16, &direction_textbox_680_14_16, &direction_textbox_680_14_16, &direction_textbox_680_14_16, &direction_textbox_680_14_16, NULL, &direction_textbox_680_14_24, &direction_textbox_680_14_24, &direction_textbox_680_14_24, &direction_textbox_680_14_24, &direction_textbox_680_14_24, &direction_textbox_680_14_24, &direction_textbox_680_14_24, NULL, &direction_textbox_680_14_0, &direction_textbox_680_14_0, &direction_textbox_680_14_0};
static Image* images_textbox_680_15_0[1];
static Direction direction_textbox_680_15_0 = {0, 50, 50, 0, -1, images_textbox_680_15_0, 1};
static Image* images_textbox_680_15_16[3];
static Direction direction_textbox_680_15_16 = {16, 20, 20, 2, -1, images_textbox_680_15_16, 3};
static Animation anim_textbox_680_15 = {&direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0, NULL, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, &direction_textbox_680_15_16, NULL, &direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0, &direction_textbox_680_15_0};
static Image* images_textbox_680_16_0[1];
static Direction direction_textbox_680_16_0 = {0, 50, 50, 0, -1, images_textbox_680_16_0, 1};
static Animation anim_textbox_680_16 = {&direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, NULL, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0, &direction_textbox_680_16_0};
static Image* images_textbox_680_17_0[1];
static Direction direction_textbox_680_17_0 = {0, 50, 50, 0, -1, images_textbox_680_17_0, 1};
static Animation anim_textbox_680_17 = {&direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, NULL, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0, &direction_textbox_680_17_0};
static Image* images_textbox_680_18_0[1];
static Direction direction_textbox_680_18_0 = {0, 50, 50, 0, -1, images_textbox_680_18_0, 1};
static Animation anim_textbox_680_18 = {&direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, NULL, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0, &direction_textbox_680_18_0};
static Image* images_textbox_680_19_0[1];
static Direction direction_textbox_680_19_0 = {0, 50, 50, 0, -1, images_textbox_680_19_0, 1};
static Animation anim_textbox_680_19 = {&direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, NULL, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0, &direction_textbox_680_19_0};
static Image* images_textbox_680_20_0[1];
static Direction direction_textbox_680_20_0 = {0, 50, 50, 0, -1, images_textbox_680_20_0, 1};
static Image* images_textbox_680_20_8[1];
static Direction direction_textbox_680_20_8 = {8, 50, 50, 0, -1, images_textbox_680_20_8, 1};
static Image* images_textbox_680_20_16[1];
static Direction direction_textbox_680_20_16 = {16, 50, 50, 0, -1, images_textbox_680_20_16, 1};
static Animation anim_textbox_680_20 = {&direction_textbox_680_20_0, &direction_textbox_680_20_0, &direction_textbox_680_20_0, &direction_textbox_680_20_0, NULL, &direction_textbox_680_20_8, &direction_textbox_680_20_8, &direction_textbox_680_20_8, &direction_textbox_680_20_8, &direction_textbox_680_20_8, &direction_textbox_680_20_8, &direction_textbox_680_20_8, NULL, &direction_textbox_680_20_16, &direction_textbox_680_20_16, &direction_textbox_680_20_16, &direction_textbox_680_20_16, &direction_textbox_680_20_16, &direction_textbox_680_20_16, &direction_textbox_680_20_16, &direction_textbox_680_20_16, &direction_textbox_680_20_16, &direction_textbox_680_20_16, &direction_textbox_680_20_16, NULL, &direction_textbox_680_20_0, &direction_textbox_680_20_0, &direction_textbox_680_20_0, &direction_textbox_680_20_0, &direction_textbox_680_20_0, &direction_textbox_680_20_0, &direction_textbox_680_20_0};
static Image* images_textbox_680_21_0[1];
static Direction direction_textbox_680_21_0 = {0, 50, 50, 0, -1, images_textbox_680_21_0, 1};
static Animation anim_textbox_680_21 = {&direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, NULL, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0, &direction_textbox_680_21_0};
static Image* images_textbox_680_22_0[1];
static Direction direction_textbox_680_22_0 = {0, 50, 50, 0, -1, images_textbox_680_22_0, 1};
static Image* images_textbox_680_22_16[1];
static Direction direction_textbox_680_22_16 = {16, 50, 50, 0, -1, images_textbox_680_22_16, 1};
static Animation anim_textbox_680_22 = {&direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0, NULL, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, &direction_textbox_680_22_16, NULL, &direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0, &direction_textbox_680_22_0};
static Image* images_textbox_680_23_0[1];
static Direction direction_textbox_680_23_0 = {0, 50, 50, 0, -1, images_textbox_680_23_0, 1};
static Animation anim_textbox_680_23 = {&direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, NULL, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0, &direction_textbox_680_23_0};
static Image* images_textbox_680_24_0[1];
static Direction direction_textbox_680_24_0 = {0, 50, 50, 0, -1, images_textbox_680_24_0, 1};
static Image* images_textbox_680_24_4[1];
static Direction direction_textbox_680_24_4 = {4, 50, 50, 0, -1, images_textbox_680_24_4, 1};
static Image* images_textbox_680_24_8[1];
static Direction direction_textbox_680_24_8 = {8, 50, 50, 0, -1, images_textbox_680_24_8, 1};
static Image* images_textbox_680_24_16[1];
static Direction direction_textbox_680_24_16 = {16, 50, 50, 0, -1, images_textbox_680_24_16, 1};
static Image* images_textbox_680_24_24[1];
static Direction direction_textbox_680_24_24 = {24, 50, 50, 0, -1, images_textbox_680_24_24, 1};
static Animation anim_textbox_680_24 = {&direction_textbox_680_24_0, &direction_textbox_680_24_0, NULL, &direction_textbox_680_24_4, &direction_textbox_680_24_4, &direction_textbox_680_24_4, NULL, &direction_textbox_680_24_8, &direction_textbox_680_24_8, &direction_textbox_680_24_8, &direction_textbox_680_24_8, &direction_textbox_680_24_8, NULL, &direction_textbox_680_24_16, &direction_textbox_680_24_16, &direction_textbox_680_24_16, &direction_textbox_680_24_16, &direction_textbox_680_24_16, &direction_textbox_680_24_16, &direction_textbox_680_24_16, NULL, &direction_textbox_680_24_24, &direction_textbox_680_24_24, &direction_textbox_680_24_24, &direction_textbox_680_24_24, &direction_textbox_680_24_24, &direction_textbox_680_24_24, &direction_textbox_680_24_24, NULL, &direction_textbox_680_24_0, &direction_textbox_680_24_0, &direction_textbox_680_24_0};
static Image* images_textbox_680_25_0[1];
static Direction direction_textbox_680_25_0 = {0, 50, 50, 0, -1, images_textbox_680_25_0, 1};
static Image* images_textbox_680_25_16[2];
static Direction direction_textbox_680_25_16 = {16, 5, 5, 0, -1, images_textbox_680_25_16, 2};
static Animation anim_textbox_680_25 = {&direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0, NULL, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, &direction_textbox_680_25_16, NULL, &direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0, &direction_textbox_680_25_0};
static Image* images_textbox_680_26_0[1];
static Direction direction_textbox_680_26_0 = {0, 50, 50, 0, -1, images_textbox_680_26_0, 1};
static Animation anim_textbox_680_26 = {&direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, NULL, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0, &direction_textbox_680_26_0};
static Image* images_textbox_680_27_0[1];
static Direction direction_textbox_680_27_0 = {0, 50, 50, 0, -1, images_textbox_680_27_0, 1};
static Animation anim_textbox_680_27 = {&direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, NULL, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0, &direction_textbox_680_27_0};
static Image* images_textbox_680_28_0[1];
static Direction direction_textbox_680_28_0 = {0, 50, 50, 0, -1, images_textbox_680_28_0, 1};
static Animation anim_textbox_680_28 = {&direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, NULL, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0, &direction_textbox_680_28_0};
static Image* images_textbox_680_29_0[1];
static Direction direction_textbox_680_29_0 = {0, 50, 50, 0, -1, images_textbox_680_29_0, 1};
static Image* images_textbox_680_29_8[2];
static Direction direction_textbox_680_29_8 = {8, 50, 50, 1, -1, images_textbox_680_29_8, 2};
static Image* images_textbox_680_29_16[1];
static Direction direction_textbox_680_29_16 = {16, 50, 50, 0, -1, images_textbox_680_29_16, 1};
static Image* images_textbox_680_29_24[1];
static Direction direction_textbox_680_29_24 = {24, 50, 50, 0, -1, images_textbox_680_29_24, 1};
static Image* images_textbox_680_29_28[1];
static Direction direction_textbox_680_29_28 = {28, 50, 50, 0, -1, images_textbox_680_29_28, 1};
static Animation anim_textbox_680_29 = {&direction_textbox_680_29_0, &direction_textbox_680_29_0, &direction_textbox_680_29_0, &direction_textbox_680_29_0, NULL, &direction_textbox_680_29_8, &direction_textbox_680_29_8, &direction_textbox_680_29_8, &direction_textbox_680_29_8, &direction_textbox_680_29_8, &direction_textbox_680_29_8, &direction_textbox_680_29_8, NULL, &direction_textbox_680_29_16, &direction_textbox_680_29_16, &direction_textbox_680_29_16, &direction_textbox_680_29_16, &direction_textbox_680_29_16, &direction_textbox_680_29_16, &direction_textbox_680_29_16, NULL, &direction_textbox_680_29_24, &direction_textbox_680_29_24, &direction_textbox_680_29_24, &direction_textbox_680_29_24, &direction_textbox_680_29_24, NULL, &direction_textbox_680_29_28, &direction_textbox_680_29_28, &direction_textbox_680_29_28, NULL, &direction_textbox_680_29_0};
static Image* images_textbox_680_30_0[1];
static Direction direction_textbox_680_30_0 = {0, 50, 50, 0, -1, images_textbox_680_30_0, 1};
static Animation anim_textbox_680_30 = {&direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, NULL, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0, &direction_textbox_680_30_0};
static Animation * anim_array_textbox_680[31] = {&anim_textbox_680_0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &anim_textbox_680_12, &anim_textbox_680_13, &anim_textbox_680_14, &anim_textbox_680_15, &anim_textbox_680_16, &anim_textbox_680_17, &anim_textbox_680_18, &anim_textbox_680_19, &anim_textbox_680_20, &anim_textbox_680_21, &anim_textbox_680_22, &anim_textbox_680_23, &anim_textbox_680_24, &anim_textbox_680_25, &anim_textbox_680_26, &anim_textbox_680_27, &anim_textbox_680_28, &anim_textbox_680_29, &anim_textbox_680_30};
static Animations anim_textbox_680 = {31, &anim_array_textbox_680[0]};
static bool anim_textbox_680_initialized;
class TextBox_680 : public Active
{
public:
    TextBox_680(int x, int y) : Active(x, y, TextBox_680_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("TextBox", 7);
#endif
        set_visible(false);
        flags &= ~SCROLL;
        this->animations = &anim_textbox_680;
        if (!anim_textbox_680_initialized) {
            anim_textbox_680_initialized = true;
            images_textbox_680_0_0[0] = get_internal_image(51);
            images_textbox_680_12_0[0] = get_internal_image(76);
            images_textbox_680_12_16[0] = get_internal_image(65);
            images_textbox_680_13_0[0] = get_internal_image(494);
            images_textbox_680_14_0[0] = get_internal_image(1409);
            images_textbox_680_14_16[0] = get_internal_image(1421);
            images_textbox_680_14_24[0] = get_internal_image(1419);
            images_textbox_680_15_0[0] = get_internal_image(2348);
            images_textbox_680_15_16[0] = get_internal_image(965);
            images_textbox_680_15_16[1] = get_internal_image(2363);
            images_textbox_680_15_16[2] = get_internal_image(2348);
            images_textbox_680_16_0[0] = get_internal_image(392);
            images_textbox_680_17_0[0] = get_internal_image(114);
            images_textbox_680_18_0[0] = get_internal_image(471);
            images_textbox_680_19_0[0] = get_internal_image(677);
            images_textbox_680_20_0[0] = get_internal_image(6);
            images_textbox_680_20_8[0] = get_internal_image(1084);
            images_textbox_680_20_16[0] = get_internal_image(6);
            images_textbox_680_21_0[0] = get_internal_image(134);
            images_textbox_680_22_0[0] = get_internal_image(482);
            images_textbox_680_22_16[0] = get_internal_image(2351);
            images_textbox_680_23_0[0] = get_internal_image(392);
            images_textbox_680_24_0[0] = get_internal_image(723);
            images_textbox_680_24_4[0] = get_internal_image(520);
            images_textbox_680_24_8[0] = get_internal_image(520);
            images_textbox_680_24_16[0] = get_internal_image(999);
            images_textbox_680_24_24[0] = get_internal_image(1001);
            images_textbox_680_25_0[0] = get_internal_image(992);
            images_textbox_680_25_16[0] = get_internal_image(993);
            images_textbox_680_25_16[1] = get_internal_image(1588);
            images_textbox_680_26_0[0] = get_internal_image(613);
            images_textbox_680_27_0[0] = get_internal_image(51);
            images_textbox_680_28_0[0] = get_internal_image(971);
            images_textbox_680_29_0[0] = get_internal_image(1435);
            images_textbox_680_29_8[0] = get_internal_image(1450);
            images_textbox_680_29_8[1] = get_internal_image(1449);
            images_textbox_680_29_16[0] = get_internal_image(1045);
            images_textbox_680_29_24[0] = get_internal_image(1436);
            images_textbox_680_29_28[0] = get_internal_image(1808);
            images_textbox_680_30_0[0] = get_internal_image(1398);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_textbox_680(int x, int y)
{
    return new (Active::pool.create()) TextBox_680(x, y);
}
static Image* images_inmate2_681_0_0[2];
static Direction direction_inmate2_681_0_0 = {0, 10, 10, 0, -1, images_inmate2_681_0_0, 2};
static Image* images_inmate2_681_0_8[2];
static Direction direction_inmate2_681_0_8 = {8, 10, 10, 0, -1, images_inmate2_681_0_8, 2};
static Image* images_inmate2_681_0_16[2];
static Direction direction_inmate2_681_0_16 = {16, 10, 10, 0, -1, images_inmate2_681_0_16, 2};
static Image* images_inmate2_681_0_24[2];
static Direction direction_inmate2_681_0_24 = {24, 10, 10, 0, -1, images_inmate2_681_0_24, 2};
static Animation anim_inmate2_681_0 = {&direction_inmate2_681_0_0, &direction_inmate2_681_0_0, &direction_inmate2_681_0_0, &direction_inmate2_681_0_0, NULL, &direction_inmate2_681_0_8, &direction_inmate2_681_0_8, &direction_inmate2_681_0_8, &direction_inmate2_681_0_8, &direction_inmate2_681_0_8, &direction_inmate2_681_0_8, &direction_inmate2_681_0_8, NULL, &direction_inmate2_681_0_16, &direction_inmate2_681_0_16, &direction_inmate2_681_0_16, &direction_inmate2_681_0_16, &direction_inmate2_681_0_16, &direction_inmate2_681_0_16, &direction_inmate2_681_0_16, NULL, &direction_inmate2_681_0_24, &direction_inmate2_681_0_24, &direction_inmate2_681_0_24, &direction_inmate2_681_0_24, &direction_inmate2_681_0_24, &direction_inmate2_681_0_24, &direction_inmate2_681_0_24, NULL, &direction_inmate2_681_0_0, &direction_inmate2_681_0_0, &direction_inmate2_681_0_0};
static Image* images_inmate2_681_6_0[1];
static Direction direction_inmate2_681_6_0 = {0, 6, 6, 0, 1, images_inmate2_681_6_0, 1};
static Image* images_inmate2_681_6_8[1];
static Direction direction_inmate2_681_6_8 = {8, 6, 6, 0, 1, images_inmate2_681_6_8, 1};
static Image* images_inmate2_681_6_16[1];
static Direction direction_inmate2_681_6_16 = {16, 6, 6, 0, 1, images_inmate2_681_6_16, 1};
static Image* images_inmate2_681_6_24[1];
static Direction direction_inmate2_681_6_24 = {24, 6, 6, 0, 1, images_inmate2_681_6_24, 1};
static Animation anim_inmate2_681_6 = {&direction_inmate2_681_6_0, &direction_inmate2_681_6_0, &direction_inmate2_681_6_0, &direction_inmate2_681_6_0, NULL, &direction_inmate2_681_6_8, &direction_inmate2_681_6_8, &direction_inmate2_681_6_8, &direction_inmate2_681_6_8, &direction_inmate2_681_6_8, &direction_inmate2_681_6_8, &direction_inmate2_681_6_8, NULL, &direction_inmate2_681_6_16, &direction_inmate2_681_6_16, &direction_inmate2_681_6_16, &direction_inmate2_681_6_16, &direction_inmate2_681_6_16, &direction_inmate2_681_6_16, &direction_inmate2_681_6_16, NULL, &direction_inmate2_681_6_24, &direction_inmate2_681_6_24, &direction_inmate2_681_6_24, &direction_inmate2_681_6_24, &direction_inmate2_681_6_24, &direction_inmate2_681_6_24, &direction_inmate2_681_6_24, NULL, &direction_inmate2_681_6_0, &direction_inmate2_681_6_0, &direction_inmate2_681_6_0};
static Image* images_inmate2_681_8_0[2];
static Direction direction_inmate2_681_8_0 = {0, 10, 10, 0, -1, images_inmate2_681_8_0, 2};
static Image* images_inmate2_681_8_16[2];
static Direction direction_inmate2_681_8_16 = {16, 5, 5, 0, -1, images_inmate2_681_8_16, 2};
static Image* images_inmate2_681_8_24[3];
static Direction direction_inmate2_681_8_24 = {24, 10, 10, 0, -1, images_inmate2_681_8_24, 3};
static Animation anim_inmate2_681_8 = {&direction_inmate2_681_8_0, &direction_inmate2_681_8_0, &direction_inmate2_681_8_0, &direction_inmate2_681_8_0, &direction_inmate2_681_8_0, &direction_inmate2_681_8_0, &direction_inmate2_681_8_0, &direction_inmate2_681_8_0, NULL, &direction_inmate2_681_8_16, &direction_inmate2_681_8_16, &direction_inmate2_681_8_16, &direction_inmate2_681_8_16, &direction_inmate2_681_8_16, &direction_inmate2_681_8_16, &direction_inmate2_681_8_16, &direction_inmate2_681_8_16, &direction_inmate2_681_8_16, &direction_inmate2_681_8_16, &direction_inmate2_681_8_16, NULL, &direction_inmate2_681_8_24, &direction_inmate2_681_8_24, &direction_inmate2_681_8_24, &direction_inmate2_681_8_24, &direction_inmate2_681_8_24, &direction_inmate2_681_8_24, &direction_inmate2_681_8_24, NULL, &direction_inmate2_681_8_0, &direction_inmate2_681_8_0, &direction_inmate2_681_8_0};
static Image* images_inmate2_681_9_0[2];
static Direction direction_inmate2_681_9_0 = {0, 5, 5, 0, -1, images_inmate2_681_9_0, 2};
static Animation anim_inmate2_681_9 = {&direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, NULL, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0, &direction_inmate2_681_9_0};
static Image* images_inmate2_681_10_0[5];
static Direction direction_inmate2_681_10_0 = {0, 10, 10, 0, -1, images_inmate2_681_10_0, 5};
static Animation anim_inmate2_681_10 = {&direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, NULL, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0, &direction_inmate2_681_10_0};
static Image* images_inmate2_681_11_0[2];
static Direction direction_inmate2_681_11_0 = {0, 6, 6, 0, -1, images_inmate2_681_11_0, 2};
static Image* images_inmate2_681_11_8[2];
static Direction direction_inmate2_681_11_8 = {8, 6, 6, 0, -1, images_inmate2_681_11_8, 2};
static Image* images_inmate2_681_11_16[2];
static Direction direction_inmate2_681_11_16 = {16, 6, 6, 0, -1, images_inmate2_681_11_16, 2};
static Image* images_inmate2_681_11_24[2];
static Direction direction_inmate2_681_11_24 = {24, 6, 6, 0, -1, images_inmate2_681_11_24, 2};
static Animation anim_inmate2_681_11 = {&direction_inmate2_681_11_0, &direction_inmate2_681_11_0, &direction_inmate2_681_11_0, &direction_inmate2_681_11_0, NULL, &direction_inmate2_681_11_8, &direction_inmate2_681_11_8, &direction_inmate2_681_11_8, &direction_inmate2_681_11_8, &direction_inmate2_681_11_8, &direction_inmate2_681_11_8, &direction_inmate2_681_11_8, NULL, &direction_inmate2_681_11_16, &direction_inmate2_681_11_16, &direction_inmate2_681_11_16, &direction_inmate2_681_11_16, &direction_inmate2_681_11_16, &direction_inmate2_681_11_16, &direction_inmate2_681_11_16, NULL, &direction_inmate2_681_11_24, &direction_inmate2_681_11_24, &direction_inmate2_681_11_24, &direction_inmate2_681_11_24, &direction_inmate2_681_11_24, &direction_inmate2_681_11_24, &direction_inmate2_681_11_24, NULL, &direction_inmate2_681_11_0, &direction_inmate2_681_11_0, &direction_inmate2_681_11_0};
static Image* images_inmate2_681_18_24[8];
static Direction direction_inmate2_681_18_24 = {24, 10, 10, 0, -1, images_inmate2_681_18_24, 8};
static Animation anim_inmate2_681_18 = {&direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, NULL, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24, &direction_inmate2_681_18_24};
static Animation * anim_array_inmate2_681[19] = {&anim_inmate2_681_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate2_681_6, NULL, &anim_inmate2_681_8, &anim_inmate2_681_9, &anim_inmate2_681_10, &anim_inmate2_681_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate2_681_18};
static Animations anim_inmate2_681 = {19, &anim_array_inmate2_681[0]};
static bool anim_inmate2_681_initialized;
class Inmate2_681 : public Active
{
public:
    Inmate2_681(int x, int y) : Active(x, y, Inmate2_681_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 2", 8);
#endif
        this->animations = &anim_inmate2_681;
        if (!anim_inmate2_681_initialized) {
            anim_inmate2_681_initialized = true;
            images_inmate2_681_0_0[0] = get_internal_image(414);
            images_inmate2_681_0_0[1] = get_internal_image(609);
            images_inmate2_681_0_8[0] = get_internal_image(638);
            images_inmate2_681_0_8[1] = get_internal_image(639);
            images_inmate2_681_0_16[0] = get_internal_image(363);
            images_inmate2_681_0_16[1] = get_internal_image(622);
            images_inmate2_681_0_24[0] = get_internal_image(637);
            images_inmate2_681_0_24[1] = get_internal_image(624);
            images_inmate2_681_6_0[0] = get_internal_image(167);
            images_inmate2_681_6_8[0] = get_internal_image(793);
            images_inmate2_681_6_16[0] = get_internal_image(258);
            images_inmate2_681_6_24[0] = get_internal_image(788);
            images_inmate2_681_8_0[0] = get_internal_image(778);
            images_inmate2_681_8_0[1] = get_internal_image(779);
            images_inmate2_681_8_16[0] = get_internal_image(643);
            images_inmate2_681_8_16[1] = get_internal_image(655);
            images_inmate2_681_8_24[0] = get_internal_image(695);
            images_inmate2_681_8_24[1] = get_internal_image(696);
            images_inmate2_681_8_24[2] = get_internal_image(697);
            images_inmate2_681_9_0[0] = get_internal_image(1505);
            images_inmate2_681_9_0[1] = get_internal_image(1504);
            images_inmate2_681_10_0[0] = get_internal_image(378);
            images_inmate2_681_10_0[1] = get_internal_image(382);
            images_inmate2_681_10_0[2] = get_internal_image(379);
            images_inmate2_681_10_0[3] = get_internal_image(379);
            images_inmate2_681_10_0[4] = get_internal_image(383);
            images_inmate2_681_11_0[0] = get_internal_image(676);
            images_inmate2_681_11_0[1] = get_internal_image(969);
            images_inmate2_681_11_8[0] = get_internal_image(1089);
            images_inmate2_681_11_8[1] = get_internal_image(1091);
            images_inmate2_681_11_16[0] = get_internal_image(248);
            images_inmate2_681_11_16[1] = get_internal_image(1082);
            images_inmate2_681_11_24[0] = get_internal_image(605);
            images_inmate2_681_11_24[1] = get_internal_image(732);
            images_inmate2_681_18_24[0] = get_internal_image(2089);
            images_inmate2_681_18_24[1] = get_internal_image(2105);
            images_inmate2_681_18_24[2] = get_internal_image(2104);
            images_inmate2_681_18_24[3] = get_internal_image(2100);
            images_inmate2_681_18_24[4] = get_internal_image(2101);
            images_inmate2_681_18_24[5] = get_internal_image(2106);
            images_inmate2_681_18_24[6] = get_internal_image(2103);
            images_inmate2_681_18_24[7] = get_internal_image(2102);
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
FrameObject * create_inmate2_681(int x, int y)
{
    return new (Active::pool.create()) Inmate2_681(x, y);
}
static Image* images_inmate3_682_0_0[2];
static Direction direction_inmate3_682_0_0 = {0, 10, 10, 0, -1, images_inmate3_682_0_0, 2};
static Image* images_inmate3_682_0_8[2];
static Direction direction_inmate3_682_0_8 = {8, 10, 10, 0, -1, images_inmate3_682_0_8, 2};
static Image* images_inmate3_682_0_16[2];
static Direction direction_inmate3_682_0_16 = {16, 10, 10, 0, -1, images_inmate3_682_0_16, 2};
static Image* images_inmate3_682_0_24[2];
static Direction direction_inmate3_682_0_24 = {24, 10, 10, 0, -1, images_inmate3_682_0_24, 2};
static Animation anim_inmate3_682_0 = {&direction_inmate3_682_0_0, &direction_inmate3_682_0_0, &direction_inmate3_682_0_0, &direction_inmate3_682_0_0, NULL, &direction_inmate3_682_0_8, &direction_inmate3_682_0_8, &direction_inmate3_682_0_8, &direction_inmate3_682_0_8, &direction_inmate3_682_0_8, &direction_inmate3_682_0_8, &direction_inmate3_682_0_8, NULL, &direction_inmate3_682_0_16, &direction_inmate3_682_0_16, &direction_inmate3_682_0_16, &direction_inmate3_682_0_16, &direction_inmate3_682_0_16, &direction_inmate3_682_0_16, &direction_inmate3_682_0_16, NULL, &direction_inmate3_682_0_24, &direction_inmate3_682_0_24, &direction_inmate3_682_0_24, &direction_inmate3_682_0_24, &direction_inmate3_682_0_24, &direction_inmate3_682_0_24, &direction_inmate3_682_0_24, NULL, &direction_inmate3_682_0_0, &direction_inmate3_682_0_0, &direction_inmate3_682_0_0};
static Image* images_inmate3_682_6_0[1];
static Direction direction_inmate3_682_6_0 = {0, 6, 6, 0, 1, images_inmate3_682_6_0, 1};
static Image* images_inmate3_682_6_8[1];
static Direction direction_inmate3_682_6_8 = {8, 6, 6, 0, 1, images_inmate3_682_6_8, 1};
static Image* images_inmate3_682_6_16[1];
static Direction direction_inmate3_682_6_16 = {16, 6, 6, 0, 1, images_inmate3_682_6_16, 1};
static Image* images_inmate3_682_6_24[1];
static Direction direction_inmate3_682_6_24 = {24, 6, 6, 0, 1, images_inmate3_682_6_24, 1};
static Animation anim_inmate3_682_6 = {&direction_inmate3_682_6_0, &direction_inmate3_682_6_0, &direction_inmate3_682_6_0, &direction_inmate3_682_6_0, NULL, &direction_inmate3_682_6_8, &direction_inmate3_682_6_8, &direction_inmate3_682_6_8, &direction_inmate3_682_6_8, &direction_inmate3_682_6_8, &direction_inmate3_682_6_8, &direction_inmate3_682_6_8, NULL, &direction_inmate3_682_6_16, &direction_inmate3_682_6_16, &direction_inmate3_682_6_16, &direction_inmate3_682_6_16, &direction_inmate3_682_6_16, &direction_inmate3_682_6_16, &direction_inmate3_682_6_16, NULL, &direction_inmate3_682_6_24, &direction_inmate3_682_6_24, &direction_inmate3_682_6_24, &direction_inmate3_682_6_24, &direction_inmate3_682_6_24, &direction_inmate3_682_6_24, &direction_inmate3_682_6_24, NULL, &direction_inmate3_682_6_0, &direction_inmate3_682_6_0, &direction_inmate3_682_6_0};
static Image* images_inmate3_682_8_0[2];
static Direction direction_inmate3_682_8_0 = {0, 10, 10, 0, -1, images_inmate3_682_8_0, 2};
static Image* images_inmate3_682_8_16[2];
static Direction direction_inmate3_682_8_16 = {16, 5, 5, 0, -1, images_inmate3_682_8_16, 2};
static Image* images_inmate3_682_8_24[3];
static Direction direction_inmate3_682_8_24 = {24, 10, 10, 0, -1, images_inmate3_682_8_24, 3};
static Animation anim_inmate3_682_8 = {&direction_inmate3_682_8_0, &direction_inmate3_682_8_0, &direction_inmate3_682_8_0, &direction_inmate3_682_8_0, &direction_inmate3_682_8_0, &direction_inmate3_682_8_0, &direction_inmate3_682_8_0, &direction_inmate3_682_8_0, NULL, &direction_inmate3_682_8_16, &direction_inmate3_682_8_16, &direction_inmate3_682_8_16, &direction_inmate3_682_8_16, &direction_inmate3_682_8_16, &direction_inmate3_682_8_16, &direction_inmate3_682_8_16, &direction_inmate3_682_8_16, &direction_inmate3_682_8_16, &direction_inmate3_682_8_16, &direction_inmate3_682_8_16, NULL, &direction_inmate3_682_8_24, &direction_inmate3_682_8_24, &direction_inmate3_682_8_24, &direction_inmate3_682_8_24, &direction_inmate3_682_8_24, &direction_inmate3_682_8_24, &direction_inmate3_682_8_24, NULL, &direction_inmate3_682_8_0, &direction_inmate3_682_8_0, &direction_inmate3_682_8_0};
static Image* images_inmate3_682_9_0[2];
static Direction direction_inmate3_682_9_0 = {0, 5, 5, 0, -1, images_inmate3_682_9_0, 2};
static Animation anim_inmate3_682_9 = {&direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, NULL, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0, &direction_inmate3_682_9_0};
static Image* images_inmate3_682_10_0[5];
static Direction direction_inmate3_682_10_0 = {0, 10, 10, 0, -1, images_inmate3_682_10_0, 5};
static Animation anim_inmate3_682_10 = {&direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, NULL, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0, &direction_inmate3_682_10_0};
static Image* images_inmate3_682_11_0[2];
static Direction direction_inmate3_682_11_0 = {0, 6, 6, 0, -1, images_inmate3_682_11_0, 2};
static Image* images_inmate3_682_11_8[2];
static Direction direction_inmate3_682_11_8 = {8, 6, 6, 0, -1, images_inmate3_682_11_8, 2};
static Image* images_inmate3_682_11_16[2];
static Direction direction_inmate3_682_11_16 = {16, 6, 6, 0, -1, images_inmate3_682_11_16, 2};
static Image* images_inmate3_682_11_24[2];
static Direction direction_inmate3_682_11_24 = {24, 6, 6, 0, -1, images_inmate3_682_11_24, 2};
static Animation anim_inmate3_682_11 = {&direction_inmate3_682_11_0, &direction_inmate3_682_11_0, &direction_inmate3_682_11_0, &direction_inmate3_682_11_0, NULL, &direction_inmate3_682_11_8, &direction_inmate3_682_11_8, &direction_inmate3_682_11_8, &direction_inmate3_682_11_8, &direction_inmate3_682_11_8, &direction_inmate3_682_11_8, &direction_inmate3_682_11_8, NULL, &direction_inmate3_682_11_16, &direction_inmate3_682_11_16, &direction_inmate3_682_11_16, &direction_inmate3_682_11_16, &direction_inmate3_682_11_16, &direction_inmate3_682_11_16, &direction_inmate3_682_11_16, NULL, &direction_inmate3_682_11_24, &direction_inmate3_682_11_24, &direction_inmate3_682_11_24, &direction_inmate3_682_11_24, &direction_inmate3_682_11_24, &direction_inmate3_682_11_24, &direction_inmate3_682_11_24, NULL, &direction_inmate3_682_11_0, &direction_inmate3_682_11_0, &direction_inmate3_682_11_0};
static Image* images_inmate3_682_18_24[8];
static Direction direction_inmate3_682_18_24 = {24, 10, 10, 0, -1, images_inmate3_682_18_24, 8};
static Animation anim_inmate3_682_18 = {&direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, NULL, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24, &direction_inmate3_682_18_24};
static Animation * anim_array_inmate3_682[19] = {&anim_inmate3_682_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate3_682_6, NULL, &anim_inmate3_682_8, &anim_inmate3_682_9, &anim_inmate3_682_10, &anim_inmate3_682_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate3_682_18};
static Animations anim_inmate3_682 = {19, &anim_array_inmate3_682[0]};
static bool anim_inmate3_682_initialized;
class Inmate3_682 : public Active
{
public:
    Inmate3_682(int x, int y) : Active(x, y, Inmate3_682_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 3", 8);
#endif
        this->animations = &anim_inmate3_682;
        if (!anim_inmate3_682_initialized) {
            anim_inmate3_682_initialized = true;
            images_inmate3_682_0_0[0] = get_internal_image(574);
            images_inmate3_682_0_0[1] = get_internal_image(575);
            images_inmate3_682_0_8[0] = get_internal_image(552);
            images_inmate3_682_0_8[1] = get_internal_image(553);
            images_inmate3_682_0_16[0] = get_internal_image(573);
            images_inmate3_682_0_16[1] = get_internal_image(576);
            images_inmate3_682_0_24[0] = get_internal_image(550);
            images_inmate3_682_0_24[1] = get_internal_image(551);
            images_inmate3_682_6_0[0] = get_internal_image(803);
            images_inmate3_682_6_8[0] = get_internal_image(1066);
            images_inmate3_682_6_16[0] = get_internal_image(804);
            images_inmate3_682_6_24[0] = get_internal_image(1071);
            images_inmate3_682_8_0[0] = get_internal_image(705);
            images_inmate3_682_8_0[1] = get_internal_image(736);
            images_inmate3_682_8_16[0] = get_internal_image(652);
            images_inmate3_682_8_16[1] = get_internal_image(653);
            images_inmate3_682_8_24[0] = get_internal_image(208);
            images_inmate3_682_8_24[1] = get_internal_image(224);
            images_inmate3_682_8_24[2] = get_internal_image(453);
            images_inmate3_682_9_0[0] = get_internal_image(1019);
            images_inmate3_682_9_0[1] = get_internal_image(1488);
            images_inmate3_682_10_0[0] = get_internal_image(579);
            images_inmate3_682_10_0[1] = get_internal_image(580);
            images_inmate3_682_10_0[2] = get_internal_image(581);
            images_inmate3_682_10_0[3] = get_internal_image(583);
            images_inmate3_682_10_0[4] = get_internal_image(580);
            images_inmate3_682_11_0[0] = get_internal_image(582);
            images_inmate3_682_11_0[1] = get_internal_image(592);
            images_inmate3_682_11_8[0] = get_internal_image(588);
            images_inmate3_682_11_8[1] = get_internal_image(589);
            images_inmate3_682_11_16[0] = get_internal_image(593);
            images_inmate3_682_11_16[1] = get_internal_image(594);
            images_inmate3_682_11_24[0] = get_internal_image(599);
            images_inmate3_682_11_24[1] = get_internal_image(104);
            images_inmate3_682_18_24[0] = get_internal_image(2096);
            images_inmate3_682_18_24[1] = get_internal_image(2098);
            images_inmate3_682_18_24[2] = get_internal_image(2097);
            images_inmate3_682_18_24[3] = get_internal_image(2093);
            images_inmate3_682_18_24[4] = get_internal_image(2094);
            images_inmate3_682_18_24[5] = get_internal_image(2092);
            images_inmate3_682_18_24[6] = get_internal_image(2097);
            images_inmate3_682_18_24[7] = get_internal_image(2095);
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
FrameObject * create_inmate3_682(int x, int y)
{
    return new (Active::pool.create()) Inmate3_682(x, y);
}
static Image* images_inmate4_683_0_0[2];
static Direction direction_inmate4_683_0_0 = {0, 10, 10, 0, -1, images_inmate4_683_0_0, 2};
static Image* images_inmate4_683_0_8[2];
static Direction direction_inmate4_683_0_8 = {8, 10, 10, 0, -1, images_inmate4_683_0_8, 2};
static Image* images_inmate4_683_0_16[2];
static Direction direction_inmate4_683_0_16 = {16, 10, 10, 0, -1, images_inmate4_683_0_16, 2};
static Image* images_inmate4_683_0_24[2];
static Direction direction_inmate4_683_0_24 = {24, 10, 10, 0, -1, images_inmate4_683_0_24, 2};
static Animation anim_inmate4_683_0 = {&direction_inmate4_683_0_0, &direction_inmate4_683_0_0, &direction_inmate4_683_0_0, &direction_inmate4_683_0_0, NULL, &direction_inmate4_683_0_8, &direction_inmate4_683_0_8, &direction_inmate4_683_0_8, &direction_inmate4_683_0_8, &direction_inmate4_683_0_8, &direction_inmate4_683_0_8, &direction_inmate4_683_0_8, NULL, &direction_inmate4_683_0_16, &direction_inmate4_683_0_16, &direction_inmate4_683_0_16, &direction_inmate4_683_0_16, &direction_inmate4_683_0_16, &direction_inmate4_683_0_16, &direction_inmate4_683_0_16, NULL, &direction_inmate4_683_0_24, &direction_inmate4_683_0_24, &direction_inmate4_683_0_24, &direction_inmate4_683_0_24, &direction_inmate4_683_0_24, &direction_inmate4_683_0_24, &direction_inmate4_683_0_24, NULL, &direction_inmate4_683_0_0, &direction_inmate4_683_0_0, &direction_inmate4_683_0_0};
static Image* images_inmate4_683_6_0[1];
static Direction direction_inmate4_683_6_0 = {0, 6, 6, 0, 1, images_inmate4_683_6_0, 1};
static Image* images_inmate4_683_6_8[1];
static Direction direction_inmate4_683_6_8 = {8, 6, 6, 0, 1, images_inmate4_683_6_8, 1};
static Image* images_inmate4_683_6_16[1];
static Direction direction_inmate4_683_6_16 = {16, 6, 6, 0, 1, images_inmate4_683_6_16, 1};
static Image* images_inmate4_683_6_24[1];
static Direction direction_inmate4_683_6_24 = {24, 6, 6, 0, 1, images_inmate4_683_6_24, 1};
static Animation anim_inmate4_683_6 = {&direction_inmate4_683_6_0, &direction_inmate4_683_6_0, &direction_inmate4_683_6_0, &direction_inmate4_683_6_0, NULL, &direction_inmate4_683_6_8, &direction_inmate4_683_6_8, &direction_inmate4_683_6_8, &direction_inmate4_683_6_8, &direction_inmate4_683_6_8, &direction_inmate4_683_6_8, &direction_inmate4_683_6_8, NULL, &direction_inmate4_683_6_16, &direction_inmate4_683_6_16, &direction_inmate4_683_6_16, &direction_inmate4_683_6_16, &direction_inmate4_683_6_16, &direction_inmate4_683_6_16, &direction_inmate4_683_6_16, NULL, &direction_inmate4_683_6_24, &direction_inmate4_683_6_24, &direction_inmate4_683_6_24, &direction_inmate4_683_6_24, &direction_inmate4_683_6_24, &direction_inmate4_683_6_24, &direction_inmate4_683_6_24, NULL, &direction_inmate4_683_6_0, &direction_inmate4_683_6_0, &direction_inmate4_683_6_0};
static Image* images_inmate4_683_8_0[2];
static Direction direction_inmate4_683_8_0 = {0, 10, 10, 0, -1, images_inmate4_683_8_0, 2};
static Image* images_inmate4_683_8_16[2];
static Direction direction_inmate4_683_8_16 = {16, 5, 5, 0, -1, images_inmate4_683_8_16, 2};
static Image* images_inmate4_683_8_24[3];
static Direction direction_inmate4_683_8_24 = {24, 10, 10, 0, -1, images_inmate4_683_8_24, 3};
static Animation anim_inmate4_683_8 = {&direction_inmate4_683_8_0, &direction_inmate4_683_8_0, &direction_inmate4_683_8_0, &direction_inmate4_683_8_0, &direction_inmate4_683_8_0, &direction_inmate4_683_8_0, &direction_inmate4_683_8_0, &direction_inmate4_683_8_0, NULL, &direction_inmate4_683_8_16, &direction_inmate4_683_8_16, &direction_inmate4_683_8_16, &direction_inmate4_683_8_16, &direction_inmate4_683_8_16, &direction_inmate4_683_8_16, &direction_inmate4_683_8_16, &direction_inmate4_683_8_16, &direction_inmate4_683_8_16, &direction_inmate4_683_8_16, &direction_inmate4_683_8_16, NULL, &direction_inmate4_683_8_24, &direction_inmate4_683_8_24, &direction_inmate4_683_8_24, &direction_inmate4_683_8_24, &direction_inmate4_683_8_24, &direction_inmate4_683_8_24, &direction_inmate4_683_8_24, NULL, &direction_inmate4_683_8_0, &direction_inmate4_683_8_0, &direction_inmate4_683_8_0};
static Image* images_inmate4_683_9_0[2];
static Direction direction_inmate4_683_9_0 = {0, 5, 5, 0, -1, images_inmate4_683_9_0, 2};
static Animation anim_inmate4_683_9 = {&direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, NULL, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0, &direction_inmate4_683_9_0};
static Image* images_inmate4_683_10_0[5];
static Direction direction_inmate4_683_10_0 = {0, 10, 10, 0, -1, images_inmate4_683_10_0, 5};
static Animation anim_inmate4_683_10 = {&direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, NULL, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0, &direction_inmate4_683_10_0};
static Image* images_inmate4_683_11_0[2];
static Direction direction_inmate4_683_11_0 = {0, 10, 10, 0, -1, images_inmate4_683_11_0, 2};
static Image* images_inmate4_683_11_8[2];
static Direction direction_inmate4_683_11_8 = {8, 10, 10, 0, -1, images_inmate4_683_11_8, 2};
static Image* images_inmate4_683_11_16[2];
static Direction direction_inmate4_683_11_16 = {16, 10, 10, 0, -1, images_inmate4_683_11_16, 2};
static Image* images_inmate4_683_11_24[2];
static Direction direction_inmate4_683_11_24 = {24, 10, 10, 0, -1, images_inmate4_683_11_24, 2};
static Animation anim_inmate4_683_11 = {&direction_inmate4_683_11_0, &direction_inmate4_683_11_0, &direction_inmate4_683_11_0, &direction_inmate4_683_11_0, NULL, &direction_inmate4_683_11_8, &direction_inmate4_683_11_8, &direction_inmate4_683_11_8, &direction_inmate4_683_11_8, &direction_inmate4_683_11_8, &direction_inmate4_683_11_8, &direction_inmate4_683_11_8, NULL, &direction_inmate4_683_11_16, &direction_inmate4_683_11_16, &direction_inmate4_683_11_16, &direction_inmate4_683_11_16, &direction_inmate4_683_11_16, &direction_inmate4_683_11_16, &direction_inmate4_683_11_16, NULL, &direction_inmate4_683_11_24, &direction_inmate4_683_11_24, &direction_inmate4_683_11_24, &direction_inmate4_683_11_24, &direction_inmate4_683_11_24, &direction_inmate4_683_11_24, &direction_inmate4_683_11_24, NULL, &direction_inmate4_683_11_0, &direction_inmate4_683_11_0, &direction_inmate4_683_11_0};
static Image* images_inmate4_683_18_24[8];
static Direction direction_inmate4_683_18_24 = {24, 10, 10, 0, -1, images_inmate4_683_18_24, 8};
static Animation anim_inmate4_683_18 = {&direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, NULL, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24, &direction_inmate4_683_18_24};
static Animation * anim_array_inmate4_683[19] = {&anim_inmate4_683_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate4_683_6, NULL, &anim_inmate4_683_8, &anim_inmate4_683_9, &anim_inmate4_683_10, &anim_inmate4_683_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate4_683_18};
static Animations anim_inmate4_683 = {19, &anim_array_inmate4_683[0]};
static bool anim_inmate4_683_initialized;
class Inmate4_683 : public Active
{
public:
    Inmate4_683(int x, int y) : Active(x, y, Inmate4_683_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 4", 8);
#endif
        this->animations = &anim_inmate4_683;
        if (!anim_inmate4_683_initialized) {
            anim_inmate4_683_initialized = true;
            images_inmate4_683_0_0[0] = get_internal_image(556);
            images_inmate4_683_0_0[1] = get_internal_image(558);
            images_inmate4_683_0_8[0] = get_internal_image(561);
            images_inmate4_683_0_8[1] = get_internal_image(563);
            images_inmate4_683_0_16[0] = get_internal_image(559);
            images_inmate4_683_0_16[1] = get_internal_image(557);
            images_inmate4_683_0_24[0] = get_internal_image(560);
            images_inmate4_683_0_24[1] = get_internal_image(562);
            images_inmate4_683_6_0[0] = get_internal_image(1072);
            images_inmate4_683_6_8[0] = get_internal_image(1061);
            images_inmate4_683_6_16[0] = get_internal_image(1074);
            images_inmate4_683_6_24[0] = get_internal_image(1016);
            images_inmate4_683_8_0[0] = get_internal_image(614);
            images_inmate4_683_8_0[1] = get_internal_image(708);
            images_inmate4_683_8_16[0] = get_internal_image(608);
            images_inmate4_683_8_16[1] = get_internal_image(744);
            images_inmate4_683_8_24[0] = get_internal_image(201);
            images_inmate4_683_8_24[1] = get_internal_image(202);
            images_inmate4_683_8_24[2] = get_internal_image(186);
            images_inmate4_683_9_0[0] = get_internal_image(1490);
            images_inmate4_683_9_0[1] = get_internal_image(1491);
            images_inmate4_683_10_0[0] = get_internal_image(595);
            images_inmate4_683_10_0[1] = get_internal_image(493);
            images_inmate4_683_10_0[2] = get_internal_image(596);
            images_inmate4_683_10_0[3] = get_internal_image(596);
            images_inmate4_683_10_0[4] = get_internal_image(493);
            images_inmate4_683_11_0[0] = get_internal_image(535);
            images_inmate4_683_11_0[1] = get_internal_image(537);
            images_inmate4_683_11_8[0] = get_internal_image(742);
            images_inmate4_683_11_8[1] = get_internal_image(743);
            images_inmate4_683_11_16[0] = get_internal_image(539);
            images_inmate4_683_11_16[1] = get_internal_image(538);
            images_inmate4_683_11_24[0] = get_internal_image(165);
            images_inmate4_683_11_24[1] = get_internal_image(711);
            images_inmate4_683_18_24[0] = get_internal_image(1989);
            images_inmate4_683_18_24[1] = get_internal_image(1997);
            images_inmate4_683_18_24[2] = get_internal_image(2006);
            images_inmate4_683_18_24[3] = get_internal_image(2048);
            images_inmate4_683_18_24[4] = get_internal_image(2039);
            images_inmate4_683_18_24[5] = get_internal_image(2042);
            images_inmate4_683_18_24[6] = get_internal_image(2006);
            images_inmate4_683_18_24[7] = get_internal_image(2052);
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
FrameObject * create_inmate4_683(int x, int y)
{
    return new (Active::pool.create()) Inmate4_683(x, y);
}
static Image* images_upperlevelcheck_685_0_0[1];
static Direction direction_upperlevelcheck_685_0_0 = {0, 50, 50, 0, 1, images_upperlevelcheck_685_0_0, 1};
static Animation anim_upperlevelcheck_685_0 = {&direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, NULL, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0, &direction_upperlevelcheck_685_0_0};
static Image* images_upperlevelcheck_685_2_0[1];
static Direction direction_upperlevelcheck_685_2_0 = {0, 50, 50, 0, -1, images_upperlevelcheck_685_2_0, 1};
static Animation anim_upperlevelcheck_685_2 = {&direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, NULL, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0, &direction_upperlevelcheck_685_2_0};
static Image* images_upperlevelcheck_685_5_0[1];
static Direction direction_upperlevelcheck_685_5_0 = {0, 50, 50, 0, -1, images_upperlevelcheck_685_5_0, 1};
static Animation anim_upperlevelcheck_685_5 = {&direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, NULL, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0, &direction_upperlevelcheck_685_5_0};
static Animation * anim_array_upperlevelcheck_685[6] = {&anim_upperlevelcheck_685_0, NULL, &anim_upperlevelcheck_685_2, NULL, NULL, &anim_upperlevelcheck_685_5};
static Animations anim_upperlevelcheck_685 = {6, &anim_array_upperlevelcheck_685[0]};
static bool anim_upperlevelcheck_685_initialized;
class UpperLevelCheck_685 : public Active
{
public:
    UpperLevelCheck_685(int x, int y) : Active(x, y, UpperLevelCheck_685_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("UpperLevelCheck", 15);
#endif
        set_visible(false);
        this->animations = &anim_upperlevelcheck_685;
        if (!anim_upperlevelcheck_685_initialized) {
            anim_upperlevelcheck_685_initialized = true;
            images_upperlevelcheck_685_0_0[0] = get_internal_image(262);
            images_upperlevelcheck_685_2_0[0] = get_internal_image(409);
            images_upperlevelcheck_685_5_0[0] = get_internal_image(84);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(false);
        create_alterables();
    }
};
FrameObject * create_upperlevelcheck_685(int x, int y)
{
    return new (Active::pool.create()) UpperLevelCheck_685(x, y);
}
class QuickBackdrop5_686 : public QuickBackdrop
{
public:
    QuickBackdrop5_686(int x, int y) : QuickBackdrop(x, y, BACKGROUND_TYPE)
    {
#ifndef NDEBUG
        name = std::string("Quick Backdrop 5", 16);
#endif
        flags |= BACKGROUND;
        flags |= BACKGROUND_COL;
        width = 1500;
        height = 1500;
        image = get_internal_image(244);
        outline = 0;
        collision = new InstanceBox(this);
    }
};
FrameObject * create_quickbackdrop5_686(int x, int y)
{
    return new (QuickBackdrop::pool.create()) QuickBackdrop5_686(x, y);
}
static Image* images_itemshud_687_0_0[1];
static Direction direction_itemshud_687_0_0 = {0, 50, 50, 0, 1, images_itemshud_687_0_0, 1};
static Image* images_itemshud_687_0_1[1];
static Direction direction_itemshud_687_0_1 = {1, 50, 50, 0, 1, images_itemshud_687_0_1, 1};
static Image* images_itemshud_687_0_2[1];
static Direction direction_itemshud_687_0_2 = {2, 50, 50, 0, 1, images_itemshud_687_0_2, 1};
static Image* images_itemshud_687_0_3[1];
static Direction direction_itemshud_687_0_3 = {3, 50, 50, 0, 1, images_itemshud_687_0_3, 1};
static Image* images_itemshud_687_0_4[1];
static Direction direction_itemshud_687_0_4 = {4, 50, 50, 0, 1, images_itemshud_687_0_4, 1};
static Image* images_itemshud_687_0_5[1];
static Direction direction_itemshud_687_0_5 = {5, 50, 50, 0, 1, images_itemshud_687_0_5, 1};
static Image* images_itemshud_687_0_6[1];
static Direction direction_itemshud_687_0_6 = {6, 50, 50, 0, 1, images_itemshud_687_0_6, 1};
static Image* images_itemshud_687_0_7[1];
static Direction direction_itemshud_687_0_7 = {7, 50, 50, 0, 1, images_itemshud_687_0_7, 1};
static Image* images_itemshud_687_0_8[1];
static Direction direction_itemshud_687_0_8 = {8, 50, 50, 0, 1, images_itemshud_687_0_8, 1};
static Image* images_itemshud_687_0_9[1];
static Direction direction_itemshud_687_0_9 = {9, 50, 50, 0, 1, images_itemshud_687_0_9, 1};
static Image* images_itemshud_687_0_10[1];
static Direction direction_itemshud_687_0_10 = {10, 50, 50, 0, 1, images_itemshud_687_0_10, 1};
static Image* images_itemshud_687_0_11[1];
static Direction direction_itemshud_687_0_11 = {11, 50, 50, 0, 1, images_itemshud_687_0_11, 1};
static Image* images_itemshud_687_0_12[1];
static Direction direction_itemshud_687_0_12 = {12, 50, 50, 0, 1, images_itemshud_687_0_12, 1};
static Image* images_itemshud_687_0_13[1];
static Direction direction_itemshud_687_0_13 = {13, 50, 50, 0, 1, images_itemshud_687_0_13, 1};
static Image* images_itemshud_687_0_14[1];
static Direction direction_itemshud_687_0_14 = {14, 50, 50, 0, 1, images_itemshud_687_0_14, 1};
static Image* images_itemshud_687_0_15[1];
static Direction direction_itemshud_687_0_15 = {15, 50, 50, 0, 1, images_itemshud_687_0_15, 1};
static Image* images_itemshud_687_0_16[1];
static Direction direction_itemshud_687_0_16 = {16, 50, 50, 0, 1, images_itemshud_687_0_16, 1};
static Image* images_itemshud_687_0_17[1];
static Direction direction_itemshud_687_0_17 = {17, 50, 50, 0, 1, images_itemshud_687_0_17, 1};
static Image* images_itemshud_687_0_18[1];
static Direction direction_itemshud_687_0_18 = {18, 50, 50, 0, 1, images_itemshud_687_0_18, 1};
static Image* images_itemshud_687_0_19[1];
static Direction direction_itemshud_687_0_19 = {19, 50, 50, 0, -1, images_itemshud_687_0_19, 1};
static Image* images_itemshud_687_0_20[1];
static Direction direction_itemshud_687_0_20 = {20, 50, 50, 0, 1, images_itemshud_687_0_20, 1};
static Image* images_itemshud_687_0_21[1];
static Direction direction_itemshud_687_0_21 = {21, 50, 50, 0, 1, images_itemshud_687_0_21, 1};
static Image* images_itemshud_687_0_22[1];
static Direction direction_itemshud_687_0_22 = {22, 50, 50, 0, 1, images_itemshud_687_0_22, 1};
static Image* images_itemshud_687_0_23[1];
static Direction direction_itemshud_687_0_23 = {23, 50, 50, 0, 1, images_itemshud_687_0_23, 1};
static Image* images_itemshud_687_0_24[1];
static Direction direction_itemshud_687_0_24 = {24, 50, 50, 0, 1, images_itemshud_687_0_24, 1};
static Image* images_itemshud_687_0_25[1];
static Direction direction_itemshud_687_0_25 = {25, 50, 50, 0, 1, images_itemshud_687_0_25, 1};
static Image* images_itemshud_687_0_26[1];
static Direction direction_itemshud_687_0_26 = {26, 50, 50, 0, 1, images_itemshud_687_0_26, 1};
static Image* images_itemshud_687_0_27[1];
static Direction direction_itemshud_687_0_27 = {27, 50, 50, 0, 1, images_itemshud_687_0_27, 1};
static Image* images_itemshud_687_0_28[1];
static Direction direction_itemshud_687_0_28 = {28, 50, 50, 0, 1, images_itemshud_687_0_28, 1};
static Image* images_itemshud_687_0_29[1];
static Direction direction_itemshud_687_0_29 = {29, 50, 50, 0, 1, images_itemshud_687_0_29, 1};
static Image* images_itemshud_687_0_30[1];
static Direction direction_itemshud_687_0_30 = {30, 50, 50, 0, 1, images_itemshud_687_0_30, 1};
static Image* images_itemshud_687_0_31[1];
static Direction direction_itemshud_687_0_31 = {31, 50, 50, 0, 1, images_itemshud_687_0_31, 1};
static Animation anim_itemshud_687_0 = {&direction_itemshud_687_0_0, &direction_itemshud_687_0_1, &direction_itemshud_687_0_2, &direction_itemshud_687_0_3, &direction_itemshud_687_0_4, &direction_itemshud_687_0_5, &direction_itemshud_687_0_6, &direction_itemshud_687_0_7, &direction_itemshud_687_0_8, &direction_itemshud_687_0_9, &direction_itemshud_687_0_10, &direction_itemshud_687_0_11, &direction_itemshud_687_0_12, &direction_itemshud_687_0_13, &direction_itemshud_687_0_14, &direction_itemshud_687_0_15, &direction_itemshud_687_0_16, &direction_itemshud_687_0_17, &direction_itemshud_687_0_18, &direction_itemshud_687_0_19, &direction_itemshud_687_0_20, &direction_itemshud_687_0_21, &direction_itemshud_687_0_22, &direction_itemshud_687_0_23, &direction_itemshud_687_0_24, &direction_itemshud_687_0_25, &direction_itemshud_687_0_26, &direction_itemshud_687_0_27, &direction_itemshud_687_0_28, &direction_itemshud_687_0_29, &direction_itemshud_687_0_30, &direction_itemshud_687_0_31};
static Image* images_itemshud_687_1_0[1];
static Direction direction_itemshud_687_1_0 = {0, 50, 50, 0, -1, images_itemshud_687_1_0, 1};
static Image* images_itemshud_687_1_1[1];
static Direction direction_itemshud_687_1_1 = {1, 50, 50, 0, -1, images_itemshud_687_1_1, 1};
static Image* images_itemshud_687_1_2[1];
static Direction direction_itemshud_687_1_2 = {2, 50, 50, 0, -1, images_itemshud_687_1_2, 1};
static Image* images_itemshud_687_1_3[1];
static Direction direction_itemshud_687_1_3 = {3, 50, 50, 0, -1, images_itemshud_687_1_3, 1};
static Image* images_itemshud_687_1_4[1];
static Direction direction_itemshud_687_1_4 = {4, 50, 50, 0, -1, images_itemshud_687_1_4, 1};
static Image* images_itemshud_687_1_5[1];
static Direction direction_itemshud_687_1_5 = {5, 50, 50, 0, -1, images_itemshud_687_1_5, 1};
static Image* images_itemshud_687_1_6[1];
static Direction direction_itemshud_687_1_6 = {6, 50, 50, 0, -1, images_itemshud_687_1_6, 1};
static Image* images_itemshud_687_1_7[1];
static Direction direction_itemshud_687_1_7 = {7, 50, 50, 0, -1, images_itemshud_687_1_7, 1};
static Image* images_itemshud_687_1_8[1];
static Direction direction_itemshud_687_1_8 = {8, 50, 50, 0, -1, images_itemshud_687_1_8, 1};
static Image* images_itemshud_687_1_9[1];
static Direction direction_itemshud_687_1_9 = {9, 50, 50, 0, -1, images_itemshud_687_1_9, 1};
static Image* images_itemshud_687_1_10[1];
static Direction direction_itemshud_687_1_10 = {10, 50, 50, 0, -1, images_itemshud_687_1_10, 1};
static Image* images_itemshud_687_1_11[1];
static Direction direction_itemshud_687_1_11 = {11, 50, 50, 0, -1, images_itemshud_687_1_11, 1};
static Image* images_itemshud_687_1_12[1];
static Direction direction_itemshud_687_1_12 = {12, 50, 50, 0, -1, images_itemshud_687_1_12, 1};
static Image* images_itemshud_687_1_13[1];
static Direction direction_itemshud_687_1_13 = {13, 50, 50, 0, -1, images_itemshud_687_1_13, 1};
static Image* images_itemshud_687_1_14[1];
static Direction direction_itemshud_687_1_14 = {14, 50, 50, 0, -1, images_itemshud_687_1_14, 1};
static Image* images_itemshud_687_1_15[1];
static Direction direction_itemshud_687_1_15 = {15, 50, 50, 0, -1, images_itemshud_687_1_15, 1};
static Image* images_itemshud_687_1_16[1];
static Direction direction_itemshud_687_1_16 = {16, 50, 50, 0, -1, images_itemshud_687_1_16, 1};
static Image* images_itemshud_687_1_17[1];
static Direction direction_itemshud_687_1_17 = {17, 50, 50, 0, -1, images_itemshud_687_1_17, 1};
static Image* images_itemshud_687_1_18[1];
static Direction direction_itemshud_687_1_18 = {18, 50, 50, 0, -1, images_itemshud_687_1_18, 1};
static Image* images_itemshud_687_1_19[1];
static Direction direction_itemshud_687_1_19 = {19, 50, 50, 0, -1, images_itemshud_687_1_19, 1};
static Image* images_itemshud_687_1_20[1];
static Direction direction_itemshud_687_1_20 = {20, 50, 50, 0, -1, images_itemshud_687_1_20, 1};
static Image* images_itemshud_687_1_21[1];
static Direction direction_itemshud_687_1_21 = {21, 50, 50, 0, -1, images_itemshud_687_1_21, 1};
static Image* images_itemshud_687_1_22[1];
static Direction direction_itemshud_687_1_22 = {22, 50, 50, 0, -1, images_itemshud_687_1_22, 1};
static Image* images_itemshud_687_1_23[1];
static Direction direction_itemshud_687_1_23 = {23, 50, 50, 0, -1, images_itemshud_687_1_23, 1};
static Image* images_itemshud_687_1_24[1];
static Direction direction_itemshud_687_1_24 = {24, 50, 50, 0, -1, images_itemshud_687_1_24, 1};
static Image* images_itemshud_687_1_25[1];
static Direction direction_itemshud_687_1_25 = {25, 50, 50, 0, -1, images_itemshud_687_1_25, 1};
static Image* images_itemshud_687_1_26[1];
static Direction direction_itemshud_687_1_26 = {26, 50, 50, 0, -1, images_itemshud_687_1_26, 1};
static Image* images_itemshud_687_1_27[1];
static Direction direction_itemshud_687_1_27 = {27, 50, 50, 0, -1, images_itemshud_687_1_27, 1};
static Image* images_itemshud_687_1_28[1];
static Direction direction_itemshud_687_1_28 = {28, 50, 50, 0, -1, images_itemshud_687_1_28, 1};
static Image* images_itemshud_687_1_29[1];
static Direction direction_itemshud_687_1_29 = {29, 50, 50, 0, -1, images_itemshud_687_1_29, 1};
static Image* images_itemshud_687_1_30[1];
static Direction direction_itemshud_687_1_30 = {30, 50, 50, 0, -1, images_itemshud_687_1_30, 1};
static Image* images_itemshud_687_1_31[1];
static Direction direction_itemshud_687_1_31 = {31, 50, 50, 0, -1, images_itemshud_687_1_31, 1};
static Animation anim_itemshud_687_1 = {&direction_itemshud_687_1_0, &direction_itemshud_687_1_1, &direction_itemshud_687_1_2, &direction_itemshud_687_1_3, &direction_itemshud_687_1_4, &direction_itemshud_687_1_5, &direction_itemshud_687_1_6, &direction_itemshud_687_1_7, &direction_itemshud_687_1_8, &direction_itemshud_687_1_9, &direction_itemshud_687_1_10, &direction_itemshud_687_1_11, &direction_itemshud_687_1_12, &direction_itemshud_687_1_13, &direction_itemshud_687_1_14, &direction_itemshud_687_1_15, &direction_itemshud_687_1_16, &direction_itemshud_687_1_17, &direction_itemshud_687_1_18, &direction_itemshud_687_1_19, &direction_itemshud_687_1_20, &direction_itemshud_687_1_21, &direction_itemshud_687_1_22, &direction_itemshud_687_1_23, &direction_itemshud_687_1_24, &direction_itemshud_687_1_25, &direction_itemshud_687_1_26, &direction_itemshud_687_1_27, &direction_itemshud_687_1_28, &direction_itemshud_687_1_29, &direction_itemshud_687_1_30, &direction_itemshud_687_1_31};
static Image* images_itemshud_687_2_0[1];
static Direction direction_itemshud_687_2_0 = {0, 50, 50, 0, -1, images_itemshud_687_2_0, 1};
static Image* images_itemshud_687_2_1[1];
static Direction direction_itemshud_687_2_1 = {1, 50, 50, 0, -1, images_itemshud_687_2_1, 1};
static Image* images_itemshud_687_2_2[1];
static Direction direction_itemshud_687_2_2 = {2, 50, 50, 0, -1, images_itemshud_687_2_2, 1};
static Image* images_itemshud_687_2_3[1];
static Direction direction_itemshud_687_2_3 = {3, 50, 50, 0, -1, images_itemshud_687_2_3, 1};
static Image* images_itemshud_687_2_4[1];
static Direction direction_itemshud_687_2_4 = {4, 50, 50, 0, -1, images_itemshud_687_2_4, 1};
static Image* images_itemshud_687_2_5[1];
static Direction direction_itemshud_687_2_5 = {5, 50, 50, 0, -1, images_itemshud_687_2_5, 1};
static Image* images_itemshud_687_2_6[1];
static Direction direction_itemshud_687_2_6 = {6, 50, 50, 0, -1, images_itemshud_687_2_6, 1};
static Image* images_itemshud_687_2_7[1];
static Direction direction_itemshud_687_2_7 = {7, 50, 50, 0, -1, images_itemshud_687_2_7, 1};
static Image* images_itemshud_687_2_8[1];
static Direction direction_itemshud_687_2_8 = {8, 50, 50, 0, -1, images_itemshud_687_2_8, 1};
static Image* images_itemshud_687_2_9[1];
static Direction direction_itemshud_687_2_9 = {9, 50, 50, 0, -1, images_itemshud_687_2_9, 1};
static Image* images_itemshud_687_2_10[1];
static Direction direction_itemshud_687_2_10 = {10, 50, 50, 0, -1, images_itemshud_687_2_10, 1};
static Image* images_itemshud_687_2_11[1];
static Direction direction_itemshud_687_2_11 = {11, 50, 50, 0, -1, images_itemshud_687_2_11, 1};
static Image* images_itemshud_687_2_12[1];
static Direction direction_itemshud_687_2_12 = {12, 50, 50, 0, -1, images_itemshud_687_2_12, 1};
static Image* images_itemshud_687_2_13[1];
static Direction direction_itemshud_687_2_13 = {13, 50, 50, 0, -1, images_itemshud_687_2_13, 1};
static Image* images_itemshud_687_2_14[1];
static Direction direction_itemshud_687_2_14 = {14, 50, 50, 0, -1, images_itemshud_687_2_14, 1};
static Image* images_itemshud_687_2_15[1];
static Direction direction_itemshud_687_2_15 = {15, 50, 50, 0, -1, images_itemshud_687_2_15, 1};
static Image* images_itemshud_687_2_16[1];
static Direction direction_itemshud_687_2_16 = {16, 50, 50, 0, -1, images_itemshud_687_2_16, 1};
static Image* images_itemshud_687_2_17[1];
static Direction direction_itemshud_687_2_17 = {17, 50, 50, 0, -1, images_itemshud_687_2_17, 1};
static Image* images_itemshud_687_2_18[1];
static Direction direction_itemshud_687_2_18 = {18, 50, 50, 0, -1, images_itemshud_687_2_18, 1};
static Image* images_itemshud_687_2_19[1];
static Direction direction_itemshud_687_2_19 = {19, 50, 50, 0, -1, images_itemshud_687_2_19, 1};
static Image* images_itemshud_687_2_20[1];
static Direction direction_itemshud_687_2_20 = {20, 50, 50, 0, -1, images_itemshud_687_2_20, 1};
static Image* images_itemshud_687_2_21[1];
static Direction direction_itemshud_687_2_21 = {21, 50, 50, 0, -1, images_itemshud_687_2_21, 1};
static Image* images_itemshud_687_2_22[1];
static Direction direction_itemshud_687_2_22 = {22, 50, 50, 0, -1, images_itemshud_687_2_22, 1};
static Image* images_itemshud_687_2_23[1];
static Direction direction_itemshud_687_2_23 = {23, 50, 50, 0, -1, images_itemshud_687_2_23, 1};
static Image* images_itemshud_687_2_24[1];
static Direction direction_itemshud_687_2_24 = {24, 50, 50, 0, -1, images_itemshud_687_2_24, 1};
static Image* images_itemshud_687_2_25[1];
static Direction direction_itemshud_687_2_25 = {25, 50, 50, 0, -1, images_itemshud_687_2_25, 1};
static Image* images_itemshud_687_2_26[1];
static Direction direction_itemshud_687_2_26 = {26, 50, 50, 0, -1, images_itemshud_687_2_26, 1};
static Image* images_itemshud_687_2_27[1];
static Direction direction_itemshud_687_2_27 = {27, 50, 50, 0, -1, images_itemshud_687_2_27, 1};
static Image* images_itemshud_687_2_28[1];
static Direction direction_itemshud_687_2_28 = {28, 50, 50, 0, -1, images_itemshud_687_2_28, 1};
static Image* images_itemshud_687_2_29[1];
static Direction direction_itemshud_687_2_29 = {29, 50, 50, 0, -1, images_itemshud_687_2_29, 1};
static Image* images_itemshud_687_2_30[1];
static Direction direction_itemshud_687_2_30 = {30, 50, 50, 0, -1, images_itemshud_687_2_30, 1};
static Image* images_itemshud_687_2_31[1];
static Direction direction_itemshud_687_2_31 = {31, 50, 50, 0, -1, images_itemshud_687_2_31, 1};
static Animation anim_itemshud_687_2 = {&direction_itemshud_687_2_0, &direction_itemshud_687_2_1, &direction_itemshud_687_2_2, &direction_itemshud_687_2_3, &direction_itemshud_687_2_4, &direction_itemshud_687_2_5, &direction_itemshud_687_2_6, &direction_itemshud_687_2_7, &direction_itemshud_687_2_8, &direction_itemshud_687_2_9, &direction_itemshud_687_2_10, &direction_itemshud_687_2_11, &direction_itemshud_687_2_12, &direction_itemshud_687_2_13, &direction_itemshud_687_2_14, &direction_itemshud_687_2_15, &direction_itemshud_687_2_16, &direction_itemshud_687_2_17, &direction_itemshud_687_2_18, &direction_itemshud_687_2_19, &direction_itemshud_687_2_20, &direction_itemshud_687_2_21, &direction_itemshud_687_2_22, &direction_itemshud_687_2_23, &direction_itemshud_687_2_24, &direction_itemshud_687_2_25, &direction_itemshud_687_2_26, &direction_itemshud_687_2_27, &direction_itemshud_687_2_28, &direction_itemshud_687_2_29, &direction_itemshud_687_2_30, &direction_itemshud_687_2_31};
static Image* images_itemshud_687_5_0[1];
static Direction direction_itemshud_687_5_0 = {0, 50, 50, 0, -1, images_itemshud_687_5_0, 1};
static Image* images_itemshud_687_5_1[1];
static Direction direction_itemshud_687_5_1 = {1, 50, 50, 0, -1, images_itemshud_687_5_1, 1};
static Image* images_itemshud_687_5_2[1];
static Direction direction_itemshud_687_5_2 = {2, 50, 50, 0, -1, images_itemshud_687_5_2, 1};
static Image* images_itemshud_687_5_3[1];
static Direction direction_itemshud_687_5_3 = {3, 50, 50, 0, -1, images_itemshud_687_5_3, 1};
static Image* images_itemshud_687_5_4[1];
static Direction direction_itemshud_687_5_4 = {4, 50, 50, 0, -1, images_itemshud_687_5_4, 1};
static Image* images_itemshud_687_5_5[1];
static Direction direction_itemshud_687_5_5 = {5, 50, 50, 0, -1, images_itemshud_687_5_5, 1};
static Image* images_itemshud_687_5_6[1];
static Direction direction_itemshud_687_5_6 = {6, 50, 50, 0, -1, images_itemshud_687_5_6, 1};
static Image* images_itemshud_687_5_7[1];
static Direction direction_itemshud_687_5_7 = {7, 50, 50, 0, -1, images_itemshud_687_5_7, 1};
static Image* images_itemshud_687_5_8[1];
static Direction direction_itemshud_687_5_8 = {8, 50, 50, 0, -1, images_itemshud_687_5_8, 1};
static Image* images_itemshud_687_5_9[1];
static Direction direction_itemshud_687_5_9 = {9, 50, 50, 0, -1, images_itemshud_687_5_9, 1};
static Image* images_itemshud_687_5_10[1];
static Direction direction_itemshud_687_5_10 = {10, 50, 50, 0, -1, images_itemshud_687_5_10, 1};
static Image* images_itemshud_687_5_11[1];
static Direction direction_itemshud_687_5_11 = {11, 50, 50, 0, -1, images_itemshud_687_5_11, 1};
static Image* images_itemshud_687_5_12[1];
static Direction direction_itemshud_687_5_12 = {12, 50, 50, 0, -1, images_itemshud_687_5_12, 1};
static Image* images_itemshud_687_5_13[1];
static Direction direction_itemshud_687_5_13 = {13, 50, 50, 0, -1, images_itemshud_687_5_13, 1};
static Image* images_itemshud_687_5_14[1];
static Direction direction_itemshud_687_5_14 = {14, 50, 50, 0, -1, images_itemshud_687_5_14, 1};
static Image* images_itemshud_687_5_15[1];
static Direction direction_itemshud_687_5_15 = {15, 50, 50, 0, -1, images_itemshud_687_5_15, 1};
static Image* images_itemshud_687_5_16[1];
static Direction direction_itemshud_687_5_16 = {16, 50, 50, 0, -1, images_itemshud_687_5_16, 1};
static Image* images_itemshud_687_5_17[1];
static Direction direction_itemshud_687_5_17 = {17, 50, 50, 0, -1, images_itemshud_687_5_17, 1};
static Image* images_itemshud_687_5_18[1];
static Direction direction_itemshud_687_5_18 = {18, 50, 50, 0, -1, images_itemshud_687_5_18, 1};
static Image* images_itemshud_687_5_19[1];
static Direction direction_itemshud_687_5_19 = {19, 50, 50, 0, -1, images_itemshud_687_5_19, 1};
static Image* images_itemshud_687_5_20[1];
static Direction direction_itemshud_687_5_20 = {20, 50, 50, 0, -1, images_itemshud_687_5_20, 1};
static Image* images_itemshud_687_5_21[1];
static Direction direction_itemshud_687_5_21 = {21, 50, 50, 0, -1, images_itemshud_687_5_21, 1};
static Image* images_itemshud_687_5_22[1];
static Direction direction_itemshud_687_5_22 = {22, 50, 50, 0, -1, images_itemshud_687_5_22, 1};
static Image* images_itemshud_687_5_23[1];
static Direction direction_itemshud_687_5_23 = {23, 50, 50, 0, -1, images_itemshud_687_5_23, 1};
static Image* images_itemshud_687_5_24[1];
static Direction direction_itemshud_687_5_24 = {24, 50, 50, 0, -1, images_itemshud_687_5_24, 1};
static Image* images_itemshud_687_5_25[1];
static Direction direction_itemshud_687_5_25 = {25, 50, 50, 0, -1, images_itemshud_687_5_25, 1};
static Image* images_itemshud_687_5_26[1];
static Direction direction_itemshud_687_5_26 = {26, 50, 50, 0, -1, images_itemshud_687_5_26, 1};
static Image* images_itemshud_687_5_27[7];
static Direction direction_itemshud_687_5_27 = {27, 15, 15, 0, -1, images_itemshud_687_5_27, 7};
static Image* images_itemshud_687_5_28[1];
static Direction direction_itemshud_687_5_28 = {28, 50, 50, 0, -1, images_itemshud_687_5_28, 1};
static Image* images_itemshud_687_5_29[1];
static Direction direction_itemshud_687_5_29 = {29, 50, 50, 0, -1, images_itemshud_687_5_29, 1};
static Image* images_itemshud_687_5_30[1];
static Direction direction_itemshud_687_5_30 = {30, 50, 50, 0, -1, images_itemshud_687_5_30, 1};
static Image* images_itemshud_687_5_31[1];
static Direction direction_itemshud_687_5_31 = {31, 50, 50, 0, -1, images_itemshud_687_5_31, 1};
static Animation anim_itemshud_687_5 = {&direction_itemshud_687_5_0, &direction_itemshud_687_5_1, &direction_itemshud_687_5_2, &direction_itemshud_687_5_3, &direction_itemshud_687_5_4, &direction_itemshud_687_5_5, &direction_itemshud_687_5_6, &direction_itemshud_687_5_7, &direction_itemshud_687_5_8, &direction_itemshud_687_5_9, &direction_itemshud_687_5_10, &direction_itemshud_687_5_11, &direction_itemshud_687_5_12, &direction_itemshud_687_5_13, &direction_itemshud_687_5_14, &direction_itemshud_687_5_15, &direction_itemshud_687_5_16, &direction_itemshud_687_5_17, &direction_itemshud_687_5_18, &direction_itemshud_687_5_19, &direction_itemshud_687_5_20, &direction_itemshud_687_5_21, &direction_itemshud_687_5_22, &direction_itemshud_687_5_23, &direction_itemshud_687_5_24, &direction_itemshud_687_5_25, &direction_itemshud_687_5_26, &direction_itemshud_687_5_27, &direction_itemshud_687_5_28, &direction_itemshud_687_5_29, &direction_itemshud_687_5_30, &direction_itemshud_687_5_31};
static Image* images_itemshud_687_6_0[1];
static Direction direction_itemshud_687_6_0 = {0, 15, 15, 0, -1, images_itemshud_687_6_0, 1};
static Image* images_itemshud_687_6_1[1];
static Direction direction_itemshud_687_6_1 = {1, 15, 15, 0, -1, images_itemshud_687_6_1, 1};
static Image* images_itemshud_687_6_2[1];
static Direction direction_itemshud_687_6_2 = {2, 15, 15, 0, -1, images_itemshud_687_6_2, 1};
static Image* images_itemshud_687_6_3[1];
static Direction direction_itemshud_687_6_3 = {3, 50, 50, 0, -1, images_itemshud_687_6_3, 1};
static Image* images_itemshud_687_6_4[1];
static Direction direction_itemshud_687_6_4 = {4, 50, 50, 0, -1, images_itemshud_687_6_4, 1};
static Image* images_itemshud_687_6_5[1];
static Direction direction_itemshud_687_6_5 = {5, 50, 50, 0, -1, images_itemshud_687_6_5, 1};
static Image* images_itemshud_687_6_6[1];
static Direction direction_itemshud_687_6_6 = {6, 50, 50, 0, -1, images_itemshud_687_6_6, 1};
static Image* images_itemshud_687_6_7[1];
static Direction direction_itemshud_687_6_7 = {7, 50, 50, 0, -1, images_itemshud_687_6_7, 1};
static Image* images_itemshud_687_6_8[1];
static Direction direction_itemshud_687_6_8 = {8, 50, 50, 0, -1, images_itemshud_687_6_8, 1};
static Image* images_itemshud_687_6_9[1];
static Direction direction_itemshud_687_6_9 = {9, 50, 50, 0, -1, images_itemshud_687_6_9, 1};
static Image* images_itemshud_687_6_10[1];
static Direction direction_itemshud_687_6_10 = {10, 50, 50, 0, -1, images_itemshud_687_6_10, 1};
static Image* images_itemshud_687_6_11[1];
static Direction direction_itemshud_687_6_11 = {11, 50, 50, 0, -1, images_itemshud_687_6_11, 1};
static Image* images_itemshud_687_6_12[1];
static Direction direction_itemshud_687_6_12 = {12, 50, 50, 0, -1, images_itemshud_687_6_12, 1};
static Image* images_itemshud_687_6_13[1];
static Direction direction_itemshud_687_6_13 = {13, 50, 50, 0, -1, images_itemshud_687_6_13, 1};
static Image* images_itemshud_687_6_14[1];
static Direction direction_itemshud_687_6_14 = {14, 5, 5, 0, -1, images_itemshud_687_6_14, 1};
static Image* images_itemshud_687_6_15[1];
static Direction direction_itemshud_687_6_15 = {15, 5, 5, 0, -1, images_itemshud_687_6_15, 1};
static Image* images_itemshud_687_6_16[1];
static Direction direction_itemshud_687_6_16 = {16, 5, 5, 0, -1, images_itemshud_687_6_16, 1};
static Image* images_itemshud_687_6_17[1];
static Direction direction_itemshud_687_6_17 = {17, 50, 50, 0, -1, images_itemshud_687_6_17, 1};
static Image* images_itemshud_687_6_18[1];
static Direction direction_itemshud_687_6_18 = {18, 50, 50, 0, -1, images_itemshud_687_6_18, 1};
static Image* images_itemshud_687_6_19[1];
static Direction direction_itemshud_687_6_19 = {19, 50, 50, 0, -1, images_itemshud_687_6_19, 1};
static Image* images_itemshud_687_6_20[1];
static Direction direction_itemshud_687_6_20 = {20, 50, 50, 0, -1, images_itemshud_687_6_20, 1};
static Image* images_itemshud_687_6_21[1];
static Direction direction_itemshud_687_6_21 = {21, 50, 50, 0, -1, images_itemshud_687_6_21, 1};
static Image* images_itemshud_687_6_22[1];
static Direction direction_itemshud_687_6_22 = {22, 50, 50, 0, -1, images_itemshud_687_6_22, 1};
static Image* images_itemshud_687_6_23[1];
static Direction direction_itemshud_687_6_23 = {23, 50, 50, 0, -1, images_itemshud_687_6_23, 1};
static Image* images_itemshud_687_6_24[1];
static Direction direction_itemshud_687_6_24 = {24, 50, 50, 0, -1, images_itemshud_687_6_24, 1};
static Image* images_itemshud_687_6_25[1];
static Direction direction_itemshud_687_6_25 = {25, 50, 50, 0, -1, images_itemshud_687_6_25, 1};
static Image* images_itemshud_687_6_26[1];
static Direction direction_itemshud_687_6_26 = {26, 50, 50, 0, -1, images_itemshud_687_6_26, 1};
static Image* images_itemshud_687_6_27[1];
static Direction direction_itemshud_687_6_27 = {27, 50, 50, 0, -1, images_itemshud_687_6_27, 1};
static Image* images_itemshud_687_6_28[1];
static Direction direction_itemshud_687_6_28 = {28, 50, 50, 0, -1, images_itemshud_687_6_28, 1};
static Image* images_itemshud_687_6_29[1];
static Direction direction_itemshud_687_6_29 = {29, 50, 50, 0, -1, images_itemshud_687_6_29, 1};
static Image* images_itemshud_687_6_30[1];
static Direction direction_itemshud_687_6_30 = {30, 50, 50, 0, -1, images_itemshud_687_6_30, 1};
static Image* images_itemshud_687_6_31[1];
static Direction direction_itemshud_687_6_31 = {31, 50, 50, 0, -1, images_itemshud_687_6_31, 1};
static Animation anim_itemshud_687_6 = {&direction_itemshud_687_6_0, &direction_itemshud_687_6_1, &direction_itemshud_687_6_2, &direction_itemshud_687_6_3, &direction_itemshud_687_6_4, &direction_itemshud_687_6_5, &direction_itemshud_687_6_6, &direction_itemshud_687_6_7, &direction_itemshud_687_6_8, &direction_itemshud_687_6_9, &direction_itemshud_687_6_10, &direction_itemshud_687_6_11, &direction_itemshud_687_6_12, &direction_itemshud_687_6_13, &direction_itemshud_687_6_14, &direction_itemshud_687_6_15, &direction_itemshud_687_6_16, &direction_itemshud_687_6_17, &direction_itemshud_687_6_18, &direction_itemshud_687_6_19, &direction_itemshud_687_6_20, &direction_itemshud_687_6_21, &direction_itemshud_687_6_22, &direction_itemshud_687_6_23, &direction_itemshud_687_6_24, &direction_itemshud_687_6_25, &direction_itemshud_687_6_26, &direction_itemshud_687_6_27, &direction_itemshud_687_6_28, &direction_itemshud_687_6_29, &direction_itemshud_687_6_30, &direction_itemshud_687_6_31};
static Image* images_itemshud_687_7_0[1];
static Direction direction_itemshud_687_7_0 = {0, 50, 50, 0, -1, images_itemshud_687_7_0, 1};
static Image* images_itemshud_687_7_1[1];
static Direction direction_itemshud_687_7_1 = {1, 50, 50, 0, -1, images_itemshud_687_7_1, 1};
static Image* images_itemshud_687_7_2[1];
static Direction direction_itemshud_687_7_2 = {2, 50, 50, 0, -1, images_itemshud_687_7_2, 1};
static Image* images_itemshud_687_7_3[1];
static Direction direction_itemshud_687_7_3 = {3, 50, 50, 0, -1, images_itemshud_687_7_3, 1};
static Image* images_itemshud_687_7_4[1];
static Direction direction_itemshud_687_7_4 = {4, 50, 50, 0, -1, images_itemshud_687_7_4, 1};
static Image* images_itemshud_687_7_5[1];
static Direction direction_itemshud_687_7_5 = {5, 50, 50, 0, -1, images_itemshud_687_7_5, 1};
static Image* images_itemshud_687_7_6[1];
static Direction direction_itemshud_687_7_6 = {6, 50, 50, 0, -1, images_itemshud_687_7_6, 1};
static Image* images_itemshud_687_7_7[1];
static Direction direction_itemshud_687_7_7 = {7, 50, 50, 0, -1, images_itemshud_687_7_7, 1};
static Image* images_itemshud_687_7_8[1];
static Direction direction_itemshud_687_7_8 = {8, 50, 50, 0, -1, images_itemshud_687_7_8, 1};
static Image* images_itemshud_687_7_9[1];
static Direction direction_itemshud_687_7_9 = {9, 50, 50, 0, -1, images_itemshud_687_7_9, 1};
static Image* images_itemshud_687_7_10[1];
static Direction direction_itemshud_687_7_10 = {10, 50, 50, 0, -1, images_itemshud_687_7_10, 1};
static Image* images_itemshud_687_7_11[1];
static Direction direction_itemshud_687_7_11 = {11, 50, 50, 0, -1, images_itemshud_687_7_11, 1};
static Image* images_itemshud_687_7_12[1];
static Direction direction_itemshud_687_7_12 = {12, 50, 50, 0, -1, images_itemshud_687_7_12, 1};
static Image* images_itemshud_687_7_13[1];
static Direction direction_itemshud_687_7_13 = {13, 50, 50, 0, -1, images_itemshud_687_7_13, 1};
static Image* images_itemshud_687_7_14[1];
static Direction direction_itemshud_687_7_14 = {14, 50, 50, 0, -1, images_itemshud_687_7_14, 1};
static Image* images_itemshud_687_7_15[1];
static Direction direction_itemshud_687_7_15 = {15, 50, 50, 0, -1, images_itemshud_687_7_15, 1};
static Image* images_itemshud_687_7_16[1];
static Direction direction_itemshud_687_7_16 = {16, 50, 50, 0, -1, images_itemshud_687_7_16, 1};
static Image* images_itemshud_687_7_17[1];
static Direction direction_itemshud_687_7_17 = {17, 50, 50, 0, -1, images_itemshud_687_7_17, 1};
static Image* images_itemshud_687_7_18[1];
static Direction direction_itemshud_687_7_18 = {18, 50, 50, 0, -1, images_itemshud_687_7_18, 1};
static Image* images_itemshud_687_7_19[1];
static Direction direction_itemshud_687_7_19 = {19, 50, 50, 0, -1, images_itemshud_687_7_19, 1};
static Image* images_itemshud_687_7_20[1];
static Direction direction_itemshud_687_7_20 = {20, 50, 50, 0, -1, images_itemshud_687_7_20, 1};
static Image* images_itemshud_687_7_21[1];
static Direction direction_itemshud_687_7_21 = {21, 50, 50, 0, -1, images_itemshud_687_7_21, 1};
static Image* images_itemshud_687_7_22[1];
static Direction direction_itemshud_687_7_22 = {22, 50, 50, 0, -1, images_itemshud_687_7_22, 1};
static Image* images_itemshud_687_7_23[1];
static Direction direction_itemshud_687_7_23 = {23, 50, 50, 0, -1, images_itemshud_687_7_23, 1};
static Image* images_itemshud_687_7_24[1];
static Direction direction_itemshud_687_7_24 = {24, 50, 50, 0, -1, images_itemshud_687_7_24, 1};
static Image* images_itemshud_687_7_25[1];
static Direction direction_itemshud_687_7_25 = {25, 50, 50, 0, -1, images_itemshud_687_7_25, 1};
static Image* images_itemshud_687_7_26[1];
static Direction direction_itemshud_687_7_26 = {26, 50, 50, 0, -1, images_itemshud_687_7_26, 1};
static Image* images_itemshud_687_7_27[1];
static Direction direction_itemshud_687_7_27 = {27, 50, 50, 0, -1, images_itemshud_687_7_27, 1};
static Image* images_itemshud_687_7_28[1];
static Direction direction_itemshud_687_7_28 = {28, 50, 50, 0, -1, images_itemshud_687_7_28, 1};
static Image* images_itemshud_687_7_29[1];
static Direction direction_itemshud_687_7_29 = {29, 50, 50, 0, -1, images_itemshud_687_7_29, 1};
static Image* images_itemshud_687_7_30[1];
static Direction direction_itemshud_687_7_30 = {30, 50, 50, 0, -1, images_itemshud_687_7_30, 1};
static Animation anim_itemshud_687_7 = {&direction_itemshud_687_7_0, &direction_itemshud_687_7_1, &direction_itemshud_687_7_2, &direction_itemshud_687_7_3, &direction_itemshud_687_7_4, &direction_itemshud_687_7_5, &direction_itemshud_687_7_6, &direction_itemshud_687_7_7, &direction_itemshud_687_7_8, &direction_itemshud_687_7_9, &direction_itemshud_687_7_10, &direction_itemshud_687_7_11, &direction_itemshud_687_7_12, &direction_itemshud_687_7_13, &direction_itemshud_687_7_14, &direction_itemshud_687_7_15, &direction_itemshud_687_7_16, &direction_itemshud_687_7_17, &direction_itemshud_687_7_18, &direction_itemshud_687_7_19, &direction_itemshud_687_7_20, &direction_itemshud_687_7_21, &direction_itemshud_687_7_22, &direction_itemshud_687_7_23, &direction_itemshud_687_7_24, &direction_itemshud_687_7_25, &direction_itemshud_687_7_26, &direction_itemshud_687_7_27, &direction_itemshud_687_7_28, &direction_itemshud_687_7_29, &direction_itemshud_687_7_30, NULL};
static Animation * anim_array_itemshud_687[8] = {&anim_itemshud_687_0, &anim_itemshud_687_1, &anim_itemshud_687_2, NULL, NULL, &anim_itemshud_687_5, &anim_itemshud_687_6, &anim_itemshud_687_7};
static Animations anim_itemshud_687 = {8, &anim_array_itemshud_687[0]};
static bool anim_itemshud_687_initialized;
class ItemsHUD_687 : public Active
{
public:
    ItemsHUD_687(int x, int y) : Active(x, y, ItemsHUD_687_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Items_HUD", 9);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_itemshud_687;
        if (!anim_itemshud_687_initialized) {
            anim_itemshud_687_initialized = true;
            images_itemshud_687_0_0[0] = get_internal_image(237);
            images_itemshud_687_0_1[0] = get_internal_image(238);
            images_itemshud_687_0_2[0] = get_internal_image(1269);
            images_itemshud_687_0_3[0] = get_internal_image(279);
            images_itemshud_687_0_4[0] = get_internal_image(287);
            images_itemshud_687_0_5[0] = get_internal_image(324);
            images_itemshud_687_0_6[0] = get_internal_image(325);
            images_itemshud_687_0_7[0] = get_internal_image(252);
            images_itemshud_687_0_8[0] = get_internal_image(328);
            images_itemshud_687_0_9[0] = get_internal_image(327);
            images_itemshud_687_0_10[0] = get_internal_image(288);
            images_itemshud_687_0_11[0] = get_internal_image(946);
            images_itemshud_687_0_12[0] = get_internal_image(330);
            images_itemshud_687_0_13[0] = get_internal_image(405);
            images_itemshud_687_0_14[0] = get_internal_image(226);
            images_itemshud_687_0_15[0] = get_internal_image(246);
            images_itemshud_687_0_16[0] = get_internal_image(284);
            images_itemshud_687_0_17[0] = get_internal_image(400);
            images_itemshud_687_0_18[0] = get_internal_image(221);
            images_itemshud_687_0_19[0] = get_internal_image(3);
            images_itemshud_687_0_20[0] = get_internal_image(9);
            images_itemshud_687_0_21[0] = get_internal_image(4);
            images_itemshud_687_0_22[0] = get_internal_image(12);
            images_itemshud_687_0_23[0] = get_internal_image(937);
            images_itemshud_687_0_24[0] = get_internal_image(13);
            images_itemshud_687_0_25[0] = get_internal_image(14);
            images_itemshud_687_0_26[0] = get_internal_image(29);
            images_itemshud_687_0_27[0] = get_internal_image(948);
            images_itemshud_687_0_28[0] = get_internal_image(947);
            images_itemshud_687_0_29[0] = get_internal_image(105);
            images_itemshud_687_0_30[0] = get_internal_image(108);
            images_itemshud_687_0_31[0] = get_internal_image(1079);
            images_itemshud_687_1_0[0] = get_internal_image(109);
            images_itemshud_687_1_1[0] = get_internal_image(110);
            images_itemshud_687_1_2[0] = get_internal_image(117);
            images_itemshud_687_1_3[0] = get_internal_image(122);
            images_itemshud_687_1_4[0] = get_internal_image(192);
            images_itemshud_687_1_5[0] = get_internal_image(10);
            images_itemshud_687_1_6[0] = get_internal_image(397);
            images_itemshud_687_1_7[0] = get_internal_image(398);
            images_itemshud_687_1_8[0] = get_internal_image(401);
            images_itemshud_687_1_9[0] = get_internal_image(116);
            images_itemshud_687_1_10[0] = get_internal_image(403);
            images_itemshud_687_1_11[0] = get_internal_image(1233);
            images_itemshud_687_1_12[0] = get_internal_image(486);
            images_itemshud_687_1_13[0] = get_internal_image(477);
            images_itemshud_687_1_14[0] = get_internal_image(515);
            images_itemshud_687_1_15[0] = get_internal_image(533);
            images_itemshud_687_1_16[0] = get_internal_image(514);
            images_itemshud_687_1_17[0] = get_internal_image(534);
            images_itemshud_687_1_18[0] = get_internal_image(654);
            images_itemshud_687_1_19[0] = get_internal_image(469);
            images_itemshud_687_1_20[0] = get_internal_image(536);
            images_itemshud_687_1_21[0] = get_internal_image(657);
            images_itemshud_687_1_22[0] = get_internal_image(329);
            images_itemshud_687_1_23[0] = get_internal_image(153);
            images_itemshud_687_1_24[0] = get_internal_image(658);
            images_itemshud_687_1_25[0] = get_internal_image(658);
            images_itemshud_687_1_26[0] = get_internal_image(1235);
            images_itemshud_687_1_27[0] = get_internal_image(658);
            images_itemshud_687_1_28[0] = get_internal_image(685);
            images_itemshud_687_1_29[0] = get_internal_image(956);
            images_itemshud_687_1_30[0] = get_internal_image(692);
            images_itemshud_687_1_31[0] = get_internal_image(69);
            images_itemshud_687_2_0[0] = get_internal_image(722);
            images_itemshud_687_2_1[0] = get_internal_image(699);
            images_itemshud_687_2_2[0] = get_internal_image(709);
            images_itemshud_687_2_3[0] = get_internal_image(139);
            images_itemshud_687_2_4[0] = get_internal_image(256);
            images_itemshud_687_2_5[0] = get_internal_image(345);
            images_itemshud_687_2_6[0] = get_internal_image(455);
            images_itemshud_687_2_7[0] = get_internal_image(658);
            images_itemshud_687_2_8[0] = get_internal_image(869);
            images_itemshud_687_2_9[0] = get_internal_image(873);
            images_itemshud_687_2_10[0] = get_internal_image(866);
            images_itemshud_687_2_11[0] = get_internal_image(922);
            images_itemshud_687_2_12[0] = get_internal_image(857);
            images_itemshud_687_2_13[0] = get_internal_image(927);
            images_itemshud_687_2_14[0] = get_internal_image(455);
            images_itemshud_687_2_15[0] = get_internal_image(19);
            images_itemshud_687_2_16[0] = get_internal_image(31);
            images_itemshud_687_2_17[0] = get_internal_image(54);
            images_itemshud_687_2_18[0] = get_internal_image(658);
            images_itemshud_687_2_19[0] = get_internal_image(658);
            images_itemshud_687_2_20[0] = get_internal_image(326);
            images_itemshud_687_2_21[0] = get_internal_image(338);
            images_itemshud_687_2_22[0] = get_internal_image(341);
            images_itemshud_687_2_23[0] = get_internal_image(487);
            images_itemshud_687_2_24[0] = get_internal_image(490);
            images_itemshud_687_2_25[0] = get_internal_image(658);
            images_itemshud_687_2_26[0] = get_internal_image(641);
            images_itemshud_687_2_27[0] = get_internal_image(785);
            images_itemshud_687_2_28[0] = get_internal_image(809);
            images_itemshud_687_2_29[0] = get_internal_image(811);
            images_itemshud_687_2_30[0] = get_internal_image(784);
            images_itemshud_687_2_31[0] = get_internal_image(831);
            images_itemshud_687_5_0[0] = get_internal_image(812);
            images_itemshud_687_5_1[0] = get_internal_image(843);
            images_itemshud_687_5_2[0] = get_internal_image(852);
            images_itemshud_687_5_3[0] = get_internal_image(775);
            images_itemshud_687_5_4[0] = get_internal_image(876);
            images_itemshud_687_5_5[0] = get_internal_image(908);
            images_itemshud_687_5_6[0] = get_internal_image(933);
            images_itemshud_687_5_7[0] = get_internal_image(875);
            images_itemshud_687_5_8[0] = get_internal_image(875);
            images_itemshud_687_5_9[0] = get_internal_image(934);
            images_itemshud_687_5_10[0] = get_internal_image(939);
            images_itemshud_687_5_11[0] = get_internal_image(938);
            images_itemshud_687_5_12[0] = get_internal_image(95);
            images_itemshud_687_5_13[0] = get_internal_image(936);
            images_itemshud_687_5_14[0] = get_internal_image(943);
            images_itemshud_687_5_15[0] = get_internal_image(942);
            images_itemshud_687_5_16[0] = get_internal_image(941);
            images_itemshud_687_5_17[0] = get_internal_image(945);
            images_itemshud_687_5_18[0] = get_internal_image(324);
            images_itemshud_687_5_19[0] = get_internal_image(324);
            images_itemshud_687_5_20[0] = get_internal_image(954);
            images_itemshud_687_5_21[0] = get_internal_image(958);
            images_itemshud_687_5_22[0] = get_internal_image(398);
            images_itemshud_687_5_23[0] = get_internal_image(398);
            images_itemshud_687_5_24[0] = get_internal_image(956);
            images_itemshud_687_5_25[0] = get_internal_image(956);
            images_itemshud_687_5_26[0] = get_internal_image(828);
            images_itemshud_687_5_27[0] = get_internal_image(770);
            images_itemshud_687_5_27[1] = get_internal_image(829);
            images_itemshud_687_5_27[2] = get_internal_image(468);
            images_itemshud_687_5_27[3] = get_internal_image(468);
            images_itemshud_687_5_27[4] = get_internal_image(468);
            images_itemshud_687_5_27[5] = get_internal_image(468);
            images_itemshud_687_5_27[6] = get_internal_image(468);
            images_itemshud_687_5_28[0] = get_internal_image(1003);
            images_itemshud_687_5_29[0] = get_internal_image(1080);
            images_itemshud_687_5_30[0] = get_internal_image(127);
            images_itemshud_687_5_31[0] = get_internal_image(1230);
            images_itemshud_687_6_0[0] = get_internal_image(1242);
            images_itemshud_687_6_1[0] = get_internal_image(1240);
            images_itemshud_687_6_2[0] = get_internal_image(306);
            images_itemshud_687_6_3[0] = get_internal_image(285);
            images_itemshud_687_6_4[0] = get_internal_image(91);
            images_itemshud_687_6_5[0] = get_internal_image(337);
            images_itemshud_687_6_6[0] = get_internal_image(118);
            images_itemshud_687_6_7[0] = get_internal_image(611);
            images_itemshud_687_6_8[0] = get_internal_image(766);
            images_itemshud_687_6_9[0] = get_internal_image(1048);
            images_itemshud_687_6_10[0] = get_internal_image(26);
            images_itemshud_687_6_11[0] = get_internal_image(863);
            images_itemshud_687_6_12[0] = get_internal_image(1427);
            images_itemshud_687_6_13[0] = get_internal_image(1479);
            images_itemshud_687_6_14[0] = get_internal_image(1239);
            images_itemshud_687_6_15[0] = get_internal_image(1231);
            images_itemshud_687_6_16[0] = get_internal_image(734);
            images_itemshud_687_6_17[0] = get_internal_image(28);
            images_itemshud_687_6_18[0] = get_internal_image(305);
            images_itemshud_687_6_19[0] = get_internal_image(365);
            images_itemshud_687_6_20[0] = get_internal_image(402);
            images_itemshud_687_6_21[0] = get_internal_image(27);
            images_itemshud_687_6_22[0] = get_internal_image(606);
            images_itemshud_687_6_23[0] = get_internal_image(914);
            images_itemshud_687_6_24[0] = get_internal_image(640);
            images_itemshud_687_6_25[0] = get_internal_image(1096);
            images_itemshud_687_6_26[0] = get_internal_image(1097);
            images_itemshud_687_6_27[0] = get_internal_image(1094);
            images_itemshud_687_6_28[0] = get_internal_image(1443);
            images_itemshud_687_6_29[0] = get_internal_image(1222);
            images_itemshud_687_6_30[0] = get_internal_image(1511);
            images_itemshud_687_6_31[0] = get_internal_image(1448);
            images_itemshud_687_7_0[0] = get_internal_image(1533);
            images_itemshud_687_7_1[0] = get_internal_image(1537);
            images_itemshud_687_7_2[0] = get_internal_image(1536);
            images_itemshud_687_7_3[0] = get_internal_image(1539);
            images_itemshud_687_7_4[0] = get_internal_image(1550);
            images_itemshud_687_7_5[0] = get_internal_image(1541);
            images_itemshud_687_7_6[0] = get_internal_image(1552);
            images_itemshud_687_7_7[0] = get_internal_image(1551);
            images_itemshud_687_7_8[0] = get_internal_image(1554);
            images_itemshud_687_7_9[0] = get_internal_image(1555);
            images_itemshud_687_7_10[0] = get_internal_image(1556);
            images_itemshud_687_7_11[0] = get_internal_image(1557);
            images_itemshud_687_7_12[0] = get_internal_image(1553);
            images_itemshud_687_7_13[0] = get_internal_image(1558);
            images_itemshud_687_7_14[0] = get_internal_image(1585);
            images_itemshud_687_7_15[0] = get_internal_image(1484);
            images_itemshud_687_7_16[0] = get_internal_image(1571);
            images_itemshud_687_7_17[0] = get_internal_image(1564);
            images_itemshud_687_7_18[0] = get_internal_image(1572);
            images_itemshud_687_7_19[0] = get_internal_image(1573);
            images_itemshud_687_7_20[0] = get_internal_image(1589);
            images_itemshud_687_7_21[0] = get_internal_image(2170);
            images_itemshud_687_7_22[0] = get_internal_image(2165);
            images_itemshud_687_7_23[0] = get_internal_image(679);
            images_itemshud_687_7_24[0] = get_internal_image(2174);
            images_itemshud_687_7_25[0] = get_internal_image(2172);
            images_itemshud_687_7_26[0] = get_internal_image(2177);
            images_itemshud_687_7_27[0] = get_internal_image(2230);
            images_itemshud_687_7_28[0] = get_internal_image(2236);
            images_itemshud_687_7_29[0] = get_internal_image(2246);
            images_itemshud_687_7_30[0] = get_internal_image(2302);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(7, 100);
    }
};
FrameObject * create_itemshud_687(int x, int y)
{
    return new (Active::pool.create()) ItemsHUD_687(x, y);
}
class DChar_688 : public Text
{
public:
    DChar_688(int x, int y) : Text(x, y, DChar_688_type)
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
        add_line(std::string("APPLY BACK", 10));
        create_alterables();
    }
};
FrameObject * create_dchar_688(int x, int y)
{
    return new (Text::pool.create()) DChar_688(x, y);
}
class DChar2_690 : public Text
{
public:
    DChar2_690(int x, int y) : Text(x, y, DChar2_690_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("D_Char 2", 8);
#endif
        flags &= ~SCROLL;
        width = 220;
        height = 13;
        blend_color = Color(8, 0, 0);
        bold = true;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, FTTextureFont::BOLD);
        alignment = ALIGN_HCENTER | ALIGN_TOP;
        add_line(std::string("QUIT JOB", 8));
        create_alterables();
    }
};
FrameObject * create_dchar2_690(int x, int y)
{
    return new (Text::pool.create()) DChar2_690(x, y);
}
static Image* images_containercanteen_691_0_0[1];
static Direction direction_containercanteen_691_0_0 = {0, 50, 50, 0, 1, images_containercanteen_691_0_0, 1};
static Animation anim_containercanteen_691_0 = {&direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, NULL, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0, &direction_containercanteen_691_0_0};
static Animation * anim_array_containercanteen_691[1] = {&anim_containercanteen_691_0};
static Animations anim_containercanteen_691 = {1, &anim_array_containercanteen_691[0]};
static bool anim_containercanteen_691_initialized;
class ContainerCanteen_691 : public Active
{
public:
    ContainerCanteen_691(int x, int y) : Active(x, y, ContainerCanteen_691_type)
    {
        // qualifiers: 15, 26, 63
#ifndef NDEBUG
        name = std::string("Container - Canteen", 19);
#endif
        this->animations = &anim_containercanteen_691;
        if (!anim_containercanteen_691_initialized) {
            anim_containercanteen_691_initialized = true;
            images_containercanteen_691_0_0[0] = get_internal_image(892);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->strings.set(0, str_utensils_15);
    }
};
FrameObject * create_containercanteen_691(int x, int y)
{
    return new (Active::pool.create()) ContainerCanteen_691(x, y);
}
class ItemsDB_693 : public INI
{
public:
    ItemsDB_693(int x, int y) : INI(x, y, ItemsDB_693_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Items DB", 8);
#endif
        auto_save = true;
        is_global = false;
        data = new SectionMap();
        use_compression = true;
        create_alterables();
    }
};
FrameObject * create_itemsdb_693(int x, int y)
{
    return new (INI::pool.create()) ItemsDB_693(x, y);
}
static Image* images_camera_694_0_18[1];
static Direction direction_camera_694_0_18 = {18, 50, 50, 0, -1, images_camera_694_0_18, 1};
static Image* images_camera_694_0_21[1];
static Direction direction_camera_694_0_21 = {21, 50, 50, 0, -1, images_camera_694_0_21, 1};
static Image* images_camera_694_0_24[1];
static Direction direction_camera_694_0_24 = {24, 2, 2, 0, -1, images_camera_694_0_24, 1};
static Image* images_camera_694_0_27[1];
static Direction direction_camera_694_0_27 = {27, 50, 50, 0, -1, images_camera_694_0_27, 1};
static Image* images_camera_694_0_30[1];
static Direction direction_camera_694_0_30 = {30, 50, 50, 0, -1, images_camera_694_0_30, 1};
static Animation anim_camera_694_0 = {&direction_camera_694_0_30, &direction_camera_694_0_30, &direction_camera_694_0_30, &direction_camera_694_0_30, &direction_camera_694_0_30, &direction_camera_694_0_30, &direction_camera_694_0_30, &direction_camera_694_0_30, NULL, &direction_camera_694_0_18, &direction_camera_694_0_18, &direction_camera_694_0_18, &direction_camera_694_0_18, &direction_camera_694_0_18, &direction_camera_694_0_18, &direction_camera_694_0_18, &direction_camera_694_0_18, &direction_camera_694_0_18, &direction_camera_694_0_18, &direction_camera_694_0_18, &direction_camera_694_0_21, &direction_camera_694_0_21, &direction_camera_694_0_21, &direction_camera_694_0_24, &direction_camera_694_0_24, &direction_camera_694_0_24, &direction_camera_694_0_27, &direction_camera_694_0_27, &direction_camera_694_0_27, &direction_camera_694_0_30, &direction_camera_694_0_30, &direction_camera_694_0_30};
static Image* images_camera_694_2_18[2];
static Direction direction_camera_694_2_18 = {18, 5, 5, 0, -1, images_camera_694_2_18, 2};
static Image* images_camera_694_2_21[2];
static Direction direction_camera_694_2_21 = {21, 5, 5, 0, -1, images_camera_694_2_21, 2};
static Image* images_camera_694_2_24[2];
static Direction direction_camera_694_2_24 = {24, 5, 5, 0, -1, images_camera_694_2_24, 2};
static Image* images_camera_694_2_27[2];
static Direction direction_camera_694_2_27 = {27, 5, 5, 0, -1, images_camera_694_2_27, 2};
static Image* images_camera_694_2_30[2];
static Direction direction_camera_694_2_30 = {30, 5, 5, 0, -1, images_camera_694_2_30, 2};
static Animation anim_camera_694_2 = {&direction_camera_694_2_30, &direction_camera_694_2_30, &direction_camera_694_2_30, &direction_camera_694_2_30, &direction_camera_694_2_30, &direction_camera_694_2_30, &direction_camera_694_2_30, &direction_camera_694_2_30, NULL, &direction_camera_694_2_18, &direction_camera_694_2_18, &direction_camera_694_2_18, &direction_camera_694_2_18, &direction_camera_694_2_18, &direction_camera_694_2_18, &direction_camera_694_2_18, &direction_camera_694_2_18, &direction_camera_694_2_18, &direction_camera_694_2_18, &direction_camera_694_2_18, &direction_camera_694_2_21, &direction_camera_694_2_21, &direction_camera_694_2_21, &direction_camera_694_2_24, &direction_camera_694_2_24, &direction_camera_694_2_24, &direction_camera_694_2_27, &direction_camera_694_2_27, &direction_camera_694_2_27, &direction_camera_694_2_30, &direction_camera_694_2_30, &direction_camera_694_2_30};
static Image* images_camera_694_5_18[1];
static Direction direction_camera_694_5_18 = {18, 50, 50, 0, -1, images_camera_694_5_18, 1};
static Image* images_camera_694_5_21[1];
static Direction direction_camera_694_5_21 = {21, 50, 50, 0, -1, images_camera_694_5_21, 1};
static Image* images_camera_694_5_24[1];
static Direction direction_camera_694_5_24 = {24, 2, 2, 0, -1, images_camera_694_5_24, 1};
static Image* images_camera_694_5_27[1];
static Direction direction_camera_694_5_27 = {27, 50, 50, 0, -1, images_camera_694_5_27, 1};
static Image* images_camera_694_5_30[1];
static Direction direction_camera_694_5_30 = {30, 50, 50, 0, -1, images_camera_694_5_30, 1};
static Animation anim_camera_694_5 = {&direction_camera_694_5_30, &direction_camera_694_5_30, &direction_camera_694_5_30, &direction_camera_694_5_30, &direction_camera_694_5_30, &direction_camera_694_5_30, &direction_camera_694_5_30, &direction_camera_694_5_30, NULL, &direction_camera_694_5_18, &direction_camera_694_5_18, &direction_camera_694_5_18, &direction_camera_694_5_18, &direction_camera_694_5_18, &direction_camera_694_5_18, &direction_camera_694_5_18, &direction_camera_694_5_18, &direction_camera_694_5_18, &direction_camera_694_5_18, &direction_camera_694_5_18, &direction_camera_694_5_21, &direction_camera_694_5_21, &direction_camera_694_5_21, &direction_camera_694_5_24, &direction_camera_694_5_24, &direction_camera_694_5_24, &direction_camera_694_5_27, &direction_camera_694_5_27, &direction_camera_694_5_27, &direction_camera_694_5_30, &direction_camera_694_5_30, &direction_camera_694_5_30};
static Animation * anim_array_camera_694[6] = {&anim_camera_694_0, NULL, &anim_camera_694_2, NULL, NULL, &anim_camera_694_5};
static Animations anim_camera_694 = {6, &anim_array_camera_694[0]};
static bool anim_camera_694_initialized;
class CAMERA_694 : public Active
{
public:
    CAMERA_694(int x, int y) : Active(x, y, CAMERA_694_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("CAMERA", 6);
#endif
        this->animations = &anim_camera_694;
        if (!anim_camera_694_initialized) {
            anim_camera_694_initialized = true;
            images_camera_694_0_18[0] = get_internal_image(816);
            images_camera_694_0_21[0] = get_internal_image(818);
            images_camera_694_0_24[0] = get_internal_image(819);
            images_camera_694_0_27[0] = get_internal_image(854);
            images_camera_694_0_30[0] = get_internal_image(891);
            images_camera_694_2_18[0] = get_internal_image(816);
            images_camera_694_2_18[1] = get_internal_image(1038);
            images_camera_694_2_21[0] = get_internal_image(818);
            images_camera_694_2_21[1] = get_internal_image(1053);
            images_camera_694_2_24[0] = get_internal_image(819);
            images_camera_694_2_24[1] = get_internal_image(1055);
            images_camera_694_2_27[0] = get_internal_image(854);
            images_camera_694_2_27[1] = get_internal_image(1056);
            images_camera_694_2_30[0] = get_internal_image(891);
            images_camera_694_2_30[1] = get_internal_image(1057);
            images_camera_694_5_18[0] = get_internal_image(1075);
            images_camera_694_5_21[0] = get_internal_image(1051);
            images_camera_694_5_24[0] = get_internal_image(1076);
            images_camera_694_5_27[0] = get_internal_image(1077);
            images_camera_694_5_30[0] = get_internal_image(1078);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_camera_694(int x, int y)
{
    return new (Active::pool.create()) CAMERA_694(x, y);
}
static Image* images_taskbox_695_0_0[1];
static Direction direction_taskbox_695_0_0 = {0, 50, 50, 0, -1, images_taskbox_695_0_0, 1};
static Image* images_taskbox_695_0_16[1];
static Direction direction_taskbox_695_0_16 = {16, 10, 10, 0, -1, images_taskbox_695_0_16, 1};
static Image* images_taskbox_695_0_24[1];
static Direction direction_taskbox_695_0_24 = {24, 50, 50, 0, -1, images_taskbox_695_0_24, 1};
static Animation anim_taskbox_695_0 = {&direction_taskbox_695_0_0, &direction_taskbox_695_0_0, &direction_taskbox_695_0_0, &direction_taskbox_695_0_0, &direction_taskbox_695_0_0, &direction_taskbox_695_0_0, &direction_taskbox_695_0_0, &direction_taskbox_695_0_0, NULL, &direction_taskbox_695_0_16, &direction_taskbox_695_0_16, &direction_taskbox_695_0_16, &direction_taskbox_695_0_16, &direction_taskbox_695_0_16, &direction_taskbox_695_0_16, &direction_taskbox_695_0_16, &direction_taskbox_695_0_16, &direction_taskbox_695_0_16, &direction_taskbox_695_0_16, &direction_taskbox_695_0_16, NULL, &direction_taskbox_695_0_24, &direction_taskbox_695_0_24, &direction_taskbox_695_0_24, &direction_taskbox_695_0_24, &direction_taskbox_695_0_24, &direction_taskbox_695_0_24, &direction_taskbox_695_0_24, NULL, &direction_taskbox_695_0_0, &direction_taskbox_695_0_0, &direction_taskbox_695_0_0};
static Image* images_taskbox_695_1_0[3];
static Direction direction_taskbox_695_1_0 = {0, 15, 15, 2, -1, images_taskbox_695_1_0, 3};
static Animation anim_taskbox_695_1 = {&direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, NULL, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0, &direction_taskbox_695_1_0};
static Animation * anim_array_taskbox_695[2] = {&anim_taskbox_695_0, &anim_taskbox_695_1};
static Animations anim_taskbox_695 = {2, &anim_array_taskbox_695[0]};
static bool anim_taskbox_695_initialized;
class Taskbox_695 : public Active
{
public:
    Taskbox_695(int x, int y) : Active(x, y, Taskbox_695_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Taskbox", 7);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_taskbox_695;
        if (!anim_taskbox_695_initialized) {
            anim_taskbox_695_initialized = true;
            images_taskbox_695_0_0[0] = get_internal_image(996);
            images_taskbox_695_0_16[0] = get_internal_image(996);
            images_taskbox_695_0_24[0] = get_internal_image(1452);
            images_taskbox_695_1_0[0] = get_internal_image(806);
            images_taskbox_695_1_0[1] = get_internal_image(283);
            images_taskbox_695_1_0[2] = get_internal_image(236);
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
FrameObject * create_taskbox_695(int x, int y)
{
    return new (Active::pool.create()) Taskbox_695(x, y);
}
static Image* images_active5_696_0_0[1];
static Direction direction_active5_696_0_0 = {0, 50, 50, 0, -1, images_active5_696_0_0, 1};
static Animation anim_active5_696_0 = {&direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, NULL, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0, &direction_active5_696_0_0};
static Animation * anim_array_active5_696[1] = {&anim_active5_696_0};
static Animations anim_active5_696 = {1, &anim_array_active5_696[0]};
static bool anim_active5_696_initialized;
class Active5_696 : public Active
{
public:
    Active5_696(int x, int y) : Active(x, y, Active5_696_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Active 5", 8);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_active5_696;
        if (!anim_active5_696_initialized) {
            anim_active5_696_initialized = true;
            images_active5_696_0_0[0] = get_internal_image(2367);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_active5_696(int x, int y)
{
    return new (Active::pool.create()) Active5_696(x, y);
}
static Image* images_dirt_697_0_0[1];
static Direction direction_dirt_697_0_0 = {0, 50, 50, 0, 1, images_dirt_697_0_0, 1};
static Animation anim_dirt_697_0 = {&direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, NULL, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0, &direction_dirt_697_0_0};
static Image* images_dirt_697_1_0[4];
static Direction direction_dirt_697_1_0 = {0, 5, 5, 0, -1, images_dirt_697_1_0, 4};
static Animation anim_dirt_697_1 = {&direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, NULL, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0, &direction_dirt_697_1_0};
static Animation * anim_array_dirt_697[2] = {&anim_dirt_697_0, &anim_dirt_697_1};
static Animations anim_dirt_697 = {2, &anim_array_dirt_697[0]};
static bool anim_dirt_697_initialized;
class Dirt_697 : public Active
{
public:
    Dirt_697(int x, int y) : Active(x, y, Dirt_697_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Dirt", 4);
#endif
        this->animations = &anim_dirt_697;
        if (!anim_dirt_697_initialized) {
            anim_dirt_697_initialized = true;
            images_dirt_697_0_0[0] = get_internal_image(78);
            images_dirt_697_1_0[0] = get_internal_image(774);
            images_dirt_697_1_0[1] = get_internal_image(603);
            images_dirt_697_1_0[2] = get_internal_image(810);
            images_dirt_697_1_0[3] = get_internal_image(603);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 155);
        create_alterables();
    }
};
FrameObject * create_dirt_697(int x, int y)
{
    return new (Active::pool.create()) Dirt_697(x, y);
}
static Image* images_buttons_699_2_0[1];
static Direction direction_buttons_699_2_0 = {0, 50, 50, 0, -1, images_buttons_699_2_0, 1};
static Image* images_buttons_699_2_16[1];
static Direction direction_buttons_699_2_16 = {16, 50, 50, 0, -1, images_buttons_699_2_16, 1};
static Animation anim_buttons_699_2 = {&direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0, NULL, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, &direction_buttons_699_2_16, NULL, &direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0, &direction_buttons_699_2_0};
static Image* images_buttons_699_5_0[1];
static Direction direction_buttons_699_5_0 = {0, 50, 50, 0, -1, images_buttons_699_5_0, 1};
static Image* images_buttons_699_5_16[1];
static Direction direction_buttons_699_5_16 = {16, 50, 50, 0, -1, images_buttons_699_5_16, 1};
static Animation anim_buttons_699_5 = {&direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0, NULL, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, &direction_buttons_699_5_16, NULL, &direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0, &direction_buttons_699_5_0};
static Image* images_buttons_699_7_0[1];
static Direction direction_buttons_699_7_0 = {0, 50, 50, 0, -1, images_buttons_699_7_0, 1};
static Image* images_buttons_699_7_16[1];
static Direction direction_buttons_699_7_16 = {16, 50, 50, 0, -1, images_buttons_699_7_16, 1};
static Animation anim_buttons_699_7 = {&direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0, NULL, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, &direction_buttons_699_7_16, NULL, &direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0, &direction_buttons_699_7_0};
static Image* images_buttons_699_8_0[1];
static Direction direction_buttons_699_8_0 = {0, 50, 50, 0, -1, images_buttons_699_8_0, 1};
static Image* images_buttons_699_8_16[1];
static Direction direction_buttons_699_8_16 = {16, 50, 50, 0, -1, images_buttons_699_8_16, 1};
static Animation anim_buttons_699_8 = {&direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0, NULL, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, &direction_buttons_699_8_16, NULL, &direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0, &direction_buttons_699_8_0};
static Image* images_buttons_699_12_0[1];
static Direction direction_buttons_699_12_0 = {0, 50, 50, 0, -1, images_buttons_699_12_0, 1};
static Image* images_buttons_699_12_16[1];
static Direction direction_buttons_699_12_16 = {16, 50, 50, 0, -1, images_buttons_699_12_16, 1};
static Animation anim_buttons_699_12 = {&direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0, NULL, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, &direction_buttons_699_12_16, NULL, &direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0, &direction_buttons_699_12_0};
static Image* images_buttons_699_14_0[1];
static Direction direction_buttons_699_14_0 = {0, 50, 50, 0, -1, images_buttons_699_14_0, 1};
static Image* images_buttons_699_14_16[1];
static Direction direction_buttons_699_14_16 = {16, 50, 50, 0, -1, images_buttons_699_14_16, 1};
static Animation anim_buttons_699_14 = {&direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0, NULL, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, &direction_buttons_699_14_16, NULL, &direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0, &direction_buttons_699_14_0};
static Image* images_buttons_699_16_0[1];
static Direction direction_buttons_699_16_0 = {0, 50, 50, 0, -1, images_buttons_699_16_0, 1};
static Animation anim_buttons_699_16 = {&direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, NULL, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0, &direction_buttons_699_16_0};
static Image* images_buttons_699_17_0[1];
static Direction direction_buttons_699_17_0 = {0, 50, 50, 0, -1, images_buttons_699_17_0, 1};
static Animation anim_buttons_699_17 = {&direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, NULL, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0, &direction_buttons_699_17_0};
static Image* images_buttons_699_18_0[1];
static Direction direction_buttons_699_18_0 = {0, 50, 50, 0, -1, images_buttons_699_18_0, 1};
static Image* images_buttons_699_18_16[1];
static Direction direction_buttons_699_18_16 = {16, 50, 50, 0, -1, images_buttons_699_18_16, 1};
static Animation anim_buttons_699_18 = {&direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0, NULL, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, &direction_buttons_699_18_16, NULL, &direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0, &direction_buttons_699_18_0};
static Image* images_buttons_699_19_0[1];
static Direction direction_buttons_699_19_0 = {0, 50, 50, 0, -1, images_buttons_699_19_0, 1};
static Animation anim_buttons_699_19 = {&direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, NULL, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0, &direction_buttons_699_19_0};
static Image* images_buttons_699_20_0[1];
static Direction direction_buttons_699_20_0 = {0, 50, 50, 0, -1, images_buttons_699_20_0, 1};
static Image* images_buttons_699_20_16[1];
static Direction direction_buttons_699_20_16 = {16, 50, 50, 0, -1, images_buttons_699_20_16, 1};
static Animation anim_buttons_699_20 = {&direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0, NULL, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, &direction_buttons_699_20_16, NULL, &direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0, &direction_buttons_699_20_0};
static Image* images_buttons_699_21_0[1];
static Direction direction_buttons_699_21_0 = {0, 50, 50, 0, -1, images_buttons_699_21_0, 1};
static Image* images_buttons_699_21_16[1];
static Direction direction_buttons_699_21_16 = {16, 50, 50, 0, -1, images_buttons_699_21_16, 1};
static Animation anim_buttons_699_21 = {&direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0, NULL, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, &direction_buttons_699_21_16, NULL, &direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0, &direction_buttons_699_21_0};
static Image* images_buttons_699_22_0[1];
static Direction direction_buttons_699_22_0 = {0, 50, 50, 0, -1, images_buttons_699_22_0, 1};
static Image* images_buttons_699_22_16[1];
static Direction direction_buttons_699_22_16 = {16, 50, 50, 0, -1, images_buttons_699_22_16, 1};
static Animation anim_buttons_699_22 = {&direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0, NULL, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, &direction_buttons_699_22_16, NULL, &direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0, &direction_buttons_699_22_0};
static Image* images_buttons_699_23_0[1];
static Direction direction_buttons_699_23_0 = {0, 50, 50, 0, -1, images_buttons_699_23_0, 1};
static Image* images_buttons_699_23_16[1];
static Direction direction_buttons_699_23_16 = {16, 50, 50, 0, -1, images_buttons_699_23_16, 1};
static Animation anim_buttons_699_23 = {&direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0, NULL, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, &direction_buttons_699_23_16, NULL, &direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0, &direction_buttons_699_23_0};
static Image* images_buttons_699_24_0[1];
static Direction direction_buttons_699_24_0 = {0, 50, 50, 0, -1, images_buttons_699_24_0, 1};
static Image* images_buttons_699_24_16[1];
static Direction direction_buttons_699_24_16 = {16, 50, 50, 0, -1, images_buttons_699_24_16, 1};
static Animation anim_buttons_699_24 = {&direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0, NULL, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, &direction_buttons_699_24_16, NULL, &direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0, &direction_buttons_699_24_0};
static Image* images_buttons_699_25_0[1];
static Direction direction_buttons_699_25_0 = {0, 50, 50, 0, -1, images_buttons_699_25_0, 1};
static Image* images_buttons_699_25_16[1];
static Direction direction_buttons_699_25_16 = {16, 50, 50, 0, -1, images_buttons_699_25_16, 1};
static Animation anim_buttons_699_25 = {&direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0, NULL, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, &direction_buttons_699_25_16, NULL, &direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0, &direction_buttons_699_25_0};
static Image* images_buttons_699_26_0[1];
static Direction direction_buttons_699_26_0 = {0, 50, 50, 0, -1, images_buttons_699_26_0, 1};
static Image* images_buttons_699_26_16[1];
static Direction direction_buttons_699_26_16 = {16, 50, 50, 0, -1, images_buttons_699_26_16, 1};
static Animation anim_buttons_699_26 = {&direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0, NULL, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, &direction_buttons_699_26_16, NULL, &direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0, &direction_buttons_699_26_0};
static Image* images_buttons_699_27_0[1];
static Direction direction_buttons_699_27_0 = {0, 50, 50, 0, -1, images_buttons_699_27_0, 1};
static Image* images_buttons_699_27_16[1];
static Direction direction_buttons_699_27_16 = {16, 50, 50, 0, -1, images_buttons_699_27_16, 1};
static Animation anim_buttons_699_27 = {&direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0, NULL, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, &direction_buttons_699_27_16, NULL, &direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0, &direction_buttons_699_27_0};
static Image* images_buttons_699_28_0[1];
static Direction direction_buttons_699_28_0 = {0, 50, 50, 0, -1, images_buttons_699_28_0, 1};
static Image* images_buttons_699_28_16[1];
static Direction direction_buttons_699_28_16 = {16, 50, 50, 0, -1, images_buttons_699_28_16, 1};
static Animation anim_buttons_699_28 = {&direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0, NULL, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, &direction_buttons_699_28_16, NULL, &direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0, &direction_buttons_699_28_0};
static Image* images_buttons_699_29_0[1];
static Direction direction_buttons_699_29_0 = {0, 50, 50, 0, -1, images_buttons_699_29_0, 1};
static Image* images_buttons_699_29_16[1];
static Direction direction_buttons_699_29_16 = {16, 50, 50, 0, -1, images_buttons_699_29_16, 1};
static Animation anim_buttons_699_29 = {&direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0, NULL, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, &direction_buttons_699_29_16, NULL, &direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0, &direction_buttons_699_29_0};
static Image* images_buttons_699_30_0[1];
static Direction direction_buttons_699_30_0 = {0, 50, 50, 0, -1, images_buttons_699_30_0, 1};
static Image* images_buttons_699_30_16[1];
static Direction direction_buttons_699_30_16 = {16, 50, 50, 0, -1, images_buttons_699_30_16, 1};
static Animation anim_buttons_699_30 = {&direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0, NULL, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, &direction_buttons_699_30_16, NULL, &direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0, &direction_buttons_699_30_0};
static Image* images_buttons_699_31_0[1];
static Direction direction_buttons_699_31_0 = {0, 50, 50, 0, -1, images_buttons_699_31_0, 1};
static Image* images_buttons_699_31_16[1];
static Direction direction_buttons_699_31_16 = {16, 50, 50, 0, -1, images_buttons_699_31_16, 1};
static Animation anim_buttons_699_31 = {&direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0, NULL, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, &direction_buttons_699_31_16, NULL, &direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0, &direction_buttons_699_31_0};
static Image* images_buttons_699_32_0[1];
static Direction direction_buttons_699_32_0 = {0, 50, 50, 0, -1, images_buttons_699_32_0, 1};
static Image* images_buttons_699_32_16[1];
static Direction direction_buttons_699_32_16 = {16, 50, 50, 0, -1, images_buttons_699_32_16, 1};
static Animation anim_buttons_699_32 = {&direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0, NULL, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, &direction_buttons_699_32_16, NULL, &direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0, &direction_buttons_699_32_0};
static Image* images_buttons_699_33_0[1];
static Direction direction_buttons_699_33_0 = {0, 50, 50, 0, -1, images_buttons_699_33_0, 1};
static Image* images_buttons_699_33_16[1];
static Direction direction_buttons_699_33_16 = {16, 50, 50, 0, -1, images_buttons_699_33_16, 1};
static Animation anim_buttons_699_33 = {&direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0, NULL, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, &direction_buttons_699_33_16, NULL, &direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0, &direction_buttons_699_33_0};
static Image* images_buttons_699_34_0[1];
static Direction direction_buttons_699_34_0 = {0, 50, 50, 0, -1, images_buttons_699_34_0, 1};
static Image* images_buttons_699_34_16[1];
static Direction direction_buttons_699_34_16 = {16, 50, 50, 0, -1, images_buttons_699_34_16, 1};
static Animation anim_buttons_699_34 = {&direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0, NULL, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, &direction_buttons_699_34_16, NULL, &direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0, &direction_buttons_699_34_0};
static Image* images_buttons_699_35_0[1];
static Direction direction_buttons_699_35_0 = {0, 50, 50, 0, -1, images_buttons_699_35_0, 1};
static Image* images_buttons_699_35_16[1];
static Direction direction_buttons_699_35_16 = {16, 50, 50, 0, -1, images_buttons_699_35_16, 1};
static Animation anim_buttons_699_35 = {&direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0, NULL, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, &direction_buttons_699_35_16, NULL, &direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0, &direction_buttons_699_35_0};
static Image* images_buttons_699_36_0[1];
static Direction direction_buttons_699_36_0 = {0, 50, 50, 0, -1, images_buttons_699_36_0, 1};
static Image* images_buttons_699_36_16[1];
static Direction direction_buttons_699_36_16 = {16, 50, 50, 0, -1, images_buttons_699_36_16, 1};
static Animation anim_buttons_699_36 = {&direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0, NULL, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, &direction_buttons_699_36_16, NULL, &direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0, &direction_buttons_699_36_0};
static Image* images_buttons_699_37_0[1];
static Direction direction_buttons_699_37_0 = {0, 50, 50, 0, -1, images_buttons_699_37_0, 1};
static Image* images_buttons_699_37_16[1];
static Direction direction_buttons_699_37_16 = {16, 50, 50, 0, -1, images_buttons_699_37_16, 1};
static Animation anim_buttons_699_37 = {&direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0, NULL, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, &direction_buttons_699_37_16, NULL, &direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0, &direction_buttons_699_37_0};
static Image* images_buttons_699_38_0[1];
static Direction direction_buttons_699_38_0 = {0, 50, 50, 0, -1, images_buttons_699_38_0, 1};
static Image* images_buttons_699_38_16[1];
static Direction direction_buttons_699_38_16 = {16, 50, 50, 0, -1, images_buttons_699_38_16, 1};
static Animation anim_buttons_699_38 = {&direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0, NULL, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, &direction_buttons_699_38_16, NULL, &direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0, &direction_buttons_699_38_0};
static Image* images_buttons_699_39_0[1];
static Direction direction_buttons_699_39_0 = {0, 50, 50, 0, -1, images_buttons_699_39_0, 1};
static Image* images_buttons_699_39_16[1];
static Direction direction_buttons_699_39_16 = {16, 50, 50, 0, -1, images_buttons_699_39_16, 1};
static Animation anim_buttons_699_39 = {&direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0, NULL, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, &direction_buttons_699_39_16, NULL, &direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0, &direction_buttons_699_39_0};
static Image* images_buttons_699_40_0[1];
static Direction direction_buttons_699_40_0 = {0, 50, 50, 0, -1, images_buttons_699_40_0, 1};
static Image* images_buttons_699_40_16[1];
static Direction direction_buttons_699_40_16 = {16, 50, 50, 0, -1, images_buttons_699_40_16, 1};
static Animation anim_buttons_699_40 = {&direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0, NULL, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, &direction_buttons_699_40_16, NULL, &direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0, &direction_buttons_699_40_0};
static Image* images_buttons_699_41_0[1];
static Direction direction_buttons_699_41_0 = {0, 50, 50, 0, -1, images_buttons_699_41_0, 1};
static Image* images_buttons_699_41_16[1];
static Direction direction_buttons_699_41_16 = {16, 50, 50, 0, -1, images_buttons_699_41_16, 1};
static Animation anim_buttons_699_41 = {&direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0, NULL, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, &direction_buttons_699_41_16, NULL, &direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0, &direction_buttons_699_41_0};
static Image* images_buttons_699_42_0[1];
static Direction direction_buttons_699_42_0 = {0, 50, 50, 0, -1, images_buttons_699_42_0, 1};
static Image* images_buttons_699_42_16[1];
static Direction direction_buttons_699_42_16 = {16, 50, 50, 0, -1, images_buttons_699_42_16, 1};
static Animation anim_buttons_699_42 = {&direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0, NULL, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, &direction_buttons_699_42_16, NULL, &direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0, &direction_buttons_699_42_0};
static Image* images_buttons_699_43_0[1];
static Direction direction_buttons_699_43_0 = {0, 50, 50, 0, -1, images_buttons_699_43_0, 1};
static Image* images_buttons_699_43_16[1];
static Direction direction_buttons_699_43_16 = {16, 50, 50, 0, -1, images_buttons_699_43_16, 1};
static Animation anim_buttons_699_43 = {&direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0, NULL, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, &direction_buttons_699_43_16, NULL, &direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0, &direction_buttons_699_43_0};
static Image* images_buttons_699_44_0[1];
static Direction direction_buttons_699_44_0 = {0, 50, 50, 0, -1, images_buttons_699_44_0, 1};
static Image* images_buttons_699_44_16[1];
static Direction direction_buttons_699_44_16 = {16, 50, 50, 0, -1, images_buttons_699_44_16, 1};
static Animation anim_buttons_699_44 = {&direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0, NULL, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, &direction_buttons_699_44_16, NULL, &direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0, &direction_buttons_699_44_0};
static Animation * anim_array_buttons_699[45] = {NULL, NULL, &anim_buttons_699_2, NULL, NULL, &anim_buttons_699_5, NULL, &anim_buttons_699_7, &anim_buttons_699_8, NULL, NULL, NULL, &anim_buttons_699_12, NULL, &anim_buttons_699_14, NULL, &anim_buttons_699_16, &anim_buttons_699_17, &anim_buttons_699_18, &anim_buttons_699_19, &anim_buttons_699_20, &anim_buttons_699_21, &anim_buttons_699_22, &anim_buttons_699_23, &anim_buttons_699_24, &anim_buttons_699_25, &anim_buttons_699_26, &anim_buttons_699_27, &anim_buttons_699_28, &anim_buttons_699_29, &anim_buttons_699_30, &anim_buttons_699_31, &anim_buttons_699_32, &anim_buttons_699_33, &anim_buttons_699_34, &anim_buttons_699_35, &anim_buttons_699_36, &anim_buttons_699_37, &anim_buttons_699_38, &anim_buttons_699_39, &anim_buttons_699_40, &anim_buttons_699_41, &anim_buttons_699_42, &anim_buttons_699_43, &anim_buttons_699_44};
static Animations anim_buttons_699 = {45, &anim_array_buttons_699[0]};
static bool anim_buttons_699_initialized;
class Buttons_699 : public Active
{
public:
    Buttons_699(int x, int y) : Active(x, y, Buttons_699_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Buttons", 7);
#endif
        this->animations = &anim_buttons_699;
        if (!anim_buttons_699_initialized) {
            anim_buttons_699_initialized = true;
            images_buttons_699_2_0[0] = get_internal_image(62);
            images_buttons_699_2_16[0] = get_internal_image(56);
            images_buttons_699_5_0[0] = get_internal_image(81);
            images_buttons_699_5_16[0] = get_internal_image(86);
            images_buttons_699_7_0[0] = get_internal_image(1010);
            images_buttons_699_7_16[0] = get_internal_image(1458);
            images_buttons_699_8_0[0] = get_internal_image(340);
            images_buttons_699_8_16[0] = get_internal_image(334);
            images_buttons_699_12_0[0] = get_internal_image(247);
            images_buttons_699_12_16[0] = get_internal_image(1341);
            images_buttons_699_14_0[0] = get_internal_image(40);
            images_buttons_699_14_16[0] = get_internal_image(642);
            images_buttons_699_16_0[0] = get_internal_image(662);
            images_buttons_699_17_0[0] = get_internal_image(663);
            images_buttons_699_18_0[0] = get_internal_image(966);
            images_buttons_699_18_16[0] = get_internal_image(121);
            images_buttons_699_19_0[0] = get_internal_image(664);
            images_buttons_699_20_0[0] = get_internal_image(187);
            images_buttons_699_20_16[0] = get_internal_image(196);
            images_buttons_699_21_0[0] = get_internal_image(198);
            images_buttons_699_21_16[0] = get_internal_image(222);
            images_buttons_699_22_0[0] = get_internal_image(2364);
            images_buttons_699_22_16[0] = get_internal_image(2366);
            images_buttons_699_23_0[0] = get_internal_image(821);
            images_buttons_699_23_16[0] = get_internal_image(827);
            images_buttons_699_24_0[0] = get_internal_image(820);
            images_buttons_699_24_16[0] = get_internal_image(825);
            images_buttons_699_25_0[0] = get_internal_image(146);
            images_buttons_699_25_16[0] = get_internal_image(183);
            images_buttons_699_26_0[0] = get_internal_image(146);
            images_buttons_699_26_16[0] = get_internal_image(183);
            images_buttons_699_27_0[0] = get_internal_image(146);
            images_buttons_699_27_16[0] = get_internal_image(183);
            images_buttons_699_28_0[0] = get_internal_image(185);
            images_buttons_699_28_16[0] = get_internal_image(188);
            images_buttons_699_29_0[0] = get_internal_image(37);
            images_buttons_699_29_16[0] = get_internal_image(77);
            images_buttons_699_30_0[0] = get_internal_image(1338);
            images_buttons_699_30_16[0] = get_internal_image(135);
            images_buttons_699_31_0[0] = get_internal_image(1338);
            images_buttons_699_31_16[0] = get_internal_image(135);
            images_buttons_699_32_0[0] = get_internal_image(58);
            images_buttons_699_32_16[0] = get_internal_image(970);
            images_buttons_699_33_0[0] = get_internal_image(2347);
            images_buttons_699_33_16[0] = get_internal_image(2350);
            images_buttons_699_34_0[0] = get_internal_image(2347);
            images_buttons_699_34_16[0] = get_internal_image(2350);
            images_buttons_699_35_0[0] = get_internal_image(2347);
            images_buttons_699_35_16[0] = get_internal_image(2350);
            images_buttons_699_36_0[0] = get_internal_image(2347);
            images_buttons_699_36_16[0] = get_internal_image(2350);
            images_buttons_699_37_0[0] = get_internal_image(2347);
            images_buttons_699_37_16[0] = get_internal_image(2350);
            images_buttons_699_38_0[0] = get_internal_image(1394);
            images_buttons_699_38_16[0] = get_internal_image(1397);
            images_buttons_699_39_0[0] = get_internal_image(37);
            images_buttons_699_39_16[0] = get_internal_image(77);
            images_buttons_699_40_0[0] = get_internal_image(1286);
            images_buttons_699_40_16[0] = get_internal_image(1295);
            images_buttons_699_41_0[0] = get_internal_image(2347);
            images_buttons_699_41_16[0] = get_internal_image(2350);
            images_buttons_699_42_0[0] = get_internal_image(2347);
            images_buttons_699_42_16[0] = get_internal_image(2350);
            images_buttons_699_43_0[0] = get_internal_image(37);
            images_buttons_699_43_16[0] = get_internal_image(77);
            images_buttons_699_44_0[0] = get_internal_image(37);
            images_buttons_699_44_16[0] = get_internal_image(77);
        }
        active_flags |= TRANSPARENT;
        animation = RUNNING;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_buttons_699(int x, int y)
{
    return new (Active::pool.create()) Buttons_699(x, y);
}
static Image* images_outfitguard_700_0_0[2];
static Direction direction_outfitguard_700_0_0 = {0, 6, 6, 0, -1, images_outfitguard_700_0_0, 2};
static Image* images_outfitguard_700_0_8[2];
static Direction direction_outfitguard_700_0_8 = {8, 6, 6, 0, -1, images_outfitguard_700_0_8, 2};
static Image* images_outfitguard_700_0_16[2];
static Direction direction_outfitguard_700_0_16 = {16, 6, 6, 0, -1, images_outfitguard_700_0_16, 2};
static Image* images_outfitguard_700_0_24[2];
static Direction direction_outfitguard_700_0_24 = {24, 6, 6, 0, -1, images_outfitguard_700_0_24, 2};
static Animation anim_outfitguard_700_0 = {&direction_outfitguard_700_0_0, &direction_outfitguard_700_0_0, &direction_outfitguard_700_0_0, &direction_outfitguard_700_0_0, NULL, &direction_outfitguard_700_0_8, &direction_outfitguard_700_0_8, &direction_outfitguard_700_0_8, &direction_outfitguard_700_0_8, &direction_outfitguard_700_0_8, &direction_outfitguard_700_0_8, &direction_outfitguard_700_0_8, NULL, &direction_outfitguard_700_0_16, &direction_outfitguard_700_0_16, &direction_outfitguard_700_0_16, &direction_outfitguard_700_0_16, &direction_outfitguard_700_0_16, &direction_outfitguard_700_0_16, &direction_outfitguard_700_0_16, NULL, &direction_outfitguard_700_0_24, &direction_outfitguard_700_0_24, &direction_outfitguard_700_0_24, &direction_outfitguard_700_0_24, &direction_outfitguard_700_0_24, &direction_outfitguard_700_0_24, &direction_outfitguard_700_0_24, NULL, &direction_outfitguard_700_0_0, &direction_outfitguard_700_0_0, &direction_outfitguard_700_0_0};
static Image* images_outfitguard_700_6_0[1];
static Direction direction_outfitguard_700_6_0 = {0, 6, 6, 0, 1, images_outfitguard_700_6_0, 1};
static Image* images_outfitguard_700_6_8[1];
static Direction direction_outfitguard_700_6_8 = {8, 6, 6, 0, 1, images_outfitguard_700_6_8, 1};
static Image* images_outfitguard_700_6_16[1];
static Direction direction_outfitguard_700_6_16 = {16, 6, 6, 0, 1, images_outfitguard_700_6_16, 1};
static Image* images_outfitguard_700_6_24[1];
static Direction direction_outfitguard_700_6_24 = {24, 6, 6, 0, 1, images_outfitguard_700_6_24, 1};
static Animation anim_outfitguard_700_6 = {&direction_outfitguard_700_6_0, &direction_outfitguard_700_6_0, &direction_outfitguard_700_6_0, &direction_outfitguard_700_6_0, NULL, &direction_outfitguard_700_6_8, &direction_outfitguard_700_6_8, &direction_outfitguard_700_6_8, &direction_outfitguard_700_6_8, &direction_outfitguard_700_6_8, &direction_outfitguard_700_6_8, &direction_outfitguard_700_6_8, NULL, &direction_outfitguard_700_6_16, &direction_outfitguard_700_6_16, &direction_outfitguard_700_6_16, &direction_outfitguard_700_6_16, &direction_outfitguard_700_6_16, &direction_outfitguard_700_6_16, &direction_outfitguard_700_6_16, NULL, &direction_outfitguard_700_6_24, &direction_outfitguard_700_6_24, &direction_outfitguard_700_6_24, &direction_outfitguard_700_6_24, &direction_outfitguard_700_6_24, &direction_outfitguard_700_6_24, &direction_outfitguard_700_6_24, NULL, &direction_outfitguard_700_6_0, &direction_outfitguard_700_6_0, &direction_outfitguard_700_6_0};
static Image* images_outfitguard_700_7_0[2];
static Direction direction_outfitguard_700_7_0 = {0, 10, 10, 0, -1, images_outfitguard_700_7_0, 2};
static Image* images_outfitguard_700_7_8[2];
static Direction direction_outfitguard_700_7_8 = {8, 10, 10, 0, -1, images_outfitguard_700_7_8, 2};
static Image* images_outfitguard_700_7_16[2];
static Direction direction_outfitguard_700_7_16 = {16, 10, 10, 0, -1, images_outfitguard_700_7_16, 2};
static Image* images_outfitguard_700_7_24[2];
static Direction direction_outfitguard_700_7_24 = {24, 10, 10, 0, -1, images_outfitguard_700_7_24, 2};
static Animation anim_outfitguard_700_7 = {&direction_outfitguard_700_7_0, &direction_outfitguard_700_7_0, &direction_outfitguard_700_7_0, &direction_outfitguard_700_7_0, NULL, &direction_outfitguard_700_7_8, &direction_outfitguard_700_7_8, &direction_outfitguard_700_7_8, &direction_outfitguard_700_7_8, &direction_outfitguard_700_7_8, &direction_outfitguard_700_7_8, &direction_outfitguard_700_7_8, NULL, &direction_outfitguard_700_7_16, &direction_outfitguard_700_7_16, &direction_outfitguard_700_7_16, &direction_outfitguard_700_7_16, &direction_outfitguard_700_7_16, &direction_outfitguard_700_7_16, &direction_outfitguard_700_7_16, NULL, &direction_outfitguard_700_7_24, &direction_outfitguard_700_7_24, &direction_outfitguard_700_7_24, &direction_outfitguard_700_7_24, &direction_outfitguard_700_7_24, &direction_outfitguard_700_7_24, &direction_outfitguard_700_7_24, NULL, &direction_outfitguard_700_7_0, &direction_outfitguard_700_7_0, &direction_outfitguard_700_7_0};
static Image* images_outfitguard_700_8_0[1];
static Direction direction_outfitguard_700_8_0 = {0, 50, 50, 0, -1, images_outfitguard_700_8_0, 1};
static Image* images_outfitguard_700_8_16[2];
static Direction direction_outfitguard_700_8_16 = {16, 50, 50, 0, 1, images_outfitguard_700_8_16, 2};
static Image* images_outfitguard_700_8_24[3];
static Direction direction_outfitguard_700_8_24 = {24, 50, 50, 0, -1, images_outfitguard_700_8_24, 3};
static Animation anim_outfitguard_700_8 = {&direction_outfitguard_700_8_0, &direction_outfitguard_700_8_0, &direction_outfitguard_700_8_0, &direction_outfitguard_700_8_0, &direction_outfitguard_700_8_0, &direction_outfitguard_700_8_0, &direction_outfitguard_700_8_0, &direction_outfitguard_700_8_0, NULL, &direction_outfitguard_700_8_16, &direction_outfitguard_700_8_16, &direction_outfitguard_700_8_16, &direction_outfitguard_700_8_16, &direction_outfitguard_700_8_16, &direction_outfitguard_700_8_16, &direction_outfitguard_700_8_16, &direction_outfitguard_700_8_16, &direction_outfitguard_700_8_16, &direction_outfitguard_700_8_16, &direction_outfitguard_700_8_16, NULL, &direction_outfitguard_700_8_24, &direction_outfitguard_700_8_24, &direction_outfitguard_700_8_24, &direction_outfitguard_700_8_24, &direction_outfitguard_700_8_24, &direction_outfitguard_700_8_24, &direction_outfitguard_700_8_24, NULL, &direction_outfitguard_700_8_0, &direction_outfitguard_700_8_0, &direction_outfitguard_700_8_0};
static Image* images_outfitguard_700_11_0[2];
static Direction direction_outfitguard_700_11_0 = {0, 6, 6, 0, -1, images_outfitguard_700_11_0, 2};
static Image* images_outfitguard_700_11_8[2];
static Direction direction_outfitguard_700_11_8 = {8, 6, 6, 0, -1, images_outfitguard_700_11_8, 2};
static Image* images_outfitguard_700_11_16[2];
static Direction direction_outfitguard_700_11_16 = {16, 6, 6, 0, -1, images_outfitguard_700_11_16, 2};
static Image* images_outfitguard_700_11_24[2];
static Direction direction_outfitguard_700_11_24 = {24, 6, 6, 0, -1, images_outfitguard_700_11_24, 2};
static Animation anim_outfitguard_700_11 = {&direction_outfitguard_700_11_0, &direction_outfitguard_700_11_0, &direction_outfitguard_700_11_0, &direction_outfitguard_700_11_0, NULL, &direction_outfitguard_700_11_8, &direction_outfitguard_700_11_8, &direction_outfitguard_700_11_8, &direction_outfitguard_700_11_8, &direction_outfitguard_700_11_8, &direction_outfitguard_700_11_8, &direction_outfitguard_700_11_8, NULL, &direction_outfitguard_700_11_16, &direction_outfitguard_700_11_16, &direction_outfitguard_700_11_16, &direction_outfitguard_700_11_16, &direction_outfitguard_700_11_16, &direction_outfitguard_700_11_16, &direction_outfitguard_700_11_16, NULL, &direction_outfitguard_700_11_24, &direction_outfitguard_700_11_24, &direction_outfitguard_700_11_24, &direction_outfitguard_700_11_24, &direction_outfitguard_700_11_24, &direction_outfitguard_700_11_24, &direction_outfitguard_700_11_24, NULL, &direction_outfitguard_700_11_0, &direction_outfitguard_700_11_0, &direction_outfitguard_700_11_0};
static Image* images_outfitguard_700_12_0[2];
static Direction direction_outfitguard_700_12_0 = {0, 10, 10, 0, -1, images_outfitguard_700_12_0, 2};
static Image* images_outfitguard_700_12_8[2];
static Direction direction_outfitguard_700_12_8 = {8, 10, 10, 0, -1, images_outfitguard_700_12_8, 2};
static Image* images_outfitguard_700_12_16[2];
static Direction direction_outfitguard_700_12_16 = {16, 10, 10, 0, -1, images_outfitguard_700_12_16, 2};
static Image* images_outfitguard_700_12_24[2];
static Direction direction_outfitguard_700_12_24 = {24, 10, 10, 0, -1, images_outfitguard_700_12_24, 2};
static Animation anim_outfitguard_700_12 = {&direction_outfitguard_700_12_0, &direction_outfitguard_700_12_0, &direction_outfitguard_700_12_0, &direction_outfitguard_700_12_0, NULL, &direction_outfitguard_700_12_8, &direction_outfitguard_700_12_8, &direction_outfitguard_700_12_8, &direction_outfitguard_700_12_8, &direction_outfitguard_700_12_8, &direction_outfitguard_700_12_8, &direction_outfitguard_700_12_8, NULL, &direction_outfitguard_700_12_16, &direction_outfitguard_700_12_16, &direction_outfitguard_700_12_16, &direction_outfitguard_700_12_16, &direction_outfitguard_700_12_16, &direction_outfitguard_700_12_16, &direction_outfitguard_700_12_16, NULL, &direction_outfitguard_700_12_24, &direction_outfitguard_700_12_24, &direction_outfitguard_700_12_24, &direction_outfitguard_700_12_24, &direction_outfitguard_700_12_24, &direction_outfitguard_700_12_24, &direction_outfitguard_700_12_24, NULL, &direction_outfitguard_700_12_0, &direction_outfitguard_700_12_0, &direction_outfitguard_700_12_0};
static Image* images_outfitguard_700_13_0[2];
static Direction direction_outfitguard_700_13_0 = {0, 10, 10, 0, -1, images_outfitguard_700_13_0, 2};
static Image* images_outfitguard_700_13_8[2];
static Direction direction_outfitguard_700_13_8 = {8, 10, 10, 0, -1, images_outfitguard_700_13_8, 2};
static Image* images_outfitguard_700_13_16[2];
static Direction direction_outfitguard_700_13_16 = {16, 10, 10, 0, -1, images_outfitguard_700_13_16, 2};
static Image* images_outfitguard_700_13_24[2];
static Direction direction_outfitguard_700_13_24 = {24, 10, 10, 0, -1, images_outfitguard_700_13_24, 2};
static Animation anim_outfitguard_700_13 = {&direction_outfitguard_700_13_0, &direction_outfitguard_700_13_0, &direction_outfitguard_700_13_0, &direction_outfitguard_700_13_0, NULL, &direction_outfitguard_700_13_8, &direction_outfitguard_700_13_8, &direction_outfitguard_700_13_8, &direction_outfitguard_700_13_8, &direction_outfitguard_700_13_8, &direction_outfitguard_700_13_8, &direction_outfitguard_700_13_8, NULL, &direction_outfitguard_700_13_16, &direction_outfitguard_700_13_16, &direction_outfitguard_700_13_16, &direction_outfitguard_700_13_16, &direction_outfitguard_700_13_16, &direction_outfitguard_700_13_16, &direction_outfitguard_700_13_16, NULL, &direction_outfitguard_700_13_24, &direction_outfitguard_700_13_24, &direction_outfitguard_700_13_24, &direction_outfitguard_700_13_24, &direction_outfitguard_700_13_24, &direction_outfitguard_700_13_24, &direction_outfitguard_700_13_24, NULL, &direction_outfitguard_700_13_0, &direction_outfitguard_700_13_0, &direction_outfitguard_700_13_0};
static Image* images_outfitguard_700_14_0[2];
static Direction direction_outfitguard_700_14_0 = {0, 10, 10, 0, -1, images_outfitguard_700_14_0, 2};
static Image* images_outfitguard_700_14_8[2];
static Direction direction_outfitguard_700_14_8 = {8, 10, 10, 0, -1, images_outfitguard_700_14_8, 2};
static Image* images_outfitguard_700_14_16[2];
static Direction direction_outfitguard_700_14_16 = {16, 10, 10, 0, -1, images_outfitguard_700_14_16, 2};
static Image* images_outfitguard_700_14_24[2];
static Direction direction_outfitguard_700_14_24 = {24, 10, 10, 0, -1, images_outfitguard_700_14_24, 2};
static Animation anim_outfitguard_700_14 = {&direction_outfitguard_700_14_0, &direction_outfitguard_700_14_0, &direction_outfitguard_700_14_0, &direction_outfitguard_700_14_0, NULL, &direction_outfitguard_700_14_8, &direction_outfitguard_700_14_8, &direction_outfitguard_700_14_8, &direction_outfitguard_700_14_8, &direction_outfitguard_700_14_8, &direction_outfitguard_700_14_8, &direction_outfitguard_700_14_8, NULL, &direction_outfitguard_700_14_16, &direction_outfitguard_700_14_16, &direction_outfitguard_700_14_16, &direction_outfitguard_700_14_16, &direction_outfitguard_700_14_16, &direction_outfitguard_700_14_16, &direction_outfitguard_700_14_16, NULL, &direction_outfitguard_700_14_24, &direction_outfitguard_700_14_24, &direction_outfitguard_700_14_24, &direction_outfitguard_700_14_24, &direction_outfitguard_700_14_24, &direction_outfitguard_700_14_24, &direction_outfitguard_700_14_24, NULL, &direction_outfitguard_700_14_0, &direction_outfitguard_700_14_0, &direction_outfitguard_700_14_0};
static Image* images_outfitguard_700_15_0[2];
static Direction direction_outfitguard_700_15_0 = {0, 10, 10, 0, -1, images_outfitguard_700_15_0, 2};
static Image* images_outfitguard_700_15_8[2];
static Direction direction_outfitguard_700_15_8 = {8, 10, 10, 0, -1, images_outfitguard_700_15_8, 2};
static Image* images_outfitguard_700_15_16[2];
static Direction direction_outfitguard_700_15_16 = {16, 10, 10, 0, -1, images_outfitguard_700_15_16, 2};
static Image* images_outfitguard_700_15_24[2];
static Direction direction_outfitguard_700_15_24 = {24, 10, 10, 0, -1, images_outfitguard_700_15_24, 2};
static Animation anim_outfitguard_700_15 = {&direction_outfitguard_700_15_0, &direction_outfitguard_700_15_0, &direction_outfitguard_700_15_0, &direction_outfitguard_700_15_0, NULL, &direction_outfitguard_700_15_8, &direction_outfitguard_700_15_8, &direction_outfitguard_700_15_8, &direction_outfitguard_700_15_8, &direction_outfitguard_700_15_8, &direction_outfitguard_700_15_8, &direction_outfitguard_700_15_8, NULL, &direction_outfitguard_700_15_16, &direction_outfitguard_700_15_16, &direction_outfitguard_700_15_16, &direction_outfitguard_700_15_16, &direction_outfitguard_700_15_16, &direction_outfitguard_700_15_16, &direction_outfitguard_700_15_16, NULL, &direction_outfitguard_700_15_24, &direction_outfitguard_700_15_24, &direction_outfitguard_700_15_24, &direction_outfitguard_700_15_24, &direction_outfitguard_700_15_24, &direction_outfitguard_700_15_24, &direction_outfitguard_700_15_24, NULL, &direction_outfitguard_700_15_0, &direction_outfitguard_700_15_0, &direction_outfitguard_700_15_0};
static Image* images_outfitguard_700_16_0[2];
static Direction direction_outfitguard_700_16_0 = {0, 10, 10, 0, -1, images_outfitguard_700_16_0, 2};
static Image* images_outfitguard_700_16_8[2];
static Direction direction_outfitguard_700_16_8 = {8, 10, 10, 0, -1, images_outfitguard_700_16_8, 2};
static Image* images_outfitguard_700_16_16[2];
static Direction direction_outfitguard_700_16_16 = {16, 10, 10, 0, -1, images_outfitguard_700_16_16, 2};
static Image* images_outfitguard_700_16_24[2];
static Direction direction_outfitguard_700_16_24 = {24, 10, 10, 0, -1, images_outfitguard_700_16_24, 2};
static Animation anim_outfitguard_700_16 = {&direction_outfitguard_700_16_0, &direction_outfitguard_700_16_0, &direction_outfitguard_700_16_0, &direction_outfitguard_700_16_0, NULL, &direction_outfitguard_700_16_8, &direction_outfitguard_700_16_8, &direction_outfitguard_700_16_8, &direction_outfitguard_700_16_8, &direction_outfitguard_700_16_8, &direction_outfitguard_700_16_8, &direction_outfitguard_700_16_8, NULL, &direction_outfitguard_700_16_16, &direction_outfitguard_700_16_16, &direction_outfitguard_700_16_16, &direction_outfitguard_700_16_16, &direction_outfitguard_700_16_16, &direction_outfitguard_700_16_16, &direction_outfitguard_700_16_16, NULL, &direction_outfitguard_700_16_24, &direction_outfitguard_700_16_24, &direction_outfitguard_700_16_24, &direction_outfitguard_700_16_24, &direction_outfitguard_700_16_24, &direction_outfitguard_700_16_24, &direction_outfitguard_700_16_24, NULL, &direction_outfitguard_700_16_0, &direction_outfitguard_700_16_0, &direction_outfitguard_700_16_0};
static Image* images_outfitguard_700_17_0[2];
static Direction direction_outfitguard_700_17_0 = {0, 5, 5, 1, -1, images_outfitguard_700_17_0, 2};
static Image* images_outfitguard_700_17_8[2];
static Direction direction_outfitguard_700_17_8 = {8, 5, 5, 1, -1, images_outfitguard_700_17_8, 2};
static Image* images_outfitguard_700_17_16[2];
static Direction direction_outfitguard_700_17_16 = {16, 5, 5, 1, -1, images_outfitguard_700_17_16, 2};
static Image* images_outfitguard_700_17_24[2];
static Direction direction_outfitguard_700_17_24 = {24, 5, 5, 1, -1, images_outfitguard_700_17_24, 2};
static Animation anim_outfitguard_700_17 = {&direction_outfitguard_700_17_0, &direction_outfitguard_700_17_0, &direction_outfitguard_700_17_0, &direction_outfitguard_700_17_0, NULL, &direction_outfitguard_700_17_8, &direction_outfitguard_700_17_8, &direction_outfitguard_700_17_8, &direction_outfitguard_700_17_8, &direction_outfitguard_700_17_8, &direction_outfitguard_700_17_8, &direction_outfitguard_700_17_8, NULL, &direction_outfitguard_700_17_16, &direction_outfitguard_700_17_16, &direction_outfitguard_700_17_16, &direction_outfitguard_700_17_16, &direction_outfitguard_700_17_16, &direction_outfitguard_700_17_16, &direction_outfitguard_700_17_16, NULL, &direction_outfitguard_700_17_24, &direction_outfitguard_700_17_24, &direction_outfitguard_700_17_24, &direction_outfitguard_700_17_24, &direction_outfitguard_700_17_24, &direction_outfitguard_700_17_24, &direction_outfitguard_700_17_24, NULL, &direction_outfitguard_700_17_0, &direction_outfitguard_700_17_0, &direction_outfitguard_700_17_0};
static Animation * anim_array_outfitguard_700[18] = {&anim_outfitguard_700_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitguard_700_6, &anim_outfitguard_700_7, &anim_outfitguard_700_8, NULL, NULL, &anim_outfitguard_700_11, &anim_outfitguard_700_12, &anim_outfitguard_700_13, &anim_outfitguard_700_14, &anim_outfitguard_700_15, &anim_outfitguard_700_16, &anim_outfitguard_700_17};
static Animations anim_outfitguard_700 = {18, &anim_array_outfitguard_700[0]};
static bool anim_outfitguard_700_initialized;
class OutfitGuard_700 : public Active
{
public:
    OutfitGuard_700(int x, int y) : Active(x, y, OutfitGuard_700_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Guard", 14);
#endif
        this->animations = &anim_outfitguard_700;
        if (!anim_outfitguard_700_initialized) {
            anim_outfitguard_700_initialized = true;
            images_outfitguard_700_0_0[0] = get_internal_image(1415);
            images_outfitguard_700_0_0[1] = get_internal_image(499);
            images_outfitguard_700_0_8[0] = get_internal_image(500);
            images_outfitguard_700_0_8[1] = get_internal_image(501);
            images_outfitguard_700_0_16[0] = get_internal_image(497);
            images_outfitguard_700_0_16[1] = get_internal_image(498);
            images_outfitguard_700_0_24[0] = get_internal_image(502);
            images_outfitguard_700_0_24[1] = get_internal_image(783);
            images_outfitguard_700_6_0[0] = get_internal_image(1416);
            images_outfitguard_700_6_8[0] = get_internal_image(521);
            images_outfitguard_700_6_16[0] = get_internal_image(1418);
            images_outfitguard_700_6_24[0] = get_internal_image(518);
            images_outfitguard_700_7_0[0] = get_internal_image(1347);
            images_outfitguard_700_7_0[1] = get_internal_image(1386);
            images_outfitguard_700_7_8[0] = get_internal_image(1411);
            images_outfitguard_700_7_8[1] = get_internal_image(1414);
            images_outfitguard_700_7_16[0] = get_internal_image(1343);
            images_outfitguard_700_7_16[1] = get_internal_image(1389);
            images_outfitguard_700_7_24[0] = get_internal_image(1410);
            images_outfitguard_700_7_24[1] = get_internal_image(1413);
            images_outfitguard_700_8_0[0] = get_internal_image(480);
            images_outfitguard_700_8_16[0] = get_internal_image(967);
            images_outfitguard_700_8_16[1] = get_internal_image(1271);
            images_outfitguard_700_8_24[0] = get_internal_image(704);
            images_outfitguard_700_8_24[1] = get_internal_image(704);
            images_outfitguard_700_8_24[2] = get_internal_image(704);
            images_outfitguard_700_11_0[0] = get_internal_image(1404);
            images_outfitguard_700_11_0[1] = get_internal_image(1405);
            images_outfitguard_700_11_8[0] = get_internal_image(1402);
            images_outfitguard_700_11_8[1] = get_internal_image(1401);
            images_outfitguard_700_11_16[0] = get_internal_image(1403);
            images_outfitguard_700_11_16[1] = get_internal_image(1406);
            images_outfitguard_700_11_24[0] = get_internal_image(1399);
            images_outfitguard_700_11_24[1] = get_internal_image(1400);
            images_outfitguard_700_12_0[0] = get_internal_image(2297);
            images_outfitguard_700_12_0[1] = get_internal_image(2197);
            images_outfitguard_700_12_8[0] = get_internal_image(2315);
            images_outfitguard_700_12_8[1] = get_internal_image(2291);
            images_outfitguard_700_12_16[0] = get_internal_image(2311);
            images_outfitguard_700_12_16[1] = get_internal_image(2324);
            images_outfitguard_700_12_24[0] = get_internal_image(2179);
            images_outfitguard_700_12_24[1] = get_internal_image(2180);
            images_outfitguard_700_13_0[0] = get_internal_image(2289);
            images_outfitguard_700_13_0[1] = get_internal_image(2317);
            images_outfitguard_700_13_8[0] = get_internal_image(2288);
            images_outfitguard_700_13_8[1] = get_internal_image(2309);
            images_outfitguard_700_13_16[0] = get_internal_image(2316);
            images_outfitguard_700_13_16[1] = get_internal_image(2310);
            images_outfitguard_700_13_24[0] = get_internal_image(2254);
            images_outfitguard_700_13_24[1] = get_internal_image(2182);
            images_outfitguard_700_14_0[0] = get_internal_image(2308);
            images_outfitguard_700_14_0[1] = get_internal_image(2318);
            images_outfitguard_700_14_8[0] = get_internal_image(2290);
            images_outfitguard_700_14_8[1] = get_internal_image(2292);
            images_outfitguard_700_14_16[0] = get_internal_image(2312);
            images_outfitguard_700_14_16[1] = get_internal_image(2313);
            images_outfitguard_700_14_24[0] = get_internal_image(2319);
            images_outfitguard_700_14_24[1] = get_internal_image(2200);
            images_outfitguard_700_15_0[0] = get_internal_image(2186);
            images_outfitguard_700_15_0[1] = get_internal_image(2199);
            images_outfitguard_700_15_8[0] = get_internal_image(2185);
            images_outfitguard_700_15_8[1] = get_internal_image(2295);
            images_outfitguard_700_15_16[0] = get_internal_image(2304);
            images_outfitguard_700_15_16[1] = get_internal_image(2320);
            images_outfitguard_700_15_24[0] = get_internal_image(2321);
            images_outfitguard_700_15_24[1] = get_internal_image(2196);
            images_outfitguard_700_16_0[0] = get_internal_image(2301);
            images_outfitguard_700_16_0[1] = get_internal_image(2322);
            images_outfitguard_700_16_8[0] = get_internal_image(2198);
            images_outfitguard_700_16_8[1] = get_internal_image(2293);
            images_outfitguard_700_16_16[0] = get_internal_image(2323);
            images_outfitguard_700_16_16[1] = get_internal_image(2303);
            images_outfitguard_700_16_24[0] = get_internal_image(2300);
            images_outfitguard_700_16_24[1] = get_internal_image(2189);
            images_outfitguard_700_17_0[0] = get_internal_image(2188);
            images_outfitguard_700_17_0[1] = get_internal_image(2325);
            images_outfitguard_700_17_8[0] = get_internal_image(2298);
            images_outfitguard_700_17_8[1] = get_internal_image(2299);
            images_outfitguard_700_17_16[0] = get_internal_image(2194);
            images_outfitguard_700_17_16[1] = get_internal_image(2314);
            images_outfitguard_700_17_24[0] = get_internal_image(2190);
            images_outfitguard_700_17_24[1] = get_internal_image(2294);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_outfitguard_700(int x, int y)
{
    return new (Active::pool.create()) OutfitGuard_700(x, y);
}
static Image* images_outfitinmate_701_0_0[2];
static Direction direction_outfitinmate_701_0_0 = {0, 6, 6, 0, -1, images_outfitinmate_701_0_0, 2};
static Image* images_outfitinmate_701_0_8[2];
static Direction direction_outfitinmate_701_0_8 = {8, 6, 6, 0, -1, images_outfitinmate_701_0_8, 2};
static Image* images_outfitinmate_701_0_16[2];
static Direction direction_outfitinmate_701_0_16 = {16, 6, 6, 0, -1, images_outfitinmate_701_0_16, 2};
static Image* images_outfitinmate_701_0_24[2];
static Direction direction_outfitinmate_701_0_24 = {24, 6, 6, 0, -1, images_outfitinmate_701_0_24, 2};
static Animation anim_outfitinmate_701_0 = {&direction_outfitinmate_701_0_0, &direction_outfitinmate_701_0_0, &direction_outfitinmate_701_0_0, &direction_outfitinmate_701_0_0, NULL, &direction_outfitinmate_701_0_8, &direction_outfitinmate_701_0_8, &direction_outfitinmate_701_0_8, &direction_outfitinmate_701_0_8, &direction_outfitinmate_701_0_8, &direction_outfitinmate_701_0_8, &direction_outfitinmate_701_0_8, NULL, &direction_outfitinmate_701_0_16, &direction_outfitinmate_701_0_16, &direction_outfitinmate_701_0_16, &direction_outfitinmate_701_0_16, &direction_outfitinmate_701_0_16, &direction_outfitinmate_701_0_16, &direction_outfitinmate_701_0_16, NULL, &direction_outfitinmate_701_0_24, &direction_outfitinmate_701_0_24, &direction_outfitinmate_701_0_24, &direction_outfitinmate_701_0_24, &direction_outfitinmate_701_0_24, &direction_outfitinmate_701_0_24, &direction_outfitinmate_701_0_24, NULL, &direction_outfitinmate_701_0_0, &direction_outfitinmate_701_0_0, &direction_outfitinmate_701_0_0};
static Image* images_outfitinmate_701_6_0[1];
static Direction direction_outfitinmate_701_6_0 = {0, 6, 6, 0, -1, images_outfitinmate_701_6_0, 1};
static Image* images_outfitinmate_701_6_8[1];
static Direction direction_outfitinmate_701_6_8 = {8, 6, 6, 0, -1, images_outfitinmate_701_6_8, 1};
static Image* images_outfitinmate_701_6_16[1];
static Direction direction_outfitinmate_701_6_16 = {16, 6, 6, 0, 1, images_outfitinmate_701_6_16, 1};
static Image* images_outfitinmate_701_6_24[1];
static Direction direction_outfitinmate_701_6_24 = {24, 6, 6, 0, -1, images_outfitinmate_701_6_24, 1};
static Animation anim_outfitinmate_701_6 = {&direction_outfitinmate_701_6_0, &direction_outfitinmate_701_6_0, &direction_outfitinmate_701_6_0, &direction_outfitinmate_701_6_0, NULL, &direction_outfitinmate_701_6_8, &direction_outfitinmate_701_6_8, &direction_outfitinmate_701_6_8, &direction_outfitinmate_701_6_8, &direction_outfitinmate_701_6_8, &direction_outfitinmate_701_6_8, &direction_outfitinmate_701_6_8, NULL, &direction_outfitinmate_701_6_16, &direction_outfitinmate_701_6_16, &direction_outfitinmate_701_6_16, &direction_outfitinmate_701_6_16, &direction_outfitinmate_701_6_16, &direction_outfitinmate_701_6_16, &direction_outfitinmate_701_6_16, NULL, &direction_outfitinmate_701_6_24, &direction_outfitinmate_701_6_24, &direction_outfitinmate_701_6_24, &direction_outfitinmate_701_6_24, &direction_outfitinmate_701_6_24, &direction_outfitinmate_701_6_24, &direction_outfitinmate_701_6_24, NULL, &direction_outfitinmate_701_6_0, &direction_outfitinmate_701_6_0, &direction_outfitinmate_701_6_0};
static Image* images_outfitinmate_701_7_0[2];
static Direction direction_outfitinmate_701_7_0 = {0, 6, 6, 0, -1, images_outfitinmate_701_7_0, 2};
static Image* images_outfitinmate_701_7_8[2];
static Direction direction_outfitinmate_701_7_8 = {8, 6, 6, 0, -1, images_outfitinmate_701_7_8, 2};
static Image* images_outfitinmate_701_7_16[2];
static Direction direction_outfitinmate_701_7_16 = {16, 6, 6, 0, -1, images_outfitinmate_701_7_16, 2};
static Image* images_outfitinmate_701_7_24[2];
static Direction direction_outfitinmate_701_7_24 = {24, 6, 6, 0, -1, images_outfitinmate_701_7_24, 2};
static Animation anim_outfitinmate_701_7 = {&direction_outfitinmate_701_7_0, &direction_outfitinmate_701_7_0, &direction_outfitinmate_701_7_0, &direction_outfitinmate_701_7_0, NULL, &direction_outfitinmate_701_7_8, &direction_outfitinmate_701_7_8, &direction_outfitinmate_701_7_8, &direction_outfitinmate_701_7_8, &direction_outfitinmate_701_7_8, &direction_outfitinmate_701_7_8, &direction_outfitinmate_701_7_8, NULL, &direction_outfitinmate_701_7_16, &direction_outfitinmate_701_7_16, &direction_outfitinmate_701_7_16, &direction_outfitinmate_701_7_16, &direction_outfitinmate_701_7_16, &direction_outfitinmate_701_7_16, &direction_outfitinmate_701_7_16, NULL, &direction_outfitinmate_701_7_24, &direction_outfitinmate_701_7_24, &direction_outfitinmate_701_7_24, &direction_outfitinmate_701_7_24, &direction_outfitinmate_701_7_24, &direction_outfitinmate_701_7_24, &direction_outfitinmate_701_7_24, NULL, &direction_outfitinmate_701_7_0, &direction_outfitinmate_701_7_0, &direction_outfitinmate_701_7_0};
static Image* images_outfitinmate_701_8_0[2];
static Direction direction_outfitinmate_701_8_0 = {0, 10, 10, 0, -1, images_outfitinmate_701_8_0, 2};
static Image* images_outfitinmate_701_8_16[2];
static Direction direction_outfitinmate_701_8_16 = {16, 5, 5, 0, -1, images_outfitinmate_701_8_16, 2};
static Image* images_outfitinmate_701_8_24[3];
static Direction direction_outfitinmate_701_8_24 = {24, 50, 50, 0, -1, images_outfitinmate_701_8_24, 3};
static Animation anim_outfitinmate_701_8 = {&direction_outfitinmate_701_8_0, &direction_outfitinmate_701_8_0, &direction_outfitinmate_701_8_0, &direction_outfitinmate_701_8_0, &direction_outfitinmate_701_8_0, &direction_outfitinmate_701_8_0, &direction_outfitinmate_701_8_0, &direction_outfitinmate_701_8_0, NULL, &direction_outfitinmate_701_8_16, &direction_outfitinmate_701_8_16, &direction_outfitinmate_701_8_16, &direction_outfitinmate_701_8_16, &direction_outfitinmate_701_8_16, &direction_outfitinmate_701_8_16, &direction_outfitinmate_701_8_16, &direction_outfitinmate_701_8_16, &direction_outfitinmate_701_8_16, &direction_outfitinmate_701_8_16, &direction_outfitinmate_701_8_16, NULL, &direction_outfitinmate_701_8_24, &direction_outfitinmate_701_8_24, &direction_outfitinmate_701_8_24, &direction_outfitinmate_701_8_24, &direction_outfitinmate_701_8_24, &direction_outfitinmate_701_8_24, &direction_outfitinmate_701_8_24, NULL, &direction_outfitinmate_701_8_0, &direction_outfitinmate_701_8_0, &direction_outfitinmate_701_8_0};
static Image* images_outfitinmate_701_9_0[2];
static Direction direction_outfitinmate_701_9_0 = {0, 5, 5, 0, -1, images_outfitinmate_701_9_0, 2};
static Animation anim_outfitinmate_701_9 = {&direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, NULL, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0, &direction_outfitinmate_701_9_0};
static Image* images_outfitinmate_701_10_0[5];
static Direction direction_outfitinmate_701_10_0 = {0, 10, 10, 0, -1, images_outfitinmate_701_10_0, 5};
static Animation anim_outfitinmate_701_10 = {&direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, NULL, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0, &direction_outfitinmate_701_10_0};
static Image* images_outfitinmate_701_11_0[2];
static Direction direction_outfitinmate_701_11_0 = {0, 6, 6, 0, -1, images_outfitinmate_701_11_0, 2};
static Image* images_outfitinmate_701_11_8[2];
static Direction direction_outfitinmate_701_11_8 = {8, 6, 6, 0, -1, images_outfitinmate_701_11_8, 2};
static Image* images_outfitinmate_701_11_16[2];
static Direction direction_outfitinmate_701_11_16 = {16, 6, 6, 0, -1, images_outfitinmate_701_11_16, 2};
static Image* images_outfitinmate_701_11_24[2];
static Direction direction_outfitinmate_701_11_24 = {24, 6, 6, 0, -1, images_outfitinmate_701_11_24, 2};
static Animation anim_outfitinmate_701_11 = {&direction_outfitinmate_701_11_0, &direction_outfitinmate_701_11_0, &direction_outfitinmate_701_11_0, &direction_outfitinmate_701_11_0, NULL, &direction_outfitinmate_701_11_8, &direction_outfitinmate_701_11_8, &direction_outfitinmate_701_11_8, &direction_outfitinmate_701_11_8, &direction_outfitinmate_701_11_8, &direction_outfitinmate_701_11_8, &direction_outfitinmate_701_11_8, NULL, &direction_outfitinmate_701_11_16, &direction_outfitinmate_701_11_16, &direction_outfitinmate_701_11_16, &direction_outfitinmate_701_11_16, &direction_outfitinmate_701_11_16, &direction_outfitinmate_701_11_16, &direction_outfitinmate_701_11_16, NULL, &direction_outfitinmate_701_11_24, &direction_outfitinmate_701_11_24, &direction_outfitinmate_701_11_24, &direction_outfitinmate_701_11_24, &direction_outfitinmate_701_11_24, &direction_outfitinmate_701_11_24, &direction_outfitinmate_701_11_24, NULL, &direction_outfitinmate_701_11_0, &direction_outfitinmate_701_11_0, &direction_outfitinmate_701_11_0};
static Image* images_outfitinmate_701_12_0[2];
static Direction direction_outfitinmate_701_12_0 = {0, 10, 10, 0, -1, images_outfitinmate_701_12_0, 2};
static Image* images_outfitinmate_701_12_8[2];
static Direction direction_outfitinmate_701_12_8 = {8, 10, 10, 0, -1, images_outfitinmate_701_12_8, 2};
static Image* images_outfitinmate_701_12_16[2];
static Direction direction_outfitinmate_701_12_16 = {16, 10, 10, 0, -1, images_outfitinmate_701_12_16, 2};
static Image* images_outfitinmate_701_12_24[2];
static Direction direction_outfitinmate_701_12_24 = {24, 10, 10, 0, -1, images_outfitinmate_701_12_24, 2};
static Animation anim_outfitinmate_701_12 = {&direction_outfitinmate_701_12_0, &direction_outfitinmate_701_12_0, &direction_outfitinmate_701_12_0, &direction_outfitinmate_701_12_0, NULL, &direction_outfitinmate_701_12_8, &direction_outfitinmate_701_12_8, &direction_outfitinmate_701_12_8, &direction_outfitinmate_701_12_8, &direction_outfitinmate_701_12_8, &direction_outfitinmate_701_12_8, &direction_outfitinmate_701_12_8, NULL, &direction_outfitinmate_701_12_16, &direction_outfitinmate_701_12_16, &direction_outfitinmate_701_12_16, &direction_outfitinmate_701_12_16, &direction_outfitinmate_701_12_16, &direction_outfitinmate_701_12_16, &direction_outfitinmate_701_12_16, NULL, &direction_outfitinmate_701_12_24, &direction_outfitinmate_701_12_24, &direction_outfitinmate_701_12_24, &direction_outfitinmate_701_12_24, &direction_outfitinmate_701_12_24, &direction_outfitinmate_701_12_24, &direction_outfitinmate_701_12_24, NULL, &direction_outfitinmate_701_12_0, &direction_outfitinmate_701_12_0, &direction_outfitinmate_701_12_0};
static Image* images_outfitinmate_701_13_0[2];
static Direction direction_outfitinmate_701_13_0 = {0, 10, 10, 0, -1, images_outfitinmate_701_13_0, 2};
static Image* images_outfitinmate_701_13_8[2];
static Direction direction_outfitinmate_701_13_8 = {8, 10, 10, 0, -1, images_outfitinmate_701_13_8, 2};
static Image* images_outfitinmate_701_13_16[2];
static Direction direction_outfitinmate_701_13_16 = {16, 10, 10, 0, -1, images_outfitinmate_701_13_16, 2};
static Image* images_outfitinmate_701_13_24[2];
static Direction direction_outfitinmate_701_13_24 = {24, 10, 10, 0, -1, images_outfitinmate_701_13_24, 2};
static Animation anim_outfitinmate_701_13 = {&direction_outfitinmate_701_13_0, &direction_outfitinmate_701_13_0, &direction_outfitinmate_701_13_0, &direction_outfitinmate_701_13_0, NULL, &direction_outfitinmate_701_13_8, &direction_outfitinmate_701_13_8, &direction_outfitinmate_701_13_8, &direction_outfitinmate_701_13_8, &direction_outfitinmate_701_13_8, &direction_outfitinmate_701_13_8, &direction_outfitinmate_701_13_8, NULL, &direction_outfitinmate_701_13_16, &direction_outfitinmate_701_13_16, &direction_outfitinmate_701_13_16, &direction_outfitinmate_701_13_16, &direction_outfitinmate_701_13_16, &direction_outfitinmate_701_13_16, &direction_outfitinmate_701_13_16, NULL, &direction_outfitinmate_701_13_24, &direction_outfitinmate_701_13_24, &direction_outfitinmate_701_13_24, &direction_outfitinmate_701_13_24, &direction_outfitinmate_701_13_24, &direction_outfitinmate_701_13_24, &direction_outfitinmate_701_13_24, NULL, &direction_outfitinmate_701_13_0, &direction_outfitinmate_701_13_0, &direction_outfitinmate_701_13_0};
static Image* images_outfitinmate_701_14_0[2];
static Direction direction_outfitinmate_701_14_0 = {0, 10, 10, 0, -1, images_outfitinmate_701_14_0, 2};
static Image* images_outfitinmate_701_14_8[2];
static Direction direction_outfitinmate_701_14_8 = {8, 10, 10, 0, -1, images_outfitinmate_701_14_8, 2};
static Image* images_outfitinmate_701_14_16[2];
static Direction direction_outfitinmate_701_14_16 = {16, 10, 10, 0, -1, images_outfitinmate_701_14_16, 2};
static Image* images_outfitinmate_701_14_24[2];
static Direction direction_outfitinmate_701_14_24 = {24, 10, 10, 0, -1, images_outfitinmate_701_14_24, 2};
static Animation anim_outfitinmate_701_14 = {&direction_outfitinmate_701_14_0, &direction_outfitinmate_701_14_0, &direction_outfitinmate_701_14_0, &direction_outfitinmate_701_14_0, NULL, &direction_outfitinmate_701_14_8, &direction_outfitinmate_701_14_8, &direction_outfitinmate_701_14_8, &direction_outfitinmate_701_14_8, &direction_outfitinmate_701_14_8, &direction_outfitinmate_701_14_8, &direction_outfitinmate_701_14_8, NULL, &direction_outfitinmate_701_14_16, &direction_outfitinmate_701_14_16, &direction_outfitinmate_701_14_16, &direction_outfitinmate_701_14_16, &direction_outfitinmate_701_14_16, &direction_outfitinmate_701_14_16, &direction_outfitinmate_701_14_16, NULL, &direction_outfitinmate_701_14_24, &direction_outfitinmate_701_14_24, &direction_outfitinmate_701_14_24, &direction_outfitinmate_701_14_24, &direction_outfitinmate_701_14_24, &direction_outfitinmate_701_14_24, &direction_outfitinmate_701_14_24, NULL, &direction_outfitinmate_701_14_0, &direction_outfitinmate_701_14_0, &direction_outfitinmate_701_14_0};
static Image* images_outfitinmate_701_15_0[2];
static Direction direction_outfitinmate_701_15_0 = {0, 10, 10, 0, -1, images_outfitinmate_701_15_0, 2};
static Image* images_outfitinmate_701_15_8[2];
static Direction direction_outfitinmate_701_15_8 = {8, 10, 10, 0, -1, images_outfitinmate_701_15_8, 2};
static Image* images_outfitinmate_701_15_16[2];
static Direction direction_outfitinmate_701_15_16 = {16, 10, 10, 0, -1, images_outfitinmate_701_15_16, 2};
static Image* images_outfitinmate_701_15_24[2];
static Direction direction_outfitinmate_701_15_24 = {24, 10, 10, 0, -1, images_outfitinmate_701_15_24, 2};
static Animation anim_outfitinmate_701_15 = {&direction_outfitinmate_701_15_0, &direction_outfitinmate_701_15_0, &direction_outfitinmate_701_15_0, &direction_outfitinmate_701_15_0, NULL, &direction_outfitinmate_701_15_8, &direction_outfitinmate_701_15_8, &direction_outfitinmate_701_15_8, &direction_outfitinmate_701_15_8, &direction_outfitinmate_701_15_8, &direction_outfitinmate_701_15_8, &direction_outfitinmate_701_15_8, NULL, &direction_outfitinmate_701_15_16, &direction_outfitinmate_701_15_16, &direction_outfitinmate_701_15_16, &direction_outfitinmate_701_15_16, &direction_outfitinmate_701_15_16, &direction_outfitinmate_701_15_16, &direction_outfitinmate_701_15_16, NULL, &direction_outfitinmate_701_15_24, &direction_outfitinmate_701_15_24, &direction_outfitinmate_701_15_24, &direction_outfitinmate_701_15_24, &direction_outfitinmate_701_15_24, &direction_outfitinmate_701_15_24, &direction_outfitinmate_701_15_24, NULL, &direction_outfitinmate_701_15_0, &direction_outfitinmate_701_15_0, &direction_outfitinmate_701_15_0};
static Image* images_outfitinmate_701_16_0[2];
static Direction direction_outfitinmate_701_16_0 = {0, 10, 10, 0, -1, images_outfitinmate_701_16_0, 2};
static Image* images_outfitinmate_701_16_8[2];
static Direction direction_outfitinmate_701_16_8 = {8, 10, 10, 0, -1, images_outfitinmate_701_16_8, 2};
static Image* images_outfitinmate_701_16_16[2];
static Direction direction_outfitinmate_701_16_16 = {16, 10, 10, 0, -1, images_outfitinmate_701_16_16, 2};
static Image* images_outfitinmate_701_16_24[2];
static Direction direction_outfitinmate_701_16_24 = {24, 10, 10, 0, -1, images_outfitinmate_701_16_24, 2};
static Animation anim_outfitinmate_701_16 = {&direction_outfitinmate_701_16_0, &direction_outfitinmate_701_16_0, &direction_outfitinmate_701_16_0, &direction_outfitinmate_701_16_0, NULL, &direction_outfitinmate_701_16_8, &direction_outfitinmate_701_16_8, &direction_outfitinmate_701_16_8, &direction_outfitinmate_701_16_8, &direction_outfitinmate_701_16_8, &direction_outfitinmate_701_16_8, &direction_outfitinmate_701_16_8, NULL, &direction_outfitinmate_701_16_16, &direction_outfitinmate_701_16_16, &direction_outfitinmate_701_16_16, &direction_outfitinmate_701_16_16, &direction_outfitinmate_701_16_16, &direction_outfitinmate_701_16_16, &direction_outfitinmate_701_16_16, NULL, &direction_outfitinmate_701_16_24, &direction_outfitinmate_701_16_24, &direction_outfitinmate_701_16_24, &direction_outfitinmate_701_16_24, &direction_outfitinmate_701_16_24, &direction_outfitinmate_701_16_24, &direction_outfitinmate_701_16_24, NULL, &direction_outfitinmate_701_16_0, &direction_outfitinmate_701_16_0, &direction_outfitinmate_701_16_0};
static Image* images_outfitinmate_701_17_0[2];
static Direction direction_outfitinmate_701_17_0 = {0, 5, 5, 1, -1, images_outfitinmate_701_17_0, 2};
static Image* images_outfitinmate_701_17_8[2];
static Direction direction_outfitinmate_701_17_8 = {8, 5, 5, 1, -1, images_outfitinmate_701_17_8, 2};
static Image* images_outfitinmate_701_17_16[2];
static Direction direction_outfitinmate_701_17_16 = {16, 5, 5, 1, -1, images_outfitinmate_701_17_16, 2};
static Image* images_outfitinmate_701_17_24[2];
static Direction direction_outfitinmate_701_17_24 = {24, 5, 5, 1, -1, images_outfitinmate_701_17_24, 2};
static Animation anim_outfitinmate_701_17 = {&direction_outfitinmate_701_17_0, &direction_outfitinmate_701_17_0, &direction_outfitinmate_701_17_0, &direction_outfitinmate_701_17_0, NULL, &direction_outfitinmate_701_17_8, &direction_outfitinmate_701_17_8, &direction_outfitinmate_701_17_8, &direction_outfitinmate_701_17_8, &direction_outfitinmate_701_17_8, &direction_outfitinmate_701_17_8, &direction_outfitinmate_701_17_8, NULL, &direction_outfitinmate_701_17_16, &direction_outfitinmate_701_17_16, &direction_outfitinmate_701_17_16, &direction_outfitinmate_701_17_16, &direction_outfitinmate_701_17_16, &direction_outfitinmate_701_17_16, &direction_outfitinmate_701_17_16, NULL, &direction_outfitinmate_701_17_24, &direction_outfitinmate_701_17_24, &direction_outfitinmate_701_17_24, &direction_outfitinmate_701_17_24, &direction_outfitinmate_701_17_24, &direction_outfitinmate_701_17_24, &direction_outfitinmate_701_17_24, NULL, &direction_outfitinmate_701_17_0, &direction_outfitinmate_701_17_0, &direction_outfitinmate_701_17_0};
static Image* images_outfitinmate_701_18_24[8];
static Direction direction_outfitinmate_701_18_24 = {24, 25, 25, 0, -1, images_outfitinmate_701_18_24, 8};
static Animation anim_outfitinmate_701_18 = {&direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, NULL, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24, &direction_outfitinmate_701_18_24};
static Image* images_outfitinmate_701_19_24[4];
static Direction direction_outfitinmate_701_19_24 = {24, 10, 10, 0, -1, images_outfitinmate_701_19_24, 4};
static Animation anim_outfitinmate_701_19 = {&direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, NULL, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24, &direction_outfitinmate_701_19_24};
static Animation * anim_array_outfitinmate_701[20] = {&anim_outfitinmate_701_0, NULL, NULL, NULL, NULL, NULL, &anim_outfitinmate_701_6, &anim_outfitinmate_701_7, &anim_outfitinmate_701_8, &anim_outfitinmate_701_9, &anim_outfitinmate_701_10, &anim_outfitinmate_701_11, &anim_outfitinmate_701_12, &anim_outfitinmate_701_13, &anim_outfitinmate_701_14, &anim_outfitinmate_701_15, &anim_outfitinmate_701_16, &anim_outfitinmate_701_17, &anim_outfitinmate_701_18, &anim_outfitinmate_701_19};
static Animations anim_outfitinmate_701 = {20, &anim_array_outfitinmate_701[0]};
static bool anim_outfitinmate_701_initialized;
class OutfitInmate_701 : public Active
{
public:
    OutfitInmate_701(int x, int y) : Active(x, y, OutfitInmate_701_type)
    {
        // qualifiers: 54
#ifndef NDEBUG
        name = std::string("Outfit - Inmate", 15);
#endif
        this->animations = &anim_outfitinmate_701;
        if (!anim_outfitinmate_701_initialized) {
            anim_outfitinmate_701_initialized = true;
            images_outfitinmate_701_0_0[0] = get_internal_image(564);
            images_outfitinmate_701_0_0[1] = get_internal_image(567);
            images_outfitinmate_701_0_8[0] = get_internal_image(526);
            images_outfitinmate_701_0_8[1] = get_internal_image(525);
            images_outfitinmate_701_0_16[0] = get_internal_image(568);
            images_outfitinmate_701_0_16[1] = get_internal_image(569);
            images_outfitinmate_701_0_24[0] = get_internal_image(555);
            images_outfitinmate_701_0_24[1] = get_internal_image(549);
            images_outfitinmate_701_6_0[0] = get_internal_image(787);
            images_outfitinmate_701_6_8[0] = get_internal_image(789);
            images_outfitinmate_701_6_16[0] = get_internal_image(790);
            images_outfitinmate_701_6_24[0] = get_internal_image(530);
            images_outfitinmate_701_7_0[0] = get_internal_image(620);
            images_outfitinmate_701_7_0[1] = get_internal_image(619);
            images_outfitinmate_701_7_8[0] = get_internal_image(625);
            images_outfitinmate_701_7_8[1] = get_internal_image(623);
            images_outfitinmate_701_7_16[0] = get_internal_image(618);
            images_outfitinmate_701_7_16[1] = get_internal_image(621);
            images_outfitinmate_701_7_24[0] = get_internal_image(616);
            images_outfitinmate_701_7_24[1] = get_internal_image(617);
            images_outfitinmate_701_8_0[0] = get_internal_image(782);
            images_outfitinmate_701_8_0[1] = get_internal_image(782);
            images_outfitinmate_701_8_16[0] = get_internal_image(42);
            images_outfitinmate_701_8_16[1] = get_internal_image(46);
            images_outfitinmate_701_8_24[0] = get_internal_image(712);
            images_outfitinmate_701_8_24[1] = get_internal_image(712);
            images_outfitinmate_701_8_24[2] = get_internal_image(712);
            images_outfitinmate_701_9_0[0] = get_internal_image(1492);
            images_outfitinmate_701_9_0[1] = get_internal_image(1493);
            images_outfitinmate_701_10_0[0] = get_internal_image(765);
            images_outfitinmate_701_10_0[1] = get_internal_image(376);
            images_outfitinmate_701_10_0[2] = get_internal_image(249);
            images_outfitinmate_701_10_0[3] = get_internal_image(767);
            images_outfitinmate_701_10_0[4] = get_internal_image(249);
            images_outfitinmate_701_11_0[0] = get_internal_image(358);
            images_outfitinmate_701_11_0[1] = get_internal_image(385);
            images_outfitinmate_701_11_8[0] = get_internal_image(741);
            images_outfitinmate_701_11_8[1] = get_internal_image(739);
            images_outfitinmate_701_11_16[0] = get_internal_image(462);
            images_outfitinmate_701_11_16[1] = get_internal_image(475);
            images_outfitinmate_701_11_24[0] = get_internal_image(195);
            images_outfitinmate_701_11_24[1] = get_internal_image(195);
            images_outfitinmate_701_12_0[0] = get_internal_image(1616);
            images_outfitinmate_701_12_0[1] = get_internal_image(1612);
            images_outfitinmate_701_12_8[0] = get_internal_image(1599);
            images_outfitinmate_701_12_8[1] = get_internal_image(1596);
            images_outfitinmate_701_12_16[0] = get_internal_image(1613);
            images_outfitinmate_701_12_16[1] = get_internal_image(1619);
            images_outfitinmate_701_12_24[0] = get_internal_image(1620);
            images_outfitinmate_701_12_24[1] = get_internal_image(1615);
            images_outfitinmate_701_13_0[0] = get_internal_image(1858);
            images_outfitinmate_701_13_0[1] = get_internal_image(1859);
            images_outfitinmate_701_13_8[0] = get_internal_image(1864);
            images_outfitinmate_701_13_8[1] = get_internal_image(1861);
            images_outfitinmate_701_13_16[0] = get_internal_image(1857);
            images_outfitinmate_701_13_16[1] = get_internal_image(1860);
            images_outfitinmate_701_13_24[0] = get_internal_image(1862);
            images_outfitinmate_701_13_24[1] = get_internal_image(1863);
            images_outfitinmate_701_14_0[0] = get_internal_image(1649);
            images_outfitinmate_701_14_0[1] = get_internal_image(1650);
            images_outfitinmate_701_14_8[0] = get_internal_image(1644);
            images_outfitinmate_701_14_8[1] = get_internal_image(1643);
            images_outfitinmate_701_14_16[0] = get_internal_image(1651);
            images_outfitinmate_701_14_16[1] = get_internal_image(1652);
            images_outfitinmate_701_14_24[0] = get_internal_image(1622);
            images_outfitinmate_701_14_24[1] = get_internal_image(1621);
            images_outfitinmate_701_15_0[0] = get_internal_image(1636);
            images_outfitinmate_701_15_0[1] = get_internal_image(1637);
            images_outfitinmate_701_15_8[0] = get_internal_image(1632);
            images_outfitinmate_701_15_8[1] = get_internal_image(1626);
            images_outfitinmate_701_15_16[0] = get_internal_image(1638);
            images_outfitinmate_701_15_16[1] = get_internal_image(1639);
            images_outfitinmate_701_15_24[0] = get_internal_image(1630);
            images_outfitinmate_701_15_24[1] = get_internal_image(1621);
            images_outfitinmate_701_16_0[0] = get_internal_image(1858);
            images_outfitinmate_701_16_0[1] = get_internal_image(1859);
            images_outfitinmate_701_16_8[0] = get_internal_image(1864);
            images_outfitinmate_701_16_8[1] = get_internal_image(1861);
            images_outfitinmate_701_16_16[0] = get_internal_image(1857);
            images_outfitinmate_701_16_16[1] = get_internal_image(1860);
            images_outfitinmate_701_16_24[0] = get_internal_image(1862);
            images_outfitinmate_701_16_24[1] = get_internal_image(1863);
            images_outfitinmate_701_17_0[0] = get_internal_image(2045);
            images_outfitinmate_701_17_0[1] = get_internal_image(2046);
            images_outfitinmate_701_17_8[0] = get_internal_image(2050);
            images_outfitinmate_701_17_8[1] = get_internal_image(2043);
            images_outfitinmate_701_17_16[0] = get_internal_image(2041);
            images_outfitinmate_701_17_16[1] = get_internal_image(2044);
            images_outfitinmate_701_17_24[0] = get_internal_image(2049);
            images_outfitinmate_701_17_24[1] = get_internal_image(2047);
            images_outfitinmate_701_18_24[0] = get_internal_image(1407);
            images_outfitinmate_701_18_24[1] = get_internal_image(2131);
            images_outfitinmate_701_18_24[2] = get_internal_image(2168);
            images_outfitinmate_701_18_24[3] = get_internal_image(437);
            images_outfitinmate_701_18_24[4] = get_internal_image(1425);
            images_outfitinmate_701_18_24[5] = get_internal_image(2126);
            images_outfitinmate_701_18_24[6] = get_internal_image(2171);
            images_outfitinmate_701_18_24[7] = get_internal_image(1412);
            images_outfitinmate_701_19_24[0] = get_internal_image(2328);
            images_outfitinmate_701_19_24[1] = get_internal_image(2329);
            images_outfitinmate_701_19_24[2] = get_internal_image(2307);
            images_outfitinmate_701_19_24[3] = get_internal_image(2331);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_outfitinmate_701(int x, int y)
{
    return new (Active::pool.create()) OutfitInmate_701(x, y);
}
static Image* images_canteenserving_705_0_0[6];
static Direction direction_canteenserving_705_0_0 = {0, 50, 50, 0, -1, images_canteenserving_705_0_0, 6};
static Animation anim_canteenserving_705_0 = {&direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, NULL, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0, &direction_canteenserving_705_0_0};
static Animation * anim_array_canteenserving_705[1] = {&anim_canteenserving_705_0};
static Animations anim_canteenserving_705 = {1, &anim_array_canteenserving_705[0]};
static bool anim_canteenserving_705_initialized;
class CanteenServing_705 : public Active
{
public:
    CanteenServing_705(int x, int y) : Active(x, y, CanteenServing_705_type)
    {
        // qualifiers: 63
#ifndef NDEBUG
        name = std::string("Canteen - Serving", 17);
#endif
        this->animations = &anim_canteenserving_705;
        if (!anim_canteenserving_705_initialized) {
            anim_canteenserving_705_initialized = true;
            images_canteenserving_705_0_0[0] = get_internal_image(855);
            images_canteenserving_705_0_0[1] = get_internal_image(903);
            images_canteenserving_705_0_0[2] = get_internal_image(904);
            images_canteenserving_705_0_0[3] = get_internal_image(905);
            images_canteenserving_705_0_0[4] = get_internal_image(906);
            images_canteenserving_705_0_0[5] = get_internal_image(907);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_canteenserving_705(int x, int y)
{
    return new (Active::pool.create()) CanteenServing_705(x, y);
}
static Image* images_fan_707_0_0[1];
static Direction direction_fan_707_0_0 = {0, 50, 50, 0, -1, images_fan_707_0_0, 1};
static Image* images_fan_707_0_24[1];
static Direction direction_fan_707_0_24 = {24, 50, 50, 0, -1, images_fan_707_0_24, 1};
static Animation anim_fan_707_0 = {&direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0, NULL, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, &direction_fan_707_0_24, NULL, &direction_fan_707_0_0, &direction_fan_707_0_0, &direction_fan_707_0_0};
static Animation * anim_array_fan_707[1] = {&anim_fan_707_0};
static Animations anim_fan_707 = {1, &anim_array_fan_707[0]};
static bool anim_fan_707_initialized;
class Fan_707 : public Active
{
public:
    Fan_707(int x, int y) : Active(x, y, Fan_707_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Fan", 3);
#endif
        this->animations = &anim_fan_707;
        if (!anim_fan_707_initialized) {
            anim_fan_707_initialized = true;
            images_fan_707_0_0[0] = get_internal_image(159);
            images_fan_707_0_24[0] = get_internal_image(96);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(1, 100);
    }
};
FrameObject * create_fan_707(int x, int y)
{
    return new (Active::pool.create()) Fan_707(x, y);
}
static Image* images_inmate7_708_0_0[2];
static Direction direction_inmate7_708_0_0 = {0, 10, 10, 0, -1, images_inmate7_708_0_0, 2};
static Image* images_inmate7_708_0_8[2];
static Direction direction_inmate7_708_0_8 = {8, 10, 10, 0, -1, images_inmate7_708_0_8, 2};
static Image* images_inmate7_708_0_16[2];
static Direction direction_inmate7_708_0_16 = {16, 10, 10, 0, -1, images_inmate7_708_0_16, 2};
static Image* images_inmate7_708_0_24[2];
static Direction direction_inmate7_708_0_24 = {24, 10, 10, 0, -1, images_inmate7_708_0_24, 2};
static Animation anim_inmate7_708_0 = {&direction_inmate7_708_0_0, &direction_inmate7_708_0_0, &direction_inmate7_708_0_0, &direction_inmate7_708_0_0, NULL, &direction_inmate7_708_0_8, &direction_inmate7_708_0_8, &direction_inmate7_708_0_8, &direction_inmate7_708_0_8, &direction_inmate7_708_0_8, &direction_inmate7_708_0_8, &direction_inmate7_708_0_8, NULL, &direction_inmate7_708_0_16, &direction_inmate7_708_0_16, &direction_inmate7_708_0_16, &direction_inmate7_708_0_16, &direction_inmate7_708_0_16, &direction_inmate7_708_0_16, &direction_inmate7_708_0_16, NULL, &direction_inmate7_708_0_24, &direction_inmate7_708_0_24, &direction_inmate7_708_0_24, &direction_inmate7_708_0_24, &direction_inmate7_708_0_24, &direction_inmate7_708_0_24, &direction_inmate7_708_0_24, NULL, &direction_inmate7_708_0_0, &direction_inmate7_708_0_0, &direction_inmate7_708_0_0};
static Image* images_inmate7_708_6_0[1];
static Direction direction_inmate7_708_6_0 = {0, 6, 6, 0, 1, images_inmate7_708_6_0, 1};
static Image* images_inmate7_708_6_8[1];
static Direction direction_inmate7_708_6_8 = {8, 6, 6, 0, 1, images_inmate7_708_6_8, 1};
static Image* images_inmate7_708_6_16[1];
static Direction direction_inmate7_708_6_16 = {16, 6, 6, 0, 1, images_inmate7_708_6_16, 1};
static Image* images_inmate7_708_6_24[1];
static Direction direction_inmate7_708_6_24 = {24, 6, 6, 0, 1, images_inmate7_708_6_24, 1};
static Animation anim_inmate7_708_6 = {&direction_inmate7_708_6_0, &direction_inmate7_708_6_0, &direction_inmate7_708_6_0, &direction_inmate7_708_6_0, NULL, &direction_inmate7_708_6_8, &direction_inmate7_708_6_8, &direction_inmate7_708_6_8, &direction_inmate7_708_6_8, &direction_inmate7_708_6_8, &direction_inmate7_708_6_8, &direction_inmate7_708_6_8, NULL, &direction_inmate7_708_6_16, &direction_inmate7_708_6_16, &direction_inmate7_708_6_16, &direction_inmate7_708_6_16, &direction_inmate7_708_6_16, &direction_inmate7_708_6_16, &direction_inmate7_708_6_16, NULL, &direction_inmate7_708_6_24, &direction_inmate7_708_6_24, &direction_inmate7_708_6_24, &direction_inmate7_708_6_24, &direction_inmate7_708_6_24, &direction_inmate7_708_6_24, &direction_inmate7_708_6_24, NULL, &direction_inmate7_708_6_0, &direction_inmate7_708_6_0, &direction_inmate7_708_6_0};
static Image* images_inmate7_708_8_0[2];
static Direction direction_inmate7_708_8_0 = {0, 10, 10, 0, -1, images_inmate7_708_8_0, 2};
static Image* images_inmate7_708_8_16[2];
static Direction direction_inmate7_708_8_16 = {16, 5, 5, 0, -1, images_inmate7_708_8_16, 2};
static Image* images_inmate7_708_8_24[3];
static Direction direction_inmate7_708_8_24 = {24, 10, 10, 0, -1, images_inmate7_708_8_24, 3};
static Animation anim_inmate7_708_8 = {&direction_inmate7_708_8_0, &direction_inmate7_708_8_0, &direction_inmate7_708_8_0, &direction_inmate7_708_8_0, &direction_inmate7_708_8_0, &direction_inmate7_708_8_0, &direction_inmate7_708_8_0, &direction_inmate7_708_8_0, NULL, &direction_inmate7_708_8_16, &direction_inmate7_708_8_16, &direction_inmate7_708_8_16, &direction_inmate7_708_8_16, &direction_inmate7_708_8_16, &direction_inmate7_708_8_16, &direction_inmate7_708_8_16, &direction_inmate7_708_8_16, &direction_inmate7_708_8_16, &direction_inmate7_708_8_16, &direction_inmate7_708_8_16, NULL, &direction_inmate7_708_8_24, &direction_inmate7_708_8_24, &direction_inmate7_708_8_24, &direction_inmate7_708_8_24, &direction_inmate7_708_8_24, &direction_inmate7_708_8_24, &direction_inmate7_708_8_24, NULL, &direction_inmate7_708_8_0, &direction_inmate7_708_8_0, &direction_inmate7_708_8_0};
static Image* images_inmate7_708_9_0[2];
static Direction direction_inmate7_708_9_0 = {0, 5, 5, 0, -1, images_inmate7_708_9_0, 2};
static Animation anim_inmate7_708_9 = {&direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, NULL, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0, &direction_inmate7_708_9_0};
static Image* images_inmate7_708_10_0[5];
static Direction direction_inmate7_708_10_0 = {0, 10, 10, 0, -1, images_inmate7_708_10_0, 5};
static Animation anim_inmate7_708_10 = {&direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, NULL, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0, &direction_inmate7_708_10_0};
static Image* images_inmate7_708_11_0[2];
static Direction direction_inmate7_708_11_0 = {0, 10, 10, 0, -1, images_inmate7_708_11_0, 2};
static Image* images_inmate7_708_11_8[2];
static Direction direction_inmate7_708_11_8 = {8, 10, 10, 0, -1, images_inmate7_708_11_8, 2};
static Image* images_inmate7_708_11_16[2];
static Direction direction_inmate7_708_11_16 = {16, 10, 10, 0, -1, images_inmate7_708_11_16, 2};
static Image* images_inmate7_708_11_24[2];
static Direction direction_inmate7_708_11_24 = {24, 10, 10, 0, -1, images_inmate7_708_11_24, 2};
static Animation anim_inmate7_708_11 = {&direction_inmate7_708_11_0, &direction_inmate7_708_11_0, &direction_inmate7_708_11_0, &direction_inmate7_708_11_0, NULL, &direction_inmate7_708_11_8, &direction_inmate7_708_11_8, &direction_inmate7_708_11_8, &direction_inmate7_708_11_8, &direction_inmate7_708_11_8, &direction_inmate7_708_11_8, &direction_inmate7_708_11_8, NULL, &direction_inmate7_708_11_16, &direction_inmate7_708_11_16, &direction_inmate7_708_11_16, &direction_inmate7_708_11_16, &direction_inmate7_708_11_16, &direction_inmate7_708_11_16, &direction_inmate7_708_11_16, NULL, &direction_inmate7_708_11_24, &direction_inmate7_708_11_24, &direction_inmate7_708_11_24, &direction_inmate7_708_11_24, &direction_inmate7_708_11_24, &direction_inmate7_708_11_24, &direction_inmate7_708_11_24, NULL, &direction_inmate7_708_11_0, &direction_inmate7_708_11_0, &direction_inmate7_708_11_0};
static Image* images_inmate7_708_18_24[8];
static Direction direction_inmate7_708_18_24 = {24, 10, 10, 0, -1, images_inmate7_708_18_24, 8};
static Animation anim_inmate7_708_18 = {&direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, NULL, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24, &direction_inmate7_708_18_24};
static Animation * anim_array_inmate7_708[19] = {&anim_inmate7_708_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate7_708_6, NULL, &anim_inmate7_708_8, &anim_inmate7_708_9, &anim_inmate7_708_10, &anim_inmate7_708_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate7_708_18};
static Animations anim_inmate7_708 = {19, &anim_array_inmate7_708[0]};
static bool anim_inmate7_708_initialized;
class Inmate7_708 : public Active
{
public:
    Inmate7_708(int x, int y) : Active(x, y, Inmate7_708_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 7", 8);
#endif
        this->animations = &anim_inmate7_708;
        if (!anim_inmate7_708_initialized) {
            anim_inmate7_708_initialized = true;
            images_inmate7_708_0_0[0] = get_internal_image(665);
            images_inmate7_708_0_0[1] = get_internal_image(666);
            images_inmate7_708_0_8[0] = get_internal_image(672);
            images_inmate7_708_0_8[1] = get_internal_image(671);
            images_inmate7_708_0_16[0] = get_internal_image(668);
            images_inmate7_708_0_16[1] = get_internal_image(667);
            images_inmate7_708_0_24[0] = get_internal_image(474);
            images_inmate7_708_0_24[1] = get_internal_image(604);
            images_inmate7_708_6_0[0] = get_internal_image(250);
            images_inmate7_708_6_8[0] = get_internal_image(1063);
            images_inmate7_708_6_16[0] = get_internal_image(602);
            images_inmate7_708_6_24[0] = get_internal_image(1070);
            images_inmate7_708_8_0[0] = get_internal_image(393);
            images_inmate7_708_8_0[1] = get_internal_image(648);
            images_inmate7_708_8_16[0] = get_internal_image(682);
            images_inmate7_708_8_16[1] = get_internal_image(687);
            images_inmate7_708_8_24[0] = get_internal_image(454);
            images_inmate7_708_8_24[1] = get_internal_image(661);
            images_inmate7_708_8_24[2] = get_internal_image(636);
            images_inmate7_708_9_0[0] = get_internal_image(1301);
            images_inmate7_708_9_0[1] = get_internal_image(1494);
            images_inmate7_708_10_0[0] = get_internal_image(595);
            images_inmate7_708_10_0[1] = get_internal_image(271);
            images_inmate7_708_10_0[2] = get_internal_image(270);
            images_inmate7_708_10_0[3] = get_internal_image(270);
            images_inmate7_708_10_0[4] = get_internal_image(271);
            images_inmate7_708_11_0[0] = get_internal_image(645);
            images_inmate7_708_11_0[1] = get_internal_image(646);
            images_inmate7_708_11_8[0] = get_internal_image(675);
            images_inmate7_708_11_8[1] = get_internal_image(673);
            images_inmate7_708_11_16[0] = get_internal_image(669);
            images_inmate7_708_11_16[1] = get_internal_image(670);
            images_inmate7_708_11_24[0] = get_internal_image(713);
            images_inmate7_708_11_24[1] = get_internal_image(714);
            images_inmate7_708_18_24[0] = get_internal_image(1965);
            images_inmate7_708_18_24[1] = get_internal_image(2069);
            images_inmate7_708_18_24[2] = get_internal_image(2064);
            images_inmate7_708_18_24[3] = get_internal_image(2066);
            images_inmate7_708_18_24[4] = get_internal_image(2065);
            images_inmate7_708_18_24[5] = get_internal_image(2068);
            images_inmate7_708_18_24[6] = get_internal_image(2064);
            images_inmate7_708_18_24[7] = get_internal_image(2067);
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
FrameObject * create_inmate7_708(int x, int y)
{
    return new (Active::pool.create()) Inmate7_708(x, y);
}
static Image* images_inmate8_709_0_0[2];
static Direction direction_inmate8_709_0_0 = {0, 10, 10, 0, -1, images_inmate8_709_0_0, 2};
static Image* images_inmate8_709_0_8[2];
static Direction direction_inmate8_709_0_8 = {8, 10, 10, 0, -1, images_inmate8_709_0_8, 2};
static Image* images_inmate8_709_0_16[2];
static Direction direction_inmate8_709_0_16 = {16, 10, 10, 0, -1, images_inmate8_709_0_16, 2};
static Image* images_inmate8_709_0_24[2];
static Direction direction_inmate8_709_0_24 = {24, 10, 10, 0, -1, images_inmate8_709_0_24, 2};
static Animation anim_inmate8_709_0 = {&direction_inmate8_709_0_0, &direction_inmate8_709_0_0, &direction_inmate8_709_0_0, &direction_inmate8_709_0_0, NULL, &direction_inmate8_709_0_8, &direction_inmate8_709_0_8, &direction_inmate8_709_0_8, &direction_inmate8_709_0_8, &direction_inmate8_709_0_8, &direction_inmate8_709_0_8, &direction_inmate8_709_0_8, NULL, &direction_inmate8_709_0_16, &direction_inmate8_709_0_16, &direction_inmate8_709_0_16, &direction_inmate8_709_0_16, &direction_inmate8_709_0_16, &direction_inmate8_709_0_16, &direction_inmate8_709_0_16, NULL, &direction_inmate8_709_0_24, &direction_inmate8_709_0_24, &direction_inmate8_709_0_24, &direction_inmate8_709_0_24, &direction_inmate8_709_0_24, &direction_inmate8_709_0_24, &direction_inmate8_709_0_24, NULL, &direction_inmate8_709_0_0, &direction_inmate8_709_0_0, &direction_inmate8_709_0_0};
static Image* images_inmate8_709_6_0[1];
static Direction direction_inmate8_709_6_0 = {0, 6, 6, 0, 1, images_inmate8_709_6_0, 1};
static Image* images_inmate8_709_6_8[1];
static Direction direction_inmate8_709_6_8 = {8, 6, 6, 0, 1, images_inmate8_709_6_8, 1};
static Image* images_inmate8_709_6_16[1];
static Direction direction_inmate8_709_6_16 = {16, 6, 6, 0, 1, images_inmate8_709_6_16, 1};
static Image* images_inmate8_709_6_24[1];
static Direction direction_inmate8_709_6_24 = {24, 6, 6, 0, 1, images_inmate8_709_6_24, 1};
static Animation anim_inmate8_709_6 = {&direction_inmate8_709_6_0, &direction_inmate8_709_6_0, &direction_inmate8_709_6_0, &direction_inmate8_709_6_0, NULL, &direction_inmate8_709_6_8, &direction_inmate8_709_6_8, &direction_inmate8_709_6_8, &direction_inmate8_709_6_8, &direction_inmate8_709_6_8, &direction_inmate8_709_6_8, &direction_inmate8_709_6_8, NULL, &direction_inmate8_709_6_16, &direction_inmate8_709_6_16, &direction_inmate8_709_6_16, &direction_inmate8_709_6_16, &direction_inmate8_709_6_16, &direction_inmate8_709_6_16, &direction_inmate8_709_6_16, NULL, &direction_inmate8_709_6_24, &direction_inmate8_709_6_24, &direction_inmate8_709_6_24, &direction_inmate8_709_6_24, &direction_inmate8_709_6_24, &direction_inmate8_709_6_24, &direction_inmate8_709_6_24, NULL, &direction_inmate8_709_6_0, &direction_inmate8_709_6_0, &direction_inmate8_709_6_0};
static Image* images_inmate8_709_8_0[2];
static Direction direction_inmate8_709_8_0 = {0, 10, 10, 0, -1, images_inmate8_709_8_0, 2};
static Image* images_inmate8_709_8_16[2];
static Direction direction_inmate8_709_8_16 = {16, 5, 5, 0, -1, images_inmate8_709_8_16, 2};
static Image* images_inmate8_709_8_24[3];
static Direction direction_inmate8_709_8_24 = {24, 10, 10, 0, -1, images_inmate8_709_8_24, 3};
static Animation anim_inmate8_709_8 = {&direction_inmate8_709_8_0, &direction_inmate8_709_8_0, &direction_inmate8_709_8_0, &direction_inmate8_709_8_0, &direction_inmate8_709_8_0, &direction_inmate8_709_8_0, &direction_inmate8_709_8_0, &direction_inmate8_709_8_0, NULL, &direction_inmate8_709_8_16, &direction_inmate8_709_8_16, &direction_inmate8_709_8_16, &direction_inmate8_709_8_16, &direction_inmate8_709_8_16, &direction_inmate8_709_8_16, &direction_inmate8_709_8_16, &direction_inmate8_709_8_16, &direction_inmate8_709_8_16, &direction_inmate8_709_8_16, &direction_inmate8_709_8_16, NULL, &direction_inmate8_709_8_24, &direction_inmate8_709_8_24, &direction_inmate8_709_8_24, &direction_inmate8_709_8_24, &direction_inmate8_709_8_24, &direction_inmate8_709_8_24, &direction_inmate8_709_8_24, NULL, &direction_inmate8_709_8_0, &direction_inmate8_709_8_0, &direction_inmate8_709_8_0};
static Image* images_inmate8_709_9_0[2];
static Direction direction_inmate8_709_9_0 = {0, 5, 5, 0, -1, images_inmate8_709_9_0, 2};
static Animation anim_inmate8_709_9 = {&direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, NULL, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0, &direction_inmate8_709_9_0};
static Image* images_inmate8_709_10_0[5];
static Direction direction_inmate8_709_10_0 = {0, 10, 10, 0, -1, images_inmate8_709_10_0, 5};
static Animation anim_inmate8_709_10 = {&direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, NULL, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0, &direction_inmate8_709_10_0};
static Image* images_inmate8_709_11_0[2];
static Direction direction_inmate8_709_11_0 = {0, 6, 6, 0, -1, images_inmate8_709_11_0, 2};
static Image* images_inmate8_709_11_8[2];
static Direction direction_inmate8_709_11_8 = {8, 6, 6, 0, -1, images_inmate8_709_11_8, 2};
static Image* images_inmate8_709_11_16[2];
static Direction direction_inmate8_709_11_16 = {16, 6, 6, 0, -1, images_inmate8_709_11_16, 2};
static Image* images_inmate8_709_11_24[2];
static Direction direction_inmate8_709_11_24 = {24, 6, 6, 0, -1, images_inmate8_709_11_24, 2};
static Animation anim_inmate8_709_11 = {&direction_inmate8_709_11_0, &direction_inmate8_709_11_0, &direction_inmate8_709_11_0, &direction_inmate8_709_11_0, NULL, &direction_inmate8_709_11_8, &direction_inmate8_709_11_8, &direction_inmate8_709_11_8, &direction_inmate8_709_11_8, &direction_inmate8_709_11_8, &direction_inmate8_709_11_8, &direction_inmate8_709_11_8, NULL, &direction_inmate8_709_11_16, &direction_inmate8_709_11_16, &direction_inmate8_709_11_16, &direction_inmate8_709_11_16, &direction_inmate8_709_11_16, &direction_inmate8_709_11_16, &direction_inmate8_709_11_16, NULL, &direction_inmate8_709_11_24, &direction_inmate8_709_11_24, &direction_inmate8_709_11_24, &direction_inmate8_709_11_24, &direction_inmate8_709_11_24, &direction_inmate8_709_11_24, &direction_inmate8_709_11_24, NULL, &direction_inmate8_709_11_0, &direction_inmate8_709_11_0, &direction_inmate8_709_11_0};
static Image* images_inmate8_709_18_24[8];
static Direction direction_inmate8_709_18_24 = {24, 10, 10, 0, -1, images_inmate8_709_18_24, 8};
static Animation anim_inmate8_709_18 = {&direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, NULL, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24, &direction_inmate8_709_18_24};
static Animation * anim_array_inmate8_709[19] = {&anim_inmate8_709_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate8_709_6, NULL, &anim_inmate8_709_8, &anim_inmate8_709_9, &anim_inmate8_709_10, &anim_inmate8_709_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate8_709_18};
static Animations anim_inmate8_709 = {19, &anim_array_inmate8_709[0]};
static bool anim_inmate8_709_initialized;
class Inmate8_709 : public Active
{
public:
    Inmate8_709(int x, int y) : Active(x, y, Inmate8_709_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 8", 8);
#endif
        this->animations = &anim_inmate8_709;
        if (!anim_inmate8_709_initialized) {
            anim_inmate8_709_initialized = true;
            images_inmate8_709_0_0[0] = get_internal_image(293);
            images_inmate8_709_0_0[1] = get_internal_image(282);
            images_inmate8_709_0_8[0] = get_internal_image(302);
            images_inmate8_709_0_8[1] = get_internal_image(301);
            images_inmate8_709_0_16[0] = get_internal_image(297);
            images_inmate8_709_0_16[1] = get_internal_image(295);
            images_inmate8_709_0_24[0] = get_internal_image(299);
            images_inmate8_709_0_24[1] = get_internal_image(300);
            images_inmate8_709_6_0[0] = get_internal_image(801);
            images_inmate8_709_6_8[0] = get_internal_image(800);
            images_inmate8_709_6_16[0] = get_internal_image(798);
            images_inmate8_709_6_24[0] = get_internal_image(802);
            images_inmate8_709_8_0[0] = get_internal_image(780);
            images_inmate8_709_8_0[1] = get_internal_image(781);
            images_inmate8_709_8_16[0] = get_internal_image(319);
            images_inmate8_709_8_16[1] = get_internal_image(323);
            images_inmate8_709_8_24[0] = get_internal_image(700);
            images_inmate8_709_8_24[1] = get_internal_image(701);
            images_inmate8_709_8_24[2] = get_internal_image(702);
            images_inmate8_709_9_0[0] = get_internal_image(1502);
            images_inmate8_709_9_0[1] = get_internal_image(1506);
            images_inmate8_709_10_0[0] = get_internal_image(321);
            images_inmate8_709_10_0[1] = get_internal_image(333);
            images_inmate8_709_10_0[2] = get_internal_image(332);
            images_inmate8_709_10_0[3] = get_internal_image(335);
            images_inmate8_709_10_0[4] = get_internal_image(336);
            images_inmate8_709_11_0[0] = get_internal_image(1086);
            images_inmate8_709_11_0[1] = get_internal_image(1087);
            images_inmate8_709_11_8[0] = get_internal_image(344);
            images_inmate8_709_11_8[1] = get_internal_image(343);
            images_inmate8_709_11_16[0] = get_internal_image(1254);
            images_inmate8_709_11_16[1] = get_internal_image(1085);
            images_inmate8_709_11_24[0] = get_internal_image(728);
            images_inmate8_709_11_24[1] = get_internal_image(729);
            images_inmate8_709_18_24[0] = get_internal_image(2099);
            images_inmate8_709_18_24[1] = get_internal_image(2112);
            images_inmate8_709_18_24[2] = get_internal_image(2107);
            images_inmate8_709_18_24[3] = get_internal_image(2108);
            images_inmate8_709_18_24[4] = get_internal_image(2109);
            images_inmate8_709_18_24[5] = get_internal_image(2114);
            images_inmate8_709_18_24[6] = get_internal_image(2110);
            images_inmate8_709_18_24[7] = get_internal_image(2111);
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
FrameObject * create_inmate8_709(int x, int y)
{
    return new (Active::pool.create()) Inmate8_709(x, y);
}
static Image* images_inmate9_710_0_0[2];
static Direction direction_inmate9_710_0_0 = {0, 10, 10, 0, -1, images_inmate9_710_0_0, 2};
static Image* images_inmate9_710_0_8[2];
static Direction direction_inmate9_710_0_8 = {8, 10, 10, 0, -1, images_inmate9_710_0_8, 2};
static Image* images_inmate9_710_0_16[2];
static Direction direction_inmate9_710_0_16 = {16, 10, 10, 0, -1, images_inmate9_710_0_16, 2};
static Image* images_inmate9_710_0_24[2];
static Direction direction_inmate9_710_0_24 = {24, 10, 10, 0, -1, images_inmate9_710_0_24, 2};
static Animation anim_inmate9_710_0 = {&direction_inmate9_710_0_0, &direction_inmate9_710_0_0, &direction_inmate9_710_0_0, &direction_inmate9_710_0_0, NULL, &direction_inmate9_710_0_8, &direction_inmate9_710_0_8, &direction_inmate9_710_0_8, &direction_inmate9_710_0_8, &direction_inmate9_710_0_8, &direction_inmate9_710_0_8, &direction_inmate9_710_0_8, NULL, &direction_inmate9_710_0_16, &direction_inmate9_710_0_16, &direction_inmate9_710_0_16, &direction_inmate9_710_0_16, &direction_inmate9_710_0_16, &direction_inmate9_710_0_16, &direction_inmate9_710_0_16, NULL, &direction_inmate9_710_0_24, &direction_inmate9_710_0_24, &direction_inmate9_710_0_24, &direction_inmate9_710_0_24, &direction_inmate9_710_0_24, &direction_inmate9_710_0_24, &direction_inmate9_710_0_24, NULL, &direction_inmate9_710_0_0, &direction_inmate9_710_0_0, &direction_inmate9_710_0_0};
static Image* images_inmate9_710_6_0[1];
static Direction direction_inmate9_710_6_0 = {0, 6, 6, 0, 1, images_inmate9_710_6_0, 1};
static Image* images_inmate9_710_6_8[1];
static Direction direction_inmate9_710_6_8 = {8, 6, 6, 0, 1, images_inmate9_710_6_8, 1};
static Image* images_inmate9_710_6_16[1];
static Direction direction_inmate9_710_6_16 = {16, 6, 6, 0, 1, images_inmate9_710_6_16, 1};
static Image* images_inmate9_710_6_24[1];
static Direction direction_inmate9_710_6_24 = {24, 6, 6, 0, 1, images_inmate9_710_6_24, 1};
static Animation anim_inmate9_710_6 = {&direction_inmate9_710_6_0, &direction_inmate9_710_6_0, &direction_inmate9_710_6_0, &direction_inmate9_710_6_0, NULL, &direction_inmate9_710_6_8, &direction_inmate9_710_6_8, &direction_inmate9_710_6_8, &direction_inmate9_710_6_8, &direction_inmate9_710_6_8, &direction_inmate9_710_6_8, &direction_inmate9_710_6_8, NULL, &direction_inmate9_710_6_16, &direction_inmate9_710_6_16, &direction_inmate9_710_6_16, &direction_inmate9_710_6_16, &direction_inmate9_710_6_16, &direction_inmate9_710_6_16, &direction_inmate9_710_6_16, NULL, &direction_inmate9_710_6_24, &direction_inmate9_710_6_24, &direction_inmate9_710_6_24, &direction_inmate9_710_6_24, &direction_inmate9_710_6_24, &direction_inmate9_710_6_24, &direction_inmate9_710_6_24, NULL, &direction_inmate9_710_6_0, &direction_inmate9_710_6_0, &direction_inmate9_710_6_0};
static Image* images_inmate9_710_8_0[2];
static Direction direction_inmate9_710_8_0 = {0, 10, 10, 0, -1, images_inmate9_710_8_0, 2};
static Image* images_inmate9_710_8_16[2];
static Direction direction_inmate9_710_8_16 = {16, 5, 5, 0, -1, images_inmate9_710_8_16, 2};
static Image* images_inmate9_710_8_24[3];
static Direction direction_inmate9_710_8_24 = {24, 10, 10, 0, -1, images_inmate9_710_8_24, 3};
static Animation anim_inmate9_710_8 = {&direction_inmate9_710_8_0, &direction_inmate9_710_8_0, &direction_inmate9_710_8_0, &direction_inmate9_710_8_0, &direction_inmate9_710_8_0, &direction_inmate9_710_8_0, &direction_inmate9_710_8_0, &direction_inmate9_710_8_0, NULL, &direction_inmate9_710_8_16, &direction_inmate9_710_8_16, &direction_inmate9_710_8_16, &direction_inmate9_710_8_16, &direction_inmate9_710_8_16, &direction_inmate9_710_8_16, &direction_inmate9_710_8_16, &direction_inmate9_710_8_16, &direction_inmate9_710_8_16, &direction_inmate9_710_8_16, &direction_inmate9_710_8_16, NULL, &direction_inmate9_710_8_24, &direction_inmate9_710_8_24, &direction_inmate9_710_8_24, &direction_inmate9_710_8_24, &direction_inmate9_710_8_24, &direction_inmate9_710_8_24, &direction_inmate9_710_8_24, NULL, &direction_inmate9_710_8_0, &direction_inmate9_710_8_0, &direction_inmate9_710_8_0};
static Image* images_inmate9_710_9_0[2];
static Direction direction_inmate9_710_9_0 = {0, 5, 5, 0, -1, images_inmate9_710_9_0, 2};
static Animation anim_inmate9_710_9 = {&direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, NULL, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0, &direction_inmate9_710_9_0};
static Image* images_inmate9_710_10_0[5];
static Direction direction_inmate9_710_10_0 = {0, 10, 10, 0, -1, images_inmate9_710_10_0, 5};
static Animation anim_inmate9_710_10 = {&direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, NULL, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0, &direction_inmate9_710_10_0};
static Image* images_inmate9_710_11_0[2];
static Direction direction_inmate9_710_11_0 = {0, 10, 10, 0, -1, images_inmate9_710_11_0, 2};
static Image* images_inmate9_710_11_8[2];
static Direction direction_inmate9_710_11_8 = {8, 10, 10, 0, -1, images_inmate9_710_11_8, 2};
static Image* images_inmate9_710_11_16[2];
static Direction direction_inmate9_710_11_16 = {16, 10, 10, 0, -1, images_inmate9_710_11_16, 2};
static Image* images_inmate9_710_11_24[2];
static Direction direction_inmate9_710_11_24 = {24, 10, 10, 0, -1, images_inmate9_710_11_24, 2};
static Animation anim_inmate9_710_11 = {&direction_inmate9_710_11_0, &direction_inmate9_710_11_0, &direction_inmate9_710_11_0, &direction_inmate9_710_11_0, NULL, &direction_inmate9_710_11_8, &direction_inmate9_710_11_8, &direction_inmate9_710_11_8, &direction_inmate9_710_11_8, &direction_inmate9_710_11_8, &direction_inmate9_710_11_8, &direction_inmate9_710_11_8, NULL, &direction_inmate9_710_11_16, &direction_inmate9_710_11_16, &direction_inmate9_710_11_16, &direction_inmate9_710_11_16, &direction_inmate9_710_11_16, &direction_inmate9_710_11_16, &direction_inmate9_710_11_16, NULL, &direction_inmate9_710_11_24, &direction_inmate9_710_11_24, &direction_inmate9_710_11_24, &direction_inmate9_710_11_24, &direction_inmate9_710_11_24, &direction_inmate9_710_11_24, &direction_inmate9_710_11_24, NULL, &direction_inmate9_710_11_0, &direction_inmate9_710_11_0, &direction_inmate9_710_11_0};
static Image* images_inmate9_710_18_24[8];
static Direction direction_inmate9_710_18_24 = {24, 10, 10, 0, -1, images_inmate9_710_18_24, 8};
static Animation anim_inmate9_710_18 = {&direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, NULL, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24, &direction_inmate9_710_18_24};
static Animation * anim_array_inmate9_710[19] = {&anim_inmate9_710_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate9_710_6, NULL, &anim_inmate9_710_8, &anim_inmate9_710_9, &anim_inmate9_710_10, &anim_inmate9_710_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate9_710_18};
static Animations anim_inmate9_710 = {19, &anim_array_inmate9_710[0]};
static bool anim_inmate9_710_initialized;
class Inmate9_710 : public Active
{
public:
    Inmate9_710(int x, int y) : Active(x, y, Inmate9_710_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 9", 8);
#endif
        this->animations = &anim_inmate9_710;
        if (!anim_inmate9_710_initialized) {
            anim_inmate9_710_initialized = true;
            images_inmate9_710_0_0[0] = get_internal_image(441);
            images_inmate9_710_0_0[1] = get_internal_image(442);
            images_inmate9_710_0_8[0] = get_internal_image(459);
            images_inmate9_710_0_8[1] = get_internal_image(460);
            images_inmate9_710_0_16[0] = get_internal_image(447);
            images_inmate9_710_0_16[1] = get_internal_image(444);
            images_inmate9_710_0_24[0] = get_internal_image(384);
            images_inmate9_710_0_24[1] = get_internal_image(381);
            images_inmate9_710_6_0[0] = get_internal_image(170);
            images_inmate9_710_6_8[0] = get_internal_image(601);
            images_inmate9_710_6_16[0] = get_internal_image(317);
            images_inmate9_710_6_24[0] = get_internal_image(1067);
            images_inmate9_710_8_0[0] = get_internal_image(367);
            images_inmate9_710_8_0[1] = get_internal_image(590);
            images_inmate9_710_8_16[0] = get_internal_image(465);
            images_inmate9_710_8_16[1] = get_internal_image(464);
            images_inmate9_710_8_24[0] = get_internal_image(201);
            images_inmate9_710_8_24[1] = get_internal_image(202);
            images_inmate9_710_8_24[2] = get_internal_image(186);
            images_inmate9_710_9_0[0] = get_internal_image(1495);
            images_inmate9_710_9_0[1] = get_internal_image(1496);
            images_inmate9_710_10_0[0] = get_internal_image(595);
            images_inmate9_710_10_0[1] = get_internal_image(461);
            images_inmate9_710_10_0[2] = get_internal_image(456);
            images_inmate9_710_10_0[3] = get_internal_image(456);
            images_inmate9_710_10_0[4] = get_internal_image(461);
            images_inmate9_710_11_0[0] = get_internal_image(413);
            images_inmate9_710_11_0[1] = get_internal_image(404);
            images_inmate9_710_11_8[0] = get_internal_image(457);
            images_inmate9_710_11_8[1] = get_internal_image(458);
            images_inmate9_710_11_16[0] = get_internal_image(448);
            images_inmate9_710_11_16[1] = get_internal_image(450);
            images_inmate9_710_11_24[0] = get_internal_image(715);
            images_inmate9_710_11_24[1] = get_internal_image(716);
            images_inmate9_710_18_24[0] = get_internal_image(2070);
            images_inmate9_710_18_24[1] = get_internal_image(2076);
            images_inmate9_710_18_24[2] = get_internal_image(2071);
            images_inmate9_710_18_24[3] = get_internal_image(2072);
            images_inmate9_710_18_24[4] = get_internal_image(2073);
            images_inmate9_710_18_24[5] = get_internal_image(2075);
            images_inmate9_710_18_24[6] = get_internal_image(2071);
            images_inmate9_710_18_24[7] = get_internal_image(2074);
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
FrameObject * create_inmate9_710(int x, int y)
{
    return new (Active::pool.create()) Inmate9_710(x, y);
}
static Image* images_inmate10_711_0_0[2];
static Direction direction_inmate10_711_0_0 = {0, 10, 10, 0, -1, images_inmate10_711_0_0, 2};
static Image* images_inmate10_711_0_8[2];
static Direction direction_inmate10_711_0_8 = {8, 10, 10, 0, -1, images_inmate10_711_0_8, 2};
static Image* images_inmate10_711_0_16[2];
static Direction direction_inmate10_711_0_16 = {16, 10, 10, 0, -1, images_inmate10_711_0_16, 2};
static Image* images_inmate10_711_0_24[2];
static Direction direction_inmate10_711_0_24 = {24, 10, 10, 0, -1, images_inmate10_711_0_24, 2};
static Animation anim_inmate10_711_0 = {&direction_inmate10_711_0_0, &direction_inmate10_711_0_0, &direction_inmate10_711_0_0, &direction_inmate10_711_0_0, NULL, &direction_inmate10_711_0_8, &direction_inmate10_711_0_8, &direction_inmate10_711_0_8, &direction_inmate10_711_0_8, &direction_inmate10_711_0_8, &direction_inmate10_711_0_8, &direction_inmate10_711_0_8, NULL, &direction_inmate10_711_0_16, &direction_inmate10_711_0_16, &direction_inmate10_711_0_16, &direction_inmate10_711_0_16, &direction_inmate10_711_0_16, &direction_inmate10_711_0_16, &direction_inmate10_711_0_16, NULL, &direction_inmate10_711_0_24, &direction_inmate10_711_0_24, &direction_inmate10_711_0_24, &direction_inmate10_711_0_24, &direction_inmate10_711_0_24, &direction_inmate10_711_0_24, &direction_inmate10_711_0_24, NULL, &direction_inmate10_711_0_0, &direction_inmate10_711_0_0, &direction_inmate10_711_0_0};
static Image* images_inmate10_711_6_0[1];
static Direction direction_inmate10_711_6_0 = {0, 6, 6, 0, 1, images_inmate10_711_6_0, 1};
static Image* images_inmate10_711_6_8[1];
static Direction direction_inmate10_711_6_8 = {8, 6, 6, 0, 1, images_inmate10_711_6_8, 1};
static Image* images_inmate10_711_6_16[1];
static Direction direction_inmate10_711_6_16 = {16, 6, 6, 0, 1, images_inmate10_711_6_16, 1};
static Image* images_inmate10_711_6_24[1];
static Direction direction_inmate10_711_6_24 = {24, 6, 6, 0, 1, images_inmate10_711_6_24, 1};
static Animation anim_inmate10_711_6 = {&direction_inmate10_711_6_0, &direction_inmate10_711_6_0, &direction_inmate10_711_6_0, &direction_inmate10_711_6_0, NULL, &direction_inmate10_711_6_8, &direction_inmate10_711_6_8, &direction_inmate10_711_6_8, &direction_inmate10_711_6_8, &direction_inmate10_711_6_8, &direction_inmate10_711_6_8, &direction_inmate10_711_6_8, NULL, &direction_inmate10_711_6_16, &direction_inmate10_711_6_16, &direction_inmate10_711_6_16, &direction_inmate10_711_6_16, &direction_inmate10_711_6_16, &direction_inmate10_711_6_16, &direction_inmate10_711_6_16, NULL, &direction_inmate10_711_6_24, &direction_inmate10_711_6_24, &direction_inmate10_711_6_24, &direction_inmate10_711_6_24, &direction_inmate10_711_6_24, &direction_inmate10_711_6_24, &direction_inmate10_711_6_24, NULL, &direction_inmate10_711_6_0, &direction_inmate10_711_6_0, &direction_inmate10_711_6_0};
static Image* images_inmate10_711_8_0[2];
static Direction direction_inmate10_711_8_0 = {0, 10, 10, 0, -1, images_inmate10_711_8_0, 2};
static Image* images_inmate10_711_8_16[2];
static Direction direction_inmate10_711_8_16 = {16, 5, 5, 0, -1, images_inmate10_711_8_16, 2};
static Image* images_inmate10_711_8_24[3];
static Direction direction_inmate10_711_8_24 = {24, 10, 10, 0, -1, images_inmate10_711_8_24, 3};
static Animation anim_inmate10_711_8 = {&direction_inmate10_711_8_0, &direction_inmate10_711_8_0, &direction_inmate10_711_8_0, &direction_inmate10_711_8_0, &direction_inmate10_711_8_0, &direction_inmate10_711_8_0, &direction_inmate10_711_8_0, &direction_inmate10_711_8_0, NULL, &direction_inmate10_711_8_16, &direction_inmate10_711_8_16, &direction_inmate10_711_8_16, &direction_inmate10_711_8_16, &direction_inmate10_711_8_16, &direction_inmate10_711_8_16, &direction_inmate10_711_8_16, &direction_inmate10_711_8_16, &direction_inmate10_711_8_16, &direction_inmate10_711_8_16, &direction_inmate10_711_8_16, NULL, &direction_inmate10_711_8_24, &direction_inmate10_711_8_24, &direction_inmate10_711_8_24, &direction_inmate10_711_8_24, &direction_inmate10_711_8_24, &direction_inmate10_711_8_24, &direction_inmate10_711_8_24, NULL, &direction_inmate10_711_8_0, &direction_inmate10_711_8_0, &direction_inmate10_711_8_0};
static Image* images_inmate10_711_9_0[2];
static Direction direction_inmate10_711_9_0 = {0, 5, 5, 0, -1, images_inmate10_711_9_0, 2};
static Animation anim_inmate10_711_9 = {&direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, NULL, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0, &direction_inmate10_711_9_0};
static Image* images_inmate10_711_10_0[5];
static Direction direction_inmate10_711_10_0 = {0, 10, 10, 0, -1, images_inmate10_711_10_0, 5};
static Animation anim_inmate10_711_10 = {&direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, NULL, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0, &direction_inmate10_711_10_0};
static Image* images_inmate10_711_11_0[2];
static Direction direction_inmate10_711_11_0 = {0, 10, 10, 0, -1, images_inmate10_711_11_0, 2};
static Image* images_inmate10_711_11_8[2];
static Direction direction_inmate10_711_11_8 = {8, 10, 10, 0, -1, images_inmate10_711_11_8, 2};
static Image* images_inmate10_711_11_16[2];
static Direction direction_inmate10_711_11_16 = {16, 10, 10, 0, -1, images_inmate10_711_11_16, 2};
static Image* images_inmate10_711_11_24[2];
static Direction direction_inmate10_711_11_24 = {24, 10, 10, 0, -1, images_inmate10_711_11_24, 2};
static Animation anim_inmate10_711_11 = {&direction_inmate10_711_11_0, &direction_inmate10_711_11_0, &direction_inmate10_711_11_0, &direction_inmate10_711_11_0, NULL, &direction_inmate10_711_11_8, &direction_inmate10_711_11_8, &direction_inmate10_711_11_8, &direction_inmate10_711_11_8, &direction_inmate10_711_11_8, &direction_inmate10_711_11_8, &direction_inmate10_711_11_8, NULL, &direction_inmate10_711_11_16, &direction_inmate10_711_11_16, &direction_inmate10_711_11_16, &direction_inmate10_711_11_16, &direction_inmate10_711_11_16, &direction_inmate10_711_11_16, &direction_inmate10_711_11_16, NULL, &direction_inmate10_711_11_24, &direction_inmate10_711_11_24, &direction_inmate10_711_11_24, &direction_inmate10_711_11_24, &direction_inmate10_711_11_24, &direction_inmate10_711_11_24, &direction_inmate10_711_11_24, NULL, &direction_inmate10_711_11_0, &direction_inmate10_711_11_0, &direction_inmate10_711_11_0};
static Image* images_inmate10_711_18_24[8];
static Direction direction_inmate10_711_18_24 = {24, 10, 10, 0, -1, images_inmate10_711_18_24, 8};
static Animation anim_inmate10_711_18 = {&direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, NULL, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24, &direction_inmate10_711_18_24};
static Animation * anim_array_inmate10_711[19] = {&anim_inmate10_711_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate10_711_6, NULL, &anim_inmate10_711_8, &anim_inmate10_711_9, &anim_inmate10_711_10, &anim_inmate10_711_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate10_711_18};
static Animations anim_inmate10_711 = {19, &anim_array_inmate10_711[0]};
static bool anim_inmate10_711_initialized;
class Inmate10_711 : public Active
{
public:
    Inmate10_711(int x, int y) : Active(x, y, Inmate10_711_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 10", 9);
#endif
        this->animations = &anim_inmate10_711;
        if (!anim_inmate10_711_initialized) {
            anim_inmate10_711_initialized = true;
            images_inmate10_711_0_0[0] = get_internal_image(277);
            images_inmate10_711_0_0[1] = get_internal_image(280);
            images_inmate10_711_0_8[0] = get_internal_image(546);
            images_inmate10_711_0_8[1] = get_internal_image(764);
            images_inmate10_711_0_16[0] = get_internal_image(266);
            images_inmate10_711_0_16[1] = get_internal_image(281);
            images_inmate10_711_0_24[0] = get_internal_image(239);
            images_inmate10_711_0_24[1] = get_internal_image(245);
            images_inmate10_711_6_0[0] = get_internal_image(161);
            images_inmate10_711_6_8[0] = get_internal_image(1064);
            images_inmate10_711_6_16[0] = get_internal_image(220);
            images_inmate10_711_6_24[0] = get_internal_image(1069);
            images_inmate10_711_8_0[0] = get_internal_image(607);
            images_inmate10_711_8_0[1] = get_internal_image(612);
            images_inmate10_711_8_16[0] = get_internal_image(463);
            images_inmate10_711_8_16[1] = get_internal_image(476);
            images_inmate10_711_8_24[0] = get_internal_image(681);
            images_inmate10_711_8_24[1] = get_internal_image(688);
            images_inmate10_711_8_24[2] = get_internal_image(694);
            images_inmate10_711_9_0[0] = get_internal_image(1500);
            images_inmate10_711_9_0[1] = get_internal_image(1501);
            images_inmate10_711_10_0[0] = get_internal_image(292);
            images_inmate10_711_10_0[1] = get_internal_image(290);
            images_inmate10_711_10_0[2] = get_internal_image(275);
            images_inmate10_711_10_0[3] = get_internal_image(275);
            images_inmate10_711_10_0[4] = get_internal_image(290);
            images_inmate10_711_11_0[0] = get_internal_image(228);
            images_inmate10_711_11_0[1] = get_internal_image(255);
            images_inmate10_711_11_8[0] = get_internal_image(1228);
            images_inmate10_711_11_8[1] = get_internal_image(1229);
            images_inmate10_711_11_16[0] = get_internal_image(261);
            images_inmate10_711_11_16[1] = get_internal_image(263);
            images_inmate10_711_11_24[0] = get_internal_image(717);
            images_inmate10_711_11_24[1] = get_internal_image(719);
            images_inmate10_711_18_24[0] = get_internal_image(2121);
            images_inmate10_711_18_24[1] = get_internal_image(2116);
            images_inmate10_711_18_24[2] = get_internal_image(2115);
            images_inmate10_711_18_24[3] = get_internal_image(2117);
            images_inmate10_711_18_24[4] = get_internal_image(2118);
            images_inmate10_711_18_24[5] = get_internal_image(2120);
            images_inmate10_711_18_24[6] = get_internal_image(2115);
            images_inmate10_711_18_24[7] = get_internal_image(2119);
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
FrameObject * create_inmate10_711(int x, int y)
{
    return new (Active::pool.create()) Inmate10_711(x, y);
}
static Image* images_inmate11_712_0_0[2];
static Direction direction_inmate11_712_0_0 = {0, 10, 10, 0, -1, images_inmate11_712_0_0, 2};
static Image* images_inmate11_712_0_8[2];
static Direction direction_inmate11_712_0_8 = {8, 10, 10, 0, -1, images_inmate11_712_0_8, 2};
static Image* images_inmate11_712_0_16[2];
static Direction direction_inmate11_712_0_16 = {16, 10, 10, 0, -1, images_inmate11_712_0_16, 2};
static Image* images_inmate11_712_0_24[2];
static Direction direction_inmate11_712_0_24 = {24, 10, 10, 0, -1, images_inmate11_712_0_24, 2};
static Animation anim_inmate11_712_0 = {&direction_inmate11_712_0_0, &direction_inmate11_712_0_0, &direction_inmate11_712_0_0, &direction_inmate11_712_0_0, NULL, &direction_inmate11_712_0_8, &direction_inmate11_712_0_8, &direction_inmate11_712_0_8, &direction_inmate11_712_0_8, &direction_inmate11_712_0_8, &direction_inmate11_712_0_8, &direction_inmate11_712_0_8, NULL, &direction_inmate11_712_0_16, &direction_inmate11_712_0_16, &direction_inmate11_712_0_16, &direction_inmate11_712_0_16, &direction_inmate11_712_0_16, &direction_inmate11_712_0_16, &direction_inmate11_712_0_16, NULL, &direction_inmate11_712_0_24, &direction_inmate11_712_0_24, &direction_inmate11_712_0_24, &direction_inmate11_712_0_24, &direction_inmate11_712_0_24, &direction_inmate11_712_0_24, &direction_inmate11_712_0_24, NULL, &direction_inmate11_712_0_0, &direction_inmate11_712_0_0, &direction_inmate11_712_0_0};
static Image* images_inmate11_712_6_0[1];
static Direction direction_inmate11_712_6_0 = {0, 6, 6, 0, 1, images_inmate11_712_6_0, 1};
static Image* images_inmate11_712_6_8[1];
static Direction direction_inmate11_712_6_8 = {8, 6, 6, 0, 1, images_inmate11_712_6_8, 1};
static Image* images_inmate11_712_6_16[1];
static Direction direction_inmate11_712_6_16 = {16, 6, 6, 0, 1, images_inmate11_712_6_16, 1};
static Image* images_inmate11_712_6_24[1];
static Direction direction_inmate11_712_6_24 = {24, 6, 6, 0, 1, images_inmate11_712_6_24, 1};
static Animation anim_inmate11_712_6 = {&direction_inmate11_712_6_0, &direction_inmate11_712_6_0, &direction_inmate11_712_6_0, &direction_inmate11_712_6_0, NULL, &direction_inmate11_712_6_8, &direction_inmate11_712_6_8, &direction_inmate11_712_6_8, &direction_inmate11_712_6_8, &direction_inmate11_712_6_8, &direction_inmate11_712_6_8, &direction_inmate11_712_6_8, NULL, &direction_inmate11_712_6_16, &direction_inmate11_712_6_16, &direction_inmate11_712_6_16, &direction_inmate11_712_6_16, &direction_inmate11_712_6_16, &direction_inmate11_712_6_16, &direction_inmate11_712_6_16, NULL, &direction_inmate11_712_6_24, &direction_inmate11_712_6_24, &direction_inmate11_712_6_24, &direction_inmate11_712_6_24, &direction_inmate11_712_6_24, &direction_inmate11_712_6_24, &direction_inmate11_712_6_24, NULL, &direction_inmate11_712_6_0, &direction_inmate11_712_6_0, &direction_inmate11_712_6_0};
static Image* images_inmate11_712_8_0[2];
static Direction direction_inmate11_712_8_0 = {0, 10, 10, 0, -1, images_inmate11_712_8_0, 2};
static Image* images_inmate11_712_8_16[2];
static Direction direction_inmate11_712_8_16 = {16, 5, 5, 0, -1, images_inmate11_712_8_16, 2};
static Image* images_inmate11_712_8_24[3];
static Direction direction_inmate11_712_8_24 = {24, 10, 10, 0, -1, images_inmate11_712_8_24, 3};
static Animation anim_inmate11_712_8 = {&direction_inmate11_712_8_0, &direction_inmate11_712_8_0, &direction_inmate11_712_8_0, &direction_inmate11_712_8_0, &direction_inmate11_712_8_0, &direction_inmate11_712_8_0, &direction_inmate11_712_8_0, &direction_inmate11_712_8_0, NULL, &direction_inmate11_712_8_16, &direction_inmate11_712_8_16, &direction_inmate11_712_8_16, &direction_inmate11_712_8_16, &direction_inmate11_712_8_16, &direction_inmate11_712_8_16, &direction_inmate11_712_8_16, &direction_inmate11_712_8_16, &direction_inmate11_712_8_16, &direction_inmate11_712_8_16, &direction_inmate11_712_8_16, NULL, &direction_inmate11_712_8_24, &direction_inmate11_712_8_24, &direction_inmate11_712_8_24, &direction_inmate11_712_8_24, &direction_inmate11_712_8_24, &direction_inmate11_712_8_24, &direction_inmate11_712_8_24, NULL, &direction_inmate11_712_8_0, &direction_inmate11_712_8_0, &direction_inmate11_712_8_0};
static Image* images_inmate11_712_9_0[2];
static Direction direction_inmate11_712_9_0 = {0, 5, 5, 0, -1, images_inmate11_712_9_0, 2};
static Animation anim_inmate11_712_9 = {&direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, NULL, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0, &direction_inmate11_712_9_0};
static Image* images_inmate11_712_10_0[5];
static Direction direction_inmate11_712_10_0 = {0, 10, 10, 0, -1, images_inmate11_712_10_0, 5};
static Animation anim_inmate11_712_10 = {&direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, NULL, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0, &direction_inmate11_712_10_0};
static Image* images_inmate11_712_11_0[2];
static Direction direction_inmate11_712_11_0 = {0, 6, 6, 0, -1, images_inmate11_712_11_0, 2};
static Image* images_inmate11_712_11_8[2];
static Direction direction_inmate11_712_11_8 = {8, 6, 6, 0, -1, images_inmate11_712_11_8, 2};
static Image* images_inmate11_712_11_16[2];
static Direction direction_inmate11_712_11_16 = {16, 6, 6, 0, -1, images_inmate11_712_11_16, 2};
static Image* images_inmate11_712_11_24[2];
static Direction direction_inmate11_712_11_24 = {24, 6, 6, 0, -1, images_inmate11_712_11_24, 2};
static Animation anim_inmate11_712_11 = {&direction_inmate11_712_11_0, &direction_inmate11_712_11_0, &direction_inmate11_712_11_0, &direction_inmate11_712_11_0, NULL, &direction_inmate11_712_11_8, &direction_inmate11_712_11_8, &direction_inmate11_712_11_8, &direction_inmate11_712_11_8, &direction_inmate11_712_11_8, &direction_inmate11_712_11_8, &direction_inmate11_712_11_8, NULL, &direction_inmate11_712_11_16, &direction_inmate11_712_11_16, &direction_inmate11_712_11_16, &direction_inmate11_712_11_16, &direction_inmate11_712_11_16, &direction_inmate11_712_11_16, &direction_inmate11_712_11_16, NULL, &direction_inmate11_712_11_24, &direction_inmate11_712_11_24, &direction_inmate11_712_11_24, &direction_inmate11_712_11_24, &direction_inmate11_712_11_24, &direction_inmate11_712_11_24, &direction_inmate11_712_11_24, NULL, &direction_inmate11_712_11_0, &direction_inmate11_712_11_0, &direction_inmate11_712_11_0};
static Image* images_inmate11_712_18_24[8];
static Direction direction_inmate11_712_18_24 = {24, 10, 10, 0, -1, images_inmate11_712_18_24, 8};
static Animation anim_inmate11_712_18 = {&direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, NULL, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24, &direction_inmate11_712_18_24};
static Animation * anim_array_inmate11_712[19] = {&anim_inmate11_712_0, NULL, NULL, NULL, NULL, NULL, &anim_inmate11_712_6, NULL, &anim_inmate11_712_8, &anim_inmate11_712_9, &anim_inmate11_712_10, &anim_inmate11_712_11, NULL, NULL, NULL, NULL, NULL, NULL, &anim_inmate11_712_18};
static Animations anim_inmate11_712 = {19, &anim_array_inmate11_712[0]};
static bool anim_inmate11_712_initialized;
class Inmate11_712 : public Active
{
public:
    Inmate11_712(int x, int y) : Active(x, y, Inmate11_712_type)
    {
        // qualifiers: 32, 33
#ifndef NDEBUG
        name = std::string("Inmate 11", 9);
#endif
        this->animations = &anim_inmate11_712;
        if (!anim_inmate11_712_initialized) {
            anim_inmate11_712_initialized = true;
            images_inmate11_712_0_0[0] = get_internal_image(720);
            images_inmate11_712_0_0[1] = get_internal_image(725);
            images_inmate11_712_0_8[0] = get_internal_image(752);
            images_inmate11_712_0_8[1] = get_internal_image(753);
            images_inmate11_712_0_16[0] = get_internal_image(746);
            images_inmate11_712_0_16[1] = get_internal_image(745);
            images_inmate11_712_0_24[0] = get_internal_image(693);
            images_inmate11_712_0_24[1] = get_internal_image(698);
            images_inmate11_712_6_0[0] = get_internal_image(155);
            images_inmate11_712_6_8[0] = get_internal_image(1065);
            images_inmate11_712_6_16[0] = get_internal_image(163);
            images_inmate11_712_6_24[0] = get_internal_image(1068);
            images_inmate11_712_8_0[0] = get_internal_image(731);
            images_inmate11_712_8_0[1] = get_internal_image(761);
            images_inmate11_712_8_16[0] = get_internal_image(758);
            images_inmate11_712_8_16[1] = get_internal_image(760);
            images_inmate11_712_8_24[0] = get_internal_image(578);
            images_inmate11_712_8_24[1] = get_internal_image(610);
            images_inmate11_712_8_24[2] = get_internal_image(634);
            images_inmate11_712_9_0[0] = get_internal_image(1503);
            images_inmate11_712_9_0[1] = get_internal_image(1498);
            images_inmate11_712_10_0[0] = get_internal_image(548);
            images_inmate11_712_10_0[1] = get_internal_image(754);
            images_inmate11_712_10_0[2] = get_internal_image(756);
            images_inmate11_712_10_0[3] = get_internal_image(547);
            images_inmate11_712_10_0[4] = get_internal_image(542);
            images_inmate11_712_11_0[0] = get_internal_image(710);
            images_inmate11_712_11_0[1] = get_internal_image(718);
            images_inmate11_712_11_8[0] = get_internal_image(749);
            images_inmate11_712_11_8[1] = get_internal_image(750);
            images_inmate11_712_11_16[0] = get_internal_image(747);
            images_inmate11_712_11_16[1] = get_internal_image(748);
            images_inmate11_712_11_24[0] = get_internal_image(724);
            images_inmate11_712_11_24[1] = get_internal_image(730);
            images_inmate11_712_18_24[0] = get_internal_image(2082);
            images_inmate11_712_18_24[1] = get_internal_image(2090);
            images_inmate11_712_18_24[2] = get_internal_image(2085);
            images_inmate11_712_18_24[3] = get_internal_image(2086);
            images_inmate11_712_18_24[4] = get_internal_image(2087);
            images_inmate11_712_18_24[5] = get_internal_image(2091);
            images_inmate11_712_18_24[6] = get_internal_image(2085);
            images_inmate11_712_18_24[7] = get_internal_image(2088);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_inmate11_712(int x, int y)
{
    return new (Active::pool.create()) Inmate11_712(x, y);
}
class Mouse2_713 : public Text
{
public:
    Mouse2_713(int x, int y) : Text(x, y, Mouse2_713_type)
    {
        // qualifiers: 13
#ifndef NDEBUG
        name = std::string("mouse 2", 7);
#endif
        flags &= ~SCROLL;
        width = 240;
        height = 69;
        blend_color = Color(255, 255, 255);
        bold = false;
        italic = false;
        font_name = std::string("Escapists", 9);
        font = get_font(12, 0);
        alignment = ALIGN_RIGHT | ALIGN_TOP;
        add_line(std::string("TUTORIAL LEVEL", 14));
        create_alterables();
    }
};
FrameObject * create_mouse2_713(int x, int y)
{
    return new (Text::pool.create()) Mouse2_713(x, y);
}
static Image* images_mouse1_714_1_0[4];
static Direction direction_mouse1_714_1_0 = {0, 10, 10, 3, -1, images_mouse1_714_1_0, 4};
static Image* images_mouse1_714_1_8[4];
static Direction direction_mouse1_714_1_8 = {8, 10, 10, 3, -1, images_mouse1_714_1_8, 4};
static Image* images_mouse1_714_1_16[4];
static Direction direction_mouse1_714_1_16 = {16, 10, 10, 3, -1, images_mouse1_714_1_16, 4};
static Image* images_mouse1_714_1_24[4];
static Direction direction_mouse1_714_1_24 = {24, 10, 10, 3, -1, images_mouse1_714_1_24, 4};
static Animation anim_mouse1_714_1 = {&direction_mouse1_714_1_0, &direction_mouse1_714_1_0, &direction_mouse1_714_1_0, &direction_mouse1_714_1_0, NULL, &direction_mouse1_714_1_8, &direction_mouse1_714_1_8, &direction_mouse1_714_1_8, &direction_mouse1_714_1_8, &direction_mouse1_714_1_8, &direction_mouse1_714_1_8, &direction_mouse1_714_1_8, NULL, &direction_mouse1_714_1_16, &direction_mouse1_714_1_16, &direction_mouse1_714_1_16, &direction_mouse1_714_1_16, &direction_mouse1_714_1_16, &direction_mouse1_714_1_16, &direction_mouse1_714_1_16, NULL, &direction_mouse1_714_1_24, &direction_mouse1_714_1_24, &direction_mouse1_714_1_24, &direction_mouse1_714_1_24, &direction_mouse1_714_1_24, &direction_mouse1_714_1_24, &direction_mouse1_714_1_24, NULL, &direction_mouse1_714_1_0, &direction_mouse1_714_1_0, &direction_mouse1_714_1_0};
static Animation * anim_array_mouse1_714[2] = {NULL, &anim_mouse1_714_1};
static Animations anim_mouse1_714 = {2, &anim_array_mouse1_714[0]};
static bool anim_mouse1_714_initialized;
class MOUSE1_714 : public Active
{
public:
    MOUSE1_714(int x, int y) : Active(x, y, MOUSE1_714_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("MOUSE1", 6);
#endif
        flags &= ~SCROLL;
        this->animations = &anim_mouse1_714;
        if (!anim_mouse1_714_initialized) {
            anim_mouse1_714_initialized = true;
            images_mouse1_714_1_0[0] = get_internal_image(1460);
            images_mouse1_714_1_0[1] = get_internal_image(1014);
            images_mouse1_714_1_0[2] = get_internal_image(1460);
            images_mouse1_714_1_0[3] = get_internal_image(1014);
            images_mouse1_714_1_8[0] = get_internal_image(2386);
            images_mouse1_714_1_8[1] = get_internal_image(2387);
            images_mouse1_714_1_8[2] = get_internal_image(2386);
            images_mouse1_714_1_8[3] = get_internal_image(2387);
            images_mouse1_714_1_16[0] = get_internal_image(2390);
            images_mouse1_714_1_16[1] = get_internal_image(2391);
            images_mouse1_714_1_16[2] = get_internal_image(2390);
            images_mouse1_714_1_16[3] = get_internal_image(2391);
            images_mouse1_714_1_24[0] = get_internal_image(721);
            images_mouse1_714_1_24[1] = get_internal_image(1468);
            images_mouse1_714_1_24[2] = get_internal_image(721);
            images_mouse1_714_1_24[3] = get_internal_image(1468);
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
FrameObject * create_mouse1_714(int x, int y)
{
    return new (Active::pool.create()) MOUSE1_714(x, y);
}
static Image* images_water_715_0_0[4];
static Direction direction_water_715_0_0 = {0, 5, 5, 0, -1, images_water_715_0_0, 4};
static Animation anim_water_715_0 = {&direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, NULL, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0, &direction_water_715_0_0};
static Animation * anim_array_water_715[1] = {&anim_water_715_0};
static Animations anim_water_715 = {1, &anim_array_water_715[0]};
static bool anim_water_715_initialized;
class Water_715 : public Active
{
public:
    Water_715(int x, int y) : Active(x, y, Water_715_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Water", 5);
#endif
        this->animations = &anim_water_715;
        if (!anim_water_715_initialized) {
            anim_water_715_initialized = true;
            images_water_715_0_0[0] = get_internal_image(860);
            images_water_715_0_0[1] = get_internal_image(859);
            images_water_715_0_0[2] = get_internal_image(864);
            images_water_715_0_0[3] = get_internal_image(865);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        blend_color = Color(255, 255, 255, 254);
        set_shader(Render::ADDITIVE);
        create_alterables();
        alterables->values.set(1, 39);
    }
};
FrameObject * create_water_715(int x, int y)
{
    return new (Active::pool.create()) Water_715(x, y);
}
static Image* images_desks_717_0_8[1];
static Direction direction_desks_717_0_8 = {8, 50, 50, 0, -1, images_desks_717_0_8, 1};
static Image* images_desks_717_0_24[1];
static Direction direction_desks_717_0_24 = {24, 50, 50, 0, -1, images_desks_717_0_24, 1};
static Animation anim_desks_717_0 = {NULL, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, &direction_desks_717_0_8, NULL, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24, &direction_desks_717_0_24};
static Animation * anim_array_desks_717[1] = {&anim_desks_717_0};
static Animations anim_desks_717 = {1, &anim_array_desks_717[0]};
static bool anim_desks_717_initialized;
class Desks_717 : public Active
{
public:
    Desks_717(int x, int y) : Active(x, y, Desks_717_type)
    {
        // qualifiers: 15, 62, 63, 83
#ifndef NDEBUG
        name = std::string("Desks", 5);
#endif
        this->animations = &anim_desks_717;
        if (!anim_desks_717_initialized) {
            anim_desks_717_initialized = true;
            images_desks_717_0_8[0] = get_internal_image(162);
            images_desks_717_0_24[0] = get_internal_image(879);
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
FrameObject * create_desks_717(int x, int y)
{
    return new (Active::pool.create()) Desks_717(x, y);
}
static Image* images_bednpc_718_0_8[1];
static Direction direction_bednpc_718_0_8 = {8, 50, 50, 0, -1, images_bednpc_718_0_8, 1};
static Image* images_bednpc_718_0_24[1];
static Direction direction_bednpc_718_0_24 = {24, 50, 50, 0, -1, images_bednpc_718_0_24, 1};
static Animation anim_bednpc_718_0 = {NULL, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, &direction_bednpc_718_0_8, NULL, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24, &direction_bednpc_718_0_24};
static Image* images_bednpc_718_1_8[1];
static Direction direction_bednpc_718_1_8 = {8, 50, 50, 0, -1, images_bednpc_718_1_8, 1};
static Image* images_bednpc_718_1_24[1];
static Direction direction_bednpc_718_1_24 = {24, 50, 50, 0, -1, images_bednpc_718_1_24, 1};
static Animation anim_bednpc_718_1 = {NULL, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, &direction_bednpc_718_1_8, NULL, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24, &direction_bednpc_718_1_24};
static Image* images_bednpc_718_2_8[1];
static Direction direction_bednpc_718_2_8 = {8, 50, 50, 0, -1, images_bednpc_718_2_8, 1};
static Image* images_bednpc_718_2_24[1];
static Direction direction_bednpc_718_2_24 = {24, 50, 50, 0, -1, images_bednpc_718_2_24, 1};
static Animation anim_bednpc_718_2 = {NULL, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, &direction_bednpc_718_2_8, NULL, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24, &direction_bednpc_718_2_24};
static Animation * anim_array_bednpc_718[3] = {&anim_bednpc_718_0, &anim_bednpc_718_1, &anim_bednpc_718_2};
static Animations anim_bednpc_718 = {3, &anim_array_bednpc_718[0]};
static bool anim_bednpc_718_initialized;
class BedNPC_718 : public Active
{
public:
    BedNPC_718(int x, int y) : Active(x, y, BedNPC_718_type)
    {
        // qualifiers: 14
#ifndef NDEBUG
        name = std::string("Bed - NPC", 9);
#endif
        this->animations = &anim_bednpc_718;
        if (!anim_bednpc_718_initialized) {
            anim_bednpc_718_initialized = true;
            images_bednpc_718_0_8[0] = get_internal_image(144);
            images_bednpc_718_0_24[0] = get_internal_image(856);
            images_bednpc_718_1_8[0] = get_internal_image(154);
            images_bednpc_718_1_24[0] = get_internal_image(896);
            images_bednpc_718_2_8[0] = get_internal_image(466);
            images_bednpc_718_2_24[0] = get_internal_image(726);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_bednpc_718(int x, int y)
{
    return new (Active::pool.create()) BedNPC_718(x, y);
}
static Image* images_toilet2_719_0_0[1];
static Direction direction_toilet2_719_0_0 = {0, 50, 50, 0, -1, images_toilet2_719_0_0, 1};
static Image* images_toilet2_719_0_16[1];
static Direction direction_toilet2_719_0_16 = {16, 50, 50, 0, -1, images_toilet2_719_0_16, 1};
static Animation anim_toilet2_719_0 = {&direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, NULL, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, &direction_toilet2_719_0_16, NULL, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0, &direction_toilet2_719_0_0};
static Image* images_toilet2_719_1_0[3];
static Direction direction_toilet2_719_1_0 = {0, 5, 5, 2, -1, images_toilet2_719_1_0, 3};
static Image* images_toilet2_719_1_16[3];
static Direction direction_toilet2_719_1_16 = {16, 5, 5, 2, -1, images_toilet2_719_1_16, 3};
static Animation anim_toilet2_719_1 = {&direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, NULL, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, &direction_toilet2_719_1_16, NULL, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0, &direction_toilet2_719_1_0};
static Image* images_toilet2_719_5_0[1];
static Direction direction_toilet2_719_5_0 = {0, 50, 50, 0, -1, images_toilet2_719_5_0, 1};
static Image* images_toilet2_719_5_16[1];
static Direction direction_toilet2_719_5_16 = {16, 50, 50, 0, -1, images_toilet2_719_5_16, 1};
static Animation anim_toilet2_719_5 = {&direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, NULL, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, &direction_toilet2_719_5_16, NULL, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0, &direction_toilet2_719_5_0};
static Animation * anim_array_toilet2_719[6] = {&anim_toilet2_719_0, &anim_toilet2_719_1, NULL, NULL, NULL, &anim_toilet2_719_5};
static Animations anim_toilet2_719 = {6, &anim_array_toilet2_719[0]};
static bool anim_toilet2_719_initialized;
class Toilet2_719 : public Active
{
public:
    Toilet2_719(int x, int y) : Active(x, y, Toilet2_719_type)
    {
        // qualifiers: 88
#ifndef NDEBUG
        name = std::string("Toilet 2", 8);
#endif
        this->animations = &anim_toilet2_719;
        if (!anim_toilet2_719_initialized) {
            anim_toilet2_719_initialized = true;
            images_toilet2_719_0_0[0] = get_internal_image(93);
            images_toilet2_719_0_16[0] = get_internal_image(85);
            images_toilet2_719_1_0[0] = get_internal_image(97);
            images_toilet2_719_1_0[1] = get_internal_image(99);
            images_toilet2_719_1_0[2] = get_internal_image(33);
            images_toilet2_719_1_16[0] = get_internal_image(112);
            images_toilet2_719_1_16[1] = get_internal_image(103);
            images_toilet2_719_1_16[2] = get_internal_image(35);
            images_toilet2_719_5_0[0] = get_internal_image(762);
            images_toilet2_719_5_16[0] = get_internal_image(759);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_toilet2_719(int x, int y)
{
    return new (Active::pool.create()) Toilet2_719(x, y);
}
static Image* images_table2_720_0_0[1];
static Direction direction_table2_720_0_0 = {0, 50, 50, 0, -1, images_table2_720_0_0, 1};
static Animation anim_table2_720_0 = {&direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, NULL, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0, &direction_table2_720_0_0};
static Animation * anim_array_table2_720[1] = {&anim_table2_720_0};
static Animations anim_table2_720 = {1, &anim_array_table2_720[0]};
static bool anim_table2_720_initialized;
class Table2_720 : public Active
{
public:
    Table2_720(int x, int y) : Active(x, y, Table2_720_type)
    {
        // qualifiers: 62, 63
#ifndef NDEBUG
        name = std::string("Table 2", 7);
#endif
        this->animations = &anim_table2_720;
        if (!anim_table2_720_initialized) {
            anim_table2_720_initialized = true;
            images_table2_720_0_0[0] = get_internal_image(902);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(1, 1);
    }
};
FrameObject * create_table2_720(int x, int y)
{
    return new (Active::pool.create()) Table2_720(x, y);
}
static Image* images_canteenchair_722_0_8[1];
static Direction direction_canteenchair_722_0_8 = {8, 50, 50, 0, -1, images_canteenchair_722_0_8, 1};
static Image* images_canteenchair_722_0_24[1];
static Direction direction_canteenchair_722_0_24 = {24, 50, 50, 0, -1, images_canteenchair_722_0_24, 1};
static Animation anim_canteenchair_722_0 = {NULL, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, &direction_canteenchair_722_0_8, NULL, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24, &direction_canteenchair_722_0_24};
static Animation * anim_array_canteenchair_722[1] = {&anim_canteenchair_722_0};
static Animations anim_canteenchair_722 = {1, &anim_array_canteenchair_722[0]};
static bool anim_canteenchair_722_initialized;
class CanteenChair_722 : public Active
{
public:
    CanteenChair_722(int x, int y) : Active(x, y, CanteenChair_722_type)
    {
        // qualifiers: 28
#ifndef NDEBUG
        name = std::string("Canteen chair", 13);
#endif
        this->animations = &anim_canteenchair_722;
        if (!anim_canteenchair_722_initialized) {
            anim_canteenchair_722_initialized = true;
            images_canteenchair_722_0_8[0] = get_internal_image(107);
            images_canteenchair_722_0_24[0] = get_internal_image(858);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(8);
        create_alterables();
    }
};
FrameObject * create_canteenchair_722(int x, int y)
{
    return new (Active::pool.create()) CanteenChair_722(x, y);
}
static Image* images_washing2_723_0_0[1];
static Direction direction_washing2_723_0_0 = {0, 50, 50, 0, 1, images_washing2_723_0_0, 1};
static Animation anim_washing2_723_0 = {&direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, NULL, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0, &direction_washing2_723_0_0};
static Image* images_washing2_723_1_0[4];
static Direction direction_washing2_723_1_0 = {0, 30, 30, 0, -1, images_washing2_723_1_0, 4};
static Animation anim_washing2_723_1 = {&direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, NULL, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0, &direction_washing2_723_1_0};
static Image* images_washing2_723_5_0[2];
static Direction direction_washing2_723_5_0 = {0, 10, 10, 0, -1, images_washing2_723_5_0, 2};
static Animation anim_washing2_723_5 = {&direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, NULL, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0, &direction_washing2_723_5_0};
static Animation * anim_array_washing2_723[6] = {&anim_washing2_723_0, &anim_washing2_723_1, NULL, NULL, NULL, &anim_washing2_723_5};
static Animations anim_washing2_723 = {6, &anim_array_washing2_723[0]};
static bool anim_washing2_723_initialized;
class Washing2_723 : public Active
{
public:
    Washing2_723(int x, int y) : Active(x, y, Washing2_723_type)
    {
        // qualifiers: 15, 80, 88
#ifndef NDEBUG
        name = std::string("Washing 2", 9);
#endif
        this->animations = &anim_washing2_723;
        if (!anim_washing2_723_initialized) {
            anim_washing2_723_initialized = true;
            images_washing2_723_0_0[0] = get_internal_image(910);
            images_washing2_723_1_0[0] = get_internal_image(912);
            images_washing2_723_1_0[1] = get_internal_image(919);
            images_washing2_723_1_0[2] = get_internal_image(918);
            images_washing2_723_1_0[3] = get_internal_image(920);
            images_washing2_723_5_0[0] = get_internal_image(861);
            images_washing2_723_5_0[1] = get_internal_image(871);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_washing2_723(int x, int y)
{
    return new (Active::pool.create()) Washing2_723(x, y);
}
static Image* images_oven2_724_0_0[1];
static Direction direction_oven2_724_0_0 = {0, 50, 50, 0, 1, images_oven2_724_0_0, 1};
static Animation anim_oven2_724_0 = {&direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, NULL, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0, &direction_oven2_724_0_0};
static Image* images_oven2_724_1_0[2];
static Direction direction_oven2_724_1_0 = {0, 40, 40, 0, -1, images_oven2_724_1_0, 2};
static Animation anim_oven2_724_1 = {&direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, NULL, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0, &direction_oven2_724_1_0};
static Image* images_oven2_724_5_0[2];
static Direction direction_oven2_724_5_0 = {0, 10, 10, 0, -1, images_oven2_724_5_0, 2};
static Animation anim_oven2_724_5 = {&direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, NULL, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0, &direction_oven2_724_5_0};
static Animation * anim_array_oven2_724[6] = {&anim_oven2_724_0, &anim_oven2_724_1, NULL, NULL, NULL, &anim_oven2_724_5};
static Animations anim_oven2_724 = {6, &anim_array_oven2_724[0]};
static bool anim_oven2_724_initialized;
class Oven2_724 : public Active
{
public:
    Oven2_724(int x, int y) : Active(x, y, Oven2_724_type)
    {
        // qualifiers: 15, 80, 88
#ifndef NDEBUG
        name = std::string("Oven 2", 6);
#endif
        this->animations = &anim_oven2_724;
        if (!anim_oven2_724_initialized) {
            anim_oven2_724_initialized = true;
            images_oven2_724_0_0[0] = get_internal_image(909);
            images_oven2_724_1_0[0] = get_internal_image(911);
            images_oven2_724_1_0[1] = get_internal_image(771);
            images_oven2_724_5_0[0] = get_internal_image(877);
            images_oven2_724_5_0[1] = get_internal_image(872);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(2, 1);
    }
};
FrameObject * create_oven2_724(int x, int y)
{
    return new (Active::pool.create()) Oven2_724(x, y);
}
static Image* images_shadow_726_0_0[1];
static Direction direction_shadow_726_0_0 = {0, 50, 50, 0, -1, images_shadow_726_0_0, 1};
static Image* images_shadow_726_0_8[1];
static Direction direction_shadow_726_0_8 = {8, 50, 50, 0, -1, images_shadow_726_0_8, 1};
static Image* images_shadow_726_0_16[1];
static Direction direction_shadow_726_0_16 = {16, 50, 50, 0, -1, images_shadow_726_0_16, 1};
static Animation anim_shadow_726_0 = {&direction_shadow_726_0_0, &direction_shadow_726_0_0, &direction_shadow_726_0_0, &direction_shadow_726_0_0, NULL, &direction_shadow_726_0_8, &direction_shadow_726_0_8, &direction_shadow_726_0_8, &direction_shadow_726_0_8, &direction_shadow_726_0_8, &direction_shadow_726_0_8, &direction_shadow_726_0_8, NULL, &direction_shadow_726_0_16, &direction_shadow_726_0_16, &direction_shadow_726_0_16, &direction_shadow_726_0_16, &direction_shadow_726_0_16, &direction_shadow_726_0_16, &direction_shadow_726_0_16, &direction_shadow_726_0_16, &direction_shadow_726_0_16, &direction_shadow_726_0_16, &direction_shadow_726_0_16, NULL, &direction_shadow_726_0_0, &direction_shadow_726_0_0, &direction_shadow_726_0_0, &direction_shadow_726_0_0, &direction_shadow_726_0_0, &direction_shadow_726_0_0, &direction_shadow_726_0_0};
static Image* images_shadow_726_2_0[1];
static Direction direction_shadow_726_2_0 = {0, 50, 50, 0, -1, images_shadow_726_2_0, 1};
static Image* images_shadow_726_2_8[1];
static Direction direction_shadow_726_2_8 = {8, 50, 50, 0, -1, images_shadow_726_2_8, 1};
static Animation anim_shadow_726_2 = {&direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0, NULL, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, &direction_shadow_726_2_8, NULL, &direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0, &direction_shadow_726_2_0};
static Animation * anim_array_shadow_726[3] = {&anim_shadow_726_0, NULL, &anim_shadow_726_2};
static Animations anim_shadow_726 = {3, &anim_array_shadow_726[0]};
static bool anim_shadow_726_initialized;
class Shadow_726 : public Active
{
public:
    Shadow_726(int x, int y) : Active(x, y, Shadow_726_type)
    {
        // qualifiers: 87
#ifndef NDEBUG
        name = std::string("Shadow", 6);
#endif
        this->animations = &anim_shadow_726;
        if (!anim_shadow_726_initialized) {
            anim_shadow_726_initialized = true;
            images_shadow_726_0_0[0] = get_internal_image(913);
            images_shadow_726_0_8[0] = get_internal_image(963);
            images_shadow_726_0_16[0] = get_internal_image(962);
            images_shadow_726_2_0[0] = get_internal_image(950);
            images_shadow_726_2_8[0] = get_internal_image(955);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_shadow_726(int x, int y)
{
    return new (Active::pool.create()) Shadow_726(x, y);
}
static Image* images_licenseprints_729_0_0[1];
static Direction direction_licenseprints_729_0_0 = {0, 50, 50, 0, -1, images_licenseprints_729_0_0, 1};
static Animation anim_licenseprints_729_0 = {&direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, NULL, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0, &direction_licenseprints_729_0_0};
static Image* images_licenseprints_729_1_0[2];
static Direction direction_licenseprints_729_1_0 = {0, 20, 20, 0, 5, images_licenseprints_729_1_0, 2};
static Animation anim_licenseprints_729_1 = {&direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, NULL, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0, &direction_licenseprints_729_1_0};
static Animation * anim_array_licenseprints_729[2] = {&anim_licenseprints_729_0, &anim_licenseprints_729_1};
static Animations anim_licenseprints_729 = {2, &anim_array_licenseprints_729[0]};
static bool anim_licenseprints_729_initialized;
class LicensePrints_729 : public Active
{
public:
    LicensePrints_729(int x, int y) : Active(x, y, LicensePrints_729_type)
    {
        // qualifiers: 80, 88
#ifndef NDEBUG
        name = std::string("License Prints", 14);
#endif
        this->animations = &anim_licenseprints_729;
        if (!anim_licenseprints_729_initialized) {
            anim_licenseprints_729_initialized = true;
            images_licenseprints_729_0_0[0] = get_internal_image(924);
            images_licenseprints_729_1_0[0] = get_internal_image(926);
            images_licenseprints_729_1_0[1] = get_internal_image(924);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
    }
};
FrameObject * create_licenseprints_729(int x, int y)
{
    return new (Active::pool.create()) LicensePrints_729(x, y);
}
static Image* images_bedplayer_731_0_8[1];
static Direction direction_bedplayer_731_0_8 = {8, 50, 50, 0, -1, images_bedplayer_731_0_8, 1};
static Image* images_bedplayer_731_0_24[1];
static Direction direction_bedplayer_731_0_24 = {24, 50, 50, 0, -1, images_bedplayer_731_0_24, 1};
static Animation anim_bedplayer_731_0 = {NULL, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, &direction_bedplayer_731_0_8, NULL, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24, &direction_bedplayer_731_0_24};
static Image* images_bedplayer_731_1_8[1];
static Direction direction_bedplayer_731_1_8 = {8, 50, 50, 0, -1, images_bedplayer_731_1_8, 1};
static Image* images_bedplayer_731_1_24[1];
static Direction direction_bedplayer_731_1_24 = {24, 50, 50, 0, -1, images_bedplayer_731_1_24, 1};
static Animation anim_bedplayer_731_1 = {NULL, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, &direction_bedplayer_731_1_8, NULL, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24, &direction_bedplayer_731_1_24};
static Image* images_bedplayer_731_2_8[1];
static Direction direction_bedplayer_731_2_8 = {8, 50, 50, 0, -1, images_bedplayer_731_2_8, 1};
static Image* images_bedplayer_731_2_24[1];
static Direction direction_bedplayer_731_2_24 = {24, 50, 50, 0, -1, images_bedplayer_731_2_24, 1};
static Animation anim_bedplayer_731_2 = {NULL, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, &direction_bedplayer_731_2_8, NULL, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24, &direction_bedplayer_731_2_24};
static Animation * anim_array_bedplayer_731[3] = {&anim_bedplayer_731_0, &anim_bedplayer_731_1, &anim_bedplayer_731_2};
static Animations anim_bedplayer_731 = {3, &anim_array_bedplayer_731[0]};
static bool anim_bedplayer_731_initialized;
class BedPlayer_731 : public Active
{
public:
    BedPlayer_731(int x, int y) : Active(x, y, BedPlayer_731_type)
    {
        // qualifiers: 14, 28
#ifndef NDEBUG
        name = std::string("Bed - Player", 12);
#endif
        this->animations = &anim_bedplayer_731;
        if (!anim_bedplayer_731_initialized) {
            anim_bedplayer_731_initialized = true;
            images_bedplayer_731_0_8[0] = get_internal_image(144);
            images_bedplayer_731_0_24[0] = get_internal_image(856);
            images_bedplayer_731_1_8[0] = get_internal_image(154);
            images_bedplayer_731_1_24[0] = get_internal_image(896);
            images_bedplayer_731_2_8[0] = get_internal_image(466);
            images_bedplayer_731_2_24[0] = get_internal_image(726);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_direction(24);
        create_alterables();
    }
};
FrameObject * create_bedplayer_731(int x, int y)
{
    return new (Active::pool.create()) BedPlayer_731(x, y);
}
static Image* images_shady_734_0_0[1];
static Direction direction_shady_734_0_0 = {0, 50, 50, 0, 1, images_shady_734_0_0, 1};
static Image* images_shady_734_0_8[1];
static Direction direction_shady_734_0_8 = {8, 50, 50, 0, 1, images_shady_734_0_8, 1};
static Image* images_shady_734_0_16[1];
static Direction direction_shady_734_0_16 = {16, 50, 50, 0, 1, images_shady_734_0_16, 1};
static Animation anim_shady_734_0 = {&direction_shady_734_0_0, &direction_shady_734_0_0, &direction_shady_734_0_0, &direction_shady_734_0_0, NULL, &direction_shady_734_0_8, &direction_shady_734_0_8, &direction_shady_734_0_8, &direction_shady_734_0_8, &direction_shady_734_0_8, &direction_shady_734_0_8, &direction_shady_734_0_8, NULL, &direction_shady_734_0_16, &direction_shady_734_0_16, &direction_shady_734_0_16, &direction_shady_734_0_16, &direction_shady_734_0_16, &direction_shady_734_0_16, &direction_shady_734_0_16, &direction_shady_734_0_16, &direction_shady_734_0_16, &direction_shady_734_0_16, &direction_shady_734_0_16, NULL, &direction_shady_734_0_0, &direction_shady_734_0_0, &direction_shady_734_0_0, &direction_shady_734_0_0, &direction_shady_734_0_0, &direction_shady_734_0_0, &direction_shady_734_0_0};
static Animation * anim_array_shady_734[1] = {&anim_shady_734_0};
static Animations anim_shady_734 = {1, &anim_array_shady_734[0]};
static bool anim_shady_734_initialized;
class Shady_734 : public Active
{
public:
    Shady_734(int x, int y) : Active(x, y, Shady_734_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("shady", 5);
#endif
        this->animations = &anim_shady_734;
        if (!anim_shady_734_initialized) {
            anim_shady_734_initialized = true;
            images_shady_734_0_0[0] = get_internal_image(913);
            images_shady_734_0_8[0] = get_internal_image(916);
            images_shady_734_0_16[0] = get_internal_image(915);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        set_shader(Render::SUBTRACT);
        create_alterables();
    }
};
FrameObject * create_shady_734(int x, int y)
{
    return new (Active::pool.create()) Shady_734(x, y);
}
class NamesBackersInmates_735 : public ListObject
{
public:
    NamesBackersInmates_735(int x, int y) : ListObject(x, y, NamesBackersInmates_735_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Names Backers Inmates", 21);
#endif
        add_line(std::string("Kenoboxer", 9));
        add_line(std::string("Wolverine", 9));
        set_visible(false);
        index_offset = current_line = -1;
    }
};
FrameObject * create_namesbackersinmates_735(int x, int y)
{
    return new (ListObject::pool.create()) NamesBackersInmates_735(x, y);
}
class NamesBackersGuards_736 : public ListObject
{
public:
    NamesBackersGuards_736(int x, int y) : ListObject(x, y, NamesBackersGuards_736_type)
    {
        // qualifiers: 
#ifndef NDEBUG
        name = std::string("Names Backers Guards", 20);
#endif
        add_line(std::string("Morales", 7));
        add_line(std::string("Heiko", 5));
        set_visible(false);
        index_offset = current_line = -1;
    }
};
FrameObject * create_namesbackersguards_736(int x, int y)
{
    return new (ListObject::pool.create()) NamesBackersGuards_736(x, y);
}
static Image* images_player1_738_0_0[2];
static Direction direction_player1_738_0_0 = {0, 10, 10, 0, -1, images_player1_738_0_0, 2};
static Image* images_player1_738_0_8[2];
static Direction direction_player1_738_0_8 = {8, 10, 10, 0, -1, images_player1_738_0_8, 2};
static Image* images_player1_738_0_16[2];
static Direction direction_player1_738_0_16 = {16, 10, 10, 0, -1, images_player1_738_0_16, 2};
static Image* images_player1_738_0_24[2];
static Direction direction_player1_738_0_24 = {24, 10, 10, 0, -1, images_player1_738_0_24, 2};
static Animation anim_player1_738_0 = {&direction_player1_738_0_0, &direction_player1_738_0_0, &direction_player1_738_0_0, &direction_player1_738_0_0, NULL, &direction_player1_738_0_8, &direction_player1_738_0_8, &direction_player1_738_0_8, &direction_player1_738_0_8, &direction_player1_738_0_8, &direction_player1_738_0_8, &direction_player1_738_0_8, NULL, &direction_player1_738_0_16, &direction_player1_738_0_16, &direction_player1_738_0_16, &direction_player1_738_0_16, &direction_player1_738_0_16, &direction_player1_738_0_16, &direction_player1_738_0_16, NULL, &direction_player1_738_0_24, &direction_player1_738_0_24, &direction_player1_738_0_24, &direction_player1_738_0_24, &direction_player1_738_0_24, &direction_player1_738_0_24, &direction_player1_738_0_24, NULL, &direction_player1_738_0_0, &direction_player1_738_0_0, &direction_player1_738_0_0};
static Image* images_player1_738_4_0[4];
static Direction direction_player1_738_4_0 = {0, 20, 20, 0, 1, images_player1_738_4_0, 4};
static Image* images_player1_738_4_16[4];
static Direction direction_player1_738_4_16 = {16, 20, 20, 0, 1, images_player1_738_4_16, 4};
static Animation anim_player1_738_4 = {&direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0, NULL, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, &direction_player1_738_4_16, NULL, &direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0, &direction_player1_738_4_0};
static Image* images_player1_738_6_0[1];
static Direction direction_player1_738_6_0 = {0, 6, 6, 0, 1, images_player1_738_6_0, 1};
static Image* images_player1_738_6_8[1];
static Direction direction_player1_738_6_8 = {8, 6, 6, 0, 1, images_player1_738_6_8, 1};
static Image* images_player1_738_6_16[1];
static Direction direction_player1_738_6_16 = {16, 6, 6, 0, 1, images_player1_738_6_16, 1};
static Image* images_player1_738_6_24[1];
static Direction direction_player1_738_6_24 = {24, 6, 6, 0, 1, images_player1_738_6_24, 1};
static Animation anim_player1_738_6 = {&direction_player1_738_6_0, &direction_player1_738_6_0, &direction_player1_738_6_0, &direction_player1_738_6_0, NULL, &direction_player1_738_6_8, &direction_player1_738_6_8, &direction_player1_738_6_8, &direction_player1_738_6_8, &direction_player1_738_6_8, &direction_player1_738_6_8, &direction_player1_738_6_8, NULL, &direction_player1_738_6_16, &direction_player1_738_6_16, &direction_player1_738_6_16, &direction_player1_738_6_16, &direction_player1_738_6_16, &direction_player1_738_6_16, &direction_player1_738_6_16, NULL, &direction_player1_738_6_24, &direction_player1_738_6_24, &direction_player1_738_6_24, &direction_player1_738_6_24, &direction_player1_738_6_24, &direction_player1_738_6_24, &direction_player1_738_6_24, NULL, &direction_player1_738_6_0, &direction_player1_738_6_0, &direction_player1_738_6_0};
static Image* images_player1_738_7_0[2];
static Direction direction_player1_738_7_0 = {0, 10, 10, 0, -1, images_player1_738_7_0, 2};
static Image* images_player1_738_7_8[2];
static Direction direction_player1_738_7_8 = {8, 10, 10, 0, -1, images_player1_738_7_8, 2};
static Image* images_player1_738_7_16[2];
static Direction direction_player1_738_7_16 = {16, 10, 10, 0, -1, images_player1_738_7_16, 2};
static Image* images_player1_738_7_24[2];
static Direction direction_player1_738_7_24 = {24, 10, 10, 0, -1, images_player1_738_7_24, 2};
static Animation anim_player1_738_7 = {&direction_player1_738_7_0, &direction_player1_738_7_0, &direction_player1_738_7_0, &direction_player1_738_7_0, NULL, &direction_player1_738_7_8, &direction_player1_738_7_8, &direction_player1_738_7_8, &direction_player1_738_7_8, &direction_player1_738_7_8, &direction_player1_738_7_8, &direction_player1_738_7_8, NULL, &direction_player1_738_7_16, &direction_player1_738_7_16, &direction_player1_738_7_16, &direction_player1_738_7_16, &direction_player1_738_7_16, &direction_player1_738_7_16, &direction_player1_738_7_16, NULL, &direction_player1_738_7_24, &direction_player1_738_7_24, &direction_player1_738_7_24, &direction_player1_738_7_24, &direction_player1_738_7_24, &direction_player1_738_7_24, &direction_player1_738_7_24, NULL, &direction_player1_738_7_0, &direction_player1_738_7_0, &direction_player1_738_7_0};
static Image* images_player1_738_8_24[1];
static Direction direction_player1_738_8_24 = {24, 10, 10, 0, -1, images_player1_738_8_24, 1};
static Animation anim_player1_738_8 = {&direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, NULL, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24, &direction_player1_738_8_24};
static Image* images_player1_738_9_0[2];
static Direction direction_player1_738_9_0 = {0, 50, 50, 0, -1, images_player1_738_9_0, 2};
static Animation anim_player1_738_9 = {&direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, NULL, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0, &direction_player1_738_9_0};
static Image* images_player1_738_10_0[5];
static Direction direction_player1_738_10_0 = {0, 10, 10, 0, -1, images_player1_738_10_0, 5};
static Animation anim_player1_738_10 = {&direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, NULL, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0, &direction_player1_738_10_0};
static Image* images_player1_738_11_0[2];
static Direction direction_player1_738_11_0 = {0, 6, 6, 0, -1, images_player1_738_11_0, 2};
static Image* images_player1_738_11_8[2];
static Direction direction_player1_738_11_8 = {8, 6, 6, 0, -1, images_player1_738_11_8, 2};
static Image* images_player1_738_11_16[2];
static Direction direction_player1_738_11_16 = {16, 6, 6, 0, -1, images_player1_738_11_16, 2};
static Image* images_player1_738_11_24[2];
static Direction direction_player1_738_11_24 = {24, 6, 6, 0, -1, images_player1_738_11_24, 2};
static Animation anim_player1_738_11 = {&direction_player1_738_11_0, &direction_player1_738_11_0, &direction_player1_738_11_0, &direction_player1_738_11_0, NULL, &direction_player1_738_11_8, &direction_player1_738_11_8, &direction_player1_738_11_8, &direction_player1_738_11_8, &direction_player1_738_11_8, &direction_player1_738_11_8, &direction_player1_738_11_8, NULL, &direction_player1_738_11_16, &direction_player1_738_11_16, &direction_player1_738_11_16, &direction_player1_738_11_16, &direction_player1_738_11_16, &direction_player1_738_11_16, &direction_player1_738_11_16, NULL, &direction_player1_738_11_24, &direction_player1_738_11_24, &direction_player1_738_11_24, &direction_player1_738_11_24, &direction_player1_738_11_24, &direction_player1_738_11_24, &direction_player1_738_11_24, NULL, &direction_player1_738_11_0, &direction_player1_738_11_0, &direction_player1_738_11_0};
static Image* images_player1_738_12_0[2];
static Direction direction_player1_738_12_0 = {0, 10, 10, 0, -1, images_player1_738_12_0, 2};
static Image* images_player1_738_12_8[2];
static Direction direction_player1_738_12_8 = {8, 10, 10, 0, -1, images_player1_738_12_8, 2};
static Image* images_player1_738_12_16[2];
static Direction direction_player1_738_12_16 = {16, 10, 10, 0, -1, images_player1_738_12_16, 2};
static Image* images_player1_738_12_24[2];
static Direction direction_player1_738_12_24 = {24, 10, 10, 0, -1, images_player1_738_12_24, 2};
static Animation anim_player1_738_12 = {&direction_player1_738_12_0, &direction_player1_738_12_0, &direction_player1_738_12_0, &direction_player1_738_12_0, NULL, &direction_player1_738_12_8, &direction_player1_738_12_8, &direction_player1_738_12_8, &direction_player1_738_12_8, &direction_player1_738_12_8, &direction_player1_738_12_8, &direction_player1_738_12_8, NULL, &direction_player1_738_12_16, &direction_player1_738_12_16, &direction_player1_738_12_16, &direction_player1_738_12_16, &direction_player1_738_12_16, &direction_player1_738_12_16, &direction_player1_738_12_16, NULL, &direction_player1_738_12_24, &direction_player1_738_12_24, &direction_player1_738_12_24, &direction_player1_738_12_24, &direction_player1_738_12_24, &direction_player1_738_12_24, &direction_player1_738_12_24, NULL, &direction_player1_738_12_0, &direction_player1_738_12_0, &direction_player1_738_12_0};
static Image* images_player1_738_13_0[2];
static Direction direction_player1_738_13_0 = {0, 10, 10, 0, -1, images_player1_738_13_0, 2};
static Image* images_player1_738_13_8[2];
static Direction direction_player1_738_13_8 = {8, 10, 10, 0, -1, images_player1_738_13_8, 2};
static Image* images_player1_738_13_16[2];
static Direction direction_player1_738_13_16 = {16, 10, 10, 0, -1, images_player1_738_13_16, 2};
static Image* images_player1_738_13_24[2];
static Direction direction_player1_738_13_24 = {24, 10, 10, 0, -1, images_player1_738_13_24, 2};
static Animation anim_player1_738_13 = {&direction_player1_738_13_0, &direction_player1_738_13_0, &direction_player1_738_13_0, &direction_player1_738_13_0, NULL, &direction_player1_738_13_8, &direction_player1_738_13_8, &direction_player1_738_13_8, &direction_player1_738_13_8, &direction_player1_738_13_8, &direction_player1_738_13_8, &direction_player1_738_13_8, NULL, &direction_player1_738_13_16, &direction_player1_738_13_16, &direction_player1_738_13_16, &direction_player1_738_13_16, &direction_player1_738_13_16, &direction_player1_738_13_16, &direction_player1_738_13_16, NULL, &direction_player1_738_13_24, &direction_player1_738_13_24, &direction_player1_738_13_24, &direction_player1_738_13_24, &direction_player1_738_13_24, &direction_player1_738_13_24, &direction_player1_738_13_24, NULL, &direction_player1_738_13_0, &direction_player1_738_13_0, &direction_player1_738_13_0};
static Image* images_player1_738_14_0[2];
static Direction direction_player1_738_14_0 = {0, 10, 10, 0, -1, images_player1_738_14_0, 2};
static Image* images_player1_738_14_8[2];
static Direction direction_player1_738_14_8 = {8, 10, 10, 0, -1, images_player1_738_14_8, 2};
static Image* images_player1_738_14_16[2];
static Direction direction_player1_738_14_16 = {16, 10, 10, 0, -1, images_player1_738_14_16, 2};
static Image* images_player1_738_14_24[2];
static Direction direction_player1_738_14_24 = {24, 10, 10, 0, -1, images_player1_738_14_24, 2};
static Animation anim_player1_738_14 = {&direction_player1_738_14_0, &direction_player1_738_14_0, &direction_player1_738_14_0, &direction_player1_738_14_0, NULL, &direction_player1_738_14_8, &direction_player1_738_14_8, &direction_player1_738_14_8, &direction_player1_738_14_8, &direction_player1_738_14_8, &direction_player1_738_14_8, &direction_player1_738_14_8, NULL, &direction_player1_738_14_16, &direction_player1_738_14_16, &direction_player1_738_14_16, &direction_player1_738_14_16, &direction_player1_738_14_16, &direction_player1_738_14_16, &direction_player1_738_14_16, NULL, &direction_player1_738_14_24, &direction_player1_738_14_24, &direction_player1_738_14_24, &direction_player1_738_14_24, &direction_player1_738_14_24, &direction_player1_738_14_24, &direction_player1_738_14_24, NULL, &direction_player1_738_14_0, &direction_player1_738_14_0, &direction_player1_738_14_0};
static Image* images_player1_738_15_0[2];
static Direction direction_player1_738_15_0 = {0, 10, 10, 0, -1, images_player1_738_15_0, 2};
static Image* images_player1_738_15_8[2];
static Direction direction_player1_738_15_8 = {8, 10, 10, 0, -1, images_player1_738_15_8, 2};
static Image* images_player1_738_15_16[2];
static Direction direction_player1_738_15_16 = {16, 10, 10, 0, -1, images_player1_738_15_16, 2};
static Image* images_player1_738_15_24[2];
static Direction direction_player1_738_15_24 = {24, 10, 10, 0, -1, images_player1_738_15_24, 2};
static Animation anim_player1_738_15 = {&direction_player1_738_15_0, &direction_player1_738_15_0, &direction_player1_738_15_0, &direction_player1_738_15_0, NULL, &direction_player1_738_15_8, &direction_player1_738_15_8, &direction_player1_738_15_8, &direction_player1_738_15_8, &direction_player1_738_15_8, &direction_player1_738_15_8, &direction_player1_738_15_8, NULL, &direction_player1_738_15_16, &direction_player1_738_15_16, &direction_player1_738_15_16, &direction_player1_738_15_16, &direction_player1_738_15_16, &direction_player1_738_15_16, &direction_player1_738_15_16, NULL, &direction_player1_738_15_24, &direction_player1_738_15_24, &direction_player1_738_15_24, &direction_player1_738_15_24, &direction_player1_738_15_24, &direction_player1_738_15_24, &direction_player1_738_15_24, NULL, &direction_player1_738_15_0, &direction_player1_738_15_0, &direction_player1_738_15_0};
static Image* images_player1_738_16_0[2];
static Direction direction_player1_738_16_0 = {0, 10, 10, 0, -1, images_player1_738_16_0, 2};
static Image* images_player1_738_16_8[2];
static Direction direction_player1_738_16_8 = {8, 10, 10, 0, -1, images_player1_738_16_8, 2};
static Image* images_player1_738_16_16[2];
static Direction direction_player1_738_16_16 = {16, 10, 10, 0, -1, images_player1_738_16_16, 2};
static Image* images_player1_738_16_24[2];
static Direction direction_player1_738_16_24 = {24, 10, 10, 0, -1, images_player1_738_16_24, 2};
static Animation anim_player1_738_16 = {&direction_player1_738_16_0, &direction_player1_738_16_0, &direction_player1_738_16_0, &direction_player1_738_16_0, NULL, &direction_player1_738_16_8, &direction_player1_738_16_8, &direction_player1_738_16_8, &direction_player1_738_16_8, &direction_player1_738_16_8, &direction_player1_738_16_8, &direction_player1_738_16_8, NULL, &direction_player1_738_16_16, &direction_player1_738_16_16, &direction_player1_738_16_16, &direction_player1_738_16_16, &direction_player1_738_16_16, &direction_player1_738_16_16, &direction_player1_738_16_16, NULL, &direction_player1_738_16_24, &direction_player1_738_16_24, &direction_player1_738_16_24, &direction_player1_738_16_24, &direction_player1_738_16_24, &direction_player1_738_16_24, &direction_player1_738_16_24, NULL, &direction_player1_738_16_0, &direction_player1_738_16_0, &direction_player1_738_16_0};
static Image* images_player1_738_17_0[2];
static Direction direction_player1_738_17_0 = {0, 5, 5, 1, -1, images_player1_738_17_0, 2};
static Image* images_player1_738_17_8[2];
static Direction direction_player1_738_17_8 = {8, 5, 5, 1, -1, images_player1_738_17_8, 2};
static Image* images_player1_738_17_16[2];
static Direction direction_player1_738_17_16 = {16, 5, 5, 1, -1, images_player1_738_17_16, 2};
static Image* images_player1_738_17_24[2];
static Direction direction_player1_738_17_24 = {24, 5, 5, 1, -1, images_player1_738_17_24, 2};
static Animation anim_player1_738_17 = {&direction_player1_738_17_0, &direction_player1_738_17_0, &direction_player1_738_17_0, &direction_player1_738_17_0, NULL, &direction_player1_738_17_8, &direction_player1_738_17_8, &direction_player1_738_17_8, &direction_player1_738_17_8, &direction_player1_738_17_8, &direction_player1_738_17_8, &direction_player1_738_17_8, NULL, &direction_player1_738_17_16, &direction_player1_738_17_16, &direction_player1_738_17_16, &direction_player1_738_17_16, &direction_player1_738_17_16, &direction_player1_738_17_16, &direction_player1_738_17_16, NULL, &direction_player1_738_17_24, &direction_player1_738_17_24, &direction_player1_738_17_24, &direction_player1_738_17_24, &direction_player1_738_17_24, &direction_player1_738_17_24, &direction_player1_738_17_24, NULL, &direction_player1_738_17_0, &direction_player1_738_17_0, &direction_player1_738_17_0};
static Image* images_player1_738_18_24[8];
static Direction direction_player1_738_18_24 = {24, 10, 10, 0, -1, images_player1_738_18_24, 8};
static Animation anim_player1_738_18 = {&direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, NULL, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24, &direction_player1_738_18_24};
static Image* images_player1_738_19_24[4];
static Direction direction_player1_738_19_24 = {24, 10, 10, 0, -1, images_player1_738_19_24, 4};
static Animation anim_player1_738_19 = {&direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, NULL, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24, &direction_player1_738_19_24};
static Animation * anim_array_player1_738[20] = {&anim_player1_738_0, NULL, NULL, NULL, &anim_player1_738_4, NULL, &anim_player1_738_6, &anim_player1_738_7, &anim_player1_738_8, &anim_player1_738_9, &anim_player1_738_10, &anim_player1_738_11, &anim_player1_738_12, &anim_player1_738_13, &anim_player1_738_14, &anim_player1_738_15, &anim_player1_738_16, &anim_player1_738_17, &anim_player1_738_18, &anim_player1_738_19};
static Animations anim_player1_738 = {20, &anim_array_player1_738[0]};
static bool anim_player1_738_initialized;
class Player1_738 : public Active
{
public:
    Player1_738(int x, int y) : Active(x, y, Player1_738_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_1", 8);
#endif
        this->animations = &anim_player1_738;
        if (!anim_player1_738_initialized) {
            anim_player1_738_initialized = true;
            images_player1_738_0_0[0] = get_internal_image(574);
            images_player1_738_0_0[1] = get_internal_image(575);
            images_player1_738_0_8[0] = get_internal_image(552);
            images_player1_738_0_8[1] = get_internal_image(553);
            images_player1_738_0_16[0] = get_internal_image(573);
            images_player1_738_0_16[1] = get_internal_image(576);
            images_player1_738_0_24[0] = get_internal_image(550);
            images_player1_738_0_24[1] = get_internal_image(551);
            images_player1_738_4_0[0] = get_internal_image(369);
            images_player1_738_4_0[1] = get_internal_image(373);
            images_player1_738_4_0[2] = get_internal_image(369);
            images_player1_738_4_0[3] = get_internal_image(373);
            images_player1_738_4_16[0] = get_internal_image(371);
            images_player1_738_4_16[1] = get_internal_image(763);
            images_player1_738_4_16[2] = get_internal_image(371);
            images_player1_738_4_16[3] = get_internal_image(763);
            images_player1_738_6_0[0] = get_internal_image(803);
            images_player1_738_6_8[0] = get_internal_image(1066);
            images_player1_738_6_16[0] = get_internal_image(804);
            images_player1_738_6_24[0] = get_internal_image(1071);
            images_player1_738_7_0[0] = get_internal_image(1106);
            images_player1_738_7_0[1] = get_internal_image(1101);
            images_player1_738_7_8[0] = get_internal_image(1126);
            images_player1_738_7_8[1] = get_internal_image(1127);
            images_player1_738_7_16[0] = get_internal_image(1108);
            images_player1_738_7_16[1] = get_internal_image(1122);
            images_player1_738_7_24[0] = get_internal_image(1124);
            images_player1_738_7_24[1] = get_internal_image(1125);
            images_player1_738_8_24[0] = get_internal_image(1177);
            images_player1_738_9_0[0] = get_internal_image(1019);
            images_player1_738_9_0[1] = get_internal_image(1488);
            images_player1_738_10_0[0] = get_internal_image(583);
            images_player1_738_10_0[1] = get_internal_image(580);
            images_player1_738_10_0[2] = get_internal_image(579);
            images_player1_738_10_0[3] = get_internal_image(580);
            images_player1_738_10_0[4] = get_internal_image(581);
            images_player1_738_11_0[0] = get_internal_image(1188);
            images_player1_738_11_0[1] = get_internal_image(1218);
            images_player1_738_11_8[0] = get_internal_image(588);
            images_player1_738_11_8[1] = get_internal_image(589);
            images_player1_738_11_16[0] = get_internal_image(1219);
            images_player1_738_11_16[1] = get_internal_image(1220);
            images_player1_738_11_24[0] = get_internal_image(599);
            images_player1_738_11_24[1] = get_internal_image(104);
            images_player1_738_12_0[0] = get_internal_image(1207);
            images_player1_738_12_0[1] = get_internal_image(1210);
            images_player1_738_12_8[0] = get_internal_image(1767);
            images_player1_738_12_8[1] = get_internal_image(1772);
            images_player1_738_12_16[0] = get_internal_image(1208);
            images_player1_738_12_16[1] = get_internal_image(1206);
            images_player1_738_12_24[0] = get_internal_image(1587);
            images_player1_738_12_24[1] = get_internal_image(1582);
            images_player1_738_13_0[0] = get_internal_image(1829);
            images_player1_738_13_0[1] = get_internal_image(1831);
            images_player1_738_13_8[0] = get_internal_image(1837);
            images_player1_738_13_8[1] = get_internal_image(1833);
            images_player1_738_13_16[0] = get_internal_image(1830);
            images_player1_738_13_16[1] = get_internal_image(1832);
            images_player1_738_13_24[0] = get_internal_image(1835);
            images_player1_738_13_24[1] = get_internal_image(1834);
            images_player1_738_14_0[0] = get_internal_image(1653);
            images_player1_738_14_0[1] = get_internal_image(1655);
            images_player1_738_14_8[0] = get_internal_image(1661);
            images_player1_738_14_8[1] = get_internal_image(1659);
            images_player1_738_14_16[0] = get_internal_image(1654);
            images_player1_738_14_16[1] = get_internal_image(1656);
            images_player1_738_14_24[0] = get_internal_image(1658);
            images_player1_738_14_24[1] = get_internal_image(1657);
            images_player1_738_15_0[0] = get_internal_image(1956);
            images_player1_738_15_0[1] = get_internal_image(1951);
            images_player1_738_15_8[0] = get_internal_image(1962);
            images_player1_738_15_8[1] = get_internal_image(1963);
            images_player1_738_15_16[0] = get_internal_image(1957);
            images_player1_738_15_16[1] = get_internal_image(1958);
            images_player1_738_15_24[0] = get_internal_image(1960);
            images_player1_738_15_24[1] = get_internal_image(1959);
            images_player1_738_16_0[0] = get_internal_image(1870);
            images_player1_738_16_0[1] = get_internal_image(1871);
            images_player1_738_16_8[0] = get_internal_image(1607);
            images_player1_738_16_8[1] = get_internal_image(1602);
            images_player1_738_16_16[0] = get_internal_image(1869);
            images_player1_738_16_16[1] = get_internal_image(1872);
            images_player1_738_16_24[0] = get_internal_image(1902);
            images_player1_738_16_24[1] = get_internal_image(1903);
            images_player1_738_17_0[0] = get_internal_image(2018);
            images_player1_738_17_0[1] = get_internal_image(2016);
            images_player1_738_17_8[0] = get_internal_image(2020);
            images_player1_738_17_8[1] = get_internal_image(2022);
            images_player1_738_17_16[0] = get_internal_image(2017);
            images_player1_738_17_16[1] = get_internal_image(2019);
            images_player1_738_17_24[0] = get_internal_image(2021);
            images_player1_738_17_24[1] = get_internal_image(2023);
            images_player1_738_18_24[0] = get_internal_image(2096);
            images_player1_738_18_24[1] = get_internal_image(2098);
            images_player1_738_18_24[2] = get_internal_image(2097);
            images_player1_738_18_24[3] = get_internal_image(2093);
            images_player1_738_18_24[4] = get_internal_image(2094);
            images_player1_738_18_24[5] = get_internal_image(2092);
            images_player1_738_18_24[6] = get_internal_image(2097);
            images_player1_738_18_24[7] = get_internal_image(2095);
            images_player1_738_19_24[0] = get_internal_image(2152);
            images_player1_738_19_24[1] = get_internal_image(2151);
            images_player1_738_19_24[2] = get_internal_image(2148);
            images_player1_738_19_24[3] = get_internal_image(2151);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player1_738(int x, int y)
{
    return new (Active::pool.create()) Player1_738(x, y);
}
static Image* images_player2_739_0_0[2];
static Direction direction_player2_739_0_0 = {0, 10, 10, 0, -1, images_player2_739_0_0, 2};
static Image* images_player2_739_0_8[2];
static Direction direction_player2_739_0_8 = {8, 10, 10, 0, -1, images_player2_739_0_8, 2};
static Image* images_player2_739_0_16[2];
static Direction direction_player2_739_0_16 = {16, 10, 10, 0, -1, images_player2_739_0_16, 2};
static Image* images_player2_739_0_24[2];
static Direction direction_player2_739_0_24 = {24, 10, 10, 0, -1, images_player2_739_0_24, 2};
static Animation anim_player2_739_0 = {&direction_player2_739_0_0, &direction_player2_739_0_0, &direction_player2_739_0_0, &direction_player2_739_0_0, NULL, &direction_player2_739_0_8, &direction_player2_739_0_8, &direction_player2_739_0_8, &direction_player2_739_0_8, &direction_player2_739_0_8, &direction_player2_739_0_8, &direction_player2_739_0_8, NULL, &direction_player2_739_0_16, &direction_player2_739_0_16, &direction_player2_739_0_16, &direction_player2_739_0_16, &direction_player2_739_0_16, &direction_player2_739_0_16, &direction_player2_739_0_16, NULL, &direction_player2_739_0_24, &direction_player2_739_0_24, &direction_player2_739_0_24, &direction_player2_739_0_24, &direction_player2_739_0_24, &direction_player2_739_0_24, &direction_player2_739_0_24, NULL, &direction_player2_739_0_0, &direction_player2_739_0_0, &direction_player2_739_0_0};
static Image* images_player2_739_4_0[4];
static Direction direction_player2_739_4_0 = {0, 20, 20, 0, 1, images_player2_739_4_0, 4};
static Image* images_player2_739_4_16[4];
static Direction direction_player2_739_4_16 = {16, 20, 20, 0, 1, images_player2_739_4_16, 4};
static Animation anim_player2_739_4 = {&direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0, NULL, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, &direction_player2_739_4_16, NULL, &direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0, &direction_player2_739_4_0};
static Image* images_player2_739_6_0[1];
static Direction direction_player2_739_6_0 = {0, 6, 6, 0, 1, images_player2_739_6_0, 1};
static Image* images_player2_739_6_8[1];
static Direction direction_player2_739_6_8 = {8, 6, 6, 0, 1, images_player2_739_6_8, 1};
static Image* images_player2_739_6_16[1];
static Direction direction_player2_739_6_16 = {16, 6, 6, 0, 1, images_player2_739_6_16, 1};
static Image* images_player2_739_6_24[1];
static Direction direction_player2_739_6_24 = {24, 6, 6, 0, 1, images_player2_739_6_24, 1};
static Animation anim_player2_739_6 = {&direction_player2_739_6_0, &direction_player2_739_6_0, &direction_player2_739_6_0, &direction_player2_739_6_0, NULL, &direction_player2_739_6_8, &direction_player2_739_6_8, &direction_player2_739_6_8, &direction_player2_739_6_8, &direction_player2_739_6_8, &direction_player2_739_6_8, &direction_player2_739_6_8, NULL, &direction_player2_739_6_16, &direction_player2_739_6_16, &direction_player2_739_6_16, &direction_player2_739_6_16, &direction_player2_739_6_16, &direction_player2_739_6_16, &direction_player2_739_6_16, NULL, &direction_player2_739_6_24, &direction_player2_739_6_24, &direction_player2_739_6_24, &direction_player2_739_6_24, &direction_player2_739_6_24, &direction_player2_739_6_24, &direction_player2_739_6_24, NULL, &direction_player2_739_6_0, &direction_player2_739_6_0, &direction_player2_739_6_0};
static Image* images_player2_739_7_0[2];
static Direction direction_player2_739_7_0 = {0, 10, 10, 0, -1, images_player2_739_7_0, 2};
static Image* images_player2_739_7_8[2];
static Direction direction_player2_739_7_8 = {8, 10, 10, 0, -1, images_player2_739_7_8, 2};
static Image* images_player2_739_7_16[2];
static Direction direction_player2_739_7_16 = {16, 10, 10, 0, -1, images_player2_739_7_16, 2};
static Image* images_player2_739_7_24[2];
static Direction direction_player2_739_7_24 = {24, 10, 10, 0, -1, images_player2_739_7_24, 2};
static Animation anim_player2_739_7 = {&direction_player2_739_7_0, &direction_player2_739_7_0, &direction_player2_739_7_0, &direction_player2_739_7_0, NULL, &direction_player2_739_7_8, &direction_player2_739_7_8, &direction_player2_739_7_8, &direction_player2_739_7_8, &direction_player2_739_7_8, &direction_player2_739_7_8, &direction_player2_739_7_8, NULL, &direction_player2_739_7_16, &direction_player2_739_7_16, &direction_player2_739_7_16, &direction_player2_739_7_16, &direction_player2_739_7_16, &direction_player2_739_7_16, &direction_player2_739_7_16, NULL, &direction_player2_739_7_24, &direction_player2_739_7_24, &direction_player2_739_7_24, &direction_player2_739_7_24, &direction_player2_739_7_24, &direction_player2_739_7_24, &direction_player2_739_7_24, NULL, &direction_player2_739_7_0, &direction_player2_739_7_0, &direction_player2_739_7_0};
static Image* images_player2_739_8_24[1];
static Direction direction_player2_739_8_24 = {24, 10, 10, 0, -1, images_player2_739_8_24, 1};
static Animation anim_player2_739_8 = {&direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, NULL, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24, &direction_player2_739_8_24};
static Image* images_player2_739_9_0[2];
static Direction direction_player2_739_9_0 = {0, 50, 50, 0, -1, images_player2_739_9_0, 2};
static Animation anim_player2_739_9 = {&direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, NULL, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0, &direction_player2_739_9_0};
static Image* images_player2_739_10_0[5];
static Direction direction_player2_739_10_0 = {0, 10, 10, 0, -1, images_player2_739_10_0, 5};
static Animation anim_player2_739_10 = {&direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, NULL, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0, &direction_player2_739_10_0};
static Image* images_player2_739_11_0[2];
static Direction direction_player2_739_11_0 = {0, 6, 6, 0, -1, images_player2_739_11_0, 2};
static Image* images_player2_739_11_8[2];
static Direction direction_player2_739_11_8 = {8, 6, 6, 0, -1, images_player2_739_11_8, 2};
static Image* images_player2_739_11_16[2];
static Direction direction_player2_739_11_16 = {16, 6, 6, 0, -1, images_player2_739_11_16, 2};
static Image* images_player2_739_11_24[2];
static Direction direction_player2_739_11_24 = {24, 6, 6, 0, -1, images_player2_739_11_24, 2};
static Animation anim_player2_739_11 = {&direction_player2_739_11_0, &direction_player2_739_11_0, &direction_player2_739_11_0, &direction_player2_739_11_0, NULL, &direction_player2_739_11_8, &direction_player2_739_11_8, &direction_player2_739_11_8, &direction_player2_739_11_8, &direction_player2_739_11_8, &direction_player2_739_11_8, &direction_player2_739_11_8, NULL, &direction_player2_739_11_16, &direction_player2_739_11_16, &direction_player2_739_11_16, &direction_player2_739_11_16, &direction_player2_739_11_16, &direction_player2_739_11_16, &direction_player2_739_11_16, NULL, &direction_player2_739_11_24, &direction_player2_739_11_24, &direction_player2_739_11_24, &direction_player2_739_11_24, &direction_player2_739_11_24, &direction_player2_739_11_24, &direction_player2_739_11_24, NULL, &direction_player2_739_11_0, &direction_player2_739_11_0, &direction_player2_739_11_0};
static Image* images_player2_739_12_0[2];
static Direction direction_player2_739_12_0 = {0, 10, 10, 0, -1, images_player2_739_12_0, 2};
static Image* images_player2_739_12_8[2];
static Direction direction_player2_739_12_8 = {8, 10, 10, 0, -1, images_player2_739_12_8, 2};
static Image* images_player2_739_12_16[2];
static Direction direction_player2_739_12_16 = {16, 10, 10, 0, -1, images_player2_739_12_16, 2};
static Image* images_player2_739_12_24[2];
static Direction direction_player2_739_12_24 = {24, 10, 10, 0, -1, images_player2_739_12_24, 2};
static Animation anim_player2_739_12 = {&direction_player2_739_12_0, &direction_player2_739_12_0, &direction_player2_739_12_0, &direction_player2_739_12_0, NULL, &direction_player2_739_12_8, &direction_player2_739_12_8, &direction_player2_739_12_8, &direction_player2_739_12_8, &direction_player2_739_12_8, &direction_player2_739_12_8, &direction_player2_739_12_8, NULL, &direction_player2_739_12_16, &direction_player2_739_12_16, &direction_player2_739_12_16, &direction_player2_739_12_16, &direction_player2_739_12_16, &direction_player2_739_12_16, &direction_player2_739_12_16, NULL, &direction_player2_739_12_24, &direction_player2_739_12_24, &direction_player2_739_12_24, &direction_player2_739_12_24, &direction_player2_739_12_24, &direction_player2_739_12_24, &direction_player2_739_12_24, NULL, &direction_player2_739_12_0, &direction_player2_739_12_0, &direction_player2_739_12_0};
static Image* images_player2_739_13_0[2];
static Direction direction_player2_739_13_0 = {0, 10, 10, 0, -1, images_player2_739_13_0, 2};
static Image* images_player2_739_13_8[2];
static Direction direction_player2_739_13_8 = {8, 10, 10, 0, -1, images_player2_739_13_8, 2};
static Image* images_player2_739_13_16[2];
static Direction direction_player2_739_13_16 = {16, 10, 10, 0, -1, images_player2_739_13_16, 2};
static Image* images_player2_739_13_24[2];
static Direction direction_player2_739_13_24 = {24, 10, 10, 0, -1, images_player2_739_13_24, 2};
static Animation anim_player2_739_13 = {&direction_player2_739_13_0, &direction_player2_739_13_0, &direction_player2_739_13_0, &direction_player2_739_13_0, NULL, &direction_player2_739_13_8, &direction_player2_739_13_8, &direction_player2_739_13_8, &direction_player2_739_13_8, &direction_player2_739_13_8, &direction_player2_739_13_8, &direction_player2_739_13_8, NULL, &direction_player2_739_13_16, &direction_player2_739_13_16, &direction_player2_739_13_16, &direction_player2_739_13_16, &direction_player2_739_13_16, &direction_player2_739_13_16, &direction_player2_739_13_16, NULL, &direction_player2_739_13_24, &direction_player2_739_13_24, &direction_player2_739_13_24, &direction_player2_739_13_24, &direction_player2_739_13_24, &direction_player2_739_13_24, &direction_player2_739_13_24, NULL, &direction_player2_739_13_0, &direction_player2_739_13_0, &direction_player2_739_13_0};
static Image* images_player2_739_14_0[2];
static Direction direction_player2_739_14_0 = {0, 10, 10, 0, -1, images_player2_739_14_0, 2};
static Image* images_player2_739_14_8[2];
static Direction direction_player2_739_14_8 = {8, 10, 10, 0, -1, images_player2_739_14_8, 2};
static Image* images_player2_739_14_16[2];
static Direction direction_player2_739_14_16 = {16, 10, 10, 0, -1, images_player2_739_14_16, 2};
static Image* images_player2_739_14_24[2];
static Direction direction_player2_739_14_24 = {24, 10, 10, 0, -1, images_player2_739_14_24, 2};
static Animation anim_player2_739_14 = {&direction_player2_739_14_0, &direction_player2_739_14_0, &direction_player2_739_14_0, &direction_player2_739_14_0, NULL, &direction_player2_739_14_8, &direction_player2_739_14_8, &direction_player2_739_14_8, &direction_player2_739_14_8, &direction_player2_739_14_8, &direction_player2_739_14_8, &direction_player2_739_14_8, NULL, &direction_player2_739_14_16, &direction_player2_739_14_16, &direction_player2_739_14_16, &direction_player2_739_14_16, &direction_player2_739_14_16, &direction_player2_739_14_16, &direction_player2_739_14_16, NULL, &direction_player2_739_14_24, &direction_player2_739_14_24, &direction_player2_739_14_24, &direction_player2_739_14_24, &direction_player2_739_14_24, &direction_player2_739_14_24, &direction_player2_739_14_24, NULL, &direction_player2_739_14_0, &direction_player2_739_14_0, &direction_player2_739_14_0};
static Image* images_player2_739_15_0[2];
static Direction direction_player2_739_15_0 = {0, 10, 10, 0, -1, images_player2_739_15_0, 2};
static Image* images_player2_739_15_8[2];
static Direction direction_player2_739_15_8 = {8, 10, 10, 0, -1, images_player2_739_15_8, 2};
static Image* images_player2_739_15_16[2];
static Direction direction_player2_739_15_16 = {16, 10, 10, 0, -1, images_player2_739_15_16, 2};
static Image* images_player2_739_15_24[2];
static Direction direction_player2_739_15_24 = {24, 10, 10, 0, -1, images_player2_739_15_24, 2};
static Animation anim_player2_739_15 = {&direction_player2_739_15_0, &direction_player2_739_15_0, &direction_player2_739_15_0, &direction_player2_739_15_0, NULL, &direction_player2_739_15_8, &direction_player2_739_15_8, &direction_player2_739_15_8, &direction_player2_739_15_8, &direction_player2_739_15_8, &direction_player2_739_15_8, &direction_player2_739_15_8, NULL, &direction_player2_739_15_16, &direction_player2_739_15_16, &direction_player2_739_15_16, &direction_player2_739_15_16, &direction_player2_739_15_16, &direction_player2_739_15_16, &direction_player2_739_15_16, NULL, &direction_player2_739_15_24, &direction_player2_739_15_24, &direction_player2_739_15_24, &direction_player2_739_15_24, &direction_player2_739_15_24, &direction_player2_739_15_24, &direction_player2_739_15_24, NULL, &direction_player2_739_15_0, &direction_player2_739_15_0, &direction_player2_739_15_0};
static Image* images_player2_739_16_0[2];
static Direction direction_player2_739_16_0 = {0, 10, 10, 0, -1, images_player2_739_16_0, 2};
static Image* images_player2_739_16_8[2];
static Direction direction_player2_739_16_8 = {8, 10, 10, 0, -1, images_player2_739_16_8, 2};
static Image* images_player2_739_16_16[2];
static Direction direction_player2_739_16_16 = {16, 10, 10, 0, -1, images_player2_739_16_16, 2};
static Image* images_player2_739_16_24[2];
static Direction direction_player2_739_16_24 = {24, 10, 10, 0, -1, images_player2_739_16_24, 2};
static Animation anim_player2_739_16 = {&direction_player2_739_16_0, &direction_player2_739_16_0, &direction_player2_739_16_0, &direction_player2_739_16_0, NULL, &direction_player2_739_16_8, &direction_player2_739_16_8, &direction_player2_739_16_8, &direction_player2_739_16_8, &direction_player2_739_16_8, &direction_player2_739_16_8, &direction_player2_739_16_8, NULL, &direction_player2_739_16_16, &direction_player2_739_16_16, &direction_player2_739_16_16, &direction_player2_739_16_16, &direction_player2_739_16_16, &direction_player2_739_16_16, &direction_player2_739_16_16, NULL, &direction_player2_739_16_24, &direction_player2_739_16_24, &direction_player2_739_16_24, &direction_player2_739_16_24, &direction_player2_739_16_24, &direction_player2_739_16_24, &direction_player2_739_16_24, NULL, &direction_player2_739_16_0, &direction_player2_739_16_0, &direction_player2_739_16_0};
static Image* images_player2_739_17_0[2];
static Direction direction_player2_739_17_0 = {0, 5, 5, 1, -1, images_player2_739_17_0, 2};
static Image* images_player2_739_17_8[2];
static Direction direction_player2_739_17_8 = {8, 5, 5, 1, -1, images_player2_739_17_8, 2};
static Image* images_player2_739_17_16[2];
static Direction direction_player2_739_17_16 = {16, 5, 5, 1, -1, images_player2_739_17_16, 2};
static Image* images_player2_739_17_24[2];
static Direction direction_player2_739_17_24 = {24, 5, 5, 1, -1, images_player2_739_17_24, 2};
static Animation anim_player2_739_17 = {&direction_player2_739_17_0, &direction_player2_739_17_0, &direction_player2_739_17_0, &direction_player2_739_17_0, NULL, &direction_player2_739_17_8, &direction_player2_739_17_8, &direction_player2_739_17_8, &direction_player2_739_17_8, &direction_player2_739_17_8, &direction_player2_739_17_8, &direction_player2_739_17_8, NULL, &direction_player2_739_17_16, &direction_player2_739_17_16, &direction_player2_739_17_16, &direction_player2_739_17_16, &direction_player2_739_17_16, &direction_player2_739_17_16, &direction_player2_739_17_16, NULL, &direction_player2_739_17_24, &direction_player2_739_17_24, &direction_player2_739_17_24, &direction_player2_739_17_24, &direction_player2_739_17_24, &direction_player2_739_17_24, &direction_player2_739_17_24, NULL, &direction_player2_739_17_0, &direction_player2_739_17_0, &direction_player2_739_17_0};
static Image* images_player2_739_18_24[8];
static Direction direction_player2_739_18_24 = {24, 10, 10, 0, -1, images_player2_739_18_24, 8};
static Animation anim_player2_739_18 = {&direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, NULL, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24, &direction_player2_739_18_24};
static Image* images_player2_739_19_24[4];
static Direction direction_player2_739_19_24 = {24, 10, 10, 0, -1, images_player2_739_19_24, 4};
static Animation anim_player2_739_19 = {&direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, NULL, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24, &direction_player2_739_19_24};
static Animation * anim_array_player2_739[20] = {&anim_player2_739_0, NULL, NULL, NULL, &anim_player2_739_4, NULL, &anim_player2_739_6, &anim_player2_739_7, &anim_player2_739_8, &anim_player2_739_9, &anim_player2_739_10, &anim_player2_739_11, &anim_player2_739_12, &anim_player2_739_13, &anim_player2_739_14, &anim_player2_739_15, &anim_player2_739_16, &anim_player2_739_17, &anim_player2_739_18, &anim_player2_739_19};
static Animations anim_player2_739 = {20, &anim_array_player2_739[0]};
static bool anim_player2_739_initialized;
class Player2_739 : public Active
{
public:
    Player2_739(int x, int y) : Active(x, y, Player2_739_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_2", 8);
#endif
        this->animations = &anim_player2_739;
        if (!anim_player2_739_initialized) {
            anim_player2_739_initialized = true;
            images_player2_739_0_0[0] = get_internal_image(414);
            images_player2_739_0_0[1] = get_internal_image(609);
            images_player2_739_0_8[0] = get_internal_image(638);
            images_player2_739_0_8[1] = get_internal_image(639);
            images_player2_739_0_16[0] = get_internal_image(363);
            images_player2_739_0_16[1] = get_internal_image(622);
            images_player2_739_0_24[0] = get_internal_image(637);
            images_player2_739_0_24[1] = get_internal_image(624);
            images_player2_739_4_0[0] = get_internal_image(369);
            images_player2_739_4_0[1] = get_internal_image(373);
            images_player2_739_4_0[2] = get_internal_image(369);
            images_player2_739_4_0[3] = get_internal_image(373);
            images_player2_739_4_16[0] = get_internal_image(371);
            images_player2_739_4_16[1] = get_internal_image(763);
            images_player2_739_4_16[2] = get_internal_image(371);
            images_player2_739_4_16[3] = get_internal_image(763);
            images_player2_739_6_0[0] = get_internal_image(167);
            images_player2_739_6_8[0] = get_internal_image(793);
            images_player2_739_6_16[0] = get_internal_image(258);
            images_player2_739_6_24[0] = get_internal_image(788);
            images_player2_739_7_0[0] = get_internal_image(1162);
            images_player2_739_7_0[1] = get_internal_image(1163);
            images_player2_739_7_8[0] = get_internal_image(1165);
            images_player2_739_7_8[1] = get_internal_image(1169);
            images_player2_739_7_16[0] = get_internal_image(1157);
            images_player2_739_7_16[1] = get_internal_image(1164);
            images_player2_739_7_24[0] = get_internal_image(1166);
            images_player2_739_7_24[1] = get_internal_image(1167);
            images_player2_739_8_24[0] = get_internal_image(1181);
            images_player2_739_9_0[0] = get_internal_image(1505);
            images_player2_739_9_0[1] = get_internal_image(1504);
            images_player2_739_10_0[0] = get_internal_image(2344);
            images_player2_739_10_0[1] = get_internal_image(2340);
            images_player2_739_10_0[2] = get_internal_image(2337);
            images_player2_739_10_0[3] = get_internal_image(2338);
            images_player2_739_10_0[4] = get_internal_image(2337);
            images_player2_739_11_0[0] = get_internal_image(676);
            images_player2_739_11_0[1] = get_internal_image(969);
            images_player2_739_11_8[0] = get_internal_image(1089);
            images_player2_739_11_8[1] = get_internal_image(1091);
            images_player2_739_11_16[0] = get_internal_image(248);
            images_player2_739_11_16[1] = get_internal_image(1082);
            images_player2_739_11_24[0] = get_internal_image(605);
            images_player2_739_11_24[1] = get_internal_image(732);
            images_player2_739_12_0[0] = get_internal_image(1199);
            images_player2_739_12_0[1] = get_internal_image(1193);
            images_player2_739_12_8[0] = get_internal_image(1768);
            images_player2_739_12_8[1] = get_internal_image(1769);
            images_player2_739_12_16[0] = get_internal_image(1200);
            images_player2_739_12_16[1] = get_internal_image(1201);
            images_player2_739_12_24[0] = get_internal_image(1784);
            images_player2_739_12_24[1] = get_internal_image(1785);
            images_player2_739_13_0[0] = get_internal_image(1836);
            images_player2_739_13_0[1] = get_internal_image(1839);
            images_player2_739_13_8[0] = get_internal_image(1844);
            images_player2_739_13_8[1] = get_internal_image(1845);
            images_player2_739_13_16[0] = get_internal_image(1838);
            images_player2_739_13_16[1] = get_internal_image(1840);
            images_player2_739_13_24[0] = get_internal_image(1842);
            images_player2_739_13_24[1] = get_internal_image(1841);
            images_player2_739_14_0[0] = get_internal_image(1702);
            images_player2_739_14_0[1] = get_internal_image(1703);
            images_player2_739_14_8[0] = get_internal_image(1709);
            images_player2_739_14_8[1] = get_internal_image(1708);
            images_player2_739_14_16[0] = get_internal_image(1705);
            images_player2_739_14_16[1] = get_internal_image(1706);
            images_player2_739_14_24[0] = get_internal_image(1707);
            images_player2_739_14_24[1] = get_internal_image(1704);
            images_player2_739_15_0[0] = get_internal_image(1753);
            images_player2_739_15_0[1] = get_internal_image(1754);
            images_player2_739_15_8[0] = get_internal_image(1757);
            images_player2_739_15_8[1] = get_internal_image(1760);
            images_player2_739_15_16[0] = get_internal_image(1756);
            images_player2_739_15_16[1] = get_internal_image(1755);
            images_player2_739_15_24[0] = get_internal_image(1752);
            images_player2_739_15_24[1] = get_internal_image(1758);
            images_player2_739_16_0[0] = get_internal_image(1873);
            images_player2_739_16_0[1] = get_internal_image(1874);
            images_player2_739_16_8[0] = get_internal_image(1640);
            images_player2_739_16_8[1] = get_internal_image(1915);
            images_player2_739_16_16[0] = get_internal_image(1876);
            images_player2_739_16_16[1] = get_internal_image(1877);
            images_player2_739_16_24[0] = get_internal_image(1904);
            images_player2_739_16_24[1] = get_internal_image(1905);
            images_player2_739_17_0[0] = get_internal_image(2025);
            images_player2_739_17_0[1] = get_internal_image(2026);
            images_player2_739_17_8[0] = get_internal_image(2029);
            images_player2_739_17_8[1] = get_internal_image(2031);
            images_player2_739_17_16[0] = get_internal_image(2024);
            images_player2_739_17_16[1] = get_internal_image(2027);
            images_player2_739_17_24[0] = get_internal_image(2028);
            images_player2_739_17_24[1] = get_internal_image(2030);
            images_player2_739_18_24[0] = get_internal_image(2089);
            images_player2_739_18_24[1] = get_internal_image(2105);
            images_player2_739_18_24[2] = get_internal_image(2104);
            images_player2_739_18_24[3] = get_internal_image(2100);
            images_player2_739_18_24[4] = get_internal_image(2101);
            images_player2_739_18_24[5] = get_internal_image(2106);
            images_player2_739_18_24[6] = get_internal_image(2103);
            images_player2_739_18_24[7] = get_internal_image(2102);
            images_player2_739_19_24[0] = get_internal_image(2153);
            images_player2_739_19_24[1] = get_internal_image(2154);
            images_player2_739_19_24[2] = get_internal_image(2155);
            images_player2_739_19_24[3] = get_internal_image(2154);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player2_739(int x, int y)
{
    return new (Active::pool.create()) Player2_739(x, y);
}
static Image* images_player3_740_0_0[2];
static Direction direction_player3_740_0_0 = {0, 10, 10, 0, -1, images_player3_740_0_0, 2};
static Image* images_player3_740_0_8[2];
static Direction direction_player3_740_0_8 = {8, 10, 10, 0, -1, images_player3_740_0_8, 2};
static Image* images_player3_740_0_16[2];
static Direction direction_player3_740_0_16 = {16, 10, 10, 0, -1, images_player3_740_0_16, 2};
static Image* images_player3_740_0_24[2];
static Direction direction_player3_740_0_24 = {24, 10, 10, 0, -1, images_player3_740_0_24, 2};
static Animation anim_player3_740_0 = {&direction_player3_740_0_0, &direction_player3_740_0_0, &direction_player3_740_0_0, &direction_player3_740_0_0, NULL, &direction_player3_740_0_8, &direction_player3_740_0_8, &direction_player3_740_0_8, &direction_player3_740_0_8, &direction_player3_740_0_8, &direction_player3_740_0_8, &direction_player3_740_0_8, NULL, &direction_player3_740_0_16, &direction_player3_740_0_16, &direction_player3_740_0_16, &direction_player3_740_0_16, &direction_player3_740_0_16, &direction_player3_740_0_16, &direction_player3_740_0_16, NULL, &direction_player3_740_0_24, &direction_player3_740_0_24, &direction_player3_740_0_24, &direction_player3_740_0_24, &direction_player3_740_0_24, &direction_player3_740_0_24, &direction_player3_740_0_24, NULL, &direction_player3_740_0_0, &direction_player3_740_0_0, &direction_player3_740_0_0};
static Image* images_player3_740_4_0[4];
static Direction direction_player3_740_4_0 = {0, 20, 20, 0, 1, images_player3_740_4_0, 4};
static Image* images_player3_740_4_16[4];
static Direction direction_player3_740_4_16 = {16, 20, 20, 0, 1, images_player3_740_4_16, 4};
static Animation anim_player3_740_4 = {&direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0, NULL, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, &direction_player3_740_4_16, NULL, &direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0, &direction_player3_740_4_0};
static Image* images_player3_740_6_0[1];
static Direction direction_player3_740_6_0 = {0, 6, 6, 0, 1, images_player3_740_6_0, 1};
static Image* images_player3_740_6_8[1];
static Direction direction_player3_740_6_8 = {8, 6, 6, 0, 1, images_player3_740_6_8, 1};
static Image* images_player3_740_6_16[1];
static Direction direction_player3_740_6_16 = {16, 6, 6, 0, 1, images_player3_740_6_16, 1};
static Image* images_player3_740_6_24[1];
static Direction direction_player3_740_6_24 = {24, 6, 6, 0, 1, images_player3_740_6_24, 1};
static Animation anim_player3_740_6 = {&direction_player3_740_6_0, &direction_player3_740_6_0, &direction_player3_740_6_0, &direction_player3_740_6_0, NULL, &direction_player3_740_6_8, &direction_player3_740_6_8, &direction_player3_740_6_8, &direction_player3_740_6_8, &direction_player3_740_6_8, &direction_player3_740_6_8, &direction_player3_740_6_8, NULL, &direction_player3_740_6_16, &direction_player3_740_6_16, &direction_player3_740_6_16, &direction_player3_740_6_16, &direction_player3_740_6_16, &direction_player3_740_6_16, &direction_player3_740_6_16, NULL, &direction_player3_740_6_24, &direction_player3_740_6_24, &direction_player3_740_6_24, &direction_player3_740_6_24, &direction_player3_740_6_24, &direction_player3_740_6_24, &direction_player3_740_6_24, NULL, &direction_player3_740_6_0, &direction_player3_740_6_0, &direction_player3_740_6_0};
static Image* images_player3_740_7_0[2];
static Direction direction_player3_740_7_0 = {0, 10, 10, 0, -1, images_player3_740_7_0, 2};
static Image* images_player3_740_7_8[2];
static Direction direction_player3_740_7_8 = {8, 10, 10, 0, -1, images_player3_740_7_8, 2};
static Image* images_player3_740_7_16[2];
static Direction direction_player3_740_7_16 = {16, 10, 10, 0, -1, images_player3_740_7_16, 2};
static Image* images_player3_740_7_24[2];
static Direction direction_player3_740_7_24 = {24, 10, 10, 0, -1, images_player3_740_7_24, 2};
static Animation anim_player3_740_7 = {&direction_player3_740_7_0, &direction_player3_740_7_0, &direction_player3_740_7_0, &direction_player3_740_7_0, NULL, &direction_player3_740_7_8, &direction_player3_740_7_8, &direction_player3_740_7_8, &direction_player3_740_7_8, &direction_player3_740_7_8, &direction_player3_740_7_8, &direction_player3_740_7_8, NULL, &direction_player3_740_7_16, &direction_player3_740_7_16, &direction_player3_740_7_16, &direction_player3_740_7_16, &direction_player3_740_7_16, &direction_player3_740_7_16, &direction_player3_740_7_16, NULL, &direction_player3_740_7_24, &direction_player3_740_7_24, &direction_player3_740_7_24, &direction_player3_740_7_24, &direction_player3_740_7_24, &direction_player3_740_7_24, &direction_player3_740_7_24, NULL, &direction_player3_740_7_0, &direction_player3_740_7_0, &direction_player3_740_7_0};
static Image* images_player3_740_8_24[1];
static Direction direction_player3_740_8_24 = {24, 10, 10, 0, -1, images_player3_740_8_24, 1};
static Animation anim_player3_740_8 = {&direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, NULL, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24, &direction_player3_740_8_24};
static Image* images_player3_740_9_0[2];
static Direction direction_player3_740_9_0 = {0, 50, 50, 0, -1, images_player3_740_9_0, 2};
static Animation anim_player3_740_9 = {&direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, NULL, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0, &direction_player3_740_9_0};
static Image* images_player3_740_10_0[5];
static Direction direction_player3_740_10_0 = {0, 10, 10, 0, -1, images_player3_740_10_0, 5};
static Animation anim_player3_740_10 = {&direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, NULL, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0, &direction_player3_740_10_0};
static Image* images_player3_740_11_0[2];
static Direction direction_player3_740_11_0 = {0, 10, 10, 0, -1, images_player3_740_11_0, 2};
static Image* images_player3_740_11_8[2];
static Direction direction_player3_740_11_8 = {8, 10, 10, 0, -1, images_player3_740_11_8, 2};
static Image* images_player3_740_11_16[2];
static Direction direction_player3_740_11_16 = {16, 10, 10, 0, -1, images_player3_740_11_16, 2};
static Image* images_player3_740_11_24[2];
static Direction direction_player3_740_11_24 = {24, 10, 10, 0, -1, images_player3_740_11_24, 2};
static Animation anim_player3_740_11 = {&direction_player3_740_11_0, &direction_player3_740_11_0, &direction_player3_740_11_0, &direction_player3_740_11_0, NULL, &direction_player3_740_11_8, &direction_player3_740_11_8, &direction_player3_740_11_8, &direction_player3_740_11_8, &direction_player3_740_11_8, &direction_player3_740_11_8, &direction_player3_740_11_8, NULL, &direction_player3_740_11_16, &direction_player3_740_11_16, &direction_player3_740_11_16, &direction_player3_740_11_16, &direction_player3_740_11_16, &direction_player3_740_11_16, &direction_player3_740_11_16, NULL, &direction_player3_740_11_24, &direction_player3_740_11_24, &direction_player3_740_11_24, &direction_player3_740_11_24, &direction_player3_740_11_24, &direction_player3_740_11_24, &direction_player3_740_11_24, NULL, &direction_player3_740_11_0, &direction_player3_740_11_0, &direction_player3_740_11_0};
static Image* images_player3_740_12_0[2];
static Direction direction_player3_740_12_0 = {0, 10, 10, 0, -1, images_player3_740_12_0, 2};
static Image* images_player3_740_12_8[2];
static Direction direction_player3_740_12_8 = {8, 10, 10, 0, -1, images_player3_740_12_8, 2};
static Image* images_player3_740_12_16[2];
static Direction direction_player3_740_12_16 = {16, 10, 10, 0, -1, images_player3_740_12_16, 2};
static Image* images_player3_740_12_24[2];
static Direction direction_player3_740_12_24 = {24, 10, 10, 0, -1, images_player3_740_12_24, 2};
static Animation anim_player3_740_12 = {&direction_player3_740_12_0, &direction_player3_740_12_0, &direction_player3_740_12_0, &direction_player3_740_12_0, NULL, &direction_player3_740_12_8, &direction_player3_740_12_8, &direction_player3_740_12_8, &direction_player3_740_12_8, &direction_player3_740_12_8, &direction_player3_740_12_8, &direction_player3_740_12_8, NULL, &direction_player3_740_12_16, &direction_player3_740_12_16, &direction_player3_740_12_16, &direction_player3_740_12_16, &direction_player3_740_12_16, &direction_player3_740_12_16, &direction_player3_740_12_16, NULL, &direction_player3_740_12_24, &direction_player3_740_12_24, &direction_player3_740_12_24, &direction_player3_740_12_24, &direction_player3_740_12_24, &direction_player3_740_12_24, &direction_player3_740_12_24, NULL, &direction_player3_740_12_0, &direction_player3_740_12_0, &direction_player3_740_12_0};
static Image* images_player3_740_13_0[2];
static Direction direction_player3_740_13_0 = {0, 10, 10, 0, -1, images_player3_740_13_0, 2};
static Image* images_player3_740_13_8[2];
static Direction direction_player3_740_13_8 = {8, 10, 10, 0, -1, images_player3_740_13_8, 2};
static Image* images_player3_740_13_16[2];
static Direction direction_player3_740_13_16 = {16, 10, 10, 0, -1, images_player3_740_13_16, 2};
static Image* images_player3_740_13_24[2];
static Direction direction_player3_740_13_24 = {24, 10, 10, 0, -1, images_player3_740_13_24, 2};
static Animation anim_player3_740_13 = {&direction_player3_740_13_0, &direction_player3_740_13_0, &direction_player3_740_13_0, &direction_player3_740_13_0, NULL, &direction_player3_740_13_8, &direction_player3_740_13_8, &direction_player3_740_13_8, &direction_player3_740_13_8, &direction_player3_740_13_8, &direction_player3_740_13_8, &direction_player3_740_13_8, NULL, &direction_player3_740_13_16, &direction_player3_740_13_16, &direction_player3_740_13_16, &direction_player3_740_13_16, &direction_player3_740_13_16, &direction_player3_740_13_16, &direction_player3_740_13_16, NULL, &direction_player3_740_13_24, &direction_player3_740_13_24, &direction_player3_740_13_24, &direction_player3_740_13_24, &direction_player3_740_13_24, &direction_player3_740_13_24, &direction_player3_740_13_24, NULL, &direction_player3_740_13_0, &direction_player3_740_13_0, &direction_player3_740_13_0};
static Image* images_player3_740_14_0[2];
static Direction direction_player3_740_14_0 = {0, 10, 10, 0, -1, images_player3_740_14_0, 2};
static Image* images_player3_740_14_8[2];
static Direction direction_player3_740_14_8 = {8, 10, 10, 0, -1, images_player3_740_14_8, 2};
static Image* images_player3_740_14_16[2];
static Direction direction_player3_740_14_16 = {16, 10, 10, 0, -1, images_player3_740_14_16, 2};
static Image* images_player3_740_14_24[2];
static Direction direction_player3_740_14_24 = {24, 10, 10, 0, -1, images_player3_740_14_24, 2};
static Animation anim_player3_740_14 = {&direction_player3_740_14_0, &direction_player3_740_14_0, &direction_player3_740_14_0, &direction_player3_740_14_0, NULL, &direction_player3_740_14_8, &direction_player3_740_14_8, &direction_player3_740_14_8, &direction_player3_740_14_8, &direction_player3_740_14_8, &direction_player3_740_14_8, &direction_player3_740_14_8, NULL, &direction_player3_740_14_16, &direction_player3_740_14_16, &direction_player3_740_14_16, &direction_player3_740_14_16, &direction_player3_740_14_16, &direction_player3_740_14_16, &direction_player3_740_14_16, NULL, &direction_player3_740_14_24, &direction_player3_740_14_24, &direction_player3_740_14_24, &direction_player3_740_14_24, &direction_player3_740_14_24, &direction_player3_740_14_24, &direction_player3_740_14_24, NULL, &direction_player3_740_14_0, &direction_player3_740_14_0, &direction_player3_740_14_0};
static Image* images_player3_740_15_0[2];
static Direction direction_player3_740_15_0 = {0, 10, 10, 0, -1, images_player3_740_15_0, 2};
static Image* images_player3_740_15_8[2];
static Direction direction_player3_740_15_8 = {8, 10, 10, 0, -1, images_player3_740_15_8, 2};
static Image* images_player3_740_15_16[2];
static Direction direction_player3_740_15_16 = {16, 10, 10, 0, -1, images_player3_740_15_16, 2};
static Image* images_player3_740_15_24[2];
static Direction direction_player3_740_15_24 = {24, 10, 10, 0, -1, images_player3_740_15_24, 2};
static Animation anim_player3_740_15 = {&direction_player3_740_15_0, &direction_player3_740_15_0, &direction_player3_740_15_0, &direction_player3_740_15_0, NULL, &direction_player3_740_15_8, &direction_player3_740_15_8, &direction_player3_740_15_8, &direction_player3_740_15_8, &direction_player3_740_15_8, &direction_player3_740_15_8, &direction_player3_740_15_8, NULL, &direction_player3_740_15_16, &direction_player3_740_15_16, &direction_player3_740_15_16, &direction_player3_740_15_16, &direction_player3_740_15_16, &direction_player3_740_15_16, &direction_player3_740_15_16, NULL, &direction_player3_740_15_24, &direction_player3_740_15_24, &direction_player3_740_15_24, &direction_player3_740_15_24, &direction_player3_740_15_24, &direction_player3_740_15_24, &direction_player3_740_15_24, NULL, &direction_player3_740_15_0, &direction_player3_740_15_0, &direction_player3_740_15_0};
static Image* images_player3_740_16_0[2];
static Direction direction_player3_740_16_0 = {0, 10, 10, 0, -1, images_player3_740_16_0, 2};
static Image* images_player3_740_16_8[2];
static Direction direction_player3_740_16_8 = {8, 10, 10, 0, -1, images_player3_740_16_8, 2};
static Image* images_player3_740_16_16[2];
static Direction direction_player3_740_16_16 = {16, 10, 10, 0, -1, images_player3_740_16_16, 2};
static Image* images_player3_740_16_24[2];
static Direction direction_player3_740_16_24 = {24, 10, 10, 0, -1, images_player3_740_16_24, 2};
static Animation anim_player3_740_16 = {&direction_player3_740_16_0, &direction_player3_740_16_0, &direction_player3_740_16_0, &direction_player3_740_16_0, NULL, &direction_player3_740_16_8, &direction_player3_740_16_8, &direction_player3_740_16_8, &direction_player3_740_16_8, &direction_player3_740_16_8, &direction_player3_740_16_8, &direction_player3_740_16_8, NULL, &direction_player3_740_16_16, &direction_player3_740_16_16, &direction_player3_740_16_16, &direction_player3_740_16_16, &direction_player3_740_16_16, &direction_player3_740_16_16, &direction_player3_740_16_16, NULL, &direction_player3_740_16_24, &direction_player3_740_16_24, &direction_player3_740_16_24, &direction_player3_740_16_24, &direction_player3_740_16_24, &direction_player3_740_16_24, &direction_player3_740_16_24, NULL, &direction_player3_740_16_0, &direction_player3_740_16_0, &direction_player3_740_16_0};
static Image* images_player3_740_17_0[2];
static Direction direction_player3_740_17_0 = {0, 5, 5, 1, -1, images_player3_740_17_0, 2};
static Image* images_player3_740_17_8[2];
static Direction direction_player3_740_17_8 = {8, 5, 5, 1, -1, images_player3_740_17_8, 2};
static Image* images_player3_740_17_16[2];
static Direction direction_player3_740_17_16 = {16, 5, 5, 1, -1, images_player3_740_17_16, 2};
static Image* images_player3_740_17_24[2];
static Direction direction_player3_740_17_24 = {24, 5, 5, 1, -1, images_player3_740_17_24, 2};
static Animation anim_player3_740_17 = {&direction_player3_740_17_0, &direction_player3_740_17_0, &direction_player3_740_17_0, &direction_player3_740_17_0, NULL, &direction_player3_740_17_8, &direction_player3_740_17_8, &direction_player3_740_17_8, &direction_player3_740_17_8, &direction_player3_740_17_8, &direction_player3_740_17_8, &direction_player3_740_17_8, NULL, &direction_player3_740_17_16, &direction_player3_740_17_16, &direction_player3_740_17_16, &direction_player3_740_17_16, &direction_player3_740_17_16, &direction_player3_740_17_16, &direction_player3_740_17_16, NULL, &direction_player3_740_17_24, &direction_player3_740_17_24, &direction_player3_740_17_24, &direction_player3_740_17_24, &direction_player3_740_17_24, &direction_player3_740_17_24, &direction_player3_740_17_24, NULL, &direction_player3_740_17_0, &direction_player3_740_17_0, &direction_player3_740_17_0};
static Image* images_player3_740_18_24[8];
static Direction direction_player3_740_18_24 = {24, 10, 10, 0, -1, images_player3_740_18_24, 8};
static Animation anim_player3_740_18 = {&direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, NULL, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24, &direction_player3_740_18_24};
static Image* images_player3_740_19_24[4];
static Direction direction_player3_740_19_24 = {24, 10, 10, 0, -1, images_player3_740_19_24, 4};
static Animation anim_player3_740_19 = {&direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, NULL, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24, &direction_player3_740_19_24};
static Animation * anim_array_player3_740[20] = {&anim_player3_740_0, NULL, NULL, NULL, &anim_player3_740_4, NULL, &anim_player3_740_6, &anim_player3_740_7, &anim_player3_740_8, &anim_player3_740_9, &anim_player3_740_10, &anim_player3_740_11, &anim_player3_740_12, &anim_player3_740_13, &anim_player3_740_14, &anim_player3_740_15, &anim_player3_740_16, &anim_player3_740_17, &anim_player3_740_18, &anim_player3_740_19};
static Animations anim_player3_740 = {20, &anim_array_player3_740[0]};
static bool anim_player3_740_initialized;
class Player3_740 : public Active
{
public:
    Player3_740(int x, int y) : Active(x, y, Player3_740_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_3", 8);
#endif
        this->animations = &anim_player3_740;
        if (!anim_player3_740_initialized) {
            anim_player3_740_initialized = true;
            images_player3_740_0_0[0] = get_internal_image(665);
            images_player3_740_0_0[1] = get_internal_image(666);
            images_player3_740_0_8[0] = get_internal_image(672);
            images_player3_740_0_8[1] = get_internal_image(671);
            images_player3_740_0_16[0] = get_internal_image(668);
            images_player3_740_0_16[1] = get_internal_image(667);
            images_player3_740_0_24[0] = get_internal_image(474);
            images_player3_740_0_24[1] = get_internal_image(604);
            images_player3_740_4_0[0] = get_internal_image(369);
            images_player3_740_4_0[1] = get_internal_image(373);
            images_player3_740_4_0[2] = get_internal_image(369);
            images_player3_740_4_0[3] = get_internal_image(373);
            images_player3_740_4_16[0] = get_internal_image(371);
            images_player3_740_4_16[1] = get_internal_image(763);
            images_player3_740_4_16[2] = get_internal_image(371);
            images_player3_740_4_16[3] = get_internal_image(763);
            images_player3_740_6_0[0] = get_internal_image(250);
            images_player3_740_6_8[0] = get_internal_image(1063);
            images_player3_740_6_16[0] = get_internal_image(602);
            images_player3_740_6_24[0] = get_internal_image(1070);
            images_player3_740_7_0[0] = get_internal_image(1123);
            images_player3_740_7_0[1] = get_internal_image(1129);
            images_player3_740_7_8[0] = get_internal_image(1134);
            images_player3_740_7_8[1] = get_internal_image(1135);
            images_player3_740_7_16[0] = get_internal_image(1130);
            images_player3_740_7_16[1] = get_internal_image(1131);
            images_player3_740_7_24[0] = get_internal_image(1128);
            images_player3_740_7_24[1] = get_internal_image(1137);
            images_player3_740_8_24[0] = get_internal_image(1178);
            images_player3_740_9_0[0] = get_internal_image(1301);
            images_player3_740_9_0[1] = get_internal_image(1494);
            images_player3_740_10_0[0] = get_internal_image(270);
            images_player3_740_10_0[1] = get_internal_image(271);
            images_player3_740_10_0[2] = get_internal_image(595);
            images_player3_740_10_0[3] = get_internal_image(2345);
            images_player3_740_10_0[4] = get_internal_image(595);
            images_player3_740_11_0[0] = get_internal_image(645);
            images_player3_740_11_0[1] = get_internal_image(646);
            images_player3_740_11_8[0] = get_internal_image(675);
            images_player3_740_11_8[1] = get_internal_image(673);
            images_player3_740_11_16[0] = get_internal_image(669);
            images_player3_740_11_16[1] = get_internal_image(670);
            images_player3_740_11_24[0] = get_internal_image(713);
            images_player3_740_11_24[1] = get_internal_image(714);
            images_player3_740_12_0[0] = get_internal_image(1190);
            images_player3_740_12_0[1] = get_internal_image(1686);
            images_player3_740_12_8[0] = get_internal_image(1627);
            images_player3_740_12_8[1] = get_internal_image(1759);
            images_player3_740_12_16[0] = get_internal_image(1803);
            images_player3_740_12_16[1] = get_internal_image(1561);
            images_player3_740_12_24[0] = get_internal_image(1774);
            images_player3_740_12_24[1] = get_internal_image(1775);
            images_player3_740_13_0[0] = get_internal_image(1617);
            images_player3_740_13_0[1] = get_internal_image(1787);
            images_player3_740_13_8[0] = get_internal_image(1791);
            images_player3_740_13_8[1] = get_internal_image(1792);
            images_player3_740_13_16[0] = get_internal_image(1789);
            images_player3_740_13_16[1] = get_internal_image(1790);
            images_player3_740_13_24[0] = get_internal_image(1618);
            images_player3_740_13_24[1] = get_internal_image(1788);
            images_player3_740_14_0[0] = get_internal_image(1687);
            images_player3_740_14_0[1] = get_internal_image(1685);
            images_player3_740_14_8[0] = get_internal_image(1692);
            images_player3_740_14_8[1] = get_internal_image(1694);
            images_player3_740_14_16[0] = get_internal_image(1690);
            images_player3_740_14_16[1] = get_internal_image(1689);
            images_player3_740_14_24[0] = get_internal_image(1688);
            images_player3_740_14_24[1] = get_internal_image(1691);
            images_player3_740_15_0[0] = get_internal_image(1628);
            images_player3_740_15_0[1] = get_internal_image(1629);
            images_player3_740_15_8[0] = get_internal_image(1722);
            images_player3_740_15_8[1] = get_internal_image(1723);
            images_player3_740_15_16[0] = get_internal_image(1720);
            images_player3_740_15_16[1] = get_internal_image(1719);
            images_player3_740_15_24[0] = get_internal_image(1716);
            images_player3_740_15_24[1] = get_internal_image(1721);
            images_player3_740_16_0[0] = get_internal_image(1875);
            images_player3_740_16_0[1] = get_internal_image(1878);
            images_player3_740_16_8[0] = get_internal_image(1916);
            images_player3_740_16_8[1] = get_internal_image(1917);
            images_player3_740_16_16[0] = get_internal_image(1880);
            images_player3_740_16_16[1] = get_internal_image(1881);
            images_player3_740_16_24[0] = get_internal_image(1899);
            images_player3_740_16_24[1] = get_internal_image(1906);
            images_player3_740_17_0[0] = get_internal_image(1972);
            images_player3_740_17_0[1] = get_internal_image(1973);
            images_player3_740_17_8[0] = get_internal_image(1979);
            images_player3_740_17_8[1] = get_internal_image(1980);
            images_player3_740_17_16[0] = get_internal_image(1975);
            images_player3_740_17_16[1] = get_internal_image(1976);
            images_player3_740_17_24[0] = get_internal_image(1981);
            images_player3_740_17_24[1] = get_internal_image(1977);
            images_player3_740_18_24[0] = get_internal_image(1965);
            images_player3_740_18_24[1] = get_internal_image(2069);
            images_player3_740_18_24[2] = get_internal_image(2064);
            images_player3_740_18_24[3] = get_internal_image(2066);
            images_player3_740_18_24[4] = get_internal_image(2065);
            images_player3_740_18_24[5] = get_internal_image(2068);
            images_player3_740_18_24[6] = get_internal_image(2064);
            images_player3_740_18_24[7] = get_internal_image(2067);
            images_player3_740_19_24[0] = get_internal_image(2136);
            images_player3_740_19_24[1] = get_internal_image(2140);
            images_player3_740_19_24[2] = get_internal_image(2138);
            images_player3_740_19_24[3] = get_internal_image(2140);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player3_740(int x, int y)
{
    return new (Active::pool.create()) Player3_740(x, y);
}
static Image* images_player4_741_0_0[2];
static Direction direction_player4_741_0_0 = {0, 10, 10, 0, -1, images_player4_741_0_0, 2};
static Image* images_player4_741_0_8[2];
static Direction direction_player4_741_0_8 = {8, 10, 10, 0, -1, images_player4_741_0_8, 2};
static Image* images_player4_741_0_16[2];
static Direction direction_player4_741_0_16 = {16, 10, 10, 0, -1, images_player4_741_0_16, 2};
static Image* images_player4_741_0_24[2];
static Direction direction_player4_741_0_24 = {24, 10, 10, 0, -1, images_player4_741_0_24, 2};
static Animation anim_player4_741_0 = {&direction_player4_741_0_0, &direction_player4_741_0_0, &direction_player4_741_0_0, &direction_player4_741_0_0, NULL, &direction_player4_741_0_8, &direction_player4_741_0_8, &direction_player4_741_0_8, &direction_player4_741_0_8, &direction_player4_741_0_8, &direction_player4_741_0_8, &direction_player4_741_0_8, NULL, &direction_player4_741_0_16, &direction_player4_741_0_16, &direction_player4_741_0_16, &direction_player4_741_0_16, &direction_player4_741_0_16, &direction_player4_741_0_16, &direction_player4_741_0_16, NULL, &direction_player4_741_0_24, &direction_player4_741_0_24, &direction_player4_741_0_24, &direction_player4_741_0_24, &direction_player4_741_0_24, &direction_player4_741_0_24, &direction_player4_741_0_24, NULL, &direction_player4_741_0_0, &direction_player4_741_0_0, &direction_player4_741_0_0};
static Image* images_player4_741_4_0[4];
static Direction direction_player4_741_4_0 = {0, 20, 20, 0, 1, images_player4_741_4_0, 4};
static Image* images_player4_741_4_16[4];
static Direction direction_player4_741_4_16 = {16, 20, 20, 0, 1, images_player4_741_4_16, 4};
static Animation anim_player4_741_4 = {&direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0, NULL, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, &direction_player4_741_4_16, NULL, &direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0, &direction_player4_741_4_0};
static Image* images_player4_741_6_0[1];
static Direction direction_player4_741_6_0 = {0, 6, 6, 0, 1, images_player4_741_6_0, 1};
static Image* images_player4_741_6_8[1];
static Direction direction_player4_741_6_8 = {8, 6, 6, 0, 1, images_player4_741_6_8, 1};
static Image* images_player4_741_6_16[1];
static Direction direction_player4_741_6_16 = {16, 6, 6, 0, 1, images_player4_741_6_16, 1};
static Image* images_player4_741_6_24[1];
static Direction direction_player4_741_6_24 = {24, 6, 6, 0, 1, images_player4_741_6_24, 1};
static Animation anim_player4_741_6 = {&direction_player4_741_6_0, &direction_player4_741_6_0, &direction_player4_741_6_0, &direction_player4_741_6_0, NULL, &direction_player4_741_6_8, &direction_player4_741_6_8, &direction_player4_741_6_8, &direction_player4_741_6_8, &direction_player4_741_6_8, &direction_player4_741_6_8, &direction_player4_741_6_8, NULL, &direction_player4_741_6_16, &direction_player4_741_6_16, &direction_player4_741_6_16, &direction_player4_741_6_16, &direction_player4_741_6_16, &direction_player4_741_6_16, &direction_player4_741_6_16, NULL, &direction_player4_741_6_24, &direction_player4_741_6_24, &direction_player4_741_6_24, &direction_player4_741_6_24, &direction_player4_741_6_24, &direction_player4_741_6_24, &direction_player4_741_6_24, NULL, &direction_player4_741_6_0, &direction_player4_741_6_0, &direction_player4_741_6_0};
static Image* images_player4_741_7_0[2];
static Direction direction_player4_741_7_0 = {0, 10, 10, 0, -1, images_player4_741_7_0, 2};
static Image* images_player4_741_7_8[2];
static Direction direction_player4_741_7_8 = {8, 10, 10, 0, -1, images_player4_741_7_8, 2};
static Image* images_player4_741_7_16[2];
static Direction direction_player4_741_7_16 = {16, 10, 10, 0, -1, images_player4_741_7_16, 2};
static Image* images_player4_741_7_24[2];
static Direction direction_player4_741_7_24 = {24, 10, 10, 0, -1, images_player4_741_7_24, 2};
static Animation anim_player4_741_7 = {&direction_player4_741_7_0, &direction_player4_741_7_0, &direction_player4_741_7_0, &direction_player4_741_7_0, NULL, &direction_player4_741_7_8, &direction_player4_741_7_8, &direction_player4_741_7_8, &direction_player4_741_7_8, &direction_player4_741_7_8, &direction_player4_741_7_8, &direction_player4_741_7_8, NULL, &direction_player4_741_7_16, &direction_player4_741_7_16, &direction_player4_741_7_16, &direction_player4_741_7_16, &direction_player4_741_7_16, &direction_player4_741_7_16, &direction_player4_741_7_16, NULL, &direction_player4_741_7_24, &direction_player4_741_7_24, &direction_player4_741_7_24, &direction_player4_741_7_24, &direction_player4_741_7_24, &direction_player4_741_7_24, &direction_player4_741_7_24, NULL, &direction_player4_741_7_0, &direction_player4_741_7_0, &direction_player4_741_7_0};
static Image* images_player4_741_8_24[1];
static Direction direction_player4_741_8_24 = {24, 10, 10, 0, -1, images_player4_741_8_24, 1};
static Animation anim_player4_741_8 = {&direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, NULL, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24, &direction_player4_741_8_24};
static Image* images_player4_741_9_0[2];
static Direction direction_player4_741_9_0 = {0, 50, 50, 0, -1, images_player4_741_9_0, 2};
static Animation anim_player4_741_9 = {&direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, NULL, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0, &direction_player4_741_9_0};
static Image* images_player4_741_10_0[5];
static Direction direction_player4_741_10_0 = {0, 10, 10, 0, -1, images_player4_741_10_0, 5};
static Animation anim_player4_741_10 = {&direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, NULL, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0, &direction_player4_741_10_0};
static Image* images_player4_741_11_0[2];
static Direction direction_player4_741_11_0 = {0, 6, 6, 0, -1, images_player4_741_11_0, 2};
static Image* images_player4_741_11_8[2];
static Direction direction_player4_741_11_8 = {8, 6, 6, 0, -1, images_player4_741_11_8, 2};
static Image* images_player4_741_11_16[2];
static Direction direction_player4_741_11_16 = {16, 6, 6, 0, -1, images_player4_741_11_16, 2};
static Image* images_player4_741_11_24[2];
static Direction direction_player4_741_11_24 = {24, 6, 6, 0, -1, images_player4_741_11_24, 2};
static Animation anim_player4_741_11 = {&direction_player4_741_11_0, &direction_player4_741_11_0, &direction_player4_741_11_0, &direction_player4_741_11_0, NULL, &direction_player4_741_11_8, &direction_player4_741_11_8, &direction_player4_741_11_8, &direction_player4_741_11_8, &direction_player4_741_11_8, &direction_player4_741_11_8, &direction_player4_741_11_8, NULL, &direction_player4_741_11_16, &direction_player4_741_11_16, &direction_player4_741_11_16, &direction_player4_741_11_16, &direction_player4_741_11_16, &direction_player4_741_11_16, &direction_player4_741_11_16, NULL, &direction_player4_741_11_24, &direction_player4_741_11_24, &direction_player4_741_11_24, &direction_player4_741_11_24, &direction_player4_741_11_24, &direction_player4_741_11_24, &direction_player4_741_11_24, NULL, &direction_player4_741_11_0, &direction_player4_741_11_0, &direction_player4_741_11_0};
static Image* images_player4_741_12_0[2];
static Direction direction_player4_741_12_0 = {0, 10, 10, 0, -1, images_player4_741_12_0, 2};
static Image* images_player4_741_12_8[2];
static Direction direction_player4_741_12_8 = {8, 10, 10, 0, -1, images_player4_741_12_8, 2};
static Image* images_player4_741_12_16[2];
static Direction direction_player4_741_12_16 = {16, 10, 10, 0, -1, images_player4_741_12_16, 2};
static Image* images_player4_741_12_24[2];
static Direction direction_player4_741_12_24 = {24, 10, 10, 0, -1, images_player4_741_12_24, 2};
static Animation anim_player4_741_12 = {&direction_player4_741_12_0, &direction_player4_741_12_0, &direction_player4_741_12_0, &direction_player4_741_12_0, NULL, &direction_player4_741_12_8, &direction_player4_741_12_8, &direction_player4_741_12_8, &direction_player4_741_12_8, &direction_player4_741_12_8, &direction_player4_741_12_8, &direction_player4_741_12_8, NULL, &direction_player4_741_12_16, &direction_player4_741_12_16, &direction_player4_741_12_16, &direction_player4_741_12_16, &direction_player4_741_12_16, &direction_player4_741_12_16, &direction_player4_741_12_16, NULL, &direction_player4_741_12_24, &direction_player4_741_12_24, &direction_player4_741_12_24, &direction_player4_741_12_24, &direction_player4_741_12_24, &direction_player4_741_12_24, &direction_player4_741_12_24, NULL, &direction_player4_741_12_0, &direction_player4_741_12_0, &direction_player4_741_12_0};
static Image* images_player4_741_13_0[2];
static Direction direction_player4_741_13_0 = {0, 10, 10, 0, -1, images_player4_741_13_0, 2};
static Image* images_player4_741_13_8[2];
static Direction direction_player4_741_13_8 = {8, 10, 10, 0, -1, images_player4_741_13_8, 2};
static Image* images_player4_741_13_16[2];
static Direction direction_player4_741_13_16 = {16, 10, 10, 0, -1, images_player4_741_13_16, 2};
static Image* images_player4_741_13_24[2];
static Direction direction_player4_741_13_24 = {24, 10, 10, 0, -1, images_player4_741_13_24, 2};
static Animation anim_player4_741_13 = {&direction_player4_741_13_0, &direction_player4_741_13_0, &direction_player4_741_13_0, &direction_player4_741_13_0, NULL, &direction_player4_741_13_8, &direction_player4_741_13_8, &direction_player4_741_13_8, &direction_player4_741_13_8, &direction_player4_741_13_8, &direction_player4_741_13_8, &direction_player4_741_13_8, NULL, &direction_player4_741_13_16, &direction_player4_741_13_16, &direction_player4_741_13_16, &direction_player4_741_13_16, &direction_player4_741_13_16, &direction_player4_741_13_16, &direction_player4_741_13_16, NULL, &direction_player4_741_13_24, &direction_player4_741_13_24, &direction_player4_741_13_24, &direction_player4_741_13_24, &direction_player4_741_13_24, &direction_player4_741_13_24, &direction_player4_741_13_24, NULL, &direction_player4_741_13_0, &direction_player4_741_13_0, &direction_player4_741_13_0};
static Image* images_player4_741_14_0[2];
static Direction direction_player4_741_14_0 = {0, 10, 10, 0, -1, images_player4_741_14_0, 2};
static Image* images_player4_741_14_8[2];
static Direction direction_player4_741_14_8 = {8, 10, 10, 0, -1, images_player4_741_14_8, 2};
static Image* images_player4_741_14_16[2];
static Direction direction_player4_741_14_16 = {16, 10, 10, 0, -1, images_player4_741_14_16, 2};
static Image* images_player4_741_14_24[2];
static Direction direction_player4_741_14_24 = {24, 10, 10, 0, -1, images_player4_741_14_24, 2};
static Animation anim_player4_741_14 = {&direction_player4_741_14_0, &direction_player4_741_14_0, &direction_player4_741_14_0, &direction_player4_741_14_0, NULL, &direction_player4_741_14_8, &direction_player4_741_14_8, &direction_player4_741_14_8, &direction_player4_741_14_8, &direction_player4_741_14_8, &direction_player4_741_14_8, &direction_player4_741_14_8, NULL, &direction_player4_741_14_16, &direction_player4_741_14_16, &direction_player4_741_14_16, &direction_player4_741_14_16, &direction_player4_741_14_16, &direction_player4_741_14_16, &direction_player4_741_14_16, NULL, &direction_player4_741_14_24, &direction_player4_741_14_24, &direction_player4_741_14_24, &direction_player4_741_14_24, &direction_player4_741_14_24, &direction_player4_741_14_24, &direction_player4_741_14_24, NULL, &direction_player4_741_14_0, &direction_player4_741_14_0, &direction_player4_741_14_0};
static Image* images_player4_741_15_0[2];
static Direction direction_player4_741_15_0 = {0, 10, 10, 0, -1, images_player4_741_15_0, 2};
static Image* images_player4_741_15_8[2];
static Direction direction_player4_741_15_8 = {8, 10, 10, 0, -1, images_player4_741_15_8, 2};
static Image* images_player4_741_15_16[2];
static Direction direction_player4_741_15_16 = {16, 10, 10, 0, -1, images_player4_741_15_16, 2};
static Image* images_player4_741_15_24[2];
static Direction direction_player4_741_15_24 = {24, 10, 10, 0, -1, images_player4_741_15_24, 2};
static Animation anim_player4_741_15 = {&direction_player4_741_15_0, &direction_player4_741_15_0, &direction_player4_741_15_0, &direction_player4_741_15_0, NULL, &direction_player4_741_15_8, &direction_player4_741_15_8, &direction_player4_741_15_8, &direction_player4_741_15_8, &direction_player4_741_15_8, &direction_player4_741_15_8, &direction_player4_741_15_8, NULL, &direction_player4_741_15_16, &direction_player4_741_15_16, &direction_player4_741_15_16, &direction_player4_741_15_16, &direction_player4_741_15_16, &direction_player4_741_15_16, &direction_player4_741_15_16, NULL, &direction_player4_741_15_24, &direction_player4_741_15_24, &direction_player4_741_15_24, &direction_player4_741_15_24, &direction_player4_741_15_24, &direction_player4_741_15_24, &direction_player4_741_15_24, NULL, &direction_player4_741_15_0, &direction_player4_741_15_0, &direction_player4_741_15_0};
static Image* images_player4_741_16_0[2];
static Direction direction_player4_741_16_0 = {0, 10, 10, 0, -1, images_player4_741_16_0, 2};
static Image* images_player4_741_16_8[2];
static Direction direction_player4_741_16_8 = {8, 10, 10, 0, -1, images_player4_741_16_8, 2};
static Image* images_player4_741_16_16[2];
static Direction direction_player4_741_16_16 = {16, 10, 10, 0, -1, images_player4_741_16_16, 2};
static Image* images_player4_741_16_24[2];
static Direction direction_player4_741_16_24 = {24, 10, 10, 0, -1, images_player4_741_16_24, 2};
static Animation anim_player4_741_16 = {&direction_player4_741_16_0, &direction_player4_741_16_0, &direction_player4_741_16_0, &direction_player4_741_16_0, NULL, &direction_player4_741_16_8, &direction_player4_741_16_8, &direction_player4_741_16_8, &direction_player4_741_16_8, &direction_player4_741_16_8, &direction_player4_741_16_8, &direction_player4_741_16_8, NULL, &direction_player4_741_16_16, &direction_player4_741_16_16, &direction_player4_741_16_16, &direction_player4_741_16_16, &direction_player4_741_16_16, &direction_player4_741_16_16, &direction_player4_741_16_16, NULL, &direction_player4_741_16_24, &direction_player4_741_16_24, &direction_player4_741_16_24, &direction_player4_741_16_24, &direction_player4_741_16_24, &direction_player4_741_16_24, &direction_player4_741_16_24, NULL, &direction_player4_741_16_0, &direction_player4_741_16_0, &direction_player4_741_16_0};
static Image* images_player4_741_17_0[2];
static Direction direction_player4_741_17_0 = {0, 5, 5, 1, -1, images_player4_741_17_0, 2};
static Image* images_player4_741_17_8[2];
static Direction direction_player4_741_17_8 = {8, 5, 5, 1, -1, images_player4_741_17_8, 2};
static Image* images_player4_741_17_16[2];
static Direction direction_player4_741_17_16 = {16, 5, 5, 1, -1, images_player4_741_17_16, 2};
static Image* images_player4_741_17_24[2];
static Direction direction_player4_741_17_24 = {24, 5, 5, 1, -1, images_player4_741_17_24, 2};
static Animation anim_player4_741_17 = {&direction_player4_741_17_0, &direction_player4_741_17_0, &direction_player4_741_17_0, &direction_player4_741_17_0, NULL, &direction_player4_741_17_8, &direction_player4_741_17_8, &direction_player4_741_17_8, &direction_player4_741_17_8, &direction_player4_741_17_8, &direction_player4_741_17_8, &direction_player4_741_17_8, NULL, &direction_player4_741_17_16, &direction_player4_741_17_16, &direction_player4_741_17_16, &direction_player4_741_17_16, &direction_player4_741_17_16, &direction_player4_741_17_16, &direction_player4_741_17_16, NULL, &direction_player4_741_17_24, &direction_player4_741_17_24, &direction_player4_741_17_24, &direction_player4_741_17_24, &direction_player4_741_17_24, &direction_player4_741_17_24, &direction_player4_741_17_24, NULL, &direction_player4_741_17_0, &direction_player4_741_17_0, &direction_player4_741_17_0};
static Image* images_player4_741_18_24[8];
static Direction direction_player4_741_18_24 = {24, 10, 10, 0, -1, images_player4_741_18_24, 8};
static Animation anim_player4_741_18 = {&direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, NULL, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24, &direction_player4_741_18_24};
static Image* images_player4_741_19_24[4];
static Direction direction_player4_741_19_24 = {24, 10, 10, 0, -1, images_player4_741_19_24, 4};
static Animation anim_player4_741_19 = {&direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, NULL, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24, &direction_player4_741_19_24};
static Animation * anim_array_player4_741[20] = {&anim_player4_741_0, NULL, NULL, NULL, &anim_player4_741_4, NULL, &anim_player4_741_6, &anim_player4_741_7, &anim_player4_741_8, &anim_player4_741_9, &anim_player4_741_10, &anim_player4_741_11, &anim_player4_741_12, &anim_player4_741_13, &anim_player4_741_14, &anim_player4_741_15, &anim_player4_741_16, &anim_player4_741_17, &anim_player4_741_18, &anim_player4_741_19};
static Animations anim_player4_741 = {20, &anim_array_player4_741[0]};
static bool anim_player4_741_initialized;
class Player4_741 : public Active
{
public:
    Player4_741(int x, int y) : Active(x, y, Player4_741_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_4", 8);
#endif
        this->animations = &anim_player4_741;
        if (!anim_player4_741_initialized) {
            anim_player4_741_initialized = true;
            images_player4_741_0_0[0] = get_internal_image(720);
            images_player4_741_0_0[1] = get_internal_image(725);
            images_player4_741_0_8[0] = get_internal_image(752);
            images_player4_741_0_8[1] = get_internal_image(753);
            images_player4_741_0_16[0] = get_internal_image(746);
            images_player4_741_0_16[1] = get_internal_image(745);
            images_player4_741_0_24[0] = get_internal_image(693);
            images_player4_741_0_24[1] = get_internal_image(698);
            images_player4_741_4_0[0] = get_internal_image(369);
            images_player4_741_4_0[1] = get_internal_image(373);
            images_player4_741_4_0[2] = get_internal_image(369);
            images_player4_741_4_0[3] = get_internal_image(373);
            images_player4_741_4_16[0] = get_internal_image(371);
            images_player4_741_4_16[1] = get_internal_image(763);
            images_player4_741_4_16[2] = get_internal_image(371);
            images_player4_741_4_16[3] = get_internal_image(763);
            images_player4_741_6_0[0] = get_internal_image(155);
            images_player4_741_6_8[0] = get_internal_image(1065);
            images_player4_741_6_16[0] = get_internal_image(163);
            images_player4_741_6_24[0] = get_internal_image(1068);
            images_player4_741_7_0[0] = get_internal_image(1149);
            images_player4_741_7_0[1] = get_internal_image(1155);
            images_player4_741_7_8[0] = get_internal_image(1160);
            images_player4_741_7_8[1] = get_internal_image(1161);
            images_player4_741_7_16[0] = get_internal_image(1154);
            images_player4_741_7_16[1] = get_internal_image(1156);
            images_player4_741_7_24[0] = get_internal_image(1158);
            images_player4_741_7_24[1] = get_internal_image(1159);
            images_player4_741_8_24[0] = get_internal_image(1180);
            images_player4_741_9_0[0] = get_internal_image(1503);
            images_player4_741_9_0[1] = get_internal_image(1498);
            images_player4_741_10_0[0] = get_internal_image(756);
            images_player4_741_10_0[1] = get_internal_image(754);
            images_player4_741_10_0[2] = get_internal_image(548);
            images_player4_741_10_0[3] = get_internal_image(2346);
            images_player4_741_10_0[4] = get_internal_image(548);
            images_player4_741_11_0[0] = get_internal_image(1099);
            images_player4_741_11_0[1] = get_internal_image(1103);
            images_player4_741_11_8[0] = get_internal_image(749);
            images_player4_741_11_8[1] = get_internal_image(750);
            images_player4_741_11_16[0] = get_internal_image(1110);
            images_player4_741_11_16[1] = get_internal_image(1112);
            images_player4_741_11_24[0] = get_internal_image(724);
            images_player4_741_11_24[1] = get_internal_image(730);
            images_player4_741_12_0[0] = get_internal_image(1195);
            images_player4_741_12_0[1] = get_internal_image(1196);
            images_player4_741_12_8[0] = get_internal_image(1764);
            images_player4_741_12_8[1] = get_internal_image(1763);
            images_player4_741_12_16[0] = get_internal_image(1198);
            images_player4_741_12_16[1] = get_internal_image(1197);
            images_player4_741_12_24[0] = get_internal_image(1779);
            images_player4_741_12_24[1] = get_internal_image(1782);
            images_player4_741_13_0[0] = get_internal_image(1822);
            images_player4_741_13_0[1] = get_internal_image(1820);
            images_player4_741_13_8[0] = get_internal_image(1828);
            images_player4_741_13_8[1] = get_internal_image(1826);
            images_player4_741_13_16[0] = get_internal_image(1823);
            images_player4_741_13_16[1] = get_internal_image(1824);
            images_player4_741_13_24[0] = get_internal_image(1825);
            images_player4_741_13_24[1] = get_internal_image(1827);
            images_player4_741_14_0[0] = get_internal_image(1672);
            images_player4_741_14_0[1] = get_internal_image(1678);
            images_player4_741_14_8[0] = get_internal_image(1683);
            images_player4_741_14_8[1] = get_internal_image(1684);
            images_player4_741_14_16[0] = get_internal_image(1680);
            images_player4_741_14_16[1] = get_internal_image(1681);
            images_player4_741_14_24[0] = get_internal_image(1679);
            images_player4_741_14_24[1] = get_internal_image(1682);
            images_player4_741_15_0[0] = get_internal_image(1743);
            images_player4_741_15_0[1] = get_internal_image(1748);
            images_player4_741_15_8[0] = get_internal_image(1750);
            images_player4_741_15_8[1] = get_internal_image(1751);
            images_player4_741_15_16[0] = get_internal_image(1746);
            images_player4_741_15_16[1] = get_internal_image(1745);
            images_player4_741_15_24[0] = get_internal_image(1747);
            images_player4_741_15_24[1] = get_internal_image(1749);
            images_player4_741_16_0[0] = get_internal_image(1879);
            images_player4_741_16_0[1] = get_internal_image(1882);
            images_player4_741_16_8[0] = get_internal_image(1918);
            images_player4_741_16_8[1] = get_internal_image(1919);
            images_player4_741_16_16[0] = get_internal_image(1884);
            images_player4_741_16_16[1] = get_internal_image(1885);
            images_player4_741_16_24[0] = get_internal_image(1907);
            images_player4_741_16_24[1] = get_internal_image(1908);
            images_player4_741_17_0[0] = get_internal_image(2003);
            images_player4_741_17_0[1] = get_internal_image(2009);
            images_player4_741_17_8[0] = get_internal_image(2014);
            images_player4_741_17_8[1] = get_internal_image(2015);
            images_player4_741_17_16[0] = get_internal_image(2010);
            images_player4_741_17_16[1] = get_internal_image(2011);
            images_player4_741_17_24[0] = get_internal_image(2012);
            images_player4_741_17_24[1] = get_internal_image(2013);
            images_player4_741_18_24[0] = get_internal_image(2082);
            images_player4_741_18_24[1] = get_internal_image(2090);
            images_player4_741_18_24[2] = get_internal_image(2085);
            images_player4_741_18_24[3] = get_internal_image(2086);
            images_player4_741_18_24[4] = get_internal_image(2087);
            images_player4_741_18_24[5] = get_internal_image(2091);
            images_player4_741_18_24[6] = get_internal_image(2085);
            images_player4_741_18_24[7] = get_internal_image(2088);
            images_player4_741_19_24[0] = get_internal_image(2145);
            images_player4_741_19_24[1] = get_internal_image(2147);
            images_player4_741_19_24[2] = get_internal_image(2149);
            images_player4_741_19_24[3] = get_internal_image(2147);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player4_741(int x, int y)
{
    return new (Active::pool.create()) Player4_741(x, y);
}
static Image* images_player5_742_0_0[2];
static Direction direction_player5_742_0_0 = {0, 10, 10, 0, -1, images_player5_742_0_0, 2};
static Image* images_player5_742_0_8[2];
static Direction direction_player5_742_0_8 = {8, 10, 10, 0, -1, images_player5_742_0_8, 2};
static Image* images_player5_742_0_16[2];
static Direction direction_player5_742_0_16 = {16, 10, 10, 0, -1, images_player5_742_0_16, 2};
static Image* images_player5_742_0_24[2];
static Direction direction_player5_742_0_24 = {24, 10, 10, 0, -1, images_player5_742_0_24, 2};
static Animation anim_player5_742_0 = {&direction_player5_742_0_0, &direction_player5_742_0_0, &direction_player5_742_0_0, &direction_player5_742_0_0, NULL, &direction_player5_742_0_8, &direction_player5_742_0_8, &direction_player5_742_0_8, &direction_player5_742_0_8, &direction_player5_742_0_8, &direction_player5_742_0_8, &direction_player5_742_0_8, NULL, &direction_player5_742_0_16, &direction_player5_742_0_16, &direction_player5_742_0_16, &direction_player5_742_0_16, &direction_player5_742_0_16, &direction_player5_742_0_16, &direction_player5_742_0_16, NULL, &direction_player5_742_0_24, &direction_player5_742_0_24, &direction_player5_742_0_24, &direction_player5_742_0_24, &direction_player5_742_0_24, &direction_player5_742_0_24, &direction_player5_742_0_24, NULL, &direction_player5_742_0_0, &direction_player5_742_0_0, &direction_player5_742_0_0};
static Image* images_player5_742_4_0[4];
static Direction direction_player5_742_4_0 = {0, 20, 20, 0, 1, images_player5_742_4_0, 4};
static Image* images_player5_742_4_16[4];
static Direction direction_player5_742_4_16 = {16, 20, 20, 0, 1, images_player5_742_4_16, 4};
static Animation anim_player5_742_4 = {&direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0, NULL, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, &direction_player5_742_4_16, NULL, &direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0, &direction_player5_742_4_0};
static Image* images_player5_742_6_0[1];
static Direction direction_player5_742_6_0 = {0, 6, 6, 0, 1, images_player5_742_6_0, 1};
static Image* images_player5_742_6_8[1];
static Direction direction_player5_742_6_8 = {8, 6, 6, 0, 1, images_player5_742_6_8, 1};
static Image* images_player5_742_6_16[1];
static Direction direction_player5_742_6_16 = {16, 6, 6, 0, 1, images_player5_742_6_16, 1};
static Image* images_player5_742_6_24[1];
static Direction direction_player5_742_6_24 = {24, 6, 6, 0, 1, images_player5_742_6_24, 1};
static Animation anim_player5_742_6 = {&direction_player5_742_6_0, &direction_player5_742_6_0, &direction_player5_742_6_0, &direction_player5_742_6_0, NULL, &direction_player5_742_6_8, &direction_player5_742_6_8, &direction_player5_742_6_8, &direction_player5_742_6_8, &direction_player5_742_6_8, &direction_player5_742_6_8, &direction_player5_742_6_8, NULL, &direction_player5_742_6_16, &direction_player5_742_6_16, &direction_player5_742_6_16, &direction_player5_742_6_16, &direction_player5_742_6_16, &direction_player5_742_6_16, &direction_player5_742_6_16, NULL, &direction_player5_742_6_24, &direction_player5_742_6_24, &direction_player5_742_6_24, &direction_player5_742_6_24, &direction_player5_742_6_24, &direction_player5_742_6_24, &direction_player5_742_6_24, NULL, &direction_player5_742_6_0, &direction_player5_742_6_0, &direction_player5_742_6_0};
static Image* images_player5_742_7_0[2];
static Direction direction_player5_742_7_0 = {0, 10, 10, 0, -1, images_player5_742_7_0, 2};
static Image* images_player5_742_7_8[2];
static Direction direction_player5_742_7_8 = {8, 10, 10, 0, -1, images_player5_742_7_8, 2};
static Image* images_player5_742_7_16[2];
static Direction direction_player5_742_7_16 = {16, 10, 10, 0, -1, images_player5_742_7_16, 2};
static Image* images_player5_742_7_24[2];
static Direction direction_player5_742_7_24 = {24, 10, 10, 0, -1, images_player5_742_7_24, 2};
static Animation anim_player5_742_7 = {&direction_player5_742_7_0, &direction_player5_742_7_0, &direction_player5_742_7_0, &direction_player5_742_7_0, NULL, &direction_player5_742_7_8, &direction_player5_742_7_8, &direction_player5_742_7_8, &direction_player5_742_7_8, &direction_player5_742_7_8, &direction_player5_742_7_8, &direction_player5_742_7_8, NULL, &direction_player5_742_7_16, &direction_player5_742_7_16, &direction_player5_742_7_16, &direction_player5_742_7_16, &direction_player5_742_7_16, &direction_player5_742_7_16, &direction_player5_742_7_16, NULL, &direction_player5_742_7_24, &direction_player5_742_7_24, &direction_player5_742_7_24, &direction_player5_742_7_24, &direction_player5_742_7_24, &direction_player5_742_7_24, &direction_player5_742_7_24, NULL, &direction_player5_742_7_0, &direction_player5_742_7_0, &direction_player5_742_7_0};
static Image* images_player5_742_8_24[1];
static Direction direction_player5_742_8_24 = {24, 10, 10, 0, -1, images_player5_742_8_24, 1};
static Animation anim_player5_742_8 = {&direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, NULL, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24, &direction_player5_742_8_24};
static Image* images_player5_742_9_0[2];
static Direction direction_player5_742_9_0 = {0, 50, 50, 0, -1, images_player5_742_9_0, 2};
static Animation anim_player5_742_9 = {&direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, NULL, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0, &direction_player5_742_9_0};
static Image* images_player5_742_10_0[5];
static Direction direction_player5_742_10_0 = {0, 10, 10, 0, -1, images_player5_742_10_0, 5};
static Animation anim_player5_742_10 = {&direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, NULL, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0, &direction_player5_742_10_0};
static Image* images_player5_742_11_0[2];
static Direction direction_player5_742_11_0 = {0, 10, 10, 0, -1, images_player5_742_11_0, 2};
static Image* images_player5_742_11_8[2];
static Direction direction_player5_742_11_8 = {8, 10, 10, 0, -1, images_player5_742_11_8, 2};
static Image* images_player5_742_11_16[2];
static Direction direction_player5_742_11_16 = {16, 10, 10, 0, -1, images_player5_742_11_16, 2};
static Image* images_player5_742_11_24[2];
static Direction direction_player5_742_11_24 = {24, 10, 10, 0, -1, images_player5_742_11_24, 2};
static Animation anim_player5_742_11 = {&direction_player5_742_11_0, &direction_player5_742_11_0, &direction_player5_742_11_0, &direction_player5_742_11_0, NULL, &direction_player5_742_11_8, &direction_player5_742_11_8, &direction_player5_742_11_8, &direction_player5_742_11_8, &direction_player5_742_11_8, &direction_player5_742_11_8, &direction_player5_742_11_8, NULL, &direction_player5_742_11_16, &direction_player5_742_11_16, &direction_player5_742_11_16, &direction_player5_742_11_16, &direction_player5_742_11_16, &direction_player5_742_11_16, &direction_player5_742_11_16, NULL, &direction_player5_742_11_24, &direction_player5_742_11_24, &direction_player5_742_11_24, &direction_player5_742_11_24, &direction_player5_742_11_24, &direction_player5_742_11_24, &direction_player5_742_11_24, NULL, &direction_player5_742_11_0, &direction_player5_742_11_0, &direction_player5_742_11_0};
static Image* images_player5_742_12_0[2];
static Direction direction_player5_742_12_0 = {0, 10, 10, 0, -1, images_player5_742_12_0, 2};
static Image* images_player5_742_12_8[2];
static Direction direction_player5_742_12_8 = {8, 10, 10, 0, -1, images_player5_742_12_8, 2};
static Image* images_player5_742_12_16[2];
static Direction direction_player5_742_12_16 = {16, 10, 10, 0, -1, images_player5_742_12_16, 2};
static Image* images_player5_742_12_24[2];
static Direction direction_player5_742_12_24 = {24, 10, 10, 0, -1, images_player5_742_12_24, 2};
static Animation anim_player5_742_12 = {&direction_player5_742_12_0, &direction_player5_742_12_0, &direction_player5_742_12_0, &direction_player5_742_12_0, NULL, &direction_player5_742_12_8, &direction_player5_742_12_8, &direction_player5_742_12_8, &direction_player5_742_12_8, &direction_player5_742_12_8, &direction_player5_742_12_8, &direction_player5_742_12_8, NULL, &direction_player5_742_12_16, &direction_player5_742_12_16, &direction_player5_742_12_16, &direction_player5_742_12_16, &direction_player5_742_12_16, &direction_player5_742_12_16, &direction_player5_742_12_16, NULL, &direction_player5_742_12_24, &direction_player5_742_12_24, &direction_player5_742_12_24, &direction_player5_742_12_24, &direction_player5_742_12_24, &direction_player5_742_12_24, &direction_player5_742_12_24, NULL, &direction_player5_742_12_0, &direction_player5_742_12_0, &direction_player5_742_12_0};
static Image* images_player5_742_13_0[2];
static Direction direction_player5_742_13_0 = {0, 10, 10, 0, -1, images_player5_742_13_0, 2};
static Image* images_player5_742_13_8[2];
static Direction direction_player5_742_13_8 = {8, 10, 10, 0, -1, images_player5_742_13_8, 2};
static Image* images_player5_742_13_16[2];
static Direction direction_player5_742_13_16 = {16, 10, 10, 0, -1, images_player5_742_13_16, 2};
static Image* images_player5_742_13_24[2];
static Direction direction_player5_742_13_24 = {24, 10, 10, 0, -1, images_player5_742_13_24, 2};
static Animation anim_player5_742_13 = {&direction_player5_742_13_0, &direction_player5_742_13_0, &direction_player5_742_13_0, &direction_player5_742_13_0, NULL, &direction_player5_742_13_8, &direction_player5_742_13_8, &direction_player5_742_13_8, &direction_player5_742_13_8, &direction_player5_742_13_8, &direction_player5_742_13_8, &direction_player5_742_13_8, NULL, &direction_player5_742_13_16, &direction_player5_742_13_16, &direction_player5_742_13_16, &direction_player5_742_13_16, &direction_player5_742_13_16, &direction_player5_742_13_16, &direction_player5_742_13_16, NULL, &direction_player5_742_13_24, &direction_player5_742_13_24, &direction_player5_742_13_24, &direction_player5_742_13_24, &direction_player5_742_13_24, &direction_player5_742_13_24, &direction_player5_742_13_24, NULL, &direction_player5_742_13_0, &direction_player5_742_13_0, &direction_player5_742_13_0};
static Image* images_player5_742_14_0[2];
static Direction direction_player5_742_14_0 = {0, 10, 10, 0, -1, images_player5_742_14_0, 2};
static Image* images_player5_742_14_8[2];
static Direction direction_player5_742_14_8 = {8, 10, 10, 0, -1, images_player5_742_14_8, 2};
static Image* images_player5_742_14_16[2];
static Direction direction_player5_742_14_16 = {16, 10, 10, 0, -1, images_player5_742_14_16, 2};
static Image* images_player5_742_14_24[2];
static Direction direction_player5_742_14_24 = {24, 10, 10, 0, -1, images_player5_742_14_24, 2};
static Animation anim_player5_742_14 = {&direction_player5_742_14_0, &direction_player5_742_14_0, &direction_player5_742_14_0, &direction_player5_742_14_0, NULL, &direction_player5_742_14_8, &direction_player5_742_14_8, &direction_player5_742_14_8, &direction_player5_742_14_8, &direction_player5_742_14_8, &direction_player5_742_14_8, &direction_player5_742_14_8, NULL, &direction_player5_742_14_16, &direction_player5_742_14_16, &direction_player5_742_14_16, &direction_player5_742_14_16, &direction_player5_742_14_16, &direction_player5_742_14_16, &direction_player5_742_14_16, NULL, &direction_player5_742_14_24, &direction_player5_742_14_24, &direction_player5_742_14_24, &direction_player5_742_14_24, &direction_player5_742_14_24, &direction_player5_742_14_24, &direction_player5_742_14_24, NULL, &direction_player5_742_14_0, &direction_player5_742_14_0, &direction_player5_742_14_0};
static Image* images_player5_742_15_0[2];
static Direction direction_player5_742_15_0 = {0, 10, 10, 0, -1, images_player5_742_15_0, 2};
static Image* images_player5_742_15_8[2];
static Direction direction_player5_742_15_8 = {8, 10, 10, 0, -1, images_player5_742_15_8, 2};
static Image* images_player5_742_15_16[2];
static Direction direction_player5_742_15_16 = {16, 10, 10, 0, -1, images_player5_742_15_16, 2};
static Image* images_player5_742_15_24[2];
static Direction direction_player5_742_15_24 = {24, 10, 10, 0, -1, images_player5_742_15_24, 2};
static Animation anim_player5_742_15 = {&direction_player5_742_15_0, &direction_player5_742_15_0, &direction_player5_742_15_0, &direction_player5_742_15_0, NULL, &direction_player5_742_15_8, &direction_player5_742_15_8, &direction_player5_742_15_8, &direction_player5_742_15_8, &direction_player5_742_15_8, &direction_player5_742_15_8, &direction_player5_742_15_8, NULL, &direction_player5_742_15_16, &direction_player5_742_15_16, &direction_player5_742_15_16, &direction_player5_742_15_16, &direction_player5_742_15_16, &direction_player5_742_15_16, &direction_player5_742_15_16, NULL, &direction_player5_742_15_24, &direction_player5_742_15_24, &direction_player5_742_15_24, &direction_player5_742_15_24, &direction_player5_742_15_24, &direction_player5_742_15_24, &direction_player5_742_15_24, NULL, &direction_player5_742_15_0, &direction_player5_742_15_0, &direction_player5_742_15_0};
static Image* images_player5_742_16_0[2];
static Direction direction_player5_742_16_0 = {0, 10, 10, 0, -1, images_player5_742_16_0, 2};
static Image* images_player5_742_16_8[2];
static Direction direction_player5_742_16_8 = {8, 10, 10, 0, -1, images_player5_742_16_8, 2};
static Image* images_player5_742_16_16[2];
static Direction direction_player5_742_16_16 = {16, 10, 10, 0, -1, images_player5_742_16_16, 2};
static Image* images_player5_742_16_24[2];
static Direction direction_player5_742_16_24 = {24, 10, 10, 0, -1, images_player5_742_16_24, 2};
static Animation anim_player5_742_16 = {&direction_player5_742_16_0, &direction_player5_742_16_0, &direction_player5_742_16_0, &direction_player5_742_16_0, NULL, &direction_player5_742_16_8, &direction_player5_742_16_8, &direction_player5_742_16_8, &direction_player5_742_16_8, &direction_player5_742_16_8, &direction_player5_742_16_8, &direction_player5_742_16_8, NULL, &direction_player5_742_16_16, &direction_player5_742_16_16, &direction_player5_742_16_16, &direction_player5_742_16_16, &direction_player5_742_16_16, &direction_player5_742_16_16, &direction_player5_742_16_16, NULL, &direction_player5_742_16_24, &direction_player5_742_16_24, &direction_player5_742_16_24, &direction_player5_742_16_24, &direction_player5_742_16_24, &direction_player5_742_16_24, &direction_player5_742_16_24, NULL, &direction_player5_742_16_0, &direction_player5_742_16_0, &direction_player5_742_16_0};
static Image* images_player5_742_17_0[2];
static Direction direction_player5_742_17_0 = {0, 5, 5, 1, -1, images_player5_742_17_0, 2};
static Image* images_player5_742_17_8[2];
static Direction direction_player5_742_17_8 = {8, 5, 5, 1, -1, images_player5_742_17_8, 2};
static Image* images_player5_742_17_16[2];
static Direction direction_player5_742_17_16 = {16, 5, 5, 1, -1, images_player5_742_17_16, 2};
static Image* images_player5_742_17_24[2];
static Direction direction_player5_742_17_24 = {24, 5, 5, 1, -1, images_player5_742_17_24, 2};
static Animation anim_player5_742_17 = {&direction_player5_742_17_0, &direction_player5_742_17_0, &direction_player5_742_17_0, &direction_player5_742_17_0, NULL, &direction_player5_742_17_8, &direction_player5_742_17_8, &direction_player5_742_17_8, &direction_player5_742_17_8, &direction_player5_742_17_8, &direction_player5_742_17_8, &direction_player5_742_17_8, NULL, &direction_player5_742_17_16, &direction_player5_742_17_16, &direction_player5_742_17_16, &direction_player5_742_17_16, &direction_player5_742_17_16, &direction_player5_742_17_16, &direction_player5_742_17_16, NULL, &direction_player5_742_17_24, &direction_player5_742_17_24, &direction_player5_742_17_24, &direction_player5_742_17_24, &direction_player5_742_17_24, &direction_player5_742_17_24, &direction_player5_742_17_24, NULL, &direction_player5_742_17_0, &direction_player5_742_17_0, &direction_player5_742_17_0};
static Image* images_player5_742_18_24[8];
static Direction direction_player5_742_18_24 = {24, 10, 10, 0, -1, images_player5_742_18_24, 8};
static Animation anim_player5_742_18 = {&direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, NULL, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24, &direction_player5_742_18_24};
static Image* images_player5_742_19_24[4];
static Direction direction_player5_742_19_24 = {24, 10, 10, 0, -1, images_player5_742_19_24, 4};
static Animation anim_player5_742_19 = {&direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, NULL, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24, &direction_player5_742_19_24};
static Animation * anim_array_player5_742[20] = {&anim_player5_742_0, NULL, NULL, NULL, &anim_player5_742_4, NULL, &anim_player5_742_6, &anim_player5_742_7, &anim_player5_742_8, &anim_player5_742_9, &anim_player5_742_10, &anim_player5_742_11, &anim_player5_742_12, &anim_player5_742_13, &anim_player5_742_14, &anim_player5_742_15, &anim_player5_742_16, &anim_player5_742_17, &anim_player5_742_18, &anim_player5_742_19};
static Animations anim_player5_742 = {20, &anim_array_player5_742[0]};
static bool anim_player5_742_initialized;
class Player5_742 : public Active
{
public:
    Player5_742(int x, int y) : Active(x, y, Player5_742_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_5", 8);
#endif
        this->animations = &anim_player5_742;
        if (!anim_player5_742_initialized) {
            anim_player5_742_initialized = true;
            images_player5_742_0_0[0] = get_internal_image(277);
            images_player5_742_0_0[1] = get_internal_image(280);
            images_player5_742_0_8[0] = get_internal_image(546);
            images_player5_742_0_8[1] = get_internal_image(764);
            images_player5_742_0_16[0] = get_internal_image(266);
            images_player5_742_0_16[1] = get_internal_image(281);
            images_player5_742_0_24[0] = get_internal_image(239);
            images_player5_742_0_24[1] = get_internal_image(245);
            images_player5_742_4_0[0] = get_internal_image(369);
            images_player5_742_4_0[1] = get_internal_image(373);
            images_player5_742_4_0[2] = get_internal_image(369);
            images_player5_742_4_0[3] = get_internal_image(373);
            images_player5_742_4_16[0] = get_internal_image(371);
            images_player5_742_4_16[1] = get_internal_image(763);
            images_player5_742_4_16[2] = get_internal_image(371);
            images_player5_742_4_16[3] = get_internal_image(763);
            images_player5_742_6_0[0] = get_internal_image(161);
            images_player5_742_6_8[0] = get_internal_image(1064);
            images_player5_742_6_16[0] = get_internal_image(220);
            images_player5_742_6_24[0] = get_internal_image(1069);
            images_player5_742_7_0[0] = get_internal_image(1146);
            images_player5_742_7_0[1] = get_internal_image(1147);
            images_player5_742_7_8[0] = get_internal_image(1150);
            images_player5_742_7_8[1] = get_internal_image(1151);
            images_player5_742_7_16[0] = get_internal_image(1145);
            images_player5_742_7_16[1] = get_internal_image(1148);
            images_player5_742_7_24[0] = get_internal_image(1152);
            images_player5_742_7_24[1] = get_internal_image(1153);
            images_player5_742_8_24[0] = get_internal_image(1182);
            images_player5_742_9_0[0] = get_internal_image(1500);
            images_player5_742_9_0[1] = get_internal_image(1501);
            images_player5_742_10_0[0] = get_internal_image(275);
            images_player5_742_10_0[1] = get_internal_image(290);
            images_player5_742_10_0[2] = get_internal_image(292);
            images_player5_742_10_0[3] = get_internal_image(2346);
            images_player5_742_10_0[4] = get_internal_image(292);
            images_player5_742_11_0[0] = get_internal_image(228);
            images_player5_742_11_0[1] = get_internal_image(255);
            images_player5_742_11_8[0] = get_internal_image(348);
            images_player5_742_11_8[1] = get_internal_image(1272);
            images_player5_742_11_16[0] = get_internal_image(261);
            images_player5_742_11_16[1] = get_internal_image(263);
            images_player5_742_11_24[0] = get_internal_image(717);
            images_player5_742_11_24[1] = get_internal_image(719);
            images_player5_742_12_0[0] = get_internal_image(1209);
            images_player5_742_12_0[1] = get_internal_image(1211);
            images_player5_742_12_8[0] = get_internal_image(1625);
            images_player5_742_12_8[1] = get_internal_image(1600);
            images_player5_742_12_16[0] = get_internal_image(1214);
            images_player5_742_12_16[1] = get_internal_image(1212);
            images_player5_742_12_24[0] = get_internal_image(1777);
            images_player5_742_12_24[1] = get_internal_image(1778);
            images_player5_742_13_0[0] = get_internal_image(1802);
            images_player5_742_13_0[1] = get_internal_image(1804);
            images_player5_742_13_8[0] = get_internal_image(1809);
            images_player5_742_13_8[1] = get_internal_image(1810);
            images_player5_742_13_16[0] = get_internal_image(1806);
            images_player5_742_13_16[1] = get_internal_image(1805);
            images_player5_742_13_24[0] = get_internal_image(1819);
            images_player5_742_13_24[1] = get_internal_image(1821);
            images_player5_742_14_0[0] = get_internal_image(1662);
            images_player5_742_14_0[1] = get_internal_image(1660);
            images_player5_742_14_8[0] = get_internal_image(1667);
            images_player5_742_14_8[1] = get_internal_image(1668);
            images_player5_742_14_16[0] = get_internal_image(1664);
            images_player5_742_14_16[1] = get_internal_image(1663);
            images_player5_742_14_24[0] = get_internal_image(1665);
            images_player5_742_14_24[1] = get_internal_image(1666);
            images_player5_742_15_0[0] = get_internal_image(678);
            images_player5_742_15_0[1] = get_internal_image(1614);
            images_player5_742_15_8[0] = get_internal_image(1734);
            images_player5_742_15_8[1] = get_internal_image(1735);
            images_player5_742_15_16[0] = get_internal_image(1623);
            images_player5_742_15_16[1] = get_internal_image(1726);
            images_player5_742_15_24[0] = get_internal_image(1733);
            images_player5_742_15_24[1] = get_internal_image(1624);
            images_player5_742_16_0[0] = get_internal_image(1883);
            images_player5_742_16_0[1] = get_internal_image(1886);
            images_player5_742_16_8[0] = get_internal_image(1920);
            images_player5_742_16_8[1] = get_internal_image(1921);
            images_player5_742_16_16[0] = get_internal_image(1888);
            images_player5_742_16_16[1] = get_internal_image(1889);
            images_player5_742_16_24[0] = get_internal_image(1909);
            images_player5_742_16_24[1] = get_internal_image(1910);
            images_player5_742_17_0[0] = get_internal_image(1990);
            images_player5_742_17_0[1] = get_internal_image(1993);
            images_player5_742_17_8[0] = get_internal_image(1994);
            images_player5_742_17_8[1] = get_internal_image(2007);
            images_player5_742_17_16[0] = get_internal_image(1991);
            images_player5_742_17_16[1] = get_internal_image(1992);
            images_player5_742_17_24[0] = get_internal_image(1995);
            images_player5_742_17_24[1] = get_internal_image(1996);
            images_player5_742_18_24[0] = get_internal_image(2121);
            images_player5_742_18_24[1] = get_internal_image(2116);
            images_player5_742_18_24[2] = get_internal_image(2115);
            images_player5_742_18_24[3] = get_internal_image(2117);
            images_player5_742_18_24[4] = get_internal_image(2118);
            images_player5_742_18_24[5] = get_internal_image(2120);
            images_player5_742_18_24[6] = get_internal_image(2115);
            images_player5_742_18_24[7] = get_internal_image(2119);
            images_player5_742_19_24[0] = get_internal_image(2137);
            images_player5_742_19_24[1] = get_internal_image(2141);
            images_player5_742_19_24[2] = get_internal_image(2142);
            images_player5_742_19_24[3] = get_internal_image(2141);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player5_742(int x, int y)
{
    return new (Active::pool.create()) Player5_742(x, y);
}
static Image* images_player6_743_0_0[2];
static Direction direction_player6_743_0_0 = {0, 10, 10, 0, -1, images_player6_743_0_0, 2};
static Image* images_player6_743_0_8[2];
static Direction direction_player6_743_0_8 = {8, 10, 10, 0, -1, images_player6_743_0_8, 2};
static Image* images_player6_743_0_16[2];
static Direction direction_player6_743_0_16 = {16, 10, 10, 0, -1, images_player6_743_0_16, 2};
static Image* images_player6_743_0_24[2];
static Direction direction_player6_743_0_24 = {24, 10, 10, 0, -1, images_player6_743_0_24, 2};
static Animation anim_player6_743_0 = {&direction_player6_743_0_0, &direction_player6_743_0_0, &direction_player6_743_0_0, &direction_player6_743_0_0, NULL, &direction_player6_743_0_8, &direction_player6_743_0_8, &direction_player6_743_0_8, &direction_player6_743_0_8, &direction_player6_743_0_8, &direction_player6_743_0_8, &direction_player6_743_0_8, NULL, &direction_player6_743_0_16, &direction_player6_743_0_16, &direction_player6_743_0_16, &direction_player6_743_0_16, &direction_player6_743_0_16, &direction_player6_743_0_16, &direction_player6_743_0_16, NULL, &direction_player6_743_0_24, &direction_player6_743_0_24, &direction_player6_743_0_24, &direction_player6_743_0_24, &direction_player6_743_0_24, &direction_player6_743_0_24, &direction_player6_743_0_24, NULL, &direction_player6_743_0_0, &direction_player6_743_0_0, &direction_player6_743_0_0};
static Image* images_player6_743_4_0[4];
static Direction direction_player6_743_4_0 = {0, 20, 20, 0, 1, images_player6_743_4_0, 4};
static Image* images_player6_743_4_16[4];
static Direction direction_player6_743_4_16 = {16, 20, 20, 0, 1, images_player6_743_4_16, 4};
static Animation anim_player6_743_4 = {&direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0, NULL, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, &direction_player6_743_4_16, NULL, &direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0, &direction_player6_743_4_0};
static Image* images_player6_743_6_0[1];
static Direction direction_player6_743_6_0 = {0, 6, 6, 0, 1, images_player6_743_6_0, 1};
static Image* images_player6_743_6_8[1];
static Direction direction_player6_743_6_8 = {8, 6, 6, 0, 1, images_player6_743_6_8, 1};
static Image* images_player6_743_6_16[1];
static Direction direction_player6_743_6_16 = {16, 6, 6, 0, 1, images_player6_743_6_16, 1};
static Image* images_player6_743_6_24[1];
static Direction direction_player6_743_6_24 = {24, 6, 6, 0, 1, images_player6_743_6_24, 1};
static Animation anim_player6_743_6 = {&direction_player6_743_6_0, &direction_player6_743_6_0, &direction_player6_743_6_0, &direction_player6_743_6_0, NULL, &direction_player6_743_6_8, &direction_player6_743_6_8, &direction_player6_743_6_8, &direction_player6_743_6_8, &direction_player6_743_6_8, &direction_player6_743_6_8, &direction_player6_743_6_8, NULL, &direction_player6_743_6_16, &direction_player6_743_6_16, &direction_player6_743_6_16, &direction_player6_743_6_16, &direction_player6_743_6_16, &direction_player6_743_6_16, &direction_player6_743_6_16, NULL, &direction_player6_743_6_24, &direction_player6_743_6_24, &direction_player6_743_6_24, &direction_player6_743_6_24, &direction_player6_743_6_24, &direction_player6_743_6_24, &direction_player6_743_6_24, NULL, &direction_player6_743_6_0, &direction_player6_743_6_0, &direction_player6_743_6_0};
static Image* images_player6_743_7_0[2];
static Direction direction_player6_743_7_0 = {0, 10, 10, 0, -1, images_player6_743_7_0, 2};
static Image* images_player6_743_7_8[2];
static Direction direction_player6_743_7_8 = {8, 10, 10, 0, -1, images_player6_743_7_8, 2};
static Image* images_player6_743_7_16[2];
static Direction direction_player6_743_7_16 = {16, 10, 10, 0, -1, images_player6_743_7_16, 2};
static Image* images_player6_743_7_24[2];
static Direction direction_player6_743_7_24 = {24, 10, 10, 0, -1, images_player6_743_7_24, 2};
static Animation anim_player6_743_7 = {&direction_player6_743_7_0, &direction_player6_743_7_0, &direction_player6_743_7_0, &direction_player6_743_7_0, NULL, &direction_player6_743_7_8, &direction_player6_743_7_8, &direction_player6_743_7_8, &direction_player6_743_7_8, &direction_player6_743_7_8, &direction_player6_743_7_8, &direction_player6_743_7_8, NULL, &direction_player6_743_7_16, &direction_player6_743_7_16, &direction_player6_743_7_16, &direction_player6_743_7_16, &direction_player6_743_7_16, &direction_player6_743_7_16, &direction_player6_743_7_16, NULL, &direction_player6_743_7_24, &direction_player6_743_7_24, &direction_player6_743_7_24, &direction_player6_743_7_24, &direction_player6_743_7_24, &direction_player6_743_7_24, &direction_player6_743_7_24, NULL, &direction_player6_743_7_0, &direction_player6_743_7_0, &direction_player6_743_7_0};
static Image* images_player6_743_8_24[1];
static Direction direction_player6_743_8_24 = {24, 10, 10, 0, -1, images_player6_743_8_24, 1};
static Animation anim_player6_743_8 = {&direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, NULL, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24, &direction_player6_743_8_24};
static Image* images_player6_743_9_0[2];
static Direction direction_player6_743_9_0 = {0, 50, 50, 0, -1, images_player6_743_9_0, 2};
static Animation anim_player6_743_9 = {&direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, NULL, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0, &direction_player6_743_9_0};
static Image* images_player6_743_10_0[5];
static Direction direction_player6_743_10_0 = {0, 10, 10, 0, -1, images_player6_743_10_0, 5};
static Animation anim_player6_743_10 = {&direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, NULL, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0, &direction_player6_743_10_0};
static Image* images_player6_743_11_0[2];
static Direction direction_player6_743_11_0 = {0, 6, 6, 0, -1, images_player6_743_11_0, 2};
static Image* images_player6_743_11_8[2];
static Direction direction_player6_743_11_8 = {8, 6, 6, 0, -1, images_player6_743_11_8, 2};
static Image* images_player6_743_11_16[2];
static Direction direction_player6_743_11_16 = {16, 6, 6, 0, -1, images_player6_743_11_16, 2};
static Image* images_player6_743_11_24[2];
static Direction direction_player6_743_11_24 = {24, 6, 6, 0, -1, images_player6_743_11_24, 2};
static Animation anim_player6_743_11 = {&direction_player6_743_11_0, &direction_player6_743_11_0, &direction_player6_743_11_0, &direction_player6_743_11_0, NULL, &direction_player6_743_11_8, &direction_player6_743_11_8, &direction_player6_743_11_8, &direction_player6_743_11_8, &direction_player6_743_11_8, &direction_player6_743_11_8, &direction_player6_743_11_8, NULL, &direction_player6_743_11_16, &direction_player6_743_11_16, &direction_player6_743_11_16, &direction_player6_743_11_16, &direction_player6_743_11_16, &direction_player6_743_11_16, &direction_player6_743_11_16, NULL, &direction_player6_743_11_24, &direction_player6_743_11_24, &direction_player6_743_11_24, &direction_player6_743_11_24, &direction_player6_743_11_24, &direction_player6_743_11_24, &direction_player6_743_11_24, NULL, &direction_player6_743_11_0, &direction_player6_743_11_0, &direction_player6_743_11_0};
static Image* images_player6_743_12_0[2];
static Direction direction_player6_743_12_0 = {0, 10, 10, 0, -1, images_player6_743_12_0, 2};
static Image* images_player6_743_12_8[2];
static Direction direction_player6_743_12_8 = {8, 10, 10, 0, -1, images_player6_743_12_8, 2};
static Image* images_player6_743_12_16[2];
static Direction direction_player6_743_12_16 = {16, 10, 10, 0, -1, images_player6_743_12_16, 2};
static Image* images_player6_743_12_24[2];
static Direction direction_player6_743_12_24 = {24, 10, 10, 0, -1, images_player6_743_12_24, 2};
static Animation anim_player6_743_12 = {&direction_player6_743_12_0, &direction_player6_743_12_0, &direction_player6_743_12_0, &direction_player6_743_12_0, NULL, &direction_player6_743_12_8, &direction_player6_743_12_8, &direction_player6_743_12_8, &direction_player6_743_12_8, &direction_player6_743_12_8, &direction_player6_743_12_8, &direction_player6_743_12_8, NULL, &direction_player6_743_12_16, &direction_player6_743_12_16, &direction_player6_743_12_16, &direction_player6_743_12_16, &direction_player6_743_12_16, &direction_player6_743_12_16, &direction_player6_743_12_16, NULL, &direction_player6_743_12_24, &direction_player6_743_12_24, &direction_player6_743_12_24, &direction_player6_743_12_24, &direction_player6_743_12_24, &direction_player6_743_12_24, &direction_player6_743_12_24, NULL, &direction_player6_743_12_0, &direction_player6_743_12_0, &direction_player6_743_12_0};
static Image* images_player6_743_13_0[2];
static Direction direction_player6_743_13_0 = {0, 10, 10, 0, -1, images_player6_743_13_0, 2};
static Image* images_player6_743_13_8[2];
static Direction direction_player6_743_13_8 = {8, 10, 10, 0, -1, images_player6_743_13_8, 2};
static Image* images_player6_743_13_16[2];
static Direction direction_player6_743_13_16 = {16, 10, 10, 0, -1, images_player6_743_13_16, 2};
static Image* images_player6_743_13_24[2];
static Direction direction_player6_743_13_24 = {24, 10, 10, 0, -1, images_player6_743_13_24, 2};
static Animation anim_player6_743_13 = {&direction_player6_743_13_0, &direction_player6_743_13_0, &direction_player6_743_13_0, &direction_player6_743_13_0, NULL, &direction_player6_743_13_8, &direction_player6_743_13_8, &direction_player6_743_13_8, &direction_player6_743_13_8, &direction_player6_743_13_8, &direction_player6_743_13_8, &direction_player6_743_13_8, NULL, &direction_player6_743_13_16, &direction_player6_743_13_16, &direction_player6_743_13_16, &direction_player6_743_13_16, &direction_player6_743_13_16, &direction_player6_743_13_16, &direction_player6_743_13_16, NULL, &direction_player6_743_13_24, &direction_player6_743_13_24, &direction_player6_743_13_24, &direction_player6_743_13_24, &direction_player6_743_13_24, &direction_player6_743_13_24, &direction_player6_743_13_24, NULL, &direction_player6_743_13_0, &direction_player6_743_13_0, &direction_player6_743_13_0};
static Image* images_player6_743_14_0[2];
static Direction direction_player6_743_14_0 = {0, 10, 10, 0, -1, images_player6_743_14_0, 2};
static Image* images_player6_743_14_8[2];
static Direction direction_player6_743_14_8 = {8, 10, 10, 0, -1, images_player6_743_14_8, 2};
static Image* images_player6_743_14_16[2];
static Direction direction_player6_743_14_16 = {16, 10, 10, 0, -1, images_player6_743_14_16, 2};
static Image* images_player6_743_14_24[2];
static Direction direction_player6_743_14_24 = {24, 10, 10, 0, -1, images_player6_743_14_24, 2};
static Animation anim_player6_743_14 = {&direction_player6_743_14_0, &direction_player6_743_14_0, &direction_player6_743_14_0, &direction_player6_743_14_0, NULL, &direction_player6_743_14_8, &direction_player6_743_14_8, &direction_player6_743_14_8, &direction_player6_743_14_8, &direction_player6_743_14_8, &direction_player6_743_14_8, &direction_player6_743_14_8, NULL, &direction_player6_743_14_16, &direction_player6_743_14_16, &direction_player6_743_14_16, &direction_player6_743_14_16, &direction_player6_743_14_16, &direction_player6_743_14_16, &direction_player6_743_14_16, NULL, &direction_player6_743_14_24, &direction_player6_743_14_24, &direction_player6_743_14_24, &direction_player6_743_14_24, &direction_player6_743_14_24, &direction_player6_743_14_24, &direction_player6_743_14_24, NULL, &direction_player6_743_14_0, &direction_player6_743_14_0, &direction_player6_743_14_0};
static Image* images_player6_743_15_0[2];
static Direction direction_player6_743_15_0 = {0, 10, 10, 0, -1, images_player6_743_15_0, 2};
static Image* images_player6_743_15_8[2];
static Direction direction_player6_743_15_8 = {8, 10, 10, 0, -1, images_player6_743_15_8, 2};
static Image* images_player6_743_15_16[2];
static Direction direction_player6_743_15_16 = {16, 10, 10, 0, -1, images_player6_743_15_16, 2};
static Image* images_player6_743_15_24[2];
static Direction direction_player6_743_15_24 = {24, 10, 10, 0, -1, images_player6_743_15_24, 2};
static Animation anim_player6_743_15 = {&direction_player6_743_15_0, &direction_player6_743_15_0, &direction_player6_743_15_0, &direction_player6_743_15_0, NULL, &direction_player6_743_15_8, &direction_player6_743_15_8, &direction_player6_743_15_8, &direction_player6_743_15_8, &direction_player6_743_15_8, &direction_player6_743_15_8, &direction_player6_743_15_8, NULL, &direction_player6_743_15_16, &direction_player6_743_15_16, &direction_player6_743_15_16, &direction_player6_743_15_16, &direction_player6_743_15_16, &direction_player6_743_15_16, &direction_player6_743_15_16, NULL, &direction_player6_743_15_24, &direction_player6_743_15_24, &direction_player6_743_15_24, &direction_player6_743_15_24, &direction_player6_743_15_24, &direction_player6_743_15_24, &direction_player6_743_15_24, NULL, &direction_player6_743_15_0, &direction_player6_743_15_0, &direction_player6_743_15_0};
static Image* images_player6_743_16_0[2];
static Direction direction_player6_743_16_0 = {0, 10, 10, 0, -1, images_player6_743_16_0, 2};
static Image* images_player6_743_16_8[2];
static Direction direction_player6_743_16_8 = {8, 10, 10, 0, -1, images_player6_743_16_8, 2};
static Image* images_player6_743_16_16[2];
static Direction direction_player6_743_16_16 = {16, 10, 10, 0, -1, images_player6_743_16_16, 2};
static Image* images_player6_743_16_24[2];
static Direction direction_player6_743_16_24 = {24, 10, 10, 0, -1, images_player6_743_16_24, 2};
static Animation anim_player6_743_16 = {&direction_player6_743_16_0, &direction_player6_743_16_0, &direction_player6_743_16_0, &direction_player6_743_16_0, NULL, &direction_player6_743_16_8, &direction_player6_743_16_8, &direction_player6_743_16_8, &direction_player6_743_16_8, &direction_player6_743_16_8, &direction_player6_743_16_8, &direction_player6_743_16_8, NULL, &direction_player6_743_16_16, &direction_player6_743_16_16, &direction_player6_743_16_16, &direction_player6_743_16_16, &direction_player6_743_16_16, &direction_player6_743_16_16, &direction_player6_743_16_16, NULL, &direction_player6_743_16_24, &direction_player6_743_16_24, &direction_player6_743_16_24, &direction_player6_743_16_24, &direction_player6_743_16_24, &direction_player6_743_16_24, &direction_player6_743_16_24, NULL, &direction_player6_743_16_0, &direction_player6_743_16_0, &direction_player6_743_16_0};
static Image* images_player6_743_17_0[2];
static Direction direction_player6_743_17_0 = {0, 5, 5, 1, -1, images_player6_743_17_0, 2};
static Image* images_player6_743_17_8[2];
static Direction direction_player6_743_17_8 = {8, 5, 5, 1, -1, images_player6_743_17_8, 2};
static Image* images_player6_743_17_16[2];
static Direction direction_player6_743_17_16 = {16, 5, 5, 1, -1, images_player6_743_17_16, 2};
static Image* images_player6_743_17_24[2];
static Direction direction_player6_743_17_24 = {24, 5, 5, 1, -1, images_player6_743_17_24, 2};
static Animation anim_player6_743_17 = {&direction_player6_743_17_0, &direction_player6_743_17_0, &direction_player6_743_17_0, &direction_player6_743_17_0, NULL, &direction_player6_743_17_8, &direction_player6_743_17_8, &direction_player6_743_17_8, &direction_player6_743_17_8, &direction_player6_743_17_8, &direction_player6_743_17_8, &direction_player6_743_17_8, NULL, &direction_player6_743_17_16, &direction_player6_743_17_16, &direction_player6_743_17_16, &direction_player6_743_17_16, &direction_player6_743_17_16, &direction_player6_743_17_16, &direction_player6_743_17_16, NULL, &direction_player6_743_17_24, &direction_player6_743_17_24, &direction_player6_743_17_24, &direction_player6_743_17_24, &direction_player6_743_17_24, &direction_player6_743_17_24, &direction_player6_743_17_24, NULL, &direction_player6_743_17_0, &direction_player6_743_17_0, &direction_player6_743_17_0};
static Image* images_player6_743_18_24[8];
static Direction direction_player6_743_18_24 = {24, 10, 10, 0, -1, images_player6_743_18_24, 8};
static Animation anim_player6_743_18 = {&direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, NULL, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24, &direction_player6_743_18_24};
static Image* images_player6_743_19_24[4];
static Direction direction_player6_743_19_24 = {24, 10, 10, 0, -1, images_player6_743_19_24, 4};
static Animation anim_player6_743_19 = {&direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, NULL, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24, &direction_player6_743_19_24};
static Animation * anim_array_player6_743[20] = {&anim_player6_743_0, NULL, NULL, NULL, &anim_player6_743_4, NULL, &anim_player6_743_6, &anim_player6_743_7, &anim_player6_743_8, &anim_player6_743_9, &anim_player6_743_10, &anim_player6_743_11, &anim_player6_743_12, &anim_player6_743_13, &anim_player6_743_14, &anim_player6_743_15, &anim_player6_743_16, &anim_player6_743_17, &anim_player6_743_18, &anim_player6_743_19};
static Animations anim_player6_743 = {20, &anim_array_player6_743[0]};
static bool anim_player6_743_initialized;
class Player6_743 : public Active
{
public:
    Player6_743(int x, int y) : Active(x, y, Player6_743_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_6", 8);
#endif
        this->animations = &anim_player6_743;
        if (!anim_player6_743_initialized) {
            anim_player6_743_initialized = true;
            images_player6_743_0_0[0] = get_internal_image(293);
            images_player6_743_0_0[1] = get_internal_image(282);
            images_player6_743_0_8[0] = get_internal_image(302);
            images_player6_743_0_8[1] = get_internal_image(301);
            images_player6_743_0_16[0] = get_internal_image(297);
            images_player6_743_0_16[1] = get_internal_image(295);
            images_player6_743_0_24[0] = get_internal_image(299);
            images_player6_743_0_24[1] = get_internal_image(300);
            images_player6_743_4_0[0] = get_internal_image(369);
            images_player6_743_4_0[1] = get_internal_image(373);
            images_player6_743_4_0[2] = get_internal_image(369);
            images_player6_743_4_0[3] = get_internal_image(373);
            images_player6_743_4_16[0] = get_internal_image(371);
            images_player6_743_4_16[1] = get_internal_image(763);
            images_player6_743_4_16[2] = get_internal_image(371);
            images_player6_743_4_16[3] = get_internal_image(763);
            images_player6_743_6_0[0] = get_internal_image(801);
            images_player6_743_6_8[0] = get_internal_image(800);
            images_player6_743_6_16[0] = get_internal_image(798);
            images_player6_743_6_24[0] = get_internal_image(802);
            images_player6_743_7_0[0] = get_internal_image(1173);
            images_player6_743_7_0[1] = get_internal_image(1171);
            images_player6_743_7_8[0] = get_internal_image(1175);
            images_player6_743_7_8[1] = get_internal_image(1176);
            images_player6_743_7_16[0] = get_internal_image(1172);
            images_player6_743_7_16[1] = get_internal_image(1174);
            images_player6_743_7_24[0] = get_internal_image(1168);
            images_player6_743_7_24[1] = get_internal_image(1170);
            images_player6_743_8_24[0] = get_internal_image(1184);
            images_player6_743_9_0[0] = get_internal_image(1502);
            images_player6_743_9_0[1] = get_internal_image(1506);
            images_player6_743_10_0[0] = get_internal_image(2343);
            images_player6_743_10_0[1] = get_internal_image(2339);
            images_player6_743_10_0[2] = get_internal_image(2342);
            images_player6_743_10_0[3] = get_internal_image(2338);
            images_player6_743_10_0[4] = get_internal_image(2342);
            images_player6_743_11_0[0] = get_internal_image(1086);
            images_player6_743_11_0[1] = get_internal_image(1087);
            images_player6_743_11_8[0] = get_internal_image(344);
            images_player6_743_11_8[1] = get_internal_image(343);
            images_player6_743_11_16[0] = get_internal_image(1088);
            images_player6_743_11_16[1] = get_internal_image(1085);
            images_player6_743_11_24[0] = get_internal_image(728);
            images_player6_743_11_24[1] = get_internal_image(729);
            images_player6_743_12_0[0] = get_internal_image(1202);
            images_player6_743_12_0[1] = get_internal_image(1204);
            images_player6_743_12_8[0] = get_internal_image(1770);
            images_player6_743_12_8[1] = get_internal_image(1771);
            images_player6_743_12_16[0] = get_internal_image(1203);
            images_player6_743_12_16[1] = get_internal_image(1205);
            images_player6_743_12_24[0] = get_internal_image(1783);
            images_player6_743_12_24[1] = get_internal_image(1786);
            images_player6_743_13_0[0] = get_internal_image(1846);
            images_player6_743_13_0[1] = get_internal_image(1843);
            images_player6_743_13_8[0] = get_internal_image(1852);
            images_player6_743_13_8[1] = get_internal_image(1851);
            images_player6_743_13_16[0] = get_internal_image(1847);
            images_player6_743_13_16[1] = get_internal_image(1848);
            images_player6_743_13_24[0] = get_internal_image(1850);
            images_player6_743_13_24[1] = get_internal_image(1849);
            images_player6_743_14_0[0] = get_internal_image(1710);
            images_player6_743_14_0[1] = get_internal_image(1711);
            images_player6_743_14_8[0] = get_internal_image(1717);
            images_player6_743_14_8[1] = get_internal_image(1718);
            images_player6_743_14_16[0] = get_internal_image(1714);
            images_player6_743_14_16[1] = get_internal_image(1713);
            images_player6_743_14_24[0] = get_internal_image(1712);
            images_player6_743_14_24[1] = get_internal_image(1715);
            images_player6_743_15_0[0] = get_internal_image(439);
            images_player6_743_15_0[1] = get_internal_image(467);
            images_player6_743_15_8[0] = get_internal_image(1570);
            images_player6_743_15_8[1] = get_internal_image(1579);
            images_player6_743_15_16[0] = get_internal_image(680);
            images_player6_743_15_16[1] = get_internal_image(79);
            images_player6_743_15_24[0] = get_internal_image(470);
            images_player6_743_15_24[1] = get_internal_image(1194);
            images_player6_743_16_0[0] = get_internal_image(1887);
            images_player6_743_16_0[1] = get_internal_image(1890);
            images_player6_743_16_8[0] = get_internal_image(1922);
            images_player6_743_16_8[1] = get_internal_image(1923);
            images_player6_743_16_16[0] = get_internal_image(1892);
            images_player6_743_16_16[1] = get_internal_image(1893);
            images_player6_743_16_24[0] = get_internal_image(1911);
            images_player6_743_16_24[1] = get_internal_image(1912);
            images_player6_743_17_0[0] = get_internal_image(2033);
            images_player6_743_17_0[1] = get_internal_image(2032);
            images_player6_743_17_8[0] = get_internal_image(2038);
            images_player6_743_17_8[1] = get_internal_image(2040);
            images_player6_743_17_16[0] = get_internal_image(2034);
            images_player6_743_17_16[1] = get_internal_image(2035);
            images_player6_743_17_24[0] = get_internal_image(2036);
            images_player6_743_17_24[1] = get_internal_image(2037);
            images_player6_743_18_24[0] = get_internal_image(2099);
            images_player6_743_18_24[1] = get_internal_image(2112);
            images_player6_743_18_24[2] = get_internal_image(2107);
            images_player6_743_18_24[3] = get_internal_image(2108);
            images_player6_743_18_24[4] = get_internal_image(2109);
            images_player6_743_18_24[5] = get_internal_image(2114);
            images_player6_743_18_24[6] = get_internal_image(2110);
            images_player6_743_18_24[7] = get_internal_image(2111);
            images_player6_743_19_24[0] = get_internal_image(2150);
            images_player6_743_19_24[1] = get_internal_image(2156);
            images_player6_743_19_24[2] = get_internal_image(2157);
            images_player6_743_19_24[3] = get_internal_image(2156);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player6_743(int x, int y)
{
    return new (Active::pool.create()) Player6_743(x, y);
}
static Image* images_player7_744_0_0[2];
static Direction direction_player7_744_0_0 = {0, 10, 10, 0, -1, images_player7_744_0_0, 2};
static Image* images_player7_744_0_8[2];
static Direction direction_player7_744_0_8 = {8, 10, 10, 0, -1, images_player7_744_0_8, 2};
static Image* images_player7_744_0_16[2];
static Direction direction_player7_744_0_16 = {16, 10, 10, 0, -1, images_player7_744_0_16, 2};
static Image* images_player7_744_0_24[2];
static Direction direction_player7_744_0_24 = {24, 10, 10, 0, -1, images_player7_744_0_24, 2};
static Animation anim_player7_744_0 = {&direction_player7_744_0_0, &direction_player7_744_0_0, &direction_player7_744_0_0, &direction_player7_744_0_0, NULL, &direction_player7_744_0_8, &direction_player7_744_0_8, &direction_player7_744_0_8, &direction_player7_744_0_8, &direction_player7_744_0_8, &direction_player7_744_0_8, &direction_player7_744_0_8, NULL, &direction_player7_744_0_16, &direction_player7_744_0_16, &direction_player7_744_0_16, &direction_player7_744_0_16, &direction_player7_744_0_16, &direction_player7_744_0_16, &direction_player7_744_0_16, NULL, &direction_player7_744_0_24, &direction_player7_744_0_24, &direction_player7_744_0_24, &direction_player7_744_0_24, &direction_player7_744_0_24, &direction_player7_744_0_24, &direction_player7_744_0_24, NULL, &direction_player7_744_0_0, &direction_player7_744_0_0, &direction_player7_744_0_0};
static Image* images_player7_744_4_0[4];
static Direction direction_player7_744_4_0 = {0, 20, 20, 0, 1, images_player7_744_4_0, 4};
static Image* images_player7_744_4_16[4];
static Direction direction_player7_744_4_16 = {16, 20, 20, 0, 1, images_player7_744_4_16, 4};
static Animation anim_player7_744_4 = {&direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0, NULL, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, &direction_player7_744_4_16, NULL, &direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0, &direction_player7_744_4_0};
static Image* images_player7_744_6_0[1];
static Direction direction_player7_744_6_0 = {0, 6, 6, 0, 1, images_player7_744_6_0, 1};
static Image* images_player7_744_6_8[1];
static Direction direction_player7_744_6_8 = {8, 6, 6, 0, 1, images_player7_744_6_8, 1};
static Image* images_player7_744_6_16[1];
static Direction direction_player7_744_6_16 = {16, 6, 6, 0, 1, images_player7_744_6_16, 1};
static Image* images_player7_744_6_24[1];
static Direction direction_player7_744_6_24 = {24, 6, 6, 0, 1, images_player7_744_6_24, 1};
static Animation anim_player7_744_6 = {&direction_player7_744_6_0, &direction_player7_744_6_0, &direction_player7_744_6_0, &direction_player7_744_6_0, NULL, &direction_player7_744_6_8, &direction_player7_744_6_8, &direction_player7_744_6_8, &direction_player7_744_6_8, &direction_player7_744_6_8, &direction_player7_744_6_8, &direction_player7_744_6_8, NULL, &direction_player7_744_6_16, &direction_player7_744_6_16, &direction_player7_744_6_16, &direction_player7_744_6_16, &direction_player7_744_6_16, &direction_player7_744_6_16, &direction_player7_744_6_16, NULL, &direction_player7_744_6_24, &direction_player7_744_6_24, &direction_player7_744_6_24, &direction_player7_744_6_24, &direction_player7_744_6_24, &direction_player7_744_6_24, &direction_player7_744_6_24, NULL, &direction_player7_744_6_0, &direction_player7_744_6_0, &direction_player7_744_6_0};
static Image* images_player7_744_7_0[2];
static Direction direction_player7_744_7_0 = {0, 10, 10, 0, -1, images_player7_744_7_0, 2};
static Image* images_player7_744_7_8[2];
static Direction direction_player7_744_7_8 = {8, 10, 10, 0, -1, images_player7_744_7_8, 2};
static Image* images_player7_744_7_16[2];
static Direction direction_player7_744_7_16 = {16, 10, 10, 0, -1, images_player7_744_7_16, 2};
static Image* images_player7_744_7_24[2];
static Direction direction_player7_744_7_24 = {24, 10, 10, 0, -1, images_player7_744_7_24, 2};
static Animation anim_player7_744_7 = {&direction_player7_744_7_0, &direction_player7_744_7_0, &direction_player7_744_7_0, &direction_player7_744_7_0, NULL, &direction_player7_744_7_8, &direction_player7_744_7_8, &direction_player7_744_7_8, &direction_player7_744_7_8, &direction_player7_744_7_8, &direction_player7_744_7_8, &direction_player7_744_7_8, NULL, &direction_player7_744_7_16, &direction_player7_744_7_16, &direction_player7_744_7_16, &direction_player7_744_7_16, &direction_player7_744_7_16, &direction_player7_744_7_16, &direction_player7_744_7_16, NULL, &direction_player7_744_7_24, &direction_player7_744_7_24, &direction_player7_744_7_24, &direction_player7_744_7_24, &direction_player7_744_7_24, &direction_player7_744_7_24, &direction_player7_744_7_24, NULL, &direction_player7_744_7_0, &direction_player7_744_7_0, &direction_player7_744_7_0};
static Image* images_player7_744_8_24[1];
static Direction direction_player7_744_8_24 = {24, 10, 10, 0, -1, images_player7_744_8_24, 1};
static Animation anim_player7_744_8 = {&direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, NULL, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24, &direction_player7_744_8_24};
static Image* images_player7_744_9_0[2];
static Direction direction_player7_744_9_0 = {0, 50, 50, 0, -1, images_player7_744_9_0, 2};
static Animation anim_player7_744_9 = {&direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, NULL, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0, &direction_player7_744_9_0};
static Image* images_player7_744_10_0[5];
static Direction direction_player7_744_10_0 = {0, 10, 10, 0, -1, images_player7_744_10_0, 5};
static Animation anim_player7_744_10 = {&direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, NULL, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0, &direction_player7_744_10_0};
static Image* images_player7_744_11_0[2];
static Direction direction_player7_744_11_0 = {0, 10, 10, 0, -1, images_player7_744_11_0, 2};
static Image* images_player7_744_11_8[2];
static Direction direction_player7_744_11_8 = {8, 10, 10, 0, -1, images_player7_744_11_8, 2};
static Image* images_player7_744_11_16[2];
static Direction direction_player7_744_11_16 = {16, 10, 10, 0, -1, images_player7_744_11_16, 2};
static Image* images_player7_744_11_24[2];
static Direction direction_player7_744_11_24 = {24, 10, 10, 0, -1, images_player7_744_11_24, 2};
static Animation anim_player7_744_11 = {&direction_player7_744_11_0, &direction_player7_744_11_0, &direction_player7_744_11_0, &direction_player7_744_11_0, NULL, &direction_player7_744_11_8, &direction_player7_744_11_8, &direction_player7_744_11_8, &direction_player7_744_11_8, &direction_player7_744_11_8, &direction_player7_744_11_8, &direction_player7_744_11_8, NULL, &direction_player7_744_11_16, &direction_player7_744_11_16, &direction_player7_744_11_16, &direction_player7_744_11_16, &direction_player7_744_11_16, &direction_player7_744_11_16, &direction_player7_744_11_16, NULL, &direction_player7_744_11_24, &direction_player7_744_11_24, &direction_player7_744_11_24, &direction_player7_744_11_24, &direction_player7_744_11_24, &direction_player7_744_11_24, &direction_player7_744_11_24, NULL, &direction_player7_744_11_0, &direction_player7_744_11_0, &direction_player7_744_11_0};
static Image* images_player7_744_12_0[2];
static Direction direction_player7_744_12_0 = {0, 10, 10, 0, -1, images_player7_744_12_0, 2};
static Image* images_player7_744_12_8[2];
static Direction direction_player7_744_12_8 = {8, 10, 10, 0, -1, images_player7_744_12_8, 2};
static Image* images_player7_744_12_16[2];
static Direction direction_player7_744_12_16 = {16, 10, 10, 0, -1, images_player7_744_12_16, 2};
static Image* images_player7_744_12_24[2];
static Direction direction_player7_744_12_24 = {24, 10, 10, 0, -1, images_player7_744_12_24, 2};
static Animation anim_player7_744_12 = {&direction_player7_744_12_0, &direction_player7_744_12_0, &direction_player7_744_12_0, &direction_player7_744_12_0, NULL, &direction_player7_744_12_8, &direction_player7_744_12_8, &direction_player7_744_12_8, &direction_player7_744_12_8, &direction_player7_744_12_8, &direction_player7_744_12_8, &direction_player7_744_12_8, NULL, &direction_player7_744_12_16, &direction_player7_744_12_16, &direction_player7_744_12_16, &direction_player7_744_12_16, &direction_player7_744_12_16, &direction_player7_744_12_16, &direction_player7_744_12_16, NULL, &direction_player7_744_12_24, &direction_player7_744_12_24, &direction_player7_744_12_24, &direction_player7_744_12_24, &direction_player7_744_12_24, &direction_player7_744_12_24, &direction_player7_744_12_24, NULL, &direction_player7_744_12_0, &direction_player7_744_12_0, &direction_player7_744_12_0};
static Image* images_player7_744_13_0[2];
static Direction direction_player7_744_13_0 = {0, 10, 10, 0, -1, images_player7_744_13_0, 2};
static Image* images_player7_744_13_8[2];
static Direction direction_player7_744_13_8 = {8, 10, 10, 0, -1, images_player7_744_13_8, 2};
static Image* images_player7_744_13_16[2];
static Direction direction_player7_744_13_16 = {16, 10, 10, 0, -1, images_player7_744_13_16, 2};
static Image* images_player7_744_13_24[2];
static Direction direction_player7_744_13_24 = {24, 10, 10, 0, -1, images_player7_744_13_24, 2};
static Animation anim_player7_744_13 = {&direction_player7_744_13_0, &direction_player7_744_13_0, &direction_player7_744_13_0, &direction_player7_744_13_0, NULL, &direction_player7_744_13_8, &direction_player7_744_13_8, &direction_player7_744_13_8, &direction_player7_744_13_8, &direction_player7_744_13_8, &direction_player7_744_13_8, &direction_player7_744_13_8, NULL, &direction_player7_744_13_16, &direction_player7_744_13_16, &direction_player7_744_13_16, &direction_player7_744_13_16, &direction_player7_744_13_16, &direction_player7_744_13_16, &direction_player7_744_13_16, NULL, &direction_player7_744_13_24, &direction_player7_744_13_24, &direction_player7_744_13_24, &direction_player7_744_13_24, &direction_player7_744_13_24, &direction_player7_744_13_24, &direction_player7_744_13_24, NULL, &direction_player7_744_13_0, &direction_player7_744_13_0, &direction_player7_744_13_0};
static Image* images_player7_744_14_0[2];
static Direction direction_player7_744_14_0 = {0, 10, 10, 0, -1, images_player7_744_14_0, 2};
static Image* images_player7_744_14_8[2];
static Direction direction_player7_744_14_8 = {8, 10, 10, 0, -1, images_player7_744_14_8, 2};
static Image* images_player7_744_14_16[2];
static Direction direction_player7_744_14_16 = {16, 10, 10, 0, -1, images_player7_744_14_16, 2};
static Image* images_player7_744_14_24[2];
static Direction direction_player7_744_14_24 = {24, 10, 10, 0, -1, images_player7_744_14_24, 2};
static Animation anim_player7_744_14 = {&direction_player7_744_14_0, &direction_player7_744_14_0, &direction_player7_744_14_0, &direction_player7_744_14_0, NULL, &direction_player7_744_14_8, &direction_player7_744_14_8, &direction_player7_744_14_8, &direction_player7_744_14_8, &direction_player7_744_14_8, &direction_player7_744_14_8, &direction_player7_744_14_8, NULL, &direction_player7_744_14_16, &direction_player7_744_14_16, &direction_player7_744_14_16, &direction_player7_744_14_16, &direction_player7_744_14_16, &direction_player7_744_14_16, &direction_player7_744_14_16, NULL, &direction_player7_744_14_24, &direction_player7_744_14_24, &direction_player7_744_14_24, &direction_player7_744_14_24, &direction_player7_744_14_24, &direction_player7_744_14_24, &direction_player7_744_14_24, NULL, &direction_player7_744_14_0, &direction_player7_744_14_0, &direction_player7_744_14_0};
static Image* images_player7_744_15_0[2];
static Direction direction_player7_744_15_0 = {0, 10, 10, 0, -1, images_player7_744_15_0, 2};
static Image* images_player7_744_15_8[2];
static Direction direction_player7_744_15_8 = {8, 10, 10, 0, -1, images_player7_744_15_8, 2};
static Image* images_player7_744_15_16[2];
static Direction direction_player7_744_15_16 = {16, 10, 10, 0, -1, images_player7_744_15_16, 2};
static Image* images_player7_744_15_24[2];
static Direction direction_player7_744_15_24 = {24, 10, 10, 0, -1, images_player7_744_15_24, 2};
static Animation anim_player7_744_15 = {&direction_player7_744_15_0, &direction_player7_744_15_0, &direction_player7_744_15_0, &direction_player7_744_15_0, NULL, &direction_player7_744_15_8, &direction_player7_744_15_8, &direction_player7_744_15_8, &direction_player7_744_15_8, &direction_player7_744_15_8, &direction_player7_744_15_8, &direction_player7_744_15_8, NULL, &direction_player7_744_15_16, &direction_player7_744_15_16, &direction_player7_744_15_16, &direction_player7_744_15_16, &direction_player7_744_15_16, &direction_player7_744_15_16, &direction_player7_744_15_16, NULL, &direction_player7_744_15_24, &direction_player7_744_15_24, &direction_player7_744_15_24, &direction_player7_744_15_24, &direction_player7_744_15_24, &direction_player7_744_15_24, &direction_player7_744_15_24, NULL, &direction_player7_744_15_0, &direction_player7_744_15_0, &direction_player7_744_15_0};
static Image* images_player7_744_16_0[2];
static Direction direction_player7_744_16_0 = {0, 10, 10, 0, -1, images_player7_744_16_0, 2};
static Image* images_player7_744_16_8[2];
static Direction direction_player7_744_16_8 = {8, 10, 10, 0, -1, images_player7_744_16_8, 2};
static Image* images_player7_744_16_16[2];
static Direction direction_player7_744_16_16 = {16, 10, 10, 0, -1, images_player7_744_16_16, 2};
static Image* images_player7_744_16_24[2];
static Direction direction_player7_744_16_24 = {24, 10, 10, 0, -1, images_player7_744_16_24, 2};
static Animation anim_player7_744_16 = {&direction_player7_744_16_0, &direction_player7_744_16_0, &direction_player7_744_16_0, &direction_player7_744_16_0, NULL, &direction_player7_744_16_8, &direction_player7_744_16_8, &direction_player7_744_16_8, &direction_player7_744_16_8, &direction_player7_744_16_8, &direction_player7_744_16_8, &direction_player7_744_16_8, NULL, &direction_player7_744_16_16, &direction_player7_744_16_16, &direction_player7_744_16_16, &direction_player7_744_16_16, &direction_player7_744_16_16, &direction_player7_744_16_16, &direction_player7_744_16_16, NULL, &direction_player7_744_16_24, &direction_player7_744_16_24, &direction_player7_744_16_24, &direction_player7_744_16_24, &direction_player7_744_16_24, &direction_player7_744_16_24, &direction_player7_744_16_24, NULL, &direction_player7_744_16_0, &direction_player7_744_16_0, &direction_player7_744_16_0};
static Image* images_player7_744_17_0[2];
static Direction direction_player7_744_17_0 = {0, 5, 5, 1, -1, images_player7_744_17_0, 2};
static Image* images_player7_744_17_8[2];
static Direction direction_player7_744_17_8 = {8, 5, 5, 1, -1, images_player7_744_17_8, 2};
static Image* images_player7_744_17_16[2];
static Direction direction_player7_744_17_16 = {16, 5, 5, 1, -1, images_player7_744_17_16, 2};
static Image* images_player7_744_17_24[2];
static Direction direction_player7_744_17_24 = {24, 5, 5, 1, -1, images_player7_744_17_24, 2};
static Animation anim_player7_744_17 = {&direction_player7_744_17_0, &direction_player7_744_17_0, &direction_player7_744_17_0, &direction_player7_744_17_0, NULL, &direction_player7_744_17_8, &direction_player7_744_17_8, &direction_player7_744_17_8, &direction_player7_744_17_8, &direction_player7_744_17_8, &direction_player7_744_17_8, &direction_player7_744_17_8, NULL, &direction_player7_744_17_16, &direction_player7_744_17_16, &direction_player7_744_17_16, &direction_player7_744_17_16, &direction_player7_744_17_16, &direction_player7_744_17_16, &direction_player7_744_17_16, NULL, &direction_player7_744_17_24, &direction_player7_744_17_24, &direction_player7_744_17_24, &direction_player7_744_17_24, &direction_player7_744_17_24, &direction_player7_744_17_24, &direction_player7_744_17_24, NULL, &direction_player7_744_17_0, &direction_player7_744_17_0, &direction_player7_744_17_0};
static Image* images_player7_744_18_24[8];
static Direction direction_player7_744_18_24 = {24, 10, 10, 0, -1, images_player7_744_18_24, 8};
static Animation anim_player7_744_18 = {&direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, NULL, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24, &direction_player7_744_18_24};
static Image* images_player7_744_19_24[4];
static Direction direction_player7_744_19_24 = {24, 10, 10, 0, -1, images_player7_744_19_24, 4};
static Animation anim_player7_744_19 = {&direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, NULL, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24, &direction_player7_744_19_24};
static Animation * anim_array_player7_744[20] = {&anim_player7_744_0, NULL, NULL, NULL, &anim_player7_744_4, NULL, &anim_player7_744_6, &anim_player7_744_7, &anim_player7_744_8, &anim_player7_744_9, &anim_player7_744_10, &anim_player7_744_11, &anim_player7_744_12, &anim_player7_744_13, &anim_player7_744_14, &anim_player7_744_15, &anim_player7_744_16, &anim_player7_744_17, &anim_player7_744_18, &anim_player7_744_19};
static Animations anim_player7_744 = {20, &anim_array_player7_744[0]};
static bool anim_player7_744_initialized;
class Player7_744 : public Active
{
public:
    Player7_744(int x, int y) : Active(x, y, Player7_744_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_7", 8);
#endif
        this->animations = &anim_player7_744;
        if (!anim_player7_744_initialized) {
            anim_player7_744_initialized = true;
            images_player7_744_0_0[0] = get_internal_image(441);
            images_player7_744_0_0[1] = get_internal_image(442);
            images_player7_744_0_8[0] = get_internal_image(459);
            images_player7_744_0_8[1] = get_internal_image(1372);
            images_player7_744_0_16[0] = get_internal_image(447);
            images_player7_744_0_16[1] = get_internal_image(444);
            images_player7_744_0_24[0] = get_internal_image(384);
            images_player7_744_0_24[1] = get_internal_image(381);
            images_player7_744_4_0[0] = get_internal_image(369);
            images_player7_744_4_0[1] = get_internal_image(373);
            images_player7_744_4_0[2] = get_internal_image(369);
            images_player7_744_4_0[3] = get_internal_image(373);
            images_player7_744_4_16[0] = get_internal_image(371);
            images_player7_744_4_16[1] = get_internal_image(763);
            images_player7_744_4_16[2] = get_internal_image(371);
            images_player7_744_4_16[3] = get_internal_image(763);
            images_player7_744_6_0[0] = get_internal_image(170);
            images_player7_744_6_8[0] = get_internal_image(601);
            images_player7_744_6_16[0] = get_internal_image(317);
            images_player7_744_6_24[0] = get_internal_image(1067);
            images_player7_744_7_0[0] = get_internal_image(1138);
            images_player7_744_7_0[1] = get_internal_image(1139);
            images_player7_744_7_8[0] = get_internal_image(1136);
            images_player7_744_7_8[1] = get_internal_image(1143);
            images_player7_744_7_16[0] = get_internal_image(1140);
            images_player7_744_7_16[1] = get_internal_image(1141);
            images_player7_744_7_24[0] = get_internal_image(1142);
            images_player7_744_7_24[1] = get_internal_image(1144);
            images_player7_744_8_24[0] = get_internal_image(1183);
            images_player7_744_9_0[0] = get_internal_image(1495);
            images_player7_744_9_0[1] = get_internal_image(1496);
            images_player7_744_10_0[0] = get_internal_image(456);
            images_player7_744_10_0[1] = get_internal_image(461);
            images_player7_744_10_0[2] = get_internal_image(595);
            images_player7_744_10_0[3] = get_internal_image(2341);
            images_player7_744_10_0[4] = get_internal_image(595);
            images_player7_744_11_0[0] = get_internal_image(413);
            images_player7_744_11_0[1] = get_internal_image(404);
            images_player7_744_11_8[0] = get_internal_image(457);
            images_player7_744_11_8[1] = get_internal_image(458);
            images_player7_744_11_16[0] = get_internal_image(448);
            images_player7_744_11_16[1] = get_internal_image(450);
            images_player7_744_11_24[0] = get_internal_image(715);
            images_player7_744_11_24[1] = get_internal_image(716);
            images_player7_744_12_0[0] = get_internal_image(1185);
            images_player7_744_12_0[1] = get_internal_image(1186);
            images_player7_744_12_8[0] = get_internal_image(1762);
            images_player7_744_12_8[1] = get_internal_image(1761);
            images_player7_744_12_16[0] = get_internal_image(1187);
            images_player7_744_12_16[1] = get_internal_image(1179);
            images_player7_744_12_24[0] = get_internal_image(1776);
            images_player7_744_12_24[1] = get_internal_image(1773);
            images_player7_744_13_0[0] = get_internal_image(1798);
            images_player7_744_13_0[1] = get_internal_image(1795);
            images_player7_744_13_8[0] = get_internal_image(1799);
            images_player7_744_13_8[1] = get_internal_image(1801);
            images_player7_744_13_16[0] = get_internal_image(1793);
            images_player7_744_13_16[1] = get_internal_image(1796);
            images_player7_744_13_24[0] = get_internal_image(1797);
            images_player7_744_13_24[1] = get_internal_image(1800);
            images_player7_744_14_0[0] = get_internal_image(1693);
            images_player7_744_14_0[1] = get_internal_image(1696);
            images_player7_744_14_8[0] = get_internal_image(1700);
            images_player7_744_14_8[1] = get_internal_image(1701);
            images_player7_744_14_16[0] = get_internal_image(1695);
            images_player7_744_14_16[1] = get_internal_image(1698);
            images_player7_744_14_24[0] = get_internal_image(1697);
            images_player7_744_14_24[1] = get_internal_image(1699);
            images_player7_744_15_0[0] = get_internal_image(1732);
            images_player7_744_15_0[1] = get_internal_image(1727);
            images_player7_744_15_8[0] = get_internal_image(1729);
            images_player7_744_15_8[1] = get_internal_image(1731);
            images_player7_744_15_16[0] = get_internal_image(1724);
            images_player7_744_15_16[1] = get_internal_image(1725);
            images_player7_744_15_24[0] = get_internal_image(1730);
            images_player7_744_15_24[1] = get_internal_image(1728);
            images_player7_744_16_0[0] = get_internal_image(1891);
            images_player7_744_16_0[1] = get_internal_image(1894);
            images_player7_744_16_8[0] = get_internal_image(1924);
            images_player7_744_16_8[1] = get_internal_image(1925);
            images_player7_744_16_16[0] = get_internal_image(1896);
            images_player7_744_16_16[1] = get_internal_image(1897);
            images_player7_744_16_24[0] = get_internal_image(1913);
            images_player7_744_16_24[1] = get_internal_image(1914);
            images_player7_744_17_0[0] = get_internal_image(1978);
            images_player7_744_17_0[1] = get_internal_image(1982);
            images_player7_744_17_8[0] = get_internal_image(1987);
            images_player7_744_17_8[1] = get_internal_image(1988);
            images_player7_744_17_16[0] = get_internal_image(1983);
            images_player7_744_17_16[1] = get_internal_image(1984);
            images_player7_744_17_24[0] = get_internal_image(1985);
            images_player7_744_17_24[1] = get_internal_image(1986);
            images_player7_744_18_24[0] = get_internal_image(2070);
            images_player7_744_18_24[1] = get_internal_image(2076);
            images_player7_744_18_24[2] = get_internal_image(2071);
            images_player7_744_18_24[3] = get_internal_image(2072);
            images_player7_744_18_24[4] = get_internal_image(2073);
            images_player7_744_18_24[5] = get_internal_image(2075);
            images_player7_744_18_24[6] = get_internal_image(2071);
            images_player7_744_18_24[7] = get_internal_image(2074);
            images_player7_744_19_24[0] = get_internal_image(2136);
            images_player7_744_19_24[1] = get_internal_image(2140);
            images_player7_744_19_24[2] = get_internal_image(2138);
            images_player7_744_19_24[3] = get_internal_image(2140);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player7_744(int x, int y)
{
    return new (Active::pool.create()) Player7_744(x, y);
}
static Image* images_player8_745_0_0[2];
static Direction direction_player8_745_0_0 = {0, 10, 10, 0, -1, images_player8_745_0_0, 2};
static Image* images_player8_745_0_8[2];
static Direction direction_player8_745_0_8 = {8, 10, 10, 0, -1, images_player8_745_0_8, 2};
static Image* images_player8_745_0_16[2];
static Direction direction_player8_745_0_16 = {16, 10, 10, 0, -1, images_player8_745_0_16, 2};
static Image* images_player8_745_0_24[2];
static Direction direction_player8_745_0_24 = {24, 10, 10, 0, -1, images_player8_745_0_24, 2};
static Animation anim_player8_745_0 = {&direction_player8_745_0_0, &direction_player8_745_0_0, &direction_player8_745_0_0, &direction_player8_745_0_0, NULL, &direction_player8_745_0_8, &direction_player8_745_0_8, &direction_player8_745_0_8, &direction_player8_745_0_8, &direction_player8_745_0_8, &direction_player8_745_0_8, &direction_player8_745_0_8, NULL, &direction_player8_745_0_16, &direction_player8_745_0_16, &direction_player8_745_0_16, &direction_player8_745_0_16, &direction_player8_745_0_16, &direction_player8_745_0_16, &direction_player8_745_0_16, NULL, &direction_player8_745_0_24, &direction_player8_745_0_24, &direction_player8_745_0_24, &direction_player8_745_0_24, &direction_player8_745_0_24, &direction_player8_745_0_24, &direction_player8_745_0_24, NULL, &direction_player8_745_0_0, &direction_player8_745_0_0, &direction_player8_745_0_0};
static Image* images_player8_745_4_0[4];
static Direction direction_player8_745_4_0 = {0, 20, 20, 0, 1, images_player8_745_4_0, 4};
static Image* images_player8_745_4_16[4];
static Direction direction_player8_745_4_16 = {16, 20, 20, 0, 1, images_player8_745_4_16, 4};
static Animation anim_player8_745_4 = {&direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0, NULL, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, &direction_player8_745_4_16, NULL, &direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0, &direction_player8_745_4_0};
static Image* images_player8_745_6_0[1];
static Direction direction_player8_745_6_0 = {0, 6, 6, 0, 1, images_player8_745_6_0, 1};
static Image* images_player8_745_6_8[1];
static Direction direction_player8_745_6_8 = {8, 6, 6, 0, 1, images_player8_745_6_8, 1};
static Image* images_player8_745_6_16[1];
static Direction direction_player8_745_6_16 = {16, 6, 6, 0, 1, images_player8_745_6_16, 1};
static Image* images_player8_745_6_24[1];
static Direction direction_player8_745_6_24 = {24, 6, 6, 0, 1, images_player8_745_6_24, 1};
static Animation anim_player8_745_6 = {&direction_player8_745_6_0, &direction_player8_745_6_0, &direction_player8_745_6_0, &direction_player8_745_6_0, NULL, &direction_player8_745_6_8, &direction_player8_745_6_8, &direction_player8_745_6_8, &direction_player8_745_6_8, &direction_player8_745_6_8, &direction_player8_745_6_8, &direction_player8_745_6_8, NULL, &direction_player8_745_6_16, &direction_player8_745_6_16, &direction_player8_745_6_16, &direction_player8_745_6_16, &direction_player8_745_6_16, &direction_player8_745_6_16, &direction_player8_745_6_16, NULL, &direction_player8_745_6_24, &direction_player8_745_6_24, &direction_player8_745_6_24, &direction_player8_745_6_24, &direction_player8_745_6_24, &direction_player8_745_6_24, &direction_player8_745_6_24, NULL, &direction_player8_745_6_0, &direction_player8_745_6_0, &direction_player8_745_6_0};
static Image* images_player8_745_7_0[2];
static Direction direction_player8_745_7_0 = {0, 10, 10, 0, -1, images_player8_745_7_0, 2};
static Image* images_player8_745_7_8[2];
static Direction direction_player8_745_7_8 = {8, 10, 10, 0, -1, images_player8_745_7_8, 2};
static Image* images_player8_745_7_16[2];
static Direction direction_player8_745_7_16 = {16, 10, 10, 0, -1, images_player8_745_7_16, 2};
static Image* images_player8_745_7_24[2];
static Direction direction_player8_745_7_24 = {24, 10, 10, 0, -1, images_player8_745_7_24, 2};
static Animation anim_player8_745_7 = {&direction_player8_745_7_0, &direction_player8_745_7_0, &direction_player8_745_7_0, &direction_player8_745_7_0, NULL, &direction_player8_745_7_8, &direction_player8_745_7_8, &direction_player8_745_7_8, &direction_player8_745_7_8, &direction_player8_745_7_8, &direction_player8_745_7_8, &direction_player8_745_7_8, NULL, &direction_player8_745_7_16, &direction_player8_745_7_16, &direction_player8_745_7_16, &direction_player8_745_7_16, &direction_player8_745_7_16, &direction_player8_745_7_16, &direction_player8_745_7_16, NULL, &direction_player8_745_7_24, &direction_player8_745_7_24, &direction_player8_745_7_24, &direction_player8_745_7_24, &direction_player8_745_7_24, &direction_player8_745_7_24, &direction_player8_745_7_24, NULL, &direction_player8_745_7_0, &direction_player8_745_7_0, &direction_player8_745_7_0};
static Image* images_player8_745_8_24[1];
static Direction direction_player8_745_8_24 = {24, 10, 10, 0, -1, images_player8_745_8_24, 1};
static Animation anim_player8_745_8 = {&direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, NULL, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24, &direction_player8_745_8_24};
static Image* images_player8_745_9_0[2];
static Direction direction_player8_745_9_0 = {0, 50, 50, 0, -1, images_player8_745_9_0, 2};
static Animation anim_player8_745_9 = {&direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, NULL, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0, &direction_player8_745_9_0};
static Image* images_player8_745_10_0[5];
static Direction direction_player8_745_10_0 = {0, 10, 10, 0, -1, images_player8_745_10_0, 5};
static Animation anim_player8_745_10 = {&direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, NULL, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0, &direction_player8_745_10_0};
static Image* images_player8_745_11_0[2];
static Direction direction_player8_745_11_0 = {0, 6, 6, 0, -1, images_player8_745_11_0, 2};
static Image* images_player8_745_11_8[2];
static Direction direction_player8_745_11_8 = {8, 6, 6, 0, -1, images_player8_745_11_8, 2};
static Image* images_player8_745_11_16[2];
static Direction direction_player8_745_11_16 = {16, 6, 6, 0, -1, images_player8_745_11_16, 2};
static Image* images_player8_745_11_24[2];
static Direction direction_player8_745_11_24 = {24, 6, 6, 0, -1, images_player8_745_11_24, 2};
static Animation anim_player8_745_11 = {&direction_player8_745_11_0, &direction_player8_745_11_0, &direction_player8_745_11_0, &direction_player8_745_11_0, NULL, &direction_player8_745_11_8, &direction_player8_745_11_8, &direction_player8_745_11_8, &direction_player8_745_11_8, &direction_player8_745_11_8, &direction_player8_745_11_8, &direction_player8_745_11_8, NULL, &direction_player8_745_11_16, &direction_player8_745_11_16, &direction_player8_745_11_16, &direction_player8_745_11_16, &direction_player8_745_11_16, &direction_player8_745_11_16, &direction_player8_745_11_16, NULL, &direction_player8_745_11_24, &direction_player8_745_11_24, &direction_player8_745_11_24, &direction_player8_745_11_24, &direction_player8_745_11_24, &direction_player8_745_11_24, &direction_player8_745_11_24, NULL, &direction_player8_745_11_0, &direction_player8_745_11_0, &direction_player8_745_11_0};
static Image* images_player8_745_12_0[2];
static Direction direction_player8_745_12_0 = {0, 10, 10, 0, -1, images_player8_745_12_0, 2};
static Image* images_player8_745_12_8[2];
static Direction direction_player8_745_12_8 = {8, 10, 10, 0, -1, images_player8_745_12_8, 2};
static Image* images_player8_745_12_16[2];
static Direction direction_player8_745_12_16 = {16, 10, 10, 0, -1, images_player8_745_12_16, 2};
static Image* images_player8_745_12_24[2];
static Direction direction_player8_745_12_24 = {24, 10, 10, 0, -1, images_player8_745_12_24, 2};
static Animation anim_player8_745_12 = {&direction_player8_745_12_0, &direction_player8_745_12_0, &direction_player8_745_12_0, &direction_player8_745_12_0, NULL, &direction_player8_745_12_8, &direction_player8_745_12_8, &direction_player8_745_12_8, &direction_player8_745_12_8, &direction_player8_745_12_8, &direction_player8_745_12_8, &direction_player8_745_12_8, NULL, &direction_player8_745_12_16, &direction_player8_745_12_16, &direction_player8_745_12_16, &direction_player8_745_12_16, &direction_player8_745_12_16, &direction_player8_745_12_16, &direction_player8_745_12_16, NULL, &direction_player8_745_12_24, &direction_player8_745_12_24, &direction_player8_745_12_24, &direction_player8_745_12_24, &direction_player8_745_12_24, &direction_player8_745_12_24, &direction_player8_745_12_24, NULL, &direction_player8_745_12_0, &direction_player8_745_12_0, &direction_player8_745_12_0};
static Image* images_player8_745_13_0[2];
static Direction direction_player8_745_13_0 = {0, 10, 10, 0, -1, images_player8_745_13_0, 2};
static Image* images_player8_745_13_8[2];
static Direction direction_player8_745_13_8 = {8, 10, 10, 0, -1, images_player8_745_13_8, 2};
static Image* images_player8_745_13_16[2];
static Direction direction_player8_745_13_16 = {16, 10, 10, 0, -1, images_player8_745_13_16, 2};
static Image* images_player8_745_13_24[2];
static Direction direction_player8_745_13_24 = {24, 10, 10, 0, -1, images_player8_745_13_24, 2};
static Animation anim_player8_745_13 = {&direction_player8_745_13_0, &direction_player8_745_13_0, &direction_player8_745_13_0, &direction_player8_745_13_0, NULL, &direction_player8_745_13_8, &direction_player8_745_13_8, &direction_player8_745_13_8, &direction_player8_745_13_8, &direction_player8_745_13_8, &direction_player8_745_13_8, &direction_player8_745_13_8, NULL, &direction_player8_745_13_16, &direction_player8_745_13_16, &direction_player8_745_13_16, &direction_player8_745_13_16, &direction_player8_745_13_16, &direction_player8_745_13_16, &direction_player8_745_13_16, NULL, &direction_player8_745_13_24, &direction_player8_745_13_24, &direction_player8_745_13_24, &direction_player8_745_13_24, &direction_player8_745_13_24, &direction_player8_745_13_24, &direction_player8_745_13_24, NULL, &direction_player8_745_13_0, &direction_player8_745_13_0, &direction_player8_745_13_0};
static Image* images_player8_745_14_0[2];
static Direction direction_player8_745_14_0 = {0, 10, 10, 0, -1, images_player8_745_14_0, 2};
static Image* images_player8_745_14_8[2];
static Direction direction_player8_745_14_8 = {8, 10, 10, 0, -1, images_player8_745_14_8, 2};
static Image* images_player8_745_14_16[2];
static Direction direction_player8_745_14_16 = {16, 10, 10, 0, -1, images_player8_745_14_16, 2};
static Image* images_player8_745_14_24[2];
static Direction direction_player8_745_14_24 = {24, 10, 10, 0, -1, images_player8_745_14_24, 2};
static Animation anim_player8_745_14 = {&direction_player8_745_14_0, &direction_player8_745_14_0, &direction_player8_745_14_0, &direction_player8_745_14_0, NULL, &direction_player8_745_14_8, &direction_player8_745_14_8, &direction_player8_745_14_8, &direction_player8_745_14_8, &direction_player8_745_14_8, &direction_player8_745_14_8, &direction_player8_745_14_8, NULL, &direction_player8_745_14_16, &direction_player8_745_14_16, &direction_player8_745_14_16, &direction_player8_745_14_16, &direction_player8_745_14_16, &direction_player8_745_14_16, &direction_player8_745_14_16, NULL, &direction_player8_745_14_24, &direction_player8_745_14_24, &direction_player8_745_14_24, &direction_player8_745_14_24, &direction_player8_745_14_24, &direction_player8_745_14_24, &direction_player8_745_14_24, NULL, &direction_player8_745_14_0, &direction_player8_745_14_0, &direction_player8_745_14_0};
static Image* images_player8_745_15_0[2];
static Direction direction_player8_745_15_0 = {0, 10, 10, 0, -1, images_player8_745_15_0, 2};
static Image* images_player8_745_15_8[2];
static Direction direction_player8_745_15_8 = {8, 10, 10, 0, -1, images_player8_745_15_8, 2};
static Image* images_player8_745_15_16[2];
static Direction direction_player8_745_15_16 = {16, 10, 10, 0, -1, images_player8_745_15_16, 2};
static Image* images_player8_745_15_24[2];
static Direction direction_player8_745_15_24 = {24, 10, 10, 0, -1, images_player8_745_15_24, 2};
static Animation anim_player8_745_15 = {&direction_player8_745_15_0, &direction_player8_745_15_0, &direction_player8_745_15_0, &direction_player8_745_15_0, NULL, &direction_player8_745_15_8, &direction_player8_745_15_8, &direction_player8_745_15_8, &direction_player8_745_15_8, &direction_player8_745_15_8, &direction_player8_745_15_8, &direction_player8_745_15_8, NULL, &direction_player8_745_15_16, &direction_player8_745_15_16, &direction_player8_745_15_16, &direction_player8_745_15_16, &direction_player8_745_15_16, &direction_player8_745_15_16, &direction_player8_745_15_16, NULL, &direction_player8_745_15_24, &direction_player8_745_15_24, &direction_player8_745_15_24, &direction_player8_745_15_24, &direction_player8_745_15_24, &direction_player8_745_15_24, &direction_player8_745_15_24, NULL, &direction_player8_745_15_0, &direction_player8_745_15_0, &direction_player8_745_15_0};
static Image* images_player8_745_16_0[2];
static Direction direction_player8_745_16_0 = {0, 10, 10, 0, -1, images_player8_745_16_0, 2};
static Image* images_player8_745_16_8[2];
static Direction direction_player8_745_16_8 = {8, 10, 10, 0, -1, images_player8_745_16_8, 2};
static Image* images_player8_745_16_16[2];
static Direction direction_player8_745_16_16 = {16, 10, 10, 0, -1, images_player8_745_16_16, 2};
static Image* images_player8_745_16_24[2];
static Direction direction_player8_745_16_24 = {24, 10, 10, 0, -1, images_player8_745_16_24, 2};
static Animation anim_player8_745_16 = {&direction_player8_745_16_0, &direction_player8_745_16_0, &direction_player8_745_16_0, &direction_player8_745_16_0, NULL, &direction_player8_745_16_8, &direction_player8_745_16_8, &direction_player8_745_16_8, &direction_player8_745_16_8, &direction_player8_745_16_8, &direction_player8_745_16_8, &direction_player8_745_16_8, NULL, &direction_player8_745_16_16, &direction_player8_745_16_16, &direction_player8_745_16_16, &direction_player8_745_16_16, &direction_player8_745_16_16, &direction_player8_745_16_16, &direction_player8_745_16_16, NULL, &direction_player8_745_16_24, &direction_player8_745_16_24, &direction_player8_745_16_24, &direction_player8_745_16_24, &direction_player8_745_16_24, &direction_player8_745_16_24, &direction_player8_745_16_24, NULL, &direction_player8_745_16_0, &direction_player8_745_16_0, &direction_player8_745_16_0};
static Image* images_player8_745_17_0[2];
static Direction direction_player8_745_17_0 = {0, 5, 5, 1, -1, images_player8_745_17_0, 2};
static Image* images_player8_745_17_8[2];
static Direction direction_player8_745_17_8 = {8, 5, 5, 1, -1, images_player8_745_17_8, 2};
static Image* images_player8_745_17_16[2];
static Direction direction_player8_745_17_16 = {16, 5, 5, 1, -1, images_player8_745_17_16, 2};
static Image* images_player8_745_17_24[2];
static Direction direction_player8_745_17_24 = {24, 5, 5, 1, -1, images_player8_745_17_24, 2};
static Animation anim_player8_745_17 = {&direction_player8_745_17_0, &direction_player8_745_17_0, &direction_player8_745_17_0, &direction_player8_745_17_0, NULL, &direction_player8_745_17_8, &direction_player8_745_17_8, &direction_player8_745_17_8, &direction_player8_745_17_8, &direction_player8_745_17_8, &direction_player8_745_17_8, &direction_player8_745_17_8, NULL, &direction_player8_745_17_16, &direction_player8_745_17_16, &direction_player8_745_17_16, &direction_player8_745_17_16, &direction_player8_745_17_16, &direction_player8_745_17_16, &direction_player8_745_17_16, NULL, &direction_player8_745_17_24, &direction_player8_745_17_24, &direction_player8_745_17_24, &direction_player8_745_17_24, &direction_player8_745_17_24, &direction_player8_745_17_24, &direction_player8_745_17_24, NULL, &direction_player8_745_17_0, &direction_player8_745_17_0, &direction_player8_745_17_0};
static Image* images_player8_745_18_24[8];
static Direction direction_player8_745_18_24 = {24, 10, 10, 0, -1, images_player8_745_18_24, 8};
static Animation anim_player8_745_18 = {&direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, NULL, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24, &direction_player8_745_18_24};
static Image* images_player8_745_19_24[4];
static Direction direction_player8_745_19_24 = {24, 10, 10, 0, -1, images_player8_745_19_24, 4};
static Animation anim_player8_745_19 = {&direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, NULL, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24, &direction_player8_745_19_24};
static Animation * anim_array_player8_745[20] = {&anim_player8_745_0, NULL, NULL, NULL, &anim_player8_745_4, NULL, &anim_player8_745_6, &anim_player8_745_7, &anim_player8_745_8, &anim_player8_745_9, &anim_player8_745_10, &anim_player8_745_11, &anim_player8_745_12, &anim_player8_745_13, &anim_player8_745_14, &anim_player8_745_15, &anim_player8_745_16, &anim_player8_745_17, &anim_player8_745_18, &anim_player8_745_19};
static Animations anim_player8_745 = {20, &anim_array_player8_745[0]};
static bool anim_player8_745_initialized;
class Player8_745 : public Active
{
public:
    Player8_745(int x, int y) : Active(x, y, Player8_745_type)
    {
        // qualifiers: 1, 3, 33
#ifndef NDEBUG
        name = std::string("Player_8", 8);
#endif
        this->animations = &anim_player8_745;
        if (!anim_player8_745_initialized) {
            anim_player8_745_initialized = true;
            images_player8_745_0_0[0] = get_internal_image(570);
            images_player8_745_0_0[1] = get_internal_image(566);
            images_player8_745_0_8[0] = get_internal_image(543);
            images_player8_745_0_8[1] = get_internal_image(544);
            images_player8_745_0_16[0] = get_internal_image(571);
            images_player8_745_0_16[1] = get_internal_image(572);
            images_player8_745_0_24[0] = get_internal_image(541);
            images_player8_745_0_24[1] = get_internal_image(540);
            images_player8_745_4_0[0] = get_internal_image(369);
            images_player8_745_4_0[1] = get_internal_image(373);
            images_player8_745_4_0[2] = get_internal_image(369);
            images_player8_745_4_0[3] = get_internal_image(373);
            images_player8_745_4_16[0] = get_internal_image(371);
            images_player8_745_4_16[1] = get_internal_image(763);
            images_player8_745_4_16[2] = get_internal_image(371);
            images_player8_745_4_16[3] = get_internal_image(763);
            images_player8_745_6_0[0] = get_internal_image(1058);
            images_player8_745_6_8[0] = get_internal_image(1059);
            images_player8_745_6_16[0] = get_internal_image(1060);
            images_player8_745_6_24[0] = get_internal_image(1062);
            images_player8_745_7_0[0] = get_internal_image(2139);
            images_player8_745_7_0[1] = get_internal_image(2159);
            images_player8_745_7_8[0] = get_internal_image(2163);
            images_player8_745_7_8[1] = get_internal_image(2164);
            images_player8_745_7_16[0] = get_internal_image(1426);
            images_player8_745_7_16[1] = get_internal_image(2158);
            images_player8_745_7_24[0] = get_internal_image(2160);
            images_player8_745_7_24[1] = get_internal_image(2162);
            images_player8_745_8_24[0] = get_internal_image(1189);
            images_player8_745_9_0[0] = get_internal_image(1497);
            images_player8_745_9_0[1] = get_internal_image(1499);
            images_player8_745_10_0[0] = get_internal_image(547);
            images_player8_745_10_0[1] = get_internal_image(542);
            images_player8_745_10_0[2] = get_internal_image(548);
            images_player8_745_10_0[3] = get_internal_image(2341);
            images_player8_745_10_0[4] = get_internal_image(548);
            images_player8_745_11_0[0] = get_internal_image(1012);
            images_player8_745_11_0[1] = get_internal_image(483);
            images_player8_745_11_8[0] = get_internal_image(584);
            images_player8_745_11_8[1] = get_internal_image(585);
            images_player8_745_11_16[0] = get_internal_image(1017);
            images_player8_745_11_16[1] = get_internal_image(1098);
            images_player8_745_11_24[0] = get_internal_image(320);
            images_player8_745_11_24[1] = get_internal_image(251);
            images_player8_745_12_0[0] = get_internal_image(57);
            images_player8_745_12_0[1] = get_internal_image(796);
            images_player8_745_12_8[0] = get_internal_image(1765);
            images_player8_745_12_8[1] = get_internal_image(1766);
            images_player8_745_12_16[0] = get_internal_image(1011);
            images_player8_745_12_16[1] = get_internal_image(39);
            images_player8_745_12_24[0] = get_internal_image(1780);
            images_player8_745_12_24[1] = get_internal_image(1781);
            images_player8_745_13_0[0] = get_internal_image(1813);
            images_player8_745_13_0[1] = get_internal_image(1811);
            images_player8_745_13_8[0] = get_internal_image(1815);
            images_player8_745_13_8[1] = get_internal_image(1817);
            images_player8_745_13_16[0] = get_internal_image(1812);
            images_player8_745_13_16[1] = get_internal_image(1814);
            images_player8_745_13_24[0] = get_internal_image(1818);
            images_player8_745_13_24[1] = get_internal_image(1816);
            images_player8_745_14_0[0] = get_internal_image(1669);
            images_player8_745_14_0[1] = get_internal_image(1670);
            images_player8_745_14_8[0] = get_internal_image(1676);
            images_player8_745_14_8[1] = get_internal_image(1677);
            images_player8_745_14_16[0] = get_internal_image(1671);
            images_player8_745_14_16[1] = get_internal_image(1673);
            images_player8_745_14_24[0] = get_internal_image(1674);
            images_player8_745_14_24[1] = get_internal_image(1675);
            images_player8_745_15_0[0] = get_internal_image(1736);
            images_player8_745_15_0[1] = get_internal_image(1737);
            images_player8_745_15_8[0] = get_internal_image(1742);
            images_player8_745_15_8[1] = get_internal_image(1744);
            images_player8_745_15_16[0] = get_internal_image(1738);
            images_player8_745_15_16[1] = get_internal_image(1740);
            images_player8_745_15_24[0] = get_internal_image(1741);
            images_player8_745_15_24[1] = get_internal_image(1739);
            images_player8_745_16_0[0] = get_internal_image(1895);
            images_player8_745_16_0[1] = get_internal_image(1898);
            images_player8_745_16_8[0] = get_internal_image(1926);
            images_player8_745_16_8[1] = get_internal_image(1927);
            images_player8_745_16_16[0] = get_internal_image(1900);
            images_player8_745_16_16[1] = get_internal_image(1901);
            images_player8_745_16_24[0] = get_internal_image(1605);
            images_player8_745_16_24[1] = get_internal_image(1606);
            images_player8_745_17_0[0] = get_internal_image(1999);
            images_player8_745_17_0[1] = get_internal_image(1998);
            images_player8_745_17_8[0] = get_internal_image(2005);
            images_player8_745_17_8[1] = get_internal_image(2008);
            images_player8_745_17_16[0] = get_internal_image(2000);
            images_player8_745_17_16[1] = get_internal_image(2001);
            images_player8_745_17_24[0] = get_internal_image(2002);
            images_player8_745_17_24[1] = get_internal_image(2004);
            images_player8_745_18_24[0] = get_internal_image(2078);
            images_player8_745_18_24[1] = get_internal_image(2077);
            images_player8_745_18_24[2] = get_internal_image(2081);
            images_player8_745_18_24[3] = get_internal_image(2079);
            images_player8_745_18_24[4] = get_internal_image(2080);
            images_player8_745_18_24[5] = get_internal_image(2084);
            images_player8_745_18_24[6] = get_internal_image(2081);
            images_player8_745_18_24[7] = get_internal_image(2083);
            images_player8_745_19_24[0] = get_internal_image(2144);
            images_player8_745_19_24[1] = get_internal_image(2143);
            images_player8_745_19_24[2] = get_internal_image(2146);
            images_player8_745_19_24[3] = get_internal_image(2143);
        }
        active_flags |= TRANSPARENT;
        animation = STOPPED;
        current_animation = animation;
        initialize_active(true);
        create_alterables();
        alterables->values.set(0, -1);
    }
};
FrameObject * create_player8_745(int x, int y)
{
    return new (Active::pool.create()) Player8_745(x, y);
}
