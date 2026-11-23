#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_1574 processes event block(s) 4233_6. Actions/conditions:
//        4233_6: splits saved text into fields.
void Frames::event_func_1574()
{
    // event 4233_6 : splits saved text into fields
    {
        if (!(group_loops_1)) goto event_4233_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4233_6_end;
        if (!((global_strings->get(0)) == (str_perks_143))) goto event_4233_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)) == (str_give_1268))) goto event_4233_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(str_145_146_147_148_149_156_157_158_159_160_162_163_9_10_15_16_17_46_49_50_69_95_99_1270, str__96);
    }
    event_4233_6_end: ;
}
// Function purpose: generated callback event_func_1575 processes event block(s) 4234_6. Actions/conditions:
//        4234_6: splits saved text into fields.
void Frames::event_func_1575()
{
    // event 4234_6 : splits saved text into fields
    {
        if (!(group_loops_1)) goto event_4234_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4234_6_end;
        if (!((global_strings->get(0)) == (str_stalagflucht_144))) goto event_4234_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)) == (str_give_1268))) goto event_4234_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(str_164_165_166_167_8_10_15_16_17_46_49_50_69_95_99_1271, str__96);
    }
    event_4234_6_end: ;
}
// Function purpose: generated callback event_func_1576 processes event block(s) 4235_6. Actions/conditions:
//        4235_6: sets itemID to
//        string_to_number(stringtokenizer2_292->get(randrange_event(stringtokenizer2_292->get_count()))).
void Frames::event_func_1576()
{
    // event 4235_6 : sets itemID to string_to_number(stringtokenizer2_292->get(randrange_event(stringtokenizer2_292->get_count())))
    {
        if (!(group_loops_1)) goto event_4235_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)) == (str_stealchar_1264))) goto event_4235_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4235_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(326, str_itemid_1110, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))));
    }
    event_4235_6_end: ;
}
// Function purpose: generated callback event_func_1577 processes event block(s) 4236_6. Actions/conditions:
//        4236_6: sets itemID to
//        string_to_number(stringtokenizer2_292->get(randrange_event(stringtokenizer2_292->get_count()))).
void Frames::event_func_1577()
{
    // event 4236_6 : sets itemID to string_to_number(stringtokenizer2_292->get(randrange_event(stringtokenizer2_292->get_count())))
    {
        if (!(group_loops_1)) goto event_4236_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)) == (str_give_1268))) goto event_4236_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_inmate_1190))) goto event_4236_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(326, str_itemid_1110, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))));
    }
    event_4236_6_end: ;
}
// Function purpose: generated callback event_func_1578 processes event block(s) 4237_6. Actions/conditions:
//        4237_6: splits saved text into fields; sets itemID to
//        string_to_number(stringtokenizer2_292->get(randrange_event(stringtokenizer2_292->get_count()))).
void Frames::event_func_1578()
{
    // event 4237_6 : splits saved text into fields; sets itemID to string_to_number(stringtokenizer2_292->get(randrange_event(stringtokenizer2_292->get_count())))
    {
        if (!(group_loops_1)) goto event_4237_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(388, str_targtype_1189)) == (str_guard_1195))) goto event_4237_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->split(str_2_8_9_10_15_16_22_46_49_50_60_62_94_97_99_107_109_259_1272, str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(326, str_itemid_1110, string_to_number(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get(randrange_event(((StringTokenizer*)get_instance(stringtokenizer2_292_instances))->get_count()))));
    }
    event_4237_6_end: ;
}
// Function purpose: generated callback event_func_1579 processes event block(s) 4238_6. Actions/conditions:
//        4238_6: sets itemID to 211.
void Frames::event_func_1579()
{
    // event 4238_6 : sets itemID to 211
    {
        if (!(group_loops_1)) goto event_4238_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_4238_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(326, str_itemid_1110)) == (3))) goto event_4238_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(326, str_itemid_1110, 211);
    }
    event_4238_6_end: ;
}
// Function purpose: generated callback event_func_1580 processes event block(s) 4239_6. Actions/conditions:
//        4239_6: sets itemName to itemData->get_string(number_to_string(gameVariables->get_value(326,
//        itemID)), Name).
void Frames::event_func_1580()
{
    // event 4239_6 : sets itemName to itemData->get_string(number_to_string(gameVariables->get_value(326, itemID)), Name)
    {
        if (!(group_loops_1)) goto event_4239_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(431, str_itemname_1273, ((INI*)get_instance(itemData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(326, str_itemid_1110)), str_name_103));
    }
    event_4239_6_end: ;
}
void Frames::loop_create_mission_item_6()
{
    event_func_1570();
    event_func_1571();
    event_func_1572();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_1576();
    event_func_1577();
    event_func_1578();
    event_func_1579();
    event_func_1580();
}
// Function purpose: generated callback event_func_1581 processes event block(s) 4205_6. Actions/conditions:
//        4205_6: activates the Missions_+get_string(244, MissionType event group; sets Mission_Num to
//        1+randrange_event(gameVariables->get_value(432, FAV_STEALCHAR_COUNT)); sets Mission_Num to
//        1+randrange_event(translationData->get_value_int(Count)); plus 11 more actions.
void Frames::event_func_1581()
{
    // event 4205_6 : activates the Missions_+get_string(244, MissionType event group; sets Mission_Num to 1+randrange_event(gameVariables->get_value(432, FAV_STEALCHAR_COUNT)); sets Mission_Num to 1+randrange_event(translationData->get_value_int(Count)); plus 11 more actions
    {
        if (!(group_loops_1)) goto event_4205_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4205_6_end;
        ((INI*)get_instance(translationData_instances))->set_group(str_missions_882+((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(245, str_mission_num_884, 1+randrange_event(((AssociateArray*)get_instance(gameVariables_instances))->get_value(432, str_fav_stealchar_count_1274)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(245, str_mission_num_884, 1+randrange_event(((INI*)get_instance(translationData_instances))->get_value_int(str_count_885)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(translationData_instances))->get_string(number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(245, str_mission_num_884))), str__254);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(388, str_targtype_1189, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(246, str_payout_886, 15);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(389, str_f_targ_1191, 0);
        {
            loop_create_mission_target_running = true;
            int times = int(5);
            loop_create_mission_target_index = 0;
            while (loop_create_mission_target_index < times) {
                loop_create_mission_target_6();
                if (!loop_create_mission_target_running) break;
                loop_create_mission_target_index++;
            }
        }
        {
            loop_create_mission_item_running = true;
            int times = int(1);
            loop_create_mission_item_index = 0;
            while (loop_create_mission_item_index < times) {
                loop_create_mission_item_6();
                if (!loop_create_mission_item_running) break;
                loop_create_mission_item_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887), str_guard_1198, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(391, str_targname_1193)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887), str_inmate_1199, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(391, str_targname_1193)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887), str_name_693, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(391, str_targname_1193)));
    }
    event_4205_6_end: ;
}
// Function purpose: generated callback event_func_1582 processes event block(s) 4206_6. Actions/conditions:
//        4206_6: sets a game or interface text string.
void Frames::event_func_1582()
{
    // event 4206_6 : sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4206_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4206_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(326, str_itemid_1110)) != (259))) goto event_4206_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887), str_item_1215, lowercase_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(431, str_itemname_1273))));
    }
    event_4206_6_end: ;
}
// Function purpose: generated callback event_func_1583 processes event block(s) 4207_6. Actions/conditions:
//        4207_6: sets a game or interface text string.
void Frames::event_func_1583()
{
    // event 4207_6 : sets a game or interface text string
    {
        if (!(group_loops_1)) goto event_4207_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4207_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(326, str_itemid_1110)) == (259))) goto event_4207_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(247, str_missiontext_887, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887), str_item_1215, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(431, str_itemname_1273)));
    }
    event_4207_6_end: ;
}
// Function purpose: generated callback event_func_1584 processes event block(s) 4208_6. Actions/conditions:
//        4208_6: increments Payout by get_floor(((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(12)/MathHelper()/10); updates a value on the target
//        object.
void Frames::event_func_1584()
{
    // event 4208_6 : increments Payout by get_floor(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12)/MathHelper()/10); updates a value on the target object
    {
        if (!(group_loops_1)) goto event_4208_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)) != (-10))) goto event_4208_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(135, str_mid_700)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4208_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(246, str_payout_886, get_floor(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(12)/MathHelper()/10));
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(247, str_missiontext_887)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(244, str_missiontype_883)+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(390, str_targz_1192))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(326, str_itemid_1110))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(246, str_payout_886)));
        }
    }
    event_4208_6_end: ;
}
void Frames::loop_create_mission_stealchar_6()
{
    event_func_1581();
    event_func_1582();
    event_func_1583();
    event_func_1584();
}
// Function purpose: generated callback event_func_1585 processes event block(s) 2835_6. Actions/conditions:
//        2835_6: sets Pos_Janitor to 0.
void Frames::event_func_1585()
{
    // event 2835_6 : sets Pos_Janitor to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2835_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(177, str_map_job_janitor_757)) == (1))) goto event_2835_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) == (-1))) goto event_2835_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_janitor_24))) goto event_2835_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(109, str_pos_janitor_671, 0);
    }
    event_2835_6_end: ;
}
// Function purpose: generated callback event_func_1586 processes event block(s) 2836_6. Actions/conditions:
//        2836_6: sets Pos_Gardening to 0.
void Frames::event_func_1586()
{
    // event 2836_6 : sets Pos_Gardening to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2836_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(176, str_map_job_gardening_756)) == (1))) goto event_2836_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) == (-1))) goto event_2836_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_gardening_43))) goto event_2836_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(111, str_pos_gardening_673, 0);
    }
    event_2836_6_end: ;
}
// Function purpose: generated callback event_func_1587 processes event block(s) 2837_6. Actions/conditions:
//        2837_6: sets Pos_Tailor to 0.
void Frames::event_func_1587()
{
    // event 2837_6 : sets Pos_Tailor to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2837_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(182, str_map_job_tailor_762)) == (1))) goto event_2837_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (-1))) goto event_2837_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_tailor_479))) goto event_2837_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(123, str_pos_tailor_685, 0);
    }
    event_2837_6_end: ;
}
// Function purpose: generated callback event_func_1588 processes event block(s) 2838_6. Actions/conditions:
//        2838_6: sets Pos_Laundry to 0.
void Frames::event_func_1588()
{
    // event 2838_6 : sets Pos_Laundry to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2838_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(175, str_map_job_laundry_754)) == (1))) goto event_2838_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (-1))) goto event_2838_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_laundry_29))) goto event_2838_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(117, str_pos_laundry_679, 0);
    }
    event_2838_6_end: ;
}
// Function purpose: generated callback event_func_1589 processes event block(s) 2839_6. Actions/conditions:
//        2839_6: sets Pos_Library to 0.
void Frames::event_func_1589()
{
    // event 2839_6 : sets Pos_Library to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2839_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(184, str_map_job_library_764)) == (1))) goto event_2839_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (-1))) goto event_2839_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_library_25))) goto event_2839_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(115, str_pos_library_677, 0);
    }
    event_2839_6_end: ;
}
// Function purpose: generated callback event_func_1590 processes event block(s) 2840_6. Actions/conditions:
//        2840_6: sets Pos_Kitchen to 0.
void Frames::event_func_1590()
{
    // event 2840_6 : sets Pos_Kitchen to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2840_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(180, str_map_job_kitchen_760)) == (1))) goto event_2840_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (-1))) goto event_2840_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_kitchen_12))) goto event_2840_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_pos_kitchen_683, 0);
    }
    event_2840_6_end: ;
}
// Function purpose: generated callback event_func_1591 processes event block(s) 2841_6. Actions/conditions:
//        2841_6: sets Pos_Mailman to 0.
void Frames::event_func_1591()
{
    // event 2841_6 : sets Pos_Mailman to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2841_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(183, str_map_job_mailman_763)) == (1))) goto event_2841_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (-1))) goto event_2841_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_mailman_556))) goto event_2841_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(113, str_pos_mailman_675, 0);
    }
    event_2841_6_end: ;
}
// Function purpose: generated callback event_func_1592 processes event block(s) 2842_6. Actions/conditions:
//        2842_6: sets Pos_Woodshop to 0.
void Frames::event_func_1592()
{
    // event 2842_6 : sets Pos_Woodshop to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2842_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(178, str_map_job_woodshop_758)) == (1))) goto event_2842_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) == (-1))) goto event_2842_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_woodshop_21))) goto event_2842_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(125, str_pos_woodshop_687, 0);
    }
    event_2842_6_end: ;
}
// Function purpose: generated callback event_func_1593 processes event block(s) 2843_6. Actions/conditions:
//        2843_6: sets Pos_Deliveries to 0.
void Frames::event_func_1593()
{
    // event 2843_6 : sets Pos_Deliveries to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2843_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(181, str_map_job_deliveries_761)) == (1))) goto event_2843_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (-1))) goto event_2843_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_deliveries_577))) goto event_2843_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_pos_deliveries_681, 0);
    }
    event_2843_6_end: ;
}
// Function purpose: generated callback event_func_1594 processes event block(s) 2844_6. Actions/conditions:
//        2844_6: sets Pos_Metalshop to 0.
void Frames::event_func_1594()
{
    // event 2844_6 : sets Pos_Metalshop to 0
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2844_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(179, str_map_job_metalshop_759)) == (1))) goto event_2844_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (-1))) goto event_2844_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_metalshop_35))) goto event_2844_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(127, str_pos_metalshop_689, 0);
    }
    event_2844_6_end: ;
}
void Frames::loop_job_pos_fix_6()
{
    event_func_1585();
    event_func_1586();
    event_func_1587();
    event_func_1588();
    event_func_1589();
    event_func_1590();
    event_func_1591();
    event_func_1592();
    event_func_1593();
    event_func_1594();
}
// Function purpose: generated callback event_func_1595 processes event block(s) 2832_6. Actions/conditions:
//        2832_6: sets the selected object's direction to 0; adds a dchar 214 instance; sets the selected object's
//        horizontal position to frame_left()+5; plus 8 more actions.
void Frames::event_func_1595()
{
    // event 2832_6 : sets the selected object's direction to 0; adds a dchar 214 instance; sets the selected object's horizontal position to frame_left()+5; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2832_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+14);
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_hovers_903, str_45_1275)));
            ((Text*)*it)->set_bold(1);
            ((Text*)*it)->blend_color.set(Color(192, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(80, str_ypos_193, 40);
    }
    event_2832_6_end: ;
}
// Function purpose: generated callback event_func_1596 processes event block(s) 2833_6. Actions/conditions:
//        2833_6: sets source to Job Board entry 1; sets source to
//        StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus
//        7 more actions.
void Frames::event_func_1596()
{
    // event 2833_6 : sets source to Job Board entry 1; sets source to StringReplace::replace(gameVariables->get_string(81, source), #, ); adds a dchar 214 instance; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2833_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_1_97));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__198));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left())+5);
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-40);
            ((Text*)*it)->blend_color.set(Color(150, 150, 150));
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
        }
    }
    event_2833_6_end: ;
}
// Function purpose: generated callback event_func_1597 processes event block(s) 2834_6. Actions/conditions:
//        2834_6: checks scene is active; this handler gates a game event without a direct value/object action.
void Frames::event_func_1597()
{
    // event 2834_6 : checks scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2834_6_end;
        {
            loop_job_pos_fix_running = true;
            int times = int(1);
            loop_job_pos_fix_index = 0;
            while (loop_job_pos_fix_index < times) {
                loop_job_pos_fix_6();
                if (!loop_job_pos_fix_running) break;
                loop_job_pos_fix_index++;
            }
        }
    }
    event_2834_6_end: ;
}
// Function purpose: generated callback event_func_1598 processes event block(s) 2845_6. Actions/conditions:
//        2845_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Janitor; plus 10 more actions.
void Frames::event_func_1598()
{
    // event 2845_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Janitor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2845_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(177, str_map_job_janitor_757)) == (1))) goto event_2845_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2845_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) == (0))) goto event_2845_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_janitor_24))) goto event_2845_6_end;
        FrameObject * single_instance_2845_6_0; single_instance_2845_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2845_6_0 == NULL)
                    single_instance_2845_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2845_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2845_6_0))->alterables->strings.set(0, str_janitor_24);
        ((Active*)((Active*)single_instance_2845_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_janitor_630)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2845_6_end: ;
}
// Function purpose: generated callback event_func_1599 processes event block(s) 2846_6. Actions/conditions:
//        2846_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Janitor; plus 10 more actions.
void Frames::event_func_1599()
{
    // event 2846_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Janitor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2846_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(177, str_map_job_janitor_757)) == (1))) goto event_2846_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2846_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) != (0))) goto event_2846_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_janitor_24))) goto event_2846_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2846_6_end;
        FrameObject * single_instance_2846_6_0; single_instance_2846_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2846_6_0 == NULL)
                    single_instance_2846_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2846_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2846_6_0))->alterables->strings.set(0, str_janitor_24);
        ((Active*)((Active*)single_instance_2846_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_janitor_630)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2846_6_end: ;
}
// Function purpose: generated callback event_func_1600 processes event block(s) 2847_6. Actions/conditions:
//        2847_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Janitor; plus 10 more actions.
void Frames::event_func_1600()
{
    // event 2847_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Janitor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2847_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_2847_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2847_6_end;
        FrameObject * single_instance_2847_6_0; single_instance_2847_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2847_6_0 == NULL)
                    single_instance_2847_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2847_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2847_6_0))->alterables->strings.set(0, str_janitor_24);
        ((Active*)((Active*)single_instance_2847_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_janitor_630)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2847_6_end: ;
}
// Function purpose: generated callback event_func_1601 processes event block(s) 2848_6. Actions/conditions:
//        2848_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Tailor; plus 10 more actions.
void Frames::event_func_1601()
{
    // event 2848_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Tailor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2848_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(182, str_map_job_tailor_762)) == (1))) goto event_2848_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2848_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (0))) goto event_2848_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_tailor_479))) goto event_2848_6_end;
        FrameObject * single_instance_2848_6_0; single_instance_2848_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2848_6_0 == NULL)
                    single_instance_2848_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2848_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2848_6_0))->alterables->strings.set(0, str_tailor_479);
        ((Active*)((Active*)single_instance_2848_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_tailor_631)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2848_6_end: ;
}
// Function purpose: generated callback event_func_1602 processes event block(s) 2849_6. Actions/conditions:
//        2849_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Tailor; plus 10 more actions.
void Frames::event_func_1602()
{
    // event 2849_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Tailor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2849_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(182, str_map_job_tailor_762)) == (1))) goto event_2849_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2849_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) != (0))) goto event_2849_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_tailor_479))) goto event_2849_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2849_6_end;
        FrameObject * single_instance_2849_6_0; single_instance_2849_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2849_6_0 == NULL)
                    single_instance_2849_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2849_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2849_6_0))->alterables->strings.set(0, str_tailor_479);
        ((Active*)((Active*)single_instance_2849_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_tailor_631)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2849_6_end: ;
}
// Function purpose: generated callback event_func_1603 processes event block(s) 2850_6. Actions/conditions:
//        2850_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Tailor; plus 10 more actions.
void Frames::event_func_1603()
{
    // event 2850_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Tailor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2850_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_2850_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2850_6_end;
        FrameObject * single_instance_2850_6_0; single_instance_2850_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2850_6_0 == NULL)
                    single_instance_2850_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2850_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2850_6_0))->alterables->strings.set(0, str_tailor_479);
        ((Active*)((Active*)single_instance_2850_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_tailor_631)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2850_6_end: ;
}
// Function purpose: generated callback event_func_1604 processes event block(s) 2851_6. Actions/conditions:
//        2851_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Mailman; plus 10 more actions.
void Frames::event_func_1604()
{
    // event 2851_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Mailman; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2851_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(183, str_map_job_mailman_763)) == (1))) goto event_2851_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2851_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (0))) goto event_2851_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_mailman_556))) goto event_2851_6_end;
        FrameObject * single_instance_2851_6_0; single_instance_2851_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2851_6_0 == NULL)
                    single_instance_2851_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2851_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2851_6_0))->alterables->strings.set(0, str_mailman_556);
        ((Active*)((Active*)single_instance_2851_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_mailman_633)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2851_6_end: ;
}
// Function purpose: generated callback event_func_1605 processes event block(s) 2852_6. Actions/conditions:
//        2852_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Mailman; plus 10 more actions.
void Frames::event_func_1605()
{
    // event 2852_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Mailman; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2852_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(183, str_map_job_mailman_763)) == (1))) goto event_2852_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2852_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) != (0))) goto event_2852_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_mailman_556))) goto event_2852_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2852_6_end;
        FrameObject * single_instance_2852_6_0; single_instance_2852_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2852_6_0 == NULL)
                    single_instance_2852_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2852_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2852_6_0))->alterables->strings.set(0, str_mailman_556);
        ((Active*)((Active*)single_instance_2852_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_mailman_633)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2852_6_end: ;
}
// Function purpose: generated callback event_func_1606 processes event block(s) 2853_6. Actions/conditions:
//        2853_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Mailman; plus 10 more actions.
void Frames::event_func_1606()
{
    // event 2853_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Mailman; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2853_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_2853_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2853_6_end;
        FrameObject * single_instance_2853_6_0; single_instance_2853_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2853_6_0 == NULL)
                    single_instance_2853_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2853_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2853_6_0))->alterables->strings.set(0, str_mailman_556);
        ((Active*)((Active*)single_instance_2853_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_mailman_633)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2853_6_end: ;
}
// Function purpose: generated callback event_func_1607 processes event block(s) 2854_6. Actions/conditions:
//        2854_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Deliveries; plus 10 more actions.
void Frames::event_func_1607()
{
    // event 2854_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Deliveries; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2854_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(181, str_map_job_deliveries_761)) == (1))) goto event_2854_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2854_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (0))) goto event_2854_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_deliveries_577))) goto event_2854_6_end;
        FrameObject * single_instance_2854_6_0; single_instance_2854_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2854_6_0 == NULL)
                    single_instance_2854_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2854_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2854_6_0))->alterables->strings.set(0, str_deliveries_577);
        ((Active*)((Active*)single_instance_2854_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_deliveries_634)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2854_6_end: ;
}
// Function purpose: generated callback event_func_1608 processes event block(s) 2855_6. Actions/conditions:
//        2855_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Deliveries; plus 10 more actions.
void Frames::event_func_1608()
{
    // event 2855_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Deliveries; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(181, str_map_job_deliveries_761)) == (1))) goto event_2855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) != (0))) goto event_2855_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_deliveries_577))) goto event_2855_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2855_6_end;
        FrameObject * single_instance_2855_6_0; single_instance_2855_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2855_6_0 == NULL)
                    single_instance_2855_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2855_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2855_6_0))->alterables->strings.set(0, str_deliveries_577);
        ((Active*)((Active*)single_instance_2855_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_deliveries_634)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2855_6_end: ;
}
// Function purpose: generated callback event_func_1609 processes event block(s) 2856_6. Actions/conditions:
//        2856_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Deliveries; plus 10 more actions.
void Frames::event_func_1609()
{
    // event 2856_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Deliveries; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2856_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_2856_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2856_6_end;
        FrameObject * single_instance_2856_6_0; single_instance_2856_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2856_6_0 == NULL)
                    single_instance_2856_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2856_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2856_6_0))->alterables->strings.set(0, str_deliveries_577);
        ((Active*)((Active*)single_instance_2856_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_ss_136, str_job_deliveries_634)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2856_6_end: ;
}
// Function purpose: generated callback event_func_1610 processes event block(s) 2857_6. Actions/conditions:
//        2857_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Janitor; plus 10 more actions.
void Frames::event_func_1610()
{
    // event 2857_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Janitor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2857_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(177, str_map_job_janitor_757)) == (1))) goto event_2857_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2857_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) == (0))) goto event_2857_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_janitor_24))) goto event_2857_6_end;
        FrameObject * single_instance_2857_6_0; single_instance_2857_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2857_6_0 == NULL)
                    single_instance_2857_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2857_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2857_6_0))->alterables->strings.set(0, str_janitor_24);
        ((Active*)((Active*)single_instance_2857_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_1_97)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2857_6_end: ;
}
// Function purpose: generated callback event_func_1611 processes event block(s) 2858_6. Actions/conditions:
//        2858_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Janitor; plus 10 more actions.
void Frames::event_func_1611()
{
    // event 2858_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Janitor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2858_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(177, str_map_job_janitor_757)) == (1))) goto event_2858_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2858_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)) != (0))) goto event_2858_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_janitor_24))) goto event_2858_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(109, str_pos_janitor_671)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2858_6_end;
        FrameObject * single_instance_2858_6_0; single_instance_2858_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2858_6_0 == NULL)
                    single_instance_2858_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2858_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2858_6_0))->alterables->strings.set(0, str_janitor_24);
        ((Active*)((Active*)single_instance_2858_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_1_97)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2858_6_end: ;
}
// Function purpose: generated callback event_func_1612 processes event block(s) 2859_6. Actions/conditions:
//        2859_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Janitor; plus 10 more actions.
void Frames::event_func_1612()
{
    // event 2859_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Janitor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2859_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_janitor_24))) goto event_2859_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2859_6_end;
        FrameObject * single_instance_2859_6_0; single_instance_2859_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2859_6_0 == NULL)
                    single_instance_2859_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2859_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2859_6_0))->alterables->strings.set(0, str_janitor_24);
        ((Active*)((Active*)single_instance_2859_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_1_97)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2859_6_end: ;
}
// Function purpose: generated callback event_func_1613 processes event block(s) 2860_6. Actions/conditions:
//        2860_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Gardening; plus 10 more actions.
void Frames::event_func_1613()
{
    // event 2860_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Gardening; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2860_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(176, str_map_job_gardening_756)) == (1))) goto event_2860_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) == (0))) goto event_2860_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_gardening_43))) goto event_2860_6_end;
        FrameObject * single_instance_2860_6_0; single_instance_2860_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2860_6_0 == NULL)
                    single_instance_2860_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2860_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2860_6_0))->alterables->strings.set(0, str_gardening_43);
        ((Active*)((Active*)single_instance_2860_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_2_155)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2860_6_end: ;
}
// Function purpose: generated callback event_func_1614 processes event block(s) 2861_6. Actions/conditions:
//        2861_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Gardening; plus 10 more actions.
void Frames::event_func_1614()
{
    // event 2861_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Gardening; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2861_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(176, str_map_job_gardening_756)) == (1))) goto event_2861_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)) != (0))) goto event_2861_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_gardening_43))) goto event_2861_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_pos_gardening_673)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2861_6_end;
        FrameObject * single_instance_2861_6_0; single_instance_2861_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2861_6_0 == NULL)
                    single_instance_2861_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2861_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2861_6_0))->alterables->strings.set(0, str_gardening_43);
        ((Active*)((Active*)single_instance_2861_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_2_155)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2861_6_end: ;
}
// Function purpose: generated callback event_func_1615 processes event block(s) 2862_6. Actions/conditions:
//        2862_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Gardening; plus 10 more actions.
void Frames::event_func_1615()
{
    // event 2862_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Gardening; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2862_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_gardening_43))) goto event_2862_6_end;
        FrameObject * single_instance_2862_6_0; single_instance_2862_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2862_6_0 == NULL)
                    single_instance_2862_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2862_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2862_6_0))->alterables->strings.set(0, str_gardening_43);
        ((Active*)((Active*)single_instance_2862_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_2_155)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2862_6_end: ;
}
// Function purpose: generated callback event_func_1616 processes event block(s) 2863_6. Actions/conditions:
//        2863_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Tailor; plus 10 more actions.
void Frames::event_func_1616()
{
    // event 2863_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Tailor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2863_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(182, str_map_job_tailor_762)) == (1))) goto event_2863_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2863_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) == (0))) goto event_2863_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_tailor_479))) goto event_2863_6_end;
        FrameObject * single_instance_2863_6_0; single_instance_2863_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2863_6_0 == NULL)
                    single_instance_2863_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2863_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2863_6_0))->alterables->strings.set(0, str_tailor_479);
        ((Active*)((Active*)single_instance_2863_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_3_158)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2863_6_end: ;
}
// Function purpose: generated callback event_func_1617 processes event block(s) 2864_6. Actions/conditions:
//        2864_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Tailor; plus 10 more actions.
void Frames::event_func_1617()
{
    // event 2864_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Tailor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2864_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(182, str_map_job_tailor_762)) == (1))) goto event_2864_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2864_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)) != (0))) goto event_2864_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_tailor_479))) goto event_2864_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(123, str_pos_tailor_685)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2864_6_end;
        FrameObject * single_instance_2864_6_0; single_instance_2864_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2864_6_0 == NULL)
                    single_instance_2864_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2864_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2864_6_0))->alterables->strings.set(0, str_tailor_479);
        ((Active*)((Active*)single_instance_2864_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_3_158)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2864_6_end: ;
}
// Function purpose: generated callback event_func_1618 processes event block(s) 2865_6. Actions/conditions:
//        2865_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Tailor; plus 10 more actions.
void Frames::event_func_1618()
{
    // event 2865_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Tailor; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2865_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_tailor_479))) goto event_2865_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2865_6_end;
        FrameObject * single_instance_2865_6_0; single_instance_2865_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2865_6_0 == NULL)
                    single_instance_2865_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2865_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2865_6_0))->alterables->strings.set(0, str_tailor_479);
        ((Active*)((Active*)single_instance_2865_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_3_158)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2865_6_end: ;
}
// Function purpose: generated callback event_func_1619 processes event block(s) 2866_6. Actions/conditions:
//        2866_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Laundry; plus 10 more actions.
void Frames::event_func_1619()
{
    // event 2866_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Laundry; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2866_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(175, str_map_job_laundry_754)) == (1))) goto event_2866_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) == (0))) goto event_2866_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_laundry_29))) goto event_2866_6_end;
        FrameObject * single_instance_2866_6_0; single_instance_2866_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2866_6_0 == NULL)
                    single_instance_2866_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2866_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2866_6_0))->alterables->strings.set(0, str_laundry_29);
        ((Active*)((Active*)single_instance_2866_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_4_161)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2866_6_end: ;
}
// Function purpose: generated callback event_func_1620 processes event block(s) 2867_6. Actions/conditions:
//        2867_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Laundry; plus 10 more actions.
void Frames::event_func_1620()
{
    // event 2867_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Laundry; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2867_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(175, str_map_job_laundry_754)) == (1))) goto event_2867_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)) != (0))) goto event_2867_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_laundry_29))) goto event_2867_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_pos_laundry_679)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2867_6_end;
        FrameObject * single_instance_2867_6_0; single_instance_2867_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2867_6_0 == NULL)
                    single_instance_2867_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2867_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2867_6_0))->alterables->strings.set(0, str_laundry_29);
        ((Active*)((Active*)single_instance_2867_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_4_161)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2867_6_end: ;
}
// Function purpose: generated callback event_func_1621 processes event block(s) 2868_6. Actions/conditions:
//        2868_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Laundry; plus 10 more actions.
void Frames::event_func_1621()
{
    // event 2868_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Laundry; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2868_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_laundry_29))) goto event_2868_6_end;
        FrameObject * single_instance_2868_6_0; single_instance_2868_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2868_6_0 == NULL)
                    single_instance_2868_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2868_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2868_6_0))->alterables->strings.set(0, str_laundry_29);
        ((Active*)((Active*)single_instance_2868_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_4_161)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2868_6_end: ;
}
// Function purpose: generated callback event_func_1622 processes event block(s) 2869_6. Actions/conditions:
//        2869_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Library; plus 10 more actions.
void Frames::event_func_1622()
{
    // event 2869_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Library; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2869_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(184, str_map_job_library_764)) == (1))) goto event_2869_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) == (0))) goto event_2869_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_library_25))) goto event_2869_6_end;
        FrameObject * single_instance_2869_6_0; single_instance_2869_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2869_6_0 == NULL)
                    single_instance_2869_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2869_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2869_6_0))->alterables->strings.set(0, str_library_25);
        ((Active*)((Active*)single_instance_2869_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_8_325)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2869_6_end: ;
}
// Function purpose: generated callback event_func_1623 processes event block(s) 2870_6. Actions/conditions:
//        2870_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Library; plus 10 more actions.
void Frames::event_func_1623()
{
    // event 2870_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Library; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2870_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(184, str_map_job_library_764)) == (1))) goto event_2870_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)) != (0))) goto event_2870_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_library_25))) goto event_2870_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(115, str_pos_library_677)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2870_6_end;
        FrameObject * single_instance_2870_6_0; single_instance_2870_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2870_6_0 == NULL)
                    single_instance_2870_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2870_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2870_6_0))->alterables->strings.set(0, str_library_25);
        ((Active*)((Active*)single_instance_2870_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_8_325)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2870_6_end: ;
}
// Function purpose: generated callback event_func_1624 processes event block(s) 2871_6. Actions/conditions:
//        2871_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Library; plus 10 more actions.
void Frames::event_func_1624()
{
    // event 2871_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Library; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2871_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_library_25))) goto event_2871_6_end;
        FrameObject * single_instance_2871_6_0; single_instance_2871_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2871_6_0 == NULL)
                    single_instance_2871_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2871_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2871_6_0))->alterables->strings.set(0, str_library_25);
        ((Active*)((Active*)single_instance_2871_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_8_325)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2871_6_end: ;
}
// Function purpose: generated callback event_func_1625 processes event block(s) 2872_6. Actions/conditions:
//        2872_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Kitchen; plus 10 more actions.
void Frames::event_func_1625()
{
    // event 2872_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Kitchen; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2872_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(180, str_map_job_kitchen_760)) == (1))) goto event_2872_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) == (0))) goto event_2872_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_kitchen_12))) goto event_2872_6_end;
        FrameObject * single_instance_2872_6_0; single_instance_2872_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2872_6_0 == NULL)
                    single_instance_2872_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2872_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2872_6_0))->alterables->strings.set(0, str_kitchen_12);
        ((Active*)((Active*)single_instance_2872_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_10_329)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2872_6_end: ;
}
// Function purpose: generated callback event_func_1626 processes event block(s) 2873_6. Actions/conditions:
//        2873_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Kitchen; plus 10 more actions.
void Frames::event_func_1626()
{
    // event 2873_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Kitchen; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2873_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(180, str_map_job_kitchen_760)) == (1))) goto event_2873_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)) != (0))) goto event_2873_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_kitchen_12))) goto event_2873_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_pos_kitchen_683)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2873_6_end;
        FrameObject * single_instance_2873_6_0; single_instance_2873_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2873_6_0 == NULL)
                    single_instance_2873_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2873_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2873_6_0))->alterables->strings.set(0, str_kitchen_12);
        ((Active*)((Active*)single_instance_2873_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_10_329)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2873_6_end: ;
}
// Function purpose: generated callback event_func_1627 processes event block(s) 2874_6. Actions/conditions:
//        2874_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Kitchen; plus 10 more actions.
void Frames::event_func_1627()
{
    // event 2874_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Kitchen; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2874_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_2874_6_end;
        FrameObject * single_instance_2874_6_0; single_instance_2874_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2874_6_0 == NULL)
                    single_instance_2874_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2874_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2874_6_0))->alterables->strings.set(0, str_kitchen_12);
        ((Active*)((Active*)single_instance_2874_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_10_329)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2874_6_end: ;
}
// Function purpose: generated callback event_func_1628 processes event block(s) 2875_6. Actions/conditions:
//        2875_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Mailman; plus 10 more actions.
void Frames::event_func_1628()
{
    // event 2875_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Mailman; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2875_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(183, str_map_job_mailman_763)) == (1))) goto event_2875_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2875_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) == (0))) goto event_2875_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_mailman_556))) goto event_2875_6_end;
        FrameObject * single_instance_2875_6_0; single_instance_2875_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2875_6_0 == NULL)
                    single_instance_2875_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2875_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2875_6_0))->alterables->strings.set(0, str_mailman_556);
        ((Active*)((Active*)single_instance_2875_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_9_327)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2875_6_end: ;
}
// Function purpose: generated callback event_func_1629 processes event block(s) 2876_6. Actions/conditions:
//        2876_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Mailman; plus 10 more actions.
void Frames::event_func_1629()
{
    // event 2876_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Mailman; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2876_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(183, str_map_job_mailman_763)) == (1))) goto event_2876_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2876_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)) != (0))) goto event_2876_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_mailman_556))) goto event_2876_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_pos_mailman_675)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2876_6_end;
        FrameObject * single_instance_2876_6_0; single_instance_2876_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2876_6_0 == NULL)
                    single_instance_2876_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2876_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2876_6_0))->alterables->strings.set(0, str_mailman_556);
        ((Active*)((Active*)single_instance_2876_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_9_327)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2876_6_end: ;
}
// Function purpose: generated callback event_func_1630 processes event block(s) 2877_6. Actions/conditions:
//        2877_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Mailman; plus 10 more actions.
void Frames::event_func_1630()
{
    // event 2877_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Mailman; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2877_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_2877_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2877_6_end;
        FrameObject * single_instance_2877_6_0; single_instance_2877_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2877_6_0 == NULL)
                    single_instance_2877_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2877_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2877_6_0))->alterables->strings.set(0, str_mailman_556);
        ((Active*)((Active*)single_instance_2877_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_9_327)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2877_6_end: ;
}
// Function purpose: generated callback event_func_1631 processes event block(s) 2878_6. Actions/conditions:
//        2878_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Woodshop; plus 10 more actions.
void Frames::event_func_1631()
{
    // event 2878_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Woodshop; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2878_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(178, str_map_job_woodshop_758)) == (1))) goto event_2878_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) == (0))) goto event_2878_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_woodshop_21))) goto event_2878_6_end;
        FrameObject * single_instance_2878_6_0; single_instance_2878_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2878_6_0 == NULL)
                    single_instance_2878_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2878_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2878_6_0))->alterables->strings.set(0, str_woodshop_21);
        ((Active*)((Active*)single_instance_2878_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_5_164)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2878_6_end: ;
}
// Function purpose: generated callback event_func_1632 processes event block(s) 2879_6. Actions/conditions:
//        2879_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Woodshop; plus 10 more actions.
void Frames::event_func_1632()
{
    // event 2879_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Woodshop; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2879_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(178, str_map_job_woodshop_758)) == (1))) goto event_2879_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)) != (0))) goto event_2879_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_woodshop_21))) goto event_2879_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(125, str_pos_woodshop_687)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2879_6_end;
        FrameObject * single_instance_2879_6_0; single_instance_2879_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2879_6_0 == NULL)
                    single_instance_2879_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2879_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2879_6_0))->alterables->strings.set(0, str_woodshop_21);
        ((Active*)((Active*)single_instance_2879_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_5_164)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2879_6_end: ;
}
// Function purpose: generated callback event_func_1633 processes event block(s) 2880_6. Actions/conditions:
//        2880_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Woodshop; plus 10 more actions.
void Frames::event_func_1633()
{
    // event 2880_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Woodshop; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2880_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_woodshop_21))) goto event_2880_6_end;
        FrameObject * single_instance_2880_6_0; single_instance_2880_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2880_6_0 == NULL)
                    single_instance_2880_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2880_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2880_6_0))->alterables->strings.set(0, str_woodshop_21);
        ((Active*)((Active*)single_instance_2880_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_5_164)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2880_6_end: ;
}
// Function purpose: generated callback event_func_1634 processes event block(s) 2881_6. Actions/conditions:
//        2881_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Deliveries; plus 10 more actions.
void Frames::event_func_1634()
{
    // event 2881_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Deliveries; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2881_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(181, str_map_job_deliveries_761)) == (1))) goto event_2881_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2881_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) == (0))) goto event_2881_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_deliveries_577))) goto event_2881_6_end;
        FrameObject * single_instance_2881_6_0; single_instance_2881_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2881_6_0 == NULL)
                    single_instance_2881_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2881_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2881_6_0))->alterables->strings.set(0, str_deliveries_577);
        ((Active*)((Active*)single_instance_2881_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_7_323)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2881_6_end: ;
}
// Function purpose: generated callback event_func_1635 processes event block(s) 2882_6. Actions/conditions:
//        2882_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Deliveries; plus 10 more actions.
void Frames::event_func_1635()
{
    // event 2882_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Deliveries; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2882_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(181, str_map_job_deliveries_761)) == (1))) goto event_2882_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2882_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)) != (0))) goto event_2882_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_deliveries_577))) goto event_2882_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_pos_deliveries_681)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2882_6_end;
        FrameObject * single_instance_2882_6_0; single_instance_2882_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2882_6_0 == NULL)
                    single_instance_2882_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2882_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2882_6_0))->alterables->strings.set(0, str_deliveries_577);
        ((Active*)((Active*)single_instance_2882_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_7_323)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2882_6_end: ;
}
// Function purpose: generated callback event_func_1636 processes event block(s) 2883_6. Actions/conditions:
//        2883_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Deliveries; plus 10 more actions.
void Frames::event_func_1636()
{
    // event 2883_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Deliveries; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2883_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_deliveries_577))) goto event_2883_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2883_6_end;
        FrameObject * single_instance_2883_6_0; single_instance_2883_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2883_6_0 == NULL)
                    single_instance_2883_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2883_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2883_6_0))->alterables->strings.set(0, str_deliveries_577);
        ((Active*)((Active*)single_instance_2883_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_7_323)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2883_6_end: ;
}
// Function purpose: generated callback event_func_1637 processes event block(s) 2884_6. Actions/conditions:
//        2884_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Metalshop; plus 10 more actions.
void Frames::event_func_1637()
{
    // event 2884_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Metalshop; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2884_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(179, str_map_job_metalshop_759)) == (1))) goto event_2884_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) == (0))) goto event_2884_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_metalshop_35))) goto event_2884_6_end;
        FrameObject * single_instance_2884_6_0; single_instance_2884_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2884_6_0 == NULL)
                    single_instance_2884_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2884_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2884_6_0))->alterables->strings.set(0, str_metalshop_35);
        ((Active*)((Active*)single_instance_2884_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_6_241)+str__247+((INI*)get_instance(translationData_instances))->get_string(str_job_board_627, str_19_246));
            ((Text*)*it)->blend_color.set(Color(0, 128, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2884_6_end: ;
}
// Function purpose: generated callback event_func_1638 processes event block(s) 2885_6. Actions/conditions:
//        2885_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Metalshop; plus 10 more actions.
void Frames::event_func_1638()
{
    // event 2885_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Metalshop; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2885_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(179, str_map_job_metalshop_759)) == (1))) goto event_2885_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)) != (0))) goto event_2885_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (str_metalshop_35))) goto event_2885_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(127, str_pos_metalshop_689)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2885_6_end;
        FrameObject * single_instance_2885_6_0; single_instance_2885_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2885_6_0 == NULL)
                    single_instance_2885_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2885_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2885_6_0))->alterables->strings.set(0, str_metalshop_35);
        ((Active*)((Active*)single_instance_2885_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_6_241)+str__247+((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(128, 0, 0));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2885_6_end: ;
}
// Function purpose: generated callback event_func_1639 processes event block(s) 2886_6. Actions/conditions:
//        2886_6: creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string
//        to Metalshop; plus 10 more actions.
void Frames::event_func_1639()
{
    // event 2886_6 : creates a buttons 245 object; sets the object's animation to 12; sets the selected object's string to Metalshop; plus 10 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2886_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_metalshop_35))) goto event_2886_6_end;
        FrameObject * single_instance_2886_6_0; single_instance_2886_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2886_6_0 == NULL)
                    single_instance_2886_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2886_6_0))->force_animation(12);
        ((Active*)((Active*)single_instance_2886_6_0))->alterables->strings.set(0, str_metalshop_35);
        ((Active*)((Active*)single_instance_2886_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193));
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+((AssociateArray*)get_instance(gameVariables_instances))->get_value(80, str_ypos_193)+2);
            ((Text*)*it)->set_string(((INI*)get_instance(translationData_instances))->get_string(str_jobs_755, str_6_241)+str__247+((Active*)get_instance(playerBase_instances))->alterables->strings.get(0));
            ((Text*)*it)->blend_color.set(Color(0, 113, 170));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(80, str_ypos_193, 18);
    }
    event_2886_6_end: ;
}
void Frames::loop_create_joblist_6()
{
    event_func_1595();
    event_func_1596();
    event_func_1597();
    event_func_1598();
    event_func_1599();
    event_func_1600();
    event_func_1601();
    event_func_1602();
    event_func_1603();
    event_func_1604();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_1609();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_1613();
    event_func_1614();
    event_func_1615();
    event_func_1616();
    event_func_1617();
    event_func_1618();
    event_func_1619();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_1623();
    event_func_1624();
    event_func_1625();
    event_func_1626();
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_1631();
    event_func_1632();
    event_func_1633();
    event_func_1634();
    event_func_1635();
    event_func_1636();
    event_func_1637();
    event_func_1638();
    event_func_1639();
}
// Function purpose: generated callback event_func_1640 processes event block(s) 917_6. Actions/conditions:
//        917_6: updates a value on the target object; sets Chipping to 0; sets Weeding to 0; plus 10 more actions.
void Frames::event_func_1640()
{
    // event 917_6 : updates a value on the target object; sets Chipping to 0; sets Weeding to 0; plus 10 more actions
    {
        if (!(group_code_1)) goto event_917_6_end;
        ((Text*)get_instance(lessonTimerText_instances))->blend_color.set(Color(192, 192, 192));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(155, str_chipping_728, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(433, str_weeding_1276, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(359, str_cleaning_23, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(153, str_digging_726, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(360, str_reading_1154, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(361, str_browsing_1155, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(154, str_cutting_727, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(156, str_unscrewing_729, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(362, str_searching_desk_1156, 0);
        {
            loop_close_activity_box_running = true;
            int times = int(1);
            loop_close_activity_box_index = 0;
            while (loop_close_activity_box_index < times) {
                loop_close_activity_box_6();
                if (!loop_close_activity_box_running) break;
                loop_close_activity_box_index++;
            }
        }
    }
    event_917_6_end: ;
}
void Frames::loop_cancel_actions_6()
{
    event_func_1640();
}
// Function purpose: generated callback event_func_1641 processes event block(s) 4023_6. Actions/conditions:
//        4023_6: sets a game or interface text string.
void Frames::event_func_1641()
{
    // event 4023_6 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4023_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(434, str_missiontarget_1277))+str_inv_911+number_to_string(loop_npc_findslot_index+1))) == (empty_string))) goto event_4023_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(434, str_missiontarget_1277))+str_inv_911+number_to_string(loop_npc_findslot_index+1), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(435, str_missionitem_1278))+str_100_1066+((AssociateArray*)get_instance(gameVariables_instances))->get_string(436, str_mby_1279)+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)));
            loop_npc_findslot_running = false;
    
    }
    event_4023_6_end: ;
}
void Frames::loop_npc_findslot_6()
{
    event_func_1641();
}
// Function purpose: generated callback event_func_1642 processes event block(s) 4024_6. Actions/conditions:
//        4024_6: sets a game or interface text string.
void Frames::event_func_1642()
{
    // event 4024_6 : sets a game or interface text string
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4024_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(437, str_targa_1280))+str_slot_617+number_to_string(loop_npc_find_deskslot_index+5))) == (empty_string))) goto event_4024_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_desk_32+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(437, str_targa_1280))+str_slot_617+number_to_string(loop_npc_find_deskslot_index+5), number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(435, str_missionitem_1278))+str_100_1066+((AssociateArray*)get_instance(gameVariables_instances))->get_string(436, str_mby_1279)+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)));
            loop_npc_find_deskslot_running = false;
    
    }
    event_4024_6_end: ;
}
void Frames::loop_npc_find_deskslot_6()
{
    event_func_1642();
}
// Function purpose: generated callback event_func_1643 processes event block(s) 4011_6. Actions/conditions:
//        4011_6: removes the selected object.
void Frames::event_func_1643()
{
    // event 4011_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4011_6_end;
        markervendor_332_instances.clear_selection();
        for (ObjectIterator it(markervendor_332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!markervendor_332_instances.has_selection()) goto event_4011_6_end;
        for (ObjectIterator it(markervendor_332_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4011_6_end: ;
}
// Function purpose: generated callback event_func_1644 processes event block(s) 4012_6. Actions/conditions:
//        4012_6: sets the selected object's string to empty_string; sets mBy to
//        ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0).
void Frames::event_func_1644()
{
    // event 4012_6 : sets the selected object's string to empty_string; sets mBy to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4012_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4012_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(2, empty_string);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(436, str_mby_1279, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0));
    }
    event_4012_6_end: ;
}
// Function purpose: generated callback event_func_1645 processes event block(s) 4013_6. Actions/conditions:
//        4013_6: sets targA to ((Active*)get_single(inmateBase_instances,
//        default_active_instance))->alterables->values.get(0); sets rnd to 1+randrange_event(2).
void Frames::event_func_1645()
{
    // event 4013_6 : sets targA to ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0); sets rnd to 1+randrange_event(2)
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4013_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_4013_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(434, str_missiontarget_1277)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4013_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(437, str_targa_1280, ((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, 1+randrange_event(2));
    }
    event_4013_6_end: ;
}
// Function purpose: generated callback event_func_1646 processes event block(s) 4014_6. Actions/conditions:
//        4014_6: sets targA to ((Active*)get_single(guardBase_instances,
//        default_active_instance))->alterables->values.get(0); sets rnd to 1.
void Frames::event_func_1646()
{
    // event 4014_6 : sets targA to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0); sets rnd to 1
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4014_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_4014_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(434, str_missiontarget_1277)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_4014_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(437, str_targa_1280, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, 1);
    }
    event_4014_6_end: ;
}
// Function purpose: generated callback event_func_1647 processes event block(s) 4015_6. Actions/conditions:
//        4015_6: sets MissionItem to string_to_number(stringtokenizer_81->get(3)).
void Frames::event_func_1647()
{
    // event 4015_6 : sets MissionItem to string_to_number(stringtokenizer_81->get(3))
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4015_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_4015_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (1))) goto event_4015_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(435, str_missionitem_1278, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        {
            loop_npc_findslot_running = true;
            int times = int(6);
            loop_npc_findslot_index = 0;
            while (loop_npc_findslot_index < times) {
                loop_npc_findslot_6();
                if (!loop_npc_findslot_running) break;
                loop_npc_findslot_index++;
            }
        }
    }
    event_4015_6_end: ;
}
// Function purpose: generated callback event_func_1648 processes event block(s) 4016_6. Actions/conditions:
//        4016_6: sets MissionItem to string_to_number(stringtokenizer_81->get(3)).
void Frames::event_func_1648()
{
    // event 4016_6 : sets MissionItem to string_to_number(stringtokenizer_81->get(3))
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4016_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_4016_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(132, str_rnd_696)) == (2))) goto event_4016_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(435, str_missionitem_1278, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
        {
            loop_npc_find_deskslot_running = true;
            int times = int(15);
            loop_npc_find_deskslot_index = 0;
            while (loop_npc_find_deskslot_index < times) {
                loop_npc_find_deskslot_6();
                if (!loop_npc_find_deskslot_running) break;
                loop_npc_find_deskslot_index++;
            }
        }
    }
    event_4016_6_end: ;
}
// Function purpose: generated callback event_func_1649 processes event block(s) 4017_6. Actions/conditions:
//        4017_6: adds a line to the current list.
void Frames::event_func_1649()
{
    // event 4017_6 : adds a line to the current list
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4017_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_stealchar_1264))) goto event_4017_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(434, str_missiontarget_1277)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_4017_6_end;
        ((ListObject*)get_instance(missions_298_instances))->add_line(str_retrieve_1281+((AssociateArray*)get_instance(gameVariables_instances))->get_string(436, str_mby_1279)+str_s_1282+lowercase_string(((INI*)get_instance(itemData_instances))->get_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3), str_name_103))+str_from_1283+((Active*)get_single(qualifier_14, default_active_instance))->alterables->strings.get(0)+str_stealchar_1284+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25))+str__254+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)+str__254+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(0))+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913))+str__254+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3));
    }
    event_4017_6_end: ;
}
// Function purpose: generated callback event_func_1650 processes event block(s) 4018_6. Actions/conditions:
//        4018_6: enables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object;
//        adds a line to the current list.
void Frames::event_func_1650()
{
    // event 4018_6 : enables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object; adds a line to the current list
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4018_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_beat_1232))) goto event_4018_6_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(434, str_missiontarget_1277)))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_4018_6_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2001);
        }
        ((ListObject*)get_instance(missions_298_instances))->add_line(str_beat_up_1285+((Active*)get_single(qualifier_14, default_active_instance))->alterables->strings.get(0)+str_for_1286+((AssociateArray*)get_instance(gameVariables_instances))->get_string(436, str_mby_1279)+str_beat_1287+number_to_string(((Active*)get_single(qualifier_14, default_active_instance))->alterables->values.get(25))+str__254+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)+str__254+((AssociateArray*)get_instance(gameVariables_instances))->get_string(436, str_mby_1279)+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)));
    }
    event_4018_6_end: ;
}
// Function purpose: generated callback event_func_1651 processes event block(s) 4019_6. Actions/conditions:
//        4019_6: adds a line to the current list.
void Frames::event_func_1651()
{
    // event 4019_6 : adds a line to the current list
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4019_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_give_1268))) goto event_4019_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4019_6_end;
        ((ListObject*)get_instance(missions_298_instances))->add_line(str_find_a_1288+lowercase_string(((INI*)get_instance(itemData_instances))->get_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3), str_name_103))+str_for_1286+((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->strings.get(0)+str_give_1289+number_to_string(((Active*)get_single(inmateBase_instances, default_active_instance))->alterables->values.get(0))+str__254+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__254+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4));
    }
    event_4019_6_end: ;
}
// Function purpose: generated callback event_func_1652 processes event block(s) 4020_6. Actions/conditions:
//        4020_6: adds a line to the current list.
void Frames::event_func_1652()
{
    // event 4020_6 : adds a line to the current list
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4020_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_distract_706))) goto event_4020_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) <= (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) goto event_4020_6_end;
        ((ListObject*)get_instance(missions_298_instances))->add_line(str_distraction_for_1290+((AssociateArray*)get_instance(gameVariables_instances))->get_string(436, str_mby_1279)+str_at_1291+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5)+str_distract_1292+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913))+str__254+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902))+str__254+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6));
    }
    event_4020_6_end: ;
}
// Function purpose: generated callback event_func_1653 processes event block(s) 4021_6. Actions/conditions:
//        4021_6: adds a line to the current list.
void Frames::event_func_1653()
{
    // event 4021_6 : adds a line to the current list
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4021_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) == (str_distract_706))) goto event_4021_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_t_hour_488)) > (string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))))) goto event_4021_6_end;
        ((ListObject*)get_instance(missions_298_instances))->add_line(str_distraction_for_1290+((AssociateArray*)get_instance(gameVariables_instances))->get_string(436, str_mby_1279)+str_at_1291+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5)+str_distract_1292+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913))+str__254+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)+str__254+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(254, str_t_day_902)+1)+str__254+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(6));
    }
    event_4021_6_end: ;
}
// Function purpose: generated callback event_func_1654 processes event block(s) 4022_6. Actions/conditions:
//        4022_6: creates a items 184 object; moves the selected object behind other objects; sets the selected
//        object's numeric value to gameVariables->get_value(435, MissionItem); plus 1 more actions.
void Frames::event_func_1654()
{
    // event 4022_6 : creates a items 184 object; moves the selected object behind other objects; sets the selected object's numeric value to gameVariables->get_value(435, MissionItem); plus 1 more actions
    {
        if (!(group_code_1 && group_code_missions_1)) goto event_4022_6_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) == (str_plantdesk_1293))) goto event_4022_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(438, str_missionby_1294)))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_4022_6_end;
        FrameObject * single_instance_4022_6_0; single_instance_4022_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(inmateBase_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_items_184(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4022_6_0 == NULL)
                    single_instance_4022_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4022_6_0))->move_back();
        ((Active*)((Active*)single_instance_4022_6_0))->alterables->values.set(2, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(435, str_missionitem_1278));
        ((Active*)((Active*)single_instance_4022_6_0))->alterables->flags.enable(-2);
    }
    event_4022_6_end: ;
}
void Frames::loop_compile_mission_6()
{
    event_func_1643();
    event_func_1644();
    event_func_1645();
    event_func_1646();
    event_func_1647();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
    event_func_1652();
    event_func_1653();
    event_func_1654();
}
// Function purpose: generated callback event_func_1655 processes event block(s) 2201_6. Actions/conditions:
//        2201_6: sets a stored numeric value; sets a game or interface text string; sets the selected object's
//        numeric value to gameVariables->get_value(439, newHP); plus 1 more actions.
void Frames::event_func_1655()
{
    // event 2201_6 : sets a stored numeric value; sets a game or interface text string; sets the selected object's numeric value to gameVariables->get_value(439, newHP); plus 1 more actions
    {
        if (!(group_code_1)) goto event_2201_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(145, str_pouchslot_714)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2201_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(439, str_newhp_1295, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(146, str_pouchhp_715)-((INI*)get_instance(itemData_instances))->get_value_int(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_decay_1212));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(145, str_pouchslot_714)), number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2))+str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(439, str_newhp_1295)));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(439, str_newhp_1295));
            ((Active*)*it)->alterables->flags.enable(-5);
        }
    }
    event_2201_6_end: ;
}
// Function purpose: generated callback event_func_1656 processes event block(s) 2202_6. Actions/conditions:
//        2202_6: sets a game or interface text string; sets SpeakText to Misc entry 25; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_1656()
{
    // event 2202_6 : sets a game or interface text string; sets SpeakText to Misc entry 25; sets a game or interface text string; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2202_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(145, str_pouchslot_714)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_2202_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(145, str_pouchslot_714)), empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_25_1214));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(349, str_speaktext_1142), str_item_1215, lowercase_string(((INI*)get_instance(itemData_instances))->get_string(number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(2)), str_name_103))));
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
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
    }
    event_2202_6_end: ;
}
void Frames::loop_decay_pouch_6()
{
    event_func_1655();
    event_func_1656();
}
// Function purpose: generated callback event_func_1657 processes event block(s) 2200_6. Actions/conditions:
//        2200_6: checks scene is active; game state Pouch; game state Illegal; this handler gates a game event
//        without a direct value/object action.
void Frames::event_func_1657()
{
    // event 2200_6 : checks scene is active; game state Pouch; game state Illegal; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2200_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(144, str_pouch_713)) > (0))) goto event_2200_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(143, str_illegal_618)) > (0))) goto event_2200_6_end;
        {
            loop_decay_pouch_running = true;
            int times = int(1);
            loop_decay_pouch_index = 0;
            while (loop_decay_pouch_index < times) {
                loop_decay_pouch_6();
                if (!loop_decay_pouch_running) break;
                loop_decay_pouch_index++;
            }
        }
    }
    event_2200_6_end: ;
}
void Frames::loop_pouch_used_6()
{
    event_func_1657();
}
// Function purpose: generated callback event_func_1658 processes event block(s) 2126_6. Actions/conditions:
//        2126_6: adds a icons 433 instance; sets the selected object's direction to 0; sets the selected object's
//        horizontal position to gameVariables->get_value(343, IconX); plus 5 more actions.
void Frames::event_func_1658()
{
    // event 2126_6 : adds a icons 433 instance; sets the selected object's direction to 0; sets the selected object's horizontal position to gameVariables->get_value(343, IconX); plus 5 more actions
    {
        if (!(group_code_1)) goto event_2126_6_end;
        icons_433_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_icons_433(0, 0), 5);
            icons_433_instances.add_back();
        }
        for (ObjectIterator it(icons_433_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(343, str_iconx_1136));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(344, str_icony_1137));
            ((Active*)*it)->alterables->values.set(25, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(345, str_iconz_1138));
        }
    }
    event_2126_6_end: ;
}
void Frames::loop_icon_thumbup_6()
{
    event_func_1658();
}
// Function purpose: generated callback event_func_1659 processes event block(s) 2983_6. Actions/conditions:
//        2983_6: sets IconX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets
//        IconY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets IconZ to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25).
void Frames::event_func_1659()
{
    // event 2983_6 : sets IconX to ((Active*)get_single(guardBase_instances, default_active_instance))->get_x(); sets IconY to ((Active*)get_single(guardBase_instances, default_active_instance))->get_y(); sets IconZ to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2983_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2983_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(343, str_iconx_1136, ((Active*)get_single(guardBase_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(344, str_icony_1137, ((Active*)get_single(guardBase_instances, default_active_instance))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(345, str_iconz_1138, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        {
            loop_icon_thumbup_running = true;
            int times = int(1);
            loop_icon_thumbup_index = 0;
            while (loop_icon_thumbup_index < times) {
                loop_icon_thumbup_6();
                if (!loop_icon_thumbup_running) break;
                loop_icon_thumbup_index++;
            }
        }
    }
    event_2983_6_end: ;
}
void Frames::loop_talk_loop_guard_2_6()
{
    event_func_1659();
}
// Function purpose: generated callback event_func_1660 processes event block(s) 2981_6. Actions/conditions:
//        2981_6: activates the Guard_Talk event group; sets ChinwagTimer to 20; sets SpeakID to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 9
//        more actions.
void Frames::event_func_1660()
{
    // event 2981_6 : activates the Guard_Talk event group; sets ChinwagTimer to 20; sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2981_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_2981_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2981_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) == (-1))) goto event_2981_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_guard_talk_1296);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(440, str_chinwagtimer_1297, 20);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->alterables->values.add(12, 1);
            ((Active*)*it)->get_movement()->stop(false);
        }
        {
            loop_talk_loop_guard_2_running = true;
            int times = int(2);
            loop_talk_loop_guard_2_index = 0;
            while (loop_talk_loop_guard_2_index < times) {
                loop_talk_loop_guard_2_6();
                if (!loop_talk_loop_guard_2_running) break;
                loop_talk_loop_guard_2_index++;
            }
        }
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2981_6_end: ;
}
// Function purpose: generated callback event_func_1661 processes event block(s) 2982_6. Actions/conditions:
//        2982_6: activates the Outfit_Guard event group; sets ChinwagTimer to 20; sets SpeakID to
//        ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 8
//        more actions.
void Frames::event_func_1661()
{
    // event 2982_6 : activates the Outfit_Guard event group; sets ChinwagTimer to 20; sets SpeakID to ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25); plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2982_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(260, str_cansee_915)) == (1))) goto event_2982_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(258, str_pid_913)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2982_6_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(30, str_illegaloutfits_493), str__96+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(31, str_outfitshort_494))+str__96, 0)) != (-1))) goto event_2982_6_end;
        ((INI*)get_instance(inispeech_453_instances))->set_group(str_outfit_guard_1298);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(440, str_chinwagtimer_1297, 20);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(351, str_speakid_1144, ((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(350, str_speakcol_1143, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(349, str_speaktext_1142, ((INI*)get_instance(inispeech_453_instances))->get_string(number_to_string(randrange_event(((INI*)get_instance(inispeech_453_instances))->get_value_int(str_count_885))+1)));
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(playerBase_instances))->x + 0, ((Active*)get_instance(playerBase_instances))->y + 0));
            ((Active*)*it)->get_movement()->stop(false);
        }
        {
            loop_talk_loop_guard_2_running = true;
            int times = int(1);
            loop_talk_loop_guard_2_index = 0;
            while (loop_talk_loop_guard_2_index < times) {
                loop_talk_loop_guard_2_6();
                if (!loop_talk_loop_guard_2_running) break;
                loop_talk_loop_guard_2_index++;
            }
        }
        {
            loop_speak_running = true;
            int times = int(1);
            loop_speak_index = 0;
            while (loop_speak_index < times) {
                loop_speak_6();
                if (!loop_speak_running) break;
                loop_speak_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2982_6_end: ;
}
