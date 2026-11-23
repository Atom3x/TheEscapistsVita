#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_501 processes event block(s) 663_6. Actions/conditions:
//        663_6: adds a dtafobjects 487 instance; sets the object's animation to 8; sets the selected object's
//        direction to 0; plus 7 more actions.
void Frames::event_func_501()
{
    // event 663_6 : adds a dtafobjects 487 instance; sets the object's animation to 8; sets the selected object's direction to 0; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_663_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(992, 90), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 848));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 480));
            ((Active*)*it)->paste(1);
            ((Active*)*it)->alterables->strings.set(0, str_sign2_469);
        }
    }
    event_663_6_end: ;
}
// Function purpose: generated callback event_func_502 processes event block(s) 664_6. Actions/conditions:
//        664_6: adds a dtafobjects 487 instance; sets the object's animation to 8; sets the selected object's
//        direction to 0; plus 7 more actions.
void Frames::event_func_502()
{
    // event 664_6 : adds a dtafobjects 487 instance; sets the object's animation to 8; sets the selected object's direction to 0; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_664_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(992, 90), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 976));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 496));
            ((Active*)*it)->paste(1);
            ((Active*)*it)->alterables->strings.set(0, str_sign2_469);
        }
    }
    event_664_6_end: ;
}
// Function purpose: generated callback event_func_503 processes event block(s) 665_6. Actions/conditions:
//        665_6: adds a dtafobjects 487 instance; sets the object's animation to 8; sets the selected object's
//        direction to 0; plus 7 more actions.
void Frames::event_func_503()
{
    // event 665_6 : adds a dtafobjects 487 instance; sets the object's animation to 8; sets the selected object's direction to 0; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_665_6_end;
        dtafobjects_487_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafobjects_487(992, 90), 1);
            dtafobjects_487_instances.add_back();
        }
        for (ObjectIterator it(dtafobjects_487_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(VITA_VIEW_X(((Active*)*it), 1136));
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 496));
            ((Active*)*it)->paste(1);
            ((Active*)*it)->alterables->strings.set(0, str_sign3_470);
        }
    }
    event_665_6_end: ;
}
// Function purpose: generated callback event_func_504 processes event block(s) 666_6. Actions/conditions:
//        666_6: adds a desksdlc 482 instance; sets the selected object's direction to 0; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_504()
{
    // event 666_6 : adds a desksdlc 482 instance; sets the selected object's direction to 0; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_666_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(1472, 1066), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_janbox_471);
        }
    }
    event_666_6_end: ;
}
// Function purpose: generated callback event_func_505 processes event block(s) 667_6. Actions/conditions:
//        667_6: adds a desksdlc 482 instance; sets the selected object's direction to 0; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_505()
{
    // event 667_6 : adds a desksdlc 482 instance; sets the selected object's direction to 0; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_667_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(576, 1056), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_woodbox_472);
        }
    }
    event_667_6_end: ;
}
// Function purpose: generated callback event_func_506 processes event block(s) 668_6. Actions/conditions:
//        668_6: adds a desksdlc 482 instance; sets the selected object's direction to 0; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_506()
{
    // event 668_6 : adds a desksdlc 482 instance; sets the selected object's direction to 0; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_668_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(880, 192), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_ctrlbox_473);
        }
    }
    event_668_6_end: ;
}
// Function purpose: generated callback event_func_507 processes event block(s) 669_6. Actions/conditions:
//        669_6: adds a desksdlc 482 instance; sets the selected object's direction to 0; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_507()
{
    // event 669_6 : adds a desksdlc 482 instance; sets the selected object's direction to 0; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_669_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(704, 304), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_bossbox_474);
        }
    }
    event_669_6_end: ;
}
// Function purpose: generated callback event_func_508 processes event block(s) 670_6. Actions/conditions:
//        670_6: adds a desksdlc 482 instance; sets the selected object's direction to 0; sets the selected object's
//        numeric value to qualifier_17.size()+1; plus 1 more actions.
void Frames::event_func_508()
{
    // event 670_6 : adds a desksdlc 482 instance; sets the selected object's direction to 0; sets the selected object's numeric value to qualifier_17.size()+1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_670_6_end;
        desksdlc_482_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_desksdlc_482(1472, 464), 1);
            desksdlc_482_instances.add_back();
        }
        for (ObjectIterator it(desksdlc_482_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, qualifier_17.size()+1);
            ((Active*)*it)->alterables->strings.set(0, str_henbox_475);
        }
    }
    event_670_6_end: ;
}
// Function purpose: generated callback event_func_509 processes event block(s) 671_6. Actions/conditions:
//        671_6: adds a dooroutfit 501 instance.
void Frames::event_func_509()
{
    // event 671_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_671_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1152, 512), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_671_6_end: ;
}
// Function purpose: generated callback event_func_510 processes event block(s) 672_6. Actions/conditions:
//        672_6: adds a dooroutfit 501 instance.
void Frames::event_func_510()
{
    // event 672_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_672_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1152, 528), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_672_6_end: ;
}
// Function purpose: generated callback event_func_511 processes event block(s) 673_6. Actions/conditions:
//        673_6: adds a dtafvillainchair 500 instance.
void Frames::event_func_511()
{
    // event 673_6 : adds a dtafvillainchair 500 instance
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_673_6_end;
        dtafvillainchair_500_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafvillainchair_500(608, 432), 1);
            dtafvillainchair_500_instances.add_back();
        }
    }
    event_673_6_end: ;
}
// Function purpose: generated callback event_func_512 processes event block(s) 679_6. Actions/conditions:
//        679_6: adds a dtafshark 498 instance.
void Frames::event_func_512()
{
    // event 679_6 : adds a dtafshark 498 instance
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_679_6_end;
        dtafshark_498_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dtafshark_498(760, 520), 1);
            dtafshark_498_instances.add_back();
        }
    }
    event_679_6_end: ;
}
void Frames::loop_setup_dtaf_6()
{
    event_func_492();
    event_func_493();
    event_func_494();
    event_func_495();
    event_func_496();
    event_func_497();
    event_func_498();
    event_func_499();
    event_func_500();
    event_func_501();
    event_func_502();
    event_func_503();
    event_func_504();
    event_func_505();
    event_func_506();
    event_func_507();
    event_func_508();
    event_func_509();
    event_func_510();
    event_func_511();
    event_func_512();
}
// Function purpose: generated callback event_func_513 processes event block(s) 2792_6. Actions/conditions:
//        2792_6: increments JobQuota by 6; plays a sound or music track.
void Frames::event_func_513()
{
    // event 2792_6 : increments JobQuota by 6; plays a sound or music track
    {
        if (!(group_code_1)) goto event_2792_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2792_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_2792_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(18, str_jobquota_480, 6);
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_2792_6_end: ;
}
void Frames::loop_tailor_do_6()
{
    event_func_513();
}
// Function purpose: generated callback event_func_514 processes event block(s) 1436_6. Actions/conditions:
//        1436_6: sets OutsideWalls to 1.
void Frames::event_func_514()
{
    // event 1436_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1)) goto event_1436_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(19, str_maptype_109)) == (str_insideonly_481))) goto event_1436_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(20, str_zone_safe1_482)) == (0))) goto event_1436_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(21, str_zone_safe2_483)) == (0))) goto event_1436_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(22, str_zone_safe3_484)) == (0))) goto event_1436_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1436_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1436_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1436_6_end: ;
}
// Function purpose: generated callback event_func_515 processes event block(s) 1437_6. Actions/conditions:
//        1437_6: sets OutsideWalls to 1.
void Frames::event_func_515()
{
    // event 1437_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1)) goto event_1437_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(19, str_maptype_109)) == (str_insideoutside_487))) goto event_1437_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (10))) goto event_1437_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(20, str_zone_safe1_482)) == (0))) goto event_1437_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(21, str_zone_safe2_483)) == (0))) goto event_1437_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(22, str_zone_safe3_484)) == (0))) goto event_1437_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1437_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1437_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1437_6_end: ;
}
// Function purpose: generated callback event_func_516 processes event block(s) 1438_6. Actions/conditions:
//        1438_6: sets OutsideWalls to 1.
void Frames::event_func_516()
{
    // event 1438_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1)) goto event_1438_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(19, str_maptype_109)) == (str_insideoutside_487))) goto event_1438_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) == (22))) goto event_1438_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(20, str_zone_safe1_482)) == (0))) goto event_1438_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(21, str_zone_safe2_483)) == (0))) goto event_1438_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(22, str_zone_safe3_484)) == (0))) goto event_1438_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1438_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1438_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1438_6_end: ;
}
// Function purpose: generated callback event_func_517 processes event block(s) 1443_6. Actions/conditions:
//        1443_6: sets OutsideWalls to 1.
void Frames::event_func_517()
{
    // event 1443_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1)) goto event_1443_6_end;
        if (!((global_strings->get(0)) == (str_perks_143))) goto event_1443_6_end;
        playerBase_instances.clear_selection();
        if (!(objects_in_zone(playerBase_instances, 192, 112, 1440, 1456) == 0)) goto event_1443_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1443_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1443_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1443_6_end: ;
}
// Function purpose: generated callback event_func_518 processes event block(s) 1444_6. Actions/conditions:
//        1444_6: sets OutsideWalls to 1.
void Frames::event_func_518()
{
    // event 1444_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1)) goto event_1444_6_end;
        if (!((global_strings->get(0)) == (str_stalagflucht_144))) goto event_1444_6_end;
        playerBase_instances.clear_selection();
        if (!(objects_in_zone(playerBase_instances, 272, 368, 1296, 1344) == 0)) goto event_1444_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1444_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1444_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1444_6_end: ;
}
// Function purpose: generated callback event_func_519 processes event block(s) 1445_6. Actions/conditions:
//        1445_6: sets OutsideWalls to 1.
void Frames::event_func_519()
{
    // event 1445_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1)) goto event_1445_6_end;
        if (!((global_strings->get(0)) == (str_shanktonstatepen_145))) goto event_1445_6_end;
        playerBase_instances.clear_selection();
        if (!(objects_in_zone(playerBase_instances, 80, 112, 1344, 1376) == 0)) goto event_1445_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1445_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1445_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1445_6_end: ;
}
// Function purpose: generated callback event_func_520 processes event block(s) 1446_6. Actions/conditions:
//        1446_6: sets OutsideWalls to 1.
void Frames::event_func_520()
{
    // event 1446_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1)) goto event_1446_6_end;
        if (!((global_strings->get(0)) == (str_jungle_146))) goto event_1446_6_end;
        playerBase_instances.clear_selection();
        if (!(objects_in_zone(playerBase_instances, 288, 304, 1200, 1056) == 0)) goto event_1446_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1446_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1446_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1446_6_end: ;
}
// Function purpose: generated callback event_func_521 processes event block(s) 1447_6. Actions/conditions:
//        1447_6: sets OutsideWalls to 1.
void Frames::event_func_521()
{
    // event 1447_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_normal_maps_2_1)) goto event_1447_6_end;
        if (!((global_strings->get(0)) == (str_sanpancho_147))) goto event_1447_6_end;
        playerBase_instances.clear_selection();
        if (!(objects_in_zone(playerBase_instances, 256, 192, 1120, 1008) == 0)) goto event_1447_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1447_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1447_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1447_6_end: ;
}
// Function purpose: generated callback event_func_522 processes event block(s) 1448_6. Actions/conditions:
//        1448_6: sets OutsideWalls to 1.
void Frames::event_func_522()
{
    // event 1448_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_bonus_maps_2_1)) goto event_1448_6_end;
        if (!((global_strings->get(0)) == (str_campepsilon_141))) goto event_1448_6_end;
        playerBase_instances.clear_selection();
        if (!(objects_in_zone(playerBase_instances, 592, 224, 1264, 1024) == 0)) goto event_1448_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1448_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1448_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1448_6_end: ;
}
// Function purpose: generated callback event_func_523 processes event block(s) 1449_6. Actions/conditions:
//        1449_6: sets OutsideWalls to 1.
void Frames::event_func_523()
{
    // event 1449_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_bonus_maps_2_1)) goto event_1449_6_end;
        if (!((global_strings->get(0)) == (str_fortbamford_142))) goto event_1449_6_end;
        playerBase_instances.clear_selection();
        if (!(objects_in_zone(playerBase_instances, 352, 512, 1360, 1152) == 0)) goto event_1449_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1449_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1449_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1449_6_end: ;
}
// Function purpose: generated callback event_func_524 processes event block(s) 1450_6. Actions/conditions:
//        1450_6: sets OutsideWalls to 1.
void Frames::event_func_524()
{
    // event 1450_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_bonus_maps_2_1)) goto event_1450_6_end;
        if (!((global_strings->get(0)) == (str_ea_140))) goto event_1450_6_end;
        playerBase_instances.clear_selection();
        if (!(objects_in_zone(playerBase_instances, 176, 96, 1312, 1296) == 0)) goto event_1450_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1450_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1450_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1450_6_end: ;
}
// Function purpose: generated callback event_func_525 processes event block(s) 1451_6. Actions/conditions:
//        1451_6: sets OutsideWalls to 1.
void Frames::event_func_525()
{
    // event 1451_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1)) goto event_1451_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(26, str_map_perim_top_489)))) goto event_1451_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1451_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1451_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1451_6_end: ;
}
// Function purpose: generated callback event_func_526 processes event block(s) 1452_6. Actions/conditions:
//        1452_6: sets OutsideWalls to 1.
void Frames::event_func_526()
{
    // event 1452_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1)) goto event_1452_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_y()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(27, str_map_perim_bottom_490)))) goto event_1452_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1452_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1452_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1452_6_end: ;
}
// Function purpose: generated callback event_func_527 processes event block(s) 1453_6. Actions/conditions:
//        1453_6: sets OutsideWalls to 1.
void Frames::event_func_527()
{
    // event 1453_6 : sets OutsideWalls to 1
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1)) goto event_1453_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(28, str_map_perim_left_491)))) goto event_1453_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1453_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1453_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
    }
    event_1453_6_end: ;
}
// Function purpose: generated callback event_func_528 processes event block(s) 1454_6. Actions/conditions:
//        1454_6: sets OutsideWalls to 1; plays a sound or music track.
void Frames::event_func_528()
{
    // event 1454_6 : sets OutsideWalls to 1; plays a sound or music track
    {
        if (!(group_code_1 && group_code_out_of_bounds_beyond_walls_2_custom_maps_2_1)) goto event_1454_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->get_x()) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(29, str_map_perim_right_492)))) goto event_1454_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1454_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(23, str_outsidegroundtiles_485), str__96+number_to_string(((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_instance(playerBase_instances))->get_x()/MathHelper()/16), (((Active*)get_instance(playerBase_instances))->get_y()/MathHelper()/16), 2))+str__96, 0)) != (-1))) goto event_1454_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(24, str_outsidewalls_486, 1);
        media.play_id(SOUND_BUY_11, -1, 1);
    }
    event_1454_6_end: ;
}
// Function purpose: generated callback event_func_529 processes event block(s) 1455_6. Actions/conditions:
//        1455_6: sets Heat to 100.
void Frames::event_func_529()
{
    // event 1455_6 : sets Heat to 100
    {
        if (!(group_code_1)) goto event_1455_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(24, str_outsidewalls_486)) == (1))) goto event_1455_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_1455_6_end;
        if (group_code_1 && group_code_schedules_sleeping_1) goto event_1455_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_1455_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) >= (6))) goto event_1455_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) < (23))) goto event_1455_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1455_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(32, str_heat_495, 100);
    }
    event_1455_6_end: ;
}
void Frames::loop_check_oob_6()
{
    event_func_514();
    event_func_515();
    event_func_516();
    event_func_517();
    event_func_518();
    event_func_519();
    event_func_520();
    event_func_521();
    event_func_522();
    event_func_523();
    event_func_524();
    event_func_525();
    event_func_526();
    event_func_527();
    event_func_528();
    event_func_529();
}
// Function purpose: generated callback event_func_530 processes event block(s) 801_6. Actions/conditions:
//        801_6: sets global value 9 from 0.
void Frames::event_func_530()
{
    // event 801_6 : sets global value 9 from 0
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_801_6_end;
        if (!((global_values->get(9)) < (0))) goto event_801_6_end;
        global_values->set(9, 0);
    }
    event_801_6_end: ;
}
// Function purpose: generated callback event_func_531 processes event block(s) 802_6. Actions/conditions:
//        802_6: sets global value 9 from 100.
void Frames::event_func_531()
{
    // event 802_6 : sets global value 9 from 100
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_802_6_end;
        if (!((global_values->get(9)) > (100))) goto event_802_6_end;
        global_values->set(9, 100);
    }
    event_802_6_end: ;
}
// Function purpose: generated callback event_func_532 processes event block(s) 803_6. Actions/conditions:
//        803_6: sets the selected object's horizontal position to (dialogPanel->get_x()-50)+global_values->get(9);
//        sets the audio channel volume; sets a stored numeric value.
void Frames::event_func_532()
{
    // event 803_6 : sets the selected object's horizontal position to (dialogPanel->get_x()-50)+global_values->get(9); sets the audio channel volume; sets a stored numeric value
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_803_6_end;
        settingsSlider_instances.clear_selection();
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_music_53))) { it.deselect(); continue; }
        }
        if (!settingsSlider_instances.has_selection()) goto event_803_6_end;
        for (ObjectIterator it(settingsSlider_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)get_instance(dialogPanel_instances))->get_x()-50)+global_values->get(9));
        }
        media.set_channel_volume(10-1, global_values->get(9));
        ((INI*)get_instance(mapload_322_instances))->set_value_int(str_settings_52, str_music_53, global_values->get(9));
    }
    event_803_6_end: ;
}
void Frames::loop_slider_music_6()
{
    event_func_530();
    event_func_531();
    event_func_532();
}
// Function purpose: generated callback event_func_533 processes event block(s) 2217_6. Actions/conditions:
//        2217_6: adds a zipline 431 instance; sets the selected object's direction to 16; sets the selected object's
//        horizontal position to gameVariables->get_value(33, EndX)-4; plus 5 more actions.
void Frames::event_func_533()
{
    // event 2217_6 : adds a zipline 431 instance; sets the selected object's direction to 16; sets the selected object's horizontal position to gameVariables->get_value(33, EndX)-4; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2217_6_end;
        zipline_431_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_zipline_431(0, 0), 4);
            zipline_431_instances.add_back();
        }
        for (ObjectIterator it(zipline_431_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_endx_496)-4);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_endy_497)-2);
            ((Active*)*it)->set_x_scale(get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(35, str_startx_498)+9, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(36, str_starty_499)-3, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_endx_496), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_endy_497)-3));
        }
    }
    event_2217_6_end: ;
}
void Frames::loop_create_right_zip_6()
{
    event_func_533();
}
// Function purpose: generated callback event_func_534 processes event block(s) 2077_6. Actions/conditions:
//        2077_6: sets the selected object's numeric value to ((Active*)single_instance_2077_6_0)->get_x(); sets the
//        selected object's numeric value to ((Active*)single_instance_2077_6_0)->get_y().
void Frames::event_func_534()
{
    // event 2077_6 : sets the selected object's numeric value to ((Active*)single_instance_2077_6_0)->get_x(); sets the selected object's numeric value to ((Active*)single_instance_2077_6_0)->get_y()
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2077_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_lockdown_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2077_6_end;
        if (!((global_strings->get(0)) == (str_sanpancho_147))) goto event_2077_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2077_6_end;
        waypointinmate2_311_instances.clear_selection();
        FrameObject * single_instance_2077_6_0; single_instance_2077_6_0 = pick_random(waypointinmate2_311_instances);
        if (single_instance_2077_6_0 == NULL) goto event_2077_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_2077_6_0)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_2077_6_0)->get_y());
        }
    }
    event_2077_6_end: ;
}
// Function purpose: generated callback event_func_535 processes event block(s) 2078_6. Actions/conditions:
//        2078_6: sets the selected object's numeric value to ((Active*)single_instance_2078_6_0)->get_x(); sets the
//        selected object's numeric value to ((Active*)single_instance_2078_6_0)->get_y().
void Frames::event_func_535()
{
    // event 2078_6 : sets the selected object's numeric value to ((Active*)single_instance_2078_6_0)->get_x(); sets the selected object's numeric value to ((Active*)single_instance_2078_6_0)->get_y()
    {
        if (!(group_code_1 && group_code_schedules_lockdown_new_1)) goto event_2078_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_lockdown_guards_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2078_6_end;
        if (!((global_strings->get(0)) != (str_sanpancho_147))) goto event_2078_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->get_movement()->is_stopped())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2078_6_end;
        waypointguard2_315_instances.clear_selection();
        FrameObject * single_instance_2078_6_0; single_instance_2078_6_0 = pick_random(waypointguard2_315_instances);
        if (single_instance_2078_6_0 == NULL) goto event_2078_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)single_instance_2078_6_0)->get_x());
            ((Active*)*it)->alterables->values.set(24, ((Active*)single_instance_2078_6_0)->get_y());
        }
    }
    event_2078_6_end: ;
}
void Frames::loop_lockdown_guards_6()
{
    event_func_534();
    event_func_535();
}
// Function purpose: generated callback event_func_536 processes event block(s) 3686_6. Actions/conditions:
//        3686_6: adds a guardalert 266 instance; sets the selected object's horizontal position to
//        gameVariables->get_value(37, BarX); sets the selected object's vertical position to
//        gameVariables->get_value(38, BarY); plus 1 more actions.
void Frames::event_func_536()
{
    // event 3686_6 : adds a guardalert 266 instance; sets the selected object's horizontal position to gameVariables->get_value(37, BarX); sets the selected object's vertical position to gameVariables->get_value(38, BarY); plus 1 more actions
    {
        if (!(group_code_1)) goto event_3686_6_end;
        guardalert_266_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_guardalert_266(0, 0), 1);
            guardalert_266_instances.add_back();
        }
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(37, str_barx_500));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(38, str_bary_501));
            ((Active*)*it)->alterables->strings.set(0, str_barscut_502);
        }
    }
    event_3686_6_end: ;
}
void Frames::loop_fill_fence_floor2_6()
{
    event_func_536();
}
// Function purpose: generated callback event_func_537 processes event block(s) 349_6. Actions/conditions:
//        349_6: sets Avatar to saving_350->get_value(Player, Avatar, 0).
void Frames::event_func_537()
{
    // event 349_6 : sets Avatar to saving_350->get_value(Player, Avatar, 0)
    {
        if (!(group_setup_1)) goto event_349_6_end;
        if (!((global_values->get(11)) == (1))) goto event_349_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_349_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(40, str_avatar_105, ((INI*)get_instance(saving_350_instances))->get_value(str_player_102, str_avatar_105, 0));
    }
    event_349_6_end: ;
}
// Function purpose: generated callback event_func_538 processes event block(s) 350_6. Actions/conditions:
//        350_6: sets Avatar to 9.
void Frames::event_func_538()
{
    // event 350_6 : sets Avatar to 9
    {
        if (!(group_setup_1)) goto event_350_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_350_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(40, str_avatar_105, 9);
    }
    event_350_6_end: ;
}
// Function purpose: generated callback event_func_539 processes event block(s) 351_6. Actions/conditions:
//        351_6: sets Avatar to 10.
void Frames::event_func_539()
{
    // event 351_6 : sets Avatar to 10
    {
        if (!(group_setup_1)) goto event_351_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_351_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(40, str_avatar_105, 10);
    }
    event_351_6_end: ;
}
// Function purpose: generated callback event_func_540 processes event block(s) 352_6. Actions/conditions:
//        352_6: sets Avatar to 11.
void Frames::event_func_540()
{
    // event 352_6 : sets Avatar to 11
    {
        if (!(group_setup_1)) goto event_352_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_352_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(40, str_avatar_105, 11);
    }
    event_352_6_end: ;
}
// Function purpose: generated callback event_func_541 processes event block(s) 353_6. Actions/conditions:
//        353_6: sets Avatar to 11.
void Frames::event_func_541()
{
    // event 353_6 : sets Avatar to 11
    {
        if (!(group_setup_1)) goto event_353_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_353_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(40, str_avatar_105, 11);
    }
    event_353_6_end: ;
}
// Function purpose: generated callback event_func_542 processes event block(s) 354_6. Actions/conditions:
//        354_6: adds a player0 170 instance.
void Frames::event_func_542()
{
    // event 354_6 : adds a player0 170 instance
    {
        if (!(group_setup_1)) goto event_354_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (0))) goto event_354_6_end;
        player0_170_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player0_170(0, 0), 1);
            player0_170_instances.add_back();
        }
    }
    event_354_6_end: ;
}
// Function purpose: generated callback event_func_543 processes event block(s) 355_6. Actions/conditions:
//        355_6: adds a player1 366 instance.
void Frames::event_func_543()
{
    // event 355_6 : adds a player1 366 instance
    {
        if (!(group_setup_1)) goto event_355_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (1))) goto event_355_6_end;
        player1_366_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player1_366(0, 0), 1);
            player1_366_instances.add_back();
        }
    }
    event_355_6_end: ;
}
// Function purpose: generated callback event_func_544 processes event block(s) 356_6. Actions/conditions:
//        356_6: adds a player2 367 instance.
void Frames::event_func_544()
{
    // event 356_6 : adds a player2 367 instance
    {
        if (!(group_setup_1)) goto event_356_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (2))) goto event_356_6_end;
        player2_367_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player2_367(0, 0), 1);
            player2_367_instances.add_back();
        }
    }
    event_356_6_end: ;
}
// Function purpose: generated callback event_func_545 processes event block(s) 357_6. Actions/conditions:
//        357_6: adds a player3 368 instance.
void Frames::event_func_545()
{
    // event 357_6 : adds a player3 368 instance
    {
        if (!(group_setup_1)) goto event_357_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (3))) goto event_357_6_end;
        player3_368_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player3_368(0, 0), 1);
            player3_368_instances.add_back();
        }
    }
    event_357_6_end: ;
}
// Function purpose: generated callback event_func_546 processes event block(s) 358_6. Actions/conditions:
//        358_6: adds a player4 369 instance.
void Frames::event_func_546()
{
    // event 358_6 : adds a player4 369 instance
    {
        if (!(group_setup_1)) goto event_358_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (4))) goto event_358_6_end;
        player4_369_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player4_369(0, 0), 1);
            player4_369_instances.add_back();
        }
    }
    event_358_6_end: ;
}
// Function purpose: generated callback event_func_547 processes event block(s) 359_6. Actions/conditions:
//        359_6: adds a player5 370 instance.
void Frames::event_func_547()
{
    // event 359_6 : adds a player5 370 instance
    {
        if (!(group_setup_1)) goto event_359_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (5))) goto event_359_6_end;
        player5_370_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player5_370(0, 0), 1);
            player5_370_instances.add_back();
        }
    }
    event_359_6_end: ;
}
// Function purpose: generated callback event_func_548 processes event block(s) 360_6. Actions/conditions:
//        360_6: adds a player6 371 instance.
void Frames::event_func_548()
{
    // event 360_6 : adds a player6 371 instance
    {
        if (!(group_setup_1)) goto event_360_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (6))) goto event_360_6_end;
        player6_371_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player6_371(0, 0), 1);
            player6_371_instances.add_back();
        }
    }
    event_360_6_end: ;
}
// Function purpose: generated callback event_func_549 processes event block(s) 361_6. Actions/conditions:
//        361_6: adds a player7 372 instance.
void Frames::event_func_549()
{
    // event 361_6 : adds a player7 372 instance
    {
        if (!(group_setup_1)) goto event_361_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (7))) goto event_361_6_end;
        player7_372_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player7_372(0, 0), 1);
            player7_372_instances.add_back();
        }
    }
    event_361_6_end: ;
}
// Function purpose: generated callback event_func_550 processes event block(s) 362_6. Actions/conditions:
//        362_6: adds a player8 373 instance.
void Frames::event_func_550()
{
    // event 362_6 : adds a player8 373 instance
    {
        if (!(group_setup_1)) goto event_362_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (8))) goto event_362_6_end;
        player8_373_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_player8_373(0, 0), 1);
            player8_373_instances.add_back();
        }
    }
    event_362_6_end: ;
}
// Function purpose: generated callback event_func_551 processes event block(s) 363_6. Actions/conditions:
//        363_6: adds a playerescteam 477 instance.
void Frames::event_func_551()
{
    // event 363_6 : adds a playerescteam 477 instance
    {
        if (!(group_setup_1)) goto event_363_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (9))) goto event_363_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_363_6_end;
        playerescteam_477_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerescteam_477(-16, -16), 1);
            playerescteam_477_instances.add_back();
        }
    }
    event_363_6_end: ;
}
// Function purpose: generated callback event_func_552 processes event block(s) 364_6. Actions/conditions:
//        364_6: adds a playerdtaf 497 instance.
void Frames::event_func_552()
{
    // event 364_6 : adds a playerdtaf 497 instance
    {
        if (!(group_setup_1)) goto event_364_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (10))) goto event_364_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_364_6_end;
        playerdtaf_497_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerdtaf_497(-16, -16), 1);
            playerdtaf_497_instances.add_back();
        }
    }
    event_364_6_end: ;
}
// Function purpose: generated callback event_func_553 processes event block(s) 365_6. Actions/conditions:
//        365_6: adds a playerss 110 instance.
void Frames::event_func_553()
{
    // event 365_6 : adds a playerss 110 instance
    {
        if (!(group_setup_1)) goto event_365_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (11))) goto event_365_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_365_6_end;
        playerss_110_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerss_505(0, 0), 1);
            playerss_110_instances.add_back();
        }
    }
    event_365_6_end: ;
}
// Function purpose: generated callback event_func_554 processes event block(s) 366_6. Actions/conditions:
//        366_6: adds a playerss 110 instance.
void Frames::event_func_554()
{
    // event 366_6 : adds a playerss 110 instance
    {
        if (!(group_setup_1)) goto event_366_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_avatar_105)) == (11))) goto event_366_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_366_6_end;
        playerss_110_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerss_505(0, 0), 1);
            playerss_110_instances.add_back();
        }
    }
    event_366_6_end: ;
}
// Function purpose: generated callback event_func_555 processes event block(s) 367_6. Actions/conditions:
//        367_6: sets OutfitShort to 4; sets Outfit to 4_100; adds a outfitinmate 249 instance; plus 5 more actions.
void Frames::event_func_555()
{
    // event 367_6 : sets OutfitShort to 4; sets Outfit to 4_100; adds a outfitinmate 249 instance; plus 5 more actions
    {
        if (!(group_setup_1)) goto event_367_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_367_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_367_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_367_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_367_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_camp_504))) goto event_367_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_4_100_506);
        outfitinmate_249_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmate_249(0, 0), 1);
            outfitinmate_249_instances.add_back();
        }
        for (ObjectIterator it(outfitinmate_249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_367_6_end: ;
}
// Function purpose: generated callback event_func_556 processes event block(s) 368_6. Actions/conditions:
//        368_6: sets OutfitShort to 127; sets Outfit to 127_100; adds a outfitpow 376 instance; plus 5 more actions.
void Frames::event_func_556()
{
    // event 368_6 : sets OutfitShort to 127; sets Outfit to 127_100; adds a outfitpow 376 instance; plus 5 more actions
    {
        if (!(group_setup_1)) goto event_368_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_368_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (0))) goto event_368_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_368_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_368_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_camp_504))) goto event_368_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 127);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_127_100_507);
        outfitpow_376_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitpow_376(0, 0), 1);
            outfitpow_376_instances.add_back();
        }
        for (ObjectIterator it(outfitpow_376_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_368_6_end: ;
}
// Function purpose: generated callback event_func_557 processes event block(s) 369_6. Actions/conditions:
//        369_6: sets OutfitShort to 210; sets Outfit to 210_100; adds a outfitinmateescteam 481 instance; plus 5 more
//        actions.
void Frames::event_func_557()
{
    // event 369_6 : sets OutfitShort to 210; sets Outfit to 210_100; adds a outfitinmateescteam 481 instance; plus 5 more actions
    {
        if (!(group_setup_1)) goto event_369_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_369_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 210);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_210_100_508);
        outfitinmateescteam_481_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmateescteam_481(0, 0), 1);
            outfitinmateescteam_481_instances.add_back();
        }
        for (ObjectIterator it(outfitinmateescteam_481_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_369_6_end: ;
}
// Function purpose: generated callback event_func_558 processes event block(s) 370_6. Actions/conditions:
//        370_6: sets OutfitShort to 215; sets Outfit to 215_100; adds a outfitinmatebond 486 instance; plus 5 more
//        actions.
void Frames::event_func_558()
{
    // event 370_6 : sets OutfitShort to 215; sets Outfit to 215_100; adds a outfitinmatebond 486 instance; plus 5 more actions
    {
        if (!(group_setup_1)) goto event_370_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_370_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 215);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_215_100_509);
        outfitinmatebond_486_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatebond_486(0, 0), 1);
            outfitinmatebond_486_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatebond_486_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_370_6_end: ;
}
// Function purpose: generated callback event_func_559 processes event block(s) 371_6. Actions/conditions:
//        371_6: sets OutfitShort to 238; sets Outfit to 238_100; adds a outfitinmatess 503 instance; plus 5 more
//        actions.
void Frames::event_func_559()
{
    // event 371_6 : sets OutfitShort to 238; sets Outfit to 238_100; adds a outfitinmatess 503 instance; plus 5 more actions
    {
        if (!(group_setup_1)) goto event_371_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_371_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 238);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_238_100_510);
        outfitinmatess_503_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatess_503(0, 0), 1);
            outfitinmatess_503_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_371_6_end: ;
}
// Function purpose: generated callback event_func_560 processes event block(s) 372_6. Actions/conditions:
//        372_6: sets OutfitShort to 238; sets Outfit to 238_100; adds a outfitinmatess 503 instance; plus 5 more
//        actions.
void Frames::event_func_560()
{
    // event 372_6 : sets OutfitShort to 238; sets Outfit to 238_100; adds a outfitinmatess 503 instance; plus 5 more actions
    {
        if (!(group_setup_1)) goto event_372_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_372_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 238);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_238_100_510);
        outfitinmatess_503_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_outfitinmatess_503(0, 0), 1);
            outfitinmatess_503_instances.add_back();
        }
        for (ObjectIterator it(outfitinmatess_503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, -1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_372_6_end: ;
}
void Frames::loop_pavatar_6()
{
    event_func_537();
    event_func_538();
    event_func_539();
    event_func_540();
    event_func_541();
    event_func_542();
    event_func_543();
    event_func_544();
    event_func_545();
    event_func_546();
    event_func_547();
    event_func_548();
    event_func_549();
    event_func_550();
    event_func_551();
    event_func_552();
    event_func_553();
    event_func_554();
    event_func_555();
    event_func_556();
    event_func_557();
    event_func_558();
    event_func_559();
    event_func_560();
}
// Function purpose: generated callback event_func_561 processes event block(s) 1646_6. Actions/conditions:
//        1646_6: sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances,
//        it.current_index, default_active_instance))->get_x()+13; sets the selected object's numeric value to
//        ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+7.
void Frames::event_func_561()
{
    // event 1646_6 : sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_x()+13; sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+7
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1646_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleep_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1646_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleep_inmates_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_1646_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_x()+13);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+7);
        }
    }
    event_1646_6_end: ;
}
// Function purpose: generated callback event_func_562 processes event block(s) 1647_6. Actions/conditions:
//        1647_6: sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances,
//        it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to
//        ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+10.
void Frames::event_func_562()
{
    // event 1647_6 : sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_x()+8; sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+10
    {
        if (!(group_code_1 && group_code_schedules_sleeping_1)) goto event_1647_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleep_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_1647_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_sleep_inmates_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_1647_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_x()+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_y()+10);
        }
    }
    event_1647_6_end: ;
}
void Frames::loop_sleep_inmates_6()
{
    event_func_561();
    event_func_562();
}
// Function purpose: generated callback event_func_563 processes event block(s) 755_6. Actions/conditions:
//        755_6: sets a game or interface text string; sets a game or interface text string; sets a game or interface
//        text string; plus 1 more actions.
void Frames::event_func_563()
{
    // event 755_6 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_755_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_et_guard_equip_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_755_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_2_454, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_3_455, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_4_456, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_5_457, str_60_100_511);
    }
    event_755_6_end: ;
}
void Frames::loop_ww_guard_equip_6()
{
    event_func_563();
}
// Function purpose: generated callback event_func_564 processes event block(s) 2444_6. Actions/conditions:
//        2444_6: splits saved text into fields.
void Frames::event_func_564()
{
    // event 2444_6 : splits saved text into fields
    {
        if (!(group_code_1)) goto event_2444_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_numkey_513))), str__96);
    }
    event_2444_6_end: ;
}
// Function purpose: generated callback event_func_565 processes event block(s) 2445_6. Actions/conditions:
//        2445_6: sets SelectedSlot to 0; sets SelectedItem to -1.
void Frames::event_func_565()
{
    // event 2445_6 : sets SelectedSlot to 0; sets SelectedItem to -1
    {
        if (!(group_code_1)) goto event_2445_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (empty_string))) goto event_2445_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(46, str_selectedslot_514, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(47, str_selecteditem_515, -1);
    }
    event_2445_6_end: ;
}
// Function purpose: generated callback event_func_566 processes event block(s) 2446_6. Actions/conditions:
//        2446_6: sets SelectedSlot to gameVariables->get_value(45, NumKey); sets SelectedItem to
//        string_to_number(stringtokenizer_81->get(0)); sets SelectedItemHP to
//        string_to_number(stringtokenizer_81->get(1)); plus 1 more actions.
void Frames::event_func_566()
{
    // event 2446_6 : sets SelectedSlot to gameVariables->get_value(45, NumKey); sets SelectedItem to string_to_number(stringtokenizer_81->get(0)); sets SelectedItemHP to string_to_number(stringtokenizer_81->get(1)); plus 1 more actions
    {
        if (!(group_code_1)) goto event_2446_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (empty_string))) goto event_2446_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(46, str_selectedslot_514, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_numkey_513));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(47, str_selecteditem_515, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(48, str_selecteditemhp_516, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(49, str_cursor_517, str_use_518);
    }
    event_2446_6_end: ;
}
void Frames::loop_numkey_inv_6()
{
    event_func_564();
    event_func_565();
    event_func_566();
}
// Function purpose: generated callback event_func_567 processes event block(s) 3687_6. Actions/conditions:
//        3687_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric
//        value.
void Frames::event_func_567()
{
    // event 3687_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_result_3687_6 = false;
    bool or_temp_result_3687_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_3687_6_0_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16)+1, (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16), 5)) == (43))) goto or_event_3687_6_0_end;
        or_result_3687_6 = true;
        or_temp_result_3687_6_0 = true;
    }
    or_event_3687_6_0_end: ;
    // event 3687_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_temp_result_3687_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_3687_6_1_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16)-1, (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16), 5)) == (43))) goto or_event_3687_6_1_end;
        or_result_3687_6 = true;
        or_temp_result_3687_6_1 = true;
    }
    or_event_3687_6_1_end: ;
    // event 3687_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_temp_result_3687_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_3687_6_2_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16), (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16)-1, 5)) == (43))) goto or_event_3687_6_2_end;
        or_result_3687_6 = true;
        or_temp_result_3687_6_2 = true;
    }
    or_event_3687_6_2_end: ;
    // event 3687_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_temp_result_3687_6_3 = false;
    {
        if (!(group_code_1)) goto or_event_3687_6_3_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16), (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16)+1, 5)) == (43))) goto or_event_3687_6_3_end;
        or_result_3687_6 = true;
        or_temp_result_3687_6_3 = true;
        or_event_3687_6_3_end: ;
        if (!or_result_3687_6) goto or_final_or_event_3687_6_3_end;
        activepicture_160_instances.clear_selection();
        for (ObjectIterator it(activepicture_160_instances); !it.end(); ++it) {
            ((ActivePicture*)*it)->set_layer(5-1);
            ((ActivePicture*)*it)->paste(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(37, str_barx_500), ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(38, str_bary_501), 16, ((43-25)*16)-16, 16, 16, 0);
        }
        groundTiles_instances.clear_selection();
        for (ObjectIterator it(groundTiles_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(43, ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16, ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16, 5);
        }
    }
    or_final_or_event_3687_6_3_end: ;
}
// Function purpose: generated callback event_func_568 processes event block(s) 3688_6. Actions/conditions:
//        3688_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric
//        value.
void Frames::event_func_568()
{
    // event 3688_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_result_3688_6 = false;
    bool or_temp_result_3688_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_3688_6_0_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16)+1, (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16), 5)) == (44))) goto or_event_3688_6_0_end;
        or_result_3688_6 = true;
        or_temp_result_3688_6_0 = true;
    }
    or_event_3688_6_0_end: ;
    // event 3688_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_temp_result_3688_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_3688_6_1_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16)-1, (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16), 5)) == (44))) goto or_event_3688_6_1_end;
        or_result_3688_6 = true;
        or_temp_result_3688_6_1 = true;
    }
    or_event_3688_6_1_end: ;
    // event 3688_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_temp_result_3688_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_3688_6_2_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16), (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16)-1, 5)) == (44))) goto or_event_3688_6_2_end;
        or_result_3688_6 = true;
        or_temp_result_3688_6_2 = true;
    }
    or_event_3688_6_2_end: ;
    // event 3688_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_temp_result_3688_6_3 = false;
    {
        if (!(group_code_1)) goto or_event_3688_6_3_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16), (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16)+1, 5)) == (44))) goto or_event_3688_6_3_end;
        or_result_3688_6 = true;
        or_temp_result_3688_6_3 = true;
        or_event_3688_6_3_end: ;
        if (!or_result_3688_6) goto or_final_or_event_3688_6_3_end;
        activepicture_160_instances.clear_selection();
        for (ObjectIterator it(activepicture_160_instances); !it.end(); ++it) {
            ((ActivePicture*)*it)->set_layer(5-1);
            ((ActivePicture*)*it)->paste(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(37, str_barx_500), ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(38, str_bary_501), 16, ((44-25)*16)-16, 16, 16, 0);
        }
        groundTiles_instances.clear_selection();
        for (ObjectIterator it(groundTiles_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(44, ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16, ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16, 5);
        }
    }
    or_final_or_event_3688_6_3_end: ;
}
// Function purpose: generated callback event_func_569 processes event block(s) 3689_6. Actions/conditions:
//        3689_6: sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric
//        value.
void Frames::event_func_569()
{
    // event 3689_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_result_3689_6 = false;
    bool or_temp_result_3689_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_3689_6_0_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16)+1, (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16), 5)) == (45))) goto or_event_3689_6_0_end;
        or_result_3689_6 = true;
        or_temp_result_3689_6_0 = true;
    }
    or_event_3689_6_0_end: ;
    // event 3689_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_temp_result_3689_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_3689_6_1_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16)-1, (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16), 5)) == (45))) goto or_event_3689_6_1_end;
        or_result_3689_6 = true;
        or_temp_result_3689_6_1 = true;
    }
    or_event_3689_6_1_end: ;
    // event 3689_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_temp_result_3689_6_2 = false;
    {
        if (!(group_code_1)) goto or_event_3689_6_2_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16), (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16)-1, 5)) == (45))) goto or_event_3689_6_2_end;
        or_result_3689_6 = true;
        or_temp_result_3689_6_2 = true;
    }
    or_event_3689_6_2_end: ;
    // event 3689_6 : sets the selected object's layer to 5-1; draws the selected image or tile; sets a stored numeric value
    bool or_temp_result_3689_6_3 = false;
    {
        if (!(group_code_1)) goto or_event_3689_6_3_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16), (((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16)+1, 5)) == (45))) goto or_event_3689_6_3_end;
        or_result_3689_6 = true;
        or_temp_result_3689_6_3 = true;
        or_event_3689_6_3_end: ;
        if (!or_result_3689_6) goto or_final_or_event_3689_6_3_end;
        activepicture_160_instances.clear_selection();
        for (ObjectIterator it(activepicture_160_instances); !it.end(); ++it) {
            ((ActivePicture*)*it)->set_layer(5-1);
            ((ActivePicture*)*it)->paste(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(37, str_barx_500), ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(38, str_bary_501), 16, ((45-25)*16)-16, 16, 16, 0);
        }
        groundTiles_instances.clear_selection();
        for (ObjectIterator it(groundTiles_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(45, ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(37, str_barx_500)/MathHelper()/16, ((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(38, str_bary_501)/MathHelper()/16, 5);
        }
    }
    or_final_or_event_3689_6_3_end: ;
}
void Frames::loop_fill_fence_floor5_6()
{
    event_func_567();
    event_func_568();
    event_func_569();
}
// Function purpose: generated callback event_func_570 processes event block(s) 408_6. Actions/conditions:
//        408_6: splits saved text into fields; sets a stored numeric value.
void Frames::event_func_570()
{
    // event 408_6 : splits saved text into fields; sets a stored numeric value
    {
        if (!(group_setup_1)) goto event_408_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_inmates_519, number_to_string(loop_createload_inmates_index+1), empty_string), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_npc_avatar_520+number_to_string(loop_createload_inmates_index+1), string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6)));
    }
    event_408_6_end: ;
}
// Function purpose: generated callback event_func_571 processes event block(s) 409_6. Actions/conditions:
//        409_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_571()
{
    // event 409_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_409_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (0))) goto event_409_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_409_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_409_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_409_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmate4_193_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate4_193(-16, -16), 1);
            inmate4_193_instances.add_back();
        }
        for (ObjectIterator it(inmate4_193_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate4_193_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_409_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_409_6_3: ;
        }
    }
    event_409_6_end: ;
}
// Function purpose: generated callback event_func_572 processes event block(s) 410_6. Actions/conditions:
//        410_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_572()
{
    // event 410_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_410_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (1))) goto event_410_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_410_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_410_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_410_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmate3_192_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate3_192(-16, -16), 1);
            inmate3_192_instances.add_back();
        }
        for (ObjectIterator it(inmate3_192_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate3_192_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_410_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_410_6_3: ;
        }
    }
    event_410_6_end: ;
}
// Function purpose: generated callback event_func_573 processes event block(s) 411_6. Actions/conditions:
//        411_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_573()
{
    // event 411_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_411_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (2))) goto event_411_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_411_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_411_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_411_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmate2_190_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate2_190(-16, -16), 1);
            inmate2_190_instances.add_back();
        }
        for (ObjectIterator it(inmate2_190_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate2_190_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_411_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_411_6_3: ;
        }
    }
    event_411_6_end: ;
}
// Function purpose: generated callback event_func_574 processes event block(s) 412_6. Actions/conditions:
//        412_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_574()
{
    // event 412_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_412_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (3))) goto event_412_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_412_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_412_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_412_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmate7_286_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate7_286(-16, -16), 1);
            inmate7_286_instances.add_back();
        }
        for (ObjectIterator it(inmate7_286_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate7_286_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_412_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_412_6_3: ;
        }
    }
    event_412_6_end: ;
}
// Function purpose: generated callback event_func_575 processes event block(s) 413_6. Actions/conditions:
//        413_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_575()
{
    // event 413_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_413_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (4))) goto event_413_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_413_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_413_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_413_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmate11_290_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate11_290(-16, -16), 1);
            inmate11_290_instances.add_back();
        }
        for (ObjectIterator it(inmate11_290_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate11_290_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_413_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_413_6_3: ;
        }
    }
    event_413_6_end: ;
}
// Function purpose: generated callback event_func_576 processes event block(s) 414_6. Actions/conditions:
//        414_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_576()
{
    // event 414_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_414_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (5))) goto event_414_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_414_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_414_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_414_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmate10_289_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate10_289(-16, -16), 1);
            inmate10_289_instances.add_back();
        }
        for (ObjectIterator it(inmate10_289_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate10_289_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_414_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_414_6_3: ;
        }
    }
    event_414_6_end: ;
}
// Function purpose: generated callback event_func_577 processes event block(s) 415_6. Actions/conditions:
//        415_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_577()
{
    // event 415_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_415_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (6))) goto event_415_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_415_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_415_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_415_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmate8_287_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate8_287(-16, -16), 1);
            inmate8_287_instances.add_back();
        }
        for (ObjectIterator it(inmate8_287_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate8_287_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_415_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_415_6_3: ;
        }
    }
    event_415_6_end: ;
}
// Function purpose: generated callback event_func_578 processes event block(s) 416_6. Actions/conditions:
//        416_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_578()
{
    // event 416_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_416_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (7))) goto event_416_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_416_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_416_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_416_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmate9_288_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate9_288(-16, -16), 1);
            inmate9_288_instances.add_back();
        }
        for (ObjectIterator it(inmate9_288_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate9_288_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_416_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_416_6_3: ;
        }
    }
    event_416_6_end: ;
}
// Function purpose: generated callback event_func_579 processes event block(s) 417_6. Actions/conditions:
//        417_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_579()
{
    // event 417_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_417_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (8))) goto event_417_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_417_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_417_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_417_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmate_175_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmate_175(-16, -16), 1);
            inmate_175_instances.add_back();
        }
        for (ObjectIterator it(inmate_175_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmate_175_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_417_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_417_6_3: ;
        }
    }
    event_417_6_end: ;
}
// Function purpose: generated callback event_func_580 processes event block(s) 418_6. Actions/conditions:
//        418_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 10 more actions.
void Frames::event_func_580()
{
    // event 418_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 10 more actions
    {
        if (!(group_setup_1)) goto event_418_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (9))) goto event_418_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_418_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_418_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_418_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
            ((Active*)*it)->alterables->strings.set(4, str_cage_521);
        }
        inmateescteam1_478_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateescteam1_478(-16, -16), 1);
            inmateescteam1_478_instances.add_back();
        }
        for (ObjectIterator it(inmateescteam1_478_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmateescteam1_478_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_418_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_418_6_3: ;
        }
    }
    event_418_6_end: ;
}
// Function purpose: generated callback event_func_581 processes event block(s) 419_6. Actions/conditions:
//        419_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 10 more actions.
void Frames::event_func_581()
{
    // event 419_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 10 more actions
    {
        if (!(group_setup_1)) goto event_419_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (10))) goto event_419_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_419_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_419_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_419_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
            ((Active*)*it)->alterables->strings.set(4, str_sean_522);
        }
        inmateescteam2_479_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateescteam2_479(-16, -16), 1);
            inmateescteam2_479_instances.add_back();
        }
        for (ObjectIterator it(inmateescteam2_479_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmateescteam2_479_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_419_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_419_6_3: ;
        }
    }
    event_419_6_end: ;
}
// Function purpose: generated callback event_func_582 processes event block(s) 420_6. Actions/conditions:
//        420_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 10 more actions.
void Frames::event_func_582()
{
    // event 420_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 10 more actions
    {
        if (!(group_setup_1)) goto event_420_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (11))) goto event_420_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_420_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_420_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_420_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
            ((Active*)*it)->alterables->strings.set(4, str_andy_523);
        }
        inmateescteam3_480_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateescteam3_480(-16, -16), 1);
            inmateescteam3_480_instances.add_back();
        }
        for (ObjectIterator it(inmateescteam3_480_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmateescteam3_480_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_420_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_420_6_3: ;
        }
    }
    event_420_6_end: ;
}
// Function purpose: generated callback event_func_583 processes event block(s) 421_6. Actions/conditions:
//        421_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_583()
{
    // event 421_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_421_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (12))) goto event_421_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_421_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_421_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_421_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatedtaf1_488_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf1_488(-16, -16), 1);
            inmatedtaf1_488_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf1_488_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf1_488_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_421_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_421_6_3: ;
        }
    }
    event_421_6_end: ;
}
// Function purpose: generated callback event_func_584 processes event block(s) 422_6. Actions/conditions:
//        422_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_584()
{
    // event 422_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_422_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (13))) goto event_422_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_422_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_422_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_422_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatedtaf2_489_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf2_489(-16, -16), 1);
            inmatedtaf2_489_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf2_489_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf2_489_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_422_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_422_6_3: ;
        }
    }
    event_422_6_end: ;
}
// Function purpose: generated callback event_func_585 processes event block(s) 423_6. Actions/conditions:
//        423_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_585()
{
    // event 423_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_423_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (14))) goto event_423_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_423_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_423_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_423_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatedtaf3_490_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf3_490(-16, -16), 1);
            inmatedtaf3_490_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf3_490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf3_490_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_423_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_423_6_3: ;
        }
    }
    event_423_6_end: ;
}
// Function purpose: generated callback event_func_586 processes event block(s) 424_6. Actions/conditions:
//        424_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_586()
{
    // event 424_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_424_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (15))) goto event_424_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_424_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_424_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_424_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatedtaf4_491_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf4_491(-16, -16), 1);
            inmatedtaf4_491_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf4_491_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf4_491_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_424_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_424_6_3: ;
        }
    }
    event_424_6_end: ;
}
// Function purpose: generated callback event_func_587 processes event block(s) 425_6. Actions/conditions:
//        425_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_587()
{
    // event 425_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_425_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (16))) goto event_425_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_425_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_425_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_425_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatedtaf5_492_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf5_492(-16, -16), 1);
            inmatedtaf5_492_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf5_492_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf5_492_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_425_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_425_6_3: ;
        }
    }
    event_425_6_end: ;
}
// Function purpose: generated callback event_func_588 processes event block(s) 426_6. Actions/conditions:
//        426_6: adds a baseinmate 250 instance; sets the selected object's numeric value to
//        loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions.
void Frames::event_func_588()
{
    // event 426_6 : adds a baseinmate 250 instance; sets the selected object's numeric value to loop_createload_inmates_index+1; sets the object position in the world; plus 9 more actions
    {
        if (!(group_setup_1)) goto event_426_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6))) == (17))) goto event_426_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_createload_inmates_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_426_6_end;
        inmateBase_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmateBase(-16, -16), 1);
            inmateBase_instances.add_back();
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_426_6_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_426_6_1: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->alterables->values.set(19, 2);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
        }
        inmatedtaf6_493_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_inmatedtaf6_493(-16, -16), 1);
            inmatedtaf6_493_instances.add_back();
        }
        for (ObjectIterator it(inmatedtaf6_493_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, loop_createload_inmates_index+1);
            ((Active*)*it)->alterables->values.set(25, qualifier_14.size());
        }
        for (ObjectIterator it(inmatedtaf6_493_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_426_6_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_426_6_3: ;
        }
    }
    event_426_6_end: ;
}
