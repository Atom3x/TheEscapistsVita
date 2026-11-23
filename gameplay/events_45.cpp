#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_3564 processes event block(s) 1373_6. Actions/conditions:
//        1373_6: changes a stored game value.
void Frames::event_func_3564()
{
    VITA_LEGACY_EVENT();
    // event 1373_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1373_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(365, str_post_ko_shu_1159)) > (0))) goto event_1373_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1373_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(365, str_post_ko_shu_1159, 1);
    }
    event_1373_6_end: ;
}
// Function purpose: generated callback event_func_3565 processes event block(s) 1374_6. Actions/conditions:
//        1374_6: sets EndString to Caught entry 20; removes the selected object.
void Frames::event_func_3565()
{
    VITA_LEGACY_EVENT();
    // event 1374_6 : sets EndString to Caught entry 20; removes the selected object
    {
        if (!(group_code_1)) goto event_1374_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(365, str_post_ko_shu_1159)) == (1))) goto event_1374_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(226, str_guardsdowncount_836)) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(169, str_guardcount_747)*0.2))) goto event_1374_6_end;
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_1374_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1374_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_20_279));
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
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        noticetext_363_instances.clear_selection();
        for (ObjectIterator it(noticetext_363_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_1374_6_end: ;
}
// Function purpose: generated callback event_func_3566 processes event block(s) 1375_6. Actions/conditions:
//        1375_6: sets the selected object's vertical position to selected object->get_y()-1; changes the selected
//        object transparency; changes the selected object transparency.
void Frames::event_func_3566()
{
    // event 1375_6 : sets the selected object's vertical position to selected object->get_y()-1; changes the selected object transparency; changes the selected object transparency
    {
        if (!(group_code_1)) goto event_1375_6_end;
        every_1375_6 += manager.dt;
        if (every_1375_6 < 0.06) goto event_1375_6_end;
        every_1375_6 -= 0.06;
        loadingCurtain_instances.clear_selection();
        if (loadingCurtain_instances.size() != 0) goto event_1375_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1375_6_end;
        dmgagainst_253_instances.clear_selection();
        for (ObjectIterator it(dmgagainst_253_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_y(((TextBlitter*)*it)->get_y()-1);
            ((TextBlitter*)*it)->blend_color.set_alpha_coefficient(((TextBlitter*)*it)->blend_color.get_alpha_coefficient()+5);
        }
        stats_340_instances.clear_selection();
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_y(((TextBlitter*)*it)->get_y()-1);
            ((TextBlitter*)*it)->blend_color.set_alpha_coefficient(((TextBlitter*)*it)->blend_color.get_alpha_coefficient()+10);
        }
        damageto_252_instances.clear_selection();
        for (ObjectIterator it(damageto_252_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_y(((TextBlitter*)*it)->get_y()-1);
            ((TextBlitter*)*it)->blend_color.set_alpha_coefficient(((TextBlitter*)*it)->blend_color.get_alpha_coefficient()+5);
        }
    }
    event_1375_6_end: ;
}
// Function purpose: generated callback event_func_3567 processes event block(s) 1376_6. Actions/conditions:
//        1376_6: removes the selected object.
void Frames::event_func_3567()
{
    // event 1376_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_1376_6_end;
        if (!((((TextBlitter*)get_instance(damageto_252_instances, default_blitter_instance))->blend_color.get_alpha_coefficient()) == (255))) goto event_1376_6_end;
        damageto_252_instances.clear_selection();
        for (ObjectIterator it(damageto_252_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->destroy();
        }
    }
    event_1376_6_end: ;
}
// Function purpose: generated callback event_func_3568 processes event block(s) 1377_6. Actions/conditions:
//        1377_6: removes the selected object.
void Frames::event_func_3568()
{
    // event 1377_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_1377_6_end;
        if (!((((TextBlitter*)get_instance(dmgagainst_253_instances, default_blitter_instance))->blend_color.get_alpha_coefficient()) == (255))) goto event_1377_6_end;
        dmgagainst_253_instances.clear_selection();
        for (ObjectIterator it(dmgagainst_253_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->destroy();
        }
    }
    event_1377_6_end: ;
}
// Function purpose: generated callback event_func_3569 processes event block(s) 1378_6. Actions/conditions:
//        1378_6: removes the selected object.
void Frames::event_func_3569()
{
    // event 1378_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_1378_6_end;
        if (!((((TextBlitter*)get_instance(stats_340_instances, default_blitter_instance))->blend_color.get_alpha_coefficient()) == (255))) goto event_1378_6_end;
        stats_340_instances.clear_selection();
        for (ObjectIterator it(stats_340_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->destroy();
        }
    }
    event_1378_6_end: ;
}
// Function purpose: generated callback event_func_3570 processes event block(s) 1379_6. Actions/conditions:
//        1379_6: changes a stored game value.
void Frames::event_func_3570()
{
    VITA_LEGACY_EVENT();
    // event 1379_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1379_6_end;
        qualifier_5.clear_selection();
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_5.has_selection()) goto event_1379_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1379_6_end;
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1379_6_end: ;
}
// Function purpose: generated callback event_func_3571 processes event block(s) 1380_6. Actions/conditions:
//        1380_6: changes a stored game value.
void Frames::event_func_3571()
{
    VITA_LEGACY_EVENT();
    // event 1380_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1380_6_end;
        qualifier_5.clear_selection();
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_5.has_selection()) goto event_1380_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1380_6_end;
        for (QualifierIterator it(qualifier_5); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_1380_6_end: ;
}
// Function purpose: generated callback event_func_3572 processes event block(s) 1381_6. Actions/conditions:
//        1381_6: sets the object's animation to 0.
void Frames::event_func_3572()
{
    // event 1381_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_1381_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!(((Active*)(*it))->animation_finished == 6)) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1381_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1381_6_end: ;
}
// Function purpose: generated callback event_func_3573 processes event block(s) 1382_6. Actions/conditions:
//        1382_6: changes a stored game value.
void Frames::event_func_3573()
{
    VITA_LEGACY_EVENT();
    // event 1382_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1382_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) < (0))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1382_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1382_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
    }
    event_1382_6_end: ;
}
// Function purpose: generated callback event_func_3574 processes event block(s) 1383_6. Actions/conditions:
//        1383_6: sets charID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(0); sets charZ to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets
//        the selected object's numeric value to selected object->alterables->values.get(8)/MathHelper()/2; plus 8
//        more actions.
void Frames::event_func_3574()
{
    // event 1383_6 : sets charID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); sets charZ to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25); sets the selected object's numeric value to selected object->alterables->values.get(8)/MathHelper()/2; plus 8 more actions
    {
        if (!(group_code_1)) goto event_1383_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1383_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1383_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(25));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(8)/MathHelper()/2);
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(23, ((((Active*)*it)->get_x()/MathHelper()/16)*16)+8);
            ((Active*)*it)->alterables->values.set(24, ((((Active*)*it)->get_y()/MathHelper()/16)*16)+8);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
        }
        {
            loop_inmate_wake_running = true;
            int times = int(1);
            loop_inmate_wake_index = 0;
            while (loop_inmate_wake_index < times) {
                loop_inmate_wake_6();
                if (!loop_inmate_wake_running) break;
                loop_inmate_wake_index++;
            }
        }
    }
    event_1383_6_end: ;
}
// Function purpose: generated callback event_func_3575 processes event block(s) 1385_6. Actions/conditions:
//        1385_6: sets charID to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(0); sets charZ to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); sets
//        the selected object's numeric value to selected object->alterables->values.get(8)/MathHelper()/2; plus 8
//        more actions.
void Frames::event_func_3575()
{
    // event 1385_6 : sets charID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0); sets charZ to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); sets the selected object's numeric value to selected object->alterables->values.get(8)/MathHelper()/2; plus 8 more actions
    {
        if (!(group_code_1)) goto event_1385_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1385_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1385_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(94, str_charid_605, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(95, str_charz_607, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(8)/MathHelper()/2);
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->alterables->values.set(23, ((((Active*)*it)->get_x()/MathHelper()/16)*16)+8);
            ((Active*)*it)->alterables->values.set(24, ((((Active*)*it)->get_y()/MathHelper()/16)*16)+8);
            ((Active*)*it)->alterables->flags.disable(250);
            ((Active*)*it)->alterables->flags.disable(251);
        }
        {
            loop_guard_wake_running = true;
            int times = int(1);
            loop_guard_wake_index = 0;
            while (loop_guard_wake_index < times) {
                loop_guard_wake_6();
                if (!loop_guard_wake_running) break;
                loop_guard_wake_index++;
            }
        }
    }
    event_1385_6_end: ;
}
// Function purpose: generated callback event_func_3576 processes event block(s) 1389_6. Actions/conditions:
//        1389_6: sets LastX to playerBase->get_x()/MathHelper()/16; sets LastY to
//        playerBase->get_y()/MathHelper()/16.
void Frames::event_func_3576()
{
    // event 1389_6 : sets LastX to playerBase->get_x()/MathHelper()/16; sets LastY to playerBase->get_y()/MathHelper()/16
    {
        if (!(group_code_1)) goto event_1389_6_end;
        every_1389_6 += manager.dt;
        if (every_1389_6 < 0.5) goto event_1389_6_end;
        every_1389_6 -= 0.5;
        if (!((number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(733, str_lastx_1904))+str_x_437+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(734, str_lasty_1905))) != (number_to_string(((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16)+str_x_437+number_to_string(((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16)))) goto event_1389_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(733, str_lastx_1904, ((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(734, str_lasty_1905, ((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16);
        if (!group_code_zones_1) {
            group_code_zones_1 = true;
            group_check_group_code_zones_1_0 = true;
        }
    }
    event_1389_6_end: ;
}
// Function purpose: generated callback event_func_3577 processes event block(s) 1390_6. Actions/conditions:
//        1390_6: sets Zone_Janitor to 0; sets Zone_Kitchen to 0; sets Zone_Sleep to 0; plus 20 more actions.
void Frames::event_func_3577()
{
    // event 1390_6 : sets Zone_Janitor to 0; sets Zone_Kitchen to 0; sets Zone_Sleep to 0; plus 20 more actions
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1390_6_end;
        if (!group_check_group_code_zones_1_0) goto event_1390_6_end;
        group_check_group_code_zones_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(776, str_zone_janitor_1956, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(777, str_zone_kitchen_1957, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(158, str_zone_sleep_731, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(778, str_zone_rollcall_1958, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(779, str_zone_gym_1959, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(747, str_zone_canteen_1918, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(541, str_zone_showers_1442, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(748, str_zone_laundry_1919, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(780, str_zone_woodshop_1960, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(776, str_zone_janitor_1956, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(781, str_zone_gardening_1961, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(782, str_zone_metalshop_1962, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(159, str_zone_shu_732, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(783, str_zone_tailorshop_1963, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(784, str_zone_deliveries_1964, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(20, str_zone_safe1_482, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(21, str_zone_safe2_483, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(22, str_zone_safe3_484, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(785, str_safeisnot_1965, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(152, str_zone_nope_725, 0);
    }
    event_1390_6_end: ;
}
// Function purpose: generated callback event_func_3578 processes event block(s) 1391_6. Actions/conditions:
//        1391_6: sets Zone_Rollcall to 1.
void Frames::event_func_3578()
{
    // event 1391_6 : sets Zone_Rollcall to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1391_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(786, str_zones_rollcalltopx_1966)))) goto event_1391_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(787, str_zones_rollcalltopy_1967)))) goto event_1391_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(788, str_zones_rollcallbottomx_1968)))) goto event_1391_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(789, str_zones_rollcallbottomy_1969)))) goto event_1391_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(778, str_zone_rollcall_1958, 1);
    }
    event_1391_6_end: ;
}
// Function purpose: generated callback event_func_3579 processes event block(s) 1392_6. Actions/conditions:
//        1392_6: sets Zone_Sleep to 1.
void Frames::event_func_3579()
{
    // event 1392_6 : sets Zone_Sleep to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1392_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(759, str_zones_yourcelltopx_1937)))) goto event_1392_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(761, str_zones_yourcelltopy_1939)))) goto event_1392_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(760, str_zones_yourcellbottomx_1938)))) goto event_1392_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(762, str_zones_yourcellbottomy_1940)))) goto event_1392_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(158, str_zone_sleep_731, 1);
    }
    event_1392_6_end: ;
}
// Function purpose: generated callback event_func_3580 processes event block(s) 1393_6. Actions/conditions:
//        1393_6: sets Zone_Cells to 1.
void Frames::event_func_3580()
{
    // event 1393_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1393_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(266, str_zones_cells1topx_923)))) goto event_1393_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(267, str_zones_cells1topy_924)))) goto event_1393_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(268, str_zones_cells1bottomx_925)))) goto event_1393_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(269, str_zones_cells1bottomy_926)))) goto event_1393_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1393_6_end: ;
}
// Function purpose: generated callback event_func_3581 processes event block(s) 1394_6. Actions/conditions:
//        1394_6: sets Zone_Cells to 1.
void Frames::event_func_3581()
{
    // event 1394_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1394_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(270, str_zones_cells2topx_927)))) goto event_1394_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(271, str_zones_cells2topy_928)))) goto event_1394_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(272, str_zones_cells2bottomx_929)))) goto event_1394_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(273, str_zones_cells2bottomy_930)))) goto event_1394_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1394_6_end: ;
}
// Function purpose: generated callback event_func_3582 processes event block(s) 1395_6. Actions/conditions:
//        1395_6: sets Zone_Cells to 1.
void Frames::event_func_3582()
{
    // event 1395_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1395_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(274, str_zones_cells3topx_931)))) goto event_1395_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(275, str_zones_cells3topy_932)))) goto event_1395_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(276, str_zones_cells3bottomx_933)))) goto event_1395_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(277, str_zones_cells3bottomy_934)))) goto event_1395_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1395_6_end: ;
}
// Function purpose: generated callback event_func_3583 processes event block(s) 1396_6. Actions/conditions:
//        1396_6: sets Zone_Cells to 1.
void Frames::event_func_3583()
{
    // event 1396_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1396_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(278, str_zones_cells4topx_935)))) goto event_1396_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(279, str_zones_cells4topy_936)))) goto event_1396_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(280, str_zones_cells4bottomx_937)))) goto event_1396_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(281, str_zones_cells4bottomy_938)))) goto event_1396_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1396_6_end: ;
}
// Function purpose: generated callback event_func_3584 processes event block(s) 1397_6. Actions/conditions:
//        1397_6: sets Zone_Cells to 1.
void Frames::event_func_3584()
{
    // event 1397_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1397_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(790, str_zones_cells5topx_1970)))) goto event_1397_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(791, str_zones_cells5topy_1971)))) goto event_1397_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(792, str_zones_cells5bottomx_1972)))) goto event_1397_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(793, str_zones_cells5bottomy_1973)))) goto event_1397_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1397_6_end: ;
}
// Function purpose: generated callback event_func_3585 processes event block(s) 1398_6. Actions/conditions:
//        1398_6: sets Zone_Cells to 1.
void Frames::event_func_3585()
{
    // event 1398_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1398_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(794, str_zones_cells6topx_1974)))) goto event_1398_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(795, str_zones_cells6topy_1975)))) goto event_1398_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(796, str_zones_cells6bottomx_1976)))) goto event_1398_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(797, str_zones_cells6bottomy_1977)))) goto event_1398_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1398_6_end: ;
}
// Function purpose: generated callback event_func_3586 processes event block(s) 1399_6. Actions/conditions:
//        1399_6: sets Zone_Cells to 1.
void Frames::event_func_3586()
{
    // event 1399_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1399_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(798, str_zones_cells7topx_1978)))) goto event_1399_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(799, str_zones_cells7topy_1979)))) goto event_1399_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(800, str_zones_cells7bottomx_1980)))) goto event_1399_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(801, str_zones_cells7bottomy_1981)))) goto event_1399_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1399_6_end: ;
}
// Function purpose: generated callback event_func_3587 processes event block(s) 1400_6. Actions/conditions:
//        1400_6: sets Zone_Cells to 1.
void Frames::event_func_3587()
{
    // event 1400_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1400_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(802, str_zones_cells8topx_1982)))) goto event_1400_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(803, str_zones_cells8topy_1983)))) goto event_1400_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(804, str_zones_cells8bottomx_1984)))) goto event_1400_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(805, str_zones_cells8bottomy_1985)))) goto event_1400_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1400_6_end: ;
}
// Function purpose: generated callback event_func_3588 processes event block(s) 1401_6. Actions/conditions:
//        1401_6: sets Zone_Cells to 1.
void Frames::event_func_3588()
{
    // event 1401_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1401_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(806, str_zones_cells9topx_1986)))) goto event_1401_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(807, str_zones_cells9topy_1987)))) goto event_1401_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(808, str_zones_cells9bottomx_1988)))) goto event_1401_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(809, str_zones_cells9bottomy_1989)))) goto event_1401_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1401_6_end: ;
}
// Function purpose: generated callback event_func_3589 processes event block(s) 1402_6. Actions/conditions:
//        1402_6: sets Zone_Cells to 1.
void Frames::event_func_3589()
{
    // event 1402_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1402_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(810, str_zones_cells10topx_1990)))) goto event_1402_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(811, str_zones_cells10topy_1991)))) goto event_1402_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(812, str_zones_cells10bottomx_1992)))) goto event_1402_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(813, str_zones_cells10bottomy_1993)))) goto event_1402_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1402_6_end: ;
}
// Function purpose: generated callback event_func_3590 processes event block(s) 1403_6. Actions/conditions:
//        1403_6: sets Zone_Cells to 1.
void Frames::event_func_3590()
{
    // event 1403_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1403_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(814, str_zones_cells11topx_1994)))) goto event_1403_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(815, str_zones_cells11topy_1995)))) goto event_1403_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(816, str_zones_cells11bottomx_1996)))) goto event_1403_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(817, str_zones_cells11bottomy_1997)))) goto event_1403_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1403_6_end: ;
}
// Function purpose: generated callback event_func_3591 processes event block(s) 1404_6. Actions/conditions:
//        1404_6: sets Zone_Cells to 1.
void Frames::event_func_3591()
{
    // event 1404_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1404_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(818, str_zones_cells12topx_1998)))) goto event_1404_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(819, str_zones_cells12topy_1999)))) goto event_1404_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(820, str_zones_cells12bottomx_2000)))) goto event_1404_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(821, str_zones_cells12bottomy_2001)))) goto event_1404_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1404_6_end: ;
}
// Function purpose: generated callback event_func_3592 processes event block(s) 1405_6. Actions/conditions:
//        1405_6: sets Zone_Cells to 1.
void Frames::event_func_3592()
{
    // event 1405_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1405_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(822, str_zones_cells13topx_2002)))) goto event_1405_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(823, str_zones_cells13topy_2003)))) goto event_1405_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(824, str_zones_cells13bottomx_2004)))) goto event_1405_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(825, str_zones_cells13bottomy_2005)))) goto event_1405_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1405_6_end: ;
}
// Function purpose: generated callback event_func_3593 processes event block(s) 1406_6. Actions/conditions:
//        1406_6: sets Zone_Cells to 1.
void Frames::event_func_3593()
{
    // event 1406_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1406_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(826, str_zones_cells14topx_2006)))) goto event_1406_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(827, str_zones_cells14topy_2007)))) goto event_1406_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(828, str_zones_cells14bottomx_2008)))) goto event_1406_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(829, str_zones_cells14bottomy_2009)))) goto event_1406_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1406_6_end: ;
}
// Function purpose: generated callback event_func_3594 processes event block(s) 1407_6. Actions/conditions:
//        1407_6: sets Zone_Cells to 1.
void Frames::event_func_3594()
{
    // event 1407_6 : sets Zone_Cells to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1407_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(830, str_zones_cells15topx_2010)))) goto event_1407_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(831, str_zones_cells15topy_2011)))) goto event_1407_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(832, str_zones_cells15bottomx_2012)))) goto event_1407_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(833, str_zones_cells15bottomy_2013)))) goto event_1407_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(160, str_zone_cells_733, 1);
    }
    event_1407_6_end: ;
}
// Function purpose: generated callback event_func_3595 processes event block(s) 1408_6. Actions/conditions:
//        1408_6: sets Zone_Laundry to 1.
void Frames::event_func_3595()
{
    // event 1408_6 : sets Zone_Laundry to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1408_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1408_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(66, str_zones_laundrytopx_565)))) goto event_1408_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(68, str_zones_laundrytopy_567)))) goto event_1408_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(67, str_zones_laundrybottomx_566)))) goto event_1408_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(69, str_zones_laundrybottomy_568)))) goto event_1408_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(748, str_zone_laundry_1919, 1);
    }
    event_1408_6_end: ;
}
// Function purpose: generated callback event_func_3596 processes event block(s) 1409_6. Actions/conditions:
//        1409_6: sets Zone_NOPE to 1.
void Frames::event_func_3596()
{
    // event 1409_6 : sets Zone_NOPE to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1409_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1409_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(66, str_zones_laundrytopx_565)))) goto event_1409_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(68, str_zones_laundrytopy_567)))) goto event_1409_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(67, str_zones_laundrybottomx_566)))) goto event_1409_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(69, str_zones_laundrybottomy_568)))) goto event_1409_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(152, str_zone_nope_725, 1);
    }
    event_1409_6_end: ;
}
// Function purpose: generated callback event_func_3597 processes event block(s) 1410_6. Actions/conditions:
//        1410_6: sets Zone_Kitchen to 1.
void Frames::event_func_3597()
{
    // event 1410_6 : sets Zone_Kitchen to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1410_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(70, str_zones_kitchentopx_569)))) goto event_1410_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(72, str_zones_kitchentopy_571)))) goto event_1410_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(71, str_zones_kitchenbottomx_570)))) goto event_1410_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(73, str_zones_kitchenbottomy_572)))) goto event_1410_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(777, str_zone_kitchen_1957, 1);
    }
    event_1410_6_end: ;
}
// Function purpose: generated callback event_func_3598 processes event block(s) 1411_6. Actions/conditions:
//        1411_6: sets Zone_Janitor to 1.
void Frames::event_func_3598()
{
    // event 1411_6 : sets Zone_Janitor to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1411_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(834, str_zones_janitortopx_2014)))) goto event_1411_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(835, str_zones_janitortopy_2015)))) goto event_1411_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(836, str_zones_janitorbottomx_2016)))) goto event_1411_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(837, str_zones_janitorbottomy_2017)))) goto event_1411_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(776, str_zone_janitor_1956, 1);
    }
    event_1411_6_end: ;
}
// Function purpose: generated callback event_func_3599 processes event block(s) 1412_6. Actions/conditions:
//        1412_6: sets Zone_Gardening to 1.
void Frames::event_func_3599()
{
    // event 1412_6 : sets Zone_Gardening to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1412_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(838, str_zones_gardeningtopx_2018)))) goto event_1412_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(839, str_zones_gardeningtopy_2019)))) goto event_1412_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(840, str_zones_gardeningbottomx_2020)))) goto event_1412_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(841, str_zones_gardeningbottomy_2021)))) goto event_1412_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(781, str_zone_gardening_1961, 1);
    }
    event_1412_6_end: ;
}
// Function purpose: generated callback event_func_3600 processes event block(s) 1413_6. Actions/conditions:
//        1413_6: sets Zone_NOPE to 1.
void Frames::event_func_3600()
{
    // event 1413_6 : sets Zone_NOPE to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1413_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1413_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(838, str_zones_gardeningtopx_2018)))) goto event_1413_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(839, str_zones_gardeningtopy_2019)))) goto event_1413_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(840, str_zones_gardeningbottomx_2020)))) goto event_1413_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(841, str_zones_gardeningbottomy_2021)))) goto event_1413_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(152, str_zone_nope_725, 1);
    }
    event_1413_6_end: ;
}
// Function purpose: generated callback event_func_3601 processes event block(s) 1414_6. Actions/conditions:
//        1414_6: sets Zone_Canteen to 1.
void Frames::event_func_3601()
{
    // event 1414_6 : sets Zone_Canteen to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1414_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(3, str_zones_canteentopx_438)))) goto event_1414_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(5, str_zones_canteentopy_440)))) goto event_1414_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(4, str_zones_canteenbottomx_439)))) goto event_1414_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(6, str_zones_canteenbottomy_441)))) goto event_1414_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(747, str_zone_canteen_1918, 1);
    }
    event_1414_6_end: ;
}
// Function purpose: generated callback event_func_3602 processes event block(s) 1415_6. Actions/conditions:
//        1415_6: sets Zone_Woodshop to 1.
void Frames::event_func_3602()
{
    // event 1415_6 : sets Zone_Woodshop to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1415_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(58, str_zones_woodshoptopx_557)))) goto event_1415_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_zones_woodshoptopy_559)))) goto event_1415_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(59, str_zones_woodshopbottomx_558)))) goto event_1415_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(61, str_zones_woodshopbottomy_560)))) goto event_1415_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(780, str_zone_woodshop_1960, 1);
    }
    event_1415_6_end: ;
}
// Function purpose: generated callback event_func_3603 processes event block(s) 1416_6. Actions/conditions:
//        1416_6: sets Zone_Metalshop to 1.
void Frames::event_func_3603()
{
    // event 1416_6 : sets Zone_Metalshop to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1416_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(62, str_zones_metalshoptopx_561)))) goto event_1416_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(64, str_zones_metalshoptopy_563)))) goto event_1416_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(63, str_zones_metalshopbottomx_562)))) goto event_1416_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(65, str_zones_metalshopbottomy_564)))) goto event_1416_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(782, str_zone_metalshop_1962, 1);
    }
    event_1416_6_end: ;
}
// Function purpose: generated callback event_func_3604 processes event block(s) 1417_6. Actions/conditions:
//        1417_6: sets Zone_Gym to 1.
void Frames::event_func_3604()
{
    // event 1417_6 : sets Zone_Gym to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1417_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(842, str_zones_gymtopx_2022)))) goto event_1417_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(843, str_zones_gymtopy_2023)))) goto event_1417_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(844, str_zones_gymbottomx_2024)))) goto event_1417_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(845, str_zones_gymbottomy_2025)))) goto event_1417_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(779, str_zone_gym_1959, 1);
    }
    event_1417_6_end: ;
}
// Function purpose: generated callback event_func_3605 processes event block(s) 1418_6. Actions/conditions:
//        1418_6: sets Zone_Showers to 1.
void Frames::event_func_3605()
{
    // event 1418_6 : sets Zone_Showers to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1418_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(846, str_zones_showerstopx_2026)))) goto event_1418_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(847, str_zones_showerstopy_2027)))) goto event_1418_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(848, str_zones_showersbottomx_2028)))) goto event_1418_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(849, str_zones_showersbottomy_2029)))) goto event_1418_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(541, str_zone_showers_1442, 1);
    }
    event_1418_6_end: ;
}
// Function purpose: generated callback event_func_3606 processes event block(s) 1419_6. Actions/conditions:
//        1419_6: sets Zone_SHU to 1.
void Frames::event_func_3606()
{
    // event 1419_6 : sets Zone_SHU to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1419_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(850, str_zones_shutopx_2030)))) goto event_1419_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(851, str_zones_shutopy_2031)))) goto event_1419_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(852, str_zones_shubottomx_2032)))) goto event_1419_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(853, str_zones_shubottomy_2033)))) goto event_1419_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(159, str_zone_shu_732, 1);
    }
    event_1419_6_end: ;
}
// Function purpose: generated callback event_func_3607 processes event block(s) 1420_6. Actions/conditions:
//        1420_6: sets Zone_Tailorshop to 1.
void Frames::event_func_3607()
{
    // event 1420_6 : sets Zone_Tailorshop to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1420_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1420_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(74, str_zones_tailorshoptopx_573)))) goto event_1420_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(76, str_zones_tailorshoptopy_575)))) goto event_1420_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(75, str_zones_tailorshopbottomx_574)))) goto event_1420_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(77, str_zones_tailorshopbottomy_576)))) goto event_1420_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(783, str_zone_tailorshop_1963, 1);
    }
    event_1420_6_end: ;
}
// Function purpose: generated callback event_func_3608 processes event block(s) 1421_6. Actions/conditions:
//        1421_6: sets Zone_NOPE to 1.
void Frames::event_func_3608()
{
    // event 1421_6 : sets Zone_NOPE to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1421_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1421_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(74, str_zones_tailorshoptopx_573)))) goto event_1421_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(76, str_zones_tailorshoptopy_575)))) goto event_1421_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(75, str_zones_tailorshopbottomx_574)))) goto event_1421_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(77, str_zones_tailorshopbottomy_576)))) goto event_1421_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(152, str_zone_nope_725, 1);
    }
    event_1421_6_end: ;
}
// Function purpose: generated callback event_func_3609 processes event block(s) 1422_6. Actions/conditions:
//        1422_6: sets Zone_Safe1 to 1.
void Frames::event_func_3609()
{
    // event 1422_6 : sets Zone_Safe1 to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1422_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1422_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1422_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1422_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(854, str_zones_safe1topx_2034)))) goto event_1422_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(855, str_zones_safe1topy_2035)))) goto event_1422_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(856, str_zones_safe1bottomx_2036)))) goto event_1422_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(857, str_zones_safe1bottomy_2037)))) goto event_1422_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(20, str_zone_safe1_482, 1);
    }
    event_1422_6_end: ;
}
// Function purpose: generated callback event_func_3610 processes event block(s) 1423_6. Actions/conditions:
//        1423_6: sets Zone_Safe2 to 1.
void Frames::event_func_3610()
{
    // event 1423_6 : sets Zone_Safe2 to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1423_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1423_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1423_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1423_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(858, str_zones_safe2topx_2038)))) goto event_1423_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(859, str_zones_safe2topy_2039)))) goto event_1423_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(860, str_zones_safe2bottomx_2040)))) goto event_1423_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(861, str_zones_safe2bottomy_2041)))) goto event_1423_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(21, str_zone_safe2_483, 1);
    }
    event_1423_6_end: ;
}
// Function purpose: generated callback event_func_3611 processes event block(s) 1424_6. Actions/conditions:
//        1424_6: sets Zone_Safe3 to 1.
void Frames::event_func_3611()
{
    // event 1424_6 : sets Zone_Safe3 to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1424_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1424_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1424_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1424_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(862, str_zones_safe3topx_2042)))) goto event_1424_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(863, str_zones_safe3topy_2043)))) goto event_1424_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(864, str_zones_safe3bottomx_2044)))) goto event_1424_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(865, str_zones_safe3bottomy_2045)))) goto event_1424_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(22, str_zone_safe3_484, 1);
    }
    event_1424_6_end: ;
}
// Function purpose: generated callback event_func_3612 processes event block(s) 1425_6. Actions/conditions:
//        1425_6: sets SafeIsNot to 1.
void Frames::event_func_3612()
{
    // event 1425_6 : sets SafeIsNot to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1425_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1425_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(785, str_safeisnot_1965, 1);
    }
    event_1425_6_end: ;
}
// Function purpose: generated callback event_func_3613 processes event block(s) 1426_6. Actions/conditions:
//        1426_6: sets SafeIsNot to 1.
void Frames::event_func_3613()
{
    // event 1426_6 : sets SafeIsNot to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1426_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1426_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(785, str_safeisnot_1965, 1);
    }
    event_1426_6_end: ;
}
// Function purpose: generated callback event_func_3614 processes event block(s) 1427_6. Actions/conditions:
//        1427_6: sets SafeIsNot to 1.
void Frames::event_func_3614()
{
    // event 1427_6 : sets SafeIsNot to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1427_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1427_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(785, str_safeisnot_1965, 1);
    }
    event_1427_6_end: ;
}
// Function purpose: generated callback event_func_3615 processes event block(s) 1428_6. Actions/conditions:
//        1428_6: sets Zone_NOPE to 1.
void Frames::event_func_3615()
{
    // event 1428_6 : sets Zone_NOPE to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1428_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(785, str_safeisnot_1965)) == (1))) goto event_1428_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(854, str_zones_safe1topx_2034)))) goto event_1428_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(855, str_zones_safe1topy_2035)))) goto event_1428_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(856, str_zones_safe1bottomx_2036)))) goto event_1428_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(857, str_zones_safe1bottomy_2037)))) goto event_1428_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(152, str_zone_nope_725, 1);
    }
    event_1428_6_end: ;
}
// Function purpose: generated callback event_func_3616 processes event block(s) 1429_6. Actions/conditions:
//        1429_6: sets Zone_NOPE to 1.
void Frames::event_func_3616()
{
    // event 1429_6 : sets Zone_NOPE to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1429_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(785, str_safeisnot_1965)) == (1))) goto event_1429_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(858, str_zones_safe2topx_2038)))) goto event_1429_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(859, str_zones_safe2topy_2039)))) goto event_1429_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(860, str_zones_safe2bottomx_2040)))) goto event_1429_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(861, str_zones_safe2bottomy_2041)))) goto event_1429_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(152, str_zone_nope_725, 1);
    }
    event_1429_6_end: ;
}
// Function purpose: generated callback event_func_3617 processes event block(s) 1430_6. Actions/conditions:
//        1430_6: sets Zone_NOPE to 1.
void Frames::event_func_3617()
{
    // event 1430_6 : sets Zone_NOPE to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1430_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(785, str_safeisnot_1965)) == (1))) goto event_1430_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(862, str_zones_safe3topx_2042)))) goto event_1430_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(863, str_zones_safe3topy_2043)))) goto event_1430_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(864, str_zones_safe3bottomx_2044)))) goto event_1430_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(865, str_zones_safe3bottomy_2045)))) goto event_1430_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(152, str_zone_nope_725, 1);
    }
    event_1430_6_end: ;
}
// Function purpose: generated callback event_func_3618 processes event block(s) 1431_6. Actions/conditions:
//        1431_6: sets Zone_Deliveries to 1.
void Frames::event_func_3618()
{
    // event 1431_6 : sets Zone_Deliveries to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1431_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1431_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(866, str_zones_deliveriestopx_2046)))) goto event_1431_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(867, str_zones_deliveriestopy_2047)))) goto event_1431_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(868, str_zones_deliveriesbottomx_2048)))) goto event_1431_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(869, str_zones_deliveriesbottomy_2049)))) goto event_1431_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(784, str_zone_deliveries_1964, 1);
    }
    event_1431_6_end: ;
}
// Function purpose: generated callback event_func_3619 processes event block(s) 1432_6. Actions/conditions:
//        1432_6: sets Zone_NOPE to 1.
void Frames::event_func_3619()
{
    // event 1432_6 : sets Zone_NOPE to 1
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1432_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1432_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(866, str_zones_deliveriestopx_2046)))) goto event_1432_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(867, str_zones_deliveriestopy_2047)))) goto event_1432_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(868, str_zones_deliveriesbottomx_2048)))) goto event_1432_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(869, str_zones_deliveriesbottomy_2049)))) goto event_1432_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(152, str_zone_nope_725, 1);
    }
    event_1432_6_end: ;
}
// Function purpose: generated callback event_func_3620 processes event block(s) 1433_6. Actions/conditions:
//        1433_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_3620()
{
    // event 1433_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_zones_1)) goto event_1433_6_end;
            group_code_zones_1 = false;
    
    }
    event_1433_6_end: ;
}
// Function purpose: generated callback event_func_3621 processes event block(s) 1434_6. Actions/conditions:
//        1434_6: sets OutsideWalls to 0.
void Frames::event_func_3621()
{
    // event 1434_6 : sets OutsideWalls to 0
    {
        if (!(group_code_1)) goto event_1434_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(24, str_outsidewalls_486)) != (0))) goto event_1434_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 0);
    }
    event_1434_6_end: ;
}
// Function purpose: generated callback event_func_3622 processes event block(s) 1435_6. Actions/conditions:
//        1435_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_3622()
{
    // event 1435_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1)) goto event_1435_6_end;
        every_1435_6 += manager.dt;
        if (every_1435_6 < 1.0) goto event_1435_6_end;
        every_1435_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1435_6_end;
        {
            loop_check_oob_running = true;
            int times = int(1);
            loop_check_oob_index = 0;
            while (loop_check_oob_index < times) {
                loop_check_oob_6();
                if (!loop_check_oob_running) break;
                loop_check_oob_index++;
            }
        }
    }
    event_1435_6_end: ;
}
// Function purpose: generated callback event_func_3623 processes event block(s) 1439_6. Actions/conditions:
//        1439_6: checks scene is active; the event-specific game state condition is met; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_3623()
{
    // event 1439_6 : checks scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1439_6_end;
        if (!((global_values->get(18)) == (0))) goto event_1439_6_end;
        if (!group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1) {
            group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1 = true;
        }
    }
    event_1439_6_end: ;
}
// Function purpose: generated callback event_func_3624 processes event block(s) 1440_6. Actions/conditions:
//        1440_6: checks scene is active; the event-specific game state condition is met; game state TOL; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_3624()
{
    // event 1440_6 : checks scene is active; the event-specific game state condition is met; game state TOL; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1440_6_end;
        if (!((global_values->get(18)) == (1))) goto event_1440_6_end;
        if (!((global_strings->get(0)) != (str_tol_134))) goto event_1440_6_end;
        if (!group_code_out_of_bounds_beyond_walls_2_bonus_maps_2_1) {
            group_code_out_of_bounds_beyond_walls_2_bonus_maps_2_1 = true;
        }
    }
    event_1440_6_end: ;
}
// Function purpose: generated callback event_func_3625 processes event block(s) 1441_6. Actions/conditions:
//        1441_6: checks scene is active; the event-specific game state condition is met; game state TOL; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_3625()
{
    // event 1441_6 : checks scene is active; the event-specific game state condition is met; game state TOL; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1441_6_end;
        if (!((global_values->get(18)) == (1))) goto event_1441_6_end;
        if (!((global_strings->get(0)) == (str_tol_134))) goto event_1441_6_end;
        if (!group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1) {
            group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1 = true;
        }
    }
    event_1441_6_end: ;
}
// Function purpose: generated callback event_func_3626 processes event block(s) 1442_6. Actions/conditions:
//        1442_6: checks scene is active; the event-specific game state condition is met; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_3626()
{
    // event 1442_6 : checks scene is active; the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1442_6_end;
        if (!((global_values->get(18)) == (2))) goto event_1442_6_end;
        if (!group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1) {
            group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1 = true;
        }
    }
    event_1442_6_end: ;
}
// Function purpose: generated callback event_func_3627 processes event block(s) 1456_6. Actions/conditions:
//        1456_6: hides a game layer.
void Frames::event_func_3627()
{
    // event 1456_6 : hides a game layer
    {
        if (!(group_code_1)) goto event_1456_6_end;
        if (!(layers[1-1].visible)) goto event_1456_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1456_6_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(1-1);
    }
    event_1456_6_end: ;
}
// Function purpose: generated callback event_func_3628 processes event block(s) 1457_6. Actions/conditions:
//        1457_6: hides a game layer.
void Frames::event_func_3628()
{
    // event 1457_6 : hides a game layer
    {
        if (!(group_code_1)) goto event_1457_6_end;
        if (!(layers[5-1].visible)) goto event_1457_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1457_6_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(5-1);
    }
    event_1457_6_end: ;
}
// Function purpose: generated callback event_func_3629 processes event block(s) 1458_6. Actions/conditions:
//        1458_6: creates a textbuddies 393 object.
void Frames::event_func_3629()
{
    // event 1458_6 : creates a textbuddies 393 object
    {
        if (!(group_code_1)) goto event_1458_6_end;
        if (!((buddiesText_instances.size()) == (0))) goto event_1458_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(618, str_buddies_39)) > (0))) goto event_1458_6_end;
        FrameObject * single_instance_1458_6_0; single_instance_1458_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((TextBlitter*)get_instance(fatigueText_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buddiesText(parent->x + 0, parent->y + 12), parent->layer);
                if (single_instance_1458_6_0 == NULL)
                    single_instance_1458_6_0 = new_obj;
            }
        }
    }
    event_1458_6_end: ;
}
// Function purpose: generated callback event_func_3630 processes event block(s) 1459_6. Actions/conditions:
//        1459_6: removes the selected object.
void Frames::event_func_3630()
{
    // event 1459_6 : removes the selected object
    {
        if (!(group_code_1)) goto event_1459_6_end;
        if (!((buddiesText_instances.size()) > (0))) goto event_1459_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(618, str_buddies_39)) == (0))) goto event_1459_6_end;
        buddiesText_instances.clear_selection();
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->destroy();
        }
    }
    event_1459_6_end: ;
}
// Function purpose: generated callback event_func_3631 processes event block(s) 1460_6. Actions/conditions:
//        1460_6: sets the displayed text; sets the displayed text; sets the displayed text; plus 5 more actions.
void Frames::event_func_3631()
{
    // event 1460_6 : sets the displayed text; sets the displayed text; sets the displayed text; plus 5 more actions
    {
        if (!(group_code_1)) goto event_1460_6_end;
        every_1460_6 += manager.dt;
        if (every_1460_6 < 0.25) goto event_1460_6_end;
        every_1460_6 -= 0.25;
        ((TextBlitter*)get_instance(cashText_instances))->set_text(str__1132+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)));
        ((TextBlitter*)get_instance(healthText_instances))->set_text(str__859+number_to_string(get_max(0, get_floor(((Active*)get_instance(playerBase_instances))->alterables->values.get(7)))));
        ((TextBlitter*)get_instance(heatText_instances))->set_text(str__859+number_to_string(get_floor(((AssociateArray*)get_instance(gameVariables_instances))->get_value(32, str_heat_495)))+str__2050);
        ((TextBlitter*)get_instance(fatigueText_instances))->set_text(str__859+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(358, str_fatigue_36))+str__2050);
        buddiesText_instances.clear_selection();
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_text(str_x_2051+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(618, str_buddies_39)));
        }
    }
    event_1460_6_end: ;
}
// Function purpose: generated callback event_func_3632 processes event block(s) 1461_6. Actions/conditions:
//        1461_6: sets the selected object's visibility to false.
void Frames::event_func_3632()
{
    // event 1461_6 : sets the selected object's visibility to false
    {
        if (!(group_code_1)) goto event_1461_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1461_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) != (2))) goto event_1461_6_end;
        ((Active*)get_instance(destarrow_283_instances))->set_visible(false);
    }
    event_1461_6_end: ;
}
// Function purpose: generated callback event_func_3633 processes event block(s) 1462_6. Actions/conditions:
//        1462_6: sets the object position in the world; sets the selected object's angle to
//        get_angle(destarrow_283->get_x(), destarrow_283->get_y(), active3_284->get_x(), active3_284->get_y()), 1.
void Frames::event_func_3633()
{
    // event 1462_6 : sets the object position in the world; sets the selected object's angle to get_angle(destarrow_283->get_x(), destarrow_283->get_y(), active3_284->get_x(), active3_284->get_y()), 1
    {
        if (!(group_code_1)) goto event_1462_6_end;
        if (!(((Active*)get_instance(destarrow_283_instances))->flags & VISIBLE)) goto event_1462_6_end;
        {
            FrameObject * parent = ((Active*)get_qualifier(qualifier_2));
            if (parent == NULL) goto pos_end_1462_6_0;
            ((Active*)get_instance(destarrow_283_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1462_6_0: ;
        }
        ((Active*)get_instance(destarrow_283_instances))->set_angle(get_angle(((Active*)get_instance(destarrow_283_instances))->get_x(), ((Active*)get_instance(destarrow_283_instances))->get_y(), ((Active*)get_instance(active3_284_instances))->get_x(), ((Active*)get_instance(active3_284_instances))->get_y()), 1);
    }
    event_1462_6_end: ;
}
// Function purpose: generated callback event_func_3634 processes event block(s) 1463_6. Actions/conditions:
//        1463_6: sets gossip to 0; sets the selected object's horizontal position to get_mouse_x(); sets the selected
//        object's vertical position to get_mouse_y(); plus 10 more actions.
void Frames::event_func_3634()
{
    // event 1463_6 : sets gossip to 0; sets the selected object's horizontal position to get_mouse_x(); sets the selected object's vertical position to get_mouse_y(); plus 10 more actions
    {
        if (!(group_code_1)) goto event_1463_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(870, str_gossip_2052, 0);
        ((Active*)get_instance(mouse_9_instances))->set_x(get_mouse_x());
        ((Active*)get_instance(mouse_9_instances))->set_y(get_mouse_y());
        ((Active*)get_instance(mouse_9_instances))->set_direction(0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(871, str_showcursor_2053, 0);
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_1463_6_0;
            ((Active*)get_instance(cursor_178_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1463_6_0: ;
        }
        ((Active*)get_instance(cursor_178_instances))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        ((Active*)get_instance(cursor_178_instances))->force_animation(0);
        VITA_FOLLOW(((Active*)get_instance(camera_202_instances)), true, (9*((Active*)get_instance(camera_202_instances))->get_x()+((Active*)get_qualifier(qualifier_2, default_active_instance))->get_x()+10)/MathHelper()/10.0, 0.9);
        VITA_FOLLOW(((Active*)get_instance(camera_202_instances)), false, (9*((Active*)get_instance(camera_202_instances))->get_y()+((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()+10)/MathHelper()/10.0, 0.9);
    }
    event_1463_6_end: ;
}
// Function purpose: generated callback event_func_3635 processes event block(s) 1464_6. Actions/conditions:
//        1464_6: reads an object position for this event; reads an object position for this event.
void Frames::event_func_3635()
{
    // event 1464_6 : reads an object position for this event; reads an object position for this event
    {
        if (!(group_code_1)) goto event_1464_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1464_6_end;
        set_display_center(((Active*)get_instance(camera_202_instances))->get_x()+((Active*)get_instance(camera_202_instances))->alterables->values.get(1), -1);
        set_display_center(-1, (((Active*)get_instance(camera_202_instances))->get_y()+8)+((Active*)get_instance(camera_202_instances))->alterables->values.get(2));
    }
    event_1464_6_end: ;
}
// Function purpose: generated callback event_func_3636 processes event block(s) 1465_6. Actions/conditions:
//        1465_6: sets the selected object's horizontal position to (get_mouse_x()/MathHelper()/16)*16; sets the
//        selected object's vertical position to (get_mouse_y()/MathHelper()/16)*16; sets the object's animation to 3.
void Frames::event_func_3636()
{
    // event 1465_6 : sets the selected object's horizontal position to (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to (get_mouse_y()/MathHelper()/16)*16; sets the object's animation to 3
    {
        if (!(group_code_1)) goto event_1465_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) > (0))) goto event_1465_6_end;
        ((Active*)get_instance(cursor_178_instances))->set_x((get_mouse_x()/MathHelper()/16)*16);
        ((Active*)get_instance(cursor_178_instances))->set_y((get_mouse_y()/MathHelper()/16)*16);
        ((Active*)get_instance(cursor_178_instances))->force_animation(3);
    }
    event_1465_6_end: ;
}
// Function purpose: generated callback event_func_3637 processes event block(s) 1466_6. Actions/conditions:
//        1466_6: sets the selected object's horizontal position to (get_mouse_x()/MathHelper()/16)*16; sets the
//        selected object's vertical position to (get_mouse_y()/MathHelper()/16)*16; sets the object's animation to 3.
void Frames::event_func_3637()
{
    // event 1466_6 : sets the selected object's horizontal position to (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to (get_mouse_y()/MathHelper()/16)*16; sets the object's animation to 3
    {
        if (!(group_code_1)) goto event_1466_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(49, str_cursor_517)) == (str_use_518))) goto event_1466_6_end;
        ((Active*)get_instance(cursor_178_instances))->set_x((get_mouse_x()/MathHelper()/16)*16);
        ((Active*)get_instance(cursor_178_instances))->set_y((get_mouse_y()/MathHelper()/16)*16);
        ((Active*)get_instance(cursor_178_instances))->force_animation(3);
    }
    event_1466_6_end: ;
}
// Function purpose: generated callback event_func_3638 processes event block(s) 1467_6. Actions/conditions:
//        1467_6: sets the object's animation to 0.
void Frames::event_func_3638()
{
    // event 1467_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_1467_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(49, str_cursor_517)) == (str_normal_1934))) goto event_1467_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(0)) goto event_1467_6_end;
        ((Active*)get_instance(mouse_9_instances))->force_animation(0);
    }
    event_1467_6_end: ;
}
// Function purpose: generated callback event_func_3639 processes event block(s) 1468_6. Actions/conditions:
//        1468_6: sets the object's animation to 6.
void Frames::event_func_3639()
{
    // event 1468_6 : sets the object's animation to 6
    {
        if (!(group_code_1)) goto event_1468_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(49, str_cursor_517)) == (str_attack_1933))) goto event_1468_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(6)) goto event_1468_6_end;
        ((Active*)get_instance(mouse_9_instances))->force_animation(6);
    }
    event_1468_6_end: ;
}
// Function purpose: generated callback event_func_3640 processes event block(s) 1469_6. Actions/conditions:
//        1469_6: sets the object's animation to 13.
void Frames::event_func_3640()
{
    // event 1469_6 : sets the object's animation to 13
    {
        if (!(group_code_1)) goto event_1469_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(49, str_cursor_517)) == (str_use_518))) goto event_1469_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1469_6_end;
        ((Active*)get_instance(mouse_9_instances))->force_animation(13);
    }
    event_1469_6_end: ;
}
// Function purpose: generated callback event_func_3641 processes event block(s) 1470_6. Actions/conditions:
//        1470_6: sets the object's animation to 0.
void Frames::event_func_3641()
{
    // event 1470_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_1470_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(14))) goto event_1470_6_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto event_1470_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_1470_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1470_6_end;
        ((Active*)get_instance(mouse_9_instances))->force_animation(0);
    }
    event_1470_6_end: ;
}
// Function purpose: generated callback event_func_3642 processes event block(s) 1471_6. Actions/conditions:
//        1471_6: sets the object's animation to 0.
void Frames::event_func_3642()
{
    // event 1471_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_1471_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(12))) goto event_1471_6_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto event_1471_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_1471_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1471_6_end;
        ((Active*)get_instance(mouse_9_instances))->force_animation(0);
    }
    event_1471_6_end: ;
}
// Function purpose: generated callback event_func_3643 processes event block(s) 1472_6. Actions/conditions:
//        1472_6: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 8 more actions.
void Frames::event_func_3643()
{
    // event 1472_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 8 more actions
    bool or_result_1472_6 = false;
    bool or_temp_result_1472_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_1472_6_0_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto or_event_1472_6_0_end;
        if (!((((Active*)get_instance(playerBase_instances, default_active_instance))->layer->index+1) == (2))) goto or_event_1472_6_0_end;
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(13)) { it.deselect(); continue; }
        }
        if (!mouse_9_instances.has_selection()) goto or_event_1472_6_0_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto or_event_1472_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_1472_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(151, str_carrying_724)) == (0))) goto or_event_1472_6_0_end;
        or_result_1472_6 = true;
        or_temp_result_1472_6_0 = true;
    }
    or_event_1472_6_0_end: ;
    qualifier_18.clear_saved_selection();
    mouse_9_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    playerBase_instances.clear_saved_selection();
    ventCover_instances.clear_saved_selection();
    if (or_temp_result_1472_6_0) {
        qualifier_18.save_selection();
        mouse_9_instances.save_selection();
        dialogPanel_instances.save_selection();
        playerBase_instances.save_selection();
        ventCover_instances.save_selection();
    }
    // event 1472_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 8 more actions
    bool or_temp_result_1472_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_1472_6_1_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto or_event_1472_6_1_end;
        if (!((((Active*)get_single(ladders_336_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances, default_active_instance))->layer->index+1))) goto or_event_1472_6_1_end;
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(12)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(13)) { it.deselect(); continue; }
        }
        if (!mouse_9_instances.has_selection()) goto or_event_1472_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_1472_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(151, str_carrying_724)) == (0))) goto or_event_1472_6_1_end;
        or_result_1472_6 = true;
        or_temp_result_1472_6_1 = true;
        or_event_1472_6_1_end: ;
        ladders_336_instances.clear_saved_selection();
        if (or_temp_result_1472_6_1) {
            mouse_9_instances.save_selection();
            ladders_336_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_1472_6) goto or_final_or_event_1472_6_1_end;
        ladders_336_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        ventCover_instances.empty_selection();
        qualifier_18.empty_selection();
        playerBase_instances.empty_selection();
        mouse_9_instances.empty_selection();
        if (or_temp_result_1472_6_0) {
            playerBase_instances.restore_selection();
        }
        if (or_temp_result_1472_6_1) {
            ladders_336_instances.restore_selection();
        }
        if (or_temp_result_1472_6_0 || or_temp_result_1472_6_1) {
            dialogPanel_instances.restore_selection();
        }
        if (or_temp_result_1472_6_0) {
            ventCover_instances.restore_selection();
        }
        if (or_temp_result_1472_6_0) {
            qualifier_18.restore_selection();
        }
        if (or_temp_result_1472_6_0 || or_temp_result_1472_6_1) {
            mouse_9_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(872, str_lastcursor_2054, ((Active*)get_single(mouse_9_instances, it.current_index, default_active_instance))->current_animation);
        }
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
    }
    or_final_or_event_1472_6_1_end: ;
}
// Function purpose: generated callback event_func_3644 processes event block(s) 1473_6. Actions/conditions:
//        1473_6: saves the current object selection; saves the current object selection; saves the current object
//        selection; plus 6 more actions.
void Frames::event_func_3644()
{
    // event 1473_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_result_1473_6 = false;
    bool or_temp_result_1473_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_1473_6_0_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(1))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto or_event_1473_6_0_end;
        if (!((((Active*)get_instance(playerBase_instances, default_active_instance))->layer->index+1) == (4))) goto or_event_1473_6_0_end;
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(14)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(13)) { it.deselect(); continue; }
        }
        if (!mouse_9_instances.has_selection()) goto or_event_1473_6_0_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_1473_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(151, str_carrying_724)) == (0))) goto or_event_1473_6_0_end;
        or_result_1473_6 = true;
        or_temp_result_1473_6_0 = true;
    }
    or_event_1473_6_0_end: ;
    mouse_9_instances.clear_saved_selection();
    ventCover_instances.clear_saved_selection();
    dialogPanel_instances.clear_saved_selection();
    if (or_temp_result_1473_6_0) {
        mouse_9_instances.save_selection();
        ventCover_instances.save_selection();
        dialogPanel_instances.save_selection();
    }
    // event 1473_6 : saves the current object selection; saves the current object selection; saves the current object selection; plus 6 more actions
    bool or_temp_result_1473_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_1473_6_1_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto or_event_1473_6_1_end;
        if (!((((Active*)get_single(ladders_336_instances, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances, default_active_instance))->layer->index+1))) goto or_event_1473_6_1_end;
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(14)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(13)) { it.deselect(); continue; }
        }
        if (!mouse_9_instances.has_selection()) goto or_event_1473_6_1_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto or_event_1473_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(151, str_carrying_724)) == (0))) goto or_event_1473_6_1_end;
        or_result_1473_6 = true;
        or_temp_result_1473_6_1 = true;
        or_event_1473_6_1_end: ;
        ladders_336_instances.clear_saved_selection();
        if (or_temp_result_1473_6_1) {
            mouse_9_instances.save_selection();
            ladders_336_instances.save_selection();
            dialogPanel_instances.save_selection();
        }
        if (!or_result_1473_6) goto or_final_or_event_1473_6_1_end;
        mouse_9_instances.empty_selection();
        ventCover_instances.empty_selection();
        dialogPanel_instances.empty_selection();
        ladders_336_instances.empty_selection();
        if (or_temp_result_1473_6_0 || or_temp_result_1473_6_1) {
            mouse_9_instances.restore_selection();
        }
        if (or_temp_result_1473_6_1) {
            ladders_336_instances.restore_selection();
        }
        if (or_temp_result_1473_6_0) {
            ventCover_instances.restore_selection();
        }
        if (or_temp_result_1473_6_0 || or_temp_result_1473_6_1) {
            dialogPanel_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(872, str_lastcursor_2054, ((Active*)get_single(mouse_9_instances, it.current_index, default_active_instance))->current_animation);
        }
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
    }
    or_final_or_event_1473_6_1_end: ;
}
// Function purpose: generated callback event_func_3645 processes event block(s) 1474_6. Actions/conditions:
//        1474_6: sets LastCursor to mouse_9->current_animation; sets the object's animation to 14.
void Frames::event_func_3645()
{
    // event 1474_6 : sets LastCursor to mouse_9->current_animation; sets the object's animation to 14
    {
        if (!(group_code_1)) goto event_1474_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1474_6_end;
        if (!check_not_overlap(dighole_207_instances, desks_305_instances)) goto event_1474_6_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_17)) goto event_1474_6_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_7)) goto event_1474_6_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_19)) goto event_1474_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1474_6_end;
        if (!((((Active*)get_single(dighole_207_instances, default_active_instance))->layer->index+1) == (2))) goto event_1474_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1474_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_18)) goto event_1474_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(14)) goto event_1474_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1474_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1474_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_1474_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(872, str_lastcursor_2054, ((Active*)get_instance(mouse_9_instances))->current_animation);
        ((Active*)get_instance(mouse_9_instances))->force_animation(14);
    }
    event_1474_6_end: ;
}
// Function purpose: generated callback event_func_3646 processes event block(s) 1475_6. Actions/conditions:
//        1475_6: sets LastCursor to mouse_9->current_animation; sets the object's animation to 12.
void Frames::event_func_3646()
{
    // event 1475_6 : sets LastCursor to mouse_9->current_animation; sets the object's animation to 12
    {
        if (!(group_code_1)) goto event_1475_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_1475_6_end;
        if (!((((Active*)get_single(dighole_207_instances, default_active_instance))->layer->index+1) == (1))) goto event_1475_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_1475_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(12)) goto event_1475_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_1475_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1475_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(872, str_lastcursor_2054, ((Active*)get_instance(mouse_9_instances))->current_animation);
        ((Active*)get_instance(mouse_9_instances))->force_animation(12);
    }
    event_1475_6_end: ;
}
// Function purpose: generated callback event_func_3647 processes event block(s) 1476_6. Actions/conditions:
//        1476_6: changes a stored game value.
void Frames::event_func_3647()
{
    VITA_LEGACY_EVENT();
    // event 1476_6 : changes a stored game value
    {
        if (!(group_code_1)) goto event_1476_6_end;
        if (!((((Active*)get_instance(sidePanel_instances))->alterables->values.get(0)) > (0))) goto event_1476_6_end;
        ((Active*)get_instance(sidePanel_instances))->alterables->values.sub(0, 1);
    }
    event_1476_6_end: ;
}
// Function purpose: generated callback event_func_3648 processes event block(s) 1477_6. Actions/conditions:
//        1477_6: sets HourStr to text for gameVariables->get_value(25, T_hour); sets MinStr to text for
//        gameVariables->get_value(522, T_min).
void Frames::event_func_3648()
{
    // event 1477_6 : sets HourStr to text for gameVariables->get_value(25, T_hour); sets MinStr to text for gameVariables->get_value(522, T_min)
    {
        if (!(group_code_1)) goto event_1477_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(873, str_hourstr_2055, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(874, str_minstr_2056, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)));
    }
    event_1477_6_end: ;
}
// Function purpose: generated callback event_func_3649 processes event block(s) 1478_6. Actions/conditions:
//        1478_6: sets HourStr to 0+gameVariables->get_string(873, HourStr).
void Frames::event_func_3649()
{
    // event 1478_6 : sets HourStr to 0+gameVariables->get_string(873, HourStr)
    {
        if (!(group_code_1)) goto event_1478_6_end;
        if (!((string_size(((AssociateArray*)get_instance(gameVariables_instances))->get_string(873, str_hourstr_2055))) == (1))) goto event_1478_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(873, str_hourstr_2055, str_0_615+((AssociateArray*)get_instance(gameVariables_instances))->get_string(873, str_hourstr_2055));
    }
    event_1478_6_end: ;
}
// Function purpose: generated callback event_func_3650 processes event block(s) 1479_6. Actions/conditions:
//        1479_6: sets MinStr to 0+gameVariables->get_string(874, MinStr).
void Frames::event_func_3650()
{
    // event 1479_6 : sets MinStr to 0+gameVariables->get_string(874, MinStr)
    {
        if (!(group_code_1)) goto event_1479_6_end;
        if (!((string_size(((AssociateArray*)get_instance(gameVariables_instances))->get_string(874, str_minstr_2056))) == (1))) goto event_1479_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(874, str_minstr_2056, str_0_615+((AssociateArray*)get_instance(gameVariables_instances))->get_string(874, str_minstr_2056));
    }
    event_1479_6_end: ;
}
// Function purpose: generated callback event_func_3651 processes event block(s) 1480_6. Actions/conditions:
//        1480_6: sets a game or interface text string.
void Frames::event_func_3651()
{
    // event 1480_6 : sets a game or interface text string
    {
        if (!(group_code_1)) goto event_1480_6_end;
        ((Text*)get_instance(lessonTimerText_instances))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(873, str_hourstr_2055)+str__1589+((AssociateArray*)get_instance(gameVariables_instances))->get_string(874, str_minstr_2056)+str__195+((AssociateArray*)get_instance(gameVariables_instances))->get_string(233, str_lesson_847)+str__2057+((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_14_197)+str__189+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902))+str__321);
    }
    event_1480_6_end: ;
}
// Function purpose: generated callback event_func_3652 processes event block(s) 1481_6. Actions/conditions:
//        1481_6: sets the selected object's horizontal position to sidePanel->get_x()+4; sets the object's animation
//        to 0.
void Frames::event_func_3652()
{
    VITA_LEGACY_EVENT();
    // event 1481_6 : sets the selected object's horizontal position to sidePanel->get_x()+4; sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_1481_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(329, str_lessonflash_1117)) == (1))) goto event_1481_6_end;
        ((Text*)get_instance(lessonTimerText_instances))->set_x(((Active*)get_instance(sidePanel_instances))->get_x()+4);
        ((Active*)get_instance(sidePanel_instances))->force_animation(0);
    }
    event_1481_6_end: ;
}
// Function purpose: generated callback event_func_3653 processes event block(s) 1482_6. Actions/conditions:
//        1482_6: updates a value on the target object.
void Frames::event_func_3653()
{
    // event 1482_6 : updates a value on the target object
    {
        if (!(group_code_1)) goto event_1482_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(329, str_lessonflash_1117)) == (0))) goto event_1482_6_end;
        ((Text*)get_instance(lessonTimerText_instances))->blend_color.set(Color(192, 192, 192));
    }
    event_1482_6_end: ;
}
// Function purpose: generated callback event_func_3654 processes event block(s) 1483_6. Actions/conditions:
//        1483_6: changes a stored game value; updates a value on the target object.
void Frames::event_func_3654()
{
    VITA_LEGACY_EVENT();
    // event 1483_6 : changes a stored game value; updates a value on the target object
    {
        if (!(group_code_1)) goto event_1483_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(329, str_lessonflash_1117)) > (0))) goto event_1483_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(329, str_lessonflash_1117, 1);
        ((Text*)get_instance(lessonTimerText_instances))->blend_color.set(Color(255, 255, 0));
    }
    event_1483_6_end: ;
}
// Function purpose: generated callback event_func_3655 processes event block(s) 1484_6. Actions/conditions:
//        1484_6: sets T_min to 0; increments T_hour by 1.
void Frames::event_func_3655()
{
    // event 1484_6 : sets T_min to 0; increments T_hour by 1
    {
        if (!(group_code_1)) goto event_1484_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) >= (60))) goto event_1484_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(522, str_t_min_1422, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(25, str_t_hour_488, 1);
    }
    event_1484_6_end: ;
}
// Function purpose: generated callback event_func_3656 processes event block(s) 1485_6. Actions/conditions:
//        1485_6: increments T_day by 1; sets T_hour to 0; sets T_min to 0.
void Frames::event_func_3656()
{
    // event 1485_6 : increments T_day by 1; sets T_hour to 0; sets T_min to 0
    {
        if (!(group_code_1)) goto event_1485_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (24))) goto event_1485_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(254, str_t_day_902, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(25, str_t_hour_488, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(522, str_t_min_1422, 0);
    }
    event_1485_6_end: ;
}
// Function purpose: generated callback event_func_3657 processes event block(s) 1486_6. Actions/conditions:
//        1486_6: sets the selected object's horizontal position to frame_left(); sets the selected object's vertical
//        position to frame_top(); sets the selected object's layer to playerBase->layer->index+1-1.
void Frames::event_func_3657()
{
    // event 1486_6 : sets the selected object's horizontal position to frame_left(); sets the selected object's vertical position to frame_top(); sets the selected object's layer to playerBase->layer->index+1-1
    {
        if (!(group_code_1)) goto event_1486_6_end;
        every_1486_6 += manager.dt;
        if (every_1486_6 < 0.5) goto event_1486_6_end;
        every_1486_6 -= 0.5;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1486_6_end;
        ((Active*)get_instance(scan_187_instances))->set_x(VITA_VIEW_LEFT(((Active*)get_instance(scan_187_instances)), frame_left()));
        ((Active*)get_instance(scan_187_instances))->set_y(VITA_VIEW_TOP(((Active*)get_instance(scan_187_instances)), frame_top()));
        ((Active*)get_instance(scan_187_instances))->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
        {
            loop_scan_running = true;
            int times = int(240);
            loop_scan_index = 0;
            while (loop_scan_index < times) {
                loop_scan_6();
                if (!loop_scan_running) break;
                loop_scan_index++;
            }
        }
    }
    event_1486_6_end: ;
}
// Function purpose: generated callback event_func_3658 processes event block(s) 1494_6. Actions/conditions:
//        1494_6: moves the selected object behind other objects.
void Frames::event_func_3658()
{
    // event 1494_6 : moves the selected object behind other objects
    {
        if (!(group_code_1)) goto event_1494_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1494_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1494_6_end: ;
}
// Function purpose: generated callback event_func_3659 processes event block(s) 1495_6. Actions/conditions:
//        1495_6: moves the selected object to the front.
void Frames::event_func_3659()
{
    // event 1495_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1495_6_end;
        ssreindeer_504_instances.clear_selection();
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!ssreindeer_504_instances.has_selection()) goto event_1495_6_end;
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1495_6_end: ;
}
// Function purpose: generated callback event_func_3660 processes event block(s) 1496_6. Actions/conditions:
//        1496_6: moves the selected object to the front.
void Frames::event_func_3660()
{
    // event 1496_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1496_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1496_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_1496_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1496_6_end: ;
}
// Function purpose: generated callback event_func_3661 processes event block(s) 1497_6. Actions/conditions:
//        1497_6: moves the selected object to the front.
void Frames::event_func_3661()
{
    // event 1497_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1497_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1497_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1497_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1497_6_end: ;
}
// Function purpose: generated callback event_func_3662 processes event block(s) 1498_6. Actions/conditions:
//        1498_6: moves the selected object to the front.
void Frames::event_func_3662()
{
    // event 1498_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1498_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1000))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1498_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25)))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_1498_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1498_6_end: ;
}
// Function purpose: generated callback event_func_3663 processes event block(s) 1499_6. Actions/conditions:
//        1499_6: moves the selected object behind other objects; moves the selected object to the front; moves the
//        selected object to the front; plus 6 more actions.
void Frames::event_func_3663()
{
    // event 1499_6 : moves the selected object behind other objects; moves the selected object to the front; moves the selected object to the front; plus 6 more actions
    {
        if (!(group_code_1)) goto event_1499_6_end;
        every_1499_6 += manager.dt;
        if (every_1499_6 < 0.25) goto event_1499_6_end;
        every_1499_6 -= 0.25;
        shower_183_instances.clear_selection();
        for (ObjectIterator it(shower_183_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        fx_185_instances.clear_selection();
        for (ObjectIterator it(fx_185_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        qualifier_7.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        metaldetector_231_instances.clear_selection();
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        // icache destruction
        truck_388_instances.clear_selection();
        licenseprints_329_instances.clear_selection();
        powergen_360_instances.clear_selection();
        containerdeliveries2_398_instances.clear_selection();
        containertailorout_395_instances.clear_selection();
        containerlaundrydirty_274_instances.clear_selection();
        licenseprints_729_instances.clear_selection();
        library2_316_instances.clear_selection();
        containerdeliveries2_757_instances.clear_selection();
        containertailorin_396_instances.clear_selection();
        containerkitchen_229_instances.clear_selection();
        kitchensink_236_instances.clear_selection();
        containertimber2_325_instances.clear_selection();
        phone_235_instances.clear_selection();
        interwebs_380_instances.clear_selection();
        containermail_399_instances.clear_selection();
        library_233_instances.clear_selection();
        containerdeliveries_756_instances.clear_selection();
        payphone_386_instances.clear_selection();
        interwebs_749_instances.clear_selection();
        containerbookchest_273_instances.clear_selection();
        containertimber_267_instances.clear_selection();
        metalshop_326_instances.clear_selection();
        containerlaundryclean_275_instances.clear_selection();
        containerdeliveries_397_instances.clear_selection();
        metalshop2_327_instances.clear_selection();
        for (QualifierIterator it(qualifier_4); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((TextBlitter*)get_instance(cashText_instances))->move_front();
        ((TextBlitter*)get_instance(healthText_instances))->move_front();
        ((TextBlitter*)get_instance(heatText_instances))->move_front();
        ((TextBlitter*)get_instance(fatigueText_instances))->move_front();
        buddiesText_instances.clear_selection();
        for (ObjectIterator it(buddiesText_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->move_front();
        }
        qualifier_9.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1499_6_end: ;
}
