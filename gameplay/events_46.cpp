#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_3664 processes event block(s) 1500_6. Actions/conditions:
//        1500_6: moves the selected object to the front.
void Frames::event_func_3664()
{
    // event 1500_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1500_6_end;
        playerBase_instances.clear_selection();
        hiding_379_instances.clear_selection();
        if (!check_overlap(playerBase_instances, hiding_379_instances)) goto event_1500_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1500_6_end;
        {
            qualifier_2.clear_selection();
            QualifierIterator other_it(qualifier_2);
            for (ObjectIterator it(hiding_379_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1500_6_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1500_6_0_end: ;
    }
    event_1500_6_end: ;
}
// Function purpose: generated callback event_func_3665 processes event block(s) 1501_6. Actions/conditions:
//        1501_6: moves the selected object to the front.
void Frames::event_func_3665()
{
    // event 1501_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1501_6_end;
        playerBase_instances.clear_selection();
        hiding_379_instances.clear_selection();
        if (!check_overlap(playerBase_instances, hiding_379_instances)) goto event_1501_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1501_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_1501_6_end;
        {
            QualifierIterator other_it(qualifier_16);
            for (ObjectIterator it(hiding_379_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1501_6_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1501_6_0_end: ;
    }
    event_1501_6_end: ;
}
// Function purpose: generated callback event_func_3666 processes event block(s) 1502_6. Actions/conditions:
//        1502_6: moves the selected object to the front; moves the selected object to the front; moves the selected
//        object to the front.
void Frames::event_func_3666()
{
    // event 1502_6 : moves the selected object to the front; moves the selected object to the front; moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1502_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1502_6_end;
        ((Active*)get_instance(dialogPanel_instances))->move_front();
        ((SystemBox*)get_instance(wardennote_470_instances, default_systembox_instance))->move_front(((Active*)get_instance(dialogPanel_instances)));
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        popupClouds_instances.clear_selection();
        for (ObjectIterator it(popupClouds_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1502_6_end: ;
}
// Function purpose: generated callback event_func_3667 processes event block(s) 1503_6. Actions/conditions:
//        1503_6: moves the selected object to the front.
void Frames::event_func_3667()
{
    // event 1503_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1503_6_end;
        if (!((activityPanel_instances.size()) > (0))) goto event_1503_6_end;
        activityPanel_instances.clear_selection();
        for (ObjectIterator it(activityPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1503_6_end: ;
}
// Function purpose: generated callback event_func_3668 processes event block(s) 1504_6. Actions/conditions:
//        1504_6: moves the selected object to the front; moves the selected object to the front; moves the selected
//        object behind other objects.
void Frames::event_func_3668()
{
    // event 1504_6 : moves the selected object to the front; moves the selected object to the front; moves the selected object behind other objects
    {
        if (!(group_code_1)) goto event_1504_6_end;
        activityProgress_instances.clear_selection();
        for (ObjectIterator it(activityProgress_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        {
            qualifier_4.clear_selection();
            QualifierIterator other_it(qualifier_4);
            for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1504_6_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1504_6_0_end: ;
        {
            QualifierIterator other_it(qualifier_4);
            for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1504_6_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1504_6_1_end: ;
        water_303_instances.clear_selection();
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        givecash_261_instances.clear_selection();
        for (ObjectIterator it(givecash_261_instances); !it.end(); ++it) {
            ((Text*)*it)->move_front();
        }
    }
    event_1504_6_end: ;
}
// Function purpose: generated callback event_func_3669 processes event block(s) 1505_6. Actions/conditions:
//        1505_6: moves the selected object to the front.
void Frames::event_func_3669()
{
    // event 1505_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1505_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1505_6_end: ;
}
// Function purpose: generated callback event_func_3670 processes event block(s) 1506_6. Actions/conditions:
//        1506_6: moves the selected object to the front.
void Frames::event_func_3670()
{
    // event 1506_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1506_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1506_6_end: ;
}
// Function purpose: generated callback event_func_3671 processes event block(s) 1507_6. Actions/conditions:
//        1507_6: moves the selected object to the front.
void Frames::event_func_3671()
{
    // event 1507_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1507_6_end;
        if (!((spotlightsroof_213_instances.size()) > (0))) goto event_1507_6_end;
        spotlightsroof_213_instances.clear_selection();
        for (ObjectIterator it(spotlightsroof_213_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1507_6_end: ;
}
// Function purpose: generated callback event_func_3672 processes event block(s) 1508_6. Actions/conditions:
//        1508_6: moves the selected object to the front.
void Frames::event_func_3672()
{
    // event 1508_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1508_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(10))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_1508_6_end;
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->move_front();
        }
    }
    event_1508_6_end: ;
}
// Function purpose: generated callback event_func_3673 processes event block(s) 1509_6. Actions/conditions:
//        1509_6: moves the selected object behind other objects.
void Frames::event_func_3673()
{
    // event 1509_6 : moves the selected object behind other objects
    {
        if (!(group_code_1)) goto event_1509_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(10))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_1509_6_end;
        ((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->move_back(((Active*)get_instance(sidePanel_instances)));
    }
    event_1509_6_end: ;
}
// Function purpose: generated callback event_func_3674 processes event block(s) 1510_6. Actions/conditions:
//        1510_6: moves the selected object behind other objects.
void Frames::event_func_3674()
{
    // event 1510_6 : moves the selected object behind other objects
    {
        if (!(group_code_1)) goto event_1510_6_end;
        target_177_instances.clear_selection();
        sidePanel_instances.clear_selection();
        if (!check_overlap(target_177_instances, sidePanel_instances)) goto event_1510_6_end;
        ((Active*)get_instance(target_177_instances))->move_back(((Active*)get_instance(sidePanel_instances)));
    }
    event_1510_6_end: ;
}
// Function purpose: generated callback event_func_3675 processes event block(s) 1511_6. Actions/conditions:
//        1511_6: changes a stored game value; sets the selected object's numeric value to
//        0-camera_202->alterables->values.get(0)+randrange_event(camera_202->alterables->values.get(0)*2); sets the
//        selected object's numeric value to
//        0-camera_202->alterables->values.get(0)+randrange_event(camera_202->alterables->values.get(0)*2).
void Frames::event_func_3675()
{
    VITA_LEGACY_EVENT();
    // event 1511_6 : changes a stored game value; sets the selected object's numeric value to 0-camera_202->alterables->values.get(0)+randrange_event(camera_202->alterables->values.get(0)*2); sets the selected object's numeric value to 0-camera_202->alterables->values.get(0)+randrange_event(camera_202->alterables->values.get(0)*2)
    {
        if (!(group_code_1)) goto event_1511_6_end;
        if (!((((Active*)get_instance(camera_202_instances))->alterables->values.get(0)) > (0))) goto event_1511_6_end;
        ((Active*)get_instance(camera_202_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(camera_202_instances))->alterables->values.set(1, 0-((Active*)get_instance(camera_202_instances))->alterables->values.get(0)+randrange_event(((Active*)get_instance(camera_202_instances))->alterables->values.get(0)*2));
        ((Active*)get_instance(camera_202_instances))->alterables->values.set(2, 0-((Active*)get_instance(camera_202_instances))->alterables->values.get(0)+randrange_event(((Active*)get_instance(camera_202_instances))->alterables->values.get(0)*2));
    }
    event_1511_6_end: ;
}
// Function purpose: generated callback event_func_3676 processes event block(s) 1512_6. Actions/conditions:
//        1512_6: sets the selected object's direction to 0.
void Frames::event_func_3676()
{
    // event 1512_6 : sets the selected object's direction to 0
    {
        if (!(group_code_1)) goto event_1512_6_end;
        if (!((dialogButton_instances.size()) > (0))) goto event_1512_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1512_6_end: ;
}
// Function purpose: generated callback event_func_3677 processes event block(s) 1513_6. Actions/conditions:
//        1513_6: sets the selected object's direction to 16.
void Frames::event_func_3677()
{
    // event 1513_6 : sets the selected object's direction to 16
    {
        if (!(group_code_1)) goto event_1513_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_1513_6_end;
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1513_6_end: ;
}
// Function purpose: generated callback event_func_3678 processes event block(s) 1514_6. Actions/conditions:
//        1514_6: stops the current animation.
void Frames::event_func_3678()
{
    // event 1514_6 : stops the current animation
    {
        if (!(group_code_1)) goto event_1514_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_1514_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1514_6_end: ;
}
// Function purpose: generated callback event_func_3679 processes event block(s) 1515_6. Actions/conditions:
//        1515_6: updates game state with selected object->start_animation().
void Frames::event_func_3679()
{
    // event 1515_6 : updates game state with selected object->start_animation()
    {
        if (!(group_code_1)) goto event_1515_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1515_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        serviceNpc_instances.clear_selection();
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    event_1515_6_end: ;
}
// Function purpose: generated callback event_func_3680 processes event block(s) 1516_6. Actions/conditions:
//        1516_6: sets MinTickover to 0.
void Frames::event_func_3680()
{
    // event 1516_6 : sets MinTickover to 0
    {
        if (!(group_code_1)) goto event_1516_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) > (0))) goto event_1516_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(875, str_mintickover_2058)) != (0))) goto event_1516_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(875, str_mintickover_2058, 0);
    }
    event_1516_6_end: ;
}
// Function purpose: generated callback event_func_3681 processes event block(s) 1517_6. Actions/conditions:
//        1517_6: sets refreshed_desks to 0; sets MinTickover to 1.
void Frames::event_func_3681()
{
    // event 1517_6 : sets refreshed_desks to 0; sets MinTickover to 1
    {
        if (!(group_code_1)) goto event_1517_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(522, str_t_min_1422)) == (0))) goto event_1517_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(875, str_mintickover_2058)) == (0))) goto event_1517_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(876, str_refreshed_desks_2059, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(875, str_mintickover_2058, 1);
        if (!group_code_schedules_hour_tickover_1) {
            group_code_schedules_hour_tickover_1 = true;
            group_check_group_code_schedules_hour_tickover_1_11 = true;
            group_check_group_code_schedules_hour_tickover_1_10 = true;
            group_check_group_code_schedules_hour_tickover_1_13 = true;
            group_check_group_code_schedules_hour_tickover_1_12 = true;
            group_check_group_code_schedules_hour_tickover_1_1 = true;
            group_check_group_code_schedules_hour_tickover_1_0 = true;
            group_check_group_code_schedules_hour_tickover_1_3 = true;
            group_check_group_code_schedules_hour_tickover_1_2 = true;
            group_check_group_code_schedules_hour_tickover_1_5 = true;
            group_check_group_code_schedules_hour_tickover_1_4 = true;
            group_check_group_code_schedules_hour_tickover_1_7 = true;
            group_check_group_code_schedules_hour_tickover_1_6 = true;
            group_check_group_code_schedules_hour_tickover_1_9 = true;
            group_check_group_code_schedules_hour_tickover_1_8 = true;
        }
    }
    event_1517_6_end: ;
}
// Function purpose: generated callback event_func_3682 processes event block(s) 1518_6. Actions/conditions:
//        1518_6: sets the selected object's direction to 0; sets Doors_Outside_Locked to 1; sets
//        Trigger_Lock_OuterDoors to 0.
void Frames::event_func_3682()
{
    // event 1518_6 : sets the selected object's direction to 0; sets Doors_Outside_Locked to 1; sets Trigger_Lock_OuterDoors to 0
    {
        if (!(group_code_1)) goto event_1518_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(877, str_trigger_lock_outerdoors_2060)) == (1))) goto event_1518_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_8)) goto event_1518_6_end;
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doorkitchen_211_instances.clear_selection();
        for (ObjectIterator it(doorkitchen_211_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doorlaundry_276_instances.clear_selection();
        for (ObjectIterator it(doorlaundry_276_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doorjanitor_271_instances.clear_selection();
        for (ObjectIterator it(doorjanitor_271_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doorlibrary_272_instances.clear_selection();
        for (ObjectIterator it(doorlibrary_272_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doorwoodshop_268_instances.clear_selection();
        for (ObjectIterator it(doorwoodshop_268_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doormetalshop_328_instances.clear_selection();
        for (ObjectIterator it(doormetalshop_328_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doormailroom_400_instances.clear_selection();
        for (ObjectIterator it(doormailroom_400_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doortailor_403_instances.clear_selection();
        for (ObjectIterator it(doortailor_403_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doorgardening_402_instances.clear_selection();
        for (ObjectIterator it(doorgardening_402_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        doordeliveries_401_instances.clear_selection();
        for (ObjectIterator it(doordeliveries_401_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 0);
    }
    event_1518_6_end: ;
}
// Function purpose: generated callback event_func_3683 processes event block(s) 1519_6. Actions/conditions:
//        1519_6: sets del_missions to empty_string.
void Frames::event_func_3683()
{
    // event 1519_6 : sets del_missions to empty_string
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1519_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_0) goto event_1519_6_end;
        group_check_group_code_schedules_hour_tickover_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, empty_string);
        {
            loop_missed_distract_running = true;
            int times = int(((ListObject*)get_instance(missions_298_instances))->get_count());
            loop_missed_distract_index = 0;
            while (loop_missed_distract_index < times) {
                loop_missed_distract_6();
                if (!loop_missed_distract_running) break;
                loop_missed_distract_index++;
            }
        }
    }
    event_1519_6_end: ;
}
// Function purpose: generated callback event_func_3684 processes event block(s) 1520_6. Actions/conditions:
//        1520_6: splits saved text into fields.
void Frames::event_func_3684()
{
    // event 1520_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1520_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_1) goto event_1520_6_end;
        group_check_group_code_schedules_hour_tickover_1_1 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708)) != (empty_string))) goto event_1520_6_end;
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
    event_1520_6_end: ;
}
// Function purpose: generated callback event_func_3685 processes event block(s) 1521_6. Actions/conditions:
//        1521_6: sets CR to empty_string.
void Frames::event_func_3685()
{
    // event 1521_6 : sets CR to empty_string
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1521_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_2) goto event_1521_6_end;
        group_check_group_code_schedules_hour_tickover_1_2 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, empty_string);
        {
            loop_reset_opn_caps_running = true;
            int times = int(qualifier_14.size());
            loop_reset_opn_caps_index = 0;
            while (loop_reset_opn_caps_index < times) {
                loop_reset_opn_caps_6();
                if (!loop_reset_opn_caps_running) break;
                loop_reset_opn_caps_index++;
            }
        }
    }
    event_1521_6_end: ;
}
// Function purpose: generated callback event_func_3686 processes event block(s) 1525_6. Actions/conditions:
//        1525_6: checks scene is active; skips if schedules hour tickover 1 3 event group is active; this handler
//        gates a game event without a direct value/object action.
void Frames::event_func_3686()
{
    // event 1525_6 : checks scene is active; skips if schedules hour tickover 1 3 event group is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1525_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_3) goto event_1525_6_end;
        group_check_group_code_schedules_hour_tickover_1_3 = false;
            group_code_schedules_hour_tickover_minsec_1 = false;
    
            group_code_schedules_hour_tickover_medsec_1 = false;
    
            group_code_schedules_hour_tickover_maxsec_1 = false;
    
            group_code_schedules_hour_tickover_camp_1 = false;
    
    }
    event_1525_6_end: ;
}
// Function purpose: generated callback event_func_3687 processes event block(s) 1526_6. Actions/conditions:
//        1526_6: sets refreshed_desks to 1.
void Frames::event_func_3687()
{
    // event 1526_6 : sets refreshed_desks to 1
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1526_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_4) goto event_1526_6_end;
        group_check_group_code_schedules_hour_tickover_1_4 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)))) goto event_1526_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(876, str_refreshed_desks_2059)) == (0))) goto event_1526_6_end;
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_restocks_running = true;
            int times = int(1);
            loop_restocks_index = 0;
            while (loop_restocks_index < times) {
                loop_restocks_6();
                if (!loop_restocks_running) break;
                loop_restocks_index++;
            }
        }
        {
            loop_fill_vac_running = true;
            int times = int(1);
            loop_fill_vac_index = 0;
            while (loop_fill_vac_index < times) {
                loop_fill_vac_6();
                if (!loop_fill_vac_running) break;
                loop_fill_vac_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(876, str_refreshed_desks_2059, 1);
    }
    event_1526_6_end: ;
}
// Function purpose: generated callback event_func_3688 processes event block(s) 1527_6. Actions/conditions:
//        1527_6: creates a extranpcs 383 object; sets the selected object's string to MedStaff; sets the selected
//        object's numeric value to ((Active*)get_instance(medicspot_421_instances,
//        default_active_instance))->get_x(); plus 7 more actions.
void Frames::event_func_3688()
{
    // event 1527_6 : creates a extranpcs 383 object; sets the selected object's string to MedStaff; sets the selected object's numeric value to ((Active*)get_instance(medicspot_421_instances, default_active_instance))->get_x(); plus 7 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1527_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_5) goto event_1527_6_end;
        group_check_group_code_schedules_hour_tickover_1_5 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)))) goto event_1527_6_end;
        if (!((medicspot_421_instances.size()) > (0))) goto event_1527_6_end;
        if (group_extra_npcs_medic_1) goto event_1527_6_end;
        FrameObject * single_instance_1527_6_0; single_instance_1527_6_0 = NULL;
        // select single: true false false
        npcspawn_384_instances.clear_selection();
        for (ObjectIterator p_it(npcspawn_384_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_serviceNpc(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1527_6_0 == NULL)
                    single_instance_1527_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1527_6_0))->alterables->strings.set(0, str_medstaff_1892);
        ((Active*)((Active*)single_instance_1527_6_0))->alterables->values.set(23, ((Active*)get_instance(medicspot_421_instances, default_active_instance))->get_x());
        ((Active*)((Active*)single_instance_1527_6_0))->alterables->values.set(24, ((Active*)get_instance(medicspot_421_instances, default_active_instance))->get_y());
        ((Active*)((Active*)single_instance_1527_6_0))->force_animation(2);
        ((Active*)((Active*)single_instance_1527_6_0))->get_movement()->set_speed(10);
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            {
    planner->add_agent(((Active*)single_instance_1527_6_0));        }
        }
        if (!group_extra_npcs_medic_1) {
            group_extra_npcs_medic_1 = true;
        }
    }
    event_1527_6_end: ;
}
// Function purpose: generated callback event_func_3689 processes event block(s) 1528_6. Actions/conditions:
//        1528_6: creates a extranpcs 383 object; sets the selected object's string to JobStaff; sets the selected
//        object's numeric value to ((Active*)get_instance(staffjoboffice_385_instances,
//        default_active_instance))->get_x(); plus 7 more actions.
void Frames::event_func_3689()
{
    // event 1528_6 : creates a extranpcs 383 object; sets the selected object's string to JobStaff; sets the selected object's numeric value to ((Active*)get_instance(staffjoboffice_385_instances, default_active_instance))->get_x(); plus 7 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1528_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_6) goto event_1528_6_end;
        group_check_group_code_schedules_hour_tickover_1_6 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)))) goto event_1528_6_end;
        if (!((staffjoboffice_385_instances.size()) > (0))) goto event_1528_6_end;
        if (group_extra_npcs_job_staff_1) goto event_1528_6_end;
        FrameObject * single_instance_1528_6_0; single_instance_1528_6_0 = NULL;
        // select single: true false false
        npcspawn_384_instances.clear_selection();
        for (ObjectIterator p_it(npcspawn_384_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_serviceNpc(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1528_6_0 == NULL)
                    single_instance_1528_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1528_6_0))->alterables->strings.set(0, str_jobstaff_1891);
        ((Active*)((Active*)single_instance_1528_6_0))->alterables->values.set(23, ((Active*)get_instance(staffjoboffice_385_instances, default_active_instance))->get_x());
        ((Active*)((Active*)single_instance_1528_6_0))->alterables->values.set(24, ((Active*)get_instance(staffjoboffice_385_instances, default_active_instance))->get_y());
        ((Active*)((Active*)single_instance_1528_6_0))->force_animation(1);
        ((Active*)((Active*)single_instance_1528_6_0))->get_movement()->set_speed(10);
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            {
    planner->add_agent(((Active*)single_instance_1528_6_0));        }
        }
        if (!group_extra_npcs_job_staff_1) {
            group_extra_npcs_job_staff_1 = true;
        }
    }
    event_1528_6_end: ;
}
// Function purpose: generated callback event_func_3690 processes event block(s) 1529_6. Actions/conditions:
//        1529_6: adds a usespot 208 instance; sets the selected object's string to jungID.
void Frames::event_func_3690()
{
    // event 1529_6 : adds a usespot 208 instance; sets the selected object's string to jungID
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1529_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_7) goto event_1529_6_end;
        group_check_group_code_schedules_hour_tickover_1_7 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)))) goto event_1529_6_end;
        if (!((global_strings->get(0)) == (str_jungle_146))) goto event_1529_6_end;
        if (frame_time - restrict_1529_6 < 1.0) goto event_1529_6_end;
        restrict_1529_6 = frame_time;
        usespot_208_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_usespot_208(720, 144), 1);
            usespot_208_instances.add_back();
        }
        for (ObjectIterator it(usespot_208_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_jungid_1883);
        }
        {
            loop_jungle_id_running = true;
            int times = int(1);
            loop_jungle_id_index = 0;
            while (loop_jungle_id_index < times) {
                loop_jungle_id_6();
                if (!loop_jungle_id_running) break;
                loop_jungle_id_index++;
            }
        }
    }
    event_1529_6_end: ;
}
// Function purpose: generated callback event_func_3691 processes event block(s) 1544_6. Actions/conditions:
//        1544_6: sets WardenVisit to 9+randrange_event(12); sets WardenDone to 0.
void Frames::event_func_3691()
{
    // event 1544_6 : sets WardenVisit to 9+randrange_event(12); sets WardenDone to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1544_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_8) goto event_1544_6_end;
        group_check_group_code_schedules_hour_tickover_1_8 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(521, str_starthour_1421)))) goto event_1544_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(878, str_wardenvisit_2061, 9+randrange_event(12));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(879, str_wardendone_2062, 0);
    }
    event_1544_6_end: ;
}
// Function purpose: generated callback event_func_3692 processes event block(s) 1545_6. Actions/conditions:
//        1545_6: sets WardenDone to 1; creates a extranpcs 383 object; sets the selected object's string to Warden;
//        plus 8 more actions.
void Frames::event_func_3692()
{
    // event 1545_6 : sets WardenDone to 1; creates a extranpcs 383 object; sets the selected object's string to Warden; plus 8 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1545_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_9) goto event_1545_6_end;
        group_check_group_code_schedules_hour_tickover_1_9 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(878, str_wardenvisit_2061)))) goto event_1545_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(879, str_wardendone_2062)) == (0))) goto event_1545_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_1545_6_0; single_instance_1545_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_1545_6_0 == NULL) goto event_1545_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(879, str_wardendone_2062, 1);
        FrameObject * single_instance_1545_6_1; single_instance_1545_6_1 = NULL;
        // select single: true false false
        npcspawn_384_instances.clear_selection();
        for (ObjectIterator p_it(npcspawn_384_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_serviceNpc(parent->x + 8, parent->y + 8), parent->layer);
                if (single_instance_1545_6_1 == NULL)
                    single_instance_1545_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1545_6_1))->alterables->strings.set(0, str_warden_594);
        ((Active*)((Active*)single_instance_1545_6_1))->alterables->values.set(23, ((Active*)single_instance_1545_6_0)->get_x());
        ((Active*)((Active*)single_instance_1545_6_1))->alterables->values.set(24, ((Active*)single_instance_1545_6_0)->get_y());
        ((Active*)((Active*)single_instance_1545_6_1))->force_animation(0);
        ((Active*)((Active*)single_instance_1545_6_1))->get_movement()->set_speed(8);
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            {
    planner->add_agent(((Active*)single_instance_1545_6_1));        }
        }
        if (!group_extra_npcs_warden_1) {
            group_extra_npcs_warden_1 = true;
        }
    }
    event_1545_6_end: ;
}
// Function purpose: generated callback event_func_3693 processes event block(s) 1546_6. Actions/conditions:
//        1546_6: checks scene is active; skips if schedules hour tickover 1 10 event group is active; game state
//        MapRoutine; this handler gates a game event without a direct.
void Frames::event_func_3693()
{
    // event 1546_6 : checks scene is active; skips if schedules hour tickover 1 10 event group is active; game state MapRoutine; this handler gates a game event without a direct
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1546_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_10) goto event_1546_6_end;
        group_check_group_code_schedules_hour_tickover_1_10 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_minsec_582))) goto event_1546_6_end;
        if (!group_code_schedules_hour_tickover_minsec_1) {
            group_code_schedules_hour_tickover_minsec_1 = true;
        }
    }
    event_1546_6_end: ;
}
// Function purpose: generated callback event_func_3694 processes event block(s) 1547_6. Actions/conditions:
//        1547_6: checks scene is active; skips if schedules hour tickover 1 11 event group is active; game state
//        MapRoutine; this handler gates a game event without a direct.
void Frames::event_func_3694()
{
    // event 1547_6 : checks scene is active; skips if schedules hour tickover 1 11 event group is active; game state MapRoutine; this handler gates a game event without a direct
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1547_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_11) goto event_1547_6_end;
        group_check_group_code_schedules_hour_tickover_1_11 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_medsec_581))) goto event_1547_6_end;
        if (!group_code_schedules_hour_tickover_medsec_1) {
            group_code_schedules_hour_tickover_medsec_1 = true;
        }
    }
    event_1547_6_end: ;
}
// Function purpose: generated callback event_func_3695 processes event block(s) 1548_6. Actions/conditions:
//        1548_6: checks scene is active; skips if schedules hour tickover 1 12 event group is active; game state
//        MapRoutine; this handler gates a game event without a direct.
void Frames::event_func_3695()
{
    // event 1548_6 : checks scene is active; skips if schedules hour tickover 1 12 event group is active; game state MapRoutine; this handler gates a game event without a direct
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1548_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_12) goto event_1548_6_end;
        group_check_group_code_schedules_hour_tickover_1_12 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_maxsec_580))) goto event_1548_6_end;
        if (!group_code_schedules_hour_tickover_maxsec_1) {
            group_code_schedules_hour_tickover_maxsec_1 = true;
        }
    }
    event_1548_6_end: ;
}
// Function purpose: generated callback event_func_3696 processes event block(s) 1549_6. Actions/conditions:
//        1549_6: checks scene is active; skips if schedules hour tickover 1 13 event group is active; game state
//        MapRoutine; this handler gates a game event without a direct.
void Frames::event_func_3696()
{
    // event 1549_6 : checks scene is active; skips if schedules hour tickover 1 13 event group is active; game state MapRoutine; this handler gates a game event without a direct
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1549_6_end;
        if (!group_check_group_code_schedules_hour_tickover_1_13) goto event_1549_6_end;
        group_check_group_code_schedules_hour_tickover_1_13 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_camp_504))) goto event_1549_6_end;
        if (!group_code_schedules_hour_tickover_camp_1) {
            group_code_schedules_hour_tickover_camp_1 = true;
        }
    }
    event_1549_6_end: ;
}
// Function purpose: generated callback event_func_3697 processes event block(s) 1551_6. Actions/conditions:
//        1551_6: sets Lesson to Routines entry 2; sets CR_num to 2; increments Susp_Total by
//        gameVariables->get_value(741, Susp_Highest); plus 8 more actions.
void Frames::event_func_3697()
{
    // event 1551_6 : sets Lesson to Routines entry 2; sets CR_num to 2; increments Susp_Total by gameVariables->get_value(741, Susp_Highest); plus 8 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1551_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (8))) goto event_1551_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (9))) goto event_1551_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1551_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1551_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_2_155));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(608, str_susp_total_1588, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(741, str_susp_highest_1912));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(741, str_susp_highest_1912, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_morningrollcall_874);
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_roll_call_1) {
            group_code_schedules_roll_call_1 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 0);
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1551_6_end: ;
}
// Function purpose: generated callback event_func_3698 processes event block(s) 1552_6. Actions/conditions:
//        1552_6: sets Lesson to Routines entry 3; plays a sound or music track.
void Frames::event_func_3698()
{
    // event 1552_6 : sets Lesson to Routines entry 3; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1552_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (9))) goto event_1552_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1552_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1552_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_3_158));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1552_6_end: ;
}
// Function purpose: generated callback event_func_3699 processes event block(s) 1553_6. Actions/conditions:
//        1553_6: sets CR to Breakfast; sets CR_num to 4; sets Lesson to Breakfast; plus 6 more actions.
void Frames::event_func_3699()
{
    // event 1553_6 : sets CR to Breakfast; sets CR_num to 4; sets Lesson to Breakfast; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1553_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (9))) goto event_1553_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (10))) goto event_1553_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1553_6_end;
        if (group_code_1 && group_code_schedules_food_1) goto event_1553_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1553_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_breakfast_876);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, str_breakfast_876);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_4_161));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        if (!group_code_schedules_food_1) {
            group_code_schedules_food_1 = true;
            group_check_group_code_schedules_food_1_0 = true;
            group_check_group_code_schedules_food_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1553_6_end: ;
}
// Function purpose: generated callback event_func_3700 processes event block(s) 1554_6. Actions/conditions:
//        1554_6: sets Lesson to Routines entry 5; sets Free_Type to Free; sets Doors_Outside_Locked to 0; plus 6 more
//        actions.
void Frames::event_func_3700()
{
    // event 1554_6 : sets Lesson to Routines entry 5; sets Free_Type to Free; sets Doors_Outside_Locked to 0; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1554_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (10))) goto event_1554_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (12))) goto event_1554_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1554_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1554_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1554_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_5_164));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_free_280);
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 0);
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1554_6_end: ;
}
// Function purpose: generated callback event_func_3701 processes event block(s) 1555_6. Actions/conditions:
//        1555_6: sets Lesson to Routines entry 6; sets the selected object's numeric value to 5; plays a sound or
//        music track.
void Frames::event_func_3701()
{
    // event 1555_6 : sets Lesson to Routines entry 6; sets the selected object's numeric value to 5; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1555_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (12))) goto event_1555_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (13))) goto event_1555_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1555_6_end;
        if (group_code_1 && group_code_schedules_food_1) goto event_1555_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1555_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_6_241));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        if (!group_code_schedules_food_1) {
            group_code_schedules_food_1 = true;
            group_check_group_code_schedules_food_1_0 = true;
            group_check_group_code_schedules_food_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1555_6_end: ;
}
// Function purpose: generated callback event_func_3702 processes event block(s) 1556_6. Actions/conditions:
//        1556_6: sets Lesson to Routines entry 7; sets Free_Type to Work; sets the selected object's numeric value to
//        0; plus 1 more actions.
void Frames::event_func_3702()
{
    // event 1556_6 : sets Lesson to Routines entry 7; sets Free_Type to Work; sets the selected object's numeric value to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1556_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (13))) goto event_1556_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (16))) goto event_1556_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1556_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1556_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1556_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_7_323));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_work_477);
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        {
            loop_set_work_lesson_running = true;
            int times = int(1);
            loop_set_work_lesson_index = 0;
            while (loop_set_work_lesson_index < times) {
                loop_set_work_lesson_6();
                if (!loop_set_work_lesson_running) break;
                loop_set_work_lesson_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1556_6_end: ;
}
// Function purpose: generated callback event_func_3703 processes event block(s) 1557_6. Actions/conditions:
//        1557_6: sets CR to Workout; sets CR_num to 8; sets Lesson to Routines entry 8; plus 6 more actions.
void Frames::event_func_3703()
{
    // event 1557_6 : sets CR to Workout; sets CR_num to 8; sets Lesson to Routines entry 8; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1557_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (16))) goto event_1557_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (17))) goto event_1557_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1557_6_end;
        if (group_code_1 && group_code_schedules_gym_1) goto event_1557_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1557_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_workout_16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_8_325));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(880, str_quotacheck_2063, 1);
        {
            loop_check_npc_jq_running = true;
            int times = int(1);
            loop_check_npc_jq_index = 0;
            while (loop_check_npc_jq_index < times) {
                loop_check_npc_jq_6();
                if (!loop_check_npc_jq_running) break;
                loop_check_npc_jq_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_gym_1) {
            group_code_schedules_gym_1 = true;
            group_check_group_code_schedules_gym_1_0 = true;
            group_check_group_code_schedules_gym_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1557_6_end: ;
}
// Function purpose: generated callback event_func_3704 processes event block(s) 1558_6. Actions/conditions:
//        1558_6: sets CR to Shower; sets CR_num to 9; sets Lesson to Routines entry 9; plus 1 more actions.
void Frames::event_func_3704()
{
    // event 1558_6 : sets CR to Shower; sets CR_num to 9; sets Lesson to Routines entry 9; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1558_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (17))) goto event_1558_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (18))) goto event_1558_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1558_6_end;
        if (group_code_1 && group_code_schedules_shower_1) goto event_1558_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1558_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_shower_881);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_9_327));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_shower_1) {
            group_code_schedules_shower_1 = true;
            group_check_group_code_schedules_shower_1_2 = true;
            group_check_group_code_schedules_shower_1_0 = true;
            group_check_group_code_schedules_shower_1_1 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1558_6_end: ;
}
// Function purpose: generated callback event_func_3705 processes event block(s) 1559_6. Actions/conditions:
//        1559_6: sets CR to EveningMeal; sets CR_num to 10; sets Lesson to Routines entry 10; plus 5 more actions.
void Frames::event_func_3705()
{
    // event 1559_6 : sets CR to EveningMeal; sets CR_num to 10; sets Lesson to Routines entry 10; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1559_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (18))) goto event_1559_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (19))) goto event_1559_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1559_6_end;
        if (group_code_1 && group_code_schedules_food_1) goto event_1559_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1559_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_eveningmeal_878);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_10_329));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_food_1) {
            group_code_schedules_food_1 = true;
            group_check_group_code_schedules_food_1_0 = true;
            group_check_group_code_schedules_food_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1559_6_end: ;
}
// Function purpose: generated callback event_func_3706 processes event block(s) 1560_6. Actions/conditions:
//        1560_6: sets Free_Type to Free; sets Lesson to Routines entry 11; plays a sound or music track.
void Frames::event_func_3706()
{
    // event 1560_6 : sets Free_Type to Free; sets Lesson to Routines entry 11; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1560_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (19))) goto event_1560_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (22))) goto event_1560_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1560_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1560_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1560_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_free_280);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_11_331));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1560_6_end: ;
}
// Function purpose: generated callback event_func_3707 processes event block(s) 1561_6. Actions/conditions:
//        1561_6: sets CR_num to 12; sets CR to EveningRollcall; sets Lesson to Routines entry 12; plus 6 more
//        actions.
void Frames::event_func_3707()
{
    // event 1561_6 : sets CR_num to 12; sets CR to EveningRollcall; sets Lesson to Routines entry 12; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1561_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (22))) goto event_1561_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1561_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1561_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1561_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1561_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_eveningrollcall_2064);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_12_334));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_roll_call_1) {
            group_code_schedules_roll_call_1 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 1);
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1561_6_end: ;
}
// Function purpose: generated callback event_func_3708 processes event block(s) 1562_6. Actions/conditions:
//        1562_6: sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track.
void Frames::event_func_3708()
{
    // event 1562_6 : sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto event_1562_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (23))) goto event_1562_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1562_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1562_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_3_158));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 1);
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1562_6_end: ;
}
// Function purpose: generated callback event_func_3709 processes event block(s) 1563_6. Actions/conditions:
//        1563_6: saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances,
//        it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions.
void Frames::event_func_3709()
{
    // event 1563_6 : saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions
    bool or_result_1563_6 = false;
    bool or_temp_result_1563_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto or_event_1563_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) >= (23))) goto or_event_1563_6_0_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2005))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_1563_6_0_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto or_event_1563_6_0_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto or_event_1563_6_0_end;
        or_result_1563_6 = true;
        or_temp_result_1563_6_0 = true;
    }
    or_event_1563_6_0_end: ;
    playerBase_instances.clear_saved_selection();
    if (or_temp_result_1563_6_0) {
        playerBase_instances.save_selection();
    }
    // event 1563_6 : saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions
    bool or_temp_result_1563_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_minsec_1)) goto or_event_1563_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) < (8))) goto or_event_1563_6_1_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2005))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_1563_6_1_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto or_event_1563_6_1_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto or_event_1563_6_1_end;
        or_result_1563_6 = true;
        or_temp_result_1563_6_1 = true;
        or_event_1563_6_1_end: ;
        if (or_temp_result_1563_6_1) {
            playerBase_instances.save_selection();
        }
        if (!or_result_1563_6) goto or_final_or_event_1563_6_1_end;
        playerBase_instances.empty_selection();
        if (or_temp_result_1563_6_0 || or_temp_result_1563_6_1) {
            playerBase_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_routines_196, str_1_97));
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        if (!group_code_schedules_sleeping_1) {
            group_code_schedules_sleeping_1 = true;
            group_check_group_code_schedules_sleeping_1_1 = true;
            group_check_group_code_schedules_sleeping_1_0 = true;
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(157, str_doors_cell_locked_730, 0);
        }
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    or_final_or_event_1563_6_1_end: ;
}
// Function purpose: generated callback event_func_3710 processes event block(s) 1564_6. Actions/conditions:
//        1564_6: sets CR_num to 2; sets CR to MorningRollcall; increments Susp_Total by
//        gameVariables->get_value(741, Susp_Highest); plus 8 more actions.
void Frames::event_func_3710()
{
    // event 1564_6 : sets CR_num to 2; sets CR to MorningRollcall; increments Susp_Total by gameVariables->get_value(741, Susp_Highest); plus 8 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1564_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (8))) goto event_1564_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (9))) goto event_1564_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1564_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1564_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_morningrollcall_874);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(608, str_susp_total_1588, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(741, str_susp_highest_1912));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(741, str_susp_highest_1912, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_2_155));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_roll_call_1) {
            group_code_schedules_roll_call_1 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 0);
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1564_6_end: ;
}
// Function purpose: generated callback event_func_3711 processes event block(s) 1565_6. Actions/conditions:
//        1565_6: sets Lesson to Routines entry 3; plays a sound or music track.
void Frames::event_func_3711()
{
    // event 1565_6 : sets Lesson to Routines entry 3; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1565_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (9))) goto event_1565_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1565_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1565_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_3_158));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1565_6_end: ;
}
// Function purpose: generated callback event_func_3712 processes event block(s) 1566_6. Actions/conditions:
//        1566_6: sets CR_num to 4; sets CR to Breakfast; sets Lesson to Routines entry 4; plus 5 more actions.
void Frames::event_func_3712()
{
    // event 1566_6 : sets CR_num to 4; sets CR to Breakfast; sets Lesson to Routines entry 4; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1566_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (9))) goto event_1566_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (10))) goto event_1566_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1566_6_end;
        if (group_code_1 && group_code_schedules_food_1) goto event_1566_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1566_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_breakfast_876);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_4_161));
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_food_1) {
            group_code_schedules_food_1 = true;
            group_check_group_code_schedules_food_1_0 = true;
            group_check_group_code_schedules_food_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1566_6_end: ;
}
// Function purpose: generated callback event_func_3713 processes event block(s) 1567_6. Actions/conditions:
//        1567_6: sets Free_Type to Work; sets Lesson to Routines entry 7; sets the selected object's numeric value to
//        0; plus 6 more actions.
void Frames::event_func_3713()
{
    // event 1567_6 : sets Free_Type to Work; sets Lesson to Routines entry 7; sets the selected object's numeric value to 0; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1567_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (10))) goto event_1567_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (13))) goto event_1567_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1567_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1567_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1567_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_work_477);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_7_323));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        {
            loop_set_work_lesson_running = true;
            int times = int(1);
            loop_set_work_lesson_index = 0;
            while (loop_set_work_lesson_index < times) {
                loop_set_work_lesson_6();
                if (!loop_set_work_lesson_running) break;
                loop_set_work_lesson_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 0);
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1567_6_end: ;
}
// Function purpose: generated callback event_func_3714 processes event block(s) 1568_6. Actions/conditions:
//        1568_6: sets QuotaCheck to 1; sets Lesson to Routines entry 13; plays a sound or music track.
void Frames::event_func_3714()
{
    // event 1568_6 : sets QuotaCheck to 1; sets Lesson to Routines entry 13; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1568_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (13))) goto event_1568_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (14))) goto event_1568_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1568_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1568_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1568_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(880, str_quotacheck_2063, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_13_632));
        {
            loop_check_npc_jq_running = true;
            int times = int(1);
            loop_check_npc_jq_index = 0;
            while (loop_check_npc_jq_index < times) {
                loop_check_npc_jq_6();
                if (!loop_check_npc_jq_running) break;
                loop_check_npc_jq_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_roll_call_1) {
            group_code_schedules_roll_call_1 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1568_6_end: ;
}
// Function purpose: generated callback event_func_3715 processes event block(s) 1569_6. Actions/conditions:
//        1569_6: sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track.
void Frames::event_func_3715()
{
    // event 1569_6 : sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1569_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (14))) goto event_1569_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1569_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1569_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_3_158));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 1);
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1569_6_end: ;
}
// Function purpose: generated callback event_func_3716 processes event block(s) 1570_6. Actions/conditions:
//        1570_6: sets Lesson to Routines entry 5; sets Free_Type to Free; sets the selected object's numeric value to
//        0; plus 1 more actions.
void Frames::event_func_3716()
{
    // event 1570_6 : sets Lesson to Routines entry 5; sets Free_Type to Free; sets the selected object's numeric value to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1570_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (14))) goto event_1570_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (16))) goto event_1570_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1570_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1570_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1570_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_5_164));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_free_280);
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1570_6_end: ;
}
// Function purpose: generated callback event_func_3717 processes event block(s) 1571_6. Actions/conditions:
//        1571_6: sets CR_num to 10; sets CR to EveningMeal; sets Lesson to Routines entry 10; plus 5 more actions.
void Frames::event_func_3717()
{
    // event 1571_6 : sets CR_num to 10; sets CR to EveningMeal; sets Lesson to Routines entry 10; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1571_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (16))) goto event_1571_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (17))) goto event_1571_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1571_6_end;
        if (group_code_1 && group_code_schedules_food_1) goto event_1571_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1571_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_eveningmeal_878);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_10_329));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_food_1) {
            group_code_schedules_food_1 = true;
            group_check_group_code_schedules_food_1_0 = true;
            group_check_group_code_schedules_food_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1571_6_end: ;
}
// Function purpose: generated callback event_func_3718 processes event block(s) 1572_6. Actions/conditions:
//        1572_6: sets CR_num to 8; sets CR to Workout; sets Lesson to Routines entry 8; plus 1 more actions.
void Frames::event_func_3718()
{
    // event 1572_6 : sets CR_num to 8; sets CR to Workout; sets Lesson to Routines entry 8; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1572_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (17))) goto event_1572_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (18))) goto event_1572_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1572_6_end;
        if (group_code_1 && group_code_schedules_gym_1) goto event_1572_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1572_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_workout_16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_8_325));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_gym_1) {
            group_code_schedules_gym_1 = true;
            group_check_group_code_schedules_gym_1_0 = true;
            group_check_group_code_schedules_gym_1_1 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1572_6_end: ;
}
// Function purpose: generated callback event_func_3719 processes event block(s) 1573_6. Actions/conditions:
//        1573_6: sets CR_num to 9; sets CR to Shower; sets Lesson to Routines entry 9; plus 1 more actions.
void Frames::event_func_3719()
{
    // event 1573_6 : sets CR_num to 9; sets CR to Shower; sets Lesson to Routines entry 9; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1573_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (18))) goto event_1573_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (19))) goto event_1573_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1573_6_end;
        if (group_code_1 && group_code_schedules_shower_1) goto event_1573_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1573_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_shower_881);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_9_327));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_shower_1) {
            group_code_schedules_shower_1 = true;
            group_check_group_code_schedules_shower_1_2 = true;
            group_check_group_code_schedules_shower_1_0 = true;
            group_check_group_code_schedules_shower_1_1 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1573_6_end: ;
}
// Function purpose: generated callback event_func_3720 processes event block(s) 1574_6. Actions/conditions:
//        1574_6: sets Free_Type to Free; sets Lesson to Routines entry 11; plays a sound or music track.
void Frames::event_func_3720()
{
    // event 1574_6 : sets Free_Type to Free; sets Lesson to Routines entry 11; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1574_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (19))) goto event_1574_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (22))) goto event_1574_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1574_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1574_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1574_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_free_280);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_11_331));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1574_6_end: ;
}
// Function purpose: generated callback event_func_3721 processes event block(s) 1575_6. Actions/conditions:
//        1575_6: sets CR_num to 12; sets CR to EveningRollcall; sets Lesson to Routines entry 12; plus 6 more
//        actions.
void Frames::event_func_3721()
{
    // event 1575_6 : sets CR_num to 12; sets CR to EveningRollcall; sets Lesson to Routines entry 12; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1575_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (22))) goto event_1575_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1575_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1575_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1575_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1575_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_eveningrollcall_2064);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_12_334));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_roll_call_1) {
            group_code_schedules_roll_call_1 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 1);
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1575_6_end: ;
}
// Function purpose: generated callback event_func_3722 processes event block(s) 1576_6. Actions/conditions:
//        1576_6: sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track.
void Frames::event_func_3722()
{
    // event 1576_6 : sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto event_1576_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (23))) goto event_1576_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1576_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1576_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_3_158));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 1);
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1576_6_end: ;
}
// Function purpose: generated callback event_func_3723 processes event block(s) 1577_6. Actions/conditions:
//        1577_6: saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances,
//        it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions.
void Frames::event_func_3723()
{
    // event 1577_6 : saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions
    bool or_result_1577_6 = false;
    bool or_temp_result_1577_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto or_event_1577_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) >= (23))) goto or_event_1577_6_0_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2005))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_1577_6_0_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto or_event_1577_6_0_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto or_event_1577_6_0_end;
        or_result_1577_6 = true;
        or_temp_result_1577_6_0 = true;
    }
    or_event_1577_6_0_end: ;
    playerBase_instances.clear_saved_selection();
    if (or_temp_result_1577_6_0) {
        playerBase_instances.save_selection();
    }
    // event 1577_6 : saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions
    bool or_temp_result_1577_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_medsec_1)) goto or_event_1577_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) < (8))) goto or_event_1577_6_1_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2005))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_1577_6_1_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto or_event_1577_6_1_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto or_event_1577_6_1_end;
        or_result_1577_6 = true;
        or_temp_result_1577_6_1 = true;
        or_event_1577_6_1_end: ;
        if (or_temp_result_1577_6_1) {
            playerBase_instances.save_selection();
        }
        if (!or_result_1577_6) goto or_final_or_event_1577_6_1_end;
        playerBase_instances.empty_selection();
        if (or_temp_result_1577_6_0 || or_temp_result_1577_6_1) {
            playerBase_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_routines_196, str_1_97));
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        if (!group_code_schedules_sleeping_1) {
            group_code_schedules_sleeping_1 = true;
            group_check_group_code_schedules_sleeping_1_1 = true;
            group_check_group_code_schedules_sleeping_1_0 = true;
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(157, str_doors_cell_locked_730, 0);
        }
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    or_final_or_event_1577_6_1_end: ;
}
// Function purpose: generated callback event_func_3724 processes event block(s) 1578_6. Actions/conditions:
//        1578_6: sets CR to MorningRollcall; sets CR_num to 2; increments Susp_Total by
//        gameVariables->get_value(741, Susp_Highest); plus 8 more actions.
void Frames::event_func_3724()
{
    // event 1578_6 : sets CR to MorningRollcall; sets CR_num to 2; increments Susp_Total by gameVariables->get_value(741, Susp_Highest); plus 8 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1578_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (9))) goto event_1578_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (10))) goto event_1578_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1578_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1578_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_morningrollcall_874);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(608, str_susp_total_1588, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(741, str_susp_highest_1912));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(741, str_susp_highest_1912, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_2_155));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_roll_call_1) {
            group_code_schedules_roll_call_1 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 0);
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1578_6_end: ;
}
// Function purpose: generated callback event_func_3725 processes event block(s) 1579_6. Actions/conditions:
//        1579_6: sets Lesson to Routines entry 3; plays a sound or music track.
void Frames::event_func_3725()
{
    // event 1579_6 : sets Lesson to Routines entry 3; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1579_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (10))) goto event_1579_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1579_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1579_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_3_158));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1579_6_end: ;
}
// Function purpose: generated callback event_func_3726 processes event block(s) 1580_6. Actions/conditions:
//        1580_6: sets CR to Breakfast; sets CR_num to 4; sets Lesson to Routines entry 4; plus 5 more actions.
void Frames::event_func_3726()
{
    // event 1580_6 : sets CR to Breakfast; sets CR_num to 4; sets Lesson to Routines entry 4; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1580_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (10))) goto event_1580_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (11))) goto event_1580_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1580_6_end;
        if (group_code_1 && group_code_schedules_food_1) goto event_1580_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1580_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_breakfast_876);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_4_161));
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_food_1) {
            group_code_schedules_food_1 = true;
            group_check_group_code_schedules_food_1_0 = true;
            group_check_group_code_schedules_food_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1580_6_end: ;
}
// Function purpose: generated callback event_func_3727 processes event block(s) 1581_6. Actions/conditions:
//        1581_6: sets Lesson to Routines entry 7; sets Free_Type to Work; sets the selected object's numeric value to
//        0; plus 6 more actions.
void Frames::event_func_3727()
{
    // event 1581_6 : sets Lesson to Routines entry 7; sets Free_Type to Work; sets the selected object's numeric value to 0; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1581_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (11))) goto event_1581_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (14))) goto event_1581_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1581_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1581_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1581_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_7_323));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_work_477);
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        {
            loop_set_work_lesson_running = true;
            int times = int(1);
            loop_set_work_lesson_index = 0;
            while (loop_set_work_lesson_index < times) {
                loop_set_work_lesson_6();
                if (!loop_set_work_lesson_running) break;
                loop_set_work_lesson_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 0);
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1581_6_end: ;
}
// Function purpose: generated callback event_func_3728 processes event block(s) 1582_6. Actions/conditions:
//        1582_6: sets QuotaCheck to 1; sets Lesson to Routines entry 13; plays a sound or music track.
void Frames::event_func_3728()
{
    // event 1582_6 : sets QuotaCheck to 1; sets Lesson to Routines entry 13; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1582_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (14))) goto event_1582_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (15))) goto event_1582_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1582_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1582_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1582_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(880, str_quotacheck_2063, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_13_632));
        {
            loop_check_npc_jq_running = true;
            int times = int(1);
            loop_check_npc_jq_index = 0;
            while (loop_check_npc_jq_index < times) {
                loop_check_npc_jq_6();
                if (!loop_check_npc_jq_running) break;
                loop_check_npc_jq_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_roll_call_1) {
            group_code_schedules_roll_call_1 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1582_6_end: ;
}
// Function purpose: generated callback event_func_3729 processes event block(s) 1583_6. Actions/conditions:
//        1583_6: sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track.
void Frames::event_func_3729()
{
    // event 1583_6 : sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1583_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (15))) goto event_1583_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1583_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1583_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_3_158));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 1);
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1583_6_end: ;
}
// Function purpose: generated callback event_func_3730 processes event block(s) 1584_6. Actions/conditions:
//        1584_6: sets Lesson to Routines entry 5; sets Free_Type to Free; sets the selected object's numeric value to
//        0; plus 1 more actions.
void Frames::event_func_3730()
{
    // event 1584_6 : sets Lesson to Routines entry 5; sets Free_Type to Free; sets the selected object's numeric value to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1584_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (15))) goto event_1584_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (16))) goto event_1584_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1584_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1584_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1584_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_5_164));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_free_280);
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1584_6_end: ;
}
// Function purpose: generated callback event_func_3731 processes event block(s) 1585_6. Actions/conditions:
//        1585_6: sets CR_num to 8; sets CR to Workout; sets Lesson to Routines entry 8; plus 1 more actions.
void Frames::event_func_3731()
{
    // event 1585_6 : sets CR_num to 8; sets CR to Workout; sets Lesson to Routines entry 8; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1585_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (16))) goto event_1585_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (17))) goto event_1585_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1585_6_end;
        if (group_code_1 && group_code_schedules_gym_1) goto event_1585_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1585_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_workout_16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_8_325));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_gym_1) {
            group_code_schedules_gym_1 = true;
            group_check_group_code_schedules_gym_1_0 = true;
            group_check_group_code_schedules_gym_1_1 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1585_6_end: ;
}
// Function purpose: generated callback event_func_3732 processes event block(s) 1586_6. Actions/conditions:
//        1586_6: sets CR to EveningMeal; sets CR_num to 10; sets Lesson to Routines entry 10; plus 5 more actions.
void Frames::event_func_3732()
{
    // event 1586_6 : sets CR to EveningMeal; sets CR_num to 10; sets Lesson to Routines entry 10; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1586_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (17))) goto event_1586_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (18))) goto event_1586_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1586_6_end;
        if (group_code_1 && group_code_schedules_food_1) goto event_1586_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1586_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_eveningmeal_878);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_10_329));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_food_1) {
            group_code_schedules_food_1 = true;
            group_check_group_code_schedules_food_1_0 = true;
            group_check_group_code_schedules_food_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1586_6_end: ;
}
// Function purpose: generated callback event_func_3733 processes event block(s) 1587_6. Actions/conditions:
//        1587_6: sets CR_num to 9; sets CR to Shower; sets Lesson to Routines entry 9; plus 1 more actions.
void Frames::event_func_3733()
{
    // event 1587_6 : sets CR_num to 9; sets CR to Shower; sets Lesson to Routines entry 9; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1587_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (18))) goto event_1587_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (19))) goto event_1587_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1587_6_end;
        if (group_code_1 && group_code_schedules_shower_1) goto event_1587_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1587_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_shower_881);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_9_327));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_shower_1) {
            group_code_schedules_shower_1 = true;
            group_check_group_code_schedules_shower_1_2 = true;
            group_check_group_code_schedules_shower_1_0 = true;
            group_check_group_code_schedules_shower_1_1 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1587_6_end: ;
}
// Function purpose: generated callback event_func_3734 processes event block(s) 1588_6. Actions/conditions:
//        1588_6: sets CR to EveningRollcall; sets CR_num to 12; sets Lesson to Routines entry 12; plus 6 more
//        actions.
void Frames::event_func_3734()
{
    // event 1588_6 : sets CR to EveningRollcall; sets CR_num to 12; sets Lesson to Routines entry 12; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1588_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (19))) goto event_1588_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (20))) goto event_1588_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1588_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1588_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1588_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_eveningrollcall_2064);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_12_334));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_roll_call_1) {
            group_code_schedules_roll_call_1 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 1);
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1588_6_end: ;
}
// Function purpose: generated callback event_func_3735 processes event block(s) 1589_6. Actions/conditions:
//        1589_6: sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track.
void Frames::event_func_3735()
{
    // event 1589_6 : sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto event_1589_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (20))) goto event_1589_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1589_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1589_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_3_158));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 1);
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1589_6_end: ;
}
// Function purpose: generated callback event_func_3736 processes event block(s) 1590_6. Actions/conditions:
//        1590_6: saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances,
//        it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions.
void Frames::event_func_3736()
{
    // event 1590_6 : saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions
    bool or_result_1590_6 = false;
    bool or_temp_result_1590_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto or_event_1590_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) >= (20))) goto or_event_1590_6_0_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2005))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_1590_6_0_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto or_event_1590_6_0_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto or_event_1590_6_0_end;
        or_result_1590_6 = true;
        or_temp_result_1590_6_0 = true;
    }
    or_event_1590_6_0_end: ;
    playerBase_instances.clear_saved_selection();
    if (or_temp_result_1590_6_0) {
        playerBase_instances.save_selection();
    }
    // event 1590_6 : saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions
    bool or_temp_result_1590_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_maxsec_1)) goto or_event_1590_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) < (9))) goto or_event_1590_6_1_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2005))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_1590_6_1_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto or_event_1590_6_1_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto or_event_1590_6_1_end;
        or_result_1590_6 = true;
        or_temp_result_1590_6_1 = true;
        or_event_1590_6_1_end: ;
        if (or_temp_result_1590_6_1) {
            playerBase_instances.save_selection();
        }
        if (!or_result_1590_6) goto or_final_or_event_1590_6_1_end;
        playerBase_instances.empty_selection();
        if (or_temp_result_1590_6_0 || or_temp_result_1590_6_1) {
            playerBase_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_routines_196, str_1_97));
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        if (!group_code_schedules_sleeping_1) {
            group_code_schedules_sleeping_1 = true;
            group_check_group_code_schedules_sleeping_1_1 = true;
            group_check_group_code_schedules_sleeping_1_0 = true;
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(157, str_doors_cell_locked_730, 0);
        }
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    or_final_or_event_1590_6_1_end: ;
}
// Function purpose: generated callback event_func_3737 processes event block(s) 1591_6. Actions/conditions:
//        1591_6: sets CR_num to 2; sets CR to MorningRollcall; increments Susp_Total by
//        gameVariables->get_value(741, Susp_Highest); plus 8 more actions.
void Frames::event_func_3737()
{
    // event 1591_6 : sets CR_num to 2; sets CR to MorningRollcall; increments Susp_Total by gameVariables->get_value(741, Susp_Highest); plus 8 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1591_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (8))) goto event_1591_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (9))) goto event_1591_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1591_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1591_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_morningrollcall_874);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(608, str_susp_total_1588, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(741, str_susp_highest_1912));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(741, str_susp_highest_1912, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_2_155));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_roll_call_1) {
            group_code_schedules_roll_call_1 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 0);
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1591_6_end: ;
}
// Function purpose: generated callback event_func_3738 processes event block(s) 1592_6. Actions/conditions:
//        1592_6: sets Lesson to Routines entry 3; plays a sound or music track.
void Frames::event_func_3738()
{
    // event 1592_6 : sets Lesson to Routines entry 3; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1592_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (9))) goto event_1592_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1592_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1592_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_3_158));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1592_6_end: ;
}
// Function purpose: generated callback event_func_3739 processes event block(s) 1593_6. Actions/conditions:
//        1593_6: sets CR_num to 4; sets CR to Breakfast; sets Lesson to Routines entry 4; plus 5 more actions.
void Frames::event_func_3739()
{
    // event 1593_6 : sets CR_num to 4; sets CR to Breakfast; sets Lesson to Routines entry 4; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1593_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (9))) goto event_1593_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (10))) goto event_1593_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1593_6_end;
        if (group_code_1 && group_code_schedules_food_1) goto event_1593_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1593_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_breakfast_876);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_4_161));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        if (!group_code_schedules_food_1) {
            group_code_schedules_food_1 = true;
            group_check_group_code_schedules_food_1_0 = true;
            group_check_group_code_schedules_food_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1593_6_end: ;
}
// Function purpose: generated callback event_func_3740 processes event block(s) 1594_6. Actions/conditions:
//        1594_6: sets Lesson to Routines entry 7; sets Free_Type to Work; sets the selected object's numeric value to
//        0; plus 6 more actions.
void Frames::event_func_3740()
{
    // event 1594_6 : sets Lesson to Routines entry 7; sets Free_Type to Work; sets the selected object's numeric value to 0; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1594_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (10))) goto event_1594_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (13))) goto event_1594_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1594_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1594_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1594_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_7_323));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_work_477);
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        {
            loop_set_work_lesson_running = true;
            int times = int(1);
            loop_set_work_lesson_index = 0;
            while (loop_set_work_lesson_index < times) {
                loop_set_work_lesson_6();
                if (!loop_set_work_lesson_running) break;
                loop_set_work_lesson_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 0);
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1594_6_end: ;
}
// Function purpose: generated callback event_func_3741 processes event block(s) 1595_6. Actions/conditions:
//        1595_6: sets CR_num to 8; sets CR to Workout; sets QuotaCheck to 1; plus 6 more actions.
void Frames::event_func_3741()
{
    // event 1595_6 : sets CR_num to 8; sets CR to Workout; sets QuotaCheck to 1; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1595_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (13))) goto event_1595_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (14))) goto event_1595_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1595_6_end;
        if (group_code_1 && group_code_schedules_gym_1) goto event_1595_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1595_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_workout_16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(880, str_quotacheck_2063, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_8_325));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_check_npc_jq_running = true;
            int times = int(1);
            loop_check_npc_jq_index = 0;
            while (loop_check_npc_jq_index < times) {
                loop_check_npc_jq_6();
                if (!loop_check_npc_jq_running) break;
                loop_check_npc_jq_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_gym_1) {
            group_code_schedules_gym_1 = true;
            group_check_group_code_schedules_gym_1_0 = true;
            group_check_group_code_schedules_gym_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1595_6_end: ;
}
// Function purpose: generated callback event_func_3742 processes event block(s) 1596_6. Actions/conditions:
//        1596_6: sets CR_num to 5; sets Lesson to Routines entry 5; sets Free_Type to Free; plus 5 more actions.
void Frames::event_func_3742()
{
    // event 1596_6 : sets CR_num to 5; sets Lesson to Routines entry 5; sets Free_Type to Free; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1596_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (14))) goto event_1596_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (17))) goto event_1596_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1596_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1596_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1596_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_5_164));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_free_280);
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1596_6_end: ;
}
// Function purpose: generated callback event_func_3743 processes event block(s) 1597_6. Actions/conditions:
//        1597_6: sets CR_num to 10; sets CR to EveningMeal; sets Lesson to Routines entry 10; plus 5 more actions.
void Frames::event_func_3743()
{
    // event 1597_6 : sets CR_num to 10; sets CR to EveningMeal; sets Lesson to Routines entry 10; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1597_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (17))) goto event_1597_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (18))) goto event_1597_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1597_6_end;
        if (group_code_1 && group_code_schedules_food_1) goto event_1597_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1597_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_eveningmeal_878);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_10_329));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_food_1) {
            group_code_schedules_food_1 = true;
            group_check_group_code_schedules_food_1_0 = true;
            group_check_group_code_schedules_food_1_1 = true;
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1597_6_end: ;
}
// Function purpose: generated callback event_func_3744 processes event block(s) 1598_6. Actions/conditions:
//        1598_6: sets CR_num to 7; sets Lesson to Routines entry 7; sets Free_Type to Work; plus 7 more actions.
void Frames::event_func_3744()
{
    // event 1598_6 : sets CR_num to 7; sets Lesson to Routines entry 7; sets Free_Type to Work; plus 7 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1598_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (18))) goto event_1598_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (21))) goto event_1598_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1598_6_end;
        if (group_code_1 && group_code_schedules_leisure_work_1) goto event_1598_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1598_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 7);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_7_323));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(16, str_free_type_476, str_work_477);
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_leisure_work_1) {
            group_code_schedules_leisure_work_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_woodshop_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_1 = true;
            group_check_group_code_schedules_leisure_work_1_0 = true;
            group_check_group_code_schedules_leisure_work_1_3 = true;
            group_check_group_code_schedules_leisure_work_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_laundry_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_metal_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_tailor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_8 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_7 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_6 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_5 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_4 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_3 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_2 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_1 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_janitor_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_library_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_kitchen_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_mailman_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_1_9 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_deliveries_1_0 = true;
            group_check_group_code_schedules_leisure_work_npcs_doing_jobs_npc_gardening_1_0 = true;
        }
        {
            loop_set_work_lesson_running = true;
            int times = int(1);
            loop_set_work_lesson_index = 0;
            while (loop_set_work_lesson_index < times) {
                loop_set_work_lesson_6();
                if (!loop_set_work_lesson_running) break;
                loop_set_work_lesson_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 0);
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1598_6_end: ;
}
// Function purpose: generated callback event_func_3745 processes event block(s) 1599_6. Actions/conditions:
//        1599_6: sets CR_num to 9; sets CR to Shower; sets QuotaCheck to 1; plus 5 more actions.
void Frames::event_func_3745()
{
    // event 1599_6 : sets CR_num to 9; sets CR to Shower; sets QuotaCheck to 1; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1599_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (21))) goto event_1599_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (22))) goto event_1599_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1599_6_end;
        if (group_code_1 && group_code_schedules_shower_1) goto event_1599_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1599_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_shower_881);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(880, str_quotacheck_2063, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_9_327));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_check_npc_jq_running = true;
            int times = int(1);
            loop_check_npc_jq_index = 0;
            while (loop_check_npc_jq_index < times) {
                loop_check_npc_jq_6();
                if (!loop_check_npc_jq_running) break;
                loop_check_npc_jq_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_shower_1) {
            group_code_schedules_shower_1 = true;
            group_check_group_code_schedules_shower_1_2 = true;
            group_check_group_code_schedules_shower_1_0 = true;
            group_check_group_code_schedules_shower_1_1 = true;
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1599_6_end: ;
}
// Function purpose: generated callback event_func_3746 processes event block(s) 1600_6. Actions/conditions:
//        1600_6: sets CR_num to 12; sets CR to EveningRollcall; sets Lesson to Routines entry 12; plus 6 more
//        actions.
void Frames::event_func_3746()
{
    // event 1600_6 : sets CR_num to 12; sets CR to EveningRollcall; sets Lesson to Routines entry 12; plus 6 more actions
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1600_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (22))) goto event_1600_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1600_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_on(2005))) goto event_1600_6_end;
        if (group_code_1 && group_code_schedules_roll_call_1) goto event_1600_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1600_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(551, str_cr_num_1455, 12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(141, str_cr_707, str_eveningrollcall_2064);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_12_334));
        {
            loop_skipped_lesson_running = true;
            int times = int(1);
            loop_skipped_lesson_index = 0;
            while (loop_skipped_lesson_index < times) {
                loop_skipped_lesson_6();
                if (!loop_skipped_lesson_running) break;
                loop_skipped_lesson_index++;
            }
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_roll_call_1) {
            group_code_schedules_roll_call_1 = true;
            group_check_group_code_schedules_roll_call_1_1 = true;
            group_check_group_code_schedules_roll_call_1_0 = true;
            group_check_group_code_schedules_roll_call_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 1);
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1600_6_end: ;
}
// Function purpose: generated callback event_func_3747 processes event block(s) 1601_6. Actions/conditions:
//        1601_6: sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track.
void Frames::event_func_3747()
{
    // event 1601_6 : sets Lesson to Routines entry 3; sets Trigger_Lock_OuterDoors to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto event_1601_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (23))) goto event_1601_6_end;
        if (!(((Active*)get_instance(playerBase_instances))->alterables->flags.is_off(2005))) goto event_1601_6_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto event_1601_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_3_158));
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        if (!group_code_schedules_lockdown_new_1) {
            group_code_schedules_lockdown_new_1 = true;
            group_check_group_code_schedules_lockdown_new_1_0 = true;
            group_check_group_code_schedules_lockdown_new_1_1 = true;
            group_check_group_code_schedules_lockdown_new_1_2 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(877, str_trigger_lock_outerdoors_2060, 1);
        media.play_id(SOUND_BELL_12, 1-1);
    }
    event_1601_6_end: ;
}
// Function purpose: generated callback event_func_3748 processes event block(s) 1602_6. Actions/conditions:
//        1602_6: saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances,
//        it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions.
void Frames::event_func_3748()
{
    // event 1602_6 : saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions
    bool or_result_1602_6 = false;
    bool or_temp_result_1602_6_0 = false;
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto or_event_1602_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) >= (23))) goto or_event_1602_6_0_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2005))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_1602_6_0_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto or_event_1602_6_0_end;
        or_result_1602_6 = true;
        or_temp_result_1602_6_0 = true;
    }
    or_event_1602_6_0_end: ;
    playerBase_instances.clear_saved_selection();
    if (or_temp_result_1602_6_0) {
        playerBase_instances.save_selection();
    }
    // event 1602_6 : saves the current object selection; sets Lesson to ((INI*)get_instance(translationData_instances, it.current_index))->get_string(Routines, 1); sets Doors_Cell_Locked to 0; plus 5 more actions
    bool or_temp_result_1602_6_1 = false;
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1 && group_code_schedules_hour_tickover_camp_1)) goto or_event_1602_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(25, str_t_hour_488)) < (8))) goto or_event_1602_6_1_end;
        playerBase_instances.clear_selection();
        for (ObjectIterator it(playerBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2005))) { it.deselect(); continue; }
        }
        if (!playerBase_instances.has_selection()) goto or_event_1602_6_1_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto or_event_1602_6_1_end;
        if (group_code_1 && group_code_schedules_lockdown_new_1) goto or_event_1602_6_1_end;
        or_result_1602_6 = true;
        or_temp_result_1602_6_1 = true;
        or_event_1602_6_1_end: ;
        if (or_temp_result_1602_6_1) {
            playerBase_instances.save_selection();
        }
        if (!or_result_1602_6) goto or_final_or_event_1602_6_1_end;
        playerBase_instances.empty_selection();
        if (or_temp_result_1602_6_0 || or_temp_result_1602_6_1) {
            playerBase_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(233, str_lesson_847, ((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_routines_196, str_1_97));
        }
        {
            loop_intermission_running = true;
            int times = int(1);
            loop_intermission_index = 0;
            while (loop_intermission_index < times) {
                loop_intermission_6();
                if (!loop_intermission_running) break;
                loop_intermission_index++;
            }
        }
        {
            loop_dismissed_txt_running = true;
            int times = int(1);
            loop_dismissed_txt_index = 0;
            while (loop_dismissed_txt_index < times) {
                loop_dismissed_txt_6();
                if (!loop_dismissed_txt_running) break;
                loop_dismissed_txt_index++;
            }
        }
        if (!group_code_schedules_sleeping_1) {
            group_code_schedules_sleeping_1 = true;
            group_check_group_code_schedules_sleeping_1_1 = true;
            group_check_group_code_schedules_sleeping_1_0 = true;
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(157, str_doors_cell_locked_730, 0);
        }
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        media.play_id(SOUND_BELL_12, 1-1);
    }
    or_final_or_event_1602_6_1_end: ;
}
// Function purpose: generated callback event_func_3749 processes event block(s) 1634_6. Actions/conditions:
//        1634_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_3749()
{
    // event 1634_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_1634_6_end;
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1634_6_end;
            group_code_schedules_hour_tickover_1 = false;
    
    }
    event_1634_6_end: ;
}
// Function purpose: generated callback event_func_3750 processes event block(s) 1636_6. Actions/conditions:
//        1636_6: checks scene is active; skips if the event-specific game state condition is met; skips if scene is
//        active; this handler gates a game event without a direct v.
void Frames::event_func_3750()
{
    // event 1636_6 : checks scene is active; skips if the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a direct v
    {
        if (!(group_code_1)) goto event_1636_6_end;
        every_1636_6 += manager.dt;
        if (every_1636_6 < 1.0) goto event_1636_6_end;
        every_1636_6 -= 1.0;
        if (group_code_1 && group_code_schedules_sleeping_1) goto event_1636_6_end;
        {
            loop_guards_day_patrol_running = true;
            int times = int(guardBase_instances.size()-3);
            loop_guards_day_patrol_index = 0;
            while (loop_guards_day_patrol_index < times) {
                loop_guards_day_patrol_6();
                if (!loop_guards_day_patrol_running) break;
                loop_guards_day_patrol_index++;
            }
        }
    }
    event_1636_6_end: ;
}
// Function purpose: generated callback event_func_3751 processes event block(s) 1638_6. Actions/conditions:
//        1638_6: increments T_min by 1; sets TowersChecked to 0.
void Frames::event_func_3751()
{
    // event 1638_6 : increments T_min by 1; sets TowersChecked to 0
    {
        if (!(group_code_1)) goto event_1638_6_end;
        every_1638_6 += manager.dt;
        if (every_1638_6 < 0.7) goto event_1638_6_end;
        every_1638_6 -= 0.7;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1638_6_end;
        if (!((loadingCurtain_instances.size()) == (0))) goto event_1638_6_end;
        if (!((screenFade_instances.size()) == (0))) goto event_1638_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(522, str_t_min_1422, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(881, str_towerschecked_2065, 0);
    }
    event_1638_6_end: ;
}
// Function purpose: generated callback event_func_3752 processes event block(s) 1639_6. Actions/conditions:
//        1639_6: sets DestZone to Sleep; positions the target object; positions the target object.
void Frames::event_func_3752()
{
    // event 1639_6 : sets DestZone to Sleep; positions the target object; positions the target object
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1639_6_end;
        if (!group_check_group_code_schedules_sleeping_1_0) goto event_1639_6_end;
        group_check_group_code_schedules_sleeping_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(234, str_destzone_848, str_sleep_1105);
        {
            loop_sleep_inmates_running = true;
            int times = int(inmateBase_instances.size());
            loop_sleep_inmates_index = 0;
            while (loop_sleep_inmates_index < times) {
                loop_sleep_inmates_6();
                if (!loop_sleep_inmates_running) break;
                loop_sleep_inmates_index++;
            }
        }
        {
            loop_sleep_guards_running = true;
            int times = int(guardBase_instances.size());
            loop_sleep_guards_index = 0;
            while (loop_sleep_guards_index < times) {
                loop_sleep_guards_6();
                if (!loop_sleep_guards_running) break;
                loop_sleep_guards_index++;
            }
        }
        ((Active*)get_instance(active3_284_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(759, str_zones_yourcelltopx_1937)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(760, str_zones_yourcellbottomx_1938)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(759, str_zones_yourcelltopx_1937))/MathHelper()/2));
        ((Active*)get_instance(active3_284_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(761, str_zones_yourcelltopy_1939)+((((AssociateArray*)get_instance(gameVariables_instances))->get_value(762, str_zones_yourcellbottomy_1940)-((AssociateArray*)get_instance(gameVariables_instances))->get_value(761, str_zones_yourcelltopy_1939))/MathHelper()/2));
    }
    event_1639_6_end: ;
}
// Function purpose: generated callback event_func_3753 processes event block(s) 1640_6. Actions/conditions:
//        1640_6: sets MusicFade to Out.
void Frames::event_func_3753()
{
    // event 1640_6 : sets MusicFade to Out
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1640_6_end;
        if (!group_check_group_code_schedules_sleeping_1_1) goto event_1640_6_end;
        group_check_group_code_schedules_sleeping_1_1 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_out_1921);
    }
    event_1640_6_end: ;
}
// Function purpose: generated callback event_func_3754 processes event block(s) 1641_6. Actions/conditions:
//        1641_6: sets LastMusic to lightsout; sets MusicFade to In; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3754()
{
    // event 1641_6 : sets LastMusic to lightsout; sets MusicFade to In; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1641_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1641_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_1641_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1641_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_1641_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_1641_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1641_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1641_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_lightsout_2068);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        media.play(str_music_lightsout_ogg_2069, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1641_6_end: ;
}
// Function purpose: generated callback event_func_3755 processes event block(s) 1642_6. Actions/conditions:
//        1642_6: sets MusicFade to In; sets LastMusic to escteam_lightsout; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3755()
{
    // event 1642_6 : sets MusicFade to In; sets LastMusic to escteam_lightsout; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1642_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1642_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_1642_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1642_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1642_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_escteam_lightsout_2070);
        media.play(str_music_escteam_lightsout_ogg_2071, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1642_6_end: ;
}
// Function purpose: generated callback event_func_3756 processes event block(s) 1643_6. Actions/conditions:
//        1643_6: sets MusicFade to In; sets LastMusic to DTAF_lightsout; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3756()
{
    // event 1643_6 : sets MusicFade to In; sets LastMusic to DTAF_lightsout; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1643_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1643_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1643_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1643_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1643_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_dtaf_lightsout_2072);
        media.play(str_music_dtaf_lightsout_ogg_2073, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1643_6_end: ;
}
// Function purpose: generated callback event_func_3757 processes event block(s) 1644_6. Actions/conditions:
//        1644_6: sets MusicFade to In; sets LastMusic to SS_lightsout; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3757()
{
    // event 1644_6 : sets MusicFade to In; sets LastMusic to SS_lightsout; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1644_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1644_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_1644_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1644_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1644_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_lightsout_2074);
        media.play(str_music_ss_lightsout_ogg_2075, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1644_6_end: ;
}
// Function purpose: generated callback event_func_3758 processes event block(s) 1645_6. Actions/conditions:
//        1645_6: sets MusicFade to In; sets LastMusic to SS_lightsout; plays a sound or music track; plus 1 more
//        actions.
void Frames::event_func_3758()
{
    // event 1645_6 : sets MusicFade to In; sets LastMusic to SS_lightsout; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1645_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(749, str_musicfade_1920)) == (str_out_1921))) goto event_1645_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_1645_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(882, str_haltmusic_2066)) == (0))) goto event_1645_6_end;
        if (!((media.get_channel_volume(-1 +10)) == (0))) goto event_1645_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(749, str_musicfade_1920, str_in_1922);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(883, str_lastmusic_2067, str_ss_lightsout_2074);
        media.play(str_music_ss_lightsout_ogg_2075, 10-1, 0);
        media.set_channel_volume(10-1, 0);
    }
    event_1645_6_end: ;
}
// Function purpose: generated callback event_func_3759 processes event block(s) 1648_6. Actions/conditions:
//        1648_6: sets mID to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_3759()
{
    // event 1648_6 : sets mID to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1648_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1648_6_end;
        if (!check_not_overlap(inmateBase_instances, inmateBed_instances)) goto event_1648_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(135, str_mid_700, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_npc_gobed_running = true;
            int times = int(1);
            loop_npc_gobed_index = 0;
            while (loop_npc_gobed_index < times) {
                loop_npc_gobed_6();
                if (!loop_npc_gobed_running) break;
                loop_npc_gobed_index++;
            }
        }
    }
    event_1648_6_end: ;
}
// Function purpose: generated callback event_func_3760 processes event block(s) 1652_6. Actions/conditions:
//        1652_6: sets the selected object's numeric value to ((Active*)get_single(bedguard_337_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8.
void Frames::event_func_3760()
{
    // event 1652_6 : sets the selected object's numeric value to ((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1652_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1652_6_end;
        if (!check_not_overlap(guardBase_instances, bedguard_337_instances)) goto event_1652_6_end;
        bedguard_337_instances.clear_selection();
        for (ObjectIterator it(bedguard_337_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!bedguard_337_instances.has_selection()) goto event_1652_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(bedguard_337_instances, it.current_index, default_active_instance))->get_y()+8);
        }
    }
    event_1652_6_end: ;
}
// Function purpose: generated callback event_func_3761 processes event block(s) 1654_6. Actions/conditions:
//        1654_6: disables flag 87 (NPC cell-counting or presence state) on the selected object; sets Count_InCells to
//        0.
void Frames::event_func_3761()
{
    // event 1654_6 : disables flag 87 (NPC cell-counting or presence state) on the selected object; sets Count_InCells to 0
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1654_6_end;
        every_1654_6 += manager.dt;
        if (every_1654_6 < 1.0) goto event_1654_6_end;
        every_1654_6 -= 1.0;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1654_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(87);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(282, str_count_incells_939, 0);
        {
            loop_sleeping_inmates_running = true;
            int times = int(inmateBase_instances.size());
            loop_sleeping_inmates_index = 0;
            while (loop_sleeping_inmates_index < times) {
                loop_sleeping_inmates_6();
                if (!loop_sleeping_inmates_running) break;
                loop_sleeping_inmates_index++;
            }
        }
        {
            loop_sleeping_guards_running = true;
            int times = int(guardBase_instances.size());
            loop_sleeping_guards_index = 0;
            while (loop_sleeping_guards_index < times) {
                loop_sleeping_guards_6();
                if (!loop_sleeping_guards_running) break;
                loop_sleeping_guards_index++;
            }
        }
    }
    event_1654_6_end: ;
}
// Function purpose: generated callback event_func_3762 processes event block(s) 1674_6. Actions/conditions:
//        1674_6: sets Doors_Cell_Locked to 1; sets Doors_Outside_Locked to 1; sets the selected object's direction to
//        0; plus 1 more actions.
void Frames::event_func_3762()
{
    // event 1674_6 : sets Doors_Cell_Locked to 1; sets Doors_Outside_Locked to 1; sets the selected object's direction to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1674_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(282, str_count_incells_939)) == (inmateBase_instances.size()))) goto event_1674_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) > (0))) goto event_1674_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(157, str_doors_cell_locked_730)) == (0))) goto event_1674_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_8)) goto event_1674_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        media.play_id(SOUND_RUMBLE_15, 1-1);
    }
    event_1674_6_end: ;
}
// Function purpose: generated callback event_func_3763 processes event block(s) 1675_6. Actions/conditions:
//        1675_6: sets Doors_Cell_Locked to 1; sets Doors_Outside_Locked to 1; sets the selected object's direction to
//        0; plus 1 more actions.
void Frames::event_func_3763()
{
    // event 1675_6 : sets Doors_Cell_Locked to 1; sets Doors_Outside_Locked to 1; sets the selected object's direction to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1675_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(282, str_count_incells_939)) == (inmateBase_instances.size()))) goto event_1675_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(311, str_beddummy_1088)) == (1))) goto event_1675_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(157, str_doors_cell_locked_730)) == (0))) goto event_1675_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_8)) goto event_1675_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(157, str_doors_cell_locked_730, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(262, str_doors_outside_locked_919, 1);
        doorcell_174_instances.clear_selection();
        for (ObjectIterator it(doorcell_174_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        dooroutside_262_instances.clear_selection();
        for (ObjectIterator it(dooroutside_262_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        media.play_id(SOUND_RUMBLE_15, 1-1);
    }
    event_1675_6_end: ;
}
