#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_669 processes event block(s) 3501_6. Actions/conditions:
//        3501_6: adds a guardalert 266 instance; sets the selected object's horizontal position to
//        (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to
//        (get_mouse_y()/MathHelper()/16)*16; plus 1 more actions.
void Frames::event_func_669()
{
    // event 3501_6 : adds a guardalert 266 instance; sets the selected object's horizontal position to (get_mouse_x()/MathHelper()/16)*16; sets the selected object's vertical position to (get_mouse_y()/MathHelper()/16)*16; plus 1 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3501_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3501_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(90, str_grabtype_597)) == (str_poster_598))) goto event_3501_6_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(91, str_sheetid_599)))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_3501_6_end;
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
    event_3501_6_end: ;
}
// Function purpose: generated callback event_func_670 processes event block(s) 3502_6. Actions/conditions:
//        3502_6: removes the selected object.
void Frames::event_func_670()
{
    // event 3502_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3502_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3502_6_end;
        sheetsposters_294_instances.clear_selection();
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(91, str_sheetid_599)))) { it.deselect(); continue; }
        }
        if (!sheetsposters_294_instances.has_selection()) goto event_3502_6_end;
        for (ObjectIterator it(sheetsposters_294_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3502_6_end: ;
}
void Frames::loop_grabsheet_check_6()
{
    event_func_668();
    event_func_669();
    event_func_670();
}
// Function purpose: generated callback event_func_671 processes event block(s) 1487_6. Actions/conditions:
//        1487_6: moves the selected object to the front.
void Frames::event_func_671()
{
    // event 1487_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1487_6_end;
        scan_187_instances.clear_selection();
        qualifier_1.clear_selection();
        if (!check_overlap(scan_187_instances, qualifier_1)) goto event_1487_6_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1487_6_end: ;
}
// Function purpose: generated callback event_func_672 processes event block(s) 1488_6. Actions/conditions:
//        1488_6: moves the selected object to the front.
void Frames::event_func_672()
{
    // event 1488_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1488_6_end;
        scan_187_instances.clear_selection();
        qualifier_3.clear_selection();
        if (!check_overlap(scan_187_instances, qualifier_3)) goto event_1488_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_1488_6_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1488_6_end: ;
}
// Function purpose: generated callback event_func_673 processes event block(s) 1489_6. Actions/conditions:
//        1489_6: moves the selected object to the front.
void Frames::event_func_673()
{
    // event 1489_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1489_6_end;
        scan_187_instances.clear_selection();
        ssreindeer_504_instances.clear_selection();
        if (!check_overlap(scan_187_instances, ssreindeer_504_instances)) goto event_1489_6_end;
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1489_6_end: ;
}
// Function purpose: generated callback event_func_674 processes event block(s) 1490_6. Actions/conditions:
//        1490_6: moves the selected object to the front.
void Frames::event_func_674()
{
    // event 1490_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1490_6_end;
        scan_187_instances.clear_selection();
        serviceNpc_instances.clear_selection();
        if (!check_overlap(scan_187_instances, serviceNpc_instances)) goto event_1490_6_end;
        for (ObjectIterator it(serviceNpc_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1490_6_end: ;
}
// Function purpose: generated callback event_func_675 processes event block(s) 1491_6. Actions/conditions:
//        1491_6: moves the selected object to the front.
void Frames::event_func_675()
{
    // event 1491_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1491_6_end;
        scan_187_instances.clear_selection();
        qualifier_16.clear_selection();
        if (!check_overlap(scan_187_instances, qualifier_16)) goto event_1491_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_1491_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1491_6_end: ;
}
// Function purpose: generated callback event_func_676 processes event block(s) 1492_6. Actions/conditions:
//        1492_6: moves the selected object to the front.
void Frames::event_func_676()
{
    // event 1492_6 : moves the selected object to the front
    {
        if (!(group_code_1)) goto event_1492_6_end;
        scan_187_instances.clear_selection();
        dust_223_instances.clear_selection();
        if (!check_overlap(scan_187_instances, dust_223_instances)) goto event_1492_6_end;
        for (ObjectIterator it(dust_223_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1492_6_end: ;
}
// Function purpose: generated callback event_func_677 processes event block(s) 1493_6. Actions/conditions:
//        1493_6: sets the selected object's vertical position to scan_187->get_y()+1.
void Frames::event_func_677()
{
    // event 1493_6 : sets the selected object's vertical position to scan_187->get_y()+1
    {
        if (!(group_code_1)) goto event_1493_6_end;
        ((Active*)get_instance(scan_187_instances))->set_y(((Active*)get_instance(scan_187_instances))->get_y()+1);
    }
    event_1493_6_end: ;
}
void Frames::loop_scan_6()
{
    event_func_671();
    event_func_672();
    event_func_673();
    event_func_674();
    event_func_675();
    event_func_676();
    event_func_677();
}
// Function purpose: generated callback event_func_678 processes event block(s) 637_6. Actions/conditions:
//        637_6: adds a eteamtank 474 instance.
void Frames::event_func_678()
{
    // event 637_6 : adds a eteamtank 474 instance
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_637_6_end;
        eteamtank_474_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_eteamtank_474(1584, 768), 1);
            eteamtank_474_instances.add_back();
        }
    }
    event_637_6_end: ;
}
// Function purpose: generated callback event_func_679 processes event block(s) 638_6. Actions/conditions:
//        638_6: sets the selected object's numeric value to gameVariables->get_value(92, tankstage); sets the
//        object's animation to 5.
void Frames::event_func_679()
{
    // event 638_6 : sets the selected object's numeric value to gameVariables->get_value(92, tankstage); sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_638_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(92, str_tankstage_601)) >= (2))) goto event_638_6_end;
        eteamtank_474_instances.clear_selection();
        for (ObjectIterator it(eteamtank_474_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(92, str_tankstage_601));
            ((Active*)*it)->force_animation(5);
        }
    }
    event_638_6_end: ;
}
// Function purpose: generated callback event_func_680 processes event block(s) 639_6. Actions/conditions:
//        639_6: adds a eteamtank2 475 instance; sets the selected object's direction to 0; adds a pathfinding
//        obstacle; }; plus 5 more actions.
void Frames::event_func_680()
{
    // event 639_6 : adds a eteamtank2 475 instance; sets the selected object's direction to 0; adds a pathfinding obstacle; }; plus 5 more actions
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_639_6_end;
        eteamtank2_475_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_eteamtank2_475(704, 576), 1);
            eteamtank2_475_instances.add_back();
        }
        for (ObjectIterator it(eteamtank2_475_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        {
            PathPlanner * planner = ((PathPlanner*)get_instance(pathfindingguards_247_instances));
            for (ObjectIterator it(eteamtank2_475_instances); !it.end(); ++it) {
    planner->add_obstacle(((Active*)*it));        }
        }
        for (ObjectIterator it(eteamtank2_475_instances); !it.end(); ++it) {
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
    }
    event_639_6_end: ;
}
// Function purpose: generated callback event_func_681 processes event block(s) 640_6. Actions/conditions:
//        640_6: adds a eteamtank2 475 instance; sets the selected object's direction to 16; draws the selected image
//        or tile; plus 1 more actions.
void Frames::event_func_681()
{
    // event 640_6 : adds a eteamtank2 475 instance; sets the selected object's direction to 16; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_640_6_end;
        eteamtank2_475_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_eteamtank2_475(704, 576), 1);
            eteamtank2_475_instances.add_back();
        }
        for (ObjectIterator it(eteamtank2_475_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->paste(0);
            ((Active*)*it)->destroy();
        }
    }
    event_640_6_end: ;
}
// Function purpose: generated callback event_func_682 processes event block(s) 641_6. Actions/conditions:
//        641_6: adds a eteamtank2 475 instance; sets the selected object's direction to 24.
void Frames::event_func_682()
{
    // event 641_6 : adds a eteamtank2 475 instance; sets the selected object's direction to 24
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_641_6_end;
        eteamtank2_475_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_eteamtank2_475(704, 576), 1);
            eteamtank2_475_instances.add_back();
        }
        for (ObjectIterator it(eteamtank2_475_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_641_6_end: ;
}
// Function purpose: generated callback event_func_683 processes event block(s) 642_6. Actions/conditions:
//        642_6: adds a desksdlc 482 instance; sets the selected object's direction to 24; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_683()
{
    // event 642_6 : adds a desksdlc 482 instance; sets the selected object's direction to 24; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_642_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(720, 224), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_a_72);
        }
    }
    event_642_6_end: ;
}
// Function purpose: generated callback event_func_684 processes event block(s) 643_6. Actions/conditions:
//        643_6: adds a desksdlc 482 instance; sets the selected object's direction to 24; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_684()
{
    // event 643_6 : adds a desksdlc 482 instance; sets the selected object's direction to 24; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_643_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(384, 1232), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_b_602);
        }
    }
    event_643_6_end: ;
}
// Function purpose: generated callback event_func_685 processes event block(s) 644_6. Actions/conditions:
//        644_6: adds a desksdlc 482 instance; sets the selected object's direction to 24; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_685()
{
    // event 644_6 : adds a desksdlc 482 instance; sets the selected object's direction to 24; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_644_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(1952, 1232), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_c_603);
        }
    }
    event_644_6_end: ;
}
// Function purpose: generated callback event_func_686 processes event block(s) 645_6. Actions/conditions:
//        645_6: adds a desksdlc 482 instance; sets the selected object's direction to 24; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_686()
{
    // event 645_6 : adds a desksdlc 482 instance; sets the selected object's direction to 24; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_645_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(352, 512), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_d_51);
        }
    }
    event_645_6_end: ;
}
// Function purpose: generated callback event_func_687 processes event block(s) 646_6. Actions/conditions:
//        646_6: sets the object's animation to 5.
void Frames::event_func_687()
{
    // event 646_6 : sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_646_6_end;
        licenseprints_329_instances.clear_selection();
        for (ObjectIterator it(licenseprints_329_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        hiding_379_instances.clear_selection();
        for (ObjectIterator it(hiding_379_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_646_6_end: ;
}
// Function purpose: generated callback event_func_688 processes event block(s) 647_6. Actions/conditions:
//        647_6: adds a payphone 386 instance.
void Frames::event_func_688()
{
    // event 647_6 : adds a payphone 386 instance
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_647_6_end;
        payphone_386_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_payphone_386(1088, 656), 1);
            payphone_386_instances.add_back();
        }
    }
    event_647_6_end: ;
}
// Function purpose: generated callback event_func_689 processes event block(s) 648_6. Actions/conditions:
//        648_6: adds a eteamwalblock 483 instance.
void Frames::event_func_689()
{
    // event 648_6 : adds a eteamwalblock 483 instance
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_648_6_end;
        eteamwalblock_483_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_eteamwalblock_483(1904, 768), 1);
            eteamwalblock_483_instances.add_back();
        }
    }
    event_648_6_end: ;
}
void Frames::loop_setup_eteam_6()
{
    event_func_678();
    event_func_679();
    event_func_680();
    event_func_681();
    event_func_682();
    event_func_683();
    event_func_684();
    event_func_685();
    event_func_686();
    event_func_687();
    event_func_688();
    event_func_689();
}
// Function purpose: generated callback event_func_690 processes event block(s) 2780_6. Actions/conditions:
//        2780_6: increments JobQuota by 6; plays a sound or music track.
void Frames::event_func_690()
{
    // event 2780_6 : increments JobQuota by 6; plays a sound or music track
    {
        if (!(group_code_1 && group_code_job_related_woodshop_1)) goto event_2780_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2780_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_woodshop_21))) goto event_2780_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 6);
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_2780_6_end: ;
}
void Frames::loop_woodshop_do_6()
{
    event_func_690();
}
// Function purpose: generated callback event_func_691 processes event block(s) 1029_6. Actions/conditions:
//        1029_6: sets a game or interface text string; sets a game or interface text string; sets a game or interface
//        text string.
void Frames::event_func_691()
{
    // event 1029_6 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1029_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(93, str_bogid_604))+str_slot1_534, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(93, str_bogid_604))+str_slot2_535, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(93, str_bogid_604))+str_slot3_536, empty_string);
    }
    event_1029_6_end: ;
}
// Function purpose: generated callback event_func_692 processes event block(s) 1030_6. Actions/conditions:
//        1030_6: removes the selected object.
void Frames::event_func_692()
{
    // event 1030_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1030_6_end;
        water_303_instances.clear_selection();
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(93, str_bogid_604)))) { it.deselect(); continue; }
        }
        if (!water_303_instances.has_selection()) goto event_1030_6_end;
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1030_6_end: ;
}
void Frames::loop_guard_unblock_loo_6()
{
    event_func_691();
    event_func_692();
}
// Function purpose: generated callback event_func_693 processes event block(s) 1386_6. Actions/conditions:
//        1386_6: sets Heat to 100.
void Frames::event_func_693()
{
    // event 1386_6 : sets Heat to 100
    {
        if (!(group_code_1)) goto event_1386_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(25))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_1386_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 100);
    }
    event_1386_6_end: ;
}
// Function purpose: generated callback event_func_694 processes event block(s) 1387_6. Actions/conditions:
//        1387_6: sets the object's animation to 0.
void Frames::event_func_694()
{
    // event 1387_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_1387_6_end;
        qualifier_13.clear_selection();
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(94, str_charid_605)))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_1387_6_end;
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1387_6_end: ;
}
// Function purpose: generated callback event_func_695 processes event block(s) 1388_6. Actions/conditions:
//        1388_6: sets a stored numeric value; sets EndString to Caught entry 15.
void Frames::event_func_695()
{
    // event 1388_6 : sets a stored numeric value; sets EndString to Caught entry 15
    {
        if (!(group_code_1)) goto event_1388_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_stolenkeys_606+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_charz_607)))) > (0))) goto event_1388_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_stolenkeys_606+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(95, str_charz_607)), 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_15_608));
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
    }
    event_1388_6_end: ;
}
void Frames::loop_guard_wake_6()
{
    event_func_693();
    event_func_694();
    event_func_695();
}
// Function purpose: generated callback event_func_696 processes event block(s) 2589_6. Actions/conditions:
//        2589_6: creates a profilestats 432 object; sets a game or interface text string.
void Frames::event_func_696()
{
    // event 2589_6 : creates a profilestats 432 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2589_6_end;
        FrameObject * single_instance_2589_6_0; single_instance_2589_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -35), parent->layer);
                if (single_instance_2589_6_0 == NULL)
                    single_instance_2589_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2589_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_1_97));
    }
    event_2589_6_end: ;
}
// Function purpose: generated callback event_func_697 processes event block(s) 2590_6. Actions/conditions:
//        2590_6: creates a profilestats 432 object; sets a game or interface text string.
void Frames::event_func_697()
{
    // event 2590_6 : creates a profilestats 432 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2590_6_end;
        FrameObject * single_instance_2590_6_0; single_instance_2590_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -24), parent->layer);
                if (single_instance_2590_6_0 == NULL)
                    single_instance_2590_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2590_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_2_155));
    }
    event_2590_6_end: ;
}
// Function purpose: generated callback event_func_698 processes event block(s) 2591_6. Actions/conditions:
//        2591_6: creates a profilestats 432 object; sets a game or interface text string.
void Frames::event_func_698()
{
    // event 2591_6 : creates a profilestats 432 object; sets a game or interface text string
    {
        if (!(group_code_1 && group_code_my_stats_1)) goto event_2591_6_end;
        FrameObject * single_instance_2591_6_0; single_instance_2591_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_profilestats_432(parent->x + -106, parent->y + -13), parent->layer);
                if (single_instance_2591_6_0 == NULL)
                    single_instance_2591_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_2591_6_0))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_stats_609, str_3_158));
    }
    event_2591_6_end: ;
}
void Frames::loop_prof_stat_texts_6()
{
    event_func_696();
    event_func_697();
    event_func_698();
}
// Function purpose: generated callback event_func_699 processes event block(s) 578_6. Actions/conditions:
//        578_6: splits saved text into fields.
void Frames::event_func_699()
{
    // event 578_6 : splits saved text into fields
    {
        if (!(group_setup_1)) goto event_578_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_removeslats_index), str__96);
    }
    event_578_6_end: ;
}
void Frames::loop_load_removeslats_6()
{
    event_func_699();
}
// Function purpose: generated callback event_func_700 processes event block(s) 3943_6. Actions/conditions:
//        3943_6: splits saved text into fields.
void Frames::event_func_700()
{
    // event 3943_6 : splits saved text into fields
    {
        if (!(group_code_1)) goto event_3943_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(loop_ug_lighting_index+1)), str__96);
    }
    event_3943_6_end: ;
}
// Function purpose: generated callback event_func_701 processes event block(s) 3944_6. Actions/conditions:
//        3944_6: sets LightSize to 1.
void Frames::event_func_701()
{
    // event 3944_6 : sets LightSize to 1
    {
        if (!(group_code_1)) goto event_3944_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_54_610))) goto event_3944_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(96, str_lightsize_611)) < (1))) goto event_3944_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(96, str_lightsize_611, 1);
    }
    event_3944_6_end: ;
}
// Function purpose: generated callback event_func_702 processes event block(s) 3945_6. Actions/conditions:
//        3945_6: sets LightSize to 2.
void Frames::event_func_702()
{
    // event 3945_6 : sets LightSize to 2
    {
        if (!(group_code_1)) goto event_3945_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_60_612))) goto event_3945_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(96, str_lightsize_611)) < (2))) goto event_3945_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(96, str_lightsize_611, 2);
    }
    event_3945_6_end: ;
}
void Frames::loop_ug_lighting_6()
{
    event_func_700();
    event_func_701();
    event_func_702();
}
// Function purpose: generated callback event_func_703 processes event block(s) 572_6. Actions/conditions:
//        572_6: splits saved text into fields.
void Frames::event_func_703()
{
    // event 572_6 : splits saved text into fields
    {
        if (!(group_setup_1)) goto event_572_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(loop_load_fakevents_index), str__96);
    }
    event_572_6_end: ;
}
// Function purpose: generated callback event_func_704 processes event block(s) 573_6. Actions/conditions:
//        573_6: sets the object's animation to 2; sets the selected object's numeric value to 5; sets the selected
//        object's numeric value to string_to_number(stringtokenizer_81->get(2)).
void Frames::event_func_704()
{
    // event 573_6 : sets the object's animation to 2; sets the selected object's numeric value to 5; sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(2))
    {
        if (!(group_setup_1)) goto event_573_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))) == (0))) goto event_573_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_573_6_end;
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->alterables->values.set(1, 5);
            ((Active*)*it)->alterables->values.set(11, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        }
    }
    event_573_6_end: ;
}
// Function purpose: generated callback event_func_705 processes event block(s) 574_6. Actions/conditions:
//        574_6: sets the object's animation to 0; sets the selected object's numeric value to
//        string_to_number(stringtokenizer_81->get(2)).
void Frames::event_func_705()
{
    // event 574_6 : sets the object's animation to 0; sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(2))
    {
        if (!(group_setup_1)) goto event_574_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3))) == (-1))) goto event_574_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1))))) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_574_6_end;
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(1, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
        }
    }
    event_574_6_end: ;
}
void Frames::loop_load_fakevents_6()
{
    event_func_703();
    event_func_704();
    event_func_705();
}
// Function purpose: generated callback event_func_706 processes event block(s) 3128_6. Actions/conditions:
//        3128_6: sets the selected object's visibility to false; sets the selected object's visibility to false; sets
//        LClick to 1; plus 1 more actions.
void Frames::event_func_706()
{
    // event 3128_6 : sets the selected object's visibility to false; sets the selected object's visibility to false; sets LClick to 1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3128_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_3128_6_end: ;
}
// Function purpose: generated callback event_func_707 processes event block(s) 3129_6. Actions/conditions:
//        3129_6: removes the selected object.
void Frames::event_func_707()
{
    // event 3129_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3129_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3129_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3129_6_end: ;
}
// Function purpose: generated callback event_func_708 processes event block(s) 3130_6. Actions/conditions:
//        3130_6: removes the selected object.
void Frames::event_func_708()
{
    // event 3130_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3130_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_container_613))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3130_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3130_6_end: ;
}
// Function purpose: generated callback event_func_709 processes event block(s) 3131_6. Actions/conditions:
//        3131_6: removes the selected object.
void Frames::event_func_709()
{
    // event 3131_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3131_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_desk_32))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3131_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3131_6_end: ;
}
// Function purpose: generated callback event_func_710 processes event block(s) 3132_6. Actions/conditions:
//        3132_6: removes the selected object.
void Frames::event_func_710()
{
    // event 3132_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3132_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_container_613))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_3132_6_end;
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3132_6_end: ;
}
void Frames::loop_des_container_items_6()
{
    event_func_706();
    event_func_707();
    event_func_708();
    event_func_709();
    event_func_710();
}
// Function purpose: generated callback event_func_711 processes event block(s) 3185_6. Actions/conditions:
//        3185_6: creates a buttons 245 object; positions the target object; positions the target object; plus 7 more
//        actions.
void Frames::event_func_711()
{
    // event 3185_6 : creates a buttons 245 object; positions the target object; positions the target object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3185_6_end;
        FrameObject * single_instance_3185_6_0; single_instance_3185_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_3185_6_0 == NULL)
                    single_instance_3185_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3185_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_3185_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_3185_6_0))->force_animation(43);
        FrameObject * single_instance_3185_6_1; single_instance_3185_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3185_6_0)->x + 3, ((Active*)single_instance_3185_6_0)->y + 3), ((Active*)single_instance_3185_6_0)->layer);
            if (single_instance_3185_6_1 == NULL)
                single_instance_3185_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_3185_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_3185_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_3185_6_end: ;
}
// Function purpose: generated callback event_func_712 processes event block(s) 3186_6. Actions/conditions:
//        3186_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus
//        5 more actions.
void Frames::event_func_712()
{
    // event 3186_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_eteam_1)) goto event_3186_6_end;
        FrameObject * single_instance_3186_6_0; single_instance_3186_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -54), parent->layer);
                if (single_instance_3186_6_0 == NULL)
                    single_instance_3186_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3186_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3186_6_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_3186_6_0))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_3186_6_0))->set_bold(1);
        ((Text*)((Text*)single_instance_3186_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_escteam_614, str_0_615)));
    }
    event_3186_6_end: ;
}
void Frames::loop_footer_6()
{
    event_func_711();
    event_func_712();
}
// Function purpose: generated callback event_func_713 processes event block(s) 3195_6. Actions/conditions:
//        3195_6: unlocks the KeySuccess achievement.
void Frames::event_func_713()
{
    // event 3195_6 : unlocks the KeySuccess achievement
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3195_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_keysuccess_616)) goto event_3195_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_keysuccess_616);
    }
    event_3195_6_end: ;
}
void Frames::loop_dtaf_achieve_keycard_6()
{
    event_func_713();
}
// Function purpose: generated callback event_func_714 processes event block(s) 1027_6. Actions/conditions:
//        1027_6: splits saved text into fields.
void Frames::event_func_714()
{
    // event 1027_6 : splits saved text into fields
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1027_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_toilet_533+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(93, str_bogid_604))+str_slot_617+number_to_string(loop_guard_check_loo_index+1)), str__96);
    }
    event_1027_6_end: ;
}
// Function purpose: generated callback event_func_715 processes event block(s) 1028_6. Actions/conditions:
//        1028_6: sets EndString to We found the contraband you'd stashed down your toilet. Try putting it somewhere
//        less obvious next time!; sets IllegalFound to 1.
void Frames::event_func_715()
{
    // event 1028_6 : sets EndString to We found the contraband you'd stashed down your toilet. Try putting it somewhere less obvious next time!; sets IllegalFound to 1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1028_6_end;
        if (group_saving_1) goto event_1028_6_end;
        if (!((((INI*)get_instance(itemData_instances))->get_value_int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), str_illegal_618)) > (0))) goto event_1028_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, str_we_found_the_contraband_you_d_stashed_down_your_toilet_try_putting_it_somewhere_less_obvious_next_time_619);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(97, str_illegalfound_620, 1);
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
            loop_guard_check_loo_running = false;
    
    }
    event_1028_6_end: ;
}
void Frames::loop_guard_check_loo_6()
{
    event_func_714();
    event_func_715();
}
// Function purpose: generated callback event_func_716 processes event block(s) 2889_6. Actions/conditions:
//        2889_6: sets MoreInfo to translationData->get_string(Job_Descrip, gameVariables->get_string(99,
//        JobName)); sets MoreInfo to StringReplace::replace(gameVariables->get_string(98, MoreInfo), #, );
//        sets the selected object's text; plus 8 more actions.
void Frames::event_func_716()
{
    // event 2889_6 : sets MoreInfo to translationData->get_string(Job_Descrip, gameVariables->get_string(99, JobName)); sets MoreInfo to StringReplace::replace(gameVariables->get_string(98, MoreInfo), #, ); sets the selected object's text; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2889_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2889_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(98, str_moreinfo_621, ((INI*)get_instance(translationData_instances))->get_string(str_job_descrip_622, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(98, str_moreinfo_621, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(98, str_moreinfo_621), str__346, str__624));
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(98, str_moreinfo_621));
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
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+14);
            ((Text*)*it)->blend_color.set(Color(192, 0, 0));
            ((Text*)*it)->set_bold(1);
        }
    }
    event_2889_6_end: ;
}
// Function purpose: generated callback event_func_717 processes event block(s) 2890_6. Actions/conditions:
//        2890_6: sets MoreInfo to translationData->get_string(SS, Job_+gameVariables->get_string(99,
//        JobName)+_Descrip); sets MoreInfo to StringReplace::replace(gameVariables->get_string(98, MoreInfo),
//        #, ); sets the selected object's text; plus 8 more actions.
void Frames::event_func_717()
{
    // event 2890_6 : sets MoreInfo to translationData->get_string(SS, Job_+gameVariables->get_string(99, JobName)+_Descrip); sets MoreInfo to StringReplace::replace(gameVariables->get_string(98, MoreInfo), #, ); sets the selected object's text; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2890_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2890_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(98, str_moreinfo_621, ((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_625+((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)+str_descrip_626));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(98, str_moreinfo_621, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(98, str_moreinfo_621), str__346, str__624));
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(98, str_moreinfo_621));
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
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+14);
            ((Text*)*it)->blend_color.set(Color(192, 0, 0));
            ((Text*)*it)->set_bold(1);
        }
    }
    event_2890_6_end: ;
}
// Function purpose: generated callback event_func_718 processes event block(s) 2891_6. Actions/conditions:
//        2891_6: sets the selected object's text; sets Job_Name to Janitor; sets IntReq to 10.
void Frames::event_func_718()
{
    // event 2891_6 : sets the selected object's text; sets Job_Name to Janitor; sets IntReq to 10
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2891_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_janitor_24))) goto event_2891_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2891_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_9_327)));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_janitor_24);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 10);
    }
    event_2891_6_end: ;
}
// Function purpose: generated callback event_func_719 processes event block(s) 2892_6. Actions/conditions:
//        2892_6: sets the selected object's text; sets Job_Name to Janitor; sets IntReq to 10.
void Frames::event_func_719()
{
    // event 2892_6 : sets the selected object's text; sets Job_Name to Janitor; sets IntReq to 10
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2892_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_janitor_24))) goto event_2892_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2892_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_janitor_630)));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_janitor_24);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 10);
    }
    event_2892_6_end: ;
}
// Function purpose: generated callback event_func_720 processes event block(s) 2893_6. Actions/conditions:
//        2893_6: sets Job_Name to Gardening; sets IntReq to 20; sets the selected object's text.
void Frames::event_func_720()
{
    // event 2893_6 : sets Job_Name to Gardening; sets IntReq to 20; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2893_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_gardening_43))) goto event_2893_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_gardening_43);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 20);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_8_325)));
        }
    }
    event_2893_6_end: ;
}
// Function purpose: generated callback event_func_721 processes event block(s) 2894_6. Actions/conditions:
//        2894_6: sets Job_Name to Tailor; sets IntReq to 30; sets the selected object's text.
void Frames::event_func_721()
{
    // event 2894_6 : sets Job_Name to Tailor; sets IntReq to 30; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2894_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_tailor_479))) goto event_2894_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2894_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_tailor_479);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 30);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_15_608)));
        }
    }
    event_2894_6_end: ;
}
// Function purpose: generated callback event_func_722 processes event block(s) 2895_6. Actions/conditions:
//        2895_6: sets Job_Name to Tailor; sets IntReq to 30; sets the selected object's text.
void Frames::event_func_722()
{
    // event 2895_6 : sets Job_Name to Tailor; sets IntReq to 30; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2895_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_tailor_479))) goto event_2895_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2895_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_tailor_479);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 30);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_tailor_631)));
        }
    }
    event_2895_6_end: ;
}
// Function purpose: generated callback event_func_723 processes event block(s) 2896_6. Actions/conditions:
//        2896_6: sets Job_Name to Laundry; sets IntReq to 30; sets the selected object's text.
void Frames::event_func_723()
{
    // event 2896_6 : sets Job_Name to Laundry; sets IntReq to 30; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2896_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_laundry_29))) goto event_2896_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_laundry_29);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 30);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_11_331)));
        }
    }
    event_2896_6_end: ;
}
// Function purpose: generated callback event_func_724 processes event block(s) 2897_6. Actions/conditions:
//        2897_6: sets Job_Name to Library; sets IntReq to 40; sets the selected object's text.
void Frames::event_func_724()
{
    // event 2897_6 : sets Job_Name to Library; sets IntReq to 40; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2897_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_library_25))) goto event_2897_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_library_25);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 40);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_12_334)));
        }
    }
    event_2897_6_end: ;
}
// Function purpose: generated callback event_func_725 processes event block(s) 2898_6. Actions/conditions:
//        2898_6: sets Job_Name to Kitchen; sets IntReq to 40; sets the selected object's text.
void Frames::event_func_725()
{
    // event 2898_6 : sets Job_Name to Kitchen; sets IntReq to 40; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2898_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_kitchen_12))) goto event_2898_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_kitchen_12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 40);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_10_329)));
        }
    }
    event_2898_6_end: ;
}
// Function purpose: generated callback event_func_726 processes event block(s) 2899_6. Actions/conditions:
//        2899_6: sets Job_Name to Mailman; sets IntReq to 50; sets the selected object's text.
void Frames::event_func_726()
{
    // event 2899_6 : sets Job_Name to Mailman; sets IntReq to 50; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2899_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_mailman_556))) goto event_2899_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2899_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_mailman_556);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 50);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_13_632)));
        }
    }
    event_2899_6_end: ;
}
// Function purpose: generated callback event_func_727 processes event block(s) 2900_6. Actions/conditions:
//        2900_6: sets Job_Name to Mailman; sets IntReq to 50; sets the selected object's text.
void Frames::event_func_727()
{
    // event 2900_6 : sets Job_Name to Mailman; sets IntReq to 50; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2900_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_mailman_556))) goto event_2900_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2900_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_mailman_556);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 50);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_mailman_633)));
        }
    }
    event_2900_6_end: ;
}
// Function purpose: generated callback event_func_728 processes event block(s) 2901_6. Actions/conditions:
//        2901_6: sets Job_Name to Woodshop; sets IntReq to 50; sets the selected object's text.
void Frames::event_func_728()
{
    // event 2901_6 : sets Job_Name to Woodshop; sets IntReq to 50; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2901_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_woodshop_21))) goto event_2901_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_woodshop_21);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 50);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_17_218)));
        }
    }
    event_2901_6_end: ;
}
// Function purpose: generated callback event_func_729 processes event block(s) 2902_6. Actions/conditions:
//        2902_6: sets Job_Name to Deliveries; sets IntReq to 60; sets the selected object's text.
void Frames::event_func_729()
{
    // event 2902_6 : sets Job_Name to Deliveries; sets IntReq to 60; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2902_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_deliveries_577))) goto event_2902_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2902_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_deliveries_577);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 60);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_16_219)));
        }
    }
    event_2902_6_end: ;
}
// Function purpose: generated callback event_func_730 processes event block(s) 2903_6. Actions/conditions:
//        2903_6: sets Job_Name to Deliveries; sets IntReq to 60; sets the selected object's text.
void Frames::event_func_730()
{
    // event 2903_6 : sets Job_Name to Deliveries; sets IntReq to 60; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2903_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_deliveries_577))) goto event_2903_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2903_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_deliveries_577);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 60);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_deliveries_634)));
        }
    }
    event_2903_6_end: ;
}
// Function purpose: generated callback event_func_731 processes event block(s) 2904_6. Actions/conditions:
//        2904_6: sets Job_Name to Metalshop; sets IntReq to 70; sets the selected object's text.
void Frames::event_func_731()
{
    // event 2904_6 : sets Job_Name to Metalshop; sets IntReq to 70; sets the selected object's text
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2904_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)) == (str_metalshop_35))) goto event_2904_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(100, str_job_name_628, str_metalshop_35);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(101, str_intreq_629, 70);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_14_197)));
        }
    }
    event_2904_6_end: ;
}
// Function purpose: generated callback event_func_732 processes event block(s) 2905_6. Actions/conditions:
//        2905_6: removes the selected object; sets the selected object's direction to 16.
void Frames::event_func_732()
{
    // event 2905_6 : removes the selected object; sets the selected object's direction to 16
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2905_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_direction(16);
    }
    event_2905_6_end: ;
}
// Function purpose: generated callback event_func_733 processes event block(s) 2906_6. Actions/conditions:
//        2906_6: creates a buttons 245 object; sets the object's animation to 44; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_733()
{
    // event 2906_6 : creates a buttons 245 object; sets the object's animation to 44; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2906_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)))) goto event_2906_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_pos_635+((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623))) == (0))) goto event_2906_6_end;
        FrameObject * single_instance_2906_6_0; single_instance_2906_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + -60, parent->y + 60), parent->layer);
                if (single_instance_2906_6_0 == NULL)
                    single_instance_2906_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2906_6_0))->force_animation(44);
        FrameObject * single_instance_2906_6_1; single_instance_2906_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_2906_6_0)->x + 3, ((Active*)single_instance_2906_6_0)->y + 3), ((Active*)single_instance_2906_6_0)->layer);
            if (single_instance_2906_6_1 == NULL)
                single_instance_2906_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_2906_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_2906_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_3_158)));
    }
    event_2906_6_end: ;
}
// Function purpose: generated callback event_func_734 processes event block(s) 2907_6. Actions/conditions:
//        2907_6: creates a buttons 245 object; sets the object's animation to 39; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_734()
{
    // event 2907_6 : creates a buttons 245 object; sets the object's animation to 39; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2907_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(99, str_jobname_623)))) goto event_2907_6_end;
        FrameObject * single_instance_2907_6_0; single_instance_2907_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + -60, parent->y + 60), parent->layer);
                if (single_instance_2907_6_0 == NULL)
                    single_instance_2907_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2907_6_0))->force_animation(39);
        FrameObject * single_instance_2907_6_1; single_instance_2907_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_2907_6_0)->x + 3, ((Active*)single_instance_2907_6_0)->y + 3), ((Active*)single_instance_2907_6_0)->layer);
            if (single_instance_2907_6_1 == NULL)
                single_instance_2907_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_2907_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_2907_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_2_155)));
    }
    event_2907_6_end: ;
}
// Function purpose: generated callback event_func_735 processes event block(s) 2908_6. Actions/conditions:
//        2908_6: creates a buttons 245 object; sets the object's animation to 43; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_735()
{
    // event 2908_6 : creates a buttons 245 object; sets the object's animation to 43; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2908_6_end;
        FrameObject * single_instance_2908_6_0; single_instance_2908_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 25, parent->y + 60), parent->layer);
                if (single_instance_2908_6_0 == NULL)
                    single_instance_2908_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2908_6_0))->force_animation(43);
        FrameObject * single_instance_2908_6_1; single_instance_2908_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_2908_6_0)->x + 3, ((Active*)single_instance_2908_6_0)->y + 3), ((Active*)single_instance_2908_6_0)->layer);
            if (single_instance_2908_6_1 == NULL)
                single_instance_2908_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_2908_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_2908_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_3_158)));
    }
    event_2908_6_end: ;
}
void Frames::loop_job_info_6()
{
    event_func_716();
    event_func_717();
    event_func_718();
    event_func_719();
    event_func_720();
    event_func_721();
    event_func_722();
    event_func_723();
    event_func_724();
    event_func_725();
    event_func_726();
    event_func_727();
    event_func_728();
    event_func_729();
    event_func_730();
    event_func_731();
    event_func_732();
    event_func_733();
    event_func_734();
    event_func_735();
}
// Function purpose: generated callback event_func_736 processes event block(s) 509_6. Actions/conditions:
//        509_6: sets the object position in the world.
void Frames::event_func_736()
{
    // event 509_6 : sets the object position in the world
    {
        if (!(group_setup_1)) goto event_509_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_bog_dir_index+1))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_509_6_end;
        {
            FrameObject * parent = ((Active*)get_single(toilet2_307_instances));
            if (parent == NULL) goto pos_end_509_6_0;
            ((Active*)get_instance(upperlevelcheck_206_instances))->set_global_position(parent->get_x() + 16, parent->get_y() + 0);
            pos_end_509_6_0: ;
        }
    }
    event_509_6_end: ;
}
// Function purpose: generated callback event_func_737 processes event block(s) 510_6. Actions/conditions:
//        510_6: sets the selected object's direction to 0.
void Frames::event_func_737()
{
    // event 510_6 : sets the selected object's direction to 0
    {
        if (!(group_setup_1)) goto event_510_6_end;
        if (((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background()) goto event_510_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_bog_dir_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_510_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_510_6_end: ;
}
// Function purpose: generated callback event_func_738 processes event block(s) 511_6. Actions/conditions:
//        511_6: sets the selected object's direction to 16.
void Frames::event_func_738()
{
    // event 511_6 : sets the selected object's direction to 16
    {
        if (!(group_setup_1)) goto event_511_6_end;
        if (!(((Active*)get_instance(upperlevelcheck_206_instances))->overlaps_background())) goto event_511_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_bog_dir_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_511_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_511_6_end: ;
}
void Frames::loop_bog_dir_6()
{
    event_func_736();
    event_func_737();
    event_func_738();
}
// Function purpose: generated callback event_func_739 processes event block(s) 2802_6. Actions/conditions:
//        2802_6: sets ItemNameAppend to ((Active*)single_instance_2802_6_0)->alterables->strings.get(0).
void Frames::event_func_739()
{
    // event 2802_6 : sets ItemNameAppend to ((Active*)single_instance_2802_6_0)->alterables->strings.get(0)
    {
        if (!(group_code_1)) goto event_2802_6_end;
        inmateBase_instances.clear_selection();
        FrameObject * single_instance_2802_6_0; single_instance_2802_6_0 = pick_random(inmateBase_instances);
        if (single_instance_2802_6_0 == NULL) goto event_2802_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(102, str_itemnameappend_636, ((Active*)single_instance_2802_6_0)->alterables->strings.get(0));
    }
    event_2802_6_end: ;
}
void Frames::loop_itemnameappend_6()
{
    event_func_739();
}
// Function purpose: generated callback event_func_740 processes event block(s) 396_6. Actions/conditions:
//        396_6: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_create_guards_index+1; sets the object position in the world; plus 12 more actions.
void Frames::event_func_740()
{
    // event 396_6 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_create_guards_index+1; sets the object position in the world; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_396_6_end;
        if (!((global_strings->get(0)) != (str_irongate_148))) goto event_396_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_396_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_396_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_396_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_396_6_0; single_instance_396_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_396_6_0 == NULL) goto event_396_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_396_6_0);
            if (parent == NULL) goto pos_end_396_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_396_6_2: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, str_officer_637+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_guardname_638+number_to_string(loop_create_guards_index+1)));
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        guard_169_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard_169(-16, -16), 1);
            guard_169_instances.add_back();
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_396_6_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_396_6_4: ;
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_248(-16, -16), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_396_6_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_396_6_6: ;
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), str_29_100_539);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_3_100_540);
    }
    event_396_6_end: ;
}
// Function purpose: generated callback event_func_741 processes event block(s) 397_6. Actions/conditions:
//        397_6: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_create_guards_index+1; sets the object position in the world; plus 12 more actions.
void Frames::event_func_741()
{
    // event 397_6 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_create_guards_index+1; sets the object position in the world; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_397_6_end;
        if (!((global_strings->get(0)) == (str_irongate_148))) goto event_397_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_397_6_0; single_instance_397_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_397_6_0 == NULL) goto event_397_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_397_6_0);
            if (parent == NULL) goto pos_end_397_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_397_6_2: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, str_officer_637+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_guardname_638+number_to_string(loop_create_guards_index+1)));
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        guard_169_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard_169(-16, -16), 1);
            guard_169_instances.add_back();
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_397_6_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_397_6_4: ;
        }
        for (ObjectIterator it(guard_169_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguard_248_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguard_248(-16, -16), 1);
            outfitguard_248_instances.add_back();
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_397_6_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_397_6_6: ;
        }
        for (ObjectIterator it(outfitguard_248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), str_11_100_541);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_3_100_540);
    }
    event_397_6_end: ;
}
// Function purpose: generated callback event_func_742 processes event block(s) 398_6. Actions/conditions:
//        398_6: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_create_guards_index+1; sets the object position in the world; plus 12 more actions.
void Frames::event_func_742()
{
    // event 398_6 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_create_guards_index+1; sets the object position in the world; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_398_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_398_6_end;
        if (!((global_values->get(18)) == (1))) goto event_398_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_398_6_0; single_instance_398_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_398_6_0 == NULL) goto event_398_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_398_6_0);
            if (parent == NULL) goto pos_end_398_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_398_6_2: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, str_officer_637+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_guardname_638+number_to_string(loop_create_guards_index+1)));
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguardescteam_476_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguardescteam_476(-16, -16), 1);
            outfitguardescteam_476_instances.add_back();
        }
        for (ObjectIterator it(outfitguardescteam_476_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_398_6_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_398_6_4: ;
        }
        for (ObjectIterator it(outfitguardescteam_476_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        guard2_484_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard2_484(16, 16), 1);
            guard2_484_instances.add_back();
        }
        for (ObjectIterator it(guard2_484_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_398_6_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_398_6_6: ;
        }
        for (ObjectIterator it(guard2_484_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), str_29_100_539);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_211_100_542);
    }
    event_398_6_end: ;
}
// Function purpose: generated callback event_func_743 processes event block(s) 399_6. Actions/conditions:
//        399_6: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_create_guards_index+1; sets the object position in the world; plus 12 more actions.
void Frames::event_func_743()
{
    // event 399_6 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_create_guards_index+1; sets the object position in the world; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_399_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_399_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_399_6_0; single_instance_399_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_399_6_0 == NULL) goto event_399_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_399_6_0);
            if (parent == NULL) goto pos_end_399_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_399_6_2: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, str_officer_637+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_guardname_638+number_to_string(loop_create_guards_index+1)));
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguarddtaf_485_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguarddtaf_485(-16, -16), 1);
            outfitguarddtaf_485_instances.add_back();
        }
        for (ObjectIterator it(outfitguarddtaf_485_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_399_6_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_399_6_4: ;
        }
        for (ObjectIterator it(outfitguarddtaf_485_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        guard3_499_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard3_499(-16, -16), 1);
            guard3_499_instances.add_back();
        }
        for (ObjectIterator it(guard3_499_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_399_6_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_399_6_6: ;
        }
        for (ObjectIterator it(guard3_499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), str_29_100_539);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_228_100_543);
    }
    event_399_6_end: ;
}
// Function purpose: generated callback event_func_744 processes event block(s) 400_6. Actions/conditions:
//        400_6: adds a baseguard 251 instance; sets the selected object's numeric value to
//        loop_create_guards_index+1; sets the object position in the world; plus 12 more actions.
void Frames::event_func_744()
{
    // event 400_6 : adds a baseguard 251 instance; sets the selected object's numeric value to loop_create_guards_index+1; sets the object position in the world; plus 12 more actions
    {
        if (!(group_setup_1)) goto event_400_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_400_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_400_6_0; single_instance_400_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_400_6_0 == NULL) goto event_400_6_end;
        guardBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardBase(-16, -16), 1);
            guardBase_instances.add_back();
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_400_6_0);
            if (parent == NULL) goto pos_end_400_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_400_6_2: ;
        }
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(4+randrange_event(3));
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->strings.set(0, str_officer_637+((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_guardname_638+number_to_string(loop_create_guards_index+1)));
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        guard4_514_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guard4_514(0, 0), 1);
            guard4_514_instances.add_back();
        }
        for (ObjectIterator it(guard4_514_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_400_6_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_400_6_4: ;
        }
        for (ObjectIterator it(guard4_514_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_create_guards_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        outfitguardss_515_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitguardss_515(0, 0), 1);
            outfitguardss_515_instances.add_back();
        }
        for (ObjectIterator it(outfitguardss_515_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(guardBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_400_6_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_400_6_6: ;
        }
        for (ObjectIterator it(outfitguardss_515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_weapon_460+number_to_string(qualifier_14.size()), str_29_100_539);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_outfit_459+number_to_string(qualifier_14.size()), str_239_100_544);
    }
    event_400_6_end: ;
}
void Frames::loop_create_guards_6()
{
    event_func_740();
    event_func_741();
    event_func_742();
    event_func_743();
    event_func_744();
}
// Function purpose: generated callback event_func_745 processes event block(s) 390_6. Actions/conditions:
//        390_6: sets a stored numeric value; draws the selected image or tile.
void Frames::event_func_745()
{
    // event 390_6 : sets a stored numeric value; draws the selected image or tile
    {
        if (!(group_setup_1 && group_setup_set_walls_1)) goto event_390_6_end;
        qualifier_4.clear_selection();
        for (QualifierIterator it(qualifier_4); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_set_walls_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_4.has_selection()) goto event_390_6_end;
        ((ArrayObject*)get_instance(wallsarray_232_instances))->set_value(((Active*)get_single(qualifier_4, default_active_instance))->alterables->values.get(1), ((Active*)get_single(qualifier_4, default_active_instance))->get_x(), ((Active*)get_single(qualifier_4, default_active_instance))->get_y(), ((Active*)get_single(qualifier_4, default_active_instance))->layer->index+1);
        for (QualifierIterator it(qualifier_4); !it.end(); ++it) {
            ((Active*)*it)->paste(1);
        }
    }
    event_390_6_end: ;
}
// Function purpose: generated callback event_func_746 processes event block(s) 391_6. Actions/conditions:
//        391_6: sets ((Active*)get_single(qualifier_4, default_active_instance))->get_x() to
//        ((Active*)get_single(qualifier_4, default_active_instance))->get_y().
void Frames::event_func_746()
{
    // event 391_6 : sets ((Active*)get_single(qualifier_4, default_active_instance))->get_x() to ((Active*)get_single(qualifier_4, default_active_instance))->get_y()
    {
        if (!(group_setup_1 && group_setup_set_walls_1)) goto event_391_6_end;
        qualifier_4.clear_selection();
        for (QualifierIterator it(qualifier_4); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_set_walls_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_4.has_selection()) goto event_391_6_end;
        ((ArrayObject*)get_instance(fencearray_265_instances))->set_value(25, ((Active*)get_single(qualifier_4, default_active_instance))->get_x(), ((Active*)get_single(qualifier_4, default_active_instance))->get_y(), ((Active*)get_single(qualifier_4, default_active_instance))->layer->index+1);
    }
    event_391_6_end: ;
}
void Frames::loop_set_walls_6()
{
    event_func_745();
    event_func_746();
}
// Function purpose: generated callback event_func_747 processes event block(s) 2754_6. Actions/conditions:
//        2754_6: increments JobQuota by 6; plays a sound or music track.
void Frames::event_func_747()
{
    // event 2754_6 : increments JobQuota by 6; plays a sound or music track
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2754_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2754_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_2754_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 6);
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_2754_6_end: ;
}
void Frames::loop_laundry_do_6()
{
    event_func_747();
}
// Function purpose: generated callback event_func_748 processes event block(s) 2209_6. Actions/conditions:
//        2209_6: creates a ziplinesniffer 454 object; sets the selected object's numeric value to
//        ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8; sets the selected
//        object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8;
//        plus 5 more actions.
void Frames::event_func_748()
{
    // event 2209_6 : creates a ziplinesniffer 454 object; sets the selected object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2209_6_end;
        zipstart_389_instances.clear_selection();
        for (ObjectIterator it(zipstart_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_setup_zip_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_up_38))) { it.deselect(); continue; }
        }
        if (!zipstart_389_instances.has_selection()) goto event_2209_6_end;
        FrameObject * single_instance_2209_6_0; single_instance_2209_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(zipstart_389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ziplinesniffer_454(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2209_6_0 == NULL)
                    single_instance_2209_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2209_6_0))->alterables->values.set(2, ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_x()+8);
        ((Active*)((Active*)single_instance_2209_6_0))->alterables->values.set(3, ((Active*)get_single(zipstart_389_instances, default_active_instance))->get_y()+8);
        ((Active*)((Active*)single_instance_2209_6_0))->set_direction(8);
        ((Active*)((Active*)single_instance_2209_6_0))->alterables->strings.set(0, str_up_639);
    }
    event_2209_6_end: ;
}
