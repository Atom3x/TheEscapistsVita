#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_distract_2_6()
{
    event_func_2229();
    event_func_2230();
    event_func_2231();
}
// Function purpose: generated callback event_func_2232 processes event block(s) 4162_6. Actions/conditions:
//        4162_6: splits saved text into fields.
void Frames::event_func_2232()
{
    // event 4162_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_old_distract_1)) goto event_4162_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(loop_check_distract_mish_index+1), str__254);
    }
    event_4162_6_end: ;
}
// Function purpose: generated callback event_func_2233 processes event block(s) 4163_6. Actions/conditions:
//        4163_6: sets del_missions to gameVariables->get_string(142,
//        del_missions)+missions_298->get_line(loop_check_distract_mish_index+1)+#; increments Score_P by 10;
//        increments m_cash by string_to_number(stringtokenizer_81->get(4)); plus 22 more actions.
void Frames::event_func_2233()
{
    // event 4163_6 : sets del_missions to gameVariables->get_string(142, del_missions)+missions_298->get_line(loop_check_distract_mish_index+1)+#; increments Score_P by 10; increments m_cash by string_to_number(stringtokenizer_81->get(4)); plus 22 more actions
    {
        if (!(group_code_1 && group_code_old_distract_1)) goto event_4163_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_distract_706))) goto event_4163_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) goto event_4163_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) goto event_4163_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4163_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708)+((ListObject*)get_instance(missions_298_instances))->get_line(loop_check_distract_mish_index+1)+str__346);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(416, str_m_cash_1234, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(417, str_m_done_1235, 1);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(12);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 15);
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
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_4163_6_2;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_4163_6_2: ;
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
            ((Text*)*it)->set_string(str_you_have_completed_the_favour_for_1237+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0)+str_and_earned_yourself_1238+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)+str__918);
        }
        FrameObject * single_instance_4163_6_3; single_instance_4163_6_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 43, parent->y + 20), parent->layer);
                if (single_instance_4163_6_3 == NULL)
                    single_instance_4163_6_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4163_6_3))->force_animation(28);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
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
        {
            loop_distract_2_running = true;
            int times = int(1);
            loop_distract_2_index = 0;
            while (loop_distract_2_index < times) {
                loop_distract_2_6();
                if (!loop_distract_2_running) break;
                loop_distract_2_index++;
            }
        }
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_4163_6_end: ;
}
// Function purpose: generated callback event_func_2234 processes event block(s) 4168_6. Actions/conditions:
//        4168_6: splits saved text into fields.
void Frames::event_func_2234()
{
    // event 4168_6 : splits saved text into fields
    {
        if (!(group_code_1)) goto event_4168_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(((AssociateArray*)get_instance(gameVariables_instances))->get_value(550, str_checkdistract_1453)), str__254);
    }
    event_4168_6_end: ;
}
// Function purpose: generated callback event_func_2235 processes event block(s) 4169_6. Actions/conditions:
//        4169_6: checks scene is active; game state Distract; game state CR_num; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_2235()
{
    // event 4169_6 : checks scene is active; game state Distract; game state CR_num; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_4169_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_distract_706))) goto event_4169_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(551, str_cr_num_1455)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))))) goto event_4169_6_end;
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
        {
            loop_successful_distract_running = true;
            int times = int(1);
            loop_successful_distract_index = 0;
            while (loop_successful_distract_index < times) {
                loop_successful_distract_6();
                if (!loop_successful_distract_running) break;
                loop_successful_distract_index++;
            }
        }
    }
    event_4169_6_end: ;
}
void Frames::loop_check_distract_mish_6()
{
    event_func_2232();
    event_func_2233();
    event_func_2234();
    event_func_2235();
}
// Function purpose: generated callback event_func_2236 processes event block(s) 3713_6. Actions/conditions:
//        3713_6: changes a stored game value.
void Frames::event_func_2236()
{
    // event 3713_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_gym_equip_1 && group_code_gym_equip_punch_bag_1)) goto event_3713_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(552, str_hits_1456)%MathHelper()%3) == (0))) goto event_3713_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(8)) < (100))) goto event_3713_6_end;
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
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(8, 1);
    }
    event_3713_6_end: ;
}
void Frames::loop_check_hits_str_6()
{
    event_func_2236();
}
// Function purpose: generated callback event_func_2237 processes event block(s) 4586_6. Group(s): End Level
//        Loop. Actions/conditions: 4586_6: increments tot_inmate_rep by
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12).
void Frames::event_func_2237()
{
    // event 4586_6 : increments tot_inmate_rep by ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12)
    {
        // group: End Level Loop
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_tot_inmate_rep_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4586_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(553, str_tot_inmate_rep_1457, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12));
    }
    event_4586_6_end: ;
}
void Frames::loop_tot_inmate_rep_6()
{
    event_func_2237();
}
// Function purpose: generated callback event_func_2238 processes event block(s) 4585_6. Group(s): End Level
//        Loop. Actions/conditions: 4585_6: increments comb_rep by ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(12).
void Frames::event_func_2238()
{
    // event 4585_6 : increments comb_rep by ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(12)
    {
        // group: End Level Loop
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_comb_rep_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_4585_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(554, str_comb_rep_1458, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(12));
    }
    event_4585_6_end: ;
}
void Frames::loop_comb_rep_6()
{
    event_func_2238();
}
// Function purpose: generated callback event_func_2239 processes event block(s) 4584_6. Actions/conditions:
//        4584_6: sets end_str to playerBase->alterables->values.get(8); sets end_spd to
//        playerBase->alterables->values.get(9); sets end_int to playerBase->alterables->values.get(10); plus 6 more
//        actions.
void Frames::event_func_2239()
{
    // event 4584_6 : sets end_str to playerBase->alterables->values.get(8); sets end_spd to playerBase->alterables->values.get(9); sets end_int to playerBase->alterables->values.get(10); plus 6 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(555, str_end_str_1459, ((Active*)get_instance(playerBase_instances))->alterables->values.get(8));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(556, str_end_spd_1460, ((Active*)get_instance(playerBase_instances))->alterables->values.get(9));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(557, str_end_int_1461, ((Active*)get_instance(playerBase_instances))->alterables->values.get(10));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(554, str_comb_rep_1458, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(553, str_tot_inmate_rep_1457, 0);
        {
            loop_comb_rep_running = true;
            int times = int(qualifier_14.size());
            loop_comb_rep_index = 0;
            while (loop_comb_rep_index < times) {
                loop_comb_rep_6();
                if (!loop_comb_rep_running) break;
                loop_comb_rep_index++;
            }
        }
        {
            loop_tot_inmate_rep_running = true;
            int times = int(inmateBase_instances.size());
            loop_tot_inmate_rep_index = 0;
            while (loop_tot_inmate_rep_index < times) {
                loop_tot_inmate_rep_6();
                if (!loop_tot_inmate_rep_running) break;
                loop_tot_inmate_rep_index++;
            }
        }
        next_frame = index + 1 + 0;    
        if (loop_count != 0)
            manager.set_fade(Transition::DOOR, Color(0, 0, 0), 2.22222222222);
    
    }
    event_4584_6_end: ;
}
void Frames::loop_end_level_6()
{
    event_func_2239();
}
// Function purpose: generated callback event_func_2240 processes event block(s) 3979_6. Actions/conditions:
//        3979_6: adds a activesystembox 450 instance; sets the selected object's numeric value to -5; moves the
//        selected object behind other objects; plus 7 more actions.
void Frames::event_func_2240()
{
    // event 3979_6 : adds a activesystembox 450 instance; sets the selected object's numeric value to -5; moves the selected object behind other objects; plus 7 more actions
    {
        if (!(group_code_1)) goto event_3979_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3979_6_end;
        activesystembox_450_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activesystembox_450(0, 0), 5);
            activesystembox_450_instances.add_back();
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, -5);
        }
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
            ((SystemBox*)*it)->set_fill(Color(make_color_int(255, 211, 140)));
            ((SystemBox*)*it)->alterables->values.set(1, 80+string_size(((SystemBox*)*it)->text));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_3979_6_end: ;
}
void Frames::loop_medstaff_speak_6()
{
    event_func_1383();
    event_func_2240();
}
// Function purpose: generated callback event_func_2241 processes event block(s) 3822_6. Actions/conditions:
//        3822_6: creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to text
//        for ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(8; plus 5 more
//        actions.
void Frames::event_func_2241()
{
    // event 3822_6 : creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to text for ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(8; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3822_6_end;
        if (!((loop_create_stat_bars_npc_index+1) == (1))) goto event_3822_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3822_6_end;
        FrameObject * single_instance_3822_6_0; single_instance_3822_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -12, parent->y + -31), parent->layer);
                if (single_instance_3822_6_0 == NULL)
                    single_instance_3822_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3822_6_0))->set_x_scale(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(8)*0.6);
        ((Active*)((Active*)single_instance_3822_6_0))->alterables->strings.set(1, number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(8))+str_100_442);
        ((Active*)((Active*)single_instance_3822_6_0))->alterables->strings.set(0, str_profile_281);
        ((Active*)((Active*)single_instance_3822_6_0))->alterables->flags.enable(1);
    }
    event_3822_6_end: ;
}
// Function purpose: generated callback event_func_2242 processes event block(s) 3823_6. Actions/conditions:
//        3823_6: creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to text
//        for ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(9; plus 5 more
//        actions.
void Frames::event_func_2242()
{
    // event 3823_6 : creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to text for ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(9; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3823_6_end;
        if (!((loop_create_stat_bars_npc_index+1) == (2))) goto event_3823_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3823_6_end;
        FrameObject * single_instance_3823_6_0; single_instance_3823_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -12, parent->y + -20), parent->layer);
                if (single_instance_3823_6_0 == NULL)
                    single_instance_3823_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3823_6_0))->set_x_scale(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(9)*0.6);
        ((Active*)((Active*)single_instance_3823_6_0))->alterables->strings.set(1, number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(9))+str_100_442);
        ((Active*)((Active*)single_instance_3823_6_0))->alterables->strings.set(0, str_profile_281);
        ((Active*)((Active*)single_instance_3823_6_0))->alterables->flags.enable(1);
    }
    event_3823_6_end: ;
}
// Function purpose: generated callback event_func_2243 processes event block(s) 3824_6. Actions/conditions:
//        3824_6: creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to text
//        for ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(5; plus 5 more
//        actions.
void Frames::event_func_2243()
{
    // event 3824_6 : creates a powerbar 239 object; sets horizontal scaling; sets the selected object's string to text for ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3824_6_end;
        if (!((loop_create_stat_bars_npc_index+1) == (3))) goto event_3824_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3824_6_end;
        FrameObject * single_instance_3824_6_0; single_instance_3824_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -12, parent->y + -9), parent->layer);
                if (single_instance_3824_6_0 == NULL)
                    single_instance_3824_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3824_6_0))->set_x_scale(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(5)*0.6);
        ((Active*)((Active*)single_instance_3824_6_0))->alterables->strings.set(1, number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(5))+str_100_442);
        ((Active*)((Active*)single_instance_3824_6_0))->alterables->strings.set(0, str_profile_281);
        ((Active*)((Active*)single_instance_3824_6_0))->alterables->flags.enable(1);
    }
    event_3824_6_end: ;
}
// Function purpose: generated callback event_func_2244 processes event block(s) 3825_6. Actions/conditions:
//        3825_6: creates a powerbar 239 object; sets horizontal scaling; updates a value on the target object; plus 5
//        more actions.
void Frames::event_func_2244()
{
    // event 3825_6 : creates a powerbar 239 object; sets horizontal scaling; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3825_6_end;
        if (!((loop_create_stat_bars_npc_index+1) == (4))) goto event_3825_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3825_6_end;
        FrameObject * single_instance_3825_6_0; single_instance_3825_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -12, parent->y + 2), parent->layer);
                if (single_instance_3825_6_0 == NULL)
                    single_instance_3825_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3825_6_0))->set_x_scale(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(12)*0.6);
        ((Active*)((Active*)single_instance_3825_6_0))->alterables->strings.set(1, number_to_string(get_floor(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(12)))+str_100_442);
        ((Active*)((Active*)single_instance_3825_6_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_3825_6_0))->alterables->strings.set(0, str_profile_281);
    }
    event_3825_6_end: ;
}
void Frames::loop_create_stat_bars_npc_6()
{
    event_func_2241();
    event_func_2242();
    event_func_2243();
    event_func_2244();
}
// Function purpose: generated callback event_func_2245 processes event block(s) 3913_6. Actions/conditions:
//        3913_6: creates a slot 224 object; sets the target object's scale; sets the selected object's string to
//        NPC_Outfit.
void Frames::event_func_2245()
{
    // event 3913_6 : creates a slot 224 object; sets the target object's scale; sets the selected object's string to NPC_Outfit
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3913_6_end;
        FrameObject * single_instance_3913_6_0; single_instance_3913_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + -25, parent->y + 40), parent->layer);
                if (single_instance_3913_6_0 == NULL)
                    single_instance_3913_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3913_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_3913_6_0))->alterables->strings.set(0, str_npc_outfit_1385);
    }
    event_3913_6_end: ;
}
// Function purpose: generated callback event_func_2246 processes event block(s) 3914_6. Actions/conditions:
//        3914_6: splits saved text into fields; sets the selected object's numeric value to 1; adds a itemshud 210
//        instance; plus 9 more actions.
void Frames::event_func_2246()
{
    // event 3914_6 : splits saved text into fields; sets the selected object's numeric value to 1; adds a itemshud 210 instance; plus 9 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3914_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) != (empty_string))) goto event_3914_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_outfit_1385))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3914_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129))), str__96);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3914_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3914_6_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->strings.set(0, str_npc_outfit_1385);
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-2);
        }
    }
    event_3914_6_end: ;
}
// Function purpose: generated callback event_func_2247 processes event block(s) 3915_6. Actions/conditions:
//        3915_6: creates a slot 224 object; sets the target object's scale; sets the selected object's string to
//        NPC_Weapon.
void Frames::event_func_2247()
{
    // event 3915_6 : creates a slot 224 object; sets the target object's scale; sets the selected object's string to NPC_Weapon
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3915_6_end;
        FrameObject * single_instance_3915_6_0; single_instance_3915_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 25, parent->y + 40), parent->layer);
                if (single_instance_3915_6_0 == NULL)
                    single_instance_3915_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3915_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_3915_6_0))->alterables->strings.set(0, str_npc_weapon_1384);
    }
    event_3915_6_end: ;
}
// Function purpose: generated callback event_func_2248 processes event block(s) 3916_6. Actions/conditions:
//        3916_6: splits saved text into fields; sets the selected object's numeric value to 1; adds a itemshud 210
//        instance; plus 9 more actions.
void Frames::event_func_2248()
{
    // event 3916_6 : splits saved text into fields; sets the selected object's numeric value to 1; adds a itemshud 210 instance; plus 9 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3916_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) != (empty_string))) goto event_3916_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_npc_weapon_1384))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3916_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_weapon_460+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129))), str__96);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3916_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3916_6_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->strings.set(0, str_npc_weapon_1384);
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-2);
        }
    }
    event_3916_6_end: ;
}
void Frames::loop_stats_gear_npc_6()
{
    event_func_2245();
    event_func_2246();
    event_func_2247();
    event_func_2248();
}
// Function purpose: generated callback event_func_2249 processes event block(s) 3818_6. Actions/conditions:
//        3818_6: creates a profilestats 432 object; sets a game or interface text string.
void Frames::event_func_2249()
{
    // event 3818_6 : creates a profilestats 432 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3818_6_end;
        FrameObject * single_instance_3818_6_0; single_instance_3818_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -35), parent->layer);
                if (single_instance_3818_6_0 == NULL)
                    single_instance_3818_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3818_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_1_97));
    }
    event_3818_6_end: ;
}
// Function purpose: generated callback event_func_2250 processes event block(s) 3819_6. Actions/conditions:
//        3819_6: creates a profilestats 432 object; sets a game or interface text string.
void Frames::event_func_2250()
{
    // event 3819_6 : creates a profilestats 432 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3819_6_end;
        FrameObject * single_instance_3819_6_0; single_instance_3819_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -24), parent->layer);
                if (single_instance_3819_6_0 == NULL)
                    single_instance_3819_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3819_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_2_155));
    }
    event_3819_6_end: ;
}
// Function purpose: generated callback event_func_2251 processes event block(s) 3820_6. Actions/conditions:
//        3820_6: creates a profilestats 432 object; sets a game or interface text string.
void Frames::event_func_2251()
{
    // event 3820_6 : creates a profilestats 432 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3820_6_end;
        FrameObject * single_instance_3820_6_0; single_instance_3820_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -13), parent->layer);
                if (single_instance_3820_6_0 == NULL)
                    single_instance_3820_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3820_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_3_158));
    }
    event_3820_6_end: ;
}
// Function purpose: generated callback event_func_2252 processes event block(s) 3821_6. Actions/conditions:
//        3821_6: creates a profilestats 432 object; sets a game or interface text string.
void Frames::event_func_2252()
{
    // event 3821_6 : creates a profilestats 432 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3821_6_end;
        FrameObject * single_instance_3821_6_0; single_instance_3821_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -2), parent->layer);
                if (single_instance_3821_6_0 == NULL)
                    single_instance_3821_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3821_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_4_161));
    }
    event_3821_6_end: ;
}
void Frames::loop_npc_stat_texts_6()
{
    event_func_2249();
    event_func_2250();
    event_func_2251();
    event_func_2252();
}
// Function purpose: generated callback event_func_2253 processes event block(s) 4348_6. Actions/conditions:
//        4348_6: sets fontColor to 255.
void Frames::event_func_2253()
{
    // event 4348_6 : sets fontColor to 255
    {
        if (!(group_align_color_1)) goto event_4348_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(88, str_fontcolor_595, 255);
    }
    event_4348_6_end: ;
}
// Function purpose: generated callback event_func_2254 processes event block(s) 4349_6. Actions/conditions:
//        4349_6: sets fontColor to 26367.
void Frames::event_func_2254()
{
    // event 4349_6 : sets fontColor to 26367
    {
        if (!(group_align_color_1)) goto event_4349_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(347, str_input_170)) >= (10))) goto event_4349_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(88, str_fontcolor_595, 26367);
    }
    event_4349_6_end: ;
}
// Function purpose: generated callback event_func_2255 processes event block(s) 4350_6. Actions/conditions:
//        4350_6: sets fontColor to 39423.
void Frames::event_func_2255()
{
    // event 4350_6 : sets fontColor to 39423
    {
        if (!(group_align_color_1)) goto event_4350_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(347, str_input_170)) >= (20))) goto event_4350_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(88, str_fontcolor_595, 39423);
    }
    event_4350_6_end: ;
}
// Function purpose: generated callback event_func_2256 processes event block(s) 4351_6. Actions/conditions:
//        4351_6: sets fontColor to 52479.
void Frames::event_func_2256()
{
    // event 4351_6 : sets fontColor to 52479
    {
        if (!(group_align_color_1)) goto event_4351_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(347, str_input_170)) >= (30))) goto event_4351_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(88, str_fontcolor_595, 52479);
    }
    event_4351_6_end: ;
}
// Function purpose: generated callback event_func_2257 processes event block(s) 4352_6. Actions/conditions:
//        4352_6: sets fontColor to 56575.
void Frames::event_func_2257()
{
    // event 4352_6 : sets fontColor to 56575
    {
        if (!(group_align_color_1)) goto event_4352_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(347, str_input_170)) >= (40))) goto event_4352_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(88, str_fontcolor_595, 56575);
    }
    event_4352_6_end: ;
}
// Function purpose: generated callback event_func_2258 processes event block(s) 4353_6. Actions/conditions:
//        4353_6: sets fontColor to 65535.
void Frames::event_func_2258()
{
    // event 4353_6 : sets fontColor to 65535
    {
        if (!(group_align_color_1)) goto event_4353_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(347, str_input_170)) >= (50))) goto event_4353_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(88, str_fontcolor_595, 65535);
    }
    event_4353_6_end: ;
}
// Function purpose: generated callback event_func_2259 processes event block(s) 4354_6. Actions/conditions:
//        4354_6: sets fontColor to 65484.
void Frames::event_func_2259()
{
    // event 4354_6 : sets fontColor to 65484
    {
        if (!(group_align_color_1)) goto event_4354_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(347, str_input_170)) >= (60))) goto event_4354_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(88, str_fontcolor_595, 65484);
    }
    event_4354_6_end: ;
}
// Function purpose: generated callback event_func_2260 processes event block(s) 4355_6. Actions/conditions:
//        4355_6: sets fontColor to 65433.
void Frames::event_func_2260()
{
    // event 4355_6 : sets fontColor to 65433
    {
        if (!(group_align_color_1)) goto event_4355_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(347, str_input_170)) >= (70))) goto event_4355_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(88, str_fontcolor_595, 65433);
    }
    event_4355_6_end: ;
}
// Function purpose: generated callback event_func_2261 processes event block(s) 4356_6. Actions/conditions:
//        4356_6: sets fontColor to 64614.
void Frames::event_func_2261()
{
    // event 4356_6 : sets fontColor to 64614
    {
        if (!(group_align_color_1)) goto event_4356_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(347, str_input_170)) >= (80))) goto event_4356_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(88, str_fontcolor_595, 64614);
    }
    event_4356_6_end: ;
}
// Function purpose: generated callback event_func_2262 processes event block(s) 4357_6. Actions/conditions:
//        4357_6: sets fontColor to 65280.
void Frames::event_func_2262()
{
    // event 4357_6 : sets fontColor to 65280
    {
        if (!(group_align_color_1)) goto event_4357_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(347, str_input_170)) >= (90))) goto event_4357_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(88, str_fontcolor_595, 65280);
    }
    event_4357_6_end: ;
}
void Frames::loop_align_color_6()
{
    event_func_2253();
    event_func_2254();
    event_func_2255();
    event_func_2256();
    event_func_2257();
    event_func_2258();
    event_func_2259();
    event_func_2260();
    event_func_2261();
    event_func_2262();
}
// Function purpose: generated callback event_func_2263 processes event block(s) 3893_6. Actions/conditions:
//        3893_6: sets input to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(12); sets charID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0).
void Frames::event_func_2263()
{
    // event 3893_6 : sets input to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12); sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3893_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3893_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(347, str_input_170, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        if (!group_align_color_1) {
            group_align_color_1 = true;
        }
        {
            loop_align_color_running = true;
            int times = int(1);
            loop_align_color_index = 0;
            while (loop_align_color_index < times) {
                loop_align_color_6();
                if (!loop_align_color_running) break;
                loop_align_color_index++;
            }
        }
    }
    event_3893_6_end: ;
}
// Function purpose: generated callback event_func_2264 processes event block(s) 3894_6. Actions/conditions:
//        3894_6: adds a dchar 214 instance; sets the selected object's text; updates a value on the target object;
//        plus 5 more actions.
void Frames::event_func_2264()
{
    // event 3894_6 : adds a dchar 214 instance; sets the selected object's text; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3894_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3894_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(((AssociateArray*)get_instance(gameVariables_instances))->get_value(88, str_fontcolor_595));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+6);
        }
    }
    event_3894_6_end: ;
}
// Function purpose: generated callback event_func_2265 processes event block(s) 3895_6. Actions/conditions:
//        3895_6: sets hasjob to 0.
void Frames::event_func_2265()
{
    // event 3895_6 : sets hasjob to 0
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3895_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 0);
    }
    event_3895_6_end: ;
}
// Function purpose: generated callback event_func_2266 processes event block(s) 3896_6. Actions/conditions:
//        3896_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2266()
{
    // event 3896_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3896_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3896_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_3896_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_1_97)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3896_6_end: ;
}
// Function purpose: generated callback event_func_2267 processes event block(s) 3897_6. Actions/conditions:
//        3897_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2267()
{
    // event 3897_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3897_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3897_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_3897_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_janitor_630)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3897_6_end: ;
}
// Function purpose: generated callback event_func_2268 processes event block(s) 3898_6. Actions/conditions:
//        3898_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2268()
{
    // event 3898_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3898_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3898_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_2_155)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3898_6_end: ;
}
// Function purpose: generated callback event_func_2269 processes event block(s) 3899_6. Actions/conditions:
//        3899_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2269()
{
    // event 3899_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3899_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3899_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_8_325)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3899_6_end: ;
}
// Function purpose: generated callback event_func_2270 processes event block(s) 3900_6. Actions/conditions:
//        3900_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2270()
{
    // event 3900_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3900_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3900_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_3900_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_9_327)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3900_6_end: ;
}
// Function purpose: generated callback event_func_2271 processes event block(s) 3901_6. Actions/conditions:
//        3901_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2271()
{
    // event 3901_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3901_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3901_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_3901_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_mailman_633)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3901_6_end: ;
}
// Function purpose: generated callback event_func_2272 processes event block(s) 3902_6. Actions/conditions:
//        3902_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2272()
{
    // event 3902_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3902_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3902_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_10_329)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3902_6_end: ;
}
// Function purpose: generated callback event_func_2273 processes event block(s) 3903_6. Actions/conditions:
//        3903_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2273()
{
    // event 3903_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3903_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3903_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_4_161)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3903_6_end: ;
}
// Function purpose: generated callback event_func_2274 processes event block(s) 3904_6. Actions/conditions:
//        3904_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2274()
{
    // event 3904_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3904_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3904_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_5_164)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3904_6_end: ;
}
// Function purpose: generated callback event_func_2275 processes event block(s) 3905_6. Actions/conditions:
//        3905_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2275()
{
    // event 3905_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3905_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3905_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_6_241)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3905_6_end: ;
}
// Function purpose: generated callback event_func_2276 processes event block(s) 3906_6. Actions/conditions:
//        3906_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2276()
{
    // event 3906_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3906_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3906_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_3906_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_3_158)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3906_6_end: ;
}
// Function purpose: generated callback event_func_2277 processes event block(s) 3907_6. Actions/conditions:
//        3907_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2277()
{
    // event 3907_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3907_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3907_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_3907_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_tailor_631)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3907_6_end: ;
}
// Function purpose: generated callback event_func_2278 processes event block(s) 3908_6. Actions/conditions:
//        3908_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2278()
{
    // event 3908_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3908_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3908_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_3908_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_7_323)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3908_6_end: ;
}
// Function purpose: generated callback event_func_2279 processes event block(s) 3909_6. Actions/conditions:
//        3909_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 6 more actions.
void Frames::event_func_2279()
{
    // event 3909_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3909_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) goto event_3909_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_3909_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_deliveries_634)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(558, str_hasjob_1462, 1);
    }
    event_3909_6_end: ;
}
// Function purpose: generated callback event_func_2280 processes event block(s) 3910_6. Actions/conditions:
//        3910_6: adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal
//        position to frame_left()+5; plus 5 more actions.
void Frames::event_func_2280()
{
    // event 3910_6 : adds a dchar 214 instance; sets the selected object's text; sets the selected object's horizontal position to frame_left()+5; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3910_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(558, str_hasjob_1462)) == (0))) goto event_3910_6_end;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(str__320+((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_11_331)+str__321));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+13);
            ((Text*)*it)->blend_color.set(Color(89, 89, 89));
        }
    }
    event_3910_6_end: ;
}
void Frames::loop_npc_tab_stats_name_6()
{
    event_func_2263();
    event_func_2264();
    event_func_2265();
    event_func_2266();
    event_func_2267();
    event_func_2268();
    event_func_2269();
    event_func_2270();
    event_func_2271();
    event_func_2272();
    event_func_2273();
    event_func_2274();
    event_func_2275();
    event_func_2276();
    event_func_2277();
    event_func_2278();
    event_func_2279();
    event_func_2280();
}
// Function purpose: generated callback event_func_2281 processes event block(s) 3815_6. Actions/conditions:
//        3815_6: sets the object's animation to 14; sets the selected object's direction to 0; plays a sound or music
//        track.
void Frames::event_func_2281()
{
    // event 3815_6 : sets the object's animation to 14; sets the selected object's direction to 0; plays a sound or music track
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3815_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3815_6_end;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(14);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        {
            loop_npc_stat_texts_running = true;
            int times = int(1);
            loop_npc_stat_texts_index = 0;
            while (loop_npc_stat_texts_index < times) {
                loop_npc_stat_texts_6();
                if (!loop_npc_stat_texts_running) break;
                loop_npc_stat_texts_index++;
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
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3815_6_end: ;
}
// Function purpose: generated callback event_func_2282 processes event block(s) 3816_6. Actions/conditions:
//        3816_6: creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object;
//        plus 1 more actions.
void Frames::event_func_2282()
{
    // event 3816_6 : creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3816_6_end;
        FrameObject * single_instance_3816_6_0; single_instance_3816_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttontext_445(parent->x + -63, parent->y + 60), parent->layer);
                if (single_instance_3816_6_0 == NULL)
                    single_instance_3816_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3816_6_0))->set_bold(0);
        ((Text*)((Text*)single_instance_3816_6_0))->blend_color.set(Color(105, 105, 105));
        ((Text*)((Text*)single_instance_3816_6_0))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_4_161)));
    }
    event_3816_6_end: ;
}
// Function purpose: generated callback event_func_2283 processes event block(s) 3817_6. Actions/conditions:
//        3817_6: creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object;
//        plus 1 more actions.
void Frames::event_func_2283()
{
    // event 3817_6 : creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3817_6_end;
        FrameObject * single_instance_3817_6_0; single_instance_3817_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttontext_445(parent->x + -12, parent->y + 60), parent->layer);
                if (single_instance_3817_6_0 == NULL)
                    single_instance_3817_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3817_6_0))->set_bold(0);
        ((Text*)((Text*)single_instance_3817_6_0))->blend_color.set(Color(105, 105, 105));
        ((Text*)((Text*)single_instance_3817_6_0))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_5_164)));
    }
    event_3817_6_end: ;
}
void Frames::loop_npc_tab_stats_6()
{
    event_func_2281();
    event_func_2282();
    event_func_2283();
}
// Function purpose: generated callback event_func_2284 processes event block(s) 1033_6. Actions/conditions:
//        1033_6: sets SpeakID to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(25); sets SpeakCol to 1; sets SpeakText to !?; plus 7 more
//        actions.
void Frames::event_func_2284()
{
    // event 1033_6 : sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 1; sets SpeakText to !?; plus 7 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1033_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) == (1))) goto event_1033_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1033_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str__1463);
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(60);
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663));
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_1033_6_end: ;
}
void Frames::loop_policing_alert_6()
{
    event_func_2284();
}
// Function purpose: generated callback event_func_2285 processes event block(s) 4536_6. Actions/conditions:
//        4536_6: sets source to Hovers entry 65; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), $name,
//        gameVariables->get_string(167, MapWarden)); creates a dialogue2 179 object; plus 14 more actions.
void Frames::event_func_2285()
{
    // event 4536_6 : sets source to Hovers entry 65; sets source to StringReplace::replace(gameVariables->get_string(81, source), $name, gameVariables->get_string(167, MapWarden)); creates a dialogue2 179 object; plus 14 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_65_904));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(167, str_mapwarden_744)));
        FrameObject * single_instance_4536_6_0; single_instance_4536_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -70, parent->y + 30), parent->layer);
                if (single_instance_4536_6_0 == NULL)
                    single_instance_4536_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_4536_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(0)+12);
        ((Text*)((Text*)single_instance_4536_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-22);
        ((Text*)((Text*)single_instance_4536_6_0))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_4536_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        FrameObject * single_instance_4536_6_1; single_instance_4536_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_4536_6_1 == NULL)
                    single_instance_4536_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4536_6_1))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_4536_6_1))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_4536_6_1))->force_animation(43);
        FrameObject * single_instance_4536_6_2; single_instance_4536_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_4536_6_1)->x + 3, ((Active*)single_instance_4536_6_1)->y + 3), ((Active*)single_instance_4536_6_1)->layer);
            if (single_instance_4536_6_2 == NULL)
                single_instance_4536_6_2 = new_obj;
        }
        ((Text*)((Text*)single_instance_4536_6_2))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_4536_6_2))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_4536_6_end: ;
}
void Frames::loop_letter_takeover_6()
{
    event_func_2285();
}
// Function purpose: generated callback event_func_2286 processes event block(s) 4537_6. Actions/conditions:
//        4537_6: unlocks the WayDragon achievement.
void Frames::event_func_2286()
{
    // event 4537_6 : unlocks the WayDragon achievement
    {
        if (!((global_values->get(16)) == (1))) goto event_4537_6_end;
        if (!((left_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704), 4)) == (str_108_1464))) goto event_4537_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_waydragon_1465)) goto event_4537_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_waydragon_1465);
    }
    event_4537_6_end: ;
}
void Frames::loop_check_takeover_weap_6()
{
    event_func_2286();
}
// Function purpose: generated callback event_func_2287 processes event block(s) 4535_6. Actions/conditions:
//        4535_6: sets the selected object's visibility to true; sets the object's animation to 29; sets the selected
//        object's direction to 24; plus 12 more actions.
void Frames::event_func_2287()
{
    // event 4535_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 24; plus 12 more actions
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(226, str_guardsdowncount_836)) >= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(169, str_guardcount_747)*0.8))) goto event_4535_6_end;
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_4535_6_end;
        doormaster_387_instances.clear_selection();
        for (ObjectIterator it(doormaster_387_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!doormaster_387_instances.has_selection()) goto event_4535_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(24);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_44_1466));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__624));
        FrameObject * single_instance_4535_6_0; single_instance_4535_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -70, parent->y + -45), parent->layer);
                if (single_instance_4535_6_0 == NULL)
                    single_instance_4535_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_4535_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(0)+12);
        ((Text*)((Text*)single_instance_4535_6_0))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_4535_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        for (ObjectIterator it(doormaster_387_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_letter_takeover_running = true;
            int times = int(1);
            loop_letter_takeover_index = 0;
            while (loop_letter_takeover_index < times) {
                loop_letter_takeover_6();
                if (!loop_letter_takeover_running) break;
                loop_letter_takeover_index++;
            }
        }
        {
            loop_check_takeover_weap_running = true;
            int times = int(1);
            loop_check_takeover_weap_index = 0;
            while (loop_check_takeover_weap_index < times) {
                loop_check_takeover_weap_6();
                if (!loop_check_takeover_weap_running) break;
                loop_check_takeover_weap_index++;
            }
        }
    }
    event_4535_6_end: ;
}
// Function purpose: generated callback event_func_2288 processes event block(s) 4538_6. Actions/conditions:
//        4538_6: sets Lesson to Lockdown; sets Count_InCells to 0; sets LessonFlash to 50; plus 7 more actions.
void Frames::event_func_2288()
{
    // event 4538_6 : sets Lesson to Lockdown; sets Count_InCells to 0; sets LessonFlash to 50; plus 7 more actions
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(226, str_guardsdowncount_836)) >= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(169, str_guardcount_747)*0.4))) goto event_4538_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_4538_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, str_lockdown_1467);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(282, str_count_incells_939, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(329, str_lessonflash_1117, 50);
            group_code_schedules_sleeping_1 = false;
    
            group_code_schedules_roll_call_1 = false;
    
            group_code_schedules_food_1 = false;
    
            group_code_schedules_leisure_work_1 = false;
    
            group_code_schedules_shower_1 = false;
    
            group_code_schedules_gym_1 = false;
    
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
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
        waypointinmaterollcall2_310_instances.clear_selection();
        for (ObjectIterator it(waypointinmaterollcall2_310_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(sidePanel_instances))->force_animation(1);
        media.play_id(SOUND_BELL_12, 1-1);
        outfitinmatebond_486_instances.clear_selection();
        for (ObjectIterator it(outfitinmatebond_486_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        outfitinmatess_503_instances.clear_selection();
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_4538_6_end: ;
}
void Frames::loop_count_downed_guards_result_6()
{
    event_func_2287();
    event_func_2288();
}
// Function purpose: generated callback event_func_2289 processes event block(s) 2623_6. Actions/conditions:
//        2623_6: removes the selected object.
void Frames::event_func_2289()
{
    // event 2623_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2623_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_weapon_704))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2623_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2623_6_end: ;
}
// Function purpose: generated callback event_func_2290 processes event block(s) 2624_6. Actions/conditions:
//        2624_6: sets Outfit to number_to_string(((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2))+_100; sets OutfitShort to
//        ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); removes
//        the selected object.
void Frames::event_func_2290()
{
    // event 2624_6 : sets Outfit to number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+_100; sets OutfitShort to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2); removes the selected object
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2624_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2624_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str_100_531);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2624_6_end: ;
}
// Function purpose: generated callback event_func_2291 processes event block(s) 2625_6. Actions/conditions:
//        2625_6: removes the selected object.
void Frames::event_func_2291()
{
    // event 2625_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2625_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_weapon_704))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2625_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2625_6_end: ;
}
// Function purpose: generated callback event_func_2292 processes event block(s) 2626_6. Actions/conditions:
//        2626_6: removes the selected object.
void Frames::event_func_2292()
{
    // event 2626_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2626_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2626_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2626_6_end: ;
}
// Function purpose: generated callback event_func_2293 processes event block(s) 2627_6. Actions/conditions:
//        2627_6: removes the selected object.
void Frames::event_func_2293()
{
    // event 2627_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2627_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_profile_281))) { it.deselect(); continue; }
        }
        if (!activityProgress_instances.has_selection()) goto event_2627_6_end;
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2627_6_end: ;
}
void Frames::loop_stats_close_6()
{
    event_func_2289();
    event_func_2290();
    event_func_2291();
    event_func_2292();
    event_func_2293();
}
// Function purpose: generated callback event_func_2294 processes event block(s) 2628_6. Actions/conditions:
//        2628_6: sets Weapon to 0.
void Frames::event_func_2294()
{
    // event 2628_6 : sets Weapon to 0
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2628_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(139, str_weapon_704, 0);
    }
    event_2628_6_end: ;
}
// Function purpose: generated callback event_func_2295 processes event block(s) 2629_6. Actions/conditions:
//        2629_6: sets Weapon to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2).
void Frames::event_func_2295()
{
    // event 2629_6 : sets Weapon to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2629_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_weapon_704))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2629_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(139, str_weapon_704, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2629_6_end: ;
}
void Frames::loop_sort_weapon_6()
{
    event_func_2294();
    event_func_2295();
}
// Function purpose: generated callback event_func_2296 processes event block(s) 2622_6. Actions/conditions:
//        2622_6: sets hmm to 1; sets Pressed_P to 1; sets Esc to 1; plus 7 more actions.
void Frames::event_func_2296()
{
    // event 2622_6 : sets hmm to 1; sets Pressed_P to 1; sets Esc to 1; plus 7 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2622_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(559, str_hmm_1468, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(560, str_pressed_p_1469, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(561, str_esc_202, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        {
            loop_sort_weapon_running = true;
            int times = int(1);
            loop_sort_weapon_index = 0;
            while (loop_sort_weapon_index < times) {
                loop_sort_weapon_6();
                if (!loop_sort_weapon_running) break;
                loop_sort_weapon_index++;
            }
        }
        {
            loop_stats_close_running = true;
            int times = int(1);
            loop_stats_close_index = 0;
            while (loop_stats_close_index < times) {
                loop_stats_close_6();
                if (!loop_stats_close_running) break;
                loop_stats_close_index++;
            }
        }
        profilestats_432_instances.clear_selection();
        for (ObjectIterator it(profilestats_432_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
            group_code_my_stats_1 = false;
    
        media.play_id(SOUND_CLOSE_6, 1-1);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2622_6_end: ;
}
void Frames::loop_cl_profile_6()
{
    event_func_2296();
}
// Function purpose: generated callback event_func_2297 processes event block(s) 2118_6. Actions/conditions:
//        2118_6: enables flag 1 (object-specific active or interaction state) on the selected object; adds a jeepscan
//        458 instance; creates a patroljeep 416 object; plus 5 more actions.
void Frames::event_func_2297()
{
    // event 2118_6 : enables flag 1 (object-specific active or interaction state) on the selected object; adds a jeepscan 458 instance; creates a patroljeep 416 object; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2118_6_end;
        qualifier_25.clear_selection();
        FrameObject * single_instance_2118_6_0; single_instance_2118_6_0 = pick_random(qualifier_25);
        if (single_instance_2118_6_0 == NULL) goto event_2118_6_end;
        ((Active*)((Active*)single_instance_2118_6_0))->alterables->flags.enable(1);
        jeepscan_458_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_jeepscan_458(0, 0), 1);
            jeepscan_458_instances.add_back();
        }
        FrameObject * single_instance_2118_6_2; single_instance_2118_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_patroljeep_416(((Active*)single_instance_2118_6_0)->x + 0, ((Active*)single_instance_2118_6_0)->y + 0), ((Active*)single_instance_2118_6_0)->layer);
            if (single_instance_2118_6_2 == NULL)
                single_instance_2118_6_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_2118_6_2))->set_direction(((Active*)single_instance_2118_6_0)->get_direction());
        ((Active*)((Active*)single_instance_2118_6_2))->get_movement()->start();
        if (!group_code_misc_jeep_1) {
            group_code_misc_jeep_1 = true;
        }
    }
    event_2118_6_end: ;
}
void Frames::loop_make_jeep_6()
{
    event_func_2297();
}
// Function purpose: generated callback event_func_2298 processes event block(s) 2113_6. Actions/conditions:
//        2113_6: sets make_jeep to 1.
void Frames::event_func_2298()
{
    // event 2113_6 : sets make_jeep to 1
    {
        if (!(group_code_1)) goto event_2113_6_end;
        if (!((patroljeepwpright_415_instances.size()) > (0))) goto event_2113_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(562, str_make_jeep_1470, 1);
    }
    event_2113_6_end: ;
}
// Function purpose: generated callback event_func_2299 processes event block(s) 2114_6. Actions/conditions:
//        2114_6: sets make_jeep to 1.
void Frames::event_func_2299()
{
    // event 2114_6 : sets make_jeep to 1
    {
        if (!(group_code_1)) goto event_2114_6_end;
        if (!((patroljeepwpdown_417_instances.size()) > (0))) goto event_2114_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(562, str_make_jeep_1470, 1);
    }
    event_2114_6_end: ;
}
// Function purpose: generated callback event_func_2300 processes event block(s) 2115_6. Actions/conditions:
//        2115_6: sets make_jeep to 1.
void Frames::event_func_2300()
{
    // event 2115_6 : sets make_jeep to 1
    {
        if (!(group_code_1)) goto event_2115_6_end;
        if (!((patroljeepwpleft_418_instances.size()) > (0))) goto event_2115_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(562, str_make_jeep_1470, 1);
    }
    event_2115_6_end: ;
}
// Function purpose: generated callback event_func_2301 processes event block(s) 2116_6. Actions/conditions:
//        2116_6: sets make_jeep to 1.
void Frames::event_func_2301()
{
    // event 2116_6 : sets make_jeep to 1
    {
        if (!(group_code_1)) goto event_2116_6_end;
        if (!((patroljeepwpup_419_instances.size()) > (0))) goto event_2116_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(562, str_make_jeep_1470, 1);
    }
    event_2116_6_end: ;
}
// Function purpose: generated callback event_func_2302 processes event block(s) 2117_6. Actions/conditions:
//        2117_6: checks scene is active; game state make_jeep; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_2302()
{
    // event 2117_6 : checks scene is active; game state make_jeep; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2117_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(562, str_make_jeep_1470)) == (1))) goto event_2117_6_end;
        {
            loop_make_jeep_running = true;
            int times = int(1);
            loop_make_jeep_index = 0;
            while (loop_make_jeep_index < times) {
                loop_make_jeep_6();
                if (!loop_make_jeep_running) break;
                loop_make_jeep_index++;
            }
        }
    }
    event_2117_6_end: ;
}
void Frames::loop_check_jeep_6()
{
    event_func_2298();
    event_func_2299();
    event_func_2300();
    event_func_2301();
    event_func_2302();
}
// Function purpose: generated callback event_func_2303 processes event block(s) 3000_6. Actions/conditions:
//        3000_6: sets IconX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x();
//        sets IconY to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y(); sets IconZ
//        to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25).
void Frames::event_func_2303()
{
    // event 3000_6 : sets IconX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); sets IconY to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y(); sets IconZ to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3000_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3000_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(343, str_iconx_1136, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(344, str_icony_1137, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(345, str_iconz_1138, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        {
            loop_icon_thumbup_running = true;
            int times = int(1);
            loop_icon_thumbup_index = 0;
            while (loop_icon_thumbup_index < times) {
                loop_icon_thumbup_6();
                if (!loop_icon_thumbup_running) break;
                loop_icon_thumbup_index++;
            }
        }
    }
    event_3000_6_end: ;
}
void Frames::loop_npc_talk_2_6()
{
    event_func_2303();
}
// Function purpose: generated callback event_func_2304 processes event block(s) 2822_6. Actions/conditions:
//        2822_6: sets the object's animation to 0; sets the selected object's layer to 1-1; sets the selected
//        object's horizontal position to gameVariables->get_value(353, HoleX); plus 5 more actions.
void Frames::event_func_2304()
{
    // event 2822_6 : sets the object's animation to 0; sets the selected object's layer to 1-1; sets the selected object's horizontal position to gameVariables->get_value(353, HoleX); plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2822_6_end;
        ((Active*)get_instance(upperlevelcheck_206_instances))->force_animation(0);
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_layer(1-1);
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(353, str_holex_1147));
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(354, str_holey_1148));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 1);
    }
    event_2822_6_end: ;
}
// Function purpose: generated callback event_func_2305 processes event block(s) 2823_6. Actions/conditions:
//        2823_6: sets Blocked to 0.
void Frames::event_func_2305()
{
    // event 2823_6 : sets Blocked to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2823_6_end;
        if (((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background()) goto event_2823_6_end;
        upperlevelcheck_206_instances.clear_selection();
        if (!check_not_overlap(upperlevelcheck_206_instances, qualifier_19)) goto event_2823_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(320, str_blocked_1101, 0);
    }
    event_2823_6_end: ;
}
// Function purpose: generated callback event_func_2306 processes event block(s) 2825_6. Actions/conditions:
//        2825_6: sets NewLayer to 1; sets the selected object's horizontal position to
//        gameVariables->get_value(353, HoleX)+8; sets the selected object's vertical position to
//        gameVariables->get_value(354, HoleY)+8; plus 11 more actions.
void Frames::event_func_2306()
{
    // event 2825_6 : sets NewLayer to 1; sets the selected object's horizontal position to gameVariables->get_value(353, HoleX)+8; sets the selected object's vertical position to gameVariables->get_value(354, HoleY)+8; plus 11 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2825_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (0))) goto event_2825_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(355, str_newlayer_1149, 1);
        ((Active*)get_instance(playerBase_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(353, str_holex_1147)+8);
        ((Active*)get_instance(playerBase_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(354, str_holey_1148)+8);
        ((Active*)get_instance(playerBase_instances))->set_layer(1-1);
        undergroundGlow_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_undergroundGlow(0, 0), 0);
            undergroundGlow_instances.add_back();
        }
        for (ObjectIterator it(undergroundGlow_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_2825_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2825_6_1: ;
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_2825_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2825_6_2: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(1);
        ((Active*)get_instance(screenTint_instances))->set_visible(false);
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(1-1);
        {
            loop_kill_speech_running = true;
            int times = int(1);
            loop_kill_speech_index = 0;
            while (loop_kill_speech_index < times) {
                loop_kill_speech_6();
                if (!loop_kill_speech_running) break;
                loop_kill_speech_index++;
            }
        }
        {
            loop_layer_down_running = true;
            int times = int(1);
            loop_layer_down_index = 0;
            while (loop_layer_down_index < times) {
                loop_layer_up_6();
                if (!loop_layer_down_running) break;
                loop_layer_down_index++;
            }
        }
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
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_2825_6_end: ;
}
void Frames::loop_enter_hole_6()
{
    event_func_2304();
    event_func_2305();
    event_func_1331();
    event_func_2306();
}
// Function purpose: generated callback event_func_2307 processes event block(s) 4282_6. Actions/conditions:
//        4282_6: sets rnd to randrange_event(4).
void Frames::event_func_2307()
{
    // event 4282_6 : sets rnd to randrange_event(4)
    {
        if (!(group_loops_1)) goto event_4282_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(4));
    }
    event_4282_6_end: ;
}
