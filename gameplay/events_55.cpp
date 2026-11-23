#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_4564 processes event block(s) 3516_6. Actions/conditions:
//        3516_6: sets the object's animation to 8; sets the selected object's direction to
//        ((Active*)get_single(bedplayer_338_instances, it.current_index, default_active_instance))->get_direction().
void Frames::event_func_4564()
{
    // event 3516_6 : sets the object's animation to 8; sets the selected object's direction to ((Active*)get_single(bedplayer_338_instances, it.current_index, default_active_instance))->get_direction()
    {
        if (!(group_code_1)) goto event_3516_6_end;
        playerBase_instances.clear_selection();
        bedplayer_338_instances.clear_selection();
        if (!check_overlap(playerBase_instances, bedplayer_338_instances)) goto event_3516_6_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_3516_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((Active*)get_instance(playerBase_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((Active*)get_instance(playerBase_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3516_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(((Active*)get_single(bedplayer_338_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_3516_6_end: ;
}
// Function purpose: generated callback event_func_4565 processes event block(s) 3517_6. Actions/conditions:
//        3517_6: sets the object's animation to 0; sets the object's animation to 0; sets Carrying to 0; plus 5 more
//        actions.
void Frames::event_func_4565()
{
    // event 3517_6 : sets the object's animation to 0; sets the object's animation to 0; sets Carrying to 0; plus 5 more actions
    {
        if (!(group_code_1)) goto event_3517_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (2))) goto event_3517_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3517_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3517_6_end;
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(151, str_carrying_724, 0);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1000);
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_3517_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3517_6_0: ;
        }
    }
    event_3517_6_end: ;
}
// Function purpose: generated callback event_func_4566 processes event block(s) 3518_6. Actions/conditions:
//        3518_6: sets the object position in the world; moves the selected object to the front.
void Frames::event_func_4566()
{
    // event 3518_6 : sets the object position in the world; moves the selected object to the front
    {
        if (!(group_code_1)) goto event_3518_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (2))) goto event_3518_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3518_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3518_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_qualifier(qualifier_2, it.current_index));
            if (parent == NULL) goto pos_end_3518_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -6);
            pos_end_3518_6_0: ;
        }
        {
            // icache destruction
            QualifierIterator other_it(qualifier_2);
            for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
                if (other_it.end()) goto action_3518_6_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_3518_6_1_end: ;
    }
    event_3518_6_end: ;
}
// Function purpose: generated callback event_func_4567 processes event block(s) 3519_6. Actions/conditions:
//        3519_6: sets the object position in the world.
void Frames::event_func_4567()
{
    // event 3519_6 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_3519_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (1))) goto event_3519_6_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_3519_6_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_qualifier(qualifier_2, it.current_index));
            if (parent == NULL) goto pos_end_3519_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -8, parent->get_y() + -16);
            pos_end_3519_6_0: ;
        }
    }
    event_3519_6_end: ;
}
// Function purpose: generated callback event_func_4568 processes event block(s) 3520_6. Actions/conditions:
//        3520_6: sets the object's animation to 7.
void Frames::event_func_4568()
{
    // event 3520_6 : sets the object's animation to 7
    {
        if (!(group_code_1)) goto event_3520_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) > (0))) goto event_3520_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3520_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_3520_6_end: ;
}
// Function purpose: generated callback event_func_4569 processes event block(s) 3522_6. Actions/conditions:
//        3522_6: sets the object position in the world; disables flag 1000 (object relocation or layer-transition
//        state) on the selected object; sets the selected object's layer to
//        ((Active*)get_instance(playerBase_instances, it.current_index, default_active_instance))->layer->index+1-1.
void Frames::event_func_4569()
{
    // event 3522_6 : sets the object position in the world; disables flag 1000 (object relocation or layer-transition state) on the selected object; sets the selected object's layer to ((Active*)get_instance(playerBase_instances, it.current_index, default_active_instance))->layer->index+1-1
    {
        if (!(group_code_1)) goto event_3522_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3522_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(151, str_carrying_724)) == (0))) goto event_3522_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_3522_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3522_6_0: ;
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1000);
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
    }
    event_3522_6_end: ;
}
// Function purpose: generated callback event_func_4570 processes event block(s) 3524_6. Actions/conditions:
//        3524_6: disables flag 1000 (object relocation or layer-transition state) on the selected object; sets the
//        selected object's layer to 2-1; sets the selected object's horizontal position to
//        (((Active*)get_instance(playerBase_instances, it.current_index,
//        default_active_instance))->get_x()/MathHelper()/16)*16; plus 1 more actions.
void Frames::event_func_4570()
{
    // event 3524_6 : disables flag 1000 (object relocation or layer-transition state) on the selected object; sets the selected object's layer to 2-1; sets the selected object's horizontal position to (((Active*)get_instance(playerBase_instances, it.current_index, default_active_instance))->get_x()/MathHelper()/16)*16; plus 1 more actions
    {
        if (!(group_code_1)) goto event_3524_6_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_3524_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(151, str_carrying_724)) == (0))) goto event_3524_6_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1000);
            ((Active*)*it)->set_layer(2-1);
            ((Active*)*it)->set_x((((Active*)get_instance(playerBase_instances, it.current_index, default_active_instance))->get_x()/MathHelper()/16)*16);
            ((Active*)*it)->set_y((((Active*)get_instance(playerBase_instances, it.current_index, default_active_instance))->get_y()/MathHelper()/16)*16);
        }
    }
    event_3524_6_end: ;
}
// Function purpose: generated callback event_func_4571 processes event block(s) 3526_6. Actions/conditions:
//        3526_6: sets the object's animation to 0.
void Frames::event_func_4571()
{
    // event 3526_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_3526_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3526_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(151, str_carrying_724)) == (0))) goto event_3526_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_3526_6_end: ;
}
// Function purpose: generated callback event_func_4572 processes event block(s) 3527_6. Actions/conditions:
//        3527_6: sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_305_instances,
//        default_active_instance))->alterables->values.get(0); sets the object's animation to 16; plus 10 more
//        actions.
void Frames::event_func_4572()
{
    VITA_LEGACY_EVENT();
    // event 3527_6 : sets LClick to 1; sets CurrentContainer to ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0); sets the object's animation to 16; plus 10 more actions
    {
        if (!(group_code_1)) goto event_3527_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) == (1))) goto event_3527_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(931, str_thisid_2252)))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_3527_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3527_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(337, str_currentcontainer_1126, ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
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
                loop_fill_desk_6();
                if (!loop_fill_desk_running) break;
                loop_fill_desk_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3527_6_end: ;
}
// Function purpose: generated callback event_func_4573 processes event block(s) 3528_6. Actions/conditions:
//        3528_6: sets Searching_Desk to 0.
void Frames::event_func_4573()
{
    VITA_LEGACY_EVENT();
    // event 3528_6 : sets Searching_Desk to 0
    {
        if (!(group_code_1)) goto event_3528_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) == (1))) goto event_3528_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(362, str_searching_desk_1156, 0);
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
    event_3528_6_end: ;
}
// Function purpose: generated callback event_func_4574 processes event block(s) 3529_6. Actions/conditions:
//        3529_6: moves the selected object to the front; sets horizontal scaling.
void Frames::event_func_4574()
{
    // event 3529_6 : moves the selected object to the front; sets horizontal scaling
    {
        if (!(group_code_1)) goto event_3529_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) > (0))) goto event_3529_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3529_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale((100-((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156))/MathHelper()/2);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_3529_6_end: ;
}
// Function purpose: generated callback event_func_4575 processes event block(s) 3530_6. Actions/conditions:
//        3530_6: changes a stored game value.
void Frames::event_func_4575()
{
    VITA_LEGACY_EVENT();
    // event 3530_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_3530_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) > (0))) goto event_3530_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3530_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(362, str_searching_desk_1156, 1);
    }
    event_3530_6_end: ;
}
// Function purpose: generated callback event_func_4576 processes event block(s) 3531_6. Actions/conditions:
//        3531_6: updates a value on the target object; sets Searching_Desk to 0.
void Frames::event_func_4576()
{
    // event 3531_6 : updates a value on the target object; sets Searching_Desk to 0
    {
        if (!(group_code_1)) goto event_3531_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) > (0))) goto event_3531_6_end;
        cursor_178_instances.clear_selection();
        if (!check_not_overlap(cursor_178_instances, desks_305_instances)) goto event_3531_6_end;
        ((Text*)get_instance(lessonTimerText_instances))->blend_color.set(Color(255, 255, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(362, str_searching_desk_1156, 0);
    }
    event_3531_6_end: ;
}
// Function purpose: generated callback event_func_4577 processes event block(s) 3537_6. Actions/conditions:
//        3537_6: saves the current object selection; saves the current object selection; sets SleepMenu to 0; plus 6
//        more actions.
void Frames::event_func_4577()
{
    // event 3537_6 : saves the current object selection; saves the current object selection; sets SleepMenu to 0; plus 6 more actions
    bool or_result_3537_6 = false;
    bool or_temp_result_3537_6_0 = false;
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto or_event_3537_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(338, str_sleepmenu_1128)) == (1))) goto or_event_3537_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) >= (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(745, str_endhour_1914)))) goto or_event_3537_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3537_6_0_end;
        if (!((number_to_string(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x())+str_x_437+number_to_string(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y())) == (number_to_string(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_box_index(0)+8)+str_x_437+number_to_string(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_box_index(1)+10)))) goto or_event_3537_6_0_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto or_event_3537_6_0_end;
        or_result_3537_6 = true;
        or_temp_result_3537_6_0 = true;
    }
    or_event_3537_6_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    bedplayer_338_instances.clear_saved_selection();
    if (or_temp_result_3537_6_0) {
        bedplayer_338_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 3537_6 : saves the current object selection; saves the current object selection; sets SleepMenu to 0; plus 6 more actions
    bool or_temp_result_3537_6_1 = false;
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto or_event_3537_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(338, str_sleepmenu_1128)) == (1))) goto or_event_3537_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) < (6))) goto or_event_3537_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3537_6_1_end;
        if (!((number_to_string(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x())+str_x_437+number_to_string(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y())) == (number_to_string(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_box_index(0)+8)+str_x_437+number_to_string(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_box_index(1)+10)))) goto or_event_3537_6_1_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto or_event_3537_6_1_end;
        or_result_3537_6 = true;
        or_temp_result_3537_6_1 = true;
        or_event_3537_6_1_end: ;
        if (or_temp_result_3537_6_1) {
            bedplayer_338_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_3537_6) goto or_final_or_event_3537_6_1_end;
        bedplayer_338_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_3537_6_0 || or_temp_result_3537_6_1) {
            bedplayer_338_instances.restore_selection();
        }
        if (or_temp_result_3537_6_0 || or_temp_result_3537_6_1) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(338, str_sleepmenu_1128, 0);
        }
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_visible(true);
        }
        {
            loop_sleep_check_but_running = true;
            int times = int(1);
            loop_sleep_check_but_index = 0;
            while (loop_sleep_check_but_index < times) {
                loop_sleep_check_but_6();
                if (!loop_sleep_check_but_running) break;
                loop_sleep_check_but_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    or_final_or_event_3537_6_1_end: ;
}
// Function purpose: generated callback event_func_4578 processes event block(s) 3538_6. Actions/conditions:
//        3538_6: saves the current object selection; saves the current object selection; sets SleepMenu to 0; plus 6
//        more actions.
void Frames::event_func_4578()
{
    // event 3538_6 : saves the current object selection; saves the current object selection; sets SleepMenu to 0; plus 6 more actions
    bool or_result_3538_6 = false;
    bool or_temp_result_3538_6_0 = false;
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto or_event_3538_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(338, str_sleepmenu_1128)) == (1))) goto or_event_3538_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) >= (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(745, str_endhour_1914)))) goto or_event_3538_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3538_6_0_end;
        if (!((number_to_string(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x())+str_x_437+number_to_string(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y())) == (number_to_string(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_box_index(0)+13)+str_x_437+number_to_string(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_box_index(1)+7)))) goto or_event_3538_6_0_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto or_event_3538_6_0_end;
        or_result_3538_6 = true;
        or_temp_result_3538_6_0 = true;
    }
    or_event_3538_6_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    bedplayer_338_instances.clear_saved_selection();
    if (or_temp_result_3538_6_0) {
        bedplayer_338_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 3538_6 : saves the current object selection; saves the current object selection; sets SleepMenu to 0; plus 6 more actions
    bool or_temp_result_3538_6_1 = false;
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto or_event_3538_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(338, str_sleepmenu_1128)) == (1))) goto or_event_3538_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) < (6))) goto or_event_3538_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3538_6_1_end;
        if (!((number_to_string(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x())+str_x_437+number_to_string(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y())) == (number_to_string(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_box_index(0)+13)+str_x_437+number_to_string(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_box_index(1)+7)))) goto or_event_3538_6_1_end;
        bedplayer_338_instances.clear_selection();
        for (ObjectIterator it(bedplayer_338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!bedplayer_338_instances.has_selection()) goto or_event_3538_6_1_end;
        or_result_3538_6 = true;
        or_temp_result_3538_6_1 = true;
        or_event_3538_6_1_end: ;
        if (or_temp_result_3538_6_1) {
            bedplayer_338_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_3538_6) goto or_final_or_event_3538_6_1_end;
        bedplayer_338_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_3538_6_0 || or_temp_result_3538_6_1) {
            bedplayer_338_instances.restore_selection();
        }
        if (or_temp_result_3538_6_0 || or_temp_result_3538_6_1) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(338, str_sleepmenu_1128, 0);
        }
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_visible(true);
        }
        {
            loop_sleep_check_but_running = true;
            int times = int(1);
            loop_sleep_check_but_index = 0;
            while (loop_sleep_check_but_index < times) {
                loop_sleep_check_but_6();
                if (!loop_sleep_check_but_running) break;
                loop_sleep_check_but_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    or_final_or_event_3538_6_1_end: ;
}
// Function purpose: generated callback event_func_4579 processes event block(s) 3543_6. Actions/conditions:
//        3543_6: sets LClick to 1.
void Frames::event_func_4579()
{
    // event 3543_6 : sets LClick to 1
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto event_3543_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(24))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3543_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3543_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3543_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_close_sleep_running = true;
            int times = int(1);
            loop_close_sleep_index = 0;
            while (loop_close_sleep_index < times) {
                loop_close_sleep_6();
                if (!loop_close_sleep_running) break;
                loop_close_sleep_index++;
            }
        }
    }
    event_3543_6_end: ;
}
// Function purpose: generated callback event_func_4580 processes event block(s) 3544_6. Actions/conditions:
//        3544_6: sets save_countdown to -1; sets LClick to 1.
void Frames::event_func_4580()
{
    // event 3544_6 : sets save_countdown to -1; sets LClick to 1
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto event_3544_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(23))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3544_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3544_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3544_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(938, str_save_countdown_2277, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_close_sleep_running = true;
            int times = int(1);
            loop_close_sleep_index = 0;
            while (loop_close_sleep_index < times) {
                loop_close_sleep_6();
                if (!loop_close_sleep_running) break;
                loop_close_sleep_index++;
            }
        }
        {
            loop_fade_sleep_running = true;
            int times = int(1);
            loop_fade_sleep_index = 0;
            while (loop_fade_sleep_index < times) {
                loop_fade_sleep_6();
                if (!loop_fade_sleep_running) break;
                loop_fade_sleep_index++;
            }
        }
    }
    event_3544_6_end: ;
}
// Function purpose: generated callback event_func_4581 processes event block(s) 3549_6. Actions/conditions:
//        3549_6: changes the selected object transparency.
void Frames::event_func_4581()
{
    VITA_LEGACY_EVENT();
    // event 3549_6 : changes the selected object transparency
    {
        if (!(group_code_1)) goto event_3549_6_end;
        if (!((((Active*)get_instance(screenFade_instances, default_active_instance))->blend_color.get_alpha_coefficient()) > (0))) goto event_3549_6_end;
        screenFade_instances.clear_selection();
        for (ObjectIterator it(screenFade_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sleep_1105))) { it.deselect(); continue; }
        }
        if (!screenFade_instances.has_selection()) goto event_3549_6_end;
        for (ObjectIterator it(screenFade_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)*it)->blend_color.get_alpha_coefficient()-6);
        }
    }
    event_3549_6_end: ;
}
// Function purpose: generated callback event_func_4582 processes event block(s) 3550_6. Actions/conditions:
//        3550_6: stops the object's movement; removes the selected object; sets T_hour to
//        gameVariables->get_value(521, StartHour)-1; plus 12 more actions.
void Frames::event_func_4582()
{
    // event 3550_6 : stops the object's movement; removes the selected object; sets T_hour to gameVariables->get_value(521, StartHour)-1; plus 12 more actions
    {
        if (!(group_code_1)) goto event_3550_6_end;
        if (!((((Active*)get_instance(screenFade_instances, default_active_instance))->blend_color.get_alpha_coefficient()) <= (0))) goto event_3550_6_end;
        screenFade_instances.clear_selection();
        for (ObjectIterator it(screenFade_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sleep_1105))) { it.deselect(); continue; }
        }
        if (!screenFade_instances.has_selection()) goto event_3550_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(938, str_save_countdown_2277)) == (-1))) goto event_3550_6_end;
        if (group_code_1 && group_code_caught_solitary_1) goto event_3550_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_add_day_running = true;
            int times = int(1);
            loop_add_day_index = 0;
            while (loop_add_day_index < times) {
                loop_add_day_6();
                if (!loop_add_day_running) break;
                loop_add_day_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(25, str_t_hour_488, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(522, str_t_min_1422, 50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(358, str_fatigue_36, 20);
        {
            loop_put_to_bed_running = true;
            int times = int(inmateBase_instances.size());
            loop_put_to_bed_index = 0;
            while (loop_put_to_bed_index < times) {
                loop_put_to_bed_6();
                if (!loop_put_to_bed_running) break;
                loop_put_to_bed_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(939, str_doors_entrance_locked_2278, 1);
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playerBase_instances))->alterables->flags.enable(2005);
            group_code_schedules_lockdown_new_1 = false;
    
        if (!group_saving_1) {
            group_saving_1 = true;
            group_check_group_saving_1_0 = true;
            group_check_group_saving_1_1 = true;
            group_check_group_saving_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(938, str_save_countdown_2277, 3);
        metaldetector_231_instances.clear_selection();
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        camera_237_instances.clear_selection();
        for (ObjectIterator it(camera_237_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        powergen_360_instances.clear_selection();
        for (ObjectIterator it(powergen_360_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_3550_6_end: ;
}
// Function purpose: generated callback event_func_4583 processes event block(s) 3551_6. Actions/conditions:
//        3551_6: updates game state with set_blend_color(14444374); sets the selected object's numeric value to 100;
//        removes the selected object; plus 6 more actions.
void Frames::event_func_4583()
{
    VITA_LEGACY_EVENT();
    // event 3551_6 : updates game state with set_blend_color(14444374); sets the selected object's numeric value to 100; removes the selected object; plus 6 more actions
    {
        if (!(group_code_1)) goto event_3551_6_end;
        if (!((((Active*)get_instance(screenFade_instances, default_active_instance))->blend_color.get_alpha_coefficient()) <= (0))) goto event_3551_6_end;
        screenFade_instances.clear_selection();
        for (ObjectIterator it(screenFade_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sleep_1105))) { it.deselect(); continue; }
        }
        if (!screenFade_instances.has_selection()) goto event_3551_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(938, str_save_countdown_2277)) == (1))) goto event_3551_6_end;
        ((Active*)get_instance(screenTint_instances))->set_blend_color(14444374);
        ((Active*)get_instance(screenTint_instances))->alterables->values.set(0, 100);
        for (ObjectIterator it(screenFade_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(938, str_save_countdown_2277, 0);
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_3551_6_end: ;
}
// Function purpose: generated callback event_func_4584 processes event block(s) 3552_6. Actions/conditions:
//        3552_6: changes a stored game value.
void Frames::event_func_4584()
{
    VITA_LEGACY_EVENT();
    // event 3552_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_3552_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(938, str_save_countdown_2277)) > (0))) goto event_3552_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(938, str_save_countdown_2277, 1);
    }
    event_3552_6_end: ;
}
// Function purpose: generated callback event_func_4585 processes event block(s) 3556_6. Actions/conditions:
//        3556_6: removes the selected object.
void Frames::event_func_4585()
{
    // event 3556_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_3556_6_end;
        active10_293_instances.clear_selection();
        for (ObjectIterator it(active10_293_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!active10_293_instances.has_selection()) goto event_3556_6_end;
        for (ObjectIterator it(active10_293_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3556_6_end: ;
}
// Function purpose: generated callback event_func_4586 processes event block(s) 3557_6. Actions/conditions:
//        3557_6: checks scene is active; game state Chipping; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4586()
{
    // event 3557_6 : checks scene is active; game state Chipping; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3557_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) > (0))) goto event_3557_6_end;
        if (!group_code_sort_these_using_items_2_chipping_2_1) {
            group_code_sort_these_using_items_2_chipping_2_1 = true;
        }
    }
    event_3557_6_end: ;
}
// Function purpose: generated callback event_func_4587 processes event block(s) 3558_6. Actions/conditions:
//        3558_6: moves the selected object to the front; sets horizontal scaling.
void Frames::event_func_4587()
{
    // event 3558_6 : moves the selected object to the front; sets horizontal scaling
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3558_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3558_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale((100-((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728))/MathHelper()/2);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_3558_6_end: ;
}
// Function purpose: generated callback event_func_4588 processes event block(s) 3559_6. Actions/conditions:
//        3559_6: checks scene is active; game state Chipping; skips if dialog is open; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4588()
{
    VITA_LEGACY_EVENT();
    // event 3559_6 : checks scene is active; game state Chipping; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3559_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (1))) goto event_3559_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3559_6_end;
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
    event_3559_6_end: ;
}
// Function purpose: generated callback event_func_4589 processes event block(s) 3560_6. Actions/conditions:
//        3560_6: sets a stored numeric value; increments Fatigue by 5.
void Frames::event_func_4589()
{
    VITA_LEGACY_EVENT();
    // event 3560_6 : sets a stored numeric value; increments Fatigue by 5
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3560_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (1))) goto event_3560_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(449, str_chiptype_1316)) == (str_wall_1317))) goto event_3560_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3560_6_end;
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(((ArrayObject*)get_instance(wallsarray_232_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326), ((Active*)get_instance(playerBase_instances))->layer->index+1)+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(922, str_chippower_2238)*4), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326), ((Active*)get_instance(playerBase_instances))->layer->index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        {
            loop_check_complete_chip_running = true;
            int times = int(1);
            loop_check_complete_chip_index = 0;
            while (loop_check_complete_chip_index < times) {
                loop_check_complete_chip_6();
                if (!loop_check_complete_chip_running) break;
                loop_check_complete_chip_index++;
            }
        }
    }
    event_3560_6_end: ;
}
// Function purpose: generated callback event_func_4590 processes event block(s) 3567_6. Actions/conditions:
//        3567_6: increments Fatigue by 5; changes a stored game value.
void Frames::event_func_4590()
{
    VITA_LEGACY_EVENT();
    // event 3567_6 : increments Fatigue by 5; changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3567_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (1))) goto event_3567_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(449, str_chiptype_1316)) == (str_rock_1882))) goto event_3567_6_end;
        active10_293_instances.clear_selection();
        for (ObjectIterator it(active10_293_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16))) { it.deselect(); continue; }
        }
        if (!active10_293_instances.has_selection()) goto event_3567_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3567_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        for (ObjectIterator it(active10_293_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(922, str_chippower_2238)*4);
        }
    }
    event_3567_6_end: ;
}
// Function purpose: generated callback event_func_4591 processes event block(s) 3568_6. Actions/conditions:
//        3568_6: changes a stored game value.
void Frames::event_func_4591()
{
    VITA_LEGACY_EVENT();
    // event 3568_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3568_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) > (0))) goto event_3568_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3568_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(155, str_chipping_728, 1);
    }
    event_3568_6_end: ;
}
// Function purpose: generated callback event_func_4592 processes event block(s) 3569_6. Actions/conditions:
//        3569_6: sets TempChip to 1; adds a dust 223 instance; sets the selected object's horizontal position to
//        (gameVariables->get_value(456, ChipX)*16)+8; plus 6 more actions.
void Frames::event_func_4592()
{
    // event 3569_6 : sets TempChip to 1; adds a dust 223 instance; sets the selected object's horizontal position to (gameVariables->get_value(456, ChipX)*16)+8; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3569_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3569_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(940, str_tempchip_2279)) == (0))) goto event_3569_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3569_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(940, str_tempchip_2279, 1);
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((AssociateArray*)get_instance(gameVariables_instances))->get_value(456, str_chipx_1325)*16)+8);
            ((Active*)*it)->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(457, str_chipy_1326)*16)+8);
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3569_6_end: ;
}
// Function purpose: generated callback event_func_4593 processes event block(s) 3570_6. Actions/conditions:
//        3570_6: sets TempChip to 0.
void Frames::event_func_4593()
{
    // event 3570_6 : sets TempChip to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_chipping_2_1)) goto event_3570_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3570_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(940, str_tempchip_2279, 0);
    }
    event_3570_6_end: ;
}
// Function purpose: generated callback event_func_4594 processes event block(s) 3571_6. Actions/conditions:
//        3571_6: checks scene is active; game state Digging; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4594()
{
    // event 3571_6 : checks scene is active; game state Digging; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3571_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) > (0))) goto event_3571_6_end;
        if (!group_code_sort_these_using_items_2_digging_2_1) {
            group_code_sort_these_using_items_2_digging_2_1 = true;
        }
    }
    event_3571_6_end: ;
}
// Function purpose: generated callback event_func_4595 processes event block(s) 3572_6. Actions/conditions:
//        3572_6: moves the selected object to the front; sets horizontal scaling.
void Frames::event_func_4595()
{
    // event 3572_6 : moves the selected object to the front; sets horizontal scaling
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3572_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3572_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale((100-((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726))/MathHelper()/2);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_3572_6_end: ;
}
// Function purpose: generated callback event_func_4596 processes event block(s) 3573_6. Actions/conditions:
//        3573_6: checks scene is active; game state Digging; skips if dialog is open; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_4596()
{
    VITA_LEGACY_EVENT();
    // event 3573_6 : checks scene is active; game state Digging; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3573_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (1))) goto event_3573_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3573_6_end;
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
    event_3573_6_end: ;
}
// Function purpose: generated callback event_func_4597 processes event block(s) 3574_6. Actions/conditions:
//        3574_6: sets Digging to 0; sets the selected object's visibility to false; removes the selected object; plus
//        9 more actions.
void Frames::event_func_4597()
{
    VITA_LEGACY_EVENT();
    // event 3574_6 : sets Digging to 0; sets the selected object's visibility to false; removes the selected object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3574_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (1))) goto event_3574_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(925, str_digtype_2241)) == (str_floor_814))) goto event_3574_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3574_6_end;
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
                loop_dighole_6();
                if (!loop_dighole_running) break;
                loop_dighole_index++;
            }
        }
    }
    event_3574_6_end: ;
}
// Function purpose: generated callback event_func_4598 processes event block(s) 3582_6. Actions/conditions:
//        3582_6: sets Digging to 0; sets the selected object's visibility to false; removes the selected object; plus
//        11 more actions.
void Frames::event_func_4598()
{
    VITA_LEGACY_EVENT();
    // event 3582_6 : sets Digging to 0; sets the selected object's visibility to false; removes the selected object; plus 11 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3582_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (1))) goto event_3582_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(925, str_digtype_2241)) == (str_ug_up_2242))) goto event_3582_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3582_6_end;
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
                loop_digabove_6();
                if (!loop_digabove_running) break;
                loop_digabove_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
    }
    event_3582_6_end: ;
}
// Function purpose: generated callback event_func_4599 processes event block(s) 3590_6. Actions/conditions:
//        3590_6: sets Digging to 0; sets the selected object's visibility to false; removes the selected object; plus
//        9 more actions.
void Frames::event_func_4599()
{
    VITA_LEGACY_EVENT();
    // event 3590_6 : sets Digging to 0; sets the selected object's visibility to false; removes the selected object; plus 9 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3590_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (1))) goto event_3590_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(925, str_digtype_2241)) == (str_ug_across_2243))) goto event_3590_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3590_6_end;
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
                loop_digbelow_6();
                if (!loop_digbelow_running) break;
                loop_digbelow_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
    }
    event_3590_6_end: ;
}
// Function purpose: generated callback event_func_4600 processes event block(s) 3597_6. Actions/conditions:
//        3597_6: changes a stored game value.
void Frames::event_func_4600()
{
    VITA_LEGACY_EVENT();
    // event 3597_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3597_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) > (0))) goto event_3597_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3597_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(153, str_digging_726, 1);
    }
    event_3597_6_end: ;
}
// Function purpose: generated callback event_func_4601 processes event block(s) 3598_6. Actions/conditions:
//        3598_6: sets TempDig to 1; adds a dust 223 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(642, DigX)+8; plus 10 more actions.
void Frames::event_func_4601()
{
    // event 3598_6 : sets TempDig to 1; adds a dust 223 instance; sets the selected object's horizontal position to gameVariables->get_value(642, DigX)+8; plus 10 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3598_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3598_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(941, str_tempdig_2280)) == (0))) goto event_3598_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3598_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(941, str_tempdig_2280, 1);
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741)+8);
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        fx_185_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fx_185(0, 0), 1);
            fx_185_instances.add_back();
        }
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(642, str_digx_1740)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(643, str_digy_1741)+8);
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::NONE);
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3598_6_end: ;
}
// Function purpose: generated callback event_func_4602 processes event block(s) 3599_6. Actions/conditions:
//        3599_6: sets TempDig to 0.
void Frames::event_func_4602()
{
    // event 3599_6 : sets TempDig to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3599_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3599_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(941, str_tempdig_2280, 0);
    }
    event_3599_6_end: ;
}
// Function purpose: generated callback event_func_4603 processes event block(s) 3600_6. Actions/conditions:
//        3600_6: sets the selected object's visibility to false; removes the selected object.
void Frames::event_func_4603()
{
    // event 3600_6 : sets the selected object's visibility to false; removes the selected object
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3600_6_end;
        fx_185_instances.clear_selection();
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->animation_finished == 5)) { it.deselect(); continue; }
        }
        if (!fx_185_instances.has_selection()) goto event_3600_6_end;
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->destroy();
        }
    }
    event_3600_6_end: ;
}
// Function purpose: generated callback event_func_4604 processes event block(s) 3604_6. Actions/conditions:
//        3604_6: checks scene is active; game state Cutting; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4604()
{
    // event 3604_6 : checks scene is active; game state Cutting; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3604_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) > (0))) goto event_3604_6_end;
        if (!group_code_sort_these_using_items_2_cutting_2_1) {
            group_code_sort_these_using_items_2_cutting_2_1 = true;
        }
    }
    event_3604_6_end: ;
}
// Function purpose: generated callback event_func_4605 processes event block(s) 3605_6. Actions/conditions:
//        3605_6: moves the selected object to the front; sets horizontal scaling.
void Frames::event_func_4605()
{
    // event 3605_6 : moves the selected object to the front; sets horizontal scaling
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3605_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3605_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale((100-((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727))/MathHelper()/2);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_3605_6_end: ;
}
// Function purpose: generated callback event_func_4606 processes event block(s) 3606_6. Actions/conditions:
//        3606_6: checks scene is active; game state Cutting; skips if dialog is open; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_4606()
{
    VITA_LEGACY_EVENT();
    // event 3606_6 : checks scene is active; game state Cutting; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3606_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (1))) goto event_3606_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3606_6_end;
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
    event_3606_6_end: ;
}
// Function purpose: generated callback event_func_4607 processes event block(s) 3607_6. Actions/conditions:
//        3607_6: increments Fatigue by 5; changes a stored game value.
void Frames::event_func_4607()
{
    VITA_LEGACY_EVENT();
    // event 3607_6 : increments Fatigue by 5; changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3607_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (1))) goto event_3607_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(238, str_cuttype_863)) == (str_slats_2245))) goto event_3607_6_end;
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16))) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_3607_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3607_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(715, str_cutpower_1884));
        }
    }
    event_3607_6_end: ;
}
// Function purpose: generated callback event_func_4608 processes event block(s) 3608_6. Actions/conditions:
//        3608_6: increments Fatigue by 5; changes a stored game value.
void Frames::event_func_4608()
{
    VITA_LEGACY_EVENT();
    // event 3608_6 : increments Fatigue by 5; changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3608_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (1))) goto event_3608_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(238, str_cuttype_863)) == (str_vent_2246))) goto event_3608_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_3608_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3608_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(715, str_cutpower_1884));
        }
    }
    event_3608_6_end: ;
}
// Function purpose: generated callback event_func_4609 processes event block(s) 3609_6. Actions/conditions:
//        3609_6: increments Fatigue by 5; sets a stored numeric value.
void Frames::event_func_4609()
{
    VITA_LEGACY_EVENT();
    // event 3609_6 : increments Fatigue by 5; sets a stored numeric value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3609_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (1))) goto event_3609_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(238, str_cuttype_863)) == (str_fence_2247))) goto event_3609_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3609_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        ((ArrayObject*)get_instance(fencearray_265_instances))->set_value(((ArrayObject*)get_instance(fencearray_265_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862), ((Active*)get_instance(playerBase_instances))->layer->index+1)+(((AssociateArray*)get_instance(gameVariables_instances))->get_value(715, str_cutpower_1884)), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862), ((Active*)get_instance(playerBase_instances))->layer->index+1);
        {
            loop_check_complete_fencecut_running = true;
            int times = int(1);
            loop_check_complete_fencecut_index = 0;
            while (loop_check_complete_fencecut_index < times) {
                loop_check_complete_fencecut_6();
                if (!loop_check_complete_fencecut_running) break;
                loop_check_complete_fencecut_index++;
            }
        }
    }
    event_3609_6_end: ;
}
// Function purpose: generated callback event_func_4610 processes event block(s) 3615_6. Actions/conditions:
//        3615_6: sets TempCut to 1; adds a dust 223 instance; sets the selected object's horizontal position to
//        (gameVariables->get_value(236, CutX)*16)+8; plus 6 more actions.
void Frames::event_func_4610()
{
    // event 3615_6 : sets TempCut to 1; adds a dust 223 instance; sets the selected object's horizontal position to (gameVariables->get_value(236, CutX)*16)+8; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3615_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3615_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(942, str_tempcut_2281)) == (0))) goto event_3615_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3615_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(942, str_tempcut_2281, 1);
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((AssociateArray*)get_instance(gameVariables_instances))->get_value(236, str_cutx_861)*16)+8);
            ((Active*)*it)->set_y((((AssociateArray*)get_instance(gameVariables_instances))->get_value(237, str_cuty_862)*16)+8);
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3615_6_end: ;
}
// Function purpose: generated callback event_func_4611 processes event block(s) 3616_6. Actions/conditions:
//        3616_6: sets TempCut to 0.
void Frames::event_func_4611()
{
    // event 3616_6 : sets TempCut to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3616_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3616_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(942, str_tempcut_2281, 0);
    }
    event_3616_6_end: ;
}
// Function purpose: generated callback event_func_4612 processes event block(s) 3617_6. Actions/conditions:
//        3617_6: changes a stored game value.
void Frames::event_func_4612()
{
    VITA_LEGACY_EVENT();
    // event 3617_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cutting_2_1)) goto event_3617_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) > (0))) goto event_3617_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(154, str_cutting_727, 1);
    }
    event_3617_6_end: ;
}
// Function purpose: generated callback event_func_4613 processes event block(s) 3618_6. Actions/conditions:
//        3618_6: checks scene is active; game state Unscrewing; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4613()
{
    // event 3618_6 : checks scene is active; game state Unscrewing; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3618_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) > (0))) goto event_3618_6_end;
        if (!group_code_sort_these_using_items_2_unscrewing_2_1) {
            group_code_sort_these_using_items_2_unscrewing_2_1 = true;
        }
    }
    event_3618_6_end: ;
}
// Function purpose: generated callback event_func_4614 processes event block(s) 3619_6. Actions/conditions:
//        3619_6: moves the selected object to the front; sets horizontal scaling.
void Frames::event_func_4614()
{
    // event 3619_6 : moves the selected object to the front; sets horizontal scaling
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto event_3619_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3619_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale((100-((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729))/MathHelper()/2);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_3619_6_end: ;
}
// Function purpose: generated callback event_func_4615 processes event block(s) 3620_6. Actions/conditions:
//        3620_6: checks scene is active; game state Unscrewing; skips if dialog is open; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4615()
{
    VITA_LEGACY_EVENT();
    // event 3620_6 : checks scene is active; game state Unscrewing; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto event_3620_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) == (1))) goto event_3620_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3620_6_end;
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
    event_3620_6_end: ;
}
// Function purpose: generated callback event_func_4616 processes event block(s) 3621_6. Actions/conditions:
//        3621_6: increments Fatigue by 5; changes a stored game value; sets vent_hp to
//        ((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(1).
void Frames::event_func_4616()
{
    VITA_LEGACY_EVENT();
    // event 3621_6 : increments Fatigue by 5; changes a stored game value; sets vent_hp to ((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto event_3621_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) == (1))) goto event_3621_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(930, str_unscrewtype_2251)) == (str_vent_2246))) goto event_3621_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(927, str_unscrewx_2248)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(928, str_unscrewy_2249)))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_3621_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3621_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(929, str_unscrewval_2250));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(687, str_vent_hp_1793, ((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(1));
        {
            loop_check_vent_gone_running = true;
            int times = int(1);
            loop_check_vent_gone_index = 0;
            while (loop_check_vent_gone_index < times) {
                loop_check_vent_gone_6();
                if (!loop_check_vent_gone_running) break;
                loop_check_vent_gone_index++;
            }
        }
    }
    event_3621_6_end: ;
}
// Function purpose: generated callback event_func_4617 processes event block(s) 3622_6. Actions/conditions:
//        3622_6: increments Fatigue by 5; changes a stored game value.
void Frames::event_func_4617()
{
    VITA_LEGACY_EVENT();
    // event 3622_6 : increments Fatigue by 5; changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto event_3622_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) == (1))) goto event_3622_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(930, str_unscrewtype_2251)) == (str_slats_2245))) goto event_3622_6_end;
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(927, str_unscrewx_2248)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(928, str_unscrewy_2249)))) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_3622_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3622_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(929, str_unscrewval_2250));
        }
    }
    event_3622_6_end: ;
}
// Function purpose: generated callback event_func_4618 processes event block(s) 3623_6. Actions/conditions:
//        3623_6: adds a dust 223 instance; sets the selected object's horizontal position to
//        ((AssociateArray*)get_instance(gameVariables_instances, it.current_index,
//        default_assarray_instance))->get_value(927, UnscrewX)+8; sets the selected object's vertical position to
//        ((AssociateArray*)get_instance(gameVariables_instances, it.current_index,
//        default_assarray_instance))->get_value(928, UnscrewY)+8; plus 1 more actions.
void Frames::event_func_4618()
{
    VITA_LEGACY_EVENT();
    // event 3623_6 : adds a dust 223 instance; sets the selected object's horizontal position to ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(927, UnscrewX)+8; sets the selected object's vertical position to ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(928, UnscrewY)+8; plus 1 more actions
    bool or_result_3623_6 = false;
    bool or_temp_result_3623_6_0 = false;
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto or_event_3623_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(156, str_unscrewing_729)) == (99))) goto or_event_3623_6_0_end;
        or_result_3623_6 = true;
        or_temp_result_3623_6_0 = true;
    }
    or_event_3623_6_0_end: ;
    // event 3623_6 : adds a dust 223 instance; sets the selected object's horizontal position to ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(927, UnscrewX)+8; sets the selected object's vertical position to ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(928, UnscrewY)+8; plus 1 more actions
    bool or_temp_result_3623_6_1 = false;
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto or_event_3623_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(156, str_unscrewing_729)) == (75))) goto or_event_3623_6_1_end;
        or_result_3623_6 = true;
        or_temp_result_3623_6_1 = true;
    }
    or_event_3623_6_1_end: ;
    // event 3623_6 : adds a dust 223 instance; sets the selected object's horizontal position to ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(927, UnscrewX)+8; sets the selected object's vertical position to ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(928, UnscrewY)+8; plus 1 more actions
    bool or_temp_result_3623_6_2 = false;
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto or_event_3623_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(156, str_unscrewing_729)) == (50))) goto or_event_3623_6_2_end;
        or_result_3623_6 = true;
        or_temp_result_3623_6_2 = true;
    }
    or_event_3623_6_2_end: ;
    // event 3623_6 : adds a dust 223 instance; sets the selected object's horizontal position to ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(927, UnscrewX)+8; sets the selected object's vertical position to ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(928, UnscrewY)+8; plus 1 more actions
    bool or_temp_result_3623_6_3 = false;
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto or_event_3623_6_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(156, str_unscrewing_729)) == (25))) goto or_event_3623_6_3_end;
        or_result_3623_6 = true;
        or_temp_result_3623_6_3 = true;
    }
    or_event_3623_6_3_end: ;
    // event 3623_6 : adds a dust 223 instance; sets the selected object's horizontal position to ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(927, UnscrewX)+8; sets the selected object's vertical position to ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(928, UnscrewY)+8; plus 1 more actions
    bool or_temp_result_3623_6_4 = false;
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto or_event_3623_6_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(156, str_unscrewing_729)) == (1))) goto or_event_3623_6_4_end;
        or_result_3623_6 = true;
        or_temp_result_3623_6_4 = true;
        or_event_3623_6_4_end: ;
        if (!or_result_3623_6) goto or_final_or_event_3623_6_4_end;
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 3);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(927, str_unscrewx_2248)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(928, str_unscrewy_2249)+8);
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    or_final_or_event_3623_6_4_end: ;
}
// Function purpose: generated callback event_func_4619 processes event block(s) 3625_6. Actions/conditions:
//        3625_6: changes a stored game value.
void Frames::event_func_4619()
{
    VITA_LEGACY_EVENT();
    // event 3625_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto event_3625_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) > (0))) goto event_3625_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3625_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(156, str_unscrewing_729, 1);
    }
    event_3625_6_end: ;
}
// Function purpose: generated callback event_func_4620 processes event block(s) 3626_6. Actions/conditions:
//        3626_6: checks scene is active; game state Weeding; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4620()
{
    // event 3626_6 : checks scene is active; game state Weeding; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3626_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(433, str_weeding_1276)) > (0))) goto event_3626_6_end;
        if (!group_code_sort_these_using_items_2_weeding_1) {
            group_code_sort_these_using_items_2_weeding_1 = true;
        }
    }
    event_3626_6_end: ;
}
// Function purpose: generated callback event_func_4621 processes event block(s) 3627_6. Actions/conditions:
//        3627_6: moves the selected object to the front; sets horizontal scaling.
void Frames::event_func_4621()
{
    // event 3627_6 : moves the selected object to the front; sets horizontal scaling
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_3627_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(433, str_weeding_1276)) > (0))) goto event_3627_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3627_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale((100-((AssociateArray*)get_instance(gameVariables_instances))->get_value(433, str_weeding_1276))/MathHelper()/2);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_3627_6_end: ;
}
// Function purpose: generated callback event_func_4622 processes event block(s) 3628_6. Actions/conditions:
//        3628_6: increments Fatigue by 5.
void Frames::event_func_4622()
{
    VITA_LEGACY_EVENT();
    // event 3628_6 : increments Fatigue by 5
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_3628_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(433, str_weeding_1276)) == (1))) goto event_3628_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3628_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        {
            loop_weed_fin_running = true;
            int times = int(1);
            loop_weed_fin_index = 0;
            while (loop_weed_fin_index < times) {
                loop_weed_fin_6();
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
    event_3628_6_end: ;
}
// Function purpose: generated callback event_func_4623 processes event block(s) 3629_6. Actions/conditions:
//        3629_6: changes a stored game value.
void Frames::event_func_4623()
{
    VITA_LEGACY_EVENT();
    // event 3629_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_3629_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(433, str_weeding_1276)) > (0))) goto event_3629_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3629_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(433, str_weeding_1276, 1);
    }
    event_3629_6_end: ;
}
// Function purpose: generated callback event_func_4624 processes event block(s) 3634_6. Actions/conditions:
//        3634_6: sets TempWeed to 1; adds a dust 223 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(255, WeedX)+8; plus 6 more actions.
void Frames::event_func_4624()
{
    // event 3634_6 : sets TempWeed to 1; adds a dust 223 instance; sets the selected object's horizontal position to gameVariables->get_value(255, WeedX)+8; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_3634_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3634_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(943, str_tempweed_2282)) == (0))) goto event_3634_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3634_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(943, str_tempweed_2282, 1);
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(255, str_weedx_906)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(256, str_weedy_907)+8);
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3634_6_end: ;
}
// Function purpose: generated callback event_func_4625 processes event block(s) 3635_6. Actions/conditions:
//        3635_6: sets TempWeed to 0.
void Frames::event_func_4625()
{
    // event 3635_6 : sets TempWeed to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_weeding_1)) goto event_3635_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3635_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(943, str_tempweed_2282, 0);
    }
    event_3635_6_end: ;
}
// Function purpose: generated callback event_func_4626 processes event block(s) 3636_6. Actions/conditions:
//        3636_6: checks scene is active; game state Cleaning; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4626()
{
    // event 3636_6 : checks scene is active; game state Cleaning; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3636_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(359, str_cleaning_23)) > (0))) goto event_3636_6_end;
        if (!group_code_sort_these_using_items_2_cleaning_1) {
            group_code_sort_these_using_items_2_cleaning_1 = true;
        }
    }
    event_3636_6_end: ;
}
// Function purpose: generated callback event_func_4627 processes event block(s) 3637_6. Actions/conditions:
//        3637_6: moves the selected object to the front; sets horizontal scaling.
void Frames::event_func_4627()
{
    // event 3637_6 : moves the selected object to the front; sets horizontal scaling
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3637_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(359, str_cleaning_23)) > (0))) goto event_3637_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3637_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale((100-((AssociateArray*)get_instance(gameVariables_instances))->get_value(359, str_cleaning_23))/MathHelper()/2);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_3637_6_end: ;
}
// Function purpose: generated callback event_func_4628 processes event block(s) 3638_6. Actions/conditions:
//        3638_6: increments Fatigue by 5.
void Frames::event_func_4628()
{
    VITA_LEGACY_EVENT();
    // event 3638_6 : increments Fatigue by 5
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3638_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(359, str_cleaning_23)) == (1))) goto event_3638_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3638_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        {
            loop_clean_fin_running = true;
            int times = int(1);
            loop_clean_fin_index = 0;
            while (loop_clean_fin_index < times) {
                loop_clean_fin_6();
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
    event_3638_6_end: ;
}
// Function purpose: generated callback event_func_4629 processes event block(s) 3639_6. Actions/conditions:
//        3639_6: changes a stored game value.
void Frames::event_func_4629()
{
    VITA_LEGACY_EVENT();
    // event 3639_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3639_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(359, str_cleaning_23)) > (0))) goto event_3639_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3639_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(359, str_cleaning_23, 1);
    }
    event_3639_6_end: ;
}
// Function purpose: generated callback event_func_4630 processes event block(s) 3646_6. Actions/conditions:
//        3646_6: sets TempClean to 1; adds a dust 223 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(324, CleanX)+8; plus 6 more actions.
void Frames::event_func_4630()
{
    // event 3646_6 : sets TempClean to 1; adds a dust 223 instance; sets the selected object's horizontal position to gameVariables->get_value(324, CleanX)+8; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3646_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(13))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3646_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(944, str_tempclean_2283)) == (0))) goto event_3646_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3646_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(944, str_tempclean_2283, 1);
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(324, str_cleanx_1108)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(325, str_cleany_1109)+8);
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3646_6_end: ;
}
// Function purpose: generated callback event_func_4631 processes event block(s) 3647_6. Actions/conditions:
//        3647_6: sets TempClean to 0.
void Frames::event_func_4631()
{
    // event 3647_6 : sets TempClean to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_cleaning_1)) goto event_3647_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(13))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3647_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(944, str_tempclean_2283, 0);
    }
    event_3647_6_end: ;
}
// Function purpose: generated callback event_func_4632 processes event block(s) 3648_6. Actions/conditions:
//        3648_6: checks scene is active; game state Browsing; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4632()
{
    // event 3648_6 : checks scene is active; game state Browsing; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3648_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(361, str_browsing_1155)) > (0))) goto event_3648_6_end;
        if (!group_code_sort_these_using_items_2_browsing_1) {
            group_code_sort_these_using_items_2_browsing_1 = true;
        }
    }
    event_3648_6_end: ;
}
// Function purpose: generated callback event_func_4633 processes event block(s) 3649_6. Actions/conditions:
//        3649_6: moves the selected object to the front; sets horizontal scaling.
void Frames::event_func_4633()
{
    // event 3649_6 : moves the selected object to the front; sets horizontal scaling
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_browsing_1)) goto event_3649_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(361, str_browsing_1155)) > (0))) goto event_3649_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3649_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale((100-((AssociateArray*)get_instance(gameVariables_instances))->get_value(361, str_browsing_1155))/MathHelper()/2);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_3649_6_end: ;
}
// Function purpose: generated callback event_func_4634 processes event block(s) 3650_6. Actions/conditions:
//        3650_6: checks scene is active; game state Browsing; skips if dialog is open; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4634()
{
    VITA_LEGACY_EVENT();
    // event 3650_6 : checks scene is active; game state Browsing; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_browsing_1)) goto event_3650_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(361, str_browsing_1155)) == (1))) goto event_3650_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3650_6_end;
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
    event_3650_6_end: ;
}
// Function purpose: generated callback event_func_4635 processes event block(s) 3651_6. Actions/conditions:
//        3651_6: changes a stored game value.
void Frames::event_func_4635()
{
    VITA_LEGACY_EVENT();
    // event 3651_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_browsing_1)) goto event_3651_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(361, str_browsing_1155)) > (0))) goto event_3651_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3651_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(361, str_browsing_1155, 1);
    }
    event_3651_6_end: ;
}
// Function purpose: generated callback event_func_4636 processes event block(s) 3652_6. Actions/conditions:
//        3652_6: increments Score_P by 1; changes a stored game value; plays a sound or music track.
void Frames::event_func_4636()
{
    VITA_LEGACY_EVENT();
    // event 3652_6 : increments Score_P by 1; changes a stored game value; plays a sound or music track
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_browsing_1)) goto event_3652_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(361, str_browsing_1155)) == (1))) goto event_3652_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) < (100))) goto event_3652_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3652_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 1);
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(10, 1);
        media.play_id(SOUND_CLOSE_6, 1-1);
        {
            loop_icon_int_running = true;
            int times = int(1);
            loop_icon_int_index = 0;
            while (loop_icon_int_index < times) {
                loop_icon_int_6();
                if (!loop_icon_int_running) break;
                loop_icon_int_index++;
            }
        }
    }
    event_3652_6_end: ;
}
// Function purpose: generated callback event_func_4637 processes event block(s) 3653_6. Actions/conditions:
//        3653_6: checks scene is active; game state Reading; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4637()
{
    // event 3653_6 : checks scene is active; game state Reading; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3653_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(360, str_reading_1154)) > (0))) goto event_3653_6_end;
        if (!group_code_sort_these_using_items_2_reading_1) {
            group_code_sort_these_using_items_2_reading_1 = true;
        }
    }
    event_3653_6_end: ;
}
// Function purpose: generated callback event_func_4638 processes event block(s) 3654_6. Actions/conditions:
//        3654_6: moves the selected object to the front; sets horizontal scaling.
void Frames::event_func_4638()
{
    // event 3654_6 : moves the selected object to the front; sets horizontal scaling
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_reading_1)) goto event_3654_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(360, str_reading_1154)) > (0))) goto event_3654_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3654_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale((100-((AssociateArray*)get_instance(gameVariables_instances))->get_value(360, str_reading_1154))/MathHelper()/2);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_3654_6_end: ;
}
// Function purpose: generated callback event_func_4639 processes event block(s) 3655_6. Actions/conditions:
//        3655_6: checks scene is active; game state Reading; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4639()
{
    VITA_LEGACY_EVENT();
    // event 3655_6 : checks scene is active; game state Reading; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_reading_1)) goto event_3655_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(360, str_reading_1154)) == (1))) goto event_3655_6_end;
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
    event_3655_6_end: ;
}
// Function purpose: generated callback event_func_4640 processes event block(s) 3656_6. Actions/conditions:
//        3656_6: changes a stored game value.
void Frames::event_func_4640()
{
    VITA_LEGACY_EVENT();
    // event 3656_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_reading_1)) goto event_3656_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(360, str_reading_1154)) > (0))) goto event_3656_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3656_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(360, str_reading_1154, 1);
    }
    event_3656_6_end: ;
}
// Function purpose: generated callback event_func_4641 processes event block(s) 3657_6. Actions/conditions:
//        3657_6: increments Score_P by 1; changes a stored game value; plays a sound or music track.
void Frames::event_func_4641()
{
    VITA_LEGACY_EVENT();
    // event 3657_6 : increments Score_P by 1; changes a stored game value; plays a sound or music track
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_reading_1)) goto event_3657_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(360, str_reading_1154)) == (1))) goto event_3657_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) < (100))) goto event_3657_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3657_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 1);
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(10, 1);
        media.play_id(SOUND_CLOSE_6, 1-1);
        {
            loop_icon_int_running = true;
            int times = int(1);
            loop_icon_int_index = 0;
            while (loop_icon_int_index < times) {
                loop_icon_int_6();
                if (!loop_icon_int_running) break;
                loop_icon_int_index++;
            }
        }
    }
    event_3657_6_end: ;
}
// Function purpose: generated callback event_func_4642 processes event block(s) 3661_6. Actions/conditions:
//        3661_6: checks scene is active; game state Grappling; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4642()
{
    // event 3661_6 : checks scene is active; game state Grappling; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3661_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(332, str_grappling_1120)) > (0))) goto event_3661_6_end;
        if (!group_code_sort_these_using_items_2_roof_travel_2_1) {
            group_code_sort_these_using_items_2_roof_travel_2_1 = true;
        }
    }
    event_3661_6_end: ;
}
// Function purpose: generated callback event_func_4643 processes event block(s) 3662_6. Actions/conditions:
//        3662_6: checks scene is active; game state Rope; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4643()
{
    // event 3662_6 : checks scene is active; game state Rope; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3662_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(15, str_rope_463)) > (0))) goto event_3662_6_end;
        if (!group_code_sort_these_using_items_2_roof_travel_2_1) {
            group_code_sort_these_using_items_2_roof_travel_2_1 = true;
        }
    }
    event_3662_6_end: ;
}
// Function purpose: generated callback event_func_4644 processes event block(s) 3663_6. Actions/conditions:
//        3663_6: sets the object's animation to 0.
void Frames::event_func_4644()
{
    // event 3663_6 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3663_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(332, str_grappling_1120)) == (1))) goto event_3663_6_end;
        {
            loop_new_grap_running = true;
            int times = int(2);
            loop_new_grap_index = 0;
            while (loop_new_grap_index < times) {
                loop_new_grap_6();
                if (!loop_new_grap_running) break;
                loop_new_grap_index++;
            }
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_3663_6_end: ;
}
// Function purpose: generated callback event_func_4645 processes event block(s) 3670_6. Actions/conditions:
//        3670_6: sets the object's animation to 0.
void Frames::event_func_4645()
{
    // event 3670_6 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_roof_travel_2_1)) goto event_3670_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(15, str_rope_463)) == (1))) goto event_3670_6_end;
        {
            loop_new_rope_running = true;
            int times = int(2);
            loop_new_rope_index = 0;
            while (loop_new_rope_index < times) {
                loop_new_rope_6();
                if (!loop_new_rope_running) break;
                loop_new_rope_index++;
            }
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_3670_6_end: ;
}
// Function purpose: generated callback event_func_4646 processes event block(s) 3678_6. Actions/conditions:
//        3678_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_4646()
{
    // event 3678_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3678_6_end;
            group_code_sort_these_using_items_2_chipping_2_1 = false;
    
            group_code_sort_these_using_items_2_digging_2_1 = false;
    
            group_code_sort_these_using_items_2_cutting_2_1 = false;
    
            group_code_sort_these_using_items_2_unscrewing_2_1 = false;
    
            group_code_sort_these_using_items_2_weeding_1 = false;
    
            group_code_sort_these_using_items_2_cleaning_1 = false;
    
            group_code_sort_these_using_items_2_browsing_1 = false;
    
            group_code_sort_these_using_items_2_reading_1 = false;
    
            group_code_sort_these_using_items_2_roof_travel_2_1 = false;
    
            group_code_sort_these_sleep_stuff_sleep_menu_1 = false;
    
    }
    event_3678_6_end: ;
}
// Function purpose: generated callback event_func_4647 processes event block(s) 3679_6. Actions/conditions:
//        3679_6: changes a stored game value.
void Frames::event_func_4647()
{
    VITA_LEGACY_EVENT();
    // event 3679_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_3679_6_end;
        tv_404_instances.clear_selection();
        for (ObjectIterator it(tv_404_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!tv_404_instances.has_selection()) goto event_3679_6_end;
        for (ObjectIterator it(tv_404_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_3679_6_end: ;
}
// Function purpose: generated callback event_func_4648 processes event block(s) 3680_6. Actions/conditions:
//        3680_6: sets the object's animation to 0.
void Frames::event_func_4648()
{
    // event 3680_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_3680_6_end;
        tv_404_instances.clear_selection();
        for (ObjectIterator it(tv_404_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!tv_404_instances.has_selection()) goto event_3680_6_end;
        for (ObjectIterator it(tv_404_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_3680_6_end: ;
}
// Function purpose: generated callback event_func_4649 processes event block(s) 3681_6. Actions/conditions:
//        3681_6: sets BindItem to 0.
void Frames::event_func_4649()
{
    // event 3681_6 : sets BindItem to 0
    {
        if (!(group_code_1)) goto event_3681_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(933, str_binditem_2268)) == (1))) goto event_3681_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(933, str_binditem_2268, 0);
    }
    event_3681_6_end: ;
}
// Function purpose: generated callback event_func_4650 processes event block(s) 3682_6. Actions/conditions:
//        3682_6: saves the current object selection; sets BindItem to 1.
void Frames::event_func_4650()
{
    // event 3682_6 : saves the current object selection; sets BindItem to 1
    bool or_result_3682_6 = false;
    bool or_temp_result_3682_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_3682_6_0_end;
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(13))) { it.deselect(); continue; }
        }
        if (!mouse_9_instances.has_selection()) goto or_event_3682_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(47, str_selecteditem_515)) == (44))) goto or_event_3682_6_0_end;
        or_result_3682_6 = true;
        or_temp_result_3682_6_0 = true;
    }
    or_event_3682_6_0_end: ;
    mouse_9_instances.clear_saved_selection();
    if (or_temp_result_3682_6_0) {
        mouse_9_instances.save_selection();
    }
    // event 3682_6 : saves the current object selection; sets BindItem to 1
    bool or_temp_result_3682_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_3682_6_1_end;
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(13))) { it.deselect(); continue; }
        }
        if (!mouse_9_instances.has_selection()) goto or_event_3682_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(47, str_selecteditem_515)) == (13))) goto or_event_3682_6_1_end;
        or_result_3682_6 = true;
        or_temp_result_3682_6_1 = true;
        or_event_3682_6_1_end: ;
        if (or_temp_result_3682_6_1) {
            mouse_9_instances.save_selection();
        }
        if (!or_result_3682_6) goto or_final_or_event_3682_6_1_end;
        mouse_9_instances.empty_selection();
        if (or_temp_result_3682_6_0 || or_temp_result_3682_6_1) {
            mouse_9_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(933, str_binditem_2268, 1);
        }
    }
    or_final_or_event_3682_6_1_end: ;
}
// Function purpose: generated callback event_func_4651 processes event block(s) 3683_6. Actions/conditions:
//        3683_6: sets the selected object's direction to 16.
void Frames::event_func_4651()
{
    // event 3683_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1)) goto event_3683_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(25))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3683_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_3683_6_end: ;
}
// Function purpose: generated callback event_func_4652 processes event block(s) 3684_6. Actions/conditions:
//        3684_6: sets the selected object's direction to 24.
void Frames::event_func_4652()
{
    // event 3684_6 : sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_3684_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(16777216)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3684_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_3684_6_end: ;
}
// Function purpose: generated callback event_func_4653 processes event block(s) 3685_6. Actions/conditions:
//        3685_6: disables flag 1 (object-specific active or interaction state) on the selected object.
void Frames::event_func_4653()
{
    // event 3685_6 : disables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(group_code_1)) goto event_3685_6_end;
        active9_291_instances.clear_selection();
        for (ObjectIterator it(active9_291_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!active9_291_instances.has_selection()) goto event_3685_6_end;
        for (ObjectIterator it(active9_291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_3685_6_end: ;
}
// Function purpose: generated callback event_func_4654 processes event block(s) 3690_6. Actions/conditions:
//        3690_6: sets the object's animation to 1; creates a guardalert 266 object; sets the selected object's string
//        to OpenVent; plus 5 more actions.
void Frames::event_func_4654()
{
    // event 3690_6 : sets the object's animation to 1; creates a guardalert 266 object; sets the selected object's string to OpenVent; plus 5 more actions
    {
        if (!(group_code_1)) goto event_3690_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(1)) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_3690_6_end;
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        FrameObject * single_instance_3690_6_0; single_instance_3690_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(ventCover_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_guardalert_266(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_3690_6_0 == NULL)
                    single_instance_3690_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3690_6_0))->alterables->strings.set(0, str_openvent_908);
        ((Active*)((Active*)single_instance_3690_6_0))->set_layer(2-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(239, str_track_cuts_865, 1);
    }
    event_3690_6_end: ;
}
// Function purpose: generated callback event_func_4655 processes event block(s) 3692_6. Actions/conditions:
//        3692_6: sets SpeakText to gameVariables->get_string(401, Des_Msg); sets Des_Msg to empty_string.
void Frames::event_func_4655()
{
    // event 3692_6 : sets SpeakText to gameVariables->get_string(401, Des_Msg); sets Des_Msg to empty_string
    {
        if (!(group_code_1)) goto event_3692_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(401, str_des_msg_1213)) != (empty_string))) goto event_3692_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) <= (0))) goto event_3692_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) <= (0))) goto event_3692_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) <= (0))) goto event_3692_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) <= (0))) goto event_3692_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(401, str_des_msg_1213));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(401, str_des_msg_1213, empty_string);
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
    event_3692_6_end: ;
}
// Function purpose: generated callback event_func_4656 processes event block(s) 3693_6. Actions/conditions:
//        3693_6: checks scene is active; game state Zone_Gym; skips if scene is active; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4656()
{
    // event 3693_6 : checks scene is active; game state Zone_Gym; skips if scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3693_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(779, str_zone_gym_1959)) == (1))) goto event_3693_6_end;
        if (group_code_1 && group_code_gym_equip_1) goto event_3693_6_end;
        if (!group_code_gym_equip_1) {
            group_code_gym_equip_1 = true;
            group_check_group_code_gym_equip_punch_bag_1_0 = true;
            group_check_group_code_gym_equip_punch_bag_1_1 = true;
            group_check_group_code_gym_equip_treadmill_1_1 = true;
            group_check_group_code_gym_equip_treadmill_1_0 = true;
            group_check_group_code_gym_equip_press_ups_1_1 = true;
            group_check_group_code_gym_equip_skipping_1_0 = true;
            group_check_group_code_gym_equip_press_ups_1_0 = true;
            group_check_group_code_gym_equip_speed_bag_1_1 = true;
            group_check_group_code_gym_equip_speed_bag_1_0 = true;
            group_check_group_code_gym_equip_skipping_1_1 = true;
            group_check_group_code_gym_equip_weights_1_0 = true;
            group_check_group_code_gym_equip_weights_1_1 = true;
        }
    }
    event_3693_6_end: ;
}
// Function purpose: generated callback event_func_4657 processes event block(s) 3694_6. Actions/conditions:
//        3694_6: checks scene is active; game state Zone_Gym; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4657()
{
    // event 3694_6 : checks scene is active; game state Zone_Gym; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3694_6_end;
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3694_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(779, str_zone_gym_1959)) == (0))) goto event_3694_6_end;
            group_code_gym_equip_1 = false;
    
    }
    event_3694_6_end: ;
}
// Function purpose: generated callback event_func_4658 processes event block(s) 3695_6. Actions/conditions:
//        3695_6: checks scene is active; skips if the event-specific game state condition is met; player shares the
//        selected collision target X coordinate; player shares the.
void Frames::event_func_4658()
{
    // event 3695_6 : checks scene is active; skips if the event-specific game state condition is met; player shares the selected collision target X coordinate; player shares the
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3695_6_end;
        playerBase_instances.clear_selection();
        skippingmat_435_instances.clear_selection();
        if (!check_overlap(playerBase_instances, skippingmat_435_instances)) goto event_3695_6_end;
        for (ObjectIterator it(skippingmat_435_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!skippingmat_435_instances.has_selection()) goto event_3695_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3695_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3695_6_end;
        if (group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1) goto event_3695_6_end;
        if (!group_code_gym_equip_skipping_1) {
            group_code_gym_equip_skipping_1 = true;
            group_check_group_code_gym_equip_skipping_1_1 = true;
            group_check_group_code_gym_equip_skipping_1_0 = true;
        }
    }
    event_3695_6_end: ;
}
// Function purpose: generated callback event_func_4659 processes event block(s) 3696_6. Actions/conditions:
//        3696_6: sets the selected object's direction to 0.
void Frames::event_func_4659()
{
    // event 3696_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3696_6_end;
        playerBase_instances.clear_selection();
        punchbag_436_instances.clear_selection();
        if (!check_overlap(playerBase_instances, punchbag_436_instances)) goto event_3696_6_end;
        for (ObjectIterator it(punchbag_436_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!punchbag_436_instances.has_selection()) goto event_3696_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3696_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3696_6_end;
        if (group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1) goto event_3696_6_end;
        if (!group_code_gym_equip_punch_bag_1) {
            group_code_gym_equip_punch_bag_1 = true;
            group_check_group_code_gym_equip_punch_bag_1_0 = true;
            group_check_group_code_gym_equip_punch_bag_1_1 = true;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_3696_6_end: ;
}
// Function purpose: generated callback event_func_4660 processes event block(s) 3697_6. Actions/conditions:
//        3697_6: checks scene is active; skips if the event-specific game state condition is met; player shares the
//        selected collision target X coordinate; player shares the.
void Frames::event_func_4660()
{
    // event 3697_6 : checks scene is active; skips if the event-specific game state condition is met; player shares the selected collision target X coordinate; player shares the
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3697_6_end;
        playerBase_instances.clear_selection();
        pushupmat_408_instances.clear_selection();
        if (!check_overlap(playerBase_instances, pushupmat_408_instances)) goto event_3697_6_end;
        for (ObjectIterator it(pushupmat_408_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!pushupmat_408_instances.has_selection()) goto event_3697_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3697_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3697_6_end;
        if (group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1) goto event_3697_6_end;
        if (!group_code_gym_equip_press_ups_1) {
            group_code_gym_equip_press_ups_1 = true;
            group_check_group_code_gym_equip_press_ups_1_1 = true;
            group_check_group_code_gym_equip_press_ups_1_0 = true;
        }
    }
    event_3697_6_end: ;
}
// Function purpose: generated callback event_func_4661 processes event block(s) 3698_6. Actions/conditions:
//        3698_6: checks scene is active; skips if the event-specific game state condition is met; player shares the
//        selected collision target X coordinate; player shares the.
void Frames::event_func_4661()
{
    // event 3698_6 : checks scene is active; skips if the event-specific game state condition is met; player shares the selected collision target X coordinate; player shares the
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3698_6_end;
        playerBase_instances.clear_selection();
        gym4_318_instances.clear_selection();
        if (!check_overlap(playerBase_instances, gym4_318_instances)) goto event_3698_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3698_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3698_6_end;
        if (group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1) goto event_3698_6_end;
        if (!group_code_gym_equip_weights_1) {
            group_code_gym_equip_weights_1 = true;
            group_check_group_code_gym_equip_weights_1_0 = true;
            group_check_group_code_gym_equip_weights_1_1 = true;
        }
    }
    event_3698_6_end: ;
}
// Function purpose: generated callback event_func_4662 processes event block(s) 3699_6. Actions/conditions:
//        3699_6: checks scene is active; skips if the event-specific game state condition is met; player shares the
//        selected collision target X coordinate; player shares the.
void Frames::event_func_4662()
{
    // event 3699_6 : checks scene is active; skips if the event-specific game state condition is met; player shares the selected collision target X coordinate; player shares the
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3699_6_end;
        playerBase_instances.clear_selection();
        chinupbar_430_instances.clear_selection();
        if (!check_overlap(playerBase_instances, chinupbar_430_instances)) goto event_3699_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3699_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3699_6_end;
        if (group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1) goto event_3699_6_end;
        if (!group_code_gym_equip_weights_1) {
            group_code_gym_equip_weights_1 = true;
            group_check_group_code_gym_equip_weights_1_0 = true;
            group_check_group_code_gym_equip_weights_1_1 = true;
        }
    }
    event_3699_6_end: ;
}
// Function purpose: generated callback event_func_4663 processes event block(s) 3700_6. Actions/conditions:
//        3700_6: checks scene is active; skips if the event-specific game state condition is met; player shares the
//        selected collision target X coordinate; player shares the.
void Frames::event_func_4663()
{
    // event 3700_6 : checks scene is active; skips if the event-specific game state condition is met; player shares the selected collision target X coordinate; player shares the
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3700_6_end;
        playerBase_instances.clear_selection();
        gym3_317_instances.clear_selection();
        if (!check_overlap(playerBase_instances, gym3_317_instances)) goto event_3700_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3700_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3700_6_end;
        if (group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1) goto event_3700_6_end;
        if (!group_code_gym_equip_treadmill_1) {
            group_code_gym_equip_treadmill_1 = true;
            group_check_group_code_gym_equip_treadmill_1_1 = true;
            group_check_group_code_gym_equip_treadmill_1_0 = true;
        }
    }
    event_3700_6_end: ;
}
