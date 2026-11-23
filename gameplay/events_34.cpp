#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_2632 processes event block(s) 334_6. Actions/conditions:
//        334_6: adds a shadow 324 instance; sets the selected object's horizontal position to
//        (loop_new_shads_x_index+1)*16; sets the selected object's vertical position to
//        (loop_new_shads_y_index+1)*16; plus 7 more actions.
void Frames::event_func_2632()
{
    // event 334_6 : adds a shadow 324 instance; sets the selected object's horizontal position to (loop_new_shads_x_index+1)*16; sets the selected object's vertical position to (loop_new_shads_y_index+1)*16; plus 7 more actions
    {
        if (!(group_setup_1)) goto event_334_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_new_shads_x_index+1), (loop_new_shads_y_index+1), 2)) == (3))) goto event_334_6_end;
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
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(645, str_shad_count_1745, 1);
    }
    event_334_6_end: ;
}
// Function purpose: generated callback event_func_2633 processes event block(s) 335_6. Actions/conditions:
//        335_6: adds a shadow 324 instance; sets the selected object's horizontal position to
//        (loop_new_shads_x_index+1)*16; sets the selected object's vertical position to
//        (loop_new_shads_y_index+1)*16; plus 7 more actions.
void Frames::event_func_2633()
{
    // event 335_6 : adds a shadow 324 instance; sets the selected object's horizontal position to (loop_new_shads_x_index+1)*16; sets the selected object's vertical position to (loop_new_shads_y_index+1)*16; plus 7 more actions
    {
        if (!(group_setup_1)) goto event_335_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_new_shads_x_index+1), (loop_new_shads_y_index+1), 2)) == (7))) goto event_335_6_end;
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
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(645, str_shad_count_1745, 1);
    }
    event_335_6_end: ;
}
// Function purpose: generated callback event_func_2634 processes event block(s) 336_6. Actions/conditions:
//        336_6: adds a shady 348 instance; increments shad_count by 1; sets the selected object's horizontal position
//        to (loop_new_shads_x_index+1)*16; plus 6 more actions.
void Frames::event_func_2634()
{
    // event 336_6 : adds a shady 348 instance; increments shad_count by 1; sets the selected object's horizontal position to (loop_new_shads_x_index+1)*16; plus 6 more actions
    {
        if (!(group_setup_1)) goto event_336_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_new_shads_x_index+1), (loop_new_shads_y_index+1), 5)) == (4))) goto event_336_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((loop_new_shads_x_index+1), (loop_new_shads_y_index+1), 5)) != (0))) goto event_336_6_end;
        shady_348_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shady_348(0, 0), 4);
            shady_348_instances.add_back();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(645, str_shad_count_1745, 1);
        for (ObjectIterator it(shady_348_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((loop_new_shads_x_index+1)*16);
            ((Active*)*it)->set_y((loop_new_shads_y_index+1)*16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_336_6_end: ;
}
// Function purpose: generated callback event_func_2635 processes event block(s) 337_6. Actions/conditions:
//        337_6: increments shad_count by 1; adds a shady 348 instance; sets the selected object's horizontal position
//        to (loop_new_shads_x_index+1)*16; plus 7 more actions.
void Frames::event_func_2635()
{
    // event 337_6 : increments shad_count by 1; adds a shady 348 instance; sets the selected object's horizontal position to (loop_new_shads_x_index+1)*16; plus 7 more actions
    {
        if (!(group_setup_1)) goto event_337_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_new_shads_x_index+1), (loop_new_shads_y_index+1), 5)) == (5))) goto event_337_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((loop_new_shads_x_index+1), (loop_new_shads_y_index+1), 5)) != (0))) goto event_337_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(645, str_shad_count_1745, 1);
        shady_348_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shady_348(0, 0), 4);
            shady_348_instances.add_back();
        }
        for (ObjectIterator it(shady_348_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((loop_new_shads_x_index+1)*16);
            ((Active*)*it)->set_y((loop_new_shads_y_index+1)*16);
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_337_6_end: ;
}
// Function purpose: generated callback event_func_2636 processes event block(s) 338_6. Actions/conditions:
//        338_6: increments shad_count by 1; adds a shady 348 instance; sets the selected object's horizontal position
//        to (loop_new_shads_x_index+1)*16; plus 7 more actions.
void Frames::event_func_2636()
{
    // event 338_6 : increments shad_count by 1; adds a shady 348 instance; sets the selected object's horizontal position to (loop_new_shads_x_index+1)*16; plus 7 more actions
    {
        if (!(group_setup_1)) goto event_338_6_end;
        if (!((((ArrayObject*)get_instance(shadows_356_instances))->get_value((loop_new_shads_x_index+1), (loop_new_shads_y_index+1), 5)) == (6))) goto event_338_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((loop_new_shads_x_index+1), (loop_new_shads_y_index+1), 5)) != (0))) goto event_338_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(645, str_shad_count_1745, 1);
        shady_348_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_shady_348(0, 0), 4);
            shady_348_instances.add_back();
        }
        for (ObjectIterator it(shady_348_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((loop_new_shads_x_index+1)*16);
            ((Active*)*it)->set_y((loop_new_shads_y_index+1)*16);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_338_6_end: ;
}
void Frames::loop_new_shads_x_6()
{
    event_func_2630();
    event_func_2631();
    event_func_2632();
    event_func_2633();
    event_func_2634();
    event_func_2635();
    event_func_2636();
}
// Function purpose: generated callback event_func_2637 processes event block(s) 331_6. Actions/conditions:
//        331_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_2637()
{
    // event 331_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_setup_1)) goto event_331_6_end;
        {
            loop_new_shads_x_running = true;
            int times = int(width/MathHelper()/16);
            loop_new_shads_x_index = 0;
            while (loop_new_shads_x_index < times) {
                loop_new_shads_x_6();
                if (!loop_new_shads_x_running) break;
                loop_new_shads_x_index++;
            }
        }
    }
    event_331_6_end: ;
}
void Frames::loop_new_shads_y_6()
{
    event_func_2637();
}
// Function purpose: generated callback event_func_2638 processes event block(s) 1210_6. Actions/conditions:
//        1210_6: sets spaceX to ((Active*)get_single(desks_305_instances, default_active_instance))->get_x(); sets
//        spaceY to ((Active*)get_single(desks_305_instances, default_active_instance))->get_y().
void Frames::event_func_2638()
{
    // event 1210_6 : sets spaceX to ((Active*)get_single(desks_305_instances, default_active_instance))->get_x(); sets spaceY to ((Active*)get_single(desks_305_instances, default_active_instance))->get_y()
    {
        if (!(group_code_1)) goto event_1210_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_1210_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_single(desks_305_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_single(desks_305_instances, default_active_instance))->get_y());
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
    event_1210_6_end: ;
}
// Function purpose: generated callback event_func_2639 processes event block(s) 1211_6. Actions/conditions:
//        1211_6: sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the
//        selected object's numeric value to gameVariables->get_value(371, foundY); enables flag 60 (guard
//        sight or target-tracking state) on the selected object.
void Frames::event_func_2639()
{
    // event 1211_6 : sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the selected object's numeric value to gameVariables->get_value(371, foundY); enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1)) goto event_1211_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (1))) goto event_1211_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1211_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1211_6_end: ;
}
void Frames::loop_inmate_wake_outfit_6()
{
    event_func_2638();
    event_func_2639();
}
// Function purpose: generated callback event_func_2640 processes event block(s) 2024_6. Actions/conditions:
//        2024_6: sets the object's animation to 1.
void Frames::event_func_2640()
{
    // event 2024_6 : sets the object's animation to 1
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2024_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(539, str_npcid_1440)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2024_6_end;
        punchbag2_438_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, punchbag2_438_instances)) goto event_2024_6_end;
        for (ObjectIterator it(punchbag2_438_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_2024_6_end: ;
}
void Frames::loop_npc_punchbag_go_2_6()
{
    event_func_2191();
    event_func_2640();
}
// Function purpose: generated callback event_func_2641 processes event block(s) 2022_6. Actions/conditions:
//        2022_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_2641()
{
    // event 2022_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2022_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(539, str_npcid_1440)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2022_6_end;
        punchbag_436_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, punchbag_436_instances)) goto event_2022_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2022_6_end;
        {
            loop_npc_punchbag_go_2_running = true;
            int times = int(1);
            loop_npc_punchbag_go_2_index = 0;
            while (loop_npc_punchbag_go_2_index < times) {
                loop_npc_punchbag_go_2_6();
                if (!loop_npc_punchbag_go_2_running) break;
                loop_npc_punchbag_go_2_index++;
            }
        }
    }
    event_2022_6_end: ;
}
void Frames::loop_npc_punchbag_go_6()
{
    event_func_2641();
}
// Function purpose: generated callback event_func_2642 processes event block(s) 2749_6. Actions/conditions:
//        2749_6: increments JobQuota by 5; plays a sound or music track.
void Frames::event_func_2642()
{
    // event 2749_6 : increments JobQuota by 5; plays a sound or music track
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2749_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2749_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_2749_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 5);
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_2749_6_end: ;
}
void Frames::loop_serve_food_6()
{
    event_func_2642();
}
// Function purpose: generated callback event_func_2643 processes event block(s) 2748_6. Actions/conditions:
//        2748_6: changes a stored game value.
void Frames::event_func_2643()
{
    // event 2748_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2748_6_end;
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(646, str_currtray_1746)))) { it.deselect(); continue; }
        }
        if (!canteenserving_277_instances.has_selection()) goto event_2748_6_end;
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        {
            loop_serve_food_running = true;
            int times = int(1);
            loop_serve_food_index = 0;
            while (loop_serve_food_index < times) {
                loop_serve_food_6();
                if (!loop_serve_food_running) break;
                loop_serve_food_index++;
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
    }
    event_2748_6_end: ;
}
void Frames::loop_serve_food_check_6()
{
    event_func_2643();
}
// Function purpose: generated callback event_func_2644 processes event block(s) 3358_6. Actions/conditions:
//        3358_6: removes the selected object.
void Frames::event_func_2644()
{
    // event 3358_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3358_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3358_6_end: ;
}
// Function purpose: generated callback event_func_2645 processes event block(s) 3359_6. Actions/conditions:
//        3359_6: saves the current object selection; removes the selected object.
void Frames::event_func_2645()
{
    // event 3359_6 : saves the current object selection; removes the selected object
    bool or_result_3359_6 = false;
    bool or_temp_result_3359_6_0 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3359_6_0_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto or_event_3359_6_0_end;
        or_result_3359_6 = true;
        or_temp_result_3359_6_0 = true;
    }
    or_event_3359_6_0_end: ;
    itemSlot_instances.clear_saved_selection();
    if (or_temp_result_3359_6_0) {
        itemSlot_instances.save_selection();
    }
    // event 3359_6 : saves the current object selection; removes the selected object
    bool or_temp_result_3359_6_1 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3359_6_1_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto or_event_3359_6_1_end;
        or_result_3359_6 = true;
        or_temp_result_3359_6_1 = true;
    }
    or_event_3359_6_1_end: ;
    if (or_temp_result_3359_6_1) {
        itemSlot_instances.save_selection();
    }
    // event 3359_6 : saves the current object selection; removes the selected object
    bool or_temp_result_3359_6_2 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3359_6_2_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto or_event_3359_6_2_end;
        or_result_3359_6 = true;
        or_temp_result_3359_6_2 = true;
    }
    or_event_3359_6_2_end: ;
    if (or_temp_result_3359_6_2) {
        itemSlot_instances.save_selection();
    }
    // event 3359_6 : saves the current object selection; removes the selected object
    bool or_temp_result_3359_6_3 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3359_6_3_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto or_event_3359_6_3_end;
        or_result_3359_6 = true;
        or_temp_result_3359_6_3 = true;
        or_event_3359_6_3_end: ;
        if (or_temp_result_3359_6_3) {
            itemSlot_instances.save_selection();
        }
        if (!or_result_3359_6) goto or_final_or_event_3359_6_3_end;
        itemSlot_instances.empty_selection();
        if (or_temp_result_3359_6_0 || or_temp_result_3359_6_1 || or_temp_result_3359_6_2 || or_temp_result_3359_6_3) {
            itemSlot_instances.restore_selection();
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_3359_6_3_end: ;
}
// Function purpose: generated callback event_func_2646 processes event block(s) 3360_6. Actions/conditions:
//        3360_6: saves the current object selection; removes the selected object.
void Frames::event_func_2646()
{
    // event 3360_6 : saves the current object selection; removes the selected object
    bool or_result_3360_6 = false;
    bool or_temp_result_3360_6_0 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3360_6_0_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto or_event_3360_6_0_end;
        or_result_3360_6 = true;
        or_temp_result_3360_6_0 = true;
    }
    or_event_3360_6_0_end: ;
    hudItem_instances.clear_saved_selection();
    if (or_temp_result_3360_6_0) {
        hudItem_instances.save_selection();
    }
    // event 3360_6 : saves the current object selection; removes the selected object
    bool or_temp_result_3360_6_1 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3360_6_1_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto or_event_3360_6_1_end;
        or_result_3360_6 = true;
        or_temp_result_3360_6_1 = true;
    }
    or_event_3360_6_1_end: ;
    if (or_temp_result_3360_6_1) {
        hudItem_instances.save_selection();
    }
    // event 3360_6 : saves the current object selection; removes the selected object
    bool or_temp_result_3360_6_2 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3360_6_2_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_outfit_450))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto or_event_3360_6_2_end;
        or_result_3360_6 = true;
        or_temp_result_3360_6_2 = true;
    }
    or_event_3360_6_2_end: ;
    if (or_temp_result_3360_6_2) {
        hudItem_instances.save_selection();
    }
    // event 3360_6 : saves the current object selection; removes the selected object
    bool or_temp_result_3360_6_3 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3360_6_3_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_weapon_449))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto or_event_3360_6_3_end;
        or_result_3360_6 = true;
        or_temp_result_3360_6_3 = true;
        or_event_3360_6_3_end: ;
        if (or_temp_result_3360_6_3) {
            hudItem_instances.save_selection();
        }
        if (!or_result_3360_6) goto or_final_or_event_3360_6_3_end;
        hudItem_instances.empty_selection();
        if (or_temp_result_3360_6_0 || or_temp_result_3360_6_1 || or_temp_result_3360_6_2 || or_temp_result_3360_6_3) {
            hudItem_instances.restore_selection();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_3360_6_3_end: ;
}
void Frames::loop_mish_del_stuff_6()
{
    event_func_2644();
    event_func_2645();
    event_func_2646();
}
// Function purpose: generated callback event_func_2647 processes event block(s) 3325_6. Actions/conditions:
//        3325_6: splits saved text into fields.
void Frames::event_func_2647()
{
    // event 3325_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3325_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(loop_retrieve_mission_index+1), str__254);
    }
    event_3325_6_end: ;
}
// Function purpose: generated callback event_func_2648 processes event block(s) 3326_6. Actions/conditions:
//        3326_6: increments Score_P by 10; changes a stored game value; increments Cash by
//        string_to_number(stringtokenizer_81->get(3)); plus 26 more actions.
void Frames::event_func_2648()
{
    // event 3326_6 : increments Score_P by 10; changes a stored game value; increments Cash by string_to_number(stringtokenizer_81->get(3)); plus 26 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3326_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_3326_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))))) goto event_3326_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(647, str_curritem_1747))))) goto event_3326_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3326_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 15);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(220, str_hsac_827, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*2);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_45_1275));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_payout_1382, str__1132+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        FrameObject * single_instance_3326_6_0; single_instance_3326_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3326_6_0 == NULL)
                    single_instance_3326_6_0 = new_obj;
            }
        }
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_3326_6_1;
            ((Text*)single_instance_3326_6_0)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_3326_6_1: ;
        }
        ((Text*)((Text*)single_instance_3326_6_0))->blend_color.set(Color(60, 60, 60));
        ((Text*)((Text*)single_instance_3326_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        {
            loop_mish_del_stuff_running = true;
            int times = int(1);
            loop_mish_del_stuff_index = 0;
            while (loop_mish_del_stuff_index < times) {
                loop_mish_del_stuff_6();
                if (!loop_mish_del_stuff_running) break;
                loop_mish_del_stuff_index++;
            }
        }
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-38);
            ((Text*)*it)->set_bold(1);
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_6_241)));
        }
        FrameObject * single_instance_3326_6_3; single_instance_3326_6_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 28, parent->y + 20), parent->layer);
                if (single_instance_3326_6_3 == NULL)
                    single_instance_3326_6_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3326_6_3))->force_animation(28);
        FrameObject * single_instance_3326_6_4; single_instance_3326_6_4 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3326_6_3)->x + 3, ((Active*)single_instance_3326_6_3)->y + 3), ((Active*)single_instance_3326_6_3)->layer);
            if (single_instance_3326_6_4 == NULL)
                single_instance_3326_6_4 = new_obj;
        }
        ((Text*)((Text*)single_instance_3326_6_4))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_3326_6_4))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_1_97)));
        ((ListObject*)get_instance(missions_298_instances))->delete_line(loop_retrieve_mission_index+1);
        {
            loop_favour_complete_running = true;
            int times = int(1);
            loop_favour_complete_index = 0;
            while (loop_favour_complete_index < times) {
                loop_favour_complete_6();
                if (!loop_favour_complete_running) break;
                loop_favour_complete_index++;
            }
        }
            loop_retrieve_mission_running = false;
    
        {
            loop_hudshake_cash_running = true;
            int times = int(1);
            loop_hudshake_cash_index = 0;
            while (loop_hudshake_cash_index < times) {
                loop_hudshake_cash_6();
                if (!loop_hudshake_cash_running) break;
                loop_hudshake_cash_index++;
            }
        }
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_3326_6_end: ;
}
void Frames::loop_retrieve_mission_6()
{
    event_func_2647();
    event_func_2648();
}
// Function purpose: generated callback event_func_2649 processes event block(s) 2177_6. Actions/conditions:
//        2177_6: creates a dust 223 object; chooses a random value; chooses a random value; plus 6 more actions.
void Frames::event_func_2649()
{
    // event 2177_6 : creates a dust 223 object; chooses a random value; chooses a random value; plus 6 more actions
    {
        if (!(group_code_1 && group_code_misc_mines_1)) goto event_2177_6_end;
        FrameObject * single_instance_2177_6_0; single_instance_2177_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2177_6_0 == NULL)
                    single_instance_2177_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2177_6_0))->set_x((((AssociateArray*)get_instance(gameVariables_instances))->get_value(648, str_minex_1748)-8)+(randrange_event(16)));
        ((Active*)((Active*)single_instance_2177_6_0))->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(649, str_miney_1749)-8)+(randrange_event(16)));
        ((Active*)((Active*)single_instance_2177_6_0))->set_scale(1+randrange_event(3));
        ((Active*)((Active*)single_instance_2177_6_0))->blend_color.set_alpha_coefficient(50+randrange_event(100));
        ((Active*)((Active*)single_instance_2177_6_0))->force_speed(80);
    }
    event_2177_6_end: ;
}
void Frames::loop_mine_explode_dust_6()
{
    event_func_2649();
}
// Function purpose: generated callback event_func_2650 processes event block(s) 2175_6. Actions/conditions:
//        2175_6: sets the selected object's numeric value to 999; creates a dust 223 object; sets the target object's
//        direction; plus 6 more actions.
void Frames::event_func_2650()
{
    // event 2175_6 : sets the selected object's numeric value to 999; creates a dust 223 object; sets the target object's direction; plus 6 more actions
    {
        if (!(group_code_1 && group_code_misc_mines_1)) goto event_2175_6_end;
        mine_414_instances.clear_selection();
        for (ObjectIterator it(mine_414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 999);
        }
        FrameObject * single_instance_2175_6_0; single_instance_2175_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2175_6_0 == NULL)
                    single_instance_2175_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2175_6_0))->set_direction(24);
        ((Active*)((Active*)single_instance_2175_6_0))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(648, str_minex_1748));
        ((Active*)((Active*)single_instance_2175_6_0))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(649, str_miney_1749));
        ((Active*)((Active*)single_instance_2175_6_0))->blend_color.set_alpha_coefficient(100);
    }
    event_2175_6_end: ;
}
// Function purpose: generated callback event_func_2651 processes event block(s) 2176_6. Actions/conditions:
//        2176_6: sets the selected object's numeric value to 0; plays a sound or music track.
void Frames::event_func_2651()
{
    // event 2176_6 : sets the selected object's numeric value to 0; plays a sound or music track
    {
        if (!(group_code_1 && group_code_misc_mines_1)) goto event_2176_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(7, 0);
        media.play_id(SOUND_EXPLODE_23, 1-1);
        {
            loop_mine_explode_dust_running = true;
            int times = int(3);
            loop_mine_explode_dust_index = 0;
            while (loop_mine_explode_dust_index < times) {
                loop_mine_explode_dust_6();
                if (!loop_mine_explode_dust_running) break;
                loop_mine_explode_dust_index++;
            }
        }
    }
    event_2176_6_end: ;
}
void Frames::loop_mine_explode_6()
{
    event_func_2650();
    event_func_2651();
}
// Function purpose: generated callback event_func_2652 processes event block(s) 4384_6. Actions/conditions:
//        4384_6: sets EntX to ((Active*)get_single(waypointtowerent_341_instances,
//        default_active_instance))->get_x(); sets EntY to ((Active*)get_single(waypointtowerent_341_instances,
//        default_active_instance))->get_y(); sets a stored numeric value.
void Frames::event_func_2652()
{
    // event 4384_6 : sets EntX to ((Active*)get_single(waypointtowerent_341_instances, default_active_instance))->get_x(); sets EntY to ((Active*)get_single(waypointtowerent_341_instances, default_active_instance))->get_y(); sets a stored numeric value
    {
        if (!(group_guard_towers_1)) goto event_4384_6_end;
        waypointtowerent_341_instances.clear_selection();
        for (ObjectIterator it(waypointtowerent_341_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_nearest_tower_door_index+1))) { it.deselect(); continue; }
        }
        if (!waypointtowerent_341_instances.has_selection()) goto event_4384_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(650, str_entx_1750, ((Active*)get_single(waypointtowerent_341_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(651, str_enty_1751, ((Active*)get_single(waypointtowerent_341_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(652, str_towerdist_1752, get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(653, str_currtowerx_1753), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(654, str_currtowery_1754), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(650, str_entx_1750), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(651, str_enty_1751)));
    }
    event_4384_6_end: ;
}
// Function purpose: generated callback event_func_2653 processes event block(s) 4385_6. Actions/conditions:
//        4385_6: sets ClosestTower to loop_nearest_tower_door_index+1; sets ClosestTowerDist to
//        gameVariables->get_value(652, TowerDist).
void Frames::event_func_2653()
{
    // event 4385_6 : sets ClosestTower to loop_nearest_tower_door_index+1; sets ClosestTowerDist to gameVariables->get_value(652, TowerDist)
    {
        if (!(group_guard_towers_1)) goto event_4385_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(652, str_towerdist_1752)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(655, str_closesttowerdist_1755)))) goto event_4385_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(656, str_closesttower_1756, loop_nearest_tower_door_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(655, str_closesttowerdist_1755, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(652, str_towerdist_1752));
    }
    event_4385_6_end: ;
}
void Frames::loop_nearest_tower_door_6()
{
    event_func_2652();
    event_func_2653();
}
// Function purpose: generated callback event_func_2654 processes event block(s) 4383_6. Actions/conditions:
//        4383_6: sets the selected object's string to text for
//        8+randrange_event(14))+_+number_to_string(8+randrange_event(14); sets currTowerID to
//        ((Active*)get_single(towerguard_342_instances, default_active_instance))->alterables->values.get(0); sets
//        currTowerX to ((Active*)get_single(towerguard_342_instances, default_active_instance))->get_x(); plus 5 more
//        actions.
void Frames::event_func_2654()
{
    // event 4383_6 : sets the selected object's string to text for 8+randrange_event(14))+_+number_to_string(8+randrange_event(14); sets currTowerID to ((Active*)get_single(towerguard_342_instances, default_active_instance))->alterables->values.get(0); sets currTowerX to ((Active*)get_single(towerguard_342_instances, default_active_instance))->get_x(); plus 5 more actions
    {
        if (!(group_guard_towers_1)) goto event_4383_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_connect_towers_index+1))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto event_4383_6_end;
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(1, number_to_string(8+randrange_event(14))+str__96+number_to_string(8+randrange_event(14)));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(657, str_currtowerid_1757, ((Active*)get_single(towerguard_342_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(653, str_currtowerx_1753, ((Active*)get_single(towerguard_342_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(654, str_currtowery_1754, ((Active*)get_single(towerguard_342_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(655, str_closesttowerdist_1755, 10000);
        {
            loop_nearest_tower_door_running = true;
            int times = int(waypointtowerent_341_instances.size());
            loop_nearest_tower_door_index = 0;
            while (loop_nearest_tower_door_index < times) {
                loop_nearest_tower_door_6();
                if (!loop_nearest_tower_door_running) break;
                loop_nearest_tower_door_index++;
            }
        }
    }
    event_4383_6_end: ;
}
// Function purpose: generated callback event_func_2655 processes event block(s) 4386_6. Actions/conditions:
//        4386_6: sets the selected object's numeric value to gameVariables->get_value(656, ClosestTower).
void Frames::event_func_2655()
{
    // event 4386_6 : sets the selected object's numeric value to gameVariables->get_value(656, ClosestTower)
    {
        if (!(group_guard_towers_1)) goto event_4386_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_connect_towers_index+1))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto event_4386_6_end;
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(656, str_closesttower_1756));
        }
    }
    event_4386_6_end: ;
}
void Frames::loop_connect_towers_6()
{
    event_func_2654();
    event_func_2655();
}
// Function purpose: generated callback event_func_2656 processes event block(s) 3407_6. Actions/conditions:
//        3407_6: sets TileValue to groundTiles->get_value(get_mouse_x()/MathHelper()/16,
//        get_mouse_y()/MathHelper()/16, playerBase->layer->index+1); draws the selected image or tile.
void Frames::event_func_2656()
{
    // event 3407_6 : sets TileValue to groundTiles->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, playerBase->layer->index+1); draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3407_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (1))) goto event_3407_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(658, str_tilevalue_1758, ((ArrayObject*)get_instance(groundTiles_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1));
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), get_floor((((AssociateArray*)get_instance(gameVariables_instances))->get_value(658, str_tilevalue_1758)/MathHelper()/25)*16), ((((AssociateArray*)get_instance(gameVariables_instances))->get_value(658, str_tilevalue_1758)%MathHelper()%25)-1)*16, 16, 16, 1);
    }
    event_3407_6_end: ;
}
// Function purpose: generated callback event_func_2657 processes event block(s) 3416_6. Actions/conditions:
//        3416_6: sets get_mouse_x()/MathHelper()/16 to get_mouse_y()/MathHelper()/16.
void Frames::event_func_2657()
{
    // event 3416_6 : sets get_mouse_x()/MathHelper()/16 to get_mouse_y()/MathHelper()/16
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3416_6_end;
        if (!((((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) == (0))) goto event_3416_6_end;
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(-1, get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1);
    }
    event_3416_6_end: ;
}
// Function purpose: generated callback event_func_2658 processes event block(s) 3417_6. Actions/conditions:
//        3417_6: draws the selected image or tile; draws the selected image or tile.
void Frames::event_func_2658()
{
    // event 3417_6 : draws the selected image or tile; draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3417_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3417_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (6))) goto event_3417_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), get_floor((((AssociateArray*)get_instance(gameVariables_instances))->get_value(658, str_tilevalue_1758)/MathHelper()/25)*16), ((((AssociateArray*)get_instance(gameVariables_instances))->get_value(658, str_tilevalue_1758)%MathHelper()%25)-1)*16, 16, 16, 1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 0, 80, 16, 16, 1);
    }
    event_3417_6_end: ;
}
// Function purpose: generated callback event_func_2659 processes event block(s) 3418_6. Actions/conditions:
//        3418_6: draws the selected image or tile.
void Frames::event_func_2659()
{
    // event 3418_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3418_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3418_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (7))) goto event_3418_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 0, 96, 16, 16, 1);
    }
    event_3418_6_end: ;
}
// Function purpose: generated callback event_func_2660 processes event block(s) 3419_6. Actions/conditions:
//        3419_6: draws the selected image or tile.
void Frames::event_func_2660()
{
    // event 3419_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3419_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3419_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (52))) goto event_3419_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 32, 16, 16, 16, 1);
    }
    event_3419_6_end: ;
}
// Function purpose: generated callback event_func_2661 processes event block(s) 3420_6. Actions/conditions:
//        3420_6: draws the selected image or tile.
void Frames::event_func_2661()
{
    // event 3420_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3420_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3420_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (53))) goto event_3420_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 32, 32, 16, 16, 1);
    }
    event_3420_6_end: ;
}
// Function purpose: generated callback event_func_2662 processes event block(s) 3421_6. Actions/conditions:
//        3421_6: draws the selected image or tile.
void Frames::event_func_2662()
{
    // event 3421_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3421_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_3421_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3421_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (57))) goto event_3421_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 32, 16+80, 16, 16, 1);
    }
    event_3421_6_end: ;
}
// Function purpose: generated callback event_func_2663 processes event block(s) 3422_6. Actions/conditions:
//        3422_6: draws the selected image or tile.
void Frames::event_func_2663()
{
    // event 3422_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3422_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_3422_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3422_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (58))) goto event_3422_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 32, 32+80, 16, 16, 1);
    }
    event_3422_6_end: ;
}
// Function purpose: generated callback event_func_2664 processes event block(s) 3423_6. Actions/conditions:
//        3423_6: draws the selected image or tile.
void Frames::event_func_2664()
{
    // event 3423_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3423_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_3423_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (16))) goto event_3423_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3423_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 0, 240, 16, 16, 1);
    }
    event_3423_6_end: ;
}
// Function purpose: generated callback event_func_2665 processes event block(s) 3424_6. Actions/conditions:
//        3424_6: draws the selected image or tile.
void Frames::event_func_2665()
{
    // event 3424_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3424_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_3424_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (17))) goto event_3424_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3424_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 0, 256, 16, 16, 1);
    }
    event_3424_6_end: ;
}
// Function purpose: generated callback event_func_2666 processes event block(s) 3425_6. Actions/conditions:
//        3425_6: adds a mapsetupobstaclemarker 323 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(476, WallX); sets the selected object's vertical position to
//        gameVariables->get_value(477, WallY); plus 5 more actions.
void Frames::event_func_2666()
{
    // event 3425_6 : adds a mapsetupobstaclemarker 323 instance; sets the selected object's horizontal position to gameVariables->get_value(476, WallX); sets the selected object's vertical position to gameVariables->get_value(477, WallY); plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3425_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3425_6_end;
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 6);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352));
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
    }
    event_3425_6_end: ;
}
// Function purpose: generated callback event_func_2667 processes event block(s) 3426_6. Actions/conditions:
//        3426_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2667()
{
    // event 3426_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3426_6_end;
        dighole_207_instances.clear_selection();
        spread_value(dighole_207_instances, 0, 1);
    }
    event_3426_6_end: ;
}
// Function purpose: generated callback event_func_2668 processes event block(s) 3427_6. Actions/conditions:
//        3427_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2668()
{
    // event 3427_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3427_6_end;
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
    event_3427_6_end: ;
}
void Frames::loop_paint_wall_6()
{
    event_func_2656();
    event_func_2657();
    event_func_2658();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
}
// Function purpose: generated callback event_func_2669 processes event block(s) 4184_6. Actions/conditions:
//        4184_6: removes the selected object.
void Frames::event_func_2669()
{
    // event 4184_6 : removes the selected object
    {
        if (!(group_loops_1)) goto event_4184_6_end;
        markervendor_332_instances.clear_selection();
        for (ObjectIterator it(markervendor_332_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!markervendor_332_instances.has_selection()) goto event_4184_6_end;
        for (ObjectIterator it(markervendor_332_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4184_6_end: ;
}
// Function purpose: generated callback event_func_2670 processes event block(s) 4185_6. Actions/conditions:
//        4185_6: sets the selected object's string to 0.
void Frames::event_func_2670()
{
    // event 4185_6 : sets the selected object's string to 0
    {
        if (!(group_loops_1)) goto event_4185_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_empty_vendors_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4185_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(1, str_0_0_0_0_734);
        }
    }
    event_4185_6_end: ;
}
void Frames::loop_empty_vendors_6()
{
    event_func_2669();
    event_func_2670();
}
// Function purpose: generated callback event_func_2671 processes event block(s) 4149_6. Actions/conditions:
//        4149_6: sets GoMerchant to 0.
void Frames::event_func_2671()
{
    // event 4149_6 : sets GoMerchant to 0
    {
        if (!(group_code_1)) goto event_4149_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_4149_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(660, str_gomerchant_1760, 0);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_empty_vendors_running = true;
            int times = int(inmateBase_instances.size());
            loop_empty_vendors_index = 0;
            while (loop_empty_vendors_index < times) {
                loop_empty_vendors_6();
                if (!loop_empty_vendors_running) break;
                loop_empty_vendors_index++;
            }
        }
        {
            loop_create_vendors_running = true;
            int times = int(2);
            loop_create_vendors_index = 0;
            while (loop_create_vendors_index < times) {
                loop_create_vendors_6();
                if (!loop_create_vendors_running) break;
                loop_create_vendors_index++;
            }
        }
    }
    event_4149_6_end: ;
}
// Function purpose: generated callback event_func_2672 processes event block(s) 4150_6. Actions/conditions:
//        4150_6: sets GoMerchant to 0.
void Frames::event_func_2672()
{
    // event 4150_6 : sets GoMerchant to 0
    {
        if (!(group_code_1)) goto event_4150_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_4150_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(660, str_gomerchant_1760, 0);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_empty_vendors_running = true;
            int times = int(inmateBase_instances.size());
            loop_empty_vendors_index = 0;
            while (loop_empty_vendors_index < times) {
                loop_empty_vendors_6();
                if (!loop_empty_vendors_running) break;
                loop_empty_vendors_index++;
            }
        }
        {
            loop_create_vendors_running = true;
            int times = int(1);
            loop_create_vendors_index = 0;
            while (loop_create_vendors_index < times) {
                loop_create_vendors_6();
                if (!loop_create_vendors_running) break;
                loop_create_vendors_index++;
            }
        }
    }
    event_4150_6_end: ;
}
void Frames::loop_loop_npc_merchants_6()
{
    event_func_2671();
    event_func_2672();
}
// Function purpose: generated callback event_func_2673 processes event block(s) 2910_6. Actions/conditions:
//        2910_6: sets the selected object's text; removes the selected object.
void Frames::event_func_2673()
{
    // event 2910_6 : sets the selected object's text; removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2910_6_end;
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(empty_string);
        }
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2910_6_end: ;
}
void Frames::loop_des_buttons_6()
{
    event_func_2673();
}
// Function purpose: generated callback event_func_2674 processes event block(s) 2912_6. Actions/conditions:
//        2912_6: removes the selected object.
void Frames::event_func_2674()
{
    // event 2912_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2912_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_2912_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2912_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2912_6_end: ;
}
// Function purpose: generated callback event_func_2675 processes event block(s) 2913_6. Actions/conditions:
//        2913_6: sets allowed to 0; sets Outcome to Job Board entry 4; sets Outcome to
//        StringReplace::replace(gameVariables->get_string(406, Outcome), #, ); plus 8 more actions.
void Frames::event_func_2675()
{
    // event 2913_6 : sets allowed to 0; sets Outcome to Job Board entry 4; sets Outcome to StringReplace::replace(gameVariables->get_string(406, Outcome), #, ); plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2913_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_2913_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2913_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(460, str_allowed_1329, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, ((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_4_161));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220), str__346, str__624));
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_2913_6_0;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -54);
            pos_end_2913_6_0: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220));
            ((Text*)*it)->blend_color.set(Color(0, 84, 128));
        }
        ((Active*)get_instance(dialogPanel_instances))->set_direction(8);
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_letter_warden_running = true;
            int times = int(1);
            loop_letter_warden_index = 0;
            while (loop_letter_warden_index < times) {
                loop_letter_warden_6();
                if (!loop_letter_warden_running) break;
                loop_letter_warden_index++;
            }
        }
    }
    event_2913_6_end: ;
}
// Function purpose: generated callback event_func_2676 processes event block(s) 2914_6. Actions/conditions:
//        2914_6: sets a stored numeric value; sets Job to empty_string; sets the selected object's direction to 0;
//        plus 5 more actions.
void Frames::event_func_2676()
{
    // event 2914_6 : sets a stored numeric value; sets Job to empty_string; sets the selected object's direction to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2914_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(460, str_allowed_1329)) == (1))) goto event_2914_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_pos_635+((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478), 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(17, str_job_478, empty_string);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        {
            loop_des_buttons_running = true;
            int times = int(1);
            loop_des_buttons_index = 0;
            while (loop_des_buttons_index < times) {
                loop_des_buttons_6();
                if (!loop_des_buttons_running) break;
                loop_des_buttons_index++;
            }
        }
        {
            loop_create_joblist_running = true;
            int times = int(1);
            loop_create_joblist_index = 0;
            while (loop_create_joblist_index < times) {
                loop_create_joblist_6();
                if (!loop_create_joblist_running) break;
                loop_create_joblist_index++;
            }
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_2914_6_end: ;
}
void Frames::loop_job_quit_check_6()
{
    event_func_2674();
    event_func_2675();
    event_func_2676();
}
// Function purpose: generated callback event_func_2677 processes event block(s) 1212_6. Actions/conditions:
//        1212_6: sets spaceX to ((Active*)single_instance_1212_6_0)->get_x(); sets spaceY to
//        ((Active*)single_instance_1212_6_0)->get_y().
void Frames::event_func_2677()
{
    // event 1212_6 : sets spaceX to ((Active*)single_instance_1212_6_0)->get_x(); sets spaceY to ((Active*)single_instance_1212_6_0)->get_y()
    {
        if (!(group_code_1)) goto event_1212_6_end;
        bedguard_337_instances.clear_selection();
        FrameObject * single_instance_1212_6_0; single_instance_1212_6_0 = pick_random(bedguard_337_instances);
        if (single_instance_1212_6_0 == NULL) goto event_1212_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)single_instance_1212_6_0)->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)single_instance_1212_6_0)->get_y());
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
    event_1212_6_end: ;
}
// Function purpose: generated callback event_func_2678 processes event block(s) 1213_6. Actions/conditions:
//        1213_6: sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the
//        selected object's numeric value to gameVariables->get_value(371, foundY); enables flag 60 (guard
//        sight or target-tracking state) on the selected object.
void Frames::event_func_2678()
{
    // event 1213_6 : sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the selected object's numeric value to gameVariables->get_value(371, foundY); enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1)) goto event_1213_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (1))) goto event_1213_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1213_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1213_6_end: ;
}
void Frames::loop_guard_wake_outfit_6()
{
    event_func_2677();
    event_func_2678();
}
// Function purpose: generated callback event_func_2679 processes event block(s) 1208_6. Actions/conditions:
//        1208_6: sets charID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_2679()
{
    // event 1208_6 : sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1)) goto event_1208_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_nudes_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1208_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25)))) == (empty_string))) goto event_1208_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1208_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_inmate_wake_outfit_running = true;
            int times = int(1);
            loop_inmate_wake_outfit_index = 0;
            while (loop_inmate_wake_outfit_index < times) {
                loop_inmate_wake_outfit_6();
                if (!loop_inmate_wake_outfit_running) break;
                loop_inmate_wake_outfit_index++;
            }
        }
    }
    event_1208_6_end: ;
}
// Function purpose: generated callback event_func_2680 processes event block(s) 1209_6. Actions/conditions:
//        1209_6: sets charID to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_2680()
{
    // event 1209_6 : sets charID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1)) goto event_1209_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_nudes_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1209_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25)))) == (empty_string))) goto event_1209_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1209_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_guard_wake_outfit_running = true;
            int times = int(1);
            loop_guard_wake_outfit_index = 0;
            while (loop_guard_wake_outfit_index < times) {
                loop_guard_wake_outfit_6();
                if (!loop_guard_wake_outfit_running) break;
                loop_guard_wake_outfit_index++;
            }
        }
    }
    event_1209_6_end: ;
}
void Frames::loop_check_nudes_6()
{
    event_func_2679();
    event_func_2680();
}
// Function purpose: generated callback event_func_2681 processes event block(s) 3056_6. Actions/conditions:
//        3056_6: sets the object's animation to 0; sets the object position in the world; sets the selected object's
//        layer to 2-1.
void Frames::event_func_2681()
{
    // event 3056_6 : sets the object's animation to 0; sets the object position in the world; sets the selected object's layer to 2-1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3056_6_end;
        ((Active*)get_instance(upperlevelcheck_206_instances))->force_animation(0);
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            if (parent == NULL) goto pos_end_3056_6_0;
            ((Active*)get_instance(upperlevelcheck_206_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3056_6_0: ;
        }
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_layer(2-1);
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
    }
    event_3056_6_end: ;
}
// Function purpose: generated callback event_func_2682 processes event block(s) 3057_6. Actions/conditions:
//        3057_6: sets SpeakText to Misc entry 7; plays a sound or music track.
void Frames::event_func_2682()
{
    // event 3057_6 : sets SpeakText to Misc entry 7; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3057_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) == (0))) goto event_3057_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_7_323));
        {
            loop_notice_running = true;
            int times = int(1);
            loop_notice_index = 0;
            while (loop_notice_index < times) {
                loop_notice_6();
                if (!loop_notice_running) break;
                loop_notice_index++;
            }
        }
            loop_digabove_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3057_6_end: ;
}
// Function purpose: generated callback event_func_2683 processes event block(s) 3058_6. Actions/conditions:
//        3058_6: sets SpeakText to Misc entry 6; plays a sound or music track.
void Frames::event_func_2683()
{
    // event 3058_6 : sets SpeakText to Misc entry 6; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3058_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_3058_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_6_241));
        {
            loop_notice_running = true;
            int times = int(1);
            loop_notice_index = 0;
            while (loop_notice_index < times) {
                loop_notice_6();
                if (!loop_notice_running) break;
                loop_notice_index++;
            }
        }
            loop_digabove_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3058_6_end: ;
}
// Function purpose: generated callback event_func_2684 processes event block(s) 3059_6. Actions/conditions:
//        3059_6: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 5 more actions.
void Frames::event_func_2684()
{
    // event 3059_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 5 more actions
    bool or_result_3059_6 = false;
    bool or_temp_result_3059_6_0 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3059_6_0_end;
        upperlevelcheck_206_instances.clear_selection();
        for (ObjectIterator it(upperlevelcheck_206_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!upperlevelcheck_206_instances.has_selection()) goto or_event_3059_6_0_end;
        or_result_3059_6 = true;
        or_temp_result_3059_6_0 = true;
    }
    or_event_3059_6_0_end: ;
    upperlevelcheck_206_instances.clear_saved_selection();
    if (or_temp_result_3059_6_0) {
        upperlevelcheck_206_instances.save_selection();
    }
    // event 3059_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 5 more actions
    bool or_temp_result_3059_6_1 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3059_6_1_end;
        upperlevelcheck_206_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(upperlevelcheck_206_instances, qualifier_19)) goto or_event_3059_6_1_end;
        or_result_3059_6 = true;
        or_temp_result_3059_6_1 = true;
    }
    or_event_3059_6_1_end: ;
    qualifier_19.clear_saved_selection();
    if (or_temp_result_3059_6_1) {
        qualifier_19.save_selection();
        upperlevelcheck_206_instances.save_selection();
    }
    // event 3059_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 5 more actions
    bool or_temp_result_3059_6_2 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3059_6_2_end;
        upperlevelcheck_206_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(upperlevelcheck_206_instances, qualifier_8)) goto or_event_3059_6_2_end;
        or_result_3059_6 = true;
        or_temp_result_3059_6_2 = true;
    }
    or_event_3059_6_2_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_3059_6_2) {
        qualifier_8.save_selection();
        upperlevelcheck_206_instances.save_selection();
    }
    // event 3059_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 5 more actions
    bool or_temp_result_3059_6_3 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3059_6_3_end;
        upperlevelcheck_206_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(upperlevelcheck_206_instances, qualifier_22)) goto or_event_3059_6_3_end;
        or_result_3059_6 = true;
        or_temp_result_3059_6_3 = true;
        or_event_3059_6_3_end: ;
        qualifier_22.clear_saved_selection();
        if (or_temp_result_3059_6_3) {
            qualifier_22.save_selection();
            upperlevelcheck_206_instances.save_selection();
        }
        if (!or_result_3059_6) goto or_final_or_event_3059_6_3_end;
        qualifier_8.empty_selection();
        upperlevelcheck_206_instances.empty_selection();
        qualifier_19.empty_selection();
        qualifier_22.empty_selection();
        if (or_temp_result_3059_6_3) {
            qualifier_22.restore_selection();
        }
        if (or_temp_result_3059_6_2) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_3059_6_0 || or_temp_result_3059_6_1 || or_temp_result_3059_6_2 || or_temp_result_3059_6_3) {
            upperlevelcheck_206_instances.restore_selection();
        }
        if (or_temp_result_3059_6_1) {
            qualifier_19.restore_selection();
        }
            loop_digabove_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    or_final_or_event_3059_6_3_end: ;
}
// Function purpose: generated callback event_func_2685 processes event block(s) 3060_6. Actions/conditions:
//        3060_6: sets Digging to 100; sets the object's animation to 12; sets the selected object's direction to
//        get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); plus 1 more
//        actions.
void Frames::event_func_2685()
{
    // event 3060_6 : sets Digging to 100; sets the object's animation to 12; sets the selected object's direction to get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3060_6_end;
        if (((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background()) goto event_3060_6_end;
        upperlevelcheck_206_instances.clear_selection();
        if (!check_not_overlap(upperlevelcheck_206_instances, qualifier_19)) goto event_3060_6_end;
        if (!check_not_overlap(upperlevelcheck_206_instances, qualifier_8)) goto event_3060_6_end;
        if (!check_not_overlap(upperlevelcheck_206_instances, qualifier_22)) goto event_3060_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3060_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_3060_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 100);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(cursor_178_instances))->x + 8, ((Active*)get_instance(cursor_178_instances))->y + 8));
        }
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_2_155));
        {
            loop_create_activity_box_running = true;
            int times = int(1);
            loop_create_activity_box_index = 0;
            while (loop_create_activity_box_index < times) {
                loop_create_activity_box_6();
                if (!loop_create_activity_box_running) break;
                loop_create_activity_box_index++;
            }
        }
    }
    event_3060_6_end: ;
}
void Frames::loop_digabove_check_6()
{
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
}
// Function purpose: generated callback event_func_2686 processes event block(s) 3363_6. Actions/conditions:
//        3363_6: sets FoundSlot to loop_loot_empty_inv_index+1; sets a game or interface text string; plays a sound
//        or music track.
void Frames::event_func_2686()
{
    // event 3363_6 : sets FoundSlot to loop_loot_empty_inv_index+1; sets a game or interface text string; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3363_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_911+number_to_string(loop_loot_empty_inv_index+1))) == (empty_string))) goto event_3363_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, loop_loot_empty_inv_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)), empty_string);
            loop_loot_empty_inv_running = false;
    
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_3363_6_end: ;
}
void Frames::loop_loot_empty_inv_6()
{
    event_func_2686();
}
// Function purpose: generated callback event_func_2687 processes event block(s) 3366_6. Actions/conditions:
//        3366_6: changes a stored game value.
void Frames::event_func_2687()
{
    // event 3366_6 : changes a stored game value
    bool or_result_3366_6 = false;
    bool or_temp_result_3366_6_0 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3366_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(661, str_returnedid_1761)) == (1))) goto or_event_3366_6_0_end;
        or_result_3366_6 = true;
        or_temp_result_3366_6_0 = true;
    }
    or_event_3366_6_0_end: ;
    // event 3366_6 : changes a stored game value
    bool or_temp_result_3366_6_1 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3366_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(661, str_returnedid_1761)) == (6))) goto or_event_3366_6_1_end;
        or_result_3366_6 = true;
        or_temp_result_3366_6_1 = true;
    }
    or_event_3366_6_1_end: ;
    // event 3366_6 : changes a stored game value
    bool or_temp_result_3366_6_2 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3366_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(661, str_returnedid_1761)) == (7))) goto or_event_3366_6_2_end;
        or_result_3366_6 = true;
        or_temp_result_3366_6_2 = true;
    }
    or_event_3366_6_2_end: ;
    // event 3366_6 : changes a stored game value
    bool or_temp_result_3366_6_3 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3366_6_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(661, str_returnedid_1761)) == (0))) goto or_event_3366_6_3_end;
        or_result_3366_6 = true;
        or_temp_result_3366_6_3 = true;
    }
    or_event_3366_6_3_end: ;
    // event 3366_6 : changes a stored game value
    bool or_temp_result_3366_6_4 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3366_6_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(661, str_returnedid_1761)) == (43))) goto or_event_3366_6_4_end;
        or_result_3366_6 = true;
        or_temp_result_3366_6_4 = true;
        or_event_3366_6_4_end: ;
        if (!or_result_3366_6) goto or_final_or_event_3366_6_4_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->sub_value(str_stolenkeys_606+number_to_string(((AssociateArray*)*it)->get_value(12, str_lootid_452)), 1);
        }
    }
    or_final_or_event_3366_6_4_end: ;
}
// Function purpose: generated callback event_func_2688 processes event block(s) 3367_6. Actions/conditions:
//        3367_6: sets a stored numeric value.
void Frames::event_func_2688()
{
    // event 3367_6 : sets a stored numeric value
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3367_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_stolenkeys_606+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) < (0))) goto event_3367_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_stolenkeys_606+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)), 0);
    }
    event_3367_6_end: ;
}
void Frames::loop_check_return_loot_6()
{
    event_func_2687();
    event_func_2688();
}
// Function purpose: generated callback event_func_2689 processes event block(s) 3362_6. Actions/conditions:
//        3362_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2689()
{
    // event 3362_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3362_6_end;
        {
            loop_loot_empty_inv_running = true;
            int times = int(6);
            loop_loot_empty_inv_index = 0;
            while (loop_loot_empty_inv_index < times) {
                loop_loot_empty_inv_6();
                if (!loop_loot_empty_inv_running) break;
                loop_loot_empty_inv_index++;
            }
        }
    }
    event_3362_6_end: ;
}
// Function purpose: generated callback event_func_2690 processes event block(s) 3365_6. Actions/conditions:
//        3365_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions.
void Frames::event_func_2690()
{
    // event 3365_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3365_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3365_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3365_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_loot_448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3365_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3365_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3365_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_loot_448);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(661, str_returnedid_1761, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))+str_inv_911+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        {
            loop_check_return_loot_running = true;
            int times = int(1);
            loop_check_return_loot_index = 0;
            while (loop_check_return_loot_index < times) {
                loop_check_return_loot_6();
                if (!loop_check_return_loot_running) break;
                loop_check_return_loot_index++;
            }
        }
    }
    event_3365_6_end: ;
}
void Frames::loop_find_open_loot_slot_6()
{
    event_func_2689();
    event_func_1381();
    event_func_2690();
}
// Function purpose: generated callback event_func_2691 processes event block(s) 4472_6. Actions/conditions:
//        4472_6: sets the selected object's layer to 7-1; sets the selected object's horizontal position to
//        playerBase->get_x(); sets the selected object's vertical position to playerBase->get_y(); plus 5 more
//        actions.
void Frames::event_func_2691()
{
    // event 4472_6 : sets the selected object's layer to 7-1; sets the selected object's horizontal position to playerBase->get_x(); sets the selected object's vertical position to playerBase->get_y(); plus 5 more actions
    {
        ((Active*)get_instance(los_198_instances))->set_layer(7-1);
        ((Active*)get_instance(los_198_instances))->set_x(((Active*)get_instance(playerBase_instances))->get_x());
        ((Active*)get_instance(los_198_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y());
        ((Active*)get_instance(los_198_instances))->set_x_scale(get_distance_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(662, str_charx_1762), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(663, str_chary_1763)));
        ((Active*)get_instance(los_198_instances))->set_angle(get_angle_int(((Active*)get_instance(playerBase_instances))->get_x(), ((Active*)get_instance(playerBase_instances))->get_y(), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(662, str_charx_1762), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(663, str_chary_1763)), 0);
    }
    event_4472_6_end: ;
}
// Function purpose: generated callback event_func_2692 processes event block(s) 4473_6. Group(s): Followers.
//        Actions/conditions: 4473_6: sets CanSee to 0.
void Frames::event_func_2692()
{
    // event 4473_6 : sets CanSee to 0
    {
        // group: Followers
        if (!(((Active*)get_instance(los_198_instances))->overlaps_background())) goto event_4473_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 0);
    }
    event_4473_6_end: ;
}
void Frames::loop_follow_los_6()
{
    event_func_2691();
    event_func_2692();
}
// Function purpose: generated callback event_func_2693 processes event block(s) 4462_6. Actions/conditions:
//        4462_6: sets the selected object's numeric value to 30.
void Frames::event_func_2693()
{
    // event 4462_6 : sets the selected object's numeric value to 30
    {
        buddiesText_instances.clear_selection();
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->alterables->values.set(0, 30);
        }
    }
    event_4462_6_end: ;
}
// Function purpose: generated callback event_func_2694 processes event block(s) 4463_6. Group(s): hud_shakes.
//        Actions/conditions: 4463_6: sets the target animation type; updates game state with selected
//        object->set_animation_speed(2).
void Frames::event_func_2694()
{
    // event 4463_6 : sets the target animation type; updates game state with selected object->set_animation_speed(2)
    {
        // group: hud_shakes
        if (!((((TextBlitter*)get_instance(buddiesText_instances, default_blitter_instance))->anim_type) == (0))) goto event_4463_6_end;
        buddiesText_instances.clear_selection();
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_animation_type(2);
            ((TextBlitter*)*it)->set_animation_speed(2);
        }
    }
    event_4463_6_end: ;
}
void Frames::loop_hudshake_follow_6()
{
    event_func_2693();
    event_func_2694();
}
// Function purpose: generated callback event_func_2695 processes event block(s) 4470_6. Group(s): Followers.
//        Actions/conditions: 4470_6: reads an object position for this event; reads an object position for this
//        event; reads an object position for this event; plus 5 more actions.
void Frames::event_func_2695()
{
    // event 4470_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        // group: Followers
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4470_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_4470_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(inmateBase_instances));
            if (obj2 == NULL) goto compare_4470_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (get_distance(x1, y1, x2, y2) <= 120) goto event_4470_6_end;
        }
        compare_4470_6_0_end: ;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, 0);
    }
    event_4470_6_end: ;
}
// Function purpose: generated callback event_func_2696 processes event block(s) 4471_6. Group(s): Followers.
//        Actions/conditions: 4471_6: checks game state CanSee; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_2696()
{
    // event 4471_6 : checks game state CanSee; this handler gates a game event without a direct value/object action
    {
        // group: Followers
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_4471_6_end;
        {
            loop_follow_los_running = true;
            int times = int(1);
            loop_follow_los_index = 0;
            while (loop_follow_los_index < times) {
                loop_follow_los_6();
                if (!loop_follow_los_running) break;
                loop_follow_los_index++;
            }
        }
    }
    event_4471_6_end: ;
}
// Function purpose: generated callback event_func_2697 processes event block(s) 4474_6. Group(s): Followers.
//        Actions/conditions: 4474_6: plays a sound or music track.
void Frames::event_func_2697()
{
    // event 4474_6 : plays a sound or music track
    {
        // group: Followers
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (0))) goto event_4474_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_4474_6_end: ;
}
// Function purpose: generated callback event_func_2698 processes event block(s) 4475_6. Group(s): Followers.
//        Actions/conditions: 4475_6: sets the selected object's numeric value to 0; sets the selected object's
//        numeric value to -1; sets the selected object's numeric value to playerBase->get_x(); plus 5 more actions.
void Frames::event_func_2698()
{
    // event 4475_6 : sets the selected object's numeric value to 0; sets the selected object's numeric value to -1; sets the selected object's numeric value to playerBase->get_x(); plus 5 more actions
    {
        // group: Followers
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_4475_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4475_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(15, -1);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(playerBase_instances))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(playerBase_instances))->get_y());
        }
        {
            loop_hudshake_follow_running = true;
            int times = int(1);
            loop_hudshake_follow_index = 0;
            while (loop_hudshake_follow_index < times) {
                loop_hudshake_follow_6();
                if (!loop_hudshake_follow_running) break;
                loop_hudshake_follow_index++;
            }
        }
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_4475_6_end: ;
}
// Function purpose: generated callback event_func_2699 processes event block(s) 4476_6. Group(s): Followers.
//        Actions/conditions: 4476_6: sets the object's animation to 0.
void Frames::event_func_2699()
{
    // event 4476_6 : sets the object's animation to 0
    {
        // group: Followers
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_4476_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(0)) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_4476_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_4476_6_end: ;
}
// Function purpose: generated callback event_func_2700 processes event block(s) 4477_6. Group(s): Followers.
//        Actions/conditions: 4477_6: activates the Follow event group; sets a game or interface text string.
void Frames::event_func_2700()
{
    // event 4477_6 : activates the Follow event group; sets a game or interface text string
    {
        // group: Followers
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_4477_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(379, str_lastnotice_1176)) <= (0))) goto event_4477_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4477_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_follow_1764);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)+str__1765+lowercase_string(((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1))));
        {
            loop_notice_running = true;
            int times = int(1);
            loop_notice_index = 0;
            while (loop_notice_index < times) {
                loop_notice_6();
                if (!loop_notice_running) break;
                loop_notice_index++;
            }
        }
    }
    event_4477_6_end: ;
}
void Frames::loop_follow_checks_6()
{
    event_func_2695();
    event_func_2696();
    event_func_2697();
    event_func_2698();
    event_func_2699();
    event_func_2700();
}
// Function purpose: generated callback event_func_2701 processes event block(s) 1191_6. Actions/conditions:
//        1191_6: sets the selected object's numeric value to -1; sets SpeakID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets
//        SpeakCol to 0; plus 5 more actions.
void Frames::event_func_2701()
{
    // event 1191_6 : sets the selected object's numeric value to -1; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1191_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(107, str_inmatesees_664)) >= (1))) goto event_1191_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1191_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_chair_push_1230);
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
    event_1191_6_end: ;
}
void Frames::loop_inmate_deskrob_6()
{
    event_func_2701();
}
// Function purpose: generated callback event_func_2702 processes event block(s) 3203_6. Actions/conditions:
//        3203_6: sets DTAFcheck to 0.
void Frames::event_func_2702()
{
    // event 3203_6 : sets DTAFcheck to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3203_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(664, str_dtafcheck_1766, 0);
    }
    event_3203_6_end: ;
}
// Function purpose: generated callback event_func_2703 processes event block(s) 3204_6. Actions/conditions:
//        3204_6: increments DTAFcheck by 1.
void Frames::event_func_2703()
{
    // event 3204_6 : increments DTAFcheck by 1
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3204_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_left_465))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3204_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(664, str_dtafcheck_1766, 1);
    }
    event_3204_6_end: ;
}
