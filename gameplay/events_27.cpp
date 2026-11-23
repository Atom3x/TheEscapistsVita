#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_attack_em_6()
{
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_2068();
    event_func_2069();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_2074();
    event_func_2075();
    event_func_2076();
    event_func_2077();
    event_func_2078();
    event_func_2071();
}
// Function purpose: generated callback event_func_2079 processes event block(s) 1299_6. Actions/conditions:
//        1299_6: sets TargetX to ((Active*)get_single(qualifier_5, default_active_instance))->get_x(); sets TargetY
//        to ((Active*)get_single(qualifier_5, default_active_instance))->get_y(); sets TargetLayer to
//        ((Active*)get_single(qualifier_5, default_active_instance))->layer->index+1; plus 5 more actions.
void Frames::event_func_2079()
{
    // event 1299_6 : sets TargetX to ((Active*)get_single(qualifier_5, default_active_instance))->get_x(); sets TargetY to ((Active*)get_single(qualifier_5, default_active_instance))->get_y(); sets TargetLayer to ((Active*)get_single(qualifier_5, default_active_instance))->layer->index+1; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1299_6_end;
        qualifier_5.clear_selection();
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
        }
        if (!qualifier_5.has_selection()) goto event_1299_6_end;
        if (!check_not_overlap(qualifier_5, qualifier_18)) goto event_1299_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(376, str_targetx_1173, ((Active*)get_single(qualifier_5, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(377, str_targety_1174, ((Active*)get_single(qualifier_5, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(381, str_targetlayer_1179, ((Active*)get_single(qualifier_5, default_active_instance))->layer->index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(382, str_targethp_1180, ((Active*)get_single(qualifier_5, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(383, str_range_1181, get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(374, str_attackerx_1171), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(375, str_attackery_1172), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174)));
    }
    event_1299_6_end: ;
}
// Function purpose: generated callback event_func_2080 processes event block(s) 1300_6. Actions/conditions:
//        1300_6: sets TargetX to ((Active*)get_single(qualifier_5, default_active_instance))->get_x(); sets TargetY
//        to ((Active*)get_single(qualifier_5, default_active_instance))->get_y()+8; sets TargetLayer to
//        ((Active*)get_single(qualifier_5, default_active_instance))->layer->index+1; plus 5 more actions.
void Frames::event_func_2080()
{
    // event 1300_6 : sets TargetX to ((Active*)get_single(qualifier_5, default_active_instance))->get_x(); sets TargetY to ((Active*)get_single(qualifier_5, default_active_instance))->get_y()+8; sets TargetLayer to ((Active*)get_single(qualifier_5, default_active_instance))->layer->index+1; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1300_6_end;
        qualifier_5.clear_selection();
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(380, str_targetz_1178)))) { it.deselect(); continue; }
        }
        if (!qualifier_5.has_selection()) goto event_1300_6_end;
        qualifier_18.clear_selection();
        if (!check_overlap(qualifier_5, qualifier_18)) goto event_1300_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(376, str_targetx_1173, ((Active*)get_single(qualifier_5, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(377, str_targety_1174, ((Active*)get_single(qualifier_5, default_active_instance))->get_y()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(381, str_targetlayer_1179, ((Active*)get_single(qualifier_5, default_active_instance))->layer->index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(382, str_targethp_1180, ((Active*)get_single(qualifier_5, default_active_instance))->alterables->values.get(7));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(383, str_range_1181, get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(374, str_attackerx_1171), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(375, str_attackery_1172), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174)));
    }
    event_1300_6_end: ;
}
// Function purpose: generated callback event_func_2081 processes event block(s) 1301_6. Actions/conditions:
//        1301_6: sets CanSee to -1; stops the object's movement; sets the selected object's numeric value to 0; plus
//        6 more actions.
void Frames::event_func_2081()
{
    // event 1301_6 : sets CanSee to -1; stops the object's movement; sets the selected object's numeric value to 0; plus 6 more actions
    {
        if (!(group_code_1)) goto event_1301_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(382, str_targethp_1180)) <= (0))) goto event_1301_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1301_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, -1);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
        }
    MoveIt::stop(qualifier_14);}
    event_1301_6_end: ;
}
// Function purpose: generated callback event_func_2082 processes event block(s) 1302_6. Actions/conditions:
//        1302_6: sets CanSee to -1; stops the object's movement; sets the selected object's numeric value to 0; plus
//        6 more actions.
void Frames::event_func_2082()
{
    // event 1302_6 : sets CanSee to -1; stops the object's movement; sets the selected object's numeric value to 0; plus 6 more actions
    {
        if (!(group_code_1)) goto event_1302_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(381, str_targetlayer_1179)) != (2))) goto event_1302_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1302_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, -1);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
        }
    MoveIt::stop(qualifier_14);}
    event_1302_6_end: ;
}
// Function purpose: generated callback event_func_2083 processes event block(s) 1303_6. Actions/conditions:
//        1303_6: sets CanSee to -1; stops the object's movement; sets the selected object's numeric value to 0; plus
//        6 more actions.
void Frames::event_func_2083()
{
    // event 1303_6 : sets CanSee to -1; stops the object's movement; sets the selected object's numeric value to 0; plus 6 more actions
    {
        if (!(group_code_1)) goto event_1303_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) > (100))) goto event_1303_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1303_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(260, str_cansee_915, -1);
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
        }
    MoveIt::stop(qualifier_14);}
    event_1303_6_end: ;
}
// Function purpose: generated callback event_func_2084 processes event block(s) 1306_6. Actions/conditions:
//        1306_6: updates game state with File::append_text(number_to_string(get_value(376,
//        TargetX))+x+number_to_string(get_value(377, Target.
void Frames::event_func_2084()
{
    // event 1306_6 : updates game state with File::append_text(number_to_string(get_value(376, TargetX))+x+number_to_string(get_value(377, Target
    {
        if (!(group_code_1)) goto event_1306_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_1306_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) > (20))) goto event_1306_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1306_6_end;
    File::append_text(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173))+str_x_1415+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174))+str__195+number_to_string(loop_cansee_index+1)+str__198, str_c_esc_log_txt_1416);
    }
    event_1306_6_end: ;
}
// Function purpose: generated callback event_func_2085 processes event block(s) 1307_6. Actions/conditions:
//        1307_6: updates game state with MoveIt::add_queue(qualifier_14);MoveIt::move(get_value(376, TargetX),
//        get_value(377, TargetY), 18); updates game state with MoveIt::clear_queue().
void Frames::event_func_2085()
{
    // event 1307_6 : updates game state with MoveIt::add_queue(qualifier_14);MoveIt::move(get_value(376, TargetX), get_value(377, TargetY), 18); updates game state with MoveIt::clear_queue()
    {
        if (!(group_code_1)) goto event_1307_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_1307_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) > (20))) goto event_1307_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1307_6_end;
    MoveIt::add_queue(qualifier_14);MoveIt::move(((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174), 18);
    MoveIt::clear_queue();
    }
    event_1307_6_end: ;
}
// Function purpose: generated callback event_func_2086 processes event block(s) 1309_6. Actions/conditions:
//        1309_6: stops the object's movement; sets the selected object's numeric value to
//        gameVariables->get_value(376, TargetX); sets the selected object's numeric value to
//        gameVariables->get_value(377, TargetY); plus 6 more actions.
void Frames::event_func_2086()
{
    // event 1309_6 : stops the object's movement; sets the selected object's numeric value to gameVariables->get_value(376, TargetX); sets the selected object's numeric value to gameVariables->get_value(377, TargetY); plus 6 more actions
    {
        if (!(group_code_1)) goto event_1309_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (0))) goto event_1309_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) > (20))) goto event_1309_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(21)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1309_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174));
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.enable(251);
            ((Active*)*it)->alterables->values.set(21, 80);
        }
    }
    event_1309_6_end: ;
}
// Function purpose: generated callback event_func_2087 processes event block(s) 1310_6. Actions/conditions:
//        1310_6: stops the object's movement; sets the selected object's numeric value to
//        gameVariables->get_value(376, TargetX); sets the selected object's numeric value to
//        gameVariables->get_value(377, TargetY); plus 6 more actions.
void Frames::event_func_2087()
{
    // event 1310_6 : stops the object's movement; sets the selected object's numeric value to gameVariables->get_value(376, TargetX); sets the selected object's numeric value to gameVariables->get_value(377, TargetY); plus 6 more actions
    {
        if (!(group_code_1)) goto event_1310_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (0))) goto event_1310_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) <= (20))) goto event_1310_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(21)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1310_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(376, str_targetx_1173));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(377, str_targety_1174));
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.enable(251);
            ((Active*)*it)->alterables->values.set(21, 80);
        }
    }
    event_1310_6_end: ;
}
// Function purpose: generated callback event_func_2088 processes event block(s) 1315_6. Actions/conditions:
//        1315_6: checks scene is active; game state Range; skips if the event-specific game state condition is met;
//        this handler gates a game event without a direct value/obj.
void Frames::event_func_2088()
{
    // event 1315_6 : checks scene is active; game state Range; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/obj
    {
        if (!(group_code_1)) goto event_1315_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(383, str_range_1181)) <= (20))) goto event_1315_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_cansee_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1315_6_end;
        {
            loop_attack_em_running = true;
            int times = int(1);
            loop_attack_em_index = 0;
            while (loop_attack_em_index < times) {
                loop_attack_em_6();
                if (!loop_attack_em_running) break;
                loop_attack_em_index++;
            }
        }
    }
    event_1315_6_end: ;
}
void Frames::loop_cansee2_6()
{
    event_func_2079();
    event_func_2080();
    event_func_2081();
    event_func_2082();
    event_func_2083();
    event_func_1410();
    event_func_1411();
    event_func_2084();
    event_func_2085();
    event_func_1413();
    event_func_2086();
    event_func_2087();
    event_func_2088();
}
// Function purpose: generated callback event_func_2089 processes event block(s) 3973_6. Actions/conditions:
//        3973_6: adds a activesystembox 450 instance; sets the selected object's numeric value to -2; moves the
//        selected object behind other objects; plus 7 more actions.
void Frames::event_func_2089()
{
    // event 3973_6 : adds a activesystembox 450 instance; sets the selected object's numeric value to -2; moves the selected object behind other objects; plus 7 more actions
    {
        if (!(group_code_1)) goto event_3973_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3973_6_end;
        activesystembox_450_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_activesystembox_450(0, 0), 5);
            activesystembox_450_instances.add_back();
        }
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(0, -2);
        }
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142));
            ((SystemBox*)*it)->alterables->values.set(1, 80+string_size(((SystemBox*)*it)->text));
            ((SystemBox*)*it)->set_fill(Color(make_color_int(254, 243, 187)));
            ((SystemBox*)*it)->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        }
    }
    event_3973_6_end: ;
}
void Frames::loop_vis_speak_6()
{
    event_func_1383();
    event_func_2089();
}
// Function purpose: generated callback event_func_2090 processes event block(s) 4094_6. Actions/conditions:
//        4094_6: removes the selected object.
void Frames::event_func_2090()
{
    // event 4094_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4094_6_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_remove_f_items_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_4094_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4094_6_end: ;
}
void Frames::loop_remove_f_items_6()
{
    event_func_2090();
}
// Function purpose: generated callback event_func_2091 processes event block(s) 4085_6. Actions/conditions:
//        4085_6: sets wayX to ((Active*)single_instance_4085_6_0)->get_x(); sets wayY to
//        ((Active*)single_instance_4085_6_0)->get_y().
void Frames::event_func_2091()
{
    // event 4085_6 : sets wayX to ((Active*)single_instance_4085_6_0)->get_x(); sets wayY to ((Active*)single_instance_4085_6_0)->get_y()
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4085_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_4085_6_0; single_instance_4085_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_4085_6_0 == NULL) goto event_4085_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(517, str_wayx_1417, ((Active*)single_instance_4085_6_0)->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(518, str_wayy_1418, ((Active*)single_instance_4085_6_0)->get_y());
    }
    event_4085_6_end: ;
}
// Function purpose: generated callback event_func_2092 processes event block(s) 4086_6. Actions/conditions:
//        4086_6: sets destX to ((Active*)single_instance_4086_6_0)->get_x(); sets destY to
//        ((Active*)single_instance_4086_6_0)->get_y().
void Frames::event_func_2092()
{
    // event 4086_6 : sets destX to ((Active*)single_instance_4086_6_0)->get_x(); sets destY to ((Active*)single_instance_4086_6_0)->get_y()
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4086_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_4086_6_0; single_instance_4086_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_4086_6_0 == NULL) goto event_4086_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(412, str_destx_1228, ((Active*)single_instance_4086_6_0)->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(413, str_desty_1229, ((Active*)single_instance_4086_6_0)->get_y());
    }
    event_4086_6_end: ;
}
// Function purpose: generated callback event_func_2093 processes event block(s) 4087_6. Actions/conditions:
//        4087_6: sets the selected object's numeric value to 0; stops the object's movement; sets the selected
//        object's numeric value to selected object->alterables->values.get(8)/MathHelper()/2; plus 7 more actions.
void Frames::event_func_2093()
{
    // event 4087_6 : sets the selected object's numeric value to 0; stops the object's movement; sets the selected object's numeric value to selected object->alterables->values.get(8)/MathHelper()/2; plus 7 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4087_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_reset_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_4087_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(8)/MathHelper()/2);
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(412, str_destx_1228));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(413, str_desty_1229));
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(517, str_wayx_1417)+8);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(518, str_wayy_1418)+8);
        }
    }
    event_4087_6_end: ;
}
// Function purpose: generated callback event_func_2094 processes event block(s) 4088_6. Actions/conditions:
//        4088_6: sets the selected object's horizontal position to gameVariables->get_value(517, wayX); sets
//        the selected object's vertical position to gameVariables->get_value(518, wayY); sets the object's
//        animation to 0.
void Frames::event_func_2094()
{
    // event 4088_6 : sets the selected object's horizontal position to gameVariables->get_value(517, wayX); sets the selected object's vertical position to gameVariables->get_value(518, wayY); sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4088_6_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_reset_guards_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_4088_6_end;
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(517, str_wayx_1417));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(518, str_wayy_1418));
            ((Active*)*it)->force_animation(0);
        }
    }
    event_4088_6_end: ;
}
void Frames::loop_reset_guards_6()
{
    event_func_2091();
    event_func_2092();
    event_func_2093();
    event_func_2094();
}
// Function purpose: generated callback event_func_2095 processes event block(s) 4081_6. Actions/conditions:
//        4081_6: sets bedX to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_x()+13; sets
//        bedY to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_y()+7.
void Frames::event_func_2095()
{
    // event 4081_6 : sets bedX to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_x()+13; sets bedY to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_y()+7
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4081_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_reset_npcs_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_4081_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(519, str_bedx_1419, ((Active*)get_single(inmateBed_instances, default_active_instance))->get_x()+13);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(520, str_bedy_1420, ((Active*)get_single(inmateBed_instances, default_active_instance))->get_y()+7);
    }
    event_4081_6_end: ;
}
// Function purpose: generated callback event_func_2096 processes event block(s) 4082_6. Actions/conditions:
//        4082_6: sets bedX to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_x()+8; sets
//        bedY to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_y()+10.
void Frames::event_func_2096()
{
    // event 4082_6 : sets bedX to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_x()+8; sets bedY to ((Active*)get_single(inmateBed_instances, default_active_instance))->get_y()+10
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4082_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_reset_npcs_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_4082_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(519, str_bedx_1419, ((Active*)get_single(inmateBed_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(520, str_bedy_1420, ((Active*)get_single(inmateBed_instances, default_active_instance))->get_y()+10);
    }
    event_4082_6_end: ;
}
// Function purpose: generated callback event_func_2097 processes event block(s) 4083_6. Actions/conditions:
//        4083_6: sets the selected object's numeric value to 0; sets the selected object's numeric value to selected
//        object->alterables->values.get(8)/MathHelper()/2; sets the selected object's numeric value to
//        gameVariables->get_value(519, bedX); plus 6 more actions.
void Frames::event_func_2097()
{
    // event 4083_6 : sets the selected object's numeric value to 0; sets the selected object's numeric value to selected object->alterables->values.get(8)/MathHelper()/2; sets the selected object's numeric value to gameVariables->get_value(519, bedX); plus 6 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4083_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_reset_npcs_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4083_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(8)/MathHelper()/2);
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(519, str_bedx_1419));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(520, str_bedy_1420));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(520, str_bedy_1420));
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(519, str_bedx_1419));
        }
    }
    event_4083_6_end: ;
}
// Function purpose: generated callback event_func_2098 processes event block(s) 4084_6. Actions/conditions:
//        4084_6: sets the selected object's horizontal position to gameVariables->get_value(519, bedX); sets
//        the selected object's vertical position to gameVariables->get_value(520, bedY).
void Frames::event_func_2098()
{
    // event 4084_6 : sets the selected object's horizontal position to gameVariables->get_value(519, bedX); sets the selected object's vertical position to gameVariables->get_value(520, bedY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4084_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_reset_npcs_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_4084_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(519, str_bedx_1419));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(520, str_bedy_1420));
        }
    }
    event_4084_6_end: ;
}
void Frames::loop_reset_npcs_6()
{
    event_func_2095();
    event_func_2096();
    event_func_2097();
    event_func_2098();
}
// Function purpose: generated callback event_func_2099 processes event block(s) 4091_6. Actions/conditions:
//        4091_6: splits saved text into fields.
void Frames::event_func_2099()
{
    // event 4091_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4091_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208))+str_slot_617+number_to_string(loop_clear_ya_desk_index+1)), str__96);
    }
    event_4091_6_end: ;
}
// Function purpose: generated callback event_func_2100 processes event block(s) 4092_6. Actions/conditions:
//        4092_6: sets a game or interface text string.
void Frames::event_func_2100()
{
    // event 4092_6 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4092_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str_illegal_618)) > (0))) goto event_4092_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208))+str_slot_617+number_to_string(loop_clear_ya_desk_index+1), empty_string);
    }
    event_4092_6_end: ;
}
void Frames::loop_clear_ya_desk_6()
{
    event_func_2099();
    event_func_2100();
}
// Function purpose: generated callback event_func_2101 processes event block(s) 4098_6. Actions/conditions:
//        4098_6: sets a stored numeric value; removes the selected object.
void Frames::event_func_2101()
{
    // event 4098_6 : sets a stored numeric value; removes the selected object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4098_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_fill_holes_index+1))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_4098_6_end;
        ((ArrayObject*)get_instance(digarray_228_instances))->set_value(0, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x()-8, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y()-8, 1);
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4098_6_end: ;
}
void Frames::loop_fill_holes_6()
{
    event_func_2101();
}
// Function purpose: generated callback event_func_2102 processes event block(s) 4101_6. Actions/conditions:
//        4101_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_2102()
{
    // event 4101_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4101_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4101_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (56))) goto event_4101_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(), ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(), 32, 80, 16, 16, 1);
        ((ArrayObject*)get_instance(fencearray_265_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4101_6_end: ;
}
void Frames::loop_fix_bars_6()
{
    event_func_2102();
}
// Function purpose: generated callback event_func_2103 processes event block(s) 4103_6. Actions/conditions:
//        4103_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_2103()
{
    // event 4103_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4103_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4103_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (20))) goto event_4103_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(), ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(), 0, (20*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(fencearray_265_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4103_6_end: ;
}
// Function purpose: generated callback event_func_2104 processes event block(s) 4104_6. Actions/conditions:
//        4104_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_2104()
{
    // event 4104_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4104_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4104_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (21))) goto event_4104_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(), ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(), 0, (21*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(fencearray_265_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4104_6_end: ;
}
// Function purpose: generated callback event_func_2105 processes event block(s) 4105_6. Actions/conditions:
//        4105_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_2105()
{
    // event 4105_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4105_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4105_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (90))) goto event_4105_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(), ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(), 48, (15*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(fencearray_265_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4105_6_end: ;
}
// Function purpose: generated callback event_func_2106 processes event block(s) 4106_6. Actions/conditions:
//        4106_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_2106()
{
    // event 4106_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4106_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4106_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (91))) goto event_4106_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(), ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(), 48, (16*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(fencearray_265_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4106_6_end: ;
}
void Frames::loop_fix_fences_6()
{
    event_func_2103();
    event_func_2104();
    event_func_2105();
    event_func_2106();
}
// Function purpose: generated callback event_func_2107 processes event block(s) 4108_6. Actions/conditions:
//        4108_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_2107()
{
    // event 4108_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4108_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4108_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (6))) goto event_4108_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(), ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(), 0, (6*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4108_6_end: ;
}
// Function purpose: generated callback event_func_2108 processes event block(s) 4109_6. Actions/conditions:
//        4109_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_2108()
{
    // event 4109_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4109_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4109_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (7))) goto event_4109_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(), ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(), 0, (7*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4109_6_end: ;
}
// Function purpose: generated callback event_func_2109 processes event block(s) 4110_6. Actions/conditions:
//        4110_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_2109()
{
    // event 4110_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4110_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4110_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (16))) goto event_4110_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(), ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(), 0, (16*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4110_6_end: ;
}
// Function purpose: generated callback event_func_2110 processes event block(s) 4111_6. Actions/conditions:
//        4111_6: sets the selected object's layer to 2-1; draws the selected image or tile; sets
//        gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY).
void Frames::event_func_2110()
{
    // event 4111_6 : sets the selected object's layer to 2-1; draws the selected image or tile; sets gameVariables->get_value(476, WallX) to gameVariables->get_value(477, WallY)
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4111_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4111_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2)) == (17))) goto event_4111_6_end;
        ((ActivePicture*)get_instance(activepicture_160_instances))->set_layer(2-1);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste(((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(), ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(), 0, (17*16)-16, 16, 16, 1);
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(476, str_wallx_1351), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(477, str_wally_1352), 2);
    }
    event_4111_6_end: ;
}
void Frames::loop_fix_walls_6()
{
    event_func_2107();
    event_func_2108();
    event_func_2109();
    event_func_2110();
}
// Function purpose: generated callback event_func_2111 processes event block(s) 4099_6. Actions/conditions:
//        4099_6: removes the selected object.
void Frames::event_func_2111()
{
    // event 4099_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4099_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_openvent_908))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4099_6_end;
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4099_6_end: ;
}
// Function purpose: generated callback event_func_2112 processes event block(s) 4100_6. Actions/conditions:
//        4100_6: sets WallX to ((Active*)get_single(guardalert_266_instances,
//        default_active_instance))->get_x()/MathHelper()/16; sets WallY to
//        ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()/MathHelper()/16.
void Frames::event_func_2112()
{
    // event 4100_6 : sets WallX to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x()/MathHelper()/16; sets WallY to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()/MathHelper()/16
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4100_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_cutbars_910))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4100_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(476, str_wallx_1351, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(477, str_wally_1352, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()/MathHelper()/16);
        {
            loop_fix_bars_running = true;
            int times = int(1);
            loop_fix_bars_index = 0;
            while (loop_fix_bars_index < times) {
                loop_fix_bars_6();
                if (!loop_fix_bars_running) break;
                loop_fix_bars_index++;
            }
        }
    }
    event_4100_6_end: ;
}
// Function purpose: generated callback event_func_2113 processes event block(s) 4102_6. Actions/conditions:
//        4102_6: sets WallX to ((Active*)get_single(guardalert_266_instances,
//        default_active_instance))->get_x()/MathHelper()/16; sets WallY to
//        ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()/MathHelper()/16.
void Frames::event_func_2113()
{
    // event 4102_6 : sets WallX to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x()/MathHelper()/16; sets WallY to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()/MathHelper()/16
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4102_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_cutfence_909))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4102_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(476, str_wallx_1351, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(477, str_wally_1352, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()/MathHelper()/16);
        {
            loop_fix_fences_running = true;
            int times = int(1);
            loop_fix_fences_index = 0;
            while (loop_fix_fences_index < times) {
                loop_fix_fences_6();
                if (!loop_fix_fences_running) break;
                loop_fix_fences_index++;
            }
        }
    }
    event_4102_6_end: ;
}
// Function purpose: generated callback event_func_2114 processes event block(s) 4107_6. Actions/conditions:
//        4107_6: sets WallX to ((Active*)get_single(guardalert_266_instances,
//        default_active_instance))->get_x()/MathHelper()/16; sets WallY to
//        ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()/MathHelper()/16; adds a
//        mapsetupobstaclemarker 323 instance; plus 7 more actions.
void Frames::event_func_2114()
{
    // event 4107_6 : sets WallX to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x()/MathHelper()/16; sets WallY to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()/MathHelper()/16; adds a mapsetupobstaclemarker 323 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4107_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_brokenwall_600))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4107_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(476, str_wallx_1351, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(477, str_wally_1352, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()/MathHelper()/16);
        mapsetupobstaclemarker_323_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapsetupobstaclemarker_323(0, 0), 6);
            mapsetupobstaclemarker_323_instances.add_back();
        }
        for (ObjectIterator it(mapsetupobstaclemarker_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(guardalert_266_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(guardalert_266_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
        {
            loop_fix_walls_running = true;
            int times = int(1);
            loop_fix_walls_index = 0;
            while (loop_fix_walls_index < times) {
                loop_fix_walls_6();
                if (!loop_fix_walls_running) break;
                loop_fix_walls_index++;
            }
        }
    }
    event_4107_6_end: ;
}
// Function purpose: generated callback event_func_2115 processes event block(s) 4112_6. Actions/conditions:
//        4112_6: removes the selected object.
void Frames::event_func_2115()
{
    // event 4112_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4112_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_remove_escapes_index+1))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_4112_6_end;
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4112_6_end: ;
}
void Frames::loop_remove_escapes_6()
{
    event_func_2111();
    event_func_2112();
    event_func_2113();
    event_func_2114();
    event_func_2115();
}
// Function purpose: generated callback event_func_2116 processes event block(s) 4075_6. Actions/conditions:
//        4075_6: sets Zone_SHU to 1; sets Digging to 0; sets Cutting to 0; plus 9 more actions.
void Frames::event_func_2116()
{
    // event 4075_6 : sets Zone_SHU to 1; sets Digging to 0; sets Cutting to 0; plus 9 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4075_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(159, str_zone_shu_732, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(154, str_cutting_727, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(155, str_chipping_728, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(360, str_reading_1154, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(358, str_fatigue_36, 0);
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2001);
        }
        ventDarkness_instances.clear_selection();
        for (ObjectIterator it(ventDarkness_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        items_184_instances.clear_selection();
        spread_value(items_184_instances, 0, 1);
    }
    event_4075_6_end: ;
}
// Function purpose: generated callback event_func_2117 processes event block(s) 4076_6. Actions/conditions:
//        4076_6: sets the object position in the world; sets the selected object's layer to 2-1; sets the object
//        position in the world; plus 1 more actions.
void Frames::event_func_2117()
{
    // event 4076_6 : sets the object position in the world; sets the selected object's layer to 2-1; sets the object position in the world; plus 1 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4076_6_end;
        bedsolitary_344_instances.clear_selection();
        FrameObject * single_instance_4076_6_0; single_instance_4076_6_0 = pick_random(bedsolitary_344_instances);
        if (single_instance_4076_6_0 == NULL) goto event_4076_6_end;
        {
            FrameObject * parent = ((Active*)single_instance_4076_6_0);
            if (parent == NULL) goto pos_end_4076_6_1;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_4076_6_1: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_4076_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_4076_6_2: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
    }
    event_4076_6_end: ;
}
// Function purpose: generated callback event_func_2118 processes event block(s) 4077_6. Actions/conditions:
//        4077_6: increments T_day by 3; sets T_hour to gameVariables->get_value(521, StartHour)-1; sets T_min
//        to 45; plus 12 more actions.
void Frames::event_func_2118()
{
    // event 4077_6 : increments T_day by 3; sets T_hour to gameVariables->get_value(521, StartHour)-1; sets T_min to 45; plus 12 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4077_6_end;
        guardalert_266_instances.clear_selection();
        spread_value(guardalert_266_instances, 25, 1);
        dighole_207_instances.clear_selection();
        spread_value(dighole_207_instances, 0, 1);
        sheetsposters_294_instances.clear_selection();
        spread_value(sheetsposters_294_instances, 0, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(254, str_t_day_902, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(25, str_t_hour_488, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(522, str_t_min_1422, 45);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(523, str_inv_1_1423, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(524, str_inv_2_1424, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(525, str_inv_3_1425, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(526, str_inv_4_1426, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(527, str_inv_5_1427, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(528, str_inv_6_1428, empty_string);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(8, ((Active*)get_instance(playerBase_instances))->alterables->values.get(8)*0.9);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(9, ((Active*)get_instance(playerBase_instances))->alterables->values.get(9)*0.9);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(10, ((Active*)get_instance(playerBase_instances))->alterables->values.get(10)*0.9);
        {
            loop_reset_npcs_running = true;
            int times = int(inmateBase_instances.size());
            loop_reset_npcs_index = 0;
            while (loop_reset_npcs_index < times) {
                loop_reset_npcs_6();
                if (!loop_reset_npcs_running) break;
                loop_reset_npcs_index++;
            }
        }
        {
            loop_reset_guards_running = true;
            int times = int(guardBase_instances.size());
            loop_reset_guards_index = 0;
            while (loop_reset_guards_index < times) {
                loop_reset_guards_6();
                if (!loop_reset_guards_running) break;
                loop_reset_guards_index++;
            }
        }
        {
            loop_clear_ya_desk_running = true;
            int times = int(20);
            loop_clear_ya_desk_index = 0;
            while (loop_clear_ya_desk_index < times) {
                loop_clear_ya_desk_6();
                if (!loop_clear_ya_desk_running) break;
                loop_clear_ya_desk_index++;
            }
        }
        {
            loop_refresh_inv_running = true;
            int times = int(6);
            loop_refresh_inv_index = 0;
            while (loop_refresh_inv_index < times) {
                loop_refresh_inv_6();
                if (!loop_refresh_inv_running) break;
                loop_refresh_inv_index++;
            }
        }
        {
            loop_remove_f_items_running = true;
            int times = int(items_184_instances.size());
            loop_remove_f_items_index = 0;
            while (loop_remove_f_items_index < times) {
                loop_remove_f_items_6();
                if (!loop_remove_f_items_running) break;
                loop_remove_f_items_index++;
            }
        }
    }
    event_4077_6_end: ;
}
// Function purpose: generated callback event_func_2119 processes event block(s) 4078_6. Actions/conditions:
//        4078_6: sets Doors_Utility_Locked to 1; sets Doors_Staff_Locked to 1; sets Doors_Cell_Locked to 1; plus 13
//        more actions.
void Frames::event_func_2119()
{
    // event 4078_6 : sets Doors_Utility_Locked to 1; sets Doors_Staff_Locked to 1; sets Doors_Cell_Locked to 1; plus 13 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4078_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(263, str_doors_utility_locked_920, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(264, str_doors_staff_locked_921, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
            group_code_schedules_sleeping_1 = false;
    
            group_code_schedules_roll_call_1 = false;
    
            group_code_schedules_food_1 = false;
    
            group_code_schedules_leisure_work_1 = false;
    
            group_code_schedules_shower_1 = false;
    
            group_code_schedules_gym_1 = false;
    
            group_code_schedules_lockdown_new_1 = false;
    
        if (!group_code_schedules_sleeping_1) {
            group_code_schedules_sleeping_1 = true;
            group_check_group_code_schedules_sleeping_1_1 = true;
            group_check_group_code_schedules_sleeping_1_0 = true;
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(3-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(4-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(5-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(2-1);
        qualifier_8.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(doorutility_259_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(doorstaff_212_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(0);
        }
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(1, 100);
        }
        {
            loop_remove_posters_running = true;
            int times = int(sheetsposters_294_instances.size());
            loop_remove_posters_index = 0;
            while (loop_remove_posters_index < times) {
                loop_remove_posters_6();
                if (!loop_remove_posters_running) break;
                loop_remove_posters_index++;
            }
        }
        {
            loop_remove_escapes_running = true;
            int times = int(guardalert_266_instances.size()+1);
            loop_remove_escapes_index = 0;
            while (loop_remove_escapes_index < times) {
                loop_remove_escapes_6();
                if (!loop_remove_escapes_running) break;
                loop_remove_escapes_index++;
            }
        }
        {
            loop_fill_holes_running = true;
            int times = int(dighole_207_instances.size());
            loop_fill_holes_index = 0;
            while (loop_fill_holes_index < times) {
                loop_fill_holes_6();
                if (!loop_fill_holes_running) break;
                loop_fill_holes_index++;
            }
        }
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4078_6_end: ;
}
// Function purpose: generated callback event_func_2120 processes event block(s) 4079_6. Actions/conditions:
//        4079_6: sets the selected object's numeric value to 0.
void Frames::event_func_2120()
{
    // event 4079_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4079_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_4079_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_4079_6_end: ;
}
// Function purpose: generated callback event_func_2121 processes event block(s) 4080_6. Actions/conditions:
//        4080_6: removes the selected object.
void Frames::event_func_2121()
{
    // event 4080_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4080_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4080_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4080_6_end: ;
}
// Function purpose: generated callback event_func_2122 processes event block(s) 4093_6. Actions/conditions:
//        4093_6: sets the object position in the world; removes the selected object; updates game state with
//        set_blend_color(14444374); plus 1 more actions.
void Frames::event_func_2122()
{
    // event 4093_6 : sets the object position in the world; removes the selected object; updates game state with set_blend_color(14444374); plus 1 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4093_6_end;
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_4093_6_0;
            ((Active*)get_instance(camera_202_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_4093_6_0: ;
        }
        screenFade_instances.clear_selection();
        for (ObjectIterator it(screenFade_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(screenTint_instances))->set_blend_color(14444374);
        ((Active*)get_instance(screenTint_instances))->alterables->values.set(0, 120);
    }
    event_4093_6_end: ;
}
void Frames::loop_shu_6()
{
    event_func_2116();
    event_func_2117();
    event_func_2118();
    event_func_2119();
    event_func_2120();
    event_func_2121();
    event_func_2122();
}
// Function purpose: generated callback event_func_2123 processes event block(s) 3911_6. Actions/conditions:
//        3911_6: sets source to Profile entry 6; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus
//        7 more actions.
void Frames::event_func_2123()
{
    // event 3911_6 : sets source to Profile entry 6; sets source to StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3911_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_6_241));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__198));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-10);
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->blend_color.set(Color(192, 0, 32));
        }
    }
    event_3911_6_end: ;
}
void Frames::loop_npc_prof_oor_6()
{
    event_func_2123();
}
// Function purpose: generated callback event_func_2124 processes event block(s) 3912_6. Actions/conditions:
//        3912_6: sets source to Profile entry 8; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus
//        7 more actions.
void Frames::event_func_2124()
{
    // event 3912_6 : sets source to Profile entry 8; sets source to StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3912_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_8_325));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__198));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-10);
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->blend_color.set(Color(192, 0, 32));
        }
    }
    event_3912_6_end: ;
}
void Frames::loop_npc_prof_sleep_6()
{
    event_func_2124();
}
// Function purpose: generated callback event_func_2125 processes event block(s) 3827_6. Actions/conditions:
//        3827_6: sets inRange to 0; sets isAwake to 0.
void Frames::event_func_2125()
{
    // event 3827_6 : sets inRange to 0; sets isAwake to 0
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3827_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(341, str_inrange_1134, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(342, str_isawake_1135, 0);
    }
    event_3827_6_end: ;
}
// Function purpose: generated callback event_func_2126 processes event block(s) 3828_6. Actions/conditions:
//        3828_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_2126()
{
    // event 3828_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3828_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_3828_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_3828_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(qualifier_14));
            if (obj2 == NULL) goto compare_3828_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 60)) goto event_3828_6_end;
        }
        compare_3828_6_0_end: ;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(341, str_inrange_1134, 1);
    }
    event_3828_6_end: ;
}
// Function purpose: generated callback event_func_2127 processes event block(s) 3829_6. Actions/conditions:
//        3829_6: sets isAwake to 1.
void Frames::event_func_2127()
{
    // event 3829_6 : sets isAwake to 1
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3829_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(4)) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3829_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(342, str_isawake_1135, 1);
    }
    event_3829_6_end: ;
}
// Function purpose: generated callback event_func_2128 processes event block(s) 3830_6. Actions/conditions:
//        3830_6: creates a buttons 245 object; sets the object's animation to 19; creates a givecash 261 object; plus
//        6 more actions.
void Frames::event_func_2128()
{
    // event 3830_6 : creates a buttons 245 object; sets the object's animation to 19; creates a givecash 261 object; plus 6 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3830_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_3830_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (1))) goto event_3830_6_end;
        FrameObject * single_instance_3830_6_0; single_instance_3830_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_3830_6_0 == NULL)
                    single_instance_3830_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3830_6_0))->force_animation(19);
        FrameObject * single_instance_3830_6_1; single_instance_3830_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_givecash_261(parent->x + -21, parent->y + 18), parent->layer);
                if (single_instance_3830_6_1 == NULL)
                    single_instance_3830_6_1 = new_obj;
            }
        }
        FrameObject * single_instance_3830_6_2; single_instance_3830_6_2 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_3830_6_2 == NULL)
                    single_instance_3830_6_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3830_6_2))->set_scale(2);
        ((Active*)((Active*)single_instance_3830_6_2))->alterables->strings.set(0, str_npc_give_1349);
    }
    event_3830_6_end: ;
}
// Function purpose: generated callback event_func_2129 processes event block(s) 3831_6. Actions/conditions:
//        3831_6: creates a buttons 245 object; sets the object's animation to 17.
void Frames::event_func_2129()
{
    // event 3831_6 : creates a buttons 245 object; sets the object's animation to 17
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3831_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_3831_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (1))) goto event_3831_6_end;
        FrameObject * single_instance_3831_6_0; single_instance_3831_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + -33, parent->y + 18), parent->layer);
                if (single_instance_3831_6_0 == NULL)
                    single_instance_3831_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3831_6_0))->force_animation(17);
    }
    event_3831_6_end: ;
}
// Function purpose: generated callback event_func_2130 processes event block(s) 3832_6. Actions/conditions:
//        3832_6: creates a buttons 245 object; sets the object's animation to 16.
void Frames::event_func_2130()
{
    // event 3832_6 : creates a buttons 245 object; sets the object's animation to 16
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3832_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_3832_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (1))) goto event_3832_6_end;
        FrameObject * single_instance_3832_6_0; single_instance_3832_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 23, parent->y + 18), parent->layer);
                if (single_instance_3832_6_0 == NULL)
                    single_instance_3832_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3832_6_0))->force_animation(16);
    }
    event_3832_6_end: ;
}
// Function purpose: generated callback event_func_2131 processes event block(s) 3833_6. Actions/conditions:
//        3833_6: creates a buttons 245 object; sets the object's animation to 18; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_2131()
{
    // event 3833_6 : creates a buttons 245 object; sets the object's animation to 18; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3833_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_3833_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (1))) goto event_3833_6_end;
        FrameObject * single_instance_3833_6_0; single_instance_3833_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 40), parent->layer);
                if (single_instance_3833_6_0 == NULL)
                    single_instance_3833_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3833_6_0))->force_animation(18);
        FrameObject * single_instance_3833_6_1; single_instance_3833_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3833_6_0)->x + -37, ((Active*)single_instance_3833_6_0)->y + 4), ((Active*)single_instance_3833_6_0)->layer);
            if (single_instance_3833_6_1 == NULL)
                single_instance_3833_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_3833_6_1))->blend_color.set(Color(120, 120, 120));
        ((Text*)((Text*)single_instance_3833_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_2_155)));
    }
    event_3833_6_end: ;
}
// Function purpose: generated callback event_func_2132 processes event block(s) 3834_6. Actions/conditions:
//        3834_6: checks scene is active; game state isAwake; game state inRange; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_2132()
{
    // event 3834_6 : checks scene is active; game state isAwake; game state inRange; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3834_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(342, str_isawake_1135)) == (0))) goto event_3834_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (1))) goto event_3834_6_end;
        {
            loop_npc_prof_sleep_running = true;
            int times = int(1);
            loop_npc_prof_sleep_index = 0;
            while (loop_npc_prof_sleep_index < times) {
                loop_npc_prof_sleep_6();
                if (!loop_npc_prof_sleep_running) break;
                loop_npc_prof_sleep_index++;
            }
        }
    }
    event_3834_6_end: ;
}
// Function purpose: generated callback event_func_2133 processes event block(s) 3835_6. Actions/conditions:
//        3835_6: checks scene is active; game state inRange; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_2133()
{
    // event 3835_6 : checks scene is active; game state inRange; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3835_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(341, str_inrange_1134)) == (0))) goto event_3835_6_end;
        {
            loop_npc_prof_oor_running = true;
            int times = int(1);
            loop_npc_prof_oor_index = 0;
            while (loop_npc_prof_oor_index < times) {
                loop_npc_prof_oor_6();
                if (!loop_npc_prof_oor_running) break;
                loop_npc_prof_oor_index++;
            }
        }
    }
    event_3835_6_end: ;
}
void Frames::loop_give_cash_setup_6()
{
    event_func_2125();
    event_func_2126();
    event_func_2127();
    event_func_2128();
    event_func_2129();
    event_func_2130();
    event_func_2131();
    event_func_2132();
    event_func_2133();
}
// Function purpose: generated callback event_func_2134 processes event block(s) 1978_6. Actions/conditions:
//        1978_6: sets the selected object's numeric value to gameVariables->get_value(529, ShowerX); sets the
//        selected object's numeric value to gameVariables->get_value(530, ShowerY); enables flag 2231 (NPC
//        assigned to a shower position) on the selected object; plus 1 more actions.
void Frames::event_func_2134()
{
    // event 1978_6 : sets the selected object's numeric value to gameVariables->get_value(529, ShowerX); sets the selected object's numeric value to gameVariables->get_value(530, ShowerY); enables flag 2231 (NPC assigned to a shower position) on the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1978_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_align_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1978_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(529, str_showerx_1429));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(530, str_showery_1430));
            ((Active*)*it)->alterables->flags.enable(2231);
            ((Active*)*it)->alterables->flags.disable(2232);
        }
    }
    event_1978_6_end: ;
}
void Frames::loop_shower_slot_go_6()
{
    event_func_2134();
}
// Function purpose: generated callback event_func_2135 processes event block(s) 1977_6. Actions/conditions:
//        1977_6: sets found to 1; sets ShowerX to ((Active*)get_single(waypointinmateshower2_309_instances,
//        default_active_instance))->get_x()+8; sets ShowerY to
//        ((Active*)get_single(waypointinmateshower2_309_instances, default_active_instance))->get_y()+8; plus 1 more
//        actions.
void Frames::event_func_2135()
{
    // event 1977_6 : sets found to 1; sets ShowerX to ((Active*)get_single(waypointinmateshower2_309_instances, default_active_instance))->get_x()+8; sets ShowerY to ((Active*)get_single(waypointinmateshower2_309_instances, default_active_instance))->get_y()+8; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1977_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(369, str_found_1165)) == (0))) goto event_1977_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        for (ObjectIterator it(waypointinmateshower2_309_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_slot_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!waypointinmateshower2_309_instances.has_selection()) goto event_1977_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(529, str_showerx_1429, ((Active*)get_single(waypointinmateshower2_309_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(530, str_showery_1430, ((Active*)get_single(waypointinmateshower2_309_instances, default_active_instance))->get_y()+8);
        for (ObjectIterator it(waypointinmateshower2_309_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, loop_shower_align_index+1);
        }
        {
            loop_shower_slot_go_running = true;
            int times = int(1);
            loop_shower_slot_go_index = 0;
            while (loop_shower_slot_go_index < times) {
                loop_shower_slot_go_6();
                if (!loop_shower_slot_go_running) break;
                loop_shower_slot_go_index++;
            }
        }
            loop_shower_slot_running = false;
    
    }
    event_1977_6_end: ;
}
void Frames::loop_shower_slot_6()
{
    event_func_2135();
}
// Function purpose: generated callback event_func_2136 processes event block(s) 1974_6. Actions/conditions:
//        1974_6: saves the current object selection; disables flag 2231 (NPC assigned to a shower position) on the
//        selected object; disables flag 2232 (NPC shower movement or interaction phase) on the selected object.
void Frames::event_func_2136()
{
    // event 1974_6 : saves the current object selection; disables flag 2231 (NPC assigned to a shower position) on the selected object; disables flag 2232 (NPC shower movement or interaction phase) on the selected object
    bool or_result_1974_6 = false;
    bool or_temp_result_1974_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto or_event_1974_6_0_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_align_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1974_6_0_end;
        or_result_1974_6 = true;
        or_temp_result_1974_6_0 = true;
    }
    or_event_1974_6_0_end: ;
    inmateBase_instances.clear_saved_selection();
    if (or_temp_result_1974_6_0) {
        inmateBase_instances.save_selection();
    }
    // event 1974_6 : saves the current object selection; disables flag 2231 (NPC assigned to a shower position) on the selected object; disables flag 2232 (NPC shower movement or interaction phase) on the selected object
    bool or_temp_result_1974_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto or_event_1974_6_1_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_align_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1974_6_1_end;
        or_result_1974_6 = true;
        or_temp_result_1974_6_1 = true;
    }
    or_event_1974_6_1_end: ;
    if (or_temp_result_1974_6_1) {
        inmateBase_instances.save_selection();
    }
    // event 1974_6 : saves the current object selection; disables flag 2231 (NPC assigned to a shower position) on the selected object; disables flag 2232 (NPC shower movement or interaction phase) on the selected object
    bool or_temp_result_1974_6_2 = false;
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto or_event_1974_6_2_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_align_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1974_6_2_end;
        or_result_1974_6 = true;
        or_temp_result_1974_6_2 = true;
    }
    or_event_1974_6_2_end: ;
    if (or_temp_result_1974_6_2) {
        inmateBase_instances.save_selection();
    }
    // event 1974_6 : saves the current object selection; disables flag 2231 (NPC assigned to a shower position) on the selected object; disables flag 2232 (NPC shower movement or interaction phase) on the selected object
    bool or_temp_result_1974_6_3 = false;
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto or_event_1974_6_3_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_align_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto or_event_1974_6_3_end;
        or_result_1974_6 = true;
        or_temp_result_1974_6_3 = true;
        or_event_1974_6_3_end: ;
        if (or_temp_result_1974_6_3) {
            inmateBase_instances.save_selection();
        }
        if (!or_result_1974_6) goto or_final_or_event_1974_6_3_end;
        inmateBase_instances.empty_selection();
        if (or_temp_result_1974_6_0 || or_temp_result_1974_6_1 || or_temp_result_1974_6_2 || or_temp_result_1974_6_3) {
            inmateBase_instances.restore_selection();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2231);
            ((Active*)*it)->alterables->flags.disable(2232);
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
    or_final_or_event_1974_6_3_end: ;
}
// Function purpose: generated callback event_func_2137 processes event block(s) 1976_6. Actions/conditions:
//        1976_6: sets found to 0.
void Frames::event_func_2137()
{
    // event 1976_6 : sets found to 0
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1976_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_align_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2231))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2232))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1976_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(loop_shower_align_index+1))) != (empty_string))) goto event_1976_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(369, str_found_1165, 0);
        {
            loop_shower_slot_running = true;
            int times = int(waypointinmateshower2_309_instances.size());
            loop_shower_slot_index = 0;
            while (loop_shower_slot_index < times) {
                loop_shower_slot_6();
                if (!loop_shower_slot_running) break;
                loop_shower_slot_index++;
            }
        }
    }
    event_1976_6_end: ;
}
// Function purpose: generated callback event_func_2138 processes event block(s) 1979_6. Actions/conditions:
//        1979_6: disables flag 2231 (NPC assigned to a shower position) on the selected object; enables flag 2232
//        (NPC shower movement or interaction phase) on the selected object.
void Frames::event_func_2138()
{
    // event 1979_6 : disables flag 2231 (NPC assigned to a shower position) on the selected object; enables flag 2232 (NPC shower movement or interaction phase) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_shower_1)) goto event_1979_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_shower_align_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1979_6_end;
        waypointinmateshower2_309_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, waypointinmateshower2_309_instances)) goto event_1979_6_end;
        for (ObjectIterator it(waypointinmateshower2_309_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!waypointinmateshower2_309_instances.has_selection()) goto event_1979_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2231))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2232))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1979_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2231);
            ((Active*)*it)->alterables->flags.enable(2232);
        }
    }
    event_1979_6_end: ;
}
void Frames::loop_shower_align_6()
{
    event_func_2136();
    event_func_2137();
    event_func_2138();
}
// Function purpose: generated callback event_func_2139 processes event block(s) 4041_6. Actions/conditions:
//        4041_6: sets the selected object's horizontal position to gameVariables->get_value(453, wX); sets
//        the selected object's vertical position to gameVariables->get_value(454, wY)+8.
void Frames::event_func_2139()
{
    // event 4041_6 : sets the selected object's horizontal position to gameVariables->get_value(453, wX); sets the selected object's vertical position to gameVariables->get_value(454, wY)+8
    {
        if (!(group_code_1 && group_code_flooding_1)) goto event_4041_6_end;
        ((Active*)get_instance(active_44_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(453, str_wx_1321));
        ((Active*)get_instance(active_44_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(454, str_wy_1322)+8);
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
    event_4041_6_end: ;
}
void Frames::loop_flood_down_6()
{
    event_func_2139();
}
// Function purpose: generated callback event_func_2140 processes event block(s) 3477_6. Actions/conditions:
//        3477_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_2140()
{
    // event 3477_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3477_6_end;
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_6();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_3477_6_end: ;
}
// Function purpose: generated callback event_func_2141 processes event block(s) 3478_6. Actions/conditions:
//        3478_6: removes the selected object; sets GoGoScan to 1.
void Frames::event_func_2141()
{
    // event 3478_6 : removes the selected object; sets GoGoScan to 1
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3478_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3478_6_end;
        items_184_instances.clear_selection();
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(-10))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_3478_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(531, str_gogoscan_1431, 1);
    }
    event_3478_6_end: ;
}
void Frames::loop_pickupitem_6()
{
    event_func_2140();
    event_func_2141();
}
// Function purpose: generated callback event_func_2142 processes event block(s) 715_6. Actions/conditions:
//        715_6: sets the selected object's numeric value to tempplant_426->get_x(); sets the selected object's
//        numeric value to tempplant_426->get_y().
void Frames::event_func_2142()
{
    // event 715_6 : sets the selected object's numeric value to tempplant_426->get_x(); sets the selected object's numeric value to tempplant_426->get_y()
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_715_6_end;
        if (((Active*)get_instance(tempplant_426_instances))->overlaps_background()) goto event_715_6_end;
        tempplant_426_instances.clear_selection();
        if (!check_not_overlap(tempplant_426_instances, qualifier_18)) goto event_715_6_end;
        if (!check_not_overlap(tempplant_426_instances, qualifier_1)) goto event_715_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_715_6_end;
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(tempplant_426_instances))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(tempplant_426_instances))->get_y());
        }
    }
    event_715_6_end: ;
}
// Function purpose: generated callback event_func_2143 processes event block(s) 2167_6. Actions/conditions:
//        2167_6: sets the selected object's numeric value to tempplant_426->get_x(); sets the selected object's
//        numeric value to tempplant_426->get_y().
void Frames::event_func_2143()
{
    // event 2167_6 : sets the selected object's numeric value to tempplant_426->get_x(); sets the selected object's numeric value to tempplant_426->get_y()
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2167_6_end;
        if (((Active*)get_instance(tempplant_426_instances))->overlaps_background()) goto event_2167_6_end;
        tempplant_426_instances.clear_selection();
        if (!check_not_overlap(tempplant_426_instances, qualifier_18)) goto event_2167_6_end;
        if (!check_not_overlap(tempplant_426_instances, qualifier_1)) goto event_2167_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_2167_6_end;
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_instance(tempplant_426_instances))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_instance(tempplant_426_instances))->get_y());
        }
    }
    event_2167_6_end: ;
}
void Frames::loop_move_deer_check_6()
{
    event_func_2142();
    event_func_2143();
}
// Function purpose: generated callback event_func_2144 processes event block(s) 711_6. Actions/conditions:
//        711_6: sets the object position in the world.
void Frames::event_func_2144()
{
    // event 711_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_711_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (0))) goto event_711_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_711_6_end;
        {
            FrameObject * parent = ((Active*)get_single(ssreindeer_504_instances));
            if (parent == NULL) goto pos_end_711_6_0;
            ((Active*)get_instance(tempplant_426_instances))->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_711_6_0: ;
        }
        {
            loop_move_deer_check_running = true;
            int times = int(1);
            loop_move_deer_check_index = 0;
            while (loop_move_deer_check_index < times) {
                loop_move_deer_check_6();
                if (!loop_move_deer_check_running) break;
                loop_move_deer_check_index++;
            }
        }
    }
    event_711_6_end: ;
}
// Function purpose: generated callback event_func_2145 processes event block(s) 712_6. Actions/conditions:
//        712_6: sets the object position in the world.
void Frames::event_func_2145()
{
    // event 712_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_712_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_712_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_712_6_end;
        {
            FrameObject * parent = ((Active*)get_single(ssreindeer_504_instances));
            if (parent == NULL) goto pos_end_712_6_0;
            ((Active*)get_instance(tempplant_426_instances))->set_global_position(parent->get_x() + -16, parent->get_y() + 0);
            pos_end_712_6_0: ;
        }
        {
            loop_move_deer_check_running = true;
            int times = int(1);
            loop_move_deer_check_index = 0;
            while (loop_move_deer_check_index < times) {
                loop_move_deer_check_6();
                if (!loop_move_deer_check_running) break;
                loop_move_deer_check_index++;
            }
        }
    }
    event_712_6_end: ;
}
// Function purpose: generated callback event_func_2146 processes event block(s) 713_6. Actions/conditions:
//        713_6: sets the object position in the world.
void Frames::event_func_2146()
{
    // event 713_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_713_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_713_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_713_6_end;
        {
            FrameObject * parent = ((Active*)get_single(ssreindeer_504_instances));
            if (parent == NULL) goto pos_end_713_6_0;
            ((Active*)get_instance(tempplant_426_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 16);
            pos_end_713_6_0: ;
        }
        {
            loop_move_deer_check_running = true;
            int times = int(1);
            loop_move_deer_check_index = 0;
            while (loop_move_deer_check_index < times) {
                loop_move_deer_check_6();
                if (!loop_move_deer_check_running) break;
                loop_move_deer_check_index++;
            }
        }
    }
    event_713_6_end: ;
}
// Function purpose: generated callback event_func_2147 processes event block(s) 714_6. Actions/conditions:
//        714_6: sets the object position in the world.
void Frames::event_func_2147()
{
    // event 714_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_714_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (3))) goto event_714_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_714_6_end;
        {
            FrameObject * parent = ((Active*)get_single(ssreindeer_504_instances));
            if (parent == NULL) goto pos_end_714_6_0;
            ((Active*)get_instance(tempplant_426_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -16);
            pos_end_714_6_0: ;
        }
        {
            loop_move_deer_check_running = true;
            int times = int(1);
            loop_move_deer_check_index = 0;
            while (loop_move_deer_check_index < times) {
                loop_move_deer_check_6();
                if (!loop_move_deer_check_running) break;
                loop_move_deer_check_index++;
            }
        }
    }
    event_714_6_end: ;
}
// Function purpose: generated callback event_func_2148 processes event block(s) 2163_6. Actions/conditions:
//        2163_6: sets the object position in the world.
void Frames::event_func_2148()
{
    // event 2163_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2163_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (0))) goto event_2163_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_2163_6_end;
        {
            FrameObject * parent = ((Active*)get_single(ssreindeer_504_instances));
            if (parent == NULL) goto pos_end_2163_6_0;
            ((Active*)get_instance(tempplant_426_instances))->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_2163_6_0: ;
        }
        {
            loop_move_deer_check_running = true;
            int times = int(1);
            loop_move_deer_check_index = 0;
            while (loop_move_deer_check_index < times) {
                loop_move_deer_check_6();
                if (!loop_move_deer_check_running) break;
                loop_move_deer_check_index++;
            }
        }
    }
    event_2163_6_end: ;
}
// Function purpose: generated callback event_func_2149 processes event block(s) 2164_6. Actions/conditions:
//        2164_6: sets the object position in the world.
void Frames::event_func_2149()
{
    // event 2164_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2164_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_2164_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_2164_6_end;
        {
            FrameObject * parent = ((Active*)get_single(ssreindeer_504_instances));
            if (parent == NULL) goto pos_end_2164_6_0;
            ((Active*)get_instance(tempplant_426_instances))->set_global_position(parent->get_x() + -16, parent->get_y() + 0);
            pos_end_2164_6_0: ;
        }
        {
            loop_move_deer_check_running = true;
            int times = int(1);
            loop_move_deer_check_index = 0;
            while (loop_move_deer_check_index < times) {
                loop_move_deer_check_6();
                if (!loop_move_deer_check_running) break;
                loop_move_deer_check_index++;
            }
        }
    }
    event_2164_6_end: ;
}
// Function purpose: generated callback event_func_2150 processes event block(s) 2165_6. Actions/conditions:
//        2165_6: sets the object position in the world.
void Frames::event_func_2150()
{
    // event 2165_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2165_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_2165_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_2165_6_end;
        {
            FrameObject * parent = ((Active*)get_single(ssreindeer_504_instances));
            if (parent == NULL) goto pos_end_2165_6_0;
            ((Active*)get_instance(tempplant_426_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 16);
            pos_end_2165_6_0: ;
        }
        {
            loop_move_deer_check_running = true;
            int times = int(1);
            loop_move_deer_check_index = 0;
            while (loop_move_deer_check_index < times) {
                loop_move_deer_check_6();
                if (!loop_move_deer_check_running) break;
                loop_move_deer_check_index++;
            }
        }
    }
    event_2165_6_end: ;
}
// Function purpose: generated callback event_func_2151 processes event block(s) 2166_6. Actions/conditions:
//        2166_6: sets the object position in the world.
void Frames::event_func_2151()
{
    // event 2166_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_misc_reindeer_1)) goto event_2166_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (3))) goto event_2166_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_check_deers_index))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_2166_6_end;
        {
            FrameObject * parent = ((Active*)get_single(ssreindeer_504_instances));
            if (parent == NULL) goto pos_end_2166_6_0;
            ((Active*)get_instance(tempplant_426_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -16);
            pos_end_2166_6_0: ;
        }
        {
            loop_move_deer_check_running = true;
            int times = int(1);
            loop_move_deer_check_index = 0;
            while (loop_move_deer_check_index < times) {
                loop_move_deer_check_6();
                if (!loop_move_deer_check_running) break;
                loop_move_deer_check_index++;
            }
        }
    }
    event_2166_6_end: ;
}
void Frames::loop_move_deer_6()
{
    event_func_2144();
    event_func_2145();
    event_func_2146();
    event_func_2147();
    event_func_2148();
    event_func_2149();
    event_func_2150();
    event_func_2151();
}
// Function purpose: generated callback event_func_2152 processes event block(s) 2016_6. Actions/conditions:
//        2016_6: sets the selected object's numeric value to gameVariables->get_value(532, GymX); sets the
//        selected object's numeric value to gameVariables->get_value(533, GymY); enables flag 30 (gym
//        activity or target-position state) on the selected object.
void Frames::event_func_2152()
{
    // event 2016_6 : sets the selected object's numeric value to gameVariables->get_value(532, GymX); sets the selected object's numeric value to gameVariables->get_value(533, GymY); enables flag 30 (gym activity or target-position state) on the selected object
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2016_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2016_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(532, str_gymx_1432));
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(533, str_gymy_1433));
            ((Active*)*it)->alterables->flags.enable(30);
        }
    }
    event_2016_6_end: ;
}
void Frames::loop_found_gym_6()
{
    event_func_2152();
}
// Function purpose: generated callback event_func_2153 processes event block(s) 2015_6. Actions/conditions:
//        2015_6: sets the selected object's numeric value to gameVariables->get_value(94, charID); sets
//        found_chair to 1; sets GymX to ((Active*)get_single(qualifier_9, default_active_instance))->get_x(); plus 1
//        more actions.
void Frames::event_func_2153()
{
    // event 2015_6 : sets the selected object's numeric value to gameVariables->get_value(94, charID); sets found_chair to 1; sets GymX to ((Active*)get_single(qualifier_9, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_gym_1)) goto event_2015_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(419, str_found_chair_1244)) == (0))) goto event_2015_6_end;
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_find_gym_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_9.has_selection()) goto event_2015_6_end;
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(419, str_found_chair_1244, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(532, str_gymx_1432, ((Active*)get_single(qualifier_9, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(533, str_gymy_1433, ((Active*)get_single(qualifier_9, default_active_instance))->get_y());
        {
            loop_found_gym_running = true;
            int times = int(1);
            loop_found_gym_index = 0;
            while (loop_found_gym_index < times) {
                loop_found_gym_6();
                if (!loop_found_gym_running) break;
                loop_found_gym_index++;
            }
        }
            loop_find_gym_running = false;
    
    }
    event_2015_6_end: ;
}
void Frames::loop_find_gym_6()
{
    event_func_2153();
}
