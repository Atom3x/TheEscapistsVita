#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_3364 processes event block(s) 940_6. Actions/conditions:
//        940_6: checks scene is active; the event-specific game state condition is met; skips if the event-specific
//        game state condition is met; game state Carrying; this ha.
void Frames::event_func_3364()
{
    // event 940_6 : checks scene is active; the event-specific game state condition is met; skips if the event-specific game state condition is met; game state Carrying; this ha
    {
        if (!(group_code_1)) goto event_940_6_end;
        if (!(layers[4-1].visible)) goto event_940_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_940_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_940_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_940_6_end;
        {
            loop_hide_vent_layer_running = true;
            int times = int(1);
            loop_hide_vent_layer_index = 0;
            while (loop_hide_vent_layer_index < times) {
                loop_hide_vent_layer_6();
                if (!loop_hide_vent_layer_running) break;
                loop_hide_vent_layer_index++;
            }
        }
    }
    event_940_6_end: ;
}
// Function purpose: generated callback event_func_3365 processes event block(s) 945_6. Actions/conditions:
//        945_6: saves the current object selection; sets the object's animation to 0.
void Frames::event_func_3365()
{
    // event 945_6 : saves the current object selection; sets the object's animation to 0
    bool or_result_945_6 = false;
    bool or_temp_result_945_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_945_6_0_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(12))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto or_event_945_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(153, str_digging_726)) == (0))) goto or_event_945_6_0_end;
        or_result_945_6 = true;
        or_temp_result_945_6_0 = true;
    }
    or_event_945_6_0_end: ;
    qualifier_2.clear_saved_selection();
    if (or_temp_result_945_6_0) {
        qualifier_2.save_selection();
    }
    // event 945_6 : saves the current object selection; sets the object's animation to 0
    bool or_temp_result_945_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_945_6_1_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(14))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto or_event_945_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(154, str_cutting_727)) == (0))) goto or_event_945_6_1_end;
        or_result_945_6 = true;
        or_temp_result_945_6_1 = true;
    }
    or_event_945_6_1_end: ;
    if (or_temp_result_945_6_1) {
        qualifier_2.save_selection();
    }
    // event 945_6 : saves the current object selection; sets the object's animation to 0
    bool or_temp_result_945_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_945_6_2_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(15))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto or_event_945_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(155, str_chipping_728)) == (0))) goto or_event_945_6_2_end;
        or_result_945_6 = true;
        or_temp_result_945_6_2 = true;
    }
    or_event_945_6_2_end: ;
    if (or_temp_result_945_6_2) {
        qualifier_2.save_selection();
    }
    // event 945_6 : saves the current object selection; sets the object's animation to 0
    bool or_temp_result_945_6_3 = false;
    {
        if (!(group_code_1)) goto or_event_945_6_3_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(13))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto or_event_945_6_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(359, str_cleaning_23)) == (0))) goto or_event_945_6_3_end;
        or_result_945_6 = true;
        or_temp_result_945_6_3 = true;
    }
    or_event_945_6_3_end: ;
    if (or_temp_result_945_6_3) {
        qualifier_2.save_selection();
    }
    // event 945_6 : saves the current object selection; sets the object's animation to 0
    bool or_temp_result_945_6_4 = false;
    {
        if (!(group_code_1)) goto or_event_945_6_4_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(16))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto or_event_945_6_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(433, str_weeding_1276)) == (0))) goto or_event_945_6_4_end;
        or_result_945_6 = true;
        or_temp_result_945_6_4 = true;
        or_event_945_6_4_end: ;
        if (or_temp_result_945_6_4) {
            qualifier_2.save_selection();
        }
        if (!or_result_945_6) goto or_final_or_event_945_6_4_end;
        qualifier_2.empty_selection();
        if (or_temp_result_945_6_0 || or_temp_result_945_6_1 || or_temp_result_945_6_2 || or_temp_result_945_6_3 || or_temp_result_945_6_4) {
            qualifier_2.restore_selection();
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    or_final_or_event_945_6_4_end: ;
}
// Function purpose: generated callback event_func_3366 processes event block(s) 946_6. Actions/conditions:
//        946_6: sets the selected object's layer to ((Active*)get_qualifier(qualifier_2, it.current_index,
//        default_active_instance))->layer->index+1-1; sets the object position in the world; sets the selected
//        object's direction to ((Active*)get_qualifier(qualifier_2, it.current_index,
//        default_active_instance))->get_direction(); plus 5 more actions.
void Frames::event_func_3366()
{
    // event 946_6 : sets the selected object's layer to ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->layer->index+1-1; sets the object position in the world; sets the selected object's direction to ((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_direction(); plus 5 more actions
    {
        if (!(group_code_1)) goto event_946_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_946_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->layer->index+1-1);
        }
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_qualifier(qualifier_2, it.current_index));
            if (parent == NULL) goto pos_end_946_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_946_6_0: ;
        }
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->force_animation(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->force_frame(((Active*)get_qualifier(qualifier_2, it.current_index, default_active_instance))->get_frame());
        }
    }
    event_946_6_end: ;
}
// Function purpose: generated callback event_func_3367 processes event block(s) 953_6. Actions/conditions:
//        953_6: saves the current object selection; saves the current object selection.
void Frames::event_func_3367()
{
    // event 953_6 : saves the current object selection; saves the current object selection
    bool or_result_953_6 = false;
    bool or_temp_result_953_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_953_6_0_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_953_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_953_6_0_end;
        or_result_953_6 = true;
        or_temp_result_953_6_0 = true;
    }
    or_event_953_6_0_end: ;
    playerBase_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_953_6_0) {
        playerBase_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 953_6 : saves the current object selection; saves the current object selection
    bool or_temp_result_953_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_953_6_1_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (width-24))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_953_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_953_6_1_end;
        or_result_953_6 = true;
        or_temp_result_953_6_1 = true;
    }
    or_event_953_6_1_end: ;
    if (or_temp_result_953_6_1) {
        playerBase_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 953_6 : saves the current object selection; saves the current object selection
    bool or_temp_result_953_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_953_6_2_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) <= (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_953_6_2_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_953_6_2_end;
        or_result_953_6 = true;
        or_temp_result_953_6_2 = true;
    }
    or_event_953_6_2_end: ;
    if (or_temp_result_953_6_2) {
        playerBase_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 953_6 : saves the current object selection; saves the current object selection
    bool or_temp_result_953_6_3 = false;
    {
        if (!(group_code_1)) goto or_event_953_6_3_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (height-16))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_953_6_3_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_953_6_3_end;
        or_result_953_6 = true;
        or_temp_result_953_6_3 = true;
        or_event_953_6_3_end: ;
        if (or_temp_result_953_6_3) {
            playerBase_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_953_6) goto or_final_or_event_953_6_3_end;
        dialogPanel_instances.empty_selection();
        playerBase_instances.empty_selection();
        if (or_temp_result_953_6_0 || or_temp_result_953_6_1 || or_temp_result_953_6_2 || or_temp_result_953_6_3) {
            playerBase_instances.restore_selection();
        }
        if (or_temp_result_953_6_0 || or_temp_result_953_6_1 || or_temp_result_953_6_2 || or_temp_result_953_6_3) {
            dialogPanel_instances.restore_selection();
        }
        {
            loop_end_level_running = true;
            int times = int(1);
            loop_end_level_index = 0;
            while (loop_end_level_index < times) {
                loop_end_level_6();
                if (!loop_end_level_running) break;
                loop_end_level_index++;
            }
        }
    }
    or_final_or_event_953_6_3_end: ;
}
// Function purpose: generated callback event_func_3368 processes event block(s) 954_6. Actions/conditions:
//        954_6: disables flag 9021 (combat-cursor mode toggle state) on the selected object.
void Frames::event_func_3368()
{
    // event 954_6 : disables flag 9021 (combat-cursor mode toggle state) on the selected object
    {
        if (!(group_code_1)) goto event_954_6_end;
        if (!(((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.is_on(9021))) goto event_954_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button3)))) goto event_954_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.disable(9021);
    }
    event_954_6_end: ;
}
// Function purpose: generated callback event_func_3369 processes event block(s) 955_6. Actions/conditions:
//        955_6: sets the object's animation to 6; enables flag 9021 (combat-cursor mode toggle state) on the selected
//        object; sets Cursor to Attack.
void Frames::event_func_3369()
{
    // event 955_6 : sets the object's animation to 6; enables flag 9021 (combat-cursor mode toggle state) on the selected object; sets Cursor to Attack
    {
        if (!(group_code_1)) goto event_955_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button3))))) goto event_955_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(49, str_cursor_517)) != (str_attack_1933))) goto event_955_6_end;
        if (!(((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.is_off(9021))) goto event_955_6_end;
        ((Active*)get_instance(mouse_9_instances))->force_animation(6);
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.enable(9021);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(49, str_cursor_517, str_attack_1933);
        {
            loop_disableselected_running = true;
            int times = int(1);
            loop_disableselected_index = 0;
            while (loop_disableselected_index < times) {
                loop_disableselected_6();
                if (!loop_disableselected_running) break;
                loop_disableselected_index++;
            }
        }
    }
    event_955_6_end: ;
}
// Function purpose: generated callback event_func_3370 processes event block(s) 956_6. Actions/conditions:
//        956_6: sets Cursor to Normal; sets the object's animation to 0; enables flag 9021 (combat-cursor mode toggle
//        state) on the selected object; plus 5 more actions.
void Frames::event_func_3370()
{
    // event 956_6 : sets Cursor to Normal; sets the object's animation to 0; enables flag 9021 (combat-cursor mode toggle state) on the selected object; plus 5 more actions
    {
        if (!(group_code_1)) goto event_956_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button3))))) goto event_956_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(49, str_cursor_517)) != (str_normal_1934))) goto event_956_6_end;
        if (!(((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.is_off(9021))) goto event_956_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(49, str_cursor_517, str_normal_1934);
        ((Active*)get_instance(mouse_9_instances))->force_animation(0);
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.enable(9021);
        ((Active*)get_instance(target_177_instances))->set_visible(false);
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
        {
            loop_disableselected_running = true;
            int times = int(1);
            loop_disableselected_index = 0;
            while (loop_disableselected_index < times) {
                loop_disableselected_6();
                if (!loop_disableselected_running) break;
                loop_disableselected_index++;
            }
        }
    }
    event_956_6_end: ;
}
// Function purpose: generated callback event_func_3371 processes event block(s) 957_6. Actions/conditions:
//        957_6: checks scene is active; the event-specific game state condition is met; game state RoofFall; game
//        state Rope; this handler gates a game event without a direc.
void Frames::event_func_3371()
{
    // event 957_6 : checks scene is active; the event-specific game state condition is met; game state RoofFall; game state Rope; this handler gates a game event without a direc
    {
        if (!(group_code_1)) goto event_957_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_957_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(294, str_rooffall_973), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 5))+str__96, 0)) != (-1))) goto event_957_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(15, str_rope_463)) == (0))) goto event_957_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) == (empty_string))) goto event_957_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(332, str_grappling_1120)) == (0))) goto event_957_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) == (empty_string))) goto event_957_6_end;
        {
            loop_roof_fall_running = true;
            int times = int(1);
            loop_roof_fall_index = 0;
            while (loop_roof_fall_index < times) {
                loop_roof_fall_6();
                if (!loop_roof_fall_running) break;
                loop_roof_fall_index++;
            }
        }
    }
    event_957_6_end: ;
}
// Function purpose: generated callback event_func_3372 processes event block(s) 959_6. Actions/conditions:
//        959_6: updates game state with planner->add_agent(selected object); }; stops the object's movement.
void Frames::event_func_3372()
{
    // event 959_6 : updates game state with planner->add_agent(selected object); }; stops the object's movement
    {
        if (!(group_code_1)) goto event_959_6_end;
        if (!group_check_group_code_pathfinding_1_0) goto event_959_6_end;
        group_check_group_code_pathfinding_1_0 = false;
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindinginmates_191_instances));
            inmateBase_instances.clear_selection();
            for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
    planner->add_agent(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            serviceNpc_instances.clear_selection();
            for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
    planner->add_agent(((Active*)*it));        }
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            guardBase_instances.clear_selection();
            for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
    planner->add_agent(((Active*)*it));        }
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_959_6_end: ;
}
// Function purpose: generated callback event_func_3373 processes event block(s) 960_6. Actions/conditions:
//        960_6: stops the object's movement.
void Frames::event_func_3373()
{
    // event 960_6 : stops the object's movement
    {
        if (!(group_code_1)) goto event_960_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_960_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (((Active*)(*it))->get_movement()->is_stopped()) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_960_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_960_6_end: ;
}
// Function purpose: generated callback event_func_3374 processes event block(s) 961_6. Actions/conditions:
//        961_6: disables flag 250 (NPC pathfinding or movement state) on the selected object; stops the object's
//        movement.
void Frames::event_func_3374()
{
    // event 961_6 : disables flag 250 (NPC pathfinding or movement state) on the selected object; stops the object's movement
    {
        if (!(group_code_1)) goto event_961_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(250))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(251))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) > (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_961_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_961_6_end: ;
}
// Function purpose: generated callback event_func_3375 processes event block(s) 962_6. Actions/conditions:
//        962_6: disables flag 250 (NPC pathfinding or movement state) on the selected object; stops the object's
//        movement.
void Frames::event_func_3375()
{
    // event 962_6 : disables flag 250 (NPC pathfinding or movement state) on the selected object; stops the object's movement
    {
        if (!(group_code_1)) goto event_962_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(251))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) > (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_962_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_962_6_end: ;
}
// Function purpose: generated callback event_func_3376 processes event block(s) 963_6. Actions/conditions:
//        963_6: updates game state with selected object->get_movement()->set_speed(8+(selected
//        object->alterables->values.get(9)/MathHelper(; chooses a random value.
void Frames::event_func_3376()
{
    VITA_LEGACY_EVENT();
    // event 963_6 : updates game state with selected object->get_movement()->set_speed(8+(selected object->alterables->values.get(9)/MathHelper(; chooses a random value
    {
        if (!(group_code_1)) goto event_963_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (((Active*)(*it))->get_movement()->is_stopped()) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(251))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_963_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_963_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(8+(((Active*)*it)->alterables->values.get(9)/MathHelper()/15));
            ((Active*)*it)->get_movement()->set_speed(11+randrange_event(5));
        }
    }
    event_963_6_end: ;
}
// Function purpose: generated callback event_func_3377 processes event block(s) 964_6. Actions/conditions:
//        964_6: sets the object position in the world; sets the object's animation to 0; sets the selected object's
//        numeric value to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(25).
void Frames::event_func_3377()
{
    // event 964_6 : sets the object position in the world; sets the object's animation to 0; sets the selected object's numeric value to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_code_1)) goto event_964_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_964_6_end;
        {
            FrameObject * parent = ((Active*)get_single(guardBase_instances));
            if (parent == NULL) goto pos_end_964_6_0;
            ((Active*)get_instance(lookguardflag60_442_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_964_6_0: ;
        }
        ((Active*)get_instance(lookguardflag60_442_instances))->force_animation(0);
        ((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.set(25, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
    }
    event_964_6_end: ;
}
// Function purpose: generated callback event_func_3378 processes event block(s) 965_6. Actions/conditions:
//        965_6: sets the object position in the world; sets the object's animation to 0; sets the selected object's
//        numeric value to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25).
void Frames::event_func_3378()
{
    // event 965_6 : sets the object position in the world; sets the object's animation to 0; sets the selected object's numeric value to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_code_1)) goto event_965_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_965_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_965_6_0;
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_965_6_0: ;
        }
        ((Active*)get_instance(lookinmateflag60_394_instances))->force_animation(0);
        ((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.set(25, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
    }
    event_965_6_end: ;
}
// Function purpose: generated callback event_func_3379 processes event block(s) 966_6. Actions/conditions:
//        966_6: disables flag 60 (guard sight or target-tracking state) on the selected object.
void Frames::event_func_3379()
{
    // event 966_6 : disables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1)) goto event_966_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(60))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_966_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(60);
        }
    }
    event_966_6_end: ;
}
// Function purpose: generated callback event_func_3380 processes event block(s) 967_6. Actions/conditions:
//        967_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3380()
{
    // event 967_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_967_6_end;
        every_967_6 += manager.dt;
        if (every_967_6 < 1.0) goto event_967_6_end;
        every_967_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_967_6_end;
        {
            loop_check_g_outfits_running = true;
            int times = int(((Active*)get_qualifier(qualifier_14, default_active_instance))->alterables->values.get(25));
            loop_check_g_outfits_index = 0;
            while (loop_check_g_outfits_index < times) {
                loop_check_g_outfits_6();
                if (!loop_check_g_outfits_running) break;
                loop_check_g_outfits_index++;
            }
        }
        {
            loop_check_g_weap_running = true;
            int times = int(guardBase_instances.size());
            loop_check_g_weap_index = 0;
            while (loop_check_g_weap_index < times) {
                loop_check_g_weap_6();
                if (!loop_check_g_weap_running) break;
                loop_check_g_weap_index++;
            }
        }
    }
    event_967_6_end: ;
}
// Function purpose: generated callback event_func_3381 processes event block(s) 988_6. Actions/conditions:
//        988_6: stops the object's movement.
void Frames::event_func_3381()
{
    // event 988_6 : stops the object's movement
    {
        if (!(group_code_1)) goto event_988_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->at_destination())) { it.deselect(); continue; }
            if (((Active*)(*it))->get_movement()->is_stopped()) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_988_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_988_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_988_6_end: ;
}
// Function purpose: generated callback event_func_3382 processes event block(s) 989_6. Actions/conditions:
//        989_6: orients the pathfinding direction; }; updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_3382()
{
    // event 989_6 : orients the pathfinding direction; }; updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_989_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->not_at_destination())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_989_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_989_6_end;
        {
            for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
    PathPlanner::orient(((Active*)*it));        }
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_989_6_end: ;
}
// Function purpose: generated callback event_func_3383 processes event block(s) 990_6. Actions/conditions:
//        990_6: orients the pathfinding direction; }; updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_3383()
{
    // event 990_6 : orients the pathfinding direction; }; updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_990_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->not_at_destination())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_990_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_990_6_end;
        {
            for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
    PathPlanner::orient(((Active*)*it));        }
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_990_6_end: ;
}
// Function purpose: generated callback event_func_3384 processes event block(s) 991_6. Actions/conditions:
//        991_6: orients the pathfinding direction; }; updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_3384()
{
    // event 991_6 : orients the pathfinding direction; }; updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_991_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->not_at_destination())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(251))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_991_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_991_6_end;
        {
            for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
    PathPlanner::orient(((Active*)*it));        }
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_991_6_end: ;
}
// Function purpose: generated callback event_func_3385 processes event block(s) 992_6. Actions/conditions:
//        992_6: updates game state with PathPlanner::set_destination(selected object, selected
//        object->alterables->values.get(23), selected ; updates game state with PathPlanner::plan_path(selected
//        object); }; updates a value on the target object; plus 5 more actions.
void Frames::event_func_3385()
{
    // event 992_6 : updates game state with PathPlanner::set_destination(selected object, selected object->alterables->values.get(23), selected ; updates game state with PathPlanner::plan_path(selected object); }; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1)) goto event_992_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_992_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_992_6_end;
        {
            for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
    PathPlanner::set_destination(((Active*)*it), ((Active*)*it)->alterables->values.get(23), ((Active*)*it)->alterables->values.get(24));        }
        }
        {
            for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
    PathPlanner::plan_path(((Active*)*it));        }
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, number_to_string(((Active*)*it)->alterables->values.get(23)/MathHelper()/16)+str_x_437+number_to_string(((Active*)*it)->alterables->values.get(24)/MathHelper()/16));
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
    }
    event_992_6_end: ;
}
// Function purpose: generated callback event_func_3386 processes event block(s) 993_6. Actions/conditions:
//        993_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates a
//        game event without a direct value/object action.
void Frames::event_func_3386()
{
    // event 993_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_993_6_end;
        if (frame_time < 5.0) goto event_993_6_end;
        if (not_always_993_6 > loop_count) {
            not_always_993_6 = loop_count + 2;
            goto event_993_6_end;
        }
        not_always_993_6 = loop_count + 2;
        if (!group_code_pathfinding_guards_policing_1) {
            group_code_pathfinding_guards_policing_1 = true;
            group_check_group_code_pathfinding_guards_policing_1_0 = true;
        }
    }
    event_993_6_end: ;
}
// Function purpose: generated callback event_func_3387 processes event block(s) 994_6. Actions/conditions:
//        994_6: sets GuardLook to 0.
void Frames::event_func_3387()
{
    // event 994_6 : sets GuardLook to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_994_6_end;
        if (!group_check_group_code_pathfinding_guards_policing_1_0) goto event_994_6_end;
        group_check_group_code_pathfinding_guards_policing_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(1, str_guardlook_434, 0);
    }
    event_994_6_end: ;
}
// Function purpose: generated callback event_func_3388 processes event block(s) 995_6. Actions/conditions:
//        995_6: increments GuardLook by 1.
void Frames::event_func_3388()
{
    // event 995_6 : increments GuardLook by 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_995_6_end;
        every_995_6 += manager.dt;
        if (every_995_6 < 0.1) goto event_995_6_end;
        every_995_6 -= 0.1;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_995_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(1, str_guardlook_434, 1);
    }
    event_995_6_end: ;
}
// Function purpose: generated callback event_func_3389 processes event block(s) 996_6. Actions/conditions:
//        996_6: sets GuardLook to 1.
void Frames::event_func_3389()
{
    // event 996_6 : sets GuardLook to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_996_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)) > (guardBase_instances.size()))) goto event_996_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_996_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(1, str_guardlook_434, 1);
    }
    event_996_6_end: ;
}
// Function purpose: generated callback event_func_3390 processes event block(s) 997_6. Actions/conditions:
//        997_6: sets the object position in the world; sets the selected object's numeric value to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(20); sets
//        the selected object's numeric value to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(2); plus 7 more actions.
void Frames::event_func_3390()
{
    // event 997_6 : sets the object position in the world; sets the selected object's numeric value to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(20); sets the selected object's numeric value to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(2); plus 7 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_997_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_997_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_997_6_end;
        {
            FrameObject * parent = ((Active*)get_single(guardBase_instances));
            if (parent == NULL) goto pos_end_997_6_0;
            ((Active*)get_instance(guardscan_219_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_997_6_0: ;
        }
        ((Active*)get_instance(guardscan_219_instances))->alterables->values.set(20, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(20));
        ((Active*)get_instance(guardscan_219_instances))->alterables->values.set(2, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)get_instance(guardscan_219_instances))->alterables->values.set(7, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)get_instance(guardscan_219_instances))->alterables->values.set(18, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(18));
        ((Active*)get_instance(guardscan_219_instances))->alterables->values.set(22, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(22));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(757, str_f60_1935, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->flags.get(60));
    }
    event_997_6_end: ;
}
// Function purpose: generated callback event_func_3391 processes event block(s) 998_6. Actions/conditions:
//        998_6: sets Culprit to 0; sets SpeakID to 0; sets SpeakCol to 0; plus 1 more actions.
void Frames::event_func_3391()
{
    // event 998_6 : sets Culprit to 0; sets SpeakID to 0; sets SpeakCol to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_998_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_998_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(665, str_culprit_1767, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((Active*)get_instance(guardscan_219_instances))->move_front();
    }
    event_998_6_end: ;
}
// Function purpose: generated callback event_func_3392 processes event block(s) 999_6. Actions/conditions:
//        999_6: sets Culprit to -1; sets CulpritName to playerBase->alterables->strings.get(0); sets LookX to
//        playerBase->get_x(); plus 8 more actions.
void Frames::event_func_3392()
{
    // event 999_6 : sets Culprit to -1; sets CulpritName to playerBase->alterables->strings.get(0); sets LookX to playerBase->get_x(); plus 8 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_999_6_end;
        playerBase_instances.clear_selection();
        guardscan_219_instances.clear_selection();
        if (!check_overlap(playerBase_instances, guardscan_219_instances)) goto event_999_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_999_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_999_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_999_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_999_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_999_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(152, str_zone_nope_725)) == (1))) goto event_999_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_999_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(665, str_culprit_1767, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(668, str_culpritname_1770, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(0, str_guardsees_433, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(666, str_cancel_1768, 0);
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
            loop_policing_nogo_running = true;
            int times = int(1);
            loop_policing_nogo_index = 0;
            while (loop_policing_nogo_index < times) {
                loop_policing_nogo_6();
                if (!loop_policing_nogo_running) break;
                loop_policing_nogo_index++;
            }
        }
    }
    event_999_6_end: ;
}
// Function purpose: generated callback event_func_3393 processes event block(s) 1002_6. Actions/conditions:
//        1002_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3393()
{
    // event 1002_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1002_6_end;
        if (!((patroljeep_416_instances.size()) > (0))) goto event_1002_6_end;
        jeepscan_458_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(jeepscan_458_instances, playerBase_instances)) goto event_1002_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(24, str_outsidewalls_486)) == (1))) goto event_1002_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1002_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_1002_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1002_6_end;
        if (group_saving_1) goto event_1002_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1002_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_y());
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
            loop_jeep_see_running = true;
            int times = int(1);
            loop_jeep_see_index = 0;
            while (loop_jeep_see_index < times) {
                loop_jeep_see_6();
                if (!loop_jeep_see_running) break;
                loop_jeep_see_index++;
            }
        }
    }
    event_1002_6_end: ;
}
// Function purpose: generated callback event_func_3394 processes event block(s) 1004_6. Actions/conditions:
//        1004_6: sets EndString to Caught entry 17; sets LookX to ((Active*)get_single(dighole_207_instances,
//        default_active_instance))->get_x(); sets LookY to ((Active*)get_single(dighole_207_instances,
//        default_active_instance))->get_y(); plus 5 more actions.
void Frames::event_func_3394()
{
    // event 1004_6 : sets EndString to Caught entry 17; sets LookX to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1004_6_end;
        if (!(frame_time >= 5.0)) goto event_1004_6_end;
        if (!((patroljeep_416_instances.size()) > (0))) goto event_1004_6_end;
        jeepscan_458_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(jeepscan_458_instances, dighole_207_instances)) goto event_1004_6_end;
        if (!((((Active*)get_single(dighole_207_instances, default_active_instance))->layer->index+1) == (2))) goto event_1004_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (((Active*)(*it))->outside_playfield()) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1004_6_end;
        if (group_saving_1) goto event_1004_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1004_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_17_218));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_y());
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
            loop_jeep_see_esc_running = true;
            int times = int(1);
            loop_jeep_see_esc_index = 0;
            while (loop_jeep_see_esc_index < times) {
                loop_jeep_see_esc_6();
                if (!loop_jeep_see_esc_running) break;
                loop_jeep_see_esc_index++;
            }
        }
    }
    event_1004_6_end: ;
}
// Function purpose: generated callback event_func_3395 processes event block(s) 1005_6. Actions/conditions:
//        1005_6: sets EndString to Caught entry 18; sets LookX to ((Active*)get_single(guardalert_266_instances,
//        default_active_instance))->get_x(); sets LookY to ((Active*)get_single(guardalert_266_instances,
//        default_active_instance))->get_y(); plus 5 more actions.
void Frames::event_func_3395()
{
    // event 1005_6 : sets EndString to Caught entry 18; sets LookX to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1005_6_end;
        if (!(frame_time >= 5.0)) goto event_1005_6_end;
        if (!((patroljeep_416_instances.size()) > (0))) goto event_1005_6_end;
        jeepscan_458_instances.clear_selection();
        guardalert_266_instances.clear_selection();
        if (!check_overlap(jeepscan_458_instances, guardalert_266_instances)) goto event_1005_6_end;
        if (!((((Active*)get_single(guardalert_266_instances, default_active_instance))->layer->index+1) == (2))) goto event_1005_6_end;
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (((Active*)(*it))->outside_playfield()) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_1005_6_end;
        if (group_saving_1) goto event_1005_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1005_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_18_332));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_instance(patroljeep_416_instances, default_active_instance))->get_y());
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
            loop_jeep_see_esc_running = true;
            int times = int(1);
            loop_jeep_see_esc_index = 0;
            while (loop_jeep_see_esc_index < times) {
                loop_jeep_see_esc_6();
                if (!loop_jeep_see_esc_running) break;
                loop_jeep_see_esc_index++;
            }
        }
    }
    event_1005_6_end: ;
}
// Function purpose: generated callback event_func_3396 processes event block(s) 1007_6. Actions/conditions:
//        1007_6: sets spaceX to ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x();
//        sets spaceY to ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y().
void Frames::event_func_3396()
{
    // event 1007_6 : sets spaceX to ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x(); sets spaceY to ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y()
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1007_6_end;
        guardscan_219_instances.clear_selection();
        sheetsposters_294_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, sheetsposters_294_instances)) goto event_1007_6_end;
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_1007_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(757, str_f60_1935)) == (0))) goto event_1007_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1007_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1007_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (30))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1007_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1007_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y());
        {
            loop_goto_sheet_running = true;
            int times = int(1);
            loop_goto_sheet_index = 0;
            while (loop_goto_sheet_index < times) {
                loop_goto_sheet_6();
                if (!loop_goto_sheet_running) break;
                loop_goto_sheet_index++;
            }
        }
    }
    event_1007_6_end: ;
}
// Function purpose: generated callback event_func_3397 processes event block(s) 1011_6. Actions/conditions:
//        1011_6: sets SheetX to ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x();
//        sets SheetY to ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y(); creates
//        a droppedsheet 441 object; plus 6 more actions.
void Frames::event_func_3397()
{
    // event 1011_6 : sets SheetX to ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x(); sets SheetY to ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y(); creates a droppedsheet 441 object; plus 6 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1011_6_end;
        lookguardflag60_442_instances.clear_selection();
        sheetsposters_294_instances.clear_selection();
        if (!check_overlap(lookguardflag60_442_instances, sheetsposters_294_instances)) goto event_1011_6_end;
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_1011_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1011_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(231, str_sheetx_844, ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(232, str_sheety_845, ((Active*)get_single(sheetsposters_294_instances, default_active_instance))->get_y());
        FrameObject * single_instance_1011_6_0; single_instance_1011_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(lookguardflag60_442_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_droppedsheet_441(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1011_6_0 == NULL)
                    single_instance_1011_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1011_6_0))->move_back();
        ((Active*)((Active*)single_instance_1011_6_0))->destroy();
        {
            loop_remove_sheet_running = true;
            int times = int(1);
            loop_remove_sheet_index = 0;
            while (loop_remove_sheet_index < times) {
                loop_remove_sheet_6();
                if (!loop_remove_sheet_running) break;
                loop_remove_sheet_index++;
            }
        }
        {
            ((Active*)get_instance(lookguardflag60_442_instances))->set_global_position(-100, -100);
            pos_end_1011_6_1: ;
        }
    }
    event_1011_6_end: ;
}
// Function purpose: generated callback event_func_3398 processes event block(s) 1013_6. Actions/conditions:
//        1013_6: sets LookX to ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_x()+8;
//        sets LookY to ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_y()+16; sets
//        GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more
//        actions.
void Frames::event_func_3398()
{
    // event 1013_6 : sets LookX to ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_x()+8; sets LookY to ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_y()+16; sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1013_6_end;
        guardscan_219_instances.clear_selection();
        bedplayer_338_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, bedplayer_338_instances)) goto event_1013_6_end;
        if (group_saving_1) goto event_1013_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1013_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)))) goto event_1013_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) == (0))) goto event_1013_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(159, str_zone_shu_732)) == (0))) goto event_1013_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(311, str_beddummy_1088)) == (0))) goto event_1013_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1013_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1013_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_y()+16);
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
        {
            loop_guard_bedcheck_running = true;
            int times = int(1);
            loop_guard_bedcheck_index = 0;
            while (loop_guard_bedcheck_index < times) {
                loop_guard_bedcheck_6();
                if (!loop_guard_bedcheck_running) break;
                loop_guard_bedcheck_index++;
            }
        }
    }
    event_1013_6_end: ;
}
// Function purpose: generated callback event_func_3399 processes event block(s) 1015_6. Actions/conditions:
//        1015_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3399()
{
    // event 1015_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1015_6_end;
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_1015_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(261, str_playerfound_917)) == (0))) goto event_1015_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1015_6_end;
        guardscan_219_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, playerBase_instances)) goto event_1015_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1015_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1015_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1015_6_end;
        if (!check_not_overlap(playerBase_instances, hiding_379_instances)) goto event_1015_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1015_6_end;
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
        {
            loop_flag_found_running = true;
            int times = int(1);
            loop_flag_found_index = 0;
            while (loop_flag_found_index < times) {
                loop_flag_found_6();
                if (!loop_flag_found_running) break;
                loop_flag_found_index++;
            }
        }
    }
    event_1015_6_end: ;
}
// Function purpose: generated callback event_func_3400 processes event block(s) 1017_6. Actions/conditions:
//        1017_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3400()
{
    // event 1017_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1017_6_end;
        playerBase_instances.clear_selection();
        guardscan_219_instances.clear_selection();
        if (!check_overlap(playerBase_instances, guardscan_219_instances)) goto event_1017_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) == (0))) goto event_1017_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(159, str_zone_shu_732)) == (0))) goto event_1017_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)))) goto event_1017_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1017_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1017_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1017_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1017_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1017_6_end;
        if (!check_not_overlap(playerBase_instances, hiding_379_instances)) goto event_1017_6_end;
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
        {
            loop_sneaking2_running = true;
            int times = int(1);
            loop_sneaking2_index = 0;
            while (loop_sneaking2_index < times) {
                loop_sneaking2_6();
                if (!loop_sneaking2_running) break;
                loop_sneaking2_index++;
            }
        }
    }
    event_1017_6_end: ;
}
// Function purpose: generated callback event_func_3401 processes event block(s) 1020_6. Actions/conditions:
//        1020_6: sets the selected object's layer to 2-1.
void Frames::event_func_3401()
{
    // event 1020_6 : sets the selected object's layer to 2-1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1020_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_1020_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(2147483648)) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1020_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
    }
    event_1020_6_end: ;
}
// Function purpose: generated callback event_func_3402 processes event block(s) 1021_6. Actions/conditions:
//        1021_6: sets LookX to ((Active*)get_single(water_303_instances, default_active_instance))->get_x(); sets
//        LookY to ((Active*)get_single(water_303_instances, default_active_instance))->get_y(); sets SourceX to
//        ((Active*)get_single(water_303_instances, default_active_instance))->alterables->values.get(4); plus 6 more
//        actions.
void Frames::event_func_3402()
{
    // event 1021_6 : sets LookX to ((Active*)get_single(water_303_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(water_303_instances, default_active_instance))->get_y(); sets SourceX to ((Active*)get_single(water_303_instances, default_active_instance))->alterables->values.get(4); plus 6 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1021_6_end;
        guardscan_219_instances.clear_selection();
        water_303_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, water_303_instances)) goto event_1021_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1021_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1021_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1021_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1021_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(water_303_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(water_303_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(485, str_sourcex_1363, ((Active*)get_single(water_303_instances, default_active_instance))->alterables->values.get(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(486, str_sourcey_1364, ((Active*)get_single(water_303_instances, default_active_instance))->alterables->values.get(5));
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
        {
            loop_see_water_running = true;
            int times = int(1);
            loop_see_water_index = 0;
            while (loop_see_water_index < times) {
                loop_see_water_6();
                if (!loop_see_water_running) break;
                loop_see_water_index++;
            }
        }
    }
    event_1021_6_end: ;
}
// Function purpose: generated callback event_func_3403 processes event block(s) 1023_6. Actions/conditions:
//        1023_6: sets YourLoo to 0.
void Frames::event_func_3403()
{
    // event 1023_6 : sets YourLoo to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1023_6_end;
        guardBase_instances.clear_selection();
        toilet2_307_instances.clear_selection();
        if (!check_overlap(guardBase_instances, toilet2_307_instances)) goto event_1023_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_1023_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(758, str_yourloo_1936, 0);
    }
    event_1023_6_end: ;
}
// Function purpose: generated callback event_func_3404 processes event block(s) 1024_6. Actions/conditions:
//        1024_6: sets YourLoo to 1.
void Frames::event_func_3404()
{
    // event 1024_6 : sets YourLoo to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1024_6_end;
        guardBase_instances.clear_selection();
        toilet2_307_instances.clear_selection();
        if (!check_overlap(guardBase_instances, toilet2_307_instances)) goto event_1024_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(759, str_zones_yourcelltopx_1937)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(760, str_zones_yourcellbottomx_1938)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(761, str_zones_yourcelltopy_1939)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(762, str_zones_yourcellbottomy_1940)))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_1024_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(758, str_yourloo_1936, 1);
    }
    event_1024_6_end: ;
}
// Function purpose: generated callback event_func_3405 processes event block(s) 1025_6. Actions/conditions:
//        1025_6: sets bogID to ((Active*)get_single(toilet2_307_instances,
//        default_active_instance))->alterables->values.get(0); sets bogX to
//        ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x(); sets bogY to
//        ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_y(); plus 5 more actions.
void Frames::event_func_3405()
{
    // event 1025_6 : sets bogID to ((Active*)get_single(toilet2_307_instances, default_active_instance))->alterables->values.get(0); sets bogX to ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x(); sets bogY to ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_y(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1025_6_end;
        guardBase_instances.clear_selection();
        toilet2_307_instances.clear_selection();
        if (!check_overlap(guardBase_instances, toilet2_307_instances)) goto event_1025_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_1025_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(758, str_yourloo_1936)) == (0))) goto event_1025_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(93, str_bogid_604, ((Active*)get_single(toilet2_307_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(763, str_bogx_1941, ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(764, str_bogy_1942, ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(97, str_illegalfound_620, 0);
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        {
            loop_guard_unblock_loo_running = true;
            int times = int(1);
            loop_guard_unblock_loo_index = 0;
            while (loop_guard_unblock_loo_index < times) {
                loop_guard_unblock_loo_6();
                if (!loop_guard_unblock_loo_running) break;
                loop_guard_unblock_loo_index++;
            }
        }
    }
    event_1025_6_end: ;
}
// Function purpose: generated callback event_func_3406 processes event block(s) 1026_6. Actions/conditions:
//        1026_6: sets bogID to ((Active*)get_single(toilet2_307_instances,
//        default_active_instance))->alterables->values.get(0); sets bogX to
//        ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x(); sets bogY to
//        ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_y(); plus 5 more actions.
void Frames::event_func_3406()
{
    // event 1026_6 : sets bogID to ((Active*)get_single(toilet2_307_instances, default_active_instance))->alterables->values.get(0); sets bogX to ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x(); sets bogY to ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_y(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1026_6_end;
        guardBase_instances.clear_selection();
        toilet2_307_instances.clear_selection();
        if (!check_overlap(guardBase_instances, toilet2_307_instances)) goto event_1026_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_1026_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(758, str_yourloo_1936)) == (1))) goto event_1026_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(93, str_bogid_604, ((Active*)get_single(toilet2_307_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(763, str_bogx_1941, ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(764, str_bogy_1942, ((Active*)get_single(toilet2_307_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(97, str_illegalfound_620, 0);
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        {
            loop_guard_check_loo_running = true;
            int times = int(3);
            loop_guard_check_loo_index = 0;
            while (loop_guard_check_loo_index < times) {
                loop_guard_check_loo_6();
                if (!loop_guard_check_loo_running) break;
                loop_guard_check_loo_index++;
            }
        }
        {
            loop_guard_unblock_loo_running = true;
            int times = int(1);
            loop_guard_unblock_loo_index = 0;
            while (loop_guard_unblock_loo_index < times) {
                loop_guard_unblock_loo_6();
                if (!loop_guard_unblock_loo_running) break;
                loop_guard_unblock_loo_index++;
            }
        }
    }
    event_1026_6_end: ;
}
// Function purpose: generated callback event_func_3407 processes event block(s) 1031_6. Actions/conditions:
//        1031_6: sets LookX to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x()+8;
//        sets LookY to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()+8; sets
//        GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more
//        actions.
void Frames::event_func_3407()
{
    // event 1031_6 : sets LookX to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x()+8; sets LookY to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()+8; sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1031_6_end;
        guardscan_219_instances.clear_selection();
        guardalert_266_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, guardalert_266_instances)) goto event_1031_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1031_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1031_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1031_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(765, str_guardid_1943, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
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
            loop_guard_sees_alert_running = true;
            int times = int(1);
            loop_guard_sees_alert_index = 0;
            while (loop_guard_sees_alert_index < times) {
                loop_guard_sees_alert_6();
                if (!loop_guard_sees_alert_running) break;
                loop_guard_sees_alert_index++;
            }
        }
    }
    event_1031_6_end: ;
}
// Function purpose: generated callback event_func_3408 processes event block(s) 1032_6. Actions/conditions:
//        1032_6: sets LookX to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x(); sets
//        LookY to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3408()
{
    // event 1032_6 : sets LookX to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1032_6_end;
        guardscan_219_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, dighole_207_instances)) goto event_1032_6_end;
        if (!check_not_overlap(dighole_207_instances, desks_305_instances)) goto event_1032_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(2147483648)) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1032_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1032_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1032_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1032_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y());
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
        {
            loop_guard_sees_hole_running = true;
            int times = int(1);
            loop_guard_sees_hole_index = 0;
            while (loop_guard_sees_hole_index < times) {
                loop_guard_sees_hole_6();
                if (!loop_guard_sees_hole_running) break;
                loop_guard_sees_hole_index++;
            }
        }
    }
    event_1032_6_end: ;
}
// Function purpose: generated callback event_func_3409 processes event block(s) 1040_6. Actions/conditions:
//        1040_6: sets the selected object's layer to 1-1.
void Frames::event_func_3409()
{
    // event 1040_6 : sets the selected object's layer to 1-1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1040_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_1040_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(2147483648)) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1040_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
        }
    }
    event_1040_6_end: ;
}
// Function purpose: generated callback event_func_3410 processes event block(s) 1041_6. Actions/conditions:
//        1041_6: sets LookX to ((Active*)get_single(doorcell_174_instances, default_active_instance))->get_x(); sets
//        LookY to ((Active*)get_single(doorcell_174_instances, default_active_instance))->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions.
void Frames::event_func_3410()
{
    // event 1041_6 : sets LookX to ((Active*)get_single(doorcell_174_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(doorcell_174_instances, default_active_instance))->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1 && group_code_pathfinding_guards_policing_see_unlocked_door_1)) goto event_1041_6_end;
        guardscan_219_instances.clear_selection();
        doorcell_174_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, doorcell_174_instances)) goto event_1041_6_end;
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!doorcell_174_instances.has_selection()) goto event_1041_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(157, str_doors_cell_locked_730)) == (1))) goto event_1041_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1041_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1041_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1041_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(doorcell_174_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(doorcell_174_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(765, str_guardid_1943, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
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
            loop_guard_sees_unlocked_running = true;
            int times = int(1);
            loop_guard_sees_unlocked_index = 0;
            while (loop_guard_sees_unlocked_index < times) {
                loop_guard_sees_unlocked_6();
                if (!loop_guard_sees_unlocked_running) break;
                loop_guard_sees_unlocked_index++;
            }
        }
    }
    event_1041_6_end: ;
}
// Function purpose: generated callback event_func_3411 processes event block(s) 1042_6. Actions/conditions:
//        1042_6: sets LookX to ((Active*)get_single(dooroutside_262_instances, default_active_instance))->get_x();
//        sets LookY to ((Active*)get_single(dooroutside_262_instances, default_active_instance))->get_y(); sets
//        GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more
//        actions.
void Frames::event_func_3411()
{
    // event 1042_6 : sets LookX to ((Active*)get_single(dooroutside_262_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(dooroutside_262_instances, default_active_instance))->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1 && group_code_pathfinding_guards_policing_see_unlocked_door_1)) goto event_1042_6_end;
        guardscan_219_instances.clear_selection();
        dooroutside_262_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, dooroutside_262_instances)) goto event_1042_6_end;
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!dooroutside_262_instances.has_selection()) goto event_1042_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(262, str_doors_outside_locked_919)) == (1))) goto event_1042_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1042_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1042_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1042_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(dooroutside_262_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(dooroutside_262_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(765, str_guardid_1943, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
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
            loop_guard_sees_unlocked_running = true;
            int times = int(1);
            loop_guard_sees_unlocked_index = 0;
            while (loop_guard_sees_unlocked_index < times) {
                loop_guard_sees_unlocked_6();
                if (!loop_guard_sees_unlocked_running) break;
                loop_guard_sees_unlocked_index++;
            }
        }
    }
    event_1042_6_end: ;
}
// Function purpose: generated callback event_func_3412 processes event block(s) 1043_6. Actions/conditions:
//        1043_6: sets LookX to ((Active*)get_single(doorutility_259_instances, default_active_instance))->get_x();
//        sets LookY to ((Active*)get_single(doorutility_259_instances, default_active_instance))->get_y(); sets
//        GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more
//        actions.
void Frames::event_func_3412()
{
    // event 1043_6 : sets LookX to ((Active*)get_single(doorutility_259_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(doorutility_259_instances, default_active_instance))->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1 && group_code_pathfinding_guards_policing_see_unlocked_door_1)) goto event_1043_6_end;
        guardscan_219_instances.clear_selection();
        doorutility_259_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, doorutility_259_instances)) goto event_1043_6_end;
        for (ObjectIterator it(doorutility_259_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!doorutility_259_instances.has_selection()) goto event_1043_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(263, str_doors_utility_locked_920)) == (1))) goto event_1043_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1043_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1043_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1043_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(doorutility_259_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(doorutility_259_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(765, str_guardid_1943, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
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
            loop_guard_sees_unlocked_running = true;
            int times = int(1);
            loop_guard_sees_unlocked_index = 0;
            while (loop_guard_sees_unlocked_index < times) {
                loop_guard_sees_unlocked_6();
                if (!loop_guard_sees_unlocked_running) break;
                loop_guard_sees_unlocked_index++;
            }
        }
    }
    event_1043_6_end: ;
}
// Function purpose: generated callback event_func_3413 processes event block(s) 1044_6. Actions/conditions:
//        1044_6: sets LookX to ((Active*)get_single(doorstaff_212_instances, default_active_instance))->get_x(); sets
//        LookY to ((Active*)get_single(doorstaff_212_instances, default_active_instance))->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions.
void Frames::event_func_3413()
{
    // event 1044_6 : sets LookX to ((Active*)get_single(doorstaff_212_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(doorstaff_212_instances, default_active_instance))->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1 && group_code_pathfinding_guards_policing_see_unlocked_door_1)) goto event_1044_6_end;
        guardscan_219_instances.clear_selection();
        doorstaff_212_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, doorstaff_212_instances)) goto event_1044_6_end;
        for (ObjectIterator it(doorstaff_212_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!doorstaff_212_instances.has_selection()) goto event_1044_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(264, str_doors_staff_locked_921)) == (1))) goto event_1044_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1044_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1044_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1044_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(doorstaff_212_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(doorstaff_212_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(765, str_guardid_1943, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
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
            loop_guard_sees_unlocked_running = true;
            int times = int(1);
            loop_guard_sees_unlocked_index = 0;
            while (loop_guard_sees_unlocked_index < times) {
                loop_guard_sees_unlocked_6();
                if (!loop_guard_sees_unlocked_running) break;
                loop_guard_sees_unlocked_index++;
            }
        }
    }
    event_1044_6_end: ;
}
// Function purpose: generated callback event_func_3414 processes event block(s) 1046_6. Actions/conditions:
//        1046_6: disables flag 588 (event-processing latch on the shared game-state object) on the selected object.
void Frames::event_func_3414()
{
    // event 1046_6 : disables flag 588 (event-processing latch on the shared game-state object) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1046_6_end;
        if (!(((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.is_on(588))) goto event_1046_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.disable(588);
    }
    event_1046_6_end: ;
}
// Function purpose: generated callback event_func_3415 processes event block(s) 1047_6. Actions/conditions:
//        1047_6: enables flag 588 (event-processing latch on the shared game-state object) on the selected object.
void Frames::event_func_3415()
{
    // event 1047_6 : enables flag 588 (event-processing latch on the shared game-state object) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1047_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) > (0))) goto event_1047_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.enable(588);
    }
    event_1047_6_end: ;
}
// Function purpose: generated callback event_func_3416 processes event block(s) 1048_6. Actions/conditions:
//        1048_6: enables flag 588 (event-processing latch on the shared game-state object) on the selected object.
void Frames::event_func_3416()
{
    // event 1048_6 : enables flag 588 (event-processing latch on the shared game-state object) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1048_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) > (0))) goto event_1048_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.enable(588);
    }
    event_1048_6_end: ;
}
// Function purpose: generated callback event_func_3417 processes event block(s) 1049_6. Actions/conditions:
//        1049_6: enables flag 588 (event-processing latch on the shared game-state object) on the selected object.
void Frames::event_func_3417()
{
    // event 1049_6 : enables flag 588 (event-processing latch on the shared game-state object) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1049_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) > (0))) goto event_1049_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.enable(588);
    }
    event_1049_6_end: ;
}
// Function purpose: generated callback event_func_3418 processes event block(s) 1050_6. Actions/conditions:
//        1050_6: enables flag 588 (event-processing latch on the shared game-state object) on the selected object.
void Frames::event_func_3418()
{
    // event 1050_6 : enables flag 588 (event-processing latch on the shared game-state object) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1050_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) > (0))) goto event_1050_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.enable(588);
    }
    event_1050_6_end: ;
}
// Function purpose: generated callback event_func_3419 processes event block(s) 1051_6. Actions/conditions:
//        1051_6: enables flag 588 (event-processing latch on the shared game-state object) on the selected object.
void Frames::event_func_3419()
{
    // event 1051_6 : enables flag 588 (event-processing latch on the shared game-state object) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1051_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(24, str_outsidewalls_486)) == (1))) goto event_1051_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.enable(588);
    }
    event_1051_6_end: ;
}
// Function purpose: generated callback event_func_3420 processes event block(s) 1052_6. Actions/conditions:
//        1052_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3420()
{
    // event 1052_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1052_6_end;
        if (!(((AssociateArray*)get_instance(gameVariables_instances))->alterables->flags.is_on(588))) goto event_1052_6_end;
        guardscan_219_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, playerBase_instances)) goto event_1052_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1052_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1052_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1052_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1052_6_end;
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
        {
            loop_policing_tools_running = true;
            int times = int(1);
            loop_policing_tools_index = 0;
            while (loop_policing_tools_index < times) {
                loop_policing_tools_6();
                if (!loop_policing_tools_running) break;
                loop_policing_tools_index++;
            }
        }
    }
    event_1052_6_end: ;
}
// Function purpose: generated callback event_func_3421 processes event block(s) 1053_6. Actions/conditions:
//        1053_6: sets Looted to 0; sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); plus 5
//        more actions.
void Frames::event_func_3421()
{
    // event 1053_6 : sets Looted to 0; sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1053_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(148, str_looted_721)) > (0))) goto event_1053_6_end;
        guardscan_219_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, playerBase_instances)) goto event_1053_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1053_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1053_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1053_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1053_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(148, str_looted_721, 0);
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
        {
            loop_policing_loot_running = true;
            int times = int(1);
            loop_policing_loot_index = 0;
            while (loop_policing_loot_index < times) {
                loop_policing_loot_6();
                if (!loop_policing_loot_running) break;
                loop_policing_loot_index++;
            }
        }
    }
    event_1053_6_end: ;
}
// Function purpose: generated callback event_func_3422 processes event block(s) 1058_6. Actions/conditions:
//        1058_6: sets Culprit to ((Active*)get_single(qualifier_15,
//        default_active_instance))->alterables->values.get(25); sets CulpritName to
//        ((Active*)get_single(qualifier_15, default_active_instance))->alterables->strings.get(0); sets LookX to
//        ((Active*)get_single(qualifier_15, default_active_instance))->get_x(); plus 9 more actions.
void Frames::event_func_3422()
{
    // event 1058_6 : sets Culprit to ((Active*)get_single(qualifier_15, default_active_instance))->alterables->values.get(25); sets CulpritName to ((Active*)get_single(qualifier_15, default_active_instance))->alterables->strings.get(0); sets LookX to ((Active*)get_single(qualifier_15, default_active_instance))->get_x(); plus 9 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1058_6_end;
        qualifier_15.clear_selection();
        guardscan_219_instances.clear_selection();
        if (!check_overlap(qualifier_15, guardscan_219_instances)) goto event_1058_6_end;
        for (QualifierIterator it(qualifier_15); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_15.has_selection()) goto event_1058_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1058_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1058_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1058_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1058_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(665, str_culprit_1767, ((Active*)get_single(qualifier_15, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(668, str_culpritname_1770, ((Active*)get_single(qualifier_15, default_active_instance))->alterables->strings.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(qualifier_15, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(qualifier_15, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(667, str_guardopn_1769, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(12));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(0, str_guardsees_433, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(666, str_cancel_1768, 0);
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
            loop_policing_attack_running = true;
            int times = int(1);
            loop_policing_attack_index = 0;
            while (loop_policing_attack_index < times) {
                loop_policing_attack_6();
                if (!loop_policing_attack_running) break;
                loop_policing_attack_index++;
            }
        }
    }
    event_1058_6_end: ;
}
// Function purpose: generated callback event_func_3423 processes event block(s) 1065_6. Actions/conditions:
//        1065_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3423()
{
    // event 1065_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1065_6_end;
        playerBase_instances.clear_selection();
        guardscan_219_instances.clear_selection();
        if (!check_overlap(playerBase_instances, guardscan_219_instances)) goto event_1065_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_1065_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495)) >= (90))) goto event_1065_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1065_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1065_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1065_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1065_6_end;
        if (!check_not_overlap(playerBase_instances, hiding_379_instances)) goto event_1065_6_end;
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
        {
            loop_policing_heat_running = true;
            int times = int(1);
            loop_policing_heat_index = 0;
            while (loop_policing_heat_index < times) {
                loop_policing_heat_6();
                if (!loop_policing_heat_running) break;
                loop_policing_heat_index++;
            }
        }
    }
    event_1065_6_end: ;
}
// Function purpose: generated callback event_func_3424 processes event block(s) 1067_6. Actions/conditions:
//        1067_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3424()
{
    // event 1067_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1067_6_end;
        playerBase_instances.clear_selection();
        guardscan_219_instances.clear_selection();
        if (!check_overlap(playerBase_instances, guardscan_219_instances)) goto event_1067_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_1067_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(18)) == (-1))) goto event_1067_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1067_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1067_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1067_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1067_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1067_6_end;
        if (!check_not_overlap(playerBase_instances, hiding_379_instances)) goto event_1067_6_end;
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
        {
            loop_revenge_running = true;
            int times = int(1);
            loop_revenge_index = 0;
            while (loop_revenge_index < times) {
                loop_revenge_6();
                if (!loop_revenge_running) break;
                loop_revenge_index++;
            }
        }
    }
    event_1067_6_end: ;
}
// Function purpose: generated callback event_func_3425 processes event block(s) 1069_6. Actions/conditions:
//        1069_6: sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x();
//        sets GuardY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets LookX
//        to playerBase->get_x(); plus 1 more actions.
void Frames::event_func_3425()
{
    // event 1069_6 : sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets GuardY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets LookX to playerBase->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1069_6_end;
        guardscan_219_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, playerBase_instances)) goto event_1069_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_1069_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505)) == (empty_string))) goto event_1069_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(541, str_zone_showers_1442)) == (0))) goto event_1069_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1069_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1069_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1069_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1069_6_end;
        if (!check_not_overlap(playerBase_instances, hiding_379_instances)) goto event_1069_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
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
            loop_policing_naked_running = true;
            int times = int(1);
            loop_policing_naked_index = 0;
            while (loop_policing_naked_index < times) {
                loop_policing_naked_6();
                if (!loop_policing_naked_running) break;
                loop_policing_naked_index++;
            }
        }
    }
    event_1069_6_end: ;
}
// Function purpose: generated callback event_func_3426 processes event block(s) 1072_6. Actions/conditions:
//        1072_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y()+8; sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3426()
{
    // event 1072_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y()+8; sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1072_6_end;
        playerBase_instances.clear_selection();
        guardscan_219_instances.clear_selection();
        if (!check_overlap(playerBase_instances, guardscan_219_instances)) goto event_1072_6_end;
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_1072_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1072_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1072_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(22)) == (0))) goto event_1072_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1072_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1072_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1072_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y()+8);
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
        {
            loop_policing_desk_running = true;
            int times = int(1);
            loop_policing_desk_index = 0;
            while (loop_policing_desk_index < times) {
                loop_policing_desk_6();
                if (!loop_policing_desk_running) break;
                loop_policing_desk_index++;
            }
        }
    }
    event_1072_6_end: ;
}
// Function purpose: generated callback event_func_3427 processes event block(s) 1075_6. Actions/conditions:
//        1075_6: sets LookX to ((Active*)get_single(items_184_instances, default_active_instance))->get_x(); sets
//        LookY to ((Active*)get_single(items_184_instances, default_active_instance))->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3427()
{
    // event 1075_6 : sets LookX to ((Active*)get_single(items_184_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(items_184_instances, default_active_instance))->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1075_6_end;
        guardscan_219_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, items_184_instances)) goto event_1075_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) != (123))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1075_6_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (2))) goto event_1075_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1075_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1075_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1075_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(items_184_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(items_184_instances, default_active_instance))->get_y());
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
        {
            loop_guard_see_item_running = true;
            int times = int(1);
            loop_guard_see_item_index = 0;
            while (loop_guard_see_item_index < times) {
                loop_guard_see_item_6();
                if (!loop_guard_see_item_running) break;
                loop_guard_see_item_index++;
            }
        }
    }
    event_1075_6_end: ;
}
// Function purpose: generated callback event_func_3428 processes event block(s) 1076_6. Actions/conditions:
//        1076_6: sets LookX to ((Active*)get_single(items_184_instances, default_active_instance))->get_x(); sets
//        LookY to ((Active*)get_single(items_184_instances, default_active_instance))->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3428()
{
    // event 1076_6 : sets LookX to ((Active*)get_single(items_184_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(items_184_instances, default_active_instance))->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1076_6_end;
        guardscan_219_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, items_184_instances)) goto event_1076_6_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (2))) goto event_1076_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (123))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1076_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1076_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1076_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1076_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(items_184_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(items_184_instances, default_active_instance))->get_y());
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
        {
            loop_guard_see_item_running = true;
            int times = int(1);
            loop_guard_see_item_index = 0;
            while (loop_guard_see_item_index < times) {
                loop_guard_see_item_6();
                if (!loop_guard_see_item_running) break;
                loop_guard_see_item_index++;
            }
        }
    }
    event_1076_6_end: ;
}
// Function purpose: generated callback event_func_3429 processes event block(s) 1077_6. Actions/conditions:
//        1077_6: removes the selected object.
void Frames::event_func_3429()
{
    // event 1077_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1077_6_end;
        guardBase_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(guardBase_instances, items_184_instances)) goto event_1077_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (26))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1077_6_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (2))) goto event_1077_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1077_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1077_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1077_6_end: ;
}
// Function purpose: generated callback event_func_3430 processes event block(s) 1078_6. Actions/conditions:
//        1078_6: removes the selected object.
void Frames::event_func_3430()
{
    // event 1078_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1078_6_end;
        guardBase_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(guardBase_instances, items_184_instances)) goto event_1078_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1078_6_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (2))) goto event_1078_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1078_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1078_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1078_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1078_6_end: ;
}
// Function purpose: generated callback event_func_3431 processes event block(s) 1079_6. Actions/conditions:
//        1079_6: removes the selected object; sets EndString to Caught entry 10.
void Frames::event_func_3431()
{
    // event 1079_6 : removes the selected object; sets EndString to Caught entry 10
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1079_6_end;
        guardBase_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(guardBase_instances, items_184_instances)) goto event_1079_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (26))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1079_6_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (2))) goto event_1079_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1079_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1079_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_10_329));
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
    event_1079_6_end: ;
}
// Function purpose: generated callback event_func_3432 processes event block(s) 1080_6. Actions/conditions:
//        1080_6: removes the selected object; sets EndString to Caught entry 11.
void Frames::event_func_3432()
{
    // event 1080_6 : removes the selected object; sets EndString to Caught entry 11
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1080_6_end;
        guardBase_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(guardBase_instances, items_184_instances)) goto event_1080_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (41))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1080_6_end;
        if (!((((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1) == (2))) goto event_1080_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1080_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1080_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_11_331));
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
    event_1080_6_end: ;
}
// Function purpose: generated callback event_func_3433 processes event block(s) 1081_6. Actions/conditions:
//        1081_6: sets LookX to ((Active*)get_single(active9_291_instances, default_active_instance))->get_x()+8; sets
//        LookY to ((Active*)get_single(active9_291_instances, default_active_instance))->get_y()+8; sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3433()
{
    // event 1081_6 : sets LookX to ((Active*)get_single(active9_291_instances, default_active_instance))->get_x()+8; sets LookY to ((Active*)get_single(active9_291_instances, default_active_instance))->get_y()+8; sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1081_6_end;
        guardscan_219_instances.clear_selection();
        active9_291_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, active9_291_instances)) goto event_1081_6_end;
        if (!((((Active*)get_single(active9_291_instances, default_active_instance))->layer->index+1) == (2))) goto event_1081_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1081_6_end;
        if (!check_not_overlap(active9_291_instances, playerBase_instances)) goto event_1081_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1081_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1081_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(active9_291_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(active9_291_instances, default_active_instance))->get_y()+8);
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
        {
            loop_guard_see_item_running = true;
            int times = int(1);
            loop_guard_see_item_index = 0;
            while (loop_guard_see_item_index < times) {
                loop_guard_see_item_6();
                if (!loop_guard_see_item_running) break;
                loop_guard_see_item_index++;
            }
        }
    }
    event_1081_6_end: ;
}
// Function purpose: generated callback event_func_3434 processes event block(s) 1082_6. Actions/conditions:
//        1082_6: creates a dust 223 object; removes the selected object.
void Frames::event_func_3434()
{
    // event 1082_6 : creates a dust 223 object; removes the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1082_6_end;
        guardBase_instances.clear_selection();
        active9_291_instances.clear_selection();
        if (!check_overlap(guardBase_instances, active9_291_instances)) goto event_1082_6_end;
        if (!((((Active*)get_single(active9_291_instances, default_active_instance))->layer->index+1) == (2))) goto event_1082_6_end;
        if (!check_not_overlap(active9_291_instances, playerBase_instances)) goto event_1082_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1082_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1082_6_end;
        FrameObject * single_instance_1082_6_0; single_instance_1082_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(active9_291_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1082_6_0 == NULL)
                    single_instance_1082_6_0 = new_obj;
            }
        }
        for (ObjectIterator it(active9_291_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1082_6_end: ;
}
// Function purpose: generated callback event_func_3435 processes event block(s) 1084_6. Actions/conditions:
//        1084_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3435()
{
    // event 1084_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1084_6_end;
        guardscan_219_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, playerBase_instances)) goto event_1084_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1084_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) > (0))) goto event_1084_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1084_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1084_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1084_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1084_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1084_6_end;
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
        {
            loop_policing_theft_running = true;
            int times = int(1);
            loop_policing_theft_index = 0;
            while (loop_policing_theft_index < times) {
                loop_policing_theft_6();
                if (!loop_policing_theft_running) break;
                loop_policing_theft_index++;
            }
        }
    }
    event_1084_6_end: ;
}
// Function purpose: generated callback event_func_3436 processes event block(s) 1087_6. Actions/conditions:
//        1087_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3436()
{
    // event 1087_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1087_6_end;
        guardscan_219_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, playerBase_instances)) goto event_1087_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_1087_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1087_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(160, str_zone_cells_733)) == (1))) goto event_1087_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) == (0))) goto event_1087_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1087_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_library_25))) goto event_1087_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_mailman_556))) goto event_1087_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1087_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(22)) == (0))) goto event_1087_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1087_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1087_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1087_6_end;
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
        {
            loop_policing_cells_running = true;
            int times = int(1);
            loop_policing_cells_index = 0;
            while (loop_policing_cells_index < times) {
                loop_policing_cells_6();
                if (!loop_policing_cells_running) break;
                loop_policing_cells_index++;
            }
        }
    }
    event_1087_6_end: ;
}
// Function purpose: generated callback event_func_3437 processes event block(s) 1090_6. Actions/conditions:
//        1090_6: sets f25 to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->flags.get(25).
void Frames::event_func_3437()
{
    // event 1090_6 : sets f25 to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->flags.get(25)
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1090_6_end;
        guardscan_219_instances.clear_selection();
        qualifier_14.clear_selection();
        if (!check_overlap(guardscan_219_instances, qualifier_14)) goto event_1090_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(766, str_f25_1944, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->flags.get(25));
    }
    event_1090_6_end: ;
}
// Function purpose: generated callback event_func_3438 processes event block(s) 1091_6. Actions/conditions:
//        1091_6: sets LookX to ((Active*)get_single(qualifier_14, default_active_instance))->get_x(); sets LookY to
//        ((Active*)get_single(qualifier_14, default_active_instance))->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 6 more actions.
void Frames::event_func_3438()
{
    // event 1091_6 : sets LookX to ((Active*)get_single(qualifier_14, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(qualifier_14, default_active_instance))->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 6 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1091_6_end;
        guardscan_219_instances.clear_selection();
        qualifier_14.clear_selection();
        if (!check_overlap(guardscan_219_instances, qualifier_14)) goto event_1091_6_end;
        if (!((((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1) == (2))) goto event_1091_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1091_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1091_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(757, str_f60_1935)) == (0))) goto event_1091_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(766, str_f25_1944)) == (1))) goto event_1091_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1091_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(qualifier_14, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(qualifier_14, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(767, str_boundz_1945, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(0, str_guardsees_433, 0);
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
            loop_bound_spotted_running = true;
            int times = int(1);
            loop_bound_spotted_index = 0;
            while (loop_bound_spotted_index < times) {
                loop_bound_spotted_6();
                if (!loop_bound_spotted_running) break;
                loop_bound_spotted_index++;
            }
        }
    }
    event_1091_6_end: ;
}
// Function purpose: generated callback event_func_3439 processes event block(s) 1093_6. Actions/conditions:
//        1093_6: sets npcZ to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); sets SpeakID to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); sets SpeakText to It
//        was+playerBase->alterables->strings.get(0)+!.
void Frames::event_func_3439()
{
    // event 1093_6 : sets npcZ to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); sets SpeakID to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); sets SpeakText to It was+playerBase->alterables->strings.get(0)+!
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1093_6_end;
        lookguardflag60_442_instances.clear_selection();
        qualifier_14.clear_selection();
        if (!check_overlap(lookguardflag60_442_instances, qualifier_14)) goto event_1093_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(25))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1093_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1093_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(410, str_npcz_1226, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_it_was_1946+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)+str__918);
        {
            loop_raise_npc_running = true;
            int times = int(1);
            loop_raise_npc_index = 0;
            while (loop_raise_npc_index < times) {
                loop_raise_npc_6();
                if (!loop_raise_npc_running) break;
                loop_raise_npc_index++;
            }
        }
    }
    event_1093_6_end: ;
}
// Function purpose: generated callback event_func_3440 processes event block(s) 1097_6. Actions/conditions:
//        1097_6: changes a stored game value.
void Frames::event_func_3440()
{
    VITA_LEGACY_EVENT();
    // event 1097_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1 && group_code_pathfinding_guards_policing_reporting_body_1)) goto event_1097_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1097_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(17, 1);
        }
    }
    event_1097_6_end: ;
}
// Function purpose: generated callback event_func_3441 processes event block(s) 1098_6. Actions/conditions:
//        1098_6: sets charID to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(0); sets the selected object's numeric value to 0; sets
//        the selected object's numeric value to 30+randrange_event(30); plus 1 more actions.
void Frames::event_func_3441()
{
    VITA_LEGACY_EVENT();
    // event 1098_6 : sets charID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0); sets the selected object's numeric value to 0; sets the selected object's numeric value to 30+randrange_event(30); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1 && group_code_pathfinding_guards_policing_reporting_body_1)) goto event_1098_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1098_6_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_1098_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(7, 30+randrange_event(30));
        }
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1098_6_end: ;
}
// Function purpose: generated callback event_func_3442 processes event block(s) 1099_6. Actions/conditions:
//        1099_6: sets charID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(0); chooses a random value; sets the selected object's
//        numeric value to 0; plus 5 more actions.
void Frames::event_func_3442()
{
    VITA_LEGACY_EVENT();
    // event 1099_6 : sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); chooses a random value; sets the selected object's numeric value to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1 && group_code_pathfinding_guards_policing_reporting_body_1)) goto event_1099_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1099_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1099_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(7, 20+randrange_event(20));
        }
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1099_6_end: ;
}
// Function purpose: generated callback event_func_3443 processes event block(s) 1100_6. Actions/conditions:
//        1100_6: sets the selected object's numeric value to 500.
void Frames::event_func_3443()
{
    // event 1100_6 : sets the selected object's numeric value to 500
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1 && group_code_pathfinding_guards_policing_reporting_body_1)) goto event_1100_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1100_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(qualifier_3, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1100_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 500);
        }
    }
    event_1100_6_end: ;
}
// Function purpose: generated callback event_func_3444 processes event block(s) 1101_6. Actions/conditions:
//        1101_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3444()
{
    // event 1101_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets GuardX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1101_6_end;
        playerBase_instances.clear_selection();
        guardscan_219_instances.clear_selection();
        if (!check_overlap(playerBase_instances, guardscan_219_instances)) goto event_1101_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_1101_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1101_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) > (0))) goto event_1101_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) < (3))) goto event_1101_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(2)) == (0))) goto event_1101_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(7)) > (0))) goto event_1101_6_end;
        if (!((((Active*)get_instance(guardscan_219_instances))->alterables->values.get(22)) == (0))) goto event_1101_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1101_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1101_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1101_6_end;
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
        {
            loop_see_carry_running = true;
            int times = int(1);
            loop_see_carry_index = 0;
            while (loop_see_carry_index < times) {
                loop_see_carry_6();
                if (!loop_see_carry_running) break;
                loop_see_carry_index++;
            }
        }
    }
    event_1101_6_end: ;
}
// Function purpose: generated callback event_func_3445 processes event block(s) 1106_6. Actions/conditions:
//        1106_6: checks scene is active; game state T_hour; skips if scene is active; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_3445()
{
    // event 1106_6 : checks scene is active; game state T_hour; skips if scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1106_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (6))) goto event_1106_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1106_6_end;
        if (group_code_1 && group_code_pathfinding_guards_guard_towers_1) goto event_1106_6_end;
        if (!group_code_pathfinding_guards_guard_towers_1) {
            group_code_pathfinding_guards_guard_towers_1 = true;
            group_check_group_code_pathfinding_guards_guard_towers_1_0 = true;
        }
    }
    event_1106_6_end: ;
}
// Function purpose: generated callback event_func_3446 processes event block(s) 1107_6. Actions/conditions:
//        1107_6: sets Offlimits to 0.
void Frames::event_func_3446()
{
    // event 1107_6 : sets Offlimits to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1107_6_end;
        if (!group_check_group_code_pathfinding_guards_guard_towers_1_0) goto event_1107_6_end;
        group_check_group_code_pathfinding_guards_guard_towers_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(768, str_offlimits_1947, 0);
    }
    event_1107_6_end: ;
}
// Function purpose: generated callback event_func_3447 processes event block(s) 1108_6. Actions/conditions:
//        1108_6: increments Heat by 3.
void Frames::event_func_3447()
{
    // event 1108_6 : increments Heat by 3
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1108_6_end;
        every_1108_6 += manager.dt;
        if (every_1108_6 < 1.0) goto event_1108_6_end;
        every_1108_6 -= 1.0;
        if (group_code_1 && group_code_schedules_sleeping_1) goto event_1108_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1108_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_1108_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1108_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1108_6_end;
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
    event_1108_6_end: ;
}
// Function purpose: generated callback event_func_3448 processes event block(s) 1109_6. Actions/conditions:
//        1109_6: sets IllegalOutside to 0.
void Frames::event_func_3448()
{
    // event 1109_6 : sets IllegalOutside to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1109_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(769, str_illegaloutside_1948)) != (0))) goto event_1109_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(769, str_illegaloutside_1948, 0);
    }
    event_1109_6_end: ;
}
// Function purpose: generated callback event_func_3449 processes event block(s) 1110_6. Actions/conditions:
//        1110_6: sets IllegalOutside to 1.
void Frames::event_func_3449()
{
    // event 1110_6 : sets IllegalOutside to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1110_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) > (0))) goto event_1110_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) < (70))) goto event_1110_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(769, str_illegaloutside_1948, 1);
    }
    event_1110_6_end: ;
}
// Function purpose: generated callback event_func_3450 processes event block(s) 1111_6. Actions/conditions:
//        1111_6: sets IllegalOutside to 1.
void Frames::event_func_3450()
{
    // event 1111_6 : sets IllegalOutside to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1111_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) > (0))) goto event_1111_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) < (70))) goto event_1111_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(769, str_illegaloutside_1948, 1);
    }
    event_1111_6_end: ;
}
// Function purpose: generated callback event_func_3451 processes event block(s) 1112_6. Actions/conditions:
//        1112_6: sets IllegalOutside to 1.
void Frames::event_func_3451()
{
    // event 1112_6 : sets IllegalOutside to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1112_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) > (0))) goto event_1112_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) < (70))) goto event_1112_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(769, str_illegaloutside_1948, 1);
    }
    event_1112_6_end: ;
}
// Function purpose: generated callback event_func_3452 processes event block(s) 1113_6. Actions/conditions:
//        1113_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets TDist_Nearest to 10000.
void Frames::event_func_3452()
{
    // event 1113_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets TDist_Nearest to 10000
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1113_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(769, str_illegaloutside_1948)) == (1))) goto event_1113_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) != (2))) goto event_1113_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1113_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1113_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1113_6_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto event_1113_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (6))) goto event_1113_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1113_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(319, str_tdist_nearest_1099, 10000);
        {
            loop_nearest_tower_running = true;
            int times = int(towerguard_342_instances.size());
            loop_nearest_tower_index = 0;
            while (loop_nearest_tower_index < times) {
                loop_nearest_tower_6();
                if (!loop_nearest_tower_running) break;
                loop_nearest_tower_index++;
            }
        }
        {
            loop_tower_shoot_running = true;
            int times = int(1);
            loop_tower_shoot_index = 0;
            while (loop_tower_shoot_index < times) {
                loop_tower_shoot_6();
                if (!loop_tower_shoot_running) break;
                loop_tower_shoot_index++;
            }
        }
    }
    event_1113_6_end: ;
}
// Function purpose: generated callback event_func_3453 processes event block(s) 1114_6. Actions/conditions:
//        1114_6: sets Offlimits to 0.
void Frames::event_func_3453()
{
    // event 1114_6 : sets Offlimits to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1114_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(768, str_offlimits_1947)) != (0))) goto event_1114_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(768, str_offlimits_1947, 0);
    }
    event_1114_6_end: ;
}
// Function purpose: generated callback event_func_3454 processes event block(s) 1115_6. Actions/conditions:
//        1115_6: sets Offlimits to 1.
void Frames::event_func_3454()
{
    // event 1115_6 : sets Offlimits to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1115_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(19, str_maptype_109)) == (str_outside_1949))) goto event_1115_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)))) goto event_1115_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1115_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(20, str_zone_safe1_482)) == (0))) goto event_1115_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(21, str_zone_safe2_483)) == (0))) goto event_1115_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(22, str_zone_safe3_484)) == (0))) goto event_1115_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) == (0))) goto event_1115_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(159, str_zone_shu_732)) == (0))) goto event_1115_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(768, str_offlimits_1947, 1);
    }
    event_1115_6_end: ;
}
// Function purpose: generated callback event_func_3455 processes event block(s) 1116_6. Actions/conditions:
//        1116_6: sets Offlimits to 1.
void Frames::event_func_3455()
{
    // event 1116_6 : sets Offlimits to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1116_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(19, str_maptype_109)) == (str_insideoutside_487))) goto event_1116_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(20, str_zone_safe1_482)) == (0))) goto event_1116_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(21, str_zone_safe2_483)) == (0))) goto event_1116_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(22, str_zone_safe3_484)) == (0))) goto event_1116_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)))) goto event_1116_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (6))) goto event_1116_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(159, str_zone_shu_732)) == (0))) goto event_1116_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1116_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(768, str_offlimits_1947, 1);
    }
    event_1116_6_end: ;
}
// Function purpose: generated callback event_func_3456 processes event block(s) 1117_6. Actions/conditions:
//        1117_6: sets Offlimits to 1.
void Frames::event_func_3456()
{
    // event 1117_6 : sets Offlimits to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1117_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(19, str_maptype_109)) == (str_insideoutside_487))) goto event_1117_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (22))) goto event_1117_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(20, str_zone_safe1_482)) == (0))) goto event_1117_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(21, str_zone_safe2_483)) == (0))) goto event_1117_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(22, str_zone_safe3_484)) == (0))) goto event_1117_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(159, str_zone_shu_732)) == (0))) goto event_1117_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1117_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(768, str_offlimits_1947, 1);
    }
    event_1117_6_end: ;
}
// Function purpose: generated callback event_func_3457 processes event block(s) 1118_6. Actions/conditions:
//        1118_6: sets Offlimits to 1.
void Frames::event_func_3457()
{
    // event 1118_6 : sets Offlimits to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1118_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495)) >= (90))) goto event_1118_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1118_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(768, str_offlimits_1947, 1);
    }
    event_1118_6_end: ;
}
// Function purpose: generated callback event_func_3458 processes event block(s) 1119_6. Actions/conditions:
//        1119_6: increments Heat by 5; sets OffLimits to 0.
void Frames::event_func_3458()
{
    // event 1119_6 : increments Heat by 5; sets OffLimits to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1119_6_end;
        every_1119_6 += manager.dt;
        if (every_1119_6 < 1.0) goto event_1119_6_end;
        every_1119_6 -= 1.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(768, str_offlimits_1947)) == (1))) goto event_1119_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_1119_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1119_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1119_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(770, str_offlimits_1950, 0);
    }
    event_1119_6_end: ;
}
// Function purpose: generated callback event_func_3459 processes event block(s) 1120_6. Actions/conditions:
//        1120_6: sets OffLimits to 0.
void Frames::event_func_3459()
{
    // event 1120_6 : sets OffLimits to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1120_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(768, str_offlimits_1947)) == (1))) goto event_1120_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (2))) goto event_1120_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(770, str_offlimits_1950, 0);
    }
    event_1120_6_end: ;
}
// Function purpose: generated callback event_func_3460 processes event block(s) 1121_6. Actions/conditions:
//        1121_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets TDist_Nearest to 10000.
void Frames::event_func_3460()
{
    // event 1121_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets TDist_Nearest to 10000
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1121_6_end;
        every_1121_6 += manager.dt;
        if (every_1121_6 < 1.0) goto event_1121_6_end;
        every_1121_6 -= 1.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(768, str_offlimits_1947)) == (1))) goto event_1121_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1121_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1121_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(319, str_tdist_nearest_1099, 10000);
        {
            loop_nearest_tower_running = true;
            int times = int(towerguard_342_instances.size());
            loop_nearest_tower_index = 0;
            while (loop_nearest_tower_index < times) {
                loop_nearest_tower_6();
                if (!loop_nearest_tower_running) break;
                loop_nearest_tower_index++;
            }
        }
        {
            loop_tower_shoot_running = true;
            int times = int(1);
            loop_tower_shoot_index = 0;
            while (loop_tower_shoot_index < times) {
                loop_tower_shoot_6();
                if (!loop_tower_shoot_running) break;
                loop_tower_shoot_index++;
            }
        }
    }
    event_1121_6_end: ;
}
// Function purpose: generated callback event_func_3461 processes event block(s) 1122_6. Actions/conditions:
//        1122_6: sets Heat to 100.
void Frames::event_func_3461()
{
    // event 1122_6 : sets Heat to 100
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1122_6_end;
        every_1122_6 += manager.dt;
        if (every_1122_6 < 1.0) goto event_1122_6_end;
        every_1122_6 -= 1.0;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_1122_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (6))) goto event_1122_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1122_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1122_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1122_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 100);
    }
    event_1122_6_end: ;
}
// Function purpose: generated callback event_func_3462 processes event block(s) 1123_6. Actions/conditions:
//        1123_6: increments Heat by 5.
void Frames::event_func_3462()
{
    // event 1123_6 : increments Heat by 5
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1123_6_end;
        every_1123_6 += manager.dt;
        if (every_1123_6 < 1.0) goto event_1123_6_end;
        every_1123_6 -= 1.0;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_1123_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (6))) goto event_1123_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1123_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_1123_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1123_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495)) < (100))) goto event_1123_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 5);
    }
    event_1123_6_end: ;
}
// Function purpose: generated callback event_func_3463 processes event block(s) 1124_6. Actions/conditions:
//        1124_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets TDist_Nearest to 10000.
void Frames::event_func_3463()
{
    // event 1124_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets TDist_Nearest to 10000
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1124_6_end;
        every_1124_6 += manager.dt;
        if (every_1124_6 < 1.0) goto event_1124_6_end;
        every_1124_6 -= 1.0;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_1124_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (6))) goto event_1124_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1124_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495)) >= (90))) goto event_1124_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) == (empty_string))) goto event_1124_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1124_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(319, str_tdist_nearest_1099, 10000);
        {
            loop_nearest_tower_running = true;
            int times = int(towerguard_342_instances.size());
            loop_nearest_tower_index = 0;
            while (loop_nearest_tower_index < times) {
                loop_nearest_tower_6();
                if (!loop_nearest_tower_running) break;
                loop_nearest_tower_index++;
            }
        }
        {
            loop_tower_shoot_running = true;
            int times = int(1);
            loop_tower_shoot_index = 0;
            while (loop_tower_shoot_index < times) {
                loop_tower_shoot_6();
                if (!loop_tower_shoot_running) break;
                loop_tower_shoot_index++;
            }
        }
    }
    event_1124_6_end: ;
}
