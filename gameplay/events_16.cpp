#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_1206 processes event block(s) 904_6. Actions/conditions:
//        904_6: sets the selected object's horizontal position to ((Active*)get_qualifier(qualifier_2,
//        default_active_instance))->get_x().
void Frames::event_func_1206()
{
    // event 904_6 : sets the selected object's horizontal position to ((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_904_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (1))) goto event_904_6_end;
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x());
    }
    event_904_6_end: ;
}
void Frames::loop_move_check_x_6()
{
    event_func_1206();
    event_func_1205();
}
// Function purpose: generated callback event_func_1207 processes event block(s) 2651_6. Actions/conditions:
//        2651_6: sets Pressed_J to 1; sets LClick to 1; sets the selected object's visibility to true; plus 9 more
//        actions.
void Frames::event_func_1207()
{
    // event 2651_6 : sets Pressed_J to 1; sets LClick to 1; sets the selected object's visibility to true; plus 9 more actions
    {
        if (!(group_code_1)) goto event_2651_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(321, str_pressed_j_1102, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(25);
        FrameObject * single_instance_2651_6_0; single_instance_2651_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -68), parent->layer);
                if (single_instance_2651_6_0 == NULL)
                    single_instance_2651_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2651_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_2651_6_0)), frame_left()));
        ((Text*)((Text*)single_instance_2651_6_0))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_2651_6_0))->set_bold(1);
        if (!group_code_journal_1) {
            group_code_journal_1 = true;
            group_check_group_code_journal_1_1 = true;
            group_check_group_code_journal_1_0 = true;
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2651_6_end: ;
}
void Frames::loop_open_journal_6()
{
    event_func_1207();
}
// Function purpose: generated callback event_func_1208 processes event block(s) 3218_6. Actions/conditions:
//        3218_6: removes the selected object.
void Frames::event_func_1208()
{
    // event 3218_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3218_6_end;
        dizzy_467_instances.clear_selection();
        for (ObjectIterator it(dizzy_467_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(322, str_npc_z_1103)))) { it.deselect(); continue; }
        }
        if (!dizzy_467_instances.has_selection()) goto event_3218_6_end;
        for (ObjectIterator it(dizzy_467_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3218_6_end: ;
}
void Frames::loop_del_dizzy_6()
{
    event_func_1208();
}
// Function purpose: generated callback event_func_1209 processes event block(s) 4159_6. Actions/conditions:
//        4159_6: increments mCount by 1.
void Frames::event_func_1209()
{
    // event 4159_6 : increments mCount by 1
    {
        if (!(group_code_1)) goto event_4159_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_count_avail_missions_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(2)) != (empty_string))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4159_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(323, str_mcount_1104, 1);
    }
    event_4159_6_end: ;
}
void Frames::loop_count_avail_missions_6()
{
    event_func_1209();
}
// Function purpose: generated callback event_func_1210 processes event block(s) 3546_6. Actions/conditions:
//        3546_6: sets the selected object's numeric value to 0; sets the object position in the world; sets the
//        object position in the world; plus 1 more actions.
void Frames::event_func_1210()
{
    // event 3546_6 : sets the selected object's numeric value to 0; sets the object position in the world; sets the object position in the world; plus 1 more actions
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto event_3546_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) < (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3546_6_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto event_3546_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
        {
            FrameObject * parent = ((Active*)get_single(bedplayer_338_instances));
            if (parent == NULL) goto pos_end_3546_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 13, parent->get_y() + 7);
            pos_end_3546_6_0: ;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_3546_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3546_6_1: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_3546_6_2;
            ((Active*)get_instance(camera_202_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3546_6_2: ;
        }
    }
    event_3546_6_end: ;
}
// Function purpose: generated callback event_func_1211 processes event block(s) 3547_6. Actions/conditions:
//        3547_6: sets the selected object's numeric value to 0; sets the object position in the world; sets the
//        object position in the world; plus 1 more actions.
void Frames::event_func_1211()
{
    // event 3547_6 : sets the selected object's numeric value to 0; sets the object position in the world; sets the object position in the world; plus 1 more actions
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto event_3547_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) < (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3547_6_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto event_3547_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
        {
            FrameObject * parent = ((Active*)get_single(bedplayer_338_instances));
            if (parent == NULL) goto pos_end_3547_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 10);
            pos_end_3547_6_0: ;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_3547_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3547_6_1: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_3547_6_2;
            ((Active*)get_instance(camera_202_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3547_6_2: ;
        }
    }
    event_3547_6_end: ;
}
// Function purpose: generated callback event_func_1212 processes event block(s) 3548_6. Actions/conditions:
//        3548_6: adds a fade 343 instance; sets the selected object's horizontal position to frame_left(); sets the
//        selected object's vertical position to frame_top(); plus 6 more actions.
void Frames::event_func_1212()
{
    // event 3548_6 : adds a fade 343 instance; sets the selected object's horizontal position to frame_left(); sets the selected object's vertical position to frame_top(); plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto event_3548_6_end;
        screenFade_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_screenFade(0, 0), 5);
            screenFade_instances.add_back();
        }
        for (ObjectIterator it(screenFade_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left()));
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top()));
            ((Active*)*it)->blend_color.set_alpha_coefficient(255);
            ((Active*)*it)->set_scale(10);
            ((Active*)*it)->alterables->strings.set(0, str_sleep_1105);
        }
    }
    event_3548_6_end: ;
}
void Frames::loop_fade_sleep_6()
{
    event_func_1210();
    event_func_1211();
    event_func_1212();
}
// Function purpose: generated callback event_func_1213 processes event block(s) 2717_6. Actions/conditions:
//        2717_6: removes the selected object; sets the selected object's visibility to false.
void Frames::event_func_1213()
{
    // event 2717_6 : removes the selected object; sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_load_confirm_1)) goto event_2717_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
    }
    event_2717_6_end: ;
}
void Frames::loop_close_load_6()
{
    event_func_1213();
}
// Function purpose: generated callback event_func_1214 processes event block(s) 1715_6. Actions/conditions:
//        1715_6: adds a line to the current list.
void Frames::event_func_1214()
{
    // event 1715_6 : adds a line to the current list
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1715_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shakedown_list_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1715_6_end;
        craftsort_346_instances.clear_selection();
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->add_line(((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0)+str__96+number_to_string(((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->values.get(0)));
        }
    }
    event_1715_6_end: ;
}
void Frames::loop_shakedown_list_6()
{
    event_func_1214();
}
// Function purpose: generated callback event_func_1215 processes event block(s) 4525_6. Actions/conditions:
//        4525_6: stores an integer value; stores player data.
void Frames::event_func_1215()
{
    // event 4525_6 : stores an integer value; stores player data
    {
        if (!(group_extra_npcs_visitors_1)) goto event_4525_6_end;
        if (!((global_values->get(16)) == (1))) goto event_4525_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->set_int(str_visitors_1106, ((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_visitors_1106)+1);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_4525_6_end: ;
}
void Frames::loop_stat_visitors_6()
{
    event_func_1215();
}
// Function purpose: generated callback event_func_1216 processes event block(s) 1993_6. Actions/conditions:
//        1993_6: sets the selected object's numeric value to ((Active*)get_single(guardpostshower_254_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_single(guardpostshower_254_instances, it.current_index, default_active_instance))->get_y()+8.
void Frames::event_func_1216()
{
    // event 1993_6 : sets the selected object's numeric value to ((Active*)get_single(guardpostshower_254_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(guardpostshower_254_instances, it.current_index, default_active_instance))->get_y()+8
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1993_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_align_guards_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1993_6_end;
        if (!check_not_overlap(guardBase_instances, guardpostshower_254_instances)) goto event_1993_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1993_6_end;
        guardpostshower_254_instances.clear_selection();
        for (ObjectIterator it(guardpostshower_254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_align_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardpostshower_254_instances.has_selection()) goto event_1993_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(guardpostshower_254_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(guardpostshower_254_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_1993_6_end: ;
}
// Function purpose: generated callback event_func_1217 processes event block(s) 1994_6. Actions/conditions:
//        1994_6: sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        active3_284->x + 0, active3_284->y + 0).
void Frames::event_func_1217()
{
    // event 1994_6 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, active3_284->x + 0, active3_284->y + 0)
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1994_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_align_guards_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1994_6_end;
        guardpostshower_254_instances.clear_selection();
        if (!check_overlap(guardBase_instances, guardpostshower_254_instances)) goto event_1994_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1994_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(active3_284_instances))->x + 0, ((Active*)get_instance(active3_284_instances))->y + 0));
        }
    }
    event_1994_6_end: ;
}
void Frames::loop_shower_align_guards_6()
{
    event_func_1216();
    event_func_1217();
}
// Function purpose: generated callback event_func_1218 processes event block(s) 3180_6. Actions/conditions:
//        3180_6: unlocks the TankedUp achievement; stores player data.
void Frames::event_func_1218()
{
    // event 3180_6 : unlocks the TankedUp achievement; stores player data
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3180_6_end;
        if (!((global_values->get(16)) == (1))) goto event_3180_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_unlocked(str_tankedup_1107)) == (0))) goto event_3180_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_tankedup_1107);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_3180_6_end: ;
}
void Frames::loop_tanked_up_6()
{
    event_func_1218();
}
// Function purpose: generated callback event_func_1219 processes event block(s) 3640_6. Actions/conditions:
//        3640_6: adds a usespot 208 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(324, CleanX); sets the selected object's vertical position to
//        gameVariables->get_value(325, CleanY).
void Frames::event_func_1219()
{
    // event 3640_6 : adds a usespot 208 instance; sets the selected object's horizontal position to gameVariables->get_value(324, CleanX); sets the selected object's vertical position to gameVariables->get_value(325, CleanY)
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3640_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 1);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(324, str_cleanx_1108));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(325, str_cleany_1109));
        }
    }
    event_3640_6_end: ;
}
// Function purpose: generated callback event_func_1220 processes event block(s) 3641_6. Actions/conditions:
//        3641_6: increments JobQuota by 11.
void Frames::event_func_1220()
{
    // event 3641_6 : increments JobQuota by 11
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3641_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_3641_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_3641_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_3641_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_3641_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 11);
    }
    event_3641_6_end: ;
}
// Function purpose: generated callback event_func_1221 processes event block(s) 3642_6. Actions/conditions:
//        3642_6: increments JobQuota by 20.
void Frames::event_func_1221()
{
    // event 3642_6 : increments JobQuota by 20
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3642_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_3642_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_3642_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_3642_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_3642_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 20);
    }
    event_3642_6_end: ;
}
// Function purpose: generated callback event_func_1222 processes event block(s) 3643_6. Actions/conditions:
//        3643_6: sets the selected object's numeric value to 0.
void Frames::event_func_1222()
{
    // event 3643_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3643_6_end;
        usespot_208_instances.clear_selection();
        dirt_242_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, dirt_242_instances)) goto event_3643_6_end;
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_3643_6_end: ;
}
// Function purpose: generated callback event_func_1223 processes event block(s) 3644_6. Actions/conditions:
//        3644_6: removes the selected object.
void Frames::event_func_1223()
{
    // event 3644_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3644_6_end;
        usespot_208_instances.clear_selection();
        water_303_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, water_303_instances)) goto event_3644_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3644_6_end;
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3644_6_end: ;
}
// Function purpose: generated callback event_func_1224 processes event block(s) 3645_6. Actions/conditions:
//        3645_6: removes the selected object.
void Frames::event_func_1224()
{
    // event 3645_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3645_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3645_6_end: ;
}
void Frames::loop_clean_fin_6()
{
    event_func_1219();
    event_func_1220();
    event_func_1221();
    event_func_1222();
    event_func_1223();
    event_func_1224();
}
// Function purpose: generated callback event_func_1225 processes event block(s) 4179_6. Actions/conditions:
//        4179_6: sets error to 0; sets itemID to randrange_event(gameVariables->get_value(52, ITEM_COUNT)).
void Frames::event_func_1225()
{
    // event 4179_6 : sets error to 0; sets itemID to randrange_event(gameVariables->get_value(52, ITEM_COUNT))
    {
        if (!(group_loops_1)) goto event_4179_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(326, str_itemid_1110, randrange_event(((AssociateArray*)get_instance(gameVariables_instances))->get_value(52, str_item_count_527)));
    }
    event_4179_6_end: ;
}
// Function purpose: generated callback event_func_1226 processes event block(s) 4180_6. Actions/conditions:
//        4180_6: sets error to 1.
void Frames::event_func_1226()
{
    // event 4180_6 : sets error to 1
    {
        if (!(group_loops_1)) goto event_4180_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(326, str_itemid_1110)), str_npc_carry_1111)) == (0))) goto event_4180_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 1);
    }
    event_4180_6_end: ;
}
// Function purpose: generated callback event_func_1227 processes event block(s) 4181_6. Actions/conditions:
//        4181_6: sets error to 1.
void Frames::event_func_1227()
{
    // event 4181_6 : sets error to 1
    {
        if (!(group_loops_1)) goto event_4181_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(326, str_itemid_1110)), str_found_528)) != (global_strings->get(0)))) goto event_4181_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(326, str_itemid_1110)), str_found_528)) != (empty_string))) goto event_4181_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_error_233, 1);
    }
    event_4181_6_end: ;
}
// Function purpose: generated callback event_func_1228 processes event block(s) 4182_6. Actions/conditions:
//        4182_6: checks the event-specific game state condition is met; game state error; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_1228()
{
    // event 4182_6 : checks the event-specific game state condition is met; game state error; this handler gates a game event without a direct value/object action
    {
        if (!(group_loops_1)) goto event_4182_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_error_233)) == (0))) goto event_4182_6_end;
            loop_find_npc_carry_item_running = false;
    
    }
    event_4182_6_end: ;
}
void Frames::loop_find_npc_carry_item_6()
{
    event_func_1225();
    event_func_1226();
    event_func_1227();
    event_func_1228();
}
// Function purpose: generated callback event_func_1229 processes event block(s) 2731_6. Actions/conditions:
//        2731_6: sets the object position in the world; sets the selected object's numeric value to 3; moves the
//        selected object behind other objects; plus 1 more actions.
void Frames::event_func_1229()
{
    // event 2731_6 : sets the object position in the world; sets the selected object's numeric value to 3; moves the selected object behind other objects; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2731_6_end;
        waypointinmate2_311_instances.clear_selection();
        FrameObject * single_instance_2731_6_0; single_instance_2731_6_0 = pick_random(waypointinmate2_311_instances);
        if (single_instance_2731_6_0 == NULL) goto event_2731_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)single_instance_2731_6_0)->get_x()/MathHelper()/16), (((Active*)single_instance_2731_6_0)->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_2731_6_end;
        weeds_462_instances.clear_selection();
        for (ObjectIterator it(weeds_462_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!weeds_462_instances.has_selection()) goto event_2731_6_end;
        for (ObjectIterator it(weeds_462_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_2731_6_0);
            if (parent == NULL) goto pos_end_2731_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2731_6_1: ;
        }
        for (ObjectIterator it(weeds_462_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 3);
            ((Active*)*it)->move_back();
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2731_6_end: ;
}
void Frames::loop_find_weeds_spot_6()
{
    event_func_1229();
}
// Function purpose: generated callback event_func_1230 processes event block(s) 1034_6. Actions/conditions:
//        1034_6: sets EndString to Caught entry 5.
void Frames::event_func_1230()
{
    // event 1034_6 : sets EndString to Caught entry 5
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1034_6_end;
        if (group_saving_1) goto event_1034_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1034_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662)-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_cutfence_909))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_1034_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1034_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_5_164));
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
    event_1034_6_end: ;
}
// Function purpose: generated callback event_func_1231 processes event block(s) 1035_6. Actions/conditions:
//        1035_6: sets EndString to Caught entry 6.
void Frames::event_func_1231()
{
    // event 1035_6 : sets EndString to Caught entry 6
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1035_6_end;
        if (group_saving_1) goto event_1035_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1035_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662)-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_cutbars_910))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_1035_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1035_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_6_241));
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
    event_1035_6_end: ;
}
// Function purpose: generated callback event_func_1232 processes event block(s) 1036_6. Actions/conditions:
//        1036_6: sets EndString to Caught entry 7.
void Frames::event_func_1232()
{
    // event 1036_6 : sets EndString to Caught entry 7
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1036_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1036_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662)-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_openvent_908))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_1036_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1036_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_7_323));
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
    event_1036_6_end: ;
}
// Function purpose: generated callback event_func_1233 processes event block(s) 1037_6. Actions/conditions:
//        1037_6: sets EndString to Caught entry 6.
void Frames::event_func_1233()
{
    // event 1037_6 : sets EndString to Caught entry 6
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1037_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1037_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662)-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_barscut_502))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_1037_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1037_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_6_241));
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
    event_1037_6_end: ;
}
// Function purpose: generated callback event_func_1234 processes event block(s) 1038_6. Actions/conditions:
//        1038_6: sets EndString to Caught entry 8.
void Frames::event_func_1234()
{
    // event 1038_6 : sets EndString to Caught entry 8
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1038_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1038_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662)-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_brokenwall_600))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_1038_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1038_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_8_325));
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
    event_1038_6_end: ;
}
void Frames::loop_guard_sees_alert_6()
{
    event_func_1230();
    event_func_1231();
    event_func_1232();
    event_func_1233();
    event_func_1234();
}
// Function purpose: generated callback event_func_1235 processes event block(s) 652_6. Actions/conditions:
//        652_6: sets a game or interface text string; sets a game or interface text string; sets a game or interface
//        text string; plus 5 more actions.
void Frames::event_func_1235()
{
    // event 652_6 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 5 more actions
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_652_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_et_guard_equip_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_652_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_2_454, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_3_455, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_4_456, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_5_457, str_207_100_1112);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_6_458, str_193_100_1113);
    }
    event_652_6_end: ;
}
void Frames::loop_et_guard_equip_6()
{
    event_func_1235();
}
// Function purpose: generated callback event_func_1236 processes event block(s) 3018_6. Actions/conditions:
//        3018_6: sets the selected object's numeric value to 1; splits saved text into fields; creates a itemshud 210
//        object; plus 7 more actions.
void Frames::event_func_1236()
{
    // event 3018_6 : sets the selected object's numeric value to 1; splits saved text into fields; creates a itemshud 210 object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3018_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3018_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) != (empty_string))) goto event_3018_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))), str__96);
        FrameObject * single_instance_3018_6_0; single_instance_3018_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3018_6_0 == NULL)
                    single_instance_3018_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3018_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_3018_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_3018_6_0))->alterables->strings.set(0, str_loot_weapon_449);
        ((Active*)((Active*)single_instance_3018_6_0))->alterables->flags.enable(-2);
    }
    event_3018_6_end: ;
}
// Function purpose: generated callback event_func_1237 processes event block(s) 3019_6. Actions/conditions:
//        3019_6: splits saved text into fields; sets the selected object's numeric value to 1; creates a itemshud 210
//        object; plus 7 more actions.
void Frames::event_func_1237()
{
    // event 3019_6 : splits saved text into fields; sets the selected object's numeric value to 1; creates a itemshud 210 object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3019_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3019_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) != (empty_string))) goto event_3019_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))), str__96);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        FrameObject * single_instance_3019_6_0; single_instance_3019_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3019_6_0 == NULL)
                    single_instance_3019_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3019_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_3019_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_3019_6_0))->alterables->strings.set(0, str_loot_outfit_450);
        ((Active*)((Active*)single_instance_3019_6_0))->alterables->flags.enable(-2);
    }
    event_3019_6_end: ;
}
void Frames::loop_fill_loot_gear_slots_6()
{
    event_func_1236();
    event_func_1237();
}
// Function purpose: generated callback event_func_1238 processes event block(s) 2925_6. Actions/conditions:
//        2925_6: sets Xpos to -46; sets Ypos to -4; creates a dchar 214 object; plus 8 more actions.
void Frames::event_func_1238()
{
    // event 2925_6 : sets Xpos to -46; sets Ypos to -4; creates a dchar 214 object; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2925_6_end;
        if (!((loop_build_loo_slots_index) == (0))) goto event_2925_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(140, str_xpos_705, -46);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(80, str_ypos_193, -4);
        FrameObject * single_instance_2925_6_0; single_instance_2925_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -10), parent->layer);
                if (single_instance_2925_6_0 == NULL)
                    single_instance_2925_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2925_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_2925_6_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_2925_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+9);
        ((Text*)((Text*)single_instance_2925_6_0))->blend_color.set(Color(255, 128, 0));
        ((Text*)((Text*)single_instance_2925_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_28_1114)));
        ((Text*)((Text*)single_instance_2925_6_0))->set_bold(1);
    }
    event_2925_6_end: ;
}
// Function purpose: generated callback event_func_1239 processes event block(s) 2926_6. Actions/conditions:
//        2926_6: creates a slot 224 object; sets the selected object's string to Toilet; reads an object position for
//        this event; plus 7 more actions.
void Frames::event_func_1239()
{
    // event 2926_6 : creates a slot 224 object; sets the selected object's string to Toilet; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2926_6_end;
        FrameObject * single_instance_2926_6_0; single_instance_2926_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2926_6_0 == NULL)
                    single_instance_2926_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2926_6_0))->alterables->strings.set(0, str_toilet_533);
        ((Active*)((Active*)single_instance_2926_6_0))->set_x(((Active*)single_instance_2926_6_0)->get_x()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(140, str_xpos_705));
        ((Active*)((Active*)single_instance_2926_6_0))->set_y(((Active*)single_instance_2926_6_0)->get_y()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        ((Active*)((Active*)single_instance_2926_6_0))->alterables->values.set(0, loop_build_loo_slots_index+1);
        ((Active*)((Active*)single_instance_2926_6_0))->set_scale(2);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(140, str_xpos_705, 46);
    }
    event_2926_6_end: ;
}
void Frames::loop_build_loo_slots_6()
{
    event_func_1238();
    event_func_1239();
}
// Function purpose: generated callback event_func_1240 processes event block(s) 2269_6. Actions/conditions:
//        2269_6: adds a torch 331 instance; sets the selected object's numeric value to -1.
void Frames::event_func_1240()
{
    // event 2269_6 : adds a torch 331 instance; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_2269_6_end;
        if (!((patroljeep_416_instances.size()) > (0))) goto event_2269_6_end;
        torch_331_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_torch_331(0, 0), 1);
            torch_331_instances.add_back();
        }
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_2269_6_end: ;
}
// Function purpose: generated callback event_func_1241 processes event block(s) 2270_6. Actions/conditions:
//        2270_6: adds a torch 331 instance; sets the selected object's numeric value to -2.
void Frames::event_func_1241()
{
    // event 2270_6 : adds a torch 331 instance; sets the selected object's numeric value to -2
    {
        if (!(group_code_1)) goto event_2270_6_end;
        if (!((patroljeep_416_instances.size()) > (0))) goto event_2270_6_end;
        torch_331_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_torch_331(0, 0), 1);
            torch_331_instances.add_back();
        }
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -2);
        }
    }
    event_2270_6_end: ;
}
void Frames::loop_create_torches_jeep_6()
{
    event_func_1240();
    event_func_1241();
}
// Function purpose: generated callback event_func_1242 processes event block(s) 1603_6. Actions/conditions:
//        1603_6: sets AttendLesson to 0; disables flag 151 (NPC lesson-attendance state) on the selected object;
//        disables flag 152 (NPC lesson-attendance state) on the selected object; plus 23 more actions.
void Frames::event_func_1242()
{
    // event 1603_6 : sets AttendLesson to 0; disables flag 151 (NPC lesson-attendance state) on the selected object; disables flag 152 (NPC lesson-attendance state) on the selected object; plus 23 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1603_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(327, str_attendlesson_1115, 0);
            group_code_schedules_sleeping_1 = false;
    
            group_code_schedules_roll_call_1 = false;
    
            group_code_schedules_food_1 = false;
    
            group_code_schedules_leisure_work_1 = false;
    
            group_code_schedules_shower_1 = false;
    
            group_code_schedules_gym_1 = false;
    
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(151);
            ((Active*)*it)->alterables->flags.disable(152);
            ((Active*)*it)->alterables->flags.disable(2231);
            ((Active*)*it)->alterables->flags.disable(2232);
            ((Active*)*it)->alterables->flags.disable(30);
            ((Active*)*it)->alterables->flags.disable(31);
            ((Active*)*it)->alterables->flags.disable(23);
            ((Active*)*it)->alterables->flags.disable(24);
            ((Active*)*it)->alterables->flags.disable(45);
            ((Active*)*it)->alterables->flags.disable(987);
            ((Active*)*it)->alterables->flags.disable(87);
        }
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(100);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        ((Text*)get_instance(lessonTimerText_instances))->set_x(((Active*)get_instance(sidePanel_instances))->get_x()+26);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(328, str_gettolessontimer_1116, 850);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(329, str_lessonflash_1117, 50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(282, str_count_incells_939, 0);
        ((Active*)get_instance(playerBase_instances))->alterables->flags.disable(75);
        waypointinmaterollcall2_310_instances.clear_selection();
        for (ObjectIterator it(waypointinmaterollcall2_310_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        outfitinmate_249_instances.clear_selection();
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        outfitpow_376_instances.clear_selection();
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        outfitinmateescteam_481_instances.clear_selection();
        for (ObjectIterator it(outfitinmateescteam_481_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(sidePanel_instances))->force_animation(1);
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(61);
        }
        outfitinmatebond_486_instances.clear_selection();
        for (ObjectIterator it(outfitinmatebond_486_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        outfitinmatess_503_instances.clear_selection();
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1603_6_end: ;
}
// Function purpose: generated callback event_func_1243 processes event block(s) 1604_6. Actions/conditions:
//        1604_6: sets the selected object's numeric value to 0.
void Frames::event_func_1243()
{
    // event 1604_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1604_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_9)) goto event_1604_6_end;
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1604_6_end: ;
}
// Function purpose: generated callback event_func_1244 processes event block(s) 1605_6. Actions/conditions:
//        1605_6: removes the selected object.
void Frames::event_func_1244()
{
    // event 1605_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1605_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobquota_480))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_1605_6_end;
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1605_6_end: ;
}
// Function purpose: generated callback event_func_1245 processes event block(s) 1606_6. Actions/conditions:
//        1606_6: removes the selected object.
void Frames::event_func_1245()
{
    // event 1606_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1606_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobquota_480))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_1606_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1606_6_end: ;
}
// Function purpose: generated callback event_func_1246 processes event block(s) 1607_6. Actions/conditions:
//        1607_6: removes the selected object.
void Frames::event_func_1246()
{
    // event 1607_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1607_6_end;
        quota_358_instances.clear_selection();
        for (ObjectIterator it(quota_358_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_1607_6_end: ;
}
void Frames::loop_intermission_6()
{
    event_func_1242();
    event_func_1243();
    event_func_1244();
    event_func_1245();
    event_func_1246();
}
// Function purpose: generated callback event_func_1247 processes event block(s) 3664_6. Actions/conditions:
//        3664_6: sets the selected object's horizontal position to ((Active*)get_qualifier(qualifier_2,
//        it.current_index, default_active_instance))->get_x(); sets the selected object's vertical position to
//        ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_y(); sets horizontal
//        scaling; plus 1 more actions.
void Frames::event_func_1247()
{
    // event 3664_6 : sets the selected object's horizontal position to ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_x(); sets the selected object's vertical position to ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_y(); sets horizontal scaling; plus 1 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3664_6_end;
        grapplingrope_345_instances.clear_selection();
        for (ObjectIterator it(grapplingrope_345_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x_scale(get_distance_int(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_x(), ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_y(), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(330, str_grapx_1118), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(331, str_grapy_1119)));
            ((Active*)*it)->set_angle(get_angle_int(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_x(), ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_y(), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(330, str_grapx_1118), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(331, str_grapy_1119)), 0);
        }
    }
    event_3664_6_end: ;
}
// Function purpose: generated callback event_func_1248 processes event block(s) 3665_6. Actions/conditions:
//        3665_6: sets the selected object's horizontal position to playerBase->get_x()+1.
void Frames::event_func_1248()
{
    // event 3665_6 : sets the selected object's horizontal position to playerBase->get_x()+1
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3665_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(330, str_grapx_1118)))) goto event_3665_6_end;
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_instance(playerBase_instances))->get_x()+1);
    }
    event_3665_6_end: ;
}
// Function purpose: generated callback event_func_1249 processes event block(s) 3666_6. Actions/conditions:
//        3666_6: sets the selected object's horizontal position to playerBase->get_x()-1.
void Frames::event_func_1249()
{
    // event 3666_6 : sets the selected object's horizontal position to playerBase->get_x()-1
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3666_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(330, str_grapx_1118)))) goto event_3666_6_end;
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_instance(playerBase_instances))->get_x()-1);
    }
    event_3666_6_end: ;
}
// Function purpose: generated callback event_func_1250 processes event block(s) 3667_6. Actions/conditions:
//        3667_6: sets the selected object's vertical position to playerBase->get_y()+1.
void Frames::event_func_1250()
{
    // event 3667_6 : sets the selected object's vertical position to playerBase->get_y()+1
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3667_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(331, str_grapy_1119)))) goto event_3667_6_end;
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y()+1);
    }
    event_3667_6_end: ;
}
// Function purpose: generated callback event_func_1251 processes event block(s) 3668_6. Actions/conditions:
//        3668_6: sets the selected object's vertical position to playerBase->get_y()-1.
void Frames::event_func_1251()
{
    // event 3668_6 : sets the selected object's vertical position to playerBase->get_y()-1
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3668_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(331, str_grapy_1119)))) goto event_3668_6_end;
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y()-1);
    }
    event_3668_6_end: ;
}
// Function purpose: generated callback event_func_1252 processes event block(s) 3669_6. Actions/conditions:
//        3669_6: sets Grappling to 0; removes the selected object.
void Frames::event_func_1252()
{
    // event 3669_6 : sets Grappling to 0; removes the selected object
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3669_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(330, str_grapx_1118)))) goto event_3669_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(331, str_grapy_1119)))) goto event_3669_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(332, str_grappling_1120, 0);
        grapplingrope_345_instances.clear_selection();
        for (ObjectIterator it(grapplingrope_345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3669_6_end: ;
}
void Frames::loop_new_grap_6()
{
    event_func_1247();
    event_func_1248();
    event_func_1249();
    event_func_1250();
    event_func_1251();
    event_func_1252();
}
// Function purpose: generated callback event_func_1253 processes event block(s) 2154_6. Actions/conditions:
//        2154_6: plays a sound or music track.
void Frames::event_func_1253()
{
    // event 2154_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2154_6_end;
        if (!(!media.is_channel_playing(11-1))) goto event_2154_6_end;
        patroljeep_416_instances.clear_selection();
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!patroljeep_416_instances.has_selection()) goto event_2154_6_end;
        media.play_id(SOUND_JEEP_24, 11-1, 0);
    }
    event_2154_6_end: ;
}
void Frames::loop_jeep_sound_6()
{
    event_func_1253();
}
// Function purpose: generated callback event_func_1254 processes event block(s) 1135_6. Actions/conditions:
//        1135_6: sets EndString to Caught entry 13.
void Frames::event_func_1254()
{
    // event 1135_6 : sets EndString to Caught entry 13
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1135_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(314, str_tdist_nearestid_1092)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2055))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto event_1135_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_13_632));
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
    event_1135_6_end: ;
}
void Frames::loop_tower_fencecut_6()
{
    event_func_1254();
}
// Function purpose: generated callback event_func_1255 processes event block(s) 2214_6. Actions/conditions:
//        2214_6: adds a zipline 431 instance; sets the selected object's direction to 8; sets the selected object's
//        horizontal position to gameVariables->get_value(35, StartX); plus 5 more actions.
void Frames::event_func_1255()
{
    // event 2214_6 : adds a zipline 431 instance; sets the selected object's direction to 8; sets the selected object's horizontal position to gameVariables->get_value(35, StartX); plus 5 more actions
    {
        if (!(group_code_1)) goto event_2214_6_end;
        zipline_431_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_zipline_431(0, 0), 4);
            zipline_431_instances.add_back();
        }
        for (ObjectIterator it(zipline_431_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(35, str_startx_498));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(36, str_starty_499)-8);
            ((Active*)*it)->set_y_scale(get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(35, str_startx_498), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(36, str_starty_499)-10, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_endx_496), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_endy_497)));
        }
    }
    event_2214_6_end: ;
}
void Frames::loop_create_up_zip_6()
{
    event_func_1255();
}
// Function purpose: generated callback event_func_1256 processes event block(s) 2459_6. Actions/conditions:
//        2459_6: creates a slot 224 object; reads an object position for this event; reads an object position for
//        this event; plus 6 more actions.
void Frames::event_func_1256()
{
    // event 2459_6 : creates a slot 224 object; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2459_6_end;
        FrameObject * single_instance_2459_6_0; single_instance_2459_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2459_6_0 == NULL)
                    single_instance_2459_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2459_6_0))->set_x(((Active*)single_instance_2459_6_0)->get_x()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(140, str_xpos_705)-46);
        ((Active*)((Active*)single_instance_2459_6_0))->set_y(((Active*)single_instance_2459_6_0)->get_y()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+46);
        ((Active*)((Active*)single_instance_2459_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_2459_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_2459_6_0))->alterables->strings.set(0, str_craft_output_1121);
    }
    event_2459_6_end: ;
}
void Frames::loop_build_craft_output_6()
{
    event_func_1256();
}
// Function purpose: generated callback event_func_1257 processes event block(s) 1039_6. Actions/conditions:
//        1039_6: sets EndString to Caught entry 9.
void Frames::event_func_1257()
{
    // event 1039_6 : sets EndString to Caught entry 9
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1039_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1039_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1039_6_end;
        if (!check_not_overlap(dighole_207_instances, desks_305_instances)) goto event_1039_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_9_327));
        spread_value(dighole_207_instances, 0, 1);
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
    event_1039_6_end: ;
}
void Frames::loop_guard_sees_hole_6()
{
    event_func_1257();
}
// Function purpose: generated callback event_func_1258 processes event block(s) 579_6. Actions/conditions:
//        579_6: splits saved text into fields; adds a brace 412 instance; sets the selected object's horizontal
//        position to (string_to_number(stringtokenizer_81->get(0))*16)+8; plus 1 more actions.
void Frames::event_func_1258()
{
    // event 579_6 : splits saved text into fields; adds a brace 412 instance; sets the selected object's horizontal position to (string_to_number(stringtokenizer_81->get(0))*16)+8; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_579_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_braces_index), str_x_437);
        brace_412_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_brace_412(0, 0), 0);
            brace_412_instances.add_back();
        }
        for (ObjectIterator it(brace_412_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))*16)+8);
            ((Active*)*it)->set_y((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))*16)+8);
        }
    }
    event_579_6_end: ;
}
void Frames::loop_load_braces_6()
{
    event_func_1258();
}
// Function purpose: generated callback event_func_1259 processes event block(s) 3714_6. Actions/conditions:
//        3714_6: sets rnd to randrange_event(3).
void Frames::event_func_1259()
{
    // event 3714_6 : sets rnd to randrange_event(3)
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3714_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(3));
    }
    event_3714_6_end: ;
}
// Function purpose: generated callback event_func_1260 processes event block(s) 3715_6. Actions/conditions:
//        3715_6: sets the object's animation to 1.
void Frames::event_func_1260()
{
    // event 3715_6 : sets the object's animation to 1
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3715_6_end;
        qualifier_2.clear_selection();
        punchbag2_438_instances.clear_selection();
        if (!check_overlap(qualifier_2, punchbag2_438_instances)) goto event_3715_6_end;
        for (ObjectIterator it(punchbag2_438_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_3715_6_end: ;
}
// Function purpose: generated callback event_func_1261 processes event block(s) 3716_6. Actions/conditions:
//        3716_6: plays a sound or music track.
void Frames::event_func_1261()
{
    // event 3716_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3716_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (0))) goto event_3716_6_end;
        media.play_id(SOUND_PUNCH_NEW_21, 1-1);
    }
    event_3716_6_end: ;
}
// Function purpose: generated callback event_func_1262 processes event block(s) 3717_6. Actions/conditions:
//        3717_6: plays a sound or music track.
void Frames::event_func_1262()
{
    // event 3717_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3717_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_3717_6_end;
        media.play_id(SOUND_HIT2_14, 1-1);
    }
    event_3717_6_end: ;
}
// Function purpose: generated callback event_func_1263 processes event block(s) 3718_6. Actions/conditions:
//        3718_6: plays a sound or music track.
void Frames::event_func_1263()
{
    // event 3718_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3718_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_3718_6_end;
        media.play_id(SOUND_HIT1_13, 1-1);
    }
    event_3718_6_end: ;
}
void Frames::loop_rnd_hit_sfx_6()
{
    event_func_1259();
    event_func_1260();
    event_func_1261();
    event_func_1262();
    event_func_1263();
}
// Function purpose: generated callback event_func_1264 processes event block(s) 379_6. Actions/conditions:
//        379_6: sets DesksArray to gameVariables->get_string(333,
//        DesksArray)+_+number_to_string(loop_set_arrays_index).
void Frames::event_func_1264()
{
    // event 379_6 : sets DesksArray to gameVariables->get_string(333, DesksArray)+_+number_to_string(loop_set_arrays_index)
    {
        if (!(group_setup_1)) goto event_379_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(loop_set_arrays_index), str_desk_32)) > (0))) goto event_379_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(loop_set_arrays_index), str_found_528)) == (empty_string))) goto event_379_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(333, str_desksarray_1122, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(333, str_desksarray_1122)+str__96+number_to_string(loop_set_arrays_index));
    }
    event_379_6_end: ;
}
// Function purpose: generated callback event_func_1265 processes event block(s) 380_6. Actions/conditions:
//        380_6: sets DesksArray to gameVariables->get_string(333,
//        DesksArray)+_+number_to_string(loop_set_arrays_index).
void Frames::event_func_1265()
{
    // event 380_6 : sets DesksArray to gameVariables->get_string(333, DesksArray)+_+number_to_string(loop_set_arrays_index)
    {
        if (!(group_setup_1)) goto event_380_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(loop_set_arrays_index), str_desk_32)) > (0))) goto event_380_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(loop_set_arrays_index), str_found_528)) == (global_strings->get(0)))) goto event_380_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(333, str_desksarray_1122, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(333, str_desksarray_1122)+str__96+number_to_string(loop_set_arrays_index));
    }
    event_380_6_end: ;
}
// Function purpose: generated callback event_func_1266 processes event block(s) 381_6. Actions/conditions:
//        381_6: sets PocketsArray to gameVariables->get_string(334,
//        PocketsArray)+_+number_to_string(loop_set_arrays_index).
void Frames::event_func_1266()
{
    // event 381_6 : sets PocketsArray to gameVariables->get_string(334, PocketsArray)+_+number_to_string(loop_set_arrays_index)
    {
        if (!(group_setup_1)) goto event_381_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(loop_set_arrays_index), str_npc_carry_1111)) > (0))) goto event_381_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(loop_set_arrays_index), str_found_528)) == (empty_string))) goto event_381_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(334, str_pocketsarray_1123, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(334, str_pocketsarray_1123)+str__96+number_to_string(loop_set_arrays_index));
    }
    event_381_6_end: ;
}
// Function purpose: generated callback event_func_1267 processes event block(s) 382_6. Actions/conditions:
//        382_6: sets PocketsArray to gameVariables->get_string(334,
//        PocketsArray)+_+number_to_string(loop_set_arrays_index).
void Frames::event_func_1267()
{
    // event 382_6 : sets PocketsArray to gameVariables->get_string(334, PocketsArray)+_+number_to_string(loop_set_arrays_index)
    {
        if (!(group_setup_1)) goto event_382_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(loop_set_arrays_index), str_npc_carry_1111)) > (0))) goto event_382_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_string(number_to_string(loop_set_arrays_index), str_found_528)) == (global_strings->get(0)))) goto event_382_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(334, str_pocketsarray_1123, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(334, str_pocketsarray_1123)+str__96+number_to_string(loop_set_arrays_index));
    }
    event_382_6_end: ;
}
void Frames::loop_set_arrays_6()
{
    event_func_1264();
    event_func_1265();
    event_func_1266();
    event_func_1267();
}
// Function purpose: generated callback event_func_1268 processes event block(s) 908_6. Actions/conditions:
//        908_6: increments Score_F by 1; sets LastCoOrds to text for
//        playerBase->get_x()/MathHelper()/16)+x+number_to_string(playerBase->get_y()/MathHelper()/16.
void Frames::event_func_1268()
{
    // event 908_6 : increments Score_F by 1; sets LastCoOrds to text for playerBase->get_x()/MathHelper()/16)+x+number_to_string(playerBase->get_y()/MathHelper()/16
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_908_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (0))) goto event_908_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(335, str_lastcoords_1124)) != (number_to_string(((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16)+str_x_437+number_to_string(((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16)))) goto event_908_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(336, str_score_f_1125, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(335, str_lastcoords_1124, number_to_string(((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16)+str_x_437+number_to_string(((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16));
    }
    event_908_6_end: ;
}
void Frames::loop_add_step_6()
{
    event_func_1268();
}
// Function purpose: generated callback event_func_1269 processes event block(s) 1003_6. Actions/conditions:
//        1003_6: sets EndString to Caught entry 2; sets finalStr to text for gameVariables->get_value(103,
//        GuardX))+x+number_to_string(gameVariables->get_value(104, GuardY).
void Frames::event_func_1269()
{
    // event 1003_6 : sets EndString to Caught entry 2; sets finalStr to text for gameVariables->get_value(103, GuardX))+x+number_to_string(gameVariables->get_value(104, GuardY)
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1003_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1003_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_2_155));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(215, str_finalstr_818, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(103, str_guardx_660))+str_x_437+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(104, str_guardy_661)));
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
    event_1003_6_end: ;
}
void Frames::loop_jeep_see_6()
{
    event_func_1269();
}
// Function purpose: generated callback event_func_1270 processes event block(s) 577_6. Actions/conditions:
//        577_6: splits saved text into fields; adds a stash 420 instance; sets the selected object's horizontal
//        position to string_to_number(stringtokenizer_81->get(0)); plus 6 more actions.
void Frames::event_func_1270()
{
    // event 577_6 : splits saved text into fields; adds a stash 420 instance; sets the selected object's horizontal position to string_to_number(stringtokenizer_81->get(0)); plus 6 more actions
    {
        if (!(group_setup_1)) goto event_577_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_crates_index), str__96);
        stash_420_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_stash_420(0, 0), 1);
            stash_420_instances.add_back();
        }
        for (ObjectIterator it(stash_420_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->set_layer(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))-1);
            ((Active*)*it)->alterables->values.set(0, stash_420_instances.size());
        }
    }
    event_577_6_end: ;
}
void Frames::loop_load_crates_6()
{
    event_func_1270();
}
// Function purpose: generated callback event_func_1271 processes event block(s) 3535_6. Actions/conditions:
//        3535_6: splits saved text into fields; activates the get(0 event group; creates a itemshud 210 object; plus
//        14 more actions.
void Frames::event_func_1271()
{
    // event 3535_6 : splits saved text into fields; activates the get(0 event group; creates a itemshud 210 object; plus 14 more actions
    {
        if (!(group_code_1)) goto event_3535_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_fill_desk_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3535_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(loop_fill_desk_index+1))) != (empty_string))) goto event_3535_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(loop_fill_desk_index+1)), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        FrameObject * single_instance_3535_6_0; single_instance_3535_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3535_6_0 == NULL)
                    single_instance_3535_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3535_6_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_3535_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_3535_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_3535_6_0))->alterables->values.set(12, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((Active*)((Active*)single_instance_3535_6_0))->alterables->values.set(1, loop_fill_desk_index+1);
        ((Active*)((Active*)single_instance_3535_6_0))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
        ((Active*)((Active*)single_instance_3535_6_0))->alterables->strings.set(0, str_desk_32);
        ((Active*)((Active*)single_instance_3535_6_0))->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((Active*)((Active*)single_instance_3535_6_0))->force_animation(get_floor(((Active*)single_instance_3535_6_0)->alterables->values.get(2)/MathHelper()/32));
        ((Active*)((Active*)single_instance_3535_6_0))->set_direction(((Active*)single_instance_3535_6_0)->alterables->values.get(2)%MathHelper()%32);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_3535_6_end: ;
}
// Function purpose: generated callback event_func_1272 processes event block(s) 3536_6. Actions/conditions:
//        3536_6: updates game state with selected object->flash((250) / 1000.0); enables flag 2002 (inventory-item
//        activation or highlight state) on the selected object.
void Frames::event_func_1272()
{
    // event 3536_6 : updates game state with selected object->flash((250) / 1000.0); enables flag 2002 (inventory-item activation or highlight state) on the selected object
    {
        if (!(group_code_1)) goto event_3536_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (0))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3536_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->flash((250) / 1000.0);
            ((Active*)*it)->alterables->flags.enable(2002);
        }
    }
    event_3536_6_end: ;
}
void Frames::loop_fill_desk_6()
{
    event_func_1271();
    event_func_1272();
}
// Function purpose: generated callback event_func_1273 processes event block(s) 1083_6. Actions/conditions:
//        1083_6: sets the selected object's numeric value to gameVariables->get_value(105, LookX); sets the
//        selected object's numeric value to gameVariables->get_value(106, LookY); enables flag 60 (guard
//        sight or target-tracking state) on the selected object.
void Frames::event_func_1273()
{
    // event 1083_6 : sets the selected object's numeric value to gameVariables->get_value(105, LookX); sets the selected object's numeric value to gameVariables->get_value(106, LookY); enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1083_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1083_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1083_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663));
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1083_6_end: ;
}
