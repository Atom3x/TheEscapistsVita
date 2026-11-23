#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_3464 processes event block(s) 1129_6. Actions/conditions:
//        1129_6: changes a stored game value.
void Frames::event_func_3464()
{
    VITA_LEGACY_EVENT();
    // event 1129_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1129_6_end;
        if (!((towershoottrail_339_instances.size()) > (0))) goto event_1129_6_end;
        towershoottrail_339_instances.clear_selection();
        for (ObjectIterator it(towershoottrail_339_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_1129_6_end: ;
}
// Function purpose: generated callback event_func_3465 processes event block(s) 1130_6. Actions/conditions:
//        1130_6: removes the selected object.
void Frames::event_func_3465()
{
    // event 1130_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1130_6_end;
        towershoottrail_339_instances.clear_selection();
        for (ObjectIterator it(towershoottrail_339_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!towershoottrail_339_instances.has_selection()) goto event_1130_6_end;
        for (ObjectIterator it(towershoottrail_339_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1130_6_end: ;
}
// Function purpose: generated callback event_func_3466 processes event block(s) 1131_6. Actions/conditions:
//        1131_6: changes a stored game value.
void Frames::event_func_3466()
{
    VITA_LEGACY_EVENT();
    // event 1131_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1131_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto event_1131_6_end;
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_1131_6_end: ;
}
// Function purpose: generated callback event_func_3467 processes event block(s) 1132_6. Actions/conditions:
//        1132_6: sets LookX to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x(); sets
//        LookY to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y(); sets TDist_Nearest
//        to 10000.
void Frames::event_func_3467()
{
    // event 1132_6 : sets LookX to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y(); sets TDist_Nearest to 10000
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1132_6_end;
        every_1132_6 += manager.dt;
        if (every_1132_6 < 3.0) goto event_1132_6_end;
        every_1132_6 -= 3.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1132_6_end;
        if (group_saving_1) goto event_1132_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) > (6))) goto event_1132_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1132_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(2147483648)) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1132_6_end;
        desks_305_instances.clear_selection();
        if (!check_not_overlap(desks_305_instances, dighole_207_instances)) goto event_1132_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (((Active*)(*it))->outside_playfield()) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1132_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_single(dighole_207_instances, default_active_instance))->get_x()/MathHelper()/16), (((Active*)get_single(dighole_207_instances, default_active_instance))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1132_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y());
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
            loop_tower_hole_running = true;
            int times = int(1);
            loop_tower_hole_index = 0;
            while (loop_tower_hole_index < times) {
                loop_tower_hole_6();
                if (!loop_tower_hole_running) break;
                loop_tower_hole_index++;
            }
        }
    }
    event_1132_6_end: ;
}
// Function purpose: generated callback event_func_3468 processes event block(s) 1134_6. Actions/conditions:
//        1134_6: sets LookX to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x();
//        sets LookY to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(); sets
//        TDist_Nearest to 10000.
void Frames::event_func_3468()
{
    // event 1134_6 : sets LookX to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(); sets TDist_Nearest to 10000
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1134_6_end;
        every_1134_6 += manager.dt;
        if (every_1134_6 < 3.0) goto event_1134_6_end;
        every_1134_6 -= 3.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1134_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) > (6))) goto event_1134_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1134_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (((Active*)(*it))->outside_playfield()) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_cutfence_909))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_1134_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x()/MathHelper()/16), (((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y()/MathHelper()/16), 5)) == (0))) goto event_1134_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y());
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
            loop_tower_fencecut_running = true;
            int times = int(1);
            loop_tower_fencecut_index = 0;
            while (loop_tower_fencecut_index < times) {
                loop_tower_fencecut_6();
                if (!loop_tower_fencecut_running) break;
                loop_tower_fencecut_index++;
            }
        }
    }
    event_1134_6_end: ;
}
// Function purpose: generated callback event_func_3469 processes event block(s) 1139_6. Actions/conditions:
//        1139_6: checks scene is active; game state T_hour; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_3469()
{
    // event 1139_6 : checks scene is active; game state T_hour; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1139_6_end;
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1139_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (6))) goto event_1139_6_end;
            group_code_pathfinding_guards_guard_towers_1 = false;
    
    }
    event_1139_6_end: ;
}
// Function purpose: generated callback event_func_3470 processes event block(s) 1140_6. Actions/conditions:
//        1140_6: checks scene is active; game state T_hour; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_3470()
{
    // event 1140_6 : checks scene is active; game state T_hour; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1140_6_end;
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1140_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (23))) goto event_1140_6_end;
            group_code_pathfinding_guards_guard_towers_1 = false;
    
    }
    event_1140_6_end: ;
}
// Function purpose: generated callback event_func_3471 processes event block(s) 1141_6. Actions/conditions:
//        1141_6: sets SD_Guard to 0.
void Frames::event_func_3471()
{
    // event 1141_6 : sets SD_Guard to 0
    {
        if (!(group_code_1)) goto event_1141_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(398, str_sd1_id_1209)) == (-1))) goto event_1141_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1141_6_end;
        if (group_code_1 && group_code_pathfinding_guards_player_shakedown_1) goto event_1141_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(133, str_sd_guard_698, 0);
        if (!group_code_pathfinding_guards_player_shakedown_1) {
            group_code_pathfinding_guards_player_shakedown_1 = true;
        }
    }
    event_1141_6_end: ;
}
// Function purpose: generated callback event_func_3472 processes event block(s) 1142_6. Actions/conditions:
//        1142_6: sets SD_Guard to 0.
void Frames::event_func_3472()
{
    // event 1142_6 : sets SD_Guard to 0
    {
        if (!(group_code_1)) goto event_1142_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(399, str_sd2_id_1210)) == (-1))) goto event_1142_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1142_6_end;
        if (group_code_1 && group_code_pathfinding_guards_player_shakedown_1) goto event_1142_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(133, str_sd_guard_698, 0);
        if (!group_code_pathfinding_guards_player_shakedown_1) {
            group_code_pathfinding_guards_player_shakedown_1 = true;
        }
    }
    event_1142_6_end: ;
}
// Function purpose: generated callback event_func_3473 processes event block(s) 1143_6. Actions/conditions:
//        1143_6: sets a game or interface text string; adds a outfitguard 248 instance; sets the selected object's
//        numeric value to lookguardflag60_442->alterables->values.get(25); plus 1 more actions.
void Frames::event_func_3473()
{
    // event 1143_6 : sets a game or interface text string; adds a outfitguard 248 instance; sets the selected object's numeric value to lookguardflag60_442->alterables->values.get(25); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1143_6_end;
        lookguardflag60_442_instances.clear_selection();
        bedguard_337_instances.clear_selection();
        if (!check_overlap(lookguardflag60_442_instances, bedguard_337_instances)) goto event_1143_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25)))) == (empty_string))) goto event_1143_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1143_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1143_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1143_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1143_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25)), str_3_100_540);
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_248(0, 0), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25));
        }
        {
            ((Active*)get_instance(lookguardflag60_442_instances))->set_global_position(-100, -100);
            pos_end_1143_6_1: ;
        }
    }
    event_1143_6_end: ;
}
// Function purpose: generated callback event_func_3474 processes event block(s) 1144_6. Actions/conditions:
//        1144_6: sets a game or interface text string; adds a outfitguardescteam 476 instance; sets the selected
//        object's numeric value to lookguardflag60_442->alterables->values.get(25); plus 1 more actions.
void Frames::event_func_3474()
{
    // event 1144_6 : sets a game or interface text string; adds a outfitguardescteam 476 instance; sets the selected object's numeric value to lookguardflag60_442->alterables->values.get(25); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1144_6_end;
        lookguardflag60_442_instances.clear_selection();
        bedguard_337_instances.clear_selection();
        if (!check_overlap(lookguardflag60_442_instances, bedguard_337_instances)) goto event_1144_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25)))) == (empty_string))) goto event_1144_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1144_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1144_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25)), str_211_100_542);
        outfitguardescteam_476_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguardescteam_476(0, 0), 1);
            outfitguardescteam_476_instances.add_back();
        }
        for (ObjectIterator it(outfitguardescteam_476_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25));
        }
        {
            ((Active*)get_instance(lookguardflag60_442_instances))->set_global_position(-100, -100);
            pos_end_1144_6_1: ;
        }
    }
    event_1144_6_end: ;
}
// Function purpose: generated callback event_func_3475 processes event block(s) 1145_6. Actions/conditions:
//        1145_6: sets a game or interface text string; adds a outfitguarddtaf 485 instance; sets the selected
//        object's numeric value to lookguardflag60_442->alterables->values.get(25); plus 1 more actions.
void Frames::event_func_3475()
{
    // event 1145_6 : sets a game or interface text string; adds a outfitguarddtaf 485 instance; sets the selected object's numeric value to lookguardflag60_442->alterables->values.get(25); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1145_6_end;
        lookguardflag60_442_instances.clear_selection();
        bedguard_337_instances.clear_selection();
        if (!check_overlap(lookguardflag60_442_instances, bedguard_337_instances)) goto event_1145_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25)))) == (empty_string))) goto event_1145_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1145_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1145_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25)), str_228_100_543);
        outfitguarddtaf_485_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguarddtaf_485(0, 0), 1);
            outfitguarddtaf_485_instances.add_back();
        }
        for (ObjectIterator it(outfitguarddtaf_485_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25));
        }
        {
            ((Active*)get_instance(lookguardflag60_442_instances))->set_global_position(-100, -100);
            pos_end_1145_6_1: ;
        }
    }
    event_1145_6_end: ;
}
// Function purpose: generated callback event_func_3476 processes event block(s) 1146_6. Actions/conditions:
//        1146_6: sets a game or interface text string; sets the object position in the world; adds a outfitguardss
//        515 instance; plus 1 more actions.
void Frames::event_func_3476()
{
    // event 1146_6 : sets a game or interface text string; sets the object position in the world; adds a outfitguardss 515 instance; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1146_6_end;
        lookguardflag60_442_instances.clear_selection();
        bedguard_337_instances.clear_selection();
        if (!check_overlap(lookguardflag60_442_instances, bedguard_337_instances)) goto event_1146_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25)))) == (empty_string))) goto event_1146_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1146_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1146_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25)), str_239_100_544);
        {
            ((Active*)get_instance(lookguardflag60_442_instances))->set_global_position(-100, -100);
            pos_end_1146_6_0: ;
        }
        outfitguardss_515_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguardss_515(0, 0), 1);
            outfitguardss_515_instances.add_back();
        }
        for (ObjectIterator it(outfitguardss_515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)get_instance(lookguardflag60_442_instances))->alterables->values.get(25));
        }
    }
    event_1146_6_end: ;
}
// Function purpose: generated callback event_func_3477 processes event block(s) 1147_6. Actions/conditions:
//        1147_6: sets SD_Guard to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_3477()
{
    // event 1147_6 : sets SD_Guard to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1147_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1147_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(133, str_sd_guard_698)) == (0))) goto event_1147_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1147_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(133, str_sd_guard_698, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1147_6_end: ;
}
// Function purpose: generated callback event_func_3478 processes event block(s) 1148_6. Actions/conditions:
//        1148_6: sets the object position in the world.
void Frames::event_func_3478()
{
    // event 1148_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1148_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(133, str_sd_guard_698)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1148_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1148_6_end;
        {
            loop_sdown_neardesk_running = true;
            int times = int(1);
            loop_sdown_neardesk_index = 0;
            while (loop_sdown_neardesk_index < times) {
                loop_sdown_neardesk_6();
                if (!loop_sdown_neardesk_running) break;
                loop_sdown_neardesk_index++;
            }
        }
        {
            FrameObject * parent = ((Active*)get_instance(guardBase_instances));
            if (parent == NULL) goto pos_end_1148_6_0;
            ((Active*)get_instance(lookguardflag60_442_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1148_6_0: ;
        }
    }
    event_1148_6_end: ;
}
// Function purpose: generated callback event_func_3479 processes event block(s) 1160_6. Actions/conditions:
//        1160_6: checks scene is active; game state SD1_ID; game state SD2_ID; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_3479()
{
    // event 1160_6 : checks scene is active; game state SD1_ID; game state SD2_ID; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1160_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(398, str_sd1_id_1209)) != (-1))) goto event_1160_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(399, str_sd2_id_1210)) != (-1))) goto event_1160_6_end;
        if (!(group_code_1 && group_code_pathfinding_guards_player_shakedown_1)) goto event_1160_6_end;
            group_code_pathfinding_guards_player_shakedown_1 = false;
    
    }
    event_1160_6_end: ;
}
// Function purpose: generated callback event_func_3480 processes event block(s) 1161_6. Actions/conditions:
//        1161_6: sets pID to gameVariables->get_value(398, SD1_ID); sets SD1_ID to 0; sets SD_Guard to 0.
void Frames::event_func_3480()
{
    // event 1161_6 : sets pID to gameVariables->get_value(398, SD1_ID); sets SD1_ID to 0; sets SD_Guard to 0
    {
        if (!(group_code_1)) goto event_1161_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(398, str_sd1_id_1209)) > (0))) goto event_1161_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1161_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1161_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(258, str_pid_913, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(398, str_sd1_id_1209));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(398, str_sd1_id_1209, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(133, str_sd_guard_698, 0);
        {
            loop_desk_douse_running = true;
            int times = int(20);
            loop_desk_douse_index = 0;
            while (loop_desk_douse_index < times) {
                loop_desk_douse_6();
                if (!loop_desk_douse_running) break;
                loop_desk_douse_index++;
            }
        }
    }
    event_1161_6_end: ;
}
// Function purpose: generated callback event_func_3481 processes event block(s) 1162_6. Actions/conditions:
//        1162_6: sets pID to gameVariables->get_value(399, SD2_ID); sets SD2_ID to 0; sets SD_Guard to 0.
void Frames::event_func_3481()
{
    // event 1162_6 : sets pID to gameVariables->get_value(399, SD2_ID); sets SD2_ID to 0; sets SD_Guard to 0
    {
        if (!(group_code_1)) goto event_1162_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(399, str_sd2_id_1210)) > (0))) goto event_1162_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1162_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1162_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(258, str_pid_913, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(399, str_sd2_id_1210));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(399, str_sd2_id_1210, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(133, str_sd_guard_698, 0);
        {
            loop_desk_douse_running = true;
            int times = int(20);
            loop_desk_douse_index = 0;
            while (loop_desk_douse_index < times) {
                loop_desk_douse_6();
                if (!loop_desk_douse_running) break;
                loop_desk_douse_index++;
            }
        }
    }
    event_1162_6_end: ;
}
// Function purpose: generated callback event_func_3482 processes event block(s) 1165_6. Actions/conditions:
//        1165_6: stops the object's movement.
void Frames::event_func_3482()
{
    // event 1165_6 : stops the object's movement
    {
        if (!(group_code_1)) goto event_1165_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->at_destination())) { it.deselect(); continue; }
            if (((Active*)(*it))->get_movement()->is_stopped()) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1165_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1165_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_1165_6_end: ;
}
// Function purpose: generated callback event_func_3483 processes event block(s) 1166_6. Actions/conditions:
//        1166_6: orients the pathfinding direction; }; updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_3483()
{
    // event 1166_6 : orients the pathfinding direction; }; updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_1166_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->not_at_destination())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1166_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1166_6_end;
        {
            for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
    PathPlanner::orient(((Active*)*it));        }
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_1166_6_end: ;
}
// Function purpose: generated callback event_func_3484 processes event block(s) 1167_6. Actions/conditions:
//        1167_6: orients the pathfinding direction; }; updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_3484()
{
    // event 1167_6 : orients the pathfinding direction; }; updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_1167_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->not_at_destination())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(251))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1167_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1167_6_end;
        {
            for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
    PathPlanner::orient(((Active*)*it));        }
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_1167_6_end: ;
}
// Function purpose: generated callback event_func_3485 processes event block(s) 1168_6. Actions/conditions:
//        1168_6: orients the pathfinding direction; }; updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_3485()
{
    // event 1168_6 : orients the pathfinding direction; }; updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_1168_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->not_at_destination())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1168_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1168_6_end;
        {
            for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
    PathPlanner::orient(((Active*)*it));        }
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_1168_6_end: ;
}
// Function purpose: generated callback event_func_3486 processes event block(s) 1169_6. Actions/conditions:
//        1169_6: orients the pathfinding direction; }; updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_3486()
{
    // event 1169_6 : orients the pathfinding direction; }; updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_1169_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->not_at_destination())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(251))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1169_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1169_6_end;
        {
            for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
    PathPlanner::orient(((Active*)*it));        }
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_1169_6_end: ;
}
// Function purpose: generated callback event_func_3487 processes event block(s) 1170_6. Actions/conditions:
//        1170_6: updates game state with PathPlanner::set_destination(selected object, selected
//        object->alterables->values.get(23), selected ; updates game state with PathPlanner::plan_path(selected
//        object); }; sets the selected object's numeric value to 0; plus 1 more actions.
void Frames::event_func_3487()
{
    // event 1170_6 : updates game state with PathPlanner::set_destination(selected object, selected object->alterables->values.get(23), selected ; updates game state with PathPlanner::plan_path(selected object); }; sets the selected object's numeric value to 0; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1170_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1170_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1170_6_end;
        {
            for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
    PathPlanner::set_destination(((Active*)*it), ((Active*)*it)->alterables->values.get(23), ((Active*)*it)->alterables->values.get(24));        }
        }
        {
            for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
    PathPlanner::plan_path(((Active*)*it));        }
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
    }
    event_1170_6_end: ;
}
// Function purpose: generated callback event_func_3488 processes event block(s) 1171_6. Actions/conditions:
//        1171_6: sets ConLook to 0.
void Frames::event_func_3488()
{
    // event 1171_6 : sets ConLook to 0
    {
        if (!(group_code_1)) goto event_1171_6_end;
        if (!group_check_group_code_pathfinding_inmates_1_0) goto event_1171_6_end;
        group_check_group_code_pathfinding_inmates_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(447, str_conlook_1314, 0);
    }
    event_1171_6_end: ;
}
// Function purpose: generated callback event_func_3489 processes event block(s) 1172_6. Actions/conditions:
//        1172_6: increments ConLook by 1.
void Frames::event_func_3489()
{
    // event 1172_6 : increments ConLook by 1
    {
        if (!(group_code_1)) goto event_1172_6_end;
        every_1172_6 += manager.dt;
        if (every_1172_6 < 0.1) goto event_1172_6_end;
        every_1172_6 -= 0.1;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1172_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(447, str_conlook_1314, 1);
    }
    event_1172_6_end: ;
}
// Function purpose: generated callback event_func_3490 processes event block(s) 1173_6. Actions/conditions:
//        1173_6: sets ConLook to 1.
void Frames::event_func_3490()
{
    // event 1173_6 : sets ConLook to 1
    {
        if (!(group_code_1)) goto event_1173_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)) > (inmateBase_instances.size()))) goto event_1173_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1173_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(447, str_conlook_1314, 1);
    }
    event_1173_6_end: ;
}
// Function purpose: generated callback event_func_3491 processes event block(s) 1174_6. Actions/conditions:
//        1174_6: sets the object position in the world; sets the selected object's numeric value to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(20); sets
//        the selected object's layer to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->layer->index+1-1.
void Frames::event_func_3491()
{
    // event 1174_6 : sets the object position in the world; sets the selected object's numeric value to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(20); sets the selected object's layer to ((Active*)get_single(inmateBase_instances, default_active_instance))->layer->index+1-1
    {
        if (!(group_code_1)) goto event_1174_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1174_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1174_6_end;
        {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances));
            if (parent == NULL) goto pos_end_1174_6_0;
            ((Active*)get_instance(conscan_260_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1174_6_0: ;
        }
        ((Active*)get_instance(conscan_260_instances))->alterables->values.set(20, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(20));
        ((Active*)get_instance(conscan_260_instances))->set_layer(((Active*)get_single(inmateBase_instances, default_active_instance))->layer->index+1-1);
    }
    event_1174_6_end: ;
}
// Function purpose: generated callback event_func_3492 processes event block(s) 1175_6. Actions/conditions:
//        1175_6: sets Culprit to 0; sets SpeakID to 0; sets SpeakCol to 0; plus 1 more actions.
void Frames::event_func_3492()
{
    // event 1175_6 : sets Culprit to 0; sets SpeakID to 0; sets SpeakCol to 0; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1175_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1175_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(665, str_culprit_1767, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 0);
        ((Active*)get_instance(conscan_260_instances))->move_front();
    }
    event_1175_6_end: ;
}
// Function purpose: generated callback event_func_3493 processes event block(s) 1176_6. Actions/conditions:
//        1176_6: sets DoinTings to 0.
void Frames::event_func_3493()
{
    // event 1176_6 : sets DoinTings to 0
    {
        if (!(group_code_1)) goto event_1176_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(771, str_dointings_1951, 0);
    }
    event_1176_6_end: ;
}
// Function purpose: generated callback event_func_3494 processes event block(s) 1177_6. Actions/conditions:
//        1177_6: sets DoinTings to 1.
void Frames::event_func_3494()
{
    // event 1177_6 : sets DoinTings to 1
    {
        if (!(group_code_1)) goto event_1177_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) > (0))) goto event_1177_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(771, str_dointings_1951, 1);
    }
    event_1177_6_end: ;
}
// Function purpose: generated callback event_func_3495 processes event block(s) 1178_6. Actions/conditions:
//        1178_6: sets DoinTings to 1.
void Frames::event_func_3495()
{
    // event 1178_6 : sets DoinTings to 1
    {
        if (!(group_code_1)) goto event_1178_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) > (0))) goto event_1178_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(771, str_dointings_1951, 1);
    }
    event_1178_6_end: ;
}
// Function purpose: generated callback event_func_3496 processes event block(s) 1179_6. Actions/conditions:
//        1179_6: sets DoinTings to 1.
void Frames::event_func_3496()
{
    // event 1179_6 : sets DoinTings to 1
    {
        if (!(group_code_1)) goto event_1179_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) > (0))) goto event_1179_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(771, str_dointings_1951, 1);
    }
    event_1179_6_end: ;
}
// Function purpose: generated callback event_func_3497 processes event block(s) 1180_6. Actions/conditions:
//        1180_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets InmateX to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3497()
{
    // event 1180_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets InmateX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1180_6_end;
        conscan_260_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(conscan_260_instances, playerBase_instances)) goto event_1180_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(771, str_dointings_1951)) == (1))) goto event_1180_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (50))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1180_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1180_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(312, str_inmatex_1090, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(313, str_inmatey_1091, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        {
            loop_inmate_los_running = true;
            int times = int(1);
            loop_inmate_los_index = 0;
            while (loop_inmate_los_index < times) {
                loop_inmate_los_6();
                if (!loop_inmate_los_running) break;
                loop_inmate_los_index++;
            }
        }
        {
            loop_inmate_alert_running = true;
            int times = int(1);
            loop_inmate_alert_index = 0;
            while (loop_inmate_alert_index < times) {
                loop_inmate_alert_6();
                if (!loop_inmate_alert_running) break;
                loop_inmate_alert_index++;
            }
        }
    }
    event_1180_6_end: ;
}
// Function purpose: generated callback event_func_3498 processes event block(s) 1181_6. Actions/conditions:
//        1181_6: sets InmateAlert to ((Active*)get_single(guardalert_266_instances,
//        default_active_instance))->alterables->strings.get(0); sets LookX to
//        ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(); sets LookY to
//        ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(); plus 5 more actions.
void Frames::event_func_3498()
{
    // event 1181_6 : sets InmateAlert to ((Active*)get_single(guardalert_266_instances, default_active_instance))->alterables->strings.get(0); sets LookX to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y(); plus 5 more actions
    {
        if (!(group_code_1)) goto event_1181_6_end;
        conscan_260_instances.clear_selection();
        guardalert_266_instances.clear_selection();
        if (!check_overlap(conscan_260_instances, guardalert_266_instances)) goto event_1181_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (50))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1181_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1181_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(772, str_inmatealert_1952, ((Active*)get_single(guardalert_266_instances, default_active_instance))->alterables->strings.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(guardalert_266_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(312, str_inmatex_1090, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(313, str_inmatey_1091, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        {
            loop_inmate_los_running = true;
            int times = int(1);
            loop_inmate_los_index = 0;
            while (loop_inmate_los_index < times) {
                loop_inmate_los_6();
                if (!loop_inmate_los_running) break;
                loop_inmate_los_index++;
            }
        }
        {
            loop_inmate_alert_running = true;
            int times = int(1);
            loop_inmate_alert_index = 0;
            while (loop_inmate_alert_index < times) {
                loop_inmate_alert_6();
                if (!loop_inmate_alert_running) break;
                loop_inmate_alert_index++;
            }
        }
    }
    event_1181_6_end: ;
}
// Function purpose: generated callback event_func_3499 processes event block(s) 1182_6. Actions/conditions:
//        1182_6: sets LookX to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x(); sets
//        LookY to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y(); sets InmateX to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3499()
{
    // event 1182_6 : sets LookX to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x(); sets LookY to ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y(); sets InmateX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1182_6_end;
        conscan_260_instances.clear_selection();
        dighole_207_instances.clear_selection();
        if (!check_overlap(conscan_260_instances, dighole_207_instances)) goto event_1182_6_end;
        if (!check_not_overlap(dighole_207_instances, desks_305_instances)) goto event_1182_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (50))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1182_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1182_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(312, str_inmatex_1090, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(313, str_inmatey_1091, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        {
            loop_inmate_los_running = true;
            int times = int(1);
            loop_inmate_los_index = 0;
            while (loop_inmate_los_index < times) {
                loop_inmate_los_6();
                if (!loop_inmate_los_running) break;
                loop_inmate_los_index++;
            }
        }
        {
            loop_inmate_alert_running = true;
            int times = int(1);
            loop_inmate_alert_index = 0;
            while (loop_inmate_alert_index < times) {
                loop_inmate_alert_6();
                if (!loop_inmate_alert_running) break;
                loop_inmate_alert_index++;
            }
        }
    }
    event_1182_6_end: ;
}
// Function purpose: generated callback event_func_3500 processes event block(s) 1188_6. Actions/conditions:
//        1188_6: changes a stored game value.
void Frames::event_func_3500()
{
    VITA_LEGACY_EVENT();
    // event 1188_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1188_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1188_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(773, str_lastclapped_1953)) > (0))) goto event_1188_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(773, str_lastclapped_1953, 1);
    }
    event_1188_6_end: ;
}
// Function purpose: generated callback event_func_3501 processes event block(s) 1189_6. Actions/conditions:
//        1189_6: sets the selected object's numeric value to -1; sets LastClapped to 1000.
void Frames::event_func_3501()
{
    // event 1189_6 : sets the selected object's numeric value to -1; sets LastClapped to 1000
    {
        if (!(group_code_1)) goto event_1189_6_end;
        every_1189_6 += manager.dt;
        if (every_1189_6 < 0.5) goto event_1189_6_end;
        every_1189_6 -= 0.5;
        conscan_260_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(conscan_260_instances, playerBase_instances)) goto event_1189_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_1189_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(773, str_lastclapped_1953)) == (0))) goto event_1189_6_end;
        if (!((randrange_event(5)) == (1))) goto event_1189_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1189_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1189_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1189_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(773, str_lastclapped_1953, 1000);
    }
    event_1189_6_end: ;
}
// Function purpose: generated callback event_func_3502 processes event block(s) 1190_6. Actions/conditions:
//        1190_6: sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets InmateX to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); plus 1 more actions.
void Frames::event_func_3502()
{
    // event 1190_6 : sets LookX to playerBase->get_x(); sets LookY to playerBase->get_y(); sets InmateX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1190_6_end;
        conscan_260_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(conscan_260_instances, playerBase_instances)) goto event_1190_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(362, str_searching_desk_1156)) > (0))) goto event_1190_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(774, str_desklooking_1954)))) goto event_1190_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1190_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1190_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_instance(playerBase_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_instance(playerBase_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(312, str_inmatex_1090, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(313, str_inmatey_1091, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        {
            loop_inmate_los_running = true;
            int times = int(1);
            loop_inmate_los_index = 0;
            while (loop_inmate_los_index < times) {
                loop_inmate_los_6();
                if (!loop_inmate_los_running) break;
                loop_inmate_los_index++;
            }
        }
        {
            loop_inmate_deskrob_running = true;
            int times = int(1);
            loop_inmate_deskrob_index = 0;
            while (loop_inmate_deskrob_index < times) {
                loop_inmate_deskrob_6();
                if (!loop_inmate_deskrob_running) break;
                loop_inmate_deskrob_index++;
            }
        }
    }
    event_1190_6_end: ;
}
// Function purpose: generated callback event_func_3503 processes event block(s) 1192_6. Actions/conditions:
//        1192_6: sets the selected object's numeric value to ((Active*)get_single(items_184_instances,
//        it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to
//        ((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->get_y(); enables flag
//        60 (guard sight or target-tracking state) on the selected object.
void Frames::event_func_3503()
{
    VITA_LEGACY_EVENT();
    // event 1192_6 : sets the selected object's numeric value to ((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to ((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->get_y(); enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_inmates_see_s_stuff_see_s_item_1)) goto event_1192_6_end;
        conscan_260_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(conscan_260_instances, items_184_instances)) goto event_1192_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1192_6_end;
        if (!((randrange_event(2)) == (1))) goto event_1192_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1192_6_end;
        if (!((((Active*)get_single(inmateBase_instances, default_active_instance))->layer->index+1) == (((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1))) goto event_1192_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1192_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1192_6_end: ;
}
// Function purpose: generated callback event_func_3504 processes event block(s) 1193_6. Actions/conditions:
//        1193_6: sets the selected object's numeric value to ((Active*)get_single(items_184_instances,
//        it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to
//        ((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->get_y(); enables flag
//        60 (guard sight or target-tracking state) on the selected object.
void Frames::event_func_3504()
{
    VITA_LEGACY_EVENT();
    // event 1193_6 : sets the selected object's numeric value to ((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->get_x(); sets the selected object's numeric value to ((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->get_y(); enables flag 60 (guard sight or target-tracking state) on the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_inmates_see_s_stuff_see_s_item_1)) goto event_1193_6_end;
        conscan_260_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(conscan_260_instances, items_184_instances)) goto event_1193_6_end;
        guardscan_219_instances.clear_selection();
        if (!check_not_overlap(guardscan_219_instances, items_184_instances)) goto event_1193_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!items_184_instances.has_selection()) goto event_1193_6_end;
        if (!((randrange_event(2)) == (1))) goto event_1193_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(22)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1193_6_end;
        if (!((((Active*)get_single(inmateBase_instances, default_active_instance))->layer->index+1) == (((Active*)get_single(items_184_instances, default_active_instance))->layer->index+1))) goto event_1193_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1193_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(items_184_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->flags.enable(60);
        }
    }
    event_1193_6_end: ;
}
// Function purpose: generated callback event_func_3505 processes event block(s) 1194_6. Actions/conditions:
//        1194_6: removes the selected object; plays a sound or music track.
void Frames::event_func_3505()
{
    // event 1194_6 : removes the selected object; plays a sound or music track
    {
        if (!(group_code_1 && group_code_pathfinding_inmates_see_s_stuff_see_s_item_1)) goto event_1194_6_end;
        inmateBase_instances.clear_selection();
        items_184_instances.clear_selection();
        if (!check_overlap(inmateBase_instances, items_184_instances)) goto event_1194_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(60))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1194_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1194_6_end;
        for (ObjectIterator it(items_184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_1194_6_end: ;
}
// Function purpose: generated callback event_func_3506 processes event block(s) 1195_6. Actions/conditions:
//        1195_6: sets LookX to ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_x()+8;
//        sets LookY to ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_y()+16; sets
//        GuardX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); plus 1 more
//        actions.
void Frames::event_func_3506()
{
    // event 1195_6 : sets LookX to ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_x()+8; sets LookY to ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_y()+16; sets GuardX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1195_6_end;
        conscan_260_instances.clear_selection();
        bedplayer_338_instances.clear_selection();
        if (!check_overlap(conscan_260_instances, bedplayer_338_instances)) goto event_1195_6_end;
        if (group_saving_1) goto event_1195_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1195_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (8))) goto event_1195_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) == (0))) goto event_1195_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(159, str_zone_shu_732)) == (0))) goto event_1195_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(311, str_beddummy_1088)) == (0))) goto event_1195_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1195_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(105, str_lookx_662, ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_x()+8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(106, str_looky_663, ((Active*)get_single(bedplayer_338_instances, default_active_instance))->get_y()+16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(103, str_guardx_660, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(104, str_guardy_661, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
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
            loop_inmate_bedsnitch_running = true;
            int times = int(1);
            loop_inmate_bedsnitch_index = 0;
            while (loop_inmate_bedsnitch_index < times) {
                loop_inmate_bedsnitch_6();
                if (!loop_inmate_bedsnitch_running) break;
                loop_inmate_bedsnitch_index++;
            }
        }
    }
    event_1195_6_end: ;
}
// Function purpose: generated callback event_func_3507 processes event block(s) 1202_6. Actions/conditions:
//        1202_6: sets a game or interface text string; adds a outfitinmate 249 instance; sets the selected object's
//        numeric value to lookinmateflag60_394->alterables->values.get(25); plus 1 more actions.
void Frames::event_func_3507()
{
    // event 1202_6 : sets a game or interface text string; adds a outfitinmate 249 instance; sets the selected object's numeric value to lookinmateflag60_394->alterables->values.get(25); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1202_6_end;
        lookinmateflag60_394_instances.clear_selection();
        desks_305_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, desks_305_instances)) goto event_1202_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25)))) == (empty_string))) goto event_1202_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_camp_504))) goto event_1202_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1202_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1202_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1202_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1202_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25)), str_4_100_506);
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_249(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25));
        }
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1202_6_1: ;
        }
    }
    event_1202_6_end: ;
}
// Function purpose: generated callback event_func_3508 processes event block(s) 1203_6. Actions/conditions:
//        1203_6: sets a game or interface text string; adds a outfitpow 376 instance; sets the selected object's
//        numeric value to lookinmateflag60_394->alterables->values.get(25); plus 1 more actions.
void Frames::event_func_3508()
{
    // event 1203_6 : sets a game or interface text string; adds a outfitpow 376 instance; sets the selected object's numeric value to lookinmateflag60_394->alterables->values.get(25); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1203_6_end;
        lookinmateflag60_394_instances.clear_selection();
        desks_305_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, desks_305_instances)) goto event_1203_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25)))) == (empty_string))) goto event_1203_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_camp_504))) goto event_1203_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1203_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1203_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25)), str_127_100_507);
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_376(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25));
        }
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1203_6_1: ;
        }
    }
    event_1203_6_end: ;
}
// Function purpose: generated callback event_func_3509 processes event block(s) 1204_6. Actions/conditions:
//        1204_6: sets a game or interface text string; adds a outfitinmateescteam 481 instance; sets the selected
//        object's numeric value to lookinmateflag60_394->alterables->values.get(25); plus 1 more actions.
void Frames::event_func_3509()
{
    // event 1204_6 : sets a game or interface text string; adds a outfitinmateescteam 481 instance; sets the selected object's numeric value to lookinmateflag60_394->alterables->values.get(25); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1204_6_end;
        lookinmateflag60_394_instances.clear_selection();
        desks_305_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, desks_305_instances)) goto event_1204_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25)))) == (empty_string))) goto event_1204_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1204_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1204_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25)), str_210_100_508);
        outfitinmateescteam_481_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmateescteam_481(0, 0), 1);
            outfitinmateescteam_481_instances.add_back();
        }
        for (ObjectIterator it(outfitinmateescteam_481_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25));
        }
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1204_6_1: ;
        }
    }
    event_1204_6_end: ;
}
// Function purpose: generated callback event_func_3510 processes event block(s) 1205_6. Actions/conditions:
//        1205_6: sets a game or interface text string; adds a outfitinmatebond 486 instance; sets the selected
//        object's numeric value to lookinmateflag60_394->alterables->values.get(25); plus 1 more actions.
void Frames::event_func_3510()
{
    // event 1205_6 : sets a game or interface text string; adds a outfitinmatebond 486 instance; sets the selected object's numeric value to lookinmateflag60_394->alterables->values.get(25); plus 1 more actions
    {
        if (!(group_code_1)) goto event_1205_6_end;
        lookinmateflag60_394_instances.clear_selection();
        desks_305_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, desks_305_instances)) goto event_1205_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25)))) == (empty_string))) goto event_1205_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1205_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1205_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25)), str_215_100_509);
        outfitinmatebond_486_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatebond_486(0, 0), 1);
            outfitinmatebond_486_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatebond_486_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25));
        }
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1205_6_1: ;
        }
    }
    event_1205_6_end: ;
}
// Function purpose: generated callback event_func_3511 processes event block(s) 1206_6. Actions/conditions:
//        1206_6: sets a game or interface text string; sets the object position in the world; adds a outfitinmatess
//        503 instance; plus 1 more actions.
void Frames::event_func_3511()
{
    // event 1206_6 : sets a game or interface text string; sets the object position in the world; adds a outfitinmatess 503 instance; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1206_6_end;
        lookinmateflag60_394_instances.clear_selection();
        desks_305_instances.clear_selection();
        if (!check_overlap(lookinmateflag60_394_instances, desks_305_instances)) goto event_1206_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25)))) == (empty_string))) goto event_1206_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1206_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1206_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25)), str_238_100_510);
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-100, -100);
            pos_end_1206_6_0: ;
        }
        outfitinmatess_503_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatess_503(0, 0), 1);
            outfitinmatess_503_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)get_instance(lookinmateflag60_394_instances))->alterables->values.get(25));
        }
    }
    event_1206_6_end: ;
}
// Function purpose: generated callback event_func_3512 processes event block(s) 1207_6. Actions/conditions:
//        1207_6: checks scene is active; skips if dialog is open; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_3512()
{
    // event 1207_6 : checks scene is active; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1207_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1207_6_end;
        {
            loop_check_nudes_running = true;
            int times = int(qualifier_14.size());
            loop_check_nudes_index = 0;
            while (loop_check_nudes_index < times) {
                loop_check_nudes_6();
                if (!loop_check_nudes_running) break;
                loop_check_nudes_index++;
            }
        }
    }
    event_1207_6_end: ;
}
// Function purpose: generated callback event_func_3513 processes event block(s) 1214_6. Actions/conditions:
//        1214_6: stops the object's movement.
void Frames::event_func_3513()
{
    // event 1214_6 : stops the object's movement
    {
        if (!(group_code_1)) goto event_1214_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1214_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (((Active*)(*it))->get_movement()->is_stopped()) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_1214_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_1214_6_end: ;
}
// Function purpose: generated callback event_func_3514 processes event block(s) 1215_6. Actions/conditions:
//        1215_6: stops the object's movement.
void Frames::event_func_3514()
{
    // event 1215_6 : stops the object's movement
    {
        if (!(group_code_1)) goto event_1215_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->at_destination())) { it.deselect(); continue; }
            if (((Active*)(*it))->get_movement()->is_stopped()) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_1215_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1215_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_1215_6_end: ;
}
// Function purpose: generated callback event_func_3515 processes event block(s) 1216_6. Actions/conditions:
//        1216_6: orients the pathfinding direction; }; updates game state with selected
//        object->get_movement()->start().
void Frames::event_func_3515()
{
    // event 1216_6 : orients the pathfinding direction; }; updates game state with selected object->get_movement()->start()
    {
        if (!(group_code_1)) goto event_1216_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->not_at_destination())) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_1216_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1216_6_end;
        {
            for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
    PathPlanner::orient(((Active*)*it));        }
        }
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    event_1216_6_end: ;
}
// Function purpose: generated callback event_func_3516 processes event block(s) 1217_6. Actions/conditions:
//        1217_6: updates game state with PathPlanner::set_destination(selected object, selected
//        object->alterables->values.get(23), selected ; updates game state with PathPlanner::plan_path(selected
//        object); }; sets the selected object's numeric value to 0; plus 1 more actions.
void Frames::event_func_3516()
{
    // event 1217_6 : updates game state with PathPlanner::set_destination(selected object, selected object->alterables->values.get(23), selected ; updates game state with PathPlanner::plan_path(selected object); }; sets the selected object's numeric value to 0; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1217_6_end;
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (0))) { it.deselect(); continue; }
        }
        if (!serviceNpc_instances.has_selection()) goto event_1217_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1217_6_end;
        {
            for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
    PathPlanner::set_destination(((Active*)*it), ((Active*)*it)->alterables->values.get(23), ((Active*)*it)->alterables->values.get(24));        }
        }
        {
            for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
    PathPlanner::plan_path(((Active*)*it));        }
        }
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
    }
    event_1217_6_end: ;
}
// Function purpose: generated callback event_func_3517 processes event block(s) 1218_6. Actions/conditions:
//        1218_6: sets the selected object's numeric value to 0; sets the selected object's numeric value to 0; sets
//        the selected object's numeric value to 0; plus 7 more actions.
void Frames::event_func_3517()
{
    // event 1218_6 : sets the selected object's numeric value to 0; sets the selected object's numeric value to 0; sets the selected object's numeric value to 0; plus 7 more actions
    {
        if (!(group_code_1)) goto event_1218_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->is_stopping())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->agent->not_at_destination())) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1218_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_1218_6_end: ;
}
// Function purpose: generated callback event_func_3518 processes event block(s) 1219_6. Actions/conditions:
//        1219_6: sets the selected object's numeric value to 0; sets the selected object's numeric value to 0; sets
//        the selected object's numeric value to 0; plus 7 more actions.
void Frames::event_func_3518()
{
    // event 1219_6 : sets the selected object's numeric value to 0; sets the selected object's numeric value to 0; sets the selected object's numeric value to 0; plus 7 more actions
    {
        if (!(group_code_1)) goto event_1219_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->agent->is_stopping())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->agent->not_at_destination())) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1219_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_1219_6_end: ;
}
// Function purpose: generated callback event_func_3519 processes event block(s) 1220_6. Actions/conditions:
//        1220_6: sets the object position in the world.
void Frames::event_func_3519()
{
    // event 1220_6 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_1220_6_end;
        if (!((((Active*)get_instance(lookguardflag60_442_instances))->get_x()) > (0))) goto event_1220_6_end;
        {
            ((Active*)get_instance(lookguardflag60_442_instances))->set_global_position(-60, -60);
            pos_end_1220_6_0: ;
        }
    }
    event_1220_6_end: ;
}
// Function purpose: generated callback event_func_3520 processes event block(s) 1221_6. Actions/conditions:
//        1221_6: sets the object position in the world.
void Frames::event_func_3520()
{
    // event 1221_6 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_1221_6_end;
        if (!((((Active*)get_instance(lookinmateflag60_394_instances))->get_x()) > (0))) goto event_1221_6_end;
        {
            ((Active*)get_instance(lookinmateflag60_394_instances))->set_global_position(-60, -60);
            pos_end_1221_6_0: ;
        }
    }
    event_1221_6_end: ;
}
// Function purpose: generated callback event_func_3521 processes event block(s) 1222_6. Actions/conditions:
//        1222_6: increments TimeToFight by randrange_event(3).
void Frames::event_func_3521()
{
    VITA_LEGACY_EVENT();
    // event 1222_6 : increments TimeToFight by randrange_event(3)
    {
        if (!(group_code_1)) goto event_1222_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(673, str_timetofight_1777)) < (4000))) goto event_1222_6_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto event_1222_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1222_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1222_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(673, str_timetofight_1777, randrange_event(3));
    }
    event_1222_6_end: ;
}
// Function purpose: generated callback event_func_3522 processes event block(s) 1223_6. Actions/conditions:
//        1223_6: sets StartFightTarget to ((Active*)get_single(qualifier_12,
//        default_active_instance))->alterables->values.get(0); sets Find_charX to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); sets Find_charY to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y().
void Frames::event_func_3522()
{
    // event 1223_6 : sets StartFightTarget to ((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(0); sets Find_charX to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x(); sets Find_charY to ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y()
    {
        if (!(group_code_1)) goto event_1223_6_end;
        every_1223_6 += manager.dt;
        if (every_1223_6 < 3.0) goto event_1223_6_end;
        every_1223_6 -= 3.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(673, str_timetofight_1777)) >= (4000))) goto event_1223_6_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto event_1223_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1223_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1223_6_end;
        conscan_260_instances.clear_selection();
        qualifier_12.clear_selection();
        if (!check_overlap(conscan_260_instances, qualifier_12)) goto event_1223_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(447, str_conlook_1314)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1223_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1223_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(674, str_startfighttarget_1778, ((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(681, str_find_charx_1785, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(682, str_find_chary_1786, ((Active*)get_single(inmateBase_instances, default_active_instance))->get_y());
        {
            loop_start_fight_target_running = true;
            int times = int(1);
            loop_start_fight_target_index = 0;
            while (loop_start_fight_target_index < times) {
                loop_start_fight_target_6();
                if (!loop_start_fight_target_running) break;
                loop_start_fight_target_index++;
            }
        }
    }
    event_1223_6_end: ;
}
// Function purpose: generated callback event_func_3523 processes event block(s) 1229_6. Actions/conditions:
//        1229_6: sets Susp_Highest to gameVariables->get_value(32, Heat).
void Frames::event_func_3523()
{
    // event 1229_6 : sets Susp_Highest to gameVariables->get_value(32, Heat)
    {
        if (!(group_code_1)) goto event_1229_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495)) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(741, str_susp_highest_1912)))) goto event_1229_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(741, str_susp_highest_1912, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495));
    }
    event_1229_6_end: ;
}
// Function purpose: generated callback event_func_3524 processes event block(s) 1230_6. Actions/conditions:
//        1230_6: changes a stored game value.
void Frames::event_func_3524()
{
    // event 1230_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1230_6_end;
        every_1230_6 += manager.dt;
        if (every_1230_6 < 3.0) goto event_1230_6_end;
        every_1230_6 -= 3.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495)) > (0))) goto event_1230_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1230_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1230_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(32, str_heat_495, 1);
    }
    event_1230_6_end: ;
}
// Function purpose: generated callback event_func_3525 processes event block(s) 1231_6. Actions/conditions:
//        1231_6: increments Heat by 1.
void Frames::event_func_3525()
{
    // event 1231_6 : increments Heat by 1
    {
        if (!(group_code_1)) goto event_1231_6_end;
        every_1231_6 += manager.dt;
        if (every_1231_6 < 0.25) goto event_1231_6_end;
        every_1231_6 -= 0.25;
        guardscan_219_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(guardscan_219_instances, playerBase_instances)) goto event_1231_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1231_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_1231_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1231_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 1);
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
    event_1231_6_end: ;
}
// Function purpose: generated callback event_func_3526 processes event block(s) 1232_6. Actions/conditions:
//        1232_6: increments Heat by 1.
void Frames::event_func_3526()
{
    // event 1232_6 : increments Heat by 1
    {
        if (!(group_code_1)) goto event_1232_6_end;
        every_1232_6 += manager.dt;
        if (every_1232_6 < 0.25) goto event_1232_6_end;
        every_1232_6 -= 0.25;
        conscan_260_instances.clear_selection();
        playerBase_instances.clear_selection();
        if (!check_overlap(conscan_260_instances, playerBase_instances)) goto event_1232_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1232_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_1232_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1232_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(32, str_heat_495, 1);
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
    event_1232_6_end: ;
}
// Function purpose: generated callback event_func_3527 processes event block(s) 1233_6. Actions/conditions:
//        1233_6: sets Heat to 99.
void Frames::event_func_3527()
{
    // event 1233_6 : sets Heat to 99
    {
        if (!(group_code_1)) goto event_1233_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495)) > (99))) goto event_1233_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 99);
    }
    event_1233_6_end: ;
}
// Function purpose: generated callback event_func_3528 processes event block(s) 1234_6. Actions/conditions:
//        1234_6: changes a stored game value.
void Frames::event_func_3528()
{
    // event 1234_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1234_6_end;
        every_1234_6 += manager.dt;
        if (every_1234_6 < 60.0) goto event_1234_6_end;
        every_1234_6 -= 60.0;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (50))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1234_6_end;
        if (!((global_strings->get(0)) != (str_sanpancho_147))) goto event_1234_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1234_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1234_6_end: ;
}
// Function purpose: generated callback event_func_3529 processes event block(s) 1235_6. Actions/conditions:
//        1235_6: changes a stored game value.
void Frames::event_func_3529()
{
    // event 1235_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1235_6_end;
        every_1235_6 += manager.dt;
        if (every_1235_6 < 60.0) goto event_1235_6_end;
        every_1235_6 -= 60.0;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) > (50))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1235_6_end;
        if (!((global_strings->get(0)) != (str_sanpancho_147))) goto event_1235_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1235_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(12, 1);
        }
    }
    event_1235_6_end: ;
}
// Function purpose: generated callback event_func_3530 processes event block(s) 1236_6. Actions/conditions:
//        1236_6: changes a stored game value.
void Frames::event_func_3530()
{
    // event 1236_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1236_6_end;
        every_1236_6 += manager.dt;
        if (every_1236_6 < 45.0) goto event_1236_6_end;
        every_1236_6 -= 45.0;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (30))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1236_6_end;
        if (!((global_strings->get(0)) == (str_sanpancho_147))) goto event_1236_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1236_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1236_6_end: ;
}
// Function purpose: generated callback event_func_3531 processes event block(s) 1237_6. Actions/conditions:
//        1237_6: changes a stored game value.
void Frames::event_func_3531()
{
    // event 1237_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1237_6_end;
        every_1237_6 += manager.dt;
        if (every_1237_6 < 45.0) goto event_1237_6_end;
        every_1237_6 -= 45.0;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) > (30))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1237_6_end;
        if (!((global_strings->get(0)) == (str_sanpancho_147))) goto event_1237_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1237_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(12, 1);
        }
    }
    event_1237_6_end: ;
}
// Function purpose: generated callback event_func_3532 processes event block(s) 1238_6. Actions/conditions:
//        1238_6: sets the selected object's numeric value to 1.
void Frames::event_func_3532()
{
    // event 1238_6 : sets the selected object's numeric value to 1
    {
        if (!(group_code_1)) goto event_1238_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1238_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
        }
    }
    event_1238_6_end: ;
}
// Function purpose: generated callback event_func_3533 processes event block(s) 1239_6. Actions/conditions:
//        1239_6: sets the selected object's numeric value to 100.
void Frames::event_func_3533()
{
    // event 1239_6 : sets the selected object's numeric value to 100
    {
        if (!(group_code_1)) goto event_1239_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) > (100))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1239_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 100);
        }
    }
    event_1239_6_end: ;
}
// Function purpose: generated callback event_func_3534 processes event block(s) 1240_6. Actions/conditions:
//        1240_6: sets the selected object's numeric value to 0.
void Frames::event_func_3534()
{
    // event 1240_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1)) goto event_1240_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1240_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1240_6_end: ;
}
// Function purpose: generated callback event_func_3535 processes event block(s) 1241_6. Actions/conditions:
//        1241_6: changes a stored game value.
void Frames::event_func_3535()
{
    // event 1241_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1241_6_end;
        every_1241_6 += manager.dt;
        if (every_1241_6 < 3.0) goto event_1241_6_end;
        every_1241_6 -= 3.0;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (((Active*)*it)->alterables->values.get(8)/MathHelper()/2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1241_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1241_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1241_6_end: ;
}
// Function purpose: generated callback event_func_3536 processes event block(s) 1242_6. Actions/conditions:
//        1242_6: changes a stored game value.
void Frames::event_func_3536()
{
    // event 1242_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1242_6_end;
        every_1242_6 += manager.dt;
        if (every_1242_6 < 3.0) goto event_1242_6_end;
        every_1242_6 -= 3.0;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (((Active*)*it)->alterables->values.get(9)/MathHelper()/2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1242_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1242_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1242_6_end: ;
}
// Function purpose: generated callback event_func_3537 processes event block(s) 1243_6. Actions/conditions:
//        1243_6: changes a stored game value.
void Frames::event_func_3537()
{
    // event 1243_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1243_6_end;
        every_1243_6 += manager.dt;
        if (every_1243_6 < 3.0) goto event_1243_6_end;
        every_1243_6 -= 3.0;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) < (((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/2))) goto event_1243_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_1243_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, bedmedical_234_instances)) goto event_1243_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1243_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.add(7, 1);
    }
    event_1243_6_end: ;
}
// Function purpose: generated callback event_func_3538 processes event block(s) 1244_6. Actions/conditions:
//        1244_6: sets the selected object's numeric value to playerBase->alterables->values.get(8)/MathHelper()/2.
void Frames::event_func_3538()
{
    // event 1244_6 : sets the selected object's numeric value to playerBase->alterables->values.get(8)/MathHelper()/2
    {
        if (!(group_code_1)) goto event_1244_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/2))) goto event_1244_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(7, ((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/2);
    }
    event_1244_6_end: ;
}
// Function purpose: generated callback event_func_3539 processes event block(s) 1245_6. Actions/conditions:
//        1245_6: sets the selected object's visibility to false; sets the selected object's numeric value to 0.
void Frames::event_func_3539()
{
    // event 1245_6 : sets the selected object's visibility to false; sets the selected object's numeric value to 0
    {
        if (!(group_code_1)) goto event_1245_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_1245_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1245_6_end;
        ((Active*)get_instance(target_177_instances))->set_visible(false);
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
    }
    event_1245_6_end: ;
}
// Function purpose: generated callback event_func_3540 processes event block(s) 1246_6. Actions/conditions:
//        1246_6: sets LClick to 1; sets the selected object's numeric value to ((Active*)get_single(qualifier_14,
//        default_active_instance))->alterables->values.get(25); sets the selected object's numeric value to 50.
void Frames::event_func_3540()
{
    // event 1246_6 : sets LClick to 1; sets the selected object's numeric value to ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25); sets the selected object's numeric value to 50
    {
        if (!(group_code_1)) goto event_1246_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1246_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(6))) goto event_1246_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1246_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_1)) goto event_1246_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_1246_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_1246_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1246_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, ((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25));
        ((Active*)get_instance(sidePanel_instances))->alterables->values.set(0, 50);
    }
    event_1246_6_end: ;
}
// Function purpose: generated callback event_func_3541 processes event block(s) 1247_6. Actions/conditions:
//        1247_6: sets the selected object's horizontal position to ((Active*)get_single(qualifier_14,
//        default_active_instance))->get_x(); sets the selected object's vertical position to
//        ((Active*)get_single(qualifier_14, default_active_instance))->get_y(); sets the selected object's visibility
//        to true; plus 8 more actions.
void Frames::event_func_3541()
{
    // event 1247_6 : sets the selected object's horizontal position to ((Active*)get_single(qualifier_14, default_active_instance))->get_x(); sets the selected object's vertical position to ((Active*)get_single(qualifier_14, default_active_instance))->get_y(); sets the selected object's visibility to true; plus 8 more actions
    {
        if (!(group_code_1)) goto event_1247_6_end;
        if (!((((Active*)get_instance(target_177_instances))->alterables->values.get(0)) != (0))) goto event_1247_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_instance(target_177_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1247_6_end;
        ((Active*)get_instance(target_177_instances))->set_x(((Active*)get_single(qualifier_14, default_active_instance))->get_x());
        ((Active*)get_instance(target_177_instances))->set_y(((Active*)get_single(qualifier_14, default_active_instance))->get_y());
        ((Active*)get_instance(target_177_instances))->set_visible(true);
        ((Active*)get_instance(target_177_instances))->move_front();
        ((Counter*)get_instance(counter2_257_instances))->set(get_floor(((((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(7)+0.0)/MathHelper()/(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(8)/MathHelper()/2)+0.0)*100));
        ((Counter*)get_instance(counter2_257_instances))->set_x(((Active*)get_single(qualifier_14, default_active_instance))->get_x()-11);
        ((Counter*)get_instance(counter2_257_instances))->set_y(((Active*)get_single(qualifier_14, default_active_instance))->get_y()+10);
        ((Counter*)get_instance(counter2_257_instances))->move_front(((Active*)get_instance(target_177_instances)));
    }
    event_1247_6_end: ;
}
// Function purpose: generated callback event_func_3542 processes event block(s) 1248_6. Actions/conditions:
//        1248_6: sets the selected object's visibility to false.
void Frames::event_func_3542()
{
    // event 1248_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_1248_6_end;
        if (((Active*)get_instance(target_177_instances))->flags & VISIBLE) goto event_1248_6_end;
        ((Counter*)get_instance(counter2_257_instances))->set_visible(false);
    }
    event_1248_6_end: ;
}
// Function purpose: generated callback event_func_3543 processes event block(s) 1249_6. Actions/conditions:
//        1249_6: sets the selected object's visibility to true; moves the selected object to the front.
void Frames::event_func_3543()
{
    // event 1249_6 : sets the selected object's visibility to true; moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1249_6_end;
        if (!(((Active*)get_instance(target_177_instances))->flags & VISIBLE)) goto event_1249_6_end;
        ((Counter*)get_instance(counter2_257_instances))->set_visible(true);
        ((Counter*)get_instance(counter2_257_instances))->move_front(((Active*)get_instance(target_177_instances)));
    }
    event_1249_6_end: ;
}
// Function purpose: generated callback event_func_3544 processes event block(s) 1250_6. Actions/conditions:
//        1250_6: sets the selected object's numeric value to 0; sets the selected object's visibility to false.
void Frames::event_func_3544()
{
    // event 1250_6 : sets the selected object's numeric value to 0; sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_1250_6_end;
        if (!((((Active*)get_instance(target_177_instances))->alterables->values.get(0)) != (0))) goto event_1250_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_1250_6_end;
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(target_177_instances))->set_visible(false);
    }
    event_1250_6_end: ;
}
// Function purpose: generated callback event_func_3545 processes event block(s) 1251_6. Actions/conditions:
//        1251_6: sets the selected object's numeric value to 0; sets the selected object's visibility to false.
void Frames::event_func_3545()
{
    // event 1251_6 : sets the selected object's numeric value to 0; sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_1251_6_end;
        if (!((((Active*)get_instance(target_177_instances))->alterables->values.get(0)) != (0))) goto event_1251_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_1251_6_end;
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(target_177_instances))->set_visible(false);
    }
    event_1251_6_end: ;
}
// Function purpose: generated callback event_func_3546 processes event block(s) 1252_6. Actions/conditions:
//        1252_6: sets the selected object's numeric value to 0; sets the selected object's visibility to false; sets
//        SpeakText to Misc entry 6; plus 1 more actions.
void Frames::event_func_3546()
{
    // event 1252_6 : sets the selected object's numeric value to 0; sets the selected object's visibility to false; sets SpeakText to Misc entry 6; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1252_6_end;
        if (!((((Active*)get_instance(target_177_instances))->alterables->values.get(0)) != (0))) goto event_1252_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)) >= (100))) goto event_1252_6_end;
        ((Active*)get_instance(target_177_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(target_177_instances))->set_visible(false);
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
    event_1252_6_end: ;
}
// Function purpose: generated callback event_func_3547 processes event block(s) 1253_6. Actions/conditions:
//        1253_6: sets the selected object's numeric value to 0.
void Frames::event_func_3547()
{
    // event 1253_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1)) goto event_1253_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(3)) < (0))) goto event_1253_6_end;
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(3, 0);
    }
    event_1253_6_end: ;
}
// Function purpose: generated callback event_func_3548 processes event block(s) 1254_6. Actions/conditions:
//        1254_6: checks scene is active; the event-specific game state condition is met; dialog is open; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_3548()
{
    // event 1254_6 : checks scene is active; the event-specific game state condition is met; dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1254_6_end;
        if (!((((Active*)get_instance(target_177_instances))->alterables->values.get(0)) != (0))) goto event_1254_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(3)) == (0))) goto event_1254_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1254_6_end;
        {
            loop_you_attack_running = true;
            int times = int(1);
            loop_you_attack_index = 0;
            while (loop_you_attack_index < times) {
                loop_you_attack_6();
                if (!loop_you_attack_running) break;
                loop_you_attack_index++;
            }
        }
    }
    event_1254_6_end: ;
}
// Function purpose: generated callback event_func_3549 processes event block(s) 1280_6. Actions/conditions:
//        1280_6: stops the MoveIt movement.
void Frames::event_func_3549()
{
    // event 1280_6 : stops the MoveIt movement
    {
        if (!(group_code_1)) goto event_1280_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1280_6_end;
        qualifier_14.clear_selection();
    MoveIt::stop(qualifier_14);}
    event_1280_6_end: ;
}
// Function purpose: generated callback event_func_3550 processes event block(s) 1281_6. Actions/conditions:
//        1281_6: sets the selected object's numeric value to 0; sets the selected object's numeric value to 0;
//        disables flag 250 (NPC pathfinding or movement state) on the selected object; plus 5 more actions.
void Frames::event_func_3550()
{
    // event 1281_6 : sets the selected object's numeric value to 0; sets the selected object's numeric value to 0; disables flag 250 (NPC pathfinding or movement state) on the selected object; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1281_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1281_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
        }
    MoveIt::stop(qualifier_14);}
    event_1281_6_end: ;
}
// Function purpose: generated callback event_func_3551 processes event block(s) 1282_6. Actions/conditions:
//        1282_6: stops the MoveIt movement; updates game state with for (QualifierIterator it(qualifier_14);
//        !it.end(); ++it) {; sets the selected object's numeric value to -1.
void Frames::event_func_3551()
{
    // event 1282_6 : stops the MoveIt movement; updates game state with for (QualifierIterator it(qualifier_14); !it.end(); ++it) {; sets the selected object's numeric value to -1
    {
        if (!(group_code_1)) goto event_1282_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1282_6_end;
    MoveIt::stop(qualifier_14);    for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, -1);
        }
    }
    event_1282_6_end: ;
}
// Function purpose: generated callback event_func_3552 processes event block(s) 1283_6. Actions/conditions:
//        1283_6: stops the MoveIt movement; updates game state with for (QualifierIterator it(qualifier_14);
//        !it.end(); ++it) {; sets the selected object's numeric value to 0.
void Frames::event_func_3552()
{
    // event 1283_6 : stops the MoveIt movement; updates game state with for (QualifierIterator it(qualifier_14); !it.end(); ++it) {; sets the selected object's numeric value to 0
    {
        if (!(group_code_1)) goto event_1283_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1283_6_end;
    MoveIt::stop(qualifier_14);    for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1283_6_end: ;
}
// Function purpose: generated callback event_func_3553 processes event block(s) 1284_6. Actions/conditions:
//        1284_6: stops the MoveIt movement; updates game state with for (QualifierIterator it(qualifier_14);
//        !it.end(); ++it) {; sets the selected object's numeric value to 0.
void Frames::event_func_3553()
{
    // event 1284_6 : stops the MoveIt movement; updates game state with for (QualifierIterator it(qualifier_14); !it.end(); ++it) {; sets the selected object's numeric value to 0
    {
        if (!(group_code_1)) goto event_1284_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (80))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1284_6_end;
    MoveIt::stop(qualifier_14);    for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, 0);
        }
    }
    event_1284_6_end: ;
}
// Function purpose: generated callback event_func_3554 processes event block(s) 1285_6. Actions/conditions:
//        1285_6: sets Buddies to 0.
void Frames::event_func_3554()
{
    // event 1285_6 : sets Buddies to 0
    {
        if (!(group_code_1)) goto event_1285_6_end;
        every_1285_6 += manager.dt;
        if (every_1285_6 < 0.25) goto event_1285_6_end;
        every_1285_6 -= 0.25;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1285_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(618, str_buddies_39, 0);
        {
            loop_cansee_running = true;
            int times = int(qualifier_14.size());
            loop_cansee_index = 0;
            while (loop_cansee_index < times) {
                loop_cansee_6();
                if (!loop_cansee_running) break;
                loop_cansee_index++;
            }
        }
    }
    event_1285_6_end: ;
}
// Function purpose: generated callback event_func_3555 processes event block(s) 1343_6. Actions/conditions:
//        1343_6: changes a stored game value.
void Frames::event_func_3555()
{
    VITA_LEGACY_EVENT();
    // event 1343_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1343_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(21)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1343_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(21, 1);
        }
    }
    event_1343_6_end: ;
}
// Function purpose: generated callback event_func_3556 processes event block(s) 1344_6. Actions/conditions:
//        1344_6: sets the object's animation to 8; sets charZ to ((Active*)get_single(qualifier_12,
//        default_active_instance))->alterables->values.get(25).
void Frames::event_func_3556()
{
    // event 1344_6 : sets the object's animation to 8; sets charZ to ((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_code_1)) goto event_1344_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!(((Active*)(*it))->animation_finished == 4)) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1344_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1344_6_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(25));
    }
    event_1344_6_end: ;
}
// Function purpose: generated callback event_func_3557 processes event block(s) 1345_6. Actions/conditions:
//        1345_6: sets the selected object's horizontal position to ((Active*)get_single(qualifier_6,
//        default_active_instance))->get_box_index(0)+13; sets the selected object's vertical position to
//        ((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+7; sets the object position in
//        the world.
void Frames::event_func_3557()
{
    // event 1345_6 : sets the selected object's horizontal position to ((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(0)+13; sets the selected object's vertical position to ((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+7; sets the object position in the world
    {
        if (!(group_code_1)) goto event_1345_6_end;
        playerBase_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_6)) goto event_1345_6_end;
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_1345_6_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_1345_6_end;
        if (!((number_to_string(((Active*)get_instance(playerBase_instances))->get_x())+str_x_437+number_to_string(((Active*)get_instance(playerBase_instances))->get_y())) != (number_to_string(((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(0)+13)+str_x_437+number_to_string(((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+7)))) goto event_1345_6_end;
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(0)+13);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+7);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1345_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1345_6_0: ;
        }
    }
    event_1345_6_end: ;
}
// Function purpose: generated callback event_func_3558 processes event block(s) 1346_6. Actions/conditions:
//        1346_6: sets the selected object's horizontal position to ((Active*)get_single(qualifier_6,
//        default_active_instance))->get_box_index(0)+8; sets the selected object's vertical position to
//        ((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+10; sets the object position
//        in the world.
void Frames::event_func_3558()
{
    // event 1346_6 : sets the selected object's horizontal position to ((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(0)+8; sets the selected object's vertical position to ((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+10; sets the object position in the world
    {
        if (!(group_code_1)) goto event_1346_6_end;
        playerBase_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_6)) goto event_1346_6_end;
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_1346_6_end;
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_1346_6_end;
        if (!((number_to_string(((Active*)get_instance(playerBase_instances))->get_x())+str_x_437+number_to_string(((Active*)get_instance(playerBase_instances))->get_y())) != (number_to_string(((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(0)+8)+str_x_437+number_to_string(((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+10)))) goto event_1346_6_end;
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(0)+8);
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_single(qualifier_6, default_active_instance))->get_box_index(1)+10);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1346_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1346_6_0: ;
        }
    }
    event_1346_6_end: ;
}
// Function purpose: generated callback event_func_3559 processes event block(s) 1347_6. Actions/conditions:
//        1347_6: sets KO_timer to 50; creates a fade 343 object; sets the target object's scale; plus 1 more actions.
void Frames::event_func_3559()
{
    // event 1347_6 : sets KO_timer to 50; creates a fade 343 object; sets the target object's scale; plus 1 more actions
    {
        if (!(group_code_1)) goto event_1347_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) < (1))) goto event_1347_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(775, str_ko_timer_1955)) == (0))) goto event_1347_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(4)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_1347_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(775, str_ko_timer_1955, 50);
        FrameObject * single_instance_1347_6_0; single_instance_1347_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(sidePanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_screenFade(parent->x + 0, parent->y + -17), parent->layer);
                if (single_instance_1347_6_0 == NULL)
                    single_instance_1347_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1347_6_0))->set_scale(10);
        ((Active*)((Active*)single_instance_1347_6_0))->blend_color.set_alpha_coefficient(255);
    }
    event_1347_6_end: ;
}
// Function purpose: generated callback event_func_3560 processes event block(s) 1348_6. Actions/conditions:
//        1348_6: changes a stored game value; sets the object's animation to 8; changes the selected object
//        transparency.
void Frames::event_func_3560()
{
    VITA_LEGACY_EVENT();
    // event 1348_6 : changes a stored game value; sets the object's animation to 8; changes the selected object transparency
    {
        if (!(group_code_1)) goto event_1348_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(775, str_ko_timer_1955)) > (1))) goto event_1348_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(4)) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_1348_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(775, str_ko_timer_1955, 1);
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        screenFade_instances.clear_selection();
        for (ObjectIterator it(screenFade_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(((Active*)*it)->blend_color.get_alpha_coefficient()-5);
        }
    }
    event_1348_6_end: ;
}
// Function purpose: generated callback event_func_3561 processes event block(s) 1349_6. Actions/conditions:
//        1349_6: sets KO_timer to 0; sets the object position in the world; removes the selected object.
void Frames::event_func_3561()
{
    VITA_LEGACY_EVENT();
    // event 1349_6 : sets KO_timer to 0; sets the object position in the world; removes the selected object
    {
        if (!(group_code_1)) goto event_1349_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(775, str_ko_timer_1955)) == (1))) goto event_1349_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(775, str_ko_timer_1955, 0);
        {
            loop_you_ko_running = true;
            int times = int(1);
            loop_you_ko_index = 0;
            while (loop_you_ko_index < times) {
                loop_you_ko_6();
                if (!loop_you_ko_running) break;
                loop_you_ko_index++;
            }
        }
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1349_6_0;
            ((Active*)get_instance(camera_202_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1349_6_0: ;
        }
        screenFade_instances.clear_selection();
        for (ObjectIterator it(screenFade_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1349_6_end: ;
}
// Function purpose: generated callback event_func_3562 processes event block(s) 1364_6. Actions/conditions:
//        1364_6: removes the selected object.
void Frames::event_func_3562()
{
    // event 1364_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_1364_6_end;
        bedmedical_234_instances.clear_selection();
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!bedmedical_234_instances.has_selection()) goto event_1364_6_end;
        for (ObjectIterator it(bedmedical_234_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1364_6_end: ;
}
// Function purpose: generated callback event_func_3563 processes event block(s) 1368_6. Actions/conditions:
//        1368_6: changes a stored game value.
void Frames::event_func_3563()
{
    VITA_LEGACY_EVENT();
    // event 1368_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1368_6_end;
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_6.has_selection()) goto event_1368_6_end;
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_1368_6_end: ;
}
