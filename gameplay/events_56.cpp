#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_4664 processes event block(s) 3701_6. Actions/conditions:
//        3701_6: checks scene is active; skips if the event-specific game state condition is met; player shares the
//        selected collision target X coordinate; player shares the.
void Frames::event_func_4664()
{
    // event 3701_6 : checks scene is active; skips if the event-specific game state condition is met; player shares the selected collision target X coordinate; player shares the
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3701_6_end;
        playerBase_instances.clear_selection();
        joggingmat_407_instances.clear_selection();
        if (!check_overlap(playerBase_instances, joggingmat_407_instances)) goto event_3701_6_end;
        for (ObjectIterator it(joggingmat_407_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!joggingmat_407_instances.has_selection()) goto event_3701_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3701_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3701_6_end;
        if (group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1) goto event_3701_6_end;
        if (!group_code_gym_equip_treadmill_1) {
            group_code_gym_equip_treadmill_1 = true;
            group_check_group_code_gym_equip_treadmill_1_1 = true;
            group_check_group_code_gym_equip_treadmill_1_0 = true;
        }
    }
    event_3701_6_end: ;
}
// Function purpose: generated callback event_func_4665 processes event block(s) 3702_6. Actions/conditions:
//        3702_6: sets the selected object's direction to 0.
void Frames::event_func_4665()
{
    // event 3702_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3702_6_end;
        playerBase_instances.clear_selection();
        speedbag_439_instances.clear_selection();
        if (!check_overlap(playerBase_instances, speedbag_439_instances)) goto event_3702_6_end;
        for (ObjectIterator it(speedbag_439_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!speedbag_439_instances.has_selection()) goto event_3702_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3702_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3702_6_end;
        if (group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1) goto event_3702_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        if (!group_code_gym_equip_speed_bag_1) {
            group_code_gym_equip_speed_bag_1 = true;
            group_check_group_code_gym_equip_speed_bag_1_1 = true;
            group_check_group_code_gym_equip_speed_bag_1_0 = true;
        }
    }
    event_3702_6_end: ;
}
// Function purpose: generated callback event_func_4666 processes event block(s) 3703_6. Actions/conditions:
//        3703_6: creates a taskbox 238 object; sets the target object's direction; sets the selected object's string
//        to Workout; plus 6 more actions.
void Frames::event_func_4666()
{
    // event 3703_6 : creates a taskbox 238 object; sets the target object's direction; sets the selected object's string to Workout; plus 6 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3703_6_end;
        if (!group_check_group_code_gym_equip_punch_bag_1_0) goto event_3703_6_end;
        group_check_group_code_gym_equip_punch_bag_1_0 = false;
        FrameObject * single_instance_3703_6_0; single_instance_3703_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityPanel(parent->x + 2, parent->y + 180), parent->layer);
                if (single_instance_3703_6_0 == NULL)
                    single_instance_3703_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3703_6_0))->set_direction(16);
        ((Active*)((Active*)single_instance_3703_6_0))->alterables->strings.set(0, str_workout_16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(552, str_hits_1456, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(945, str_hitbar_2284, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(946, str_smashed_2285, 0);
    }
    event_3703_6_end: ;
}
// Function purpose: generated callback event_func_4667 processes event block(s) 3704_6. Actions/conditions:
//        3704_6: adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239
//        object; plus 6 more actions.
void Frames::event_func_4667()
{
    // event 3704_6 : adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239 object; plus 6 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3704_6_end;
        if (!group_check_group_code_gym_equip_punch_bag_1_1) goto event_3704_6_end;
        group_check_group_code_gym_equip_punch_bag_1_1 = false;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3704_6_end;
        activityText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activityText(0, 0), 5);
            activityText_instances.add_back();
        }
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(activityPanel_instances, it.current_index));
            if (parent == NULL) goto pos_end_3704_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + 9, parent->get_y() + 3);
            pos_end_3704_6_1: ;
        }
        FrameObject * single_instance_3704_6_2; single_instance_3704_6_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(activityPanel_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + 10, parent->y + 15), parent->layer);
                if (single_instance_3704_6_2 == NULL)
                    single_instance_3704_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3704_6_2))->alterables->strings.set(0, str_workout_16);
        FrameObject * single_instance_3704_6_3; single_instance_3704_6_3 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(activityPanel_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityMarker(parent->x + 62, parent->y + 15), parent->layer);
                if (single_instance_3704_6_3 == NULL)
                    single_instance_3704_6_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3704_6_3))->force_animation(2);
    }
    event_3704_6_end: ;
}
// Function purpose: generated callback event_func_4668 processes event block(s) 3705_6. Actions/conditions:
//        3705_6: moves the selected object to the front; sets horizontal scaling; sets the selected object's text;
//        plus 6 more actions.
void Frames::event_func_4668()
{
    // event 3705_6 : moves the selected object to the front; sets horizontal scaling; sets the selected object's text; plus 6 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3705_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3705_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3705_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale(((AssociateArray*)get_instance(gameVariables_instances))->get_value(945, str_hitbar_2284)/MathHelper()/5.6);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_14_197)+str__247+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(552, str_hits_1456)));
            ((Text*)*it)->move_front();
        }
        {
            ObjectIterator other_it(activityProgress_instances);
            activityMarker_instances.clear_selection();
            for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_3705_6_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_3705_6_0_end: ;
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(activityPanel_instances, it.current_index));
            if (parent == NULL) goto pos_end_3705_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 65, parent->get_y() + 15);
            pos_end_3705_6_1: ;
        }
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_3705_6_end: ;
}
// Function purpose: generated callback event_func_4669 processes event block(s) 3706_6. Actions/conditions:
//        3706_6: sets the selected object's direction to 0.
void Frames::event_func_4669()
{
    // event 3706_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3706_6_end;
        playerBase_instances.clear_selection();
        punchbag_436_instances.clear_selection();
        if (!check_overlap(playerBase_instances, punchbag_436_instances)) goto event_3706_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3706_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3706_6_end;
        ((Active*)get_instance(playerBase_instances))->set_direction(0);
    }
    event_3706_6_end: ;
}
// Function purpose: generated callback event_func_4670 processes event block(s) 3707_6. Actions/conditions:
//        3707_6: sets the selected object's direction to 16.
void Frames::event_func_4670()
{
    // event 3707_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3707_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(945, str_hitbar_2284)) >= (250))) goto event_3707_6_end;
        activityMarker_instances.clear_selection();
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_3707_6_end: ;
}
// Function purpose: generated callback event_func_4671 processes event block(s) 3708_6. Actions/conditions:
//        3708_6: sets Smashed to 0; sets HitBar to 0.
void Frames::event_func_4671()
{
    // event 3708_6 : sets Smashed to 0; sets HitBar to 0
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3708_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(945, str_hitbar_2284)) <= (0))) goto event_3708_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(946, str_smashed_2285, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(945, str_hitbar_2284, 0);
    }
    event_3708_6_end: ;
}
// Function purpose: generated callback event_func_4672 processes event block(s) 3709_6. Actions/conditions:
//        3709_6: increments HitBar by 10.
void Frames::event_func_4672()
{
    // event 3709_6 : increments HitBar by 10
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3709_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_3709_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(945, str_hitbar_2284)) < (300))) goto event_3709_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(946, str_smashed_2285)) == (0))) goto event_3709_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3709_6_end;
        VITA_ADD(((AssociateArray*)get_instance(gameVariables_instances)), 945, str_hitbar_2284, 10);
    }
    event_3709_6_end: ;
}
// Function purpose: generated callback event_func_4673 processes event block(s) 3710_6. Actions/conditions:
//        3710_6: saves the current object selection; changes a stored game value.
void Frames::event_func_4673()
{
    // event 3710_6 : saves the current object selection; changes a stored game value
    bool or_result_3710_6 = false;
    bool or_temp_result_3710_6_0 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto or_event_3710_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(945, str_hitbar_2284)) > (0))) goto or_event_3710_6_0_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1)))) goto or_event_3710_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(946, str_smashed_2285)) == (0))) goto or_event_3710_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3710_6_0_end;
        or_result_3710_6 = true;
        or_temp_result_3710_6_0 = true;
    }
    or_event_3710_6_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_3710_6_0) {
        dialogPanel_instances.save_selection();
    }
    // event 3710_6 : saves the current object selection; changes a stored game value
    bool or_temp_result_3710_6_1 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto or_event_3710_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(945, str_hitbar_2284)) > (0))) goto or_event_3710_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(946, str_smashed_2285)) == (1))) goto or_event_3710_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3710_6_1_end;
        or_result_3710_6 = true;
        or_temp_result_3710_6_1 = true;
        or_event_3710_6_1_end: ;
        if (or_temp_result_3710_6_1) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_3710_6) goto or_final_or_event_3710_6_1_end;
        dialogPanel_instances.empty_selection();
        if (or_temp_result_3710_6_0 || or_temp_result_3710_6_1) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            VITA_ADD(((AssociateArray*)*it), 945, str_hitbar_2284, -20);
        }
    }
    or_final_or_event_3710_6_1_end: ;
}
// Function purpose: generated callback event_func_4674 processes event block(s) 3711_6. Actions/conditions:
//        3711_6: sets Smashed to 1; sets SpeakText to Misc entry 6; plays a sound or music track.
void Frames::event_func_4674()
{
    // event 3711_6 : sets Smashed to 1; sets SpeakText to Misc entry 6; plays a sound or music track
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3711_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(945, str_hitbar_2284)) >= (250))) goto event_3711_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(946, str_smashed_2285)) == (0))) goto event_3711_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_3711_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1)))) goto event_3711_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3711_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(946, str_smashed_2285, 1);
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3711_6_end: ;
}
// Function purpose: generated callback event_func_4675 processes event block(s) 3712_6. Actions/conditions:
//        3712_6: sets the object's animation to 6; creates a dust 223 object; sets Smashed to 1; plus 5 more actions.
void Frames::event_func_4675()
{
    // event 3712_6 : sets the object's animation to 6; creates a dust 223 object; sets Smashed to 1; plus 5 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3712_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(945, str_hitbar_2284)) >= (250))) goto event_3712_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(946, str_smashed_2285)) == (0))) goto event_3712_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3712_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1)))) goto event_3712_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3712_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
        }
        FrameObject * single_instance_3712_6_0; single_instance_3712_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 12, parent->y + 0), parent->layer);
                if (single_instance_3712_6_0 == NULL)
                    single_instance_3712_6_0 = new_obj;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(946, str_smashed_2285, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(552, str_hits_1456, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 3);
        {
            loop_rnd_hit_sfx_running = true;
            int times = int(1);
            loop_rnd_hit_sfx_index = 0;
            while (loop_rnd_hit_sfx_index < times) {
                loop_rnd_hit_sfx_6();
                if (!loop_rnd_hit_sfx_running) break;
                loop_rnd_hit_sfx_index++;
            }
        }
        {
            loop_check_hits_str_running = true;
            int times = int(1);
            loop_check_hits_str_index = 0;
            while (loop_check_hits_str_index < times) {
                loop_check_hits_str_6();
                if (!loop_check_hits_str_running) break;
                loop_check_hits_str_index++;
            }
        }
    }
    event_3712_6_end: ;
}
// Function purpose: generated callback event_func_4676 processes event block(s) 3719_6. Actions/conditions:
//        3719_6: creates a taskbox 238 object; sets the target object's direction; sets the selected object's string
//        to Workout; plus 6 more actions.
void Frames::event_func_4676()
{
    // event 3719_6 : creates a taskbox 238 object; sets the target object's direction; sets the selected object's string to Workout; plus 6 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3719_6_end;
        if (!group_check_group_code_gym_equip_speed_bag_1_0) goto event_3719_6_end;
        group_check_group_code_gym_equip_speed_bag_1_0 = false;
        FrameObject * single_instance_3719_6_0; single_instance_3719_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityPanel(parent->x + 2, parent->y + 180), parent->layer);
                if (single_instance_3719_6_0 == NULL)
                    single_instance_3719_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3719_6_0))->set_direction(16);
        ((Active*)((Active*)single_instance_3719_6_0))->alterables->strings.set(0, str_workout_16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(396, str_skips_1204, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(947, str_skipbar_2286, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(948, str_jumped_2287, 0);
    }
    event_3719_6_end: ;
}
// Function purpose: generated callback event_func_4677 processes event block(s) 3720_6. Actions/conditions:
//        3720_6: adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239
//        object; plus 5 more actions.
void Frames::event_func_4677()
{
    // event 3720_6 : adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3720_6_end;
        if (!group_check_group_code_gym_equip_speed_bag_1_1) goto event_3720_6_end;
        group_check_group_code_gym_equip_speed_bag_1_1 = false;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3720_6_end;
        activityText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activityText(0, 0), 5);
            activityText_instances.add_back();
        }
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(activityPanel_instances, it.current_index));
            if (parent == NULL) goto pos_end_3720_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + 9, parent->get_y() + 3);
            pos_end_3720_6_1: ;
        }
        FrameObject * single_instance_3720_6_2; single_instance_3720_6_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(activityPanel_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + 10, parent->y + 15), parent->layer);
                if (single_instance_3720_6_2 == NULL)
                    single_instance_3720_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3720_6_2))->alterables->strings.set(0, str_workout_16);
        FrameObject * single_instance_3720_6_3; single_instance_3720_6_3 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(activityPanel_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityMarker(parent->x + 62, parent->y + 15), parent->layer);
                if (single_instance_3720_6_3 == NULL)
                    single_instance_3720_6_3 = new_obj;
            }
        }
    }
    event_3720_6_end: ;
}
// Function purpose: generated callback event_func_4678 processes event block(s) 3721_6. Actions/conditions:
//        3721_6: sets the selected object's direction to 0.
void Frames::event_func_4678()
{
    // event 3721_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3721_6_end;
        playerBase_instances.clear_selection();
        speedbag_439_instances.clear_selection();
        if (!check_overlap(playerBase_instances, speedbag_439_instances)) goto event_3721_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3721_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3721_6_end;
        ((Active*)get_instance(playerBase_instances))->set_direction(0);
    }
    event_3721_6_end: ;
}
// Function purpose: generated callback event_func_4679 processes event block(s) 3722_6. Actions/conditions:
//        3722_6: moves the selected object to the front; sets horizontal scaling; sets the selected object's text;
//        plus 6 more actions.
void Frames::event_func_4679()
{
    // event 3722_6 : moves the selected object to the front; sets horizontal scaling; sets the selected object's text; plus 6 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3722_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3722_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3722_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale(((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)/MathHelper()/5.6);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_14_197)+str__247+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(396, str_skips_1204)));
            ((Text*)*it)->move_front();
        }
        {
            ObjectIterator other_it(activityProgress_instances);
            activityMarker_instances.clear_selection();
            for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_3722_6_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_3722_6_0_end: ;
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(activityPanel_instances, it.current_index));
            if (parent == NULL) goto pos_end_3722_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 65, parent->get_y() + 15);
            pos_end_3722_6_1: ;
        }
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_3722_6_end: ;
}
// Function purpose: generated callback event_func_4680 processes event block(s) 3723_6. Actions/conditions:
//        3723_6: increments SkipBar by 10.
void Frames::event_func_4680()
{
    // event 3723_6 : increments SkipBar by 10
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3723_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)) < (300))) goto event_3723_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3723_6_end;
        VITA_ADD(((AssociateArray*)get_instance(gameVariables_instances)), 947, str_skipbar_2286, 10);
    }
    event_3723_6_end: ;
}
// Function purpose: generated callback event_func_4681 processes event block(s) 3724_6. Actions/conditions:
//        3724_6: sets Jumped to 0; sets SkipBar to 0.
void Frames::event_func_4681()
{
    // event 3724_6 : sets Jumped to 0; sets SkipBar to 0
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3724_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)) >= (300))) goto event_3724_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3724_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(948, str_jumped_2287, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(947, str_skipbar_2286, 0);
    }
    event_3724_6_end: ;
}
// Function purpose: generated callback event_func_4682 processes event block(s) 3725_6. Actions/conditions:
//        3725_6: sets the selected object's direction to 16.
void Frames::event_func_4682()
{
    // event 3725_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3725_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)) >= (220))) goto event_3725_6_end;
        activityMarker_instances.clear_selection();
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_3725_6_end: ;
}
// Function purpose: generated callback event_func_4683 processes event block(s) 3726_6. Actions/conditions:
//        3726_6: sets Jumped to 1; sets SpeakText to Misc entry 6; plays a sound or music track.
void Frames::event_func_4683()
{
    // event 3726_6 : sets Jumped to 1; sets SpeakText to Misc entry 6; plays a sound or music track
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3726_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_3726_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_3726_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(948, str_jumped_2287)) == (0))) goto event_3726_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3726_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(948, str_jumped_2287, 1);
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3726_6_end: ;
}
// Function purpose: generated callback event_func_4684 processes event block(s) 3727_6. Actions/conditions:
//        3727_6: sets Jumped to 1.
void Frames::event_func_4684()
{
    // event 3727_6 : sets Jumped to 1
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3727_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_3727_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)) < (220))) goto event_3727_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(948, str_jumped_2287)) == (0))) goto event_3727_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3727_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3727_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(948, str_jumped_2287, 1);
    }
    event_3727_6_end: ;
}
// Function purpose: generated callback event_func_4685 processes event block(s) 3728_6. Actions/conditions:
//        3728_6: plays a sound or music track; sets Jumped to 1; increments Skips by 1; plus 6 more actions.
void Frames::event_func_4685()
{
    // event 3728_6 : plays a sound or music track; sets Jumped to 1; increments Skips by 1; plus 6 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3728_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_3728_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)) >= (220))) goto event_3728_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(948, str_jumped_2287)) == (0))) goto event_3728_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3728_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3728_6_end;
        media.play_id(SOUND_THROW_4, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(948, str_jumped_2287, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(396, str_skips_1204, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 2);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
        }
        FrameObject * single_instance_3728_6_0; single_instance_3728_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 12, parent->y + 0), parent->layer);
                if (single_instance_3728_6_0 == NULL)
                    single_instance_3728_6_0 = new_obj;
            }
        }
        {
            loop_check_skips_spd_running = true;
            int times = int(1);
            loop_check_skips_spd_index = 0;
            while (loop_check_skips_spd_index < times) {
                loop_check_skips_spd_6();
                if (!loop_check_skips_spd_running) break;
                loop_check_skips_spd_index++;
            }
        }
    }
    event_3728_6_end: ;
}
// Function purpose: generated callback event_func_4686 processes event block(s) 3731_6. Actions/conditions:
//        3731_6: creates a taskbox 238 object; sets the target object's direction; sets the selected object's string
//        to Workout; plus 6 more actions.
void Frames::event_func_4686()
{
    // event 3731_6 : creates a taskbox 238 object; sets the target object's direction; sets the selected object's string to Workout; plus 6 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3731_6_end;
        if (!group_check_group_code_gym_equip_skipping_1_0) goto event_3731_6_end;
        group_check_group_code_gym_equip_skipping_1_0 = false;
        FrameObject * single_instance_3731_6_0; single_instance_3731_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityPanel(parent->x + 2, parent->y + 180), parent->layer);
                if (single_instance_3731_6_0 == NULL)
                    single_instance_3731_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3731_6_0))->set_direction(16);
        ((Active*)((Active*)single_instance_3731_6_0))->alterables->strings.set(0, str_workout_16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(396, str_skips_1204, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(947, str_skipbar_2286, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(948, str_jumped_2287, 0);
    }
    event_3731_6_end: ;
}
// Function purpose: generated callback event_func_4687 processes event block(s) 3732_6. Actions/conditions:
//        3732_6: adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239
//        object; plus 5 more actions.
void Frames::event_func_4687()
{
    // event 3732_6 : adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3732_6_end;
        if (!group_check_group_code_gym_equip_skipping_1_1) goto event_3732_6_end;
        group_check_group_code_gym_equip_skipping_1_1 = false;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3732_6_end;
        activityText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activityText(0, 0), 5);
            activityText_instances.add_back();
        }
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(activityPanel_instances, it.current_index));
            if (parent == NULL) goto pos_end_3732_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + 9, parent->get_y() + 3);
            pos_end_3732_6_1: ;
        }
        FrameObject * single_instance_3732_6_2; single_instance_3732_6_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(activityPanel_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + 10, parent->y + 15), parent->layer);
                if (single_instance_3732_6_2 == NULL)
                    single_instance_3732_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3732_6_2))->alterables->strings.set(0, str_workout_16);
        FrameObject * single_instance_3732_6_3; single_instance_3732_6_3 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(activityPanel_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityMarker(parent->x + 62, parent->y + 15), parent->layer);
                if (single_instance_3732_6_3 == NULL)
                    single_instance_3732_6_3 = new_obj;
            }
        }
    }
    event_3732_6_end: ;
}
// Function purpose: generated callback event_func_4688 processes event block(s) 3733_6. Actions/conditions:
//        3733_6: sets the object's animation to 18.
void Frames::event_func_4688()
{
    // event 3733_6 : sets the object's animation to 18
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3733_6_end;
        playerBase_instances.clear_selection();
        skippingmat_435_instances.clear_selection();
        if (!check_overlap(playerBase_instances, skippingmat_435_instances)) goto event_3733_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3733_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3733_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(18)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3733_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
    }
    event_3733_6_end: ;
}
// Function purpose: generated callback event_func_4689 processes event block(s) 3734_6. Actions/conditions:
//        3734_6: moves the selected object to the front; sets horizontal scaling; sets the selected object's text;
//        plus 6 more actions.
void Frames::event_func_4689()
{
    // event 3734_6 : moves the selected object to the front; sets horizontal scaling; sets the selected object's text; plus 6 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3734_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3734_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3734_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale(((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)/MathHelper()/5.6);
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_15_608)+str__247+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(396, str_skips_1204)));
            ((Text*)*it)->move_front();
        }
        {
            ObjectIterator other_it(activityProgress_instances);
            activityMarker_instances.clear_selection();
            for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_3734_6_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_3734_6_0_end: ;
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(activityPanel_instances, it.current_index));
            if (parent == NULL) goto pos_end_3734_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 65, parent->get_y() + 15);
            pos_end_3734_6_1: ;
        }
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_3734_6_end: ;
}
// Function purpose: generated callback event_func_4690 processes event block(s) 3735_6. Actions/conditions:
//        3735_6: increments SkipBar by 7.
void Frames::event_func_4690()
{
    // event 3735_6 : increments SkipBar by 7
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3735_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)) < (300))) goto event_3735_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3735_6_end;
        VITA_ADD(((AssociateArray*)get_instance(gameVariables_instances)), 947, str_skipbar_2286, 7);
    }
    event_3735_6_end: ;
}
// Function purpose: generated callback event_func_4691 processes event block(s) 3736_6. Actions/conditions:
//        3736_6: sets Jumped to 0; sets SkipBar to 0.
void Frames::event_func_4691()
{
    // event 3736_6 : sets Jumped to 0; sets SkipBar to 0
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3736_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)) >= (300))) goto event_3736_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3736_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(948, str_jumped_2287, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(947, str_skipbar_2286, 0);
    }
    event_3736_6_end: ;
}
// Function purpose: generated callback event_func_4692 processes event block(s) 3737_6. Actions/conditions:
//        3737_6: sets the selected object's direction to 16.
void Frames::event_func_4692()
{
    // event 3737_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3737_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)) >= (220))) goto event_3737_6_end;
        activityMarker_instances.clear_selection();
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_3737_6_end: ;
}
// Function purpose: generated callback event_func_4693 processes event block(s) 3738_6. Actions/conditions:
//        3738_6: sets Jumped to 1; sets SpeakText to Misc entry 6; plays a sound or music track.
void Frames::event_func_4693()
{
    // event 3738_6 : sets Jumped to 1; sets SpeakText to Misc entry 6; plays a sound or music track
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3738_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_3738_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_3738_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(948, str_jumped_2287)) == (0))) goto event_3738_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3738_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(948, str_jumped_2287, 1);
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3738_6_end: ;
}
// Function purpose: generated callback event_func_4694 processes event block(s) 3739_6. Actions/conditions:
//        3739_6: sets Jumped to 1.
void Frames::event_func_4694()
{
    // event 3739_6 : sets Jumped to 1
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3739_6_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_3739_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)) > (10))) goto event_3739_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(947, str_skipbar_2286)) < (220))) goto event_3739_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(948, str_jumped_2287)) == (0))) goto event_3739_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3739_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3739_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(948, str_jumped_2287, 1);
    }
    event_3739_6_end: ;
}
// Function purpose: generated callback event_func_4695 processes event block(s) 3740_6. Actions/conditions:
//        3740_6: saves the current object selection; plays a sound or music track; sets Jumped to 1; plus 5 more
//        actions.
void Frames::event_func_4695()
{
    // event 3740_6 : saves the current object selection; plays a sound or music track; sets Jumped to 1; plus 5 more actions
    bool or_result_3740_6 = false;
    bool or_temp_result_3740_6_0 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto or_event_3740_6_0_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto or_event_3740_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(947, str_skipbar_2286)) >= (220))) goto or_event_3740_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(948, str_jumped_2287)) == (0))) goto or_event_3740_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) < (100))) goto or_event_3740_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3740_6_0_end;
        or_result_3740_6 = true;
        or_temp_result_3740_6_0 = true;
    }
    or_event_3740_6_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_3740_6_0) {
        dialogPanel_instances.save_selection();
    }
    // event 3740_6 : saves the current object selection; plays a sound or music track; sets Jumped to 1; plus 5 more actions
    bool or_temp_result_3740_6_1 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto or_event_3740_6_1_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto or_event_3740_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(947, str_skipbar_2286)) <= (10))) goto or_event_3740_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(948, str_jumped_2287)) == (0))) goto or_event_3740_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) < (100))) goto or_event_3740_6_1_end;
        or_result_3740_6 = true;
        or_temp_result_3740_6_1 = true;
        or_event_3740_6_1_end: ;
        if (!or_result_3740_6) goto or_final_or_event_3740_6_1_end;
        dialogPanel_instances.empty_selection();
        if (or_temp_result_3740_6_0) {
            dialogPanel_instances.restore_selection();
        }
        media.play_id(SOUND_THROW_4, 1-1);
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(948, str_jumped_2287, 1);
            ((AssociateArray*)*it)->add_value(396, str_skips_1204, 1);
            ((AssociateArray*)*it)->add_value(358, str_fatigue_36, 2);
        }
        {
            loop_check_skips_spd_running = true;
            int times = int(1);
            loop_check_skips_spd_index = 0;
            while (loop_check_skips_spd_index < times) {
                loop_check_skips_spd_6();
                if (!loop_check_skips_spd_running) break;
                loop_check_skips_spd_index++;
            }
        }
    }
    or_final_or_event_3740_6_1_end: ;
}
// Function purpose: generated callback event_func_4696 processes event block(s) 3742_6. Actions/conditions:
//        3742_6: creates a taskbox 238 object; sets the target object's direction; sets the selected object's string
//        to Workout; plus 7 more actions.
void Frames::event_func_4696()
{
    // event 3742_6 : creates a taskbox 238 object; sets the target object's direction; sets the selected object's string to Workout; plus 7 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3742_6_end;
        if (!group_check_group_code_gym_equip_press_ups_1_0) goto event_3742_6_end;
        group_check_group_code_gym_equip_press_ups_1_0 = false;
        FrameObject * single_instance_3742_6_0; single_instance_3742_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityPanel(parent->x + 2, parent->y + 180), parent->layer);
                if (single_instance_3742_6_0 == NULL)
                    single_instance_3742_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3742_6_0))->set_direction(16);
        ((Active*)((Active*)single_instance_3742_6_0))->alterables->strings.set(0, str_workout_16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(949, str_press_reset_2288, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(424, str_press_reps_1252, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(950, str_press_power_2289, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(951, str_nextkey_2290, str_q_75);
    }
    event_3742_6_end: ;
}
// Function purpose: generated callback event_func_4697 processes event block(s) 3743_6. Actions/conditions:
//        3743_6: adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239
//        object; plus 1 more actions.
void Frames::event_func_4697()
{
    // event 3743_6 : adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239 object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3743_6_end;
        if (!group_check_group_code_gym_equip_press_ups_1_1) goto event_3743_6_end;
        group_check_group_code_gym_equip_press_ups_1_1 = false;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3743_6_end;
        activityText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activityText(0, 0), 5);
            activityText_instances.add_back();
        }
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(activityPanel_instances, it.current_index));
            if (parent == NULL) goto pos_end_3743_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + 9, parent->get_y() + 3);
            pos_end_3743_6_1: ;
        }
        FrameObject * single_instance_3743_6_2; single_instance_3743_6_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(activityPanel_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + 10, parent->y + 15), parent->layer);
                if (single_instance_3743_6_2 == NULL)
                    single_instance_3743_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3743_6_2))->alterables->strings.set(0, str_workout_16);
    }
    event_3743_6_end: ;
}
// Function purpose: generated callback event_func_4698 processes event block(s) 3744_6. Actions/conditions:
//        3744_6: sets the object's animation to 9; sets the selected object's direction to 16.
void Frames::event_func_4698()
{
    // event 3744_6 : sets the object's animation to 9; sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3744_6_end;
        playerBase_instances.clear_selection();
        pushupmat_408_instances.clear_selection();
        if (!check_overlap(playerBase_instances, pushupmat_408_instances)) goto event_3744_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3744_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3744_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(9)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3744_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        ((Active*)get_instance(playerBase_instances))->set_direction(16);
    }
    event_3744_6_end: ;
}
// Function purpose: generated callback event_func_4699 processes event block(s) 3745_6. Actions/conditions:
//        3745_6: updates game state with selected object->force_frame(get_value(950, Press_Power)/MathHelper()/14);
//        moves the selected object to the front; sets horizontal scaling; plus 1 more actions.
void Frames::event_func_4699()
{
    // event 3745_6 : updates game state with selected object->force_frame(get_value(950, Press_Power)/MathHelper()/14); moves the selected object to the front; sets horizontal scaling; plus 1 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3745_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3745_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((AssociateArray*)get_instance(gameVariables_instances))->get_value(950, str_press_power_2289)/MathHelper()/14);
        }
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale(((AssociateArray*)get_instance(gameVariables_instances))->get_value(950, str_press_power_2289));
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_16_219)+str__247+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(424, str_press_reps_1252)));
            ((Text*)*it)->move_front();
        }
    }
    event_3745_6_end: ;
}
// Function purpose: generated callback event_func_4700 processes event block(s) 3746_6. Actions/conditions:
//        3746_6: saves the current object selection; sets SpeakText to ((INI*)get_instance(translationData_instances,
//        it.current_index))->get_string(Misc, 6); plays a sound or music track.
void Frames::event_func_4700()
{
    // event 3746_6 : saves the current object selection; sets SpeakText to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Misc, 6); plays a sound or music track
    bool or_result_3746_6 = false;
    bool or_temp_result_3746_6_0 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto or_event_3746_6_0_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto or_event_3746_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) >= (100))) goto or_event_3746_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3746_6_0_end;
        or_result_3746_6 = true;
        or_temp_result_3746_6_0 = true;
    }
    or_event_3746_6_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_3746_6_0) {
        dialogPanel_instances.save_selection();
    }
    // event 3746_6 : saves the current object selection; sets SpeakText to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Misc, 6); plays a sound or music track
    bool or_temp_result_3746_6_1 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto or_event_3746_6_1_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button2))))) goto or_event_3746_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) >= (100))) goto or_event_3746_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3746_6_1_end;
        or_result_3746_6 = true;
        or_temp_result_3746_6_1 = true;
        or_event_3746_6_1_end: ;
        if (or_temp_result_3746_6_1) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_3746_6) goto or_final_or_event_3746_6_1_end;
        dialogPanel_instances.empty_selection();
        if (or_temp_result_3746_6_0 || or_temp_result_3746_6_1) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_misc_234, str_6_241));
        }
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    or_final_or_event_3746_6_1_end: ;
}
// Function purpose: generated callback event_func_4701 processes event block(s) 3747_6. Actions/conditions:
//        3747_6: sets NextKey to E; increments Press_Power by 10.
void Frames::event_func_4701()
{
    // event 3747_6 : sets NextKey to E; increments Press_Power by 10
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3747_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_3747_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(951, str_nextkey_2290)) == (str_q_75))) goto event_3747_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button2)))) goto event_3747_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(949, str_press_reset_2288)) == (0))) goto event_3747_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3747_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3747_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(951, str_nextkey_2290, str_e_77);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(950, str_press_power_2289, 10);
    }
    event_3747_6_end: ;
}
// Function purpose: generated callback event_func_4702 processes event block(s) 3748_6. Actions/conditions:
//        3748_6: sets NextKey to Q; increments Press_Power by 10.
void Frames::event_func_4702()
{
    // event 3748_6 : sets NextKey to Q; increments Press_Power by 10
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3748_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button2))))) goto event_3748_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(951, str_nextkey_2290)) == (str_e_77))) goto event_3748_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1)))) goto event_3748_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(949, str_press_reset_2288)) == (0))) goto event_3748_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3748_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3748_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(951, str_nextkey_2290, str_q_75);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(950, str_press_power_2289, 10);
    }
    event_3748_6_end: ;
}
// Function purpose: generated callback event_func_4703 processes event block(s) 3749_6. Actions/conditions:
//        3749_6: changes a stored game value.
void Frames::event_func_4703()
{
    // event 3749_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3749_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(950, str_press_power_2289)) > (0))) goto event_3749_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(949, str_press_reset_2288)) == (1))) goto event_3749_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3749_6_end;
        VITA_ADD(((AssociateArray*)get_instance(gameVariables_instances)), 950, str_press_power_2289, -2);
    }
    event_3749_6_end: ;
}
// Function purpose: generated callback event_func_4704 processes event block(s) 3750_6. Actions/conditions:
//        3750_6: changes a stored game value.
void Frames::event_func_4704()
{
    // event 3750_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3750_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(950, str_press_power_2289)) > (0))) goto event_3750_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(951, str_nextkey_2290)) == (str_e_77))) goto event_3750_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button2)))) goto event_3750_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(949, str_press_reset_2288)) == (0))) goto event_3750_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3750_6_end;
        VITA_ADD(((AssociateArray*)get_instance(gameVariables_instances)), 950, str_press_power_2289, -1);
    }
    event_3750_6_end: ;
}
// Function purpose: generated callback event_func_4705 processes event block(s) 3751_6. Actions/conditions:
//        3751_6: changes a stored game value.
void Frames::event_func_4705()
{
    // event 3751_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3751_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(950, str_press_power_2289)) > (0))) goto event_3751_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(951, str_nextkey_2290)) == (str_q_75))) goto event_3751_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1)))) goto event_3751_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(949, str_press_reset_2288)) == (0))) goto event_3751_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3751_6_end;
        VITA_ADD(((AssociateArray*)get_instance(gameVariables_instances)), 950, str_press_power_2289, -1);
    }
    event_3751_6_end: ;
}
// Function purpose: generated callback event_func_4706 processes event block(s) 3752_6. Actions/conditions:
//        3752_6: sets Press_Power to 56.
void Frames::event_func_4706()
{
    // event 3752_6 : sets Press_Power to 56
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3752_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(950, str_press_power_2289)) >= (56))) goto event_3752_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(950, str_press_power_2289, 56);
    }
    event_3752_6_end: ;
}
// Function purpose: generated callback event_func_4707 processes event block(s) 3753_6. Actions/conditions:
//        3753_6: increments Fatigue by 5; increments Press_Reps by 1; sets Press_Reset to 1; plus 1 more actions.
void Frames::event_func_4707()
{
    // event 3753_6 : increments Fatigue by 5; increments Press_Reps by 1; sets Press_Reset to 1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3753_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(950, str_press_power_2289)) >= (56))) goto event_3753_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(949, str_press_reset_2288)) == (0))) goto event_3753_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(424, str_press_reps_1252, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(949, str_press_reset_2288, 1);
        {
            loop_press_check_str_running = true;
            int times = int(1);
            loop_press_check_str_index = 0;
            while (loop_press_check_str_index < times) {
                loop_press_check_str_6();
                if (!loop_press_check_str_running) break;
                loop_press_check_str_index++;
            }
        }
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3753_6_end: ;
}
// Function purpose: generated callback event_func_4708 processes event block(s) 3754_6. Actions/conditions:
//        3754_6: sets Press_Reset to 0.
void Frames::event_func_4708()
{
    // event 3754_6 : sets Press_Reset to 0
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3754_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(950, str_press_power_2289)) <= (0))) goto event_3754_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(949, str_press_reset_2288)) == (1))) goto event_3754_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3754_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(949, str_press_reset_2288, 0);
    }
    event_3754_6_end: ;
}
// Function purpose: generated callback event_func_4709 processes event block(s) 3756_6. Actions/conditions:
//        3756_6: creates a taskbox 238 object; sets the target object's direction; sets the selected object's string
//        to Workout; plus 7 more actions.
void Frames::event_func_4709()
{
    // event 3756_6 : creates a taskbox 238 object; sets the target object's direction; sets the selected object's string to Workout; plus 7 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3756_6_end;
        if (!group_check_group_code_gym_equip_weights_1_0) goto event_3756_6_end;
        group_check_group_code_gym_equip_weights_1_0 = false;
        FrameObject * single_instance_3756_6_0; single_instance_3756_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityPanel(parent->x + 2, parent->y + 180), parent->layer);
                if (single_instance_3756_6_0 == NULL)
                    single_instance_3756_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3756_6_0))->set_direction(16);
        ((Active*)((Active*)single_instance_3756_6_0))->alterables->strings.set(0, str_workout_16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(952, str_weights_reset_2291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(711, str_weights_reps_1871, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(953, str_weights_power_2292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(951, str_nextkey_2290, str_q_75);
    }
    event_3756_6_end: ;
}
// Function purpose: generated callback event_func_4710 processes event block(s) 3757_6. Actions/conditions:
//        3757_6: adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239
//        object; plus 1 more actions.
void Frames::event_func_4710()
{
    // event 3757_6 : adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239 object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3757_6_end;
        if (!group_check_group_code_gym_equip_weights_1_1) goto event_3757_6_end;
        group_check_group_code_gym_equip_weights_1_1 = false;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3757_6_end;
        activityText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activityText(0, 0), 5);
            activityText_instances.add_back();
        }
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(activityPanel_instances, it.current_index));
            if (parent == NULL) goto pos_end_3757_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + 9, parent->get_y() + 3);
            pos_end_3757_6_1: ;
        }
        FrameObject * single_instance_3757_6_2; single_instance_3757_6_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(activityPanel_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + 10, parent->y + 15), parent->layer);
                if (single_instance_3757_6_2 == NULL)
                    single_instance_3757_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3757_6_2))->alterables->strings.set(0, str_workout_16);
    }
    event_3757_6_end: ;
}
// Function purpose: generated callback event_func_4711 processes event block(s) 3758_6. Actions/conditions:
//        3758_6: sets the object's animation to 10.
void Frames::event_func_4711()
{
    // event 3758_6 : sets the object's animation to 10
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3758_6_end;
        playerBase_instances.clear_selection();
        gym4_318_instances.clear_selection();
        if (!check_overlap(playerBase_instances, gym4_318_instances)) goto event_3758_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3758_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3758_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3758_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_3758_6_end: ;
}
// Function purpose: generated callback event_func_4712 processes event block(s) 3759_6. Actions/conditions:
//        3759_6: sets the object's animation to 19.
void Frames::event_func_4712()
{
    // event 3759_6 : sets the object's animation to 19
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3759_6_end;
        playerBase_instances.clear_selection();
        chinupbar_430_instances.clear_selection();
        if (!check_overlap(playerBase_instances, chinupbar_430_instances)) goto event_3759_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) goto event_3759_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) goto event_3759_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(19)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_3759_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(19);
        }
    }
    event_3759_6_end: ;
}
// Function purpose: generated callback event_func_4713 processes event block(s) 3760_6. Actions/conditions:
//        3760_6: updates game state with selected object->force_frame(get_value(953, Weights_Power)/MathHelper()/14);
//        moves the selected object to the front; sets horizontal scaling; plus 1 more actions.
void Frames::event_func_4713()
{
    // event 3760_6 : updates game state with selected object->force_frame(get_value(953, Weights_Power)/MathHelper()/14); moves the selected object to the front; sets horizontal scaling; plus 1 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3760_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3760_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((AssociateArray*)get_instance(gameVariables_instances))->get_value(953, str_weights_power_2292)/MathHelper()/14);
        }
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale(((AssociateArray*)get_instance(gameVariables_instances))->get_value(953, str_weights_power_2292));
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_17_218)+str__247+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(711, str_weights_reps_1871)));
            ((Text*)*it)->move_front();
        }
    }
    event_3760_6_end: ;
}
// Function purpose: generated callback event_func_4714 processes event block(s) 3761_6. Actions/conditions:
//        3761_6: saves the current object selection; sets SpeakText to ((INI*)get_instance(translationData_instances,
//        it.current_index))->get_string(Misc, 6); plays a sound or music track.
void Frames::event_func_4714()
{
    // event 3761_6 : saves the current object selection; sets SpeakText to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Misc, 6); plays a sound or music track
    bool or_result_3761_6 = false;
    bool or_temp_result_3761_6_0 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto or_event_3761_6_0_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto or_event_3761_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) >= (100))) goto or_event_3761_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3761_6_0_end;
        or_result_3761_6 = true;
        or_temp_result_3761_6_0 = true;
    }
    or_event_3761_6_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_3761_6_0) {
        dialogPanel_instances.save_selection();
    }
    // event 3761_6 : saves the current object selection; sets SpeakText to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Misc, 6); plays a sound or music track
    bool or_temp_result_3761_6_1 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto or_event_3761_6_1_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button2))))) goto or_event_3761_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) >= (100))) goto or_event_3761_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3761_6_1_end;
        or_result_3761_6 = true;
        or_temp_result_3761_6_1 = true;
        or_event_3761_6_1_end: ;
        if (or_temp_result_3761_6_1) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_3761_6) goto or_final_or_event_3761_6_1_end;
        dialogPanel_instances.empty_selection();
        if (or_temp_result_3761_6_0 || or_temp_result_3761_6_1) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_misc_234, str_6_241));
        }
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    or_final_or_event_3761_6_1_end: ;
}
// Function purpose: generated callback event_func_4715 processes event block(s) 3762_6. Actions/conditions:
//        3762_6: sets NextKey to E; increments Weights_Power by 10.
void Frames::event_func_4715()
{
    // event 3762_6 : sets NextKey to E; increments Weights_Power by 10
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3762_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_3762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(951, str_nextkey_2290)) == (str_q_75))) goto event_3762_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button2)))) goto event_3762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(952, str_weights_reset_2291)) == (0))) goto event_3762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3762_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3762_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(951, str_nextkey_2290, str_e_77);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(953, str_weights_power_2292, 10);
    }
    event_3762_6_end: ;
}
// Function purpose: generated callback event_func_4716 processes event block(s) 3763_6. Actions/conditions:
//        3763_6: sets NextKey to Q; increments Weights_Power by 10.
void Frames::event_func_4716()
{
    // event 3763_6 : sets NextKey to Q; increments Weights_Power by 10
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3763_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button2))))) goto event_3763_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(951, str_nextkey_2290)) == (str_e_77))) goto event_3763_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1)))) goto event_3763_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(952, str_weights_reset_2291)) == (0))) goto event_3763_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3763_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3763_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(951, str_nextkey_2290, str_q_75);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(953, str_weights_power_2292, 10);
    }
    event_3763_6_end: ;
}
// Function purpose: generated callback event_func_4717 processes event block(s) 3764_6. Actions/conditions:
//        3764_6: changes a stored game value.
void Frames::event_func_4717()
{
    // event 3764_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3764_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(953, str_weights_power_2292)) > (0))) goto event_3764_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(952, str_weights_reset_2291)) == (1))) goto event_3764_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3764_6_end;
        VITA_ADD(((AssociateArray*)get_instance(gameVariables_instances)), 953, str_weights_power_2292, -1);
    }
    event_3764_6_end: ;
}
// Function purpose: generated callback event_func_4718 processes event block(s) 3765_6. Actions/conditions:
//        3765_6: changes a stored game value.
void Frames::event_func_4718()
{
    // event 3765_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3765_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(953, str_weights_power_2292)) > (0))) goto event_3765_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(951, str_nextkey_2290)) == (str_e_77))) goto event_3765_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(952, str_weights_reset_2291)) == (0))) goto event_3765_6_end;
        every_3765_6 += manager.dt;
        if (every_3765_6 < 0.04) goto event_3765_6_end;
        every_3765_6 -= 0.04;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button2)))) goto event_3765_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3765_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(953, str_weights_power_2292, 2);
    }
    event_3765_6_end: ;
}
// Function purpose: generated callback event_func_4719 processes event block(s) 3766_6. Actions/conditions:
//        3766_6: changes a stored game value.
void Frames::event_func_4719()
{
    // event 3766_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3766_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(953, str_weights_power_2292)) > (0))) goto event_3766_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(951, str_nextkey_2290)) == (str_q_75))) goto event_3766_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(952, str_weights_reset_2291)) == (0))) goto event_3766_6_end;
        every_3766_6 += manager.dt;
        if (every_3766_6 < 0.04) goto event_3766_6_end;
        every_3766_6 -= 0.04;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1)))) goto event_3766_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3766_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(953, str_weights_power_2292, 1);
    }
    event_3766_6_end: ;
}
// Function purpose: generated callback event_func_4720 processes event block(s) 3767_6. Actions/conditions:
//        3767_6: sets Weights_Power to 56.
void Frames::event_func_4720()
{
    // event 3767_6 : sets Weights_Power to 56
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3767_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(953, str_weights_power_2292)) >= (56))) goto event_3767_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(953, str_weights_power_2292, 56);
    }
    event_3767_6_end: ;
}
// Function purpose: generated callback event_func_4721 processes event block(s) 3768_6. Actions/conditions:
//        3768_6: increments Fatigue by 5; increments Weights_Reps by 1; sets Weights_Reset to 1; plus 1 more actions.
void Frames::event_func_4721()
{
    // event 3768_6 : increments Fatigue by 5; increments Weights_Reps by 1; sets Weights_Reset to 1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3768_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(953, str_weights_power_2292)) >= (56))) goto event_3768_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(952, str_weights_reset_2291)) == (0))) goto event_3768_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(711, str_weights_reps_1871, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(952, str_weights_reset_2291, 1);
        {
            loop_weights_check_str_running = true;
            int times = int(1);
            loop_weights_check_str_index = 0;
            while (loop_weights_check_str_index < times) {
                loop_weights_check_str_6();
                if (!loop_weights_check_str_running) break;
                loop_weights_check_str_index++;
            }
        }
        media.play_id(SOUND_THROW_4, 1-1);
    }
    event_3768_6_end: ;
}
// Function purpose: generated callback event_func_4722 processes event block(s) 3769_6. Actions/conditions:
//        3769_6: sets Weights_Reset to 0.
void Frames::event_func_4722()
{
    // event 3769_6 : sets Weights_Reset to 0
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3769_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(953, str_weights_power_2292)) <= (0))) goto event_3769_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(952, str_weights_reset_2291)) == (1))) goto event_3769_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3769_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(952, str_weights_reset_2291, 0);
    }
    event_3769_6_end: ;
}
// Function purpose: generated callback event_func_4723 processes event block(s) 3771_6. Actions/conditions:
//        3771_6: creates a taskbox 238 object; sets the selected object's string to Workout; sets the target object's
//        direction; plus 7 more actions.
void Frames::event_func_4723()
{
    // event 3771_6 : creates a taskbox 238 object; sets the selected object's string to Workout; sets the target object's direction; plus 7 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto event_3771_6_end;
        if (!group_check_group_code_gym_equip_treadmill_1_0) goto event_3771_6_end;
        group_check_group_code_gym_equip_treadmill_1_0 = false;
        FrameObject * single_instance_3771_6_0; single_instance_3771_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityPanel(parent->x + 2, parent->y + 180), parent->layer);
                if (single_instance_3771_6_0 == NULL)
                    single_instance_3771_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3771_6_0))->alterables->strings.set(0, str_workout_16);
        ((Active*)((Active*)single_instance_3771_6_0))->set_direction(16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(954, str_tread_power_2293, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(955, str_tread_dist_2294, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(951, str_nextkey_2290, str_q_75);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(718, str_max_dist_1890, 0);
    }
    event_3771_6_end: ;
}
// Function purpose: generated callback event_func_4724 processes event block(s) 3772_6. Actions/conditions:
//        3772_6: adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239
//        object; plus 1 more actions.
void Frames::event_func_4724()
{
    // event 3772_6 : adds a workouttext 241 instance; sets the object position in the world; creates a powerbar 239 object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto event_3772_6_end;
        if (!group_check_group_code_gym_equip_treadmill_1_1) goto event_3772_6_end;
        group_check_group_code_gym_equip_treadmill_1_1 = false;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3772_6_end;
        activityText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activityText(0, 0), 5);
            activityText_instances.add_back();
        }
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(activityPanel_instances, it.current_index));
            if (parent == NULL) goto pos_end_3772_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + 9, parent->get_y() + 3);
            pos_end_3772_6_1: ;
        }
        FrameObject * single_instance_3772_6_2; single_instance_3772_6_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(activityPanel_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + 10, parent->y + 15), parent->layer);
                if (single_instance_3772_6_2 == NULL)
                    single_instance_3772_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3772_6_2))->alterables->strings.set(0, str_workout_16);
    }
    event_3772_6_end: ;
}
// Function purpose: generated callback event_func_4725 processes event block(s) 3773_6. Actions/conditions:
//        3773_6: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 1 more actions.
void Frames::event_func_4725()
{
    // event 3773_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 1 more actions
    bool or_result_3773_6 = false;
    bool or_temp_result_3773_6_0 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto or_event_3773_6_0_end;
        playerBase_instances.clear_selection();
        gym3_317_instances.clear_selection();
        if (!check_overlap(playerBase_instances, gym3_317_instances)) goto or_event_3773_6_0_end;
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_3773_6_0_end;
        or_result_3773_6 = true;
        or_temp_result_3773_6_0 = true;
    }
    or_event_3773_6_0_end: ;
    playerBase_instances.clear_saved_selection();
    gym3_317_instances.clear_saved_selection();
    if (or_temp_result_3773_6_0) {
        playerBase_instances.save_selection();
        gym3_317_instances.save_selection();
    }
    // event 3773_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 1 more actions
    bool or_temp_result_3773_6_1 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto or_event_3773_6_1_end;
        playerBase_instances.clear_selection();
        joggingmat_407_instances.clear_selection();
        if (!check_overlap(playerBase_instances, joggingmat_407_instances)) goto or_event_3773_6_1_end;
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_3773_6_1_end;
        or_result_3773_6 = true;
        or_temp_result_3773_6_1 = true;
        or_event_3773_6_1_end: ;
        joggingmat_407_instances.clear_saved_selection();
        if (or_temp_result_3773_6_1) {
            playerBase_instances.save_selection();
            joggingmat_407_instances.save_selection();
        }
        if (!or_result_3773_6) goto or_final_or_event_3773_6_1_end;
        joggingmat_407_instances.empty_selection();
        gym3_317_instances.empty_selection();
        playerBase_instances.empty_selection();
        if (or_temp_result_3773_6_0 || or_temp_result_3773_6_1) {
            playerBase_instances.restore_selection();
        }
        if (or_temp_result_3773_6_0) {
            gym3_317_instances.restore_selection();
        }
        if (or_temp_result_3773_6_1) {
            joggingmat_407_instances.restore_selection();
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_3773_6_1_end: ;
}
// Function purpose: generated callback event_func_4726 processes event block(s) 3774_6. Actions/conditions:
//        3774_6: moves the selected object to the front; sets horizontal scaling; sets the selected object's text.
void Frames::event_func_4726()
{
    // event 3774_6 : moves the selected object to the front; sets horizontal scaling; sets the selected object's text
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto event_3774_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3774_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->set_x_scale(((AssociateArray*)get_instance(gameVariables_instances))->get_value(954, str_tread_power_2293));
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_18_332)+str__247+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(955, str_tread_dist_2294)/MathHelper()/20));
            ((Text*)*it)->move_front();
        }
    }
    event_3774_6_end: ;
}
// Function purpose: generated callback event_func_4727 processes event block(s) 3775_6. Actions/conditions:
//        3775_6: saves the current object selection; sets SpeakText to ((INI*)get_instance(translationData_instances,
//        it.current_index))->get_string(Misc, 6); plays a sound or music track.
void Frames::event_func_4727()
{
    // event 3775_6 : saves the current object selection; sets SpeakText to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Misc, 6); plays a sound or music track
    bool or_result_3775_6 = false;
    bool or_temp_result_3775_6_0 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto or_event_3775_6_0_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button1))))) goto or_event_3775_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) >= (100))) goto or_event_3775_6_0_end;
        if (frame_time - restrict_3775_6_0 < 1.0) goto or_event_3775_6_0_end;
        restrict_3775_6_0 = frame_time;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3775_6_0_end;
        or_result_3775_6 = true;
        or_temp_result_3775_6_0 = true;
    }
    or_event_3775_6_0_end: ;
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_3775_6_0) {
        dialogPanel_instances.save_selection();
    }
    // event 3775_6 : saves the current object selection; sets SpeakText to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Misc, 6); plays a sound or music track
    bool or_temp_result_3775_6_1 = false;
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto or_event_3775_6_1_end;
        if (!(is_key_pressed_once(translate_string_to_key(translate_key_to_string(manager.button2))))) goto or_event_3775_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(358, str_fatigue_36)) >= (100))) goto or_event_3775_6_1_end;
        if (frame_time - restrict_3775_6_1 < 1.0) goto or_event_3775_6_1_end;
        restrict_3775_6_1 = frame_time;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3775_6_1_end;
        or_result_3775_6 = true;
        or_temp_result_3775_6_1 = true;
        or_event_3775_6_1_end: ;
        if (or_temp_result_3775_6_1) {
            dialogPanel_instances.save_selection();
        }
        if (!or_result_3775_6) goto or_final_or_event_3775_6_1_end;
        dialogPanel_instances.empty_selection();
        if (or_temp_result_3775_6_0 || or_temp_result_3775_6_1) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_misc_234, str_6_241));
        }
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    or_final_or_event_3775_6_1_end: ;
}
// Function purpose: generated callback event_func_4728 processes event block(s) 3776_6. Actions/conditions:
//        3776_6: increments Tread_Power by 3; sets NextKey to E; increments Tread_Dist by 1.
void Frames::event_func_4728()
{
    // event 3776_6 : increments Tread_Power by 3; sets NextKey to E; increments Tread_Dist by 1
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto event_3776_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1))))) goto event_3776_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(951, str_nextkey_2290)) == (str_q_75))) goto event_3776_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3776_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button2)))) goto event_3776_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3776_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(954, str_tread_power_2293, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(951, str_nextkey_2290, str_e_77);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(955, str_tread_dist_2294, 1);
    }
    event_3776_6_end: ;
}
// Function purpose: generated callback event_func_4729 processes event block(s) 3777_6. Actions/conditions:
//        3777_6: sets NextKey to Q; increments Tread_Dist by 1; increments Tread_Power by 3.
void Frames::event_func_4729()
{
    // event 3777_6 : sets NextKey to Q; increments Tread_Dist by 1; increments Tread_Power by 3
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto event_3777_6_end;
        if (!(is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button2))))) goto event_3777_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(951, str_nextkey_2290)) == (str_e_77))) goto event_3777_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3777_6_end;
        if (is_key_pressed(translate_string_to_key(translate_key_to_string(manager.button1)))) goto event_3777_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3777_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(951, str_nextkey_2290, str_q_75);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(955, str_tread_dist_2294, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(954, str_tread_power_2293, 3);
    }
    event_3777_6_end: ;
}
// Function purpose: generated callback event_func_4730 processes event block(s) 3778_6. Actions/conditions:
//        3778_6: changes a stored game value.
void Frames::event_func_4730()
{
    // event 3778_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto event_3778_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(954, str_tread_power_2293)) > (0))) goto event_3778_6_end;
        every_3778_6 += manager.dt;
        if (every_3778_6 < 0.1) goto event_3778_6_end;
        every_3778_6 -= 0.1;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3778_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(954, str_tread_power_2293, 1);
    }
    event_3778_6_end: ;
}
// Function purpose: generated callback event_func_4731 processes event block(s) 3779_6. Actions/conditions:
//        3779_6: sets Tread_Power to 56.
void Frames::event_func_4731()
{
    // event 3779_6 : sets Tread_Power to 56
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto event_3779_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(954, str_tread_power_2293)) > (56))) goto event_3779_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(954, str_tread_power_2293, 56);
    }
    event_3779_6_end: ;
}
// Function purpose: generated callback event_func_4732 processes event block(s) 3780_6. Actions/conditions:
//        3780_6: increments Fatigue by 5; sets Max_Dist to gameVariables->get_value(955,
//        Tread_Dist)/MathHelper()/20.
void Frames::event_func_4732()
{
    // event 3780_6 : increments Fatigue by 5; sets Max_Dist to gameVariables->get_value(955, Tread_Dist)/MathHelper()/20
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto event_3780_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(718, str_max_dist_1890)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(955, str_tread_dist_2294)/MathHelper()/20))) goto event_3780_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3780_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(718, str_max_dist_1890, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(955, str_tread_dist_2294)/MathHelper()/20);
        {
            loop_treadmill_check_spd_running = true;
            int times = int(1);
            loop_treadmill_check_spd_index = 0;
            while (loop_treadmill_check_spd_index < times) {
                loop_treadmill_check_spd_6();
                if (!loop_treadmill_check_spd_running) break;
                loop_treadmill_check_spd_index++;
            }
        }
    }
    event_3780_6_end: ;
}
// Function purpose: generated callback event_func_4733 processes event block(s) 3782_6. Actions/conditions:
//        3782_6: removes the selected object.
void Frames::event_func_4733()
{
    // event 3782_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3782_6_end;
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_weights_1)) goto event_3782_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_9)) goto event_3782_6_end;
        activityMarker_instances.clear_selection();
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_code_gym_equip_punch_bag_1 = false;
    
            group_code_gym_equip_speed_bag_1 = false;
    
            group_code_gym_equip_skipping_1 = false;
    
            group_code_gym_equip_press_ups_1 = false;
    
            group_code_gym_equip_weights_1 = false;
    
            group_code_gym_equip_treadmill_1 = false;
    
    }
    event_3782_6_end: ;
}
// Function purpose: generated callback event_func_4734 processes event block(s) 3783_6. Actions/conditions:
//        3783_6: removes the selected object.
void Frames::event_func_4734()
{
    // event 3783_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3783_6_end;
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_treadmill_1)) goto event_3783_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_9)) goto event_3783_6_end;
        activityMarker_instances.clear_selection();
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_code_gym_equip_punch_bag_1 = false;
    
            group_code_gym_equip_speed_bag_1 = false;
    
            group_code_gym_equip_skipping_1 = false;
    
            group_code_gym_equip_press_ups_1 = false;
    
            group_code_gym_equip_weights_1 = false;
    
            group_code_gym_equip_treadmill_1 = false;
    
    }
    event_3783_6_end: ;
}
// Function purpose: generated callback event_func_4735 processes event block(s) 3784_6. Actions/conditions:
//        3784_6: removes the selected object.
void Frames::event_func_4735()
{
    // event 3784_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3784_6_end;
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3784_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_9)) goto event_3784_6_end;
        activityMarker_instances.clear_selection();
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_code_gym_equip_punch_bag_1 = false;
    
            group_code_gym_equip_speed_bag_1 = false;
    
            group_code_gym_equip_skipping_1 = false;
    
            group_code_gym_equip_press_ups_1 = false;
    
            group_code_gym_equip_weights_1 = false;
    
            group_code_gym_equip_treadmill_1 = false;
    
    }
    event_3784_6_end: ;
}
// Function purpose: generated callback event_func_4736 processes event block(s) 3785_6. Actions/conditions:
//        3785_6: removes the selected object.
void Frames::event_func_4736()
{
    // event 3785_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3785_6_end;
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3785_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_9)) goto event_3785_6_end;
        activityMarker_instances.clear_selection();
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_code_gym_equip_punch_bag_1 = false;
    
            group_code_gym_equip_speed_bag_1 = false;
    
            group_code_gym_equip_skipping_1 = false;
    
            group_code_gym_equip_press_ups_1 = false;
    
            group_code_gym_equip_weights_1 = false;
    
            group_code_gym_equip_treadmill_1 = false;
    
    }
    event_3785_6_end: ;
}
// Function purpose: generated callback event_func_4737 processes event block(s) 3786_6. Actions/conditions:
//        3786_6: removes the selected object.
void Frames::event_func_4737()
{
    // event 3786_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3786_6_end;
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3786_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_9)) goto event_3786_6_end;
        activityMarker_instances.clear_selection();
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_code_gym_equip_punch_bag_1 = false;
    
            group_code_gym_equip_speed_bag_1 = false;
    
            group_code_gym_equip_skipping_1 = false;
    
            group_code_gym_equip_press_ups_1 = false;
    
            group_code_gym_equip_weights_1 = false;
    
            group_code_gym_equip_treadmill_1 = false;
    
    }
    event_3786_6_end: ;
}
// Function purpose: generated callback event_func_4738 processes event block(s) 3787_6. Actions/conditions:
//        3787_6: removes the selected object; sets the object's animation to 0; updates game state with selected
//        object->restore_frame(); plus 1 more actions.
void Frames::event_func_4738()
{
    // event 3787_6 : removes the selected object; sets the object's animation to 0; updates game state with selected object->restore_frame(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3787_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3787_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_workout_16))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_3787_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_9)) goto event_3787_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        activityText_instances.clear_selection();
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        activityMarker_instances.clear_selection();
        for (ObjectIterator it(activityMarker_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_code_gym_equip_punch_bag_1 = false;
    
            group_code_gym_equip_speed_bag_1 = false;
    
            group_code_gym_equip_skipping_1 = false;
    
            group_code_gym_equip_press_ups_1 = false;
    
            group_code_gym_equip_weights_1 = false;
    
            group_code_gym_equip_treadmill_1 = false;
    
    }
    event_3787_6_end: ;
}
// Function purpose: generated callback event_func_4739 processes event block(s) 3788_6. Actions/conditions:
//        3788_6: sets the selected object's direction to 0; moves the selected object behind other objects.
void Frames::event_func_4739()
{
    // event 3788_6 : sets the selected object's direction to 0; moves the selected object behind other objects
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3788_6_end;
        playerBase_instances.clear_selection();
        gym3_317_instances.clear_selection();
        if (!check_overlap(playerBase_instances, gym3_317_instances)) goto event_3788_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(gym3_317_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_3788_6_end: ;
}
// Function purpose: generated callback event_func_4740 processes event block(s) 3789_6. Actions/conditions:
//        3789_6: sets the selected object's direction to 0; moves the selected object behind other objects.
void Frames::event_func_4740()
{
    // event 3789_6 : sets the selected object's direction to 0; moves the selected object behind other objects
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3789_6_end;
        playerBase_instances.clear_selection();
        joggingmat_407_instances.clear_selection();
        if (!check_overlap(playerBase_instances, joggingmat_407_instances)) goto event_3789_6_end;
        for (ObjectIterator it(joggingmat_407_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!joggingmat_407_instances.has_selection()) goto event_3789_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(joggingmat_407_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_3789_6_end: ;
}
// Function purpose: generated callback event_func_4741 processes event block(s) 3790_6. Actions/conditions:
//        3790_6: sets the selected object's direction to 16; moves the selected object behind other objects.
void Frames::event_func_4741()
{
    // event 3790_6 : sets the selected object's direction to 16; moves the selected object behind other objects
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3790_6_end;
        playerBase_instances.clear_selection();
        pushupmat_408_instances.clear_selection();
        if (!check_overlap(playerBase_instances, pushupmat_408_instances)) goto event_3790_6_end;
        for (ObjectIterator it(pushupmat_408_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!pushupmat_408_instances.has_selection()) goto event_3790_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(pushupmat_408_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_3790_6_end: ;
}
// Function purpose: generated callback event_func_4742 processes event block(s) 3791_6. Actions/conditions:
//        3791_6: disables flag 26 (object-specific interaction state) on the selected object.
void Frames::event_func_4742()
{
    // event 3791_6 : disables flag 26 (object-specific interaction state) on the selected object
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3791_6_end;
        playerBase_instances.clear_selection();
        qualifier_9.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_9)) goto event_3791_6_end;
        inmateBase_instances.clear_selection();
        if (!check_overlap(playerBase_instances, inmateBase_instances)) goto event_3791_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(26))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3791_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(26);
        }
        {
            loop_gym_push_off_running = true;
            int times = int(1);
            loop_gym_push_off_index = 0;
            while (loop_gym_push_off_index < times) {
                loop_gym_push_off_6();
                if (!loop_gym_push_off_running) break;
                loop_gym_push_off_index++;
            }
        }
    }
    event_3791_6_end: ;
}
// Function purpose: generated callback event_func_4743 processes event block(s) 3797_6. Actions/conditions:
//        3797_6: disables flag 987 (inmate gym-training state) on the selected object; sets charID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0).
void Frames::event_func_4743()
{
    VITA_LEGACY_EVENT();
    // event 3797_6 : disables flag 987 (inmate gym-training state) on the selected object; sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3797_6_end;
        inmateBase_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, playerBase_instances)) goto event_3797_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(987))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3797_6_end;
        if (!((randrange_event(3)) == (0))) goto event_3797_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(987);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
    }
    event_3797_6_end: ;
}
// Function purpose: generated callback event_func_4744 processes event block(s) 3798_6. Actions/conditions:
//        3798_6: sets the selected object's numeric value to 200; activates the Chair_Push event group; sets SpeakCol
//        to 0; plus 5 more actions.
void Frames::event_func_4744()
{
    // event 3798_6 : sets the selected object's numeric value to 200; activates the Chair_Push event group; sets SpeakCol to 0; plus 5 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3798_6_end;
        inmateBase_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, playerBase_instances)) goto event_3798_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(987))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3798_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(22, 200);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_chair_push_1230);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
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
    event_3798_6_end: ;
}
// Function purpose: generated callback event_func_4745 processes event block(s) 3799_6. Actions/conditions:
//        3799_6: disables flag 987 (inmate gym-training state) on the selected object.
void Frames::event_func_4745()
{
    // event 3799_6 : disables flag 987 (inmate gym-training state) on the selected object
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3799_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(987))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3799_6_end;
        if (!check_not_overlap(inmateBase_instances, playerBase_instances)) goto event_3799_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(987);
        }
    }
    event_3799_6_end: ;
}
// Function purpose: generated callback event_func_4746 processes event block(s) 3800_6. Actions/conditions:
//        3800_6: sets the selected object's numeric value to (150.0-((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(12)+0.0)/MathHelper()/100.0.
void Frames::event_func_4746()
{
    // event 3800_6 : sets the selected object's numeric value to (150.0-((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(12)+0.0)/MathHelper()/100.0
    {
        if (!(group_code_1)) goto event_3800_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3800_6_end;
        if (!((((Active*)get_single(qualifier_14, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_3800_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3800_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->alterables->values.set(0, (150.0-((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(12)+0.0)/MathHelper()/100.0);
        if (!group_code_npc_profiles_npc_profile_1) {
            group_code_npc_profiles_npc_profile_1 = true;
        }
    }
    event_3800_6_end: ;
}
// Function purpose: generated callback event_func_4747 processes event block(s) 3801_6. Actions/conditions:
//        3801_6: sets ViewProfile to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(25); sets the selected object's visibility to true;
//        creates a profilestats 432 object; plus 1 more actions.
void Frames::event_func_4747()
{
    // event 3801_6 : sets ViewProfile to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); sets the selected object's visibility to true; creates a profilestats 432 object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3801_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3801_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3801_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_3801_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_3801_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3801_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(339, str_viewprofile_1129, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        FrameObject * single_instance_3801_6_0; single_instance_3801_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -34), parent->layer);
                if (single_instance_3801_6_0 == NULL)
                    single_instance_3801_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3801_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_1_97)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_2_155)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_3_158)+str__198+((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_4_161));
        {
            loop_guard_tab_stats_running = true;
            int times = int(1);
            loop_guard_tab_stats_index = 0;
            while (loop_guard_tab_stats_index < times) {
                loop_guard_tab_stats_6();
                if (!loop_guard_tab_stats_running) break;
                loop_guard_tab_stats_index++;
            }
        }
    }
    event_3801_6_end: ;
}
// Function purpose: generated callback event_func_4748 processes event block(s) 3812_6. Actions/conditions:
//        3812_6: sets the selected object's visibility to true; sets ViewProfile to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets
//        eTeam_char to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->strings.get(4).
void Frames::event_func_4748()
{
    // event 3812_6 : sets the selected object's visibility to true; sets ViewProfile to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets eTeam_char to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(4)
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3812_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_RIGHT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3812_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_3812_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_3812_6_end;
        if (((Active*)get_instance(sidePanel_instances))->mouse_over()) goto event_3812_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3812_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(339, str_viewprofile_1129, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(640, str_eteam_char_1733, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(4));
        {
            loop_npc_tab_stats_running = true;
            int times = int(1);
            loop_npc_tab_stats_index = 0;
            while (loop_npc_tab_stats_index < times) {
                loop_npc_tab_stats_6();
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
                loop_stats_gear_npc_6();
                if (!loop_stats_gear_npc_running) break;
                loop_stats_gear_npc_index++;
            }
        }
    }
    event_3812_6_end: ;
}
// Function purpose: generated callback event_func_4749 processes event block(s) 3813_6. Actions/conditions:
//        3813_6: sets the selected object's numeric value to 100.
void Frames::event_func_4749()
{
    // event 3813_6 : sets the selected object's numeric value to 100
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3813_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) > (100))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3813_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 100);
        }
    }
    event_3813_6_end: ;
}
// Function purpose: generated callback event_func_4750 processes event block(s) 3814_6. Actions/conditions:
//        3814_6: sets LClick to 1.
void Frames::event_func_4750()
{
    // event 3814_6 : sets LClick to 1
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3814_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3814_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_3814_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_3814_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3814_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->test_directions(1)) goto event_3814_6_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(dialogPanel_instances))->get_x()+55))) goto event_3814_6_end;
        if (!((get_mouse_y()) >= (((Active*)get_instance(dialogPanel_instances))->get_y()-54))) goto event_3814_6_end;
        if (!((get_mouse_y()) <= (((Active*)get_instance(dialogPanel_instances))->get_y()-37))) goto event_3814_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3814_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_6();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        {
            loop_npc_tab_stats_running = true;
            int times = int(1);
            loop_npc_tab_stats_index = 0;
            while (loop_npc_tab_stats_index < times) {
                loop_npc_tab_stats_6();
                if (!loop_npc_tab_stats_running) break;
                loop_npc_tab_stats_index++;
            }
        }
    }
    event_3814_6_end: ;
}
// Function purpose: generated callback event_func_4751 processes event block(s) 3826_6. Actions/conditions:
//        3826_6: sets the selected object's direction to 16; sets LClick to 1; sets GiveCash to 0; plus 1 more
//        actions.
void Frames::event_func_4751()
{
    // event 3826_6 : sets the selected object's direction to 16; sets LClick to 1; sets GiveCash to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3826_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3826_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_3826_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_3826_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3826_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->test_directions(65536)) goto event_3826_6_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(dialogPanel_instances))->get_x()+55))) goto event_3826_6_end;
        if (!((get_mouse_y()) >= (((Active*)get_instance(dialogPanel_instances))->get_y()-31))) goto event_3826_6_end;
        if (!((get_mouse_y()) <= (((Active*)get_instance(dialogPanel_instances))->get_y()-15))) goto event_3826_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3826_6_end;
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_6();
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
                loop_give_cash_setup_6();
                if (!loop_give_cash_setup_running) break;
                loop_give_cash_setup_index++;
            }
        }
        {
            loop_npc_tab_stats_name_running = true;
            int times = int(1);
            loop_npc_tab_stats_name_index = 0;
            while (loop_npc_tab_stats_name_index < times) {
                loop_npc_tab_stats_name_6();
                if (!loop_npc_tab_stats_name_running) break;
                loop_npc_tab_stats_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(636, str_givecash_1725, 0);
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3826_6_end: ;
}
// Function purpose: generated callback event_func_4752 processes event block(s) 3836_6. Actions/conditions:
//        3836_6: changes a stored game value.
void Frames::event_func_4752()
{
    // event 3836_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3836_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3836_6_end;
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_3836_6_end;
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(17))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3836_6_end;
        every_3836_6 += manager.dt;
        if (every_3836_6 < 0.06) goto event_3836_6_end;
        every_3836_6 -= 0.06;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(636, str_givecash_1725, 1);
    }
    event_3836_6_end: ;
}
// Function purpose: generated callback event_func_4753 processes event block(s) 3837_6. Actions/conditions:
//        3837_6: increments GiveCash by 1.
void Frames::event_func_4753()
{
    // event 3837_6 : increments GiveCash by 1
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3837_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3837_6_end;
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_3837_6_end;
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(16))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3837_6_end;
        every_3837_6 += manager.dt;
        if (every_3837_6 < 0.06) goto event_3837_6_end;
        every_3837_6 -= 0.06;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(636, str_givecash_1725, 1);
    }
    event_3837_6_end: ;
}
// Function purpose: generated callback event_func_4754 processes event block(s) 3838_6. Actions/conditions:
//        3838_6: sets GiveCash to 0.
void Frames::event_func_4754()
{
    // event 3838_6 : sets GiveCash to 0
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3838_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(636, str_givecash_1725)) < (0))) goto event_3838_6_end;
        if (!((givecash_261_instances.size()) > (0))) goto event_3838_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(636, str_givecash_1725, 0);
    }
    event_3838_6_end: ;
}
// Function purpose: generated callback event_func_4755 processes event block(s) 3839_6. Actions/conditions:
//        3839_6: sets GiveCash to gameVariables->get_value(219, Cash).
void Frames::event_func_4755()
{
    // event 3839_6 : sets GiveCash to gameVariables->get_value(219, Cash)
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3839_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(636, str_givecash_1725)) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)))) goto event_3839_6_end;
        if (!((givecash_261_instances.size()) > (0))) goto event_3839_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(636, str_givecash_1725, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11));
    }
    event_3839_6_end: ;
}
// Function purpose: generated callback event_func_4756 processes event block(s) 3840_6. Actions/conditions:
//        3840_6: moves the selected object to the front; sets the selected object's text.
void Frames::event_func_4756()
{
    // event 3840_6 : moves the selected object to the front; sets the selected object's text
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3840_6_end;
        if (!((givecash_261_instances.size()) > (0))) goto event_3840_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_3840_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_3840_6_end;
        ((Text*)get_instance(givecash_261_instances))->move_front(((Active*)get_instance(dialogPanel_instances)));
        givecash_261_instances.clear_selection();
        for (ObjectIterator it(givecash_261_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(str__1132+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(636, str_givecash_1725)));
        }
    }
    event_3840_6_end: ;
}
// Function purpose: generated callback event_func_4757 processes event block(s) 3841_6. Actions/conditions:
//        3841_6: sets the selected object's direction to 16.
void Frames::event_func_4757()
{
    // event 3841_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3841_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(18))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3841_6_end;
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_3841_6_end: ;
}
// Function purpose: generated callback event_func_4758 processes event block(s) 3842_6. Actions/conditions:
//        3842_6: sets the selected object's direction to 0.
void Frames::event_func_4758()
{
    // event 3842_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3842_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(18))) { it.deselect(); continue; }
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3842_6_end;
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_3842_6_end: ;
}
// Function purpose: generated callback event_func_4759 processes event block(s) 3843_6. Actions/conditions:
//        3843_6: sets gave_item to empty_string; sets allowed to 0.
void Frames::event_func_4759()
{
    // event 3843_6 : sets gave_item to empty_string; sets allowed to 0
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3843_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(18))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_3843_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(633, str_gave_item_1721, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(460, str_allowed_1329, 0);
        {
            loop_npc_give_check_running = true;
            int times = int(1);
            loop_npc_give_check_index = 0;
            while (loop_npc_give_check_index < times) {
                loop_npc_give_check_6();
                if (!loop_npc_give_check_running) break;
                loop_npc_give_check_index++;
            }
        }
    }
    event_3843_6_end: ;
}
// Function purpose: generated callback event_func_4760 processes event block(s) 3863_6. Actions/conditions:
//        3863_6: sets LClick to 1; sets the object's animation to 14; sets the selected object's direction to 24;
//        plus 1 more actions.
void Frames::event_func_4760()
{
    // event 3863_6 : sets LClick to 1; sets the object's animation to 14; sets the selected object's direction to 24; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3863_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_3863_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->mouse_over())) goto event_3863_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_3863_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3863_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->test_directions(16777216)) goto event_3863_6_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(dialogPanel_instances))->get_x()+55))) goto event_3863_6_end;
        if (!((get_mouse_y()) >= (((Active*)get_instance(dialogPanel_instances))->get_y()-10))) goto event_3863_6_end;
        if (!((get_mouse_y()) <= (((Active*)get_instance(dialogPanel_instances))->get_y()+7))) goto event_3863_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3863_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(14);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(24);
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_6();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        {
            loop_npc_tab_stats_name_running = true;
            int times = int(1);
            loop_npc_tab_stats_name_index = 0;
            while (loop_npc_tab_stats_name_index < times) {
                loop_npc_tab_stats_name_6();
                if (!loop_npc_tab_stats_name_running) break;
                loop_npc_tab_stats_name_index++;
            }
        }
        {
            loop_npc_buy_setup_running = true;
            int times = int(1);
            loop_npc_buy_setup_index = 0;
            while (loop_npc_buy_setup_index < times) {
                loop_npc_buy_setup_6();
                if (!loop_npc_buy_setup_running) break;
                loop_npc_buy_setup_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3863_6_end: ;
}
// Function purpose: generated callback event_func_4761 processes event block(s) 3884_6. Actions/conditions:
//        3884_6: sets LClick to 1; sets ClickedItemSlot to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(1).
void Frames::event_func_4761()
{
    // event 3884_6 : sets LClick to 1; sets ClickedItemSlot to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3884_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_buy_1131))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3884_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_3884_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3884_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_3884_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(387, str_clickeditemslot_1188, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1));
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
            loop_buy_npc_running = true;
            int times = int(1);
            loop_buy_npc_index = 0;
            while (loop_buy_npc_index < times) {
                loop_buy_npc_6();
                if (!loop_buy_npc_running) break;
                loop_buy_npc_index++;
            }
        }
    }
    event_3884_6_end: ;
}
// Function purpose: generated callback event_func_4762 processes event block(s) 3917_6. Actions/conditions:
//        3917_6: saves the current object selection; saves the current object selection; sets LeftClick to 1; plus 6
//        more actions.
void Frames::event_func_4762()
{
    // event 3917_6 : saves the current object selection; saves the current object selection; sets LeftClick to 1; plus 6 more actions
    bool or_result_3917_6 = false;
    bool or_temp_result_3917_6_0 = false;
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto or_event_3917_6_0_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto or_event_3917_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3917_6_0_end;
        sidePanel_instances.clear_selection();
        for (ObjectIterator it(sidePanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!sidePanel_instances.has_selection()) goto or_event_3917_6_0_end;
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(14))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3917_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_3917_6_0_end;
        or_result_3917_6 = true;
        or_temp_result_3917_6_0 = true;
    }
    or_event_3917_6_0_end: ;
    sidePanel_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_3917_6_0) {
        sidePanel_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 3917_6 : saves the current object selection; saves the current object selection; sets LeftClick to 1; plus 6 more actions
    bool or_temp_result_3917_6_1 = false;
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto or_event_3917_6_1_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto or_event_3917_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3917_6_1_end;
        sidePanel_instances.clear_selection();
        for (ObjectIterator it(sidePanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!sidePanel_instances.has_selection()) goto or_event_3917_6_1_end;
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_3917_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto or_event_3917_6_1_end;
        or_result_3917_6 = true;
        or_temp_result_3917_6_1 = true;
        or_event_3917_6_1_end: ;
        if (or_temp_result_3917_6_1) {
            sidePanel_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_3917_6) goto or_final_or_event_3917_6_1_end;
        sidePanel_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        if (or_temp_result_3917_6_0 || or_temp_result_3917_6_1) {
            sidePanel_instances.restore_selection();
        }
        if (or_temp_result_3917_6_0 || or_temp_result_3917_6_1) {
            dialogPanel_instances.restore_selection();
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
                loop_stats_close_npc_6();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    or_final_or_event_3917_6_1_end: ;
}
// Function purpose: generated callback event_func_4763 processes event block(s) 3918_6. Actions/conditions:
//        3918_6: sets Esc to 1; sets the selected object's visibility to false; plays a sound or music track.
void Frames::event_func_4763()
{
    // event 3918_6 : sets Esc to 1; sets the selected object's visibility to false; plays a sound or music track
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3918_6_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_3918_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(14))) goto event_3918_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_3918_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(561, str_esc_202)) == (0))) goto event_3918_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(561, str_esc_202, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        {
            loop_stats_close_npc_running = true;
            int times = int(1);
            loop_stats_close_npc_index = 0;
            while (loop_stats_close_npc_index < times) {
                loop_stats_close_npc_6();
                if (!loop_stats_close_npc_running) break;
                loop_stats_close_npc_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_3918_6_end: ;
}
