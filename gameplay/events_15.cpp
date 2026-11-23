#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_1133 processes event block(s) 703_6. Actions/conditions:
//        703_6: adds a dooroutfit 501 instance.
void Frames::event_func_1133()
{
    // event 703_6 : adds a dooroutfit 501 instance
    {
        if (!(group_code_1 && group_code_dlc_sss_1)) goto event_703_6_end;
        dooroutfit_501_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dooroutfit_501(1456, 1200), 1);
            dooroutfit_501_instances.add_back();
        }
    }
    event_703_6_end: ;
}
void Frames::loop_setup_sss_6()
{
    event_func_1113();
    event_func_1114();
    event_func_1115();
    event_func_1116();
    event_func_1117();
    event_func_1118();
    event_func_1119();
    event_func_1120();
    event_func_1121();
    event_func_1122();
    event_func_1123();
    event_func_1124();
    event_func_1125();
    event_func_1126();
    event_func_1127();
    event_func_1128();
    event_func_1129();
    event_func_1130();
    event_func_1131();
    event_func_1132();
    event_func_1133();
}
// Function purpose: generated callback event_func_1134 processes event block(s) 28_6. Actions/conditions:
//        28_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 14 more actions.
void Frames::event_func_1134()
{
    // event 28_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 14 more actions
    bool or_result_28_6 = false;
    bool or_temp_result_28_6_0 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_28_6_0_end;
        if (!((global_strings->get(0)) == (str_perks_143))) goto or_event_28_6_0_end;
        if (!((global_values->get(18)) == (0))) goto or_event_28_6_0_end;
        or_result_28_6 = true;
        or_temp_result_28_6_0 = true;
    }
    or_event_28_6_0_end: ;
    // event 28_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 14 more actions
    bool or_temp_result_28_6_1 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_28_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(185, str_map_tileset_766)) == (str_perks_143))) goto or_event_28_6_1_end;
        if (!((global_values->get(18)) > (0))) goto or_event_28_6_1_end;
        or_result_28_6 = true;
        or_temp_result_28_6_1 = true;
        or_event_28_6_1_end: ;
        if (!or_result_28_6) goto or_final_or_event_28_6_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
            ((AssociateArray*)*it)->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_955);
            ((AssociateArray*)*it)->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_957);
            ((AssociateArray*)*it)->set_string(287, str_obstaclelist4_958, str_75_76_77_78_79_80_81_82_83_84_85_92_99_959);
            ((AssociateArray*)*it)->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_59_60_61_62_63_64_76_77_78_79_80_82_83_84_85_90_91_92_961);
            ((AssociateArray*)*it)->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_61_79_64_78_92_963);
            ((AssociateArray*)*it)->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_60_62_80_92_965);
            ((AssociateArray*)*it)->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_966);
            ((AssociateArray*)*it)->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
            ((AssociateArray*)*it)->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
            ((AssociateArray*)*it)->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
            ((AssociateArray*)*it)->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
            ((AssociateArray*)*it)->set_string(295, str_shadow_override_975, str_81_48_39_40_75_74_73_72_71_70_976);
            ((AssociateArray*)*it)->set_string(296, str_nol7block_977, str_4_74_978);
        }
    }
    or_final_or_event_28_6_1_end: ;
}
// Function purpose: generated callback event_func_1135 processes event block(s) 29_6. Actions/conditions:
//        29_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_64_70_71_72_73_74_; plus 14 more actions.
void Frames::event_func_1135()
{
    // event 29_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_64_70_71_72_73_74_; plus 14 more actions
    bool or_result_29_6 = false;
    bool or_temp_result_29_6_0 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_29_6_0_end;
        if (!((global_strings->get(0)) == (str_stalagflucht_144))) goto or_event_29_6_0_end;
        if (!((global_values->get(18)) == (0))) goto or_event_29_6_0_end;
        or_result_29_6 = true;
        or_temp_result_29_6_0 = true;
    }
    or_event_29_6_0_end: ;
    // event 29_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_64_70_71_72_73_74_; plus 14 more actions
    bool or_temp_result_29_6_1 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_29_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(185, str_map_tileset_766)) == (str_stalagflucht_144))) goto or_event_29_6_1_end;
        if (!((global_values->get(18)) > (0))) goto or_event_29_6_1_end;
        or_result_29_6 = true;
        or_temp_result_29_6_1 = true;
        or_event_29_6_1_end: ;
        if (!or_result_29_6) goto or_final_or_event_29_6_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
            ((AssociateArray*)*it)->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_955);
            ((AssociateArray*)*it)->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_64_70_71_72_73_74_979);
            ((AssociateArray*)*it)->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_92_980);
            ((AssociateArray*)*it)->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_64_71_76_77_78_79_80_82_83_84_85_90_91_92_981);
            ((AssociateArray*)*it)->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_71_79_64_78_92_982);
            ((AssociateArray*)*it)->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_80_92_983);
            ((AssociateArray*)*it)->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_966);
            ((AssociateArray*)*it)->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
            ((AssociateArray*)*it)->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
            ((AssociateArray*)*it)->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
            ((AssociateArray*)*it)->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
            ((AssociateArray*)*it)->set_string(295, str_shadow_override_975, str_60_59_70_984);
            ((AssociateArray*)*it)->set_string(296, str_nol7block_977, str_4_985);
        }
    }
    or_final_or_event_29_6_1_end: ;
}
// Function purpose: generated callback event_func_1136 processes event block(s) 30_6. Actions/conditions:
//        30_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_41_42_48_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 14 more actions.
void Frames::event_func_1136()
{
    // event 30_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 14 more actions
    bool or_result_30_6 = false;
    bool or_temp_result_30_6_0 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_30_6_0_end;
        if (!((global_strings->get(0)) == (str_shanktonstatepen_145))) goto or_event_30_6_0_end;
        if (!((global_values->get(18)) == (0))) goto or_event_30_6_0_end;
        or_result_30_6 = true;
        or_temp_result_30_6_0 = true;
    }
    or_event_30_6_0_end: ;
    // event 30_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 14 more actions
    bool or_temp_result_30_6_1 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_30_6_1_end;
        if (!((global_values->get(18)) > (0))) goto or_event_30_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(185, str_map_tileset_766)) == (str_shanktonstatepen_145))) goto or_event_30_6_1_end;
        or_result_30_6 = true;
        or_temp_result_30_6_1 = true;
        or_event_30_6_1_end: ;
        if (!or_result_30_6) goto or_final_or_event_30_6_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
            ((AssociateArray*)*it)->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_41_42_48_986);
            ((AssociateArray*)*it)->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_957);
            ((AssociateArray*)*it)->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_92_98_99_100_987);
            ((AssociateArray*)*it)->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_59_60_61_62_63_76_77_78_79_80_82_83_84_85_90_91_92_988);
            ((AssociateArray*)*it)->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_61_78_79_92_989);
            ((AssociateArray*)*it)->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_60_62_80_92_965);
            ((AssociateArray*)*it)->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_966);
            ((AssociateArray*)*it)->set_string(291, str_chippablewalls_967, str_5_6_7_17_58_990);
            ((AssociateArray*)*it)->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
            ((AssociateArray*)*it)->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
            ((AssociateArray*)*it)->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
            ((AssociateArray*)*it)->set_string(295, str_shadow_override_975, str_70_71_72_73_74_75_98_99_100_39_64_991);
            ((AssociateArray*)*it)->set_string(296, str_nol7block_977, str_4_74_978);
        }
    }
    or_final_or_event_30_6_1_end: ;
}
// Function purpose: generated callback event_func_1137 processes event block(s) 31_6. Actions/conditions:
//        31_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_49_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 14 more actions.
void Frames::event_func_1137()
{
    // event 31_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_49_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 14 more actions
    bool or_result_31_6 = false;
    bool or_temp_result_31_6_0 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_31_6_0_end;
        if (!((global_strings->get(0)) == (str_jungle_146))) goto or_event_31_6_0_end;
        if (!((global_values->get(18)) == (0))) goto or_event_31_6_0_end;
        or_result_31_6 = true;
        or_temp_result_31_6_0 = true;
    }
    or_event_31_6_0_end: ;
    // event 31_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_49_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 14 more actions
    bool or_temp_result_31_6_1 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_31_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(185, str_map_tileset_766)) == (str_jungle_146))) goto or_event_31_6_1_end;
        if (!((global_values->get(18)) > (0))) goto or_event_31_6_1_end;
        or_result_31_6 = true;
        or_temp_result_31_6_1 = true;
        or_event_31_6_1_end: ;
        if (!or_result_31_6) goto or_final_or_event_31_6_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
            ((AssociateArray*)*it)->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_49_992);
            ((AssociateArray*)*it)->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_993);
            ((AssociateArray*)*it)->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_92_980);
            ((AssociateArray*)*it)->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_59_60_61_62_63_64_71_76_77_78_79_80_82_83_84_85_90_91_994);
            ((AssociateArray*)*it)->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_61_71_79_64_995);
            ((AssociateArray*)*it)->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_60_62_80_996);
            ((AssociateArray*)*it)->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_65_66_67_68_69_997);
            ((AssociateArray*)*it)->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
            ((AssociateArray*)*it)->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
            ((AssociateArray*)*it)->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
            ((AssociateArray*)*it)->set_string(294, str_rooffall_973, str_0_79_83_85_86_87_88_89_998);
            ((AssociateArray*)*it)->set_string(295, str_shadow_override_975, str_49_81_999);
            ((AssociateArray*)*it)->set_string(296, str_nol7block_977, str_4_985);
        }
    }
    or_final_or_event_31_6_1_end: ;
}
// Function purpose: generated callback event_func_1138 processes event block(s) 32_6. Actions/conditions:
//        32_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_65_70_71_72_73_74_; plus 14 more actions.
void Frames::event_func_1138()
{
    // event 32_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_65_70_71_72_73_74_; plus 14 more actions
    bool or_result_32_6 = false;
    bool or_temp_result_32_6_0 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_32_6_0_end;
        if (!((global_strings->get(0)) == (str_sanpancho_147))) goto or_event_32_6_0_end;
        if (!((global_values->get(18)) == (0))) goto or_event_32_6_0_end;
        or_result_32_6 = true;
        or_temp_result_32_6_0 = true;
    }
    or_event_32_6_0_end: ;
    // event 32_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_65_70_71_72_73_74_; plus 14 more actions
    bool or_temp_result_32_6_1 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_32_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(185, str_map_tileset_766)) == (str_sanpancho_147))) goto or_event_32_6_1_end;
        if (!((global_values->get(18)) > (0))) goto or_event_32_6_1_end;
        or_result_32_6 = true;
        or_temp_result_32_6_1 = true;
        or_event_32_6_1_end: ;
        if (!or_result_32_6) goto or_final_or_event_32_6_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
            ((AssociateArray*)*it)->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_955);
            ((AssociateArray*)*it)->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_65_70_71_72_73_74_1000);
            ((AssociateArray*)*it)->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_86_92_1001);
            ((AssociateArray*)*it)->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_71_76_77_78_79_80_82_83_84_85_90_91_1002);
            ((AssociateArray*)*it)->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_71_79_1003);
            ((AssociateArray*)*it)->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_80_1004);
            ((AssociateArray*)*it)->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_966);
            ((AssociateArray*)*it)->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
            ((AssociateArray*)*it)->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
            ((AssociateArray*)*it)->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
            ((AssociateArray*)*it)->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
            ((AssociateArray*)*it)->set_string(295, str_shadow_override_975, str_86_1005);
            ((AssociateArray*)*it)->set_string(296, str_nol7block_977, str_4_62_1006);
        }
    }
    or_final_or_event_32_6_1_end: ;
}
// Function purpose: generated callback event_func_1139 processes event block(s) 33_6. Actions/conditions:
//        33_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 14 more actions.
void Frames::event_func_1139()
{
    // event 33_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 14 more actions
    bool or_result_33_6 = false;
    bool or_temp_result_33_6_0 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_33_6_0_end;
        if (!((global_strings->get(0)) == (str_irongate_148))) goto or_event_33_6_0_end;
        if (!((global_values->get(18)) == (0))) goto or_event_33_6_0_end;
        or_result_33_6 = true;
        or_temp_result_33_6_0 = true;
    }
    or_event_33_6_0_end: ;
    // event 33_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 14 more actions
    bool or_temp_result_33_6_1 = false;
    {
        if (!(group_load_map_from_file_1)) goto or_event_33_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(185, str_map_tileset_766)) == (str_irongate_148))) goto or_event_33_6_1_end;
        if (!((global_values->get(18)) > (0))) goto or_event_33_6_1_end;
        or_result_33_6 = true;
        or_temp_result_33_6_1 = true;
        or_event_33_6_1_end: ;
        if (!or_result_33_6) goto or_final_or_event_33_6_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
            ((AssociateArray*)*it)->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_955);
            ((AssociateArray*)*it)->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_957);
            ((AssociateArray*)*it)->set_string(287, str_obstaclelist4_958, str_75_76_77_78_79_80_81_82_83_84_85_92_99_959);
            ((AssociateArray*)*it)->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_59_60_61_62_63_64_76_77_78_79_80_82_83_84_85_90_91_1007);
            ((AssociateArray*)*it)->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_61_78_79_64_1008);
            ((AssociateArray*)*it)->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_60_62_80_996);
            ((AssociateArray*)*it)->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_966);
            ((AssociateArray*)*it)->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
            ((AssociateArray*)*it)->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
            ((AssociateArray*)*it)->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
            ((AssociateArray*)*it)->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
            ((AssociateArray*)*it)->set_string(295, str_shadow_override_975, str_99_81_39_40_48_70_71_72_73_74_75_1009);
            ((AssociateArray*)*it)->set_string(296, str_nol7block_977, str_4_74_978);
        }
    }
    or_final_or_event_33_6_1_end: ;
}
// Function purpose: generated callback event_func_1140 processes event block(s) 34_6. Actions/conditions:
//        34_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 12 more actions.
void Frames::event_func_1140()
{
    // event 34_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 12 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_34_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(185, str_map_tileset_766)) == (str_ea_140))) goto event_34_6_end;
        if (!((global_values->get(18)) == (1))) goto event_34_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_955);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_993);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_92_980);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_59_60_61_62_63_64_71_76_77_78_79_80_82_83_84_85_90_91_994);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_61_71_79_64_995);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_60_62_80_996);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_80_1010);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
    }
    event_34_6_end: ;
}
// Function purpose: generated callback event_func_1141 processes event block(s) 35_6. Actions/conditions:
//        35_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 12 more actions.
void Frames::event_func_1141()
{
    // event 35_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 12 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_35_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(185, str_map_tileset_766)) == (str_fortbamford_142))) goto event_35_6_end;
        if (!((global_values->get(18)) == (1))) goto event_35_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_955);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_993);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_92_980);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_59_60_61_62_63_64_71_76_77_78_79_80_82_83_84_85_90_91_994);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_61_71_79_64_995);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_60_62_1011);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_966);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
    }
    event_35_6_end: ;
}
// Function purpose: generated callback event_func_1142 processes event block(s) 36_6. Actions/conditions:
//        36_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 12 more actions.
void Frames::event_func_1142()
{
    // event 36_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 12 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_36_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(185, str_map_tileset_766)) == (str_campepsilon_141))) goto event_36_6_end;
        if (!((global_values->get(18)) == (1))) goto event_36_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_955);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_993);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_86_92_1001);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_59_60_61_62_63_64_71_76_77_78_79_80_82_83_84_85_90_91_994);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_61_71_79_64_995);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_60_62_80_996);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_966);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
    }
    event_36_6_end: ;
}
// Function purpose: generated callback event_func_1143 processes event block(s) 37_6. Actions/conditions:
//        37_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 12 more actions.
void Frames::event_func_1143()
{
    // event 37_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_; plus 12 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_37_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(185, str_map_tileset_766)) == (str_alca_139))) goto event_37_6_end;
        if (!((global_values->get(18)) == (1))) goto event_37_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_955);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_993);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_86_92_1001);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_59_60_61_62_63_64_71_76_77_78_79_80_82_83_84_85_90_91_994);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_59_61_71_79_64_1012);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_59_60_62_80_1013);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_966);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
    }
    event_37_6_end: ;
}
// Function purpose: generated callback event_func_1144 processes event block(s) 38_6. Actions/conditions:
//        38_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_41_42_48_49_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_72_73_; plus 14 more actions.
void Frames::event_func_1144()
{
    // event 38_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_41_42_48_49_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_72_73_; plus 14 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_38_6_end;
        if (!((global_values->get(18)) == (1))) goto event_38_6_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_38_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_41_42_48_49_1014);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_72_73_1015);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_81_82_83_84_85_92_1016);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_61_62_63_64_81_82_83_84_85_90_91_92_1017);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_61_64_82_92_1018);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_62_92_1019);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_65_66_67_68_69_997);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_56_90_91_1020);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_86_87_88_89_998);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(295, str_shadow_override_975, str_49_48_1021);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(296, str_nol7block_977, str_4_985);
    }
    event_38_6_end: ;
}
// Function purpose: generated callback event_func_1145 processes event block(s) 39_6. Actions/conditions:
//        39_6: sets ObstacleList1 to _6_7_8_9_10_11_12_13_14_15_16_17_18_19_21_22_23_25_; sets ObstacleList2 to
//        _27_29_30_31_32_33_34_35_36_37_39_40_42_43_44_46_49_50_; sets ObstacleList3 to
//        _52_53_54_55_56_57_58_59_60_61_62_63_64_65_66_67_72_74_75_; plus 15 more actions.
void Frames::event_func_1145()
{
    // event 39_6 : sets ObstacleList1 to _6_7_8_9_10_11_12_13_14_15_16_17_18_19_21_22_23_25_; sets ObstacleList2 to _27_29_30_31_32_33_34_35_36_37_39_40_42_43_44_46_49_50_; sets ObstacleList3 to _52_53_54_55_56_57_58_59_60_61_62_63_64_65_66_67_72_74_75_; plus 15 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_39_6_end;
        if (!((global_values->get(18)) == (1))) goto event_39_6_end;
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_39_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_6_7_8_9_10_11_12_13_14_15_16_17_18_19_21_22_23_25_1022);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_29_30_31_32_33_34_35_36_37_39_40_42_43_44_46_49_50_1023);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_56_57_58_59_60_61_62_63_64_65_66_67_72_74_75_1024);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_86_87_88_89_92_98_99_100_1025);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_6_7_8_9_10_11_14_17_18_22_24_25_27_31_33_34_35_36_39_42_43_50_52_53_56_58_59_60_61_62_63_65_66_75_76_77_78_79_80_84_87_89_99_100_1026);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_11_27_31_33_14_17_50_25_76_89_1027);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_58_59_63_66_80_79_62_65_81_67_64_24_84_87_84_1028);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(297, str_shadowcasters4_1029, str_81_67_64_88_83_1030);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_200_1031);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_6_7_1032);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_200_1031);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_200_1031);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(295, str_shadow_override_975, str_27_23_1033);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(296, str_nol7block_977, str_200_1031);
    }
    event_39_6_end: ;
}
// Function purpose: generated callback event_func_1146 processes event block(s) 40_6. Actions/conditions:
//        40_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_44_48_49_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_64_65_70_71_73_74_75_; plus 14 more actions.
void Frames::event_func_1146()
{
    // event 40_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_44_48_49_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_64_65_70_71_73_74_75_; plus 14 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_40_6_end;
        if (!((global_values->get(18)) == (1))) goto event_40_6_end;
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_40_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_44_48_49_1034);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_64_65_70_71_73_74_75_1035);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_86_87_88_89_92_93_94_95_96_97_98_99_100_1036);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_39_40_44_48_49_52_53_54_55_56_57_58_71_73_74_75_76_77_78_79_80_81_82_83_84_85_87_88_89_90_91_92_98_99_100_1037);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_71_79_78_75_1038);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_80_92_99_40_1039);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_66_67_68_69_1040);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_6_7_57_58_1041);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(295, str_shadow_override_975, str_60_59_70_94_95_96_97_1042);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(296, str_nol7block_977, str_4_985);
    }
    event_40_6_end: ;
}
// Function purpose: generated callback event_func_1147 processes event block(s) 41_6. Actions/conditions:
//        41_6: sets FEB16 to 1; sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets
//        ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_41_42_; plus 17 more actions.
void Frames::event_func_1147()
{
    // event 41_6 : sets FEB16 to 1; sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_41_42_; plus 17 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_41_6_end;
        if (!((global_values->get(18)) == (1))) goto event_41_6_end;
        if (!((global_strings->get(0)) == (str_pcpen_135))) goto event_41_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(298, str_feb16_1043, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_41_42_1044);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_62_63_64_72_73_74_75_1045);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_92_98_99_100_987);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_76_77_78_79_80_82_83_84_85_90_91_92_1046);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_78_79_92_1047);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_80_92_983);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_50_66_67_68_69_1048);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_5_6_7_17_58_990);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(295, str_shadow_override_975, str_62_63_72_73_74_75_98_99_100_39_64_1049);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(296, str_nol7block_977, str_4_74_978);
        set_width(1752, true);
        set_height(1745, true);
    }
    event_41_6_end: ;
}
// Function purpose: generated callback event_func_1148 processes event block(s) 42_6. Actions/conditions:
//        42_6: sets the target width; sets the target height; sets ObstacleList1 to
//        4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; plus 16 more actions.
void Frames::event_func_1148()
{
    // event 42_6 : sets the target width; sets the target height; sets ObstacleList1 to 4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; plus 16 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_42_6_end;
        if (!((global_values->get(18)) == (1))) goto event_42_6_end;
        if (!((global_strings->get(0)) == (str_tol_134))) goto event_42_6_end;
        set_width(1752, true);
        set_height(1745, true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_1050);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_30_31_32_33_34_35_36_37_38_39_40_41_42_47_48_1051);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_61_62_63_64_67_68_69_74_1052);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_86_92_1001);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_28_32_33_34_35_36_37_38_39_48_52_53_54_55_56_57_58_59_63_64_67_68_69_74_76_77_78_79_80_82_83_84_85_86_90_91_1053);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_74_78_79_64_67_1054);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_39_52_54_59_60_69_80_86_1055);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_94_1056);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(295, str_shadow_override_975, str_99_81_40_60_70_71_72_73_74_75_1057);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(296, str_nol7block_977, str_4_985);
    }
    event_42_6_end: ;
}
// Function purpose: generated callback event_func_1149 processes event block(s) 43_6. Actions/conditions:
//        43_6: sets ObstacleList1 to _4_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_49_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 15 more actions.
void Frames::event_func_1149()
{
    // event 43_6 : sets ObstacleList1 to _4_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_49_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_; plus 15 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_43_6_end;
        if (!((global_strings->get(0)) == (str_bc_133))) goto event_43_6_end;
        if (!((global_values->get(18)) == (1))) goto event_43_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_1058);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_39_40_41_42_48_49_992);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_73_74_75_957);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_92_93_94_95_96_97_99_1059);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_52_53_54_55_56_57_58_59_61_62_63_64_76_77_78_79_80_82_83_84_85_90_91_1060);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_53_55_61_79_64_1061);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_52_54_62_80_1062);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_65_66_67_68_69_997);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_6_7_16_17_1063);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_86_87_88_89_998);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(295, str_shadow_override_975, str_49_70_71_74_75_95_96_97_100_81_1064);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(296, str_nol7block_977, str_4_985);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(299, str_invisblock_1065, str_100_1066);
    }
    event_43_6_end: ;
}
// Function purpose: generated callback event_func_1150 processes event block(s) 44_6. Actions/conditions:
//        44_6: sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to
//        _27_28_29_30_31_32_33_34_35_36_37_38_41_42_49_; sets ObstacleList3 to
//        _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_74_; plus 20 more actions.
void Frames::event_func_1150()
{
    // event 44_6 : sets ObstacleList1 to _4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_; sets ObstacleList2 to _27_28_29_30_31_32_33_34_35_36_37_38_41_42_49_; sets ObstacleList3 to _52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_74_; plus 20 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_44_6_end;
        if (!((global_strings->get(0)) == (str_ccl_130))) goto event_44_6_end;
        if (!((global_values->get(18)) == (1))) goto event_44_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(284, str_obstaclelist1_952, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_22_23_24_25_953);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(285, str_obstaclelist2_954, str_27_28_29_30_31_32_33_34_35_36_37_38_41_42_49_1067);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(286, str_obstaclelist3_956, str_52_53_54_55_57_58_59_60_61_62_63_64_70_71_72_74_1068);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(287, str_obstaclelist4_958, str_76_77_78_79_80_81_82_83_84_85_86_92_1001);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, str_4_5_6_7_8_9_10_11_12_13_14_15_16_17_20_21_22_23_24_25_27_32_33_34_35_36_37_38_49_52_53_54_55_56_57_58_59_60_61_71_74_76_77_78_79_80_82_83_84_85_86_90_91_1069);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, str_10_23_27_38_49_53_55_59_61_71_74_79_1070);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, str_27_9_24_35_49_52_54_59_60_74_80_1071);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, str_0_19_49_50_66_67_68_69_966);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, str_5_6_7_16_17_58_968);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, str_20_21_56_90_91_970);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(295, str_shadow_override_975, str_27_62_63_64_81_95_1072);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(42, str_ccl_130, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(300, str_invisfloor_1073, str_98_1074);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(299, str_invisblock_1065, str_100_1066);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(301, str_overlapper_1075, str_99_1076);
        set_width(1752, true);
        set_height(1745, true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(230, str_sleighstage_840, 1);
    }
    event_44_6_end: ;
}
// Function purpose: generated callback event_func_1151 processes event block(s) 45_6. Actions/conditions:
//        45_6: sets ObstacleList to global_strings->get(11); sets ShadowCasters to global_strings->get(14); sets
//        ShadowCasters2 to global_strings->get(15); plus 11 more actions.
void Frames::event_func_1151()
{
    // event 45_6 : sets ObstacleList to global_strings->get(11); sets ShadowCasters to global_strings->get(14); sets ShadowCasters2 to global_strings->get(15); plus 11 more actions
    {
        if (!(group_load_map_from_file_1)) goto event_45_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(185, str_map_tileset_766)) == (str_new_550))) goto event_45_6_end;
        if (!((global_values->get(18)) == (2))) goto event_45_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(302, str_obstaclelist_1077, global_strings->get(11));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(288, str_shadowcasters_960, global_strings->get(14));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(289, str_shadowcasters2_962, global_strings->get(15));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(290, str_shadowcasters3_964, global_strings->get(16));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(23, str_outsidegroundtiles_485, global_strings->get(18));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(291, str_chippablewalls_967, global_strings->get(13));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(292, str_cuttablefences_969, global_strings->get(12));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(293, str_ug_blocks_971, str_5_22_23_24_25_58_972);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(294, str_rooffall_973, str_0_79_83_85_87_88_89_974);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(296, str_nol7block_977, str_327_1078);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(295, str_shadow_override_975, global_strings->get(17));
    }
    event_45_6_end: ;
}
void Frames::loop_map_vals_6()
{
    event_func_1134();
    event_func_1135();
    event_func_1136();
    event_func_1137();
    event_func_1138();
    event_func_1139();
    event_func_1140();
    event_func_1141();
    event_func_1142();
    event_func_1143();
    event_func_1144();
    event_func_1145();
    event_func_1146();
    event_func_1147();
    event_func_1148();
    event_func_1149();
    event_func_1150();
    event_func_1151();
}
// Function purpose: generated callback event_func_1152 processes event block(s) 539_6. Actions/conditions:
//        539_6: sets rts to playerBase->alterables->values.get(8)*2; sets dps to
//        playerBase->alterables->values.get(9)*2; sets tni to playerBase->alterables->values.get(10)*2.
void Frames::event_func_1152()
{
    // event 539_6 : sets rts to playerBase->alterables->values.get(8)*2; sets dps to playerBase->alterables->values.get(9)*2; sets tni to playerBase->alterables->values.get(10)*2
    {
        if (!(group_setup_1)) goto event_539_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(222, str_rts_829, ((Active*)get_instance(playerBase_instances))->alterables->values.get(8)*2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(223, str_dps_830, ((Active*)get_instance(playerBase_instances))->alterables->values.get(9)*2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(224, str_tni_831, ((Active*)get_instance(playerBase_instances))->alterables->values.get(10)*2);
    }
    event_539_6_end: ;
}
void Frames::loop_set_hax_vals_6()
{
    event_func_1152();
}
// Function purpose: generated callback event_func_1153 processes event block(s) 4394_6. Actions/conditions:
//        4394_6: sets DestX to ((Active*)get_single(waypointtowerent_341_instances,
//        default_active_instance))->get_x(); sets DestY to ((Active*)get_single(waypointtowerent_341_instances,
//        default_active_instance))->get_y().
void Frames::event_func_1153()
{
    // event 4394_6 : sets DestX to ((Active*)get_single(waypointtowerent_341_instances, default_active_instance))->get_x(); sets DestY to ((Active*)get_single(waypointtowerent_341_instances, default_active_instance))->get_y()
    {
        if (!(group_guard_towers_1)) goto event_4394_6_end;
        waypointtowerent_341_instances.clear_selection();
        for (ObjectIterator it(waypointtowerent_341_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(303, str_currguard_1079)))) { it.deselect(); continue; }
        }
        if (!waypointtowerent_341_instances.has_selection()) goto event_4394_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(304, str_destx_1080, ((Active*)get_single(waypointtowerent_341_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(305, str_desty_1081, ((Active*)get_single(waypointtowerent_341_instances, default_active_instance))->get_y());
    }
    event_4394_6_end: ;
}
// Function purpose: generated callback event_func_1154 processes event block(s) 4395_6. Actions/conditions:
//        4395_6: sets the selected object's numeric value to gameVariables->get_value(304, DestX)+8; sets the
//        selected object's numeric value to gameVariables->get_value(305, DestY)+8; enables flag 5552 (guard
//        has an assigned pathfinding destination) on the selected object.
void Frames::event_func_1154()
{
    // event 4395_6 : sets the selected object's numeric value to gameVariables->get_value(304, DestX)+8; sets the selected object's numeric value to gameVariables->get_value(305, DestY)+8; enables flag 5552 (guard has an assigned pathfinding destination) on the selected object
    {
        if (!(group_guard_towers_1)) goto event_4395_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(303, str_currguard_1079)))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_4395_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(304, str_destx_1080)+8);
            ((Active*)*it)->alterables->values.set(24, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(305, str_desty_1081)+8);
            ((Active*)*it)->alterables->flags.enable(5552);
        }
    }
    event_4395_6_end: ;
}
void Frames::loop_back2tower_6()
{
    event_func_1153();
    event_func_1154();
}
// Function purpose: generated callback event_func_1155 processes event block(s) 4248_6. Actions/conditions:
//        4248_6: sets a game or interface text string; removes the selected object.
void Frames::event_func_1155()
{
    // event 4248_6 : sets a game or interface text string; removes the selected object
    {
        if (!(group_loops_1)) goto event_4248_6_end;
        hudItem_instances.clear_selection();
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
        }
        if (!hudItem_instances.has_selection()) goto event_4248_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inv_512+number_to_string(((Active*)get_single(hudItem_instances, default_active_instance))->alterables->values.get(1)), empty_string);
        for (ObjectIterator it(hudItem_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4248_6_end: ;
}
// Function purpose: generated callback event_func_1156 processes event block(s) 4249_6. Actions/conditions:
//        4249_6: sets the selected object's numeric value to 0.
void Frames::event_func_1156()
{
    // event 4249_6 : sets the selected object's numeric value to 0
    {
        if (!(group_loops_1)) goto event_4249_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_inven_820))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_selectedslot_514)))) { it.deselect(); continue; }
        }
        if (!itemSlot_instances.has_selection()) goto event_4249_6_end;
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_4249_6_end: ;
}
void Frames::loop_inv_remove_6()
{
    event_func_1155();
    event_func_1156();
}
// Function purpose: generated callback event_func_1157 processes event block(s) 731_6. Actions/conditions:
//        731_6: creates a buttons 245 object; positions the target object; positions the target object; plus 7 more
//        actions.
void Frames::event_func_1157()
{
    // event 731_6 : creates a buttons 245 object; positions the target object; positions the target object; plus 7 more actions
    {
        if (!(group_code_1 && group_code_dlc_tol_1)) goto event_731_6_end;
        FrameObject * single_instance_731_6_0; single_instance_731_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 65, parent->y + 35), parent->layer);
                if (single_instance_731_6_0 == NULL)
                    single_instance_731_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_731_6_0))->set_x(((Active*)get_instance(dialogPanel_instances))->get_box_index(2)-90);
        ((Active*)((Active*)single_instance_731_6_0))->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(3)-25);
        ((Active*)((Active*)single_instance_731_6_0))->force_animation(43);
        FrameObject * single_instance_731_6_1; single_instance_731_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_731_6_0)->x + 3, ((Active*)single_instance_731_6_0)->y + 3), ((Active*)single_instance_731_6_0)->layer);
            if (single_instance_731_6_1 == NULL)
                single_instance_731_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_731_6_1))->blend_color.set(Color(150, 150, 150));
        ((Text*)((Text*)single_instance_731_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
    }
    event_731_6_end: ;
}
void Frames::loop_letter_tol_6()
{
    event_func_1157();
}
// Function purpose: generated callback event_func_1158 processes event block(s) 2094_6. Actions/conditions:
//        2094_6: stops the object's movement.
void Frames::event_func_1158()
{
    // event 2094_6 : stops the object's movement
    {
        if (!(group_code_1)) goto event_2094_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_halt_all_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_2094_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_2094_6_end: ;
}
// Function purpose: generated callback event_func_1159 processes event block(s) 2095_6. Actions/conditions:
//        2095_6: stops the object's movement.
void Frames::event_func_1159()
{
    // event 2095_6 : stops the object's movement
    {
        if (!(group_code_1)) goto event_2095_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_halt_all_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_2095_6_end;
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_2095_6_end: ;
}
void Frames::loop_halt_all_6()
{
    event_func_1158();
    event_func_1159();
}
// Function purpose: generated callback event_func_1160 processes event block(s) 4057_6. Actions/conditions:
//        4057_6: removes the selected object.
void Frames::event_func_1160()
{
    // event 4057_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4057_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_4057_6_end;
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4057_6_end: ;
}
// Function purpose: generated callback event_func_1161 processes event block(s) 4058_6. Actions/conditions:
//        4058_6: sets OutfitShort to 4; sets Outfit to 4_100; creates a outfitinmate 249 object; plus 5 more actions.
void Frames::event_func_1161()
{
    // event 4058_6 : sets OutfitShort to 4; sets Outfit to 4_100; creates a outfitinmate 249 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4058_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) != (str_camp_504))) goto event_4058_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_4058_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_4058_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_4_100_506);
        FrameObject * single_instance_4058_6_0; single_instance_4058_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmate_249(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4058_6_0 == NULL)
                    single_instance_4058_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4058_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_4058_6_0))->alterables->values.set(25, -1);
    }
    event_4058_6_end: ;
}
// Function purpose: generated callback event_func_1162 processes event block(s) 4059_6. Actions/conditions:
//        4059_6: sets OutfitShort to 210; sets Outfit to 210_100; creates a outfitinmateescteam 481 object; plus 5
//        more actions.
void Frames::event_func_1162()
{
    // event 4059_6 : sets OutfitShort to 210; sets Outfit to 210_100; creates a outfitinmateescteam 481 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4059_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (1))) goto event_4059_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 210);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_210_100_508);
        FrameObject * single_instance_4059_6_0; single_instance_4059_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmateescteam_481(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4059_6_0 == NULL)
                    single_instance_4059_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4059_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_4059_6_0))->alterables->values.set(25, -1);
    }
    event_4059_6_end: ;
}
// Function purpose: generated callback event_func_1163 processes event block(s) 4060_6. Actions/conditions:
//        4060_6: sets OutfitShort to 215; sets Outfit to 215_100; creates a outfitinmatebond 486 object; plus 5 more
//        actions.
void Frames::event_func_1163()
{
    // event 4060_6 : sets OutfitShort to 215; sets Outfit to 215_100; creates a outfitinmatebond 486 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4060_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_dtaf_137)) == (1))) goto event_4060_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 215);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_215_100_509);
        FrameObject * single_instance_4060_6_0; single_instance_4060_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmatebond_486(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4060_6_0 == NULL)
                    single_instance_4060_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4060_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_4060_6_0))->alterables->values.set(25, -1);
    }
    event_4060_6_end: ;
}
// Function purpose: generated callback event_func_1164 processes event block(s) 4061_6. Actions/conditions:
//        4061_6: sets OutfitShort to 238; sets Outfit to 238_100; creates a outfitinmatess 503 object; plus 5 more
//        actions.
void Frames::event_func_1164()
{
    // event 4061_6 : sets OutfitShort to 238; sets Outfit to 238_100; creates a outfitinmatess 503 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4061_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_4061_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 238);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_238_100_510);
        FrameObject * single_instance_4061_6_0; single_instance_4061_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmatess_503(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4061_6_0 == NULL)
                    single_instance_4061_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4061_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_4061_6_0))->alterables->values.set(25, -1);
    }
    event_4061_6_end: ;
}
// Function purpose: generated callback event_func_1165 processes event block(s) 4062_6. Actions/conditions:
//        4062_6: sets OutfitShort to 238; sets Outfit to 238_100; creates a outfitinmatess 503 object; plus 5 more
//        actions.
void Frames::event_func_1165()
{
    // event 4062_6 : sets OutfitShort to 238; sets Outfit to 238_100; creates a outfitinmatess 503 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4062_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (1))) goto event_4062_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(31, str_outfitshort_494, 238);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_outfit_505, str_238_100_510);
        FrameObject * single_instance_4062_6_0; single_instance_4062_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmatess_503(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_4062_6_0 == NULL)
                    single_instance_4062_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_4062_6_0))->alterables->values.set(0, -1);
        ((Active*)((Active*)single_instance_4062_6_0))->alterables->values.set(25, -1);
    }
    event_4062_6_end: ;
}
// Function purpose: generated callback event_func_1166 processes event block(s) 4063_6. Actions/conditions:
//        4063_6: sets OutfitShort to 127; sets Outfit to 127_100; adds a outfitpow 376 instance; plus 5 more actions.
void Frames::event_func_1166()
{
    // event 4063_6 : sets OutfitShort to 127; sets Outfit to 127_100; adds a outfitpow 376 instance; plus 5 more actions
    {
        if (!(group_code_1 && group_code_caught_solitary_1)) goto event_4063_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(43, str_maproutine_503)) == (str_camp_504))) goto event_4063_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_4063_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_ccl_130)) == (0))) goto event_4063_6_end;
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
            ((Active*)*it)->alterables->values.set(0, -1);
            ((Active*)*it)->alterables->values.set(25, -1);
        }
    }
    event_4063_6_end: ;
}
void Frames::loop_sol_check_outfit_6()
{
    event_func_1160();
    event_func_1161();
    event_func_1162();
    event_func_1163();
    event_func_1164();
    event_func_1165();
    event_func_1166();
}
// Function purpose: generated callback event_func_1167 processes event block(s) 2222_6. Actions/conditions:
//        2222_6: sets the object position in the world.
void Frames::event_func_1167()
{
    // event 2222_6 : sets the object position in the world
    {
        if (!(group_code_1)) goto event_2222_6_end;
        qualifier_16.clear_selection();
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_16.has_selection()) goto event_2222_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_2222_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2222_6_0: ;
        }
        for (QualifierIterator it(qualifier_16); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerBase_instances));
            if (parent == NULL) goto pos_end_2222_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2222_6_1: ;
        }
    }
    event_2222_6_end: ;
}
void Frames::loop_position_6()
{
    event_func_1167();
}
// Function purpose: generated callback event_func_1168 processes event block(s) 2418_6. Actions/conditions:
//        2418_6: checks scene is active; skips if the event-specific game state condition is met; the event-specific
//        game state condition is met; this handler gates a game ev.
void Frames::event_func_1168()
{
    // event 2418_6 : checks scene is active; skips if the event-specific game state condition is met; the event-specific game state condition is met; this handler gates a game ev
    {
        if (!(group_code_1)) goto event_2418_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(100))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2418_6_end;
        if (!((((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->get_box_index(2)) < (frame_right()))) goto event_2418_6_end;
            loop_tip_left_running = false;
    
    }
    event_2418_6_end: ;
}
// Function purpose: generated callback event_func_1169 processes event block(s) 2420_6. Actions/conditions:
//        2420_6: sets the selected object's vertical position to selected object->get_y()-1.
void Frames::event_func_1169()
{
    // event 2420_6 : sets the selected object's vertical position to selected object->get_y()-1
    {
        if (!(group_code_1)) goto event_2420_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(100))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2420_6_end;
        if (!((((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->get_box_index(3)) >= (frame_bottom()))) goto event_2420_6_end;
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_y(((SystemBox*)*it)->get_y()-1);
        }
    }
    event_2420_6_end: ;
}
// Function purpose: generated callback event_func_1170 processes event block(s) 2421_6. Actions/conditions:
//        2421_6: checks scene is active; skips if the event-specific game state condition is met; the event-specific
//        game state condition is met; this handler gates a game ev.
void Frames::event_func_1170()
{
    // event 2421_6 : checks scene is active; skips if the event-specific game state condition is met; the event-specific game state condition is met; this handler gates a game ev
    {
        if (!(group_code_1)) goto event_2421_6_end;
        activesystembox_450_instances.clear_selection();
        for (ObjectIterator it(activesystembox_450_instances); !it.end(); ++it) {
            if (!(((SystemBox*)(*it))->alterables->flags.is_on(100))) { it.deselect(); continue; }
        }
        if (!activesystembox_450_instances.has_selection()) goto event_2421_6_end;
        if (!((((SystemBox*)get_single(activesystembox_450_instances, default_systembox_instance))->get_box_index(3)) < (frame_bottom()))) goto event_2421_6_end;
            loop_tip_up_running = false;
    
    }
    event_2421_6_end: ;
}
void Frames::loop_tip_up_6()
{
    event_func_1168();
    event_func_1169();
    event_func_1170();
}
// Function purpose: generated callback event_func_1171 processes event block(s) 3487_6. Actions/conditions:
//        3487_6: creates a dust 223 object; creates a guardalert 266 object; moves the target object to a layer; plus
//        6 more actions.
void Frames::event_func_1171()
{
    // event 3487_6 : creates a dust 223 object; creates a guardalert 266 object; moves the target object to a layer; plus 6 more actions
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3487_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3487_6_end;
        ventCover_instances.clear_selection();
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!ventCover_instances.has_selection()) goto event_3487_6_end;
        FrameObject * single_instance_3487_6_0; single_instance_3487_6_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(ventCover_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dust_223(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_3487_6_0 == NULL)
                    single_instance_3487_6_0 = new_obj;
            }
        }
        FrameObject * single_instance_3487_6_1; single_instance_3487_6_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(ventCover_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_guardalert_266(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_3487_6_1 == NULL)
                    single_instance_3487_6_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3487_6_1))->set_layer(2-1);
        ((Active*)((Active*)single_instance_3487_6_1))->alterables->strings.set(0, str_openvent_908);
        for (ObjectIterator it(ventCover_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        media.play_id(SOUND_PICKUP_3, 1-1);
    }
    event_3487_6_end: ;
}
void Frames::loop_grab_vent_check_6()
{
    event_func_1171();
}
// Function purpose: generated callback event_func_1172 processes event block(s) 3292_6. Actions/conditions:
//        3292_6: removes the selected object.
void Frames::event_func_1172()
{
    // event 3292_6 : removes the selected object
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3292_6_end;
        guardalert_266_instances.clear_selection();
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(306, str_ventx_1082)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(307, str_venty_1083)+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) == (str_openvent_908))) { it.deselect(); continue; }
        }
        if (!guardalert_266_instances.has_selection()) goto event_3292_6_end;
        for (ObjectIterator it(guardalert_266_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3292_6_end: ;
}
void Frames::loop_ventremovealert_6()
{
    event_func_1172();
}
// Function purpose: generated callback event_func_1173 processes event block(s) 518_6. Actions/conditions:
//        518_6: sets cX to ((Active*)get_single(canteenchair_312_instances,
//        default_active_instance))->get_x()/MathHelper()/16; sets cY to
//        (((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_y()/MathHelper()/16)-1.
void Frames::event_func_1173()
{
    // event 518_6 : sets cX to ((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_x()/MathHelper()/16; sets cY to (((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_y()/MathHelper()/16)-1
    {
        if (!(group_setup_1)) goto event_518_6_end;
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_chair_dir_index+1))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_518_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(308, str_cx_1084, ((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_x()/MathHelper()/16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(309, str_cy_1085, (((Active*)get_single(canteenchair_312_instances, default_active_instance))->get_y()/MathHelper()/16)-1);
    }
    event_518_6_end: ;
}
// Function purpose: generated callback event_func_1174 processes event block(s) 519_6. Actions/conditions:
//        519_6: sets the selected object's direction to 8.
void Frames::event_func_1174()
{
    // event 519_6 : sets the selected object's direction to 8
    {
        if (!(group_setup_1)) goto event_519_6_end;
        if (!((((ArrayObject*)get_instance(groundobjects_321_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(308, str_cx_1084), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(309, str_cy_1085), 1)) == (13))) goto event_519_6_end;
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_chair_dir_index+1))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_519_6_end;
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_519_6_end: ;
}
// Function purpose: generated callback event_func_1175 processes event block(s) 520_6. Actions/conditions:
//        520_6: sets the selected object's direction to 24; increments lmao by 1.
void Frames::event_func_1175()
{
    // event 520_6 : sets the selected object's direction to 24; increments lmao by 1
    {
        if (!(group_setup_1)) goto event_520_6_end;
        if (!((((ArrayObject*)get_instance(groundobjects_321_instances))->get_value(((AssociateArray*)get_instance(gameVariables_instances))->get_value(308, str_cx_1084), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(309, str_cy_1085), 1)) != (13))) goto event_520_6_end;
        canteenchair_312_instances.clear_selection();
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_chair_dir_index+1))) { it.deselect(); continue; }
        }
        if (!canteenchair_312_instances.has_selection()) goto event_520_6_end;
        for (ObjectIterator it(canteenchair_312_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(310, str_lmao_1086, 1);
    }
    event_520_6_end: ;
}
void Frames::loop_chair_dir_6()
{
    event_func_1173();
    event_func_1174();
    event_func_1175();
}
// Function purpose: generated callback event_func_1176 processes event block(s) 542_6. Actions/conditions:
//        542_6: creates a stash 420 object; sets the target object's direction; moves the selected object behind
//        other objects; plus 5 more actions.
void Frames::event_func_1176()
{
    // event 542_6 : creates a stash 420 object; sets the target object's direction; moves the selected object behind other objects; plus 5 more actions
    {
        if (!(group_setup_1)) goto event_542_6_end;
        if (!((powerupplot_353_instances.size()) > (0))) goto event_542_6_end;
        powerupplot_353_instances.clear_selection();
        FrameObject * single_instance_542_6_0; single_instance_542_6_0 = pick_random(powerupplot_353_instances);
        if (single_instance_542_6_0 == NULL) goto event_542_6_end;
        FrameObject * single_instance_542_6_1; single_instance_542_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_stash_420(((Active*)single_instance_542_6_0)->x + 0, ((Active*)single_instance_542_6_0)->y + 0), ((Active*)single_instance_542_6_0)->layer);
            if (single_instance_542_6_1 == NULL)
                single_instance_542_6_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_542_6_1))->set_direction(0);
        ((Active*)((Active*)single_instance_542_6_1))->move_back();
        ((Active*)((Active*)single_instance_542_6_1))->alterables->values.set(0, stash_420_instances.size());
        ((Active*)((Active*)single_instance_542_6_0))->destroy();
    }
    event_542_6_end: ;
}
void Frames::loop_add_craftnotes_6()
{
    event_func_1176();
}
// Function purpose: generated callback event_func_1177 processes event block(s) 1045_6. Actions/conditions:
//        1045_6: sets EndString to My boys found a door unlocked that shouldn't have been and we've linked it back to
//        you..
void Frames::event_func_1177()
{
    // event 1045_6 : sets EndString to My boys found a door unlocked that shouldn't have been and we've linked it back to you.
    {
        if (!(group_code_1 && group_code_pathfinding_guards_policing_1 && group_code_pathfinding_guards_policing_see_unlocked_door_1)) goto event_1045_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(0, str_guardsees_433)) > (0))) goto event_1045_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_1045_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, str_my_boys_found_a_door_unlocked_that_shouldn_t_have_been_and_we_ve_linked_it_back_to_you_1087);
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
    event_1045_6_end: ;
}
void Frames::loop_guard_sees_unlocked_6()
{
    event_func_1177();
}
// Function purpose: generated callback event_func_1178 processes event block(s) 3489_6. Actions/conditions:
//        3489_6: sets BedDummy to 0; removes the selected object.
void Frames::event_func_1178()
{
    // event 3489_6 : sets BedDummy to 0; removes the selected object
    {
        if (!(group_code_1 && group_code_right_clicked_1)) goto event_3489_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(89, str_addsuccess_596)) == (1))) goto event_3489_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(311, str_beddummy_1088, 0);
        dummies_374_instances.clear_selection();
        for (ObjectIterator it(dummies_374_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_3489_6_end: ;
}
void Frames::loop_grabdummy_check_6()
{
    event_func_1178();
}
// Function purpose: generated callback event_func_1179 processes event block(s) 3553_6. Actions/conditions:
//        3553_6: sets the object position in the world; sets the selected object's numeric value to
//        ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_box_index(0)+13;
//        sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index,
//        default_active_instance))->get_box_index(1)+7; plus 5 more actions.
void Frames::event_func_1179()
{
    // event 3553_6 : sets the object position in the world; sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_box_index(0)+13; sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_box_index(1)+7; plus 5 more actions
    {
        if (!(group_code_1)) goto event_3553_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_put_to_bed_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3553_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_put_to_bed_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_3553_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_put_to_bed_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_3553_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_3553_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 13, parent->get_y() + 7);
            pos_end_3553_6_0: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_box_index(0)+13);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_box_index(1)+7);
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_3553_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3553_6_1: ;
        }
    }
    event_3553_6_end: ;
}
// Function purpose: generated callback event_func_1180 processes event block(s) 3554_6. Actions/conditions:
//        3554_6: sets the object position in the world; sets the selected object's numeric value to
//        ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_box_index(0)+8;
//        sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index,
//        default_active_instance))->get_box_index(1)+10; plus 5 more actions.
void Frames::event_func_1180()
{
    // event 3554_6 : sets the object position in the world; sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_box_index(0)+8; sets the selected object's numeric value to ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_box_index(1)+10; plus 5 more actions
    {
        if (!(group_code_1)) goto event_3554_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_put_to_bed_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_3554_6_end;
        inmateBed_instances.clear_selection();
        for (ObjectIterator it(inmateBed_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_put_to_bed_index+1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!inmateBed_instances.has_selection()) goto event_3554_6_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_put_to_bed_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_3554_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBed_instances, it.current_index));
            if (parent == NULL) goto pos_end_3554_6_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 10);
            pos_end_3554_6_0: ;
        }
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_box_index(0)+8);
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(inmateBed_instances, it.current_index, default_active_instance))->get_box_index(1)+10);
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(inmateBase_instances, it.current_index));
            if (parent == NULL) goto pos_end_3554_6_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_3554_6_1: ;
        }
    }
    event_3554_6_end: ;
}
void Frames::loop_put_to_bed_6()
{
    event_func_1179();
    event_func_1180();
}
// Function purpose: generated callback event_func_1181 processes event block(s) 941_6. Actions/conditions:
//        941_6: removes the selected object; hides a game layer.
void Frames::event_func_1181()
{
    // event 941_6 : removes the selected object; hides a game layer
    {
        if (!(group_code_1)) goto event_941_6_end;
        ventDarkness_instances.clear_selection();
        for (ObjectIterator it(ventDarkness_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(4-1);
    }
    event_941_6_end: ;
}
void Frames::loop_hide_vent_layer_6()
{
    event_func_1181();
}
// Function purpose: generated callback event_func_1182 processes event block(s) 3004_6. Actions/conditions:
//        3004_6: creates a buttons 245 object; sets the object's animation to 25; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_1182()
{
    // event 3004_6 : creates a buttons 245 object; sets the object's animation to 25; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3004_6_end;
        FrameObject * single_instance_3004_6_0; single_instance_3004_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + -105, parent->y + 40), parent->layer);
                if (single_instance_3004_6_0 == NULL)
                    single_instance_3004_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3004_6_0))->force_animation(25);
        FrameObject * single_instance_3004_6_1; single_instance_3004_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3004_6_0)->x + -3, ((Active*)single_instance_3004_6_0)->y + 3), ((Active*)single_instance_3004_6_0)->layer);
            if (single_instance_3004_6_1 == NULL)
                single_instance_3004_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_3004_6_1))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_3004_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_5_164)));
    }
    event_3004_6_end: ;
}
// Function purpose: generated callback event_func_1183 processes event block(s) 3005_6. Actions/conditions:
//        3005_6: creates a buttons 245 object; sets the object's animation to 26; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_1183()
{
    // event 3005_6 : creates a buttons 245 object; sets the object's animation to 26; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3005_6_end;
        FrameObject * single_instance_3005_6_0; single_instance_3005_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + -32, parent->y + 40), parent->layer);
                if (single_instance_3005_6_0 == NULL)
                    single_instance_3005_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3005_6_0))->force_animation(26);
        FrameObject * single_instance_3005_6_1; single_instance_3005_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3005_6_0)->x + -3, ((Active*)single_instance_3005_6_0)->y + 3), ((Active*)single_instance_3005_6_0)->layer);
            if (single_instance_3005_6_1 == NULL)
                single_instance_3005_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_3005_6_1))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_3005_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_3_158)));
    }
    event_3005_6_end: ;
}
// Function purpose: generated callback event_func_1184 processes event block(s) 3006_6. Actions/conditions:
//        3006_6: creates a buttons 245 object; sets the object's animation to 27; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_1184()
{
    // event 3006_6 : creates a buttons 245 object; sets the object's animation to 27; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_3006_6_end;
        FrameObject * single_instance_3006_6_0; single_instance_3006_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 39, parent->y + 40), parent->layer);
                if (single_instance_3006_6_0 == NULL)
                    single_instance_3006_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_3006_6_0))->force_animation(27);
        FrameObject * single_instance_3006_6_1; single_instance_3006_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_3006_6_0)->x + -3, ((Active*)single_instance_3006_6_0)->y + 3), ((Active*)single_instance_3006_6_0)->layer);
            if (single_instance_3006_6_1 == NULL)
                single_instance_3006_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_3006_6_1))->blend_color.set(Color(98, 154, 3));
        ((Text*)((Text*)single_instance_3006_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_4_161)));
    }
    event_3006_6_end: ;
}
void Frames::loop_mish_setup_6()
{
    event_func_1182();
    event_func_1183();
    event_func_1184();
}
// Function purpose: generated callback event_func_1185 processes event block(s) 1197_6. Actions/conditions:
//        1197_6: sets InmateSees to 1; sets the selected object's layer to 2-1; sets the selected object's horizontal
//        position to gameVariables->get_value(312, InmateX); plus 6 more actions.
void Frames::event_func_1185()
{
    // event 1197_6 : sets InmateSees to 1; sets the selected object's layer to 2-1; sets the selected object's horizontal position to gameVariables->get_value(312, InmateX); plus 6 more actions
    {
        if (!(group_code_1)) goto event_1197_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(107, str_inmatesees_664, 1);
        ((Active*)get_instance(los_198_instances))->set_layer(2-1);
        ((Active*)get_instance(los_198_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(312, str_inmatex_1090));
        ((Active*)get_instance(los_198_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(313, str_inmatey_1091));
        ((Active*)get_instance(los_198_instances))->set_x_scale(get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(312, str_inmatex_1090), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(313, str_inmatey_1091), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)));
        ((Active*)get_instance(los_198_instances))->set_angle(get_angle_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(312, str_inmatex_1090), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(313, str_inmatey_1091), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663)), 0);
    }
    event_1197_6_end: ;
}
// Function purpose: generated callback event_func_1186 processes event block(s) 1198_6. Actions/conditions:
//        1198_6: sets InmateSees to 0.
void Frames::event_func_1186()
{
    // event 1198_6 : sets InmateSees to 0
    {
        if (!(group_code_1)) goto event_1198_6_end;
        los_198_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(los_198_instances, qualifier_19)) goto event_1198_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(107, str_inmatesees_664, 0);
    }
    event_1198_6_end: ;
}
// Function purpose: generated callback event_func_1187 processes event block(s) 1199_6. Actions/conditions:
//        1199_6: sets InmateSees to 0.
void Frames::event_func_1187()
{
    // event 1199_6 : sets InmateSees to 0
    {
        if (!(group_code_1)) goto event_1199_6_end;
        if (!(((Active*)get_instance(los_198_instances))->overlaps_background())) goto event_1199_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(107, str_inmatesees_664, 0);
    }
    event_1199_6_end: ;
}
// Function purpose: generated callback event_func_1188 processes event block(s) 1200_6. Actions/conditions:
//        1200_6: sets InmateSees to 0.
void Frames::event_func_1188()
{
    // event 1200_6 : sets InmateSees to 0
    {
        if (!(group_code_1)) goto event_1200_6_end;
        los_198_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(los_198_instances, qualifier_8)) goto event_1200_6_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_1200_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(107, str_inmatesees_664, 0);
    }
    event_1200_6_end: ;
}
void Frames::loop_inmate_los_6()
{
    event_func_1185();
    event_func_1186();
    event_func_1187();
    event_func_1188();
}
// Function purpose: generated callback event_func_1189 processes event block(s) 1133_6. Actions/conditions:
//        1133_6: sets EndString to Caught entry 12.
void Frames::event_func_1189()
{
    // event 1133_6 : sets EndString to Caught entry 12
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1133_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(314, str_tdist_nearestid_1092)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2055))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto event_1133_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_endstring_435, ((INI*)get_instance(translationData_instances))->get_string(str_caught_436, str_12_334));
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
    event_1133_6_end: ;
}
void Frames::loop_tower_hole_6()
{
    event_func_1189();
}
// Function purpose: generated callback event_func_1190 processes event block(s) 547_6. Actions/conditions:
//        547_6: splits saved text into fields; sets the selected object's string to stringtokenizer_81->get(0); sets
//        the selected object's numeric value to string_to_number(stringtokenizer_81->get(1)); plus 7 more actions.
void Frames::event_func_1190()
{
    // event 547_6 : splits saved text into fields; sets the selected object's string to stringtokenizer_81->get(0); sets the selected object's numeric value to string_to_number(stringtokenizer_81->get(1)); plus 7 more actions
    {
        if (!(group_setup_1)) goto event_547_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_load_saved_cons_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_547_6_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(saving_350_instances))->get_string_default(str_inmates_519, number_to_string(loop_load_saved_cons_index+1), empty_string), str__254);
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0));
            ((Active*)*it)->alterables->values.set(8, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)));
            ((Active*)*it)->alterables->values.set(9, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)));
            ((Active*)*it)->alterables->values.set(5, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)));
            ((Active*)*it)->alterables->values.set(12, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)));
            ((Active*)*it)->alterables->strings.set(1, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(7));
        }
    }
    event_547_6_end: ;
}
// Function purpose: generated callback event_func_1191 processes event block(s) 548_6. Actions/conditions:
//        548_6: enables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object.
void Frames::event_func_1191()
{
    // event 548_6 : enables flag 2001 (NPC defeated or knocked-out state; persisted in saves) on the selected object
    {
        if (!(group_setup_1)) goto event_548_6_end;
        if (!((string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(5))) == (1))) goto event_548_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_load_saved_cons_index+1))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_548_6_end;
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2001);
        }
    }
    event_548_6_end: ;
}
// Function purpose: generated callback event_func_1192 processes event block(s) 549_6. Actions/conditions:
//        549_6: adds a markervendor 332 instance; sets the selected object's numeric value to
//        ((Active*)get_single(inmateBase_instances, it.current_index,
//        default_active_instance))->alterables->values.get(0).
void Frames::event_func_1192()
{
    // event 549_6 : adds a markervendor 332 instance; sets the selected object's numeric value to ((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->values.get(0)
    {
        if (!(group_setup_1)) goto event_549_6_end;
        inmateBase_instances.clear_selection();
        for (ObjectIterator it(inmateBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_load_saved_cons_index+1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(1)) != (str_0_0_0_0_734))) { it.deselect(); continue; }
        }
        if (!inmateBase_instances.has_selection()) goto event_549_6_end;
        markervendor_332_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_markervendor_332(0, 0), 1);
            markervendor_332_instances.add_back();
        }
        for (ObjectIterator it(markervendor_332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(inmateBase_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
    }
    event_549_6_end: ;
}
void Frames::loop_load_saved_cons_6()
{
    event_func_1190();
    event_func_1191();
    event_func_1192();
}
// Function purpose: generated callback event_func_1193 processes event block(s) 3198_6. Actions/conditions:
//        3198_6: unlocks the VoiceReason achievement.
void Frames::event_func_1193()
{
    // event 3198_6 : unlocks the VoiceReason achievement
    {
        if (!(group_code_1 && group_code_left_clicked_1 && group_code_left_clicked_dtaf_1)) goto event_3198_6_end;
        if (((SteamObject*)get_instance(steamworks2_469_instances))->is_achievement_unlocked(str_voicereason_1093)) goto event_3198_6_end;
        ((SteamObject*)get_instance(steamworks2_469_instances))->unlock_achievement(str_voicereason_1093);
    }
    event_3198_6_end: ;
}
void Frames::loop_dtaf_achieve_voice_6()
{
    event_func_1193();
}
// Function purpose: generated callback event_func_1194 processes event block(s) 771_6. Actions/conditions:
//        771_6: sets the selected object's direction to 0; removes the selected object.
void Frames::event_func_1194()
{
    // event 771_6 : sets the selected object's direction to 0; removes the selected object
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_771_6_end;
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        helpTopicCursor_instances.clear_selection();
        for (ObjectIterator it(helpTopicCursor_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_771_6_end: ;
}
// Function purpose: generated callback event_func_1195 processes event block(s) 772_6. Actions/conditions:
//        772_6: creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5
//        more actions.
void Frames::event_func_1195()
{
    // event 772_6 : creates a dchar 214 object; positions the target object; updates a value on the target object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_772_6_end;
        FrameObject * single_instance_772_6_0; single_instance_772_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dchar_214(parent->x + 0, parent->y + -56), parent->layer);
                if (single_instance_772_6_0 == NULL)
                    single_instance_772_6_0 = new_obj;
            }
        }
        ((Text*)((Text*)single_instance_772_6_0))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_772_6_0)), frame_left())+6);
        ((Text*)((Text*)single_instance_772_6_0))->blend_color.set(Color(255, 128, 0));
        ((Text*)((Text*)single_instance_772_6_0))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_5_164)));
        ((Text*)((Text*)single_instance_772_6_0))->set_bold(1);
    }
    event_772_6_end: ;
}
// Function purpose: generated callback event_func_1196 processes event block(s) 773_6. Actions/conditions:
//        773_6: creates a buttons 245 object; sets the object's animation to 33; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_1196()
{
    // event 773_6 : creates a buttons 245 object; sets the object's animation to 33; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_773_6_end;
        FrameObject * single_instance_773_6_0; single_instance_773_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + -35), parent->layer);
                if (single_instance_773_6_0 == NULL)
                    single_instance_773_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_773_6_0))->force_animation(33);
        FrameObject * single_instance_773_6_1; single_instance_773_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_773_6_0)->x + -35, ((Active*)single_instance_773_6_0)->y + 4), ((Active*)single_instance_773_6_0)->layer);
            if (single_instance_773_6_1 == NULL)
                single_instance_773_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_773_6_1))->blend_color.set(Color(180, 180, 180));
        ((Text*)((Text*)single_instance_773_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_1_97)));
    }
    event_773_6_end: ;
}
// Function purpose: generated callback event_func_1197 processes event block(s) 774_6. Actions/conditions:
//        774_6: creates a buttons 245 object; sets the object's animation to 34; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_1197()
{
    // event 774_6 : creates a buttons 245 object; sets the object's animation to 34; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_774_6_end;
        FrameObject * single_instance_774_6_0; single_instance_774_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + -13), parent->layer);
                if (single_instance_774_6_0 == NULL)
                    single_instance_774_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_774_6_0))->force_animation(34);
        FrameObject * single_instance_774_6_1; single_instance_774_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_774_6_0)->x + -35, ((Active*)single_instance_774_6_0)->y + 4), ((Active*)single_instance_774_6_0)->layer);
            if (single_instance_774_6_1 == NULL)
                single_instance_774_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_774_6_1))->blend_color.set(Color(180, 180, 180));
        ((Text*)((Text*)single_instance_774_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_2_155)));
    }
    event_774_6_end: ;
}
// Function purpose: generated callback event_func_1198 processes event block(s) 775_6. Actions/conditions:
//        775_6: creates a buttons 245 object; sets the object's animation to 35; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_1198()
{
    // event 775_6 : creates a buttons 245 object; sets the object's animation to 35; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_775_6_end;
        FrameObject * single_instance_775_6_0; single_instance_775_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 9), parent->layer);
                if (single_instance_775_6_0 == NULL)
                    single_instance_775_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_775_6_0))->force_animation(35);
        FrameObject * single_instance_775_6_1; single_instance_775_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_775_6_0)->x + -35, ((Active*)single_instance_775_6_0)->y + 4), ((Active*)single_instance_775_6_0)->layer);
            if (single_instance_775_6_1 == NULL)
                single_instance_775_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_775_6_1))->blend_color.set(Color(180, 180, 180));
        ((Text*)((Text*)single_instance_775_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_3_158)));
    }
    event_775_6_end: ;
}
// Function purpose: generated callback event_func_1199 processes event block(s) 776_6. Actions/conditions:
//        776_6: creates a buttons 245 object; sets the object's animation to 36; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_1199()
{
    // event 776_6 : creates a buttons 245 object; sets the object's animation to 36; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_menu_1)) goto event_776_6_end;
        FrameObject * single_instance_776_6_0; single_instance_776_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 31), parent->layer);
                if (single_instance_776_6_0 == NULL)
                    single_instance_776_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_776_6_0))->force_animation(36);
        FrameObject * single_instance_776_6_1; single_instance_776_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_776_6_0)->x + -35, ((Active*)single_instance_776_6_0)->y + 4), ((Active*)single_instance_776_6_0)->layer);
            if (single_instance_776_6_1 == NULL)
                single_instance_776_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_776_6_1))->blend_color.set(Color(180, 180, 180));
        ((Text*)((Text*)single_instance_776_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_1094, str_4_161)));
    }
    event_776_6_end: ;
}
void Frames::loop_menubuttons_6()
{
    event_func_1194();
    event_func_1195();
    event_func_1196();
    event_func_1197();
    event_func_1198();
    event_func_1199();
}
// Function purpose: generated callback event_func_1200 processes event block(s) 1136_6. Actions/conditions:
//        1136_6: sets tID to ((Active*)get_single(towerguard_342_instances,
//        default_active_instance))->alterables->values.get(0); sets tX to
//        ((Active*)get_single(towerguard_342_instances, default_active_instance))->get_x(); sets tY to
//        ((Active*)get_single(towerguard_342_instances, default_active_instance))->get_y().
void Frames::event_func_1200()
{
    // event 1136_6 : sets tID to ((Active*)get_single(towerguard_342_instances, default_active_instance))->alterables->values.get(0); sets tX to ((Active*)get_single(towerguard_342_instances, default_active_instance))->get_x(); sets tY to ((Active*)get_single(towerguard_342_instances, default_active_instance))->get_y()
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1136_6_end;
        towerguard_342_instances.clear_selection();
        for (ObjectIterator it(towerguard_342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_nearest_tower_index+1))) { it.deselect(); continue; }
        }
        if (!towerguard_342_instances.has_selection()) goto event_1136_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(315, str_tid_1095, ((Active*)get_single(towerguard_342_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(316, str_tx_1096, ((Active*)get_single(towerguard_342_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(317, str_ty_1097, ((Active*)get_single(towerguard_342_instances, default_active_instance))->get_y());
    }
    event_1136_6_end: ;
}
// Function purpose: generated callback event_func_1201 processes event block(s) 1137_6. Actions/conditions:
//        1137_6: sets a stored numeric value.
void Frames::event_func_1201()
{
    // event 1137_6 : sets a stored numeric value
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1137_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(318, str_tdist_1098, get_distance_int(((AssociateArray*)get_instance(gameVariables_instances))->get_value(105, str_lookx_662), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(106, str_looky_663), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(316, str_tx_1096), ((AssociateArray*)get_instance(gameVariables_instances))->get_value(317, str_ty_1097)));
    }
    event_1137_6_end: ;
}
// Function purpose: generated callback event_func_1202 processes event block(s) 1138_6. Actions/conditions:
//        1138_6: sets TDist_Nearest to gameVariables->get_value(318, TDist); sets TDist_NearestID to
//        loop_nearest_tower_index+1.
void Frames::event_func_1202()
{
    // event 1138_6 : sets TDist_Nearest to gameVariables->get_value(318, TDist); sets TDist_NearestID to loop_nearest_tower_index+1
    {
        if (!(group_code_1 && group_code_pathfinding_guards_guard_towers_1)) goto event_1138_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(318, str_tdist_1098)) < (((AssociateArray*)get_instance(gameVariables_instances))->get_value(319, str_tdist_nearest_1099)))) goto event_1138_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(319, str_tdist_nearest_1099, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(318, str_tdist_1098));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(314, str_tdist_nearestid_1092, loop_nearest_tower_index+1);
    }
    event_1138_6_end: ;
}
void Frames::loop_nearest_tower_6()
{
    event_func_1200();
    event_func_1201();
    event_func_1202();
}
// Function purpose: generated callback event_func_1203 processes event block(s) 678_6. Actions/conditions:
//        678_6: sets a game or interface text string; sets a game or interface text string; sets a game or interface
//        text string; plus 5 more actions.
void Frames::event_func_1203()
{
    // event 678_6 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 5 more actions
    {
        if (!(group_code_1 && group_code_dlc_dtaf_1)) goto event_678_6_end;
        guardBase_instances.clear_selection();
        for (ObjectIterator it(guardBase_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (loop_dtaf_guard_equip_index+1))) { it.deselect(); continue; }
        }
        if (!guardBase_instances.has_selection()) goto event_678_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_2_454, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_3_455, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_4_456, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_5_457, empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_npc_451+number_to_string(((Active*)get_single(guardBase_instances, default_active_instance))->alterables->values.get(25))+str_inv_6_458, str_214_100_1100);
    }
    event_678_6_end: ;
}
void Frames::loop_dtaf_guard_equip_6()
{
    event_func_1203();
}
// Function purpose: generated callback event_func_1204 processes event block(s) 906_6. Actions/conditions:
//        906_6: sets the selected object's vertical position to ((Active*)get_qualifier(qualifier_2,
//        default_active_instance))->get_y().
void Frames::event_func_1204()
{
    // event 906_6 : sets the selected object's vertical position to ((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y()
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_906_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (1))) goto event_906_6_end;
        ((Active*)get_instance(playerBase_instances))->set_y(((Active*)get_qualifier(qualifier_2, default_active_instance))->get_y());
    }
    event_906_6_end: ;
}
// Function purpose: generated callback event_func_1205 processes event block(s) 907_6. Actions/conditions:
//        907_6: sets the object position in the world.
void Frames::event_func_1205()
{
    // event 907_6 : sets the object position in the world
    {
        if (!(group_code_1 && group_code_input_move_keys_movement_1)) goto event_907_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(320, str_blocked_1101)) == (0))) goto event_907_6_end;
        playerBase_instances.clear_selection();
        qualifier_18.clear_selection();
        if (!check_overlap(playerBase_instances, qualifier_18)) goto event_907_6_end;
        if (!((((Active*)get_single(qualifier_18, default_active_instance))->layer->index+1) == (((Active*)get_instance(playerBase_instances))->layer->index+1))) goto event_907_6_end;
        {
            FrameObject * parent = ((Active*)get_single(qualifier_18));
            if (parent == NULL) goto pos_end_907_6_0;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + -2);
            pos_end_907_6_0: ;
        }
    }
    event_907_6_end: ;
}
void Frames::loop_move_check_y_6()
{
    event_func_1204();
    event_func_1205();
}
