#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_833 processes event block(s) 3483_6. Actions/conditions:
//        3483_6: removes background tiles at the target coordinates; draws the selected image or tile; sets
//        get_mouse_x()/MathHelper()/16 to get_mouse_y()/MathHelper()/16; plus 8 more actions.
void Frames::event_func_833()
{
    // event 3483_6 : removes background tiles at the target coordinates; draws the selected image or tile; sets get_mouse_x()/MathHelper()/16 to get_mouse_y()/MathHelper()/16; plus 8 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3483_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3483_6_end;
        layers[((Active*)get_instance(playerBase_instances))->layer->index+1-1].destroy_backgrounds((get_mouse_x()/MathHelper()/16)*16, (get_mouse_y()/MathHelper()/16)*16, 0);
        ((ActivePicture*)get_instance(activepicture_160_instances))->paste((get_mouse_x()/MathHelper()/16)*16, (get_mouse_y()/MathHelper()/16)*16, 0, 48, 16, 16, 0);
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(100, get_mouse_x()/MathHelper()/16, get_mouse_y()/MathHelper()/16, ((Active*)get_instance(playerBase_instances))->layer->index+1);
        dust_223_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dust_223(0, 0), 1);
            dust_223_instances.add_back();
        }
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerBase_instances))->layer->index+1-1);
            ((Active*)*it)->set_x(((get_mouse_x()/MathHelper()/16)*16)+8);
            ((Active*)*it)->set_y(((get_mouse_y()/MathHelper()/16)*16)+8);
        }
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_3483_6_end: ;
}
// Function purpose: generated callback event_func_834 processes event block(s) 3484_6. Actions/conditions:
//        3484_6: adds a guardalert 266 instance; sets the selected object's horizontal position to
//        (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to
//        (get_mouse_y()/MathHelper()/16)*16; plus 1 more actions.
void Frames::event_func_834()
{
    // event 3484_6 : adds a guardalert 266 instance; sets the selected object's horizontal position to (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to (get_mouse_y()/MathHelper()/16)*16; plus 1 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3484_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3484_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_3484_6_end;
        layers[7-1].destroy_backgrounds((get_mouse_x()/MathHelper()/16)*16, (get_mouse_y()/MathHelper()/16)*16, 0);
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 1);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((get_mouse_x()/MathHelper()/16)*16);
            ((Active*)*it)->set_y((get_mouse_y()/MathHelper()/16)*16);
            ((Active*)*it)->alterables->strings.set(0, str_brokenwall_600);
        }
    }
    event_3484_6_end: ;
}
void Frames::loop_grab_fakewall_check_6()
{
    event_func_833();
    event_func_834();
}
// Function purpose: generated callback event_func_835 processes event block(s) 705_6. Actions/conditions:
//        705_6: adds a ssreindeer 504 instance; sets the object position in the world; sets the selected object's
//        numeric value to selected object->get_x(); plus 1 more actions.
void Frames::event_func_835()
{
    // event 705_6 : adds a ssreindeer 504 instance; sets the object position in the world; sets the selected object's numeric value to selected object->get_x(); plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_705_6_end;
        waypointinmate2_311_instances.clear_selection();
        FrameObject * single_instance_705_6_0; single_instance_705_6_0 = pick_random(waypointinmate2_311_instances);
        if (single_instance_705_6_0 == NULL) goto event_705_6_end;
        ssreindeer_504_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ssreindeer_504(0, 0), 1);
            ssreindeer_504_instances.add_back();
        }
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_705_6_0);
            if (parent == NULL) goto pos_end_705_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_705_6_2: ;
        }
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
        }
    }
    event_705_6_end: ;
}
void Frames::loop_rdeer_6()
{
    event_func_835();
}
// Function purpose: generated callback event_func_836 processes event block(s) 1623_6. Actions/conditions:
//        1623_6: sets Pos_Janitor to 0.
void Frames::event_func_836()
{
    // event 1623_6 : sets Pos_Janitor to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1623_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) > (0))) goto event_1623_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(110, str_jq_janitor_672)) < (5))) goto event_1623_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_1623_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(109, str_pos_janitor_671, 0);
    }
    event_1623_6_end: ;
}
// Function purpose: generated callback event_func_837 processes event block(s) 1624_6. Actions/conditions:
//        1624_6: sets Pos_Janitor to 0.
void Frames::event_func_837()
{
    // event 1624_6 : sets Pos_Janitor to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1624_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) > (0))) goto event_1624_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(110, str_jq_janitor_672)) < (3))) goto event_1624_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_1624_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(109, str_pos_janitor_671, 0);
    }
    event_1624_6_end: ;
}
// Function purpose: generated callback event_func_838 processes event block(s) 1625_6. Actions/conditions:
//        1625_6: sets Pos_Gardening to 0.
void Frames::event_func_838()
{
    // event 1625_6 : sets Pos_Gardening to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1625_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) > (0))) goto event_1625_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(112, str_jq_gardening_674)) < (5))) goto event_1625_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(111, str_pos_gardening_673, 0);
    }
    event_1625_6_end: ;
}
// Function purpose: generated callback event_func_839 processes event block(s) 1626_6. Actions/conditions:
//        1626_6: sets Pos_Mailman to 0.
void Frames::event_func_839()
{
    // event 1626_6 : sets Pos_Mailman to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1626_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) > (0))) goto event_1626_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(114, str_jq_mailman_676)) < (3))) goto event_1626_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(113, str_pos_mailman_675, 0);
    }
    event_1626_6_end: ;
}
// Function purpose: generated callback event_func_840 processes event block(s) 1627_6. Actions/conditions:
//        1627_6: sets Pos_Library to 0.
void Frames::event_func_840()
{
    // event 1627_6 : sets Pos_Library to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1627_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) > (0))) goto event_1627_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(116, str_jq_library_678)) < (3))) goto event_1627_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(115, str_pos_library_677, 0);
    }
    event_1627_6_end: ;
}
// Function purpose: generated callback event_func_841 processes event block(s) 1628_6. Actions/conditions:
//        1628_6: sets Pos_Laundry to 0.
void Frames::event_func_841()
{
    // event 1628_6 : sets Pos_Laundry to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1628_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) > (0))) goto event_1628_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(118, str_jq_laundry_680)) < (15))) goto event_1628_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(117, str_pos_laundry_679, 0);
    }
    event_1628_6_end: ;
}
// Function purpose: generated callback event_func_842 processes event block(s) 1629_6. Actions/conditions:
//        1629_6: sets Pos_Deliveries to 0.
void Frames::event_func_842()
{
    // event 1629_6 : sets Pos_Deliveries to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1629_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) > (0))) goto event_1629_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(120, str_jq_deliveries_682)) < (7))) goto event_1629_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_pos_deliveries_681, 0);
    }
    event_1629_6_end: ;
}
// Function purpose: generated callback event_func_843 processes event block(s) 1630_6. Actions/conditions:
//        1630_6: sets Pos_Kitchen to 0.
void Frames::event_func_843()
{
    // event 1630_6 : sets Pos_Kitchen to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1630_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) > (0))) goto event_1630_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(122, str_jq_kitchen_684)) < (10))) goto event_1630_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_pos_kitchen_683, 0);
    }
    event_1630_6_end: ;
}
// Function purpose: generated callback event_func_844 processes event block(s) 1631_6. Actions/conditions:
//        1631_6: sets Pos_Tailor to 0.
void Frames::event_func_844()
{
    // event 1631_6 : sets Pos_Tailor to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1631_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) > (0))) goto event_1631_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(124, str_jq_tailor_686)) < (15))) goto event_1631_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(123, str_pos_tailor_685, 0);
    }
    event_1631_6_end: ;
}
// Function purpose: generated callback event_func_845 processes event block(s) 1632_6. Actions/conditions:
//        1632_6: sets Pos_Woodshop to 0.
void Frames::event_func_845()
{
    // event 1632_6 : sets Pos_Woodshop to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1632_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) > (0))) goto event_1632_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(126, str_jq_woodshop_688)) < (15))) goto event_1632_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(125, str_pos_woodshop_687, 0);
    }
    event_1632_6_end: ;
}
// Function purpose: generated callback event_func_846 processes event block(s) 1633_6. Actions/conditions:
//        1633_6: sets Pos_Metalshop to 0.
void Frames::event_func_846()
{
    // event 1633_6 : sets Pos_Metalshop to 0
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1633_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) > (0))) goto event_1633_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(128, str_jq_metalshop_690)) < (10))) goto event_1633_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(127, str_pos_metalshop_689, 0);
    }
    event_1633_6_end: ;
}
void Frames::loop_check_npc_jq_6()
{
    event_func_836();
    event_func_837();
    event_func_838();
    event_func_839();
    event_func_840();
    event_func_841();
    event_func_842();
    event_func_843();
    event_func_844();
    event_func_845();
    event_func_846();
}
// Function purpose: generated callback event_func_847 processes event block(s) 2944_6. Actions/conditions:
//        2944_6: sets OnMount to 1.
void Frames::event_func_847()
{
    // event 2944_6 : sets OnMount to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2944_6_end;
        playerBase_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_1)) goto event_2944_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_onmount_691, 1);
    }
    event_2944_6_end: ;
}
// Function purpose: generated callback event_func_848 processes event block(s) 2945_6. Actions/conditions:
//        2945_6: sets OnMount to 0.
void Frames::event_func_848()
{
    // event 2945_6 : sets OnMount to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2945_6_end;
        playerBase_instances.clear_selection();
        speedbag_439_instances.clear_selection();
        if (!check_overlap(playerBase_instances, speedbag_439_instances)) goto event_2945_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_onmount_691, 0);
    }
    event_2945_6_end: ;
}
// Function purpose: generated callback event_func_849 processes event block(s) 2946_6. Actions/conditions:
//        2946_6: sets OnMount to 0.
void Frames::event_func_849()
{
    // event 2946_6 : sets OnMount to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2946_6_end;
        playerBase_instances.clear_selection();
        punchbag_436_instances.clear_selection();
        if (!check_overlap(playerBase_instances, punchbag_436_instances)) goto event_2946_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_onmount_691, 0);
    }
    event_2946_6_end: ;
}
// Function purpose: generated callback event_func_850 processes event block(s) 2947_6. Actions/conditions:
//        2947_6: sets OnMount to 0.
void Frames::event_func_850()
{
    // event 2947_6 : sets OnMount to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2947_6_end;
        playerBase_instances.clear_selection();
        skippingmat_435_instances.clear_selection();
        if (!check_overlap(playerBase_instances, skippingmat_435_instances)) goto event_2947_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_onmount_691, 0);
    }
    event_2947_6_end: ;
}
// Function purpose: generated callback event_func_851 processes event block(s) 2948_6. Actions/conditions:
//        2948_6: sets OnMount to 0.
void Frames::event_func_851()
{
    // event 2948_6 : sets OnMount to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2948_6_end;
        playerBase_instances.clear_selection();
        joggingmat_407_instances.clear_selection();
        if (!check_overlap(playerBase_instances, joggingmat_407_instances)) goto event_2948_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_onmount_691, 0);
    }
    event_2948_6_end: ;
}
// Function purpose: generated callback event_func_852 processes event block(s) 2949_6. Actions/conditions:
//        2949_6: sets OnMount to 0.
void Frames::event_func_852()
{
    // event 2949_6 : sets OnMount to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2949_6_end;
        playerBase_instances.clear_selection();
        pushupmat_408_instances.clear_selection();
        if (!check_overlap(playerBase_instances, pushupmat_408_instances)) goto event_2949_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_onmount_691, 0);
    }
    event_2949_6_end: ;
}
void Frames::loop_mount_check_6()
{
    event_func_847();
    event_func_848();
    event_func_849();
    event_func_850();
    event_func_851();
    event_func_852();
}
// Function purpose: generated callback event_func_853 processes event block(s) 343_6. Actions/conditions:
//        343_6: sets the selected object's numeric value to gameVariables->get_value(130, bedNum); increments
//        bedNum by 1.
void Frames::event_func_853()
{
    // event 343_6 : sets the selected object's numeric value to gameVariables->get_value(130, bedNum); increments bedNum by 1
    {
        if (!(group_setup_1)) goto event_343_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (752))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (896))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_343_6_end;
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(130, str_bednum_692));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(130, str_bednum_692, 1);
    }
    event_343_6_end: ;
}
// Function purpose: generated callback event_func_854 processes event block(s) 344_6. Actions/conditions:
//        344_6: sets the selected object's numeric value to gameVariables->get_value(130, bedNum); increments
//        bedNum by 1.
void Frames::event_func_854()
{
    // event 344_6 : sets the selected object's numeric value to gameVariables->get_value(130, bedNum); increments bedNum by 1
    {
        if (!(group_setup_1)) goto event_344_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (816))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (896))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_344_6_end;
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(130, str_bednum_692));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(130, str_bednum_692, 1);
    }
    event_344_6_end: ;
}
// Function purpose: generated callback event_func_855 processes event block(s) 345_6. Actions/conditions:
//        345_6: sets the selected object's numeric value to gameVariables->get_value(130, bedNum); increments
//        bedNum by 1.
void Frames::event_func_855()
{
    // event 345_6 : sets the selected object's numeric value to gameVariables->get_value(130, bedNum); increments bedNum by 1
    {
        if (!(group_setup_1)) goto event_345_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (880))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (896))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_345_6_end;
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(130, str_bednum_692));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(130, str_bednum_692, 1);
    }
    event_345_6_end: ;
}
// Function purpose: generated callback event_func_856 processes event block(s) 346_6. Actions/conditions:
//        346_6: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_856()
{
    // event 346_6 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_setup_1)) goto event_346_6_end;
        {
            // nested foreach not implemented: setbedID
        }
    }
    event_346_6_end: ;
}
void Frames::loop_eteam_beds_6()
{
    event_func_853();
    event_func_854();
    event_func_855();
    event_func_856();
}
// Function purpose: generated callback event_func_857 processes event block(s) 3008_6. Actions/conditions:
//        3008_6: sets source to Misc entry 1; sets a game or interface text string; creates a dchar 214 object; plus
//        8 more actions.
void Frames::event_func_857()
{
    // event 3008_6 : sets source to Misc entry 1; sets a game or interface text string; creates a dchar 214 object; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3008_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3008_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_1_97));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)));
        FrameObject * single_instance_3008_6_0; single_instance_3008_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3008_6_0 == NULL)
                    single_instance_3008_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3008_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3008_6_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_3008_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-37);
        ((Text*)((Text*)single_instance_3008_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        ((Text*)((Text*)single_instance_3008_6_0))->blend_color.set(Color(234, 140, 0));
        ((Text*)((Text*)single_instance_3008_6_0))->move_front();
    }
    event_3008_6_end: ;
}
// Function purpose: generated callback event_func_858 processes event block(s) 3009_6. Actions/conditions:
//        3009_6: sets a game or interface text string; sets thisName to
//        StringReplace::replace(translationData->get_string(Misc, 43), $name, gameVariables->get_string(131,
//        thisName)); sets source to Misc entry 1; plus 10 more actions.
void Frames::event_func_858()
{
    // event 3009_6 : sets a game or interface text string; sets thisName to StringReplace::replace(translationData->get_string(Misc, 43), $name, gameVariables->get_string(131, thisName)); sets source to Misc entry 1; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3009_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(12, str_lootid_452)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_3009_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(131, str_thisname_694, StringReplace::replace(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->strings.get(0), str_officer_637, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(131, str_thisname_694, StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_43_695), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(131, str_thisname_694)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_1_97));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(131, str_thisname_694)));
        FrameObject * single_instance_3009_6_0; single_instance_3009_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3009_6_0 == NULL)
                    single_instance_3009_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3009_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3009_6_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_3009_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_y()-37);
        ((Text*)((Text*)single_instance_3009_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        ((Text*)((Text*)single_instance_3009_6_0))->blend_color.set(Color(123, 167, 255));
        ((Text*)((Text*)single_instance_3009_6_0))->move_front();
    }
    event_3009_6_end: ;
}
// Function purpose: generated callback event_func_859 processes event block(s) 3010_6. Actions/conditions:
//        3010_6: creates a slot 224 object; sets the selected object's string to Loot_Weapon.
void Frames::event_func_859()
{
    // event 3010_6 : creates a slot 224 object; sets the selected object's string to Loot_Weapon
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3010_6_end;
        FrameObject * single_instance_3010_6_0; single_instance_3010_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 38, parent->y + -5), parent->layer);
                if (single_instance_3010_6_0 == NULL)
                    single_instance_3010_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3010_6_0))->alterables->strings.set(0, str_loot_weapon_449);
    }
    event_3010_6_end: ;
}
// Function purpose: generated callback event_func_860 processes event block(s) 3011_6. Actions/conditions:
//        3011_6: creates a slot 224 object; sets the selected object's string to Loot_Outfit.
void Frames::event_func_860()
{
    // event 3011_6 : creates a slot 224 object; sets the selected object's string to Loot_Outfit
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3011_6_end;
        FrameObject * single_instance_3011_6_0; single_instance_3011_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 38, parent->y + 20), parent->layer);
                if (single_instance_3011_6_0 == NULL)
                    single_instance_3011_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3011_6_0))->alterables->strings.set(0, str_loot_outfit_450);
    }
    event_3011_6_end: ;
}
void Frames::loop_build_loot_gear_slots_6()
{
    event_func_857();
    event_func_858();
    event_func_859();
    event_func_860();
}
// Function purpose: generated callback event_func_861 processes event block(s) 513_6. Actions/conditions:
//        513_6: sets the object position in the world.
void Frames::event_func_861()
{
    // event 513_6 : sets the object position in the world
    {
        if (!(group_setup_1)) goto event_513_6_end;
        metaldetector_231_instances.clear_selection();
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_det_dir_index+1))) { it.deselect(); continue; }
        }
        if (!metaldetector_231_instances.has_selection()) goto event_513_6_end;
        {
            FrameObject * parent = ((Active*)get_single(metaldetector_231_instances));
            if (parent == NULL) goto pos_end_513_6_0;
            ((Active*)get_instance(upperlevelcheck_206_instances))->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_513_6_0: ;
        }
    }
    event_513_6_end: ;
}
// Function purpose: generated callback event_func_862 processes event block(s) 514_6. Actions/conditions:
//        514_6: sets the selected object's direction to 0.
void Frames::event_func_862()
{
    // event 514_6 : sets the selected object's direction to 0
    {
        if (!(group_setup_1)) goto event_514_6_end;
        if (((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background()) goto event_514_6_end;
        metaldetector_231_instances.clear_selection();
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_det_dir_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!metaldetector_231_instances.has_selection()) goto event_514_6_end;
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_514_6_end: ;
}
// Function purpose: generated callback event_func_863 processes event block(s) 515_6. Actions/conditions:
//        515_6: sets the selected object's direction to 24.
void Frames::event_func_863()
{
    // event 515_6 : sets the selected object's direction to 24
    {
        if (!(group_setup_1)) goto event_515_6_end;
        if (!(((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background())) goto event_515_6_end;
        metaldetector_231_instances.clear_selection();
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_det_dir_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!metaldetector_231_instances.has_selection()) goto event_515_6_end;
        for (ObjectIterator it(metaldetector_231_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_515_6_end: ;
}
void Frames::loop_det_dir_6()
{
    event_func_861();
    event_func_862();
    event_func_863();
}
// Function purpose: generated callback event_func_864 processes event block(s) 4279_6. Actions/conditions:
//        4279_6: sets rnd to randrange_event(2).
void Frames::event_func_864()
{
    // event 4279_6 : sets rnd to randrange_event(2)
    {
        if (!(group_loops_1)) goto event_4279_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2));
    }
    event_4279_6_end: ;
}
// Function purpose: generated callback event_func_865 processes event block(s) 4280_6. Actions/conditions:
//        4280_6: sets a game or interface text string.
void Frames::event_func_865()
{
    // event 4280_6 : sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4280_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (0))) goto event_4280_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containerbookchest_273_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_books_index+1), empty_string);
    }
    event_4280_6_end: ;
}
// Function purpose: generated callback event_func_866 processes event block(s) 4281_6. Actions/conditions:
//        4281_6: sets a game or interface text string.
void Frames::event_func_866()
{
    // event 4281_6 : sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4281_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_4281_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_container_613+number_to_string(((Active*)get_instance(containerbookchest_273_instances, default_active_instance))->alterables->values.get(0))+str_slot_617+number_to_string(loop_restock_books_index+1), str_50_100_697);
    }
    event_4281_6_end: ;
}
void Frames::loop_restock_books_6()
{
    event_func_864();
    event_func_865();
    event_func_866();
}
// Function purpose: generated callback event_func_867 processes event block(s) 1637_6. Actions/conditions:
//        1637_6: sets the selected object's numeric value to ((Active*)single_instance_1637_6_0)->get_x(); sets the
//        selected object's numeric value to ((Active*)single_instance_1637_6_0)->get_y().
void Frames::event_func_867()
{
    // event 1637_6 : sets the selected object's numeric value to ((Active*)single_instance_1637_6_0)->get_x(); sets the selected object's numeric value to ((Active*)single_instance_1637_6_0)->get_y()
    {
        if (!(group_code_1)) goto event_1637_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4+loop_guards_day_patrol_index))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (((AssociateArray*)get_instance(gameVariables_instances))->get_value(133, str_sd_guard_698)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(60))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1637_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_outfit_459+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25)))) != (empty_string))) goto event_1637_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_1637_6_0; single_instance_1637_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_1637_6_0 == NULL) goto event_1637_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_1637_6_0)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_1637_6_0)->get_y());
        }
    }
    event_1637_6_end: ;
}
void Frames::loop_guards_day_patrol_6()
{
    event_func_867();
}
// Function purpose: generated callback event_func_868 processes event block(s) 2927_6. Actions/conditions:
//        2927_6: splits saved text into fields; creates a itemshud 210 object; sets the selected object's numeric
//        value to string_to_number(stringtokenizer_81->get(0)); plus 10 more actions.
void Frames::event_func_868()
{
    // event 2927_6 : splits saved text into fields; creates a itemshud 210 object; sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(0)); plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2927_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_fill_loo_slots_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_toilet_533))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2927_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699))+str_slot_617+number_to_string(loop_fill_loo_slots_index+1))) != (empty_string))) goto event_2927_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(134, str_currenttoilet_699))+str_slot_617+number_to_string(loop_fill_loo_slots_index+1)), str__96);
        FrameObject * single_instance_2927_6_0; single_instance_2927_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(itemSlot_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2927_6_0 == NULL)
                    single_instance_2927_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2927_6_0))->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Active*)((Active*)single_instance_2927_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_2927_6_0))->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((Active*)((Active*)single_instance_2927_6_0))->alterables->values.set(1, loop_fill_loo_slots_index+1);
        ((Active*)((Active*)single_instance_2927_6_0))->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((Active*)((Active*)single_instance_2927_6_0))->alterables->strings.set(0, str_toilet_533);
        ((Active*)((Active*)single_instance_2927_6_0))->alterables->flags.enable(-2);
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_2927_6_end: ;
}
void Frames::loop_fill_loo_slots_6()
{
    event_func_868();
}
// Function purpose: generated callback event_func_869 processes event block(s) 4547_6. Actions/conditions:
//        4547_6: adds a snow 413 instance; sets the object's animation to 6; sets the selected object's horizontal
//        position to frame_left()+randrange_event(300); plus 8 more actions.
void Frames::event_func_869()
{
    // event 4547_6 : adds a snow 413 instance; sets the object's animation to 6; sets the selected object's horizontal position to frame_left()+randrange_event(300); plus 8 more actions
    {
        snow_413_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_snow_413(0, 0), 5);
            snow_413_instances.add_back();
        }
        for (ObjectIterator it(snow_413_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
            ((Active*)*it)->set_x(VITA_VIEW_LEFT(((Active*)*it), frame_left())+randrange_event(300));
            ((Active*)*it)->set_y(VITA_VIEW_TOP(((Active*)*it), frame_top())-16);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->blend_color.set_alpha_coefficient(randrange_event(100));
            ((Active*)*it)->get_movement()->set_speed(50+randrange_event(50));
            ((Active*)*it)->move_back();
        }
    }
    event_4547_6_end: ;
}
void Frames::loop_create_rain_6()
{
    event_func_869();
}
// Function purpose: generated callback event_func_870 processes event block(s) 1649_6. Actions/conditions:
//        1649_6: sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances,
//        it.current_index, default_active_instance))->get_x()+13; sets the selected object's numeric value to
//        ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+7.
void Frames::event_func_870()
{
    // event 1649_6 : sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_x()+13; sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+7
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1649_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1649_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_1649_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_x()+13);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+7);
        }
    }
    event_1649_6_end: ;
}
// Function purpose: generated callback event_func_871 processes event block(s) 1650_6. Actions/conditions:
//        1650_6: sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+10.
void Frames::event_func_871()
{
    // event 1650_6 : sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+10
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1650_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1650_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_1650_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+10);
        }
    }
    event_1650_6_end: ;
}
void Frames::loop_npc_gobed_6()
{
    event_func_870();
    event_func_871();
}
// Function purpose: generated callback event_func_872 processes event block(s) 3990_6. Actions/conditions:
//        3990_6: sets the selected object's horizontal position to selected object->get_x()+1.
void Frames::event_func_872()
{
    // event 3990_6 : sets the selected object's horizontal position to selected object->get_x()+1
    {
        if (!(group_code_1)) goto event_3990_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(136, str_curr_z_701)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(137, str_curr_x_702)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3990_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
    }
    event_3990_6_end: ;
}
// Function purpose: generated callback event_func_873 processes event block(s) 3991_6. Actions/conditions:
//        3991_6: sets the selected object's horizontal position to selected object->get_x()-1.
void Frames::event_func_873()
{
    // event 3991_6 : sets the selected object's horizontal position to selected object->get_x()-1
    {
        if (!(group_code_1)) goto event_3991_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(136, str_curr_z_701)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(137, str_curr_x_702)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3991_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
    }
    event_3991_6_end: ;
}
// Function purpose: generated callback event_func_874 processes event block(s) 3992_6. Actions/conditions:
//        3992_6: sets the selected object's vertical position to selected object->get_y()-1.
void Frames::event_func_874()
{
    // event 3992_6 : sets the selected object's vertical position to selected object->get_y()-1
    {
        if (!(group_code_1)) goto event_3992_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(136, str_curr_z_701)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(138, str_curr_y_703)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3992_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_3992_6_end: ;
}
// Function purpose: generated callback event_func_875 processes event block(s) 3993_6. Actions/conditions:
//        3993_6: sets the selected object's vertical position to selected object->get_y()+1.
void Frames::event_func_875()
{
    // event 3993_6 : sets the selected object's vertical position to selected object->get_y()+1
    {
        if (!(group_code_1)) goto event_3993_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(136, str_curr_z_701)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(138, str_curr_y_703)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3993_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_3993_6_end: ;
}
// Function purpose: generated callback event_func_876 processes event block(s) 3994_6. Actions/conditions:
//        3994_6: checks scene is active; skips if the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_876()
{
    // event 3994_6 : checks scene is active; skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_3994_6_end;
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(136, str_curr_z_701)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(137, str_curr_x_702)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(138, str_curr_y_703)))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_3994_6_end;
            loop_hehe_running = false;
    
    }
    event_3994_6_end: ;
}
void Frames::loop_hehe_6()
{
    event_func_872();
    event_func_873();
    event_func_874();
    event_func_875();
    event_func_876();
}
// Function purpose: generated callback event_func_877 processes event block(s) 2612_6. Actions/conditions:
//        2612_6: creates a slot 224 object; sets the target object's scale; sets the selected object's string to
//        Outfit.
void Frames::event_func_877()
{
    // event 2612_6 : creates a slot 224 object; sets the target object's scale; sets the selected object's string to Outfit
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2612_6_end;
        FrameObject * single_instance_2612_6_0; single_instance_2612_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + -25, parent->y + 30), parent->layer);
                if (single_instance_2612_6_0 == NULL)
                    single_instance_2612_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2612_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_2612_6_0))->alterables->strings.set(0, str_outfit_505);
    }
    event_2612_6_end: ;
}
// Function purpose: generated callback event_func_878 processes event block(s) 2613_6. Actions/conditions:
//        2613_6: splits saved text into fields; activates the get(0 event group; sets the selected object's numeric
//        value to 1; plus 11 more actions.
void Frames::event_func_878()
{
    // event 2613_6 : splits saved text into fields; activates the get(0 event group; sets the selected object's numeric value to 1; plus 11 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2613_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505)) != (empty_string))) goto event_2613_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_outfit_505))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2613_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_outfit_505), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
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
            if (parent == NULL) goto pos_end_2613_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2613_6_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_outfit_505);
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->set_scale(2);
        }
    }
    event_2613_6_end: ;
}
// Function purpose: generated callback event_func_879 processes event block(s) 2614_6. Actions/conditions:
//        2614_6: creates a slot 224 object; sets the target object's scale; sets the selected object's string to
//        Weapon.
void Frames::event_func_879()
{
    // event 2614_6 : creates a slot 224 object; sets the target object's scale; sets the selected object's string to Weapon
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2614_6_end;
        FrameObject * single_instance_2614_6_0; single_instance_2614_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 25, parent->y + 30), parent->layer);
                if (single_instance_2614_6_0 == NULL)
                    single_instance_2614_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2614_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_2614_6_0))->alterables->strings.set(0, str_weapon_704);
    }
    event_2614_6_end: ;
}
// Function purpose: generated callback event_func_880 processes event block(s) 2615_6. Actions/conditions:
//        2615_6: splits saved text into fields; activates the get(0 event group; sets the selected object's numeric
//        value to 1; plus 11 more actions.
void Frames::event_func_880()
{
    // event 2615_6 : splits saved text into fields; activates the get(0 event group; sets the selected object's numeric value to 1; plus 11 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2615_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704)) != (empty_string))) goto event_2615_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_weapon_704))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2615_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(139, str_weapon_704), str__96);
        ((INI*)get_instance(itemData_instances))->set_group(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
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
            if (parent == NULL) goto pos_end_2615_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2615_6_1: ;
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_weapon_704);
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
            ((Active*)*it)->alterables->values.set(7, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->values.set(6, ((INI*)get_instance(itemData_instances))->get_value_int(str_illegal_618));
            ((Active*)*it)->alterables->flags.enable(-2);
            ((Active*)*it)->set_scale(2);
        }
    }
    event_2615_6_end: ;
}
// Function purpose: generated callback event_func_881 processes event block(s) 2616_6. Actions/conditions:
//        2616_6: creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object;
//        plus 1 more actions.
void Frames::event_func_881()
{
    // event 2616_6 : creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2616_6_end;
        FrameObject * single_instance_2616_6_0; single_instance_2616_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttontext_445(parent->x + -63, parent->y + 50), parent->layer);
                if (single_instance_2616_6_0 == NULL)
                    single_instance_2616_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2616_6_0))->set_bold(0);
        ((Text*)((Text*)single_instance_2616_6_0))->blend_color.set(Color(105, 105, 105));
        ((Text*)((Text*)single_instance_2616_6_0))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_4_161)));
    }
    event_2616_6_end: ;
}
// Function purpose: generated callback event_func_882 processes event block(s) 2617_6. Actions/conditions:
//        2617_6: creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object;
//        plus 1 more actions.
void Frames::event_func_882()
{
    // event 2617_6 : creates a buttontext 445 object; sets text formatting to bold; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2617_6_end;
        FrameObject * single_instance_2617_6_0; single_instance_2617_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_buttontext_445(parent->x + -12, parent->y + 50), parent->layer);
                if (single_instance_2617_6_0 == NULL)
                    single_instance_2617_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2617_6_0))->set_bold(0);
        ((Text*)((Text*)single_instance_2617_6_0))->blend_color.set(Color(105, 105, 105));
        ((Text*)((Text*)single_instance_2617_6_0))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_5_164)));
    }
    event_2617_6_end: ;
}
void Frames::loop_stats_gear_6()
{
    event_func_877();
    event_func_878();
    event_func_879();
    event_func_880();
    event_func_881();
    event_func_882();
}
// Function purpose: generated callback event_func_883 processes event block(s) 2776_6. Actions/conditions:
//        2776_6: increments JobQuota by 3; plays a sound or music track.
void Frames::event_func_883()
{
    // event 2776_6 : increments JobQuota by 3; plays a sound or music track
    {
        if (!(group_code_1 && group_code_job_related_metalshop_1)) goto event_2776_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2776_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_metalshop_35))) goto event_2776_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 3);
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_2776_6_end: ;
}
void Frames::loop_metalshop_do_6()
{
    event_func_883();
}
// Function purpose: generated callback event_func_884 processes event block(s) 3532_6. Actions/conditions:
//        3532_6: sets Xpos to -44; sets Ypos to -27.
void Frames::event_func_884()
{
    // event 3532_6 : sets Xpos to -44; sets Ypos to -27
    {
        if (!(group_code_1)) goto event_3532_6_end;
        if (!((loop_build_desk_index) == (0))) goto event_3532_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(140, str_xpos_705, -44);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(80, str_ypos_193, -27);
    }
    event_3532_6_end: ;
}
// Function purpose: generated callback event_func_885 processes event block(s) 3533_6. Actions/conditions:
//        3533_6: creates a slot 224 object; sets the selected object's string to Desk; reads an object position for
//        this event; plus 6 more actions.
void Frames::event_func_885()
{
    // event 3533_6 : creates a slot 224 object; sets the selected object's string to Desk; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1)) goto event_3533_6_end;
        FrameObject * single_instance_3533_6_0; single_instance_3533_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3533_6_0 == NULL)
                    single_instance_3533_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3533_6_0))->alterables->strings.set(0, str_desk_32);
        ((Active*)((Active*)single_instance_3533_6_0))->set_x(((Active*)single_instance_3533_6_0)->get_x()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(140, str_xpos_705));
        ((Active*)((Active*)single_instance_3533_6_0))->set_y(((Active*)single_instance_3533_6_0)->get_y()+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        ((Active*)((Active*)single_instance_3533_6_0))->alterables->values.set(0, loop_build_desk_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(140, str_xpos_705, 22);
    }
    event_3533_6_end: ;
}
// Function purpose: generated callback event_func_886 processes event block(s) 3534_6. Actions/conditions:
//        3534_6: sets Xpos to -44; sets Ypos to selected object->get_value(80, Ypos)+22.
void Frames::event_func_886()
{
    // event 3534_6 : sets Xpos to -44; sets Ypos to selected object->get_value(80, Ypos)+22
    bool or_result_3534_6 = false;
    bool or_temp_result_3534_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_3534_6_0_end;
        if (!((loop_build_desk_index) == (4))) goto or_event_3534_6_0_end;
        or_result_3534_6 = true;
        or_temp_result_3534_6_0 = true;
    }
    or_event_3534_6_0_end: ;
    // event 3534_6 : sets Xpos to -44; sets Ypos to selected object->get_value(80, Ypos)+22
    bool or_temp_result_3534_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_3534_6_1_end;
        if (!((loop_build_desk_index) == (9))) goto or_event_3534_6_1_end;
        or_result_3534_6 = true;
        or_temp_result_3534_6_1 = true;
    }
    or_event_3534_6_1_end: ;
    // event 3534_6 : sets Xpos to -44; sets Ypos to selected object->get_value(80, Ypos)+22
    bool or_temp_result_3534_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_3534_6_2_end;
        if (!((loop_build_desk_index) == (14))) goto or_event_3534_6_2_end;
        or_result_3534_6 = true;
        or_temp_result_3534_6_2 = true;
        or_event_3534_6_2_end: ;
        if (!or_result_3534_6) goto or_final_or_event_3534_6_2_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(140, str_xpos_705, -44);
            ((AssociateArray*)*it)->set_value(80, str_ypos_193, ((AssociateArray*)*it)->get_value(80, str_ypos_193)+22);
        }
    }
    or_final_or_event_3534_6_2_end: ;
}
void Frames::loop_build_desk_6()
{
    event_func_884();
    event_func_885();
    event_func_886();
}
// Function purpose: generated callback event_func_887 processes event block(s) 1523_6. Actions/conditions:
//        1523_6: splits saved text into fields.
void Frames::event_func_887()
{
    // event 1523_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1523_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(missions_298_instances))->get_line(loop_missed_distract_index+1), str__254);
    }
    event_1523_6_end: ;
}
// Function purpose: generated callback event_func_888 processes event block(s) 1524_6. Actions/conditions:
//        1524_6: sets del_missions to gameVariables->get_string(142,
//        del_missions)+missions_298->get_line(loop_missed_distract_index+1)+#.
void Frames::event_func_888()
{
    // event 1524_6 : sets del_missions to gameVariables->get_string(142, del_missions)+missions_298->get_line(loop_missed_distract_index+1)+#
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1524_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_distract_706))) goto event_1524_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(141, str_cr_707)) == (((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)))) goto event_1524_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_del_missions_708, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_del_missions_708)+((ListObject*)get_instance(missions_298_instances))->get_line(loop_missed_distract_index+1)+str__346);
    }
    event_1524_6_end: ;
}
void Frames::loop_missed_distract_6()
{
    event_func_887();
    event_func_888();
}
// Function purpose: generated callback event_func_889 processes event block(s) 3149_6. Actions/conditions:
//        3149_6: unlocks the TinselTown achievement.
void Frames::event_func_889()
{
    // event 3149_6 : unlocks the TinselTown achievement
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3149_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_tinseltown_709)) goto event_3149_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_tinseltown_709);
    }
    event_3149_6_end: ;
}
void Frames::loop_ss_tinsel_6()
{
    event_func_889();
}
// Function purpose: generated callback event_func_890 processes event block(s) 676_6. Actions/conditions:
//        676_6: creates a buttons 245 object; positions the target object; positions the target object; plus 7 more
//        actions.
void Frames::event_func_890()
{
    // event 676_6 : creates a buttons 245 object; positions the target object; positions the target object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_676_6_end;
        FrameObject * single_instance_676_6_0; single_instance_676_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_676_6_0 == NULL)
                    single_instance_676_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_676_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_676_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_676_6_0))->force_animation(43);
        FrameObject * single_instance_676_6_1; single_instance_676_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_676_6_0)->x + 3, ((Active*)single_instance_676_6_0)->y + 3), ((Active*)single_instance_676_6_0)->layer);
            if (single_instance_676_6_1 == NULL)
                single_instance_676_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_676_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_676_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_676_6_end: ;
}
void Frames::loop_letter_dtaf_6()
{
    event_func_890();
}
// Function purpose: generated callback event_func_891 processes event block(s) 2268_6. Actions/conditions:
//        2268_6: adds a torch 331 instance; sets the selected object's numeric value to loop_create_torches_index+1.
void Frames::event_func_891()
{
    // event 2268_6 : adds a torch 331 instance; sets the selected object's numeric value to loop_create_torches_index+1
    {
        if (!(group_code_1)) goto event_2268_6_end;
        torch_331_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_torch_331(0, 0), 1);
            torch_331_instances.add_back();
        }
        for (ObjectIterator it(torch_331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_torches_index+1);
        }
    }
    event_2268_6_end: ;
}
void Frames::loop_create_torches_6()
{
    event_func_891();
}
// Function purpose: generated callback event_func_892 processes event block(s) 2195_6. Actions/conditions:
//        2195_6: splits saved text into fields.
void Frames::event_func_892()
{
    // event 2195_6 : splits saved text into fields
    {
        if (!(group_code_1)) goto event_2195_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_metal_scan_index+1)), str__96);
    }
    event_2195_6_end: ;
}
// Function purpose: generated callback event_func_893 processes event block(s) 2196_6. Actions/conditions:
//        2196_6: sets Illegal to 1.
void Frames::event_func_893()
{
    // event 2196_6 : sets Illegal to 1
    {
        if (!(group_code_1)) goto event_2196_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (str_125_710))) goto event_2196_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (str_184_711))) goto event_2196_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (str_227_712))) goto event_2196_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str_illegal_618)) > (0))) goto event_2196_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(143, str_illegal_618, 1);
    }
    event_2196_6_end: ;
}
// Function purpose: generated callback event_func_894 processes event block(s) 2197_6. Actions/conditions:
//        2197_6: sets Pouch to 1; sets PouchSlot to loop_metal_scan_index+1; sets PouchHP to
//        string_to_number(stringtokenizer_81->get(1)).
void Frames::event_func_894()
{
    // event 2197_6 : sets Pouch to 1; sets PouchSlot to loop_metal_scan_index+1; sets PouchHP to string_to_number(stringtokenizer_81->get(1))
    {
        if (!(group_code_1)) goto event_2197_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_125_710))) goto event_2197_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(144, str_pouch_713)) == (0))) goto event_2197_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(144, str_pouch_713, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(145, str_pouchslot_714, loop_metal_scan_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(146, str_pouchhp_715, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
    }
    event_2197_6_end: ;
}
// Function purpose: generated callback event_func_895 processes event block(s) 2198_6. Actions/conditions:
//        2198_6: sets Pouch to 1; sets PouchSlot to loop_metal_scan_index+1; sets PouchHP to
//        string_to_number(stringtokenizer_81->get(1)).
void Frames::event_func_895()
{
    // event 2198_6 : sets Pouch to 1; sets PouchSlot to loop_metal_scan_index+1; sets PouchHP to string_to_number(stringtokenizer_81->get(1))
    {
        if (!(group_code_1)) goto event_2198_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_184_711))) goto event_2198_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(144, str_pouch_713)) == (0))) goto event_2198_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(144, str_pouch_713, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(145, str_pouchslot_714, loop_metal_scan_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(146, str_pouchhp_715, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
    }
    event_2198_6_end: ;
}
// Function purpose: generated callback event_func_896 processes event block(s) 2199_6. Actions/conditions:
//        2199_6: sets Pouch to 1; sets PouchSlot to loop_metal_scan_index+1; sets PouchHP to
//        string_to_number(stringtokenizer_81->get(1)).
void Frames::event_func_896()
{
    // event 2199_6 : sets Pouch to 1; sets PouchSlot to loop_metal_scan_index+1; sets PouchHP to string_to_number(stringtokenizer_81->get(1))
    {
        if (!(group_code_1)) goto event_2199_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_227_712))) goto event_2199_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(144, str_pouch_713)) == (0))) goto event_2199_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(144, str_pouch_713, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(145, str_pouchslot_714, loop_metal_scan_index+1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(146, str_pouchhp_715, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
    }
    event_2199_6_end: ;
}
void Frames::loop_metal_scan_6()
{
    event_func_892();
    event_func_893();
    event_func_894();
    event_func_895();
    event_func_896();
}
// Function purpose: generated callback event_func_897 processes event block(s) 2434_6. Actions/conditions:
//        2434_6: creates a slot 224 object; applies a visual shader; changes the selected object transparency; plus
//        12 more actions.
void Frames::event_func_897()
{
    // event 2434_6 : creates a slot 224 object; applies a visual shader; changes the selected object transparency; plus 12 more actions
    {
        if (!(group_code_1)) goto event_2434_6_end;
        FrameObject * single_instance_2434_6_0; single_instance_2434_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_itemSlot(parent->x + -75, parent->y + 0), parent->layer);
                if (single_instance_2434_6_0 == NULL)
                    single_instance_2434_6_0 = new_obj;
            }
        }
        {
            ((Active*)single_instance_2434_6_0)->set_shader(Render::MONOCHROME);
        }
        ((Active*)((Active*)single_instance_2434_6_0))->blend_color.set_alpha_coefficient(150);
        ((Active*)((Active*)single_instance_2434_6_0))->set_scale(2);
        ((Active*)((Active*)single_instance_2434_6_0))->alterables->strings.set(0, str_craftnote_716);
        FrameObject * single_instance_2434_6_1; single_instance_2434_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hudItem(parent->x + -75, parent->y + 0), parent->layer);
                if (single_instance_2434_6_1 == NULL)
                    single_instance_2434_6_1 = new_obj;
            }
        }
        {
            ((Active*)single_instance_2434_6_1)->set_shader(Render::MONOCHROME);
        }
        ((Active*)((Active*)single_instance_2434_6_1))->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(147, str_tempitemid_717));
        ((Active*)((Active*)single_instance_2434_6_1))->set_scale(2);
        ((Active*)((Active*)single_instance_2434_6_1))->blend_color.set_alpha_coefficient(100);
        ((Active*)((Active*)single_instance_2434_6_1))->alterables->flags.enable(-2);
        ((Active*)((Active*)single_instance_2434_6_1))->alterables->strings.set(0, str_craftnote_716);
    }
    event_2434_6_end: ;
}
void Frames::loop_craftnote_icon_6()
{
    event_func_897();
}
// Function purpose: generated callback event_func_898 processes event block(s) 723_6. Actions/conditions:
//        723_6: adds a patroljeep 416 instance; sets the selected object's direction to 24; draws the selected image
//        or tile; plus 1 more actions.
void Frames::event_func_898()
{
    // event 723_6 : adds a patroljeep 416 instance; sets the selected object's direction to 24; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_feb16_1)) goto event_723_6_end;
        patroljeep_416_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_patroljeep_416(1416, 88), 1);
            patroljeep_416_instances.add_back();
        }
        for (ObjectIterator it(patroljeep_416_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
    }
    event_723_6_end: ;
}
void Frames::loop_setup_feb16_6()
{
    event_func_898();
}
// Function purpose: generated callback event_func_899 processes event block(s) 2801_6. Actions/conditions:
//        2801_6: increments JobQuota by 3; plays a sound or music track.
void Frames::event_func_899()
{
    // event 2801_6 : increments JobQuota by 3; plays a sound or music track
    {
        if (!(group_code_1)) goto event_2801_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2801_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_2801_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 3);
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_2801_6_end: ;
}
void Frames::loop_deliv_6()
{
    event_func_899();
}
// Function purpose: generated callback event_func_900 processes event block(s) 1522_6. Actions/conditions:
//        1522_6: sets a stored numeric value.
void Frames::event_func_900()
{
    // event 1522_6 : sets a stored numeric value
    {
        if (!(group_code_1 && group_code_schedules_hour_tickover_1)) goto event_1522_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_opn_cap_525+number_to_string(loop_reset_opn_caps_index+1), 0);
    }
    event_1522_6_end: ;
}
void Frames::loop_reset_opn_caps_6()
{
    event_func_900();
}
// Function purpose: generated callback event_func_901 processes event block(s) 3162_6. Actions/conditions:
//        3162_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_901()
{
    // event 3162_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3162_6_end;
        layers[2-1].destroy_backgrounds(1088, 240, 0);
        layers[2-1].destroy_backgrounds(1088, 256, 0);
        layers[2-1].destroy_backgrounds(1104, 240, 0);
        layers[2-1].destroy_backgrounds(1104, 256, 0);
    }
    event_3162_6_end: ;
}
// Function purpose: generated callback event_func_902 processes event block(s) 3163_6. Actions/conditions:
//        3163_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_902()
{
    // event 3163_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3163_6_end;
        layers[7-1].destroy_backgrounds(1088, 240, 0);
        layers[7-1].destroy_backgrounds(1088, 256, 0);
        layers[7-1].destroy_backgrounds(1104, 240, 0);
        layers[7-1].destroy_backgrounds(1104, 256, 0);
    }
    event_3163_6_end: ;
}
// Function purpose: generated callback event_func_903 processes event block(s) 3164_6. Actions/conditions:
//        3164_6: adds a sssobjects 502 instance; sets the object's animation to 7; sets the selected object's
//        direction to 24; plus 9 more actions.
void Frames::event_func_903()
{
    // event 3164_6 : adds a sssobjects 502 instance; sets the object's animation to 7; sets the selected object's direction to 24; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3164_6_end;
        sssobjects_502_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_sssobjects_502(1088, 240), 1);
            sssobjects_502_instances.add_back();
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->paste(0);
        }
        dust_223_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(sssobjects_502_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 2, parent->y + 16), parent->layer);
                dust_223_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 30, parent->y + 16), parent->layer);
                dust_223_instances.add_back();
            }
        }
        for (ObjectIterator it(sssobjects_502_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_RUMBLE_15, 1-1);
    }
    event_3164_6_end: ;
}
void Frames::loop_ss_openwall_6()
{
    event_func_901();
    event_func_902();
    event_func_903();
}
// Function purpose: generated callback event_func_904 processes event block(s) 3495_6. Actions/conditions:
//        3495_6: sets the object's animation to 1.
void Frames::event_func_904()
{
    // event 3495_6 : sets the object's animation to 1
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3495_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3495_6_end;
        cursor_178_instances.clear_selection();
        qualifier_6.clear_selection();
        if (!check_overlap(cursor_178_instances, qualifier_6)) goto event_3495_6_end;
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_3495_6_end: ;
}
void Frames::loop_bedsheet_check_6()
{
    event_func_904();
}
// Function purpose: generated callback event_func_905 processes event block(s) 1716_6. Actions/conditions:
//        1716_6: chooses a random value; splits saved text into fields; sets a game or interface text string; plus 5
//        more actions.
void Frames::event_func_905()
{
    // event 1716_6 : chooses a random value; splits saved text into fields; sets a game or interface text string; plus 5 more actions
    {
        if (!(group_code_1 && group_code_schedules_roll_call_1)) goto event_1716_6_end;
        craftsort_346_instances.clear_selection();
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->current_line = randrange_event(((ListObject*)*it)->get_count())+1;
        }
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_single(craftsort_346_instances))->get_current_line(), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_sd_718+number_to_string(loop_shakedown_pick_index+1)+str_name_719, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_sd_718+number_to_string(loop_shakedown_pick_index+1)+str_id_720, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        for (ObjectIterator it(craftsort_346_instances); !it.end(); ++it) {
            ((ListObject*)*it)->delete_line(((ListObject*)*it)->current_line);
        }
    }
    event_1716_6_end: ;
}
