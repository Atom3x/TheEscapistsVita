#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_create_mission_beat_6()
{
    event_func_1429();
    event_func_1430();
}
// Function purpose: generated callback event_func_1431 processes event block(s) 4242_6. Actions/conditions:
//        4242_6: sets EmptyInvSlot to -1; sets EmptySlots to 0.
void Frames::event_func_1431()
{
    // event 4242_6 : sets EmptyInvSlot to -1; sets EmptySlots to 0
    {
        if (!(group_loops_1)) goto event_4242_6_end;
        if (!((loop_findinvslot_index+1) == (1))) goto event_4242_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(225, str_emptyinvslot_832, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(394, str_emptyslots_1200, 0);
    }
    event_4242_6_end: ;
}
// Function purpose: generated callback event_func_1432 processes event block(s) 4243_6. Actions/conditions:
//        4243_6: sets EmptyInvSlot to loop_findinvslot_index+1; increments EmptySlots by 1.
void Frames::event_func_1432()
{
    // event 4243_6 : sets EmptyInvSlot to loop_findinvslot_index+1; increments EmptySlots by 1
    {
        if (!(group_loops_1)) goto event_4243_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_findinvslot_index+1))) == (empty_string))) goto event_4243_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(225, str_emptyinvslot_832, loop_findinvslot_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(394, str_emptyslots_1200, 1);
            loop_findinvslot_running = false;
    
    }
    event_4243_6_end: ;
}
void Frames::loop_findinvslot_6()
{
    event_func_1431();
    event_func_1432();
}
// Function purpose: generated callback event_func_1433 processes event block(s) 2768_6. Actions/conditions:
//        2768_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1433()
{
    // event 2768_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2768_6_end;
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
    event_2768_6_end: ;
}
// Function purpose: generated callback event_func_1434 processes event block(s) 2769_6. Actions/conditions:
//        2769_6: sets SpeakText to You can't carry any more; plays a sound or music track.
void Frames::event_func_1434()
{
    // event 2769_6 : sets SpeakText to You can't carry any more; plays a sound or music track
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2769_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) == (0))) goto event_2769_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_you_can_t_carry_any_more_1201);
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
    event_2769_6_end: ;
}
// Function purpose: generated callback event_func_1435 processes event block(s) 2770_6. Actions/conditions:
//        2770_6: adds a itemshud 210 instance; sets the selected object's numeric value to
//        gameVariables->get_value(395, Output); enables flag -2 (legacy object-specific state; original label
//        was not retained) on the selected object; plus 11 more actions.
void Frames::event_func_1435()
{
    // event 2770_6 : adds a itemshud 210 instance; sets the selected object's numeric value to gameVariables->get_value(395, Output); enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 11 more actions
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2770_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_2770_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2770_6_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(395, str_output_1202));
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->alterables->values.set(7, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_2770_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2770_6_1: ;
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(395, str_output_1202))+str_1_1203);
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_2770_6_end: ;
}
// Function purpose: generated callback event_func_1436 processes event block(s) 2771_6. Actions/conditions:
//        2771_6: sets the selected object's numeric value to 0; sets the object's animation to 0.
void Frames::event_func_1436()
{
    // event 2771_6 : sets the selected object's numeric value to 0; sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2771_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_2771_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(217, str_currwasher_821)))) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2771_6_end;
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2771_6_end: ;
}
void Frames::loop_collect_laundry_6()
{
    event_func_1433();
    event_func_1434();
    event_func_1435();
    event_func_1436();
}
// Function purpose: generated callback event_func_1437 processes event block(s) 2130_6. Actions/conditions:
//        2130_6: creates a icons 433 object; sets the target object's direction; moves the target object to a layer;
//        plus 1 more actions.
void Frames::event_func_1437()
{
    // event 2130_6 : creates a icons 433 object; sets the target object's direction; moves the target object to a layer; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2130_6_end;
        FrameObject * single_instance_2130_6_0; single_instance_2130_6_0 = NULL;
        // select single: true false false
        qualifier_2.clear_selection();
        for (QualifierIterator p_it(qualifier_2); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_icons_433(parent->x + 0, parent->y + -10), parent->layer);
                if (single_instance_2130_6_0 == NULL)
                    single_instance_2130_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2130_6_0))->set_direction(24);
        ((Active*)((Active*)single_instance_2130_6_0))->set_layer(6-1);
        ((Active*)((Active*)single_instance_2130_6_0))->alterables->values.set(25, -1);
    }
    event_2130_6_end: ;
}
void Frames::loop_icon_spd_6()
{
    event_func_1437();
}
// Function purpose: generated callback event_func_1438 processes event block(s) 3729_6. Actions/conditions:
//        3729_6: sets the object's animation to 1.
void Frames::event_func_1438()
{
    // event 3729_6 : sets the object's animation to 1
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3729_6_end;
        qualifier_2.clear_selection();
        punchbag3_440_instances.clear_selection();
        if (!check_overlap(qualifier_2, punchbag3_440_instances)) goto event_3729_6_end;
        for (ObjectIterator it(punchbag3_440_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_3729_6_end: ;
}
// Function purpose: generated callback event_func_1439 processes event block(s) 3730_6. Actions/conditions:
//        3730_6: changes a stored game value.
void Frames::event_func_1439()
{
    // event 3730_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_speed_bag_1)) goto event_3730_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(396, str_skips_1204)%MathHelper()%4) == (0))) goto event_3730_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(9)) < (100))) goto event_3730_6_end;
        {
            loop_icon_spd_running = true;
            int times = int(1);
            loop_icon_spd_index = 0;
            while (loop_icon_spd_index < times) {
                loop_icon_spd_6();
                if (!loop_icon_spd_running) break;
                loop_icon_spd_index++;
            }
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(9, 1);
    }
    event_3730_6_end: ;
}
// Function purpose: generated callback event_func_1440 processes event block(s) 3741_6. Actions/conditions:
//        3741_6: changes a stored game value.
void Frames::event_func_1440()
{
    // event 3741_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_skipping_1)) goto event_3741_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(396, str_skips_1204)%MathHelper()%4) == (0))) goto event_3741_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(9)) < (100))) goto event_3741_6_end;
        {
            loop_icon_spd_running = true;
            int times = int(1);
            loop_icon_spd_index = 0;
            while (loop_icon_spd_index < times) {
                loop_icon_spd_6();
                if (!loop_icon_spd_running) break;
                loop_icon_spd_index++;
            }
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(9, 1);
    }
    event_3741_6_end: ;
}
void Frames::loop_check_skips_spd_6()
{
    event_func_1438();
    event_func_1439();
    event_func_1440();
}
// Function purpose: generated callback event_func_1441 processes event block(s) 3125_6. Actions/conditions:
//        3125_6: splits saved text into fields; activates the get(0 event group; creates a itemshud 210 object; plus
//        13 more actions.
void Frames::event_func_1441()
{
    // event 3125_6 : splits saved text into fields; activates the get(0 event group; creates a itemshud 210 object; plus 13 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3125_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_fill_container_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_container_613))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3125_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_container_613+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(loop_fill_container_index+1))) != (empty_string))) goto event_3125_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_container_613+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126))+str_slot_617+number_to_string(loop_fill_container_index+1)), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        FrameObject * single_instance_3125_6_0; single_instance_3125_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3125_6_0 == NULL)
                    single_instance_3125_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3125_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_3125_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_3125_6_0))->alterables->values.set(1, loop_fill_container_index+1);
        ((Active*)((Active*)single_instance_3125_6_0))->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
        ((Active*)((Active*)single_instance_3125_6_0))->alterables->strings.set(0, str_container_613);
        ((Active*)((Active*)single_instance_3125_6_0))->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((Active*)((Active*)single_instance_3125_6_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_3125_6_0))->force_animation(get_floor(((Active*)single_instance_3125_6_0)->alterables->values.get(2)/MathHelper()/32));
        ((Active*)((Active*)single_instance_3125_6_0))->set_direction(((Active*)single_instance_3125_6_0)->alterables->values.get(2)%MathHelper()%32);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_3125_6_end: ;
}
void Frames::loop_fill_container_6()
{
    event_func_1441();
}
// Function purpose: generated callback event_func_1442 processes event block(s) 3122_6. Actions/conditions:
//        3122_6: sets Xpos to -44; sets Ypos to -27.
void Frames::event_func_1442()
{
    // event 3122_6 : sets Xpos to -44; sets Ypos to -27
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3122_6_end;
        if (!((loop_build_container_index) == (0))) goto event_3122_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(140, str_xpos_705, -44);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(80, str_ypos_193, -27);
    }
    event_3122_6_end: ;
}
// Function purpose: generated callback event_func_1443 processes event block(s) 3123_6. Actions/conditions:
//        3123_6: creates a slot 224 object; sets the selected object's string to Container; reads an object position
//        for this event; plus 6 more actions.
void Frames::event_func_1443()
{
    // event 3123_6 : creates a slot 224 object; sets the selected object's string to Container; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3123_6_end;
        FrameObject * single_instance_3123_6_0; single_instance_3123_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3123_6_0 == NULL)
                    single_instance_3123_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3123_6_0))->alterables->strings.set(0, str_container_613);
        ((Active*)((Active*)single_instance_3123_6_0))->set_x(((Active*)single_instance_3123_6_0)->get_x()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(140, str_xpos_705));
        ((Active*)((Active*)single_instance_3123_6_0))->set_y(((Active*)single_instance_3123_6_0)->get_y()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        ((Active*)((Active*)single_instance_3123_6_0))->alterables->values.set(0, loop_build_container_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(140, str_xpos_705, 22);
    }
    event_3123_6_end: ;
}
// Function purpose: generated callback event_func_1444 processes event block(s) 3124_6. Actions/conditions:
//        3124_6: sets Xpos to -44; sets Ypos to selected object->get_value(80, Ypos)+22.
void Frames::event_func_1444()
{
    // event 3124_6 : sets Xpos to -44; sets Ypos to selected object->get_value(80, Ypos)+22
    bool or_result_3124_6 = false;
    bool or_temp_result_3124_6_0 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3124_6_0_end;
        if (!((loop_build_container_index) == (4))) goto or_event_3124_6_0_end;
        or_result_3124_6 = true;
        or_temp_result_3124_6_0 = true;
    }
    or_event_3124_6_0_end: ;
    // event 3124_6 : sets Xpos to -44; sets Ypos to selected object->get_value(80, Ypos)+22
    bool or_temp_result_3124_6_1 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3124_6_1_end;
        if (!((loop_build_container_index) == (9))) goto or_event_3124_6_1_end;
        or_result_3124_6 = true;
        or_temp_result_3124_6_1 = true;
    }
    or_event_3124_6_1_end: ;
    // event 3124_6 : sets Xpos to -44; sets Ypos to selected object->get_value(80, Ypos)+22
    bool or_temp_result_3124_6_2 = false;
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto or_event_3124_6_2_end;
        if (!((loop_build_container_index) == (14))) goto or_event_3124_6_2_end;
        or_result_3124_6 = true;
        or_temp_result_3124_6_2 = true;
        or_event_3124_6_2_end: ;
        if (!or_result_3124_6) goto or_final_or_event_3124_6_2_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(140, str_xpos_705, -44);
            ((AssociateArray*)*it)->set_value(80, str_ypos_193, ((AssociateArray*)*it)->get_value(80, str_ypos_193)+22);
        }
    }
    or_final_or_event_3124_6_2_end: ;
}
void Frames::loop_build_container_6()
{
    event_func_1442();
    event_func_1443();
    event_func_1444();
}
// Function purpose: generated callback event_func_1445 processes event block(s) 3115_6. Actions/conditions:
//        3115_6: splits saved text into fields.
void Frames::event_func_1445()
{
    // event 3115_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3115_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), str__96);
    }
    event_3115_6_end: ;
}
// Function purpose: generated callback event_func_1446 processes event block(s) 3116_6. Actions/conditions:
//        3116_6: sets SpeakText to Misc entry 46; plays a sound or music track.
void Frames::event_func_1446()
{
    // event 3116_6 : sets SpeakText to Misc entry 46; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3116_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (str_38_1205))) goto event_3116_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_46_1206));
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
    event_3116_6_end: ;
}
// Function purpose: generated callback event_func_1447 processes event block(s) 3117_6. Actions/conditions:
//        3117_6: sets the object's animation to 23; sets the selected object's visibility to true; adds a dchar 214
//        instance; plus 8 more actions.
void Frames::event_func_1447()
{
    // event 3117_6 : sets the object's animation to 23; sets the selected object's visibility to true; adds a dchar 214 instance; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3117_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_38_1205))) goto event_3117_6_end;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(23);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_18_332));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
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
                loop_fill_container_6();
                if (!loop_fill_container_running) break;
                loop_fill_container_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3117_6_end: ;
}
void Frames::loop_medibox_check_6()
{
    event_func_1445();
    event_func_1446();
    event_func_1447();
}
// Function purpose: generated callback event_func_1448 processes event block(s) 1008_6. Actions/conditions:
//        1008_6: activates the Sheets event group; sets SpeakCol to 1; sets SpeakID to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 1
//        more actions.
void Frames::event_func_1448()
{
    // event 1008_6 : activates the Sheets event group; sets SpeakCol to 1; sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 1 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1008_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1008_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_sheets_1207);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
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
    event_1008_6_end: ;
}
// Function purpose: generated callback event_func_1449 processes event block(s) 1009_6. Actions/conditions:
//        1009_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1449()
{
    // event 1009_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1009_6_end;
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
    event_1009_6_end: ;
}
// Function purpose: generated callback event_func_1450 processes event block(s) 1010_6. Actions/conditions:
//        1010_6: sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the
//        selected object's numeric value to gameVariables->get_value(371, foundY); enables flag 60 (guard
//        sight or target-tracking state) on the selected object.
void Frames::event_func_1450()
{
    // event 1010_6 : sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the selected object's numeric value to gameVariables->get_value(371, foundY); enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1010_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (1))) goto event_1010_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1010_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1010_6_end: ;
}
void Frames::loop_goto_sheet_6()
{
    event_func_1448();
    event_func_1449();
    event_func_1450();
}
// Function purpose: generated callback event_func_1451 processes event block(s) 1153_6. Actions/conditions:
//        1153_6: sets spaceX to ((Active*)get_instance(usespot3_428_instances, default_active_instance))->get_x();
//        sets spaceY to ((Active*)get_instance(usespot3_428_instances, default_active_instance))->get_y().
void Frames::event_func_1451()
{
    // event 1153_6 : sets spaceX to ((Active*)get_instance(usespot3_428_instances, default_active_instance))->get_x(); sets spaceY to ((Active*)get_instance(usespot3_428_instances, default_active_instance))->get_y()
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1153_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_instance(usespot3_428_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_instance(usespot3_428_instances, default_active_instance))->get_y());
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
    event_1153_6_end: ;
}
// Function purpose: generated callback event_func_1452 processes event block(s) 1154_6. Actions/conditions:
//        1154_6: sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the
//        selected object's numeric value to gameVariables->get_value(371, foundY); enables flag 60 (guard
//        sight or target-tracking state) on the selected object.
void Frames::event_func_1452()
{
    // event 1154_6 : sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the selected object's numeric value to gameVariables->get_value(371, foundY); enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1154_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(133, str_sd_guard_698)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1154_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1154_6_end: ;
}
void Frames::loop_shakedown_goto_desk_6()
{
    event_func_1451();
    event_func_1452();
}
// Function purpose: generated callback event_func_1453 processes event block(s) 1158_6. Actions/conditions:
//        1158_6: splits saved text into fields.
void Frames::event_func_1453()
{
    // event 1158_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1158_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208))+str_slot_617+number_to_string(loop_shake_search_index+1)), str__96);
    }
    event_1158_6_end: ;
}
// Function purpose: generated callback event_func_1454 processes event block(s) 1159_6. Actions/conditions:
//        1159_6: sets found to 1.
void Frames::event_func_1454()
{
    // event 1159_6 : sets found to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1159_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str_illegal_618)) > (0))) goto event_1159_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
    }
    event_1159_6_end: ;
}
void Frames::loop_shake_search_6()
{
    event_func_1453();
    event_func_1454();
}
// Function purpose: generated callback event_func_1455 processes event block(s) 1155_6. Actions/conditions:
//        1155_6: sets found to 0.
void Frames::event_func_1455()
{
    // event 1155_6 : sets found to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1155_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_shake_search_running = true;
            int times = int(20);
            loop_shake_search_index = 0;
            while (loop_shake_search_index < times) {
                loop_shake_search_6();
                if (!loop_shake_search_running) break;
                loop_shake_search_index++;
            }
        }
    }
    event_1155_6_end: ;
}
// Function purpose: generated callback event_func_1456 processes event block(s) 1156_6. Actions/conditions:
//        1156_6: sets EndString to Caught entry 14.
void Frames::event_func_1456()
{
    // event 1156_6 : sets EndString to Caught entry 14
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1156_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (1))) goto event_1156_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_14_197));
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
    event_1156_6_end: ;
}
// Function purpose: generated callback event_func_1457 processes event block(s) 1157_6. Actions/conditions:
//        1157_6: sets the selected object's numeric value to ((Active*)single_instance_1157_6_0)->get_x(); sets the
//        selected object's numeric value to ((Active*)single_instance_1157_6_0)->get_y().
void Frames::event_func_1457()
{
    // event 1157_6 : sets the selected object's numeric value to ((Active*)single_instance_1157_6_0)->get_x(); sets the selected object's numeric value to ((Active*)single_instance_1157_6_0)->get_y()
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1157_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1157_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(133, str_sd_guard_698)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1157_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_1157_6_0; single_instance_1157_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_1157_6_0 == NULL) goto event_1157_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1157_6_0)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1157_6_0)->get_y());
        }
    }
    event_1157_6_end: ;
}
void Frames::loop_the_shakedown_6()
{
    event_func_1455();
    event_func_1456();
    event_func_1457();
}
// Function purpose: generated callback event_func_1458 processes event block(s) 1149_6. Actions/conditions:
//        1149_6: creates a usespot3 428 object.
void Frames::event_func_1458()
{
    // event 1149_6 : creates a usespot3 428 object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1149_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_1149_6_end;
        FrameObject * single_instance_1149_6_0; single_instance_1149_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(desks_305_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_usespot3_428(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1149_6_0 == NULL)
                    single_instance_1149_6_0 = new_obj;
            }
        }
    }
    event_1149_6_end: ;
}
// Function purpose: generated callback event_func_1459 processes event block(s) 1150_6. Actions/conditions:
//        1150_6: sets found to 0.
void Frames::event_func_1459()
{
    // event 1150_6 : sets found to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1150_6_end;
        lookguardflag60_442_instances.clear_selection();
        if (!check_not_overlap(lookguardflag60_442_instances, usespot3_428_instances)) goto event_1150_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_shakedown_goto_desk_running = true;
            int times = int(1);
            loop_shakedown_goto_desk_index = 0;
            while (loop_shakedown_goto_desk_index < times) {
                loop_shakedown_goto_desk_6();
                if (!loop_shakedown_goto_desk_running) break;
                loop_shakedown_goto_desk_index++;
            }
        }
    }
    event_1150_6_end: ;
}
// Function purpose: generated callback event_func_1460 processes event block(s) 1151_6. Actions/conditions:
//        1151_6: sets SD1_ID to 0; sets SD2_ID to 0; sets SD_Guard to 0.
void Frames::event_func_1460()
{
    // event 1151_6 : sets SD1_ID to 0; sets SD2_ID to 0; sets SD_Guard to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1151_6_end;
        lookguardflag60_442_instances.clear_selection();
        usespot3_428_instances.clear_selection();
        if (!check_overlap(lookguardflag60_442_instances, usespot3_428_instances)) goto event_1151_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(398, str_sd1_id_1209, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(399, str_sd2_id_1210, 0);
        {
            loop_the_shakedown_running = true;
            int times = int(1);
            loop_the_shakedown_index = 0;
            while (loop_the_shakedown_index < times) {
                loop_the_shakedown_6();
                if (!loop_the_shakedown_running) break;
                loop_the_shakedown_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(133, str_sd_guard_698, 0);
    }
    event_1151_6_end: ;
}
// Function purpose: generated callback event_func_1461 processes event block(s) 1152_6. Actions/conditions:
//        1152_6: removes the selected object; sets the object position in the world.
void Frames::event_func_1461()
{
    // event 1152_6 : removes the selected object; sets the object position in the world
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1152_6_end;
        usespot3_428_instances.clear_selection();
        for (ObjectIterator it(usespot3_428_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            ((Active*)get_instance(lookguardflag60_442_instances))->set_global_position(-100, -100);
            pos_end_1152_6_0: ;
        }
    }
    event_1152_6_end: ;
}
void Frames::loop_sdown_neardesk_6()
{
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
}
// Function purpose: generated callback event_func_1462 processes event block(s) 4260_6. Actions/conditions:
//        4260_6: sets ItemHP_Dmg to itemData->get_value_int(number_to_string(gameVariables->get_value(47,
//        SelectedItem)), Decay).
void Frames::event_func_1462()
{
    // event 4260_6 : sets ItemHP_Dmg to itemData->get_value_int(number_to_string(gameVariables->get_value(47, SelectedItem)), Decay)
    {
        if (!(group_loops_1)) goto event_4260_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(400, str_itemhp_dmg_1211, ((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)), str_decay_1212));
    }
    event_4260_6_end: ;
}
// Function purpose: generated callback event_func_1463 processes event block(s) 4261_6. Actions/conditions:
//        4261_6: changes a stored game value; sets a game or interface text string.
void Frames::event_func_1463()
{
    // event 4261_6 : changes a stored game value; sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4261_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(400, str_itemhp_dmg_1211)) > (0))) goto event_4261_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4261_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(400, str_itemhp_dmg_1211));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
    }
    event_4261_6_end: ;
}
// Function purpose: generated callback event_func_1464 processes event block(s) 4262_6. Actions/conditions:
//        4262_6: sets Des_Msg to Misc entry 25; sets a game or interface text string; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_1464()
{
    // event 4262_6 : sets Des_Msg to Misc entry 25; sets a game or interface text string; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_loops_1)) goto event_4262_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4262_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(401, str_des_msg_1213, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_25_1214));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(401, str_des_msg_1213, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(401, str_des_msg_1213), str_item_1215, lowercase_string(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_name_103))));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)), empty_string);
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4262_6_end: ;
}
void Frames::loop_itemhp_6()
{
    event_func_1462();
    event_func_1463();
    event_func_1464();
}
// Function purpose: generated callback event_func_1465 processes event block(s) 3214_6. Actions/conditions:
//        3214_6: creates a taskbox 238 object; sets the target object's direction; sets the selected object's string
//        to Activity.
void Frames::event_func_1465()
{
    // event 3214_6 : creates a taskbox 238 object; sets the target object's direction; sets the selected object's string to Activity
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3214_6_end;
        FrameObject * single_instance_3214_6_0; single_instance_3214_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityPanel(parent->x + 2, parent->y + 180), parent->layer);
                if (single_instance_3214_6_0 == NULL)
                    single_instance_3214_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3214_6_0))->set_direction(24);
        ((Active*)((Active*)single_instance_3214_6_0))->alterables->strings.set(0, str_activity_1153);
    }
    event_3214_6_end: ;
}
// Function purpose: generated callback event_func_1466 processes event block(s) 3215_6. Actions/conditions:
//        3215_6: sets the selected object's direction to 0.
void Frames::event_func_1466()
{
    // event 3215_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3215_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3215_6_end;
        if (!((global_strings->get(6)) == (str_ita_5))) goto event_3215_6_end;
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_3215_6_end: ;
}
// Function purpose: generated callback event_func_1467 processes event block(s) 3216_6. Actions/conditions:
//        3216_6: adds a workouttext 241 instance; sets the object position in the world; sets the selected object's
//        text; plus 5 more actions.
void Frames::event_func_1467()
{
    // event 3216_6 : adds a workouttext 241 instance; sets the object position in the world; sets the selected object's text; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3216_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_activity_1153))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_3216_6_end;
        activityText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activityText(0, 0), 5);
            activityText_instances.add_back();
        }
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(activityPanel_instances, it.current_index));
            if (parent == NULL) goto pos_end_3216_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + 9, parent->get_y() + 3);
            pos_end_3216_6_1: ;
        }
        for (ObjectIterator it(activityText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(402, str_actype_1216));
        }
        FrameObject * single_instance_3216_6_2; single_instance_3216_6_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(activityPanel_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + 10, parent->y + 15), parent->layer);
                if (single_instance_3216_6_2 == NULL)
                    single_instance_3216_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3216_6_2))->alterables->strings.set(0, str_activity_1153);
    }
    event_3216_6_end: ;
}
void Frames::loop_create_activity_box_6()
{
    event_func_1465();
    event_func_1466();
    event_func_1467();
}
// Function purpose: generated callback event_func_1468 processes event block(s) 3066_6. Actions/conditions:
//        3066_6: sets fail to 0.
void Frames::event_func_1468()
{
    // event 3066_6 : sets fail to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3066_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(403, str_fail_1217, 0);
    }
    event_3066_6_end: ;
}
// Function purpose: generated callback event_func_1469 processes event block(s) 3067_6. Actions/conditions:
//        3067_6: sets fail to 1; plays a sound or music track.
void Frames::event_func_1469()
{
    // event 3067_6 : sets fail to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3067_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(292, str_cuttablefences_969), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((get_mouse_x()/MathHelper()/16), (get_mouse_y()/MathHelper()/16), ((Active*)get_instance(playerBase_instances))->layer->index+1))+str__96, 0)) != (-1))) goto event_3067_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) < (100))) goto event_3067_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(403, str_fail_1217, 1);
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3067_6_end: ;
}
// Function purpose: generated callback event_func_1470 processes event block(s) 3068_6. Actions/conditions:
//        3068_6: checks scene is active; game state fail; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_1470()
{
    // event 3068_6 : checks scene is active; game state fail; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3068_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(403, str_fail_1217)) == (0))) goto event_3068_6_end;
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
    event_3068_6_end: ;
}
// Function purpose: generated callback event_func_1471 processes event block(s) 3069_6. Actions/conditions:
//        3069_6: sets SpeakText to Misc entry 7; sets fail to 1; plays a sound or music track.
void Frames::event_func_1471()
{
    // event 3069_6 : sets SpeakText to Misc entry 7; sets fail to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3069_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) == (0))) goto event_3069_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_7_323));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(403, str_fail_1217, 1);
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
            loop_digbelow_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3069_6_end: ;
}
// Function purpose: generated callback event_func_1472 processes event block(s) 3070_6. Actions/conditions:
//        3070_6: sets fail to 1; sets SpeakText to Misc entry 6; plays a sound or music track.
void Frames::event_func_1472()
{
    // event 3070_6 : sets fail to 1; sets SpeakText to Misc entry 6; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3070_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(403, str_fail_1217)) == (0))) goto event_3070_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_3070_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(403, str_fail_1217, 1);
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
            loop_digbelow_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3070_6_end: ;
}
// Function purpose: generated callback event_func_1473 processes event block(s) 3071_6. Actions/conditions:
//        3071_6: sets fail to 1; sets SpeakText to Misc entry 11; plays a sound or music track.
void Frames::event_func_1473()
{
    // event 3071_6 : sets fail to 1; sets SpeakText to Misc entry 11; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3071_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(403, str_fail_1217)) == (0))) goto event_3071_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(404, str_nearestbrace_1218)) > (35))) goto event_3071_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(403, str_fail_1217, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_11_331));
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
            loop_digbelow_check_running = false;
    
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_3071_6_end: ;
}
// Function purpose: generated callback event_func_1474 processes event block(s) 3072_6. Actions/conditions:
//        3072_6: sets Digging to 100; sets the object's animation to 12; sets the selected object's direction to
//        get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); plus 1 more
//        actions.
void Frames::event_func_1474()
{
    // event 3072_6 : sets Digging to 100; sets the object's animation to 12; sets the selected object's direction to get_direction_int(selected object->x, selected object->y, cursor_178->x + 8, cursor_178->y + 8); plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3072_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(403, str_fail_1217)) == (0))) goto event_3072_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(404, str_nearestbrace_1218)) <= (35))) goto event_3072_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3072_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(394, str_emptyslots_1200)) > (0))) goto event_3072_6_end;
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
    event_3072_6_end: ;
}
void Frames::loop_digbelow_check_6()
{
    event_func_1468();
    event_func_1469();
    event_func_1470();
    event_func_1471();
    event_func_1472();
    event_func_1473();
    event_func_1474();
}
// Function purpose: generated callback event_func_1475 processes event block(s) 3443_6. Actions/conditions:
//        3443_6: sets source to Hovers entry 65; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), $name,
//        gameVariables->get_string(167, MapWarden)); creates a dialogue2 179 object; plus 14 more actions.
void Frames::event_func_1475()
{
    // event 3443_6 : sets source to Hovers entry 65; sets source to StringReplace::replace(gameVariables->get_string(81, source), $name, gameVariables->get_string(167, MapWarden)); creates a dialogue2 179 object; plus 14 more actions
    {
        if (!(group_code_1)) goto event_3443_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_65_904));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(167, str_mapwarden_744)));
        FrameObject * single_instance_3443_6_0; single_instance_3443_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -70, parent->y + 30), parent->layer);
                if (single_instance_3443_6_0 == NULL)
                    single_instance_3443_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3443_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(0)+12);
        ((Text*)((Text*)single_instance_3443_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-22);
        ((Text*)((Text*)single_instance_3443_6_0))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_3443_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        FrameObject * single_instance_3443_6_1; single_instance_3443_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_3443_6_1 == NULL)
                    single_instance_3443_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3443_6_1))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_3443_6_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_3443_6_1))->force_animation(43);
        FrameObject * single_instance_3443_6_2; single_instance_3443_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3443_6_1)->x + 3, ((Active*)single_instance_3443_6_1)->y + 3), ((Active*)single_instance_3443_6_1)->layer);
            if (single_instance_3443_6_2 == NULL)
                single_instance_3443_6_2 = new_obj;
        }
        ((Text*)((Text*)single_instance_3443_6_2))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_3443_6_2))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_3443_6_end: ;
}
void Frames::loop_letter_warden_6()
{
    event_func_1475();
}
// Function purpose: generated callback event_func_1476 processes event block(s) 2916_6. Actions/conditions:
//        2916_6: removes the selected object; sets rejected to 0.
void Frames::event_func_1476()
{
    // event 2916_6 : removes the selected object; sets rejected to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2916_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(405, str_rejected_1219, 0);
    }
    event_2916_6_end: ;
}
// Function purpose: generated callback event_func_1477 processes event block(s) 2917_6. Actions/conditions:
//        2917_6: updates a value on the target object; removes the selected object.
void Frames::event_func_1477()
{
    // event 2917_6 : updates a value on the target object; removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2917_6_end;
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(0, 84, 128));
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
    event_2917_6_end: ;
}
// Function purpose: generated callback event_func_1478 processes event block(s) 2918_6. Actions/conditions:
//        2918_6: sets rejected to 1; sets Outcome to Job Board entry 4; sets Outcome to
//        StringReplace::replace(gameVariables->get_string(406, Outcome), #, ); plus 5 more actions.
void Frames::event_func_1478()
{
    // event 2918_6 : sets rejected to 1; sets Outcome to Job Board entry 4; sets Outcome to StringReplace::replace(gameVariables->get_string(406, Outcome), #, ); plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2918_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_2918_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2918_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(405, str_rejected_1219)) == (0))) goto event_2918_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(405, str_rejected_1219, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, ((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_4_161));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220), str__346, str__624));
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220));
        }
        media.play_id(SOUND_LOSE_8, 1-1);
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
    event_2918_6_end: ;
}
// Function purpose: generated callback event_func_1479 processes event block(s) 2919_6. Actions/conditions:
//        2919_6: sets rejected to 1; sets Outcome to Job Board entry 6; sets Outcome to
//        StringReplace::replace(gameVariables->get_string(406, Outcome), #, ); plus 7 more actions.
void Frames::event_func_1479()
{
    // event 2919_6 : sets rejected to 1; sets Outcome to Job Board entry 6; sets Outcome to StringReplace::replace(gameVariables->get_string(406, Outcome), #, ); plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2919_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(101, str_intreq_629)))) goto event_2919_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(405, str_rejected_1219)) == (0))) goto event_2919_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(405, str_rejected_1219, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, ((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_6_241));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220), str__346, str__624));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220), str_job_1221, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(100, str_job_name_628)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220), str_int_1222, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(101, str_intreq_629))));
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220));
        }
        media.play_id(SOUND_LOSE_8, 1-1);
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
    event_2919_6_end: ;
}
// Function purpose: generated callback event_func_1480 processes event block(s) 2920_6. Actions/conditions:
//        2920_6: sets rejected to 1; sets Outcome to Job Board entry 5; sets Outcome to
//        StringReplace::replace(gameVariables->get_string(406, Outcome), #, ); plus 5 more actions.
void Frames::event_func_1480()
{
    // event 2920_6 : sets rejected to 1; sets Outcome to Job Board entry 5; sets Outcome to StringReplace::replace(gameVariables->get_string(406, Outcome), #, ); plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2920_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495)) >= (50))) goto event_2920_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(405, str_rejected_1219)) == (0))) goto event_2920_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(405, str_rejected_1219, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, ((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_5_164));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220), str__346, str__624));
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220));
        }
        media.play_id(SOUND_LOSE_8, 1-1);
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
    event_2920_6_end: ;
}
// Function purpose: generated callback event_func_1481 processes event block(s) 2921_6. Actions/conditions:
//        2921_6: sets Job to gameVariables->get_string(100, Job_Name); sets a stored numeric value; sets
//        Outcome to Job Board entry 7; plus 6 more actions.
void Frames::event_func_1481()
{
    // event 2921_6 : sets Job to gameVariables->get_string(100, Job_Name); sets a stored numeric value; sets Outcome to Job Board entry 7; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2921_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) >= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(101, str_intreq_629)))) goto event_2921_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(405, str_rejected_1219)) == (0))) goto event_2921_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(17, str_job_478, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(100, str_job_name_628));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_pos_635+((AssociateArray*)get_instance(gameVariables_instances))->get_string(100, str_job_name_628), -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, ((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_7_323));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(406, str_outcome_1220, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220), str__346, str__624));
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(406, str_outcome_1220));
        }
        media.play_id(SOUND_ACCOLADE_9, 1-1);
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
    event_2921_6_end: ;
}
void Frames::loop_job_apply_6()
{
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
}
// Function purpose: generated callback event_func_1482 processes event block(s) 3388_6. Actions/conditions:
//        3388_6: sets FoundSlot to loop_flip_craft_findslot_index+1; sets a game or interface text string; plays a
//        sound or music track.
void Frames::event_func_1482()
{
    // event 3388_6 : sets FoundSlot to loop_flip_craft_findslot_index+1; sets a game or interface text string; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3388_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_flip_craft_findslot_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3388_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(367, str_foundslot_1161, loop_flip_craft_findslot_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)), empty_string);
            loop_flip_craft_findslot_running = false;
    
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_3388_6_end: ;
}
void Frames::loop_flip_craft_findslot_6()
{
    event_func_1482();
}
// Function purpose: generated callback event_func_1483 processes event block(s) 3387_6. Actions/conditions:
//        3387_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1483()
{
    // event 3387_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3387_6_end;
        {
            loop_flip_craft_findslot_running = true;
            int times = int(9);
            loop_flip_craft_findslot_index = 0;
            while (loop_flip_craft_findslot_index < times) {
                loop_flip_craft_findslot_6();
                if (!loop_flip_craft_findslot_running) break;
                loop_flip_craft_findslot_index++;
            }
        }
    }
    event_3387_6_end: ;
}
// Function purpose: generated callback event_func_1484 processes event block(s) 3389_6. Actions/conditions:
//        3389_6: sets the selected object's numeric value to 1; sets the object position in the world; sets the
//        selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 8 more actions.
void Frames::event_func_1484()
{
    // event 3389_6 : sets the selected object's numeric value to 1; sets the object position in the world; sets the selected object's numeric value to gameVariables->get_value(367, FoundSlot); plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3389_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)) != (-1))) goto event_3389_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3389_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3389_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3389_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3389_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(367, str_foundslot_1161));
            ((Active*)*it)->alterables->strings.set(0, str_craft_900);
            ((Active*)*it)->alterables->flags.enable(-52);
            ((Active*)*it)->alterables->values.set(8, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162));
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
    }
    event_3389_6_end: ;
}
void Frames::loop_find_open_craft_slot_6()
{
    event_func_1483();
    event_func_1484();
}
// Function purpose: generated callback event_func_1485 processes event block(s) 1185_6. Actions/conditions:
//        1185_6: sets CurrGuard to ((Active*)single_instance_1185_6_0)->alterables->values.get(0).
void Frames::event_func_1485()
{
    // event 1185_6 : sets CurrGuard to ((Active*)single_instance_1185_6_0)->alterables->values.get(0)
    {
        if (!(group_code_1)) goto event_1185_6_end;
        guardBase_instances.clear_selection();
        FrameObject * single_instance_1185_6_0; single_instance_1185_6_0 = pick_random(guardBase_instances);
        if (single_instance_1185_6_0 == NULL) goto event_1185_6_end;
        if (!((((Active*)single_instance_1185_6_0)->alterables->values.get(0)) > (3))) goto event_1185_6_end;
        if (!((((Active*)single_instance_1185_6_0)->alterables->values.get(7)) > (0))) goto event_1185_6_end;
        if (!((((Active*)single_instance_1185_6_0)->alterables->values.get(2)) == (0))) goto event_1185_6_end;
        if (!(((Active*)single_instance_1185_6_0)->alterables->flags.is_off(60))) goto event_1185_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(407, str_currguard_1223, ((Active*)single_instance_1185_6_0)->alterables->values.get(0));
            loop_guardpick_running = false;
    
    }
    event_1185_6_end: ;
}
void Frames::loop_guardpick_6()
{
    event_func_1485();
}
// Function purpose: generated callback event_func_1486 processes event block(s) 1184_6. Actions/conditions:
//        1184_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1486()
{
    // event 1184_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1184_6_end;
        {
            loop_guardpick_running = true;
            int times = int(10);
            loop_guardpick_index = 0;
            while (loop_guardpick_index < times) {
                loop_guardpick_6();
                if (!loop_guardpick_running) break;
                loop_guardpick_index++;
            }
        }
    }
    event_1184_6_end: ;
}
// Function purpose: generated callback event_func_1487 processes event block(s) 1186_6. Actions/conditions:
//        1186_6: sets spaceX to gameVariables->get_value(408, CallX); sets spaceY to
//        gameVariables->get_value(409, CallY).
void Frames::event_func_1487()
{
    // event 1186_6 : sets spaceX to gameVariables->get_value(408, CallX); sets spaceY to gameVariables->get_value(409, CallY)
    {
        if (!(group_code_1)) goto event_1186_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(408, str_callx_1224));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(409, str_cally_1225));
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
    event_1186_6_end: ;
}
// Function purpose: generated callback event_func_1488 processes event block(s) 1187_6. Actions/conditions:
//        1187_6: sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the
//        selected object's numeric value to gameVariables->get_value(371, foundY); enables flag 60 (guard
//        sight or target-tracking state) on the selected object.
void Frames::event_func_1488()
{
    // event 1187_6 : sets the selected object's numeric value to gameVariables->get_value(370, foundX); sets the selected object's numeric value to gameVariables->get_value(371, foundY); enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1)) goto event_1187_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(407, str_currguard_1223)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1187_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1187_6_end: ;
}
void Frames::loop_inmate_calls_guard_6()
{
    event_func_1486();
    event_func_1487();
    event_func_1488();
}
// Function purpose: generated callback event_func_1489 processes event block(s) 2093_6. Actions/conditions:
//        2093_6: sets the target object's direction; stops the object's movement; increments Heat by 10; plus 12 more
//        actions.
void Frames::event_func_1489()
{
    // event 2093_6 : sets the target object's direction; stops the object's movement; increments Heat by 10; plus 12 more actions
    {
        if (!(group_code_1)) goto event_2093_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) == (1))) goto event_2093_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2093_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_qualifier(qualifier_2, it.current_index))->x + 0, ((Active*)get_qualifier(qualifier_2, it.current_index))->y + 0));
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(343, str_iconx_1136, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(344, str_icony_1137, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(345, str_iconz_1138, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
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
            loop_icon_heat_running = true;
            int times = int(1);
            loop_icon_heat_index = 0;
            while (loop_icon_heat_index < times) {
                loop_icon_heat_6();
                if (!loop_icon_heat_running) break;
                loop_icon_heat_index++;
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
    event_2093_6_end: ;
}
void Frames::loop_policing_movealong_6()
{
    event_func_1489();
}
// Function purpose: generated callback event_func_1490 processes event block(s) 1094_6. Actions/conditions:
//        1094_6: sets the selected object's numeric value to 0; sets the selected object's numeric value to -1;
//        disables flag 25 (object-specific interaction state) on the selected object.
void Frames::event_func_1490()
{
    // event 1094_6 : sets the selected object's numeric value to 0; sets the selected object's numeric value to -1; disables flag 25 (object-specific interaction state) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1094_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(410, str_npcz_1226)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1094_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(16, -1);
            ((Active*)*it)->alterables->flags.disable(25);
        }
    }
    event_1094_6_end: ;
}
// Function purpose: generated callback event_func_1491 processes event block(s) 1095_6. Actions/conditions:
//        1095_6: sets SpeakCol to 1; sets Heat to 100.
void Frames::event_func_1491()
{
    // event 1095_6 : sets SpeakCol to 1; sets Heat to 100
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1095_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(410, str_npcz_1226)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (50))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1095_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 100);
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
    event_1095_6_end: ;
}
// Function purpose: generated callback event_func_1492 processes event block(s) 1096_6. Actions/conditions:
//        1096_6: increments Heat by 15*gameVariables->get_value(83, NPClvl); sets SpeakCol to 0.
void Frames::event_func_1492()
{
    // event 1096_6 : increments Heat by 15*gameVariables->get_value(83, NPClvl); sets SpeakCol to 0
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1096_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(410, str_npcz_1226)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (50))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1096_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 15*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
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
    event_1096_6_end: ;
}
void Frames::loop_raise_npc_6()
{
    event_func_1490();
    event_func_1491();
    event_func_1492();
}
// Function purpose: generated callback event_func_1493 processes event block(s) 986_6. Actions/conditions:
//        986_6: sets a game or interface text string.
void Frames::event_func_1493()
{
    // event 986_6 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_986_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) <= (24))) goto event_986_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(411, str_currz_1227)), str_29_100_539);
    }
    event_986_6_end: ;
}
// Function purpose: generated callback event_func_1494 processes event block(s) 987_6. Actions/conditions:
//        987_6: sets the selected object's numeric value to gameVariables->get_value(412, destX); sets the
//        selected object's numeric value to gameVariables->get_value(413, destY).
void Frames::event_func_1494()
{
    // event 987_6 : sets the selected object's numeric value to gameVariables->get_value(412, destX); sets the selected object's numeric value to gameVariables->get_value(413, destY)
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_987_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) > (24))) goto event_987_6_end;
        bedguard_337_instances.clear_selection();
        FrameObject * single_instance_987_6_0; single_instance_987_6_0 = pick_random(bedguard_337_instances);
        if (single_instance_987_6_0 == NULL) goto event_987_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(412, str_destx_1228));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(413, str_desty_1229));
        }
    }
    event_987_6_end: ;
}
void Frames::loop_g_noweap_6()
{
    event_func_1493();
    event_func_1494();
}
// Function purpose: generated callback event_func_1495 processes event block(s) 985_6. Actions/conditions:
//        985_6: sets destX to ((Active*)single_instance_985_6_0)->get_x(); sets destY to
//        ((Active*)single_instance_985_6_0)->get_y(); sets a stored numeric value.
void Frames::event_func_1495()
{
    // event 985_6 : sets destX to ((Active*)single_instance_985_6_0)->get_x(); sets destY to ((Active*)single_instance_985_6_0)->get_y(); sets a stored numeric value
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_985_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_g_weap_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_985_6_end;
        bedguard_337_instances.clear_selection();
        FrameObject * single_instance_985_6_0; single_instance_985_6_0 = pick_random(bedguard_337_instances);
        if (single_instance_985_6_0 == NULL) goto event_985_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(412, str_destx_1228, ((Active*)single_instance_985_6_0)->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(413, str_desty_1229, ((Active*)single_instance_985_6_0)->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(383, str_range_1181, get_distance_int(((Active*)get_single(guardBase_instances, default_active_instance))->get_x(), ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(), ((Active*)single_instance_985_6_0)->get_x(), ((Active*)single_instance_985_6_0)->get_y()));
        {
            loop_g_noweap_running = true;
            int times = int(1);
            loop_g_noweap_index = 0;
            while (loop_g_noweap_index < times) {
                loop_g_noweap_6();
                if (!loop_g_noweap_running) break;
                loop_g_noweap_index++;
            }
        }
    }
    event_985_6_end: ;
}
void Frames::loop_found_unarmed_6()
{
    event_func_1495();
}
// Function purpose: generated callback event_func_1496 processes event block(s) 3793_6. Actions/conditions:
//        3793_6: changes a stored game value.
void Frames::event_func_1496()
{
    // event 3793_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3793_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3793_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(12, 3);
        }
    }
    event_3793_6_end: ;
}
// Function purpose: generated callback event_func_1497 processes event block(s) 3794_6. Actions/conditions:
//        3794_6: sets the selected object's numeric value to -1.
void Frames::event_func_1497()
{
    // event 3794_6 : sets the selected object's numeric value to -1
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3794_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (20))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3794_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
        }
    }
    event_3794_6_end: ;
}
// Function purpose: generated callback event_func_1498 processes event block(s) 3795_6. Actions/conditions:
//        3795_6: enables flag 987 (inmate gym-training state) on the selected object.
void Frames::event_func_1498()
{
    // event 3795_6 : enables flag 987 (inmate gym-training state) on the selected object
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3795_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3795_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(987);
        }
    }
    event_3795_6_end: ;
}
// Function purpose: generated callback event_func_1499 processes event block(s) 3796_6. Actions/conditions:
//        3796_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_1499()
{
    // event 3796_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3796_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3796_6_end;
    }
    event_3796_6_end: ;
}
void Frames::loop_gym_push_reaction_6()
{
    event_func_1496();
    event_func_1497();
    event_func_1498();
    event_func_1499();
}
// Function purpose: generated callback event_func_1500 processes event block(s) 2976_6. Actions/conditions:
//        2976_6: sets the selected object's numeric value to -1.
void Frames::event_func_1500()
{
    // event 2976_6 : sets the selected object's numeric value to -1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2976_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (20))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2976_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
        }
    }
    event_2976_6_end: ;
}
// Function purpose: generated callback event_func_1501 processes event block(s) 2977_6. Actions/conditions:
//        2977_6: activates the Chair_Push event group; sets SpeakCol to 0; sets SpeakID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); plus 5
//        more actions.
void Frames::event_func_1501()
{
    // event 2977_6 : activates the Chair_Push event group; sets SpeakCol to 0; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2977_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2977_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_chair_push_1230);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(22, 100);
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
    event_2977_6_end: ;
}
void Frames::loop_push_reaction_6()
{
    event_func_1500();
    event_func_1501();
}
// Function purpose: generated callback event_func_1502 processes event block(s) 2974_6. Actions/conditions:
//        2974_6: sets spaceX to ((Active*)get_single(qualifier_9, default_active_instance))->get_x(); sets spaceY to
//        ((Active*)get_single(qualifier_9, default_active_instance))->get_y().
void Frames::event_func_1502()
{
    // event 2974_6 : sets spaceX to ((Active*)get_single(qualifier_9, default_active_instance))->get_x(); sets spaceY to ((Active*)get_single(qualifier_9, default_active_instance))->get_y()
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2974_6_end;
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(414, str_gymid_1231)))) { it.deselect(); continue; }
        }
        if (!qualifier_9.has_selection()) goto event_2974_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(372, str_spacex_1168, ((Active*)get_single(qualifier_9, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(373, str_spacey_1169, ((Active*)get_single(qualifier_9, default_active_instance))->get_y());
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
    event_2974_6_end: ;
}
