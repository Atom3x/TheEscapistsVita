#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_2704 processes event block(s) 3205_6. Actions/conditions:
//        3205_6: increments DTAFcheck by 1.
void Frames::event_func_2704()
{
    // event 3205_6 : increments DTAFcheck by 1
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3205_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_bottom_467))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3205_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(664, str_dtafcheck_1766, 1);
    }
    event_3205_6_end: ;
}
// Function purpose: generated callback event_func_2705 processes event block(s) 3206_6. Actions/conditions:
//        3206_6: increments DTAFcheck by 1.
void Frames::event_func_2705()
{
    // event 3206_6 : increments DTAFcheck by 1
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3206_6_end;
        dtafobjects_487_instances.clear_selection();
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_panel_right_466))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!dtafobjects_487_instances.has_selection()) goto event_3206_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(664, str_dtafcheck_1766, 1);
    }
    event_3206_6_end: ;
}
// Function purpose: generated callback event_func_2706 processes event block(s) 3207_6. Actions/conditions:
//        3207_6: checks scene is active; game state DTAFcheck; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_2706()
{
    // event 3207_6 : checks scene is active; game state DTAFcheck; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3207_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(664, str_dtafcheck_1766)) >= (3))) goto event_3207_6_end;
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
    event_3207_6_end: ;
}
void Frames::loop_dtaf_check_rocket_6()
{
    event_func_2702();
    event_func_2703();
    event_func_2704();
    event_func_2705();
    event_func_2706();
}
// Function purpose: generated callback event_func_2707 processes event block(s) 1060_6. Actions/conditions:
//        1060_6: sets checkDistract to missions_298->get_count().
void Frames::event_func_2707()
{
    // event 1060_6 : sets checkDistract to missions_298->get_count()
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1060_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(550, str_checkdistract_1453)) == (0))) goto event_1060_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(550, str_checkdistract_1453, ((ListObject*)get_instance(missions_298_instances))->get_count());
    }
    event_1060_6_end: ;
}
void Frames::loop_check_da_distract_6()
{
    event_func_2707();
}
// Function purpose: generated callback event_func_2708 processes event block(s) 1059_6. Actions/conditions:
//        1059_6: increments Heat by 15*gameVariables->get_value(83, NPClvl); sets TellOff to 1.
void Frames::event_func_2708()
{
    // event 1059_6 : increments Heat by 15*gameVariables->get_value(83, NPClvl); sets TellOff to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1059_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1059_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(665, str_culprit_1767)) == (-1))) goto event_1059_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 15*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 1);
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
        {
            loop_check_da_distract_running = true;
            int times = int(1);
            loop_check_da_distract_index = 0;
            while (loop_check_da_distract_index < times) {
                loop_check_da_distract_6();
                if (!loop_check_da_distract_running) break;
                loop_check_da_distract_index++;
            }
        }
    }
    event_1059_6_end: ;
}
// Function purpose: generated callback event_func_2709 processes event block(s) 1061_6. Actions/conditions:
//        1061_6: sets cancel to 1.
void Frames::event_func_2709()
{
    // event 1061_6 : sets cancel to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1061_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1061_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(665, str_culprit_1767)) == (-1))) goto event_1061_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_1061_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(666, str_cancel_1768, 1);
    }
    event_1061_6_end: ;
}
// Function purpose: generated callback event_func_2710 processes event block(s) 1062_6. Actions/conditions:
//        1062_6: sets TellOff to 0; sets cancel to 1.
void Frames::event_func_2710()
{
    // event 1062_6 : sets TellOff to 0; sets cancel to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1062_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1062_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(665, str_culprit_1767)) == (-1))) goto event_1062_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(667, str_guardopn_1769)) > (85))) goto event_1062_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(666, str_cancel_1768, 1);
    }
    event_1062_6_end: ;
}
// Function purpose: generated callback event_func_2711 processes event block(s) 1063_6. Actions/conditions:
//        1063_6: sets the selected object's numeric value to gameVariables->get_value(665, Culprit);
//        activates the Guards_Halt event group; sets SpeakID to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(25); plus 6 more actions.
void Frames::event_func_2711()
{
    // event 1063_6 : sets the selected object's numeric value to gameVariables->get_value(665, Culprit); activates the Guards_Halt event group; sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 6 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1063_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1063_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(666, str_cancel_1768)) == (0))) goto event_1063_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1063_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(665, str_culprit_1767));
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guards_halt_1170);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(668, str_culpritname_1770)));
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
    event_1063_6_end: ;
}
// Function purpose: generated callback event_func_2712 processes event block(s) 1064_6. Actions/conditions:
//        1064_6: sets IconX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets
//        IconY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets IconZ to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25).
void Frames::event_func_2712()
{
    // event 1064_6 : sets IconX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets IconY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets IconZ to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1064_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1064_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(666, str_cancel_1768)) == (0))) goto event_1064_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(665, str_culprit_1767)) == (-1))) goto event_1064_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1064_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(343, str_iconx_1136, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(344, str_icony_1137, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(345, str_iconz_1138, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
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
    }
    event_1064_6_end: ;
}
void Frames::loop_policing_attack_6()
{
    event_func_2708();
    event_func_2709();
    event_func_2710();
    event_func_2711();
    event_func_2712();
}
// Function purpose: generated callback event_func_2713 processes event block(s) 1066_6. Actions/conditions:
//        1066_6: sets the selected object's numeric value to -1; enables flag 250 (NPC pathfinding or movement state)
//        on the selected object; sets the selected object's numeric value to 80; plus 10 more actions.
void Frames::event_func_2713()
{
    // event 1066_6 : sets the selected object's numeric value to -1; enables flag 250 (NPC pathfinding or movement state) on the selected object; sets the selected object's numeric value to 80; plus 10 more actions
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1066_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1066_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(1, str_guardlook_434)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1066_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
            ((Active*)*it)->alterables->flags.enable(250);
            ((Active*)*it)->alterables->values.set(21, 80);
        }
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guards_heat_1771);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(352, str_telloff_1145, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
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
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_1066_6_end: ;
}
void Frames::loop_policing_heat_6()
{
    event_func_2713();
}
// Function purpose: generated callback event_func_2714 processes event block(s) 3977_6. Actions/conditions:
//        3977_6: adds a activesystembox 450 instance; sets the selected object's numeric value to -4; moves the
//        selected object behind other objects; plus 7 more actions.
void Frames::event_func_2714()
{
    // event 3977_6 : adds a activesystembox 450 instance; sets the selected object's numeric value to -4; moves the selected object behind other objects; plus 7 more actions
    {
        if (!(group_code_1)) goto event_3977_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3977_6_end;
        activesystembox_450_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activesystembox_450(0, 0), 5);
            activesystembox_450_instances.add_back();
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, -4);
        }
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_fill(Color(make_color_int(192, 255, 160)));
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
            ((SystemBox*)*it)->alterables->values.set(1, 50+string_size(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142)));
        }
    }
    event_3977_6_end: ;
}
void Frames::loop_jobstaff_speak_6()
{
    event_func_1383();
    event_func_2714();
}
// Function purpose: generated callback event_func_2715 processes event block(s) 3246_6. Actions/conditions:
//        3246_6: sets GrapX to ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()+8; sets
//        GrapY to ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()+8; increments
//        Fatigue by 5; plus 9 more actions.
void Frames::event_func_2715()
{
    // event 3246_6 : sets GrapX to ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()+8; sets GrapY to ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()+8; increments Fatigue by 5; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3246_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_grapple_1772))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3246_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(330, str_grapx_1118, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(331, str_grapy_1119, ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(332, str_grappling_1120, 1);
        FrameObject * single_instance_3246_6_0; single_instance_3246_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(usespot_208_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3246_6_0 == NULL)
                    single_instance_3246_6_0 = new_obj;
            }
        }
        grapplingrope_345_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_grapplingrope_345(0, 0), 4);
            grapplingrope_345_instances.add_back();
        }
        for (ObjectIterator it(grapplingrope_345_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        media.play_id(SOUND_THROW_4, 1-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
    }
    event_3246_6_end: ;
}
void Frames::loop_grap_go_6()
{
    event_func_2715();
}
// Function purpose: generated callback event_func_2716 processes event block(s) 3224_6. Actions/conditions:
//        3224_6: adds a usespot 208 instance; sets the selected object's string to Grapple; sets the selected
//        object's horizontal position to ((get_mouse_x()/MathHelper()/16)*16)+16; plus 1 more actions.
void Frames::event_func_2716()
{
    // event 3224_6 : adds a usespot 208 instance; sets the selected object's string to Grapple; sets the selected object's horizontal position to ((get_mouse_x()/MathHelper()/16)*16)+16; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3224_6_end;
        if (!((get_mouse_x()) > (((Active*)get_instance(playerBase_instances))->get_x()))) goto event_3224_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 4);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_grapple_1772);
            ((Active*)*it)->set_x(((get_mouse_x()/MathHelper()/16)*16)+16);
            ((Active*)*it)->set_y((get_mouse_y()/MathHelper()/16)*16);
        }
    }
    event_3224_6_end: ;
}
// Function purpose: generated callback event_func_2717 processes event block(s) 3225_6. Actions/conditions:
//        3225_6: adds a usespot 208 instance; sets the selected object's string to Grapple; sets the selected
//        object's vertical position to (get_mouse_y()/MathHelper()/16)*16; plus 1 more actions.
void Frames::event_func_2717()
{
    // event 3225_6 : adds a usespot 208 instance; sets the selected object's string to Grapple; sets the selected object's vertical position to (get_mouse_y()/MathHelper()/16)*16; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3225_6_end;
        if (!((get_mouse_x()) < (((Active*)get_instance(playerBase_instances))->get_x()))) goto event_3225_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 4);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(9, str_grapple_1772);
            ((Active*)*it)->set_y((get_mouse_y()/MathHelper()/16)*16);
            ((Active*)*it)->set_x(((get_mouse_x()/MathHelper()/16)*16)-16);
        }
    }
    event_3225_6_end: ;
}
// Function purpose: generated callback event_func_2718 processes event block(s) 3226_6. Actions/conditions:
//        3226_6: sets go to 1; sets CurrLay to groundTiles->get_value((playerBase->get_x()/MathHelper()/16),
//        (playerBase->get_y()/MathHelper()/16), 5); sets a stored numeric value.
void Frames::event_func_2718()
{
    // event 3226_6 : sets go to 1; sets CurrLay to groundTiles->get_value((playerBase->get_x()/MathHelper()/16), (playerBase->get_y()/MathHelper()/16), 5); sets a stored numeric value
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3226_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(669, str_go_1773, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(670, str_currlay_1774, ((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 5));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(671, str_targlay_1775, ((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(usespot_208_instances, default_active_instance))->get_x()/MathHelper()/16), (((Active*)get_instance(usespot_208_instances, default_active_instance))->get_y()/MathHelper()/16), 5));
    }
    event_3226_6_end: ;
}
// Function purpose: generated callback event_func_2719 processes event block(s) 3227_6. Actions/conditions:
//        3227_6: sets go to 0.
void Frames::event_func_2719()
{
    // event 3227_6 : sets go to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3227_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(671, str_targlay_1775)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(670, str_currlay_1774)))) goto event_3227_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(669, str_go_1773, 0);
    }
    event_3227_6_end: ;
}
// Function purpose: generated callback event_func_2720 processes event block(s) 3228_6. Actions/conditions:
//        3228_6: sets go to 1.
void Frames::event_func_2720()
{
    // event 3228_6 : sets go to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3228_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(294, str_rooffall_973), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(671, str_targlay_1775))+str__96, 0)) != (-1))) goto event_3228_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(669, str_go_1773, 1);
    }
    event_3228_6_end: ;
}
// Function purpose: generated callback event_func_2721 processes event block(s) 3229_6. Actions/conditions:
//        3229_6: sets go to 2.
void Frames::event_func_2721()
{
    // event 3229_6 : sets go to 2
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3229_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_grapple_1772))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3229_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(669, str_go_1773, 2);
    }
    event_3229_6_end: ;
}
// Function purpose: generated callback event_func_2722 processes event block(s) 3230_6. Actions/conditions:
//        3230_6: sets SpeakText to Misc entry 8; plays a sound or music track.
void Frames::event_func_2722()
{
    // event 3230_6 : sets SpeakText to Misc entry 8; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3230_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(669, str_go_1773)) == (0))) goto event_3230_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_8_325));
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
    event_3230_6_end: ;
}
// Function purpose: generated callback event_func_2723 processes event block(s) 3231_6. Actions/conditions:
//        3231_6: sets SpeakText to Misc entry 10; plays a sound or music track.
void Frames::event_func_2723()
{
    // event 3231_6 : sets SpeakText to Misc entry 10; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3231_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(669, str_go_1773)) == (2))) goto event_3231_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_10_329));
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
    event_3231_6_end: ;
}
// Function purpose: generated callback event_func_2724 processes event block(s) 3232_6. Actions/conditions:
//        3232_6: checks scene is active; game state go; this handler gates a game event without a direct value/object
//        action.
void Frames::event_func_2724()
{
    // event 3232_6 : checks scene is active; game state go; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3232_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(669, str_go_1773)) == (1))) goto event_3232_6_end;
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
        {
            loop_grap_go_running = true;
            int times = int(1);
            loop_grap_go_index = 0;
            while (loop_grap_go_index < times) {
                loop_grap_go_6();
                if (!loop_grap_go_running) break;
                loop_grap_go_index++;
            }
        }
    }
    event_3232_6_end: ;
}
// Function purpose: generated callback event_func_2725 processes event block(s) 3233_6. Actions/conditions:
//        3233_6: removes the selected object.
void Frames::event_func_2725()
{
    // event 3233_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3233_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(9)) == (str_grapple_1772))) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3233_6_end;
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3233_6_end: ;
}
void Frames::loop_grap_horiz_check_6()
{
    event_func_2716();
    event_func_2717();
    event_func_2718();
    event_func_2719();
    event_func_2720();
    event_func_2721();
    event_func_2722();
    event_func_2723();
    event_func_2724();
    event_func_2725();
}
// Function purpose: generated callback event_func_2726 processes event block(s) 2703_6. Actions/conditions:
//        2703_6: sets Pressed_J to 1; sets LClick to 1; sets the selected object's visibility to false; plus 5 more
//        actions.
void Frames::event_func_2726()
{
    // event 2703_6 : sets Pressed_J to 1; sets LClick to 1; sets the selected object's visibility to false; plus 5 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2703_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(321, str_pressed_j_1102, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
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
        {
            loop_craftnotes_des_icons_running = true;
            int times = int(1);
            loop_craftnotes_des_icons_index = 0;
            while (loop_craftnotes_des_icons_index < times) {
                loop_craftnotes_des_icons_6();
                if (!loop_craftnotes_des_icons_running) break;
                loop_craftnotes_des_icons_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_2703_6_end: ;
}
void Frames::loop_cl_journal_6()
{
    event_func_2726();
}
// Function purpose: generated callback event_func_2727 processes event block(s) 3096_6. Actions/conditions:
//        3096_6: sets Reading to 100; increments Fatigue by 5; sets AcType to Action entry 6; plus 1 more actions.
void Frames::event_func_2727()
{
    // event 3096_6 : sets Reading to 100; increments Fatigue by 5; sets AcType to Action entry 6; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3096_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3096_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(360, str_reading_1154, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_6_241));
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
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3096_6_end: ;
}
void Frames::loop_read_check_6()
{
    event_func_1385();
    event_func_2727();
}
// Function purpose: generated callback event_func_2728 processes event block(s) 3320_6. Actions/conditions:
//        3320_6: splits saved text into fields.
void Frames::event_func_2728()
{
    // event 3320_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3320_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(loop_retrieve_mission_loot_index+1), str__254);
    }
    event_3320_6_end: ;
}
// Function purpose: generated callback event_func_2729 processes event block(s) 3321_6. Actions/conditions:
//        3321_6: increments Score_P by 10; changes a stored game value; increments Cash by
//        string_to_number(stringtokenizer_81->get(3)); plus 26 more actions.
void Frames::event_func_2729()
{
    // event 3321_6 : increments Score_P by 10; changes a stored game value; increments Cash by string_to_number(stringtokenizer_81->get(3)); plus 26 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3321_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_3321_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452))))) goto event_3321_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6)) == (number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(647, str_curritem_1747))))) goto event_3321_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3321_6_end;
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
        FrameObject * single_instance_3321_6_0; single_instance_3321_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3321_6_0 == NULL)
                    single_instance_3321_6_0 = new_obj;
            }
        }
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_3321_6_1;
            ((Text*)single_instance_3321_6_0)->set_global_position(parent->get_x() + -110, parent->get_y() + -18);
            pos_end_3321_6_1: ;
        }
        ((Text*)((Text*)single_instance_3321_6_0))->blend_color.set(Color(60, 60, 60));
        ((Text*)((Text*)single_instance_3321_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
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
        FrameObject * single_instance_3321_6_3; single_instance_3321_6_3 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 28, parent->y + 20), parent->layer);
                if (single_instance_3321_6_3 == NULL)
                    single_instance_3321_6_3 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3321_6_3))->force_animation(28);
        FrameObject * single_instance_3321_6_4; single_instance_3321_6_4 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3321_6_3)->x + 3, ((Active*)single_instance_3321_6_3)->y + 3), ((Active*)single_instance_3321_6_3)->layer);
            if (single_instance_3321_6_4 == NULL)
                single_instance_3321_6_4 = new_obj;
        }
        ((Text*)((Text*)single_instance_3321_6_4))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_3321_6_4))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_1_97)));
        ((ListObject*)get_instance(missions_298_instances))->delete_line(loop_retrieve_mission_loot_index+1);
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
            loop_retrieve_mission_loot_running = false;
    
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
    event_3321_6_end: ;
}
void Frames::loop_retrieve_mission_loot_6()
{
    event_func_2728();
    event_func_2729();
}
// Function purpose: generated callback event_func_2730 processes event block(s) 1228_6. Actions/conditions:
//        1228_6: sets the selected object's numeric value to gameVariables->get_value(672, Find_TargZ); sets
//        the selected object's numeric value to 80; sets the object's animation to 0; plus 1 more actions.
void Frames::event_func_2730()
{
    // event 1228_6 : sets the selected object's numeric value to gameVariables->get_value(672, Find_TargZ); sets the selected object's numeric value to 80; sets the object's animation to 0; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1228_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1228_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1228_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(672, str_find_targz_1776));
            ((Active*)*it)->alterables->values.set(21, 80);
        }
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(673, str_timetofight_1777, 0);
            loop_start_fight_target_running = false;
    
    }
    event_1228_6_end: ;
}
void Frames::loop_start_fight_go_6()
{
    event_func_2730();
}
// Function purpose: generated callback event_func_2731 processes event block(s) 1224_6. Actions/conditions:
//        1224_6: sets Find_TargZ to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets Find_TargID to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); sets
//        Find_TargHP to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(7); plus 5 more actions.
void Frames::event_func_2731()
{
    // event 1224_6 : sets Find_TargZ to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets Find_TargID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); sets Find_TargHP to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(7); plus 5 more actions
    {
        if (!(group_code_1)) goto event_1224_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(674, str_startfighttarget_1778)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1224_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(672, str_find_targz_1776, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(675, str_find_targid_1779, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(676, str_find_targhp_1780, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(677, str_find_targx_1781, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(678, str_find_targy_1782, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
    }
    event_1224_6_end: ;
}
// Function purpose: generated callback event_func_2732 processes event block(s) 1225_6. Actions/conditions:
//        1225_6: sets Find_See to 0; sets a stored numeric value; sets the selected object's horizontal position to
//        gameVariables->get_value(681, Find_charX); plus 6 more actions.
void Frames::event_func_2732()
{
    // event 1225_6 : sets Find_See to 0; sets a stored numeric value; sets the selected object's horizontal position to gameVariables->get_value(681, Find_charX); plus 6 more actions
    {
        if (!(group_code_1)) goto event_1225_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(679, str_find_see_1783, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(680, str_find_range_1784, get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(681, str_find_charx_1785), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(682, str_find_chary_1786), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(677, str_find_targx_1781), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(678, str_find_targy_1782)));
        ((Active*)get_instance(los_198_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(681, str_find_charx_1785));
        ((Active*)get_instance(los_198_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(682, str_find_chary_1786));
        ((Active*)get_instance(los_198_instances))->set_x_scale(((AssociateArray*)get_instance(gameVariables_instances))->get_value(680, str_find_range_1784));
        ((Active*)get_instance(los_198_instances))->set_angle(get_angle_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(681, str_find_charx_1785), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(682, str_find_chary_1786), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(677, str_find_targx_1781), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(678, str_find_targy_1782)), 0);
    }
    event_1225_6_end: ;
}
// Function purpose: generated callback event_func_2733 processes event block(s) 1226_6. Actions/conditions:
//        1226_6: sets Find_See to 1.
void Frames::event_func_2733()
{
    // event 1226_6 : sets Find_See to 1
    {
        if (!(group_code_1)) goto event_1226_6_end;
        los_198_instances.clear_selection();
        if (!check_not_overlap(los_198_instances, qualifier_4)) goto event_1226_6_end;
        if (!check_not_overlap(los_198_instances, qualifier_19)) goto event_1226_6_end;
        if (!check_not_overlap(los_198_instances, qualifier_18)) goto event_1226_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(679, str_find_see_1783, 1);
    }
    event_1226_6_end: ;
}
// Function purpose: generated callback event_func_2734 processes event block(s) 1227_6. Actions/conditions:
//        1227_6: checks scene is active; game state Find_TargHP; game state ConLook; game state Find_See; this
//        handler gates a game event without a direct value/object action.
void Frames::event_func_2734()
{
    // event 1227_6 : checks scene is active; game state Find_TargHP; game state ConLook; game state Find_See; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1227_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(676, str_find_targhp_1780)) > (0))) goto event_1227_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)) != (((AssociateArray*)get_instance(gameVariables_instances))->get_value(675, str_find_targid_1779)))) goto event_1227_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(679, str_find_see_1783)) == (1))) goto event_1227_6_end;
        {
            loop_start_fight_go_running = true;
            int times = int(1);
            loop_start_fight_go_index = 0;
            while (loop_start_fight_go_index < times) {
                loop_start_fight_go_6();
                if (!loop_start_fight_go_running) break;
                loop_start_fight_go_index++;
            }
        }
    }
    event_1227_6_end: ;
}
void Frames::loop_start_fight_target_6()
{
    event_func_2731();
    event_func_2732();
    event_func_2733();
    event_func_2734();
}
// Function purpose: generated callback event_func_2735 processes event block(s) 1279_6. Actions/conditions:
//        1279_6: sets the selected object's direction to get_direction_int(selected object->x, selected object->y,
//        target_177->x + 0, target_177->y + 0); sets the object's animation to 6; plays a sound or music track.
void Frames::event_func_2735()
{
    // event 1279_6 : sets the selected object's direction to get_direction_int(selected object->x, selected object->y, target_177->x + 0, target_177->y + 0); sets the object's animation to 6; plays a sound or music track
    {
        if (!(group_code_1)) goto event_1279_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(target_177_instances))->x + 0, ((Active*)get_instance(target_177_instances))->y + 0));
            ((Active*)*it)->force_animation(6);
        }
        media.play_id(SOUND_PUNCH_NEW_21, 1-1);
    }
    event_1279_6_end: ;
}
void Frames::loop_you_hit_anim_6()
{
    event_func_2735();
}
// Function purpose: generated callback event_func_2736 processes event block(s) 1255_6. Actions/conditions:
//        1255_6: sets the selected object's visibility to false; sets the selected object's numeric value to 0.
void Frames::event_func_2736()
{
    // event 1255_6 : sets the selected object's visibility to false; sets the selected object's numeric value to 0
    {
        if (!(group_code_1)) goto event_1255_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1255_6_end;
        ((Active*)get_instance(target_177_instances))->set_visible(false);
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
            loop_you_attack_running = false;
    
    }
    event_1255_6_end: ;
}
// Function purpose: generated callback event_func_2737 processes event block(s) 1256_6. Actions/conditions:
//        1256_6: sets a stored numeric value.
void Frames::event_func_2737()
{
    // event 1256_6 : sets a stored numeric value
    {
        if (!(group_code_1)) goto event_1256_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1256_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(683, str_targdist_1787, ((get_max(get_abs((((Active*)get_instance(playerBase_instances))->get_x()-((Active*)get_single(qualifier_14, default_active_instance))->get_x())), get_abs((((Active*)get_instance(playerBase_instances))->get_y()-((Active*)get_single(qualifier_14, default_active_instance))->get_y()))))*0.941246)+((get_min(get_abs((((Active*)get_instance(playerBase_instances))->get_x()-((Active*)get_single(qualifier_14, default_active_instance))->get_x())), get_abs((((Active*)get_instance(playerBase_instances))->get_y()-((Active*)get_single(qualifier_14, default_active_instance))->get_y()))))*0.41));
    }
    event_1256_6_end: ;
}
// Function purpose: generated callback event_func_2738 processes event block(s) 1257_6. Actions/conditions:
//        1257_6: increments Heat by 25.
void Frames::event_func_2738()
{
    // event 1257_6 : increments Heat by 25
    {
        if (!(group_code_1)) goto event_1257_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(683, str_targdist_1787)) <= (20))) goto event_1257_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (-1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1257_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 25);
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
    event_1257_6_end: ;
}
// Function purpose: generated callback event_func_2739 processes event block(s) 1258_6. Actions/conditions:
//        1258_6: splits saved text into fields; sets CurrWeap to string_to_number(stringtokenizer_81->get(0)).
void Frames::event_func_2739()
{
    // event 1258_6 : splits saved text into fields; sets CurrWeap to string_to_number(stringtokenizer_81->get(0))
    {
        if (!(group_code_1)) goto event_1258_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(684, str_currweap_1788, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
    }
    event_1258_6_end: ;
}
// Function purpose: generated callback event_func_2740 processes event block(s) 1259_6. Actions/conditions:
//        1259_6: sets CurrWeap to -1.
void Frames::event_func_2740()
{
    // event 1259_6 : sets CurrWeap to -1
    {
        if (!(group_code_1)) goto event_1259_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(684, str_currweap_1788)) <= (0))) goto event_1259_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(684, str_currweap_1788, -1);
    }
    event_1259_6_end: ;
}
// Function purpose: generated callback event_func_2741 processes event block(s) 1260_6. Actions/conditions:
//        1260_6: changes a stored game value.
void Frames::event_func_2741()
{
    // event 1260_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1260_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(683, str_targdist_1787)) <= (20))) goto event_1260_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1260_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(12, 15);
        }
    }
    event_1260_6_end: ;
}
// Function purpose: generated callback event_func_2742 processes event block(s) 1261_6. Actions/conditions:
//        1261_6: activates the Attacked event group; sets SpeakID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 1 more actions.
void Frames::event_func_2742()
{
    // event 1261_6 : activates the Attacked event group; sets SpeakID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakCol to 0; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1261_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(683, str_targdist_1787)) <= (20))) goto event_1261_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (-1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1261_6_end;
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
    event_1261_6_end: ;
}
// Function purpose: generated callback event_func_2743 processes event block(s) 1262_6. Actions/conditions:
//        1262_6: increments Fatigue by 2; splits saved text into fields; splits saved text into fields; plus 25 more
//        actions.
void Frames::event_func_2743()
{
    // event 1262_6 : increments Fatigue by 2; splits saved text into fields; splits saved text into fields; plus 25 more actions
    {
        if (!(group_code_1)) goto event_1262_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(683, str_targdist_1787)) <= (20))) goto event_1262_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(3)) <= (0))) goto event_1262_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1262_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1262_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 2);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704), str__96);
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25))), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(685, str_the_dmg_1789, 1+(((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/20)+((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str_weapon_704));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(685, str_the_dmg_1789, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(685, str_the_dmg_1789)-(((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0), str_outfit_505)-1));
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(3, 55-(((Active*)get_instance(playerBase_instances))->alterables->values.get(9)/MathHelper()/3));
        // icache destruction
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(qualifier_14, it.current_index))->x + 0, ((Active*)get_single(qualifier_14, it.current_index))->y + 0));
            ((Active*)*it)->force_animation(6);
        }
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(22, 0);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(playerBase_instances))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(playerBase_instances))->get_y());
            ((Active*)*it)->alterables->values.set(2, -1);
            ((Active*)*it)->alterables->values.set(21, 80);
            ((Active*)*it)->alterables->values.set(4, 100);
            ((Active*)*it)->alterables->values.sub(7, get_max(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(685, str_the_dmg_1789)));
        }
        FrameObject * single_instance_1262_6_0; single_instance_1262_6_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fx_185(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1262_6_0 == NULL)
                    single_instance_1262_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1262_6_0))->destroy();
        FrameObject * single_instance_1262_6_1; single_instance_1262_6_1 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dmgagainst_253(parent->x + -15, parent->y + -20), parent->layer);
                if (single_instance_1262_6_1 == NULL)
                    single_instance_1262_6_1 = new_obj;
            }
        }
        ((TextBlitter*)((TextBlitter*)single_instance_1262_6_1))->set_text(str__1405+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(685, str_the_dmg_1789)));
        ((TextBlitter*)((TextBlitter*)single_instance_1262_6_1))->set_x(((TextBlitter*)single_instance_1262_6_1)->get_x()+randrange_event(10));
        ((TextBlitter*)((TextBlitter*)single_instance_1262_6_1))->set_layer(6-1);
        dust_223_instances.empty_selection();
        // select single: false true false
        for (QualifierIterator p_it(qualifier_14); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + -6, parent->y + 6), parent->layer);
                dust_223_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 6, parent->y + 6), parent->layer);
                dust_223_instances.add_back();
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(515, str_inrange_1413, 0);
        {
            loop_you_attack_deadcheck_running = true;
            int times = int(1);
            loop_you_attack_deadcheck_index = 0;
            while (loop_you_attack_deadcheck_index < times) {
                loop_you_attack_deadcheck_6();
                if (!loop_you_attack_deadcheck_running) break;
                loop_you_attack_deadcheck_index++;
            }
        }
        {
            loop_you_hit_anim_running = true;
            int times = int(1);
            loop_you_hit_anim_index = 0;
            while (loop_you_hit_anim_index < times) {
                loop_you_hit_anim_6();
                if (!loop_you_hit_anim_running) break;
                loop_you_hit_anim_index++;
            }
        }
    }
    event_1262_6_end: ;
}
void Frames::loop_you_attack_6()
{
    event_func_2736();
    event_func_2737();
    event_func_2738();
    event_func_2739();
    event_func_2740();
    event_func_2741();
    event_func_2742();
    event_func_2743();
}
// Function purpose: generated callback event_func_2744 processes event block(s) 3284_6. Actions/conditions:
//        3284_6: sets the selected object's numeric value to 97; enables flag -2 (legacy object-specific state;
//        original label was not retained) on the selected object; sets the selected object's numeric value to 1; plus
//        6 more actions.
void Frames::event_func_2744()
{
    // event 3284_6 : sets the selected object's numeric value to 97; enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; sets the selected object's numeric value to 1; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3284_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3284_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (96))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3284_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 97);
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->alterables->values.set(6, 1);
        }
        FrameObject * single_instance_3284_6_0; single_instance_3284_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_3284_6_0 == NULL)
                    single_instance_3284_6_0 = new_obj;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(358, str_fatigue_36, 10);
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_3284_6_end: ;
}
void Frames::loop_make_toothshiv_6()
{
    event_func_1385();
    event_func_2744();
}
// Function purpose: generated callback event_func_2745 processes event block(s) 1183_6. Actions/conditions:
//        1183_6: activates the SeeEscape_Call event group; sets CallX to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); sets CallY to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y(); plus 8 more actions.
void Frames::event_func_2745()
{
    // event 1183_6 : activates the SeeEscape_Call event group; sets CallX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); sets CallY to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y(); plus 8 more actions
    {
        if (!(group_code_1)) goto event_1183_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(107, str_inmatesees_664)) > (0))) goto event_1183_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1183_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_seeescape_call_1399);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(408, str_callx_1224, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(409, str_cally_1225, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 30);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
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
            loop_inmate_calls_guard_running = true;
            int times = int(1);
            loop_inmate_calls_guard_index = 0;
            while (loop_inmate_calls_guard_index < times) {
                loop_inmate_calls_guard_6();
                if (!loop_inmate_calls_guard_running) break;
                loop_inmate_calls_guard_index++;
            }
        }
    }
    event_1183_6_end: ;
}
void Frames::loop_inmate_alert_6()
{
    event_func_2745();
}
// Function purpose: generated callback event_func_2746 processes event block(s) 3075_6. Actions/conditions:
//        3075_6: sets Cutting to 100; sets AcType to Action entry 4; sets the object's animation to 14.
void Frames::event_func_2746()
{
    // event 3075_6 : sets Cutting to 100; sets AcType to Action entry 4; sets the object's animation to 14
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3075_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3075_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(154, str_cutting_727, 100);
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
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_4_161));
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
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
    }
    event_3075_6_end: ;
}
void Frames::loop_cut_slats_check_6()
{
    event_func_1385();
    event_func_2746();
}
// Function purpose: generated callback event_func_2747 processes event block(s) 3593_6. Actions/conditions:
//        3593_6: adds a active10 293 instance; sets the object position in the world; moves the selected object
//        behind other objects; plus 1 more actions.
void Frames::event_func_2747()
{
    // event 3593_6 : adds a active10 293 instance; sets the object position in the world; moves the selected object behind other objects; plus 1 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3593_6_end;
        if (!((randrange_event(4)+1) == (1))) goto event_3593_6_end;
        active10_293_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_active10_293(1006, 665), 0);
            active10_293_instances.add_back();
        }
        for (ObjectIterator it(active10_293_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(usespot_208_instances, it.current_index));
            if (parent == NULL) goto pos_end_3593_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3593_6_1: ;
        }
        for (ObjectIterator it(active10_293_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
            ((Active*)*it)->alterables->values.set(2, (randrange_event(3)*10)+30);
        }
    }
    event_3593_6_end: ;
}
void Frames::loop_stone_6()
{
    event_func_2747();
}
// Function purpose: generated callback event_func_2748 processes event block(s) 3591_6. Actions/conditions:
//        3591_6: sets a stored numeric value.
void Frames::event_func_2748()
{
    // event 3591_6 : sets a stored numeric value
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3591_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3591_6_end;
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_single(usespot_208_instances, default_active_instance))->get_x(), ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y(), 0))+((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(686, str_useditem_1790)), str_digging_726), ((Active*)get_single(usespot_208_instances, default_active_instance))->get_x(), ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y(), 0);
    }
    event_3591_6_end: ;
}
// Function purpose: generated callback event_func_2749 processes event block(s) 3592_6. Actions/conditions:
//        3592_6: adds a soil 173 instance; sets the object position in the world; draws the selected image or tile;
//        plus 1 more actions.
void Frames::event_func_2749()
{
    // event 3592_6 : adds a soil 173 instance; sets the object position in the world; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3592_6_end;
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!usespot_208_instances.has_selection()) goto event_3592_6_end;
        if (!((((ArrayObject*)get_instance(digarray_228_instances))->get_value(((Active*)get_single(usespot_208_instances, default_active_instance))->get_x(), ((Active*)get_single(usespot_208_instances, default_active_instance))->get_y(), 0)) >= (25))) goto event_3592_6_end;
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_173(-16, -16), 0);
            soil_173_instances.add_back();
        }
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(usespot_208_instances, it.current_index));
            if (parent == NULL) goto pos_end_3592_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3592_6_1: ;
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
            loop_stone_running = true;
            int times = int(1);
            loop_stone_index = 0;
            while (loop_stone_index < times) {
                loop_stone_6();
                if (!loop_stone_running) break;
                loop_stone_index++;
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
    event_3592_6_end: ;
}
void Frames::loop_digbelow_6()
{
    event_func_2748();
    event_func_2749();
    event_func_2605();
    event_func_2606();
    event_func_2607();
}
// Function purpose: generated callback event_func_2750 processes event block(s) 968_6. Actions/conditions:
//        968_6: checks scene is active; skips if the event-specific game state condition is met; game state
//        NPC_Outfit_; this handler gates a game event without a direct val.
void Frames::event_func_2750()
{
    // event 968_6 : checks scene is active; skips if the event-specific game state condition is met; game state NPC_Outfit_; this handler gates a game event without a direct val
    {
        if (!(group_code_1 && group_code_pathfinding_missing_equip_1)) goto event_968_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_check_g_outfits_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_968_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)))) == (empty_string))) goto event_968_6_end;
        {
            loop_found_naked_running = true;
            int times = int(1);
            loop_found_naked_index = 0;
            while (loop_found_naked_index < times) {
                loop_found_naked_6();
                if (!loop_found_naked_running) break;
                loop_found_naked_index++;
            }
        }
    }
    event_968_6_end: ;
}
void Frames::loop_check_g_outfits_6()
{
    event_func_2750();
}
// Function purpose: generated callback event_func_2751 processes event block(s) 3036_6. Actions/conditions:
//        3036_6: creates a usespot 208 object; sets the object's animation to 16; sets Weeding to 100; plus 1 more
//        actions.
void Frames::event_func_2751()
{
    // event 3036_6 : creates a usespot 208 object; sets the object's animation to 16; sets Weeding to 100; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3036_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) < (100))) goto event_3036_6_end;
        FrameObject * single_instance_3036_6_0; single_instance_3036_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(cursor_178_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_usespot_208(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3036_6_0 == NULL)
                    single_instance_3036_6_0 = new_obj;
            }
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(16);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(433, str_weeding_1276, 100);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(402, str_actype_1216, ((INI*)get_instance(translationData_instances))->get_string(str_action_857, str_8_325));
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
    event_3036_6_end: ;
}
void Frames::loop_weed_check_6()
{
    event_func_1385();
    event_func_2751();
}
// Function purpose: generated callback event_func_2752 processes event block(s) 1608_6. Actions/conditions:
//        1608_6: sets SpeakCol to 1; sets SpeakID to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(25); sets SpeakText to Dismissed!.
void Frames::event_func_2752()
{
    // event 1608_6 : sets SpeakCol to 1; sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); sets SpeakText to Dismissed!
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1608_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1608_6_end;
        waypointrollcall2_189_instances.clear_selection();
        if (!check_overlap(guardBase_instances, waypointrollcall2_189_instances)) goto event_1608_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1608_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, str_dismissed_1791);
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
    event_1608_6_end: ;
}
void Frames::loop_dismissed_txt_6()
{
    event_func_2752();
}
// Function purpose: generated callback event_func_2753 processes event block(s) 3406_6. Actions/conditions:
//        3406_6: sets get_mouse_x()/MathHelper()/16 to get_mouse_y()/MathHelper()/16.
void Frames::event_func_2753()
{
    // event 3406_6 : sets get_mouse_x()/MathHelper()/16 to get_mouse_y()/MathHelper()/16
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3406_6_end;
        if (!((((ArrayObject*)get_instance(fencearray_265_instances))->get_value(get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1)) == (0))) goto event_3406_6_end;
        ((ArrayObject*)get_instance(fencearray_265_instances))->set_value(-1, get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1);
    }
    event_3406_6_end: ;
}
// Function purpose: generated callback event_func_2754 processes event block(s) 3408_6. Actions/conditions:
//        3408_6: draws the selected image or tile.
void Frames::event_func_2754()
{
    // event 3408_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3408_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3408_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (21))) goto event_3408_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 0, 320, 16, 16, 1);
    }
    event_3408_6_end: ;
}
// Function purpose: generated callback event_func_2755 processes event block(s) 3409_6. Actions/conditions:
//        3409_6: draws the selected image or tile.
void Frames::event_func_2755()
{
    // event 3409_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3409_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3409_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (20))) goto event_3409_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 0, 336, 16, 16, 1);
    }
    event_3409_6_end: ;
}
// Function purpose: generated callback event_func_2756 processes event block(s) 3410_6. Actions/conditions:
//        3410_6: draws the selected image or tile.
void Frames::event_func_2756()
{
    // event 3410_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3410_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3410_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (90))) goto event_3410_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 48, 224, 16, 16, 1);
    }
    event_3410_6_end: ;
}
// Function purpose: generated callback event_func_2757 processes event block(s) 3411_6. Actions/conditions:
//        3411_6: draws the selected image or tile.
void Frames::event_func_2757()
{
    // event 3411_6 : draws the selected image or tile
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3411_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_new_tiles_554)) == (0))) goto event_3411_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(659, str_walltile_1759)) == (91))) goto event_3411_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 48, 240, 16, 16, 1);
    }
    event_3411_6_end: ;
}
void Frames::loop_paint_fence_6()
{
    event_func_2753();
    event_func_2754();
    event_func_2755();
    event_func_2756();
    event_func_2757();
    event_func_2667();
    event_func_2668();
}
// Function purpose: generated callback event_func_2758 processes event block(s) 3691_6. Actions/conditions:
//        3691_6: adds a itemshud 210 instance; sets the selected object's numeric value to 67; sets the selected
//        object's numeric value to -1; plus 10 more actions.
void Frames::event_func_2758()
{
    // event 3691_6 : adds a itemshud 210 instance; sets the selected object's numeric value to 67; sets the selected object's numeric value to -1; plus 10 more actions
    {
        if (!(group_code_1)) goto event_3691_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3691_6_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 67);
            ((Active*)*it)->alterables->values.set(7, -1);
            ((Active*)*it)->alterables->values.set(6, 1);
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3691_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3691_6_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(-2);
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), str_67_1_1792);
    }
    event_3691_6_end: ;
}
void Frames::loop_collect_vent_6()
{
    event_func_2758();
}
// Function purpose: generated callback event_func_2759 processes event block(s) 3624_6. Actions/conditions:
//        3624_6: checks scene is active; game state vent_hp; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_2759()
{
    // event 3624_6 : checks scene is active; game state vent_hp; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_unscrewing_2_1)) goto event_3624_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(687, str_vent_hp_1793)) <= (0))) goto event_3624_6_end;
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
            loop_collect_vent_running = true;
            int times = int(1);
            loop_collect_vent_index = 0;
            while (loop_collect_vent_index < times) {
                loop_collect_vent_6();
                if (!loop_collect_vent_running) break;
                loop_collect_vent_index++;
            }
        }
    }
    event_3624_6_end: ;
}
void Frames::loop_check_vent_gone_6()
{
    event_func_2759();
}
// Function purpose: generated callback event_func_2760 processes event block(s) 4043_6. Actions/conditions:
//        4043_6: sets the selected object's horizontal position to gameVariables->get_value(453, wX)+8; sets
//        the selected object's vertical position to gameVariables->get_value(454, wY).
void Frames::event_func_2760()
{
    // event 4043_6 : sets the selected object's horizontal position to gameVariables->get_value(453, wX)+8; sets the selected object's vertical position to gameVariables->get_value(454, wY)
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4043_6_end;
        ((Active*)get_instance(active_44_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(453, str_wx_1321)+8);
        ((Active*)get_instance(active_44_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(454, str_wy_1322));
        {
            loop_flood_go_running = true;
            int times = int(1);
            loop_flood_go_index = 0;
            while (loop_flood_go_index < times) {
                loop_flood_go_6();
                if (!loop_flood_go_running) break;
                loop_flood_go_index++;
            }
        }
    }
    event_4043_6_end: ;
}
void Frames::loop_flood_right_6()
{
    event_func_2760();
}
// Function purpose: generated callback event_func_2761 processes event block(s) 1774_6. Actions/conditions:
//        1774_6: unlocks the Jobsworth achievement.
void Frames::event_func_2761()
{
    // event 1774_6 : unlocks the Jobsworth achievement
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_unlocked(str_jobsworth_1794)) == (0))) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quotajanitor_1795)) > (0))) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quotagardening_1796)) > (0))) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quotawoodshop_1797)) > (0))) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quotametalshop_1798)) > (0))) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quotatailor_1799)) > (0))) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quotalaundry_1800)) > (0))) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quotadeliveries_1801)) > (0))) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quotamailman_1802)) > (0))) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quotalibrary_1803)) > (0))) goto event_1774_6_end;
        if (!((((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quotakitchen_1804)) > (0))) goto event_1774_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_jobsworth_1794);
    }
    event_1774_6_end: ;
}
void Frames::loop_check_job_achieve_6()
{
    event_func_2761();
}
// Function purpose: generated callback event_func_2762 processes event block(s) 1776_6. Actions/conditions:
//        1776_6: increments Cash by 5+(5*gameVariables->get_value(78, JobPayMod)).
void Frames::event_func_2762()
{
    // event 1776_6 : increments Cash by 5+(5*gameVariables->get_value(78, JobPayMod))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1776_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_1776_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, 5+(5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_jobpaymod_578)));
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
    }
    event_1776_6_end: ;
}
// Function purpose: generated callback event_func_2763 processes event block(s) 1777_6. Actions/conditions:
//        1777_6: increments Cash by 10+(5*gameVariables->get_value(78, JobPayMod)).
void Frames::event_func_2763()
{
    // event 1777_6 : increments Cash by 10+(5*gameVariables->get_value(78, JobPayMod))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1777_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_gardening_43))) goto event_1777_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, 10+(5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_jobpaymod_578)));
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
    }
    event_1777_6_end: ;
}
// Function purpose: generated callback event_func_2764 processes event block(s) 1778_6. Actions/conditions:
//        1778_6: increments Cash by 15+(5*gameVariables->get_value(78, JobPayMod)).
void Frames::event_func_2764()
{
    // event 1778_6 : increments Cash by 15+(5*gameVariables->get_value(78, JobPayMod))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1778_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_1778_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, 15+(5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_jobpaymod_578)));
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
    }
    event_1778_6_end: ;
}
// Function purpose: generated callback event_func_2765 processes event block(s) 1779_6. Actions/conditions:
//        1779_6: increments Cash by 20+(5*gameVariables->get_value(78, JobPayMod)).
void Frames::event_func_2765()
{
    // event 1779_6 : increments Cash by 20+(5*gameVariables->get_value(78, JobPayMod))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1779_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_1779_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, 20+(5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_jobpaymod_578)));
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
    }
    event_1779_6_end: ;
}
// Function purpose: generated callback event_func_2766 processes event block(s) 1780_6. Actions/conditions:
//        1780_6: increments Cash by 25+(5*gameVariables->get_value(78, JobPayMod)).
void Frames::event_func_2766()
{
    // event 1780_6 : increments Cash by 25+(5*gameVariables->get_value(78, JobPayMod))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1780_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_library_25))) goto event_1780_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, 25+(5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_jobpaymod_578)));
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
    }
    event_1780_6_end: ;
}
// Function purpose: generated callback event_func_2767 processes event block(s) 1781_6. Actions/conditions:
//        1781_6: increments Cash by 30+(5*gameVariables->get_value(78, JobPayMod)).
void Frames::event_func_2767()
{
    // event 1781_6 : increments Cash by 30+(5*gameVariables->get_value(78, JobPayMod))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1781_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_1781_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, 30+(5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_jobpaymod_578)));
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
    }
    event_1781_6_end: ;
}
// Function purpose: generated callback event_func_2768 processes event block(s) 1782_6. Actions/conditions:
//        1782_6: increments Cash by 35+(5*gameVariables->get_value(78, JobPayMod)).
void Frames::event_func_2768()
{
    // event 1782_6 : increments Cash by 35+(5*gameVariables->get_value(78, JobPayMod))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1782_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_1782_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, 35+(5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_jobpaymod_578)));
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
    }
    event_1782_6_end: ;
}
// Function purpose: generated callback event_func_2769 processes event block(s) 1783_6. Actions/conditions:
//        1783_6: increments Cash by 40+(5*gameVariables->get_value(78, JobPayMod)).
void Frames::event_func_2769()
{
    // event 1783_6 : increments Cash by 40+(5*gameVariables->get_value(78, JobPayMod))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1783_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_woodshop_21))) goto event_1783_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, 40+(5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_jobpaymod_578)));
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
    }
    event_1783_6_end: ;
}
// Function purpose: generated callback event_func_2770 processes event block(s) 1784_6. Actions/conditions:
//        1784_6: increments Cash by 45+(5*gameVariables->get_value(78, JobPayMod)).
void Frames::event_func_2770()
{
    // event 1784_6 : increments Cash by 45+(5*gameVariables->get_value(78, JobPayMod))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1784_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_1784_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, 45+(5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_jobpaymod_578)));
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
    }
    event_1784_6_end: ;
}
// Function purpose: generated callback event_func_2771 processes event block(s) 1785_6. Actions/conditions:
//        1785_6: increments Cash by 50+(5*gameVariables->get_value(78, JobPayMod)).
void Frames::event_func_2771()
{
    // event 1785_6 : increments Cash by 50+(5*gameVariables->get_value(78, JobPayMod))
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1785_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_metalshop_35))) goto event_1785_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(219, str_cash_11, 50+(5*((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_jobpaymod_578)));
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
    }
    event_1785_6_end: ;
}
// Function purpose: generated callback event_func_2772 processes event block(s) 1786_6. Actions/conditions:
//        1786_6: sets hsac to gameVariables->get_value(219, Cash)*2.
void Frames::event_func_2772()
{
    // event 1786_6 : sets hsac to gameVariables->get_value(219, Cash)*2
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1786_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_1786_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(220, str_hsac_827, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*2);
    }
    event_1786_6_end: ;
}
void Frames::loop_payme_6()
{
    event_func_2762();
    event_func_2763();
    event_func_2764();
    event_func_2765();
    event_func_2766();
    event_func_2767();
    event_func_2768();
    event_func_2769();
    event_func_2770();
    event_func_2771();
    event_func_2772();
}
// Function purpose: generated callback event_func_2773 processes event block(s) 1772_6. Actions/conditions:
//        1772_6: stores an integer value; stores player data; sets QuotaStatAdd to 1.
void Frames::event_func_2773()
{
    // event 1772_6 : stores an integer value; stores player data; sets QuotaStatAdd to 1
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1772_6_end;
        if (!((global_values->get(16)) == (1))) goto event_1772_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(688, str_quotastatadd_1805)) == (0))) goto event_1772_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->set_int(str_quota_1806+((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478), ((SteamObject*)get_instance(steamworks2_469_instances))->get_int(str_quota_1806+((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478))+1);
        ((SteamObject*)get_instance(steamworks2_469_instances))->store_user_data();
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(688, str_quotastatadd_1805, 1);
        {
            loop_check_job_achieve_running = true;
            int times = int(1);
            loop_check_job_achieve_index = 0;
            while (loop_check_job_achieve_index < times) {
                loop_check_job_achieve_6();
                if (!loop_check_job_achieve_running) break;
                loop_check_job_achieve_index++;
            }
        }
    }
    event_1772_6_end: ;
}
// Function purpose: generated callback event_func_2774 processes event block(s) 1773_6. Actions/conditions:
//        1773_6: unlocks the HandsDirty achievement.
void Frames::event_func_2774()
{
    // event 1773_6 : unlocks the HandsDirty achievement
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1773_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1773_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_1773_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_handsdirty_1807)) goto event_1773_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_handsdirty_1807);
    }
    event_1773_6_end: ;
}
// Function purpose: generated callback event_func_2775 processes event block(s) 1775_6. Actions/conditions:
//        1775_6: sets the object's animation to 1; increments Score_P by 20; plays a sound or music track.
void Frames::event_func_2775()
{
    // event 1775_6 : sets the object's animation to 1; increments Score_P by 20; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1775_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_jobquota_480))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!activityPanel_instances.has_selection()) goto event_1775_6_end;
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        {
            loop_payme_running = true;
            int times = int(1);
            loop_payme_index = 0;
            while (loop_payme_index < times) {
                loop_payme_6();
                if (!loop_payme_running) break;
                loop_payme_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, 20);
        media.play_id(SOUND_HP_10, 1-1);
    }
    event_1775_6_end: ;
}
