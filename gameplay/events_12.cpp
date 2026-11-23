#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_shakedown_pick_6()
{
    event_func_905();
}
// Function purpose: generated callback event_func_906 processes event block(s) 2232_6. Actions/conditions:
//        2232_6: sets Illegals to 1; sets heat_add to 15*gameVariables->get_value(83, NPClvl).
void Frames::event_func_906()
{
    // event 2232_6 : sets Illegals to 1; sets heat_add to 15*gameVariables->get_value(83, NPClvl)
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2232_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(148, str_looted_721)) > (0))) goto event_2232_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 15*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587));
    }
    event_2232_6_end: ;
}
// Function purpose: generated callback event_func_907 processes event block(s) 2233_6. Actions/conditions:
//        2233_6: sets Illegals to 1; sets heat_add to 15*gameVariables->get_value(83, NPClvl).
void Frames::event_func_907()
{
    // event 2233_6 : sets Illegals to 1; sets heat_add to 15*gameVariables->get_value(83, NPClvl)
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2233_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(3)) > (0))) goto event_2233_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 15*((AssociateArray*)get_instance(gameVariables_instances))->get_value(83, str_npclvl_587));
    }
    event_2233_6_end: ;
}
// Function purpose: generated callback event_func_908 processes event block(s) 2234_6. Actions/conditions:
//        2234_6: sets Illegals to 1; sets heat_add to 15.
void Frames::event_func_908()
{
    // event 2234_6 : sets Illegals to 1; sets heat_add to 15
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2234_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_2234_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 15);
    }
    event_2234_6_end: ;
}
// Function purpose: generated callback event_func_909 processes event block(s) 2235_6. Actions/conditions:
//        2235_6: sets Illegals to 1; sets heat_add to 15.
void Frames::event_func_909()
{
    // event 2235_6 : sets Illegals to 1; sets heat_add to 15
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2235_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) > (0))) goto event_2235_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 15);
    }
    event_2235_6_end: ;
}
// Function purpose: generated callback event_func_910 processes event block(s) 2236_6. Actions/conditions:
//        2236_6: sets Illegals to 1; sets heat_add to 15.
void Frames::event_func_910()
{
    // event 2236_6 : sets Illegals to 1; sets heat_add to 15
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2236_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_2236_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(152, str_zone_nope_725)) > (0))) goto event_2236_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 15);
    }
    event_2236_6_end: ;
}
// Function purpose: generated callback event_func_911 processes event block(s) 2237_6. Actions/conditions:
//        2237_6: sets Illegals to 1; sets heat_add to 100.
void Frames::event_func_911()
{
    // event 2237_6 : sets Illegals to 1; sets heat_add to 100
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2237_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) > (0))) goto event_2237_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 100);
    }
    event_2237_6_end: ;
}
// Function purpose: generated callback event_func_912 processes event block(s) 2238_6. Actions/conditions:
//        2238_6: sets Illegals to 1; sets heat_add to 100.
void Frames::event_func_912()
{
    // event 2238_6 : sets Illegals to 1; sets heat_add to 100
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2238_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) > (0))) goto event_2238_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 100);
    }
    event_2238_6_end: ;
}
// Function purpose: generated callback event_func_913 processes event block(s) 2239_6. Actions/conditions:
//        2239_6: sets Illegals to 1; sets heat_add to 100.
void Frames::event_func_913()
{
    // event 2239_6 : sets Illegals to 1; sets heat_add to 100
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2239_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) > (0))) goto event_2239_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 100);
    }
    event_2239_6_end: ;
}
// Function purpose: generated callback event_func_914 processes event block(s) 2240_6. Actions/conditions:
//        2240_6: sets Illegals to 1; sets heat_add to 100.
void Frames::event_func_914()
{
    // event 2240_6 : sets Illegals to 1; sets heat_add to 100
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2240_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(156, str_unscrewing_729)) > (0))) goto event_2240_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 100);
    }
    event_2240_6_end: ;
}
// Function purpose: generated callback event_func_915 processes event block(s) 2241_6. Actions/conditions:
//        2241_6: sets Illegals to 1; sets heat_add to 100.
void Frames::event_func_915()
{
    // event 2241_6 : sets Illegals to 1; sets heat_add to 100
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2241_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(24, str_outsidewalls_486)) == (1))) goto event_2241_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 100);
    }
    event_2241_6_end: ;
}
// Function purpose: generated callback event_func_916 processes event block(s) 2242_6. Actions/conditions:
//        2242_6: sets Illegals to 1; sets heat_add to 100.
void Frames::event_func_916()
{
    // event 2242_6 : sets Illegals to 1; sets heat_add to 100
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2242_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(157, str_doors_cell_locked_730)) == (1))) goto event_2242_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) == (0))) goto event_2242_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(159, str_zone_shu_732)) == (0))) goto event_2242_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 100);
    }
    event_2242_6_end: ;
}
// Function purpose: generated callback event_func_917 processes event block(s) 2243_6. Actions/conditions:
//        2243_6: sets Illegals to 1; sets heat_add to 30.
void Frames::event_func_917()
{
    // event 2243_6 : sets Illegals to 1; sets heat_add to 30
    {
        if (!(group_code_1 && group_code_misc_cameras_1)) goto event_2243_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(7)) > (0))) goto event_2243_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2243_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(160, str_zone_cells_733)) == (1))) goto event_2243_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(158, str_zone_sleep_731)) == (0))) goto event_2243_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2243_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_mailman_556))) goto event_2243_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_library_25))) goto event_2243_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(149, str_illegals_722, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(150, str_heat_add_723, 30);
    }
    event_2243_6_end: ;
}
void Frames::loop_cam_illegals_6()
{
    event_func_906();
    event_func_907();
    event_func_908();
    event_func_909();
    event_func_910();
    event_func_911();
    event_func_912();
    event_func_913();
    event_func_914();
    event_func_915();
    event_func_916();
    event_func_917();
}
// Function purpose: generated callback event_func_918 processes event block(s) 4466_6. Actions/conditions:
//        4466_6: increments ven by 1.
void Frames::event_func_918()
{
    // event 4466_6 : increments ven by 1
    {
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_tally_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (str_0_0_0_0_734))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4466_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(161, str_ven_735, 1);
    }
    event_4466_6_end: ;
}
// Function purpose: generated callback event_func_919 processes event block(s) 4467_6. Actions/conditions:
//        4467_6: increments fav by 1.
void Frames::event_func_919()
{
    // event 4467_6 : increments fav by 1
    {
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_tally_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(2)) != (empty_string))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4467_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(162, str_fav_736, 1);
    }
    event_4467_6_end: ;
}
void Frames::loop_tally_6()
{
    event_func_918();
    event_func_919();
}
// Function purpose: generated callback event_func_920 processes event block(s) 9_6. Actions/conditions: 9_6:
//        sets the target width; sets the target height.
void Frames::event_func_920()
{
    // event 9_6 : sets the target width; sets the target height
    {
        if (!(group_load_map_from_file_1)) goto event_9_6_end;
        if (!((global_values->get(18)) > (1))) goto event_9_6_end;
        set_width(1752, true);
        set_height(1745, true);
    }
    event_9_6_end: ;
}
// Function purpose: generated callback event_func_921 processes event block(s) 10_6. Actions/conditions: 10_6:
//        sets the target width; sets the target height.
void Frames::event_func_921()
{
    // event 10_6 : sets the target width; sets the target height
    {
        if (!(group_load_map_from_file_1)) goto event_10_6_end;
        if (!((global_values->get(18)) == (1))) goto event_10_6_end;
        if (!((global_strings->get(0)) == (str_alca_139))) goto event_10_6_end;
        set_width(1752, true);
        set_height(1745, true);
    }
    event_10_6_end: ;
}
// Function purpose: generated callback event_func_922 processes event block(s) 11_6. Actions/conditions: 11_6:
//        sets eTeam to 1; sets the target width; sets the target height.
void Frames::event_func_922()
{
    // event 11_6 : sets eTeam to 1; sets the target width; sets the target height
    {
        if (!(group_load_map_from_file_1)) goto event_11_6_end;
        if (!((global_values->get(18)) == (1))) goto event_11_6_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_11_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(39, str_eteam_238, 1);
        set_width(2192+30, true);
        set_height(1745, true);
    }
    event_11_6_end: ;
}
// Function purpose: generated callback event_func_923 processes event block(s) 12_6. Actions/conditions: 12_6:
//        sets tankstage to 0; sets DTAF to 1; sets the target width; plus 1 more actions.
void Frames::event_func_923()
{
    // event 12_6 : sets tankstage to 0; sets DTAF to 1; sets the target width; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_12_6_end;
        if (!((global_values->get(18)) == (1))) goto event_12_6_end;
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_12_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(92, str_tankstage_601, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_dtaf_137, 1);
        set_width(2192+30, true);
        set_height(1745, true);
    }
    event_12_6_end: ;
}
// Function purpose: generated callback event_func_924 processes event block(s) 13_6. Actions/conditions: 13_6:
//        sets treestage to 1; sets SSS to 1; sets the target width; plus 1 more actions.
void Frames::event_func_924()
{
    // event 13_6 : sets treestage to 1; sets SSS to 1; sets the target width; plus 1 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_13_6_end;
        if (!((global_values->get(18)) == (1))) goto event_13_6_end;
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_13_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(163, str_treestage_737, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(8, str_sss_239, 1);
        set_width(2192+30, true);
        set_height(1745, true);
    }
    event_13_6_end: ;
}
// Function purpose: generated callback event_func_925 processes event block(s) 14_6. Actions/conditions: 14_6:
//        sets the target width; sets the target height.
void Frames::event_func_925()
{
    // event 14_6 : sets the target width; sets the target height
    {
        if (!(group_load_map_from_file_1)) goto event_14_6_end;
        if (!((global_values->get(18)) == (1))) goto event_14_6_end;
        if (!((global_strings->get(0)) == (str_bc_133))) goto event_14_6_end;
        set_width(1712+30, true);
        set_height(1408, true);
    }
    event_14_6_end: ;
}
// Function purpose: generated callback event_func_926 processes event block(s) 15_6. Actions/conditions: 15_6:
//        sets the target width; sets the target height.
void Frames::event_func_926()
{
    // event 15_6 : sets the target width; sets the target height
    {
        if (!(group_load_map_from_file_1)) goto event_15_6_end;
        if (!((global_values->get(18)) == (1))) goto event_15_6_end;
        if (!((global_strings->get(0)) == (str_ccl_130))) goto event_15_6_end;
        set_width(1712+30, true);
        set_height(1408, true);
    }
    event_15_6_end: ;
}
// Function purpose: generated callback event_func_927 processes event block(s) 16_6. Actions/conditions: 16_6:
//        updates a value on the target object; sets Map_Perim_Top to mapload_322->get_value(Perim, Top, 0); sets
//        Map_Perim_Bottom to mapload_322->get_value(Perim, Bottom, 0); plus 31 more actions.
void Frames::event_func_927()
{
    // event 16_6 : updates a value on the target object; sets Map_Perim_Top to mapload_322->get_value(Perim, Top, 0); sets Map_Perim_Bottom to mapload_322->get_value(Perim, Bottom, 0); plus 31 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_16_6_end;
        if (!((global_values->get(18)) != (2))) goto event_16_6_end;
        global_strings->set(4, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_maphash_738, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(26, str_map_perim_top_489, ((INI*)get_instance(mapload_322_instances))->get_value(str_perim_739, str_top_740, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(27, str_map_perim_bottom_490, ((INI*)get_instance(mapload_322_instances))->get_value(str_perim_739, str_bottom_741, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(28, str_map_perim_left_491, ((INI*)get_instance(mapload_322_instances))->get_value(str_perim_739, str_left_82, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(29, str_map_perim_right_492, ((INI*)get_instance(mapload_322_instances))->get_value(str_perim_739, str_right_83, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(164, str_map_music_742, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_music_53, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(165, str_map_groundtype_743, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_tileset_351, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(166, str_mapname_126, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_mapname_126, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(55, str_maptileset_549, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_tileset_351, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(19, str_maptype_109, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_maptype_109, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(167, str_mapwarden_744, ((ListObject*)get_instance(warden_392_instances))->get_line(randrange_event(((ListObject*)get_instance(warden_392_instances))->get_count())+1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(43, str_maproutine_503, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_routineset_745, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(168, str_inmatecount_746, ((INI*)get_instance(mapload_322_instances))->get_value(str_info_348, str_inmates_519, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(169, str_guardcount_747, ((INI*)get_instance(mapload_322_instances))->get_value(str_info_348, str_guards_538, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(83, str_npclvl_587, ((INI*)get_instance(mapload_322_instances))->get_value(str_info_348, str_npclvl_587, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(170, str_fightfreq_748, ((INI*)get_instance(mapload_322_instances))->get_value(str_info_348, str_fightfreq_748, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_intro_750, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(172, str_hint1_751, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_hint1_751, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(173, str_hint2_752, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_hint2_752, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(174, str_hint3_753, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_hint3_753, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(175, str_map_job_laundry_754, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_laundry_29, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(176, str_map_job_gardening_756, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_gardening_43, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(177, str_map_job_janitor_757, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_janitor_24, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(178, str_map_job_woodshop_758, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_woodshop_21, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(179, str_map_job_metalshop_759, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_metalshop_35, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(180, str_map_job_kitchen_760, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_kitchen_12, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(181, str_map_job_deliveries_761, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_deliveries_577, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(182, str_map_job_tailor_762, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_tailor_479, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(183, str_map_job_mailman_763, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_mailman_556, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(184, str_map_job_library_764, ((INI*)get_instance(mapload_322_instances))->get_value(str_jobs_755, str_library_25, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(17, str_job_478, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_jobs_755, str_startingjob_765, empty_string));
    }
    event_16_6_end: ;
}
// Function purpose: generated callback event_func_928 processes event block(s) 17_6. Actions/conditions: 17_6:
//        sets Map_Tileset to mapload_322->get_string_default(Info, Tileset, empty_string); sets Zones_Rollcall to
//        mapload_322->get_string_default(Zones, Rollcall, empty_string); sets Zones_YourCell to
//        mapload_322->get_string_default(Zones, YourCell, empty_string); plus 28 more actions.
void Frames::event_func_928()
{
    // event 17_6 : sets Map_Tileset to mapload_322->get_string_default(Info, Tileset, empty_string); sets Zones_Rollcall to mapload_322->get_string_default(Zones, Rollcall, empty_string); sets Zones_YourCell to mapload_322->get_string_default(Zones, YourCell, empty_string); plus 28 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_17_6_end;
        if (!((global_values->get(18)) != (2))) goto event_17_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(185, str_map_tileset_766, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_info_348, str_tileset_351, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(186, str_zones_rollcall_767, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_rollcall_769, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(187, str_zones_yourcell_770, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_yourcell_771, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(188, str_zones_canteen_772, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_canteen_773, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(189, str_zones_gym_774, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_gym_775, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(190, str_zones_showers_776, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_showers_777, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(191, str_zones_shu_778, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_shu_779, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(192, str_zones_kitchen_780, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_kitchen_12, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(193, str_zones_laundry_781, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_laundry_29, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(194, str_zones_woodshop_782, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_woodshop_21, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(195, str_zones_tailorshop_783, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_tailorshop_44, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(196, str_zones_metalshop_784, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_metalshop_35, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(197, str_zones_deliveries_785, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_deliveries_577, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(198, str_zones_janitor_786, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_janitor_24, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(199, str_zones_gardening_787, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_gardening_43, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(200, str_zones_safe1_788, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_safe1_789, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(201, str_zones_safe2_790, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_safe2_791, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(202, str_zones_safe3_792, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_safe3_793, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(203, str_zones_cells1_794, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells1_795, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(204, str_zones_cells2_796, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells2_797, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(205, str_zones_cells3_798, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells3_799, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(206, str_zones_cells4_800, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells4_801, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(207, str_zones_cells5_802, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells5_803, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(208, str_zones_cells6_804, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells6_805, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(209, str_zones_cells7_806, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells7_807, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(210, str_zones_cells8_808, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells8_809, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(211, str_zones_cells9_810, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells9_811, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(212, str_zones_cells10_812, ((INI*)get_instance(mapload_322_instances))->get_string_default(str_zones_768, str_cells10_813, empty_string));
    }
    event_17_6_end: ;
}
// Function purpose: generated callback event_func_929 processes event block(s) 18_6. Actions/conditions: 18_6:
//        updates a value on the target object; sets Map_Perim_Top to newmapini_468->get_value_int(Perim, Top); sets
//        Map_Perim_Bottom to newmapini_468->get_value_int(Perim, Bottom); plus 33 more actions.
void Frames::event_func_929()
{
    // event 18_6 : updates a value on the target object; sets Map_Perim_Top to newmapini_468->get_value_int(Perim, Top); sets Map_Perim_Bottom to newmapini_468->get_value_int(Perim, Bottom); plus 33 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_18_6_end;
        if (!((global_values->get(18)) == (2))) goto event_18_6_end;
        global_strings->set(4, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_maphash_738));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(26, str_map_perim_top_489, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_perim_739, str_top_740));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(27, str_map_perim_bottom_490, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_perim_739, str_bottom_741));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(28, str_map_perim_left_491, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_perim_739, str_left_82));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(29, str_map_perim_right_492, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_perim_739, str_right_83));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(164, str_map_music_742, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_music_53));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(165, str_map_groundtype_743, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_tileset_351));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(166, str_mapname_126, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_mapname_126));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(55, str_maptileset_549, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_tileset_351));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(54, str_mapfloor_548, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_floor_814));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(19, str_maptype_109, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_maptype_109));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(213, str_mapwarden2_815, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_warden_594));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(167, str_mapwarden_744, ((ListObject*)get_instance(warden_392_instances))->get_line(randrange_event(((ListObject*)get_instance(warden_392_instances))->get_count())+1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(43, str_maproutine_503, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_routineset_745));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(168, str_inmatecount_746, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_info_348, str_inmates_519));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(169, str_guardcount_747, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_info_348, str_guards_538));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(83, str_npclvl_587, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_info_348, str_npclvl_587));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(170, str_fightfreq_748, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_info_348, str_fightfreq_748));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(171, str_mapintro_749, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_intro_750));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(172, str_hint1_751, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_hint1_751));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(173, str_hint2_752, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_hint2_752));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(174, str_hint3_753, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_hint3_753));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(175, str_map_job_laundry_754, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_jobs_755, str_laundry_29));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(176, str_map_job_gardening_756, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_jobs_755, str_gardening_43));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(177, str_map_job_janitor_757, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_jobs_755, str_janitor_24));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(178, str_map_job_woodshop_758, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_jobs_755, str_woodshop_21));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(179, str_map_job_metalshop_759, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_jobs_755, str_metalshop_35));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(180, str_map_job_kitchen_760, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_jobs_755, str_kitchen_12));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(181, str_map_job_deliveries_761, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_jobs_755, str_deliveries_577));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(182, str_map_job_tailor_762, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_jobs_755, str_tailor_479));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(183, str_map_job_mailman_763, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_jobs_755, str_mailman_556));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(184, str_map_job_library_764, ((INI*)get_instance(newmapini_468_instances))->get_value_int(str_jobs_755, str_library_25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(17, str_job_478, ((INI*)get_instance(newmapini_468_instances))->get_string(str_jobs_755, str_startingjob_765));
    }
    event_18_6_end: ;
}
// Function purpose: generated callback event_func_930 processes event block(s) 19_6. Actions/conditions: 19_6:
//        sets Map_Version to newmapini_468->get_string(Info, Version); sets Map_Tileset to
//        newmapini_468->get_string(Info, Tileset); sets Zones_Rollcall to newmapini_468->get_string(Zones, Rollcall);
//        plus 29 more actions.
void Frames::event_func_930()
{
    // event 19_6 : sets Map_Version to newmapini_468->get_string(Info, Version); sets Map_Tileset to newmapini_468->get_string(Info, Tileset); sets Zones_Rollcall to newmapini_468->get_string(Zones, Rollcall); plus 29 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_19_6_end;
        if (!((global_values->get(18)) == (2))) goto event_19_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(214, str_map_version_816, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_version_342));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(185, str_map_tileset_766, ((INI*)get_instance(newmapini_468_instances))->get_string(str_info_348, str_tileset_351));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(186, str_zones_rollcall_767, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_rollcall_769));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(187, str_zones_yourcell_770, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_yourcell_771));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(188, str_zones_canteen_772, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_canteen_773));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(189, str_zones_gym_774, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_gym_775));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(190, str_zones_showers_776, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_showers_777));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(191, str_zones_shu_778, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_shu_779));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(192, str_zones_kitchen_780, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_kitchen_12));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(193, str_zones_laundry_781, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_laundry_29));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(194, str_zones_woodshop_782, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_woodshop_21));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(195, str_zones_tailorshop_783, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_tailorshop_44));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(196, str_zones_metalshop_784, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_metalshop_35));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(197, str_zones_deliveries_785, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_deliveries_577));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(198, str_zones_janitor_786, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_janitor_24));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(199, str_zones_gardening_787, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_gardening_43));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(200, str_zones_safe1_788, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_safe1_789));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(201, str_zones_safe2_790, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_safe2_791));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(202, str_zones_safe3_792, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_safe3_793));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(203, str_zones_cells1_794, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_cells1_795));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(204, str_zones_cells2_796, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_cells2_797));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(205, str_zones_cells3_798, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_cells3_799));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(206, str_zones_cells4_800, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_cells4_801));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(207, str_zones_cells5_802, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_cells5_803));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(208, str_zones_cells6_804, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_cells6_805));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(209, str_zones_cells7_806, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_cells7_807));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(210, str_zones_cells8_808, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_cells8_809));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(211, str_zones_cells9_810, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_cells9_811));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(212, str_zones_cells10_812, ((INI*)get_instance(newmapini_468_instances))->get_string(str_zones_768, str_cells10_813));
    }
    event_19_6_end: ;
}
// Function purpose: generated callback event_func_931 processes event block(s) 20_6. Actions/conditions: 20_6:
//        sets MapWarden to gameVariables->get_string(213, MapWarden2).
void Frames::event_func_931()
{
    // event 20_6 : sets MapWarden to gameVariables->get_string(213, MapWarden2)
    {
        if (!(group_load_map_from_file_1)) goto event_20_6_end;
        if (!((global_values->get(18)) == (2))) goto event_20_6_end;
        if (!((global_strings->get(6)) != (str_rus_7))) goto event_20_6_end;
        if (!((global_strings->get(6)) != (str_pol_4))) goto event_20_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(167, str_mapwarden_744, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(213, str_mapwarden2_815));
    }
    event_20_6_end: ;
}
void Frames::loop_grab_map_data_6()
{
    event_func_920();
    event_func_921();
    event_func_922();
    event_func_923();
    event_func_924();
    event_func_925();
    event_func_926();
    event_func_927();
    event_func_928();
    event_func_929();
    event_func_930();
    event_func_931();
}
// Function purpose: generated callback event_func_932 processes event block(s) 3201_6. Actions/conditions:
//        3201_6: unlocks the FingerBlame achievement.
void Frames::event_func_932()
{
    // event 3201_6 : unlocks the FingerBlame achievement
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3201_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_fingerblame_817)) goto event_3201_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_fingerblame_817);
    }
    event_3201_6_end: ;
}
void Frames::loop_dtaf_achieve_finger_6()
{
    event_func_932();
}
// Function purpose: generated callback event_func_933 processes event block(s) 1006_6. Actions/conditions:
//        1006_6: sets finalStr to text for gameVariables->get_value(103,
//        GuardX))+x+number_to_string(gameVariables->get_value(104, GuardY).
void Frames::event_func_933()
{
    // event 1006_6 : sets finalStr to text for gameVariables->get_value(103, GuardX))+x+number_to_string(gameVariables->get_value(104, GuardY)
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1)) goto event_1006_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1006_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(215, str_finalstr_818, number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(103, str_guardx_660))+str_x_437+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(104, str_guardy_661)));
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
    event_1006_6_end: ;
}
void Frames::loop_jeep_see_esc_6()
{
    event_func_933();
}
// Function purpose: generated callback event_func_934 processes event block(s) 2428_6. Actions/conditions:
//        2428_6: sets Lighting to 1.
void Frames::event_func_934()
{
    // event 2428_6 : sets Lighting to 1
    {
        if (!(group_code_1 && group_code_inventory_underground_lighting_1)) goto event_2428_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inv_512+number_to_string(loop_check_lighting_index+1))) == (8))) goto event_2428_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(216, str_lighting_819, 1);
    }
    event_2428_6_end: ;
}
// Function purpose: generated callback event_func_935 processes event block(s) 2429_6. Actions/conditions:
//        2429_6: sets Lighting to 2.
void Frames::event_func_935()
{
    // event 2429_6 : sets Lighting to 2
    {
        if (!(group_code_1 && group_code_inventory_underground_lighting_1)) goto event_2429_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inv_512+number_to_string(loop_check_lighting_index+1))) == (54))) goto event_2429_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(216, str_lighting_819, 2);
    }
    event_2429_6_end: ;
}
// Function purpose: generated callback event_func_936 processes event block(s) 2430_6. Actions/conditions:
//        2430_6: sets Lighting to 3.
void Frames::event_func_936()
{
    // event 2430_6 : sets Lighting to 3
    {
        if (!(group_code_1 && group_code_inventory_underground_lighting_1)) goto event_2430_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inv_512+number_to_string(loop_check_lighting_index+1))) == (60))) goto event_2430_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(216, str_lighting_819, 3);
    }
    event_2430_6_end: ;
}
void Frames::loop_check_lighting_6()
{
    event_func_934();
    event_func_935();
    event_func_936();
}
// Function purpose: generated callback event_func_937 processes event block(s) 2758_6. Actions/conditions:
//        2758_6: sets a game or interface text string; removes the selected object.
void Frames::event_func_937()
{
    // event 2758_6 : sets a game or interface text string; removes the selected object
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2758_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2758_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)), empty_string);
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2758_6_end: ;
}
// Function purpose: generated callback event_func_938 processes event block(s) 2759_6. Actions/conditions:
//        2759_6: sets the selected object's numeric value to 0.
void Frames::event_func_938()
{
    // event 2759_6 : sets the selected object's numeric value to 0
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2759_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_2759_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_2759_6_end: ;
}
// Function purpose: generated callback event_func_939 processes event block(s) 2760_6. Actions/conditions:
//        2760_6: sets the selected object's numeric value to 150.
void Frames::event_func_939()
{
    // event 2760_6 : sets the selected object's numeric value to 150
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2760_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(217, str_currwasher_821)))) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2760_6_end;
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 150);
        }
    }
    event_2760_6_end: ;
}
// Function purpose: generated callback event_func_940 processes event block(s) 2761_6. Actions/conditions:
//        2761_6: sets the selected object's numeric value to 3.
void Frames::event_func_940()
{
    // event 2761_6 : sets the selected object's numeric value to 3
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2761_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (63))) goto event_2761_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(217, str_currwasher_821)))) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2761_6_end;
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 3);
        }
    }
    event_2761_6_end: ;
}
// Function purpose: generated callback event_func_941 processes event block(s) 2762_6. Actions/conditions:
//        2762_6: sets the selected object's numeric value to 4.
void Frames::event_func_941()
{
    // event 2762_6 : sets the selected object's numeric value to 4
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2762_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (64))) goto event_2762_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(217, str_currwasher_821)))) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2762_6_end;
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 4);
        }
    }
    event_2762_6_end: ;
}
void Frames::loop_start_laundry_6()
{
    event_func_937();
    event_func_938();
    event_func_939();
    event_func_940();
    event_func_941();
}
// Function purpose: generated callback event_func_942 processes event block(s) 3539_6. Actions/conditions:
//        3539_6: creates a dchar 214 object; positions the target object; positions the target object; plus 6 more
//        actions.
void Frames::event_func_942()
{
    // event 3539_6 : creates a dchar 214 object; positions the target object; positions the target object; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto event_3539_6_end;
        FrameObject * single_instance_3539_6_0; single_instance_3539_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + -40, parent->y + -60), parent->layer);
                if (single_instance_3539_6_0 == NULL)
                    single_instance_3539_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3539_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3539_6_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_3539_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+10);
        ((Text*)((Text*)single_instance_3539_6_0))->set_bold(1);
        ((Text*)((Text*)single_instance_3539_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_39_822)));
        ((Text*)((Text*)single_instance_3539_6_0))->blend_color.set(Color(255, 128, 0));
    }
    event_3539_6_end: ;
}
// Function purpose: generated callback event_func_943 processes event block(s) 3540_6. Actions/conditions:
//        3540_6: sets str to Misc entry 40; sets str to StringReplace::replace(gameVariables->get_string(218,
//        str), #, ); creates a dchar 214 object; plus 7 more actions.
void Frames::event_func_943()
{
    // event 3540_6 : sets str to Misc entry 40; sets str to StringReplace::replace(gameVariables->get_string(218, str), #, ); creates a dchar 214 object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto event_3540_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(218, str_str_823, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_40_824));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(218, str_str_823, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(218, str_str_823), str__346, str__198));
        FrameObject * single_instance_3540_6_0; single_instance_3540_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + -40, parent->y + -52), parent->layer);
                if (single_instance_3540_6_0 == NULL)
                    single_instance_3540_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3540_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3540_6_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_3540_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+30);
        ((Text*)((Text*)single_instance_3540_6_0))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(218, str_str_823));
        ((Text*)((Text*)single_instance_3540_6_0))->blend_color.set(Color(179, 179, 179));
    }
    event_3540_6_end: ;
}
// Function purpose: generated callback event_func_944 processes event block(s) 3541_6. Actions/conditions:
//        3541_6: creates a buttons 245 object; sets the object's animation to 23; moves the selected object to the
//        front; plus 6 more actions.
void Frames::event_func_944()
{
    // event 3541_6 : creates a buttons 245 object; sets the object's animation to 23; moves the selected object to the front; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto event_3541_6_end;
        FrameObject * single_instance_3541_6_0; single_instance_3541_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + -83, parent->y + 16), parent->layer);
                if (single_instance_3541_6_0 == NULL)
                    single_instance_3541_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3541_6_0))->force_animation(23);
        ((Active*)((Active*)single_instance_3541_6_0))->move_front();
        FrameObject * single_instance_3541_6_1; single_instance_3541_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3541_6_0)->x + 7, ((Active*)single_instance_3541_6_0)->y + 3), ((Active*)single_instance_3541_6_0)->layer);
            if (single_instance_3541_6_1 == NULL)
                single_instance_3541_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_3541_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_41_825)));
        ((Text*)((Text*)single_instance_3541_6_1))->blend_color.set(Color(165, 165, 165));
    }
    event_3541_6_end: ;
}
// Function purpose: generated callback event_func_945 processes event block(s) 3542_6. Actions/conditions:
//        3542_6: creates a buttons 245 object; sets the object's animation to 24; moves the selected object to the
//        front; plus 6 more actions.
void Frames::event_func_945()
{
    // event 3542_6 : creates a buttons 245 object; sets the object's animation to 24; moves the selected object to the front; plus 6 more actions
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto event_3542_6_end;
        FrameObject * single_instance_3542_6_0; single_instance_3542_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 3, parent->y + 16), parent->layer);
                if (single_instance_3542_6_0 == NULL)
                    single_instance_3542_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3542_6_0))->force_animation(24);
        ((Active*)((Active*)single_instance_3542_6_0))->move_front();
        FrameObject * single_instance_3542_6_1; single_instance_3542_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3542_6_0)->x + 7, ((Active*)single_instance_3542_6_0)->y + 3), ((Active*)single_instance_3542_6_0)->layer);
            if (single_instance_3542_6_1 == NULL)
                single_instance_3542_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_3542_6_1))->blend_color.set(Color(165, 165, 165));
        ((Text*)((Text*)single_instance_3542_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_42_826)));
    }
    event_3542_6_end: ;
}
void Frames::loop_sleep_check_but_6()
{
    event_func_942();
    event_func_943();
    event_func_944();
    event_func_945();
}
// Function purpose: generated callback event_func_946 processes event block(s) 522_6. Actions/conditions:
//        522_6: sets the selected object's direction to 0.
void Frames::event_func_946()
{
    // event 522_6 : sets the selected object's direction to 0
    {
        if (!(group_setup_1)) goto event_522_6_end;
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_slat_dir_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_522_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_single(fan_281_instances, default_active_instance))->get_x()/MathHelper()/16), ((((Active*)get_single(fan_281_instances, default_active_instance))->get_y()/MathHelper()/16)-1), 4)) == (28))) goto event_522_6_end;
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_522_6_end: ;
}
// Function purpose: generated callback event_func_947 processes event block(s) 523_6. Actions/conditions:
//        523_6: sets the selected object's direction to 24.
void Frames::event_func_947()
{
    // event 523_6 : sets the selected object's direction to 24
    {
        if (!(group_setup_1)) goto event_523_6_end;
        fan_281_instances.clear_selection();
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_slat_dir_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!fan_281_instances.has_selection()) goto event_523_6_end;
        if (!((((ArrayObject*)get_instance(groundTiles_instances))->get_value((((Active*)get_single(fan_281_instances, default_active_instance))->get_x()/MathHelper()/16), ((((Active*)get_single(fan_281_instances, default_active_instance))->get_y()/MathHelper()/16)-1), 4)) != (28))) goto event_523_6_end;
        for (ObjectIterator it(fan_281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_523_6_end: ;
}
void Frames::loop_slat_dir_6()
{
    event_func_946();
    event_func_947();
}
// Function purpose: generated callback event_func_948 processes event block(s) 838_6. Actions/conditions:
//        838_6: removes the selected object; sets the selected object's direction to 24.
void Frames::event_func_948()
{
    // event 838_6 : removes the selected object; sets the selected object's direction to 24
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_838_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_direction(24);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_838_6_end: ;
}
// Function purpose: generated callback event_func_949 processes event block(s) 839_6. Actions/conditions:
//        839_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5
//        more actions.
void Frames::event_func_949()
{
    // event 839_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_839_6_end;
        FrameObject * single_instance_839_6_0; single_instance_839_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -58), parent->layer);
                if (single_instance_839_6_0 == NULL)
                    single_instance_839_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_839_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_839_6_0)), frame_left())+6);
        ((Text*)((Text*)single_instance_839_6_0))->blend_color.set(Color(255, 128, 0));
        ((Text*)((Text*)single_instance_839_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_quit_212, str_1_97)));
        ((Text*)((Text*)single_instance_839_6_0))->set_bold(1);
    }
    event_839_6_end: ;
}
// Function purpose: generated callback event_func_950 processes event block(s) 840_6. Actions/conditions:
//        840_6: creates a buttons 245 object; sets the object's animation to 41.
void Frames::event_func_950()
{
    // event 840_6 : creates a buttons 245 object; sets the object's animation to 41
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_840_6_end;
        FrameObject * single_instance_840_6_0; single_instance_840_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_840_6_0 == NULL)
                    single_instance_840_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_840_6_0))->force_animation(41);
    }
    event_840_6_end: ;
}
// Function purpose: generated callback event_func_951 processes event block(s) 841_6. Actions/conditions:
//        841_6: creates a buttons 245 object; sets the object's animation to 42.
void Frames::event_func_951()
{
    // event 841_6 : creates a buttons 245 object; sets the object's animation to 42
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_841_6_end;
        FrameObject * single_instance_841_6_0; single_instance_841_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 14), parent->layer);
                if (single_instance_841_6_0 == NULL)
                    single_instance_841_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_841_6_0))->force_animation(42);
    }
    event_841_6_end: ;
}
// Function purpose: generated callback event_func_952 processes event block(s) 842_6. Actions/conditions:
//        842_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus 1
//        more actions.
void Frames::event_func_952()
{
    // event 842_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_842_6_end;
        FrameObject * single_instance_842_6_0; single_instance_842_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -40), parent->layer);
                if (single_instance_842_6_0 == NULL)
                    single_instance_842_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_842_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_842_6_0)), frame_left())+4);
        ((Text*)((Text*)single_instance_842_6_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_842_6_0))->set_string(StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_quit_212, str_2_155), str__346, str__198));
    }
    event_842_6_end: ;
}
// Function purpose: generated callback event_func_953 processes event block(s) 843_6. Actions/conditions:
//        843_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5
//        more actions.
void Frames::event_func_953()
{
    // event 843_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_843_6_end;
        FrameObject * single_instance_843_6_0; single_instance_843_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -4), parent->layer);
                if (single_instance_843_6_0 == NULL)
                    single_instance_843_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_843_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_843_6_0)), frame_left())+4);
        ((Text*)((Text*)single_instance_843_6_0))->blend_color.set(Color(192, 192, 192));
        ((Text*)((Text*)single_instance_843_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_quit_212, str_3_158)+str__624+((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_quit_212, str_4_161)));
        ((Text*)((Text*)single_instance_843_6_0))->set_bold(0);
    }
    event_843_6_end: ;
}
// Function purpose: generated callback event_func_954 processes event block(s) 844_6. Actions/conditions:
//        844_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus 1
//        more actions.
void Frames::event_func_954()
{
    // event 844_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_844_6_end;
        FrameObject * single_instance_844_6_0; single_instance_844_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + 42), parent->layer);
                if (single_instance_844_6_0 == NULL)
                    single_instance_844_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_844_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_844_6_0)), frame_left())+4);
        ((Text*)((Text*)single_instance_844_6_0))->blend_color.set(Color(105, 105, 105));
        ((Text*)((Text*)single_instance_844_6_0))->set_string(StringReplace::replace(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_quit_212, str_5_164), str__346, str__198));
    }
    event_844_6_end: ;
}
void Frames::loop_menuquit_6()
{
    event_func_948();
    event_func_949();
    event_func_950();
    event_func_951();
    event_func_952();
    event_func_953();
    event_func_954();
}
// Function purpose: generated callback event_func_955 processes event block(s) 912_6. Actions/conditions:
//        912_6: sets the selected object's vertical position to selected object->get_y()-1; sets the selected
//        object's direction to 8.
void Frames::event_func_955()
{
    // event 912_6 : sets the selected object's vertical position to selected object->get_y()-1; sets the selected object's direction to 8
    {
        if (!(group_code_1)) goto event_912_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playerBase_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_912_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->set_direction(8);
        }
    }
    event_912_6_end: ;
}
// Function purpose: generated callback event_func_956 processes event block(s) 913_6. Actions/conditions:
//        913_6: sets the selected object's vertical position to selected object->get_y()+1; sets the selected
//        object's direction to 24.
void Frames::event_func_956()
{
    // event 913_6 : sets the selected object's vertical position to selected object->get_y()+1; sets the selected object's direction to 24
    {
        if (!(group_code_1)) goto event_913_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playerBase_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_913_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_913_6_end: ;
}
void Frames::loop_align_char_y_6()
{
    event_func_955();
    event_func_956();
}
// Function purpose: generated callback event_func_957 processes event block(s) 915_6. Actions/conditions:
//        915_6: sets the selected object's horizontal position to selected object->get_x()-1; sets the selected
//        object's direction to 16.
void Frames::event_func_957()
{
    // event 915_6 : sets the selected object's horizontal position to selected object->get_x()-1; sets the selected object's direction to 16
    {
        if (!(group_code_1)) goto event_915_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerBase_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_915_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_915_6_end: ;
}
// Function purpose: generated callback event_func_958 processes event block(s) 916_6. Actions/conditions:
//        916_6: sets the selected object's horizontal position to selected object->get_x()+1; sets the selected
//        object's direction to 0.
void Frames::event_func_958()
{
    // event 916_6 : sets the selected object's horizontal position to selected object->get_x()+1; sets the selected object's direction to 0
    {
        if (!(group_code_1)) goto event_916_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerBase_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_916_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_916_6_end: ;
}
void Frames::loop_align_char_x_6()
{
    event_func_957();
    event_func_958();
}
// Function purpose: generated callback event_func_959 processes event block(s) 4599_6. Group(s): Anti-HAX.
//        Actions/conditions: 4599_6: sets HAX to 1.
void Frames::event_func_959()
{
    // event 4599_6 : sets HAX to 1
    {
        // group: Anti-HAX
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*2) > (((AssociateArray*)get_instance(gameVariables_instances))->get_value(220, str_hsac_827)))) goto event_4599_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(221, str_hax_828, 1);
    }
    event_4599_6_end: ;
}
// Function purpose: generated callback event_func_960 processes event block(s) 4600_6. Group(s): Anti-HAX.
//        Actions/conditions: 4600_6: sets HAX to 2.
void Frames::event_func_960()
{
    // event 4600_6 : sets HAX to 2
    {
        // group: Anti-HAX
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(8)) > ((((AssociateArray*)get_instance(gameVariables_instances))->get_value(222, str_rts_829)/MathHelper()/2)+15))) goto event_4600_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(221, str_hax_828, 2);
    }
    event_4600_6_end: ;
}
// Function purpose: generated callback event_func_961 processes event block(s) 4601_6. Group(s): Anti-HAX.
//        Actions/conditions: 4601_6: sets HAX to 3.
void Frames::event_func_961()
{
    // event 4601_6 : sets HAX to 3
    {
        // group: Anti-HAX
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(9)) > ((((AssociateArray*)get_instance(gameVariables_instances))->get_value(223, str_dps_830)/MathHelper()/2)+15))) goto event_4601_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(221, str_hax_828, 3);
    }
    event_4601_6_end: ;
}
// Function purpose: generated callback event_func_962 processes event block(s) 4602_6. Group(s): Anti-HAX.
//        Actions/conditions: 4602_6: sets HAX to 4.
void Frames::event_func_962()
{
    // event 4602_6 : sets HAX to 4
    {
        // group: Anti-HAX
        if (!((((Active*)get_instance(playerBase_instances))->alterables->values.get(10)) > ((((AssociateArray*)get_instance(gameVariables_instances))->get_value(224, str_tni_831)/MathHelper()/2)+15))) goto event_4602_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(221, str_hax_828, 4);
    }
    event_4602_6_end: ;
}
// Function purpose: generated callback event_func_963 processes event block(s) 4603_6. Actions/conditions:
//        4603_6: sets rts to playerBase->alterables->values.get(8)*2; sets dps to
//        playerBase->alterables->values.get(9)*2; sets tni to playerBase->alterables->values.get(10)*2; plus 1 more
//        actions.
void Frames::event_func_963()
{
    // event 4603_6 : sets rts to playerBase->alterables->values.get(8)*2; sets dps to playerBase->alterables->values.get(9)*2; sets tni to playerBase->alterables->values.get(10)*2; plus 1 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(222, str_rts_829, ((Active*)get_instance(playerBase_instances))->alterables->values.get(8)*2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(223, str_dps_830, ((Active*)get_instance(playerBase_instances))->alterables->values.get(9)*2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(224, str_tni_831, ((Active*)get_instance(playerBase_instances))->alterables->values.get(10)*2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(220, str_hsac_827, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(219, str_cash_11)*2);
    }
    event_4603_6_end: ;
}
void Frames::loop_hax_check_6()
{
    event_func_959();
    event_func_960();
    event_func_961();
    event_func_962();
    event_func_963();
}
// Function purpose: generated callback event_func_964 processes event block(s) 4400_6. Actions/conditions:
//        4400_6: sets the selected object's direction to selected object->alterables->values.get(0)-1.
void Frames::event_func_964()
{
    // event 4400_6 : sets the selected object's direction to selected object->alterables->values.get(0)-1
    {
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_4400_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(0)-1);
        }
    }
    event_4400_6_end: ;
}
// Function purpose: generated callback event_func_965 processes event block(s) 4401_6. Actions/conditions:
//        4401_6: sets SelectedItem to -1; sets SelectedSlot to 0.
void Frames::event_func_965()
{
    // event 4401_6 : sets SelectedItem to -1; sets SelectedSlot to 0
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(47, str_selecteditem_515, -1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(46, str_selectedslot_514, 0);
    }
    event_4401_6_end: ;
}
void Frames::loop_disableselected_6()
{
    event_func_964();
    event_func_965();
}
// Function purpose: generated callback event_func_966 processes event block(s) 2417_6. Actions/conditions:
//        2417_6: sets the selected object's horizontal position to selected object->get_x()-1.
void Frames::event_func_966()
{
    // event 2417_6 : sets the selected object's horizontal position to selected object->get_x()-1
    {
        if (!(group_code_1)) goto event_2417_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(100))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2417_6_end;
        if (!((((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->get_box_index(2)) >= (frame_right()))) goto event_2417_6_end;
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_x(((SystemBox*)*it)->get_x()-1);
        }
    }
    event_2417_6_end: ;
}
void Frames::loop_tip_left_6()
{
    event_func_966();
}
// Function purpose: generated callback event_func_967 processes event block(s) 3545_6. Actions/conditions:
//        3545_6: removes the selected object; sets the selected object's visibility to false; plays a sound or music
//        track.
void Frames::event_func_967()
{
    // event 3545_6 : removes the selected object; sets the selected object's visibility to false; plays a sound or music track
    {
        if (!(group_code_1 && group_code_sort_these_sleep_stuff_sleep_menu_1)) goto event_3545_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_3545_6_end: ;
}
void Frames::loop_close_sleep_6()
{
    event_func_967();
}
// Function purpose: generated callback event_func_968 processes event block(s) 3601_6. Actions/conditions:
//        3601_6: adds a itemshud 210 instance; sets the object's animation to 1; sets the selected object's direction
//        to 10; plus 9 more actions.
void Frames::event_func_968()
{
    // event 3601_6 : adds a itemshud 210 instance; sets the object's animation to 1; sets the selected object's direction to 10; plus 9 more actions
    {
        if (!(group_code_1 && group_code_sort_these_using_items_2_digging_2_1)) goto event_3601_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_3601_6_end;
        hudItem_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hudItem(-16, -16), 5);
            hudItem_instances.add_back();
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(10);
            ((Active*)*it)->alterables->values.set(2, 42);
            ((Active*)*it)->alterables->strings.set(0, str_inven_820);
            ((Active*)*it)->alterables->values.set(1, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832));
        }
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(itemSlot_instances, it.current_index));
            if (parent == NULL) goto pos_end_3601_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3601_6_1: ;
        }
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(225, str_emptyinvslot_832)), str_42_100_833);
    }
    event_3601_6_end: ;
}
void Frames::loop_collect_floor_6()
{
    event_func_968();
}
// Function purpose: generated callback event_func_969 processes event block(s) 3153_6. Actions/conditions:
//        3153_6: unlocks the WrappedUp achievement.
void Frames::event_func_969()
{
    // event 3153_6 : unlocks the WrappedUp achievement
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_sss_1)) goto event_3153_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_wrappedup_834)) goto event_3153_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_wrappedup_834);
    }
    event_3153_6_end: ;
}
void Frames::loop_ss_lights_6()
{
    event_func_969();
}
// Function purpose: generated callback event_func_970 processes event block(s) 3142_6. Actions/conditions:
//        3142_6: creates a buttons 245 object; positions the target object; positions the target object; plus 7 more
//        actions.
void Frames::event_func_970()
{
    // event 3142_6 : creates a buttons 245 object; positions the target object; positions the target object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3142_6_end;
        FrameObject * single_instance_3142_6_0; single_instance_3142_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_3142_6_0 == NULL)
                    single_instance_3142_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3142_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_3142_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_3142_6_0))->force_animation(43);
        FrameObject * single_instance_3142_6_1; single_instance_3142_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3142_6_0)->x + 3, ((Active*)single_instance_3142_6_0)->y + 3), ((Active*)single_instance_3142_6_0)->layer);
            if (single_instance_3142_6_1 == NULL)
                single_instance_3142_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_3142_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_3142_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_3142_6_end: ;
}
// Function purpose: generated callback event_func_971 processes event block(s) 3143_6. Actions/conditions:
//        3143_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus
//        5 more actions.
void Frames::event_func_971()
{
    // event 3143_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_ccl_1)) goto event_3143_6_end;
        FrameObject * single_instance_3143_6_0; single_instance_3143_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -54), parent->layer);
                if (single_instance_3143_6_0 == NULL)
                    single_instance_3143_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_3143_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_3143_6_0)), frame_left())+5);
        ((Text*)((Text*)single_instance_3143_6_0))->blend_color.set(Color(0, 84, 128));
        ((Text*)((Text*)single_instance_3143_6_0))->set_bold(1);
        ((Text*)((Text*)single_instance_3143_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_hover_sleigh_835)));
    }
    event_3143_6_end: ;
}
void Frames::loop_sleigh_footer_6()
{
    event_func_970();
    event_func_971();
}
// Function purpose: generated callback event_func_972 processes event block(s) 4534_6. Actions/conditions:
//        4534_6: increments GuardsDownCount by 1.
void Frames::event_func_972()
{
    // event 4534_6 : increments GuardsDownCount by 1
    {
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_count_downed_guards_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) < (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_4534_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(226, str_guardsdowncount_836, 1);
    }
    event_4534_6_end: ;
}
void Frames::loop_count_downed_guards_6()
{
    event_func_972();
}
// Function purpose: generated callback event_func_973 processes event block(s) 2738_6. Actions/conditions:
//        2738_6: sets the selected object's numeric value to 150; sets the selected object's numeric value to
//        gameVariables->get_value(47, SelectedItem).
void Frames::event_func_973()
{
    // event 2738_6 : sets the selected object's numeric value to 150; sets the selected object's numeric value to gameVariables->get_value(47, SelectedItem)
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2738_6_end;
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(227, str_curroven_837)))) { it.deselect(); continue; }
        }
        if (!oven2_314_instances.has_selection()) goto event_2738_6_end;
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 150);
            ((Active*)*it)->alterables->values.set(5, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515));
        }
    }
    event_2738_6_end: ;
}
void Frames::loop_start_cook_6()
{
    event_func_973();
}
// Function purpose: generated callback event_func_974 processes event block(s) 650_6. Actions/conditions:
//        650_6: creates a buttons 245 object; positions the target object; positions the target object; plus 7 more
//        actions.
void Frames::event_func_974()
{
    // event 650_6 : creates a buttons 245 object; positions the target object; positions the target object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_eteam_1)) goto event_650_6_end;
        FrameObject * single_instance_650_6_0; single_instance_650_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_650_6_0 == NULL)
                    single_instance_650_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_650_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_650_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_650_6_0))->force_animation(43);
        FrameObject * single_instance_650_6_1; single_instance_650_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_650_6_0)->x + 3, ((Active*)single_instance_650_6_0)->y + 3), ((Active*)single_instance_650_6_0)->layer);
            if (single_instance_650_6_1 == NULL)
                single_instance_650_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_650_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_650_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_650_6_end: ;
}
void Frames::loop_letter_eteam_6()
{
    event_func_974();
}
// Function purpose: generated callback event_func_975 processes event block(s) 3309_6. Actions/conditions:
//        3309_6: removes the selected object.
void Frames::event_func_975()
{
    // event 3309_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3309_6_end;
        water_303_instances.clear_selection();
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(228, str_toiletx_838)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(229, str_toilety_839)))) { it.deselect(); continue; }
        }
        if (!water_303_instances.has_selection()) goto event_3309_6_end;
        for (ObjectIterator it(water_303_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3309_6_end: ;
}
void Frames::loop_remove_bog_water_6()
{
    event_func_975();
}
// Function purpose: generated callback event_func_976 processes event block(s) 737_6. Actions/conditions:
//        737_6: sets sleighstage to 1.
void Frames::event_func_976()
{
    // event 737_6 : sets sleighstage to 1
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_737_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(230, str_sleighstage_840)) < (1))) goto event_737_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(230, str_sleighstage_840, 1);
    }
    event_737_6_end: ;
}
// Function purpose: generated callback event_func_977 processes event block(s) 740_6. Actions/conditions:
//        740_6: adds a cclsleigh 519 instance; sets the selected object's numeric value to 1; sets the selected
//        object's string to Sleigh; plus 1 more actions.
void Frames::event_func_977()
{
    // event 740_6 : adds a cclsleigh 519 instance; sets the selected object's numeric value to 1; sets the selected object's string to Sleigh; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_740_6_end;
        cclsleigh_519_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_cclsleigh_519(482, 1390), 1);
            cclsleigh_519_instances.add_back();
        }
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->strings.set(0, str_sleigh_841);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_740_6_end: ;
}
// Function purpose: generated callback event_func_978 processes event block(s) 741_6. Actions/conditions:
//        741_6: sets the selected object's numeric value to gameVariables->get_value(230, sleighstage).
void Frames::event_func_978()
{
    // event 741_6 : sets the selected object's numeric value to gameVariables->get_value(230, sleighstage)
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_741_6_end;
        cclsleigh_519_instances.clear_selection();
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_sleigh_841))) { it.deselect(); continue; }
        }
        if (!cclsleigh_519_instances.has_selection()) goto event_741_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(230, str_sleighstage_840)) > (1))) goto event_741_6_end;
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(230, str_sleighstage_840));
        }
    }
    event_741_6_end: ;
}
// Function purpose: generated callback event_func_979 processes event block(s) 742_6. Actions/conditions:
//        742_6: adds a cclsleigh 519 instance; sets the object's animation to 5; draws the selected image or tile;
//        plus 1 more actions.
void Frames::event_func_979()
{
    // event 742_6 : adds a cclsleigh 519 instance; sets the object's animation to 5; draws the selected image or tile; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_742_6_end;
        cclsleigh_519_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_cclsleigh_519(482, 1390), 1);
            cclsleigh_519_instances.add_back();
        }
        for (ObjectIterator it(cclsleigh_519_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->paste(1);
            ((Active*)*it)->destroy();
        }
    }
    event_742_6_end: ;
}
// Function purpose: generated callback event_func_980 processes event block(s) 743_6. Actions/conditions:
//        743_6: adds a ssreindeer 504 instance; sets the selected object's numeric value to 992; sets the selected
//        object's numeric value to 176; plus 1 more actions.
void Frames::event_func_980()
{
    // event 743_6 : adds a ssreindeer 504 instance; sets the selected object's numeric value to 992; sets the selected object's numeric value to 176; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_743_6_end;
        ssreindeer_504_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ssreindeer_504(992, 176), 1);
            ssreindeer_504_instances.add_back();
        }
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 992);
            ((Active*)*it)->alterables->values.set(24, 176);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_743_6_end: ;
}
// Function purpose: generated callback event_func_981 processes event block(s) 744_6. Actions/conditions:
//        744_6: adds a ssreindeer 504 instance; sets the selected object's numeric value to 1024; sets the selected
//        object's numeric value to 1; plus 1 more actions.
void Frames::event_func_981()
{
    // event 744_6 : adds a ssreindeer 504 instance; sets the selected object's numeric value to 1024; sets the selected object's numeric value to 1; plus 1 more actions
    {
        if (!(group_code_1 && group_code_dlc_ccl_1)) goto event_744_6_end;
        ssreindeer_504_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ssreindeer_504(1024, 176), 1);
            ssreindeer_504_instances.add_back();
        }
        for (ObjectIterator it(ssreindeer_504_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 1024);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(24, 176);
        }
    }
    event_744_6_end: ;
}
