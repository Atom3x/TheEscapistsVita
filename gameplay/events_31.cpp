#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_2381 processes event block(s) 4434_6. Actions/conditions:
//        4434_6: sets currC to ((Active*)get_single(qualifier_17,
//        default_active_instance))->alterables->values.get(0); sets currX to ((Active*)get_single(qualifier_17,
//        default_active_instance))->get_x(); sets currY to ((Active*)get_single(qualifier_17,
//        default_active_instance))->get_y(); plus 6 more actions.
void Frames::event_func_2381()
{
    // event 4434_6 : sets currC to ((Active*)get_single(qualifier_17, default_active_instance))->alterables->values.get(0); sets currX to ((Active*)get_single(qualifier_17, default_active_instance))->get_x(); sets currY to ((Active*)get_single(qualifier_17, default_active_instance))->get_y(); plus 6 more actions
    {
        if (!(group_saving_1)) goto event_4434_6_end;
        qualifier_17.clear_selection();
        for (QualifierIterator it(qualifier_17); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_save_containers_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_17.has_selection()) goto event_4434_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(578, str_currc_1541, ((Active*)get_single(qualifier_17, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(535, str_currx_1437, ((Active*)get_single(qualifier_17, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(536, str_curry_290, ((Active*)get_single(qualifier_17, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(575, str_currdir_1539, ((Active*)get_single(qualifier_17, default_active_instance))->get_direction());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(577, str_con_str_1540, empty_string);
        {
            loop_save_containers_compile_running = true;
            int times = int(20);
            loop_save_containers_compile_index = 0;
            while (loop_save_containers_compile_index < times) {
                loop_save_containers_compile_6();
                if (!loop_save_containers_compile_running) break;
                loop_save_containers_compile_index++;
            }
        }
        ((INI*)get_instance(saving_350_instances))->set_string(str_containers_1542, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(578, str_currc_1541)), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(535, str_currx_1437))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(536, str_curry_290))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(575, str_currdir_1539))+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(577, str_con_str_1540));
    }
    event_4434_6_end: ;
}
void Frames::loop_save_containers_6()
{
    event_func_2381();
}
// Function purpose: generated callback event_func_2382 processes event block(s) 4437_6. Actions/conditions:
//        4437_6: sets a game or interface text string.
void Frames::event_func_2382()
{
    // event 4437_6 : sets a game or interface text string
    {
        if (!(group_saving_1)) goto event_4437_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_save_fakevents_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_4437_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(579, str_fakevents_1543, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(579, str_fakevents_1543)+number_to_string(((Active*)get_single(ventCover_instances, default_active_instance))->get_x())+str__96+number_to_string(((Active*)get_single(ventCover_instances, default_active_instance))->get_y())+str__96+number_to_string(((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(11))+str_0_1544);
    }
    event_4437_6_end: ;
}
// Function purpose: generated callback event_func_2383 processes event block(s) 4438_6. Actions/conditions:
//        4438_6: sets a game or interface text string.
void Frames::event_func_2383()
{
    // event 4438_6 : sets a game or interface text string
    {
        if (!(group_saving_1)) goto event_4438_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_save_fakevents_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_4438_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(579, str_fakevents_1543, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(579, str_fakevents_1543)+number_to_string(((Active*)get_single(ventCover_instances, default_active_instance))->get_x())+str__96+number_to_string(((Active*)get_single(ventCover_instances, default_active_instance))->get_y())+str__96+number_to_string(((Active*)get_single(ventCover_instances, default_active_instance))->alterables->values.get(1))+str_1_1545);
    }
    event_4438_6_end: ;
}
void Frames::loop_save_fakevents_6()
{
    event_func_2382();
    event_func_2383();
}
// Function purpose: generated callback event_func_2384 processes event block(s) 4439_6. Actions/conditions:
//        4439_6: sets a game or interface text string.
void Frames::event_func_2384()
{
    // event 4439_6 : sets a game or interface text string
    {
        if (!(group_saving_1)) goto event_4439_6_end;
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_save_slat_hp_index+1))) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_4439_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(580, str_slathp_1546, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(580, str_slathp_1546)+number_to_string(((Active*)get_single(fan_281_instances, default_active_instance))->get_x())+str__96+number_to_string(((Active*)get_single(fan_281_instances, default_active_instance))->get_y())+str__96+number_to_string(((Active*)get_single(fan_281_instances, default_active_instance))->alterables->values.get(1))+str__254);
    }
    event_4439_6_end: ;
}
void Frames::loop_save_slat_hp_6()
{
    event_func_2384();
}
// Function purpose: generated callback event_func_2385 processes event block(s) 4406_6. Actions/conditions:
//        4406_6: sets Name to playerBase->alterables->strings.get(0); sets SavHas to
//        gameVariables->get_string(581, SavHas); sets SaveCode to gameVariables->get_string(259,
//        SaveCode); plus 16 more actions.
void Frames::event_func_2385()
{
    // event 4406_6 : sets Name to playerBase->alterables->strings.get(0); sets SavHas to gameVariables->get_string(581, SavHas); sets SaveCode to gameVariables->get_string(259, SaveCode); plus 16 more actions
    {
        if (!(group_saving_1)) goto event_4406_6_end;
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_name_103, ((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_savhas_1547, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(581, str_savhas_1547));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_savecode_343, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(259, str_savecode_343));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_location_1548, number_to_string(((Active*)get_instance(playerBase_instances))->get_x())+str__254+number_to_string(((Active*)get_instance(playerBase_instances))->get_y())+str__254+number_to_string(((Active*)get_instance(playerBase_instances))->layer->index+1));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_cash_hp_heat_fat_1549, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11))+str__254+number_to_string(((Active*)get_instance(playerBase_instances))->alterables->values.get(7))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36)));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_stats_609, number_to_string(((Active*)get_instance(playerBase_instances))->alterables->values.get(8))+str__254+number_to_string(((Active*)get_instance(playerBase_instances))->alterables->values.get(9))+str__254+number_to_string(((Active*)get_instance(playerBase_instances))->alterables->values.get(10)));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_job_478, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_weapon_704, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_outfit_505, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_avatar_105, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_day_112, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_prison_111, str_hint1_751, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(82, str_hint1_unlocked_585));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_prison_111, str_hint2_752, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(84, str_hint2_unlocked_588));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_prison_111, str_hint3_753, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(85, str_hint3_unlocked_589));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(576, str_inven_820, empty_string);
        {
            loop_save_inv_running = true;
            int times = int(6);
            loop_save_inv_index = 0;
            while (loop_save_inv_index < times) {
                loop_save_inv_6();
                if (!loop_save_inv_running) break;
                loop_save_inv_index++;
            }
        }
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_inv_591, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(576, str_inven_820));
        {
            loop_save_inmates_running = true;
            int times = int(inmateBase_instances.size());
            loop_save_inmates_index = 0;
            while (loop_save_inmates_index < times) {
                loop_save_inmates_6();
                if (!loop_save_inmates_running) break;
                loop_save_inmates_index++;
            }
        }
        {
            loop_save_guards_running = true;
            int times = int(guardBase_instances.size());
            loop_save_guards_index = 0;
            while (loop_save_guards_index < times) {
                loop_save_guards_6();
                if (!loop_save_guards_running) break;
                loop_save_guards_index++;
            }
        }
        {
            loop_save_desks_running = true;
            int times = int(desks_305_instances.size());
            loop_save_desks_index = 0;
            while (loop_save_desks_index < times) {
                loop_save_desks_6();
                if (!loop_save_desks_running) break;
                loop_save_desks_index++;
            }
        }
    }
    event_4406_6_end: ;
}
// Function purpose: generated callback event_func_2386 processes event block(s) 4407_6. Actions/conditions:
//        4407_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_2386()
{
    // event 4407_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_saving_1)) goto event_4407_6_end;
        if (!((qualifier_17.size()) > (0))) goto event_4407_6_end;
        {
            loop_save_containers_running = true;
            int times = int(qualifier_17.size());
            loop_save_containers_index = 0;
            while (loop_save_containers_index < times) {
                loop_save_containers_6();
                if (!loop_save_containers_running) break;
                loop_save_containers_index++;
            }
        }
    }
    event_4407_6_end: ;
}
// Function purpose: generated callback event_func_2387 processes event block(s) 4408_6. Actions/conditions:
//        4408_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_2387()
{
    // event 4408_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_saving_1)) goto event_4408_6_end;
        if (!((items_184_instances.size()) > (0))) goto event_4408_6_end;
        {
            loop_save_floor_items_running = true;
            int times = int(items_184_instances.size());
            loop_save_floor_items_index = 0;
            while (loop_save_floor_items_index < times) {
                loop_save_floor_items_6();
                if (!loop_save_floor_items_running) break;
                loop_save_floor_items_index++;
            }
        }
    }
    event_4408_6_end: ;
}
// Function purpose: generated callback event_func_2388 processes event block(s) 4409_6. Actions/conditions:
//        4409_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_2388()
{
    // event 4409_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_saving_1)) goto event_4409_6_end;
        if (!((((ListObject*)get_instance(missions_298_instances))->get_count()) > (0))) goto event_4409_6_end;
        {
            loop_save_missions_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_save_missions_index = 0;
            while (loop_save_missions_index < times) {
                loop_save_missions_6();
                if (!loop_save_missions_running) break;
                loop_save_missions_index++;
            }
        }
    }
    event_4409_6_end: ;
}
// Function purpose: generated callback event_func_2389 processes event block(s) 4410_6. Actions/conditions:
//        4410_6: adds a usespot 208 instance; adds a savecheckground 351 instance; sets Rocks to empty_string; plus 9
//        more actions.
void Frames::event_func_2389()
{
    // event 4410_6 : adds a usespot 208 instance; adds a savecheckground 351 instance; sets Rocks to empty_string; plus 9 more actions
    {
        if (!(group_saving_1)) goto event_4410_6_end;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(0, 0), 0);
            usespot_208_instances.add_back();
        }
        savecheckground_351_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_savecheckground_351(0, 0), 1);
            savecheckground_351_instances.add_back();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(568, str_rocks_1532, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(567, str_dugsoil_1531, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(569, str_holes_1533, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(570, str_braces_1534, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(566, str_alerts_1530, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(564, str_curts_1528, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(571, str_mines_1535, empty_string);
        {
            loop_save_soil_y_running = true;
            int times = int(height/MathHelper()/16);
            loop_save_soil_y_index = 0;
            while (loop_save_soil_y_index < times) {
                loop_save_soil_y_6();
                if (!loop_save_soil_y_running) break;
                loop_save_soil_y_index++;
            }
        }
    }
    event_4410_6_end: ;
}
// Function purpose: generated callback event_func_2390 processes event block(s) 4411_6. Actions/conditions:
//        4411_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_2390()
{
    // event 4411_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_saving_1)) goto event_4411_6_end;
        if (!((sheetsposters_294_instances.size()) > (0))) goto event_4411_6_end;
        {
            loop_save_curts_running = true;
            int times = int(((Active*)get_instance(sheetsposters_294_instances, default_active_instance))->get_x());
            loop_save_curts_index = 0;
            while (loop_save_curts_index < times) {
                loop_save_curts_6();
                if (!loop_save_curts_running) break;
                loop_save_curts_index++;
            }
        }
    }
    event_4411_6_end: ;
}
// Function purpose: generated callback event_func_2391 processes event block(s) 4412_6. Actions/conditions:
//        4412_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_2391()
{
    // event 4412_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_saving_1)) goto event_4412_6_end;
        if (!((guardalert_266_instances.size()) > (0))) goto event_4412_6_end;
        {
            loop_save_alerts_running = true;
            int times = int(guardalert_266_instances.size());
            loop_save_alerts_index = 0;
            while (loop_save_alerts_index < times) {
                loop_save_alerts_6();
                if (!loop_save_alerts_running) break;
                loop_save_alerts_index++;
            }
        }
    }
    event_4412_6_end: ;
}
// Function purpose: generated callback event_func_2392 processes event block(s) 4413_6. Actions/conditions:
//        4413_6: sets Mines to gameVariables->get_string(571, Mines); sets DugSoil to
//        gameVariables->get_string(567, DugSoil); sets Rocks to gameVariables->get_string(568,
//        Rocks); plus 8 more actions.
void Frames::event_func_2392()
{
    // event 4413_6 : sets Mines to gameVariables->get_string(571, Mines); sets DugSoil to gameVariables->get_string(567, DugSoil); sets Rocks to gameVariables->get_string(568, Rocks); plus 8 more actions
    {
        if (!(group_saving_1)) goto event_4413_6_end;
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_mines_1535, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(571, str_mines_1535));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_dugsoil_1531, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(567, str_dugsoil_1531));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_rocks_1532, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(568, str_rocks_1532));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_holes_1533, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(569, str_holes_1533));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_braces_1534, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(570, str_braces_1534));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_alerts_1530, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(566, str_alerts_1530));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_curts_1528, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(564, str_curts_1528));
        usespot_208_instances.clear_selection();
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        savecheckground_351_instances.clear_selection();
        for (ObjectIterator it(savecheckground_351_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4413_6_end: ;
}
// Function purpose: generated callback event_func_2393 processes event block(s) 4414_6. Actions/conditions:
//        4414_6: sets a stored numeric value; sets a stored numeric value; sets a stored numeric value; plus 10 more
//        actions.
void Frames::event_func_2393()
{
    // event 4414_6 : sets a stored numeric value; sets a stored numeric value; sets a stored numeric value; plus 10 more actions
    {
        if (!(group_saving_1)) goto event_4414_6_end;
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_jobs_755, str_janitor_24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_jobs_755, str_laundry_29, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_jobs_755, str_woodshop_21, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_jobs_755, str_metalshop_35, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_jobs_755, str_kitchen_12, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_jobs_755, str_gardener_1550, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(582, str_pos_gardener_1551));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_jobs_755, str_tailor_479, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_jobs_755, str_deliveries_577, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_jobs_755, str_mailroom_41, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(583, str_pos_mailroom_1552));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_jobs_755, str_library_25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677));
    }
    event_4414_6_end: ;
}
// Function purpose: generated callback event_func_2394 processes event block(s) 4415_6. Actions/conditions:
//        4415_6: sets FakeVents to empty_string.
void Frames::event_func_2394()
{
    // event 4415_6 : sets FakeVents to empty_string
    {
        if (!(group_saving_1)) goto event_4415_6_end;
        if (!((ventCover_instances.size()) > (0))) goto event_4415_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(579, str_fakevents_1543, empty_string);
        {
            loop_save_fakevents_running = true;
            int times = int(ventCover_instances.size());
            loop_save_fakevents_index = 0;
            while (loop_save_fakevents_index < times) {
                loop_save_fakevents_6();
                if (!loop_save_fakevents_running) break;
                loop_save_fakevents_index++;
            }
        }
    }
    event_4415_6_end: ;
}
// Function purpose: generated callback event_func_2395 processes event block(s) 4416_6. Actions/conditions:
//        4416_6: sets SlatHP to empty_string.
void Frames::event_func_2395()
{
    // event 4416_6 : sets SlatHP to empty_string
    {
        if (!(group_saving_1)) goto event_4416_6_end;
        if (!((fan_281_instances.size()) > (0))) goto event_4416_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(580, str_slathp_1546, empty_string);
        {
            loop_save_slat_hp_running = true;
            int times = int(fan_281_instances.size());
            loop_save_slat_hp_index = 0;
            while (loop_save_slat_hp_index < times) {
                loop_save_slat_hp_6();
                if (!loop_save_slat_hp_running) break;
                loop_save_slat_hp_index++;
            }
        }
    }
    event_4416_6_end: ;
}
// Function purpose: generated callback event_func_2396 processes event block(s) 4417_6. Actions/conditions:
//        4417_6: sets Crates to empty_string.
void Frames::event_func_2396()
{
    // event 4417_6 : sets Crates to empty_string
    {
        if (!(group_saving_1)) goto event_4417_6_end;
        if (!((stash_420_instances.size()) > (0))) goto event_4417_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(572, str_crates_1536, empty_string);
        {
            loop_save_crates_running = true;
            int times = int(stash_420_instances.size());
            loop_save_crates_index = 0;
            while (loop_save_crates_index < times) {
                loop_save_crates_6();
                if (!loop_save_crates_running) break;
                loop_save_crates_index++;
            }
        }
    }
    event_4417_6_end: ;
}
// Function purpose: generated callback event_func_2397 processes event block(s) 4418_6. Actions/conditions:
//        4418_6: sets a stored numeric value; sets a game or interface text string; sets a game or interface text
//        string; plus 12 more actions.
void Frames::event_func_2397()
{
    // event 4418_6 : sets a stored numeric value; sets a game or interface text string; sets a game or interface text string; plus 12 more actions
    {
        if (!(group_saving_1)) goto event_4418_6_end;
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_player_102, str_playtime_1553, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(584, str_playtime_1553));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(585, str_tooltips_1554, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(586, str_tut_vents_1555))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(587, str_tut_losejob_1556))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(588, str_tut_desk_1557))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(589, str_tut_loot_1558))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(590, str_tut_gym_1559))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(591, str_tut_controls_1560))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(592, str_tut_detectors_1561))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(593, str_tut_fat_1562))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(357, str_tut_hp_1151))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(594, str_tut_int_1563))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(595, str_tut_laundry_1564))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(596, str_tut_woodshop_1565))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(597, str_tut_metalshop_1566))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(598, str_tut_controls2_1567))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(599, str_tut_routines_1568)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(585, str_tooltips_1554, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(585, str_tooltips_1554)+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(600, str_tut_numkeys_1569))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(601, str_tut_sleep_1570)));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_tooltips_1571, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(585, str_tooltips_1554));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_tracking_1572, str_cuts_1573, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(239, str_track_cuts_865));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_tracking_1572, str_chipped_1574, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(455, str_track_chipped_1323));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_tracking_1572, str_dug_1575, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(602, str_track_dug_1576));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_tracking_1572, str_downed_1577, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(603, str_track_downed_1578));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_tracking_1572, str_oi_1579, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(221, str_hax_828));
        ((ArrayObject*)get_instance(wallsarray_232_instances))->save(((AssociateArray*)get_instance(gameVariables_instances))->get_string(604, str_savedir_1580)+str_wa_arr_1581);
        ((ArrayObject*)get_instance(digarray_228_instances))->save(((AssociateArray*)get_instance(gameVariables_instances))->get_string(604, str_savedir_1580)+str_da_arr_1582);
        ((ArrayObject*)get_instance(fencearray_265_instances))->save(((AssociateArray*)get_instance(gameVariables_instances))->get_string(604, str_savedir_1580)+str_fa_arr_1583);
        {
            loop_save_craftnotes_running = true;
            int times = int(1);
            loop_save_craftnotes_index = 0;
            while (loop_save_craftnotes_index < times) {
                loop_save_craftnotes_6();
                if (!loop_save_craftnotes_running) break;
                loop_save_craftnotes_index++;
            }
        }
    }
    event_4418_6_end: ;
}
// Function purpose: generated callback event_func_2398 processes event block(s) 4419_6. Actions/conditions:
//        4419_6: sets Map to global_strings->get(0); sets MapName to gameVariables->get_string(605,
//        Map_Name); sets a stored numeric value; plus 9 more actions.
void Frames::event_func_2398()
{
    // event 4419_6 : sets Map to global_strings->get(0); sets MapName to gameVariables->get_string(605, Map_Name); sets a stored numeric value; plus 9 more actions
    {
        if (!(group_saving_1)) goto event_4419_6_end;
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_map_107, global_strings->get(0));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_mapname_126, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(605, str_map_name_1584));
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_player_102, str_maptype_109, global_values->get(18));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_crates_1536, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(572, str_crates_1536));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_fakevents_1543, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(579, str_fakevents_1543));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_slathp_1546, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(580, str_slathp_1546));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_fakewalls_1585, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(606, str_fakewalls_1585));
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_removeslats_1586, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(607, str_removeslats_1586));
        ((INI*)get_instance(saving_350_instances))->set_string(str_player_102, str_score_1587, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(418, str_score_p_1236))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(363, str_score_n_1157))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(336, str_score_f_1125))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(608, str_susp_total_1588)));
    }
    event_4419_6_end: ;
}
// Function purpose: generated callback event_func_2399 processes event block(s) 4420_6. Actions/conditions:
//        4420_6: updates a value on the target object; sets SaveCode to data_163->get_md5().
void Frames::event_func_2399()
{
    // event 4420_6 : updates a value on the target object; sets SaveCode to data_163->get_md5()
    {
        if (!(group_saving_1)) goto event_4420_6_end;
        ((StringParser*)get_instance(data_163_instances))->set(number_to_string(platform_get_datetime().mday)+str__205+number_to_string(platform_get_datetime().mon)+str__205+number_to_string(platform_get_datetime().year)+str__254+number_to_string(platform_get_datetime().hour)+str__1589+number_to_string(platform_get_datetime().min)+str__1589+number_to_string(platform_get_datetime().sec));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(259, str_savecode_343, ((StringParser*)get_instance(data_163_instances))->get_md5());
    }
    event_4420_6_end: ;
}
// Function purpose: generated callback event_func_2400 processes event block(s) 4421_6. Actions/conditions:
//        4421_6: sets Version to gameVariables->get_string(214, Map_Version).
void Frames::event_func_2400()
{
    // event 4421_6 : sets Version to gameVariables->get_string(214, Map_Version)
    {
        if (!(group_saving_1)) goto event_4421_6_end;
        if (!((global_values->get(18)) == (2))) goto event_4421_6_end;
        ((INI*)get_instance(saving_350_instances))->set_string(str_prison_111, str_version_342, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(214, str_map_version_816));
    }
    event_4421_6_end: ;
}
// Function purpose: generated callback event_func_2401 processes event block(s) 4422_6. Actions/conditions:
//        4422_6: sets a stored numeric value.
void Frames::event_func_2401()
{
    // event 4422_6 : sets a stored numeric value
    {
        if (!(group_saving_1)) goto event_4422_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_4422_6_end;
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_prison_111, str_tank_1590, ((Active*)get_instance(eteamtank_474_instances, default_active_instance))->alterables->values.get(2));
    }
    event_4422_6_end: ;
}
// Function purpose: generated callback event_func_2402 processes event block(s) 4423_6. Actions/conditions:
//        4423_6: sets a stored numeric value.
void Frames::event_func_2402()
{
    // event 4423_6 : sets a stored numeric value
    {
        if (!(group_saving_1)) goto event_4423_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4423_6_end;
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_prison_111, str_tree_941, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(163, str_treestage_737));
    }
    event_4423_6_end: ;
}
// Function purpose: generated callback event_func_2403 processes event block(s) 4424_6. Actions/conditions:
//        4424_6: sets a stored numeric value.
void Frames::event_func_2403()
{
    // event 4424_6 : sets a stored numeric value
    {
        if (!(group_saving_1)) goto event_4424_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_4424_6_end;
        ((INI*)get_instance(saving_350_instances))->set_value_int(str_prison_111, str_sleigh_841, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(230, str_sleighstage_840));
    }
    event_4424_6_end: ;
}
void Frames::loop_save_game_6()
{
    event_func_2385();
    event_func_2386();
    event_func_2387();
    event_func_2388();
    event_func_2389();
    event_func_2390();
    event_func_2391();
    event_func_2392();
    event_func_2393();
    event_func_2394();
    event_func_2395();
    event_func_2396();
    event_func_2397();
    event_func_2398();
    event_func_2399();
    event_func_2400();
    event_func_2401();
    event_func_2402();
    event_func_2403();
}
// Function purpose: generated callback event_func_2404 processes event block(s) 2673_6. Actions/conditions:
//        2673_6: adds a dialogue2 179 instance; sets the selected object's text; updates a value on the target
//        object; plus 1 more actions.
void Frames::event_func_2404()
{
    // event 2673_6 : adds a dialogue2 179 instance; sets the selected object's text; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2673_6_end;
        if (!((((ListObject*)get_instance(missions_298_instances))->get_count()) == (0))) goto event_2673_6_end;
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_missions_journal_1344, str_1_97));
            ((Text*)*it)->blend_color.set(Color(135, 135, 135));
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_2673_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + -100, parent->get_y() + -42);
            pos_end_2673_6_1: ;
        }
    }
    event_2673_6_end: ;
}
// Function purpose: generated callback event_func_2405 processes event block(s) 2674_6. Actions/conditions:
//        2674_6: sets LineY to dialogPanel->get_y()-40.
void Frames::event_func_2405()
{
    // event 2674_6 : sets LineY to dialogPanel->get_y()-40
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2674_6_end;
        if (!((((ListObject*)get_instance(missions_298_instances))->get_count()) > (0))) goto event_2674_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(473, str_liney_1343, ((Active*)get_instance(dialogPanel_instances))->get_y()-40);
        {
            loop_journal_list_favours_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_journal_list_favours_index = 0;
            while (loop_journal_list_favours_index < times) {
                loop_journal_list_favours_6();
                if (!loop_journal_list_favours_running) break;
                loop_journal_list_favours_index++;
            }
        }
    }
    event_2674_6_end: ;
}
void Frames::loop_journal_favours_6()
{
    event_func_2404();
    event_func_2405();
}
// Function purpose: generated callback event_func_2406 processes event block(s) 2658_6. Actions/conditions:
//        2658_6: removes the selected object.
void Frames::event_func_2406()
{
    // event 2658_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2658_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craftnote_716))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2658_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2658_6_end: ;
}
// Function purpose: generated callback event_func_2407 processes event block(s) 2659_6. Actions/conditions:
//        2659_6: removes the selected object.
void Frames::event_func_2407()
{
    // event 2659_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2659_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craftnote_716))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2659_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2659_6_end: ;
}
void Frames::loop_craftnotes_des_icons_6()
{
    event_func_2406();
    event_func_2407();
    event_func_991();
}
// Function purpose: generated callback event_func_2408 processes event block(s) 2653_6. Actions/conditions:
//        2653_6: sets the selected object's text; removes the selected object.
void Frames::event_func_2408()
{
    // event 2653_6 : sets the selected object's text; removes the selected object
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2653_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_journal_1402, str_1_97)));
        }
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2653_6_end: ;
}
// Function purpose: generated callback event_func_2409 processes event block(s) 2654_6. Actions/conditions:
//        2654_6: sets the selected object's direction to 0.
void Frames::event_func_2409()
{
    // event 2654_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2654_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
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
        {
            loop_journal_favours_running = true;
            int times = int(1);
            loop_journal_favours_index = 0;
            while (loop_journal_favours_index < times) {
                loop_journal_favours_6();
                if (!loop_journal_favours_running) break;
                loop_journal_favours_index++;
            }
        }
    }
    event_2654_6_end: ;
}
void Frames::loop_load_journal_favours_6()
{
    event_func_2408();
    event_func_2409();
}
// Function purpose: generated callback event_func_2410 processes event block(s) 3808_6. Actions/conditions:
//        3808_6: creates a powerbar 239 object; sets horizontal scaling; updates a value on the target object; plus 5
//        more actions.
void Frames::event_func_2410()
{
    // event 3808_6 : creates a powerbar 239 object; sets horizontal scaling; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3808_6_end;
        if (!((loop_create_stat_bars_guard_index+1) == (1))) goto event_3808_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3808_6_end;
        FrameObject * single_instance_3808_6_0; single_instance_3808_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -10, parent->y + -31), parent->layer);
                if (single_instance_3808_6_0 == NULL)
                    single_instance_3808_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3808_6_0))->set_x_scale(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(8)*0.6);
        ((Active*)((Active*)single_instance_3808_6_0))->alterables->strings.set(1, number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(8))+str_100_442);
        ((Active*)((Active*)single_instance_3808_6_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_3808_6_0))->alterables->strings.set(0, str_profile_281);
    }
    event_3808_6_end: ;
}
// Function purpose: generated callback event_func_2411 processes event block(s) 3809_6. Actions/conditions:
//        3809_6: creates a powerbar 239 object; sets horizontal scaling; updates a value on the target object; plus 5
//        more actions.
void Frames::event_func_2411()
{
    // event 3809_6 : creates a powerbar 239 object; sets horizontal scaling; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3809_6_end;
        if (!((loop_create_stat_bars_guard_index+1) == (1))) goto event_3809_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3809_6_end;
        FrameObject * single_instance_3809_6_0; single_instance_3809_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -10, parent->y + -20), parent->layer);
                if (single_instance_3809_6_0 == NULL)
                    single_instance_3809_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3809_6_0))->set_x_scale(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(9)*0.6);
        ((Active*)((Active*)single_instance_3809_6_0))->alterables->strings.set(1, number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(9))+str_100_442);
        ((Active*)((Active*)single_instance_3809_6_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_3809_6_0))->alterables->strings.set(0, str_profile_281);
    }
    event_3809_6_end: ;
}
// Function purpose: generated callback event_func_2412 processes event block(s) 3810_6. Actions/conditions:
//        3810_6: creates a powerbar 239 object; sets horizontal scaling; updates a value on the target object; plus 5
//        more actions.
void Frames::event_func_2412()
{
    // event 3810_6 : creates a powerbar 239 object; sets horizontal scaling; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3810_6_end;
        if (!((loop_create_stat_bars_guard_index+1) == (1))) goto event_3810_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3810_6_end;
        FrameObject * single_instance_3810_6_0; single_instance_3810_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -10, parent->y + -9), parent->layer);
                if (single_instance_3810_6_0 == NULL)
                    single_instance_3810_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3810_6_0))->set_x_scale(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(5)*0.6);
        ((Active*)((Active*)single_instance_3810_6_0))->alterables->strings.set(1, number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(5))+str_100_442);
        ((Active*)((Active*)single_instance_3810_6_0))->alterables->strings.set(0, str_profile_281);
        ((Active*)((Active*)single_instance_3810_6_0))->alterables->flags.enable(1);
    }
    event_3810_6_end: ;
}
// Function purpose: generated callback event_func_2413 processes event block(s) 3811_6. Actions/conditions:
//        3811_6: creates a powerbar 239 object; sets horizontal scaling; updates a value on the target object; plus 5
//        more actions.
void Frames::event_func_2413()
{
    // event 3811_6 : creates a powerbar 239 object; sets horizontal scaling; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3811_6_end;
        if (!((loop_create_stat_bars_guard_index+1) == (1))) goto event_3811_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3811_6_end;
        FrameObject * single_instance_3811_6_0; single_instance_3811_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activityProgress(parent->x + -10, parent->y + 2), parent->layer);
                if (single_instance_3811_6_0 == NULL)
                    single_instance_3811_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3811_6_0))->set_x_scale(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(12)*0.6);
        ((Active*)((Active*)single_instance_3811_6_0))->alterables->strings.set(1, number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(12))+str_100_442);
        ((Active*)((Active*)single_instance_3811_6_0))->alterables->strings.set(0, str_profile_281);
        ((Active*)((Active*)single_instance_3811_6_0))->alterables->flags.enable(1);
    }
    event_3811_6_end: ;
}
void Frames::loop_create_stat_bars_guard_6()
{
    event_func_2410();
    event_func_2411();
    event_func_2412();
    event_func_2413();
}
// Function purpose: generated callback event_func_2414 processes event block(s) 3802_6. Actions/conditions:
//        3802_6: sets the object's animation to 21; sets the selected object's direction to 0; plays a sound or music
//        track.
void Frames::event_func_2414()
{
    // event 3802_6 : sets the object's animation to 21; sets the selected object's direction to 0; plays a sound or music track
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3802_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3802_6_end;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(21);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_3802_6_end: ;
}
// Function purpose: generated callback event_func_2415 processes event block(s) 3803_6. Actions/conditions:
//        3803_6: sets a game or interface text string; sets source to Misc entry 43; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), $name,
//        gameVariables->get_string(131, thisName)); plus 8 more actions.
void Frames::event_func_2415()
{
    // event 3803_6 : sets a game or interface text string; sets source to Misc entry 43; sets source to StringReplace::replace(gameVariables->get_string(81, source), $name, gameVariables->get_string(131, thisName)); plus 8 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3803_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3803_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_3803_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(131, str_thisname_694, StringReplace::replace(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0), str_officer_637, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_43_695));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(131, str_thisname_694)));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+10);
            ((Text*)*it)->blend_color.set(Color(123, 167, 255));
        }
    }
    event_3803_6_end: ;
}
// Function purpose: generated callback event_func_2416 processes event block(s) 3804_6. Actions/conditions:
//        3804_6: sets a game or interface text string; sets source to DTAF entry Hench; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), $name,
//        gameVariables->get_string(131, thisName)); plus 8 more actions.
void Frames::event_func_2416()
{
    // event 3804_6 : sets a game or interface text string; sets source to DTAF entry Hench; sets source to StringReplace::replace(gameVariables->get_string(81, source), $name, gameVariables->get_string(131, thisName)); plus 8 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3804_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3804_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_3804_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(131, str_thisname_694, StringReplace::replace(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0), str_officer_637, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_dtaf_137, str_hench_1196));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(131, str_thisname_694)));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+10);
            ((Text*)*it)->blend_color.set(Color(123, 167, 255));
        }
    }
    event_3804_6_end: ;
}
// Function purpose: generated callback event_func_2417 processes event block(s) 3805_6. Actions/conditions:
//        3805_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_2417()
{
    // event 3805_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3805_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(339, str_viewprofile_1129)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3805_6_end;
        {
            loop_create_stat_bars_guard_running = true;
            int times = int(4);
            loop_create_stat_bars_guard_index = 0;
            while (loop_create_stat_bars_guard_index < times) {
                loop_create_stat_bars_guard_6();
                if (!loop_create_stat_bars_guard_running) break;
                loop_create_stat_bars_guard_index++;
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
    event_3805_6_end: ;
}
// Function purpose: generated callback event_func_2418 processes event block(s) 3806_6. Actions/conditions:
//        3806_6: creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object;
//        plus 1 more actions.
void Frames::event_func_2418()
{
    // event 3806_6 : creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3806_6_end;
        FrameObject * single_instance_3806_6_0; single_instance_3806_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttontext_445(parent->x + -61, parent->y + 60), parent->layer);
                if (single_instance_3806_6_0 == NULL)
                    single_instance_3806_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3806_6_0))->set_bold(0);
        ((Text*)((Text*)single_instance_3806_6_0))->blend_color.set(Color(105, 105, 105));
        ((Text*)((Text*)single_instance_3806_6_0))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_4_161)));
    }
    event_3806_6_end: ;
}
// Function purpose: generated callback event_func_2419 processes event block(s) 3807_6. Actions/conditions:
//        3807_6: creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object;
//        plus 1 more actions.
void Frames::event_func_2419()
{
    // event 3807_6 : creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_npc_profiles_npc_profile_1)) goto event_3807_6_end;
        FrameObject * single_instance_3807_6_0; single_instance_3807_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttontext_445(parent->x + -10, parent->y + 60), parent->layer);
                if (single_instance_3807_6_0 == NULL)
                    single_instance_3807_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3807_6_0))->set_bold(0);
        ((Text*)((Text*)single_instance_3807_6_0))->blend_color.set(Color(105, 105, 105));
        ((Text*)((Text*)single_instance_3807_6_0))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_5_164)));
    }
    event_3807_6_end: ;
}
void Frames::loop_guard_tab_stats_6()
{
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2417();
    event_func_2418();
    event_func_2419();
}
// Function purpose: generated callback event_func_2420 processes event block(s) 3396_6. Actions/conditions:
//        3396_6: sets NewSlotX to ((Active*)get_single(itemSlot_instances, default_active_instance))->get_x(); sets
//        NewSlotY to ((Active*)get_single(itemSlot_instances, default_active_instance))->get_y(); sets the selected
//        object's numeric value to 1.
void Frames::event_func_2420()
{
    // event 3396_6 : sets NewSlotX to ((Active*)get_single(itemSlot_instances, default_active_instance))->get_x(); sets NewSlotY to ((Active*)get_single(itemSlot_instances, default_active_instance))->get_y(); sets the selected object's numeric value to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3396_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_weapon_704))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3396_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(461, str_newslotx_1330, ((Active*)get_single(itemSlot_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(462, str_newsloty_1331, ((Active*)get_single(itemSlot_instances, default_active_instance))->get_y());
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_3396_6_end: ;
}
// Function purpose: generated callback event_func_2421 processes event block(s) 3397_6. Actions/conditions:
//        3397_6: sets the object position in the world; sets the selected object's string to Weapon; sets the
//        selected object's scale to 2; plus 8 more actions.
void Frames::event_func_2421()
{
    // event 3397_6 : sets the object position in the world; sets the selected object's string to Weapon; sets the selected object's scale to 2; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3397_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3397_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3397_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3397_6_0: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_weapon_704);
            ((Active*)*it)->set_scale(2);
            ((Active*)*it)->alterables->flags.enable(-5);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(139, str_weapon_704, number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(7)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(368, str_currentinvslot_1162)), empty_string);
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        {
            loop_flip_into_equip2_running = true;
            int times = int(1);
            loop_flip_into_equip2_index = 0;
            while (loop_flip_into_equip2_index < times) {
                loop_flip_into_equip2_6();
                if (!loop_flip_into_equip2_running) break;
                loop_flip_into_equip2_index++;
            }
        }
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_3397_6_end: ;
}
void Frames::loop_flip_into_weapon_6()
{
    event_func_2420();
    event_func_2421();
}
// Function purpose: generated callback event_func_2422 processes event block(s) 3391_6. Actions/conditions:
//        3391_6: checks scene is active; game state CurrItemID; game state Outfit; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_2422()
{
    // event 3391_6 : checks scene is active; game state CurrItemID; game state Outfit; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3391_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(609, str_curritemid_1591)), str_outfit_505)) > (0))) goto event_3391_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505)) == (empty_string))) goto event_3391_6_end;
        {
            loop_flip_into_outfit_running = true;
            int times = int(1);
            loop_flip_into_outfit_index = 0;
            while (loop_flip_into_outfit_index < times) {
                loop_flip_into_outfit_6();
                if (!loop_flip_into_outfit_running) break;
                loop_flip_into_outfit_index++;
            }
        }
    }
    event_3391_6_end: ;
}
// Function purpose: generated callback event_func_2423 processes event block(s) 3392_6. Actions/conditions:
//        3392_6: sets NewSlotX to ((Active*)get_instance(itemSlot_instances, default_active_instance))->get_x(); sets
//        NewSlotY to ((Active*)get_instance(itemSlot_instances, default_active_instance))->get_y(); sets the selected
//        object's numeric value to 1.
void Frames::event_func_2423()
{
    // event 3392_6 : sets NewSlotX to ((Active*)get_instance(itemSlot_instances, default_active_instance))->get_x(); sets NewSlotY to ((Active*)get_instance(itemSlot_instances, default_active_instance))->get_y(); sets the selected object's numeric value to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3392_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(609, str_curritemid_1591)), str_weapon_704)) > (0))) goto event_3392_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704)) == (empty_string))) goto event_3392_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(461, str_newslotx_1330, ((Active*)get_instance(itemSlot_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(462, str_newsloty_1331, ((Active*)get_instance(itemSlot_instances, default_active_instance))->get_y());
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        {
            loop_flip_into_weapon_running = true;
            int times = int(1);
            loop_flip_into_weapon_index = 0;
            while (loop_flip_into_weapon_index < times) {
                loop_flip_into_weapon_6();
                if (!loop_flip_into_weapon_running) break;
                loop_flip_into_weapon_index++;
            }
        }
    }
    event_3392_6_end: ;
}
void Frames::loop_flip_into_equip_6()
{
    event_func_2422();
    event_func_2423();
}
// Function purpose: generated callback event_func_2424 processes event block(s) 2582_6. Actions/conditions:
//        2582_6: removes the selected object.
void Frames::event_func_2424()
{
    // event 2582_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2582_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2582_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2582_6_end: ;
}
// Function purpose: generated callback event_func_2425 processes event block(s) 2583_6. Actions/conditions:
//        2583_6: sets the selected object's numeric value to 0.
void Frames::event_func_2425()
{
    // event 2583_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2583_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2583_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_2583_6_end: ;
}
void Frames::loop_del_ingred_6()
{
    event_func_2424();
    event_func_2425();
}
// Function purpose: generated callback event_func_2426 processes event block(s) 2482_6. Actions/conditions:
//        2482_6: increments Score_P by string_to_number(stringtokenizer_81->get(0))/MathHelper()/10.
void Frames::event_func_2426()
{
    // event 2482_6 : increments Score_P by string_to_number(stringtokenizer_81->get(0))/MathHelper()/10
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2482_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(610, str_dontaddtocraftnotes_1592)) == (0))) goto event_2482_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(418, str_score_p_1236, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))/MathHelper()/10);
    }
    event_2482_6_end: ;
}
void Frames::loop_craft_score_6()
{
    event_func_2426();
}
// Function purpose: generated callback event_func_2427 processes event block(s) 2481_6. Actions/conditions:
//        2481_6: creates a itemshud 210 object; sets the selected object's numeric value to
//        gameVariables->get_value(611, Craft_GiveBack); enables flag -2 (legacy object-specific state;
//        original label was not retained) on the selected object; plus 7 more actions.
void Frames::event_func_2427()
{
    // event 2481_6 : creates a itemshud 210 object; sets the selected object's numeric value to gameVariables->get_value(611, Craft_GiveBack); enables flag -2 (legacy object-specific state; original label was not retained) on the selected object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2481_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(611, str_craft_giveback_1593)) != (-1))) goto event_2481_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2481_6_end;
        FrameObject * single_instance_2481_6_0; single_instance_2481_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2481_6_0 == NULL)
                    single_instance_2481_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2481_6_0))->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(611, str_craft_giveback_1593));
        ((Active*)((Active*)single_instance_2481_6_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_2481_6_0))->alterables->values.set(1, 1);
        ((Active*)((Active*)single_instance_2481_6_0))->alterables->strings.set(0, str_craft_900);
        ((Active*)((Active*)single_instance_2481_6_0))->set_scale(2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_2481_6_end: ;
}
void Frames::loop_craft_giveback_6()
{
    event_func_2427();
}
// Function purpose: generated callback event_func_2428 processes event block(s) 2480_6. Actions/conditions:
//        2480_6: sets FlashJournal to 1; sets CraftNotes to gameVariables->get_string(108,
//        CraftNotes)+number_to_string(gameVariables->get_value(612, CraftOutput))+@; updates game state with
//        current_line = find_string_exact(number_to_string(get_value(612, CraftOutput)), 0); plus 1 more actions.
void Frames::event_func_2428()
{
    // event 2480_6 : sets FlashJournal to 1; sets CraftNotes to gameVariables->get_string(108, CraftNotes)+number_to_string(gameVariables->get_value(612, CraftOutput))+@; updates game state with current_line = find_string_exact(number_to_string(get_value(612, CraftOutput)), 0); plus 1 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2480_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(610, str_dontaddtocraftnotes_1592)) == (0))) goto event_2480_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(108, str_craftnotes_665), str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(612, str_craftoutput_1594))+str__254, 0)) == (-1))) goto event_2480_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(613, str_flashjournal_1595, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(108, str_craftnotes_665, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(108, str_craftnotes_665)+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(612, str_craftoutput_1594))+str__254);
        ((ListObject*)get_instance(craftingpossibles_349_instances))->current_line = ((ListObject*)get_instance(craftingpossibles_349_instances))->find_string_exact(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(612, str_craftoutput_1594)), 0);
        ((ListObject*)get_instance(craftingpossibles_349_instances))->delete_line(((ListObject*)get_instance(craftingpossibles_349_instances))->current_line);
    }
    event_2480_6_end: ;
}
void Frames::loop_add_craft_note_6()
{
    event_func_2428();
}
// Function purpose: generated callback event_func_2429 processes event block(s) 2477_6. Actions/conditions:
//        2477_6: splits saved text into fields.
void Frames::event_func_2429()
{
    // event 2477_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2477_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(612, str_craftoutput_1594)), str_craft_900), str__96);
    }
    event_2477_6_end: ;
}
// Function purpose: generated callback event_func_2430 processes event block(s) 2478_6. Actions/conditions:
//        2478_6: sets source to Misc entry 4; sets a game or interface text string; plays a sound or music track;
//        plus 13 more actions.
void Frames::event_func_2430()
{
    // event 2478_6 : sets source to Misc entry 4; sets a game or interface text string; plays a sound or music track; plus 13 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2478_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) < (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))))) goto event_2478_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_4_161));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_int_1222, number_to_string(get_ceil(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))-((Active*)get_instance(playerBase_instances))->alterables->values.get(10)))));
        media.play_id(SOUND_LOSE_8, 1-1);
    CalcRect::set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        
        FrameObject * single_instance_2478_6_0; single_instance_2478_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_activesystembox_450(parent->x + -15, parent->y + 75), parent->layer);
                if (single_instance_2478_6_0 == NULL)
                    single_instance_2478_6_0 = new_obj;
            }
        }
        ((SystemBox*)((SystemBox*)single_instance_2478_6_0))->set_fill(Color(make_color_int(255, 192, 0)));
        ((SystemBox*)((SystemBox*)single_instance_2478_6_0))->blend_color.set(Color(0, 0, 0));
        ((SystemBox*)((SystemBox*)single_instance_2478_6_0))->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        ((SystemBox*)((SystemBox*)single_instance_2478_6_0))->set_size(CalcRect::get_width()+5, CalcRect::get_height()+5);
        ((SystemBox*)((SystemBox*)single_instance_2478_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_x()-(((SystemBox*)single_instance_2478_6_0)->get_generic_width()/MathHelper()/2));
        ((SystemBox*)((SystemBox*)single_instance_2478_6_0))->alterables->values.set(1, 60);
        ((SystemBox*)((SystemBox*)single_instance_2478_6_0))->alterables->flags.enable(10);
        ((SystemBox*)((SystemBox*)single_instance_2478_6_0))->set_visible(true);
    }
    event_2478_6_end: ;
}
// Function purpose: generated callback event_func_2431 processes event block(s) 2479_6. Actions/conditions:
//        2479_6: sets the selected object's direction to 16; creates a itemshud 210 object; sets the selected
//        object's numeric value to gameVariables->get_value(612, CraftOutput); plus 8 more actions.
void Frames::event_func_2431()
{
    // event 2479_6 : sets the selected object's direction to 16; creates a itemshud 210 object; sets the selected object's numeric value to gameVariables->get_value(612, CraftOutput); plus 8 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2479_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) >= (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))))) goto event_2479_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_output_1121))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2479_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
        FrameObject * single_instance_2479_6_0; single_instance_2479_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2479_6_0 == NULL)
                    single_instance_2479_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2479_6_0))->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(612, str_craftoutput_1594));
        ((Active*)((Active*)single_instance_2479_6_0))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_2479_6_0))->alterables->strings.set(0, str_craft_output_1121);
        ((Active*)((Active*)single_instance_2479_6_0))->set_scale(2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        {
            loop_add_craft_note_running = true;
            int times = int(1);
            loop_add_craft_note_index = 0;
            while (loop_add_craft_note_index < times) {
                loop_add_craft_note_6();
                if (!loop_add_craft_note_running) break;
                loop_add_craft_note_index++;
            }
        }
        {
            loop_del_ingred_running = true;
            int times = int(1);
            loop_del_ingred_index = 0;
            while (loop_del_ingred_index < times) {
                loop_del_ingred_6();
                if (!loop_del_ingred_running) break;
                loop_del_ingred_index++;
            }
        }
        {
            loop_craft_giveback_running = true;
            int times = int(1);
            loop_craft_giveback_index = 0;
            while (loop_craft_giveback_index < times) {
                loop_craft_giveback_6();
                if (!loop_craft_giveback_running) break;
                loop_craft_giveback_index++;
            }
        }
        {
            loop_craft_score_running = true;
            int times = int(1);
            loop_craft_score_index = 0;
            while (loop_craft_score_index < times) {
                loop_craft_score_6();
                if (!loop_craft_score_running) break;
                loop_craft_score_index++;
            }
        }
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    }
    event_2479_6_end: ;
}
void Frames::loop_craft_output_6()
{
    event_func_2429();
    event_func_2430();
    event_func_2431();
}
// Function purpose: generated callback event_func_2432 processes event block(s) 2473_6. Actions/conditions:
//        2473_6: sets c1 to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2).
void Frames::event_func_2432()
{
    // event 2473_6 : sets c1 to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2473_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2473_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(614, str_c1_1596, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2473_6_end: ;
}
// Function purpose: generated callback event_func_2433 processes event block(s) 2474_6. Actions/conditions:
//        2474_6: sets c2 to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2).
void Frames::event_func_2433()
{
    // event 2474_6 : sets c2 to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2474_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2474_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(615, str_c2_1597, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2474_6_end: ;
}
// Function purpose: generated callback event_func_2434 processes event block(s) 2475_6. Actions/conditions:
//        2475_6: sets c3 to ((Active*)get_single(hudItem_instances,
//        default_active_instance))->alterables->values.get(2).
void Frames::event_func_2434()
{
    // event 2475_6 : sets c3 to ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2475_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_craft_900))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2475_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(616, str_c3_1598, ((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2475_6_end: ;
}
// Function purpose: generated callback event_func_2435 processes event block(s) 2476_6. Actions/conditions:
//        2476_6: adds a craftsort 346 instance; adds a line to the current list; adds a line to the current list;
//        plus 6 more actions.
void Frames::event_func_2435()
{
    // event 2476_6 : adds a craftsort 346 instance; adds a line to the current list; adds a line to the current list; plus 6 more actions
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2476_6_end;
        craftsort_346_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_craftsort_346(0, 0), 5);
            craftsort_346_instances.add_back();
        }
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->add_line(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(614, str_c1_1596)));
            ((ListObject*)*it)->add_line(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(615, str_c2_1597)));
            ((ListObject*)*it)->add_line(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(616, str_c3_1598)));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, ((ListObject*)get_single(craftsort_346_instances))->get_line(1)+str__96+((ListObject*)get_single(craftsort_346_instances))->get_line(2)+str__96+((ListObject*)get_single(craftsort_346_instances))->get_line(3));
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->destroy();
        }
    }
    event_2476_6_end: ;
}
// Function purpose: generated callback event_func_2436 processes event block(s) 2483_6. Actions/conditions:
//        2483_6: sets CraftString to empty_string; sets CraftOutput to 71; sets Craft_GiveBack to 1.
void Frames::event_func_2436()
{
    // event 2483_6 : sets CraftString to empty_string; sets CraftOutput to 71; sets Craft_GiveBack to 1
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2483_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_1_53_1600))) goto event_2483_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 71);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, 1);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2483_6_end: ;
}
// Function purpose: generated callback event_func_2437 processes event block(s) 2484_6. Actions/conditions:
//        2484_6: sets CraftString to empty_string; sets CraftOutput to 82; sets Craft_GiveBack to 7.
void Frames::event_func_2437()
{
    // event 2484_6 : sets CraftString to empty_string; sets CraftOutput to 82; sets Craft_GiveBack to 7
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2484_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_53_7_1601))) goto event_2484_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 82);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, 7);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2484_6_end: ;
}
// Function purpose: generated callback event_func_2438 processes event block(s) 2485_6. Actions/conditions:
//        2485_6: sets CraftString to empty_string; sets CraftOutput to 83; sets Craft_GiveBack to 0.
void Frames::event_func_2438()
{
    // event 2485_6 : sets CraftString to empty_string; sets CraftOutput to 83; sets Craft_GiveBack to 0
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2485_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_0_1_53_1602))) goto event_2485_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 83);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, 0);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2485_6_end: ;
}
// Function purpose: generated callback event_func_2439 processes event block(s) 2486_6. Actions/conditions:
//        2486_6: sets CraftString to empty_string; sets CraftOutput to 89; sets Craft_GiveBack to 6.
void Frames::event_func_2439()
{
    // event 2486_6 : sets CraftString to empty_string; sets CraftOutput to 89; sets Craft_GiveBack to 6
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2486_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_53_6_1603))) goto event_2486_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 89);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, 6);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2486_6_end: ;
}
// Function purpose: generated callback event_func_2440 processes event block(s) 2487_6. Actions/conditions:
//        2487_6: sets CraftString to empty_string; sets CraftOutput to 59; sets Craft_GiveBack to 43.
void Frames::event_func_2440()
{
    // event 2487_6 : sets CraftString to empty_string; sets CraftOutput to 59; sets Craft_GiveBack to 43
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2487_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_43_53_1604))) goto event_2487_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 59);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(611, str_craft_giveback_1593, 43);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2487_6_end: ;
}
// Function purpose: generated callback event_func_2441 processes event block(s) 2488_6. Actions/conditions:
//        2488_6: sets CraftString to empty_string; sets CraftOutput to 85.
void Frames::event_func_2441()
{
    // event 2488_6 : sets CraftString to empty_string; sets CraftOutput to 85
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2488_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_82_84_1605))) goto event_2488_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 85);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2488_6_end: ;
}
// Function purpose: generated callback event_func_2442 processes event block(s) 2489_6. Actions/conditions:
//        2489_6: sets CraftString to empty_string; sets CraftOutput to 86.
void Frames::event_func_2442()
{
    // event 2489_6 : sets CraftString to empty_string; sets CraftOutput to 86
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2489_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_71_84_1606))) goto event_2489_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 86);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2489_6_end: ;
}
// Function purpose: generated callback event_func_2443 processes event block(s) 2490_6. Actions/conditions:
//        2490_6: sets CraftString to empty_string; sets CraftOutput to 87.
void Frames::event_func_2443()
{
    // event 2490_6 : sets CraftString to empty_string; sets CraftOutput to 87
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2490_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_83_84_1607))) goto event_2490_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 87);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2490_6_end: ;
}
// Function purpose: generated callback event_func_2444 processes event block(s) 2491_6. Actions/conditions:
//        2491_6: sets CraftString to empty_string; sets CraftOutput to 88.
void Frames::event_func_2444()
{
    // event 2491_6 : sets CraftString to empty_string; sets CraftOutput to 88
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2491_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_84_89_1608))) goto event_2491_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 88);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2491_6_end: ;
}
// Function purpose: generated callback event_func_2445 processes event block(s) 2492_6. Actions/conditions:
//        2492_6: sets CraftString to empty_string; sets CraftOutput to 58.
void Frames::event_func_2445()
{
    // event 2492_6 : sets CraftString to empty_string; sets CraftOutput to 58
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2492_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_59_84_1609))) goto event_2492_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 58);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2492_6_end: ;
}
// Function purpose: generated callback event_func_2446 processes event block(s) 2493_6. Actions/conditions:
//        2493_6: sets CraftString to empty_string; sets CraftOutput to 128.
void Frames::event_func_2446()
{
    // event 2493_6 : sets CraftString to empty_string; sets CraftOutput to 128
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2493_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_4_95_1610))) goto event_2493_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 128);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2493_6_end: ;
}
// Function purpose: generated callback event_func_2447 processes event block(s) 2494_6. Actions/conditions:
//        2494_6: sets CraftString to empty_string; sets CraftOutput to 129.
void Frames::event_func_2447()
{
    // event 2494_6 : sets CraftString to empty_string; sets CraftOutput to 129
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2494_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_4_50_1611))) goto event_2494_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 129);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2494_6_end: ;
}
// Function purpose: generated callback event_func_2448 processes event block(s) 2495_6. Actions/conditions:
//        2495_6: sets CraftString to empty_string; sets CraftOutput to 130.
void Frames::event_func_2448()
{
    // event 2495_6 : sets CraftString to empty_string; sets CraftOutput to 130
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2495_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_13_4_76_1612))) goto event_2495_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 130);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2495_6_end: ;
}
// Function purpose: generated callback event_func_2449 processes event block(s) 2496_6. Actions/conditions:
//        2496_6: sets CraftString to empty_string; sets CraftOutput to 142.
void Frames::event_func_2449()
{
    // event 2496_6 : sets CraftString to empty_string; sets CraftOutput to 142
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2496_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_127_13_95_1613))) goto event_2496_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 142);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2496_6_end: ;
}
// Function purpose: generated callback event_func_2450 processes event block(s) 2497_6. Actions/conditions:
//        2497_6: sets CraftString to empty_string; sets CraftOutput to 143.
void Frames::event_func_2450()
{
    // event 2497_6 : sets CraftString to empty_string; sets CraftOutput to 143
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2497_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_127_13_50_1614))) goto event_2497_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 143);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2497_6_end: ;
}
// Function purpose: generated callback event_func_2451 processes event block(s) 2498_6. Actions/conditions:
//        2498_6: sets CraftString to empty_string; sets CraftOutput to 144.
void Frames::event_func_2451()
{
    // event 2498_6 : sets CraftString to empty_string; sets CraftOutput to 144
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2498_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_127_13_76_1615))) goto event_2498_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 144);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2498_6_end: ;
}
// Function purpose: generated callback event_func_2452 processes event block(s) 2499_6. Actions/conditions:
//        2499_6: sets CraftString to empty_string; sets CraftOutput to 182.
void Frames::event_func_2452()
{
    // event 2499_6 : sets CraftString to empty_string; sets CraftOutput to 182
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2499_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_12_13_1616))) goto event_2499_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 182);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2499_6_end: ;
}
// Function purpose: generated callback event_func_2453 processes event block(s) 2500_6. Actions/conditions:
//        2500_6: sets CraftString to empty_string; sets CraftOutput to 183.
void Frames::event_func_2453()
{
    // event 2500_6 : sets CraftString to empty_string; sets CraftOutput to 183
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2500_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_12_13_179_1617))) goto event_2500_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 183);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2500_6_end: ;
}
// Function purpose: generated callback event_func_2454 processes event block(s) 2501_6. Actions/conditions:
//        2501_6: sets CraftString to empty_string; sets CraftOutput to 124.
void Frames::event_func_2454()
{
    // event 2501_6 : sets CraftString to empty_string; sets CraftOutput to 124
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2501_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_17_94_1618))) goto event_2501_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 124);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2501_6_end: ;
}
// Function purpose: generated callback event_func_2455 processes event block(s) 2502_6. Actions/conditions:
//        2502_6: sets CraftString to empty_string; sets CraftOutput to 19.
void Frames::event_func_2455()
{
    // event 2502_6 : sets CraftString to empty_string; sets CraftOutput to 19
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2502_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_13_18_1619))) goto event_2502_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 19);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2502_6_end: ;
}
// Function purpose: generated callback event_func_2456 processes event block(s) 2503_6. Actions/conditions:
//        2503_6: sets CraftString to empty_string; sets CraftOutput to 103.
void Frames::event_func_2456()
{
    // event 2503_6 : sets CraftString to empty_string; sets CraftOutput to 103
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2503_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_48_74_1620))) goto event_2503_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 103);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2503_6_end: ;
}
// Function purpose: generated callback event_func_2457 processes event block(s) 2504_6. Actions/conditions:
//        2504_6: sets CraftString to empty_string; sets CraftOutput to 104.
void Frames::event_func_2457()
{
    // event 2504_6 : sets CraftString to empty_string; sets CraftOutput to 104
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2504_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_73_74_1621))) goto event_2504_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 104);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2504_6_end: ;
}
// Function purpose: generated callback event_func_2458 processes event block(s) 2505_6. Actions/conditions:
//        2505_6: sets CraftString to empty_string; sets CraftOutput to 110.
void Frames::event_func_2458()
{
    // event 2505_6 : sets CraftString to empty_string; sets CraftOutput to 110
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2505_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_12_94_98_1622))) goto event_2505_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 110);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2505_6_end: ;
}
// Function purpose: generated callback event_func_2459 processes event block(s) 2506_6. Actions/conditions:
//        2506_6: sets CraftString to empty_string; sets CraftOutput to 111.
void Frames::event_func_2459()
{
    // event 2506_6 : sets CraftString to empty_string; sets CraftOutput to 111
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2506_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_13_94_1623))) goto event_2506_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 111);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2506_6_end: ;
}
// Function purpose: generated callback event_func_2460 processes event block(s) 2507_6. Actions/conditions:
//        2507_6: sets CraftString to empty_string; sets CraftOutput to 108.
void Frames::event_func_2460()
{
    // event 2507_6 : sets CraftString to empty_string; sets CraftOutput to 108
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2507_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_12_12_98_1624))) goto event_2507_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 108);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2507_6_end: ;
}
// Function purpose: generated callback event_func_2461 processes event block(s) 2508_6. Actions/conditions:
//        2508_6: sets CraftString to empty_string; sets CraftOutput to 105.
void Frames::event_func_2461()
{
    // event 2508_6 : sets CraftString to empty_string; sets CraftOutput to 105
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2508_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_46_8_90_1625))) goto event_2508_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 105);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2508_6_end: ;
}
// Function purpose: generated callback event_func_2462 processes event block(s) 2509_6. Actions/conditions:
//        2509_6: sets CraftString to empty_string; sets CraftOutput to 189.
void Frames::event_func_2462()
{
    // event 2509_6 : sets CraftString to empty_string; sets CraftOutput to 189
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2509_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_1_12_98_1626))) goto event_2509_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 189);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2509_6_end: ;
}
// Function purpose: generated callback event_func_2463 processes event block(s) 2510_6. Actions/conditions:
//        2510_6: sets CraftString to empty_string; sets CraftOutput to 186.
void Frames::event_func_2463()
{
    // event 2510_6 : sets CraftString to empty_string; sets CraftOutput to 186
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2510_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_24_73_98_1627))) goto event_2510_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 186);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2510_6_end: ;
}
// Function purpose: generated callback event_func_2464 processes event block(s) 2511_6. Actions/conditions:
//        2511_6: sets CraftString to empty_string; sets CraftOutput to 185.
void Frames::event_func_2464()
{
    // event 2511_6 : sets CraftString to empty_string; sets CraftOutput to 185
    {
        if (!(group_code_1 && group_code_crafting_1)) goto event_2511_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(617, str_craftstring_1599)) == (str_158_158_158_1628))) goto event_2511_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(617, str_craftstring_1599, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(612, str_craftoutput_1594, 185);
        {
            loop_craft_output_running = true;
            int times = int(1);
            loop_craft_output_index = 0;
            while (loop_craft_output_index < times) {
                loop_craft_output_6();
                if (!loop_craft_output_running) break;
                loop_craft_output_index++;
            }
        }
    }
    event_2511_6_end: ;
}
