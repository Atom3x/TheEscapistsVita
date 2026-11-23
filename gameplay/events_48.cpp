#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_3864 processes event block(s) 1949_6. Actions/conditions:
//        1949_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_3864()
{
    // event 1949_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1949_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_gardening_43))) goto event_1949_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1949_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(containergardening_409_instances));
            if (obj1 == NULL) goto compare_1949_6_0_end;
            x1 = obj1->get_x() + 16;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1949_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_1949_6_end;
        }
        compare_1949_6_0_end: ;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1949_6_end: ;
}
// Function purpose: generated callback event_func_3865 processes event block(s) 1950_6. Actions/conditions:
//        1950_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_3865()
{
    // event 1950_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1950_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_library_25))) goto event_1950_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1950_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(containerbookchest_273_instances));
            if (obj1 == NULL) goto compare_1950_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1950_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (get_distance(x1, y1, x2, y2) <= 50) goto event_1950_6_end;
        }
        compare_1950_6_0_end: ;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1950_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1950_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1950_6_end: ;
}
// Function purpose: generated callback event_func_3866 processes event block(s) 1951_6. Actions/conditions:
//        1951_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_3866()
{
    // event 1951_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1951_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_library_25))) goto event_1951_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1951_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(containerbookchest_273_instances));
            if (obj1 == NULL) goto compare_1951_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1951_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_1951_6_end;
        }
        compare_1951_6_0_end: ;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1951_6_end: ;
}
// Function purpose: generated callback event_func_3867 processes event block(s) 1952_6. Actions/conditions:
//        1952_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_3867()
{
    // event 1952_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1952_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_1952_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1952_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(containermail_399_instances));
            if (obj1 == NULL) goto compare_1952_6_0_end;
            x1 = obj1->get_x() + 16;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1952_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (get_distance(x1, y1, x2, y2) <= 50) goto event_1952_6_end;
        }
        compare_1952_6_0_end: ;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1952_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1952_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1952_6_end: ;
}
// Function purpose: generated callback event_func_3868 processes event block(s) 1953_6. Actions/conditions:
//        1953_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_3868()
{
    // event 1953_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1953_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_1953_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1953_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(containermail_399_instances));
            if (obj1 == NULL) goto compare_1953_6_0_end;
            x1 = obj1->get_x() + 16;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1953_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_1953_6_end;
        }
        compare_1953_6_0_end: ;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1953_6_end: ;
}
// Function purpose: generated callback event_func_3869 processes event block(s) 1954_6. Actions/conditions:
//        1954_6: sets the selected object's visibility to true.
void Frames::event_func_3869()
{
    // event 1954_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1954_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_woodshop_21))) goto event_1954_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1954_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(780, str_zone_woodshop_1960)) == (0))) goto event_1954_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1954_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1954_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1954_6_end: ;
}
// Function purpose: generated callback event_func_3870 processes event block(s) 1955_6. Actions/conditions:
//        1955_6: sets the selected object's visibility to false.
void Frames::event_func_3870()
{
    // event 1955_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1955_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1955_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_woodshop_21))) goto event_1955_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(780, str_zone_woodshop_1960)) != (0))) goto event_1955_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1955_6_end: ;
}
// Function purpose: generated callback event_func_3871 processes event block(s) 1956_6. Actions/conditions:
//        1956_6: sets the selected object's visibility to true.
void Frames::event_func_3871()
{
    // event 1956_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1956_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1956_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_metalshop_35))) goto event_1956_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(782, str_zone_metalshop_1962)) == (0))) goto event_1956_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1956_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1956_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1956_6_end: ;
}
// Function purpose: generated callback event_func_3872 processes event block(s) 1957_6. Actions/conditions:
//        1957_6: sets the selected object's visibility to false.
void Frames::event_func_3872()
{
    // event 1957_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1957_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1957_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_metalshop_35))) goto event_1957_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(782, str_zone_metalshop_1962)) != (0))) goto event_1957_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1957_6_end: ;
}
// Function purpose: generated callback event_func_3873 processes event block(s) 1958_6. Actions/conditions:
//        1958_6: sets the selected object's visibility to true.
void Frames::event_func_3873()
{
    // event 1958_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1958_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1958_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_1958_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(748, str_zone_laundry_1919)) == (0))) goto event_1958_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1958_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1958_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1958_6_end: ;
}
// Function purpose: generated callback event_func_3874 processes event block(s) 1959_6. Actions/conditions:
//        1959_6: sets the selected object's visibility to false.
void Frames::event_func_3874()
{
    // event 1959_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1959_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1959_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_1959_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(748, str_zone_laundry_1919)) != (0))) goto event_1959_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1959_6_end: ;
}
// Function purpose: generated callback event_func_3875 processes event block(s) 1960_6. Actions/conditions:
//        1960_6: sets the selected object's visibility to true.
void Frames::event_func_3875()
{
    // event 1960_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1960_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1960_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_1960_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(777, str_zone_kitchen_1957)) == (0))) goto event_1960_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1960_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1960_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1960_6_end: ;
}
// Function purpose: generated callback event_func_3876 processes event block(s) 1961_6. Actions/conditions:
//        1961_6: sets the selected object's visibility to false.
void Frames::event_func_3876()
{
    // event 1961_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1961_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1961_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_1961_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(777, str_zone_kitchen_1957)) != (0))) goto event_1961_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1961_6_end: ;
}
// Function purpose: generated callback event_func_3877 processes event block(s) 1962_6. Actions/conditions:
//        1962_6: sets the selected object's visibility to true.
void Frames::event_func_3877()
{
    // event 1962_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1962_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_1962_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_1962_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(783, str_zone_tailorshop_1963)) == (0))) goto event_1962_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_1962_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1962_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_1962_6_end: ;
}
// Function purpose: generated callback event_func_3878 processes event block(s) 1963_6. Actions/conditions:
//        1963_6: sets the selected object's visibility to false.
void Frames::event_func_3878()
{
    // event 1963_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1963_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1963_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_1963_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(783, str_zone_tailorshop_1963)) != (0))) goto event_1963_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1963_6_end: ;
}
// Function purpose: generated callback event_func_3879 processes event block(s) 1964_6. Actions/conditions:
//        1964_6: positions the target object; positions the target object; sets Obj to Go to the prison showers; plus
//        7 more actions.
void Frames::event_func_3879()
{
    // event 1964_6 : positions the target object; positions the target object; sets Obj to Go to the prison showers; plus 7 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1964_6_end;
        if (!group_check_group_code_schedules_shower_1_0) goto event_1964_6_end;
        group_check_group_code_schedules_shower_1_0 = false;
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(846, str_zones_showerstopx_2026)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(848, str_zones_showersbottomx_2028)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(846, str_zones_showerstopx_2026))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(847, str_zones_showerstopy_2027)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(849, str_zones_showersbottomy_2029)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(847, str_zones_showerstopy_2027))/MathHelper()/2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(885, str_obj_2077, str_go_to_the_prison_showers_2125);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_showers_777);
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2231);
            ((Active*)*it)->alterables->flags.disable(2232);
        }
        waypointinmateshower2_309_instances.clear_selection();
        for (ObjectIterator it(waypointinmateshower2_309_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        {
            loop_shower_align_running = true;
            int times = int(inmateBase_instances.size());
            loop_shower_align_index = 0;
            while (loop_shower_align_index < times) {
                loop_shower_align_6();
                if (!loop_shower_align_running) break;
                loop_shower_align_index++;
            }
        }
    }
    event_1964_6_end: ;
}
// Function purpose: generated callback event_func_3880 processes event block(s) 1965_6. Actions/conditions:
//        1965_6: sets global value 12 from 6.
void Frames::event_func_3880()
{
    // event 1965_6 : sets global value 12 from 6
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1965_6_end;
        if (!group_check_group_code_schedules_shower_1_1) goto event_1965_6_end;
        group_check_group_code_schedules_shower_1_1 = false;
        if (!((global_values->get(12)) != (6))) goto event_1965_6_end;
        global_values->set(12, 6);
    }
    event_1965_6_end: ;
}
// Function purpose: generated callback event_func_3881 processes event block(s) 1966_6. Actions/conditions:
//        1966_6: sets MusicFade to Out.
void Frames::event_func_3881()
{
    // event 1966_6 : sets MusicFade to Out
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1966_6_end;
        if (!group_check_group_code_schedules_shower_1_2) goto event_1966_6_end;
        group_check_group_code_schedules_shower_1_2 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_out_1921);
    }
    event_1966_6_end: ;
}
// Function purpose: generated callback event_func_3882 processes event block(s) 1967_6. Actions/conditions:
//        1967_6: sets MusicFade to In; sets LastMusic to shower; plays a sound or music track; plus 1 more actions.
void Frames::event_func_3882()
{
    // event 1967_6 : sets MusicFade to In; sets LastMusic to shower; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1967_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1967_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1967_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1967_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1967_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1967_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1967_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_shower_2126);
        media.play(str_music_shower_ogg_2127, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1967_6_end: ;
}
// Function purpose: generated callback event_func_3883 processes event block(s) 1968_6. Actions/conditions:
//        1968_6: sets MusicFade to In; sets LastMusic to escteam_shower; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3883()
{
    // event 1968_6 : sets MusicFade to In; sets LastMusic to escteam_shower; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1968_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1968_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1968_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1968_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_escteam_shower_2128);
        media.play(str_music_escteam_shower_ogg_2129, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1968_6_end: ;
}
// Function purpose: generated callback event_func_3884 processes event block(s) 1969_6. Actions/conditions:
//        1969_6: sets MusicFade to In; sets LastMusic to DTAF_shower; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3884()
{
    // event 1969_6 : sets MusicFade to In; sets LastMusic to DTAF_shower; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1969_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1969_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1969_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1969_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_dtaf_shower_2130);
        media.play(str_music_dtaf_shower_ogg_2131, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1969_6_end: ;
}
// Function purpose: generated callback event_func_3885 processes event block(s) 1970_6. Actions/conditions:
//        1970_6: sets MusicFade to In; sets LastMusic to SS_shower; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3885()
{
    // event 1970_6 : sets MusicFade to In; sets LastMusic to SS_shower; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1970_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1970_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1970_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1970_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_shower_2132);
        media.play(str_music_ss_shower_ogg_2133, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1970_6_end: ;
}
// Function purpose: generated callback event_func_3886 processes event block(s) 1971_6. Actions/conditions:
//        1971_6: sets MusicFade to In; sets LastMusic to SS_shower; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3886()
{
    // event 1971_6 : sets MusicFade to In; sets LastMusic to SS_shower; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1971_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1971_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1971_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1971_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_shower_2132);
        media.play(str_music_ss_shower_ogg_2133, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1971_6_end: ;
}
// Function purpose: generated callback event_func_3887 processes event block(s) 1972_6. Actions/conditions:
//        1972_6: sets AttendLesson to 1; increments Score_P by 5.
void Frames::event_func_3887()
{
    // event 1972_6 : sets AttendLesson to 1; increments Score_P by 5
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1972_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(541, str_zone_showers_1442)) == (1))) goto event_1972_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1972_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(327, str_attendlesson_1115)) == (0))) goto event_1972_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1972_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(327, str_attendlesson_1115, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 5);
    }
    event_1972_6_end: ;
}
// Function purpose: generated callback event_func_3888 processes event block(s) 1973_6. Actions/conditions:
//        1973_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3888()
{
    // event 1973_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1973_6_end;
        every_1973_6 += manager.dt;
        if (every_1973_6 < 1.0) goto event_1973_6_end;
        every_1973_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1973_6_end;
        {
            loop_shower_align_running = true;
            int times = int(inmateBase_instances.size());
            loop_shower_align_index = 0;
            while (loop_shower_align_index < times) {
                loop_shower_align_6();
                if (!loop_shower_align_running) break;
                loop_shower_align_index++;
            }
        }
    }
    event_1973_6_end: ;
}
// Function purpose: generated callback event_func_3889 processes event block(s) 1980_6. Actions/conditions:
//        1980_6: activates the Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0;
//        plus 5 more actions.
void Frames::event_func_3889()
{
    // event 1980_6 : activates the Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1980_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1980_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1980_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1980_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1980_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1980_6_0; single_instance_1980_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1980_6_0 == NULL) goto event_1980_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1980_6_0), waypointinmateshower2_309_instances)) goto event_1980_6_end;
        if (!(((Active*)single_instance_1980_6_0)->get_movement()->is_stopped())) goto event_1980_6_end;
        if (!((((Active*)single_instance_1980_6_0)->alterables->values.get(22)) == (0))) goto event_1980_6_end;
        if (!((((Active*)single_instance_1980_6_0)->alterables->values.get(7)) > (0))) goto event_1980_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1980_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_shower_881);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(893, str_shower_banter_2134, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1980_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1980_6_end: ;
}
// Function purpose: generated callback event_func_3890 processes event block(s) 1981_6. Actions/conditions:
//        1981_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_3890()
{
    // event 1981_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1981_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1981_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1981_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_1981_6_end: ;
}
// Function purpose: generated callback event_func_3891 processes event block(s) 1982_6. Actions/conditions:
//        1982_6: activates the Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0;
//        plus 5 more actions.
void Frames::event_func_3891()
{
    // event 1982_6 : activates the Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1982_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1982_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1982_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_1982_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1982_6_0; single_instance_1982_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1982_6_0 == NULL) goto event_1982_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1982_6_0), waypointinmateshower2_309_instances)) goto event_1982_6_end;
        if (!(((Active*)single_instance_1982_6_0)->get_movement()->is_stopped())) goto event_1982_6_end;
        if (!((((Active*)single_instance_1982_6_0)->alterables->values.get(22)) == (0))) goto event_1982_6_end;
        if (!((((Active*)single_instance_1982_6_0)->alterables->values.get(7)) > (0))) goto event_1982_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1982_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_shower_881);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(893, str_shower_banter_2134, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1982_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1982_6_end: ;
}
// Function purpose: generated callback event_func_3892 processes event block(s) 1983_6. Actions/conditions:
//        1983_6: activates the CCL_Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol
//        to 0; plus 5 more actions.
void Frames::event_func_3892()
{
    // event 1983_6 : activates the CCL_Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1983_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1983_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1983_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1983_6_0; single_instance_1983_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1983_6_0 == NULL) goto event_1983_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1983_6_0), waypointinmateshower2_309_instances)) goto event_1983_6_end;
        if (!(((Active*)single_instance_1983_6_0)->get_movement()->is_stopped())) goto event_1983_6_end;
        if (!((((Active*)single_instance_1983_6_0)->alterables->values.get(22)) == (0))) goto event_1983_6_end;
        if (!((((Active*)single_instance_1983_6_0)->alterables->values.get(7)) > (0))) goto event_1983_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1983_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ccl_shower_2135);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(893, str_shower_banter_2134, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1983_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1983_6_end: ;
}
// Function purpose: generated callback event_func_3893 processes event block(s) 1984_6. Actions/conditions:
//        1984_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_3893()
{
    // event 1984_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1984_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1984_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1984_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_1984_6_end: ;
}
// Function purpose: generated callback event_func_3894 processes event block(s) 1985_6. Actions/conditions:
//        1985_6: activates the Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0;
//        plus 5 more actions.
void Frames::event_func_3894()
{
    // event 1985_6 : activates the Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1985_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1985_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1985_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_1985_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1985_6_0; single_instance_1985_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1985_6_0 == NULL) goto event_1985_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1985_6_0), waypointinmateshower2_309_instances)) goto event_1985_6_end;
        if (!(((Active*)single_instance_1985_6_0)->get_movement()->is_stopped())) goto event_1985_6_end;
        if (!((((Active*)single_instance_1985_6_0)->alterables->values.get(22)) == (0))) goto event_1985_6_end;
        if (!((((Active*)single_instance_1985_6_0)->alterables->values.get(7)) > (0))) goto event_1985_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1985_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_shower_881);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(893, str_shower_banter_2134, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1985_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1985_6_end: ;
}
// Function purpose: generated callback event_func_3895 processes event block(s) 1986_6. Actions/conditions:
//        1986_6: activates the SS_Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to
//        0; plus 5 more actions.
void Frames::event_func_3895()
{
    // event 1986_6 : activates the SS_Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1986_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1986_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1986_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1986_6_0; single_instance_1986_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1986_6_0 == NULL) goto event_1986_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1986_6_0), waypointinmateshower2_309_instances)) goto event_1986_6_end;
        if (!(((Active*)single_instance_1986_6_0)->get_movement()->is_stopped())) goto event_1986_6_end;
        if (!((((Active*)single_instance_1986_6_0)->alterables->values.get(22)) == (0))) goto event_1986_6_end;
        if (!((((Active*)single_instance_1986_6_0)->alterables->values.get(7)) > (0))) goto event_1986_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1986_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ss_shower_2136);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(893, str_shower_banter_2134, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1986_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1986_6_end: ;
}
// Function purpose: generated callback event_func_3896 processes event block(s) 1987_6. Actions/conditions:
//        1987_6: activates the ET_Shower_+((Active* event group; sets Shower_Banter to randrange_event(150)+50; sets
//        SpeakCol to 0; plus 5 more actions.
void Frames::event_func_3896()
{
    // event 1987_6 : activates the ET_Shower_+((Active* event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1987_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1987_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1987_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1987_6_0; single_instance_1987_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1987_6_0 == NULL) goto event_1987_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1987_6_0), waypointinmateshower2_309_instances)) goto event_1987_6_end;
        if (!(((Active*)single_instance_1987_6_0)->get_movement()->is_stopped())) goto event_1987_6_end;
        if (!((((Active*)single_instance_1987_6_0)->alterables->values.get(22)) == (0))) goto event_1987_6_end;
        if (!((((Active*)single_instance_1987_6_0)->alterables->values.get(7)) > (0))) goto event_1987_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1987_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_et_shower_2137+((Active*)single_instance_1987_6_0)->alterables->strings.get(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(893, str_shower_banter_2134, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1987_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1987_6_end: ;
}
// Function purpose: generated callback event_func_3897 processes event block(s) 1988_6. Actions/conditions:
//        1988_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_3897()
{
    // event 1988_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1988_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1988_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1988_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_1988_6_end: ;
}
// Function purpose: generated callback event_func_3898 processes event block(s) 1989_6. Actions/conditions:
//        1989_6: activates the Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0;
//        plus 5 more actions.
void Frames::event_func_3898()
{
    // event 1989_6 : activates the Shower event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1989_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1989_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1989_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_1989_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1989_6_0; single_instance_1989_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1989_6_0 == NULL) goto event_1989_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1989_6_0), waypointinmateshower2_309_instances)) goto event_1989_6_end;
        if (!(((Active*)single_instance_1989_6_0)->get_movement()->is_stopped())) goto event_1989_6_end;
        if (!((((Active*)single_instance_1989_6_0)->alterables->values.get(22)) == (0))) goto event_1989_6_end;
        if (!((((Active*)single_instance_1989_6_0)->alterables->values.get(7)) > (0))) goto event_1989_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1989_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_shower_881);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(893, str_shower_banter_2134, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1989_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1989_6_end: ;
}
// Function purpose: generated callback event_func_3899 processes event block(s) 1990_6. Actions/conditions:
//        1990_6: activates the DTAF_Showers event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol
//        to 0; plus 5 more actions.
void Frames::event_func_3899()
{
    // event 1990_6 : activates the DTAF_Showers event group; sets Shower_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1990_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) == (0))) goto event_1990_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1990_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) != (1))) goto event_1990_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_1990_6_0; single_instance_1990_6_0 = pick_random(inmateBase_instances);
        if (single_instance_1990_6_0 == NULL) goto event_1990_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        if (!check_overlap(((Active*)single_instance_1990_6_0), waypointinmateshower2_309_instances)) goto event_1990_6_end;
        if (!(((Active*)single_instance_1990_6_0)->get_movement()->is_stopped())) goto event_1990_6_end;
        if (!((((Active*)single_instance_1990_6_0)->alterables->values.get(22)) == (0))) goto event_1990_6_end;
        if (!((((Active*)single_instance_1990_6_0)->alterables->values.get(7)) > (0))) goto event_1990_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1990_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_dtaf_showers_2138);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(893, str_shower_banter_2134, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_1990_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_1990_6_end: ;
}
// Function purpose: generated callback event_func_3900 processes event block(s) 1991_6. Actions/conditions:
//        1991_6: changes a stored game value.
void Frames::event_func_3900()
{
    VITA_LEGACY_EVENT();
    // event 1991_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1991_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(893, str_shower_banter_2134)) > (0))) goto event_1991_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1991_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(893, str_shower_banter_2134, 1);
    }
    event_1991_6_end: ;
}
// Function purpose: generated callback event_func_3901 processes event block(s) 1992_6. Actions/conditions:
//        1992_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3901()
{
    // event 1992_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1992_6_end;
        every_1992_6 += manager.dt;
        if (every_1992_6 < 1.0) goto event_1992_6_end;
        every_1992_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1992_6_end;
        {
            loop_shower_align_guards_running = true;
            int times = int(3);
            loop_shower_align_guards_index = 0;
            while (loop_shower_align_guards_index < times) {
                loop_shower_align_guards_6();
                if (!loop_shower_align_guards_running) break;
                loop_shower_align_guards_index++;
            }
        }
    }
    event_1992_6_end: ;
}
// Function purpose: generated callback event_func_3902 processes event block(s) 1995_6. Actions/conditions:
//        1995_6: sets the selected object's visibility to false.
void Frames::event_func_3902()
{
    // event 1995_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1995_6_end;
        outfitinmate_249_instances.clear_selection();
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(846, str_zones_showerstopx_2026)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(847, str_zones_showerstopy_2027)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(848, str_zones_showersbottomx_2028)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(849, str_zones_showersbottomy_2029)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!outfitinmate_249_instances.has_selection()) goto event_1995_6_end;
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1995_6_end: ;
}
// Function purpose: generated callback event_func_3903 processes event block(s) 1996_6. Actions/conditions:
//        1996_6: sets the selected object's visibility to false.
void Frames::event_func_3903()
{
    // event 1996_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1996_6_end;
        outfitpow_376_instances.clear_selection();
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(846, str_zones_showerstopx_2026)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(847, str_zones_showerstopy_2027)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(848, str_zones_showersbottomx_2028)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(849, str_zones_showersbottomy_2029)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!outfitpow_376_instances.has_selection()) goto event_1996_6_end;
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1996_6_end: ;
}
// Function purpose: generated callback event_func_3904 processes event block(s) 1997_6. Actions/conditions:
//        1997_6: sets the selected object's visibility to false.
void Frames::event_func_3904()
{
    // event 1997_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1997_6_end;
        outfitinmateescteam_481_instances.clear_selection();
        for (ObjectIterator it(outfitinmateescteam_481_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(846, str_zones_showerstopx_2026)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(847, str_zones_showerstopy_2027)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(848, str_zones_showersbottomx_2028)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(849, str_zones_showersbottomy_2029)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!outfitinmateescteam_481_instances.has_selection()) goto event_1997_6_end;
        for (ObjectIterator it(outfitinmateescteam_481_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1997_6_end: ;
}
// Function purpose: generated callback event_func_3905 processes event block(s) 1998_6. Actions/conditions:
//        1998_6: sets the selected object's visibility to false.
void Frames::event_func_3905()
{
    // event 1998_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1998_6_end;
        outfitinmatebond_486_instances.clear_selection();
        for (ObjectIterator it(outfitinmatebond_486_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(846, str_zones_showerstopx_2026)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(847, str_zones_showerstopy_2027)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(848, str_zones_showersbottomx_2028)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(849, str_zones_showersbottomy_2029)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!outfitinmatebond_486_instances.has_selection()) goto event_1998_6_end;
        for (ObjectIterator it(outfitinmatebond_486_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1998_6_end: ;
}
// Function purpose: generated callback event_func_3906 processes event block(s) 1999_6. Actions/conditions:
//        1999_6: sets the selected object's visibility to false.
void Frames::event_func_3906()
{
    // event 1999_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1999_6_end;
        outfitinmatess_503_instances.clear_selection();
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(846, str_zones_showerstopx_2026)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(847, str_zones_showerstopy_2027)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(848, str_zones_showersbottomx_2028)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(849, str_zones_showersbottomy_2029)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!outfitinmatess_503_instances.has_selection()) goto event_1999_6_end;
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1999_6_end: ;
}
// Function purpose: generated callback event_func_3907 processes event block(s) 2000_6. Actions/conditions:
//        2000_6: sets the selected object's visibility to true.
void Frames::event_func_3907()
{
    // event 2000_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_2000_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(541, str_zone_showers_1442)) == (0))) goto event_2000_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_2000_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2000_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_2000_6_end: ;
}
// Function purpose: generated callback event_func_3908 processes event block(s) 2001_6. Actions/conditions:
//        2001_6: sets the selected object's visibility to false.
void Frames::event_func_3908()
{
    // event 2001_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_2001_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_2001_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(541, str_zone_showers_1442)) != (0))) goto event_2001_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_2001_6_end: ;
}
// Function purpose: generated callback event_func_3909 processes event block(s) 2002_6. Actions/conditions:
//        2002_6: saves the current object selection; saves the current object selection; sets the object's animation
//        to 0; plus 5 more actions.
void Frames::event_func_3909()
{
    // event 2002_6 : saves the current object selection; saves the current object selection; sets the object's animation to 0; plus 5 more actions
    bool or_result_2002_6 = false;
    bool or_temp_result_2002_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_2002_6_0_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto or_event_2002_6_0_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2002_6_0_end;
        if (group_code_1 && group_code_schedules_gym_1) goto or_event_2002_6_0_end;
        or_result_2002_6 = true;
        or_temp_result_2002_6_0 = true;
    }
    or_event_2002_6_0_end: ;
    qualifier_12.clear_saved_selection();
    inmateBase_instances.clear_saved_selection();
    if (or_temp_result_2002_6_0) {
        inmateBase_instances.save_selection();
        qualifier_12.save_selection();
    }
    // event 2002_6 : saves the current object selection; saves the current object selection; sets the object's animation to 0; plus 5 more actions
    bool or_temp_result_2002_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_2002_6_1_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(9))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto or_event_2002_6_1_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2002_6_1_end;
        if (group_code_1 && group_code_schedules_gym_1) goto or_event_2002_6_1_end;
        or_result_2002_6 = true;
        or_temp_result_2002_6_1 = true;
    }
    or_event_2002_6_1_end: ;
    if (or_temp_result_2002_6_1) {
        inmateBase_instances.save_selection();
        qualifier_12.save_selection();
    }
    // event 2002_6 : saves the current object selection; saves the current object selection; sets the object's animation to 0; plus 5 more actions
    bool or_temp_result_2002_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_2002_6_2_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(18))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto or_event_2002_6_2_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2002_6_2_end;
        if (group_code_1 && group_code_schedules_gym_1) goto or_event_2002_6_2_end;
        or_result_2002_6 = true;
        or_temp_result_2002_6_2 = true;
    }
    or_event_2002_6_2_end: ;
    if (or_temp_result_2002_6_2) {
        inmateBase_instances.save_selection();
        qualifier_12.save_selection();
    }
    // event 2002_6 : saves the current object selection; saves the current object selection; sets the object's animation to 0; plus 5 more actions
    bool or_temp_result_2002_6_3 = false;
    {
        if (!(group_code_1)) goto or_event_2002_6_3_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(19))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto or_event_2002_6_3_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2002_6_3_end;
        if (group_code_1 && group_code_schedules_gym_1) goto or_event_2002_6_3_end;
        or_result_2002_6 = true;
        or_temp_result_2002_6_3 = true;
        or_event_2002_6_3_end: ;
        if (or_temp_result_2002_6_3) {
            inmateBase_instances.save_selection();
            qualifier_12.save_selection();
        }
        if (!or_result_2002_6) goto or_final_or_event_2002_6_3_end;
        inmateBase_instances.empty_selection();
        qualifier_12.empty_selection();
        if (or_temp_result_2002_6_0 || or_temp_result_2002_6_1 || or_temp_result_2002_6_2 || or_temp_result_2002_6_3) {
            qualifier_12.restore_selection();
        }
        if (or_temp_result_2002_6_0 || or_temp_result_2002_6_1 || or_temp_result_2002_6_2 || or_temp_result_2002_6_3) {
            inmateBase_instances.restore_selection();
        }
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(32);
            ((Active*)*it)->alterables->flags.disable(33);
        }
    }
    or_final_or_event_2002_6_3_end: ;
}
// Function purpose: generated callback event_func_3910 processes event block(s) 2003_6. Actions/conditions:
//        2003_6: positions the target object; positions the target object; sets DestZone to Gym; plus 5 more actions.
void Frames::event_func_3910()
{
    // event 2003_6 : positions the target object; positions the target object; sets DestZone to Gym; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2003_6_end;
        if (!group_check_group_code_schedules_gym_1_0) goto event_2003_6_end;
        group_check_group_code_schedules_gym_1_0 = false;
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(842, str_zones_gymtopx_2022)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(844, str_zones_gymbottomx_2024)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(842, str_zones_gymtopx_2022))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(843, str_zones_gymtopy_2023)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(845, str_zones_gymbottomy_2025)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(843, str_zones_gymtopy_2023))/MathHelper()/2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_gym_775);
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(31);
            ((Active*)*it)->alterables->flags.disable(30);
        }
    }
    event_2003_6_end: ;
}
// Function purpose: generated callback event_func_3911 processes event block(s) 2004_6. Actions/conditions:
//        2004_6: sets MusicFade to Out.
void Frames::event_func_3911()
{
    // event 2004_6 : sets MusicFade to Out
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2004_6_end;
        if (!group_check_group_code_schedules_gym_1_1) goto event_2004_6_end;
        group_check_group_code_schedules_gym_1_1 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_out_1921);
    }
    event_2004_6_end: ;
}
// Function purpose: generated callback event_func_3912 processes event block(s) 2005_6. Actions/conditions:
//        2005_6: sets MusicFade to In; sets LastMusic to workout; plays a sound or music track; plus 1 more actions.
void Frames::event_func_3912()
{
    // event 2005_6 : sets MusicFade to In; sets LastMusic to workout; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2005_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_2005_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_2005_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_2005_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2005_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_2005_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_2005_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_workout_879);
        media.play(str_music_workout_ogg_2139, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_2005_6_end: ;
}
// Function purpose: generated callback event_func_3913 processes event block(s) 2006_6. Actions/conditions:
//        2006_6: sets MusicFade to In; sets LastMusic to escteam_workout; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3913()
{
    // event 2006_6 : sets MusicFade to In; sets LastMusic to escteam_workout; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2006_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_2006_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_2006_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_2006_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_escteam_workout_2140);
        media.play(str_music_escteam_workout_ogg_2141, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_2006_6_end: ;
}
// Function purpose: generated callback event_func_3914 processes event block(s) 2007_6. Actions/conditions:
//        2007_6: sets MusicFade to In; sets LastMusic to SS_workout; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3914()
{
    // event 2007_6 : sets MusicFade to In; sets LastMusic to SS_workout; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2007_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_2007_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2007_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_2007_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_workout_2142);
        media.play(str_music_ss_workout_ogg_2143, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_2007_6_end: ;
}
// Function purpose: generated callback event_func_3915 processes event block(s) 2008_6. Actions/conditions:
//        2008_6: sets MusicFade to In; sets LastMusic to SS_workout; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3915()
{
    // event 2008_6 : sets MusicFade to In; sets LastMusic to SS_workout; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2008_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_2008_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_2008_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_2008_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_workout_2142);
        media.play(str_music_ss_workout_ogg_2143, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_2008_6_end: ;
}
// Function purpose: generated callback event_func_3916 processes event block(s) 2009_6. Actions/conditions:
//        2009_6: sets MusicFade to In; sets LastMusic to DTAF_workout; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3916()
{
    // event 2009_6 : sets MusicFade to In; sets LastMusic to DTAF_workout; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2009_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_2009_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2009_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_2009_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_dtaf_workout_2144);
        media.play(str_music_dtaf_workout_ogg_2145, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_2009_6_end: ;
}
// Function purpose: generated callback event_func_3917 processes event block(s) 2010_6. Actions/conditions:
//        2010_6: sets AttendLesson to 1; increments Score_P by 5.
void Frames::event_func_3917()
{
    // event 2010_6 : sets AttendLesson to 1; increments Score_P by 5
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2010_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(779, str_zone_gym_1959)) == (1))) goto event_2010_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2010_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(327, str_attendlesson_1115)) == (0))) goto event_2010_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2010_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(327, str_attendlesson_1115, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 5);
    }
    event_2010_6_end: ;
}
// Function purpose: generated callback event_func_3918 processes event block(s) 2011_6. Actions/conditions:
//        2011_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3918()
{
    // event 2011_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2011_6_end;
        every_2011_6 += manager.dt;
        if (every_2011_6 < 1.0) goto event_2011_6_end;
        every_2011_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2011_6_end;
        {
            loop_using_gym_running = true;
            int times = int(inmateBase_instances.size());
            loop_using_gym_index = 0;
            while (loop_using_gym_index < times) {
                loop_using_gym_6();
                if (!loop_using_gym_running) break;
                loop_using_gym_index++;
            }
        }
    }
    event_2011_6_end: ;
}
// Function purpose: generated callback event_func_3919 processes event block(s) 2020_6. Actions/conditions:
//        2020_6: changes a stored game value.
void Frames::event_func_3919()
{
    VITA_LEGACY_EVENT();
    // event 2020_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2020_6_end;
        punchbag_436_instances.clear_selection();
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!punchbag_436_instances.has_selection()) goto event_2020_6_end;
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_2020_6_end: ;
}
// Function purpose: generated callback event_func_3920 processes event block(s) 2021_6. Actions/conditions:
//        2021_6: sets the selected object's numeric value to 25+randrange_event(50); sets npcID to
//        ((Active*)get_single(punchbag_436_instances, default_active_instance))->alterables->values.get(3).
void Frames::event_func_3920()
{
    // event 2021_6 : sets the selected object's numeric value to 25+randrange_event(50); sets npcID to ((Active*)get_single(punchbag_436_instances, default_active_instance))->alterables->values.get(3)
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2021_6_end;
        punchbag_436_instances.clear_selection();
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!punchbag_436_instances.has_selection()) goto event_2021_6_end;
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 25+randrange_event(50));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(539, str_npcid_1440, ((Active*)get_single(punchbag_436_instances, default_active_instance))->alterables->values.get(3));
        {
            loop_npc_punchbag_go_running = true;
            int times = int(1);
            loop_npc_punchbag_go_index = 0;
            while (loop_npc_punchbag_go_index < times) {
                loop_npc_punchbag_go_6();
                if (!loop_npc_punchbag_go_running) break;
                loop_npc_punchbag_go_index++;
            }
        }
    }
    event_2021_6_end: ;
}
// Function purpose: generated callback event_func_3921 processes event block(s) 2025_6. Actions/conditions:
//        2025_6: changes a stored game value.
void Frames::event_func_3921()
{
    VITA_LEGACY_EVENT();
    // event 2025_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2025_6_end;
        speedbag_439_instances.clear_selection();
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!speedbag_439_instances.has_selection()) goto event_2025_6_end;
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_2025_6_end: ;
}
// Function purpose: generated callback event_func_3922 processes event block(s) 2026_6. Actions/conditions:
//        2026_6: sets npcID to ((Active*)get_single(speedbag_439_instances,
//        default_active_instance))->alterables->values.get(3); sets the selected object's numeric value to
//        25+randrange_event(50).
void Frames::event_func_3922()
{
    // event 2026_6 : sets npcID to ((Active*)get_single(speedbag_439_instances, default_active_instance))->alterables->values.get(3); sets the selected object's numeric value to 25+randrange_event(50)
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2026_6_end;
        speedbag_439_instances.clear_selection();
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!speedbag_439_instances.has_selection()) goto event_2026_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(539, str_npcid_1440, ((Active*)get_single(speedbag_439_instances, default_active_instance))->alterables->values.get(3));
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 25+randrange_event(50));
        }
        {
            loop_npc_speedbag_go_running = true;
            int times = int(1);
            loop_npc_speedbag_go_index = 0;
            while (loop_npc_speedbag_go_index < times) {
                loop_npc_speedbag_go_6();
                if (!loop_npc_speedbag_go_running) break;
                loop_npc_speedbag_go_index++;
            }
        }
    }
    event_2026_6_end: ;
}
// Function purpose: generated callback event_func_3923 processes event block(s) 2037_6. Actions/conditions:
//        2037_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_3923()
{
    // event 2037_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2037_6_end;
        every_2037_6 += manager.dt;
        if (every_2037_6 < 1.0) goto event_2037_6_end;
        every_2037_6 -= 1.0;
        {
            loop_gym_align_guards_running = true;
            int times = int(3);
            loop_gym_align_guards_index = 0;
            while (loop_gym_align_guards_index < times) {
                loop_gym_align_guards_6();
                if (!loop_gym_align_guards_running) break;
                loop_gym_align_guards_index++;
            }
        }
    }
    event_2037_6_end: ;
}
// Function purpose: generated callback event_func_3924 processes event block(s) 2039_6. Actions/conditions:
//        2039_6: activates the Gym event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus
//        5 more actions.
void Frames::event_func_3924()
{
    // event 2039_6 : activates the Gym event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2039_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(894, str_gym_banter_2146)) == (0))) goto event_2039_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_2039_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_2039_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_2039_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_2039_6_0; single_instance_2039_6_0 = pick_random(inmateBase_instances);
        if (single_instance_2039_6_0 == NULL) goto event_2039_6_end;
        qualifier_9.clear_selection();
        if (!check_overlap(((Active*)single_instance_2039_6_0), qualifier_9)) goto event_2039_6_end;
        if (!(((Active*)single_instance_2039_6_0)->get_movement()->is_stopped())) goto event_2039_6_end;
        if (!((((Active*)single_instance_2039_6_0)->alterables->values.get(7)) > (0))) goto event_2039_6_end;
        if (!(((Active*)single_instance_2039_6_0)->alterables->flags.is_on(31))) goto event_2039_6_end;
        if (!((((Active*)single_instance_2039_6_0)->alterables->values.get(22)) == (0))) goto event_2039_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2039_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_gym_775);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(894, str_gym_banter_2146, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_2039_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_2039_6_end: ;
}
// Function purpose: generated callback event_func_3925 processes event block(s) 2040_6. Actions/conditions:
//        2040_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_3925()
{
    // event 2040_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2040_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(894, str_gym_banter_2146)) == (0))) goto event_2040_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_2040_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_2040_6_end: ;
}
// Function purpose: generated callback event_func_3926 processes event block(s) 2041_6. Actions/conditions:
//        2041_6: activates the Gym event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus
//        5 more actions.
void Frames::event_func_3926()
{
    // event 2041_6 : activates the Gym event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2041_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(894, str_gym_banter_2146)) == (0))) goto event_2041_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_2041_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_2041_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_2041_6_0; single_instance_2041_6_0 = pick_random(inmateBase_instances);
        if (single_instance_2041_6_0 == NULL) goto event_2041_6_end;
        qualifier_9.clear_selection();
        if (!check_overlap(((Active*)single_instance_2041_6_0), qualifier_9)) goto event_2041_6_end;
        if (!(((Active*)single_instance_2041_6_0)->get_movement()->is_stopped())) goto event_2041_6_end;
        if (!((((Active*)single_instance_2041_6_0)->alterables->values.get(7)) > (0))) goto event_2041_6_end;
        if (!(((Active*)single_instance_2041_6_0)->alterables->flags.is_on(31))) goto event_2041_6_end;
        if (!((((Active*)single_instance_2041_6_0)->alterables->values.get(22)) == (0))) goto event_2041_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2041_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_gym_775);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(894, str_gym_banter_2146, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_2041_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_2041_6_end: ;
}
// Function purpose: generated callback event_func_3927 processes event block(s) 2042_6. Actions/conditions:
//        2042_6: activates the CCL_Gym event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0;
//        plus 5 more actions.
void Frames::event_func_3927()
{
    // event 2042_6 : activates the CCL_Gym event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2042_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(894, str_gym_banter_2146)) == (0))) goto event_2042_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_2042_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_2042_6_0; single_instance_2042_6_0 = pick_random(inmateBase_instances);
        if (single_instance_2042_6_0 == NULL) goto event_2042_6_end;
        qualifier_9.clear_selection();
        if (!check_overlap(((Active*)single_instance_2042_6_0), qualifier_9)) goto event_2042_6_end;
        if (!(((Active*)single_instance_2042_6_0)->get_movement()->is_stopped())) goto event_2042_6_end;
        if (!((((Active*)single_instance_2042_6_0)->alterables->values.get(7)) > (0))) goto event_2042_6_end;
        if (!((((Active*)single_instance_2042_6_0)->alterables->values.get(22)) == (0))) goto event_2042_6_end;
        if (!(((Active*)single_instance_2042_6_0)->alterables->flags.is_on(31))) goto event_2042_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2042_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ccl_gym_2147);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(894, str_gym_banter_2146, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_2042_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_2042_6_end: ;
}
// Function purpose: generated callback event_func_3928 processes event block(s) 2043_6. Actions/conditions:
//        2043_6: activates the ET_Gym_+((Active* event group; sets Gym_Banter to randrange_event(150)+50; sets
//        SpeakCol to 0; plus 5 more actions.
void Frames::event_func_3928()
{
    // event 2043_6 : activates the ET_Gym_+((Active* event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2043_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(894, str_gym_banter_2146)) == (0))) goto event_2043_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_2043_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_2043_6_0; single_instance_2043_6_0 = pick_random(inmateBase_instances);
        if (single_instance_2043_6_0 == NULL) goto event_2043_6_end;
        qualifier_9.clear_selection();
        if (!check_overlap(((Active*)single_instance_2043_6_0), qualifier_9)) goto event_2043_6_end;
        if (!(((Active*)single_instance_2043_6_0)->get_movement()->is_stopped())) goto event_2043_6_end;
        if (!((((Active*)single_instance_2043_6_0)->alterables->values.get(7)) > (0))) goto event_2043_6_end;
        if (!(((Active*)single_instance_2043_6_0)->alterables->flags.is_on(31))) goto event_2043_6_end;
        if (!((((Active*)single_instance_2043_6_0)->alterables->values.get(22)) == (0))) goto event_2043_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2043_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_et_gym_2148+((Active*)single_instance_2043_6_0)->alterables->strings.get(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(894, str_gym_banter_2146, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_2043_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_2043_6_end: ;
}
// Function purpose: generated callback event_func_3929 processes event block(s) 2044_6. Actions/conditions:
//        2044_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_3929()
{
    // event 2044_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2044_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(894, str_gym_banter_2146)) == (0))) goto event_2044_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2044_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_2044_6_end: ;
}
// Function purpose: generated callback event_func_3930 processes event block(s) 2045_6. Actions/conditions:
//        2045_6: activates the Gym event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus
//        5 more actions.
void Frames::event_func_3930()
{
    // event 2045_6 : activates the Gym event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2045_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(894, str_gym_banter_2146)) == (0))) goto event_2045_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2045_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_2045_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_2045_6_0; single_instance_2045_6_0 = pick_random(inmateBase_instances);
        if (single_instance_2045_6_0 == NULL) goto event_2045_6_end;
        qualifier_9.clear_selection();
        if (!check_overlap(((Active*)single_instance_2045_6_0), qualifier_9)) goto event_2045_6_end;
        if (!(((Active*)single_instance_2045_6_0)->get_movement()->is_stopped())) goto event_2045_6_end;
        if (!((((Active*)single_instance_2045_6_0)->alterables->values.get(7)) > (0))) goto event_2045_6_end;
        if (!(((Active*)single_instance_2045_6_0)->alterables->flags.is_on(31))) goto event_2045_6_end;
        if (!((((Active*)single_instance_2045_6_0)->alterables->values.get(22)) == (0))) goto event_2045_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2045_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_gym_775);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(894, str_gym_banter_2146, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_2045_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_2045_6_end: ;
}
// Function purpose: generated callback event_func_3931 processes event block(s) 2046_6. Actions/conditions:
//        2046_6: activates the DTAF_Gym event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0;
//        plus 5 more actions.
void Frames::event_func_3931()
{
    // event 2046_6 : activates the DTAF_Gym event group; sets Gym_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2046_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(894, str_gym_banter_2146)) == (0))) goto event_2046_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2046_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) != (1))) goto event_2046_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_2046_6_0; single_instance_2046_6_0 = pick_random(inmateBase_instances);
        if (single_instance_2046_6_0 == NULL) goto event_2046_6_end;
        qualifier_9.clear_selection();
        if (!check_overlap(((Active*)single_instance_2046_6_0), qualifier_9)) goto event_2046_6_end;
        if (!(((Active*)single_instance_2046_6_0)->get_movement()->is_stopped())) goto event_2046_6_end;
        if (!((((Active*)single_instance_2046_6_0)->alterables->values.get(7)) > (0))) goto event_2046_6_end;
        if (!(((Active*)single_instance_2046_6_0)->alterables->flags.is_on(31))) goto event_2046_6_end;
        if (!((((Active*)single_instance_2046_6_0)->alterables->values.get(22)) == (0))) goto event_2046_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2046_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_dtaf_gym_2149);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(894, str_gym_banter_2146, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_2046_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_2046_6_end: ;
}
// Function purpose: generated callback event_func_3932 processes event block(s) 2047_6. Actions/conditions:
//        2047_6: changes a stored game value.
void Frames::event_func_3932()
{
    VITA_LEGACY_EVENT();
    // event 2047_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2047_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(894, str_gym_banter_2146)) > (0))) goto event_2047_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2047_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(894, str_gym_banter_2146, 1);
    }
    event_2047_6_end: ;
}
// Function purpose: generated callback event_func_3933 processes event block(s) 2048_6. Actions/conditions:
//        2048_6: sets the selected object's visibility to true.
void Frames::event_func_3933()
{
    // event 2048_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2048_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(779, str_zone_gym_1959)) == (0))) goto event_2048_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_2048_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2048_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_2048_6_end: ;
}
// Function purpose: generated callback event_func_3934 processes event block(s) 2049_6. Actions/conditions:
//        2049_6: sets the selected object's visibility to false.
void Frames::event_func_3934()
{
    // event 2049_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2049_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_2049_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(779, str_zone_gym_1959)) != (0))) goto event_2049_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_2049_6_end: ;
}
// Function purpose: generated callback event_func_3935 processes event block(s) 2050_6. Actions/conditions:
//        2050_6: sets LockdownCountdown to 0; removes the selected object.
void Frames::event_func_3935()
{
    // event 2050_6 : sets LockdownCountdown to 0; removes the selected object
    {
        if (!(group_code_1)) goto event_2050_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(895, str_lockdowncountdown_2150)) > (0))) goto event_2050_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_2050_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(895, str_lockdowncountdown_2150, 0);
        noticetext_363_instances.clear_selection();
        for (ObjectIterator it(noticetext_363_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2050_6_end: ;
}
// Function purpose: generated callback event_func_3936 processes event block(s) 2051_6. Actions/conditions:
//        2051_6: sets MusicFade to Out; increments Score_N by 20.
void Frames::event_func_3936()
{
    // event 2051_6 : sets MusicFade to Out; increments Score_N by 20
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2051_6_end;
        if (!group_check_group_code_schedules_lockdown_new_1_0) goto event_2051_6_end;
        group_check_group_code_schedules_lockdown_new_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_out_1921);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(363, str_score_n_1157, 20);
    }
    event_2051_6_end: ;
}
// Function purpose: generated callback event_func_3937 processes event block(s) 2052_6. Actions/conditions:
//        2052_6: sets MusicFade to In; sets LastMusic to lockdown; plays a sound or music track; plus 1 more actions.
void Frames::event_func_3937()
{
    // event 2052_6 : sets MusicFade to In; sets LastMusic to lockdown; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2052_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_2052_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_2052_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_2052_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_2052_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2052_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_2052_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_lockdown_2151);
        media.play(str_music_lockdown_ogg_2152, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_2052_6_end: ;
}
// Function purpose: generated callback event_func_3938 processes event block(s) 2053_6. Actions/conditions:
//        2053_6: sets MusicFade to In; sets LastMusic to escteam_lockdown; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3938()
{
    // event 2053_6 : sets MusicFade to In; sets LastMusic to escteam_lockdown; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2053_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_2053_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_2053_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_2053_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_escteam_lockdown_2153);
        media.play(str_music_escteam_lockdown_ogg_2154, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_2053_6_end: ;
}
// Function purpose: generated callback event_func_3939 processes event block(s) 2054_6. Actions/conditions:
//        2054_6: sets MusicFade to In; sets LastMusic to DTAF_lockdown; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3939()
{
    // event 2054_6 : sets MusicFade to In; sets LastMusic to DTAF_lockdown; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2054_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_2054_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2054_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_2054_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_dtaf_lockdown_2155);
        media.play(str_music_dtaf_lockdown_ogg_2156, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_2054_6_end: ;
}
// Function purpose: generated callback event_func_3940 processes event block(s) 2055_6. Actions/conditions:
//        2055_6: sets MusicFade to In; sets LastMusic to SS_lockdown; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3940()
{
    // event 2055_6 : sets MusicFade to In; sets LastMusic to SS_lockdown; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2055_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_2055_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2055_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_2055_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_lockdown_2157);
        media.play(str_music_ss_lockdown_ogg_2158, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_2055_6_end: ;
}
// Function purpose: generated callback event_func_3941 processes event block(s) 2056_6. Actions/conditions:
//        2056_6: sets MusicFade to In; sets LastMusic to SS_lockdown; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3941()
{
    // event 2056_6 : sets MusicFade to In; sets LastMusic to SS_lockdown; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2056_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_2056_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_2056_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_2056_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_lockdown_2157);
        media.play(str_music_ss_lockdown_ogg_2158, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_2056_6_end: ;
}
// Function purpose: generated callback event_func_3942 processes event block(s) 2057_6. Actions/conditions:
//        2057_6: sets Trigger_Lock_OuterDoors to 0; sets Doors_Cell_Locked to 0; sets the selected object's direction
//        to 16; plus 6 more actions.
void Frames::event_func_3942()
{
    // event 2057_6 : sets Trigger_Lock_OuterDoors to 0; sets Doors_Cell_Locked to 0; sets the selected object's direction to 16; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2057_6_end;
        if (!group_check_group_code_schedules_lockdown_new_1_1) goto event_2057_6_end;
        group_check_group_code_schedules_lockdown_new_1_1 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 0);
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(261, str_playerfound_917, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 99);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(895, str_lockdowncountdown_2150, 99);
    }
    event_2057_6_end: ;
}
// Function purpose: generated callback event_func_3943 processes event block(s) 2058_6. Actions/conditions:
//        2058_6: sets PlayerCellCheck to 1; sets Lockdown_Banter to randrange_event(150)+200; sets DestZone to Sleep;
//        plus 11 more actions.
void Frames::event_func_3943()
{
    // event 2058_6 : sets PlayerCellCheck to 1; sets Lockdown_Banter to randrange_event(150)+200; sets DestZone to Sleep; plus 11 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2058_6_end;
        if (!group_check_group_code_schedules_lockdown_new_1_2) goto event_2058_6_end;
        group_check_group_code_schedules_lockdown_new_1_2 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(896, str_playercellcheck_2159, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(897, str_lockdown_banter_2160, randrange_event(150)+200);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_sleep_1105);
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2007);
        }
        ((Active*)get_instance(chaseob_258_instances))->set_layer(2-1);
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(759, str_zones_yourcelltopx_1937)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(760, str_zones_yourcellbottomx_1938)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(759, str_zones_yourcelltopx_1937))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(761, str_zones_yourcelltopy_1939)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(762, str_zones_yourcellbottomy_1940)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(761, str_zones_yourcelltopy_1939))/MathHelper()/2));
        noticetext_363_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_noticetext_363(0, 0), 5);
            noticetext_363_instances.add_back();
        }
        for (ObjectIterator it(noticetext_363_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(empty_string);
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+50);
            ((Text*)*it)->set_y(VITA_VIEW_TOP(((Text*)*it), frame_top())+5);
        }
    }
    event_2058_6_end: ;
}
// Function purpose: generated callback event_func_3944 processes event block(s) 2059_6. Actions/conditions:
//        2059_6: changes a stored game value.
void Frames::event_func_3944()
{
    // event 2059_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2059_6_end;
        every_2059_6 += manager.dt;
        if (every_2059_6 < 1.0) goto event_2059_6_end;
        every_2059_6 -= 1.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(895, str_lockdowncountdown_2150)) > (1))) goto event_2059_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2059_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(895, str_lockdowncountdown_2150, 1);
    }
    event_2059_6_end: ;
}
// Function purpose: generated callback event_func_3945 processes event block(s) 2060_6. Actions/conditions:
//        2060_6: sets str to Hovers entry 72; sets a game or interface text string; sets the selected object's text.
void Frames::event_func_3945()
{
    // event 2060_6 : sets str to Hovers entry 72; sets a game or interface text string; sets the selected object's text
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2060_6_end;
        every_2060_6 += manager.dt;
        if (every_2060_6 < 1.0) goto event_2060_6_end;
        every_2060_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2060_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(218, str_str_823, ((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_72_2161));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(218, str_str_823, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(218, str_str_823), str_time_1304, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(895, str_lockdowncountdown_2150))));
        noticetext_363_instances.clear_selection();
        for (ObjectIterator it(noticetext_363_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(218, str_str_823)));
        }
    }
    event_2060_6_end: ;
}
// Function purpose: generated callback event_func_3946 processes event block(s) 2061_6. Actions/conditions:
//        2061_6: removes the selected object; sets LockdownCountdown to 0; sets EndString to Caught entry 16.
void Frames::event_func_3946()
{
    // event 2061_6 : removes the selected object; sets LockdownCountdown to 0; sets EndString to Caught entry 16
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2061_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(895, str_lockdowncountdown_2150)) == (1))) goto event_2061_6_end;
        noticetext_363_instances.clear_selection();
        for (ObjectIterator it(noticetext_363_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(895, str_lockdowncountdown_2150, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_16_219));
        if (!group_code_caught_solitary_1) {
            group_code_caught_solitary_1 = true;
            group_check_group_code_caught_solitary_1_0 = true;
            group_check_group_code_caught_solitary_1_1 = true;
            group_check_group_code_caught_solitary_1_2 = true;
            group_check_group_code_caught_solitary_1_3 = true;
            group_check_group_code_caught_solitary_1_4 = true;
            group_check_group_code_caught_solitary_1_5 = true;
            group_check_group_code_caught_solitary_1_6 = true;
            group_check_group_code_caught_solitary_1_7 = true;
        }
    }
    event_2061_6_end: ;
}
// Function purpose: generated callback event_func_3947 processes event block(s) 2062_6. Actions/conditions:
//        2062_6: saves the current object selection; disables flag 2007 (NPC is recorded inside its cell) on the
//        selected object.
void Frames::event_func_3947()
{
    // event 2062_6 : saves the current object selection; disables flag 2007 (NPC is recorded inside its cell) on the selected object
    bool or_result_2062_6 = false;
    bool or_temp_result_2062_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto or_event_2062_6_0_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2007))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2062_6_0_end;
        or_result_2062_6 = true;
        or_temp_result_2062_6_0 = true;
    }
    or_event_2062_6_0_end: ;
    inmateBase_instances.clear_saved_selection();
    if (or_temp_result_2062_6_0) {
        inmateBase_instances.save_selection();
    }
    // event 2062_6 : saves the current object selection; disables flag 2007 (NPC is recorded inside its cell) on the selected object
    bool or_temp_result_2062_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto or_event_2062_6_1_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2007))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2062_6_1_end;
        or_result_2062_6 = true;
        or_temp_result_2062_6_1 = true;
    }
    or_event_2062_6_1_end: ;
    if (or_temp_result_2062_6_1) {
        inmateBase_instances.save_selection();
    }
    // event 2062_6 : saves the current object selection; disables flag 2007 (NPC is recorded inside its cell) on the selected object
    bool or_temp_result_2062_6_2 = false;
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto or_event_2062_6_2_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2007))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_2062_6_2_end;
        or_result_2062_6 = true;
        or_temp_result_2062_6_2 = true;
        or_event_2062_6_2_end: ;
        if (or_temp_result_2062_6_2) {
            inmateBase_instances.save_selection();
        }
        if (!or_result_2062_6) goto or_final_or_event_2062_6_2_end;
        inmateBase_instances.empty_selection();
        if (or_temp_result_2062_6_0 || or_temp_result_2062_6_1 || or_temp_result_2062_6_2) {
            inmateBase_instances.restore_selection();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2007);
        }
    }
    or_final_or_event_2062_6_2_end: ;
}
// Function purpose: generated callback event_func_3948 processes event block(s) 2063_6. Actions/conditions:
//        2063_6: sets Count_InCells to 0; disables flag 2006 (NPC cell-accounting state) on the selected object.
void Frames::event_func_3948()
{
    // event 2063_6 : sets Count_InCells to 0; disables flag 2006 (NPC cell-accounting state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2063_6_end;
        every_2063_6 += manager.dt;
        if (every_2063_6 < 1.0) goto event_2063_6_end;
        every_2063_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2063_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(282, str_count_incells_939, 0);
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2006);
        }
        {
            loop_lockdown_moveem_running = true;
            int times = int(inmateBase_instances.size());
            loop_lockdown_moveem_index = 0;
            while (loop_lockdown_moveem_index < times) {
                loop_lockdown_moveem_6();
                if (!loop_lockdown_moveem_running) break;
                loop_lockdown_moveem_index++;
            }
        }
    }
    event_2063_6_end: ;
}
// Function purpose: generated callback event_func_3949 processes event block(s) 2068_6. Actions/conditions:
//        2068_6: sets Count_InCells to 0; disables flag 2006 (NPC cell-accounting state) on the selected object.
void Frames::event_func_3949()
{
    // event 2068_6 : sets Count_InCells to 0; disables flag 2006 (NPC cell-accounting state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2068_6_end;
        every_2068_6 += manager.dt;
        if (every_2068_6 < 1.0) goto event_2068_6_end;
        every_2068_6 -= 1.0;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(282, str_count_incells_939, 0);
        {
            loop_incellcheck_running = true;
            int times = int(inmateBase_instances.size());
            loop_incellcheck_index = 0;
            while (loop_incellcheck_index < times) {
                loop_incellcheck_6();
                if (!loop_incellcheck_running) break;
                loop_incellcheck_index++;
            }
        }
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2006);
        }
    }
    event_2068_6_end: ;
}
// Function purpose: generated callback event_func_3950 processes event block(s) 2075_6. Actions/conditions:
//        2075_6: sets the selected object's direction to 0; sets Doors_Cell_Locked to 1; sets Doors_Outside_Locked to
//        1; plus 1 more actions.
void Frames::event_func_3950()
{
    // event 2075_6 : sets the selected object's direction to 0; sets Doors_Cell_Locked to 1; sets Doors_Outside_Locked to 1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2075_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(226, str_guardsdowncount_836)) <= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(169, str_guardcount_747)*0.2))) goto event_2075_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(282, str_count_incells_939)) == (inmateBase_instances.size()))) goto event_2075_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(157, str_doors_cell_locked_730)) == (0))) goto event_2075_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_8)) goto event_2075_6_end;
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
        media.play_id(SOUND_RUMBLE_15, 1-1);
    }
    event_2075_6_end: ;
}
// Function purpose: generated callback event_func_3951 processes event block(s) 2076_6. Actions/conditions:
//        2076_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3951()
{
    // event 2076_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2076_6_end;
        every_2076_6 += manager.dt;
        if (every_2076_6 < 1.0) goto event_2076_6_end;
        every_2076_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2076_6_end;
        {
            loop_lockdown_guards_running = true;
            int times = int(guardBase_instances.size());
            loop_lockdown_guards_index = 0;
            while (loop_lockdown_guards_index < times) {
                loop_lockdown_guards_6();
                if (!loop_lockdown_guards_running) break;
                loop_lockdown_guards_index++;
            }
        }
    }
    event_2076_6_end: ;
}
// Function purpose: generated callback event_func_3952 processes event block(s) 2079_6. Actions/conditions:
//        2079_6: activates the Lockdown event group; sets Lockdown_Banter to randrange_event(150)+50; sets SpeakCol
//        to 0; plus 5 more actions.
void Frames::event_func_3952()
{
    // event 2079_6 : activates the Lockdown event group; sets Lockdown_Banter to randrange_event(150)+50; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2079_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(897, str_lockdown_banter_2160)) == (0))) goto event_2079_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_2079_6_0; single_instance_2079_6_0 = pick_random(inmateBase_instances);
        if (single_instance_2079_6_0 == NULL) goto event_2079_6_end;
        if (!(((Active*)single_instance_2079_6_0)->alterables->flags.is_on(2007))) goto event_2079_6_end;
        if (!((((Active*)single_instance_2079_6_0)->alterables->values.get(22)) == (0))) goto event_2079_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2079_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_lockdown_1467);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(897, str_lockdown_banter_2160, randrange_event(150)+50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)single_instance_2079_6_0)->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_2079_6_end: ;
}
// Function purpose: generated callback event_func_3953 processes event block(s) 2080_6. Actions/conditions:
//        2080_6: changes a stored game value.
void Frames::event_func_3953()
{
    VITA_LEGACY_EVENT();
    // event 2080_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2080_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(897, str_lockdown_banter_2160)) > (0))) goto event_2080_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2080_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(897, str_lockdown_banter_2160, 1);
    }
    event_2080_6_end: ;
}
// Function purpose: generated callback event_func_3954 processes event block(s) 2081_6. Actions/conditions:
//        2081_6: sets the selected object's visibility to true.
void Frames::event_func_3954()
{
    // event 2081_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2081_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) == (0))) goto event_2081_6_end;
        if (((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE) goto event_2081_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2081_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_2081_6_end: ;
}
// Function purpose: generated callback event_func_3955 processes event block(s) 2082_6. Actions/conditions:
//        2082_6: sets the selected object's visibility to false.
void Frames::event_func_3955()
{
    // event 2082_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2082_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_2082_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) != (0))) goto event_2082_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_2082_6_end: ;
}
// Function purpose: generated callback event_func_3956 processes event block(s) 2083_6. Actions/conditions:
//        2083_6: enables flag 2005 (player detected or present for roll call) on the selected object; sets the
//        selected object's direction to 0; plays a sound or music track.
void Frames::event_func_3956()
{
    // event 2083_6 : enables flag 2005 (player detected or present for roll call) on the selected object; sets the selected object's direction to 0; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2083_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(226, str_guardsdowncount_836)) <= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(169, str_guardcount_747)*0.2))) goto event_2083_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(261, str_playerfound_917)) == (1))) goto event_2083_6_end;
        {
            loop_lockdown_end_doors_running = true;
            int times = int(1);
            loop_lockdown_end_doors_index = 0;
            while (loop_lockdown_end_doors_index < times) {
                loop_lockdown_end_doors_6();
                if (!loop_lockdown_end_doors_running) break;
                loop_lockdown_end_doors_index++;
            }
        }
        ((Active*)get_instance(playerBase_instances))->alterables->flags.enable(2005);
        doormaster_387_instances.clear_selection();
        for (ObjectIterator it(doormaster_387_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        if (!group_code_schedules_hour_tickover_1) {
            group_code_schedules_hour_tickover_1 = true;
            group_check_group_code_schedules_hour_tickover_1_11 = true;
            group_check_group_code_schedules_hour_tickover_1_10 = true;
            group_check_group_code_schedules_hour_tickover_1_13 = true;
            group_check_group_code_schedules_hour_tickover_1_12 = true;
            group_check_group_code_schedules_hour_tickover_1_1 = true;
            group_check_group_code_schedules_hour_tickover_1_0 = true;
            group_check_group_code_schedules_hour_tickover_1_3 = true;
            group_check_group_code_schedules_hour_tickover_1_2 = true;
            group_check_group_code_schedules_hour_tickover_1_5 = true;
            group_check_group_code_schedules_hour_tickover_1_4 = true;
            group_check_group_code_schedules_hour_tickover_1_7 = true;
            group_check_group_code_schedules_hour_tickover_1_6 = true;
            group_check_group_code_schedules_hour_tickover_1_9 = true;
            group_check_group_code_schedules_hour_tickover_1_8 = true;
        }
            group_code_schedules_lockdown_new_1 = false;
    
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_2083_6_end: ;
}
// Function purpose: generated callback event_func_3957 processes event block(s) 2086_6. Actions/conditions:
//        2086_6: sets MoveAlong_immune to 0.
void Frames::event_func_3957()
{
    // event 2086_6 : sets MoveAlong_immune to 0
    {
        if (!(group_code_1)) goto event_2086_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(898, str_movealong_immune_2162)) == (1))) goto event_2086_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(898, str_movealong_immune_2162, 0);
    }
    event_2086_6_end: ;
}
// Function purpose: generated callback event_func_3958 processes event block(s) 2087_6. Actions/conditions:
//        2087_6: sets MoveAlong_immune to 1.
void Frames::event_func_3958()
{
    // event 2087_6 : sets MoveAlong_immune to 1
    {
        if (!(group_code_1)) goto event_2087_6_end;
        playerBase_instances.clear_selection();
        hiding_379_instances.clear_selection();
        if (!check_overlap(playerBase_instances, hiding_379_instances)) goto event_2087_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2087_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2087_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(898, str_movealong_immune_2162, 1);
    }
    event_2087_6_end: ;
}
// Function purpose: generated callback event_func_3959 processes event block(s) 2088_6. Actions/conditions:
//        2088_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions.
void Frames::event_func_3959()
{
    // event 2088_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions
    {
        if (!(group_code_1)) goto event_2088_6_end;
        guardscan_219_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, playerBase_instances)) goto event_2088_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_2088_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_2088_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_2088_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_zone_2163+((AssociateArray*)get_instance(gameVariables_instances))->get_string(234, str_destzone_848))) == (0))) goto event_2088_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(328, str_gettolessontimer_1116)) == (0))) goto event_2088_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2088_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(898, str_movealong_immune_2162)) == (0))) goto event_2088_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2088_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2088_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        {
            loop_check_los_running = true;
            int times = int(1);
            loop_check_los_index = 0;
            while (loop_check_los_index < times) {
                loop_check_los_6();
                if (!loop_check_los_running) break;
                loop_check_los_index++;
            }
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guards_move_2164);
        {
            loop_policing_movealong_running = true;
            int times = int(1);
            loop_policing_movealong_index = 0;
            while (loop_policing_movealong_index < times) {
                loop_policing_movealong_6();
                if (!loop_policing_movealong_running) break;
                loop_policing_movealong_index++;
            }
        }
    }
    event_2088_6_end: ;
}
// Function purpose: generated callback event_func_3960 processes event block(s) 2089_6. Actions/conditions:
//        2089_6: sets MoveAlong_immune to 1.
void Frames::event_func_3960()
{
    // event 2089_6 : sets MoveAlong_immune to 1
    bool or_result_2089_6 = false;
    bool or_temp_result_2089_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_2089_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(17, str_job_478)) == (str_janitor_24))) goto or_event_2089_6_0_end;
        or_result_2089_6 = true;
        or_temp_result_2089_6_0 = true;
    }
    or_event_2089_6_0_end: ;
    // event 2089_6 : sets MoveAlong_immune to 1
    bool or_temp_result_2089_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_2089_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(17, str_job_478)) == (str_gardening_43))) goto or_event_2089_6_1_end;
        or_result_2089_6 = true;
        or_temp_result_2089_6_1 = true;
    }
    or_event_2089_6_1_end: ;
    // event 2089_6 : sets MoveAlong_immune to 1
    bool or_temp_result_2089_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_2089_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(17, str_job_478)) == (str_mailman_556))) goto or_event_2089_6_2_end;
        or_result_2089_6 = true;
        or_temp_result_2089_6_2 = true;
    }
    or_event_2089_6_2_end: ;
    // event 2089_6 : sets MoveAlong_immune to 1
    bool or_temp_result_2089_6_3 = false;
    {
        if (!(group_code_1)) goto or_event_2089_6_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(17, str_job_478)) == (str_library_25))) goto or_event_2089_6_3_end;
        or_result_2089_6 = true;
        or_temp_result_2089_6_3 = true;
        or_event_2089_6_3_end: ;
        if (!or_result_2089_6) goto or_final_or_event_2089_6_3_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(898, str_movealong_immune_2162, 1);
        }
    }
    or_final_or_event_2089_6_3_end: ;
}
// Function purpose: generated callback event_func_3961 processes event block(s) 2090_6. Actions/conditions:
//        2090_6: sets Zone_Kitchen to 1.
void Frames::event_func_3961()
{
    // event 2090_6 : sets Zone_Kitchen to 1
    {
        if (!(group_code_1)) goto event_2090_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2090_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_2090_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(747, str_zone_canteen_1918)) == (1))) goto event_2090_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(777, str_zone_kitchen_1957, 1);
    }
    event_2090_6_end: ;
}
// Function purpose: generated callback event_func_3962 processes event block(s) 2091_6. Actions/conditions:
//        2091_6: sets DestZone to Tailorshop.
void Frames::event_func_3962()
{
    // event 2091_6 : sets DestZone to Tailorshop
    {
        if (!(group_code_1)) goto event_2091_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2091_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_2091_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_2091_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_tailorshop_44);
    }
    event_2091_6_end: ;
}
// Function purpose: generated callback event_func_3963 processes event block(s) 2092_6. Actions/conditions:
//        2092_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions.
void Frames::event_func_3963()
{
    // event 2092_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions
    {
        if (!(group_code_1)) goto event_2092_6_end;
        playerBase_instances.clear_selection();
        guardscan_219_instances.clear_selection();
        if (!check_overlap(playerBase_instances, guardscan_219_instances)) goto event_2092_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_2092_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_2092_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_2092_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2092_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_2092_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(898, str_movealong_immune_2162)) == (0))) goto event_2092_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(18, str_jobquota_480)) < (55))) goto event_2092_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_zone_2163+((AssociateArray*)get_instance(gameVariables_instances))->get_string(234, str_destzone_848))) == (0))) goto event_2092_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(328, str_gettolessontimer_1116)) == (0))) goto event_2092_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2092_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2092_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2092_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        {
            loop_check_los_running = true;
            int times = int(1);
            loop_check_los_index = 0;
            while (loop_check_los_index < times) {
                loop_check_los_6();
                if (!loop_check_los_running) break;
                loop_check_los_index++;
            }
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guards_move_work_2165);
        {
            loop_policing_movealong_running = true;
            int times = int(1);
            loop_policing_movealong_index = 0;
            while (loop_policing_movealong_index < times) {
                loop_policing_movealong_6();
                if (!loop_policing_movealong_running) break;
                loop_policing_movealong_index++;
            }
        }
    }
    event_2092_6_end: ;
}
