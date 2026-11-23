#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_5775 processes event block(s) 253_11. Actions/conditions:
//        253_11: sets the selected object's visibility to true.
void Frames::event_func_5775()
{
    // event 253_11 : sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_253_11_end;
        if (((Active*)get_instance(dreamOverlay_instances))->flags & VISIBLE) goto event_253_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) != (1))) goto event_253_11_end;
        ((Active*)get_instance(dreamOverlay_instances))->set_visible(true);
    }
    event_253_11_end: ;
}
// Function purpose: generated callback event_func_5776 processes event block(s) 255_11. Actions/conditions:
//        255_11: draws the selected image or tile; removes the selected object; sets the object position in the
//        world; plus 8 more actions.
void Frames::event_func_5776()
{
    // event 255_11 : draws the selected image or tile; removes the selected object; sets the object position in the world; plus 8 more actions
    {
        if (!(group_code_1)) goto event_255_11_end;
        if (!group_check_group_code_tutorial_level_stuff_1_0) goto event_255_11_end;
        group_check_group_code_tutorial_level_stuff_1_0 = false;
        qualifier_8.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
        {
            ((Active*)get_instance(tutguardleft_769_instances))->set_global_position(656, 512);
            pos_end_255_11_0: ;
        }
        {
            ((Active*)get_instance(tutguardright_770_instances))->set_global_position(832, 512);
            pos_end_255_11_1: ;
        }
        ((Active*)get_instance(tutguardleft_769_instances))->set_layer(2-1);
        ((Active*)get_instance(tutguardright_770_instances))->set_layer(2-1);
        markervendor_332_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_markervendor_332(0, 0), 1);
            markervendor_332_instances.add_back();
        }
        for (ObjectIterator it(markervendor_332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_255_11_end: ;
}
// Function purpose: generated callback event_func_5777 processes event block(s) 256_11. Actions/conditions:
//        256_11: sets the object position in the world; sets the selected object's direction to 0; updates game state
//        with selected object->get_movement()->set_speed(10).
void Frames::event_func_5777()
{
    // event 256_11 : sets the object position in the world; sets the selected object's direction to 0; updates game state with selected object->get_movement()->set_speed(10)
    {
        if (!(group_code_1)) goto event_256_11_end;
        if (!group_check_group_code_tutorial_level_stuff_1_1) goto event_256_11_end;
        group_check_group_code_tutorial_level_stuff_1_1 = false;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_256_11_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(tutguardleft_769_instances));
            if (parent == NULL) goto pos_end_256_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_256_11_0: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->get_movement()->set_speed(10);
        }
    }
    event_256_11_end: ;
}
// Function purpose: generated callback event_func_5778 processes event block(s) 257_11. Actions/conditions:
//        257_11: adds a doorcell 174 instance; adds a dooroutside 262 instance; adds a dighole 207 instance; plus 10
//        more actions.
void Frames::event_func_5778()
{
    // event 257_11 : adds a doorcell 174 instance; adds a dooroutside 262 instance; adds a dighole 207 instance; plus 10 more actions
    {
        if (!(group_code_1)) goto event_257_11_end;
        if (!group_check_group_code_tutorial_level_stuff_1_2) goto event_257_11_end;
        group_check_group_code_tutorial_level_stuff_1_2 = false;
        doorcell_174_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_doorcell_174(720, 480), 1);
            doorcell_174_instances.add_back();
        }
        dooroutside_262_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutside_262(896, 512), 1);
            dooroutside_262_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutside_262(896, 528), 1);
            dooroutside_262_instances.add_back();
        }
        dighole_207_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dighole_207(808, 264), 1);
            dighole_207_instances.add_back();
        }
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_direction(0);
        }
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value(100, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x()-8, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y()-8, 0);
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value(100, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x()-8, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y()-24, 0);
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_675(800, 240), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_257_11_end: ;
}
// Function purpose: generated callback event_func_5779 processes event block(s) 258_11. Actions/conditions:
//        258_11: adds a items 184 instance; sets the selected object's numeric value to 5; enables flag -2 (legacy
//        object-specific state; original label was not retained) on the selected object; plus 1 more actions.
void Frames::event_func_5779()
{
    // event 258_11 : adds a items 184 instance; sets the selected object's numeric value to 5; enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 1 more actions
    {
        if (!(group_code_1)) goto event_258_11_end;
        if (!group_check_group_code_tutorial_level_stuff_1_3) goto event_258_11_end;
        group_check_group_code_tutorial_level_stuff_1_3 = false;
        items_184_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_items_679(808, 248), 0);
            items_184_instances.add_back();
        }
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->alterables->values.set(7, 100);
        }
    }
    event_258_11_end: ;
}
// Function purpose: generated callback event_func_5780 processes event block(s) 259_11. Actions/conditions:
//        259_11: sets MerchID to ((Active*)get_single(inmateBed_instances,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_5780()
{
    // event 259_11 : sets MerchID to ((Active*)get_single(inmateBed_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1)) goto event_259_11_end;
        if (!group_check_group_code_tutorial_level_stuff_1_4) goto event_259_11_end;
        group_check_group_code_tutorial_level_stuff_1_4 = false;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (720))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (432))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_259_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(980, str_merchid_2544, ((Active*)get_single(inmateBed_instances, default_active_instance))->alterables->values.get(0));
    }
    event_259_11_end: ;
}
// Function purpose: generated callback event_func_5781 processes event block(s) 260_11. Actions/conditions:
//        260_11: adds a markervendor 332 instance; sets the selected object's numeric value to
//        gameVariables->get_value(980, MerchID).
void Frames::event_func_5781()
{
    // event 260_11 : adds a markervendor 332 instance; sets the selected object's numeric value to gameVariables->get_value(980, MerchID)
    {
        if (!(group_code_1)) goto event_260_11_end;
        if (!group_check_group_code_tutorial_level_stuff_1_5) goto event_260_11_end;
        group_check_group_code_tutorial_level_stuff_1_5 = false;
        markervendor_332_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_markervendor_332(0, 0), 1);
            markervendor_332_instances.add_back();
        }
        for (ObjectIterator it(markervendor_332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(980, str_merchid_2544));
        }
    }
    event_260_11_end: ;
}
// Function purpose: generated callback event_func_5782 processes event block(s) 261_11. Actions/conditions:
//        261_11: sets the selected object's string to 48; sets the selected object's string to Durden.
void Frames::event_func_5782()
{
    // event 261_11 : sets the selected object's string to 48; sets the selected object's string to Durden
    {
        if (!(group_code_1)) goto event_261_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(980, str_merchid_2544)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_261_11_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(1, str_48_0_0_0_2545);
            ((Active*)*it)->alterables->strings.set(0, str_durden_2546);
        }
    }
    event_261_11_end: ;
}
// Function purpose: generated callback event_func_5783 processes event block(s) 262_11. Actions/conditions:
//        262_11: sets the selected object's horizontal position to 776; sets the selected object's vertical position
//        to 472.
void Frames::event_func_5783()
{
    // event 262_11 : sets the selected object's horizontal position to 776; sets the selected object's vertical position to 472
    {
        if (!(group_code_1)) goto event_262_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(980, str_merchid_2544)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_262_11_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 776));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 472));
        }
    }
    event_262_11_end: ;
}
// Function purpose: generated callback event_func_5784 processes event block(s) 263_11. Actions/conditions:
//        263_11: sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        playerBase->x + 0, playerBase->y + 0).
void Frames::event_func_5784()
{
    // event 263_11 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, playerBase->x + 0, playerBase->y + 0)
    {
        if (!(group_code_1)) goto event_263_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(980, str_merchid_2544)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_263_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_263_11_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
        }
    }
    event_263_11_end: ;
}
// Function purpose: generated callback event_func_5785 processes event block(s) 264_11. Actions/conditions:
//        264_11: sets the selected object's direction to 16.
void Frames::event_func_5785()
{
    // event 264_11 : sets the selected object's direction to 16
    {
        if (!(group_code_1)) goto event_264_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704)) != (empty_string))) goto event_264_11_end;
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!doorcell_174_instances.has_selection()) goto event_264_11_end;
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_264_11_end: ;
}
// Function purpose: generated callback event_func_5786 processes event block(s) 265_11. Actions/conditions:
//        265_11: saves the current object selection; saves the current object selection; stops the object's movement.
void Frames::event_func_5786()
{
    // event 265_11 : saves the current object selection; saves the current object selection; stops the object's movement
    bool or_result_265_11 = false;
    bool or_temp_result_265_11_0 = false;
    {
        if (!(group_code_1)) goto or_event_265_11_0_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto or_event_265_11_0_end;
        or_result_265_11 = true;
        or_temp_result_265_11_0 = true;
    }
    or_event_265_11_0_end: ;
    guardBase_instances.clear_saved_selection();
    if (or_temp_result_265_11_0) {
        guardBase_instances.save_selection();
    }
    // event 265_11 : saves the current object selection; saves the current object selection; stops the object's movement
    bool or_temp_result_265_11_1 = false;
    {
        if (!(group_code_1)) goto or_event_265_11_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_265_11_1_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto or_event_265_11_1_end;
        or_result_265_11 = true;
        or_temp_result_265_11_1 = true;
        or_event_265_11_1_end: ;
        dialogPanel_instances.clear_saved_selection();
        if (or_temp_result_265_11_1) {
            guardBase_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_265_11) goto or_final_or_event_265_11_1_end;
        guardBase_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_265_11_0 || or_temp_result_265_11_1) {
            guardBase_instances.restore_selection();
        }
        if (or_temp_result_265_11_1) {
            dialogPanel_instances.restore_selection();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    or_final_or_event_265_11_1_end: ;
}
// Function purpose: generated callback event_func_5787 processes event block(s) 266_11. Actions/conditions:
//        266_11: sets the selected object's direction to pick_random(2, 0, 16); updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_5787()
{
    // event 266_11 : sets the selected object's direction to pick_random(2, 0, 16); updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_266_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_266_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_266_11_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(2, 0, 16));
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_266_11_end: ;
}
// Function purpose: generated callback event_func_5788 processes event block(s) 267_11. Actions/conditions:
//        267_11: sets the selected object's direction to 0; updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_5788()
{
    // event 267_11 : sets the selected object's direction to 0; updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_267_11_end;
        guardBase_instances.clear_selection();
        tutguardleft_769_instances.clear_selection();
        if (!check_overlap(guardBase_instances, tutguardleft_769_instances)) goto event_267_11_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_267_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_267_11_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_267_11_end: ;
}
// Function purpose: generated callback event_func_5789 processes event block(s) 268_11. Actions/conditions:
//        268_11: sets the selected object's direction to 16; updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_5789()
{
    // event 268_11 : sets the selected object's direction to 16; updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_268_11_end;
        guardBase_instances.clear_selection();
        tutguardright_770_instances.clear_selection();
        if (!check_overlap(guardBase_instances, tutguardright_770_instances)) goto event_268_11_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_268_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_268_11_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_268_11_end: ;
}
// Function purpose: generated callback event_func_5790 processes event block(s) 269_11. Actions/conditions:
//        269_11: stops the object's movement.
void Frames::event_func_5790()
{
    // event 269_11 : stops the object's movement
    {
        if (!(group_code_1)) goto event_269_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_269_11_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_269_11_end: ;
}
// Function purpose: generated callback event_func_5791 processes event block(s) 270_11. Actions/conditions:
//        270_11: sets the selected object's direction to 16.
void Frames::event_func_5791()
{
    // event 270_11 : sets the selected object's direction to 16
    {
        if (!(group_code_1)) goto event_270_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505)) == (str_3_100_2547))) goto event_270_11_end;
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!dooroutside_262_instances.has_selection()) goto event_270_11_end;
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_270_11_end: ;
}
// Function purpose: generated callback event_func_5792 processes event block(s) 271_11. Actions/conditions:
//        271_11: sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        playerBase->x + 0, playerBase->y + 0).
void Frames::event_func_5792()
{
    // event 271_11 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, playerBase->x + 0, playerBase->y + 0)
    {
        if (!(group_code_1)) goto event_271_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_271_11_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
        }
    }
    event_271_11_end: ;
}
// Function purpose: generated callback event_func_5793 processes event block(s) 272_11. Actions/conditions:
//        272_11: activates the Outfit_Guard event group; sets SpeakID to 2; sets SpeakCol to 1; plus 1 more actions.
void Frames::event_func_5793()
{
    // event 272_11 : activates the Outfit_Guard event group; sets SpeakID to 2; sets SpeakCol to 1; plus 1 more actions
    {
        if (!(group_code_1)) goto event_272_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (912))) goto event_272_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (544))) goto event_272_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_272_11_end;
        if (once_condition_272_11) goto event_272_11_end;
        once_condition_272_11 = true;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_outfit_guard_1298);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(1+randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885)))));
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_11();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
    }
    event_272_11_end: ;
}
// Function purpose: generated callback event_func_5794 processes event block(s) 273_11. Actions/conditions:
//        273_11: checks scene is active; skips if menu 1 0 event group is active; skips if the required game action
//        is held; this handler gates a game event without a direct.
void Frames::event_func_5794()
{
    // event 273_11 : checks scene is active; skips if menu 1 0 event group is active; skips if the required game action is held; this handler gates a game event without a direct
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_273_11_end;
        if (!group_check_group_code_menu_1_0) goto event_273_11_end;
        group_check_group_code_menu_1_0 = false;
        if (is_key_pressed(SDLK_F1)) goto event_273_11_end;
        {
            loop_menubuttons_running = true;
            int times = int(1);
            loop_menubuttons_index = 0;
            while (loop_menubuttons_index < times) {
                loop_menubuttons_11();
                if (!loop_menubuttons_running) break;
                loop_menubuttons_index++;
            }
        }
    }
    event_273_11_end: ;
}
// Function purpose: generated callback event_func_5795 processes event block(s) 282_11. Actions/conditions:
//        282_11: saves the current object selection; saves the current object selection; sets Esc to 1; plus 5 more
//        actions.
void Frames::event_func_5795()
{
    // event 282_11 : saves the current object selection; saves the current object selection; sets Esc to 1; plus 5 more actions
    bool or_result_282_11 = false;
    bool or_temp_result_282_11_0 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_282_11_0_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(33))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto or_event_282_11_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_282_11_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_282_11_0_end;
        or_result_282_11 = true;
        or_temp_result_282_11_0 = true;
    }
    or_event_282_11_0_end: ;
    dialogButton_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_282_11_0) {
        dialogButton_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 282_11 : saves the current object selection; saves the current object selection; sets Esc to 1; plus 5 more actions
    bool or_temp_result_282_11_1 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_282_11_1_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto or_event_282_11_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_282_11_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_282_11_1_end;
        or_result_282_11 = true;
        or_temp_result_282_11_1 = true;
        or_event_282_11_1_end: ;
        if (or_temp_result_282_11_1) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_282_11) goto or_final_or_event_282_11_1_end;
        dialogButton_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_282_11_0) {
            dialogButton_instances.restore_selection();
        }
        if (or_temp_result_282_11_0 || or_temp_result_282_11_1) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(561, str_esc_202, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        {
            loop_menu_close_running = true;
            int times = int(1);
            loop_menu_close_index = 0;
            while (loop_menu_close_index < times) {
                loop_menu_close_11();
                if (!loop_menu_close_running) break;
                loop_menu_close_index++;
            }
        }
    }
    or_final_or_event_282_11_1_end: ;
}
// Function purpose: generated callback event_func_5796 processes event block(s) 283_11. Actions/conditions:
//        283_11: sets Esc to 1; sets LClick to 1; plays a sound or music track.
void Frames::event_func_5796()
{
    // event 283_11 : sets Esc to 1; sets LClick to 1; plays a sound or music track
    bool or_result_283_11 = false;
    bool or_temp_result_283_11_2 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_283_11_2_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto or_event_283_11_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(561, str_esc_202)) == (0))) goto or_event_283_11_2_end;
        or_result_283_11 = true;
        or_temp_result_283_11_2 = true;
    }
    or_event_283_11_2_end: ;
    // event 283_11 : sets Esc to 1; sets LClick to 1; plays a sound or music track
    bool or_temp_result_283_11_3 = false;
    {
        if (!(group_code_1 && group_code_menu_1)) goto or_event_283_11_3_end;
        if (!(is_key_pressed_once(SDLK_F1))) goto or_event_283_11_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(561, str_esc_202)) == (0))) goto or_event_283_11_3_end;
        or_result_283_11 = true;
        or_temp_result_283_11_3 = true;
        or_event_283_11_3_end: ;
        if (!or_result_283_11) goto or_final_or_event_283_11_3_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(561, str_esc_202, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        {
            loop_menu_close_running = true;
            int times = int(1);
            loop_menu_close_index = 0;
            while (loop_menu_close_index < times) {
                loop_menu_close_11();
                if (!loop_menu_close_running) break;
                loop_menu_close_index++;
            }
        }
    }
    or_final_or_event_283_11_3_end: ;
}
// Function purpose: generated callback event_func_5797 processes event block(s) 285_11. Actions/conditions:
//        285_11: sets LClick to 1; plays a sound or music track.
void Frames::event_func_5797()
{
    // event 285_11 : sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_285_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(36))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_285_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(1))) goto event_285_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_285_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_menuquit_running = true;
            int times = int(1);
            loop_menuquit_index = 0;
            while (loop_menuquit_index < times) {
                loop_menuquit_11();
                if (!loop_menuquit_running) break;
                loop_menuquit_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_285_11_end: ;
}
// Function purpose: generated callback event_func_5798 processes event block(s) 286_11. Actions/conditions:
//        286_11: loads a game or save-data file; sets LClick to 1; creates a dialogue2 677 object; plus 5 more
//        actions.
void Frames::event_func_5798()
{
    // event 286_11 : loads a game or save-data file; sets LClick to 1; creates a dialogue2 677 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_286_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(34))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_286_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(1))) goto event_286_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_286_11_end;
        ((INI*)get_instance(mapload_322_instances))->load_file(str_settings_cfg_2548, false, false, true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        FrameObject * single_instance_286_11_0; single_instance_286_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_tutorialDialogText(parent->x + -55, parent->y + -50), parent->layer);
                if (single_instance_286_11_0 == NULL)
                    single_instance_286_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_286_11_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_1_97)+str__247+number_to_string(global_values->get(9))+str__2549+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_2_155)+str__247+number_to_string(global_values->get(10))+str__2549+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_3_158)+str__1589);
        {
            loop_menuoptions_running = true;
            int times = int(1);
            loop_menuoptions_index = 0;
            while (loop_menuoptions_index < times) {
                loop_menuoptions_11();
                if (!loop_menuoptions_running) break;
                loop_menuoptions_index++;
            }
        }
        {
            loop_options_screen_running = true;
            int times = int(1);
            loop_options_screen_index = 0;
            while (loop_options_screen_index < times) {
                loop_options_screen_6();
                if (!loop_options_screen_running) break;
                loop_options_screen_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_286_11_end: ;
}
// Function purpose: generated callback event_func_5799 processes event block(s) 287_11. Actions/conditions:
//        287_11: sets LClick to 1; plays a sound or music track.
void Frames::event_func_5799()
{
    // event 287_11 : sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_287_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(35))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_287_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(1))) goto event_287_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_287_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_basemenuhelp_running = true;
            int times = int(1);
            loop_basemenuhelp_index = 0;
            while (loop_basemenuhelp_index < times) {
                loop_basemenuhelp_11();
                if (!loop_basemenuhelp_running) break;
                loop_basemenuhelp_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_287_11_end: ;
}
// Function purpose: generated callback event_func_5800 processes event block(s) 304_11. Actions/conditions:
//        304_11: sets the selected object's direction to 24; sets LClick to 1; removes the selected object; plus 1
//        more actions.
void Frames::event_func_5800()
{
    // event 304_11 : sets the selected object's direction to 24; sets LClick to 1; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_304_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(37))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_304_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_304_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_304_11_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(24);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        {
            loop_menubuttons_running = true;
            int times = int(1);
            loop_menubuttons_index = 0;
            while (loop_menubuttons_index < times) {
                loop_menubuttons_11();
                if (!loop_menubuttons_running) break;
                loop_menubuttons_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_304_11_end: ;
}
// Function purpose: generated callback event_func_5801 processes event block(s) 327_11. Actions/conditions:
//        327_11: sets LClick to 1; plays a sound or music track.
void Frames::event_func_5801()
{
    // event 327_11 : sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_327_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_327_11_end;
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!helpTopicCursor_instances.has_selection()) goto event_327_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_327_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_327_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(256))) goto event_327_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_327_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_327_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_menuhelp_running = true;
            int times = int(1);
            loop_menuhelp_index = 0;
            while (loop_menuhelp_index < times) {
                loop_menuhelp_11();
                if (!loop_menuhelp_running) break;
                loop_menuhelp_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_327_11_end: ;
}
// Function purpose: generated callback event_func_5802 processes event block(s) 328_11. Actions/conditions:
//        328_11: sets LClick to 1; plays a sound or music track.
void Frames::event_func_5802()
{
    // event 328_11 : sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_328_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(41))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_328_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(256))) goto event_328_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_328_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_menubuttons_running = true;
            int times = int(1);
            loop_menubuttons_index = 0;
            while (loop_menubuttons_index < times) {
                loop_menubuttons_11();
                if (!loop_menubuttons_running) break;
                loop_menubuttons_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_328_11_end: ;
}
// Function purpose: generated callback event_func_5803 processes event block(s) 373_11. Actions/conditions:
//        373_11: sets the selected object's direction to 0; sets LClick to 1; removes the selected object; plus 1
//        more actions.
void Frames::event_func_5803()
{
    // event 373_11 : sets the selected object's direction to 0; sets LClick to 1; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_373_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(41))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_373_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(16))) goto event_373_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_373_11_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        {
            loop_basemenuhelp_running = true;
            int times = int(1);
            loop_basemenuhelp_index = 0;
            while (loop_basemenuhelp_index < times) {
                loop_basemenuhelp_11();
                if (!loop_basemenuhelp_running) break;
                loop_basemenuhelp_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_373_11_end: ;
}
// Function purpose: generated callback event_func_5804 processes event block(s) 385_11. Actions/conditions:
//        385_11: sets the selected object's direction to 24; sets LClick to 1; removes the selected object; plus 1
//        more actions.
void Frames::event_func_5804()
{
    // event 385_11 : sets the selected object's direction to 24; sets LClick to 1; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_385_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(42))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_385_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(16777216))) goto event_385_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_385_11_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(24);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        media.play_id(SOUND_PLIP_16, 1-1);
        {
            loop_menubuttons_running = true;
            int times = int(1);
            loop_menubuttons_index = 0;
            while (loop_menubuttons_index < times) {
                loop_menubuttons_11();
                if (!loop_menubuttons_running) break;
                loop_menubuttons_index++;
            }
        }
    }
    event_385_11_end: ;
}
// Function purpose: generated callback event_func_5805 processes event block(s) 386_11. Actions/conditions:
//        386_11: sets LClick to 1; plays a sound or music track; starts a screen transition.
void Frames::event_func_5805()
{
    // event 386_11 : sets LClick to 1; plays a sound or music track; starts a screen transition
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_386_11_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(41))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_386_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(16777216))) goto event_386_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_386_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        media.play_id(SOUND_PLIP_16, 1-1);
        next_frame = 1 + 0;    
        if (loop_count != 0)
            manager.set_fade(Transition::DOOR, Color(0, 0, 0), 2.22222222222);
    
    }
    event_386_11_end: ;
}
// Function purpose: generated callback event_func_5806 processes event block(s) 388_11. Actions/conditions:
//        388_11: sets the selected object's layer to 2-1; sets the object's animation to 5; sets the selected
//        object's horizontal position to (playerBase->get_x()); plus 1 more actions.
void Frames::event_func_5806()
{
    // event 388_11 : sets the selected object's layer to 2-1; sets the object's animation to 5; sets the selected object's horizontal position to (playerBase->get_x()); plus 1 more actions
    {
        if (!(group_code_1)) goto event_388_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_388_11_end;
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_layer(2-1);
        ((Active*)get_instance(upperlevelcheck_206_instances))->force_animation(5);
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_x((((Active*)get_instance(playerBase_instances))->get_x()));
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_y((((Active*)get_instance(playerBase_instances))->get_y())+18);
    }
    event_388_11_end: ;
}
// Function purpose: generated callback event_func_5807 processes event block(s) 399_11. Actions/conditions:
//        399_11: checks scene is active; game state DirDown; game state Zip; the event-specific game state condition
//        is met; this handler gates a game event without a direct.
void Frames::event_func_5807()
{
    // event 399_11 : checks scene is active; game state DirDown; game state Zip; the event-specific game state condition is met; this handler gates a game event without a direct
    {
        if (!(group_code_1)) goto event_399_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(504, str_dirdown_1396)) > (0))) goto event_399_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(756, str_zip_1932)) == (empty_string))) goto event_399_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_399_11_end;
        if (group_code_1 && group_code_input_move_keys_movement_1) goto event_399_11_end;
        if (!group_code_input_move_keys_movement_1) {
            group_code_input_move_keys_movement_1 = true;
        }
    }
    event_399_11_end: ;
}
// Function purpose: generated callback event_func_5808 processes event block(s) 402_11. Actions/conditions:
//        402_11: sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1
//        more actions.
void Frames::event_func_5808()
{
    // event 402_11 : sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_402_11_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.up))))) goto event_402_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_402_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_402_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(965, str_origx_2440, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(964, str_origy_2439, ((Active*)get_instance(playerBase_instances))->get_y());
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), false, -2);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_11();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_11();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
    }
    event_402_11_end: ;
}
// Function purpose: generated callback event_func_5809 processes event block(s) 403_11. Actions/conditions:
//        403_11: sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1
//        more actions.
void Frames::event_func_5809()
{
    // event 403_11 : sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_403_11_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.down))))) goto event_403_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_403_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_403_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(965, str_origx_2440, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(964, str_origy_2439, ((Active*)get_instance(playerBase_instances))->get_y());
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), false, 2);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_11();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_11();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
    }
    event_403_11_end: ;
}
// Function purpose: generated callback event_func_5810 processes event block(s) 404_11. Actions/conditions:
//        404_11: sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1
//        more actions.
void Frames::event_func_5810()
{
    // event 404_11 : sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_404_11_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.left))))) goto event_404_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_404_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_404_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(965, str_origx_2440, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(964, str_origy_2439, ((Active*)get_instance(playerBase_instances))->get_y());
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), true, -2);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_11();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_x_running = true;
            int times = int(1);
            loop_move_check_x_index = 0;
            while (loop_move_check_x_index < times) {
                loop_move_check_x_11();
                if (!loop_move_check_x_running) break;
                loop_move_check_x_index++;
            }
        }
    }
    event_404_11_end: ;
}
// Function purpose: generated callback event_func_5811 processes event block(s) 405_11. Actions/conditions:
//        405_11: sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1
//        more actions.
void Frames::event_func_5811()
{
    // event 405_11 : sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_405_11_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.right))))) goto event_405_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_405_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_405_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(965, str_origx_2440, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(964, str_origy_2439, ((Active*)get_instance(playerBase_instances))->get_y());
        VITA_MOVE(((Active*)get_instance(playerBase_instances)), true, 2);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_11();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_x_running = true;
            int times = int(1);
            loop_move_check_x_index = 0;
            while (loop_move_check_x_index < times) {
                loop_move_check_x_11();
                if (!loop_move_check_x_running) break;
                loop_move_check_x_index++;
            }
        }
    }
    event_405_11_end: ;
}
// Function purpose: generated callback event_func_5812 processes event block(s) 406_11. Actions/conditions:
//        406_11: sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1
//        more actions.
void Frames::event_func_5812()
{
    // event 406_11 : sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_406_11_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.up))))) goto event_406_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_406_11_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_406_11_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_406_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_406_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_406_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(965, str_origx_2440, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(964, str_origy_2439, ((Active*)get_instance(playerBase_instances))->get_y());
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_single(qualifier_18, default_active_instance))->get_y()-8);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_11();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_11();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
    }
    event_406_11_end: ;
}
// Function purpose: generated callback event_func_5813 processes event block(s) 407_11. Actions/conditions:
//        407_11: sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1
//        more actions.
void Frames::event_func_5813()
{
    // event 407_11 : sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_407_11_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.down))))) goto event_407_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_407_11_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_407_11_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_407_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_407_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_407_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(965, str_origx_2440, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(964, str_origy_2439, ((Active*)get_instance(playerBase_instances))->get_y());
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_single(qualifier_18, default_active_instance))->get_y()+20);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_11();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_11();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
    }
    event_407_11_end: ;
}
// Function purpose: generated callback event_func_5814 processes event block(s) 408_11. Actions/conditions:
//        408_11: sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 5
//        more actions.
void Frames::event_func_5814()
{
    // event 408_11 : sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_408_11_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.left))))) goto event_408_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_408_11_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_408_11_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_408_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_408_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_408_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(965, str_origx_2440, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(964, str_origy_2439, ((Active*)get_instance(playerBase_instances))->get_y());
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_instance(playerBase_instances))->get_x()-16);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y()+6);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_11();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_x_running = true;
            int times = int(1);
            loop_move_check_x_index = 0;
            while (loop_move_check_x_index < times) {
                loop_move_check_x_11();
                if (!loop_move_check_x_running) break;
                loop_move_check_x_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_11();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
    }
    event_408_11_end: ;
}
// Function purpose: generated callback event_func_5815 processes event block(s) 409_11. Actions/conditions:
//        409_11: sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 5
//        more actions.
void Frames::event_func_5815()
{
    // event 409_11 : sets Blocked to 0; sets origX to playerBase->get_x(); sets origY to playerBase->get_y(); plus 5 more actions
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_409_11_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.right))))) goto event_409_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_409_11_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_409_11_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_409_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_409_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_409_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(965, str_origx_2440, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(964, str_origy_2439, ((Active*)get_instance(playerBase_instances))->get_y());
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_instance(playerBase_instances))->get_x()+16);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(playerBase_instances))->get_y()+6);
        {
            loop_move_check_running = true;
            int times = int(1);
            loop_move_check_index = 0;
            while (loop_move_check_index < times) {
                loop_move_check_11();
                if (!loop_move_check_running) break;
                loop_move_check_index++;
            }
        }
        {
            loop_move_check_x_running = true;
            int times = int(1);
            loop_move_check_x_index = 0;
            while (loop_move_check_x_index < times) {
                loop_move_check_x_11();
                if (!loop_move_check_x_running) break;
                loop_move_check_x_index++;
            }
        }
        {
            loop_move_check_y_running = true;
            int times = int(1);
            loop_move_check_y_index = 0;
            while (loop_move_check_y_index < times) {
                loop_move_check_y_11();
                if (!loop_move_check_y_running) break;
                loop_move_check_y_index++;
            }
        }
    }
    event_409_11_end: ;
}
// Function purpose: generated callback event_func_5816 processes event block(s) 448_11. Actions/conditions:
//        448_11: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_5816()
{
    // event 448_11 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1)) goto event_448_11_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) != (((Active*)get_instance(playerBase_instances))->get_y()))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(6)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_448_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_448_11_end;
        {
            loop_align_char_y_running = true;
            int times = int(2);
            loop_align_char_y_index = 0;
            while (loop_align_char_y_index < times) {
                loop_align_char_y_6();
                if (!loop_align_char_y_running) break;
                loop_align_char_y_index++;
            }
        }
        {
            loop_cancel_actions_running = true;
            int times = int(1);
            loop_cancel_actions_index = 0;
            while (loop_cancel_actions_index < times) {
                loop_cancel_actions_11();
                if (!loop_cancel_actions_running) break;
                loop_cancel_actions_index++;
            }
        }
    }
    event_448_11_end: ;
}
// Function purpose: generated callback event_func_5817 processes event block(s) 451_11. Actions/conditions:
//        451_11: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_5817()
{
    // event 451_11 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1)) goto event_451_11_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) != (((Active*)get_instance(playerBase_instances))->get_x()))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(6)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_451_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_451_11_end;
        {
            loop_align_char_x_running = true;
            int times = int(2);
            loop_align_char_x_index = 0;
            while (loop_align_char_x_index < times) {
                loop_align_char_x_6();
                if (!loop_align_char_x_running) break;
                loop_align_char_x_index++;
            }
        }
        {
            loop_cancel_actions_running = true;
            int times = int(1);
            loop_cancel_actions_index = 0;
            while (loop_cancel_actions_index < times) {
                loop_cancel_actions_11();
                if (!loop_cancel_actions_running) break;
                loop_cancel_actions_index++;
            }
        }
    }
    event_451_11_end: ;
}
// Function purpose: generated callback event_func_5818 processes event block(s) 456_11. Actions/conditions:
//        456_11: adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1;
//        sets the selected object's direction to 24; plus 6 more actions.
void Frames::event_func_5818()
{
    // event 456_11 : adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_456_11_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.up))))) goto event_456_11_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_456_11_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_456_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_456_11_end;
        unmountcheck_197_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_unmountcheck_197(0, 0), 1);
            unmountcheck_197_instances.add_back();
        }
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_y()-8);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 0);
        {
            loop_climb_off_running = true;
            int times = int(1);
            loop_climb_off_index = 0;
            while (loop_climb_off_index < times) {
                loop_climb_off_11();
                if (!loop_climb_off_running) break;
                loop_climb_off_index++;
            }
        }
    }
    event_456_11_end: ;
}
// Function purpose: generated callback event_func_5819 processes event block(s) 457_11. Actions/conditions:
//        457_11: adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1;
//        sets the selected object's direction to 24; plus 6 more actions.
void Frames::event_func_5819()
{
    // event 457_11 : adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_457_11_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.down))))) goto event_457_11_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_457_11_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_457_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_457_11_end;
        unmountcheck_197_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_unmountcheck_197(0, 0), 1);
            unmountcheck_197_instances.add_back();
        }
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_y()+24);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 0);
        {
            loop_climb_off_running = true;
            int times = int(1);
            loop_climb_off_index = 0;
            while (loop_climb_off_index < times) {
                loop_climb_off_11();
                if (!loop_climb_off_running) break;
                loop_climb_off_index++;
            }
        }
    }
    event_457_11_end: ;
}
// Function purpose: generated callback event_func_5820 processes event block(s) 458_11. Actions/conditions:
//        458_11: adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1;
//        sets the selected object's direction to 24; plus 6 more actions.
void Frames::event_func_5820()
{
    // event 458_11 : adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_458_11_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.right))))) goto event_458_11_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_458_11_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_458_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_458_11_end;
        unmountcheck_197_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_unmountcheck_197(0, 0), 1);
            unmountcheck_197_instances.add_back();
        }
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_x()+24);
            ((Active*)*it)->set_y(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_y()+8);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 0);
        {
            loop_climb_off_running = true;
            int times = int(1);
            loop_climb_off_index = 0;
            while (loop_climb_off_index < times) {
                loop_climb_off_11();
                if (!loop_climb_off_running) break;
                loop_climb_off_index++;
            }
        }
    }
    event_458_11_end: ;
}
// Function purpose: generated callback event_func_5821 processes event block(s) 459_11. Actions/conditions:
//        459_11: adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1;
//        sets the selected object's direction to 24; plus 6 more actions.
void Frames::event_func_5821()
{
    // event 459_11 : adds a unmountcheck 197 instance; sets the selected object's layer to playerBase->layer->index+1-1; sets the selected object's direction to 24; plus 6 more actions
    {
        if (!(group_code_1 && group_code_input_dismount_1)) goto event_459_11_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.left))))) goto event_459_11_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_459_11_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_459_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_459_11_end;
        unmountcheck_197_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_unmountcheck_197(0, 0), 1);
            unmountcheck_197_instances.add_back();
        }
        for (ObjectIterator it(unmountcheck_197_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->set_x(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_x()-8);
            ((Active*)*it)->set_y(((Active*)get_single(qualifier_1, it.current_index, default_active_instance))->get_y()+8);
        }
        {
            loop_climb_off_running = true;
            int times = int(1);
            loop_climb_off_index = 0;
            while (loop_climb_off_index < times) {
                loop_climb_off_11();
                if (!loop_climb_off_running) break;
                loop_climb_off_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(538, str_blocked_1439, 0);
    }
    event_459_11_end: ;
}
// Function purpose: generated callback event_func_5822 processes event block(s) 493_11. Actions/conditions:
//        493_11: saves the current object selection; saves the current object selection; starts a screen transition.
void Frames::event_func_5822()
{
    // event 493_11 : saves the current object selection; saves the current object selection; starts a screen transition
    bool or_result_493_11 = false;
    bool or_temp_result_493_11_0 = false;
    {
        if (!(group_code_1)) goto or_event_493_11_0_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_493_11_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_493_11_0_end;
        or_result_493_11 = true;
        or_temp_result_493_11_0 = true;
    }
    or_event_493_11_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    playerBase_instances.clear_saved_selection();
    if (or_temp_result_493_11_0) {
        dialogPanel_instances.save_selection();
        playerBase_instances.save_selection();
    }
    // event 493_11 : saves the current object selection; saves the current object selection; starts a screen transition
    bool or_temp_result_493_11_1 = false;
    {
        if (!(group_code_1)) goto or_event_493_11_1_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (width-24))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_493_11_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_493_11_1_end;
        or_result_493_11 = true;
        or_temp_result_493_11_1 = true;
    }
    or_event_493_11_1_end: ;
    if (or_temp_result_493_11_1) {
        dialogPanel_instances.save_selection();
        playerBase_instances.save_selection();
    }
    // event 493_11 : saves the current object selection; saves the current object selection; starts a screen transition
    bool or_temp_result_493_11_2 = false;
    {
        if (!(group_code_1)) goto or_event_493_11_2_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) <= (0))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_493_11_2_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_493_11_2_end;
        or_result_493_11 = true;
        or_temp_result_493_11_2 = true;
    }
    or_event_493_11_2_end: ;
    if (or_temp_result_493_11_2) {
        dialogPanel_instances.save_selection();
        playerBase_instances.save_selection();
    }
    // event 493_11 : saves the current object selection; saves the current object selection; starts a screen transition
    bool or_temp_result_493_11_3 = false;
    {
        if (!(group_code_1)) goto or_event_493_11_3_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (height-16))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_493_11_3_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_493_11_3_end;
        or_result_493_11 = true;
        or_temp_result_493_11_3 = true;
        or_event_493_11_3_end: ;
        if (or_temp_result_493_11_3) {
            dialogPanel_instances.save_selection();
            playerBase_instances.save_selection();
        }
        if (!or_result_493_11) goto or_final_or_event_493_11_3_end;
        dialogPanel_instances.empty_selection();
        playerBase_instances.empty_selection();
        if (or_temp_result_493_11_0 || or_temp_result_493_11_1 || or_temp_result_493_11_2 || or_temp_result_493_11_3) {
            dialogPanel_instances.restore_selection();
        }
        if (or_temp_result_493_11_0 || or_temp_result_493_11_1 || or_temp_result_493_11_2 || or_temp_result_493_11_3) {
            playerBase_instances.restore_selection();
        }
        next_frame = index + 1 + 0;    
        if (loop_count != 0)
            manager.set_fade(Transition::DOOR, Color(0, 0, 0), 2.22222222222);
    
    }
    or_final_or_event_493_11_3_end: ;
}
// Function purpose: generated callback event_func_5823 processes event block(s) 500_11. Actions/conditions:
//        500_11: sets the object position in the world.
void Frames::event_func_5823()
{
    // event 500_11 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_500_11_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_500_11_end;
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(-50, -50);
            pos_end_500_11_0: ;
        }
    }
    event_500_11_end: ;
}
// Function purpose: generated callback event_func_5824 processes event block(s) 501_11. Actions/conditions:
//        501_11: checks scene is active; the event-specific game state condition is met; skips if dialog is open;
//        this handler gates a game event without a direct value/objec.
void Frames::event_func_5824()
{
    // event 501_11 : checks scene is active; the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct value/objec
    {
        if (!(group_code_1)) goto event_501_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (160))) goto event_501_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_501_11_end;
        {
            loop_close_level_running = true;
            int times = int(1);
            loop_close_level_index = 0;
            while (loop_close_level_index < times) {
                loop_close_level_11();
                if (!loop_close_level_running) break;
                loop_close_level_index++;
            }
        }
    }
    event_501_11_end: ;
}
// Function purpose: generated callback event_func_5825 processes event block(s) 505_11. Actions/conditions:
//        505_11: sets popup_timer to 1; increments popup_num by 1; sets the selected object's visibility to true;
//        plus 21 more actions.
void Frames::event_func_5825()
{
    // event 505_11 : sets popup_timer to 1; increments popup_num by 1; sets the selected object's visibility to true; plus 21 more actions
    {
        if (!(group_code_1)) goto event_505_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) >= (50))) goto event_505_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (1))) goto event_505_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_505_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(22);
        FrameObject * single_instance_505_11_0; single_instance_505_11_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_tutorialDialogText(parent->x + -112, parent->y + -35), parent->layer);
                if (single_instance_505_11_0 == NULL)
                    single_instance_505_11_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_505_11_0))->blend_color.set(Color(60, 60, 60));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((INI*)get_instance(translationData_instances))->get_string(str_tut_2441, str_3_158));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str_up_1813, translate_key_to_string(manager.up)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str_left_1814, translate_key_to_string(manager.left)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str_down_1815, translate_key_to_string(manager.down)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str_right_1816, translate_key_to_string(manager.right)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__624));
        ((Text*)((Text*)single_instance_505_11_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        FrameObject * single_instance_505_11_1; single_instance_505_11_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_688(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_505_11_1 == NULL)
                    single_instance_505_11_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_505_11_1))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_505_11_1)), frame_left()));
        ((Text*)((Text*)single_instance_505_11_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+10);
        ((Text*)((Text*)single_instance_505_11_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_tut_2441, str_2_155)));
        ((Text*)((Text*)single_instance_505_11_1))->blend_color.set(Color(192, 0, 0));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_tut_button_running = true;
            int times = int(1);
            loop_tut_button_index = 0;
            while (loop_tut_button_index < times) {
                loop_tut_button_11();
                if (!loop_tut_button_running) break;
                loop_tut_button_index++;
            }
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_bold(1);
        }
    }
    event_505_11_end: ;
}
// Function purpose: generated callback event_func_5826 processes event block(s) 506_11. Actions/conditions:
//        506_11: sets strNum to 4; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 12 more
//        actions.
void Frames::event_func_5826()
{
    VITA_LEGACY_EVENT();
    // event 506_11 : sets strNum to 4; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 12 more actions
    {
        if (!(group_code_1)) goto event_506_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (2))) goto event_506_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_506_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_506_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 4);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mouse1_714(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            esc::createYellowPopUpCloud(static_cast<Active*>(*it), esc::Anchor::Right, 28, 20);
        }
        FrameObject * single_instance_506_11_1; single_instance_506_11_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 5, parent->y + 5), parent->layer);
                if (single_instance_506_11_1 == NULL)
                    single_instance_506_11_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_506_11_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_506_11_end: ;
}
// Function purpose: generated callback event_func_5827 processes event block(s) 507_11. Actions/conditions:
//        507_11: sets the object position in the world; sets the selected object's direction to 24.
void Frames::event_func_5827()
{
    // event 507_11 : sets the object position in the world; sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_507_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (2))) goto event_507_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_507_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_507_11_end;
        {
            FrameObject * parent = ((Active*)get_single(desks_717_instances));
            if (parent == NULL) goto pos_end_507_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 2);
            pos_end_507_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
    }
    event_507_11_end: ;
}
// Function purpose: generated callback event_func_5828 processes event block(s) 508_11. Actions/conditions:
//        508_11: sets the object position in the world.
void Frames::event_func_5828()
{
    // event 508_11 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_508_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (2))) goto event_508_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_508_11_end;
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(-50, -50);
            pos_end_508_11_0: ;
        }
    }
    event_508_11_end: ;
}
// Function purpose: generated callback event_func_5829 processes event block(s) 509_11. Actions/conditions:
//        509_11: sets the selected object's direction to 24; sets the object position in the world.
void Frames::event_func_5829()
{
    // event 509_11 : sets the selected object's direction to 24; sets the object position in the world
    {
        if (!(group_code_1)) goto event_509_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (2))) goto event_509_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_509_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(16))) goto event_509_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (74))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_509_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_509_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -10);
            pos_end_509_11_0: ;
        }
    }
    event_509_11_end: ;
}
// Function purpose: generated callback event_func_5830 processes event block(s) 510_11. Actions/conditions:
//        510_11: sets the selected object's direction to 24; sets the object position in the world.
void Frames::event_func_5830()
{
    // event 510_11 : sets the selected object's direction to 24; sets the object position in the world
    {
        if (!(group_code_1)) goto event_510_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (2))) goto event_510_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_510_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(16))) goto event_510_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (24))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_510_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_510_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -10);
            pos_end_510_11_0: ;
        }
    }
    event_510_11_end: ;
}
// Function purpose: generated callback event_func_5831 processes event block(s) 511_11. Actions/conditions:
//        511_11: sets popup_timer to 1; increments popup_num by 1.
void Frames::event_func_5831()
{
    // event 511_11 : sets popup_timer to 1; increments popup_num by 1
    {
        if (!(group_code_1)) goto event_511_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (2))) goto event_511_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_24_2550, 0)) != (-1))) goto event_511_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_74_2551, 0)) != (-1))) goto event_511_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
    }
    event_511_11_end: ;
}
// Function purpose: generated callback event_func_5832 processes event block(s) 512_11. Actions/conditions:
//        512_11: sets strNum to 5; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 10 more
//        actions.
void Frames::event_func_5832()
{
    VITA_LEGACY_EVENT();
    // event 512_11 : sets strNum to 5; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 10 more actions
    {
        if (!(group_code_1)) goto event_512_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (3))) goto event_512_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_512_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_512_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 5);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_512_11_end: ;
}
// Function purpose: generated callback event_func_5833 processes event block(s) 513_11. Actions/conditions:
//        513_11: sets the object position in the world.
void Frames::event_func_5833()
{
    // event 513_11 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_513_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (3))) goto event_513_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_513_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_513_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_513_11_end;
        {
            FrameObject * parent = ((Active*)get_single(desks_717_instances));
            if (parent == NULL) goto pos_end_513_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 2);
            pos_end_513_11_0: ;
        }
    }
    event_513_11_end: ;
}
// Function purpose: generated callback event_func_5834 processes event block(s) 514_11. Actions/conditions:
//        514_11: sets the object position in the world.
void Frames::event_func_5834()
{
    // event 514_11 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_514_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (3))) goto event_514_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_514_11_end;
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(-50, -50);
            pos_end_514_11_0: ;
        }
    }
    event_514_11_end: ;
}
// Function purpose: generated callback event_func_5835 processes event block(s) 515_11. Actions/conditions:
//        515_11: sets the object position in the world.
void Frames::event_func_5835()
{
    // event 515_11 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_515_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (3))) goto event_515_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) != (0))) goto event_515_11_end;
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(-50, -50);
            pos_end_515_11_0: ;
        }
    }
    event_515_11_end: ;
}
// Function purpose: generated callback event_func_5836 processes event block(s) 516_11. Actions/conditions:
//        516_11: sets the object position in the world.
void Frames::event_func_5836()
{
    // event 516_11 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_516_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (3))) goto event_516_11_end;
        {
            FrameObject * parent = ((Active*)get_instance(bedplayer_338_instances));
            if (parent == NULL) goto pos_end_516_11_0;
            ((Active*)get_instance(tutarrow2_773_instances))->set_global_position(parent->get_x() + 16, parent->get_y() + 16);
            pos_end_516_11_0: ;
        }
    }
    event_516_11_end: ;
}
// Function purpose: generated callback event_func_5837 processes event block(s) 517_11. Actions/conditions:
//        517_11: sets popup_num to 4; sets popup_timer to 1.
void Frames::event_func_5837()
{
    // event 517_11 : sets popup_num to 4; sets popup_timer to 1
    {
        if (!(group_code_1)) goto event_517_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (3))) goto event_517_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (1024))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (608))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_517_11_end;
        if (once_condition_517_11) goto event_517_11_end;
        once_condition_517_11 = true;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(978, str_popup_num_2542, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
    }
    event_517_11_end: ;
}
// Function purpose: generated callback event_func_5838 processes event block(s) 518_11. Actions/conditions:
//        518_11: sets strNum to 6; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 9 more
//        actions.
void Frames::event_func_5838()
{
    VITA_LEGACY_EVENT();
    // event 518_11 : sets strNum to 6; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 9 more actions
    {
        if (!(group_code_1)) goto event_518_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (4))) goto event_518_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_518_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_518_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 6);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_frame(0);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            ((Active*)get_instance(tutarrow2_773_instances))->set_global_position(-30, -30);
            pos_end_518_11_0: ;
        }
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_518_11_end: ;
}
// Function purpose: generated callback event_func_5839 processes event block(s) 519_11. Actions/conditions:
//        519_11: sets the object position in the world; sets the selected object's direction to 24.
void Frames::event_func_5839()
{
    // event 519_11 : sets the object position in the world; sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_519_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (4))) goto event_519_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_519_11_end;
        {
            FrameObject * parent = ((Active*)get_single(desks_717_instances));
            if (parent == NULL) goto pos_end_519_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 2);
            pos_end_519_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
    }
    event_519_11_end: ;
}
// Function purpose: generated callback event_func_5840 processes event block(s) 520_11. Actions/conditions:
//        520_11: increments popup_num by 1; sets popup_timer to 1.
void Frames::event_func_5840()
{
    // event 520_11 : increments popup_num by 1; sets popup_timer to 1
    {
        if (!(group_code_1)) goto event_520_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (4))) goto event_520_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(505, str_onunit_1397)) == (1))) goto event_520_11_end;
        desks_717_instances.clear_selection();
        for (ObjectIterator it(desks_717_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (1024))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (608))) { it.deselect(); continue; }
        }
        if (!desks_717_instances.has_selection()) goto event_520_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
    }
    event_520_11_end: ;
}
// Function purpose: generated callback event_func_5841 processes event block(s) 521_11. Actions/conditions:
//        521_11: sets strNum to 7; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 7 more
//        actions.
void Frames::event_func_5841()
{
    VITA_LEGACY_EVENT();
    // event 521_11 : sets strNum to 7; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 7 more actions
    {
        if (!(group_code_1)) goto event_521_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (5))) goto event_521_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_521_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_521_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 7);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_521_11_end: ;
}
// Function purpose: generated callback event_func_5842 processes event block(s) 522_11. Actions/conditions:
//        522_11: sets popup_timer to 1; sets popup_num to 4.
void Frames::event_func_5842()
{
    // event 522_11 : sets popup_timer to 1; sets popup_num to 4
    {
        if (!(group_code_1)) goto event_522_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (5))) goto event_522_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(505, str_onunit_1397)) == (0))) goto event_522_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(978, str_popup_num_2542, 4);
    }
    event_522_11_end: ;
}
// Function purpose: generated callback event_func_5843 processes event block(s) 523_11. Actions/conditions:
//        523_11: sets the selected object's direction to 0; sets the object position in the world; moves the selected
//        object to the front; plus 1 more actions.
void Frames::event_func_5843()
{
    // event 523_11 : sets the selected object's direction to 0; sets the object position in the world; moves the selected object to the front; plus 1 more actions
    {
        if (!(group_code_1)) goto event_523_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (5))) goto event_523_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) != (24))) goto event_523_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (24))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_523_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_523_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + -10, parent->get_y() + 0);
            pos_end_523_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->move_front();
        ((Active*)get_instance(tutorialArrow_instances))->set_layer(6-1);
    }
    event_523_11_end: ;
}
// Function purpose: generated callback event_func_5844 processes event block(s) 524_11. Actions/conditions:
//        524_11: sets the object position in the world; sets the selected object's direction to 24.
void Frames::event_func_5844()
{
    // event 524_11 : sets the object position in the world; sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_524_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (5))) goto event_524_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (24))) goto event_524_11_end;
        {
            FrameObject * parent = ((Active*)get_instance(bedplayer_338_instances));
            if (parent == NULL) goto pos_end_524_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 24, parent->get_y() + 0);
            pos_end_524_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
    }
    event_524_11_end: ;
}
// Function purpose: generated callback event_func_5845 processes event block(s) 525_11. Actions/conditions:
//        525_11: sets the object position in the world.
void Frames::event_func_5845()
{
    // event 525_11 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_525_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (5))) goto event_525_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) > (0))) goto event_525_11_end;
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(-50, -50);
            pos_end_525_11_0: ;
        }
    }
    event_525_11_end: ;
}
// Function purpose: generated callback event_func_5846 processes event block(s) 526_11. Actions/conditions:
//        526_11: increments popup_num by 1; sets popup_timer to 1.
void Frames::event_func_5846()
{
    VITA_LEGACY_EVENT();
    // event 526_11 : increments popup_num by 1; sets popup_timer to 1
    {
        if (!(group_code_1)) goto event_526_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (5))) goto event_526_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) == (1))) goto event_526_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
    }
    event_526_11_end: ;
}
// Function purpose: generated callback event_func_5847 processes event block(s) 527_11. Actions/conditions:
//        527_11: sets strNum to 8; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 9 more
//        actions.
void Frames::event_func_5847()
{
    VITA_LEGACY_EVENT();
    // event 527_11 : sets strNum to 8; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 9 more actions
    {
        if (!(group_code_1)) goto event_527_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (6))) goto event_527_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_527_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_527_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 8);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            ((Active*)get_instance(active3_284_instances))->set_global_position(744, 440);
            pos_end_527_11_0: ;
        }
        ((Active*)get_instance(destarrow_283_instances))->set_layer(6-1);
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_527_11_end: ;
}
// Function purpose: generated callback event_func_5848 processes event block(s) 528_11. Actions/conditions:
//        528_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5848()
{
    // event 528_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1)) goto event_528_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (6))) goto event_528_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(active3_284_instances));
            if (obj1 == NULL) goto compare_528_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_528_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (get_distance(x1, y1, x2, y2) <= 50) goto event_528_11_end;
        }
        compare_528_11_0_end: ;
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(-50, -50);
            pos_end_528_11_1: ;
        }
        ((Active*)get_instance(destarrow_283_instances))->set_visible(true);
    }
    event_528_11_end: ;
}
// Function purpose: generated callback event_func_5849 processes event block(s) 529_11. Actions/conditions:
//        529_11: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_5849()
{
    // event 529_11 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1)) goto event_529_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (6))) goto event_529_11_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(active3_284_instances));
            if (obj1 == NULL) goto compare_529_11_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_529_11_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 50)) goto event_529_11_end;
        }
        compare_529_11_0_end: ;
        {
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(-50, -50);
            pos_end_529_11_1: ;
        }
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_529_11_end: ;
}
// Function purpose: generated callback event_func_5850 processes event block(s) 530_11. Actions/conditions:
//        530_11: sets the object position in the world; sets the selected object's direction to 24.
void Frames::event_func_5850()
{
    // event 530_11 : sets the object position in the world; sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_530_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (6))) goto event_530_11_end;
        {
            FrameObject * parent = ((Active*)get_instance(active3_284_instances));
            if (parent == NULL) goto pos_end_530_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -4);
            pos_end_530_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
    }
    event_530_11_end: ;
}
// Function purpose: generated callback event_func_5851 processes event block(s) 531_11. Actions/conditions:
//        531_11: increments popup_num by 1; sets popup_timer to 1.
void Frames::event_func_5851()
{
    // event 531_11 : increments popup_num by 1; sets popup_timer to 1
    {
        if (!(group_code_1)) goto event_531_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (6))) goto event_531_11_end;
        playerBase_instances.clear_selection();
        if (!((objects_in_zone(playerBase_instances, 720, 432, 768, 464)) > (0))) goto event_531_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_531_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
    }
    event_531_11_end: ;
}
// Function purpose: generated callback event_func_5852 processes event block(s) 532_11. Actions/conditions:
//        532_11: sets strNum to 9; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 8 more
//        actions.
void Frames::event_func_5852()
{
    VITA_LEGACY_EVENT();
    // event 532_11 : sets strNum to 9; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 8 more actions
    {
        if (!(group_code_1)) goto event_532_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (7))) goto event_532_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_532_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 9);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_532_11_end: ;
}
// Function purpose: generated callback event_func_5853 processes event block(s) 533_11. Actions/conditions:
//        533_11: sets the object position in the world; sets the selected object's direction to 24.
void Frames::event_func_5853()
{
    // event 533_11 : sets the object position in the world; sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_533_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (7))) goto event_533_11_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(980, str_merchid_2544)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_533_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_533_11_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_533_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + -1, parent->get_y() + -17);
            pos_end_533_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
    }
    event_533_11_end: ;
}
// Function purpose: generated callback event_func_5854 processes event block(s) 534_11. Actions/conditions:
//        534_11: sets the selected object's direction to 16; sets the object position in the world.
void Frames::event_func_5854()
{
    // event 534_11 : sets the selected object's direction to 16; sets the object position in the world
    {
        if (!(group_code_1)) goto event_534_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (7))) goto event_534_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_534_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_534_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->test_directions(16777216)) goto event_534_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(16);
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_534_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 90, parent->get_y() + 0);
            pos_end_534_11_0: ;
        }
    }
    event_534_11_end: ;
}
// Function purpose: generated callback event_func_5855 processes event block(s) 535_11. Actions/conditions:
//        535_11: sets the selected object's direction to 24; sets the object position in the world.
void Frames::event_func_5855()
{
    // event 535_11 : sets the selected object's direction to 24; sets the object position in the world
    {
        if (!(group_code_1)) goto event_535_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (7))) goto event_535_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_535_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_535_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(16777216))) goto event_535_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (48))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_535_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_535_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -13);
            pos_end_535_11_0: ;
        }
    }
    event_535_11_end: ;
}
// Function purpose: generated callback event_func_5856 processes event block(s) 536_11. Actions/conditions:
//        536_11: sets popup_timer to 1; increments popup_num by 1.
void Frames::event_func_5856()
{
    // event 536_11 : sets popup_timer to 1; increments popup_num by 1
    {
        if (!(group_code_1)) goto event_536_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (7))) goto event_536_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_48_2552, 0)) != (-1))) goto event_536_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
    }
    event_536_11_end: ;
}
// Function purpose: generated callback event_func_5857 processes event block(s) 537_11. Actions/conditions:
//        537_11: sets strNum to 10; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 7 more
//        actions.
void Frames::event_func_5857()
{
    VITA_LEGACY_EVENT();
    // event 537_11 : sets strNum to 10; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 7 more actions
    {
        if (!(group_code_1)) goto event_537_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (8))) goto event_537_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_537_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 10);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_537_11_end: ;
}
// Function purpose: generated callback event_func_5858 processes event block(s) 538_11. Actions/conditions:
//        538_11: saves the current object selection; sets the selected object's direction to 0; sets the object
//        position in the world; plus 5 more actions.
void Frames::event_func_5858()
{
    // event 538_11 : saves the current object selection; sets the selected object's direction to 0; sets the object position in the world; plus 5 more actions
    bool or_result_538_11 = false;
    bool or_temp_result_538_11_0 = false;
    {
        if (!(group_code_1)) goto or_event_538_11_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(978, str_popup_num_2542)) == (8))) goto or_event_538_11_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_538_11_0_end;
        or_result_538_11 = true;
        or_temp_result_538_11_0 = true;
    }
    or_event_538_11_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_538_11_0) {
        dialogPanel_instances.save_selection();
    }
    // event 538_11 : saves the current object selection; sets the selected object's direction to 0; sets the object position in the world; plus 5 more actions
    bool or_temp_result_538_11_1 = false;
    {
        if (!(group_code_1)) goto or_event_538_11_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(978, str_popup_num_2542)) == (8))) goto or_event_538_11_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(15)) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_538_11_1_end;
        or_result_538_11 = true;
        or_temp_result_538_11_1 = true;
        or_event_538_11_1_end: ;
        if (or_temp_result_538_11_1) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_538_11) goto or_final_or_event_538_11_1_end;
        dialogPanel_instances.empty_selection();
        if (or_temp_result_538_11_0 || or_temp_result_538_11_1) {
            dialogPanel_instances.restore_selection();
        }
        tutorialArrow_instances.clear_selection();
        for (ObjectIterator it(tutorialArrow_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(tutorialArrow_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(interfaceButtons_instances, it.current_index));
            if (parent == NULL) goto pos_end_538_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -1, parent->get_y() + 57);
            pos_end_538_11_0: ;
        }
        for (ObjectIterator it(tutorialArrow_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_layer(6-1);
        }
    }
    or_final_or_event_538_11_1_end: ;
}
// Function purpose: generated callback event_func_5859 processes event block(s) 539_11. Actions/conditions:
//        539_11: sets tmp to 0.
void Frames::event_func_5859()
{
    // event 539_11 : sets tmp to 0
    {
        if (!(group_code_1)) goto event_539_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (8))) goto event_539_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(981, str_tmp_2553, 0);
    }
    event_539_11_end: ;
}
// Function purpose: generated callback event_func_5860 processes event block(s) 540_11. Actions/conditions:
//        540_11: sets the selected object's direction to 24; sets the object position in the world; sets tmp to 1.
void Frames::event_func_5860()
{
    // event 540_11 : sets the selected object's direction to 24; sets the object position in the world; sets tmp to 1
    {
        if (!(group_code_1)) goto event_540_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (8))) goto event_540_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_540_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_540_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_540_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_540_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -20);
            pos_end_540_11_0: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(981, str_tmp_2553, 1);
    }
    event_540_11_end: ;
}
// Function purpose: generated callback event_func_5861 processes event block(s) 541_11. Actions/conditions:
//        541_11: sets the selected object's direction to 0; sets the object position in the world; sets tmp to 1.
void Frames::event_func_5861()
{
    // event 541_11 : sets the selected object's direction to 0; sets the object position in the world; sets tmp to 1
    {
        if (!(group_code_1)) goto event_541_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (8))) goto event_541_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_541_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_541_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (48))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_541_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_541_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + -10, parent->get_y() + 0);
            pos_end_541_11_0: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(981, str_tmp_2553, 1);
    }
    event_541_11_end: ;
}
// Function purpose: generated callback event_func_5862 processes event block(s) 542_11. Actions/conditions:
//        542_11: sets the selected object's direction to 0; sets the object position in the world; sets tmp to 1.
void Frames::event_func_5862()
{
    // event 542_11 : sets the selected object's direction to 0; sets the object position in the world; sets tmp to 1
    {
        if (!(group_code_1)) goto event_542_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (8))) goto event_542_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_542_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_542_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (74))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_542_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_542_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + -10, parent->get_y() + 0);
            pos_end_542_11_0: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(981, str_tmp_2553, 1);
    }
    event_542_11_end: ;
}
// Function purpose: generated callback event_func_5863 processes event block(s) 543_11. Actions/conditions:
//        543_11: sets the selected object's direction to 0; sets the object position in the world; sets tmp to 0.
void Frames::event_func_5863()
{
    // event 543_11 : sets the selected object's direction to 0; sets the object position in the world; sets tmp to 0
    {
        if (!(group_code_1)) goto event_543_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (8))) goto event_543_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(981, str_tmp_2553)) == (0))) goto event_543_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_543_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(15))) goto event_543_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_543_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + -61, parent->get_y() + 28);
            pos_end_543_11_0: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(981, str_tmp_2553, 0);
    }
    event_543_11_end: ;
}
// Function purpose: generated callback event_func_5864 processes event block(s) 544_11. Actions/conditions:
//        544_11: sets popup_timer to 1; increments popup_num by 1.
void Frames::event_func_5864()
{
    // event 544_11 : sets popup_timer to 1; increments popup_num by 1
    {
        if (!(group_code_1)) goto event_544_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (8))) goto event_544_11_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(503, str_invstring_1386), str_103_2554, 0)) != (-1))) goto event_544_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
    }
    event_544_11_end: ;
}
// Function purpose: generated callback event_func_5865 processes event block(s) 545_11. Actions/conditions:
//        545_11: sets strNum to 11; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 7 more
//        actions.
void Frames::event_func_5865()
{
    VITA_LEGACY_EVENT();
    // event 545_11 : sets strNum to 11; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 7 more actions
    {
        if (!(group_code_1)) goto event_545_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (9))) goto event_545_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_545_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 11);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_545_11_end: ;
}
// Function purpose: generated callback event_func_5866 processes event block(s) 546_11. Actions/conditions:
//        546_11: saves the current object selection; sets the selected object's direction to 0; sets the object
//        position in the world; plus 5 more actions.
void Frames::event_func_5866()
{
    // event 546_11 : saves the current object selection; sets the selected object's direction to 0; sets the object position in the world; plus 5 more actions
    bool or_result_546_11 = false;
    bool or_temp_result_546_11_0 = false;
    {
        if (!(group_code_1)) goto or_event_546_11_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(978, str_popup_num_2542)) == (9))) goto or_event_546_11_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_546_11_0_end;
        or_result_546_11 = true;
        or_temp_result_546_11_0 = true;
    }
    or_event_546_11_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_546_11_0) {
        dialogPanel_instances.save_selection();
    }
    // event 546_11 : saves the current object selection; sets the selected object's direction to 0; sets the object position in the world; plus 5 more actions
    bool or_temp_result_546_11_1 = false;
    {
        if (!(group_code_1)) goto or_event_546_11_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(978, str_popup_num_2542)) == (9))) goto or_event_546_11_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(19)) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_546_11_1_end;
        or_result_546_11 = true;
        or_temp_result_546_11_1 = true;
        or_event_546_11_1_end: ;
        if (or_temp_result_546_11_1) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_546_11) goto or_final_or_event_546_11_1_end;
        dialogPanel_instances.empty_selection();
        if (or_temp_result_546_11_0 || or_temp_result_546_11_1) {
            dialogPanel_instances.restore_selection();
        }
        tutorialArrow_instances.clear_selection();
        for (ObjectIterator it(tutorialArrow_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(tutorialArrow_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(interfaceButtons_instances, it.current_index));
            if (parent == NULL) goto pos_end_546_11_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 11);
            pos_end_546_11_0: ;
        }
        for (ObjectIterator it(tutorialArrow_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_layer(6-1);
        }
    }
    or_final_or_event_546_11_1_end: ;
}
// Function purpose: generated callback event_func_5867 processes event block(s) 547_11. Actions/conditions:
//        547_11: sets the selected object's direction to 0; sets the object position in the world.
void Frames::event_func_5867()
{
    // event 547_11 : sets the selected object's direction to 0; sets the object position in the world
    {
        if (!(group_code_1)) goto event_547_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (9))) goto event_547_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_547_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(19))) goto event_547_11_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (103))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_547_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(0);
        {
            FrameObject * parent = ((Active*)get_single(hudItem_instances));
            if (parent == NULL) goto pos_end_547_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + -10, parent->get_y() + 0);
            pos_end_547_11_0: ;
        }
    }
    event_547_11_end: ;
}
// Function purpose: generated callback event_func_5868 processes event block(s) 548_11. Actions/conditions:
//        548_11: sets popup_timer to 1; increments popup_num by 1.
void Frames::event_func_5868()
{
    // event 548_11 : sets popup_timer to 1; increments popup_num by 1
    {
        if (!(group_code_1)) goto event_548_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (9))) goto event_548_11_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704), 4)) == (str_103_2555))) goto event_548_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
    }
    event_548_11_end: ;
}
// Function purpose: generated callback event_func_5869 processes event block(s) 549_11. Actions/conditions:
//        549_11: sets strNum to 12; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 8 more
//        actions.
void Frames::event_func_5869()
{
    VITA_LEGACY_EVENT();
    // event 549_11 : sets strNum to 12; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 8 more actions
    {
        if (!(group_code_1)) goto event_549_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (10))) goto event_549_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_549_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 12);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str_combat_1817, uppercase_string(translate_key_to_string(manager.button3))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_549_11_end: ;
}
// Function purpose: generated callback event_func_5870 processes event block(s) 550_11. Actions/conditions:
//        550_11: sets the selected object's direction to 24; sets the object position in the world; sets the selected
//        object's visibility to true.
void Frames::event_func_5870()
{
    // event 550_11 : sets the selected object's direction to 24; sets the object position in the world; sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_550_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (10))) goto event_550_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_550_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_550_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_single(guardBase_instances));
            if (parent == NULL) goto pos_end_550_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -10);
            pos_end_550_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
    }
    event_550_11_end: ;
}
// Function purpose: generated callback event_func_5871 processes event block(s) 551_11. Actions/conditions:
//        551_11: sets the selected object's visibility to false.
void Frames::event_func_5871()
{
    // event 551_11 : sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_551_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (10))) goto event_551_11_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_551_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(false);
    }
    event_551_11_end: ;
}
// Function purpose: generated callback event_func_5872 processes event block(s) 552_11. Actions/conditions:
//        552_11: sets popup_timer to 1; increments popup_num by 1.
void Frames::event_func_5872()
{
    // event 552_11 : sets popup_timer to 1; increments popup_num by 1
    {
        if (!(group_code_1)) goto event_552_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (10))) goto event_552_11_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(3)) > (0))) goto event_552_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(978, str_popup_num_2542, 1);
    }
    event_552_11_end: ;
}
// Function purpose: generated callback event_func_5873 processes event block(s) 553_11. Actions/conditions:
//        553_11: sets strNum to 13; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 7 more
//        actions.
void Frames::event_func_5873()
{
    VITA_LEGACY_EVENT();
    // event 553_11 : sets strNum to 13; sets popup_timer to 0; sets string to stringtokenizer2_292->get(1); plus 7 more actions
    {
        if (!(group_code_1)) goto event_553_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (11))) goto event_553_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(979, str_popup_timer_2543)) == (1))) goto event_553_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_553_11_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(966, str_strnum_2442, 13);
        {
            loop_os_check_running = true;
            int times = int(1);
            loop_os_check_index = 0;
            while (loop_os_check_index < times) {
                loop_os_check_11();
                if (!loop_os_check_running) break;
                loop_os_check_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(979, str_popup_timer_2543, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(900, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345), str__346, str__198));
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(900, str_string_345));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_11();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
        {
            loop_flash_tut_running = true;
            int times = int(1);
            loop_flash_tut_index = 0;
            while (loop_flash_tut_index < times) {
                loop_flash_tut_11();
                if (!loop_flash_tut_running) break;
                loop_flash_tut_index++;
            }
        }
    }
    event_553_11_end: ;
}
// Function purpose: generated callback event_func_5874 processes event block(s) 554_11. Actions/conditions:
//        554_11: sets the selected object's direction to 24; sets the object position in the world; sets the selected
//        object's visibility to true.
void Frames::event_func_5874()
{
    // event 554_11 : sets the selected object's direction to 24; sets the object position in the world; sets the selected object's visibility to true
    {
        if (!(group_code_1)) goto event_554_11_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(978, str_popup_num_2542)) == (11))) goto event_554_11_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_554_11_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_554_11_end;
        ((Active*)get_instance(tutorialArrow_instances))->set_direction(24);
        {
            FrameObject * parent = ((Active*)get_single(guardBase_instances));
            if (parent == NULL) goto pos_end_554_11_0;
            ((Active*)get_instance(tutorialArrow_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -10);
            pos_end_554_11_0: ;
        }
        ((Active*)get_instance(tutorialArrow_instances))->set_visible(true);
    }
    event_554_11_end: ;
}
