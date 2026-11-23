#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_1503 processes event block(s) 2975_6. Actions/conditions:
//        2975_6: sets the selected object's horizontal position to gameVariables->get_value(370, foundX);
//        sets the selected object's vertical position to gameVariables->get_value(371, foundY); disables flag
//        31 (gym activity or movement phase) on the selected object; plus 5 more actions.
void Frames::event_func_1503()
{
    // event 2975_6 : sets the selected object's horizontal position to gameVariables->get_value(370, foundX); sets the selected object's vertical position to gameVariables->get_value(371, foundY); disables flag 31 (gym activity or movement phase) on the selected object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2975_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2975_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_2975_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(370, str_foundx_1166));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(371, str_foundy_1167));
            ((Active*)*it)->alterables->flags.disable(31);
            ((Active*)*it)->alterables->values.sub(12, 5);
        }
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        {
            loop_push_reaction_running = true;
            int times = int(1);
            loop_push_reaction_index = 0;
            while (loop_push_reaction_index < times) {
                loop_push_reaction_6();
                if (!loop_push_reaction_running) break;
                loop_push_reaction_index++;
            }
        }
    }
    event_2975_6_end: ;
}
// Function purpose: generated callback event_func_1504 processes event block(s) 3792_6. Actions/conditions:
//        3792_6: sets charID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(0); sets the object's animation to 0; sets the selected
//        object's vertical position to ((Active*)get_single(qualifier_9, it.current_index,
//        default_active_instance))->get_y()+16; plus 1 more actions.
void Frames::event_func_1504()
{
    // event 3792_6 : sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); sets the object's animation to 0; sets the selected object's vertical position to ((Active*)get_single(qualifier_9, it.current_index, default_active_instance))->get_y()+16; plus 1 more actions
    {
        if (!(group_code_1 && group_code_gym_equip_1)) goto event_3792_6_end;
        playerBase_instances.clear_selection();
        qualifier_9.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_9)) goto event_3792_6_end;
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_9.has_selection()) goto event_3792_6_end;
        inmateBase_instances.clear_selection();
        if (!check_overlap(playerBase_instances, inmateBase_instances)) goto event_3792_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_y(((Active*)get_single(qualifier_9, it.current_index, default_active_instance))->get_y()+16);
        }
        {
            loop_gym_push_reaction_running = true;
            int times = int(1);
            loop_gym_push_reaction_index = 0;
            while (loop_gym_push_reaction_index < times) {
                loop_gym_push_reaction_6();
                if (!loop_gym_push_reaction_running) break;
                loop_gym_push_reaction_index++;
            }
        }
        media.play_id(SOUND_EN_HIT_7, 1-1);
    }
    event_3792_6_end: ;
}
void Frames::loop_gym_push_off_6()
{
    event_func_1502();
    event_func_1503();
    event_func_1504();
}
// Function purpose: generated callback event_func_1505 processes event block(s) 4458_6. Actions/conditions:
//        4458_6: sets the selected object's numeric value to 30.
void Frames::event_func_1505()
{
    // event 4458_6 : sets the selected object's numeric value to 30
    {
        ((TextBlitter*)get_instance(cashText_instances))->alterables->values.set(0, 30);
    }
    event_4458_6_end: ;
}
// Function purpose: generated callback event_func_1506 processes event block(s) 4459_6. Group(s): hud_shakes.
//        Actions/conditions: 4459_6: sets the target animation type; updates game state with set_animation_speed(2).
void Frames::event_func_1506()
{
    // event 4459_6 : sets the target animation type; updates game state with set_animation_speed(2)
    {
        // group: hud_shakes
        if (!((((TextBlitter*)get_instance(cashText_instances))->anim_type) == (0))) goto event_4459_6_end;
        ((TextBlitter*)get_instance(cashText_instances))->set_animation_type(2);
        ((TextBlitter*)get_instance(cashText_instances))->set_animation_speed(2);
    }
    event_4459_6_end: ;
}
void Frames::loop_hudshake_cash_6()
{
    event_func_1505();
    event_func_1506();
}
// Function purpose: generated callback event_func_1507 processes event block(s) 3303_6. Actions/conditions:
//        3303_6: splits saved text into fields.
void Frames::event_func_1507()
{
    // event 3303_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3303_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(loop_check_beat_mission2_index+1), str__254);
    }
    event_3303_6_end: ;
}
// Function purpose: generated callback event_func_1508 processes event block(s) 3304_6. Actions/conditions:
//        3304_6: sets del_missions to gameVariables->get_string(142,
//        del_missions)+missions_298->get_line(loop_check_beat_mission2_index+1)+#; increments m_cash by
//        string_to_number(stringtokenizer_81->get(3)); increments m_done by 1; plus 22 more actions.
void Frames::event_func_1508()
{
    // event 3304_6 : sets del_missions to gameVariables->get_string(142, del_missions)+missions_298->get_line(loop_check_beat_mission2_index+1)+#; increments m_cash by string_to_number(stringtokenizer_81->get(3)); increments m_done by 1; plus 22 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3304_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_beat_1232))) goto event_3304_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233))))) goto event_3304_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3304_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708)+((ListObject*)get_instance(missions_298_instances))->get_line(loop_check_beat_mission2_index+1)+str__346);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(416, str_m_cash_1234, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(417, str_m_done_1235, 1);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 15);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_3304_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_3304_6_1: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
            ((Text*)*it)->set_string(str_you_have_completed_the_favour_for_1237+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)+str_and_earned_yourself_1238+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__918);
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
            ((Text*)*it)->set_string(str_favour_complete_1239);
        }
        FrameObject * single_instance_3304_6_3; single_instance_3304_6_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 43, parent->y + 20), parent->layer);
                if (single_instance_3304_6_3 == NULL)
                    single_instance_3304_6_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3304_6_3))->force_animation(28);
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
    event_3304_6_end: ;
}
void Frames::loop_check_beat_mission2_6()
{
    event_func_1507();
    event_func_1508();
}
// Function purpose: generated callback event_func_1509 processes event block(s) 4200_6. Actions/conditions:
//        4200_6: removes a line from the current list.
void Frames::event_func_1509()
{
    // event 4200_6 : removes a line from the current list
    {
        if (!(group_loops_1)) goto event_4200_6_end;
        if (!((((ListObject*)get_instance(missions_298_instances))->get_line(1)) == (((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_rem_missions_index)))) goto event_4200_6_end;
        ((ListObject*)get_instance(missions_298_instances))->delete_line(1);
    }
    event_4200_6_end: ;
}
// Function purpose: generated callback event_func_1510 processes event block(s) 4201_6. Actions/conditions:
//        4201_6: removes a line from the current list.
void Frames::event_func_1510()
{
    // event 4201_6 : removes a line from the current list
    {
        if (!(group_loops_1)) goto event_4201_6_end;
        if (!((((ListObject*)get_instance(missions_298_instances))->get_line(2)) == (((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_rem_missions_index)))) goto event_4201_6_end;
        ((ListObject*)get_instance(missions_298_instances))->delete_line(2);
    }
    event_4201_6_end: ;
}
// Function purpose: generated callback event_func_1511 processes event block(s) 4202_6. Actions/conditions:
//        4202_6: removes a line from the current list.
void Frames::event_func_1511()
{
    // event 4202_6 : removes a line from the current list
    {
        if (!(group_loops_1)) goto event_4202_6_end;
        if (!((((ListObject*)get_instance(missions_298_instances))->get_line(3)) == (((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_rem_missions_index)))) goto event_4202_6_end;
        ((ListObject*)get_instance(missions_298_instances))->delete_line(3);
    }
    event_4202_6_end: ;
}
// Function purpose: generated callback event_func_1512 processes event block(s) 4203_6. Actions/conditions:
//        4203_6: removes a line from the current list.
void Frames::event_func_1512()
{
    // event 4203_6 : removes a line from the current list
    {
        if (!(group_loops_1)) goto event_4203_6_end;
        if (!((((ListObject*)get_instance(missions_298_instances))->get_line(4)) == (((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_rem_missions_index)))) goto event_4203_6_end;
        ((ListObject*)get_instance(missions_298_instances))->delete_line(4);
    }
    event_4203_6_end: ;
}
// Function purpose: generated callback event_func_1513 processes event block(s) 4204_6. Actions/conditions:
//        4204_6: removes a line from the current list.
void Frames::event_func_1513()
{
    // event 4204_6 : removes a line from the current list
    {
        if (!(group_loops_1)) goto event_4204_6_end;
        if (!((((ListObject*)get_instance(missions_298_instances))->get_line(5)) == (((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_rem_missions_index)))) goto event_4204_6_end;
        ((ListObject*)get_instance(missions_298_instances))->delete_line(5);
    }
    event_4204_6_end: ;
}
void Frames::loop_rem_missions_6()
{
    event_func_1509();
    event_func_1510();
    event_func_1511();
    event_func_1512();
    event_func_1513();
}
// Function purpose: generated callback event_func_1514 processes event block(s) 3299_6. Actions/conditions:
//        3299_6: disables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object;
//        stops the object's movement; sets the selected object's numeric value to 0; plus 14 more actions.
void Frames::event_func_1514()
{
    // event 3299_6 : disables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object; stops the object's movement; sets the selected object's numeric value to 0; plus 14 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3299_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3299_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2001);
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(7, -100);
            ((Active*)*it)->alterables->values.set(18, -1);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(16, -500);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.sub(12, 50);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.disable(250);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(417, str_m_done_1235, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(416, str_m_cash_1234, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, empty_string);
        {
            loop_check_beat_mission2_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_check_beat_mission2_index = 0;
            while (loop_check_beat_mission2_index < times) {
                loop_check_beat_mission2_6();
                if (!loop_check_beat_mission2_running) break;
                loop_check_beat_mission2_index++;
            }
        }
    }
    event_3299_6_end: ;
}
// Function purpose: generated callback event_func_1515 processes event block(s) 3300_6. Actions/conditions:
//        3300_6: removes the selected object.
void Frames::event_func_1515()
{
    // event 3300_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3300_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (1))) goto event_3300_6_end;
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3300_6_end: ;
}
// Function purpose: generated callback event_func_1516 processes event block(s) 3301_6. Actions/conditions:
//        3301_6: creates a buttons 245 object; sets the object's animation to 28; adds a dialogue2 179 instance; plus
//        12 more actions.
void Frames::event_func_1516()
{
    // event 3301_6 : creates a buttons 245 object; sets the object's animation to 28; adds a dialogue2 179 instance; plus 12 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3301_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (1))) goto event_3301_6_end;
        FrameObject * single_instance_3301_6_0; single_instance_3301_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 43, parent->y + 20), parent->layer);
                if (single_instance_3301_6_0 == NULL)
                    single_instance_3301_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3301_6_0))->force_animation(28);
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_3301_6_2;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_3301_6_2: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
            ((Text*)*it)->set_string(str_you_completed_1240+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235))+str_favours_and_earned_yourself_1241+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(416, str_m_cash_1234))+str__918);
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
            ((Text*)*it)->set_string(str_favours_complete_1242);
        }
    }
    event_3301_6_end: ;
}
// Function purpose: generated callback event_func_1517 processes event block(s) 3302_6. Actions/conditions:
//        3302_6: sets m_done to 0; splits saved text into fields.
void Frames::event_func_1517()
{
    // event 3302_6 : sets m_done to 0; splits saved text into fields
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3302_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (0))) goto event_3302_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(417, str_m_done_1235, 0);
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708), str__346);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_rem_missions_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_rem_missions_index = 0;
            while (loop_rem_missions_index < times) {
                loop_rem_missions_6();
                if (!loop_rem_missions_running) break;
                loop_rem_missions_index++;
            }
        }
    }
    event_3302_6_end: ;
}
// Function purpose: generated callback event_func_1518 processes event block(s) 3305_6. Actions/conditions:
//        3305_6: sets the object's animation to 8; sets the selected object's direction to 0.
void Frames::event_func_1518()
{
    // event 3305_6 : sets the object's animation to 8; sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3305_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3305_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_3305_6_end: ;
}
// Function purpose: generated callback event_func_1519 processes event block(s) 3306_6. Actions/conditions:
//        3306_6: activates the Attacked event group; sets SpeakID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 1 more actions.
void Frames::event_func_1519()
{
    // event 3306_6 : activates the Attacked event group; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3306_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(415, str_currnpc_1233)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3306_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_attacked_1243);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
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
    event_3306_6_end: ;
}
void Frames::loop_drop_opponent_6()
{
    event_func_1514();
    event_func_1515();
    event_func_1516();
    event_func_1517();
    event_func_1518();
    event_func_1519();
}
// Function purpose: generated callback event_func_1520 processes event block(s) 1735_6. Actions/conditions:
//        1735_6: sets found_chair to 1; sets the selected object's numeric value to
//        ((Active*)get_single(inmateBase_instances, it.current_index,
//        default_active_instance))->alterables->values.get(0); sets the selected object's numeric value to
//        ((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_x()+8;
//        plus 1 more actions.
void Frames::event_func_1520()
{
    // event 1735_6 : sets found_chair to 1; sets the selected object's numeric value to ((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->values.get(0); sets the selected object's numeric value to ((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_x()+8; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1735_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(419, str_found_chair_1244)) == (0))) goto event_1735_6_end;
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_find_chair_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_1735_6_end;
        if (!check_not_overlap(canteenchair_312_instances, playerBase_instances)) goto event_1735_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1735_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(419, str_found_chair_1244, 1);
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_y()+8);
        }
            loop_find_chair_running = false;
    
    }
    event_1735_6_end: ;
}
void Frames::loop_find_chair_6()
{
    event_func_1520();
}
// Function purpose: generated callback event_func_1521 processes event block(s) 1734_6. Actions/conditions:
//        1734_6: changes a stored game value.
void Frames::event_func_1521()
{
    // event 1734_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1734_6_end;
        canteenserving_277_instances.clear_selection();
        FrameObject * single_instance_1734_6_0; single_instance_1734_6_0 = pick_random(canteenserving_277_instances);
        if (single_instance_1734_6_0 == NULL) goto event_1734_6_end;
        if (!((((Active*)single_instance_1734_6_0)->alterables->values.get(1)) > (0))) goto event_1734_6_end;
        ((Active*)((Active*)single_instance_1734_6_0))->alterables->values.sub(1, 1);
            loop_npc_foodget_running = false;
    
    }
    event_1734_6_end: ;
}
void Frames::loop_npc_foodget_6()
{
    event_func_1521();
}
// Function purpose: generated callback event_func_1522 processes event block(s) 1692_6. Actions/conditions:
//        1692_6: sets the selected object's numeric value to 0.
void Frames::event_func_1522()
{
    // event 1692_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1692_6_end;
        waypointinmaterollcall2_310_instances.clear_selection();
        for (ObjectIterator it(waypointinmaterollcall2_310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_rollcall_align_index+1))) { it.deselect(); continue; }
        }
        if (!waypointinmaterollcall2_310_instances.has_selection()) goto event_1692_6_end;
        for (ObjectIterator it(waypointinmaterollcall2_310_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1692_6_end: ;
}
// Function purpose: generated callback event_func_1523 processes event block(s) 1731_6. Actions/conditions:
//        1731_6: sets the selected object's numeric value to 0.
void Frames::event_func_1523()
{
    // event 1731_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1731_6_end;
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(420, str_inid_1245)))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_1731_6_end;
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1731_6_end: ;
}
// Function purpose: generated callback event_func_1524 processes event block(s) 1975_6. Actions/conditions:
//        1975_6: sets the selected object's numeric value to 0.
void Frames::event_func_1524()
{
    // event 1975_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1975_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        for (ObjectIterator it(waypointinmateshower2_309_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_shower_align_index+1))) { it.deselect(); continue; }
        }
        if (!waypointinmateshower2_309_instances.has_selection()) goto event_1975_6_end;
        for (ObjectIterator it(waypointinmateshower2_309_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1975_6_end: ;
}
// Function purpose: generated callback event_func_1525 processes event block(s) 2013_6. Actions/conditions:
//        2013_6: sets the selected object's numeric value to 0.
void Frames::event_func_1525()
{
    // event 2013_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2013_6_end;
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (loop_using_gym_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_9.has_selection()) goto event_2013_6_end;
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_2013_6_end: ;
}
void Frames::loop_unmount_npc_6()
{
    event_func_1522();
    event_func_1523();
    event_func_1524();
    event_func_1525();
}
// Function purpose: generated callback event_func_1526 processes event block(s) 1729_6. Actions/conditions:
//        1729_6: saves the current object selection; disables flag 23 (NPC schedule or activity state) on the
//        selected object; disables flag 24 (NPC schedule or activity state) on the selected object; plus 1 more
//        actions.
void Frames::event_func_1526()
{
    // event 1729_6 : saves the current object selection; disables flag 23 (NPC schedule or activity state) on the selected object; disables flag 24 (NPC schedule or activity state) on the selected object; plus 1 more actions
    bool or_result_1729_6 = false;
    bool or_temp_result_1729_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto or_event_1729_6_0_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sitting_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1729_6_0_end;
        or_result_1729_6 = true;
        or_temp_result_1729_6_0 = true;
    }
    or_event_1729_6_0_end: ;
    inmateBase_instances.clear_saved_selection();
    if (or_temp_result_1729_6_0) {
        inmateBase_instances.save_selection();
    }
    // event 1729_6 : saves the current object selection; disables flag 23 (NPC schedule or activity state) on the selected object; disables flag 24 (NPC schedule or activity state) on the selected object; plus 1 more actions
    bool or_temp_result_1729_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto or_event_1729_6_1_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sitting_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1729_6_1_end;
        or_result_1729_6 = true;
        or_temp_result_1729_6_1 = true;
    }
    or_event_1729_6_1_end: ;
    if (or_temp_result_1729_6_1) {
        inmateBase_instances.save_selection();
    }
    // event 1729_6 : saves the current object selection; disables flag 23 (NPC schedule or activity state) on the selected object; disables flag 24 (NPC schedule or activity state) on the selected object; plus 1 more actions
    bool or_temp_result_1729_6_2 = false;
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto or_event_1729_6_2_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sitting_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1729_6_2_end;
        or_result_1729_6 = true;
        or_temp_result_1729_6_2 = true;
        or_event_1729_6_2_end: ;
        if (or_temp_result_1729_6_2) {
            inmateBase_instances.save_selection();
        }
        if (!or_result_1729_6) goto or_final_or_event_1729_6_2_end;
        inmateBase_instances.empty_selection();
        if (or_temp_result_1729_6_0 || or_temp_result_1729_6_1 || or_temp_result_1729_6_2) {
            inmateBase_instances.restore_selection();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(23);
            ((Active*)*it)->alterables->flags.disable(24);
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(420, str_inid_1245, ((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        {
            loop_unmount_npc_running = true;
            int times = int(1);
            loop_unmount_npc_index = 0;
            while (loop_unmount_npc_index < times) {
                loop_unmount_npc_6();
                if (!loop_unmount_npc_running) break;
                loop_unmount_npc_index++;
            }
        }
    }
    or_final_or_event_1729_6_2_end: ;
}
// Function purpose: generated callback event_func_1527 processes event block(s) 1730_6. Actions/conditions:
//        1730_6: disables flag 23 (NPC schedule or activity state) on the selected object; disables flag 24 (NPC
//        schedule or activity state) on the selected object; sets InID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0).
void Frames::event_func_1527()
{
    // event 1730_6 : disables flag 23 (NPC schedule or activity state) on the selected object; disables flag 24 (NPC schedule or activity state) on the selected object; sets InID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1730_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sitting_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1730_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(23);
            ((Active*)*it)->alterables->flags.disable(24);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(420, str_inid_1245, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_unmount_npc_running = true;
            int times = int(1);
            loop_unmount_npc_index = 0;
            while (loop_unmount_npc_index < times) {
                loop_unmount_npc_6();
                if (!loop_unmount_npc_running) break;
                loop_unmount_npc_index++;
            }
        }
    }
    event_1730_6_end: ;
}
// Function purpose: generated callback event_func_1528 processes event block(s) 1732_6. Actions/conditions:
//        1732_6: sets the selected object's numeric value to
//        ((Active*)get_instance(waypointcanteenguard3_221_instances, it.current_index,
//        default_active_instance))->get_x()+randrange_event(48); sets the selected object's numeric value to
//        ((Active*)get_instance(waypointcanteenguard3_221_instances, it.current_index,
//        default_active_instance))->get_y()+8.
void Frames::event_func_1528()
{
    // event 1732_6 : sets the selected object's numeric value to ((Active*)get_instance(waypointcanteenguard3_221_instances, it.current_index, default_active_instance))->get_x()+randrange_event(48); sets the selected object's numeric value to ((Active*)get_instance(waypointcanteenguard3_221_instances, it.current_index, default_active_instance))->get_y()+8
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1732_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sitting_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(24))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(23))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1732_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(waypointcanteenguard3_221_instances, it.current_index, default_active_instance))->get_x()+randrange_event(48));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(waypointcanteenguard3_221_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_1732_6_end: ;
}
// Function purpose: generated callback event_func_1529 processes event block(s) 1733_6. Actions/conditions:
//        1733_6: sets the object's animation to 11; sets found_chair to 0; sets charID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); plus 1
//        more actions.
void Frames::event_func_1529()
{
    // event 1733_6 : sets the object's animation to 11; sets found_chair to 0; sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1733_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sitting_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1733_6_end;
        waypointcanteenguard3_221_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, waypointcanteenguard3_221_instances)) goto event_1733_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(23))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(24))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1733_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1733_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(419, str_found_chair_1244, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(23);
        }
        {
            loop_npc_foodget_running = true;
            int times = int(canteenserving_277_instances.size());
            loop_npc_foodget_index = 0;
            while (loop_npc_foodget_index < times) {
                loop_npc_foodget_6();
                if (!loop_npc_foodget_running) break;
                loop_npc_foodget_index++;
            }
        }
        {
            loop_find_chair_running = true;
            int times = int(canteenchair_312_instances.size());
            loop_find_chair_index = 0;
            while (loop_find_chair_index < times) {
                loop_find_chair_6();
                if (!loop_find_chair_running) break;
                loop_find_chair_index++;
            }
        }
    }
    event_1733_6_end: ;
}
// Function purpose: generated callback event_func_1530 processes event block(s) 1736_6. Actions/conditions:
//        1736_6: moves the selected object behind other objects; sets the selected object's direction to
//        ((Active*)get_single(canteenchair_312_instances, it.current_index,
//        default_active_instance))->get_direction(); sets the selected object's horizontal position to
//        ((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_x()+8;
//        plus 6 more actions.
void Frames::event_func_1530()
{
    // event 1736_6 : moves the selected object behind other objects; sets the selected object's direction to ((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_direction(); sets the selected object's horizontal position to ((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_x()+8; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1736_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sitting_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1736_6_end;
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, canteenchair_312_instances)) goto event_1736_6_end;
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_1736_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(23))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(24))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1736_6_end;
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_x(((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->set_y(((Active*)get_single(canteenchair_312_instances, it.current_index, default_active_instance))->get_y()+8);
            ((Active*)*it)->alterables->flags.disable(23);
            ((Active*)*it)->alterables->flags.enable(24);
        }
    }
    event_1736_6_end: ;
}
// Function purpose: generated callback event_func_1531 processes event block(s) 1737_6. Actions/conditions:
//        1737_6: disables flag 23 (NPC schedule or activity state) on the selected object; enables flag 24 (NPC
//        schedule or activity state) on the selected object.
void Frames::event_func_1531()
{
    // event 1737_6 : disables flag 23 (NPC schedule or activity state) on the selected object; enables flag 24 (NPC schedule or activity state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_food_1)) goto event_1737_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sitting_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1737_6_end;
        canteenchair_312_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, canteenchair_312_instances)) goto event_1737_6_end;
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_1737_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(24))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1737_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(23);
            ((Active*)*it)->alterables->flags.enable(24);
        }
    }
    event_1737_6_end: ;
}
void Frames::loop_sitting_6()
{
    event_func_1526();
    event_func_1527();
    event_func_1528();
    event_func_1529();
    event_func_1530();
    event_func_1531();
}
// Function purpose: generated callback event_func_1532 processes event block(s) 4335_6. Actions/conditions:
//        4335_6: sets the object's animation to 29; sets the selected object's direction to 0; sets the selected
//        object's visibility to true; plus 11 more actions.
void Frames::event_func_1532()
{
    // event 4335_6 : sets the object's animation to 29; sets the selected object's direction to 0; sets the selected object's visibility to true; plus 11 more actions
    {
        if (!(group_loops_1)) goto event_4335_6_end;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        FrameObject * single_instance_4335_6_0; single_instance_4335_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -108, parent->y + -62), parent->layer);
                if (single_instance_4335_6_0 == NULL)
                    single_instance_4335_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_4335_6_0))->blend_color.set(Color(0, 61, 128));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_18_332));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__624));
        ((Text*)((Text*)single_instance_4335_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(17, str_job_478, empty_string);
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
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(363, str_score_n_1157, 15);
    }
    event_4335_6_end: ;
}
void Frames::loop_open_lostjob_box_6()
{
    event_func_1532();
}
// Function purpose: generated callback event_func_1533 processes event block(s) 2467_6. Actions/conditions:
//        2467_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1533()
{
    // event 2467_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2467_6_end;
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
    event_2467_6_end: ;
}
// Function purpose: generated callback event_func_1534 processes event block(s) 2468_6. Actions/conditions:
//        2468_6: sets the object position in the world; sets the selected object's scale to 1; sets the selected
//        object's numeric value to ((Active*)get_single(itemSlot_instances, it.current_index,
//        default_active_instance))->alterables->values.get(0); plus 6 more actions.
void Frames::event_func_1534()
{
    // event 2468_6 : sets the object position in the world; sets the selected object's scale to 1; sets the selected object's numeric value to ((Active*)get_single(itemSlot_instances, it.current_index, default_active_instance))->alterables->values.get(0); plus 6 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2468_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)) != (-1))) goto event_2468_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (loop_craft2inv_index+1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2468_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2468_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_2468_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2468_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(itemSlot_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
    }
    event_2468_6_end: ;
}
void Frames::loop_craft2inv_6()
{
    event_func_1533();
    event_func_1534();
}
// Function purpose: generated callback event_func_1535 processes event block(s) 2466_6. Actions/conditions:
//        2466_6: sets the object position in the world; sets the selected object's scale to 1; sets the selected
//        object's numeric value to ((Active*)get_single(itemSlot_instances, it.current_index,
//        default_active_instance))->alterables->values.get(0); plus 6 more actions.
void Frames::event_func_1535()
{
    // event 2466_6 : sets the object position in the world; sets the selected object's scale to 1; sets the selected object's numeric value to ((Active*)get_single(itemSlot_instances, it.current_index, default_active_instance))->alterables->values.get(0); plus 6 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2466_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)) != (-1))) goto event_2466_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2466_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2466_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_2466_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2466_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(itemSlot_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
    }
    event_2466_6_end: ;
}
void Frames::loop_craftoutput2inv_6()
{
    event_func_1533();
    event_func_1535();
}
// Function purpose: generated callback event_func_1536 processes event block(s) 2462_6. Actions/conditions:
//        2462_6: removes the selected object.
void Frames::event_func_1536()
{
    // event 2462_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2462_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        {
            loop_craft2inv_running = true;
            int times = int(3);
            loop_craft2inv_index = 0;
            while (loop_craft2inv_index < times) {
                loop_craft2inv_6();
                if (!loop_craft2inv_running) break;
                loop_craft2inv_index++;
            }
        }
        {
            loop_craftoutput2inv_running = true;
            int times = int(1);
            loop_craftoutput2inv_index = 0;
            while (loop_craftoutput2inv_index < times) {
                loop_craftoutput2inv_6();
                if (!loop_craftoutput2inv_running) break;
                loop_craftoutput2inv_index++;
            }
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2462_6_end: ;
}
// Function purpose: generated callback event_func_1537 processes event block(s) 2463_6. Actions/conditions:
//        2463_6: removes the selected object.
void Frames::event_func_1537()
{
    // event 2463_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2463_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2463_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2463_6_end: ;
}
// Function purpose: generated callback event_func_1538 processes event block(s) 2464_6. Actions/conditions:
//        2464_6: removes the selected object.
void Frames::event_func_1538()
{
    // event 2464_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2464_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2464_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2464_6_end: ;
}
void Frames::loop_close_craft_6()
{
    event_func_1536();
    event_func_1537();
    event_func_1538();
}
// Function purpose: generated callback event_func_1539 processes event block(s) 507_6. Actions/conditions:
//        507_6: sets a game or interface text string.
void Frames::event_func_1539()
{
    // event 507_6 : sets a game or interface text string
    {
        if (!(group_setup_1)) goto event_507_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(loop_load_saved_desks_index)+str_slot_617+number_to_string(loop_load_saved_desks2_index+1), ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_load_saved_desks2_index));
    }
    event_507_6_end: ;
}
void Frames::loop_load_saved_desks2_6()
{
    event_func_1539();
}
// Function purpose: generated callback event_func_1540 processes event block(s) 506_6. Actions/conditions:
//        506_6: splits saved text into fields; sets the selected object's horizontal position to
//        string_to_number(stringtokenizer2_292->get(0)); sets the selected object's vertical position to
//        string_to_number(stringtokenizer2_292->get(1)); plus 5 more actions.
void Frames::event_func_1540()
{
    // event 506_6 : splits saved text into fields; sets the selected object's horizontal position to string_to_number(stringtokenizer2_292->get(0)); sets the selected object's vertical position to string_to_number(stringtokenizer2_292->get(1)); plus 5 more actions
    {
        if (!(group_setup_1)) goto event_506_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_load_saved_desks_index))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_506_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_desks_1246, number_to_string(loop_load_saved_desks_index), empty_string), str__254);
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
            ((Active*)*it)->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1)));
            ((Active*)*it)->set_direction(string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(2)));
        }
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(3), str__1247);
        {
            loop_load_saved_desks2_running = true;
            int times = int(20);
            loop_load_saved_desks2_index = 0;
            while (loop_load_saved_desks2_index < times) {
                loop_load_saved_desks2_6();
                if (!loop_load_saved_desks2_running) break;
                loop_load_saved_desks2_index++;
            }
        }
    }
    event_506_6_end: ;
}
void Frames::loop_load_saved_desks_6()
{
    event_func_1540();
}
// Function purpose: generated callback event_func_1541 processes event block(s) 1073_6. Actions/conditions:
//        1073_6: activates the OnDesk event group; sets TellOff to 1; increments Heat by
//        5*gameVariables->get_value(83, NPClvl); plus 9 more actions.
void Frames::event_func_1541()
{
    // event 1073_6 : activates the OnDesk event group; sets TellOff to 1; increments Heat by 5*gameVariables->get_value(83, NPClvl); plus 9 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1073_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1073_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1073_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_ondesk_1248);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(1+randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885)))));
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
    event_1073_6_end: ;
}
void Frames::loop_policing_desk_6()
{
    event_func_1541();
    event_func_1320();
}
// Function purpose: generated callback event_func_1542 processes event block(s) 2146_6. Actions/conditions:
//        2146_6: stops the MoveIt movement; updates game state with for (QualifierIterator it(qualifier_14);
//        !it.end(); ++it) {; sets the selected object's horizontal position to ((selected
//        object->get_x()/MathHelper()/16)*16)+8; plus 20 more actions.
void Frames::event_func_1542()
{
    // event 2146_6 : stops the MoveIt movement; updates game state with for (QualifierIterator it(qualifier_14); !it.end(); ++it) {; sets the selected object's horizontal position to ((selected object->get_x()/MathHelper()/16)*16)+8; plus 20 more actions
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2146_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(410, str_npcz_1226)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_2146_6_end;
    MoveIt::stop(qualifier_14);    for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((((Active*)*it)->get_x()/MathHelper()/16)*16)+8);
            ((Active*)*it)->set_y(((((Active*)*it)->get_y()/MathHelper()/16)*16)+8);
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(16, -800);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.disable(60);
            ((Active*)*it)->alterables->flags.disable(25);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
            ((Active*)*it)->set_direction(0);
        }
        FrameObject * single_instance_2146_6_0; single_instance_2146_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + -8, parent->y + 8), parent->layer);
                if (single_instance_2146_6_0 == NULL)
                    single_instance_2146_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2146_6_0))->set_layer(2-1);
        FrameObject * single_instance_2146_6_1; single_instance_2146_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_2146_6_1 == NULL)
                    single_instance_2146_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2146_6_1))->set_layer(2-1);
        media.play_id(SOUND_HIT_2, 1-1);
    }
    event_2146_6_end: ;
}
// Function purpose: generated callback event_func_1543 processes event block(s) 2147_6. Actions/conditions:
//        2147_6: sets the object's animation to 8; sets the selected object's direction to 0.
void Frames::event_func_1543()
{
    // event 2147_6 : sets the object's animation to 8; sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2147_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(410, str_npcz_1226)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_2147_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2147_6_end: ;
}
void Frames::loop_jeep_ko_npc_go_6()
{
    event_func_1542();
    event_func_1543();
}
// Function purpose: generated callback event_func_1544 processes event block(s) 2145_6. Actions/conditions:
//        2145_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_1544()
{
    // event 2145_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_misc_jeep_1)) goto event_2145_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(410, str_npcz_1226)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_2145_6_end;
        {
            loop_jeep_ko_npc_go_running = true;
            int times = int(1);
            loop_jeep_ko_npc_go_index = 0;
            while (loop_jeep_ko_npc_go_index < times) {
                loop_jeep_ko_npc_go_6();
                if (!loop_jeep_ko_npc_go_running) break;
                loop_jeep_ko_npc_go_index++;
            }
        }
    }
    event_2145_6_end: ;
}
void Frames::loop_jeep_ko_npc_6()
{
    event_func_1544();
}
// Function purpose: generated callback event_func_1545 processes event block(s) 4250_6. Actions/conditions:
//        4250_6: sets the selected object's numeric value to 0; sets a game or interface text string.
void Frames::event_func_1545()
{
    // event 4250_6 : sets the selected object's numeric value to 0; sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4250_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_4250_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)), empty_string);
    }
    event_4250_6_end: ;
}
// Function purpose: generated callback event_func_1546 processes event block(s) 4251_6. Actions/conditions:
//        4251_6: removes the selected object.
void Frames::event_func_1546()
{
    // event 4251_6 : removes the selected object
    {
        if (!(group_loops_1)) goto event_4251_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4251_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4251_6_end: ;
}
// Function purpose: generated callback event_func_1547 processes event block(s) 4252_6. Actions/conditions:
//        4252_6: sets SelectedSlot to 0; sets SelectedItem to -1.
void Frames::event_func_1547()
{
    // event 4252_6 : sets SelectedSlot to 0; sets SelectedItem to -1
    {
        if (!(group_loops_1)) goto event_4252_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(46, str_selectedslot_514, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(47, str_selecteditem_515, -1);
    }
    event_4252_6_end: ;
}
void Frames::loop_removeitem_6()
{
    event_func_1545();
    event_func_1546();
    event_func_1547();
}
// Function purpose: generated callback event_func_1548 processes event block(s) 2803_6. Actions/conditions:
//        2803_6: sets deskName to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->strings.get(0).
void Frames::event_func_1548()
{
    // event 2803_6 : sets deskName to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)
    {
        if (!(group_code_1)) goto event_2803_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(421, str_deskid_1249)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2803_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(422, str_deskname_1250, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0));
    }
    event_2803_6_end: ;
}
// Function purpose: generated callback event_func_1549 processes event block(s) 2804_6. Actions/conditions:
//        2804_6: sets toName to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->strings.get(1).
void Frames::event_func_1549()
{
    // event 2804_6 : sets toName to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1)
    {
        if (!(group_code_1)) goto event_2804_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2804_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(423, str_toname_1251, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->strings.get(1));
    }
    event_2804_6_end: ;
}
// Function purpose: generated callback event_func_1550 processes event block(s) 2805_6. Actions/conditions:
//        2805_6: plays a sound or music track.
void Frames::event_func_1550()
{
    // event 2805_6 : plays a sound or music track
    {
        if (!(group_code_1)) goto event_2805_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(423, str_toname_1251)) != (((AssociateArray*)get_instance(gameVariables_instances))->get_string(422, str_deskname_1250)))) goto event_2805_6_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_2805_6_end: ;
}
// Function purpose: generated callback event_func_1551 processes event block(s) 2806_6. Actions/conditions:
//        2806_6: increments JobQuota by 8; plays a sound or music track.
void Frames::event_func_1551()
{
    // event 2806_6 : increments JobQuota by 8; plays a sound or music track
    {
        if (!(group_code_1)) goto event_2806_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(423, str_toname_1251)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(422, str_deskname_1250)))) goto event_2806_6_end;
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
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 8);
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_2806_6_end: ;
}
void Frames::loop_post_book_check_6()
{
    event_func_1548();
    event_func_1549();
    event_func_1550();
    event_func_1551();
}
// Function purpose: generated callback event_func_1552 processes event block(s) 1550_6. Actions/conditions:
//        1550_6: increments Heat by 35*gameVariables->get_value(83, NPClvl); increments Score_N by 10.
void Frames::event_func_1552()
{
    // event 1550_6 : increments Heat by 35*gameVariables->get_value(83, NPClvl); increments Score_N by 10
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1550_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(327, str_attendlesson_1115)) == (0))) goto event_1550_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 35*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587));
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(363, str_score_n_1157, 10);
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
    event_1550_6_end: ;
}
void Frames::loop_skipped_lesson_6()
{
    event_func_1552();
}
// Function purpose: generated callback event_func_1553 processes event block(s) 2129_6. Actions/conditions:
//        2129_6: creates a icons 433 object; sets the target object's direction; moves the target object to a layer;
//        plus 1 more actions.
void Frames::event_func_1553()
{
    // event 2129_6 : creates a icons 433 object; sets the target object's direction; moves the target object to a layer; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2129_6_end;
        FrameObject * single_instance_2129_6_0; single_instance_2129_6_0 = NULL;
        // select single: true false false
        qualifier_2.clear_selection();
        for (QualifierIterator p_it(qualifier_2); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_icons_433(parent->x + 0, parent->y + -10), parent->layer);
                if (single_instance_2129_6_0 == NULL)
                    single_instance_2129_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2129_6_0))->set_direction(20);
        ((Active*)((Active*)single_instance_2129_6_0))->set_layer(6-1);
        ((Active*)((Active*)single_instance_2129_6_0))->alterables->values.set(25, -1);
    }
    event_2129_6_end: ;
}
void Frames::loop_icon_str_6()
{
    event_func_1553();
}
// Function purpose: generated callback event_func_1554 processes event block(s) 3755_6. Actions/conditions:
//        3755_6: changes a stored game value.
void Frames::event_func_1554()
{
    // event 3755_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_press_ups_1)) goto event_3755_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(424, str_press_reps_1252)) > (0))) goto event_3755_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(424, str_press_reps_1252)%MathHelper()%2) == (0))) goto event_3755_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(8)) < (100))) goto event_3755_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(8, 1);
        {
            loop_icon_str_running = true;
            int times = int(1);
            loop_icon_str_index = 0;
            while (loop_icon_str_index < times) {
                loop_icon_str_6();
                if (!loop_icon_str_running) break;
                loop_icon_str_index++;
            }
        }
    }
    event_3755_6_end: ;
}
void Frames::loop_press_check_str_6()
{
    event_func_1554();
}
// Function purpose: generated callback event_func_1555 processes event block(s) 4427_6. Actions/conditions:
//        4427_6: sets a stored numeric value.
void Frames::event_func_1555()
{
    // event 4427_6 : sets a stored numeric value
    {
        if (!(group_saving_1)) goto event_4427_6_end;
        ((INI*)get_instance(globals_127_instances))->set_value_int(str_craftnotes_665, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_save_craftnotes_go_index), 1);
    }
    event_4427_6_end: ;
}
void Frames::loop_save_craftnotes_go_6()
{
    event_func_1555();
}
// Function purpose: generated callback event_func_1556 processes event block(s) 4425_6. Actions/conditions:
//        4425_6: splits saved text into fields.
void Frames::event_func_1556()
{
    // event 4425_6 : splits saved text into fields
    {
        if (!(group_saving_1)) goto event_4425_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(108, str_craftnotes_665), str__254);
    }
    event_4425_6_end: ;
}
// Function purpose: generated callback event_func_1557 processes event block(s) 4426_6. Actions/conditions:
//        4426_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_1557()
{
    // event 4426_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_saving_1)) goto event_4426_6_end;
        {
            loop_save_craftnotes_go_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count());
            loop_save_craftnotes_go_index = 0;
            while (loop_save_craftnotes_go_index < times) {
                loop_save_craftnotes_go_6();
                if (!loop_save_craftnotes_go_running) break;
                loop_save_craftnotes_go_index++;
            }
        }
    }
    event_4426_6_end: ;
}
void Frames::loop_save_craftnotes_6()
{
    event_func_1556();
    event_func_1557();
}
// Function purpose: generated callback event_func_1558 processes event block(s) 4194_6. Actions/conditions:
//        4194_6: sets merchant_pool to
//        8_3_9_10_12_13_14_15_16_24_25_29_34_36_44_46_51_52_60_62_68_76_94_98_100_123_131_179.
void Frames::event_func_1558()
{
    // event 4194_6 : sets merchant_pool to 8_3_9_10_12_13_14_15_16_24_25_29_34_36_44_46_51_52_60_62_68_76_94_98_100_123_131_179
    {
        if (!(group_loops_1)) goto event_4194_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(425, str_merchant_pool_1253, str_8_3_9_10_12_13_14_15_16_24_25_29_34_36_44_46_51_52_60_62_68_76_94_98_100_123_131_179_1254);
    }
    event_4194_6_end: ;
}
// Function purpose: generated callback event_func_1559 processes event block(s) 4195_6. Actions/conditions:
//        4195_6: sets merchant_pool to gameVariables->get_string(425, merchant_pool)+_150_154_155.
void Frames::event_func_1559()
{
    // event 4195_6 : sets merchant_pool to gameVariables->get_string(425, merchant_pool)+_150_154_155
    {
        if (!(group_loops_1)) goto event_4195_6_end;
        if (!((global_strings->get(0)) == (str_jungle_146))) goto event_4195_6_end;
        if (!((global_values->get(18)) == (0))) goto event_4195_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(425, str_merchant_pool_1253, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(425, str_merchant_pool_1253)+str_150_154_155_1255);
    }
    event_4195_6_end: ;
}
// Function purpose: generated callback event_func_1560 processes event block(s) 4196_6. Actions/conditions:
//        4196_6: sets merchant_pool to gameVariables->get_string(425, merchant_pool)+_56.
void Frames::event_func_1560()
{
    // event 4196_6 : sets merchant_pool to gameVariables->get_string(425, merchant_pool)+_56
    {
        if (!(group_loops_1)) goto event_4196_6_end;
        if (!((global_strings->get(0)) == (str_irongate_148))) goto event_4196_6_end;
        if (!((global_values->get(18)) == (0))) goto event_4196_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(425, str_merchant_pool_1253, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(425, str_merchant_pool_1253)+str_56_1256);
    }
    event_4196_6_end: ;
}
// Function purpose: generated callback event_func_1561 processes event block(s) 4197_6. Actions/conditions:
//        4197_6: sets merchant_pool to StringReplace::replace(gameVariables->get_string(425, merchant_pool),
//        _3_, _211_).
void Frames::event_func_1561()
{
    // event 4197_6 : sets merchant_pool to StringReplace::replace(gameVariables->get_string(425, merchant_pool), _3_, _211_)
    {
        if (!(group_loops_1)) goto event_4197_6_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_4197_6_end;
        if (!((global_values->get(18)) == (1))) goto event_4197_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(425, str_merchant_pool_1253, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(425, str_merchant_pool_1253), str_3_1257, str_211_1258));
    }
    event_4197_6_end: ;
}
// Function purpose: generated callback event_func_1562 processes event block(s) 4198_6. Actions/conditions:
//        4198_6: splits saved text into fields; sets a game or interface text string.
void Frames::event_func_1562()
{
    // event 4198_6 : splits saved text into fields; sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4198_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(425, str_merchant_pool_1253), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_v_530+number_to_string(loop_vendor_index+1), ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count()))+str_100_531);
    }
    event_4198_6_end: ;
}
void Frames::loop_vending_item_new_6()
{
    event_func_1558();
    event_func_1559();
    event_func_1560();
    event_func_1561();
    event_func_1562();
}
// Function purpose: generated callback event_func_1563 processes event block(s) 4188_6. Actions/conditions:
//        4188_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_1563()
{
    // event 4188_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_loops_1)) goto event_4188_6_end;
        {
            loop_vending_item_new_running = true;
            int times = int(1);
            loop_vending_item_new_index = 0;
            while (loop_vending_item_new_index < times) {
                loop_vending_item_new_6();
                if (!loop_vending_item_new_running) break;
                loop_vending_item_new_index++;
            }
        }
    }
    event_4188_6_end: ;
}
void Frames::loop_vendor_6()
{
    event_func_1563();
}
// Function purpose: generated callback event_func_1564 processes event block(s) 4186_6. Actions/conditions:
//        4186_6: sets vID to ((Active*)single_instance_4186_6_0)->alterables->values.get(0).
void Frames::event_func_1564()
{
    // event 4186_6 : sets vID to ((Active*)single_instance_4186_6_0)->alterables->values.get(0)
    {
        if (!(group_loops_1)) goto event_4186_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_4186_6_0; single_instance_4186_6_0 = pick_random(inmateBase_instances);
        if (single_instance_4186_6_0 == NULL) goto event_4186_6_end;
        if (!((((Active*)single_instance_4186_6_0)->alterables->strings.get(1)) == (str_0_0_0_0_734))) goto event_4186_6_end;
        if (!((((Active*)single_instance_4186_6_0)->alterables->strings.get(2)) == (empty_string))) goto event_4186_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(426, str_vid_1259, ((Active*)single_instance_4186_6_0)->alterables->values.get(0));
    }
    event_4186_6_end: ;
}
// Function purpose: generated callback event_func_1565 processes event block(s) 4187_6. Actions/conditions:
//        4187_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_1565()
{
    // event 4187_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_loops_1)) goto event_4187_6_end;
        {
            loop_vendor_running = true;
            int times = int(4);
            loop_vendor_index = 0;
            while (loop_vendor_index < times) {
                loop_vendor_6();
                if (!loop_vendor_running) break;
                loop_vendor_index++;
            }
        }
    }
    event_4187_6_end: ;
}
// Function purpose: generated callback event_func_1566 processes event block(s) 4193_6. Actions/conditions:
//        4193_6: updates a value on the target object; adds a markervendor 332 instance; sets the selected object's
//        numeric value to ((Active*)get_single(inmateBase_instances, it.current_index,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_1566()
{
    // event 4193_6 : updates a value on the target object; adds a markervendor 332 instance; sets the selected object's numeric value to ((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_loops_1)) goto event_4193_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(426, str_vid_1259)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4193_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(427, str_v1_1260)+str__1130+((AssociateArray*)get_instance(gameVariables_instances))->get_string(428, str_v2_1261)+str__1130+((AssociateArray*)get_instance(gameVariables_instances))->get_string(429, str_v3_1262)+str__1130+((AssociateArray*)get_instance(gameVariables_instances))->get_string(430, str_v4_1263));
        }
        markervendor_332_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_markervendor_332(0, 0), 1);
            markervendor_332_instances.add_back();
        }
        for (ObjectIterator it(markervendor_332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
    }
    event_4193_6_end: ;
}
void Frames::loop_create_vendors_6()
{
    event_func_1564();
    event_func_1565();
    event_func_1566();
}
// Function purpose: generated callback event_func_1567 processes event block(s) 1274_6. Actions/conditions:
//        1274_6: removes the selected object.
void Frames::event_func_1567()
{
    // event 1274_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_1274_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (1))) goto event_1274_6_end;
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
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
    event_1274_6_end: ;
}
// Function purpose: generated callback event_func_1568 processes event block(s) 1275_6. Actions/conditions:
//        1275_6: creates a buttons 245 object; sets the object's animation to 28; creates a buttontext 445 object;
//        plus 15 more actions.
void Frames::event_func_1568()
{
    // event 1275_6 : creates a buttons 245 object; sets the object's animation to 28; creates a buttontext 445 object; plus 15 more actions
    {
        if (!(group_code_1)) goto event_1275_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (1))) goto event_1275_6_end;
        FrameObject * single_instance_1275_6_0; single_instance_1275_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 28, parent->y + 20), parent->layer);
                if (single_instance_1275_6_0 == NULL)
                    single_instance_1275_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1275_6_0))->force_animation(28);
        FrameObject * single_instance_1275_6_1; single_instance_1275_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_1275_6_0)->x + 3, ((Active*)single_instance_1275_6_0)->y + 3), ((Active*)single_instance_1275_6_0)->layer);
            if (single_instance_1275_6_1 == NULL)
                single_instance_1275_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_1275_6_1))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_1275_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_4_161)));
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_1275_6_3;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_1275_6_3: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
            ((Text*)*it)->set_string(str_you_completed_1240+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235))+str_favours_and_earned_yourself_1241+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(416, str_m_cash_1234))+str__918);
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
    }
    event_1275_6_end: ;
}
// Function purpose: generated callback event_func_1569 processes event block(s) 1276_6. Actions/conditions:
//        1276_6: sets m_done to 0; splits saved text into fields.
void Frames::event_func_1569()
{
    // event 1276_6 : sets m_done to 0; splits saved text into fields
    {
        if (!(group_code_1)) goto event_1276_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(417, str_m_done_1235)) > (0))) goto event_1276_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(417, str_m_done_1235, 0);
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708), str__346);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_rem_missions_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_rem_missions_index = 0;
            while (loop_rem_missions_index < times) {
                loop_rem_missions_6();
                if (!loop_rem_missions_running) break;
                loop_rem_missions_index++;
            }
        }
    }
    event_1276_6_end: ;
}
void Frames::loop_beat_mission_del_6()
{
    event_func_1567();
    event_func_1568();
    event_func_1569();
}
// Function purpose: generated callback event_func_1570 processes event block(s) 4229_6. Actions/conditions:
//        4229_6: splits saved text into fields.
void Frames::event_func_1570()
{
    // event 4229_6 : splits saved text into fields
    {
        if (!(group_loops_1)) goto event_4229_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4229_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)) == (str_stealchar_1264))) goto event_4229_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(str_8_9_10_15_16_46_2_47_49_50_54_60_62_99_106_259_259_259_259_259_1265, str__96);
    }
    event_4229_6_end: ;
}
// Function purpose: generated callback event_func_1571 processes event block(s) 4230_6. Actions/conditions:
//        4230_6: splits saved text into fields.
void Frames::event_func_1571()
{
    // event 4230_6 : splits saved text into fields
    {
        if (!(group_loops_1)) goto event_4230_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4230_6_end;
        if (!((global_strings->get(0)) == (str_perks_143))) goto event_4230_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)) == (str_stealchar_1264))) goto event_4230_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(str_145_146_147_148_149_156_157_158_159_160_162_163_9_10_15_16_17_46_49_50_95_99_259_259_259_259_259_259_1266, str__96);
    }
    event_4230_6_end: ;
}
// Function purpose: generated callback event_func_1572 processes event block(s) 4231_6. Actions/conditions:
//        4231_6: splits saved text into fields.
void Frames::event_func_1572()
{
    // event 4231_6 : splits saved text into fields
    {
        if (!(group_loops_1)) goto event_4231_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4231_6_end;
        if (!((global_strings->get(0)) == (str_stalagflucht_144))) goto event_4231_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)) == (str_stealchar_1264))) goto event_4231_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(str_164_165_166_167_8_10_15_16_17_46_49_50_95_99_259_259_259_259_1267, str__96);
    }
    event_4231_6_end: ;
}
// Function purpose: generated callback event_func_1573 processes event block(s) 4232_6. Actions/conditions:
//        4232_6: splits saved text into fields.
void Frames::event_func_1573()
{
    // event 4232_6 : splits saved text into fields
    {
        if (!(group_loops_1)) goto event_4232_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4232_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)) == (str_give_1268))) goto event_4232_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(str_2_3_8_9_10_13_15_16_29_36_37_3_40_46_45_47_49_50_51_52_53_54_60_62_72_73_74_76_90_93_94_96_99_109_97_1269, str__96);
    }
    event_4232_6_end: ;
}
