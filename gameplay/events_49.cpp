#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_3964 processes event block(s) 2096_6. Actions/conditions:
//        2096_6: moves the selected object behind other objects.
void Frames::event_func_3964()
{
    // event 2096_6 : moves the selected object behind other objects
    {
        if (!(group_code_1)) goto event_2096_6_end;
        qualifier_5.clear_selection();
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(qualifier_5, canteenchair_312_instances)) goto event_2096_6_end;
        {
            QualifierIterator other_it(qualifier_5);
            for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_2096_6_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_2096_6_0_end: ;
    }
    event_2096_6_end: ;
}
// Function purpose: generated callback event_func_3965 processes event block(s) 2097_6. Actions/conditions:
//        2097_6: checks scene is active; skips if misc 1 0 event group is active; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_3965()
{
    // event 2097_6 : checks scene is active; skips if misc 1 0 event group is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2097_6_end;
        if (!group_check_group_code_misc_1_0) goto event_2097_6_end;
        group_check_group_code_misc_1_0 = false;
        dighole_207_instances.clear_selection();
        spread_value(dighole_207_instances, 0, 1);
    }
    event_2097_6_end: ;
}
// Function purpose: generated callback event_func_3966 processes event block(s) 2098_6. Actions/conditions:
//        2098_6: adds a dighole 207 instance; adds a tmp 448 instance.
void Frames::event_func_3966()
{
    // event 2098_6 : adds a dighole 207 instance; adds a tmp 448 instance
    {
        if (!(group_code_1)) goto event_2098_6_end;
        if (!((dighole_207_instances.size()) < (1))) goto event_2098_6_end;
        dighole_207_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dighole_207(-20, -20), 1);
            dighole_207_instances.add_back();
        }
        tmp_448_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_tmp_448(-10, -10), 1);
            tmp_448_instances.add_back();
        }
    }
    event_2098_6_end: ;
}
// Function purpose: generated callback event_func_3967 processes event block(s) 2099_6. Actions/conditions:
//        2099_6: adds a dighole 207 instance; adds a tmp 448 instance.
void Frames::event_func_3967()
{
    // event 2099_6 : adds a dighole 207 instance; adds a tmp 448 instance
    {
        if (!(group_code_1)) goto event_2099_6_end;
        dighole_207_instances.clear_selection();
        if (dighole_207_instances.size() != 0) goto event_2099_6_end;
        if (not_always_2099_6 > loop_count) {
            not_always_2099_6 = loop_count + 2;
            goto event_2099_6_end;
        }
        not_always_2099_6 = loop_count + 2;
        // select single: false false true
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dighole_207(-20, -20), 1);
            dighole_207_instances.add_back();
        }
        tmp_448_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_tmp_448(-10, -10), 1);
            tmp_448_instances.add_back();
        }
    }
    event_2099_6_end: ;
}
// Function purpose: generated callback event_func_3968 processes event block(s) 2100_6. Actions/conditions:
//        2100_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_3968()
{
    // event 2100_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2100_6_end;
        every_2100_6 += manager.dt;
        if (every_2100_6 < 60.0) goto event_2100_6_end;
        every_2100_6 -= 60.0;
        dighole_207_instances.clear_selection();
        spread_value(dighole_207_instances, 0, 1);
    }
    event_2100_6_end: ;
}
// Function purpose: generated callback event_func_3969 processes event block(s) 2101_6. Actions/conditions:
//        2101_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_3969()
{
    // event 2101_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2101_6_end;
        every_2101_6 += manager.dt;
        if (every_2101_6 < 60.0) goto event_2101_6_end;
        every_2101_6 -= 60.0;
        {
            loop_sort_holes_running = true;
            int times = int(dighole_207_instances.size());
            loop_sort_holes_index = 0;
            while (loop_sort_holes_index < times) {
                loop_sort_holes_6();
                if (!loop_sort_holes_running) break;
                loop_sort_holes_index++;
            }
        }
    }
    event_2101_6_end: ;
}
// Function purpose: generated callback event_func_3970 processes event block(s) 2102_6. Actions/conditions:
//        2102_6: sets the selected object's visibility to false; removes the selected object.
void Frames::event_func_3970()
{
    // event 2102_6 : sets the selected object's visibility to false; removes the selected object
    {
        if (!(group_code_1)) goto event_2102_6_end;
        fx_185_instances.clear_selection();
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->animation_finished == 5)) { it.deselect(); continue; }
        }
        if (!fx_185_instances.has_selection()) goto event_2102_6_end;
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->destroy();
        }
    }
    event_2102_6_end: ;
}
// Function purpose: generated callback event_func_3971 processes event block(s) 2103_6. Actions/conditions:
//        2103_6: changes a stored game value.
void Frames::event_func_3971()
{
    VITA_LEGACY_EVENT();
    // event 2103_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_2103_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(328, str_gettolessontimer_1116)) > (0))) goto event_2103_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2103_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(328, str_gettolessontimer_1116, 1);
    }
    event_2103_6_end: ;
}
// Function purpose: generated callback event_func_3972 processes event block(s) 2104_6. Actions/conditions:
//        2104_6: sets NoticeText to 150; adds a noticetext 363 instance; sets the selected object's horizontal
//        position to frame_left()+50; plus 5 more actions.
void Frames::event_func_3972()
{
    // event 2104_6 : sets NoticeText to 150; adds a noticetext 363 instance; sets the selected object's horizontal position to frame_left()+50; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2104_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (21))) goto event_2104_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) >= (30))) goto event_2104_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_camp_504))) goto event_2104_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(20, str_zone_safe1_482)) == (0))) goto event_2104_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(21, str_zone_safe2_483)) == (0))) goto event_2104_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(22, str_zone_safe3_484)) == (0))) goto event_2104_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(729, str_noticetext_1901)) == (0))) goto event_2104_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_2104_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2104_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_2104_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2104_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(729, str_noticetext_1901, 150);
        noticetext_363_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_noticetext_363(50, 5), 5);
            noticetext_363_instances.add_back();
        }
        for (ObjectIterator it(noticetext_363_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+50);
            ((Text*)*it)->set_y(VITA_VIEW_TOP(((Text*)*it), frame_top())+5);
            ((Text*)*it)->set_string(str_warning_inmates_must_be_inside_by_22_00_2166);
        }
    }
    event_2104_6_end: ;
}
// Function purpose: generated callback event_func_3973 processes event block(s) 2105_6. Actions/conditions:
//        2105_6: changes a stored game value.
void Frames::event_func_3973()
{
    VITA_LEGACY_EVENT();
    // event 2105_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_2105_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(729, str_noticetext_1901)) > (0))) goto event_2105_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2105_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(729, str_noticetext_1901, 1);
    }
    event_2105_6_end: ;
}
// Function purpose: generated callback event_func_3974 processes event block(s) 2106_6. Actions/conditions:
//        2106_6: removes the selected object.
void Frames::event_func_3974()
{
    VITA_LEGACY_EVENT();
    // event 2106_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_2106_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(729, str_noticetext_1901)) == (1))) goto event_2106_6_end;
        noticetext_363_instances.clear_selection();
        for (ObjectIterator it(noticetext_363_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2106_6_end: ;
}
// Function purpose: generated callback event_func_3975 processes event block(s) 2107_6. Actions/conditions:
//        2107_6: disables keyboard focus for the control.
void Frames::event_func_3975()
{
    // event 2107_6 : disables keyboard focus for the control
    {
        if (!(group_code_1)) goto event_2107_6_end;
        if (!(((ListObject*)get_instance(listguards_218_instances))->get_focus())) goto event_2107_6_end;
        ((ListObject*)get_instance(listguards_218_instances))->disable_focus();
    }
    event_2107_6_end: ;
}
// Function purpose: generated callback event_func_3976 processes event block(s) 2108_6. Actions/conditions:
//        2108_6: disables keyboard focus for the control.
void Frames::event_func_3976()
{
    // event 2108_6 : disables keyboard focus for the control
    {
        if (!(group_code_1)) goto event_2108_6_end;
        if (!(((ListObject*)get_instance(listinmates_217_instances))->get_focus())) goto event_2108_6_end;
        ((ListObject*)get_instance(listinmates_217_instances))->disable_focus();
    }
    event_2108_6_end: ;
}
// Function purpose: generated callback event_func_3977 processes event block(s) 2109_6. Actions/conditions:
//        2109_6: disables keyboard focus for the control.
void Frames::event_func_3977()
{
    // event 2109_6 : disables keyboard focus for the control
    {
        if (!(group_code_1)) goto event_2109_6_end;
        if (!(((ListObject*)get_instance(missions_298_instances))->get_focus())) goto event_2109_6_end;
        ((ListObject*)get_instance(missions_298_instances))->disable_focus();
    }
    event_2109_6_end: ;
}
// Function purpose: generated callback event_func_3978 processes event block(s) 2110_6. Actions/conditions:
//        2110_6: checks scene is active; the event-specific game state condition is met; game state sanpancho; skips
//        if the event-specific game state condition is met; this h.
void Frames::event_func_3978()
{
    // event 2110_6 : checks scene is active; the event-specific game state condition is met; game state sanpancho; skips if the event-specific game state condition is met; this h
    {
        if (!(group_code_1)) goto event_2110_6_end;
        if (!(frame_time >= 3.0)) goto event_2110_6_end;
        if (!((global_values->get(18)) == (0))) goto event_2110_6_end;
        if (!((global_strings->get(0)) == (str_sanpancho_147))) goto event_2110_6_end;
        if (!((patroljeep_416_instances.size()) == (0))) goto event_2110_6_end;
        if (once_condition_2110_6) goto event_2110_6_end;
        once_condition_2110_6 = true;
        {
            loop_make_jeep_running = true;
            int times = int(1);
            loop_make_jeep_index = 0;
            while (loop_make_jeep_index < times) {
                loop_make_jeep_6();
                if (!loop_make_jeep_running) break;
                loop_make_jeep_index++;
            }
        }
    }
    event_2110_6_end: ;
}
// Function purpose: generated callback event_func_3979 processes event block(s) 2111_6. Actions/conditions:
//        2111_6: checks scene is active; the event-specific game state condition is met; game state jungle; skips if
//        the event-specific game state condition is met; this hand.
void Frames::event_func_3979()
{
    // event 2111_6 : checks scene is active; the event-specific game state condition is met; game state jungle; skips if the event-specific game state condition is met; this hand
    {
        if (!(group_code_1)) goto event_2111_6_end;
        if (!(frame_time >= 3.0)) goto event_2111_6_end;
        if (!((global_values->get(18)) == (0))) goto event_2111_6_end;
        if (!((global_strings->get(0)) == (str_jungle_146))) goto event_2111_6_end;
        if (!((patroljeep_416_instances.size()) == (0))) goto event_2111_6_end;
        if (once_condition_2111_6) goto event_2111_6_end;
        once_condition_2111_6 = true;
        {
            loop_make_jeep_running = true;
            int times = int(1);
            loop_make_jeep_index = 0;
            while (loop_make_jeep_index < times) {
                loop_make_jeep_6();
                if (!loop_make_jeep_running) break;
                loop_make_jeep_index++;
            }
        }
    }
    event_2111_6_end: ;
}
// Function purpose: generated callback event_func_3980 processes event block(s) 2112_6. Actions/conditions:
//        2112_6: sets make_jeep to 0.
void Frames::event_func_3980()
{
    // event 2112_6 : sets make_jeep to 0
    {
        if (!(group_code_1)) goto event_2112_6_end;
        if (!(frame_time >= 3.0)) goto event_2112_6_end;
        if (!((global_values->get(18)) > (0))) goto event_2112_6_end;
        if (!((patroljeep_416_instances.size()) == (0))) goto event_2112_6_end;
        if (once_condition_2112_6) goto event_2112_6_end;
        once_condition_2112_6 = true;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(562, str_make_jeep_1470, 0);
        {
            loop_check_jeep_running = true;
            int times = int(1);
            loop_check_jeep_index = 0;
            while (loop_check_jeep_index < times) {
                loop_check_jeep_6();
                if (!loop_check_jeep_running) break;
                loop_check_jeep_index++;
            }
        }
    }
    event_2112_6_end: ;
}
// Function purpose: generated callback event_func_3981 processes event block(s) 2119_6. Actions/conditions:
//        2119_6: sets the selected object's direction to 16; sets FlashJournal to 0.
void Frames::event_func_3981()
{
    // event 2119_6 : sets the selected object's direction to 16; sets FlashJournal to 0
    {
        if (!(group_code_1)) goto event_2119_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(613, str_flashjournal_1595)) == (1))) goto event_2119_6_end;
        ((Active*)get_instance(interfaceButtons_instances))->set_direction(16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(613, str_flashjournal_1595, 0);
    }
    event_2119_6_end: ;
}
// Function purpose: generated callback event_func_3982 processes event block(s) 2120_6. Actions/conditions:
//        2120_6: sets the object's animation to 0; sets the selected object's direction to 0.
void Frames::event_func_3982()
{
    // event 2120_6 : sets the object's animation to 0; sets the selected object's direction to 0
    {
        if (!(group_code_1)) goto event_2120_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->animation_finished == 0)) goto event_2120_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->test_directions(65536))) goto event_2120_6_end;
        ((Active*)get_instance(interfaceButtons_instances))->force_animation(0);
        ((Active*)get_instance(interfaceButtons_instances))->set_direction(0);
    }
    event_2120_6_end: ;
}
// Function purpose: generated callback event_func_3983 processes event block(s) 2121_6. Actions/conditions:
//        2121_6: sets the object's animation to 2; sets the selected object's direction to 0.
void Frames::event_func_3983()
{
    // event 2121_6 : sets the object's animation to 2; sets the selected object's direction to 0
    {
        if (!(group_code_1)) goto event_2121_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->animation_finished == 2)) goto event_2121_6_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->test_directions(65536))) goto event_2121_6_end;
        ((Active*)get_instance(interfaceButtons_instances))->force_animation(2);
        ((Active*)get_instance(interfaceButtons_instances))->set_direction(0);
    }
    event_2121_6_end: ;
}
// Function purpose: generated callback event_func_3984 processes event block(s) 2122_6. Actions/conditions:
//        2122_6: adds a hudbacklay 446 instance; sets the selected object's horizontal position to frame_left(); sets
//        the selected object's vertical position to frame_top(); plus 1 more actions.
void Frames::event_func_3984()
{
    // event 2122_6 : adds a hudbacklay 446 instance; sets the selected object's horizontal position to frame_left(); sets the selected object's vertical position to frame_top(); plus 1 more actions
    {
        if (!(group_code_1)) goto event_2122_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2122_6_end;
        if (!((hudBackdrop_instances.size()) == (0))) goto event_2122_6_end;
        hudBackdrop_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudBackdrop(0, 0), 5);
            hudBackdrop_instances.add_back();
        }
        for (ObjectIterator it(hudBackdrop_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left()));
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top()));
        }
        ((Active*)get_single(hudBackdrop_instances, default_active_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
    }
    event_2122_6_end: ;
}
// Function purpose: generated callback event_func_3985 processes event block(s) 2123_6. Actions/conditions:
//        2123_6: removes the selected object.
void Frames::event_func_3985()
{
    // event 2123_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_2123_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2123_6_end;
        if (!((hudBackdrop_instances.size()) > (0))) goto event_2123_6_end;
        hudBackdrop_instances.clear_selection();
        for (ObjectIterator it(hudBackdrop_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2123_6_end: ;
}
// Function purpose: generated callback event_func_3986 processes event block(s) 2124_6. Actions/conditions:
//        2124_6: removes the selected object.
void Frames::event_func_3986()
{
    // event 2124_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_2124_6_end;
        if (!((((Active*)get_instance(icons_433_instances, default_active_instance))->blend_color.get_alpha_coefficient()) >= (255))) goto event_2124_6_end;
        icons_433_instances.clear_selection();
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2124_6_end: ;
}
// Function purpose: generated callback event_func_3987 processes event block(s) 2125_6. Actions/conditions:
//        2125_6: changes the selected object transparency; changes a stored game value.
void Frames::event_func_3987()
{
    VITA_LEGACY_EVENT();
    // event 2125_6 : changes the selected object transparency; changes a stored game value
    {
        if (!(group_code_1)) goto event_2125_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2125_6_end;
        icons_433_instances.clear_selection();
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)*it)->blend_color.get_alpha_coefficient()+3);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_2125_6_end: ;
}
// Function purpose: generated callback event_func_3988 processes event block(s) 2132_6. Actions/conditions:
//        2132_6: stops the object's movement.
void Frames::event_func_3988()
{
    // event 2132_6 : stops the object's movement
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2132_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2132_6_end;
        patroljeep_416_instances.clear_selection();
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_2132_6_end: ;
}
// Function purpose: generated callback event_func_3989 processes event block(s) 2133_6. Actions/conditions:
//        2133_6: disables flag 1 (object-specific active or interaction state) on the selected object.
void Frames::event_func_3989()
{
    // event 2133_6 : disables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2133_6_end;
        patroljeep_416_instances.clear_selection();
        if (!check_not_overlap(patroljeep_416_instances, patroljeepwpright_415_instances)) goto event_2133_6_end;
        patroljeepwpright_415_instances.clear_selection();
        for (ObjectIterator it(patroljeepwpright_415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_2133_6_end: ;
}
// Function purpose: generated callback event_func_3990 processes event block(s) 2134_6. Actions/conditions:
//        2134_6: disables flag 1 (object-specific active or interaction state) on the selected object.
void Frames::event_func_3990()
{
    // event 2134_6 : disables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2134_6_end;
        patroljeep_416_instances.clear_selection();
        if (!check_not_overlap(patroljeep_416_instances, patroljeepwpdown_417_instances)) goto event_2134_6_end;
        patroljeepwpdown_417_instances.clear_selection();
        for (ObjectIterator it(patroljeepwpdown_417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_2134_6_end: ;
}
// Function purpose: generated callback event_func_3991 processes event block(s) 2135_6. Actions/conditions:
//        2135_6: disables flag 1 (object-specific active or interaction state) on the selected object.
void Frames::event_func_3991()
{
    // event 2135_6 : disables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2135_6_end;
        patroljeep_416_instances.clear_selection();
        if (!check_not_overlap(patroljeep_416_instances, patroljeepwpleft_418_instances)) goto event_2135_6_end;
        patroljeepwpleft_418_instances.clear_selection();
        for (ObjectIterator it(patroljeepwpleft_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_2135_6_end: ;
}
// Function purpose: generated callback event_func_3992 processes event block(s) 2136_6. Actions/conditions:
//        2136_6: disables flag 1 (object-specific active or interaction state) on the selected object.
void Frames::event_func_3992()
{
    // event 2136_6 : disables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2136_6_end;
        patroljeep_416_instances.clear_selection();
        if (!check_not_overlap(patroljeep_416_instances, patroljeepwpup_419_instances)) goto event_2136_6_end;
        patroljeepwpup_419_instances.clear_selection();
        for (ObjectIterator it(patroljeepwpup_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_2136_6_end: ;
}
// Function purpose: generated callback event_func_3993 processes event block(s) 2137_6. Actions/conditions:
//        2137_6: enables flag 1 (object-specific active or interaction state) on the selected object; sets the
//        selected object's direction to 0.
void Frames::event_func_3993()
{
    // event 2137_6 : enables flag 1 (object-specific active or interaction state) on the selected object; sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2137_6_end;
        patroljeep_416_instances.clear_selection();
        patroljeepwpright_415_instances.clear_selection();
        if (!check_overlap(patroljeep_416_instances, patroljeepwpright_415_instances)) goto event_2137_6_end;
        for (ObjectIterator it(patroljeepwpright_415_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!patroljeepwpright_415_instances.has_selection()) goto event_2137_6_end;
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(patroljeepwpright_415_instances, default_active_instance))->get_x()-4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(patroljeepwpright_415_instances, default_active_instance))->get_x()+4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(patroljeepwpright_415_instances, default_active_instance))->get_y()-4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(patroljeepwpright_415_instances, default_active_instance))->get_y()+4))) { it.deselect(); continue; }
        }
        if (!patroljeep_416_instances.has_selection()) goto event_2137_6_end;
        for (ObjectIterator it(patroljeepwpright_415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2137_6_end: ;
}
// Function purpose: generated callback event_func_3994 processes event block(s) 2138_6. Actions/conditions:
//        2138_6: sets the selected object's direction to 24; enables flag 1 (object-specific active or interaction
//        state) on the selected object.
void Frames::event_func_3994()
{
    // event 2138_6 : sets the selected object's direction to 24; enables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2138_6_end;
        patroljeep_416_instances.clear_selection();
        patroljeepwpdown_417_instances.clear_selection();
        if (!check_overlap(patroljeep_416_instances, patroljeepwpdown_417_instances)) goto event_2138_6_end;
        for (ObjectIterator it(patroljeepwpdown_417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!patroljeepwpdown_417_instances.has_selection()) goto event_2138_6_end;
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(patroljeepwpdown_417_instances, default_active_instance))->get_x()-4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(patroljeepwpdown_417_instances, default_active_instance))->get_x()+4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(patroljeepwpdown_417_instances, default_active_instance))->get_y()-4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(patroljeepwpdown_417_instances, default_active_instance))->get_y()+4))) { it.deselect(); continue; }
        }
        if (!patroljeep_416_instances.has_selection()) goto event_2138_6_end;
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        for (ObjectIterator it(patroljeepwpdown_417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_2138_6_end: ;
}
// Function purpose: generated callback event_func_3995 processes event block(s) 2139_6. Actions/conditions:
//        2139_6: sets the selected object's direction to 16; enables flag 1 (object-specific active or interaction
//        state) on the selected object.
void Frames::event_func_3995()
{
    // event 2139_6 : sets the selected object's direction to 16; enables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2139_6_end;
        patroljeep_416_instances.clear_selection();
        patroljeepwpleft_418_instances.clear_selection();
        if (!check_overlap(patroljeep_416_instances, patroljeepwpleft_418_instances)) goto event_2139_6_end;
        for (ObjectIterator it(patroljeepwpleft_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!patroljeepwpleft_418_instances.has_selection()) goto event_2139_6_end;
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(patroljeepwpleft_418_instances, default_active_instance))->get_x()-4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(patroljeepwpleft_418_instances, default_active_instance))->get_x()+4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(patroljeepwpleft_418_instances, default_active_instance))->get_y()-4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(patroljeepwpleft_418_instances, default_active_instance))->get_y()+4))) { it.deselect(); continue; }
        }
        if (!patroljeep_416_instances.has_selection()) goto event_2139_6_end;
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(patroljeepwpleft_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_2139_6_end: ;
}
// Function purpose: generated callback event_func_3996 processes event block(s) 2140_6. Actions/conditions:
//        2140_6: sets the selected object's direction to 8; enables flag 1 (object-specific active or interaction
//        state) on the selected object.
void Frames::event_func_3996()
{
    // event 2140_6 : sets the selected object's direction to 8; enables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2140_6_end;
        patroljeep_416_instances.clear_selection();
        patroljeepwpup_419_instances.clear_selection();
        if (!check_overlap(patroljeep_416_instances, patroljeepwpup_419_instances)) goto event_2140_6_end;
        for (ObjectIterator it(patroljeepwpup_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!patroljeepwpup_419_instances.has_selection()) goto event_2140_6_end;
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(patroljeepwpup_419_instances, default_active_instance))->get_x()-4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(patroljeepwpup_419_instances, default_active_instance))->get_x()+4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(patroljeepwpup_419_instances, default_active_instance))->get_y()-4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(patroljeepwpup_419_instances, default_active_instance))->get_y()+4))) { it.deselect(); continue; }
        }
        if (!patroljeep_416_instances.has_selection()) goto event_2140_6_end;
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        for (ObjectIterator it(patroljeepwpup_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_2140_6_end: ;
}
// Function purpose: generated callback event_func_3997 processes event block(s) 2141_6. Actions/conditions:
//        2141_6: sets the object position in the world.
void Frames::event_func_3997()
{
    // event 2141_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2141_6_end;
        if (!((patroljeep_416_instances.size()) > (0))) goto event_2141_6_end;
        jeepscan_458_instances.clear_selection();
        for (ObjectIterator it(jeepscan_458_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(patroljeep_416_instances, it.current_index));
            if (parent == NULL) goto pos_end_2141_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2141_6_0: ;
        }
    }
    event_2141_6_end: ;
}
// Function purpose: generated callback event_func_3998 processes event block(s) 2142_6. Actions/conditions:
//        2142_6: creates a dust 223 object; applies a visual shader; chooses a random value.
void Frames::event_func_3998()
{
    // event 2142_6 : creates a dust 223 object; applies a visual shader; chooses a random value
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2142_6_end;
        every_2142_6 += manager.dt;
        if (every_2142_6 < 0.5) goto event_2142_6_end;
        every_2142_6 -= 0.5;
        if (!((patroljeep_416_instances.size()) > (0))) goto event_2142_6_end;
        patroljeep_416_instances.clear_selection();
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!patroljeep_416_instances.has_selection()) goto event_2142_6_end;
        FrameObject * single_instance_2142_6_0; single_instance_2142_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(patroljeep_416_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                int x_off; x_off = 0;
                int y_off; y_off = 0;
                transform_pos(x_off, y_off, parent);
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->get_action_x() - parent->layer->off_x + x_off, parent->get_action_y() - parent->layer->off_y + y_off), parent->layer);
                if (single_instance_2142_6_0 == NULL)
                    single_instance_2142_6_0 = new_obj;
            }
        }
        {
            ((Active*)single_instance_2142_6_0)->set_shader(Render::ADDITIVE);
        }
        ((Active*)((Active*)single_instance_2142_6_0))->set_scale(1+randrange_event(2));
    }
    event_2142_6_end: ;
}
// Function purpose: generated callback event_func_3999 processes event block(s) 2148_6. Actions/conditions:
//        2148_6: moves the selected object behind other objects.
void Frames::event_func_3999()
{
    // event 2148_6 : moves the selected object behind other objects
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2148_6_end;
        patroljeep_416_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(patroljeep_416_instances, items_184_instances)) goto event_2148_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2148_6_end: ;
}
// Function purpose: generated callback event_func_4000 processes event block(s) 2149_6. Actions/conditions:
//        2149_6: removes the selected object; sets the selected object's numeric value to 300; stops the object's
//        movement; plus 1 more actions.
void Frames::event_func_4000()
{
    // event 2149_6 : removes the selected object; sets the selected object's numeric value to 300; stops the object's movement; plus 1 more actions
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2149_6_end;
        patroljeep_416_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(patroljeep_416_instances, items_184_instances)) goto event_2149_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (180))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_2149_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 300);
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_SHOOT_18, 1-1);
    }
    event_2149_6_end: ;
}
// Function purpose: generated callback event_func_4001 processes event block(s) 2150_6. Actions/conditions:
//        2150_6: changes a stored game value.
void Frames::event_func_4001()
{
    VITA_LEGACY_EVENT();
    // event 2150_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2150_6_end;
        patroljeep_416_instances.clear_selection();
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!patroljeep_416_instances.has_selection()) goto event_2150_6_end;
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_2150_6_end: ;
}
// Function purpose: generated callback event_func_4002 processes event block(s) 2151_6. Actions/conditions:
//        2151_6: updates game state with selected object->get_movement()->start().
void Frames::event_func_4002()
{
    // event 2151_6 : updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2151_6_end;
        patroljeep_416_instances.clear_selection();
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (1))) { it.deselect(); continue; }
        }
        if (!patroljeep_416_instances.has_selection()) goto event_2151_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2151_6_end;
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_2151_6_end: ;
}
// Function purpose: generated callback event_func_4003 processes event block(s) 2152_6. Actions/conditions:
//        2152_6: increments Heat by 3.
void Frames::event_func_4003()
{
    // event 2152_6 : increments Heat by 3
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2152_6_end;
        every_2152_6 += manager.dt;
        if (every_2152_6 < 1.0) goto event_2152_6_end;
        every_2152_6 -= 1.0;
        jeepscan_458_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(jeepscan_458_instances, playerBase_instances)) goto event_2152_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_2152_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2152_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2152_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 3);
        {
            loop_hudshake_heat_running = true;
            int times = int(1);
            loop_hudshake_heat_index = 0;
            while (loop_hudshake_heat_index < times) {
                loop_hudshake_heat_6();
                if (!loop_hudshake_heat_running) break;
                loop_hudshake_heat_index++;
            }
        }
    }
    event_2152_6_end: ;
}
// Function purpose: generated callback event_func_4004 processes event block(s) 2153_6. Actions/conditions:
//        2153_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4004()
{
    // event 2153_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2153_6_end;
        every_2153_6 += manager.dt;
        if (every_2153_6 < 0.25) goto event_2153_6_end;
        every_2153_6 -= 0.25;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(patroljeep_416_instances));
            if (obj1 == NULL) goto compare_2153_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2153_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 200)) goto event_2153_6_end;
        }
        compare_2153_6_0_end: ;
        media.set_channel_volume(11-1, (media.get_channel_volume(-1 +1)/MathHelper()/100)*(100-(get_distance_int(((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_x(), ((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_y(), ((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y())/MathHelper()/3)));
        media.set_channel_volume(11-1, (100-(get_distance_int(((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_x(), ((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_y(), ((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y())/MathHelper()/3))/MathHelper()/2);
        {
            loop_jeep_sound_running = true;
            int times = int(1);
            loop_jeep_sound_index = 0;
            while (loop_jeep_sound_index < times) {
                loop_jeep_sound_6();
                if (!loop_jeep_sound_running) break;
                loop_jeep_sound_index++;
            }
        }
    }
    event_2153_6_end: ;
}
// Function purpose: generated callback event_func_4005 processes event block(s) 2155_6. Actions/conditions:
//        2155_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4005()
{
    // event 2155_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    bool or_result_2155_6 = false;
    bool or_temp_result_2155_6_0 = false;
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto or_event_2155_6_0_end;
        if (!media.is_channel_playing(11-1)) goto or_event_2155_6_0_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(patroljeep_416_instances));
            if (obj1 == NULL) goto compare_2155_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2155_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (get_distance(x1, y1, x2, y2) <= 200) goto or_event_2155_6_0_end;
        }
        compare_2155_6_0_end: ;
        or_result_2155_6 = true;
        or_temp_result_2155_6_0 = true;
    }
    or_event_2155_6_0_end: ;
    // event 2155_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    bool or_temp_result_2155_6_1 = false;
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto or_event_2155_6_1_end;
        if (!media.is_channel_playing(11-1)) goto or_event_2155_6_1_end;
        patroljeep_416_instances.clear_selection();
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!patroljeep_416_instances.has_selection()) goto or_event_2155_6_1_end;
        or_result_2155_6 = true;
        or_temp_result_2155_6_1 = true;
        or_event_2155_6_1_end: ;
        patroljeep_416_instances.clear_saved_selection();
        if (or_temp_result_2155_6_1) {
            patroljeep_416_instances.save_selection();
        }
        if (!or_result_2155_6) goto or_final_or_event_2155_6_1_end;
        patroljeep_416_instances.empty_selection();
        if (or_temp_result_2155_6_1) {
            patroljeep_416_instances.restore_selection();
        }
        media.stop_channel(11-1);
    }
    or_final_or_event_2155_6_1_end: ;
}
// Function purpose: generated callback event_func_4006 processes event block(s) 2156_6. Actions/conditions:
//        2156_6: sets the audio channel volume.
void Frames::event_func_4006()
{
    // event 2156_6 : sets the audio channel volume
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2156_6_end;
        if (!((media.get_channel_volume(-1 +11)) > (media.get_channel_volume(-1 +1)))) goto event_2156_6_end;
        media.set_channel_volume(11-1, media.get_channel_volume(-1 +1));
    }
    event_2156_6_end: ;
}
// Function purpose: generated callback event_func_4007 processes event block(s) 2157_6. Actions/conditions:
//        2157_6: checks scene is active; the event-specific game state condition is met; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4007()
{
    // event 2157_6 : checks scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2157_6_end;
        if (!(frame_time <= 5.0)) goto event_2157_6_end;
        if (!((mine_414_instances.size()) > (0))) goto event_2157_6_end;
        if (!group_code_misc_mines_1) {
            group_code_misc_mines_1 = true;
        }
    }
    event_2157_6_end: ;
}
// Function purpose: generated callback event_func_4008 processes event block(s) 2158_6. Actions/conditions:
//        2158_6: checks scene is active; skips if scene is active; game state SSS; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_4008()
{
    // event 2158_6 : checks scene is active; skips if scene is active; game state SSS; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2158_6_end;
        if (group_code_1 && group_code_misc_reindeer_1) goto event_2158_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2158_6_end;
        if (!group_code_misc_reindeer_1) {
            group_code_misc_reindeer_1 = true;
        }
    }
    event_2158_6_end: ;
}
// Function purpose: generated callback event_func_4009 processes event block(s) 2159_6. Actions/conditions:
//        2159_6: checks scene is active; skips if scene is active; game state CCL; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_4009()
{
    // event 2159_6 : checks scene is active; skips if scene is active; game state CCL; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2159_6_end;
        if (group_code_1 && group_code_misc_reindeer_1) goto event_2159_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_2159_6_end;
        if (!group_code_misc_reindeer_1) {
            group_code_misc_reindeer_1 = true;
        }
    }
    event_2159_6_end: ;
}
// Function purpose: generated callback event_func_4010 processes event block(s) 2160_6. Actions/conditions:
//        2160_6: sets the object position in the world; sets the selected object's direction to
//        ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_direction(); sets the
//        selected object's numeric value to selected object->get_x(); plus 5 more actions.
void Frames::event_func_4010()
{
    // event 2160_6 : sets the object position in the world; sets the selected object's direction to ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_direction(); sets the selected object's numeric value to selected object->get_x(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2160_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_2160_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2160_6_end;
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_2160_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -12);
            pos_end_2160_6_0: ;
        }
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
            ((Active*)*it)->move_front();
        }
    }
    event_2160_6_end: ;
}
// Function purpose: generated callback event_func_4011 processes event block(s) 2161_6. Actions/conditions:
//        2161_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_4011()
{
    // event 2161_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2161_6_end;
        every_2161_6 += manager.dt;
        if (every_2161_6 < 3.0) goto event_2161_6_end;
        every_2161_6 -= 3.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2161_6_end;
        {
            loop_check_deers_running = true;
            int times = int(ssreindeer_504_instances.size());
            loop_check_deers_index = 0;
            while (loop_check_deers_index < times) {
                loop_check_deers_6();
                if (!loop_check_deers_running) break;
                loop_check_deers_index++;
            }
        }
    }
    event_2161_6_end: ;
}
// Function purpose: generated callback event_func_4012 processes event block(s) 2168_6. Actions/conditions:
//        2168_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_4012()
{
    // event 2168_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2168_6_end;
        every_2168_6 += manager.dt;
        if (every_2168_6 < 0.1) goto event_2168_6_end;
        every_2168_6 -= 0.1;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2168_6_end;
        {
            ssreindeer_504_instances.clear_selection();
            SavedSelection extra_ssreindeer_504_instances(ssreindeer_504_instances);
            for (SavedIterator it(extra_ssreindeer_504_instances); !it.end(); ++it) {
                foreach_instance_odeer = ((Active*)*it);
                foreach_odeer_6();
            }
        }
    }
    event_2168_6_end: ;
}
// Function purpose: generated callback event_func_4013 processes event block(s) 2173_6. Actions/conditions:
//        2173_6: sets the selected object's numeric value to get_distance_int(playerBase->get_x(),
//        playerBase->get_y(), selected object->get_x(), selected object->get_y()).
void Frames::event_func_4013()
{
    // event 2173_6 : sets the selected object's numeric value to get_distance_int(playerBase->get_x(), playerBase->get_y(), selected object->get_x(), selected object->get_y())
    {
        if (!(group_code_1 && group_code_misc_mines_1)) goto event_2173_6_end;
        every_2173_6 += manager.dt;
        if (every_2173_6 < 1.0) goto event_2173_6_end;
        every_2173_6 -= 1.0;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2173_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_2173_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2173_6_end;
        mine_414_instances.clear_selection();
        for (ObjectIterator it(mine_414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((Active*)*it)->get_x(), ((Active*)*it)->get_y()));
        }
    }
    event_2173_6_end: ;
}
// Function purpose: generated callback event_func_4014 processes event block(s) 2174_6. Actions/conditions:
//        2174_6: sets the selected object's numeric value to 10; sets MineX to
//        ((Active*)get_single(mine_414_instances, default_active_instance))->get_x(); sets MineY to
//        ((Active*)get_single(mine_414_instances, default_active_instance))->get_y().
void Frames::event_func_4014()
{
    // event 2174_6 : sets the selected object's numeric value to 10; sets MineX to ((Active*)get_single(mine_414_instances, default_active_instance))->get_x(); sets MineY to ((Active*)get_single(mine_414_instances, default_active_instance))->get_y()
    {
        if (!(group_code_1 && group_code_misc_mines_1)) goto event_2174_6_end;
        mine_414_instances.clear_selection();
        for (ObjectIterator it(mine_414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (48))) { it.deselect(); continue; }
        }
        if (!mine_414_instances.has_selection()) goto event_2174_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2174_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_2174_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2174_6_end;
        ((Active*)get_instance(camera_202_instances))->alterables->values.set(0, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(648, str_minex_1748, ((Active*)get_single(mine_414_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(649, str_miney_1749, ((Active*)get_single(mine_414_instances, default_active_instance))->get_y());
        {
            loop_mine_explode_running = true;
            int times = int(1);
            loop_mine_explode_index = 0;
            while (loop_mine_explode_index < times) {
                loop_mine_explode_6();
                if (!loop_mine_explode_running) break;
                loop_mine_explode_index++;
            }
        }
    }
    event_2174_6_end: ;
}
// Function purpose: generated callback event_func_4015 processes event block(s) 2178_6. Actions/conditions:
//        2178_6: sets the selected object's numeric value to 10; sets MineX to
//        ((Active*)get_single(mine_414_instances, default_active_instance))->get_x(); sets MineY to
//        ((Active*)get_single(mine_414_instances, default_active_instance))->get_y().
void Frames::event_func_4015()
{
    // event 2178_6 : sets the selected object's numeric value to 10; sets MineX to ((Active*)get_single(mine_414_instances, default_active_instance))->get_x(); sets MineY to ((Active*)get_single(mine_414_instances, default_active_instance))->get_y()
    {
        if (!(group_code_1 && group_code_misc_mines_1)) goto event_2178_6_end;
        playerBase_instances.clear_selection();
        mine_414_instances.clear_selection();
        if (!check_overlap(playerBase_instances, mine_414_instances)) goto event_2178_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_2178_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_2178_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2178_6_end;
        ((Active*)get_instance(camera_202_instances))->alterables->values.set(0, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(648, str_minex_1748, ((Active*)get_single(mine_414_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(649, str_miney_1749, ((Active*)get_single(mine_414_instances, default_active_instance))->get_y());
        {
            loop_mine_explode_running = true;
            int times = int(1);
            loop_mine_explode_index = 0;
            while (loop_mine_explode_index < times) {
                loop_mine_explode_6();
                if (!loop_mine_explode_running) break;
                loop_mine_explode_index++;
            }
        }
    }
    event_2178_6_end: ;
}
// Function purpose: generated callback event_func_4016 processes event block(s) 2179_6. Actions/conditions:
//        2179_6: sets the selected object's visibility to true.
void Frames::event_func_4016() {
    // Event 2179_6: restore each clear doorway independently. Negated list
    // overlaps test whole groups and reject empty source lists.
    if (!group_code_1) return;

    ObjectList* characters[] = {&inmateBase_instances, &guardBase_instances, &playerBase_instances, &serviceNpc_instances};
    for (ObjectList* list : characters) list->clear_selection();

    QualifierList& doors = qualifier_8;
    doors.clear_selection();
    for (QualifierIterator doorEntry(doors); !doorEntry.end(); ++doorEntry) {
        FrameObject* door = *doorEntry;
        if (door->flags & VISIBLE) continue;

        bool occupied = false;
        for (ObjectList* list : characters) {
            for (ObjectIterator characterEntry(*list); !characterEntry.end(); ++characterEntry) {
                if (!door->overlaps(*characterEntry)) continue;
                occupied = true;
                break;
            }
            if (occupied) break;
        }

        if (!occupied) door->set_visible(true);
    }
}
// Function purpose: generated callback event_func_4017 processes event block(s) 2180_6. Actions/conditions:
//        2180_6: sets the object position in the world.
void Frames::event_func_4017()
{
    // event 2180_6 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_2180_6_end;
        qualifier_14.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(qualifier_14, qualifier_8)) goto event_2180_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_2180_6_end;
        {
            FrameObject * parent = ((Active*)get_single(qualifier_14));
            if (parent == NULL) goto pos_end_2180_6_0;
            ((Active*)get_instance(doorcheck_364_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2180_6_0: ;
        }
        {
            loop_open_door_check_running = true;
            int times = int(1);
            loop_open_door_check_index = 0;
            while (loop_open_door_check_index < times) {
                loop_open_door_check_6();
                if (!loop_open_door_check_running) break;
                loop_open_door_check_index++;
            }
        }
    }
    event_2180_6_end: ;
}
// Function purpose: generated callback event_func_4018 processes event block(s) 2181_6. Actions/conditions:
//        2181_6: sets the object position in the world.
void Frames::event_func_4018()
{
    // event 2181_6 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_2181_6_end;
        serviceNpc_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(serviceNpc_instances, qualifier_8)) goto event_2181_6_end;
        {
            FrameObject * parent = ((Active*)get_single(serviceNpc_instances));
            if (parent == NULL) goto pos_end_2181_6_0;
            ((Active*)get_instance(doorcheck_364_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2181_6_0: ;
        }
        {
            loop_open_door_check_running = true;
            int times = int(1);
            loop_open_door_check_index = 0;
            while (loop_open_door_check_index < times) {
                loop_open_door_check_6();
                if (!loop_open_door_check_running) break;
                loop_open_door_check_index++;
            }
        }
    }
    event_2181_6_end: ;
}
// Function purpose: generated callback event_func_4019 processes event block(s) 2187_6. Actions/conditions:
//        2187_6: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 10 more actions.
void Frames::event_func_4019()
{
    // event 2187_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 10 more actions
    bool or_result_2187_6 = false;
    bool or_temp_result_2187_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_2187_6_0_end;
        every_2187_6 += manager.dt;
        if (every_2187_6 < 1.0) goto or_event_2187_6_0_end;
        every_2187_6 -= 1.0;
        playerBase_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_6)) goto or_event_2187_6_0_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto or_event_2187_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) > (0))) goto or_event_2187_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_2187_6_0_end;
        loadingCurtain_instances.clear_selection();
        if (loadingCurtain_instances.size() != 0) goto or_event_2187_6_0_end;
        if (!((screenFade_instances.size()) == (0))) goto or_event_2187_6_0_end;
        or_result_2187_6 = true;
        or_temp_result_2187_6_0 = true;
    }
    or_event_2187_6_0_end: ;
    playerBase_instances.clear_saved_selection();
    loadingCurtain_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    qualifier_6.clear_saved_selection();
    if (or_temp_result_2187_6_0) {
        playerBase_instances.save_selection();
        qualifier_6.save_selection();
        dialogPanel_instances.save_selection();
        loadingCurtain_instances.save_selection();
    }
    // event 2187_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 10 more actions
    bool or_temp_result_2187_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_2187_6_1_end;
        every_2187_6 += manager.dt;
        if (every_2187_6 < 1.0) goto or_event_2187_6_1_end;
        every_2187_6 -= 1.0;
        playerBase_instances.clear_selection();
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(playerBase_instances, canteenchair_312_instances)) goto or_event_2187_6_1_end;
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(75))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_2187_6_1_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto or_event_2187_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) > (0))) goto or_event_2187_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_2187_6_1_end;
        if (!((screenFade_instances.size()) == (0))) goto or_event_2187_6_1_end;
        or_result_2187_6 = true;
        or_temp_result_2187_6_1 = true;
        or_event_2187_6_1_end: ;
        canteenchair_312_instances.clear_saved_selection();
        if (or_temp_result_2187_6_1) {
            playerBase_instances.save_selection();
            canteenchair_312_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_2187_6) goto or_final_or_event_2187_6_1_end;
        loadingCurtain_instances.empty_selection();
        qualifier_6.empty_selection();
        canteenchair_312_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        playerBase_instances.empty_selection();
        if (or_temp_result_2187_6_0 || or_temp_result_2187_6_1) {
            playerBase_instances.restore_selection();
        }
        if (or_temp_result_2187_6_0) {
            qualifier_6.restore_selection();
        }
        if (or_temp_result_2187_6_0) {
            loadingCurtain_instances.restore_selection();
        }
        if (or_temp_result_2187_6_1) {
            canteenchair_312_instances.restore_selection();
        }
        if (or_temp_result_2187_6_0 || or_temp_result_2187_6_1) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->sub_value(358, str_fatigue_36, 2);
        }
        stats_340_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_stats_340(0, 0), 5);
            stats_340_instances.add_back();
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(playerBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_2187_6_1;
            ((TextBlitter*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + -16);
            pos_end_2187_6_1: ;
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str_fat_2167);
            ((TextBlitter*)*it)->set_text(str__254);
        }
    }
    or_final_or_event_2187_6_1_end: ;
}
// Function purpose: generated callback event_func_4020 processes event block(s) 2188_6. Actions/conditions:
//        2188_6: changes a stored game value; adds a stats 340 instance; sets the object position in the world; plus
//        5 more actions.
void Frames::event_func_4020()
{
    // event 2188_6 : changes a stored game value; adds a stats 340 instance; sets the object position in the world; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2188_6_end;
        every_2188_6 += manager.dt;
        if (every_2188_6 < 1.0) goto event_2188_6_end;
        every_2188_6 -= 1.0;
        playerBase_instances.clear_selection();
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(playerBase_instances, canteenchair_312_instances)) goto event_2188_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) > (0))) goto event_2188_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(75))) goto event_2188_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2188_6_end;
        if (!((screenFade_instances.size()) == (0))) goto event_2188_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(358, str_fatigue_36, 6);
        stats_340_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_stats_340(0, 0), 5);
            stats_340_instances.add_back();
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_2188_6_1;
            ((TextBlitter*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + -16);
            pos_end_2188_6_1: ;
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str__254);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(899, str_hunger_2168, 20);
    }
    event_2188_6_end: ;
}
// Function purpose: generated callback event_func_4021 processes event block(s) 2189_6. Actions/conditions:
//        2189_6: changes a stored game value; adds a stats 340 instance; sets the object position in the world; plus
//        1 more actions.
void Frames::event_func_4021()
{
    // event 2189_6 : changes a stored game value; adds a stats 340 instance; sets the object position in the world; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2189_6_end;
        every_2189_6 += manager.dt;
        if (every_2189_6 < 1.0) goto event_2189_6_end;
        every_2189_6 -= 1.0;
        playerBase_instances.clear_selection();
        shower_183_instances.clear_selection();
        if (!check_overlap(playerBase_instances, shower_183_instances)) goto event_2189_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) > (0))) goto event_2189_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2189_6_end;
        if (!((screenFade_instances.size()) == (0))) goto event_2189_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(358, str_fatigue_36, 4);
        stats_340_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_stats_340(0, 0), 5);
            stats_340_instances.add_back();
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_2189_6_1;
            ((TextBlitter*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + -16);
            pos_end_2189_6_1: ;
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str__254);
        }
    }
    event_2189_6_end: ;
}
// Function purpose: generated callback event_func_4022 processes event block(s) 2190_6. Actions/conditions:
//        2190_6: changes a stored game value.
void Frames::event_func_4022()
{
    // event 2190_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_2190_6_end;
        every_2190_6 += manager.dt;
        if (every_2190_6 < 5.0) goto event_2190_6_end;
        every_2190_6 -= 5.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) > (0))) goto event_2190_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(899, str_hunger_2168)) == (0))) goto event_2190_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2190_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(358, str_fatigue_36, 1);
    }
    event_2190_6_end: ;
}
// Function purpose: generated callback event_func_4023 processes event block(s) 2191_6. Actions/conditions:
//        2191_6: changes a stored game value; changes a stored game value.
void Frames::event_func_4023()
{
    // event 2191_6 : changes a stored game value; changes a stored game value
    {
        if (!(group_code_1)) goto event_2191_6_end;
        every_2191_6 += manager.dt;
        if (every_2191_6 < 5.0) goto event_2191_6_end;
        every_2191_6 -= 5.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) > (0))) goto event_2191_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(899, str_hunger_2168)) > (0))) goto event_2191_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2191_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(358, str_fatigue_36, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(899, str_hunger_2168, 1);
    }
    event_2191_6_end: ;
}
// Function purpose: generated callback event_func_4024 processes event block(s) 2192_6. Actions/conditions:
//        2192_6: sets Fatigue to 0.
void Frames::event_func_4024()
{
    // event 2192_6 : sets Fatigue to 0
    {
        if (!(group_code_1)) goto event_2192_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (0))) goto event_2192_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(358, str_fatigue_36, 0);
    }
    event_2192_6_end: ;
}
// Function purpose: generated callback event_func_4025 processes event block(s) 2194_6. Actions/conditions:
//        2194_6: sets Illegal to 0; sets Pouch to 0.
void Frames::event_func_4025()
{
    // event 2194_6 : sets Illegal to 0; sets Pouch to 0
    {
        if (!(group_code_1)) goto event_2194_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(531, str_gogoscan_1431)) == (1))) goto event_2194_6_end;
        metaldetector_231_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(metaldetector_231_instances, playerBase_instances)) goto event_2194_6_end;
        if (!((((Active*)get_single(metaldetector_231_instances, default_active_instance))->layer->index+1) == (((Active*)get_single(playerBase_instances, default_active_instance))->layer->index+1))) goto event_2194_6_end;
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!metaldetector_231_instances.has_selection()) goto event_2194_6_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(143, str_illegal_618, 0);
            ((AssociateArray*)*it)->set_value(144, str_pouch_713, 0);
        }
        {
            loop_metal_scan_running = true;
            int times = int(6);
            loop_metal_scan_index = 0;
            while (loop_metal_scan_index < times) {
                loop_metal_scan_6();
                if (!loop_metal_scan_running) break;
                loop_metal_scan_index++;
            }
        }
        {
            loop_pouch_used_running = true;
            int times = int(1);
            loop_pouch_used_index = 0;
            while (loop_pouch_used_index < times) {
                loop_pouch_used_6();
                if (!loop_pouch_used_running) break;
                loop_pouch_used_index++;
            }
        }
    }
    event_2194_6_end: ;
}
// Function purpose: generated callback event_func_4026 processes event block(s) 2204_6. Actions/conditions:
//        2204_6: sets the object's animation to 5; sets the selected object's numeric value to -1; sets Heat to 99;
//        plus 1 more actions.
void Frames::event_func_4026()
{
    // event 2204_6 : sets the object's animation to 5; sets the selected object's numeric value to -1; sets Heat to 99; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2204_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(531, str_gogoscan_1431)) == (1))) goto event_2204_6_end;
        playerBase_instances.clear_selection();
        metaldetector_231_instances.clear_selection();
        if (!check_overlap(playerBase_instances, metaldetector_231_instances)) goto event_2204_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (((Active*)get_single(metaldetector_231_instances, default_active_instance))->layer->index+1))) goto event_2204_6_end;
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!metaldetector_231_instances.has_selection()) goto event_2204_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(143, str_illegal_618)) > (0))) goto event_2204_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(144, str_pouch_713)) == (0))) goto event_2204_6_end;
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->alterables->values.set(1, -1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 99);
        {
            loop_hudshake_heat_running = true;
            int times = int(1);
            loop_hudshake_heat_index = 0;
            while (loop_hudshake_heat_index < times) {
                loop_hudshake_heat_6();
                if (!loop_hudshake_heat_running) break;
                loop_hudshake_heat_index++;
            }
        }
        media.play_id(SOUND_HP_10, 1-1);
    }
    event_2204_6_end: ;
}
// Function purpose: generated callback event_func_4027 processes event block(s) 2205_6. Actions/conditions:
//        2205_6: sets GoGoScan to 0.
void Frames::event_func_4027()
{
    // event 2205_6 : sets GoGoScan to 0
    {
        if (!(group_code_1)) goto event_2205_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(531, str_gogoscan_1431)) == (1))) goto event_2205_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(531, str_gogoscan_1431, 0);
    }
    event_2205_6_end: ;
}
// Function purpose: generated callback event_func_4028 processes event block(s) 2206_6. Actions/conditions:
//        2206_6: sets the selected object's numeric value to 0.
void Frames::event_func_4028()
{
    // event 2206_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1)) goto event_2206_6_end;
        metaldetector_231_instances.clear_selection();
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
        }
        if (!metaldetector_231_instances.has_selection()) goto event_2206_6_end;
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_2206_6_end: ;
}
// Function purpose: generated callback event_func_4029 processes event block(s) 2207_6. Actions/conditions:
//        2207_6: checks scene is active; the event-specific game state condition is met; skips if the event-specific
//        game state condition is met; this handler gates a game ev.
void Frames::event_func_4029()
{
    // event 2207_6 : checks scene is active; the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game ev
    {
        if (!(group_code_1)) goto event_2207_6_end;
        if (!((zipstart_389_instances.size()) > (0))) goto event_2207_6_end;
        if (once_condition_2207_6) goto event_2207_6_end;
        once_condition_2207_6 = true;
        zipstart_389_instances.clear_selection();
        spread_value(zipstart_389_instances, 0, 1);
        zipend_390_instances.clear_selection();
        spread_value(zipend_390_instances, 0, 1);
    }
    event_2207_6_end: ;
}
// Function purpose: generated callback event_func_4030 processes event block(s) 2208_6. Actions/conditions:
//        2208_6: checks scene is active; the event-specific game state condition is met; skips if the event-specific
//        game state condition is met; this handler gates a game ev.
void Frames::event_func_4030()
{
    // event 2208_6 : checks scene is active; the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game ev
    {
        if (!(group_code_1)) goto event_2208_6_end;
        if (!((zipstart_389_instances.size()) > (0))) goto event_2208_6_end;
        if (once_condition_2208_6) goto event_2208_6_end;
        once_condition_2208_6 = true;
        {
            loop_setup_zip_running = true;
            int times = int(zipstart_389_instances.size());
            loop_setup_zip_index = 0;
            while (loop_setup_zip_index < times) {
                loop_setup_zip_6();
                if (!loop_setup_zip_running) break;
                loop_setup_zip_index++;
            }
        }
    }
    event_2208_6_end: ;
}
// Function purpose: generated callback event_func_4031 processes event block(s) 2218_6. Actions/conditions:
//        2218_6: sets the selected object's vertical position to playerBase->get_y()-4; sets the selected object's
//        direction to 8.
void Frames::event_func_4031()
{
    // event 2218_6 : sets the selected object's vertical position to playerBase->get_y()-4; sets the selected object's direction to 8
    {
        if (!(group_code_1)) goto event_2218_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) == (str_up_38))) goto event_2218_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, zipend_390_instances)) goto event_2218_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2218_6_end;
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), false, -4);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        {
            loop_position_running = true;
            int times = int(1);
            loop_position_index = 0;
            while (loop_position_index < times) {
                loop_position_6();
                if (!loop_position_running) break;
                loop_position_index++;
            }
        }
    }
    event_2218_6_end: ;
}
// Function purpose: generated callback event_func_4032 processes event block(s) 2219_6. Actions/conditions:
//        2219_6: sets the selected object's horizontal position to playerBase->get_x()-4; sets the selected object's
//        direction to 16.
void Frames::event_func_4032()
{
    // event 2219_6 : sets the selected object's horizontal position to playerBase->get_x()-4; sets the selected object's direction to 16
    {
        if (!(group_code_1)) goto event_2219_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) == (str_left_82))) goto event_2219_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, zipend_390_instances)) goto event_2219_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2219_6_end;
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), true, -4);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        {
            loop_position_running = true;
            int times = int(1);
            loop_position_index = 0;
            while (loop_position_index < times) {
                loop_position_6();
                if (!loop_position_running) break;
                loop_position_index++;
            }
        }
    }
    event_2219_6_end: ;
}
// Function purpose: generated callback event_func_4033 processes event block(s) 2220_6. Actions/conditions:
//        2220_6: sets the selected object's horizontal position to playerBase->get_x()+4; sets the selected object's
//        direction to 0.
void Frames::event_func_4033()
{
    // event 2220_6 : sets the selected object's horizontal position to playerBase->get_x()+4; sets the selected object's direction to 0
    {
        if (!(group_code_1)) goto event_2220_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) == (str_right_83))) goto event_2220_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, zipend_390_instances)) goto event_2220_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2220_6_end;
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), true, 4);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        {
            loop_position_running = true;
            int times = int(1);
            loop_position_index = 0;
            while (loop_position_index < times) {
                loop_position_6();
                if (!loop_position_running) break;
                loop_position_index++;
            }
        }
    }
    event_2220_6_end: ;
}
// Function purpose: generated callback event_func_4034 processes event block(s) 2221_6. Actions/conditions:
//        2221_6: sets the selected object's vertical position to playerBase->get_y()+4; sets the selected object's
//        direction to 24.
void Frames::event_func_4034()
{
    // event 2221_6 : sets the selected object's vertical position to playerBase->get_y()+4; sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_2221_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) == (str_down_81))) goto event_2221_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, zipend_390_instances)) goto event_2221_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2221_6_end;
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), false, 4);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        {
            loop_position_running = true;
            int times = int(1);
            loop_position_index = 0;
            while (loop_position_index < times) {
                loop_position_6();
                if (!loop_position_running) break;
                loop_position_index++;
            }
        }
    }
    event_2221_6_end: ;
}
// Function purpose: generated callback event_func_4035 processes event block(s) 2223_6. Actions/conditions:
//        2223_6: creates a dust 223 object.
void Frames::event_func_4035()
{
    // event 2223_6 : creates a dust 223 object
    {
        if (!(group_code_1)) goto event_2223_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) != (empty_string))) goto event_2223_6_end;
        every_2223_6 += manager.dt;
        if (every_2223_6 < 0.2) goto event_2223_6_end;
        every_2223_6 -= 0.2;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2223_6_end;
        FrameObject * single_instance_2223_6_0; single_instance_2223_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_2223_6_0 == NULL)
                    single_instance_2223_6_0 = new_obj;
            }
        }
    }
    event_2223_6_end: ;
}
// Function purpose: generated callback event_func_4036 processes event block(s) 2224_6. Actions/conditions:
//        2224_6: sets Zip to empty_string.
void Frames::event_func_4036()
{
    // event 2224_6 : sets Zip to empty_string
    {
        if (!(group_code_1)) goto event_2224_6_end;
        playerBase_instances.clear_selection();
        zipend_390_instances.clear_selection();
        if (!check_overlap(playerBase_instances, zipend_390_instances)) goto event_2224_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) != (empty_string))) goto event_2224_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(756, str_zip_1932, empty_string);
    }
    event_2224_6_end: ;
}
// Function purpose: generated callback event_func_4037 processes event block(s) 2225_6. Actions/conditions:
//        2225_6: moves the selected object to the front.
void Frames::event_func_4037()
{
    // event 2225_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_2225_6_end;
        qualifier_16.clear_selection();
        zipline_431_instances.clear_selection();
        if (!check_overlap(qualifier_16, zipline_431_instances)) goto event_2225_6_end;
        {
            QualifierIterator other_it(qualifier_16);
            for (ObjectIterator it(zipline_431_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_2225_6_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_2225_6_0_end: ;
    }
    event_2225_6_end: ;
}
// Function purpose: generated callback event_func_4038 processes event block(s) 2226_6. Actions/conditions:
//        2226_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_4038()
{
    // event 2226_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2226_6_end;
        loadingCurtain_instances.clear_selection();
        if (loadingCurtain_instances.size() != 0) goto event_2226_6_end;
        if (not_always_2226_6 > loop_count) {
            not_always_2226_6 = loop_count + 2;
            goto event_2226_6_end;
        }
        not_always_2226_6 = loop_count + 2;
        if (!group_code_misc_cameras_1) {
            group_code_misc_cameras_1 = true;
        }
    }
    event_2226_6_end: ;
}
// Function purpose: generated callback event_func_4039 processes event block(s) 2227_6. Actions/conditions:
//        2227_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4039()
{
    // event 2227_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1)) goto event_2227_6_end;
        if (!((checkpointguard_423_instances.size()) > (0))) goto event_2227_6_end;
        checkpointguard_423_instances.clear_selection();
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!checkpointguard_423_instances.has_selection()) goto event_2227_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_2227_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(checkpointguard_423_instances));
            if (obj2 == NULL) goto compare_2227_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 100)) goto event_2227_6_end;
        }
        compare_2227_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2227_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2227_6_end;
        if (group_saving_1) goto event_2227_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2227_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(408, str_callx_1224, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(409, str_cally_1225, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 100);
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guards_halt_1170);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(1+randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885)))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        {
            loop_checkpoint_speak_running = true;
            int times = int(1);
            loop_checkpoint_speak_index = 0;
            while (loop_checkpoint_speak_index < times) {
                loop_checkpoint_speak_6();
                if (!loop_checkpoint_speak_running) break;
                loop_checkpoint_speak_index++;
            }
        }
        {
            loop_inmate_calls_guard_running = true;
            int times = int(1);
            loop_inmate_calls_guard_index = 0;
            while (loop_inmate_calls_guard_index < times) {
                loop_inmate_calls_guard_6();
                if (!loop_inmate_calls_guard_running) break;
                loop_inmate_calls_guard_index++;
            }
        }
        media.play_id(SOUND_LOSE_8, 1-1);
        checkpointguard_423_instances.clear_selection();
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 300);
        }
    }
    event_2227_6_end: ;
}
// Function purpose: generated callback event_func_4040 processes event block(s) 2228_6. Actions/conditions:
//        2228_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4040()
{
    // event 2228_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2228_6_end;
        if (!((checkpointguard_423_instances.size()) > (0))) goto event_2228_6_end;
        if (!((checkpoint_422_instances.size()) > (0))) goto event_2228_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_2228_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(checkpointguard_423_instances));
            if (obj2 == NULL) goto compare_2228_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 80)) goto event_2228_6_end;
        }
        compare_2228_6_0_end: ;
        checkpointguard_423_instances.clear_selection();
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!checkpointguard_423_instances.has_selection()) goto event_2228_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_2228_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2228_6_end;
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 350);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_49_2169));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        {
            loop_checkpoint_speak_running = true;
            int times = int(1);
            loop_checkpoint_speak_index = 0;
            while (loop_checkpoint_speak_index < times) {
                loop_checkpoint_speak_6();
                if (!loop_checkpoint_speak_running) break;
                loop_checkpoint_speak_index++;
            }
        }
    }
    event_2228_6_end: ;
}
// Function purpose: generated callback event_func_4041 processes event block(s) 2229_6. Actions/conditions:
//        2229_6: changes a stored game value.
void Frames::event_func_4041()
{
    VITA_LEGACY_EVENT();
    // event 2229_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_2229_6_end;
        checkpointguard_423_instances.clear_selection();
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!checkpointguard_423_instances.has_selection()) goto event_2229_6_end;
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_2229_6_end: ;
}
// Function purpose: generated callback event_func_4042 processes event block(s) 2230_6. Actions/conditions:
//        2230_6: sets Illegals to 0.
void Frames::event_func_4042()
{
    // event 2230_6 : sets Illegals to 0
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2230_6_end;
        every_2230_6 += manager.dt;
        if (every_2230_6 < 1.0) goto event_2230_6_end;
        every_2230_6 -= 1.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(149, str_illegals_722)) > (0))) goto event_2230_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 0);
    }
    event_2230_6_end: ;
}
// Function purpose: generated callback event_func_4043 processes event block(s) 2231_6. Actions/conditions:
//        2231_6: updates a value on the target object; sets the selected object's numeric value to
//        get_distance_int(selected object->get_x(), selected object->get_y(), playerBase->get_x(),
//        playerBase->get_y()).
void Frames::event_func_4043()
{
    // event 2231_6 : updates a value on the target object; sets the selected object's numeric value to get_distance_int(selected object->get_x(), selected object->get_y(), playerBase->get_x(), playerBase->get_y())
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2231_6_end;
        every_2231_6 += manager.dt;
        if (every_2231_6 < 1.0) goto event_2231_6_end;
        every_2231_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2231_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_dir_diff_abs((((Active*)*it)->get_direction()*11.6), get_angle_int(((Active*)*it)->get_x(), ((Active*)*it)->get_y(), ((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y())));
            ((Active*)*it)->alterables->values.set(2, get_distance_int(((Active*)*it)->get_x(), ((Active*)*it)->get_y(), ((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y()));
        }
        {
            loop_cam_illegals_running = true;
            int times = int(1);
            loop_cam_illegals_index = 0;
            while (loop_cam_illegals_index < times) {
                loop_cam_illegals_6();
                if (!loop_cam_illegals_running) break;
                loop_cam_illegals_index++;
            }
        }
    }
    event_2231_6_end: ;
}
// Function purpose: generated callback event_func_4044 processes event block(s) 2244_6. Actions/conditions:
//        2244_6: sets currCam to ((Active*)get_single(camera_237_instances,
//        default_active_instance))->alterables->values.get(0); sets LookX to playerBase->get_x(); sets LookY to
//        playerBase->get_y(); plus 5 more actions.
void Frames::event_func_4044()
{
    // event 2244_6 : sets currCam to ((Active*)get_single(camera_237_instances, default_active_instance))->alterables->values.get(0); sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2244_6_end;
        every_2244_6 += manager.dt;
        if (every_2244_6 < 1.0) goto event_2244_6_end;
        every_2244_6 -= 1.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(149, str_illegals_722)) > (0))) goto event_2244_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (70/MathHelper()/2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (80))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2244_6_end;
        if (!((((Active*)get_single(camera_237_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_2244_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(2)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2244_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2244_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(712, str_currcam_1877, ((Active*)get_single(camera_237_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(camera_237_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(camera_237_instances, default_active_instance))->get_y()+24);
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
        {
            loop_cam_spotted_running = true;
            int times = int(1);
            loop_cam_spotted_index = 0;
            while (loop_cam_spotted_index < times) {
                loop_cam_spotted_6();
                if (!loop_cam_spotted_running) break;
                loop_cam_spotted_index++;
            }
        }
    }
    event_2244_6_end: ;
}
// Function purpose: generated callback event_func_4045 processes event block(s) 2248_6. Actions/conditions:
//        2248_6: sets the selected object's direction to selected object->get_direction()+3.
void Frames::event_func_4045()
{
    // event 2248_6 : sets the selected object's direction to selected object->get_direction()+3
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2248_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2248_6_end;
        every_2248_6 += manager.dt;
        if (every_2248_6 < 1.0) goto event_2248_6_end;
        every_2248_6 -= 1.0;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(2)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2248_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+3);
        }
    }
    event_2248_6_end: ;
}
// Function purpose: generated callback event_func_4046 processes event block(s) 2249_6. Actions/conditions:
//        2249_6: sets the selected object's direction to selected object->get_direction()-3.
void Frames::event_func_4046()
{
    // event 2249_6 : sets the selected object's direction to selected object->get_direction()-3
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2249_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2249_6_end;
        every_2249_6 += manager.dt;
        if (every_2249_6 < 1.0) goto event_2249_6_end;
        every_2249_6 -= 1.0;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(2)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2249_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()-3);
        }
    }
    event_2249_6_end: ;
}
// Function purpose: generated callback event_func_4047 processes event block(s) 2250_6. Actions/conditions:
//        2250_6: sets the selected object's numeric value to 1; sets the selected object's direction to 18.
void Frames::event_func_4047()
{
    // event 2250_6 : sets the selected object's numeric value to 1; sets the selected object's direction to 18
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2250_6_end;
        if (!((((Active*)get_instance(camera_237_instances, default_active_instance))->get_direction()) <= (18))) goto event_2250_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(2)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2250_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->set_direction(18);
        }
    }
    event_2250_6_end: ;
}
// Function purpose: generated callback event_func_4048 processes event block(s) 2251_6. Actions/conditions:
//        2251_6: sets the selected object's numeric value to 0; sets the selected object's direction to 30.
void Frames::event_func_4048()
{
    // event 2251_6 : sets the selected object's numeric value to 0; sets the selected object's direction to 30
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2251_6_end;
        if (!((((Active*)get_instance(camera_237_instances, default_active_instance))->get_direction()) >= (30))) goto event_2251_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(2)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2251_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->set_direction(30);
        }
    }
    event_2251_6_end: ;
}
// Function purpose: generated callback event_func_4049 processes event block(s) 2252_6. Actions/conditions:
//        2252_6: sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        playerBase->x + 0, playerBase->y + 0).
void Frames::event_func_4049()
{
    // event 2252_6 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, playerBase->x + 0, playerBase->y + 0)
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2252_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2252_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
        }
    }
    event_2252_6_end: ;
}
// Function purpose: generated callback event_func_4050 processes event block(s) 2253_6. Actions/conditions:
//        2253_6: sets the object's animation to 0.
void Frames::event_func_4050()
{
    // event 2253_6 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2253_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2253_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2253_6_end: ;
}
// Function purpose: generated callback event_func_4051 processes event block(s) 2254_6. Actions/conditions:
//        2254_6: changes a stored game value; sets the object's animation to 5.
void Frames::event_func_4051()
{
    VITA_LEGACY_EVENT();
    // event 2254_6 : changes a stored game value; sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2254_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2254_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2254_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 1);
            ((Active*)*it)->force_animation(5);
        }
    }
    event_2254_6_end: ;
}
// Function purpose: generated callback event_func_4052 processes event block(s) 2255_6. Actions/conditions:
//        2255_6: sets the object's animation to 0.
void Frames::event_func_4052()
{
    // event 2255_6 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2255_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2255_6_end;
        powergen_360_instances.clear_selection();
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!powergen_360_instances.has_selection()) goto event_2255_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2255_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2255_6_end: ;
}
// Function purpose: generated callback event_func_4053 processes event block(s) 2256_6. Actions/conditions:
//        2256_6: sets the object's animation to 0.
void Frames::event_func_4053()
{
    // event 2256_6 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2256_6_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->animation_finished == 2)) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_2256_6_end;
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2256_6_end: ;
}
// Function purpose: generated callback event_func_4054 processes event block(s) 2258_6. Actions/conditions:
//        2258_6: sets the selected object's direction to pick_random(15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27,
//        28, 29, 30, 31).
void Frames::event_func_4054()
{
    // event 2258_6 : sets the selected object's direction to pick_random(15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31)
    {
        if (!(group_code_1)) goto event_2258_6_end;
        spotlightsroof_213_instances.clear_selection();
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) <= (80))) { it.deselect(); continue; }
        }
        if (!spotlightsroof_213_instances.has_selection()) goto event_2258_6_end;
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31));
        }
    }
    event_2258_6_end: ;
}
// Function purpose: generated callback event_func_4055 processes event block(s) 2259_6. Actions/conditions:
//        2259_6: sets the selected object's direction to pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
//        14, 15).
void Frames::event_func_4055()
{
    // event 2259_6 : sets the selected object's direction to pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15)
    {
        if (!(group_code_1)) goto event_2259_6_end;
        spotlightsroof_213_instances.clear_selection();
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (height-80))) { it.deselect(); continue; }
        }
        if (!spotlightsroof_213_instances.has_selection()) goto event_2259_6_end;
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
        }
    }
    event_2259_6_end: ;
}
// Function purpose: generated callback event_func_4056 processes event block(s) 2260_6. Actions/conditions:
//        2260_6: sets the selected object's direction to pick_random(15, 0, 1, 2, 3, 4, 5, 6, 7, 25, 26, 27, 28, 29,
//        30, 31).
void Frames::event_func_4056()
{
    // event 2260_6 : sets the selected object's direction to pick_random(15, 0, 1, 2, 3, 4, 5, 6, 7, 25, 26, 27, 28, 29, 30, 31)
    {
        if (!(group_code_1)) goto event_2260_6_end;
        spotlightsroof_213_instances.clear_selection();
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (80))) { it.deselect(); continue; }
        }
        if (!spotlightsroof_213_instances.has_selection()) goto event_2260_6_end;
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(15, 0, 1, 2, 3, 4, 5, 6, 7, 25, 26, 27, 28, 29, 30, 31));
        }
    }
    event_2260_6_end: ;
}
// Function purpose: generated callback event_func_4057 processes event block(s) 2261_6. Actions/conditions:
//        2261_6: sets the selected object's direction to pick_random(15, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
//        20, 21, 22, 23).
void Frames::event_func_4057()
{
    // event 2261_6 : sets the selected object's direction to pick_random(15, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23)
    {
        if (!(group_code_1)) goto event_2261_6_end;
        spotlightsroof_213_instances.clear_selection();
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (width-80))) { it.deselect(); continue; }
        }
        if (!spotlightsroof_213_instances.has_selection()) goto event_2261_6_end;
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(15, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23));
        }
    }
    event_2261_6_end: ;
}
// Function purpose: generated callback event_func_4058 processes event block(s) 2262_6. Actions/conditions:
//        2262_6: saves the current object selection; sets the selected object's visibility to true.
void Frames::event_func_4058()
{
    // event 2262_6 : saves the current object selection; sets the selected object's visibility to true
    bool or_result_2262_6 = false;
    bool or_temp_result_2262_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_2262_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) >= (22))) goto or_event_2262_6_0_end;
        spotlightsroof_213_instances.clear_selection();
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!spotlightsroof_213_instances.has_selection()) goto or_event_2262_6_0_end;
        or_result_2262_6 = true;
        or_temp_result_2262_6_0 = true;
    }
    or_event_2262_6_0_end: ;
    spotlightsroof_213_instances.clear_saved_selection();
    if (or_temp_result_2262_6_0) {
        spotlightsroof_213_instances.save_selection();
    }
    // event 2262_6 : saves the current object selection; sets the selected object's visibility to true
    bool or_temp_result_2262_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_2262_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) < (7))) goto or_event_2262_6_1_end;
        spotlightsroof_213_instances.clear_selection();
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!spotlightsroof_213_instances.has_selection()) goto or_event_2262_6_1_end;
        or_result_2262_6 = true;
        or_temp_result_2262_6_1 = true;
        or_event_2262_6_1_end: ;
        if (or_temp_result_2262_6_1) {
            spotlightsroof_213_instances.save_selection();
        }
        if (!or_result_2262_6) goto or_final_or_event_2262_6_1_end;
        spotlightsroof_213_instances.empty_selection();
        if (or_temp_result_2262_6_0 || or_temp_result_2262_6_1) {
            spotlightsroof_213_instances.restore_selection();
        }
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    or_final_or_event_2262_6_1_end: ;
}
// Function purpose: generated callback event_func_4059 processes event block(s) 2263_6. Actions/conditions:
//        2263_6: sets the selected object's visibility to false; stops the object's movement.
void Frames::event_func_4059()
{
    // event 2263_6 : sets the selected object's visibility to false; stops the object's movement
    {
        if (!(group_code_1)) goto event_2263_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (7))) goto event_2263_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (22))) goto event_2263_6_end;
        spotlightsroof_213_instances.clear_selection();
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!spotlightsroof_213_instances.has_selection()) goto event_2263_6_end;
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_2263_6_end: ;
}
// Function purpose: generated callback event_func_4060 processes event block(s) 2265_6. Actions/conditions:
//        2265_6: sets the selected object's horizontal position to selected object->alterables->values.get(2); sets
//        the selected object's vertical position to selected object->alterables->values.get(3); updates game state
//        with selected object->get_movement()->start().
void Frames::event_func_4060()
{
    // event 2265_6 : sets the selected object's horizontal position to selected object->alterables->values.get(2); sets the selected object's vertical position to selected object->alterables->values.get(3); updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_2265_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_2265_6_end;
        spotlightsroof_213_instances.clear_selection();
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!spotlightsroof_213_instances.has_selection()) goto event_2265_6_end;
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_2265_6_end: ;
}
// Function purpose: generated callback event_func_4061 processes event block(s) 2266_6. Actions/conditions:
//        2266_6: stops the object's movement.
void Frames::event_func_4061()
{
    // event 2266_6 : stops the object's movement
    {
        if (!(group_code_1)) goto event_2266_6_end;
        spotlightsroof_213_instances.clear_selection();
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            if (((Active*)(*it))->get_movement()->is_stopped()) { it.deselect(); continue; }
        }
        if (!spotlightsroof_213_instances.has_selection()) goto event_2266_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) != (5))) goto event_2266_6_end;
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_2266_6_end: ;
}
// Function purpose: generated callback event_func_4062 processes event block(s) 2267_6. Actions/conditions:
//        2267_6: checks scene is active; the event-specific game state condition is met; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4062()
{
    // event 2267_6 : checks scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2267_6_end;
        if (!((((Active*)get_instance(screenTint_instances))->alterables->values.get(0)) < (120))) goto event_2267_6_end;
        if (!((torch_331_instances.size()) == (0))) goto event_2267_6_end;
        {
            loop_create_torches_running = true;
            int times = int(5);
            loop_create_torches_index = 0;
            while (loop_create_torches_index < times) {
                loop_create_torches_6();
                if (!loop_create_torches_running) break;
                loop_create_torches_index++;
            }
        }
        {
            loop_create_torches_jeep_running = true;
            int times = int(1);
            loop_create_torches_jeep_index = 0;
            while (loop_create_torches_jeep_index < times) {
                loop_create_torches_jeep_6();
                if (!loop_create_torches_jeep_running) break;
                loop_create_torches_jeep_index++;
            }
        }
    }
    event_2267_6_end: ;
}
// Function purpose: generated callback event_func_4063 processes event block(s) 2271_6. Actions/conditions:
//        2271_6: removes the selected object.
void Frames::event_func_4063()
{
    // event 2271_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_2271_6_end;
        if (!((((Active*)get_instance(screenTint_instances))->alterables->values.get(0)) >= (120))) goto event_2271_6_end;
        if (!((torch_331_instances.size()) > (0))) goto event_2271_6_end;
        torch_331_instances.clear_selection();
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2271_6_end: ;
}
