#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::steam_on_connect_6()
{
    folder_search_loop_0();
}
// Function purpose: generated callback event_func_3165 processes event block(s) 4_6. Actions/conditions: 4_6:
//        sets text formatting to bold.
void Frames::event_func_3165()
{
    // event 4_6 : sets text formatting to bold
    {
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_4_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_bold(0);
        }
    }
    event_4_6_end: ;
}
// Function purpose: generated callback event_func_3166 processes event block(s) 51_6. Actions/conditions:
//        51_6: checks the event-specific game state condition is met; game state MapLoop; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_3166()
{
    // event 51_6 : checks the event-specific game state condition is met; game state MapLoop; this handler gates a game event without a direct value/object action
    {
        if (!(group_load_map_from_file_1)) goto event_51_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(721, str_mapheight_1897)))) goto event_51_6_end;
        {
            loop_load_y_running = true;
            int times = int(10);
            loop_load_y_index = 0;
            while (loop_load_y_index < times) {
                loop_load_y_6();
                if (!loop_load_y_running) break;
                loop_load_y_index++;
            }
        }
    }
    event_51_6_end: ;
}
// Function purpose: generated callback event_func_3167 processes event block(s) 59_6. Actions/conditions:
//        59_6: sets block_log to 0.
void Frames::event_func_3167()
{
    // event 59_6 : sets block_log to 0
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_old_tiles_1)) goto event_59_6_end;
        if (!group_check_group_load_map_from_file_old_tiles_ground_1_0) goto event_59_6_end;
        group_check_group_load_map_from_file_old_tiles_ground_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(492, str_block_log_1371, 0);
    }
    event_59_6_end: ;
}
// Function purpose: generated callback event_func_3168 processes event block(s) 111_6. Actions/conditions:
//        111_6: sets block_log to 0.
void Frames::event_func_3168()
{
    // event 111_6 : sets block_log to 0
    {
        if (!(group_load_map_from_file_1 && group_load_map_from_file_new_tiles_1)) goto event_111_6_end;
        if (!group_check_group_load_map_from_file_new_tiles_ground_2_1_0) goto event_111_6_end;
        group_check_group_load_map_from_file_new_tiles_ground_2_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(492, str_block_log_1371, 0);
    }
    event_111_6_end: ;
}
// Function purpose: generated callback event_func_3169 processes event block(s) 155_6. Actions/conditions:
//        155_6: checks the event-specific game state condition is met; game state MapLoop; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_3169()
{
    // event 155_6 : checks the event-specific game state condition is met; game state MapLoop; this handler gates a game event without a direct value/object action
    {
        if (!(group_load_map_from_file_1)) goto event_155_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)) >= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(721, str_mapheight_1897)))) goto event_155_6_end;
        if (!((global_values->get(18)) != (2))) goto event_155_6_end;
        {
            loop_load_map_objects_running = true;
            int times = int(((INI*)get_instance(mapload_322_instances))->get_item_count(str_objects_1880));
            loop_load_map_objects_index = 0;
            while (loop_load_map_objects_index < times) {
                loop_load_map_objects_6();
                if (!loop_load_map_objects_running) break;
                loop_load_map_objects_index++;
            }
        }
        if (!group_setup_1) {
            group_setup_1 = true;
            group_check_group_setup_player_stats_time_1_5 = true;
            group_check_group_setup_1_0 = true;
            group_check_group_setup_1_1 = true;
            group_check_group_setup_1_2 = true;
            group_check_group_setup_1_3 = true;
            group_check_group_setup_1_4 = true;
            group_check_group_setup_1_5 = true;
            group_check_group_setup_1_6 = true;
            group_check_group_setup_1_7 = true;
            group_check_group_setup_1_8 = true;
            group_check_group_setup_1_9 = true;
            group_check_group_setup_setup_chairs_1_0 = true;
            group_check_group_setup_eteam_beds_1_1 = true;
            group_check_group_setup_eteam_beds_1_0 = true;
            group_check_group_setup_new_desk_id_code_1_0 = true;
            group_check_group_setup_new_desk_id_code_1_1 = true;
            group_check_group_setup_1_12 = true;
            group_check_group_setup_1_13 = true;
            group_check_group_setup_1_10 = true;
            group_check_group_setup_1_11 = true;
            group_check_group_setup_1_16 = true;
            group_check_group_setup_setup_chairs_1_1 = true;
            group_check_group_setup_1_14 = true;
            group_check_group_setup_1_15 = true;
            group_check_group_setup_fill_inventory_1_0 = true;
            group_check_group_setup_fill_inventory_1_1 = true;
            group_check_group_setup_load_stuff_1_7 = true;
            group_check_group_setup_load_stuff_1_6 = true;
            group_check_group_setup_load_stuff_1_1 = true;
            group_check_group_setup_load_stuff_1_0 = true;
            group_check_group_setup_load_stuff_1_3 = true;
            group_check_group_setup_load_stuff_1_2 = true;
            group_check_group_setup_setup_desks_1_1 = true;
            group_check_group_setup_setup_desks_1_0 = true;
            group_check_group_setup_player_stats_time_1_4 = true;
            group_check_group_setup_setup_desks_1_2 = true;
            group_check_group_setup_player_stats_time_1_2 = true;
            group_check_group_setup_player_stats_time_1_3 = true;
            group_check_group_setup_player_stats_time_1_0 = true;
            group_check_group_setup_player_stats_time_1_1 = true;
            group_check_group_setup_load_stuff_1_5 = true;
            group_check_group_setup_load_stuff_1_4 = true;
            group_check_group_setup_setup_vents_and_vent_slats_1_0 = true;
            group_check_group_setup_2_5 = true;
            group_check_group_setup_2_4 = true;
            group_check_group_setup_2_3 = true;
            group_check_group_setup_2_2 = true;
            group_check_group_setup_2_1 = true;
            group_check_group_setup_2_0 = true;
            group_check_group_setup_assign_canteen_chairs_1_0 = true;
            group_check_group_setup_assign_canteen_chairs_1_1 = true;
        }
            group_load_map_from_file_1 = false;
    
    }
    event_155_6_end: ;
}
// Function purpose: generated callback event_func_3170 processes event block(s) 156_6. Actions/conditions:
//        156_6: checks the event-specific game state condition is met; game state MapLoop; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_3170()
{
    // event 156_6 : checks the event-specific game state condition is met; game state MapLoop; this handler gates a game event without a direct value/object action
    {
        if (!(group_load_map_from_file_1)) goto event_156_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(490, str_maploop_1369)) >= (((AssociateArray*)get_instance(gameVariables_instances))->get_value(721, str_mapheight_1897)))) goto event_156_6_end;
        if (!((global_values->get(18)) == (2))) goto event_156_6_end;
        {
            loop_load_map_objects_running = true;
            int times = int(5000);
            loop_load_map_objects_index = 0;
            while (loop_load_map_objects_index < times) {
                loop_load_map_objects_6();
                if (!loop_load_map_objects_running) break;
                loop_load_map_objects_index++;
            }
        }
        if (!group_setup_1) {
            group_setup_1 = true;
            group_check_group_setup_player_stats_time_1_5 = true;
            group_check_group_setup_1_0 = true;
            group_check_group_setup_1_1 = true;
            group_check_group_setup_1_2 = true;
            group_check_group_setup_1_3 = true;
            group_check_group_setup_1_4 = true;
            group_check_group_setup_1_5 = true;
            group_check_group_setup_1_6 = true;
            group_check_group_setup_1_7 = true;
            group_check_group_setup_1_8 = true;
            group_check_group_setup_1_9 = true;
            group_check_group_setup_setup_chairs_1_0 = true;
            group_check_group_setup_eteam_beds_1_1 = true;
            group_check_group_setup_eteam_beds_1_0 = true;
            group_check_group_setup_new_desk_id_code_1_0 = true;
            group_check_group_setup_new_desk_id_code_1_1 = true;
            group_check_group_setup_1_12 = true;
            group_check_group_setup_1_13 = true;
            group_check_group_setup_1_10 = true;
            group_check_group_setup_1_11 = true;
            group_check_group_setup_1_16 = true;
            group_check_group_setup_setup_chairs_1_1 = true;
            group_check_group_setup_1_14 = true;
            group_check_group_setup_1_15 = true;
            group_check_group_setup_fill_inventory_1_0 = true;
            group_check_group_setup_fill_inventory_1_1 = true;
            group_check_group_setup_load_stuff_1_7 = true;
            group_check_group_setup_load_stuff_1_6 = true;
            group_check_group_setup_load_stuff_1_1 = true;
            group_check_group_setup_load_stuff_1_0 = true;
            group_check_group_setup_load_stuff_1_3 = true;
            group_check_group_setup_load_stuff_1_2 = true;
            group_check_group_setup_setup_desks_1_1 = true;
            group_check_group_setup_setup_desks_1_0 = true;
            group_check_group_setup_player_stats_time_1_4 = true;
            group_check_group_setup_setup_desks_1_2 = true;
            group_check_group_setup_player_stats_time_1_2 = true;
            group_check_group_setup_player_stats_time_1_3 = true;
            group_check_group_setup_player_stats_time_1_0 = true;
            group_check_group_setup_player_stats_time_1_1 = true;
            group_check_group_setup_load_stuff_1_5 = true;
            group_check_group_setup_load_stuff_1_4 = true;
            group_check_group_setup_setup_vents_and_vent_slats_1_0 = true;
            group_check_group_setup_2_5 = true;
            group_check_group_setup_2_4 = true;
            group_check_group_setup_2_3 = true;
            group_check_group_setup_2_2 = true;
            group_check_group_setup_2_1 = true;
            group_check_group_setup_2_0 = true;
            group_check_group_setup_assign_canteen_chairs_1_0 = true;
            group_check_group_setup_assign_canteen_chairs_1_1 = true;
        }
            group_load_map_from_file_1 = false;
    
    }
    event_156_6_end: ;
}
// Function purpose: generated callback event_func_3171 processes event block(s) 330_6. Actions/conditions:
//        330_6: sets shad_count to 0; removes the selected object.
void Frames::event_func_3171()
{
    // event 330_6 : sets shad_count to 0; removes the selected object
    {
        if (!(group_setup_1)) goto event_330_6_end;
        if (!group_check_group_setup_1_0) goto event_330_6_end;
        group_check_group_setup_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(645, str_shad_count_1745, 0);
        {
            loop_new_shads_y_running = true;
            int times = int(height/MathHelper()/16);
            loop_new_shads_y_index = 0;
            while (loop_new_shads_y_index < times) {
                loop_new_shads_y_6();
                if (!loop_new_shads_y_running) break;
                loop_new_shads_y_index++;
            }
        }
        shadows_356_instances.clear_selection();
        for (ObjectIterator it(shadows_356_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->destroy();
        }
    }
    event_330_6_end: ;
}
// Function purpose: generated callback event_func_3172 processes event block(s) 339_6. Actions/conditions:
//        339_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3172()
{
    // event 339_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_339_6_end;
        if (!group_check_group_setup_1_1) goto event_339_6_end;
        group_check_group_setup_1_1 = false;
        inmateBed_instances.clear_selection();
        spread_value(inmateBed_instances, 0, 1);
        canteenchair_312_instances.clear_selection();
        spread_value(canteenchair_312_instances, 0, 1);
        toilet2_307_instances.clear_selection();
        spread_value(toilet2_307_instances, 0, 1);
        oven2_314_instances.clear_selection();
        spread_value(oven2_314_instances, 0, 1);
        washing2_313_instances.clear_selection();
        spread_value(washing2_313_instances, 0, 1);
        library2_316_instances.clear_selection();
        spread_value(library2_316_instances, 0, 1);
        gym3_317_instances.clear_selection();
        spread_value(gym3_317_instances, 0, 1);
        gym4_318_instances.clear_selection();
        spread_value(gym4_318_instances, 0, 1);
        waypointinmateshower2_309_instances.clear_selection();
        spread_value(waypointinmateshower2_309_instances, 0, 1);
        waypointinmaterollcall2_310_instances.clear_selection();
        spread_value(waypointinmaterollcall2_310_instances, 0, 1);
        waypointinmate2_311_instances.clear_selection();
        spread_value(waypointinmate2_311_instances, 0, 1);
        waypointguard2_315_instances.clear_selection();
        spread_value(waypointguard2_315_instances, 0, 1);
        outsidewaypoints_255_instances.clear_selection();
        spread_value(outsidewaypoints_255_instances, 0, 1);
        guardpostshower_254_instances.clear_selection();
        spread_value(guardpostshower_254_instances, 0, 1);
        waypointguardgym_182_instances.clear_selection();
        spread_value(waypointguardgym_182_instances, 0, 1);
        waypointrollcall2_189_instances.clear_selection();
        spread_value(waypointrollcall2_189_instances, 0, 1);
        waypointcanteenguard_181_instances.clear_selection();
        spread_value(waypointcanteenguard_181_instances, 0, 1);
        bedmedical_234_instances.clear_selection();
        spread_value(bedmedical_234_instances, 0, 1);
        table2_308_instances.clear_selection();
        spread_value(table2_308_instances, 0, 1);
        licenseprints_329_instances.clear_selection();
        spread_value(licenseprints_329_instances, 0, 1);
        jobboard_244_instances.clear_selection();
        spread_value(jobboard_244_instances, 0, 1);
        containerlaundryclean_275_instances.clear_selection();
        spread_value(containerlaundryclean_275_instances, 0, 1);
        containerlaundrydirty_274_instances.clear_selection();
        spread_value(containerlaundrydirty_274_instances, 0, 1);
        kitchensink_236_instances.clear_selection();
        spread_value(kitchensink_236_instances, 0, 1);
        camera_237_instances.clear_selection();
        spread_value(camera_237_instances, 0, 1);
        metaldetector_231_instances.clear_selection();
        spread_value(metaldetector_231_instances, 0, 1);
        qualifier_17.clear_selection();
        spread_value(qualifier_17, 0, 1);
        fan_281_instances.clear_selection();
        spread_value(fan_281_instances, 0, 1);
        bedguard_337_instances.clear_selection();
        spread_value(bedguard_337_instances, 0, 5);
        waypointtowerent_341_instances.clear_selection();
        spread_value(waypointtowerent_341_instances, 0, 1);
        towerguard_342_instances.clear_selection();
        spread_value(towerguard_342_instances, 0, 1);
        ventCover_instances.clear_selection();
        spread_value(ventCover_instances, 0, 1);
        canteenserving_277_instances.clear_selection();
        spread_value(canteenserving_277_instances, 0, 1);
        visitationvisitor_381_instances.clear_selection();
        spread_value(visitationvisitor_381_instances, 0, 1);
        visitationinmate_382_instances.clear_selection();
        spread_value(visitationinmate_382_instances, 0, 1);
        pushupmat_408_instances.clear_selection();
        spread_value(pushupmat_408_instances, 0, 1);
        joggingmat_407_instances.clear_selection();
        spread_value(joggingmat_407_instances, 0, 1);
        chinupbar_430_instances.clear_selection();
        spread_value(chinupbar_430_instances, 0, 1);
    }
    event_339_6_end: ;
}
// Function purpose: generated callback event_func_3173 processes event block(s) 340_6. Actions/conditions:
//        340_6: updates game state with manager.up = translate_string_to_key(get_string(722, Key_Up)); updates game
//        state with manager.down = translate_string_to_key(get_string(723, Key_Down)); updates game state with
//        manager.left = translate_string_to_key(get_string(724, Key_Left)); plus 7 more actions.
void Frames::event_func_3173()
{
    // event 340_6 : updates game state with manager.up = translate_string_to_key(get_string(722, Key_Up)); updates game state with manager.down = translate_string_to_key(get_string(723, Key_Down)); updates game state with manager.left = translate_string_to_key(get_string(724, Key_Left)); plus 7 more actions
    {
        if (!(group_setup_1)) goto event_340_6_end;
        if (!group_check_group_setup_1_2) goto event_340_6_end;
        group_check_group_setup_1_2 = false;
        manager.up = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(722, str_key_up_67));
        manager.down = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(723, str_key_down_69));
        manager.left = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(724, str_key_left_71));
        manager.right = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(725, str_key_right_73));
        manager.button1 = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(726, str_key_ac1_74));
        manager.button2 = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(727, str_key_ac2_76));
        manager.button3 = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(728, str_key_combat_78));
    }
    event_340_6_end: ;
}
// Function purpose: generated callback event_func_3174 processes event block(s) 341_6. Actions/conditions:
//        341_6: sets the selected object's numeric value to -1; sets bedNum to 1.
void Frames::event_func_3174()
{
    // event 341_6 : sets the selected object's numeric value to -1; sets bedNum to 1
    {
        if (!(group_setup_1)) goto event_341_6_end;
        if (!group_check_group_setup_eteam_beds_1_0) goto event_341_6_end;
        group_check_group_setup_eteam_beds_1_0 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_341_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(130, str_bednum_692, 1);
    }
    event_341_6_end: ;
}
// Function purpose: generated callback event_func_3175 processes event block(s) 342_6. Actions/conditions:
//        342_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; game state eTeam; this handler gates a game e.
void Frames::event_func_3175()
{
    // event 342_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; game state eTeam; this handler gates a game e
    {
        if (!(group_setup_1)) goto event_342_6_end;
        if (!group_check_group_setup_eteam_beds_1_1) goto event_342_6_end;
        group_check_group_setup_eteam_beds_1_1 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_342_6_end;
        {
            loop_eteam_beds_running = true;
            int times = int(1);
            loop_eteam_beds_index = 0;
            while (loop_eteam_beds_index < times) {
                loop_eteam_beds_6();
                if (!loop_eteam_beds_running) break;
                loop_eteam_beds_index++;
            }
        }
    }
    event_342_6_end: ;
}
// Function purpose: generated callback event_func_3176 processes event block(s) 348_6. Actions/conditions:
//        348_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3176()
{
    // event 348_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_348_6_end;
        if (!group_check_group_setup_1_3) goto event_348_6_end;
        group_check_group_setup_1_3 = false;
        {
            loop_pavatar_running = true;
            int times = int(1);
            loop_pavatar_index = 0;
            while (loop_pavatar_index < times) {
                loop_pavatar_6();
                if (!loop_pavatar_running) break;
                loop_pavatar_index++;
            }
        }
    }
    event_348_6_end: ;
}
// Function purpose: generated callback event_func_3177 processes event block(s) 373_6. Actions/conditions:
//        373_6: sets the object's animation to 2; loads saved game data; loads saved game data; plus 5 more actions.
void Frames::event_func_3177()
{
    // event 373_6 : sets the object's animation to 2; loads saved game data; loads saved game data; plus 5 more actions
    {
        if (!(group_setup_1)) goto event_373_6_end;
        if (!group_check_group_setup_1_4) goto event_373_6_end;
        group_check_group_setup_1_4 = false;
        if (!((global_values->get(11)) == (1))) goto event_373_6_end;
        ((Active*)get_instance(interfaceButtons_instances))->force_animation(2);
        ((ArrayObject*)get_instance(digarray_228_instances))->load(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_da_arr_1898);
        ((ArrayObject*)get_instance(wallsarray_232_instances))->load(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_wa_arr_1899);
        ((ArrayObject*)get_instance(fencearray_265_instances))->load(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_fa_arr_1900);
        wardennote_470_instances.clear_selection();
        for (ObjectIterator it(wardennote_470_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_373_6_end: ;
}
// Function purpose: generated callback event_func_3178 processes event block(s) 374_6. Actions/conditions:
//        374_6: moves the selected object behind other objects; sets the selected object's numeric value to 1.
void Frames::event_func_3178()
{
    // event 374_6 : moves the selected object behind other objects; sets the selected object's numeric value to 1
    {
        if (!(group_setup_1)) goto event_374_6_end;
        if (!group_check_group_setup_1_5) goto event_374_6_end;
        group_check_group_setup_1_5 = false;
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        spread_value(qualifier_9, 0, 1);
        qualifier_4.clear_selection();
        spread_value(qualifier_4, 0, 1);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(13, 1);
    }
    event_374_6_end: ;
}
// Function purpose: generated callback event_func_3179 processes event block(s) 375_6. Actions/conditions:
//        375_6: loads a game or save-data file.
void Frames::event_func_3179()
{
    // event 375_6 : loads a game or save-data file
    {
        if (!(group_setup_1)) goto event_375_6_end;
        if (!group_check_group_setup_1_6) goto event_375_6_end;
        group_check_group_setup_1_6 = false;
        if (!((global_strings->get(7)) != (empty_string))) goto event_375_6_end;
        ((INI*)get_instance(inispeech_453_instances))->load_file(str_data_366+global_strings->get(7)+str_dat_216);
    }
    event_375_6_end: ;
}
// Function purpose: generated callback event_func_3180 processes event block(s) 376_6. Actions/conditions:
//        376_6: loads a game or save-data file.
void Frames::event_func_3180()
{
    // event 376_6 : loads a game or save-data file
    {
        if (!(group_setup_1)) goto event_376_6_end;
        if (!group_check_group_setup_1_7) goto event_376_6_end;
        group_check_group_setup_1_7 = false;
        if (!((global_strings->get(7)) == (empty_string))) goto event_376_6_end;
        ((INI*)get_instance(inispeech_453_instances))->load_file(str_data_speech_357+global_strings->get(6)+str_dat_216);
    }
    event_376_6_end: ;
}
// Function purpose: generated callback event_func_3181 processes event block(s) 377_6. Actions/conditions:
//        377_6: loads a game or save-data file; loads a game or save-data file; sets the selected object's visibility
//        to false; plus 25 more actions.
void Frames::event_func_3181()
{
    // event 377_6 : loads a game or save-data file; loads a game or save-data file; sets the selected object's visibility to false; plus 25 more actions
    {
        if (!(group_setup_1)) goto event_377_6_end;
        if (!group_check_group_setup_1_8) goto event_377_6_end;
        group_check_group_setup_1_8 = false;
        ((INI*)get_instance(itemData_instances))->load_file(str_data_items_356+global_strings->get(6)+str_dat_216);
        ((INI*)get_instance(translationData_instances))->load_file(str_data_data_215+global_strings->get(6)+str_dat_216);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        set_cursor_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(729, str_noticetext_1901, 200);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(730, str_guardrange_1902, 80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(311, str_beddummy_1088, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(49, str_cursor_517, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(731, str_lockdown_1467, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(732, str_totalconvs_1903, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(607, str_removeslats_1586, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(584, str_playtime_1553, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(216, str_lighting_819, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(673, str_timetofight_1777, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(397, str_yourdesk_1208, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(482, str_newitemhp_1357, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(733, str_lastx_1904, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(734, str_lasty_1905, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(263, str_doors_utility_locked_920, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(264, str_doors_staff_locked_921, 1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
        }
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(25, -1);
    }
    event_377_6_end: ;
}
// Function purpose: generated callback event_func_3182 processes event block(s) 378_6. Actions/conditions:
//        378_6: sets DesksArray to empty_string; sets PocketsArray to empty_string.
void Frames::event_func_3182()
{
    // event 378_6 : sets DesksArray to empty_string; sets PocketsArray to empty_string
    {
        if (!(group_setup_1)) goto event_378_6_end;
        if (!group_check_group_setup_1_9) goto event_378_6_end;
        group_check_group_setup_1_9 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(333, str_desksarray_1122, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(334, str_pocketsarray_1123, empty_string);
        {
            loop_set_arrays_running = true;
            int times = int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(52, str_item_count_527));
            loop_set_arrays_index = 0;
            while (loop_set_arrays_index < times) {
                loop_set_arrays_6();
                if (!loop_set_arrays_running) break;
                loop_set_arrays_index++;
            }
        }
    }
    event_378_6_end: ;
}
// Function purpose: generated callback event_func_3183 processes event block(s) 383_6. Actions/conditions:
//        383_6: sets craft_poss to empty_string; sets CraftNotes to @.
void Frames::event_func_3183()
{
    // event 383_6 : sets craft_poss to empty_string; sets CraftNotes to @
    {
        if (!(group_setup_1)) goto event_383_6_end;
        if (!group_check_group_setup_1_10) goto event_383_6_end;
        group_check_group_setup_1_10 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(253, str_craft_poss_901, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(108, str_craftnotes_665, str__254);
        {
            loop_craft_poss_running = true;
            int times = int(200);
            loop_craft_poss_index = 0;
            while (loop_craft_poss_index < times) {
                loop_craft_poss_6();
                if (!loop_craft_poss_running) break;
                loop_craft_poss_index++;
            }
        }
        {
            loop_make_craftnote_str_running = true;
            int times = int(((INI*)get_instance(globals_127_instances))->get_item_count(str_craftnotes_665));
            loop_make_craftnote_str_index = 0;
            while (loop_make_craftnote_str_index < times) {
                loop_make_craftnote_str_6();
                if (!loop_make_craftnote_str_running) break;
                loop_make_craftnote_str_index++;
            }
        }
    }
    event_383_6_end: ;
}
// Function purpose: generated callback event_func_3184 processes event block(s) 386_6. Actions/conditions:
//        386_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3184()
{
    // event 386_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_386_6_end;
        if (!group_check_group_setup_2_0) goto event_386_6_end;
        group_check_group_setup_2_0 = false;
        {
            loop_set_walls_running = true;
            int times = int(qualifier_4.size());
            loop_set_walls_index = 0;
            while (loop_set_walls_index < times) {
                loop_set_walls_6();
                if (!loop_set_walls_running) break;
                loop_set_walls_index++;
            }
        }
    }
    event_386_6_end: ;
}
// Function purpose: generated callback event_func_3185 processes event block(s) 387_6. Actions/conditions:
//        387_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3185()
{
    // event 387_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_387_6_end;
        if (!group_check_group_setup_assign_canteen_chairs_1_0) goto event_387_6_end;
        group_check_group_setup_assign_canteen_chairs_1_0 = false;
        canteenchair_312_instances.clear_selection();
        spread_value(canteenchair_312_instances, 0, 0);
    }
    event_387_6_end: ;
}
// Function purpose: generated callback event_func_3186 processes event block(s) 388_6. Actions/conditions:
//        388_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3186()
{
    // event 388_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_388_6_end;
        if (!group_check_group_setup_assign_canteen_chairs_1_1) goto event_388_6_end;
        group_check_group_setup_assign_canteen_chairs_1_1 = false;
        {
            loop_assign_cant_chairs_running = true;
            int times = int(canteenchair_312_instances.size());
            loop_assign_cant_chairs_index = 0;
            while (loop_assign_cant_chairs_index < times) {
                loop_assign_cant_chairs_6();
                if (!loop_assign_cant_chairs_running) break;
                loop_assign_cant_chairs_index++;
            }
        }
    }
    event_388_6_end: ;
}
// Function purpose: generated callback event_func_3187 processes event block(s) 392_6. Actions/conditions:
//        392_6: sets InmateCount to 20.
void Frames::event_func_3187()
{
    // event 392_6 : sets InmateCount to 20
    {
        if (!(group_setup_1)) goto event_392_6_end;
        if (!group_check_group_setup_2_1) goto event_392_6_end;
        group_check_group_setup_2_1 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(168, str_inmatecount_746)) == (0))) goto event_392_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(168, str_inmatecount_746, 20);
    }
    event_392_6_end: ;
}
// Function purpose: generated callback event_func_3188 processes event block(s) 393_6. Actions/conditions:
//        393_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3188()
{
    // event 393_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_393_6_end;
        if (!group_check_group_setup_2_2) goto event_393_6_end;
        group_check_group_setup_2_2 = false;
        if (!((global_values->get(11)) == (0))) goto event_393_6_end;
        {
            loop_create_guards_running = true;
            int times = int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(169, str_guardcount_747));
            loop_create_guards_index = 0;
            while (loop_create_guards_index < times) {
                loop_create_guards_6();
                if (!loop_create_guards_running) break;
                loop_create_guards_index++;
            }
        }
        {
            loop_create_inmates_running = true;
            int times = int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(168, str_inmatecount_746)-1);
            loop_create_inmates_index = 0;
            while (loop_create_inmates_index < times) {
                loop_create_inmates_6();
                if (!loop_create_inmates_running) break;
                loop_create_inmates_index++;
            }
        }
        {
            loop_assign_keys_running = true;
            int times = int(1);
            loop_assign_keys_index = 0;
            while (loop_assign_keys_index < times) {
                loop_assign_keys_6();
                if (!loop_assign_keys_running) break;
                loop_assign_keys_index++;
            }
        }
    }
    event_393_6_end: ;
}
// Function purpose: generated callback event_func_3189 processes event block(s) 394_6. Actions/conditions:
//        394_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3189()
{
    // event 394_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_394_6_end;
        if (!group_check_group_setup_2_3) goto event_394_6_end;
        group_check_group_setup_2_3 = false;
        if (!((global_values->get(11)) == (1))) goto event_394_6_end;
        {
            loop_createload_guards_running = true;
            int times = int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(169, str_guardcount_747));
            loop_createload_guards_index = 0;
            while (loop_createload_guards_index < times) {
                loop_createload_guards_6();
                if (!loop_createload_guards_running) break;
                loop_createload_guards_index++;
            }
        }
        {
            loop_createload_inmates_running = true;
            int times = int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(168, str_inmatecount_746)-1);
            loop_createload_inmates_index = 0;
            while (loop_createload_inmates_index < times) {
                loop_createload_inmates_6();
                if (!loop_createload_inmates_running) break;
                loop_createload_inmates_index++;
            }
        }
    }
    event_394_6_end: ;
}
// Function purpose: generated callback event_func_3190 processes event block(s) 395_6. Actions/conditions:
//        395_6: moves the selected object behind other objects; clears the current selection or contents; clears the
//        current selection or contents.
void Frames::event_func_3190()
{
    // event 395_6 : moves the selected object behind other objects; clears the current selection or contents; clears the current selection or contents
    {
        if (!(group_setup_1)) goto event_395_6_end;
        if (!group_check_group_setup_2_4) goto event_395_6_end;
        group_check_group_setup_2_4 = false;
        qualifier_4.clear_selection();
        for (QualifierIterator it(qualifier_4); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((ListObject*)get_instance(listguards_218_instances))->clear();
        ((ListObject*)get_instance(listinmates_217_instances))->clear();
        {
            loop_set_stats_running = true;
            int times = int(qualifier_14.size());
            loop_set_stats_index = 0;
            while (loop_set_stats_index < times) {
                loop_set_stats_6();
                if (!loop_set_stats_running) break;
                loop_set_stats_index++;
            }
        }
    }
    event_395_6_end: ;
}
// Function purpose: generated callback event_func_3191 processes event block(s) 484_6. Actions/conditions:
//        484_6: sets the selected object's numeric value to 4; stops the object's movement; sets the selected
//        object's numeric value to 3.
void Frames::event_func_3191()
{
    // event 484_6 : sets the selected object's numeric value to 4; stops the object's movement; sets the selected object's numeric value to 3
    {
        if (!(group_setup_1)) goto event_484_6_end;
        if (!group_check_group_setup_2_5) goto event_484_6_end;
        group_check_group_setup_2_5 = false;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 4);
            ((Active*)*it)->get_movement()->stop(false);
        }
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(13, 3);
        }
        qualifier_17.clear_selection();
        spread_value(qualifier_17, 0, 1);
    }
    event_484_6_end: ;
}
// Function purpose: generated callback event_func_3192 processes event block(s) 485_6. Actions/conditions:
//        485_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3192()
{
    // event 485_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_485_6_end;
        if (!group_check_group_setup_new_desk_id_code_1_0) goto event_485_6_end;
        group_check_group_setup_new_desk_id_code_1_0 = false;
        if (!((global_values->get(11)) == (0))) goto event_485_6_end;
        desks_305_instances.clear_selection();
        spread_value(desks_305_instances, 25, 1);
    }
    event_485_6_end: ;
}
// Function purpose: generated callback event_func_3193 processes event block(s) 486_6. Actions/conditions:
//        486_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3193()
{
    // event 486_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_486_6_end;
        if (!group_check_group_setup_new_desk_id_code_1_1) goto event_486_6_end;
        group_check_group_setup_new_desk_id_code_1_1 = false;
        if (!((global_values->get(11)) == (0))) goto event_486_6_end;
        {
            loop_desk_ids_running = true;
            int times = int(desks_305_instances.size());
            loop_desk_ids_index = 0;
            while (loop_desk_ids_index < times) {
                loop_desk_ids_6();
                if (!loop_desk_ids_running) break;
                loop_desk_ids_index++;
            }
        }
    }
    event_486_6_end: ;
}
// Function purpose: generated callback event_func_3194 processes event block(s) 496_6. Actions/conditions:
//        496_6: sets the selected object's numeric value to 0; sets YourDesk to
//        ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0).
void Frames::event_func_3194()
{
    // event 496_6 : sets the selected object's numeric value to 0; sets YourDesk to ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_setup_1)) goto event_496_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_496_6_end;
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(397, str_yourdesk_1208, ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0));
    }
    event_496_6_end: ;
}
// Function purpose: generated callback event_func_3195 processes event block(s) 497_6. Actions/conditions:
//        497_6: sets Desk0_Slot1 to 17_100; sets Desk0_Slot2 to 45_100; sets Desk0_Slot3 to 47_100; plus 1 more
//        actions.
void Frames::event_func_3195()
{
    // event 497_6 : sets Desk0_Slot1 to 17_100; sets Desk0_Slot2 to 45_100; sets Desk0_Slot3 to 47_100; plus 1 more actions
    {
        if (!(group_setup_1)) goto event_497_6_end;
        if (!group_check_group_setup_setup_desks_1_0) goto event_497_6_end;
        group_check_group_setup_setup_desks_1_0 = false;
        if (!((global_values->get(11)) == (0))) goto event_497_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(735, str_desk0_slot1_1906, str_17_100_1474);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(736, str_desk0_slot2_1907, str_45_100_1475);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(737, str_desk0_slot3_1908, str_47_100_1476);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(738, str_desk0_slot4_1909, str_48_100_1478);
        {
            loop_clear_desks_running = true;
            int times = int(desks_305_instances.size());
            loop_clear_desks_index = 0;
            while (loop_clear_desks_index < times) {
                loop_clear_desks_6();
                if (!loop_clear_desks_running) break;
                loop_clear_desks_index++;
            }
        }
    }
    event_497_6_end: ;
}
// Function purpose: generated callback event_func_3196 processes event block(s) 504_6. Actions/conditions:
//        504_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3196()
{
    // event 504_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_504_6_end;
        if (!group_check_group_setup_setup_desks_1_1) goto event_504_6_end;
        group_check_group_setup_setup_desks_1_1 = false;
        if (!((global_values->get(11)) == (1))) goto event_504_6_end;
        desks_305_instances.clear_selection();
        spread_value(desks_305_instances, 0, 0);
    }
    event_504_6_end: ;
}
// Function purpose: generated callback event_func_3197 processes event block(s) 505_6. Actions/conditions:
//        505_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3197()
{
    // event 505_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_505_6_end;
        if (!group_check_group_setup_setup_desks_1_2) goto event_505_6_end;
        group_check_group_setup_setup_desks_1_2 = false;
        if (!((global_values->get(11)) == (1))) goto event_505_6_end;
        {
            loop_load_saved_desks_running = true;
            int times = int(desks_305_instances.size());
            loop_load_saved_desks_index = 0;
            while (loop_load_saved_desks_index < times) {
                loop_load_saved_desks_6();
                if (!loop_load_saved_desks_running) break;
                loop_load_saved_desks_index++;
            }
        }
    }
    event_505_6_end: ;
}
// Function purpose: generated callback event_func_3198 processes event block(s) 508_6. Actions/conditions:
//        508_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3198()
{
    // event 508_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_508_6_end;
        if (!((mapsetupobstaclemarker_323_instances.size()) > (0))) goto event_508_6_end;
        if (once_condition_508_6) goto event_508_6_end;
        once_condition_508_6 = true;
        {
            loop_bog_dir_running = true;
            int times = int(toilet2_307_instances.size());
            loop_bog_dir_index = 0;
            while (loop_bog_dir_index < times) {
                loop_bog_dir_6();
                if (!loop_bog_dir_running) break;
                loop_bog_dir_index++;
            }
        }
    }
    event_508_6_end: ;
}
// Function purpose: generated callback event_func_3199 processes event block(s) 512_6. Actions/conditions:
//        512_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3199()
{
    // event 512_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_512_6_end;
        if (!((mapsetupobstaclemarker_323_instances.size()) > (0))) goto event_512_6_end;
        if (once_condition_512_6) goto event_512_6_end;
        once_condition_512_6 = true;
        {
            loop_det_dir_running = true;
            int times = int(metaldetector_231_instances.size());
            loop_det_dir_index = 0;
            while (loop_det_dir_index < times) {
                loop_det_dir_6();
                if (!loop_det_dir_running) break;
                loop_det_dir_index++;
            }
        }
    }
    event_512_6_end: ;
}
// Function purpose: generated callback event_func_3200 processes event block(s) 516_6. Actions/conditions:
//        516_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3200()
{
    // event 516_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_516_6_end;
        if (!group_check_group_setup_setup_chairs_1_0) goto event_516_6_end;
        group_check_group_setup_setup_chairs_1_0 = false;
        canteenchair_312_instances.clear_selection();
        spread_value(canteenchair_312_instances, 0, 1);
    }
    event_516_6_end: ;
}
// Function purpose: generated callback event_func_3201 processes event block(s) 517_6. Actions/conditions:
//        517_6: sets lmao to 0.
void Frames::event_func_3201()
{
    // event 517_6 : sets lmao to 0
    {
        if (!(group_setup_1)) goto event_517_6_end;
        if (!group_check_group_setup_setup_chairs_1_1) goto event_517_6_end;
        group_check_group_setup_setup_chairs_1_1 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(310, str_lmao_1086, 0);
        {
            loop_chair_dir_running = true;
            int times = int(canteenchair_312_instances.size());
            loop_chair_dir_index = 0;
            while (loop_chair_dir_index < times) {
                loop_chair_dir_6();
                if (!loop_chair_dir_running) break;
                loop_chair_dir_index++;
            }
        }
    }
    event_517_6_end: ;
}
// Function purpose: generated callback event_func_3202 processes event block(s) 521_6. Actions/conditions:
//        521_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3202()
{
    // event 521_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_521_6_end;
        if (!group_check_group_setup_setup_vents_and_vent_slats_1_0) goto event_521_6_end;
        group_check_group_setup_setup_vents_and_vent_slats_1_0 = false;
        {
            loop_slat_dir_running = true;
            int times = int(fan_281_instances.size());
            loop_slat_dir_index = 0;
            while (loop_slat_dir_index < times) {
                loop_slat_dir_6();
                if (!loop_slat_dir_running) break;
                loop_slat_dir_index++;
            }
        }
    }
    event_521_6_end: ;
}
// Function purpose: generated callback event_func_3203 processes event block(s) 524_6. Actions/conditions:
//        524_6: sets the selected object's layer to 4-1; sets the selected object's numeric value to 0.
void Frames::event_func_3203()
{
    // event 524_6 : sets the selected object's layer to 4-1; sets the selected object's numeric value to 0
    {
        if (!(group_setup_1)) goto event_524_6_end;
        qualifier_8.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (2))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_524_6_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_524_6_end: ;
}
// Function purpose: generated callback event_func_3204 processes event block(s) 525_6. Actions/conditions:
//        525_6: sets the selected object's layer to 5-1; sets the selected object's numeric value to 0.
void Frames::event_func_3204()
{
    // event 525_6 : sets the selected object's layer to 5-1; sets the selected object's numeric value to 0
    {
        if (!(group_setup_1)) goto event_525_6_end;
        qualifier_8.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (3))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_525_6_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->set_layer(5-1);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_525_6_end: ;
}
// Function purpose: generated callback event_func_3205 processes event block(s) 526_6. Actions/conditions:
//        526_6: splits saved text into fields; sets Inv_1 to stringtokenizer_81->get(0); sets Inv_2 to
//        stringtokenizer_81->get(1); plus 10 more actions.
void Frames::event_func_3205()
{
    // event 526_6 : splits saved text into fields; sets Inv_1 to stringtokenizer_81->get(0); sets Inv_2 to stringtokenizer_81->get(1); plus 10 more actions
    {
        if (!(group_setup_1)) goto event_526_6_end;
        if (!group_check_group_setup_fill_inventory_1_0) goto event_526_6_end;
        group_check_group_setup_fill_inventory_1_0 = false;
        if (!((global_values->get(11)) == (1))) goto event_526_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_inv_591, empty_string), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(523, str_inv_1_1423, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(524, str_inv_2_1424, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(525, str_inv_3_1425, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(526, str_inv_4_1426, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(527, str_inv_5_1427, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(528, str_inv_6_1428, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(82, str_hint1_unlocked_585, ((INI*)get_instance(saving_350_instances))->get_value(str_prison_111, str_hint1_751, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(84, str_hint2_unlocked_588, ((INI*)get_instance(saving_350_instances))->get_value(str_prison_111, str_hint2_752, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(85, str_hint3_unlocked_589, ((INI*)get_instance(saving_350_instances))->get_value(str_prison_111, str_hint3_753, 0));
    }
    event_526_6_end: ;
}
// Function purpose: generated callback event_func_3206 processes event block(s) 527_6. Actions/conditions:
//        527_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3206()
{
    // event 527_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_527_6_end;
        if (!group_check_group_setup_fill_inventory_1_1) goto event_527_6_end;
        group_check_group_setup_fill_inventory_1_1 = false;
        {
            loop_build_inven_slots_running = true;
            int times = int(6);
            loop_build_inven_slots_index = 0;
            while (loop_build_inven_slots_index < times) {
                loop_build_inven_slots_6();
                if (!loop_build_inven_slots_running) break;
                loop_build_inven_slots_index++;
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
    }
    event_527_6_end: ;
}
// Function purpose: generated callback event_func_3207 processes event block(s) 534_6. Actions/conditions:
//        534_6: sets Score_F to 0; sets Score_E to 0; sets Score_P to 0; plus 8 more actions.
void Frames::event_func_3207()
{
    // event 534_6 : sets Score_F to 0; sets Score_E to 0; sets Score_P to 0; plus 8 more actions
    {
        if (!(group_setup_1)) goto event_534_6_end;
        if (!group_check_group_setup_player_stats_time_1_0) goto event_534_6_end;
        group_check_group_setup_player_stats_time_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(336, str_score_f_1125, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(739, str_score_e_1910, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(418, str_score_p_1236, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(363, str_score_n_1157, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(740, str_score_a_1911, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(741, str_susp_highest_1912, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(608, str_susp_total_1588, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(742, str_journal_1402, 1);
    }
    event_534_6_end: ;
}
// Function purpose: generated callback event_func_3208 processes event block(s) 535_6. Actions/conditions:
//        535_6: sets the selected object's direction to ((Active*)get_instance(bedplayer_338_instances,
//        default_active_instance))->get_direction(); positions the target object; positions the target object; plus
//        20 more actions.
void Frames::event_func_3208()
{
    // event 535_6 : sets the selected object's direction to ((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_direction(); positions the target object; positions the target object; plus 20 more actions
    {
        if (!(group_setup_1)) goto event_535_6_end;
        if (!group_check_group_setup_player_stats_time_1_1) goto event_535_6_end;
        group_check_group_setup_player_stats_time_1_1 = false;
        if (!((global_values->get(11)) == (0))) goto event_535_6_end;
        ((Active*)get_instance(playerBase_instances))->set_direction(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(playerBase_instances))->set_x(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_box_index(0)+(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_generic_width()/MathHelper()/2));
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_box_index(1)+(((Active*)get_instance(bedplayer_338_instances, default_active_instance))->get_generic_height()/MathHelper()/2));
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        ((Active*)get_instance(playerBase_instances))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(743, str_name_103));
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(8, 30);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(9, 30);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(10, 30);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(7, get_floor(((Active*)get_instance(playerBase_instances))->alterables->values.get(8)/MathHelper()/2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(254, str_t_day_902, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(219, str_cash_11, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(220, str_hsac_827, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(358, str_fatigue_36, 20);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_535_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_535_6_0: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(139, str_weapon_704, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(522, str_t_min_1422, 50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(581, str_savhas_1547, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(221, str_hax_828, 0);
        {
            loop_set_hax_vals_running = true;
            int times = int(1);
            loop_set_hax_vals_index = 0;
            while (loop_set_hax_vals_index < times) {
                loop_set_hax_vals_6();
                if (!loop_set_hax_vals_running) break;
                loop_set_hax_vals_index++;
            }
        }
    }
    event_535_6_end: ;
}
// Function purpose: generated callback event_func_3209 processes event block(s) 536_6. Actions/conditions:
//        536_6: sets Tut_Vents to 0; sets Tut_LoseJob to 0; sets Tut_Desk to 0; plus 17 more actions.
void Frames::event_func_3209()
{
    // event 536_6 : sets Tut_Vents to 0; sets Tut_LoseJob to 0; sets Tut_Desk to 0; plus 17 more actions
    {
        if (!(group_setup_1)) goto event_536_6_end;
        if (!group_check_group_setup_player_stats_time_1_2) goto event_536_6_end;
        group_check_group_setup_player_stats_time_1_2 = false;
        if (!((global_values->get(11)) == (0))) goto event_536_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(586, str_tut_vents_1555, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(587, str_tut_losejob_1556, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(588, str_tut_desk_1557, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(589, str_tut_loot_1558, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(590, str_tut_gym_1559, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(591, str_tut_controls_1560, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(592, str_tut_detectors_1561, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(593, str_tut_fat_1562, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(357, str_tut_hp_1151, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(594, str_tut_int_1563, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(595, str_tut_laundry_1564, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(596, str_tut_woodshop_1565, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(597, str_tut_metalshop_1566, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(598, str_tut_controls2_1567, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(599, str_tut_routines_1568, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(600, str_tut_numkeys_1569, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(601, str_tut_sleep_1570, 0);
    }
    event_536_6_end: ;
}
// Function purpose: generated callback event_func_3210 processes event block(s) 537_6. Actions/conditions:
//        537_6: sets T_min to 50; sets Name to saving_350->get_string_default(Player, Name, empty_string); sets
//        Playtime to saving_350->get_value(Player, Playtime, 0); plus 35 more actions.
void Frames::event_func_3210()
{
    // event 537_6 : sets T_min to 50; sets Name to saving_350->get_string_default(Player, Name, empty_string); sets Playtime to saving_350->get_value(Player, Playtime, 0); plus 35 more actions
    {
        if (!(group_setup_1)) goto event_537_6_end;
        if (!group_check_group_setup_player_stats_time_1_3) goto event_537_6_end;
        group_check_group_setup_player_stats_time_1_3 = false;
        if (!((global_values->get(11)) == (1))) goto event_537_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(522, str_t_min_1422, 50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(743, str_name_103, ((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_name_103, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(584, str_playtime_1553, ((INI*)get_instance(saving_350_instances))->get_value(str_player_102, str_playtime_1553, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(581, str_savhas_1547, ((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_savhas_1547, empty_string));
        ((Active*)get_instance(playerBase_instances))->alterables->strings.set(0, ((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_name_103, empty_string));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_stats_609, empty_string), str__254);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(8, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(9, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(10, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_cash_hp_heat_fat_1549, empty_string), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(254, str_t_day_902, ((INI*)get_instance(saving_350_instances))->get_value(str_prison_111, str_day_112, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(219, str_cash_11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(220, str_hsac_827, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*2);
        ((Active*)get_instance(playerBase_instances))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(358, str_fatigue_36, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_location_1548, empty_string), str__254);
        ((Active*)get_instance(playerBase_instances))->set_x(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)get_instance(playerBase_instances))->set_y(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)get_instance(playerBase_instances))->set_layer(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_537_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_537_6_0: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(17, str_job_478, ((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_job_478, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(139, str_weapon_704, ((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_weapon_704, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, ((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_outfit_505, empty_string));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_score_1587, empty_string), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(418, str_score_p_1236, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(363, str_score_n_1157, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(336, str_score_f_1125, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(608, str_susp_total_1588, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(602, str_track_dug_1576, ((INI*)get_instance(saving_350_instances))->get_value(str_tracking_1572, str_dug_1575, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(455, str_track_chipped_1323, ((INI*)get_instance(saving_350_instances))->get_value(str_tracking_1572, str_chipped_1574, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(239, str_track_cuts_865, ((INI*)get_instance(saving_350_instances))->get_value(str_tracking_1572, str_cuts_1573, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(603, str_track_downed_1578, ((INI*)get_instance(saving_350_instances))->get_value(str_tracking_1572, str_downed_1577, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(221, str_hax_828, ((INI*)get_instance(saving_350_instances))->get_value(str_tracking_1572, str_oi_1579, 0));
        {
            loop_set_hax_vals_running = true;
            int times = int(1);
            loop_set_hax_vals_index = 0;
            while (loop_set_hax_vals_index < times) {
                loop_set_hax_vals_6();
                if (!loop_set_hax_vals_running) break;
                loop_set_hax_vals_index++;
            }
        }
    }
    event_537_6_end: ;
}
// Function purpose: generated callback event_func_3211 processes event block(s) 538_6. Actions/conditions:
//        538_6: sets CakeDay to saving_350->get_value(Prison, CakeDay, 0); sets RemoveSlats to
//        saving_350->get_string_default(Prison, RemoveSlats, empty_string); splits saved text into fields; plus 20
//        more actions.
void Frames::event_func_3211()
{
    // event 538_6 : sets CakeDay to saving_350->get_value(Prison, CakeDay, 0); sets RemoveSlats to saving_350->get_string_default(Prison, RemoveSlats, empty_string); splits saved text into fields; plus 20 more actions
    {
        if (!(group_setup_1)) goto event_538_6_end;
        if (!group_check_group_setup_player_stats_time_1_4) goto event_538_6_end;
        group_check_group_setup_player_stats_time_1_4 = false;
        if (!((global_values->get(11)) == (1))) goto event_538_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(744, str_cakeday_1913, ((INI*)get_instance(saving_350_instances))->get_value(str_prison_111, str_cakeday_1913, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(607, str_removeslats_1586, ((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_removeslats_1586, empty_string));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_player_102, str_tooltips_1571, empty_string), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(586, str_tut_vents_1555, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(587, str_tut_losejob_1556, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(588, str_tut_desk_1557, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(589, str_tut_loot_1558, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(590, str_tut_gym_1559, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(591, str_tut_controls_1560, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(592, str_tut_detectors_1561, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(593, str_tut_fat_1562, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(7)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(357, str_tut_hp_1151, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(8)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(594, str_tut_int_1563, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(9)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(595, str_tut_laundry_1564, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(10)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(596, str_tut_woodshop_1565, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(11)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(597, str_tut_metalshop_1566, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(12)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(598, str_tut_controls2_1567, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(13)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(599, str_tut_routines_1568, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(14)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(600, str_tut_numkeys_1569, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(15)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(601, str_tut_sleep_1570, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(16)));
    }
    event_538_6_end: ;
}
// Function purpose: generated callback event_func_3212 processes event block(s) 540_6. Actions/conditions:
//        540_6: updates a value on the target object; sets SavHas to ((StringParser*)get_single(data_163_instances,
//        it.current_index))->get_md5().
void Frames::event_func_3212()
{
    // event 540_6 : updates a value on the target object; sets SavHas to ((StringParser*)get_single(data_163_instances, it.current_index))->get_md5()
    bool or_result_540_6 = false;
    bool or_temp_result_540_6_0 = false;
    {
        if (!(group_setup_1)) goto or_event_540_6_0_end;
        if (!group_check_group_setup_player_stats_time_1_5) goto or_event_540_6_0_end;
        group_check_group_setup_player_stats_time_1_5 = false;
        if (!((global_values->get(11)) == (0))) goto or_event_540_6_0_end;
        or_result_540_6 = true;
        or_temp_result_540_6_0 = true;
    }
    or_event_540_6_0_end: ;
    // event 540_6 : updates a value on the target object; sets SavHas to ((StringParser*)get_single(data_163_instances, it.current_index))->get_md5()
    bool or_temp_result_540_6_1 = false;
    {
        if (!(group_setup_1)) goto or_event_540_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(581, str_savhas_1547)) == (empty_string))) goto or_event_540_6_1_end;
        or_result_540_6 = true;
        or_temp_result_540_6_1 = true;
        or_event_540_6_1_end: ;
        if (!or_result_540_6) goto or_final_or_event_540_6_1_end;
        data_163_instances.clear_selection();
        for (ObjectIterator it(data_163_instances); !it.end(); ++it) {
            ((StringParser*)*it)->set(number_to_string(platform_get_datetime().hour)+str__1589+number_to_string(platform_get_datetime().min)+str__1589+number_to_string(platform_get_datetime().sec)+str__96+number_to_string(platform_get_datetime().mday)+str__205+number_to_string(platform_get_datetime().mon)+str__205+number_to_string(platform_get_datetime().year)+str__346+((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_string(743, str_name_103)+str__346+number_to_string(randrange_event(99999)));
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(581, str_savhas_1547, ((StringParser*)get_single(data_163_instances, it.current_index))->get_md5());
        }
    }
    or_final_or_event_540_6_1_end: ;
}
// Function purpose: generated callback event_func_3213 processes event block(s) 541_6. Actions/conditions:
//        541_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3213()
{
    // event 541_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_541_6_end;
        if (!group_check_group_setup_1_11) goto event_541_6_end;
        group_check_group_setup_1_11 = false;
        if (!((global_values->get(11)) == (0))) goto event_541_6_end;
        {
            loop_add_craftnotes_running = true;
            int times = int(5+randrange_event(10));
            loop_add_craftnotes_index = 0;
            while (loop_add_craftnotes_index < times) {
                loop_add_craftnotes_6();
                if (!loop_add_craftnotes_running) break;
                loop_add_craftnotes_index++;
            }
        }
    }
    event_541_6_end: ;
}
// Function purpose: generated callback event_func_3214 processes event block(s) 543_6. Actions/conditions:
//        543_6: sets tankstage to saving_350->get_value(Prison, Tank, 0).
void Frames::event_func_3214()
{
    // event 543_6 : sets tankstage to saving_350->get_value(Prison, Tank, 0)
    {
        if (!(group_setup_1)) goto event_543_6_end;
        if (!group_check_group_setup_load_stuff_1_0) goto event_543_6_end;
        group_check_group_setup_load_stuff_1_0 = false;
        if (!((global_values->get(11)) == (1))) goto event_543_6_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_543_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(92, str_tankstage_601, ((INI*)get_instance(saving_350_instances))->get_value(str_prison_111, str_tank_1590, 0));
    }
    event_543_6_end: ;
}
// Function purpose: generated callback event_func_3215 processes event block(s) 544_6. Actions/conditions:
//        544_6: sets treestage to saving_350->get_value(Prison, Tree, 0).
void Frames::event_func_3215()
{
    // event 544_6 : sets treestage to saving_350->get_value(Prison, Tree, 0)
    {
        if (!(group_setup_1)) goto event_544_6_end;
        if (!group_check_group_setup_load_stuff_1_1) goto event_544_6_end;
        group_check_group_setup_load_stuff_1_1 = false;
        if (!((global_values->get(11)) == (1))) goto event_544_6_end;
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_544_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(163, str_treestage_737, ((INI*)get_instance(saving_350_instances))->get_value(str_prison_111, str_tree_941, 0));
    }
    event_544_6_end: ;
}
// Function purpose: generated callback event_func_3216 processes event block(s) 545_6. Actions/conditions:
//        545_6: sets sleighstage to saving_350->get_value(Prison, Sleigh, 0).
void Frames::event_func_3216()
{
    // event 545_6 : sets sleighstage to saving_350->get_value(Prison, Sleigh, 0)
    {
        if (!(group_setup_1)) goto event_545_6_end;
        if (!group_check_group_setup_load_stuff_1_2) goto event_545_6_end;
        group_check_group_setup_load_stuff_1_2 = false;
        if (!((global_values->get(11)) == (1))) goto event_545_6_end;
        if (!((global_strings->get(0)) == (str_ccl_130))) goto event_545_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(230, str_sleighstage_840, ((INI*)get_instance(saving_350_instances))->get_value(str_prison_111, str_sleigh_841, 0));
    }
    event_545_6_end: ;
}
// Function purpose: generated callback event_func_3217 processes event block(s) 546_6. Actions/conditions:
//        546_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3217()
{
    // event 546_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_546_6_end;
        if (!group_check_group_setup_load_stuff_1_3) goto event_546_6_end;
        group_check_group_setup_load_stuff_1_3 = false;
        if (!((global_values->get(11)) == (1))) goto event_546_6_end;
        {
            loop_load_saved_cons_running = true;
            int times = int(inmateBase_instances.size());
            loop_load_saved_cons_index = 0;
            while (loop_load_saved_cons_index < times) {
                loop_load_saved_cons_6();
                if (!loop_load_saved_cons_running) break;
                loop_load_saved_cons_index++;
            }
        }
        {
            loop_load_saved_guards_running = true;
            int times = int(guardBase_instances.size());
            loop_load_saved_guards_index = 0;
            while (loop_load_saved_guards_index < times) {
                loop_load_saved_guards_6();
                if (!loop_load_saved_guards_running) break;
                loop_load_saved_guards_index++;
            }
        }
    }
    event_546_6_end: ;
}
// Function purpose: generated callback event_func_3218 processes event block(s) 552_6. Actions/conditions:
//        552_6: sets Pos_Janitor to saving_350->get_value(Jobs, Janitor, 0); sets Pos_Gardening to
//        saving_350->get_value(Jobs, Gardening, 0); sets Pos_Laundry to saving_350->get_value(Jobs, Laundry, 0); plus
//        10 more actions.
void Frames::event_func_3218()
{
    // event 552_6 : sets Pos_Janitor to saving_350->get_value(Jobs, Janitor, 0); sets Pos_Gardening to saving_350->get_value(Jobs, Gardening, 0); sets Pos_Laundry to saving_350->get_value(Jobs, Laundry, 0); plus 10 more actions
    {
        if (!(group_setup_1)) goto event_552_6_end;
        if (!group_check_group_setup_load_stuff_1_4) goto event_552_6_end;
        group_check_group_setup_load_stuff_1_4 = false;
        if (!((global_values->get(11)) == (1))) goto event_552_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(109, str_pos_janitor_671, ((INI*)get_instance(saving_350_instances))->get_value(str_jobs_755, str_janitor_24, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(111, str_pos_gardening_673, ((INI*)get_instance(saving_350_instances))->get_value(str_jobs_755, str_gardening_43, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(117, str_pos_laundry_679, ((INI*)get_instance(saving_350_instances))->get_value(str_jobs_755, str_laundry_29, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_pos_deliveries_681, ((INI*)get_instance(saving_350_instances))->get_value(str_jobs_755, str_deliveries_577, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(123, str_pos_tailor_685, ((INI*)get_instance(saving_350_instances))->get_value(str_jobs_755, str_tailor_479, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_pos_kitchen_683, ((INI*)get_instance(saving_350_instances))->get_value(str_jobs_755, str_kitchen_12, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(583, str_pos_mailroom_1552, ((INI*)get_instance(saving_350_instances))->get_value(str_jobs_755, str_mailroom_41, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(115, str_pos_library_677, ((INI*)get_instance(saving_350_instances))->get_value(str_jobs_755, str_library_25, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(125, str_pos_woodshop_687, ((INI*)get_instance(saving_350_instances))->get_value(str_jobs_755, str_woodshop_21, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(127, str_pos_metalshop_689, ((INI*)get_instance(saving_350_instances))->get_value(str_jobs_755, str_metalshop_35, 0));
    }
    event_552_6_end: ;
}
// Function purpose: generated callback event_func_3219 processes event block(s) 553_6. Actions/conditions:
//        553_6: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_3219()
{
    // event 553_6 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_setup_1)) goto event_553_6_end;
        if (!group_check_group_setup_load_stuff_1_5) goto event_553_6_end;
        group_check_group_setup_load_stuff_1_5 = false;
        if (!((global_values->get(11)) == (1))) goto event_553_6_end;
        {
            loop_load_floor_items_running = true;
            int times = int(((INI*)get_instance(saving_350_instances))->get_item_count(str_flooritems_444));
            loop_load_floor_items_index = 0;
            while (loop_load_floor_items_index < times) {
                loop_load_floor_items_6();
                if (!loop_load_floor_items_running) break;
                loop_load_floor_items_index++;
            }
        }
    }
    event_553_6_end: ;
}
// Function purpose: generated callback event_func_3220 processes event block(s) 556_6. Actions/conditions:
//        556_6: clears the current selection or contents.
void Frames::event_func_3220()
{
    // event 556_6 : clears the current selection or contents
    {
        if (!(group_setup_1)) goto event_556_6_end;
        if (!group_check_group_setup_load_stuff_1_6) goto event_556_6_end;
        group_check_group_setup_load_stuff_1_6 = false;
        if (!((global_values->get(11)) == (1))) goto event_556_6_end;
        ((ListObject*)get_instance(missions_298_instances))->clear();
        {
            loop_load_missions_running = true;
            int times = int(((INI*)get_instance(saving_350_instances))->get_item_count(str_missions_643));
            loop_load_missions_index = 0;
            while (loop_load_missions_index < times) {
                loop_load_missions_6();
                if (!loop_load_missions_running) break;
                loop_load_missions_index++;
            }
        }
    }
    event_556_6_end: ;
}
// Function purpose: generated callback event_func_3221 processes event block(s) 558_6. Actions/conditions:
//        558_6: adds a soil 173 instance; splits saved text into fields; removes the selected object; plus 12 more
//        actions.
void Frames::event_func_3221()
{
    // event 558_6 : adds a soil 173 instance; splits saved text into fields; removes the selected object; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_558_6_end;
        if (!group_check_group_setup_load_stuff_1_7) goto event_558_6_end;
        group_check_group_setup_load_stuff_1_7 = false;
        if (!((global_values->get(11)) == (1))) goto event_558_6_end;
        soil_173_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_soil_173(0, 0), 0);
            soil_173_instances.add_back();
        }
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_dugsoil_1531, empty_string), str__254);
        {
            loop_load_dug_soil_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_load_dug_soil_index = 0;
            while (loop_load_dug_soil_index < times) {
                loop_load_dug_soil_6();
                if (!loop_load_dug_soil_running) break;
                loop_load_dug_soil_index++;
            }
        }
        soil_173_instances.clear_selection();
        for (ObjectIterator it(soil_173_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_rocks_1532, empty_string), str__254);
        {
            loop_load_rocks_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_load_rocks_index = 0;
            while (loop_load_rocks_index < times) {
                loop_load_rocks_6();
                if (!loop_load_rocks_running) break;
                loop_load_rocks_index++;
            }
        }
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_mines_1535, empty_string), str__254);
        {
            loop_load_mines_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_load_mines_index = 0;
            while (loop_load_mines_index < times) {
                loop_load_mines_6();
                if (!loop_load_mines_running) break;
                loop_load_mines_index++;
            }
        }
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_holes_1533, empty_string), str__254);
        {
            loop_load_holes_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_load_holes_index = 0;
            while (loop_load_holes_index < times) {
                loop_load_holes_6();
                if (!loop_load_holes_running) break;
                loop_load_holes_index++;
            }
        }
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_alerts_1530, empty_string), str__254);
        {
            loop_load_alerts_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_load_alerts_index = 0;
            while (loop_load_alerts_index < times) {
                loop_load_alerts_6();
                if (!loop_load_alerts_running) break;
                loop_load_alerts_index++;
            }
        }
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_curts_1528, empty_string), str__254);
        {
            loop_load_curts_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_load_curts_index = 0;
            while (loop_load_curts_index < times) {
                loop_load_curts_6();
                if (!loop_load_curts_running) break;
                loop_load_curts_index++;
            }
        }
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_braces_1534, empty_string), str__254);
        {
            loop_load_braces_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_load_braces_index = 0;
            while (loop_load_braces_index < times) {
                loop_load_braces_6();
                if (!loop_load_braces_running) break;
                loop_load_braces_index++;
            }
        }
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_crates_1536, empty_string), str__254);
        {
            loop_load_crates_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_load_crates_index = 0;
            while (loop_load_crates_index < times) {
                loop_load_crates_6();
                if (!loop_load_crates_running) break;
                loop_load_crates_index++;
            }
        }
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_fakevents_1543, empty_string), str__254);
        {
            loop_load_fakevents_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_load_fakevents_index = 0;
            while (loop_load_fakevents_index < times) {
                loop_load_fakevents_6();
                if (!loop_load_fakevents_running) break;
                loop_load_fakevents_index++;
            }
        }
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_prison_111, str_slathp_1546, empty_string), str__254);
        {
            loop_load_slat_hp_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count());
            loop_load_slat_hp_index = 0;
            while (loop_load_slat_hp_index < times) {
                loop_load_slat_hp_6();
                if (!loop_load_slat_hp_running) break;
                loop_load_slat_hp_index++;
            }
        }
    }
    event_558_6_end: ;
}
// Function purpose: generated callback event_func_3222 processes event block(s) 581_6. Actions/conditions:
//        581_6: sets Lesson to Routines entry 1; sets the object position in the world; sets horizontal scaling.
void Frames::event_func_3222()
{
    // event 581_6 : sets Lesson to Routines entry 1; sets the object position in the world; sets horizontal scaling
    {
        if (!(group_setup_1)) goto event_581_6_end;
        if (!group_check_group_setup_1_12) goto event_581_6_end;
        group_check_group_setup_1_12 = false;
        sheetsposters_294_instances.clear_selection();
        spread_value(sheetsposters_294_instances, 0, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_1_97));
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_581_6_0;
            ((Active*)get_instance(camera_202_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_581_6_0: ;
        }
        ((Active*)get_instance(scan_187_instances))->set_x_scale(320);
    }
    event_581_6_end: ;
}
// Function purpose: generated callback event_func_3223 processes event block(s) 582_6. Actions/conditions:
//        582_6: sets T_hour to 8; sets StartHour to 9; sets EndHour to 20.
void Frames::event_func_3223()
{
    // event 582_6 : sets T_hour to 8; sets StartHour to 9; sets EndHour to 20
    {
        if (!(group_setup_1)) goto event_582_6_end;
        if (!group_check_group_setup_1_13) goto event_582_6_end;
        group_check_group_setup_1_13 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_maxsec_580))) goto event_582_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(25, str_t_hour_488, 8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(521, str_starthour_1421, 9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(745, str_endhour_1914, 20);
    }
    event_582_6_end: ;
}
// Function purpose: generated callback event_func_3224 processes event block(s) 583_6. Actions/conditions:
//        583_6: sets EndHour to 23; sets StartHour to 8; sets T_hour to 7.
void Frames::event_func_3224()
{
    // event 583_6 : sets EndHour to 23; sets StartHour to 8; sets T_hour to 7
    {
        if (!(group_setup_1)) goto event_583_6_end;
        if (!group_check_group_setup_1_14) goto event_583_6_end;
        group_check_group_setup_1_14 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_maxsec_580))) goto event_583_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(745, str_endhour_1914, 23);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(521, str_starthour_1421, 8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(25, str_t_hour_488, 7);
    }
    event_583_6_end: ;
}
// Function purpose: generated callback event_func_3225 processes event block(s) 584_6. Actions/conditions:
//        584_6: adds a craftsort 346 instance; removes the selected object.
void Frames::event_func_3225()
{
    // event 584_6 : adds a craftsort 346 instance; removes the selected object
    {
        if (!(group_setup_1)) goto event_584_6_end;
        if (!group_check_group_setup_1_15) goto event_584_6_end;
        group_check_group_setup_1_15 = false;
        craftsort_346_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_craftsort_346(-100, -100), 5);
            craftsort_346_instances.add_back();
        }
        {
            loop_set_guard_patrols_running = true;
            int times = int(guardBase_instances.size());
            loop_set_guard_patrols_index = 0;
            while (loop_set_guard_patrols_index < times) {
                loop_set_guard_patrols_6();
                if (!loop_set_guard_patrols_running) break;
                loop_set_guard_patrols_index++;
            }
        }
        craftsort_346_instances.clear_selection();
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->destroy();
        }
    }
    event_584_6_end: ;
}
// Function purpose: generated callback event_func_3226 processes event block(s) 589_6. Actions/conditions:
//        589_6: stops the object's movement.
void Frames::event_func_3226()
{
    // event 589_6 : stops the object's movement
    {
        if (!(group_setup_1)) goto event_589_6_end;
        if (!group_check_group_setup_1_16) goto event_589_6_end;
        group_check_group_setup_1_16 = false;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        if (!group_code_1) {
            group_code_1 = true;
            group_check_group_code_dlc_sss_1_1 = true;
            group_check_group_code_dlc_sss_1_0 = true;
            group_check_group_code_crafting_1_0 = true;
            group_check_group_code_schedules_hour_tickover_1_11 = true;
            group_check_group_code_schedules_hour_tickover_1_10 = true;
            group_check_group_code_schedules_hour_tickover_1_13 = true;
            group_check_group_code_schedules_hour_tickover_1_12 = true;
            group_check_group_code_pathfinding_guards_policing_1_0 = true;
            group_check_group_code_1_5 = true;
            group_check_group_code_1_4 = true;
            group_check_group_code_1_3 = true;
            group_check_group_code_1_2 = true;
            group_check_group_code_1_1 = true;
            group_check_group_code_1_0 = true;
            group_check_group_code_pathfinding_inmates_1_0 = true;
            group_check_group_code_dlc_sss_1_2 = true;
            group_check_group_code_gym_equip_speed_bag_1_1 = true;
            group_check_group_code_gym_equip_speed_bag_1_0 = true;
            group_check_group_code_journal_1_1 = true;
            group_check_group_code_journal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_my_stats_1_16 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_gym_equip_skipping_1_1 = true;
            group_check_group_code_gym_equip_skipping_1_0 = true;
            group_check_group_code_schedules_shower_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_hour_tickover_1_7 = true;
            group_check_group_code_schedules_hour_tickover_1_6 = true;
            group_check_group_code_schedules_gym_1_0 = true;
            group_check_group_code_schedules_gym_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_food_1_0 = true;
            group_check_group_code_schedules_food_1_1 = true;
            group_check_group_code_caught_solitary_1_5 = true;
            group_check_group_code_pathfinding_guards_guard_towers_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_sleeping_1_1 = true;
            group_check_group_code_schedules_sleeping_1_0 = true;
            group_check_group_code_gym_equip_weights_1_0 = true;
            group_check_group_code_gym_equip_weights_1_1 = true;
            group_check_group_code_gym_equip_punch_bag_1_0 = true;
            group_check_group_code_gym_equip_punch_bag_1_1 = true;
            group_check_group_code_load_confirm_1_0 = true;
            group_check_group_code_load_confirm_1_1 = true;
            group_check_group_code_load_confirm_1_2 = true;
            group_check_group_code_load_confirm_1_3 = true;
            group_check_group_code_dlc_feb16_1_0 = true;
            group_check_group_code_schedules_hour_tickover_1_1 = true;
            group_check_group_code_schedules_hour_tickover_1_0 = true;
            group_check_group_code_schedules_hour_tickover_1_3 = true;
            group_check_group_code_schedules_hour_tickover_1_2 = true;
            group_check_group_code_schedules_hour_tickover_1_5 = true;
            group_check_group_code_schedules_hour_tickover_1_4 = true;
            group_check_group_code_schedules_shower_1_0 = true;
            group_check_group_code_schedules_shower_1_1 = true;
            group_check_group_code_schedules_hour_tickover_1_9 = true;
            group_check_group_code_schedules_hour_tickover_1_8 = true;
            group_check_group_code_misc_1_0 = true;
            group_check_group_code_gym_equip_treadmill_1_1 = true;
            group_check_group_code_gym_equip_treadmill_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
            group_check_group_code_dlc_ccl_1_0 = true;
            group_check_group_code_my_stats_1_3 = true;
            group_check_group_code_my_stats_1_2 = true;
            group_check_group_code_my_stats_1_1 = true;
            group_check_group_code_my_stats_1_0 = true;
            group_check_group_code_my_stats_1_7 = true;
            group_check_group_code_my_stats_1_6 = true;
            group_check_group_code_my_stats_1_5 = true;
            group_check_group_code_my_stats_1_4 = true;
            group_check_group_code_my_stats_1_9 = true;
            group_check_group_code_my_stats_1_8 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_menu_1_0 = true;
            group_check_group_code_gym_equip_press_ups_1_0 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_dlc_dtaf_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_zones_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_dlc_bannedcamp_1_0 = true;
            group_check_group_code_payphone_1_0 = true;
            group_check_group_code_pathfinding_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
            group_check_group_code_dlc_eteam_1_0 = true;
            group_check_group_code_caught_solitary_1_0 = true;
            group_check_group_code_caught_solitary_1_1 = true;
            group_check_group_code_caught_solitary_1_2 = true;
            group_check_group_code_caught_solitary_1_3 = true;
            group_check_group_code_caught_solitary_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_caught_solitary_1_6 = true;
            group_check_group_code_caught_solitary_1_7 = true;
            group_check_group_code_my_stats_1_17 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_my_stats_1_15 = true;
            group_check_group_code_my_stats_1_14 = true;
            group_check_group_code_my_stats_1_13 = true;
            group_check_group_code_my_stats_1_12 = true;
            group_check_group_code_my_stats_1_11 = true;
            group_check_group_code_my_stats_1_10 = true;
            group_check_group_code_my_stats_1_18 = true;
            group_check_group_code_gym_equip_press_ups_1_1 = true;
            group_check_group_code_dlc_tol_1_0 = true;
        }
            group_setup_1 = false;
    
    }
    event_589_6_end: ;
}
// Function purpose: generated callback event_func_3227 processes event block(s) 590_6. Group(s): Warden Intro
//        Note. Actions/conditions: 590_6: sets the selected object's visibility to true; sets the object's animation
//        to 29; sets the selected object's direction to 16; plus 11 more actions.
void Frames::event_func_3227()
{
    // event 590_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 16; plus 11 more actions
    {
        // group: Warden Intro Note
        if (!((global_values->get(18)) == (0))) goto event_590_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_590_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (8))) goto event_590_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (52))) goto event_590_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_maxsec_580))) goto event_590_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_590_6_end;
        if (once_condition_590_6) goto event_590_6_end;
        once_condition_590_6 = true;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_590_6_0; single_instance_590_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -76), parent->layer);
                if (single_instance_590_6_0 == NULL)
                    single_instance_590_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_590_6_0))->blend_color.set(Color(0, 61, 128));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_warden_welcome_1915, global_strings->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__624));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_mapname_1916, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(166, str_mapname_126)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((Text*)((Text*)single_instance_590_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
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
    }
    event_590_6_end: ;
}
// Function purpose: generated callback event_func_3228 processes event block(s) 591_6. Group(s): Warden Intro
//        Note. Actions/conditions: 591_6: sets the selected object's visibility to true; sets the object's animation
//        to 29; sets the selected object's direction to 16; plus 11 more actions.
void Frames::event_func_3228()
{
    // event 591_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 16; plus 11 more actions
    {
        // group: Warden Intro Note
        if (!((global_values->get(18)) == (0))) goto event_591_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_591_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_591_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (52))) goto event_591_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_maxsec_580))) goto event_591_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_591_6_end;
        if (once_condition_591_6) goto event_591_6_end;
        once_condition_591_6 = true;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_591_6_0; single_instance_591_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -76), parent->layer);
                if (single_instance_591_6_0 == NULL)
                    single_instance_591_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_591_6_0))->blend_color.set(Color(0, 61, 128));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_warden_welcome_1915, global_strings->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__624));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_mapname_1916, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(166, str_mapname_126)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((Text*)((Text*)single_instance_591_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
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
    }
    event_591_6_end: ;
}
// Function purpose: generated callback event_func_3229 processes event block(s) 593_6. Group(s): Warden Intro
//        Note. Actions/conditions: 593_6: sets the selected object's visibility to true; sets the object's animation
//        to 29; sets the selected object's direction to 16; plus 12 more actions.
void Frames::event_func_3229()
{
    // event 593_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 16; plus 12 more actions
    {
        // group: Warden Intro Note
        if (!((global_values->get(18)) == (2))) goto event_593_6_end;
        if (!((global_strings->get(6)) != (str_rus_7))) goto event_593_6_end;
        if (!((global_strings->get(6)) != (str_pol_4))) goto event_593_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_593_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_593_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (52))) goto event_593_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749)) != (empty_string))) goto event_593_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_maxsec_580))) goto event_593_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_593_6_end;
        if (once_condition_593_6) goto event_593_6_end;
        once_condition_593_6 = true;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_593_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_intro_750), str__346, str__624));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_mapname_1916, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(166, str_mapname_126)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
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
        wardennote_470_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_wardennote_470(-500, -500), 5);
            wardennote_470_instances.add_back();
        }
        for (ObjectIterator it(wardennote_470_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(0)+5);
            ((SystemBox*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+5);
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
            ((SystemBox*)*it)->move_front();
        }
    }
    event_593_6_end: ;
}
// Function purpose: generated callback event_func_3230 processes event block(s) 594_6. Group(s): Warden Intro
//        Note. Actions/conditions: 594_6: sets the selected object's visibility to true; sets the object's animation
//        to 29; sets the selected object's direction to 16; plus 12 more actions.
void Frames::event_func_3230()
{
    // event 594_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 16; plus 12 more actions
    {
        // group: Warden Intro Note
        if (!((global_values->get(18)) == (2))) goto event_594_6_end;
        if (!((global_strings->get(6)) != (str_rus_7))) goto event_594_6_end;
        if (!((global_strings->get(6)) != (str_pol_4))) goto event_594_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_594_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (8))) goto event_594_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (52))) goto event_594_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749)) != (empty_string))) goto event_594_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_maxsec_580))) goto event_594_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_594_6_end;
        if (once_condition_594_6) goto event_594_6_end;
        once_condition_594_6 = true;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_594_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_intro_750), str__346, str__624));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_mapname_1916, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(166, str_mapname_126)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
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
        wardennote_470_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_wardennote_470(-500, -500), 5);
            wardennote_470_instances.add_back();
        }
        for (ObjectIterator it(wardennote_470_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(0)+5);
            ((SystemBox*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+5);
            ((SystemBox*)*it)->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
            ((SystemBox*)*it)->move_front();
        }
    }
    event_594_6_end: ;
}
// Function purpose: generated callback event_func_3231 processes event block(s) 595_6. Actions/conditions:
//        595_6: checks game state T_day; game state perks; skips if the event-specific game state condition is met;
//        this handler gates a game event without a direct value/ob.
void Frames::event_func_3231()
{
    // event 595_6 : checks game state T_day; game state perks; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/ob
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_595_6_end;
        if (!((global_strings->get(0)) == (str_perks_143))) goto event_595_6_end;
        if (once_condition_595_6) goto event_595_6_end;
        once_condition_595_6 = true;
        if (!group_tooltips_1) {
            group_tooltips_1 = true;
        }
    }
    event_595_6_end: ;
}
// Function purpose: generated callback event_func_3232 processes event block(s) 596_6. Actions/conditions:
//        596_6: checks the event-specific game state condition is met; game state perks; game state T_day; this
//        handler gates a game event without a direct value/object acti.
void Frames::event_func_3232()
{
    // event 596_6 : checks the event-specific game state condition is met; game state perks; game state T_day; this handler gates a game event without a direct value/object acti
    {
        if (!(group_tooltips_1)) goto event_596_6_end;
        if (!((global_strings->get(0)) == (str_perks_143))) goto event_596_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) > (1))) goto event_596_6_end;
            group_tooltips_1 = false;
    
    }
    event_596_6_end: ;
}
// Function purpose: generated callback event_func_3233 processes event block(s) 597_6. Actions/conditions:
//        597_6: removes the selected object.
void Frames::event_func_3233()
{
    // event 597_6 : removes the selected object
    {
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!popupClouds_instances.has_selection()) goto event_597_6_end;
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_597_6_end: ;
}
// Function purpose: generated callback event_func_3234 processes event block(s) 598_6. Actions/conditions:
//        598_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_Routines to 1; plus 10 more actions.
void Frames::event_func_3234()
{
    // event 598_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_Routines to 1; plus 10 more actions
    {
        if (!(group_tooltips_1)) goto event_598_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_598_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) >= (55))) goto event_598_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(599, str_tut_routines_1568)) == (0))) goto event_598_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_598_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_598_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_598_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_1_97), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(599, str_tut_routines_1568, 1);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            esc::createYellowPopUpCloud(static_cast<Active*>(*it), esc::Anchor::Right, 28, 0);
        }
        FrameObject * single_instance_598_6_1; single_instance_598_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_598_6_1 == NULL)
                    single_instance_598_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_598_6_1))->set_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_598_6_end: ;
}
// Function purpose: generated callback event_func_3235 processes event block(s) 599_6. Actions/conditions:
//        599_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_Desk to 1; plus 10 more actions.
void Frames::event_func_3235()
{
    // event 599_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_Desk to 1; plus 10 more actions
    {
        if (!(group_tooltips_1)) goto event_599_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_599_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(16))) goto event_599_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(588, str_tut_desk_1557)) == (0))) goto event_599_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(337, str_currentcontainer_1126)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(397, str_yourdesk_1208)))) goto event_599_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_599_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_599_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_2_155), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(588, str_tut_desk_1557, 1);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            esc::createYellowPopUpCloud(static_cast<Active*>(*it), esc::Anchor::Right, 28, 0);
        }
        FrameObject * single_instance_599_6_1; single_instance_599_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_599_6_1 == NULL)
                    single_instance_599_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_599_6_1))->set_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_599_6_end: ;
}
// Function purpose: generated callback event_func_3236 processes event block(s) 600_6. Actions/conditions:
//        600_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_Shakedown to 1; plus 10 more actions.
void Frames::event_func_3236()
{
    // event 600_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_Shakedown to 1; plus 10 more actions
    {
        if (!(group_tooltips_1)) goto event_600_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (8))) goto event_600_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) >= (30))) goto event_600_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(746, str_tut_shakedown_1917)) == (0))) goto event_600_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_600_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_600_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_600_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_3_158), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(746, str_tut_shakedown_1917, 1);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            esc::createYellowPopUpCloud(static_cast<Active*>(*it), esc::Anchor::Right, 28, 0);
        }
        FrameObject * single_instance_600_6_1; single_instance_600_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_600_6_1 == NULL)
                    single_instance_600_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_600_6_1))->set_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_600_6_end: ;
}
// Function purpose: generated callback event_func_3237 processes event block(s) 601_6. Actions/conditions:
//        601_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_Gym to 1; plus 13 more actions.
void Frames::event_func_3237()
{
    // event 601_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_Gym to 1; plus 13 more actions
    {
        if (!(group_tooltips_1)) goto event_601_6_end;
        cursor_178_instances.clear_selection();
        qualifier_9.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_9)) goto event_601_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(590, str_tut_gym_1559)) == (0))) goto event_601_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_601_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_601_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_601_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_4_161), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(590, str_tut_gym_1559, 1);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(VITA_VIEW_RIGHT(((Active*)*it), frame_right())-28);
            ((Active*)*it)->set_y(VITA_VIEW_BOTTOM(((Active*)*it), frame_bottom())-20);
        }
        FrameObject * single_instance_601_6_1; single_instance_601_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_601_6_1 == NULL)
                    single_instance_601_6_1 = new_obj;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_action1_1818, translate_key_to_string(manager.button1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_action2_1819, translate_key_to_string(manager.button2)));
        ((Text*)((Text*)single_instance_601_6_1))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_601_6_end: ;
}
// Function purpose: generated callback event_func_3238 processes event block(s) 602_6. Actions/conditions:
//        602_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_Fat to 1; plus 10 more actions.
void Frames::event_func_3238()
{
    // event 602_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_Fat to 1; plus 10 more actions
    {
        if (!(group_tooltips_1)) goto event_602_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(747, str_zone_canteen_1918)) == (1))) goto event_602_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(593, str_tut_fat_1562)) == (0))) goto event_602_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_602_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_602_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_602_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_5_164), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(593, str_tut_fat_1562, 1);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            esc::createYellowPopUpCloud(static_cast<Active*>(*it), esc::Anchor::Right, 28, 0);
        }
        FrameObject * single_instance_602_6_1; single_instance_602_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_602_6_1 == NULL)
                    single_instance_602_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_602_6_1))->set_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_602_6_end: ;
}
// Function purpose: generated callback event_func_3239 processes event block(s) 603_6. Actions/conditions:
//        603_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_Int to 1; plus 10 more actions.
void Frames::event_func_3239()
{
    // event 603_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_Int to 1; plus 10 more actions
    {
        if (!(group_tooltips_1)) goto event_603_6_end;
        cursor_178_instances.clear_selection();
        interwebs_380_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, interwebs_380_instances)) goto event_603_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(594, str_tut_int_1563)) == (0))) goto event_603_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_603_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_603_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_603_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_6_241), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(594, str_tut_int_1563, 1);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            esc::createYellowPopUpCloud(static_cast<Active*>(*it), esc::Anchor::Right, 28, 0);
        }
        FrameObject * single_instance_603_6_1; single_instance_603_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_603_6_1 == NULL)
                    single_instance_603_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_603_6_1))->set_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_603_6_end: ;
}
// Function purpose: generated callback event_func_3240 processes event block(s) 605_6. Actions/conditions:
//        605_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_Laundry to 1; plus 11 more actions.
void Frames::event_func_3240()
{
    // event 605_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_Laundry to 1; plus 11 more actions
    {
        if (!(group_tooltips_1)) goto event_605_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(748, str_zone_laundry_1919)) == (1))) goto event_605_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(595, str_tut_laundry_1564)) == (0))) goto event_605_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_605_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_605_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_605_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_605_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_605_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_605_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_8_325), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(595, str_tut_laundry_1564, 1);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            Active* cloud = static_cast<Active*>(*it);
            esc::createYellowPopUpCloud(cloud, esc::Anchor::Left, 210, 20);
            cloud->alterables->values.set(1, 350);
        }
        FrameObject * single_instance_605_6_1; single_instance_605_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_605_6_1 == NULL)
                    single_instance_605_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_605_6_1))->set_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_605_6_end: ;
}
// Function purpose: generated callback event_func_3241 processes event block(s) 606_6. Actions/conditions:
//        606_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_Laundry to 2; plus 11 more actions.
void Frames::event_func_3241()
{
    // event 606_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_Laundry to 2; plus 11 more actions
    {
        if (!(group_tooltips_1)) goto event_606_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(748, str_zone_laundry_1919)) == (1))) goto event_606_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(595, str_tut_laundry_1564)) == (1))) goto event_606_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_606_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_606_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_606_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_606_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_606_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_606_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_9_327), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(595, str_tut_laundry_1564, 2);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+210);
            ((Active*)*it)->set_y(VITA_VIEW_BOTTOM(((Active*)*it), frame_bottom())-20);
            ((Active*)*it)->alterables->values.set(1, 350);
        }
        FrameObject * single_instance_606_6_1; single_instance_606_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_606_6_1 == NULL)
                    single_instance_606_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_606_6_1))->set_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_606_6_end: ;
}
// Function purpose: generated callback event_func_3242 processes event block(s) 607_6. Actions/conditions:
//        607_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_Laundry to 3; plus 10 more actions.
void Frames::event_func_3242()
{
    // event 607_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_Laundry to 3; plus 10 more actions
    {
        if (!(group_tooltips_1)) goto event_607_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(595, str_tut_laundry_1564)) == (2))) goto event_607_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_607_6_end;
        if (!(group_code_1 && group_code_schedules_leisure_work_1)) goto event_607_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_607_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_607_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_607_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_607_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_10_329), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(595, str_tut_laundry_1564, 3);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+210);
            ((Active*)*it)->set_y(VITA_VIEW_BOTTOM(((Active*)*it), frame_bottom())-20);
        }
        FrameObject * single_instance_607_6_1; single_instance_607_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_607_6_1 == NULL)
                    single_instance_607_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_607_6_1))->set_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_607_6_end: ;
}
// Function purpose: generated callback event_func_3243 processes event block(s) 608_6. Actions/conditions:
//        608_6: splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets
//        Tut_Sleep to 1; plus 10 more actions.
void Frames::event_func_3243()
{
    // event 608_6 : splits saved text into fields; sets TutStrLen to string_to_number(stringtokenizer2_292->get(0)); sets Tut_Sleep to 1; plus 10 more actions
    {
        if (!(group_tooltips_1)) goto event_608_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) == (1))) goto event_608_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (10))) goto event_608_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(601, str_tut_sleep_1570)) == (0))) goto event_608_6_end;
        if (!((popupClouds_instances.size()) == (0))) goto event_608_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_608_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_608_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(((INI*)get_instance(translationData_instances))->get_string(str_popups_1152, str_11_331), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(356, str_tutstrlen_1150, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(601, str_tut_sleep_1570, 1);
        popupClouds_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_popupCloud(0, 0), 5);
            popupClouds_instances.add_back();
        }
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(VITA_VIEW_RIGHT(((Active*)*it), frame_right())-28);
            ((Active*)*it)->set_y(VITA_VIEW_BOTTOM(((Active*)*it), frame_bottom())-20);
        }
        FrameObject * single_instance_608_6_1; single_instance_608_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(popupClouds_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_popupCloudText(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_608_6_1 == NULL)
                    single_instance_608_6_1 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_608_6_1))->set_string(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(1));
        {
            loop_lolol_running = true;
            int times = int(1);
            loop_lolol_index = 0;
            while (loop_lolol_index < times) {
                loop_lolol_6();
                if (!loop_lolol_running) break;
                loop_lolol_index++;
            }
        }
    }
    event_608_6_end: ;
}
// Function purpose: generated callback event_func_3244 processes event block(s) 609_6. Actions/conditions:
//        609_6: sets the selected object's horizontal position to ((Active*)get_instance(popupClouds_instances,
//        it.current_index, default_active_instance))->get_box_index(0)+5; sets the selected object's vertical
//        position to ((Active*)get_instance(popupClouds_instances, it.current_index,
//        default_active_instance))->get_box_index(1)+3.
void Frames::event_func_3244()
{
    // event 609_6 : sets the selected object's horizontal position to ((Active*)get_instance(popupClouds_instances, it.current_index, default_active_instance))->get_box_index(0)+5; sets the selected object's vertical position to ((Active*)get_instance(popupClouds_instances, it.current_index, default_active_instance))->get_box_index(1)+3
    {
        if (!(group_tooltips_1)) goto event_609_6_end;
        if (!((popupCloudText_instances.size()) > (0))) goto event_609_6_end;
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(((Active*)get_instance(popupClouds_instances, it.current_index, default_active_instance))->get_box_index(0)+5);
            ((Text*)*it)->set_y(((Active*)get_instance(popupClouds_instances, it.current_index, default_active_instance))->get_box_index(1)+3);
        }
    }
    event_609_6_end: ;
}
// Function purpose: generated callback event_func_3245 processes event block(s) 614_6. Actions/conditions:
//        614_6: changes a stored game value.
void Frames::event_func_3245()
{
    VITA_LEGACY_EVENT();
    // event 614_6 : changes a stored game value
    {
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!popupClouds_instances.has_selection()) goto event_614_6_end;
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_614_6_end: ;
}
// Function purpose: generated callback event_func_3246 processes event block(s) 615_6. Actions/conditions:
//        615_6: removes the selected object.
void Frames::event_func_3246()
{
    // event 615_6 : removes the selected object
    {
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!popupClouds_instances.has_selection()) goto event_615_6_end;
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        popupCloudText_instances.clear_selection();
        for (ObjectIterator it(popupCloudText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_615_6_end: ;
}
// Function purpose: generated callback event_func_3247 processes event block(s) 616_6. Actions/conditions:
//        616_6: sets the audio channel volume.
void Frames::event_func_3247()
{
    // event 616_6 : sets the audio channel volume
    {
        if (!((media.get_channel_volume(-1 +10)) > (0))) goto event_616_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_616_6_end;
        media.set_channel_volume(10-1, media.get_channel_volume(-1 +10)-2);
    }
    event_616_6_end: ;
}
// Function purpose: generated callback event_func_3248 processes event block(s) 617_6. Actions/conditions:
//        617_6: sets the audio channel volume.
void Frames::event_func_3248()
{
    // event 617_6 : sets the audio channel volume
    {
        if (!((media.get_channel_volume(-1 +10)) < (global_values->get(9)))) goto event_617_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_in_1922))) goto event_617_6_end;
        media.set_channel_volume(10-1, media.get_channel_volume(-1 +10)+2);
    }
    event_617_6_end: ;
}
// Function purpose: generated callback event_func_3249 processes event block(s) 618_6. Actions/conditions:
//        618_6: checks scene is active; game state alca; the event-specific game state condition is met; skips if
//        scene is active; this handler gates a game event without a.
void Frames::event_func_3249()
{
    // event 618_6 : checks scene is active; game state alca; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a
    {
        if (!(group_code_1)) goto event_618_6_end;
        if (!((global_strings->get(0)) == (str_alca_139))) goto event_618_6_end;
        if (!((global_values->get(18)) == (1))) goto event_618_6_end;
        if (group_code_1 && group_code_dlc_alcatraz_1) goto event_618_6_end;
        if (!group_code_dlc_alcatraz_1) {
            group_code_dlc_alcatraz_1 = true;
        }
    }
    event_618_6_end: ;
}
// Function purpose: generated callback event_func_3250 processes event block(s) 619_6. Actions/conditions:
//        619_6: checks scene is active; game state escapeteam; the event-specific game state condition is met; skips
//        if scene is active; this handler gates a game event with.
void Frames::event_func_3250()
{
    // event 619_6 : checks scene is active; game state escapeteam; the event-specific game state condition is met; skips if scene is active; this handler gates a game event with
    {
        if (!(group_code_1)) goto event_619_6_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_619_6_end;
        if (!((global_values->get(18)) == (1))) goto event_619_6_end;
        if (group_code_1 && group_code_dlc_eteam_1) goto event_619_6_end;
        if (!group_code_dlc_eteam_1) {
            group_code_dlc_eteam_1 = true;
            group_check_group_code_dlc_eteam_1_0 = true;
        }
    }
    event_619_6_end: ;
}
// Function purpose: generated callback event_func_3251 processes event block(s) 620_6. Actions/conditions:
//        620_6: checks scene is active; game state DTAF; the event-specific game state condition is met; skips if
//        scene is active; this handler gates a game event without a.
void Frames::event_func_3251()
{
    // event 620_6 : checks scene is active; game state DTAF; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a
    {
        if (!(group_code_1)) goto event_620_6_end;
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_620_6_end;
        if (!((global_values->get(18)) == (1))) goto event_620_6_end;
        if (group_code_1 && group_code_dlc_dtaf_1) goto event_620_6_end;
        if (!group_code_dlc_dtaf_1) {
            group_code_dlc_dtaf_1 = true;
            group_check_group_code_dlc_dtaf_1_0 = true;
        }
    }
    event_620_6_end: ;
}
// Function purpose: generated callback event_func_3252 processes event block(s) 621_6. Actions/conditions:
//        621_6: checks scene is active; game state SSS; skips if scene is active; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_3252()
{
    // event 621_6 : checks scene is active; game state SSS; skips if scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_621_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_621_6_end;
        if (group_code_1 && group_code_dlc_sss_1) goto event_621_6_end;
        if (!group_code_dlc_sss_1) {
            group_code_dlc_sss_1 = true;
            group_check_group_code_dlc_sss_1_1 = true;
            group_check_group_code_dlc_sss_1_0 = true;
            group_check_group_code_dlc_sss_1_2 = true;
        }
    }
    event_621_6_end: ;
}
// Function purpose: generated callback event_func_3253 processes event block(s) 622_6. Actions/conditions:
//        622_6: checks scene is active; game state FEB16; skips if scene is active; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_3253()
{
    // event 622_6 : checks scene is active; game state FEB16; skips if scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_622_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(298, str_feb16_1043)) == (1))) goto event_622_6_end;
        if (group_code_1 && group_code_dlc_feb16_1) goto event_622_6_end;
        if (!group_code_dlc_feb16_1) {
            group_code_dlc_feb16_1 = true;
            group_check_group_code_dlc_feb16_1_0 = true;
        }
    }
    event_622_6_end: ;
}
// Function purpose: generated callback event_func_3254 processes event block(s) 623_6. Actions/conditions:
//        623_6: checks scene is active; game state TOL; the event-specific game state condition is met; skips if
//        scene is active; this handler gates a game event without a d.
void Frames::event_func_3254()
{
    // event 623_6 : checks scene is active; game state TOL; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a d
    {
        if (!(group_code_1)) goto event_623_6_end;
        if (!((global_strings->get(0)) == (str_tol_134))) goto event_623_6_end;
        if (!((global_values->get(18)) == (1))) goto event_623_6_end;
        if (group_code_1 && group_code_dlc_tol_1) goto event_623_6_end;
        if (!group_code_dlc_tol_1) {
            group_code_dlc_tol_1 = true;
            group_check_group_code_dlc_tol_1_0 = true;
        }
    }
    event_623_6_end: ;
}
// Function purpose: generated callback event_func_3255 processes event block(s) 624_6. Actions/conditions:
//        624_6: checks scene is active; game state BC; the event-specific game state condition is met; skips if scene
//        is active; this handler gates a game event without a di.
void Frames::event_func_3255()
{
    // event 624_6 : checks scene is active; game state BC; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a di
    {
        if (!(group_code_1)) goto event_624_6_end;
        if (!((global_strings->get(0)) == (str_bc_133))) goto event_624_6_end;
        if (!((global_values->get(18)) == (1))) goto event_624_6_end;
        if (group_code_1 && group_code_dlc_bannedcamp_1) goto event_624_6_end;
        if (!group_code_dlc_bannedcamp_1) {
            group_code_dlc_bannedcamp_1 = true;
            group_check_group_code_dlc_bannedcamp_1_0 = true;
        }
    }
    event_624_6_end: ;
}
// Function purpose: generated callback event_func_3256 processes event block(s) 625_6. Actions/conditions:
//        625_6: checks scene is active; game state CCL; the event-specific game state condition is met; skips if
//        scene is active; this handler gates a game event without a d.
void Frames::event_func_3256()
{
    // event 625_6 : checks scene is active; game state CCL; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a d
    {
        if (!(group_code_1)) goto event_625_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_625_6_end;
        if (!((global_values->get(18)) > (0))) goto event_625_6_end;
        if (group_code_1 && group_code_dlc_ccl_1) goto event_625_6_end;
        if (!group_code_dlc_ccl_1) {
            group_code_dlc_ccl_1 = true;
            group_check_group_code_dlc_ccl_1_0 = true;
        }
    }
    event_625_6_end: ;
}
// Function purpose: generated callback event_func_3257 processes event block(s) 626_6. Actions/conditions:
//        626_6: adds a alcaboat 459 instance.
void Frames::event_func_3257()
{
    // event 626_6 : adds a alcaboat 459 instance
    {
        if (!(group_code_1 && group_code_dlc_alcatraz_1)) goto event_626_6_end;
        if (once_condition_626_6) goto event_626_6_end;
        once_condition_626_6 = true;
        alcaboat_459_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_alcaboat_459(1632, 656), 1);
            alcaboat_459_instances.add_back();
        }
    }
    event_626_6_end: ;
}
// Function purpose: generated callback event_func_3258 processes event block(s) 627_6. Actions/conditions:
//        627_6: sets the selected object's visibility to true; sets the object's animation to 29; sets the selected
//        object's direction to 16; plus 11 more actions.
void Frames::event_func_3258()
{
    // event 627_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 16; plus 11 more actions
    {
        if (!(group_code_1 && group_code_dlc_alcatraz_1)) goto event_627_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_627_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_627_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (52))) goto event_627_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_627_6_end;
        if (once_condition_627_6) goto event_627_6_end;
        once_condition_627_6 = true;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_627_6_0; single_instance_627_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -76), parent->layer);
                if (single_instance_627_6_0 == NULL)
                    single_instance_627_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_627_6_0))->blend_color.set(Color(0, 61, 128));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_warden_welcome_1915, global_strings->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__624));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_mapname_1916, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(166, str_mapname_126)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((Text*)((Text*)single_instance_627_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
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
    }
    event_627_6_end: ;
}
// Function purpose: generated callback event_func_3259 processes event block(s) 628_6. Actions/conditions:
//        628_6: sets the selected object's visibility to true; sets the object's animation to 29; sets the selected
//        object's direction to 20; plus 10 more actions.
void Frames::event_func_3259()
{
    // event 628_6 : sets the selected object's visibility to true; sets the object's animation to 29; sets the selected object's direction to 20; plus 10 more actions
    {
        if (!(group_code_1 && group_code_dlc_alcatraz_1)) goto event_628_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)) == (1))) goto event_628_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (7))) goto event_628_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (55))) goto event_628_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_628_6_end;
        if (once_condition_628_6) goto event_628_6_end;
        once_condition_628_6 = true;
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((Active*)get_instance(dialogPanel_instances))->force_animation(29);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(20);
        FrameObject * single_instance_628_6_0; single_instance_628_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogBodyText(parent->x + -112, parent->y + -70), parent->layer);
                if (single_instance_628_6_0 == NULL)
                    single_instance_628_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_628_6_0))->blend_color.set(Color(107, 0, 128));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_51_1923));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749), str_name_693, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0)));
        ((Text*)((Text*)single_instance_628_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(171, str_mapintro_749));
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_letter_alca_running = true;
            int times = int(1);
            loop_letter_alca_index = 0;
            while (loop_letter_alca_index < times) {
                loop_letter_alca_6();
                if (!loop_letter_alca_running) break;
                loop_letter_alca_index++;
            }
        }
    }
    event_628_6_end: ;
}
// Function purpose: generated callback event_func_3260 processes event block(s) 630_6. Actions/conditions:
//        630_6: checks scene is active; the event-specific game state condition is met; game state Cash; skips if
//        dialog is open; this handler gates a game event without a d.
void Frames::event_func_3260()
{
    // event 630_6 : checks scene is active; the event-specific game state condition is met; game state Cash; skips if dialog is open; this handler gates a game event without a d
    {
        if (!(group_code_1 && group_code_dlc_alcatraz_1)) goto event_630_6_end;
        playerBase_instances.clear_selection();
        if (!((objects_in_zone(playerBase_instances, 1600, 672, 1632, 720)) > (0))) goto event_630_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)) >= (250))) goto event_630_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_630_6_end;
        alcaboat_459_instances.clear_selection();
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!alcaboat_459_instances.has_selection()) goto event_630_6_end;
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
    event_630_6_end: ;
}
// Function purpose: generated callback event_func_3261 processes event block(s) 631_6. Actions/conditions:
//        631_6: sets the selected object's visibility to false.
void Frames::event_func_3261()
{
    // event 631_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1 && group_code_dlc_alcatraz_1)) goto event_631_6_end;
        alcaboat_459_instances.clear_selection();
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!alcaboat_459_instances.has_selection()) goto event_631_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) > (5))) goto event_631_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_631_6_end;
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_631_6_end: ;
}
// Function purpose: generated callback event_func_3262 processes event block(s) 632_6. Actions/conditions:
//        632_6: sets the selected object's visibility to true.
void Frames::event_func_3262()
{
    // event 632_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_dlc_alcatraz_1)) goto event_632_6_end;
        alcaboat_459_instances.clear_selection();
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!alcaboat_459_instances.has_selection()) goto event_632_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (23))) goto event_632_6_end;
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_632_6_end: ;
}
// Function purpose: generated callback event_func_3263 processes event block(s) 633_6. Actions/conditions:
//        633_6: sets the selected object's visibility to true.
void Frames::event_func_3263()
{
    // event 633_6 : sets the selected object's visibility to true
    {
        if (!(group_code_1 && group_code_dlc_alcatraz_1)) goto event_633_6_end;
        alcaboat_459_instances.clear_selection();
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!alcaboat_459_instances.has_selection()) goto event_633_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) <= (5))) goto event_633_6_end;
        for (ObjectIterator it(alcaboat_459_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_633_6_end: ;
}
