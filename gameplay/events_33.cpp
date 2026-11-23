#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_2555 processes event block(s) 4136_6. Actions/conditions:
//        4136_6: sets Need to (-5+(gameVariables->get_value(628,
//        hint_clicked)*10))+(gameVariables->get_value(83, NPClvl)*10).
void Frames::event_func_2555()
{
    // event 4136_6 : sets Need to (-5+(gameVariables->get_value(628, hint_clicked)*10))+(gameVariables->get_value(83, NPClvl)*10)
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4136_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(627, str_need_1708, (-5+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(628, str_hint_clicked_1709)*10))+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587)*10));
    }
    event_4136_6_end: ;
}
void Frames::loop_ph_checkcash_6()
{
    event_func_2555();
}
// Function purpose: generated callback event_func_2556 processes event block(s) 4139_6. Actions/conditions:
//        4139_6: removes the selected object.
void Frames::event_func_2556()
{
    // event 4139_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4139_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4139_6_end: ;
}
// Function purpose: generated callback event_func_2557 processes event block(s) 4140_6. Actions/conditions:
//        4140_6: creates a buttons 245 object; sets the object's animation to 29; creates a buttontext 445 object;
//        plus 10 more actions.
void Frames::event_func_2557()
{
    // event 4140_6 : creates a buttons 245 object; sets the object's animation to 29; creates a buttontext 445 object; plus 10 more actions
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4140_6_end;
        FrameObject * single_instance_4140_6_0; single_instance_4140_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + -35, parent->y + 56), parent->layer);
                if (single_instance_4140_6_0 == NULL)
                    single_instance_4140_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4140_6_0))->force_animation(29);
        FrameObject * single_instance_4140_6_1; single_instance_4140_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_4140_6_0)->x + 3, ((Active*)single_instance_4140_6_0)->y + 3), ((Active*)single_instance_4140_6_0)->layer);
            if (single_instance_4140_6_1 == NULL)
                single_instance_4140_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_4140_6_1))->blend_color.set(Color(120, 120, 120));
        ((Text*)((Text*)single_instance_4140_6_1))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_leaderboards_1710, str_5_164)));
        FrameObject * single_instance_4140_6_2; single_instance_4140_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -60), parent->layer);
                if (single_instance_4140_6_2 == NULL)
                    single_instance_4140_6_2 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_4140_6_2))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_4140_6_2)), frame_left()));
        ((Text*)((Text*)single_instance_4140_6_2))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_4140_6_2))->set_bold(1);
        ((Text*)((Text*)single_instance_4140_6_2))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, str_1_97)));
    }
    event_4140_6_end: ;
}
// Function purpose: generated callback event_func_2558 processes event block(s) 4141_6. Actions/conditions:
//        4141_6: creates a dialogue2 179 object; sets a game or interface text string; updates a value on the target
//        object.
void Frames::event_func_2558()
{
    // event 4141_6 : creates a dialogue2 179 object; sets a game or interface text string; updates a value on the target object
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4141_6_end;
        FrameObject * single_instance_4141_6_0; single_instance_4141_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -108, parent->y + -33), parent->layer);
                if (single_instance_4141_6_0 == NULL)
                    single_instance_4141_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_4141_6_0))->set_string(str__1711+((INI*)get_instance(translationData_instances))->get_string(str_phonetips_583, global_strings->get(0)+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(628, str_hint_clicked_1709)))+str__1711);
        ((Text*)((Text*)single_instance_4141_6_0))->blend_color.set(Color(89, 89, 89));
    }
    event_4141_6_end: ;
}
void Frames::loop_click_hint_6()
{
    event_func_2556();
    event_func_2557();
    event_func_2558();
}
// Function purpose: generated callback event_func_2559 processes event block(s) 4134_6. Actions/conditions:
//        4134_6: plays a sound or music track.
void Frames::event_func_2559()
{
    // event 4134_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4134_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_hint_1712+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(628, str_hint_clicked_1709))+str_unlocked_1713)) == (1))) goto event_4134_6_end;
        {
            loop_click_hint_running = true;
            int times = int(1);
            loop_click_hint_index = 0;
            while (loop_click_hint_index < times) {
                loop_click_hint_6();
                if (!loop_click_hint_running) break;
                loop_click_hint_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_4134_6_end: ;
}
// Function purpose: generated callback event_func_2560 processes event block(s) 4135_6. Actions/conditions:
//        4135_6: checks scene is active; game state Hint; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_2560()
{
    // event 4135_6 : checks scene is active; game state Hint; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4135_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_hint_1712+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(628, str_hint_clicked_1709))+str_unlocked_1713)) == (0))) goto event_4135_6_end;
        {
            loop_ph_checkcash_running = true;
            int times = int(1);
            loop_ph_checkcash_index = 0;
            while (loop_ph_checkcash_index < times) {
                loop_ph_checkcash_6();
                if (!loop_ph_checkcash_running) break;
                loop_ph_checkcash_index++;
            }
        }
    }
    event_4135_6_end: ;
}
// Function purpose: generated callback event_func_2561 processes event block(s) 4137_6. Actions/conditions:
//        4137_6: plays a sound or music track.
void Frames::event_func_2561()
{
    // event 4137_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4137_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_hint_1712+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(628, str_hint_clicked_1709))+str_unlocked_1713)) == (0))) goto event_4137_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(627, str_need_1708)))) goto event_4137_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_4137_6_end: ;
}
// Function purpose: generated callback event_func_2562 processes event block(s) 4138_6. Actions/conditions:
//        4138_6: sets a stored numeric value; changes a stored game value; plays a sound or music track.
void Frames::event_func_2562()
{
    // event 4138_6 : sets a stored numeric value; changes a stored game value; plays a sound or music track
    {
        if (!(group_code_1 && group_code_payphone_1)) goto event_4138_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_hint_1712+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(628, str_hint_clicked_1709))+str_unlocked_1713)) == (0))) goto event_4138_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)) >= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(627, str_need_1708)))) goto event_4138_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_hint_1712+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(628, str_hint_clicked_1709))+str_unlocked_1713, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(219, str_cash_11, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(627, str_need_1708));
        {
            loop_click_hint_running = true;
            int times = int(1);
            loop_click_hint_index = 0;
            while (loop_click_hint_index < times) {
                loop_click_hint_6();
                if (!loop_click_hint_running) break;
                loop_click_hint_index++;
            }
        }
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_4138_6_end: ;
}
void Frames::loop_ph_click_check_6()
{
    event_func_2559();
    event_func_2560();
    event_func_2561();
    event_func_2562();
}
// Function purpose: generated callback event_func_2563 processes event block(s) 3375_6. Actions/conditions:
//        3375_6: sets FoundSlot to loop_flip_container_findslot_index+1; sets a game or interface text string; plays
//        a sound or music track.
void Frames::event_func_2563()
{
    // event 3375_6 : sets FoundSlot to loop_flip_container_findslot_index+1; sets a game or interface text string; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3375_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_container_613+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(loop_flip_container_findslot_index+1))) == (empty_string))) goto event_3375_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, loop_flip_container_findslot_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)), empty_string);
            loop_flip_container_findslot_running = false;
    
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_3375_6_end: ;
}
void Frames::loop_flip_container_findslot_6()
{
    event_func_2563();
}
// Function purpose: generated callback event_func_2564 processes event block(s) 3374_6. Actions/conditions:
//        3374_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2564()
{
    // event 3374_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3374_6_end;
        {
            loop_flip_container_findslot_running = true;
            int times = int(20);
            loop_flip_container_findslot_index = 0;
            while (loop_flip_container_findslot_index < times) {
                loop_flip_container_findslot_6();
                if (!loop_flip_container_findslot_running) break;
                loop_flip_container_findslot_index++;
            }
        }
    }
    event_3374_6_end: ;
}
// Function purpose: generated callback event_func_2565 processes event block(s) 3377_6. Actions/conditions:
//        3377_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions.
void Frames::event_func_2565()
{
    // event 3377_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3377_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3377_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3377_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_container_613))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3377_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3377_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3377_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_container_613);
            ((Active*)*it)->set_scale(1);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7))+str__96+((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
    }
    event_3377_6_end: ;
}
void Frames::loop_find_open_container_slot_6()
{
    event_func_2564();
    event_func_1381();
    event_func_2565();
}
// Function purpose: generated callback event_func_2566 processes event block(s) 1128_6. Actions/conditions:
//        1128_6: sets the selected object's numeric value to 5; sets the selected object's numeric value to
//        50+randrange_event(20); sets Chipping to 0; plus 15 more actions.
void Frames::event_func_2566()
{
    // event 1128_6 : sets the selected object's numeric value to 5; sets the selected object's numeric value to 50+randrange_event(20); sets Chipping to 0; plus 15 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1128_6_end;
        ((Active*)get_instance(camera_202_instances))->alterables->values.set(0, 5);
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 50+randrange_event(20));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(155, str_chipping_728, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(154, str_cutting_727, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 30);
        ((Active*)get_instance(playerBase_instances))->alterables->values.sub(7, 20);
        FrameObject * single_instance_1128_6_0; single_instance_1128_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1128_6_0 == NULL)
                    single_instance_1128_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1128_6_0))->destroy();
        FrameObject * single_instance_1128_6_1; single_instance_1128_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1128_6_1 == NULL)
                    single_instance_1128_6_1 = new_obj;
            }
        }
        damageto_252_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_damageto_252(0, 0), 5);
            damageto_252_instances.add_back();
        }
        for (ObjectIterator it(damageto_252_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str_20_1714);
            ((TextBlitter*)*it)->set_x(((Active*)get_instance(playerBase_instances))->get_x()-5);
            ((TextBlitter*)*it)->set_y(((Active*)get_instance(playerBase_instances))->get_y()-20);
        }
        media.play_id(SOUND_SHOOT_18, 1-1);
    }
    event_1128_6_end: ;
}
void Frames::loop_tower_shoot_go_6()
{
    event_func_2566();
}
// Function purpose: generated callback event_func_2567 processes event block(s) 1125_6. Actions/conditions:
//        1125_6: sets MastOpen to 0.
void Frames::event_func_2567()
{
    // event 1125_6 : sets MastOpen to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1125_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(629, str_mastopen_1715, 0);
    }
    event_1125_6_end: ;
}
// Function purpose: generated callback event_func_2568 processes event block(s) 1126_6. Actions/conditions:
//        1126_6: sets MastOpen to 1.
void Frames::event_func_2568()
{
    // event 1126_6 : sets MastOpen to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1126_6_end;
        doormaster_387_instances.clear_selection();
        for (ObjectIterator it(doormaster_387_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!doormaster_387_instances.has_selection()) goto event_1126_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(629, str_mastopen_1715, 1);
    }
    event_1126_6_end: ;
}
// Function purpose: generated callback event_func_2569 processes event block(s) 1127_6. Actions/conditions:
//        1127_6: adds a towershoottrail 339 instance; sets the selected object's layer to
//        playerBase->layer->index+1-1; sets the selected object's horizontal position to
//        ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->get_x(); plus 6
//        more actions.
void Frames::event_func_2569()
{
    // event 1127_6 : adds a towershoottrail 339 instance; sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's horizontal position to ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->get_x(); plus 6 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1127_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(629, str_mastopen_1715)) == (0))) goto event_1127_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(314, str_tdist_nearestid_1092)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2055))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto event_1127_6_end;
        towershoottrail_339_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_towershoottrail_339(0, 0), 1);
            towershoottrail_339_instances.add_back();
        }
        for (ObjectIterator it(towershoottrail_339_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_x(((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x_scale(get_distance_int(((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->get_x(), ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->get_y(), ((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y()));
            ((Active*)*it)->set_angle(get_angle_int(((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->get_x(), ((Active*)get_single(towerguard_342_instances, it.current_index, default_active_instance))->get_y(), ((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y()), 0);
        }
        {
            loop_tower_shoot_go_running = true;
            int times = int(1);
            loop_tower_shoot_go_index = 0;
            while (loop_tower_shoot_go_index < times) {
                loop_tower_shoot_go_6();
                if (!loop_tower_shoot_go_running) break;
                loop_tower_shoot_go_index++;
            }
        }
    }
    event_1127_6_end: ;
}
void Frames::loop_tower_shoot_6()
{
    event_func_2567();
    event_func_2568();
    event_func_2569();
}
// Function purpose: generated callback event_func_2570 processes event block(s) 498_6. Actions/conditions:
//        498_6: sets a game or interface text string; sets a game or interface text string; sets a game or interface
//        text string; plus 5 more actions.
void Frames::event_func_2570()
{
    // event 498_6 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 5 more actions
    {
        if (!(group_setup_1)) goto event_498_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_clear_desks_index+1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_498_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_clear_desks_index+1)+str_slot1_534, str_17_100_1474);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_clear_desks_index+1)+str_slot2_535, str_45_100_1475);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_clear_desks_index+1)+str_slot3_536, str_47_100_1476);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_clear_desks_index+1)+str_slot4_1477, str_48_100_1478);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(563, str_rnditems_1479, randrange_event(3));
        {
            loop_custom_desk_items_running = true;
            int times = int(randrange_event(4));
            loop_custom_desk_items_index = 0;
            while (loop_custom_desk_items_index < times) {
                loop_custom_desk_items_6();
                if (!loop_custom_desk_items_running) break;
                loop_custom_desk_items_index++;
            }
        }
    }
    event_498_6_end: ;
}
void Frames::loop_clear_desks_6()
{
    event_func_2570();
}
// Function purpose: generated callback event_func_2571 processes event block(s) 2998_6. Actions/conditions:
//        2998_6: splits saved text into fields; sets pGuard to StringReplace::replace(translationData->get_string(Misc,
//        43), $name, stringtokenizer2_292->get(1)); sets SpeakText to
//        StringReplace::replace(gameVariables->get_string(349, SpeakText), $guard,
//        gameVariables->get_string(445, pGuard)).
void Frames::event_func_2571()
{
    // event 2998_6 : splits saved text into fields; sets pGuard to StringReplace::replace(translationData->get_string(Misc, 43), $name, stringtokenizer2_292->get(1)); sets SpeakText to StringReplace::replace(gameVariables->get_string(349, SpeakText), $guard, gameVariables->get_string(445, pGuard))
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2998_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_2998_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_guard_1198, 0)) != (-1))) goto event_2998_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((ListObject*)get_instance(listguards_218_instances))->get_line(1+randrange_event(((ListObject*)get_instance(listguards_218_instances))->get_count())), str__189);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(445, str_pguard_1312, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_43_695), str_name_693, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_guard_1198, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(445, str_pguard_1312)));
    }
    event_2998_6_end: ;
}
// Function purpose: generated callback event_func_2572 processes event block(s) 2999_6. Actions/conditions:
//        2999_6: splits saved text into fields; sets pGuard to StringReplace::replace(translationData->get_string(DTAF,
//        Hench), $name, stringtokenizer2_292->get(1)); sets SpeakText to
//        StringReplace::replace(gameVariables->get_string(349, SpeakText), $guard,
//        gameVariables->get_string(445, pGuard)).
void Frames::event_func_2572()
{
    // event 2999_6 : splits saved text into fields; sets pGuard to StringReplace::replace(translationData->get_string(DTAF, Hench), $name, stringtokenizer2_292->get(1)); sets SpeakText to StringReplace::replace(gameVariables->get_string(349, SpeakText), $guard, gameVariables->get_string(445, pGuard))
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2999_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2999_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_guard_1198, 0)) != (-1))) goto event_2999_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((ListObject*)get_instance(listguards_218_instances))->get_line(1+randrange_event(((ListObject*)get_instance(listguards_218_instances))->get_count())), str__189);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(445, str_pguard_1312, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_hench_1196), str_name_693, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_guard_1198, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(445, str_pguard_1312)));
    }
    event_2999_6_end: ;
}
void Frames::loop_npc_talk_guardmention_6()
{
    event_func_2571();
    event_func_2572();
}
// Function purpose: generated callback event_func_2573 processes event block(s) 2991_6. Actions/conditions:
//        2991_6: sets HasMission to 1.
void Frames::event_func_2573()
{
    // event 2991_6 : sets HasMission to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2991_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(2)) != (empty_string))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2991_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(630, str_hasmission_1716, 1);
    }
    event_2991_6_end: ;
}
// Function purpose: generated callback event_func_2574 processes event block(s) 2992_6. Actions/conditions:
//        2992_6: sets ConvType to randrange_event(2).
void Frames::event_func_2574()
{
    // event 2992_6 : sets ConvType to randrange_event(2)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2992_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (0))) goto event_2992_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (50))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2992_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(631, str_convtype_1717, randrange_event(2));
    }
    event_2992_6_end: ;
}
// Function purpose: generated callback event_func_2575 processes event block(s) 2993_6. Actions/conditions:
//        2993_6: activates the Rep_+number_to_string(get_value(632, pRep event group; sets SpeakCol to 0; sets
//        SpeakID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); plus 6 more actions.
void Frames::event_func_2575()
{
    // event 2993_6 : activates the Rep_+number_to_string(get_value(632, pRep event group; sets SpeakCol to 0; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2993_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2993_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(631, str_convtype_1717)) == (0))) goto event_2993_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (0))) goto event_2993_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2993_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_rep_1718+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(632, str_prep_1719)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->alterables->values.add(12, 0.5);
        }
        {
            loop_npc_talk_2_running = true;
            int times = int(1);
            loop_npc_talk_2_index = 0;
            while (loop_npc_talk_2_index < times) {
                loop_npc_talk_2_6();
                if (!loop_npc_talk_2_running) break;
                loop_npc_talk_2_index++;
            }
        }
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
    event_2993_6_end: ;
}
// Function purpose: generated callback event_func_2576 processes event block(s) 2994_6. Actions/conditions:
//        2994_6: sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        playerBase->x + 0, playerBase->y + 0); changes a stored game value; stops the object's movement; plus 8
//        more actions.
void Frames::event_func_2576()
{
    // event 2994_6 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, playerBase->x + 0, playerBase->y + 0); changes a stored game value; stops the object's movement; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2994_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2994_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(631, str_convtype_1717)) == (1))) goto event_2994_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (0))) goto event_2994_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2994_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_2994_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->alterables->values.add(12, 0.5);
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_banter_1306);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_inmate_1199, ((ListObject*)get_instance(listinmates_217_instances))->get_line(1+randrange_event(((ListObject*)get_instance(listinmates_217_instances))->get_count()))));
        {
            loop_npc_talk_guardmention_running = true;
            int times = int(1);
            loop_npc_talk_guardmention_index = 0;
            while (loop_npc_talk_guardmention_index < times) {
                loop_npc_talk_guardmention_6();
                if (!loop_npc_talk_guardmention_running) break;
                loop_npc_talk_guardmention_index++;
            }
        }
        {
            loop_npc_talk_2_running = true;
            int times = int(1);
            loop_npc_talk_2_index = 0;
            while (loop_npc_talk_2_index < times) {
                loop_npc_talk_2_6();
                if (!loop_npc_talk_2_running) break;
                loop_npc_talk_2_index++;
            }
        }
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
    event_2994_6_end: ;
}
// Function purpose: generated callback event_func_2577 processes event block(s) 2995_6. Actions/conditions:
//        2995_6: sets rnd to randrange_event(2)+1.
void Frames::event_func_2577()
{
    // event 2995_6 : sets rnd to randrange_event(2)+1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2995_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2995_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2)+1);
    }
    event_2995_6_end: ;
}
// Function purpose: generated callback event_func_2578 processes event block(s) 2996_6. Actions/conditions:
//        2996_6: sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        playerBase->x + 0, playerBase->y + 0); changes a stored game value; stops the object's movement; plus 8
//        more actions.
void Frames::event_func_2578()
{
    // event 2996_6 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, playerBase->x + 0, playerBase->y + 0); changes a stored game value; stops the object's movement; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2996_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2996_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(631, str_convtype_1717)) == (1))) goto event_2996_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (0))) goto event_2996_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2996_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2996_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_2996_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->alterables->values.add(12, 0.5);
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_banter_1306);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_inmate_1199, ((ListObject*)get_instance(listinmates_217_instances))->get_line(1+randrange_event(((ListObject*)get_instance(listinmates_217_instances))->get_count()))));
        {
            loop_npc_talk_guardmention_running = true;
            int times = int(1);
            loop_npc_talk_guardmention_index = 0;
            while (loop_npc_talk_guardmention_index < times) {
                loop_npc_talk_guardmention_6();
                if (!loop_npc_talk_guardmention_running) break;
                loop_npc_talk_guardmention_index++;
            }
        }
        {
            loop_npc_talk_2_running = true;
            int times = int(1);
            loop_npc_talk_2_index = 0;
            while (loop_npc_talk_2_index < times) {
                loop_npc_talk_2_6();
                if (!loop_npc_talk_2_running) break;
                loop_npc_talk_2_index++;
            }
        }
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
    event_2996_6_end: ;
}
// Function purpose: generated callback event_func_2579 processes event block(s) 2997_6. Actions/conditions:
//        2997_6: sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        playerBase->x + 0, playerBase->y + 0); changes a stored game value; stops the object's movement; plus 8
//        more actions.
void Frames::event_func_2579()
{
    // event 2997_6 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, playerBase->x + 0, playerBase->y + 0); changes a stored game value; stops the object's movement; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2997_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2997_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(631, str_convtype_1717)) == (1))) goto event_2997_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (0))) goto event_2997_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2997_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2997_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) != (1))) goto event_2997_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->alterables->values.add(12, 0.5);
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_dtaf_banter_1311);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_inmate_1199, ((ListObject*)get_instance(listinmates_217_instances))->get_line(1+randrange_event(((ListObject*)get_instance(listinmates_217_instances))->get_count()))));
        {
            loop_npc_talk_guardmention_running = true;
            int times = int(1);
            loop_npc_talk_guardmention_index = 0;
            while (loop_npc_talk_guardmention_index < times) {
                loop_npc_talk_guardmention_6();
                if (!loop_npc_talk_guardmention_running) break;
                loop_npc_talk_guardmention_index++;
            }
        }
        {
            loop_npc_talk_2_running = true;
            int times = int(1);
            loop_npc_talk_2_index = 0;
            while (loop_npc_talk_2_index < times) {
                loop_npc_talk_2_6();
                if (!loop_npc_talk_2_running) break;
                loop_npc_talk_2_index++;
            }
        }
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
    event_2997_6_end: ;
}
// Function purpose: generated callback event_func_2580 processes event block(s) 3001_6. Actions/conditions:
//        3001_6: activates the Outfit_Inmate event group; sets SpeakID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets
//        SpeakCol to 0; plus 6 more actions.
void Frames::event_func_2580()
{
    // event 3001_6 : activates the Outfit_Inmate event group; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3001_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_3001_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(630, str_hasmission_1716)) == (0))) goto event_3001_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3001_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_outfit_inmate_1720);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->get_movement()->stop(false);
        }
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
    event_3001_6_end: ;
}
void Frames::loop_npc_talk_6()
{
    event_func_2573();
    event_func_2574();
    event_func_2575();
    event_func_2576();
    event_func_2577();
    event_func_2578();
    event_func_2579();
    event_func_2580();
}
// Function purpose: generated callback event_func_2581 processes event block(s) 2987_6. Actions/conditions:
//        2987_6: plays a sound or music track.
void Frames::event_func_2581()
{
    // event 2987_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2987_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_2987_6_end;
        {
            loop_npc_talk_running = true;
            int times = int(1);
            loop_npc_talk_index = 0;
            while (loop_npc_talk_index < times) {
                loop_npc_talk_6();
                if (!loop_npc_talk_running) break;
                loop_npc_talk_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2987_6_end: ;
}
void Frames::loop_talk_loop_6()
{
    event_func_2581();
}
// Function purpose: generated callback event_func_2582 processes event block(s) 3848_6. Actions/conditions:
//        3848_6: sets a game or interface text string; sets ToName to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->strings.get(1); sets a stored numeric value; plus 5 more actions.
void Frames::event_func_2582()
{
    // event 3848_6 : sets a game or interface text string; sets ToName to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1); sets a stored numeric value; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3848_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3848_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(633, str_gave_item_1721, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(634, str_toname_1722, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(635, str_itemval_1723, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_gift_1724));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(501, str_gaveitemid_1381, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3848_6_end: ;
}
// Function purpose: generated callback event_func_2583 processes event block(s) 3849_6. Actions/conditions:
//        3849_6: changes a stored game value; sets CashVal to gameVariables->get_value(636, GiveCash); sets
//        GiveCash to 0.
void Frames::event_func_2583()
{
    // event 3849_6 : changes a stored game value; sets CashVal to gameVariables->get_value(636, GiveCash); sets GiveCash to 0
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3849_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(636, str_givecash_1725)) > (0))) goto event_3849_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(219, str_cash_11, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(636, str_givecash_1725));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(637, str_cashval_1726, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(636, str_givecash_1725));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(636, str_givecash_1725, 0);
    }
    event_3849_6_end: ;
}
// Function purpose: generated callback event_func_2584 processes event block(s) 3850_6. Actions/conditions:
//        3850_6: activates the Gift_0 event group; sets SpeakID to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); sets CharA to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(0); plus 5 more actions.
void Frames::event_func_2584()
{
    // event 3850_6 : activates the Gift_0 event group; sets SpeakID to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); sets CharA to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(0); plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3850_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3850_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_opn_cap_525+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)))) >= (3))) goto event_3850_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_gift_0_1727);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(500, str_chara_1380, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
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
    event_3850_6_end: ;
}
// Function purpose: generated callback event_func_2585 processes event block(s) 3851_6. Actions/conditions:
//        3851_6: activates the Gift_1 event group; changes a stored game value; changes a stored game value; plus 9
//        more actions.
void Frames::event_func_2585()
{
    // event 3851_6 : activates the Gift_1 event group; changes a stored game value; changes a stored game value; plus 9 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3851_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(637, str_cashval_1726)) > (0))) goto event_3851_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3851_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_opn_cap_525+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)))) < (3))) goto event_3851_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_gift_1_1728);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(str_opn_cap_525+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)), 1);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(637, str_cashval_1726)/MathHelper()/10);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(638, str_charname_1729, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->strings.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(500, str_chara_1380, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
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
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_3851_6_end: ;
}
// Function purpose: generated callback event_func_2586 processes event block(s) 3852_6. Actions/conditions:
//        3852_6: changes a stored game value; changes a stored game value; sets charName to
//        ((Active*)get_single(qualifier_14, default_active_instance))->alterables->strings.get(0); plus 9 more
//        actions.
void Frames::event_func_2586()
{
    // event 3852_6 : changes a stored game value; changes a stored game value; sets charName to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->strings.get(0); plus 9 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3852_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(637, str_cashval_1726)) == (0))) goto event_3852_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3852_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_opn_cap_525+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)))) < (3))) goto event_3852_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(str_opn_cap_525+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)), 1);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(635, str_itemval_1723)*3);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(638, str_charname_1729, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->strings.get(0));
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_gift_1730+number_to_string(get_min(((AssociateArray*)get_instance(gameVariables_instances))->get_value(635, str_itemval_1723), 3)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(500, str_chara_1380, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
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
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_3852_6_end: ;
}
// Function purpose: generated callback event_func_2587 processes event block(s) 3853_6. Actions/conditions:
//        3853_6: stores an integer value; stores player data.
void Frames::event_func_2587()
{
    // event 3853_6 : stores an integer value; stores player data
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3853_6_end;
        if (!((global_values->get(16)) == (1))) goto event_3853_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(637, str_cashval_1726)) == (0))) goto event_3853_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->set_int(str_gifts_1731, ((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_gifts_1731)+1);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_3853_6_end: ;
}
// Function purpose: generated callback event_func_2588 processes event block(s) 3854_6. Actions/conditions:
//        3854_6: unlocks the CagesBuddy achievement; stores player data.
void Frames::event_func_2588()
{
    // event 3854_6 : unlocks the CagesBuddy achievement; stores player data
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3854_6_end;
        if (!((global_values->get(16)) == (1))) goto event_3854_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(637, str_cashval_1726)) == (0))) goto event_3854_6_end;
        if (!((global_values->get(18)) == (1))) goto event_3854_6_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_3854_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(639, str_gave_itemid_1732)) == (206))) goto event_3854_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(640, str_eteam_char_1733)) == (str_cage_521))) goto event_3854_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_unlocked(str_cagesbuddy_1734)) == (0))) goto event_3854_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_cagesbuddy_1734);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_3854_6_end: ;
}
// Function purpose: generated callback event_func_2589 processes event block(s) 3855_6. Actions/conditions:
//        3855_6: unlocks the TheMadMan achievement; stores player data.
void Frames::event_func_2589()
{
    // event 3855_6 : unlocks the TheMadMan achievement; stores player data
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3855_6_end;
        if (!((global_values->get(16)) == (1))) goto event_3855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(637, str_cashval_1726)) == (0))) goto event_3855_6_end;
        if (!((global_values->get(18)) == (1))) goto event_3855_6_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_3855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(639, str_gave_itemid_1732)) == (208))) goto event_3855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(640, str_eteam_char_1733)) == (str_sean_522))) goto event_3855_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_unlocked(str_themadman_1735)) == (0))) goto event_3855_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_themadman_1735);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_3855_6_end: ;
}
// Function purpose: generated callback event_func_2590 processes event block(s) 3856_6. Actions/conditions:
//        3856_6: unlocks the LadiesMan achievement; stores player data.
void Frames::event_func_2590()
{
    // event 3856_6 : unlocks the LadiesMan achievement; stores player data
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3856_6_end;
        if (!((global_values->get(16)) == (1))) goto event_3856_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(637, str_cashval_1726)) == (0))) goto event_3856_6_end;
        if (!((global_values->get(18)) == (1))) goto event_3856_6_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_3856_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(639, str_gave_itemid_1732)) == (209))) goto event_3856_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(640, str_eteam_char_1733)) == (str_andy_523))) goto event_3856_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_unlocked(str_ladiesman_1736)) == (0))) goto event_3856_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_ladiesman_1736);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_3856_6_end: ;
}
// Function purpose: generated callback event_func_2591 processes event block(s) 3857_6. Actions/conditions:
//        3857_6: increments JobQuota by 12; plays a sound or music track.
void Frames::event_func_2591()
{
    // event 3857_6 : increments JobQuota by 12; plays a sound or music track
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3857_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(634, str_toname_1722)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3857_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_3857_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_3857_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 12);
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_3857_6_end: ;
}
// Function purpose: generated callback event_func_2592 processes event block(s) 3859_6. Actions/conditions:
//        3859_6: sets the selected object's visibility to false; removes the selected object.
void Frames::event_func_2592()
{
    // event 3859_6 : sets the selected object's visibility to false; removes the selected object
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3859_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        givecash_261_instances.clear_selection();
        for (ObjectIterator it(givecash_261_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3859_6_end: ;
}
// Function purpose: generated callback event_func_2593 processes event block(s) 3860_6. Actions/conditions:
//        3860_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2593()
{
    // event 3860_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3860_6_end;
        {
            loop_check_give_mission_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_check_give_mission_index = 0;
            while (loop_check_give_mission_index < times) {
                loop_check_give_mission_6();
                if (!loop_check_give_mission_running) break;
                loop_check_give_mission_index++;
            }
        }
    }
    event_3860_6_end: ;
}
void Frames::loop_npc_give_go_6()
{
    event_func_2582();
    event_func_2583();
    event_func_2584();
    event_func_2585();
    event_func_2586();
    event_func_2587();
    event_func_2588();
    event_func_2589();
    event_func_2590();
    event_func_2591();
    event_func_1992();
    event_func_2592();
    event_func_2593();
}
// Function purpose: generated callback event_func_2594 processes event block(s) 3844_6. Actions/conditions:
//        3844_6: sets allowed to 1; sets gave_itemID to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2).
void Frames::event_func_2594()
{
    // event 3844_6 : sets allowed to 1; sets gave_itemID to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3844_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_give_1349))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3844_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(460, str_allowed_1329, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(639, str_gave_itemid_1732, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3844_6_end: ;
}
// Function purpose: generated callback event_func_2595 processes event block(s) 3845_6. Actions/conditions:
//        3845_6: sets allowed to 1.
void Frames::event_func_2595()
{
    // event 3845_6 : sets allowed to 1
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3845_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(636, str_givecash_1725)) > (0))) goto event_3845_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(636, str_givecash_1725)) <= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)))) goto event_3845_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(460, str_allowed_1329, 1);
    }
    event_3845_6_end: ;
}
// Function purpose: generated callback event_func_2596 processes event block(s) 3846_6. Actions/conditions:
//        3846_6: plays a sound or music track.
void Frames::event_func_2596()
{
    // event 3846_6 : plays a sound or music track
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3846_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(460, str_allowed_1329)) == (0))) goto event_3846_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3846_6_end: ;
}
// Function purpose: generated callback event_func_2597 processes event block(s) 3847_6. Actions/conditions:
//        3847_6: sets CashVal to 0; sets ItemVal to 0.
void Frames::event_func_2597()
{
    // event 3847_6 : sets CashVal to 0; sets ItemVal to 0
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3847_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(460, str_allowed_1329)) == (1))) goto event_3847_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(637, str_cashval_1726, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(635, str_itemval_1723, 0);
        {
            loop_npc_give_go_running = true;
            int times = int(1);
            loop_npc_give_go_index = 0;
            while (loop_npc_give_go_index < times) {
                loop_npc_give_go_6();
                if (!loop_npc_give_go_running) break;
                loop_npc_give_go_index++;
            }
        }
    }
    event_3847_6_end: ;
}
void Frames::loop_npc_give_check_6()
{
    event_func_2594();
    event_func_2595();
    event_func_2596();
    event_func_2597();
}
// Function purpose: generated callback event_func_2598 processes event block(s) 1088_6. Actions/conditions:
//        1088_6: activates the Guards_Cell event group; sets TellOff to 1; increments Heat by
//        10*gameVariables->get_value(83, NPClvl); plus 10 more actions.
void Frames::event_func_2598()
{
    // event 1088_6 : activates the Guards_Cell event group; sets TellOff to 1; increments Heat by 10*gameVariables->get_value(83, NPClvl); plus 10 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1088_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1088_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1088_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guards_cell_1737);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 10*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->get_movement()->stop(false);
        }
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_1088_6_end: ;
}
void Frames::loop_policing_cells_6()
{
    event_func_2598();
    event_func_1320();
}
// Function purpose: generated callback event_func_2599 processes event block(s) 3602_6. Actions/conditions:
//        3602_6: increments Track_Dug by 1; adds a itemshud 210 instance; sets the selected object's direction to 26;
//        plus 11 more actions.
void Frames::event_func_2599()
{
    // event 3602_6 : increments Track_Dug by 1; adds a itemshud 210 instance; sets the selected object's direction to 26; plus 11 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3602_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3602_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(602, str_track_dug_1576, 1);
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(26);
            ((Active*)*it)->alterables->values.set(2, 26);
            ((Active*)*it)->alterables->values.set(7, -100);
            ((Active*)*it)->alterables->values.set(6, 1);
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3602_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3602_6_1: ;
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), str_26_100_1738);
    }
    event_3602_6_end: ;
}
void Frames::loop_collect_dirt_6()
{
    event_func_2599();
}
// Function purpose: generated callback event_func_2600 processes event block(s) 3603_6. Actions/conditions:
//        3603_6: stores an integer value; stores player data.
void Frames::event_func_2600()
{
    // event 3603_6 : stores an integer value; stores player data
    {
        if (!(group_code_1)) goto event_3603_6_end;
        if (!((global_values->get(16)) == (1))) goto event_3603_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->set_int(str_dug_1575, ((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_dug_1575)+1);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_3603_6_end: ;
}
void Frames::loop_stats_dug_6()
{
    event_func_2600();
}
// Function purpose: generated callback event_func_2601 processes event block(s) 3583_6. Actions/conditions:
//        3583_6: sets the selected object's numeric value to 5-(gameVariables->get_value(641,
//        HoleProgress)/MathHelper()/5); sets the selected object's direction to selected
//        object->alterables->values.get(1).
void Frames::event_func_2601()
{
    // event 3583_6 : sets the selected object's numeric value to 5-(gameVariables->get_value(641, HoleProgress)/MathHelper()/5); sets the selected object's direction to selected object->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3583_6_end;
        usespot_208_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, dighole_207_instances)) goto event_3583_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(2147483648)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_3583_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5-(((AssociateArray*)get_instance(gameVariables_instances))->get_value(641, str_holeprogress_1739)/MathHelper()/5));
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_3583_6_end: ;
}
// Function purpose: generated callback event_func_2602 processes event block(s) 3584_6. Actions/conditions:
//        3584_6: adds a soil 173 instance; sets the object position in the world; draws the selected image or tile;
//        plus 1 more actions.
void Frames::event_func_2602()
{
    // event 3584_6 : adds a soil 173 instance; sets the object position in the world; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3584_6_end;
        usespot_208_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(usespot_208_instances, dighole_207_instances)) goto event_3584_6_end;
        if (!((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741), 1)) >= (25))) goto event_3584_6_end;
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_173(-16, -16), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(usespot_208_instances, it.current_index));
            if (parent == NULL) goto pos_end_3584_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3584_6_1: ;
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_findinvslot_running = true;
            int times = int(6);
            loop_findinvslot_index = 0;
            while (loop_findinvslot_index < times) {
                loop_findinvslot_6();
                if (!loop_findinvslot_running) break;
                loop_findinvslot_index++;
            }
        }
        {
            loop_collect_dirt_running = true;
            int times = int(1);
            loop_collect_dirt_index = 0;
            while (loop_collect_dirt_index < times) {
                loop_collect_dirt_6();
                if (!loop_collect_dirt_running) break;
                loop_collect_dirt_index++;
            }
        }
        {
            loop_stats_dug_running = true;
            int times = int(1);
            loop_stats_dug_index = 0;
            while (loop_stats_dug_index < times) {
                loop_stats_dug_6();
                if (!loop_stats_dug_running) break;
                loop_stats_dug_index++;
            }
        }
    }
    event_3584_6_end: ;
}
// Function purpose: generated callback event_func_2603 processes event block(s) 3585_6. Actions/conditions:
//        3585_6: enables flag 193 (digging or hole interaction state) on the selected object.
void Frames::event_func_2603()
{
    // event 3585_6 : enables flag 193 (digging or hole interaction state) on the selected object
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3585_6_end;
        usespot_208_instances.clear_selection();
        if (!check_not_overlap(usespot_208_instances, dighole_207_instances)) goto event_3585_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.enable(193);
    }
    event_3585_6_end: ;
}
// Function purpose: generated callback event_func_2604 processes event block(s) 3586_6. Actions/conditions:
//        3586_6: adds a dighole 207 instance; sets the object position in the world; sets the selected object's layer
//        to playerBase->layer->index+1-1; plus 6 more actions.
void Frames::event_func_2604()
{
    // event 3586_6 : adds a dighole 207 instance; sets the object position in the world; sets the selected object's layer to playerBase->layer->index+1-1; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3586_6_end;
        if (!(((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.is_on(193))) goto event_3586_6_end;
        dighole_207_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dighole_207(-16, -16), 0);
            dighole_207_instances.add_back();
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(usespot_208_instances, it.current_index));
            if (parent == NULL) goto pos_end_3586_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_3586_6_1: ;
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::ADDITIVE);
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->move_back();
        }
    }
    event_3586_6_end: ;
}
// Function purpose: generated callback event_func_2605 processes event block(s) 3587_6. Actions/conditions:
//        3587_6: removes the selected object.
void Frames::event_func_2605()
{
    // event 3587_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3587_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3587_6_end: ;
}
// Function purpose: generated callback event_func_2606 processes event block(s) 3588_6. Actions/conditions:
//        3588_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2606()
{
    // event 3588_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3588_6_end;
        dighole_207_instances.clear_selection();
        spread_value(dighole_207_instances, 0, 1);
    }
    event_3588_6_end: ;
}
// Function purpose: generated callback event_func_2607 processes event block(s) 3589_6. Actions/conditions:
//        3589_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2607()
{
    // event 3589_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3589_6_end;
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
    event_3589_6_end: ;
}
void Frames::loop_digabove_6()
{
    event_func_2601();
    event_func_2602();
    event_func_2603();
    event_func_2604();
    event_func_2605();
    event_func_2606();
    event_func_2607();
}
// Function purpose: generated callback event_func_2608 processes event block(s) 1543_6. Actions/conditions:
//        1543_6: sets gotID to loop_find_unemp_index+1.
void Frames::event_func_2608()
{
    // event 1543_6 : sets gotID to loop_find_unemp_index+1
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) != (loop_find_unemp_index+1))) goto event_1543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) != (loop_find_unemp_index+1))) goto event_1543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) != (loop_find_unemp_index+1))) goto event_1543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) != (loop_find_unemp_index+1))) goto event_1543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) != (loop_find_unemp_index+1))) goto event_1543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) != (loop_find_unemp_index+1))) goto event_1543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) != (loop_find_unemp_index+1))) goto event_1543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) != (loop_find_unemp_index+1))) goto event_1543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) != (loop_find_unemp_index+1))) goto event_1543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) != (loop_find_unemp_index+1))) goto event_1543_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(644, str_gotid_1742, loop_find_unemp_index+1);
            loop_find_unemp_running = false;
    
    }
    event_1543_6_end: ;
}
void Frames::loop_find_unemp_6()
{
    event_func_2608();
}
// Function purpose: generated callback event_func_2609 processes event block(s) 1533_6. Actions/conditions:
//        1533_6: sets Pos_Janitor to gameVariables->get_value(644, gotID).
void Frames::event_func_2609()
{
    // event 1533_6 : sets Pos_Janitor to gameVariables->get_value(644, gotID)
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1533_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(177, str_map_job_janitor_757)) == (1))) goto event_1533_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) == (0))) goto event_1533_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_janitor_24))) goto event_1533_6_end;
        {
            loop_find_unemp_running = true;
            int times = int(5);
            loop_find_unemp_index = 0;
            while (loop_find_unemp_index < times) {
                loop_find_unemp_6();
                if (!loop_find_unemp_running) break;
                loop_find_unemp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(109, str_pos_janitor_671, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(644, str_gotid_1742));
    }
    event_1533_6_end: ;
}
// Function purpose: generated callback event_func_2610 processes event block(s) 1534_6. Actions/conditions:
//        1534_6: sets Pos_Gardening to gameVariables->get_value(644, gotID).
void Frames::event_func_2610()
{
    // event 1534_6 : sets Pos_Gardening to gameVariables->get_value(644, gotID)
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1534_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(176, str_map_job_gardening_756)) == (1))) goto event_1534_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) == (0))) goto event_1534_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_gardening_43))) goto event_1534_6_end;
        {
            loop_find_unemp_running = true;
            int times = int(5);
            loop_find_unemp_index = 0;
            while (loop_find_unemp_index < times) {
                loop_find_unemp_6();
                if (!loop_find_unemp_running) break;
                loop_find_unemp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(111, str_pos_gardening_673, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(644, str_gotid_1742));
    }
    event_1534_6_end: ;
}
// Function purpose: generated callback event_func_2611 processes event block(s) 1535_6. Actions/conditions:
//        1535_6: sets Pos_Laundry to gameVariables->get_value(644, gotID).
void Frames::event_func_2611()
{
    // event 1535_6 : sets Pos_Laundry to gameVariables->get_value(644, gotID)
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1535_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(175, str_map_job_laundry_754)) == (1))) goto event_1535_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (0))) goto event_1535_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_laundry_29))) goto event_1535_6_end;
        {
            loop_find_unemp_running = true;
            int times = int(5);
            loop_find_unemp_index = 0;
            while (loop_find_unemp_index < times) {
                loop_find_unemp_6();
                if (!loop_find_unemp_running) break;
                loop_find_unemp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(117, str_pos_laundry_679, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(644, str_gotid_1742));
    }
    event_1535_6_end: ;
}
// Function purpose: generated callback event_func_2612 processes event block(s) 1536_6. Actions/conditions:
//        1536_6: sets Pos_Kitchen to gameVariables->get_value(644, gotID).
void Frames::event_func_2612()
{
    // event 1536_6 : sets Pos_Kitchen to gameVariables->get_value(644, gotID)
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1536_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(180, str_map_job_kitchen_760)) == (1))) goto event_1536_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (0))) goto event_1536_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_woodshop_21))) goto event_1536_6_end;
        {
            loop_find_unemp_running = true;
            int times = int(5);
            loop_find_unemp_index = 0;
            while (loop_find_unemp_index < times) {
                loop_find_unemp_6();
                if (!loop_find_unemp_running) break;
                loop_find_unemp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_pos_kitchen_683, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(644, str_gotid_1742));
    }
    event_1536_6_end: ;
}
// Function purpose: generated callback event_func_2613 processes event block(s) 1537_6. Actions/conditions:
//        1537_6: sets Pos_Woodshop to gameVariables->get_value(644, gotID).
void Frames::event_func_2613()
{
    // event 1537_6 : sets Pos_Woodshop to gameVariables->get_value(644, gotID)
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1537_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(178, str_map_job_woodshop_758)) == (1))) goto event_1537_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) == (0))) goto event_1537_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_woodshop_21))) goto event_1537_6_end;
        {
            loop_find_unemp_running = true;
            int times = int(5);
            loop_find_unemp_index = 0;
            while (loop_find_unemp_index < times) {
                loop_find_unemp_6();
                if (!loop_find_unemp_running) break;
                loop_find_unemp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(125, str_pos_woodshop_687, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(644, str_gotid_1742));
    }
    event_1537_6_end: ;
}
// Function purpose: generated callback event_func_2614 processes event block(s) 1538_6. Actions/conditions:
//        1538_6: sets Pos_Metalshop to gameVariables->get_value(644, gotID).
void Frames::event_func_2614()
{
    // event 1538_6 : sets Pos_Metalshop to gameVariables->get_value(644, gotID)
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1538_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(179, str_map_job_metalshop_759)) == (1))) goto event_1538_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (0))) goto event_1538_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_metalshop_35))) goto event_1538_6_end;
        {
            loop_find_unemp_running = true;
            int times = int(5);
            loop_find_unemp_index = 0;
            while (loop_find_unemp_index < times) {
                loop_find_unemp_6();
                if (!loop_find_unemp_running) break;
                loop_find_unemp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(127, str_pos_metalshop_689, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(644, str_gotid_1742));
    }
    event_1538_6_end: ;
}
// Function purpose: generated callback event_func_2615 processes event block(s) 1539_6. Actions/conditions:
//        1539_6: sets Pos_Mailman to gameVariables->get_value(644, gotID).
void Frames::event_func_2615()
{
    // event 1539_6 : sets Pos_Mailman to gameVariables->get_value(644, gotID)
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1539_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(183, str_map_job_mailman_763)) == (1))) goto event_1539_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (0))) goto event_1539_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_mailman_556))) goto event_1539_6_end;
        {
            loop_find_unemp_running = true;
            int times = int(5);
            loop_find_unemp_index = 0;
            while (loop_find_unemp_index < times) {
                loop_find_unemp_6();
                if (!loop_find_unemp_running) break;
                loop_find_unemp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(113, str_pos_mailman_675, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(644, str_gotid_1742));
    }
    event_1539_6_end: ;
}
// Function purpose: generated callback event_func_2616 processes event block(s) 1540_6. Actions/conditions:
//        1540_6: sets Pos_Library to gameVariables->get_value(644, gotID).
void Frames::event_func_2616()
{
    // event 1540_6 : sets Pos_Library to gameVariables->get_value(644, gotID)
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1540_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(184, str_map_job_library_764)) == (1))) goto event_1540_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (0))) goto event_1540_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_library_25))) goto event_1540_6_end;
        {
            loop_find_unemp_running = true;
            int times = int(5);
            loop_find_unemp_index = 0;
            while (loop_find_unemp_index < times) {
                loop_find_unemp_6();
                if (!loop_find_unemp_running) break;
                loop_find_unemp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(115, str_pos_library_677, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(644, str_gotid_1742));
    }
    event_1540_6_end: ;
}
// Function purpose: generated callback event_func_2617 processes event block(s) 1541_6. Actions/conditions:
//        1541_6: sets Pos_Deliveries to gameVariables->get_value(644, gotID).
void Frames::event_func_2617()
{
    // event 1541_6 : sets Pos_Deliveries to gameVariables->get_value(644, gotID)
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1541_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(181, str_map_job_deliveries_761)) == (1))) goto event_1541_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (0))) goto event_1541_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_deliveries_577))) goto event_1541_6_end;
        {
            loop_find_unemp_running = true;
            int times = int(5);
            loop_find_unemp_index = 0;
            while (loop_find_unemp_index < times) {
                loop_find_unemp_6();
                if (!loop_find_unemp_running) break;
                loop_find_unemp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_pos_deliveries_681, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(644, str_gotid_1742));
    }
    event_1541_6_end: ;
}
// Function purpose: generated callback event_func_2618 processes event block(s) 1542_6. Actions/conditions:
//        1542_6: sets Pos_Tailor to gameVariables->get_value(644, gotID).
void Frames::event_func_2618()
{
    // event 1542_6 : sets Pos_Tailor to gameVariables->get_value(644, gotID)
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1542_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(182, str_map_job_tailor_762)) == (1))) goto event_1542_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (0))) goto event_1542_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_tailor_479))) goto event_1542_6_end;
        {
            loop_find_unemp_running = true;
            int times = int(5);
            loop_find_unemp_index = 0;
            while (loop_find_unemp_index < times) {
                loop_find_unemp_6();
                if (!loop_find_unemp_running) break;
                loop_find_unemp_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(123, str_pos_tailor_685, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(644, str_gotid_1742));
    }
    event_1542_6_end: ;
}
void Frames::loop_fill_vac_6()
{
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_2614();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
}
// Function purpose: generated callback event_func_2619 processes event block(s) 1278_6. Actions/conditions:
//        1278_6: sets the selected object's horizontal position to gameVariables->get_value(370, foundX)+8;
//        sets the selected object's vertical position to gameVariables->get_value(371, foundY)+8; creates a
//        dizzy 467 object; plus 1 more actions.
void Frames::event_func_2619()
{
    // event 1278_6 : sets the selected object's horizontal position to gameVariables->get_value(370, foundX)+8; sets the selected object's vertical position to gameVariables->get_value(371, foundY)+8; creates a dizzy 467 object; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1278_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1278_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167)+8);
        }
        FrameObject * single_instance_1278_6_0; single_instance_1278_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dizzy_467(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1278_6_0 == NULL)
                    single_instance_1278_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1278_6_0))->alterables->values.set(0, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
    }
    event_1278_6_end: ;
}
void Frames::loop_laid_him_out_6()
{
    event_func_2619();
}
// Function purpose: generated callback event_func_2620 processes event block(s) 1263_6. Actions/conditions:
//        1263_6: increments Track_Downed by 1.
void Frames::event_func_2620()
{
    // event 1263_6 : increments Track_Downed by 1
    {
        if (!(group_code_1)) goto event_1263_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1263_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(603, str_track_downed_1578, 1);
    }
    event_1263_6_end: ;
}
// Function purpose: generated callback event_func_2621 processes event block(s) 1264_6. Actions/conditions:
//        1264_6: disables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object;
//        sets the object's animation to 12; sets the selected object's direction to 16; plus 11 more actions.
void Frames::event_func_2621()
{
    // event 1264_6 : disables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object; sets the object's animation to 12; sets the selected object's direction to 16; plus 11 more actions
    {
        if (!(group_code_1 && group_code_conflict_you_attacking_old_beat_code_1)) goto event_1264_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2001))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1264_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2001);
        }
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_1264_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_1264_6_1: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(416, str_m_cash_1234, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(417, str_m_done_1235, 0);
        {
            loop_beat_mission_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_beat_mission_index = 0;
            while (loop_beat_mission_index < times) {
                loop_beat_mission_6();
                if (!loop_beat_mission_running) break;
                loop_beat_mission_index++;
            }
        }
        {
            loop_beat_mission_del_running = true;
            int times = int(1);
            loop_beat_mission_del_index = 0;
            while (loop_beat_mission_del_index < times) {
                loop_beat_mission_del_6();
                if (!loop_beat_mission_del_running) break;
                loop_beat_mission_del_index++;
            }
        }
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_1264_6_end: ;
}
// Function purpose: generated callback event_func_2622 processes event block(s) 1267_6. Actions/conditions:
//        1267_6: sets m_done to 0; sets del_missions to empty_string; sets m_cash to 0.
void Frames::event_func_2622()
{
    // event 1267_6 : sets m_done to 0; sets del_missions to empty_string; sets m_cash to 0
    {
        if (!(group_code_1)) goto event_1267_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1267_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(417, str_m_done_1235, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(416, str_m_cash_1234, 0);
        {
            loop_check_beat_mission_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_check_beat_mission_index = 0;
            while (loop_check_beat_mission_index < times) {
                loop_check_beat_mission_6();
                if (!loop_check_beat_mission_running) break;
                loop_check_beat_mission_index++;
            }
        }
    }
    event_1267_6_end: ;
}
// Function purpose: generated callback event_func_2623 processes event block(s) 1268_6. Actions/conditions:
//        1268_6: stores an integer value; stores player data.
void Frames::event_func_2623()
{
    // event 1268_6 : stores an integer value; stores player data
    {
        if (!(group_code_1)) goto event_1268_6_end;
        if (!((global_values->get(16)) == (1))) goto event_1268_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1268_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->set_int(str_ko_inmates_1743, ((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_ko_inmates_1743)+1);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_1268_6_end: ;
}
// Function purpose: generated callback event_func_2624 processes event block(s) 1269_6. Actions/conditions:
//        1269_6: stores an integer value; stores player data.
void Frames::event_func_2624()
{
    // event 1269_6 : stores an integer value; stores player data
    {
        if (!(group_code_1)) goto event_1269_6_end;
        if (!((global_values->get(16)) == (1))) goto event_1269_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1269_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->set_int(str_ko_guards_1744, ((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_ko_guards_1744)+1);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
    }
    event_1269_6_end: ;
}
// Function purpose: generated callback event_func_2625 processes event block(s) 1277_6. Actions/conditions:
//        1277_6: stops the object's movement; sets the selected object's numeric value to 0; sets the selected
//        object's numeric value to -1; plus 23 more actions.
void Frames::event_func_2625()
{
    // event 1277_6 : stops the object's movement; sets the selected object's numeric value to 0; sets the selected object's numeric value to -1; plus 23 more actions
    {
        if (!(group_code_1)) goto event_1277_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1277_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1277_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(18, -1);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(16, -800);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.disable(60);
            ((Active*)*it)->alterables->flags.disable(25);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
            ((Active*)*it)->set_direction(24);
        }
    MoveIt::stop(qualifier_14);    for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(24);
        }
        FrameObject * single_instance_1277_6_0; single_instance_1277_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + -8, parent->y + 8), parent->layer);
                if (single_instance_1277_6_0 == NULL)
                    single_instance_1277_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1277_6_0))->set_layer(((Active*)get_single(qualifier_3, default_active_instance))->layer->index+1-1);
        FrameObject * single_instance_1277_6_1; single_instance_1277_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1277_6_1 == NULL)
                    single_instance_1277_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1277_6_1))->set_layer(((Active*)get_single(qualifier_3, default_active_instance))->layer->index+1-1);
        ((Counter*)get_instance(counter2_257_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((((Active*)get_single(qualifier_14, default_active_instance))->get_x()/MathHelper()/16)*16));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((((Active*)get_single(qualifier_14, default_active_instance))->get_y()/MathHelper()/16)*16));
        {
            loop_space_finder_running = true;
            int times = int(1);
            loop_space_finder_index = 0;
            while (loop_space_finder_index < times) {
                loop_space_finder_6();
                if (!loop_space_finder_running) break;
                loop_space_finder_index++;
            }
        }
        {
            loop_laid_him_out_running = true;
            int times = int(1);
            loop_laid_him_out_index = 0;
            while (loop_laid_him_out_index < times) {
                loop_laid_him_out_6();
                if (!loop_laid_him_out_running) break;
                loop_laid_him_out_index++;
            }
        }
        ((Active*)get_instance(target_177_instances))->set_visible(false);
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
    }
    event_1277_6_end: ;
}
void Frames::loop_you_attack_deadcheck_6()
{
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    event_func_2625();
}
// Function purpose: generated callback event_func_2626 processes event block(s) 2066_6. Actions/conditions:
//        2066_6: sets spaceX to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_x(); sets
//        spaceY to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_y().
void Frames::event_func_2626()
{
    // event 2066_6 : sets spaceX to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_x(); sets spaceY to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_y()
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2066_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_2066_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_single(inmateBed_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_single(inmateBed_instances, default_active_instance))->get_y());
        {
            loop_space_finder_running = true;
            int times = int(1);
            loop_space_finder_index = 0;
            while (loop_space_finder_index < times) {
                loop_space_finder_6();
                if (!loop_space_finder_running) break;
                loop_space_finder_index++;
            }
        }
    }
    event_2066_6_end: ;
}
// Function purpose: generated callback event_func_2627 processes event block(s) 2067_6. Actions/conditions:
//        2067_6: sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the
//        selected object's numeric value to gameVariables->get_value(371, foundY).
void Frames::event_func_2627()
{
    // event 2067_6 : sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the selected object's numeric value to gameVariables->get_value(371, foundY)
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2067_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (1))) goto event_2067_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2067_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
        }
    }
    event_2067_6_end: ;
}
void Frames::loop_lockdown_gocell_6()
{
    event_func_2626();
    event_func_2627();
}
// Function purpose: generated callback event_func_2628 processes event block(s) 3311_6. Actions/conditions:
//        3311_6: checks scene is active; game state SelectedItem; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_2628()
{
    // event 3311_6 : checks scene is active; game state SelectedItem; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3311_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_decay_1212)) == (0))) goto event_3311_6_end;
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
    }
    event_3311_6_end: ;
}
// Function purpose: generated callback event_func_2629 processes event block(s) 3312_6. Actions/conditions:
//        3312_6: checks scene is active; game state SelectedItem; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_2629()
{
    // event 3312_6 : checks scene is active; game state SelectedItem; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3312_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_decay_1212)) > (0))) goto event_3312_6_end;
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_itemhp_running = true;
            int times = int(1);
            loop_itemhp_index = 0;
            while (loop_itemhp_index < times) {
                loop_itemhp_6();
                if (!loop_itemhp_running) break;
                loop_itemhp_index++;
            }
        }
    }
    event_3312_6_end: ;
}
void Frames::loop_cam_dis_6()
{
    event_func_2628();
    event_func_2629();
}
// Function purpose: generated callback event_func_2630 processes event block(s) 332_6. Actions/conditions:
//        332_6: adds a shadow 324 instance; sets the selected object's horizontal position to
//        (loop_new_shads_x_index+1)*16; sets the selected object's vertical position to
//        (loop_new_shads_y_index+1)*16; plus 6 more actions.
void Frames::event_func_2630()
{
    // event 332_6 : adds a shadow 324 instance; sets the selected object's horizontal position to (loop_new_shads_x_index+1)*16; sets the selected object's vertical position to (loop_new_shads_y_index+1)*16; plus 6 more actions
    {
        if (!(group_setup_1)) goto event_332_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_new_shads_x_index+1), (loop_new_shads_y_index+1), 2)) == (1))) goto event_332_6_end;
        shadow_324_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shadow_324(0, 0), 1);
            shadow_324_instances.add_back();
        }
        for (ObjectIterator it(shadow_324_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((loop_new_shads_x_index+1)*16);
            ((Active*)*it)->set_y((loop_new_shads_y_index+1)*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(645, str_shad_count_1745, 1);
    }
    event_332_6_end: ;
}
// Function purpose: generated callback event_func_2631 processes event block(s) 333_6. Actions/conditions:
//        333_6: adds a shadow 324 instance; sets the selected object's horizontal position to
//        (loop_new_shads_x_index+1)*16; sets the selected object's vertical position to
//        (loop_new_shads_y_index+1)*16; plus 7 more actions.
void Frames::event_func_2631()
{
    // event 333_6 : adds a shadow 324 instance; sets the selected object's horizontal position to (loop_new_shads_x_index+1)*16; sets the selected object's vertical position to (loop_new_shads_y_index+1)*16; plus 7 more actions
    {
        if (!(group_setup_1)) goto event_333_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_new_shads_x_index+1), (loop_new_shads_y_index+1), 2)) == (2))) goto event_333_6_end;
        shadow_324_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shadow_324(0, 0), 1);
            shadow_324_instances.add_back();
        }
        for (ObjectIterator it(shadow_324_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((loop_new_shads_x_index+1)*16);
            ((Active*)*it)->set_y((loop_new_shads_y_index+1)*16);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(645, str_shad_count_1745, 1);
    }
    event_333_6_end: ;
}
