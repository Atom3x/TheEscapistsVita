#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_5975 processes event block(s) 986_11. Actions/conditions:
//        986_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5975()
{
    // event 986_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_986_11_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_986_11_end;
        if (!check_not_overlap(qualifier_1, qualifier_19)) goto event_986_11_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_986_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_1));
            if (obj1 == NULL) goto compare_986_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_986_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 18)) goto event_986_11_end;
        }
        compare_986_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_986_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_986_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_986_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_986_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_986_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(129, str_onmount_691)) == (0))) goto event_986_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
        }
        {
            loop_perch_running = true;
            int times = int(1);
            loop_perch_index = 0;
            while (loop_perch_index < times) {
                loop_perch_11();
                if (!loop_perch_running) break;
                loop_perch_index++;
            }
        }
    }
    event_986_11_end: ;
}
// Function purpose: generated callback event_func_5976 processes event block(s) 993_11. Actions/conditions:
//        993_11: sets SleepMenu to 0.
void Frames::event_func_5976()
{
    // event 993_11 : sets SleepMenu to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_993_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(338, str_sleepmenu_1128)) == (1))) goto event_993_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(338, str_sleepmenu_1128, 0);
    }
    event_993_11_end: ;
}
// Function purpose: generated callback event_func_5977 processes event block(s) 1002_11. Actions/conditions:
//        1002_11: sets chairID to ((Active*)get_single(canteenchair_312_instances,
//        default_active_instance))->alterables->values.get(0); sets charID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); updates
//        game state with DynamicLoops::iterator dyn_it =
//        (*loops).find(chair_push_off_+number_to_string(((Active*)get_single(; plus 5 more actions.
void Frames::event_func_5977()
{
    // event 1002_11 : sets chairID to ((Active*)get_single(canteenchair_312_instances, default_active_instance))->alterables->values.get(0); sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); updates game state with DynamicLoops::iterator dyn_it = (*loops).find(chair_push_off_+number_to_string(((Active*)get_single(; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1002_11_end;
        playerBase_instances.clear_selection();
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(playerBase_instances, canteenchair_312_instances)) goto event_1002_11_end;
        inmateBase_instances.clear_selection();
        if (!check_overlap(playerBase_instances, inmateBase_instances)) goto event_1002_11_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(24))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1002_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(918, str_chairid_2233, ((Active*)get_single(canteenchair_312_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        {
            if (loops == NULL) goto dynamic_1002_11_0_end;
            DynamicLoops::iterator dyn_it = (*loops).find(str_chair_push_off_2558+number_to_string(((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_direction()));
            if (dyn_it == (*loops).end()) goto dynamic_1002_11_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_1002_11_0_end: ;
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_1002_11_end: ;
}
// Function purpose: generated callback event_func_5978 processes event block(s) 1005_11. Actions/conditions:
//        1005_11: sets gymID to ((Active*)get_single(qualifier_9,
//        default_active_instance))->alterables->values.get(0); sets charID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); plays a
//        sound or music track.
void Frames::event_func_5978()
{
    // event 1005_11 : sets gymID to ((Active*)get_single(qualifier_9, default_active_instance))->alterables->values.get(0); sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1005_11_end;
        playerBase_instances.clear_selection();
        qualifier_9.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_9)) goto event_1005_11_end;
        inmateBase_instances.clear_selection();
        if (!check_overlap(playerBase_instances, inmateBase_instances)) goto event_1005_11_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(31))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1005_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(414, str_gymid_1231, ((Active*)get_single(qualifier_9, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_gym_push_off_running = true;
            int times = int(1);
            loop_gym_push_off_index = 0;
            while (loop_gym_push_off_index < times) {
                loop_gym_push_off_11();
                if (!loop_gym_push_off_running) break;
                loop_gym_push_off_index++;
            }
        }
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_1005_11_end: ;
}
// Function purpose: generated callback event_func_5979 processes event block(s) 1009_11. Actions/conditions:
//        1009_11: sets LookX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x();
//        sets LookY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets LClick
//        to 1; plus 5 more actions.
void Frames::event_func_5979()
{
    // event 1009_11 : sets LookX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets LClick to 1; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1009_11_end;
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_1009_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1009_11_end;
        if (!check_not_overlap(guardBase_instances, qualifier_6)) goto event_1009_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1009_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(6)) goto event_1009_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1009_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1009_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_1009_11_end;
        if (frame_time - restrict_1009_11 < 1.0) goto event_1009_11_end;
        restrict_1009_11 = frame_time;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(258, str_pid_913, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(632, str_prep_1719, get_ceil(((((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(12)+0.0)/MathHelper()/33)+0.0));
        {
            loop_talk_los_running = true;
            int times = int(1);
            loop_talk_los_index = 0;
            while (loop_talk_los_index < times) {
                loop_talk_los_6();
                if (!loop_talk_los_running) break;
                loop_talk_los_index++;
            }
        }
        {
            loop_talk_loop_guard_running = true;
            int times = int(1);
            loop_talk_loop_guard_index = 0;
            while (loop_talk_loop_guard_index < times) {
                loop_talk_loop_guard_11();
                if (!loop_talk_loop_guard_running) break;
                loop_talk_loop_guard_index++;
            }
        }
    }
    event_1009_11_end: ;
}
// Function purpose: generated callback event_func_5980 processes event block(s) 1015_11. Actions/conditions:
//        1015_11: sets HasMission to 0; sets LookX to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->get_x(); sets LookY to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->get_y(); plus 7 more actions.
void Frames::event_func_5980()
{
    // event 1015_11 : sets HasMission to 0; sets LookX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y(); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1015_11_end;
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_1015_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1015_11_end;
        if (!check_not_overlap(inmateBase_instances, qualifier_6)) goto event_1015_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1015_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(6)) goto event_1015_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1015_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(919, str_donttalk_2234)) == (0))) goto event_1015_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1015_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_1015_11_end;
        if (frame_time - restrict_1015_11 < 1.0) goto event_1015_11_end;
        restrict_1015_11 = frame_time;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(630, str_hasmission_1716, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(258, str_pid_913, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(631, str_convtype_1717, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(632, str_prep_1719, get_ceil(((((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12)+0.0)/MathHelper()/33)+0.0));
        {
            loop_talk_los_running = true;
            int times = int(1);
            loop_talk_los_index = 0;
            while (loop_talk_los_index < times) {
                loop_talk_los_6();
                if (!loop_talk_los_running) break;
                loop_talk_los_index++;
            }
        }
        {
            loop_talk_loop_running = true;
            int times = int(1);
            loop_talk_loop_index = 0;
            while (loop_talk_loop_index < times) {
                loop_talk_loop_11();
                if (!loop_talk_loop_running) break;
                loop_talk_loop_index++;
            }
        }
    }
    event_1015_11_end: ;
}
// Function purpose: generated callback event_func_5981 processes event block(s) 1026_11. Actions/conditions:
//        1026_11: sets LClick to 1; sets LootID to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); sets a stored numeric value; plus 7 more actions.
void Frames::event_func_5981()
{
    // event 1026_11 : sets LClick to 1; sets LootID to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); sets a stored numeric value; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1026_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1026_11_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_14)) goto event_1026_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1026_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1026_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1026_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(12, str_lootid_452, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_stolenkeys_606+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_stolenkeys_606+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(148, str_looted_721, 0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(13);
        {
            loop_build_loot_gear_slots_running = true;
            int times = int(1);
            loop_build_loot_gear_slots_index = 0;
            while (loop_build_loot_gear_slots_index < times) {
                loop_build_loot_gear_slots_11();
                if (!loop_build_loot_gear_slots_running) break;
                loop_build_loot_gear_slots_index++;
            }
        }
        {
            loop_build_loot_slots_running = true;
            int times = int(6);
            loop_build_loot_slots_index = 0;
            while (loop_build_loot_slots_index < times) {
                loop_build_loot_slots_6();
                if (!loop_build_loot_slots_running) break;
                loop_build_loot_slots_index++;
            }
        }
        {
            loop_fill_loot_gear_slots_running = true;
            int times = int(1);
            loop_fill_loot_gear_slots_index = 0;
            while (loop_fill_loot_gear_slots_index < times) {
                loop_fill_loot_gear_slots_11();
                if (!loop_fill_loot_gear_slots_running) break;
                loop_fill_loot_gear_slots_index++;
            }
        }
        {
            loop_fill_loot_slots_running = true;
            int times = int(6);
            loop_fill_loot_slots_index = 0;
            while (loop_fill_loot_slots_index < times) {
                loop_fill_loot_slots_11();
                if (!loop_fill_loot_slots_running) break;
                loop_fill_loot_slots_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1026_11_end: ;
}
// Function purpose: generated callback event_func_5982 processes event block(s) 1053_11. Actions/conditions:
//        1053_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_5982()
{
    // event 1053_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1053_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1053_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1053_11_end;
        if (!(((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 1))) < (25))) goto event_1053_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1053_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_1053_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1053_11_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1053_11_end;
        }
        compare_1053_11_0_end: ;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726)) > (0))) goto event_1053_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1053_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1053_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_1053_11_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 1)) != (92))) goto event_1053_11_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_1053_11_end;
        if (!check_not_overlap(playerBase_instances, qualifier_1)) goto event_1053_11_end;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_1053_11_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_6)) goto event_1053_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_7)) goto event_1053_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_8)) goto event_1053_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_1053_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_4)) goto event_1053_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_22)) goto event_1053_11_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_1053_11_end: ;
}
// Function purpose: generated callback event_func_5983 processes event block(s) 1054_11. Actions/conditions:
//        1054_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_5983()
{
    // event 1054_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1054_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1054_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1054_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_1054_11_end;
        if (!(((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 1))) < (25))) goto event_1054_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_1054_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1054_11_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1054_11_end;
        }
        compare_1054_11_0_end: ;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_1054_11_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726)) > (0))) goto event_1054_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1054_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1054_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_1054_11_end;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_1054_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(924, str_digpower_2240, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(642, str_digx_1740, ((Active*)get_instance(cursor_178_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(643, str_digy_1741, ((Active*)get_instance(cursor_178_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(925, str_digtype_2241, str_ug_up_2242);
        {
            loop_digabove_check_running = true;
            int times = int(1);
            loop_digabove_check_index = 0;
            while (loop_digabove_check_index < times) {
                loop_digabove_check_11();
                if (!loop_digabove_check_running) break;
                loop_digabove_check_index++;
            }
        }
    }
    event_1054_11_end: ;
}
// Function purpose: generated callback event_func_5984 processes event block(s) 1062_11. Actions/conditions:
//        1062_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_5984()
{
    // event 1062_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1062_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1062_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1062_11_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_digging_726)) > (0))) goto event_1062_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_1062_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_1062_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1062_11_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1062_11_end;
        }
        compare_1062_11_0_end: ;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 1)) != (92))) goto event_1062_11_end;
        if (!(((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_instance(cursor_178_instances))->get_x(), ((Active*)get_instance(cursor_178_instances))->get_y(), 0))) < (25))) goto event_1062_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1062_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_1062_11_end;
        if (!(((Active*)get_instance(cursor_178_instances))->overlaps_background())) goto event_1062_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1062_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(924, str_digpower_2240, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(642, str_digx_1740, ((Active*)get_instance(cursor_178_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(643, str_digy_1741, ((Active*)get_instance(cursor_178_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(925, str_digtype_2241, str_ug_across_2243);
        {
            loop_digbelow_check_running = true;
            int times = int(1);
            loop_digbelow_check_index = 0;
            while (loop_digbelow_check_index < times) {
                loop_digbelow_check_11();
                if (!loop_digbelow_check_running) break;
                loop_digbelow_check_index++;
            }
        }
    }
    event_1062_11_end: ;
}
// Function purpose: generated callback event_func_5985 processes event block(s) 1064_11. Actions/conditions:
//        1064_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_5985()
{
    // event 1064_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1064_11_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_1064_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ventCover_instances));
            if (obj1 == NULL) goto compare_1064_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1064_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1064_11_end;
        }
        compare_1064_11_0_end: ;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_unscrewing_729)) > (0))) goto event_1064_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1064_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1064_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1064_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) == (0))) goto event_1064_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(923, str_itemhp_slot_2239, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(927, str_unscrewx_2248, ((Active*)get_single(ventCover_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(928, str_unscrewy_2249, ((Active*)get_single(ventCover_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(929, str_unscrewval_2250, 100);
        {
            loop_unscrew_check_running = true;
            int times = int(1);
            loop_unscrew_check_index = 0;
            while (loop_unscrew_check_index < times) {
                loop_unscrew_check_11();
                if (!loop_unscrew_check_running) break;
                loop_unscrew_check_index++;
            }
        }
    }
    event_1064_11_end: ;
}
// Function purpose: generated callback event_func_5986 processes event block(s) 1069_11. Actions/conditions:
//        1069_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5986()
{
    // event 1069_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1069_11_end;
        containerkitchen_229_instances.clear_selection();
        for (ObjectIterator it(containerkitchen_229_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerkitchen_229_instances.has_selection()) goto event_1069_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1069_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(containerkitchen_229_instances));
            if (obj1 == NULL) goto compare_1069_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1069_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_1069_11_end;
        }
        compare_1069_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1069_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1069_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_1069_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1069_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 65);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_1069_11_end: ;
}
// Function purpose: generated callback event_func_5987 processes event block(s) 1070_11. Actions/conditions:
//        1070_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5987()
{
    // event 1070_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1070_11_end;
        containerlaundrydirty_274_instances.clear_selection();
        for (ObjectIterator it(containerlaundrydirty_274_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerlaundrydirty_274_instances.has_selection()) goto event_1070_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(containerlaundrydirty_274_instances));
            if (obj1 == NULL) goto compare_1070_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1070_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_1070_11_end;
        }
        compare_1070_11_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1070_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1070_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1070_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1070_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_1070_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 63+randrange_event(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_1070_11_end: ;
}
// Function purpose: generated callback event_func_5988 processes event block(s) 1071_11. Actions/conditions:
//        1071_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5988()
{
    // event 1071_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1071_11_end;
        containertimber_267_instances.clear_selection();
        for (ObjectIterator it(containertimber_267_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containertimber_267_instances.has_selection()) goto event_1071_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(containertimber_267_instances));
            if (obj1 == NULL) goto compare_1071_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1071_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1071_11_end;
        }
        compare_1071_11_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1071_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1071_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1071_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1071_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_1071_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_1071_11_end: ;
}
// Function purpose: generated callback event_func_5989 processes event block(s) 1072_11. Actions/conditions:
//        1072_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5989()
{
    // event 1072_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1072_11_end;
        containertailorout_395_instances.clear_selection();
        for (ObjectIterator it(containertailorout_395_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containertailorout_395_instances.has_selection()) goto event_1072_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_1072_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containertailorout_395_instances));
            if (obj2 == NULL) goto compare_1072_11_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 16;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1072_11_end;
        }
        compare_1072_11_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1072_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1072_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1072_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1072_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_1072_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 137);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_1072_11_end: ;
}
// Function purpose: generated callback event_func_5990 processes event block(s) 1073_11. Actions/conditions:
//        1073_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5990()
{
    // event 1073_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1073_11_end;
        metalshop_326_instances.clear_selection();
        for (ObjectIterator it(metalshop_326_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!metalshop_326_instances.has_selection()) goto event_1073_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_1073_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(metalshop_326_instances));
            if (obj2 == NULL) goto compare_1073_11_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 16;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1073_11_end;
        }
        compare_1073_11_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1073_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1073_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1073_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1073_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_1073_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 76);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_1073_11_end: ;
}
// Function purpose: generated callback event_func_5991 processes event block(s) 1074_11. Actions/conditions:
//        1074_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5991()
{
    // event 1074_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1074_11_end;
        truck_751_instances.clear_selection();
        for (ObjectIterator it(truck_751_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!truck_751_instances.has_selection()) goto event_1074_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_1074_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(truck_751_instances));
            if (obj2 == NULL) goto compare_1074_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 48)) goto event_1074_11_end;
        }
        compare_1074_11_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1074_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1074_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1074_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1074_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_1074_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_1074_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 138+randrange_event(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_1074_11_end: ;
}
// Function purpose: generated callback event_func_5992 processes event block(s) 1075_11. Actions/conditions:
//        1075_11: sets thisID to ((Active*)get_single(desks_717_instances,
//        default_active_instance))->alterables->values.get(0); sets thisRange to get_distance_int(get_mouse_x(),
//        get_mouse_y(), playerBase->get_x(), playerBase->get_y()).
void Frames::event_func_5992()
{
    // event 1075_11 : sets thisID to ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0); sets thisRange to get_distance_int(get_mouse_x(), get_mouse_y(), playerBase->get_x(), playerBase->get_y())
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1075_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_1075_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(931, str_thisid_2252, ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(932, str_thisrange_2253, get_distance_int(get_mouse_x(), get_mouse_y(), ((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y()));
    }
    event_1075_11_end: ;
}
// Function purpose: generated callback event_func_5993 processes event block(s) 1076_11. Actions/conditions:
//        1076_11: sets LClick to 1; sets Searching_Desk to 100; sets CurrentContainer to
//        ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0); plus 7 more
//        actions.
void Frames::event_func_5993()
{
    // event 1076_11 : sets LClick to 1; sets Searching_Desk to 100; sets CurrentContainer to ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1076_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_1076_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(931, str_thisid_2252)) != (((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208)))) goto event_1076_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(932, str_thisrange_2253)) <= (20))) goto event_1076_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) == (0))) goto event_1076_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1076_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1076_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_1076_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1076_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1076_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(362, str_searching_desk_1156, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(774, str_desklooking_1954, ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0));
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(desks_717_instances, it.current_index))->x + 0, ((Active*)get_single(desks_717_instances, it.current_index))->y + 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_1_97));
        {
            loop_create_activity_box_running = true;
            int times = int(1);
            loop_create_activity_box_index = 0;
            while (loop_create_activity_box_index < times) {
                loop_create_activity_box_11();
                if (!loop_create_activity_box_running) break;
                loop_create_activity_box_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1076_11_end: ;
}
// Function purpose: generated callback event_func_5994 processes event block(s) 1077_11. Actions/conditions:
//        1077_11: sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_717_instances,
//        default_active_instance))->alterables->values.get(0); sets the object's animation to 16; plus 10 more
//        actions.
void Frames::event_func_5994()
{
    // event 1077_11 : sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0); sets the object's animation to 16; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1077_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_1077_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(931, str_thisid_2252)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208)))) goto event_1077_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(932, str_thisrange_2253)) <= (20))) goto event_1077_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1077_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1077_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_1077_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1077_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1077_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_68_2254));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+4);
            ((Text*)*it)->set_visible(true);
        }
        {
            loop_build_desk_running = true;
            int times = int(20);
            loop_build_desk_index = 0;
            while (loop_build_desk_index < times) {
                loop_build_desk_6();
                if (!loop_build_desk_running) break;
                loop_build_desk_index++;
            }
        }
        {
            loop_fill_desk_running = true;
            int times = int(20);
            loop_fill_desk_index = 0;
            while (loop_fill_desk_index < times) {
                loop_fill_desk_11();
                if (!loop_fill_desk_running) break;
                loop_fill_desk_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1077_11_end: ;
}
// Function purpose: generated callback event_func_5995 processes event block(s) 1078_11. Actions/conditions:
//        1078_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5995()
{
    // event 1078_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1078_11_end;
        containermedical_269_instances.clear_selection();
        for (ObjectIterator it(containermedical_269_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containermedical_269_instances.has_selection()) goto event_1078_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_1078_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containermedical_269_instances));
            if (obj2 == NULL) goto compare_1078_11_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1078_11_end;
        }
        compare_1078_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1078_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1078_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1078_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1078_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_1078_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(containermedical_269_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_medibox_check_running = true;
            int times = int(1);
            loop_medibox_check_index = 0;
            while (loop_medibox_check_index < times) {
                loop_medibox_check_11();
                if (!loop_medibox_check_running) break;
                loop_medibox_check_index++;
            }
        }
    }
    event_1078_11_end: ;
}
// Function purpose: generated callback event_func_5996 processes event block(s) 1082_11. Actions/conditions:
//        1082_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 14 more actions.
void Frames::event_func_5996()
{
    // event 1082_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1082_11_end;
        qualifier_17.clear_selection();
        for (QualifierIterator it(qualifier_17); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_17.has_selection()) goto event_1082_11_end;
        for (ObjectIterator it(containermedical_269_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!containermedical_269_instances.has_selection()) goto event_1082_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_1082_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(qualifier_17));
            if (obj2 == NULL) goto compare_1082_11_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1082_11_end;
        }
        compare_1082_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1082_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1082_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1082_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1082_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_1082_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(qualifier_17, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(23);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((Active*)get_single(qualifier_17, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+4);
            ((Text*)*it)->set_visible(true);
        }
        {
            loop_build_container_running = true;
            int times = int(20);
            loop_build_container_index = 0;
            while (loop_build_container_index < times) {
                loop_build_container_6();
                if (!loop_build_container_running) break;
                loop_build_container_index++;
            }
        }
        {
            loop_fill_container_running = true;
            int times = int(20);
            loop_fill_container_index = 0;
            while (loop_fill_container_index < times) {
                loop_fill_container_11();
                if (!loop_fill_container_running) break;
                loop_fill_container_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1082_11_end: ;
}
// Function purpose: generated callback event_func_5997 processes event block(s) 1087_11. Actions/conditions:
//        1087_11: checks scene is active; the event-specific game state condition is met; skips if the event-specific
//        game state condition is met; dialog is open; this handler.
void Frames::event_func_5997()
{
    // event 1087_11 : checks scene is active; the event-specific game state condition is met; skips if the event-specific game state condition is met; dialog is open; this handler
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1087_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1087_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_1087_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) goto event_1087_11_end;
        }
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1087_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(16))) goto event_1087_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1087_11_end;
        {
            loop_des_container_items_running = true;
            int times = int(1);
            loop_des_container_items_index = 0;
            while (loop_des_container_items_index < times) {
                loop_des_container_items_6();
                if (!loop_des_container_items_running) break;
                loop_des_container_items_index++;
            }
        }
    }
    event_1087_11_end: ;
}
// Function purpose: generated callback event_func_5998 processes event block(s) 1088_11. Actions/conditions:
//        1088_11: checks scene is active; the event-specific game state condition is met; skips if the event-specific
//        game state condition is met; dialog is open; this handler.
void Frames::event_func_5998()
{
    // event 1088_11 : checks scene is active; the event-specific game state condition is met; skips if the event-specific game state condition is met; dialog is open; this handler
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1088_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1088_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_1088_11_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) goto event_1088_11_end;
        }
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1088_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(23))) goto event_1088_11_end;
        {
            loop_des_container_items_running = true;
            int times = int(1);
            loop_des_container_items_index = 0;
            while (loop_des_container_items_index < times) {
                loop_des_container_items_6();
                if (!loop_des_container_items_running) break;
                loop_des_container_items_index++;
            }
        }
    }
    event_1088_11_end: ;
}
// Function purpose: generated callback event_func_5999 processes event block(s) 1096_11. Actions/conditions:
//        1096_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_5999()
{
    // event 1096_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1096_11_end;
        checkpointguard_423_instances.clear_selection();
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!checkpointguard_423_instances.has_selection()) goto event_1096_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1096_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (152))) goto event_1096_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1096_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(checkpointguard_423_instances));
            if (obj1 == NULL) goto compare_1096_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1096_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 40)) goto event_1096_11_end;
        }
        compare_1096_11_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1096_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1096_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(str_what_am_i_supposed_to_do_with_them_you_call_that_proof_of_identity_they_re_not_signed_pal_2559, str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count())));
    }
    event_1096_11_end: ;
}
// Function purpose: generated callback event_func_6000 processes event block(s) 1097_11. Actions/conditions:
//        1097_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_6000()
{
    // event 1097_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1097_11_end;
        checkpointguard_423_instances.clear_selection();
        for (ObjectIterator it(checkpointguard_423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!checkpointguard_423_instances.has_selection()) goto event_1097_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1097_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (153))) goto event_1097_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1097_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(checkpointguard_423_instances));
            if (obj1 == NULL) goto compare_1097_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1097_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 40)) goto event_1097_11_end;
        }
        compare_1097_11_0_end: ;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_1097_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1097_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1097_11_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(str_have_a_good_day_seeya_tomorrow_clockin_off_eh_take_care_good_times_2560, str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_1097_11_1; single_instance_1097_11_1 = NULL;
        // select single: true false false
        checkpoint_422_instances.clear_selection();
        for (ObjectIterator p_it(checkpoint_422_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1097_11_1 == NULL)
                    single_instance_1097_11_1 = new_obj;
            }
        }
        for (ObjectIterator it(checkpoint_422_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count())));
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_removeitem_running = true;
            int times = int(1);
            loop_removeitem_index = 0;
            while (loop_removeitem_index < times) {
                loop_removeitem_6();
                if (!loop_removeitem_running) break;
                loop_removeitem_index++;
            }
        }
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_1097_11_end: ;
}
// Function purpose: generated callback event_func_6001 processes event block(s) 1098_11. Actions/conditions:
//        1098_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_6001()
{
    // event 1098_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1098_11_end;
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!camera_237_instances.has_selection()) goto event_1098_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1098_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (13))) goto event_1098_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1098_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(camera_237_instances));
            if (obj1 == NULL) goto compare_1098_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1098_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1098_11_end;
        }
        compare_1098_11_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1098_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1098_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(311, str_beddummy_1088, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1000);
            ((Active*)*it)->force_animation(5);
        }
        FrameObject * single_instance_1098_11_1; single_instance_1098_11_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(camera_237_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1098_11_1 == NULL)
                    single_instance_1098_11_1 = new_obj;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_removeitem_running = true;
            int times = int(1);
            loop_removeitem_index = 0;
            while (loop_removeitem_index < times) {
                loop_removeitem_6();
                if (!loop_removeitem_running) break;
                loop_removeitem_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_1098_11_end: ;
}
// Function purpose: generated callback event_func_6002 processes event block(s) 1099_11. Actions/conditions:
//        1099_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_6002()
{
    // event 1099_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1099_11_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto event_1099_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1099_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (126))) goto event_1099_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1099_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(bedplayer_338_instances));
            if (obj1 == NULL) goto compare_1099_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1099_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1099_11_end;
        }
        compare_1099_11_0_end: ;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_1099_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1099_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1099_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(311, str_beddummy_1088, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_1099_11_1; single_instance_1099_11_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bedplayer_338_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dummies_746(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1099_11_1 == NULL)
                    single_instance_1099_11_1 = new_obj;
            }
        }
        FrameObject * single_instance_1099_11_2; single_instance_1099_11_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bedplayer_338_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_1099_11_2 == NULL)
                    single_instance_1099_11_2 = new_obj;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_removeitem_running = true;
            int times = int(1);
            loop_removeitem_index = 0;
            while (loop_removeitem_index < times) {
                loop_removeitem_6();
                if (!loop_removeitem_running) break;
                loop_removeitem_index++;
            }
        }
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_1099_11_end: ;
}
// Function purpose: generated callback event_func_6003 processes event block(s) 1100_11. Actions/conditions:
//        1100_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_6003()
{
    // event 1100_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1100_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1100_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (96))) goto event_1100_11_end;
        if (!(((Active*)get_instance(cursor_178_instances))->overlaps_background())) goto event_1100_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_1100_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1100_11_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1100_11_end;
        }
        compare_1100_11_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1100_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1100_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1100_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_make_toothshiv_running = true;
            int times = int(1);
            loop_make_toothshiv_index = 0;
            while (loop_make_toothshiv_index < times) {
                loop_make_toothshiv_11();
                if (!loop_make_toothshiv_running) break;
                loop_make_toothshiv_index++;
            }
        }
    }
    event_1100_11_end: ;
}
// Function purpose: generated callback event_func_6004 processes event block(s) 1103_11. Actions/conditions:
//        1103_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_6004()
{
    // event 1103_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1103_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1103_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (17))) goto event_1103_11_end;
        if (!(((Active*)get_instance(cursor_178_instances))->overlaps_background())) goto event_1103_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_1103_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1103_11_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1103_11_end;
        }
        compare_1103_11_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1103_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1103_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1103_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_make_combshiv_running = true;
            int times = int(1);
            loop_make_combshiv_index = 0;
            while (loop_make_combshiv_index < times) {
                loop_make_combshiv_11();
                if (!loop_make_combshiv_running) break;
                loop_make_combshiv_index++;
            }
        }
    }
    event_1103_11_end: ;
}
// Function purpose: generated callback event_func_6005 processes event block(s) 1111_11. Actions/conditions:
//        1111_11: sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions.
void Frames::event_func_6005()
{
    // event 1111_11 : sets LClick to 1; sets currNPC to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); creates a fx 185 object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1111_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1111_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (105))) goto event_1111_11_end;
        if (!((((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_1111_11_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1111_11_end;
        if (!((get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((Active*)get_single(qualifier_14, default_active_instance))->get_x(), ((Active*)get_single(qualifier_14, default_active_instance))->get_y())) <= (30))) goto event_1111_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1111_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1111_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1111_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(415, str_currnpc_1233, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        FrameObject * single_instance_1111_11_0; single_instance_1111_11_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1111_11_0 == NULL)
                    single_instance_1111_11_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1111_11_0))->set_direction(3);
        {
            ((Active*)single_instance_1111_11_0)->set_shader(Render::NONE);
        }
        ((Active*)((Active*)single_instance_1111_11_0))->destroy();
        FrameObject * single_instance_1111_11_1; single_instance_1111_11_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + -4), parent->layer);
                if (single_instance_1111_11_1 == NULL)
                    single_instance_1111_11_1 = new_obj;
            }
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(3, 30);
        {
            loop_drop_opponent_running = true;
            int times = int(1);
            loop_drop_opponent_index = 0;
            while (loop_drop_opponent_index < times) {
                loop_drop_opponent_11();
                if (!loop_drop_opponent_running) break;
                loop_drop_opponent_index++;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_removeitem_running = true;
            int times = int(1);
            loop_removeitem_index = 0;
            while (loop_removeitem_index < times) {
                loop_removeitem_6();
                if (!loop_removeitem_running) break;
                loop_removeitem_index++;
            }
        }
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_1111_11_end: ;
}
// Function purpose: generated callback event_func_6006 processes event block(s) 1122_11. Actions/conditions:
//        1122_11: sets From to Craft_Output; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_6006()
{
    // event 1122_11 : sets From to Craft_Output; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1122_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1122_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_1122_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1122_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1122_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_craft_output_1121);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, 1);
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1122_11_end: ;
}
// Function purpose: generated callback event_func_6007 processes event block(s) 1123_11. Actions/conditions:
//        1123_11: sets From to NPC_give; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_6007()
{
    // event 1123_11 : sets From to NPC_give; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1123_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1123_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_1123_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1123_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1123_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_npc_give_1349);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, 1);
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1123_11_end: ;
}
// Function purpose: generated callback event_func_6008 processes event block(s) 1124_11. Actions/conditions:
//        1124_11: sets From to Loot_Outfit; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_6008()
{
    // event 1124_11 : sets From to Loot_Outfit; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1124_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1124_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_1124_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1124_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1124_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_loot_outfit_450);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1124_11_end: ;
}
// Function purpose: generated callback event_func_6009 processes event block(s) 1125_11. Actions/conditions:
//        1125_11: sets From to Loot_Weapon; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_6009()
{
    // event 1125_11 : sets From to Loot_Weapon; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1125_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1125_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_1125_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1125_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1125_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_loot_weapon_449);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1125_11_end: ;
}
// Function purpose: generated callback event_func_6010 processes event block(s) 1126_11. Actions/conditions:
//        1126_11: sets From to Loot; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_6010()
{
    // event 1126_11 : sets From to Loot; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1126_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2002))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1126_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_1126_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1126_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1126_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_loot_448);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1126_11_end: ;
}
// Function purpose: generated callback event_func_6011 processes event block(s) 1127_11. Actions/conditions:
//        1127_11: sets LClick to 1; sets CurrItem to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2); sets a game or interface text string.
void Frames::event_func_6011()
{
    // event 1127_11 : sets LClick to 1; sets CurrItem to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); sets a game or interface text string
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1127_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2002))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1127_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(13))) goto event_1127_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1127_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1127_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(647, str_curritem_1747, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_911+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)), empty_string);
        {
            loop_retrieve_mission_loot_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_retrieve_mission_loot_index = 0;
            while (loop_retrieve_mission_loot_index < times) {
                loop_retrieve_mission_loot_11();
                if (!loop_retrieve_mission_loot_running) break;
                loop_retrieve_mission_loot_index++;
            }
        }
    }
    event_1127_11_end: ;
}
// Function purpose: generated callback event_func_6012 processes event block(s) 1130_11. Actions/conditions:
//        1130_11: sets From to Craft; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_6012()
{
    // event 1130_11 : sets From to Craft; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1130_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1130_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_1130_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1130_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1130_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_craft_900);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1130_11_end: ;
}
// Function purpose: generated callback event_func_6013 processes event block(s) 1131_11. Actions/conditions:
//        1131_11: sets From to Desk; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_6013()
{
    // event 1131_11 : sets From to Desk; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1131_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2002))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1131_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(16))) goto event_1131_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1131_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1131_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_desk_32);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1131_11_end: ;
}
// Function purpose: generated callback event_func_6014 processes event block(s) 1132_11. Actions/conditions:
//        1132_11: sets LClick to 1; sets CurrItem to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2); sets a game or interface text string; plus 1 more
//        actions.
void Frames::event_func_6014()
{
    // event 1132_11 : sets LClick to 1; sets CurrItem to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1132_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2002))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1132_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(16))) goto event_1132_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1132_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1132_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(647, str_curritem_1747, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)), empty_string);
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_retrieve_mission_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_retrieve_mission_index = 0;
            while (loop_retrieve_mission_index < times) {
                loop_retrieve_mission_11();
                if (!loop_retrieve_mission_running) break;
                loop_retrieve_mission_index++;
            }
        }
    }
    event_1132_11_end: ;
}
// Function purpose: generated callback event_func_6015 processes event block(s) 1135_11. Actions/conditions:
//        1135_11: sets From to Container; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_6015()
{
    // event 1135_11 : sets From to Container; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1135_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_container_613))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1135_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(23))) goto event_1135_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1135_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1135_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_container_613);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1135_11_end: ;
}
// Function purpose: generated callback event_func_6016 processes event block(s) 1136_11. Actions/conditions:
//        1136_11: sets From to Toilet; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions.
void Frames::event_func_6016()
{
    // event 1136_11 : sets From to Toilet; sets LClick to 1; sets FoundSlot to -1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1136_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_toilet_533))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1136_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(17))) goto event_1136_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1136_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1136_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_toilet_533);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1136_11_end: ;
}
// Function purpose: generated callback event_func_6017 processes event block(s) 1137_11. Actions/conditions:
//        1137_11: sets From to Outfit; sets LClick to 1; sets FoundSlot to -1.
void Frames::event_func_6017()
{
    // event 1137_11 : sets From to Outfit; sets LClick to 1; sets FoundSlot to -1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1137_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1137_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_1137_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1137_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1137_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_outfit_505);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1137_11_end: ;
}
// Function purpose: generated callback event_func_6018 processes event block(s) 1138_11. Actions/conditions:
//        1138_11: sets From to Weapon; sets LClick to 1; sets FoundSlot to -1.
void Frames::event_func_6018()
{
    // event 1138_11 : sets From to Weapon; sets LClick to 1; sets FoundSlot to -1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1138_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_weapon_704))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1138_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_1138_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1138_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1138_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(692, str_from_1842, str_weapon_704);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, -1);
        {
            loop_find_open_inv_slot_running = true;
            int times = int(1);
            loop_find_open_inv_slot_index = 0;
            while (loop_find_open_inv_slot_index < times) {
                loop_find_open_inv_slot_11();
                if (!loop_find_open_inv_slot_running) break;
                loop_find_open_inv_slot_index++;
            }
        }
    }
    event_1138_11_end: ;
}
// Function purpose: generated callback event_func_6019 processes event block(s) 1190_11. Actions/conditions:
//        1190_11: sets LClick to 1; sets CurrentInvSlot to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(1).
void Frames::event_func_6019()
{
    // event 1190_11 : sets LClick to 1; sets CurrentInvSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1190_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1190_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_1190_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1190_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1190_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(368, str_currentinvslot_1162, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_give_npc_check_running = true;
            int times = int(1);
            loop_give_npc_check_index = 0;
            while (loop_give_npc_check_index < times) {
                loop_give_npc_check_11();
                if (!loop_give_npc_check_running) break;
                loop_give_npc_check_index++;
            }
        }
    }
    event_1190_11_end: ;
}
// Function purpose: generated callback event_func_6020 processes event block(s) 1197_11. Actions/conditions:
//        1197_11: sets LClick to 1; sets CurrItemID to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2); sets CurrentInvSlot to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1).
void Frames::event_func_6020()
{
    // event 1197_11 : sets LClick to 1; sets CurrItemID to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); sets CurrentInvSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1197_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1197_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_1197_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1197_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1197_11_end;
        if (frame_time - restrict_1197_11 < 1.0) goto event_1197_11_end;
        restrict_1197_11 = frame_time;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(609, str_curritemid_1591, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(368, str_currentinvslot_1162, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_flip_into_equip_running = true;
            int times = int(1);
            loop_flip_into_equip_index = 0;
            while (loop_flip_into_equip_index < times) {
                loop_flip_into_equip_11();
                if (!loop_flip_into_equip_running) break;
                loop_flip_into_equip_index++;
            }
        }
    }
    event_1197_11_end: ;
}
// Function purpose: generated callback event_func_6021 processes event block(s) 1206_11. Actions/conditions:
//        1206_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_6021()
{
    // event 1206_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_1206_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1206_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_1206_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (69))) goto event_1206_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1206_11_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 2)) == (56))) goto event_1206_11_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), 2)) < (100))) goto event_1206_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_1206_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1206_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1206_11_end;
        }
        compare_1206_11_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1206_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1206_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(478, str_allow_1353, 1);
        {
            loop_hang_sheet_running = true;
            int times = int(1);
            loop_hang_sheet_index = 0;
            while (loop_hang_sheet_index < times) {
                loop_hang_sheet_6();
                if (!loop_hang_sheet_running) break;
                loop_hang_sheet_index++;
            }
        }
    }
    event_1206_11_end: ;
}
// Function purpose: generated callback event_func_6022 processes event block(s) 1219_11. Actions/conditions:
//        1219_11: sets RClick to 1; plays a sound or music track.
void Frames::event_func_6022()
{
    // event 1219_11 : sets RClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1219_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_1219_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_1219_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1219_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_1219_11_end: ;
}
// Function purpose: generated callback event_func_6023 processes event block(s) 1220_11. Actions/conditions:
//        1220_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_6023()
{
    // event 1220_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1220_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1220_11_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_14)) goto event_1220_11_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1220_11_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_1220_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_1220_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_14));
            if (obj1 == NULL) goto compare_1220_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1220_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1220_11_end;
        }
        compare_1220_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1220_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1220_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_1220_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 2);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1000);
        }
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_1220_11_end: ;
}
// Function purpose: generated callback event_func_6024 processes event block(s) 1221_11. Actions/conditions:
//        1221_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_6024()
{
    // event 1221_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1221_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_1221_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (2))) goto event_1221_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_1221_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1221_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 22)) goto event_1221_11_end;
        }
        compare_1221_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1221_11_end;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_1221_11_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_1221_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_7)) goto event_1221_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_6)) goto event_1221_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_4)) goto event_1221_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_22)) goto event_1221_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_8)) goto event_1221_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(cursor_178_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(cursor_178_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) == (-1))) goto event_1221_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1221_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1221_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_1221_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            if (parent == NULL) goto pos_end_1221_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_1221_11_1: ;
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1000);
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 0);
        FrameObject * single_instance_1221_11_2; single_instance_1221_11_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1221_11_2 == NULL)
                    single_instance_1221_11_2 = new_obj;
            }
        }
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_1221_11_end: ;
}
// Function purpose: generated callback event_func_6025 processes event block(s) 1222_11. Actions/conditions:
//        1222_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_6025()
{
    // event 1222_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1222_11_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1222_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_20));
            if (obj1 == NULL) goto compare_1222_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1222_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1222_11_end;
        }
        compare_1222_11_0_end: ;
        if (!check_not_overlap(qualifier_20, playerBase_instances)) goto event_1222_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_1222_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_1222_11_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_8)) goto event_1222_11_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_1222_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1222_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1222_11_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1000);
            ((Active*)*it)->set_layer(3-1);
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_1222_11_end: ;
}
// Function purpose: generated callback event_func_6026 processes event block(s) 1223_11. Actions/conditions:
//        1223_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 13 more actions.
void Frames::event_func_6026()
{
    // event 1223_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 13 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1223_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_1223_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (1))) goto event_1223_11_end;
        {
            FrameObject * targetObject;
            FrameObject * playerObject;
            int targetX, targetY, playerX, playerY;
            targetObject = ((Active*)get_instance(cursor_178_instances));
            if (targetObject == NULL) goto compare_1223_11_0_end;
            targetX = targetObject->get_x() + 8;
            targetY = targetObject->get_y() + 8;
            playerObject = ((Active*)get_instance(playerBase_instances));
            if (playerObject == NULL) goto compare_1223_11_0_end;
            playerX = playerObject->get_x() + 0;
            playerY = playerObject->get_y() + 0;
            if (!(vitaDeskPlacementReach(targetX, targetY, playerX, playerY, 22, playerObject))) goto event_1223_11_end;
        }
        compare_1223_11_0_end: ;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_1223_11_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_7)) goto event_1223_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_6)) goto event_1223_11_end;
        if (!check_not_overlap(cursor_178_instances, items_184_instances)) goto event_1223_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_8)) goto event_1223_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_4)) goto event_1223_11_end;
        if (!check_not_overlap(cursor_178_instances, playerBase_instances)) goto event_1223_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_22)) goto event_1223_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_1223_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(291, str_chippablewalls_967), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(cursor_178_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(cursor_178_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) == (-1))) goto event_1223_11_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1223_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1223_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1223_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_1223_11_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 0);
        FrameObject * single_instance_1223_11_1; single_instance_1223_11_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1223_11_1 == NULL)
                    single_instance_1223_11_1 = new_obj;
            }
        }
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            if (parent == NULL) goto pos_end_1223_11_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1223_11_2: ;
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1000);
        }
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_1223_11_end: ;
}
// Function purpose: generated callback event_func_6027 processes event block(s) 1224_11. Actions/conditions:
//        1224_11: sets RClick to 1; enables flag 1000 (object relocation or layer-transition state) on the selected
//        object; sets the selected object's layer to 3-1; plus 6 more actions.
void Frames::event_func_6027()
{
    // event 1224_11 : sets RClick to 1; enables flag 1000 (object relocation or layer-transition state) on the selected object; sets the selected object's layer to 3-1; plus 6 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1 && group_code_right_clicked_lifting_desks_2_1)) goto event_1224_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1000))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_1224_11_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, desks_717_instances)) goto event_1224_11_end;
        if (!check_not_overlap(desks_717_instances, playerBase_instances)) goto event_1224_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_1224_11_end;
        containercanteen_691_instances.clear_selection();
        for (ObjectIterator it(containercanteen_691_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!containercanteen_691_instances.has_selection()) goto event_1224_11_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_8)) goto event_1224_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_1224_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1224_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1000);
            ((Active*)*it)->set_layer(3-1);
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        media.play_id(SOUND_PICKUP_3, -1, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 1);
    }
    event_1224_11_end: ;
}
// Function purpose: generated callback event_func_6028 processes event block(s) 1225_11. Actions/conditions:
//        1225_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 13 more actions.
void Frames::event_func_6028()
{
    // event 1225_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 13 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1 && group_code_right_clicked_lifting_desks_2_1)) goto event_1225_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_1225_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (1))) goto event_1225_11_end;
        {
            FrameObject * targetObject;
            FrameObject * playerObject;
            int targetX, targetY, playerX, playerY;
            targetObject = ((Active*)get_instance(cursor_178_instances));
            if (targetObject == NULL) goto compare_1225_11_0_end;
            targetX = targetObject->get_x() + 8;
            targetY = targetObject->get_y() + 8;
            playerObject = ((Active*)get_instance(playerBase_instances));
            if (playerObject == NULL) goto compare_1225_11_0_end;
            playerX = playerObject->get_x() + 0;
            playerY = playerObject->get_y() + 0;
            if (!(vitaDeskPlacementReach(targetX, targetY, playerX, playerY, 16, playerObject))) goto event_1225_11_end;
        }
        compare_1225_11_0_end: ;
        if (((Active*)get_instance(cursor_178_instances))->overlaps_background()) goto event_1225_11_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, qualifier_19)) goto event_1225_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_5)) goto event_1225_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_6)) goto event_1225_11_end;
        if (!check_not_overlap(cursor_178_instances, items_184_instances)) goto event_1225_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_8)) goto event_1225_11_end;
        if (!check_not_overlap(cursor_178_instances, qualifier_4)) goto event_1225_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_1225_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_1225_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        media.play_id(SOUND_THROW_4, -1, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 0);
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            if (parent == NULL) goto pos_end_1225_11_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_1225_11_1: ;
        }
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1000);
        }
        FrameObject * single_instance_1225_11_2; single_instance_1225_11_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1225_11_2 == NULL)
                    single_instance_1225_11_2 = new_obj;
            }
        }
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
    }
    event_1225_11_end: ;
}
// Function purpose: generated callback event_func_6029 processes event block(s) 1227_11. Actions/conditions:
//        1227_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_6029()
{
    // event 1227_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1227_11_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1227_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(items_184_instances));
            if (obj1 == NULL) goto compare_1227_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1227_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1227_11_end;
        }
        compare_1227_11_0_end: ;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_1227_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1227_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_1227_11_end;
        if (not_always_1227_11 > loop_count) {
            not_always_1227_11 = loop_count + 2;
            goto event_1227_11_end;
        }
        not_always_1227_11 = loop_count + 2;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(-10);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->values.get(3));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(479, str_offfloor_1354, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(102, str_itemnameappend_636, ((Active*)get_single(items_184_instances, default_active_instance))->alterables->strings.get(1));
        {
            loop_pickupitem_running = true;
            int times = int(1);
            loop_pickupitem_index = 0;
            while (loop_pickupitem_index < times) {
                loop_pickupitem_11();
                if (!loop_pickupitem_running) break;
                loop_pickupitem_index++;
            }
        }
    }
    event_1227_11_end: ;
}
// Function purpose: generated callback event_func_6030 processes event block(s) 1230_11. Actions/conditions:
//        1230_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_6030()
{
    // event 1230_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1230_11_end;
        active9_291_instances.clear_selection();
        for (ObjectIterator it(active9_291_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!active9_291_instances.has_selection()) goto event_1230_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(active9_291_instances));
            if (obj1 == NULL) goto compare_1230_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1230_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1230_11_end;
        }
        compare_1230_11_0_end: ;
        if (!((((Active*)get_single(active9_291_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_1230_11_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, active9_291_instances)) goto event_1230_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1230_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1230_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(750, str_rclick_1926)) == (0))) goto event_1230_11_end;
        for (ObjectIterator it(active9_291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(750, str_rclick_1926, 1);
        {
            loop_pickup_steps_check_running = true;
            int times = int(1);
            loop_pickup_steps_check_index = 0;
            while (loop_pickup_steps_check_index < times) {
                loop_pickup_steps_check_11();
                if (!loop_pickup_steps_check_running) break;
                loop_pickup_steps_check_index++;
            }
        }
    }
    event_1230_11_end: ;
}
// Function purpose: generated callback event_func_6031 processes event block(s) 1233_11. Actions/conditions:
//        1233_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_6031()
{
    // event 1233_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1233_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_RIGHT))) goto event_1233_11_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) < (0))) goto event_1233_11_end;
        if (!(((Active*)get_instance(cursor_178_instances))->overlaps_background())) goto event_1233_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_1233_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1233_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1233_11_end;
        }
        compare_1233_11_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1233_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1233_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1233_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 116);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(482, str_newitemhp_1357, (((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)*-1)-20);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
        {
            loop_grab_fakewall_check_running = true;
            int times = int(1);
            loop_grab_fakewall_check_index = 0;
            while (loop_grab_fakewall_check_index < times) {
                loop_grab_fakewall_check_6();
                if (!loop_grab_fakewall_check_running) break;
                loop_grab_fakewall_check_index++;
            }
        }
    }
    event_1233_11_end: ;
}
// Function purpose: generated callback event_func_6032 processes event block(s) 1237_11. Actions/conditions:
//        1237_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_6032()
{
    // event 1237_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1237_11_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_1237_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ventCover_instances));
            if (obj1 == NULL) goto compare_1237_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_qualifier(qualifier_2));
            if (obj2 == NULL) goto compare_1237_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_1237_11_end;
        }
        compare_1237_11_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1237_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1237_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1237_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 117);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(482, str_newitemhp_1357, ((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(11));
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
        {
            loop_grab_vent_check_running = true;
            int times = int(1);
            loop_grab_vent_check_index = 0;
            while (loop_grab_vent_check_index < times) {
                loop_grab_vent_check_6();
                if (!loop_grab_vent_check_running) break;
                loop_grab_vent_check_index++;
            }
        }
    }
    event_1237_11_end: ;
}
// Function purpose: generated callback event_func_6033 processes event block(s) 1239_11. Actions/conditions:
//        1239_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_6033()
{
    // event 1239_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1239_11_end;
        dummies_374_instances.clear_selection();
        for (ObjectIterator it(dummies_374_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!dummies_374_instances.has_selection()) goto event_1239_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dummies_374_instances));
            if (obj1 == NULL) goto compare_1239_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1239_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1239_11_end;
        }
        compare_1239_11_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1239_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1239_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1239_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1239_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 126);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, -100);
        FrameObject * single_instance_1239_11_1; single_instance_1239_11_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(dummies_374_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 16), parent->layer);
                if (single_instance_1239_11_1 == NULL)
                    single_instance_1239_11_1 = new_obj;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
        {
            loop_grabdummy_check_running = true;
            int times = int(1);
            loop_grabdummy_check_index = 0;
            while (loop_grabdummy_check_index < times) {
                loop_grabdummy_check_6();
                if (!loop_grabdummy_check_running) break;
                loop_grabdummy_check_index++;
            }
        }
    }
    event_1239_11_end: ;
}
// Function purpose: generated callback event_func_6034 processes event block(s) 1241_11. Actions/conditions:
//        1241_11: sets OverBed to 0.
void Frames::event_func_6034()
{
    // event 1241_11 : sets OverBed to 0
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1241_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1241_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(936, str_overbed_2274, 0);
    }
    event_1241_11_end: ;
}
// Function purpose: generated callback event_func_6035 processes event block(s) 1242_11. Actions/conditions:
//        1242_11: saves the current object selection; saves the current object selection; sets OverBed to 1.
void Frames::event_func_6035()
{
    // event 1242_11 : saves the current object selection; saves the current object selection; sets OverBed to 1
    bool or_result_1242_11 = false;
    bool or_temp_result_1242_11_0 = false;
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto or_event_1242_11_0_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto or_event_1242_11_0_end;
        or_result_1242_11 = true;
        or_temp_result_1242_11_0 = true;
    }
    or_event_1242_11_0_end: ;
    bedplayer_338_instances.clear_saved_selection();
    if (or_temp_result_1242_11_0) {
        bedplayer_338_instances.save_selection();
    }
    // event 1242_11 : saves the current object selection; saves the current object selection; sets OverBed to 1
    bool or_temp_result_1242_11_1 = false;
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto or_event_1242_11_1_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto or_event_1242_11_1_end;
        or_result_1242_11 = true;
        or_temp_result_1242_11_1 = true;
        or_event_1242_11_1_end: ;
        inmateBed_instances.clear_saved_selection();
        if (or_temp_result_1242_11_1) {
            inmateBed_instances.save_selection();
        }
        if (!or_result_1242_11) goto or_final_or_event_1242_11_1_end;
        inmateBed_instances.empty_selection();
        bedplayer_338_instances.empty_selection();
        if (or_temp_result_1242_11_0) {
            bedplayer_338_instances.restore_selection();
        }
        if (or_temp_result_1242_11_1) {
            inmateBed_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(936, str_overbed_2274, 1);
        }
    }
    or_final_or_event_1242_11_1_end: ;
}
// Function purpose: generated callback event_func_6036 processes event block(s) 1243_11. Actions/conditions:
//        1243_11: sets the object's animation to 3; sets the selected object's horizontal position to
//        (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to
//        (get_mouse_y()/MathHelper()/16)*16.
void Frames::event_func_6036()
{
    // event 1243_11 : sets the object's animation to 3; sets the selected object's horizontal position to (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to (get_mouse_y()/MathHelper()/16)*16
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1243_11_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_1243_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1243_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1243_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1243_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(936, str_overbed_2274)) == (1))) goto event_1243_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1243_11_end;
        ((Active*)get_instance(cursor_178_instances))->force_animation(3);
        ((Active*)get_instance(cursor_178_instances))->set_x((get_mouse_x()/MathHelper()/16)*16);
        ((Active*)get_instance(cursor_178_instances))->set_y((get_mouse_y()/MathHelper()/16)*16);
    }
    event_1243_11_end: ;
}
// Function purpose: generated callback event_func_6037 processes event block(s) 1244_11. Actions/conditions:
//        1244_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_6037()
{
    // event 1244_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1244_11_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_1244_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_6));
            if (obj1 == NULL) goto compare_1244_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1244_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1244_11_end;
        }
        compare_1244_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1244_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1244_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1244_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(936, str_overbed_2274)) == (1))) goto event_1244_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1244_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 69);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, -100);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
        {
            loop_bedsheet_check_running = true;
            int times = int(1);
            loop_bedsheet_check_index = 0;
            while (loop_bedsheet_check_index < times) {
                loop_bedsheet_check_6();
                if (!loop_bedsheet_check_running) break;
                loop_bedsheet_check_index++;
            }
        }
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_1244_11_end: ;
}
// Function purpose: generated callback event_func_6038 processes event block(s) 1246_11. Actions/conditions:
//        1246_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 10 more actions.
void Frames::event_func_6038()
{
    // event 1246_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 10 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1246_11_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_1246_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_6));
            if (obj1 == NULL) goto compare_1246_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1246_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1246_11_end;
        }
        compare_1246_11_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1246_11_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1246_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(936, str_overbed_2274)) == (1))) goto event_1246_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1246_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1246_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 95);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, -100);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
        {
            loop_pillow_check_running = true;
            int times = int(1);
            loop_pillow_check_index = 0;
            while (loop_pillow_check_index < times) {
                loop_pillow_check_6();
                if (!loop_pillow_check_running) break;
                loop_pillow_check_index++;
            }
        }
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_1246_11_end: ;
}
// Function purpose: generated callback event_func_6039 processes event block(s) 1248_11. Actions/conditions:
//        1248_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_6039()
{
    // event 1248_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1248_11_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_1248_11_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, sheetsposters_294_instances)) goto event_1248_11_end;
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_1248_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sheetsposters_294_instances));
            if (obj1 == NULL) goto compare_1248_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1248_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1248_11_end;
        }
        compare_1248_11_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1248_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1248_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1248_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1248_11_end;
        FrameObject * single_instance_1248_11_1; single_instance_1248_11_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sheetsposters_294_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1248_11_1 == NULL)
                    single_instance_1248_11_1 = new_obj;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(90, str_grabtype_597, str_sheet_2276);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(91, str_sheetid_599, ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 69);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, -100);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
        {
            loop_grabsheet_check_running = true;
            int times = int(1);
            loop_grabsheet_check_index = 0;
            while (loop_grabsheet_check_index < times) {
                loop_grabsheet_check_6();
                if (!loop_grabsheet_check_running) break;
                loop_grabsheet_check_index++;
            }
        }
    }
    event_1248_11_end: ;
}
// Function purpose: generated callback event_func_6040 processes event block(s) 1249_11. Actions/conditions:
//        1249_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 11 more actions.
void Frames::event_func_6040()
{
    // event 1249_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 11 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_1249_11_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_1249_11_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, sheetsposters_294_instances)) goto event_1249_11_end;
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_1249_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(sheetsposters_294_instances));
            if (obj1 == NULL) goto compare_1249_11_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_1249_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_1249_11_end;
        }
        compare_1249_11_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1249_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1249_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1249_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1249_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(90, str_grabtype_597, str_poster_598);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(91, str_sheetid_599, ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 99);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(481, str_itemillegal_1356, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(480, str_itemhp_1355, -100);
        FrameObject * single_instance_1249_11_1; single_instance_1249_11_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(sheetsposters_294_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1249_11_1 == NULL)
                    single_instance_1249_11_1 = new_obj;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_11();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
        {
            loop_grabsheet_check_running = true;
            int times = int(1);
            loop_grabsheet_check_index = 0;
            while (loop_grabsheet_check_index < times) {
                loop_grabsheet_check_6();
                if (!loop_grabsheet_check_running) break;
                loop_grabsheet_check_index++;
            }
        }
    }
    event_1249_11_end: ;
}
// Function purpose: generated callback event_func_6041 processes event block(s) 1261_11. Actions/conditions:
//        1261_11: sets the object's animation to 8.
void Frames::event_func_6041()
{
    // event 1261_11 : sets the object's animation to 8
    {
        if (!(group_code_1)) goto event_1261_11_end;
        playerBase_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_6)) goto event_1261_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_single(qualifier_6, default_active_instance))->get_x()+8))) goto event_1261_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_single(qualifier_6, default_active_instance))->get_y()+8))) goto event_1261_11_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_1261_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1261_11_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_1261_11_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1261_11_end: ;
}
// Function purpose: generated callback event_func_6042 processes event block(s) 1272_11. Actions/conditions:
//        1272_11: sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_717_instances,
//        it.current_index, default_active_instance))->alterables->values.get(0); sets the object's animation to 16;
//        plus 9 more actions.
void Frames::event_func_6042()
{
    // event 1272_11 : sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_717_instances, it.current_index, default_active_instance))->alterables->values.get(0); sets the object's animation to 16; plus 9 more actions
    {
        if (!(group_code_1)) goto event_1272_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(397, str_yourdesk_1208)))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_1272_11_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, desks_717_instances)) goto event_1272_11_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_1272_11_end;
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(13)) { it.deselect(); continue; }
        }
        if (!mouse_9_instances.has_selection()) goto event_1272_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto event_1272_11_end;
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_1272_11_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
            ((AssociateArray*)*it)->set_value(337, str_currentcontainer_1126, ((Active*)get_single(desks_717_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
            ((Active*)*it)->set_visible(true);
        }
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_hovers_903, str_68_2254));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_single(dialogPanel_instances, it.current_index, default_active_instance))->get_box_index(1)+4);
            ((Text*)*it)->set_visible(true);
        }
        {
            loop_build_desk_running = true;
            int times = int(20);
            loop_build_desk_index = 0;
            while (loop_build_desk_index < times) {
                loop_build_desk_6();
                if (!loop_build_desk_running) break;
                loop_build_desk_index++;
            }
        }
        {
            loop_fill_desk_running = true;
            int times = int(20);
            loop_fill_desk_index = 0;
            while (loop_fill_desk_index < times) {
                loop_fill_desk_11();
                if (!loop_fill_desk_running) break;
                loop_fill_desk_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1272_11_end: ;
}
// Function purpose: generated callback event_func_6043 processes event block(s) 1273_11. Actions/conditions:
//        1273_11: sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_717_instances,
//        it.current_index, default_active_instance))->alterables->values.get(0); sets the object's animation to 16;
//        plus 9 more actions.
void Frames::event_func_6043()
{
    VITA_LEGACY_EVENT();
    // event 1273_11 : sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_717_instances, it.current_index, default_active_instance))->alterables->values.get(0); sets the object's animation to 16; plus 9 more actions
    {
        if (!(group_code_1)) goto event_1273_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(362, str_searching_desk_1156)) == (1))) goto event_1273_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(931, str_thisid_2252)))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_1273_11_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_1273_11_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
            ((AssociateArray*)*it)->set_value(337, str_currentcontainer_1126, ((Active*)get_single(desks_717_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
            ((Active*)*it)->set_visible(true);
        }
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_hovers_903, str_68_2254));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_single(dialogPanel_instances, it.current_index, default_active_instance))->get_box_index(1)+4);
            ((Text*)*it)->set_visible(true);
        }
        {
            loop_build_desk_running = true;
            int times = int(20);
            loop_build_desk_index = 0;
            while (loop_build_desk_index < times) {
                loop_build_desk_6();
                if (!loop_build_desk_running) break;
                loop_build_desk_index++;
            }
        }
        {
            loop_fill_desk_running = true;
            int times = int(20);
            loop_fill_desk_index = 0;
            while (loop_fill_desk_index < times) {
                loop_fill_desk_11();
                if (!loop_fill_desk_running) break;
                loop_fill_desk_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1273_11_end: ;
}
// Function purpose: generated callback event_func_6044 processes event block(s) 1274_11. Actions/conditions:
//        1274_11: sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_717_instances,
//        default_active_instance))->alterables->values.get(0); sets the object's animation to 16; plus 10 more
//        actions.
void Frames::event_func_6044()
{
    VITA_LEGACY_EVENT();
    // event 1274_11 : sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0); sets the object's animation to 16; plus 10 more actions
    {
        if (!(group_code_1)) goto event_1274_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) == (1))) goto event_1274_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(931, str_thisid_2252)))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_1274_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1274_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(desks_717_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_688(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_68_2254));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+4);
            ((Text*)*it)->set_visible(true);
        }
        {
            loop_build_desk_running = true;
            int times = int(20);
            loop_build_desk_index = 0;
            while (loop_build_desk_index < times) {
                loop_build_desk_6();
                if (!loop_build_desk_running) break;
                loop_build_desk_index++;
            }
        }
        {
            loop_fill_desk_running = true;
            int times = int(20);
            loop_fill_desk_index = 0;
            while (loop_fill_desk_index < times) {
                loop_fill_desk_11();
                if (!loop_fill_desk_running) break;
                loop_fill_desk_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1274_11_end: ;
}
// Function purpose: generated callback event_func_6045 processes event block(s) 1275_11. Actions/conditions:
//        1275_11: checks scene is active; game state Searching_Desk; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_6045()
{
    VITA_LEGACY_EVENT();
    // event 1275_11 : checks scene is active; game state Searching_Desk; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1275_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) == (1))) goto event_1275_11_end;
        {
            loop_close_activity_box_running = true;
            int times = int(1);
            loop_close_activity_box_index = 0;
            while (loop_close_activity_box_index < times) {
                loop_close_activity_box_6();
                if (!loop_close_activity_box_running) break;
                loop_close_activity_box_index++;
            }
        }
    }
    event_1275_11_end: ;
}
// Function purpose: generated callback event_func_6046 processes event block(s) 1277_11. Actions/conditions:
//        1277_11: changes a stored game value.
void Frames::event_func_6046()
{
    VITA_LEGACY_EVENT();
    // event 1277_11 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1277_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) > (0))) goto event_1277_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(362, str_searching_desk_1156, 1);
    }
    event_1277_11_end: ;
}
// Function purpose: generated callback event_func_6047 processes event block(s) 1278_11. Actions/conditions:
//        1278_11: sets Searching_Desk to 0.
void Frames::event_func_6047()
{
    // event 1278_11 : sets Searching_Desk to 0
    {
        if (!(group_code_1)) goto event_1278_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) > (0))) goto event_1278_11_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, desks_717_instances)) goto event_1278_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(362, str_searching_desk_1156, 0);
    }
    event_1278_11_end: ;
}
// Function purpose: generated callback event_func_6048 processes event block(s) 1284_11. Actions/conditions:
//        1284_11: sets a stored numeric value; removes the selected object.
void Frames::event_func_6048()
{
    // event 1284_11 : sets a stored numeric value; removes the selected object
    {
        if (!(group_code_1)) goto event_1284_11_end;
        items_184_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(items_184_instances, dighole_207_instances)) goto event_1284_11_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (42))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1284_11_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (2))) goto event_1284_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1284_11_end;
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value(0, (((Active*)get_single(items_184_instances, default_active_instance))->get_x()-8), (((Active*)get_single(items_184_instances, default_active_instance))->get_y()-8), 1);
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1284_11_end: ;
}
// Function purpose: generated callback event_func_6049 processes event block(s) 1285_11. Actions/conditions:
//        1285_11: removes background tiles at the target coordinates; sets a stored numeric value; removes the
//        selected object.
void Frames::event_func_6049()
{
    // event 1285_11 : removes background tiles at the target coordinates; sets a stored numeric value; removes the selected object
    {
        if (!(group_code_1)) goto event_1285_11_end;
        if (!((((Active*)get_instance(items_184_instances, default_active_instance))->layer->index+1) == (1))) goto event_1285_11_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (26))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1285_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1285_11_end;
        layers[1-1].destroy_backgrounds(((Active*)get_single(items_184_instances, default_active_instance))->get_x(), ((Active*)get_single(items_184_instances, default_active_instance))->get_y(), 1);
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value(20, (((Active*)get_single(items_184_instances, default_active_instance))->get_x()-8), (((Active*)get_single(items_184_instances, default_active_instance))->get_y()-8), 0);
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1285_11_end: ;
}
// Function purpose: generated callback event_func_6050 processes event block(s) 1289_11. Actions/conditions:
//        1289_11: sets a stored numeric value; increments Fatigue by 5.
void Frames::event_func_6050()
{
    VITA_LEGACY_EVENT();
    // event 1289_11 : sets a stored numeric value; increments Fatigue by 5
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_1289_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (1))) goto event_1289_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(449, str_chiptype_1316)) == (str_wall_1317))) goto event_1289_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1289_11_end;
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326), ((Active*)get_instance(playerBase_instances))->layer->index+1)+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(922, str_chippower_2238)*4), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326), ((Active*)get_instance(playerBase_instances))->layer->index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        {
            loop_check_complete_chip_running = true;
            int times = int(1);
            loop_check_complete_chip_index = 0;
            while (loop_check_complete_chip_index < times) {
                loop_check_complete_chip_11();
                if (!loop_check_complete_chip_running) break;
                loop_check_complete_chip_index++;
            }
        }
    }
    event_1289_11_end: ;
}
// Function purpose: generated callback event_func_6051 processes event block(s) 1303_11. Actions/conditions:
//        1303_11: sets Digging to 0; sets the selected object's visibility to false; removes the selected object;
//        plus 9 more actions.
void Frames::event_func_6051()
{
    VITA_LEGACY_EVENT();
    // event 1303_11 : sets Digging to 0; sets the selected object's visibility to false; removes the selected object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_1303_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (1))) goto event_1303_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(925, str_digtype_2241)) == (str_floor_814))) goto event_1303_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1303_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 0);
        fx_185_instances.clear_selection();
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(641, str_holeprogress_1739, (((ArrayObject*)get_instance(digarray_228_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741), 1))+((AssociateArray*)get_instance(gameVariables_instances))->get_value(924, str_digpower_2240));
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741), 1))+((AssociateArray*)get_instance(gameVariables_instances))->get_value(924, str_digpower_2240), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741), 1);
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 1);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        {
            loop_dighole_running = true;
            int times = int(1);
            loop_dighole_index = 0;
            while (loop_dighole_index < times) {
                loop_dighole_11();
                if (!loop_dighole_running) break;
                loop_dighole_index++;
            }
        }
    }
    event_1303_11_end: ;
}
// Function purpose: generated callback event_func_6052 processes event block(s) 1310_11. Actions/conditions:
//        1310_11: sets Digging to 0; sets the selected object's visibility to false; removes the selected object;
//        plus 11 more actions.
void Frames::event_func_6052()
{
    VITA_LEGACY_EVENT();
    // event 1310_11 : sets Digging to 0; sets the selected object's visibility to false; removes the selected object; plus 11 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_1310_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (1))) goto event_1310_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(925, str_digtype_2241)) == (str_ug_up_2242))) goto event_1310_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1310_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 0);
        fx_185_instances.clear_selection();
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(641, str_holeprogress_1739, (((ArrayObject*)get_instance(digarray_228_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741), 1))+((AssociateArray*)get_instance(gameVariables_instances))->get_value(924, str_digpower_2240));
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value(100, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741), 1);
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 0);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.disable(193);
        {
            loop_digabove_running = true;
            int times = int(1);
            loop_digabove_index = 0;
            while (loop_digabove_index < times) {
                loop_digabove_11();
                if (!loop_digabove_running) break;
                loop_digabove_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
    }
    event_1310_11_end: ;
}
// Function purpose: generated callback event_func_6053 processes event block(s) 1315_11. Actions/conditions:
//        1315_11: sets Digging to 0; sets the selected object's visibility to false; removes the selected object;
//        plus 9 more actions.
void Frames::event_func_6053()
{
    VITA_LEGACY_EVENT();
    // event 1315_11 : sets Digging to 0; sets the selected object's visibility to false; removes the selected object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_1315_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (1))) goto event_1315_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(925, str_digtype_2241)) == (str_ug_across_2243))) goto event_1315_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1315_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 0);
        fx_185_instances.clear_selection();
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->destroy();
        }
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741), 0))+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(924, str_digpower_2240)*1.8), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741), 0);
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 0);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741));
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        {
            loop_digbelow_running = true;
            int times = int(1);
            loop_digbelow_index = 0;
            while (loop_digbelow_index < times) {
                loop_digbelow_11();
                if (!loop_digbelow_running) break;
                loop_digbelow_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
    }
    event_1315_11_end: ;
}
// Function purpose: generated callback event_func_6054 processes event block(s) 1329_11. Actions/conditions:
//        1329_11: increments Fatigue by 5; sets a stored numeric value.
void Frames::event_func_6054()
{
    VITA_LEGACY_EVENT();
    // event 1329_11 : increments Fatigue by 5; sets a stored numeric value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_1329_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (1))) goto event_1329_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(238, str_cuttype_863)) == (str_fence_2247))) goto event_1329_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1329_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        ((ArrayObject*)get_instance(fencearray_265_instances))->set_value(((ArrayObject*)get_instance(fencearray_265_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862), ((Active*)get_instance(playerBase_instances))->layer->index+1)+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(715, str_cutpower_1884)), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862), ((Active*)get_instance(playerBase_instances))->layer->index+1);
        {
            loop_check_complete_fencecut_running = true;
            int times = int(1);
            loop_check_complete_fencecut_index = 0;
            while (loop_check_complete_fencecut_index < times) {
                loop_check_complete_fencecut_11();
                if (!loop_check_complete_fencecut_running) break;
                loop_check_complete_fencecut_index++;
            }
        }
    }
    event_1329_11_end: ;
}
// Function purpose: generated callback event_func_6055 processes event block(s) 1341_11. Actions/conditions:
//        1341_11: increments Fatigue by 5; changes a stored game value; sets vent_hp to
//        ((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(1).
void Frames::event_func_6055()
{
    VITA_LEGACY_EVENT();
    // event 1341_11 : increments Fatigue by 5; changes a stored game value; sets vent_hp to ((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto event_1341_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) == (1))) goto event_1341_11_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(927, str_unscrewx_2248)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(928, str_unscrewy_2249)))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_1341_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1341_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(929, str_unscrewval_2250));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(687, str_vent_hp_1793, ((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(1));
    }
    event_1341_11_end: ;
}
// Function purpose: generated callback event_func_6056 processes event block(s) 1346_11. Actions/conditions:
//        1346_11: increments Fatigue by 5.
void Frames::event_func_6056()
{
    VITA_LEGACY_EVENT();
    // event 1346_11 : increments Fatigue by 5
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_1346_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(433, str_weeding_1276)) == (1))) goto event_1346_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1346_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        {
            loop_weed_fin_running = true;
            int times = int(1);
            loop_weed_fin_index = 0;
            while (loop_weed_fin_index < times) {
                loop_weed_fin_11();
                if (!loop_weed_fin_running) break;
                loop_weed_fin_index++;
            }
        }
        {
            loop_close_activity_box_running = true;
            int times = int(1);
            loop_close_activity_box_index = 0;
            while (loop_close_activity_box_index < times) {
                loop_close_activity_box_6();
                if (!loop_close_activity_box_running) break;
                loop_close_activity_box_index++;
            }
        }
    }
    event_1346_11_end: ;
}
// Function purpose: generated callback event_func_6057 processes event block(s) 1356_11. Actions/conditions:
//        1356_11: increments Fatigue by 5.
void Frames::event_func_6057()
{
    VITA_LEGACY_EVENT();
    // event 1356_11 : increments Fatigue by 5
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_1356_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(359, str_cleaning_23)) == (1))) goto event_1356_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1356_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        {
            loop_clean_fin_running = true;
            int times = int(1);
            loop_clean_fin_index = 0;
            while (loop_clean_fin_index < times) {
                loop_clean_fin_11();
                if (!loop_clean_fin_running) break;
                loop_clean_fin_index++;
            }
        }
        {
            loop_close_activity_box_running = true;
            int times = int(1);
            loop_close_activity_box_index = 0;
            while (loop_close_activity_box_index < times) {
                loop_close_activity_box_6();
                if (!loop_close_activity_box_running) break;
                loop_close_activity_box_index++;
            }
        }
    }
    event_1356_11_end: ;
}
// Function purpose: generated callback event_func_6058 processes event block(s) 1369_11. Actions/conditions:
//        1369_11: changes a stored game value; adds a stats 340 instance; sets the displayed text; plus 5 more
//        actions.
void Frames::event_func_6058()
{
    VITA_LEGACY_EVENT();
    // event 1369_11 : changes a stored game value; adds a stats 340 instance; sets the displayed text; plus 5 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_browsing_1)) goto event_1369_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(361, str_browsing_1155)) == (1))) goto event_1369_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) < (100))) goto event_1369_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1369_11_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(10, 1);
        stats_340_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_stats_340(0, 0), 1);
            stats_340_instances.add_back();
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str_int_2561);
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1369_11_1;
            ((TextBlitter*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + -16);
            pos_end_1369_11_1: ;
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_1369_11_end: ;
}
// Function purpose: generated callback event_func_6059 processes event block(s) 1374_11. Actions/conditions:
//        1374_11: changes a stored game value; adds a stats 340 instance; sets the displayed text; plus 5 more
//        actions.
void Frames::event_func_6059()
{
    VITA_LEGACY_EVENT();
    // event 1374_11 : changes a stored game value; adds a stats 340 instance; sets the displayed text; plus 5 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_reading_1)) goto event_1374_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(360, str_reading_1154)) == (1))) goto event_1374_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) < (100))) goto event_1374_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1374_11_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(10, 1);
        stats_340_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_stats_340(0, 0), 1);
            stats_340_instances.add_back();
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str_int_2561);
        }
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1374_11_1;
            ((TextBlitter*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + -16);
            pos_end_1374_11_1: ;
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_1374_11_end: ;
}
// Function purpose: generated callback event_func_6060 processes event block(s) 1387_11. Actions/conditions:
//        1387_11: sets the object's animation to 0.
void Frames::event_func_6060()
{
    // event 1387_11 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_1387_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(15, str_rope_463)) == (1))) goto event_1387_11_end;
        {
            loop_new_rope_running = true;
            int times = int(2);
            loop_new_rope_index = 0;
            while (loop_new_rope_index < times) {
                loop_new_rope_11();
                if (!loop_new_rope_running) break;
                loop_new_rope_index++;
            }
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1387_11_end: ;
}
// Function purpose: generated callback event_func_6061 processes event block(s) 1397_11. Actions/conditions:
//        1397_11: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_6061()
{
    // event 1397_11 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1397_11_end;
            group_code_sort_these_using_items_2_chipping_2_1 = false;
    
            group_code_sort_these_using_items_2_digging_2_1 = false;
    
            group_code_sort_these_using_items_2_cutting_2_1 = false;
    
            group_code_sort_these_using_items_2_unscrewing_2_1 = false;
    
            group_code_sort_these_using_items_2_weeding_1 = false;
    
            group_code_sort_these_using_items_2_cleaning_1 = false;
    
            group_code_sort_these_using_items_2_browsing_1 = false;
    
            group_code_sort_these_using_items_2_reading_1 = false;
    
            group_code_sort_these_using_items_2_roof_travel_2_1 = false;
    
    }
    event_1397_11_end: ;
}
// Function purpose: generated callback event_func_6062 processes event block(s) 1403_11. Actions/conditions:
//        1403_11: sets the selected object's direction to 0.
void Frames::event_func_6062()
{
    // event 1403_11 : sets the selected object's direction to 0
    {
        if (!(group_code_1)) goto event_1403_11_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1403_11_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1403_11_end: ;
}
// Function purpose: generated callback event_func_6063 processes event block(s) 1406_11. Actions/conditions:
//        1406_11: sets SpeakText to gameVariables->get_string(401, Des_Msg); sets Des_Msg to empty_string.
void Frames::event_func_6063()
{
    // event 1406_11 : sets SpeakText to gameVariables->get_string(401, Des_Msg); sets Des_Msg to empty_string
    {
        if (!(group_code_1)) goto event_1406_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(401, str_des_msg_1213)) != (empty_string))) goto event_1406_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) <= (0))) goto event_1406_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) <= (0))) goto event_1406_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) <= (0))) goto event_1406_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) <= (0))) goto event_1406_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(401, str_des_msg_1213));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(401, str_des_msg_1213, empty_string);
        {
            loop_notice_running = true;
            int times = int(1);
            loop_notice_index = 0;
            while (loop_notice_index < times) {
                loop_notice_11();
                if (!loop_notice_running) break;
                loop_notice_index++;
            }
        }
    }
    event_1406_11_end: ;
}
// Function purpose: generated callback event_func_6064 processes event block(s) 1408_11. Actions/conditions:
//        1408_11: sets ViewProfile to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(25); sets the selected object's visibility to true;
//        creates a profilestats 432 object; plus 1 more actions.
void Frames::event_func_6064()
{
    // event 1408_11 : sets ViewProfile to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); sets the selected object's visibility to true; creates a profilestats 432 object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1408_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1408_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1408_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_1408_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_1408_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1408_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(339, str_viewprofile_1129, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        FrameObject * single_instance_1408_11_0; single_instance_1408_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -34), parent->layer);
                if (single_instance_1408_11_0 == NULL)
                    single_instance_1408_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_1408_11_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_1_97)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_2_155)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_3_158)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_4_161));
        {
            loop_guard_tab_stats_running = true;
            int times = int(1);
            loop_guard_tab_stats_index = 0;
            while (loop_guard_tab_stats_index < times) {
                loop_guard_tab_stats_11();
                if (!loop_guard_tab_stats_running) break;
                loop_guard_tab_stats_index++;
            }
        }
    }
    event_1408_11_end: ;
}
// Function purpose: generated callback event_func_6065 processes event block(s) 1418_11. Actions/conditions:
//        1418_11: sets the selected object's visibility to true; sets ViewProfile to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25).
void Frames::event_func_6065()
{
    // event 1418_11 : sets the selected object's visibility to true; sets ViewProfile to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1418_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1418_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1418_11_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_1418_11_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_1418_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1418_11_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(339, str_viewprofile_1129, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        {
            loop_npc_tab_stats_running = true;
            int times = int(1);
            loop_npc_tab_stats_index = 0;
            while (loop_npc_tab_stats_index < times) {
                loop_npc_tab_stats_11();
                if (!loop_npc_tab_stats_running) break;
                loop_npc_tab_stats_index++;
            }
        }
        {
            loop_create_stat_bars_npc_running = true;
            int times = int(4);
            loop_create_stat_bars_npc_index = 0;
            while (loop_create_stat_bars_npc_index < times) {
                loop_create_stat_bars_npc_6();
                if (!loop_create_stat_bars_npc_running) break;
                loop_create_stat_bars_npc_index++;
            }
        }
        {
            loop_stats_gear_npc_running = true;
            int times = int(1);
            loop_stats_gear_npc_index = 0;
            while (loop_stats_gear_npc_index < times) {
                loop_stats_gear_npc_11();
                if (!loop_stats_gear_npc_running) break;
                loop_stats_gear_npc_index++;
            }
        }
    }
    event_1418_11_end: ;
}
// Function purpose: generated callback event_func_6066 processes event block(s) 1420_11. Actions/conditions:
//        1420_11: sets LClick to 1.
void Frames::event_func_6066()
{
    // event 1420_11 : sets LClick to 1
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1420_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1420_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_1420_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_1420_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1420_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->test_directions(1)) goto event_1420_11_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(dialogPanel_instances))->get_x()+55))) goto event_1420_11_end;
        if (!((get_mouse_y()) >= (((Active*)get_instance(dialogPanel_instances))->get_y()-54))) goto event_1420_11_end;
        if (!((get_mouse_y()) <= (((Active*)get_instance(dialogPanel_instances))->get_y()-37))) goto event_1420_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1420_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_11();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        {
            loop_npc_tab_stats_running = true;
            int times = int(1);
            loop_npc_tab_stats_index = 0;
            while (loop_npc_tab_stats_index < times) {
                loop_npc_tab_stats_11();
                if (!loop_npc_tab_stats_running) break;
                loop_npc_tab_stats_index++;
            }
        }
    }
    event_1420_11_end: ;
}
// Function purpose: generated callback event_func_6067 processes event block(s) 1428_11. Actions/conditions:
//        1428_11: sets the selected object's direction to 16; sets LClick to 1; sets GiveCash to 0; plus 1 more
//        actions.
void Frames::event_func_6067()
{
    // event 1428_11 : sets the selected object's direction to 16; sets LClick to 1; sets GiveCash to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1428_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1428_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_1428_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_1428_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1428_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->test_directions(65536)) goto event_1428_11_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(dialogPanel_instances))->get_x()+55))) goto event_1428_11_end;
        if (!((get_mouse_y()) >= (((Active*)get_instance(dialogPanel_instances))->get_y()-31))) goto event_1428_11_end;
        if (!((get_mouse_y()) <= (((Active*)get_instance(dialogPanel_instances))->get_y()-15))) goto event_1428_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1428_11_end;
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_11();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_give_cash_setup_running = true;
            int times = int(1);
            loop_give_cash_setup_index = 0;
            while (loop_give_cash_setup_index < times) {
                loop_give_cash_setup_11();
                if (!loop_give_cash_setup_running) break;
                loop_give_cash_setup_index++;
            }
        }
        {
            loop_npc_tab_stats_name_running = true;
            int times = int(1);
            loop_npc_tab_stats_name_index = 0;
            while (loop_npc_tab_stats_name_index < times) {
                loop_npc_tab_stats_name_11();
                if (!loop_npc_tab_stats_name_running) break;
                loop_npc_tab_stats_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(636, str_givecash_1725, 0);
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1428_11_end: ;
}
// Function purpose: generated callback event_func_6068 processes event block(s) 1445_11. Actions/conditions:
//        1445_11: plays a sound or music track; sets LClick to 1.
void Frames::event_func_6068()
{
    // event 1445_11 : plays a sound or music track; sets LClick to 1
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1445_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(18))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_1445_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1445_11_end;
        media.play_id(SOUND_LOSE_8, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
    }
    event_1445_11_end: ;
}
// Function purpose: generated callback event_func_6069 processes event block(s) 1446_11. Actions/conditions:
//        1446_11: sets LClick to 1; sets the object's animation to 14; sets the selected object's direction to 24;
//        plus 1 more actions.
void Frames::event_func_6069()
{
    // event 1446_11 : sets LClick to 1; sets the object's animation to 14; sets the selected object's direction to 24; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1446_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1446_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_1446_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_1446_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1446_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->test_directions(16777216)) goto event_1446_11_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(dialogPanel_instances))->get_x()+55))) goto event_1446_11_end;
        if (!((get_mouse_y()) >= (((Active*)get_instance(dialogPanel_instances))->get_y()-10))) goto event_1446_11_end;
        if (!((get_mouse_y()) <= (((Active*)get_instance(dialogPanel_instances))->get_y()+7))) goto event_1446_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1446_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(14);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(24);
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_11();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        {
            loop_npc_tab_stats_name_running = true;
            int times = int(1);
            loop_npc_tab_stats_name_index = 0;
            while (loop_npc_tab_stats_name_index < times) {
                loop_npc_tab_stats_name_11();
                if (!loop_npc_tab_stats_name_running) break;
                loop_npc_tab_stats_name_index++;
            }
        }
        {
            loop_npc_buy_setup_running = true;
            int times = int(1);
            loop_npc_buy_setup_index = 0;
            while (loop_npc_buy_setup_index < times) {
                loop_npc_buy_setup_11();
                if (!loop_npc_buy_setup_running) break;
                loop_npc_buy_setup_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_1446_11_end: ;
}
// Function purpose: generated callback event_func_6070 processes event block(s) 1486_11. Actions/conditions:
//        1486_11: saves the current object selection; saves the current object selection; sets LeftClick to 1; plus 6
//        more actions.
void Frames::event_func_6070()
{
    // event 1486_11 : saves the current object selection; saves the current object selection; sets LeftClick to 1; plus 6 more actions
    bool or_result_1486_11 = false;
    bool or_temp_result_1486_11_0 = false;
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto or_event_1486_11_0_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto or_event_1486_11_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_1486_11_0_end;
        sidePanel_instances.clear_selection();
        for (ObjectIterator it(sidePanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!sidePanel_instances.has_selection()) goto or_event_1486_11_0_end;
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(14))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_1486_11_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_1486_11_0_end;
        or_result_1486_11 = true;
        or_temp_result_1486_11_0 = true;
    }
    or_event_1486_11_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    sidePanel_instances.clear_saved_selection();
    if (or_temp_result_1486_11_0) {
        dialogPanel_instances.save_selection();
        sidePanel_instances.save_selection();
    }
    // event 1486_11 : saves the current object selection; saves the current object selection; sets LeftClick to 1; plus 6 more actions
    bool or_temp_result_1486_11_1 = false;
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto or_event_1486_11_1_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto or_event_1486_11_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_1486_11_1_end;
        sidePanel_instances.clear_selection();
        for (ObjectIterator it(sidePanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!sidePanel_instances.has_selection()) goto or_event_1486_11_1_end;
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_1486_11_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_1486_11_1_end;
        or_result_1486_11 = true;
        or_temp_result_1486_11_1 = true;
        or_event_1486_11_1_end: ;
        if (or_temp_result_1486_11_1) {
            dialogPanel_instances.save_selection();
            sidePanel_instances.save_selection();
        }
        if (!or_result_1486_11) goto or_final_or_event_1486_11_1_end;
        sidePanel_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_1486_11_0 || or_temp_result_1486_11_1) {
            dialogPanel_instances.restore_selection();
        }
        if (or_temp_result_1486_11_0 || or_temp_result_1486_11_1) {
            sidePanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(956, str_leftclick_2295, 1);
        }
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((AssociateArray*)get_single(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(872, str_lastcursor_2054));
        }
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_11();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    or_final_or_event_1486_11_1_end: ;
}
// Function purpose: generated callback event_func_6071 processes event block(s) 1487_11. Actions/conditions:
//        1487_11: sets Esc to 1; sets the selected object's visibility to false; plays a sound or music track.
void Frames::event_func_6071()
{
    // event 1487_11 : sets Esc to 1; sets the selected object's visibility to false; plays a sound or music track
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1487_11_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_1487_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_1487_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1487_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(561, str_esc_202)) == (0))) goto event_1487_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(561, str_esc_202, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_11();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_1487_11_end: ;
}
// Function purpose: generated callback event_func_6072 processes event block(s) 1488_11. Actions/conditions:
//        1488_11: sets Esc to 1; sets the selected object's visibility to false; plays a sound or music track.
void Frames::event_func_6072()
{
    // event 1488_11 : sets Esc to 1; sets the selected object's visibility to false; plays a sound or music track
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_1488_11_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_1488_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(561, str_esc_202)) == (0))) goto event_1488_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(21))) goto event_1488_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1488_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(561, str_esc_202, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_11();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_1488_11_end: ;
}
// Function purpose: generated callback event_func_6073 processes event block(s) 1506_11. Actions/conditions:
//        1506_11: sets the selected object's scale to (1.8+(gameVariables->get_value(96,
//        LightSize))+sin_deg(randrange_event(100))*0.2); sets the object position in the world.
void Frames::event_func_6073()
{
    // event 1506_11 : sets the selected object's scale to (1.8+(gameVariables->get_value(96, LightSize))+sin_deg(randrange_event(100))*0.2); sets the object position in the world
    {
        if (!(group_code_1)) goto event_1506_11_end;
        if (!((undergroundGlow_instances.size()) > (0))) goto event_1506_11_end;
        every_1506_11 += manager.dt;
        if (every_1506_11 < 0.04) goto event_1506_11_end;
        every_1506_11 -= 0.04;
        undergroundGlow_instances.clear_selection();
        for (ObjectIterator it(undergroundGlow_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale((1.8+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(96, str_lightsize_611))+sin_deg(randrange_event(100))*0.2));
        }
        for (ObjectIterator it(undergroundGlow_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1506_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1506_11_0: ;
        }
    }
    event_1506_11_end: ;
}
// Function purpose: generated callback event_func_6074 processes event block(s) 1513_11. Actions/conditions:
//        1513_11: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_6074()
{
    // event 1513_11 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1513_11_end;
        {
            activesystembox_450_instances.clear_selection();
            SavedSelection extra_activesystembox_450_instances(activesystembox_450_instances);
            for (SavedIterator it(extra_activesystembox_450_instances); !it.end(); ++it) {
                foreach_instance_speech = ((SystemBox*)*it);
                foreach_speech_11();
            }
        }
    }
    event_1513_11_end: ;
}
