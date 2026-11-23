#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_close_dlc_popup_2()
{
    event_func_77();
}
void Frames::event_func_78()
{
    // event 10_2
    {
        if (!(group_new_dlc_1)) goto event_10_2_end;
        if (!((global_strings->get(6)) == (str_eng_0))) goto event_10_2_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(0);
    }
    event_10_2_end: ;
}
void Frames::event_func_79()
{
    // event 11_2
    {
        if (!(group_new_dlc_1)) goto event_11_2_end;
        if (!((global_strings->get(6)) == (str_spa_2))) goto event_11_2_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(1);
    }
    event_11_2_end: ;
}
void Frames::event_func_80()
{
    // event 12_2
    {
        if (!(group_new_dlc_1)) goto event_12_2_end;
        if (!((global_strings->get(6)) == (str_fre_3))) goto event_12_2_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(2);
    }
    event_12_2_end: ;
}
void Frames::event_func_81()
{
    // event 13_2
    {
        if (!(group_new_dlc_1)) goto event_13_2_end;
        if (!((global_strings->get(6)) == (str_ger_6))) goto event_13_2_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(3);
    }
    event_13_2_end: ;
}
void Frames::event_func_82()
{
    // event 14_2
    {
        if (!(group_new_dlc_1)) goto event_14_2_end;
        if (!((global_strings->get(6)) == (str_pol_4))) goto event_14_2_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(4);
    }
    event_14_2_end: ;
}
void Frames::event_func_83()
{
    // event 15_2
    {
        if (!(group_new_dlc_1)) goto event_15_2_end;
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_15_2_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(5);
    }
    event_15_2_end: ;
}
void Frames::event_func_84()
{
    // event 16_2
    {
        if (!(group_new_dlc_1)) goto event_16_2_end;
        if (!((global_strings->get(6)) == (str_ita_5))) goto event_16_2_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(6);
    }
    event_16_2_end: ;
}
void Frames::event_func_85()
{
    // event 17_2
    {
        if (!(group_new_dlc_1)) goto event_17_2_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (str_1_97))) goto event_17_2_end;
        if (((SteamObject*)get_instance(steamworks_79_instances))->has_app(349310)) goto event_17_2_end;
        ((ListObject*)get_instance(list_80_instances))->add_line(str_fhurst_peak_149+((INI*)get_instance(translationData_instances))->get_string(str_dlc_150, str_1_97)+str_1_349310_0_151);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(32, str_popup_str_152, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(32, str_popup_str_152)+str_1_153);
    }
    event_17_2_end: ;
}
void Frames::event_func_86()
{
    // event 18_2
    {
        if (!(group_new_dlc_1)) goto event_18_2_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1)) != (str_1_97))) goto event_18_2_end;
        if (((SteamObject*)get_instance(steamworks_79_instances))->has_app(349350)) goto event_18_2_end;
        ((ListObject*)get_instance(list_80_instances))->add_line(str_alcatraz_154+((INI*)get_instance(translationData_instances))->get_string(str_dlc_150, str_2_155)+str_2_349350_0_156);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(32, str_popup_str_152, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(32, str_popup_str_152)+str_1_153);
    }
    event_18_2_end: ;
}
void Frames::event_func_87()
{
    // event 19_2
    {
        if (!(group_new_dlc_1)) goto event_19_2_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) != (str_1_97))) goto event_19_2_end;
        if (((SteamObject*)get_instance(steamworks_79_instances))->has_app(376700)) goto event_19_2_end;
        ((ListObject*)get_instance(list_80_instances))->add_line(str_escape_team_157+((INI*)get_instance(translationData_instances))->get_string(str_dlc_150, str_3_158)+str_3_376700_1_159);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(32, str_popup_str_152, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(32, str_popup_str_152)+str_1_153);
    }
    event_19_2_end: ;
}
void Frames::event_func_88()
{
    // event 20_2
    {
        if (!(group_new_dlc_1)) goto event_20_2_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)) != (str_1_97))) goto event_20_2_end;
        if (((SteamObject*)get_instance(steamworks_79_instances))->has_app(408730)) goto event_20_2_end;
        ((ListObject*)get_instance(list_80_instances))->add_line(str_duct_tapes_are_forever_160+((INI*)get_instance(translationData_instances))->get_string(str_dlc_150, str_4_161)+str_4_408730_1_162);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(32, str_popup_str_152, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(32, str_popup_str_152)+str_1_153);
    }
    event_20_2_end: ;
}
void Frames::event_func_89()
{
    // event 21_2
    {
        if (!(group_new_dlc_1)) goto event_21_2_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)) != (str_1_97))) goto event_21_2_end;
        if (((SteamObject*)get_instance(steamworks_79_instances))->has_app(412990)) goto event_21_2_end;
        ((ListObject*)get_instance(list_80_instances))->add_line(str_santas_sweatshop_163+((INI*)get_instance(translationData_instances))->get_string(str_dlc_150, str_5_164)+str_5_412990_1_165);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(32, str_popup_str_152, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(32, str_popup_str_152)+str_1_153);
    }
    event_21_2_end: ;
}
void Frames::event_func_90()
{
    // event 22_2
    {
        if (!(group_new_dlc_1)) goto event_22_2_end;
        if (!((((ListObject*)get_instance(list_80_instances))->get_count()) > (0))) goto event_22_2_end;
        ((Active*)get_instance(mouse_9_instances))->set_layer(4-1);
        media.play_id(SOUND_OPEN_5, 1-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(4-1);
        ((ListObject*)get_instance(list_80_instances))->current_line = ((ListObject*)get_instance(list_80_instances))->get_count();
        ((Text*)get_instance(newdlcbody_75_instances))->set_string(empty_string);
        ((INI*)get_instance(settings2_78_instances))->set_string(str_settings_52, str_dlcpopup_166, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(32, str_popup_str_152));
    }
    event_22_2_end: ;
}
void Frames::event_func_91()
{
    // event 23_2
    {
        if (!(group_new_dlc_1)) goto event_23_2_end;
        if (!((((ListObject*)get_instance(list_80_instances))->get_count()) == (0))) goto event_23_2_end;
            group_new_dlc_1 = false;
    
    }
    event_23_2_end: ;
}
void Frames::loop_check_dlc_popup_2()
{
    event_func_78();
    event_func_79();
    event_func_80();
    event_func_81();
    event_func_82();
    event_func_83();
    event_func_84();
    event_func_85();
    event_func_86();
    event_func_87();
    event_func_88();
    event_func_89();
    event_func_90();
    event_func_91();
}
void Frames::event_func_92()
{
    // event 62_2
    {
        if (!(group_pick_slot_1 && group_pick_slot_really_erase_1)) goto event_62_2_end;
        mapname_73_instances.clear_selection();
        for (ObjectIterator it(mapname_73_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_del_slot_167)))) { it.deselect(); continue; }
        }
        if (!mapname_73_instances.has_selection()) goto event_62_2_end;
        for (ObjectIterator it(mapname_73_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_62_2_end: ;
}
void Frames::loop_del_syst_2()
{
    event_func_92();
}
void Frames::event_func_93()
{
    // event 59_2
    {
        if (!(group_pick_slot_1 && group_pick_slot_really_erase_1)) goto event_59_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_del_slot_167)) == (1))) goto event_59_2_end;
        active3_63_instances.clear_selection();
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!active3_63_instances.has_selection()) goto event_59_2_end;
        ((Text*)get_instance(slot1_40_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_2_155));
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_del_syst_running = true;
            int times = int(1);
            loop_del_syst_index = 0;
            while (loop_del_syst_index < times) {
                loop_del_syst_2();
                if (!loop_del_syst_running) break;
                loop_del_syst_index++;
            }
        }
    }
    event_59_2_end: ;
}
void Frames::event_func_94()
{
    // event 60_2
    {
        if (!(group_pick_slot_1 && group_pick_slot_really_erase_1)) goto event_60_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_del_slot_167)) == (2))) goto event_60_2_end;
        active3_63_instances.clear_selection();
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!active3_63_instances.has_selection()) goto event_60_2_end;
        ((Text*)get_instance(slot2_53_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_2_155));
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_del_syst_running = true;
            int times = int(1);
            loop_del_syst_index = 0;
            while (loop_del_syst_index < times) {
                loop_del_syst_2();
                if (!loop_del_syst_running) break;
                loop_del_syst_index++;
            }
        }
    }
    event_60_2_end: ;
}
void Frames::event_func_95()
{
    // event 61_2
    {
        if (!(group_pick_slot_1 && group_pick_slot_really_erase_1)) goto event_61_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_del_slot_167)) == (3))) goto event_61_2_end;
        active3_63_instances.clear_selection();
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!active3_63_instances.has_selection()) goto event_61_2_end;
        ((Text*)get_instance(slot3_54_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_2_155));
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_del_syst_running = true;
            int times = int(1);
            loop_del_syst_index = 0;
            while (loop_del_syst_index < times) {
                loop_del_syst_2();
                if (!loop_del_syst_running) break;
                loop_del_syst_index++;
            }
        }
    }
    event_61_2_end: ;
}
void Frames::loop_reset_txt_2()
{
    event_func_93();
    event_func_94();
    event_func_95();
}
void Frames::event_func_96()
{
    // event 67_2
    {
        if (!(group_pick_slot_1)) goto event_67_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_67_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_perks_143))) goto event_67_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_center_perks_172);
    }
    event_67_2_end: ;
}
void Frames::event_func_97()
{
    // event 68_2
    {
        if (!(group_pick_slot_1)) goto event_68_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_68_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_stalagflucht_144))) goto event_68_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_stalag_flucht_173);
    }
    event_68_2_end: ;
}
void Frames::event_func_98()
{
    // event 69_2
    {
        if (!(group_pick_slot_1)) goto event_69_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_69_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_shanktonstatepen_145))) goto event_69_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_shankton_state_pen_174);
    }
    event_69_2_end: ;
}
void Frames::event_func_99()
{
    // event 70_2
    {
        if (!(group_pick_slot_1)) goto event_70_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_70_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_jungle_146))) goto event_70_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_jungle_compound_175);
    }
    event_70_2_end: ;
}
void Frames::event_func_100()
{
    // event 71_2
    {
        if (!(group_pick_slot_1)) goto event_71_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_71_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_sanpancho_147))) goto event_71_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_san_pancho_176);
    }
    event_71_2_end: ;
}
void Frames::event_func_101()
{
    // event 72_2
    {
        if (!(group_pick_slot_1)) goto event_72_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_72_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_irongate_148))) goto event_72_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_hmp_irongate_177);
    }
    event_72_2_end: ;
}
void Frames::event_func_102()
{
    // event 73_2
    {
        if (!(group_pick_slot_1)) goto event_73_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_73_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_ccl_130))) goto event_73_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_jingle_cells_178);
    }
    event_73_2_end: ;
}
void Frames::event_func_103()
{
    // event 74_2
    {
        if (!(group_pick_slot_1)) goto event_74_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_74_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_bc_133))) goto event_74_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_banned_camp_179);
    }
    event_74_2_end: ;
}
void Frames::event_func_104()
{
    // event 75_2
    {
        if (!(group_pick_slot_1)) goto event_75_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_75_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_tol_134))) goto event_75_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_london_tower_180);
    }
    event_75_2_end: ;
}
void Frames::event_func_105()
{
    // event 76_2
    {
        if (!(group_pick_slot_1)) goto event_76_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_76_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_pcpen_135))) goto event_76_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_paris_central_pen_181);
    }
    event_76_2_end: ;
}
void Frames::event_func_106()
{
    // event 77_2
    {
        if (!(group_pick_slot_1)) goto event_77_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_77_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_ss_136))) goto event_77_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_santas_sweatshop_182);
    }
    event_77_2_end: ;
}
void Frames::event_func_107()
{
    // event 78_2
    {
        if (!(group_pick_slot_1)) goto event_78_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_78_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_dtaf_137))) goto event_78_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_duct_tapes_are_forever_183);
    }
    event_78_2_end: ;
}
void Frames::event_func_108()
{
    // event 79_2
    {
        if (!(group_pick_slot_1)) goto event_79_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_79_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_escapeteam_138))) goto event_79_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_escape_team_184);
    }
    event_79_2_end: ;
}
void Frames::event_func_109()
{
    // event 80_2
    {
        if (!(group_pick_slot_1)) goto event_80_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_80_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_alca_139))) goto event_80_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_alcatraz_185);
    }
    event_80_2_end: ;
}
void Frames::event_func_110()
{
    // event 81_2
    {
        if (!(group_pick_slot_1)) goto event_81_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_81_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_fortbamford_142))) goto event_81_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_fort_bamford_186);
    }
    event_81_2_end: ;
}
void Frames::event_func_111()
{
    // event 82_2
    {
        if (!(group_pick_slot_1)) goto event_82_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_82_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_ea_140))) goto event_82_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_fhurst_peak_correctional_187);
    }
    event_82_2_end: ;
}
void Frames::event_func_112()
{
    // event 83_2
    {
        if (!(group_pick_slot_1)) goto event_83_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) != (2))) goto event_83_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170)) == (str_campepsilon_141))) goto event_83_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, str_camp_epsilon_188);
    }
    event_83_2_end: ;
}
void Frames::event_func_113()
{
    // event 84_2
    {
        if (!(group_pick_slot_1)) goto event_84_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) == (2))) goto event_84_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(36, str_output_171, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(35, str_input_170), str__96, str__189));
    }
    event_84_2_end: ;
}
void Frames::event_func_114()
{
    // event 85_2
    {
        if (!(group_pick_slot_1)) goto event_85_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(34, str_slot_type_169)) == (2))) goto event_85_2_end;
        ((INI*)get_instance(newsavetitlegrab_74_instances))->load_file(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(37, str_slotnum_191))+str_mname_dat_192);
        mapname_73_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_mapname_73(100, 80), 1);
            mapname_73_instances.add_back();
        }
        for (ObjectIterator it(mapname_73_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(38, str_ypos_193));
            ((SystemBox*)*it)->alterables->values.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(37, str_slotnum_191));
            ((SystemBox*)*it)->set_text(((INI*)get_instance(newsavetitlegrab_74_instances))->get_string(str_data_194, str_name_103)+str__195+((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_14_197)+str__189+((INI*)get_instance(newsavetitlegrab_74_instances))->get_string(str_data_194, str_day_112)+str__198+((INI*)get_instance(newsavetitlegrab_74_instances))->get_string(str_data_194, str_map_107));
        }
    }
    event_85_2_end: ;
}
void Frames::loop_mapname_2()
{
    event_func_96();
    event_func_97();
    event_func_98();
    event_func_99();
    event_func_100();
    event_func_101();
    event_func_102();
    event_func_103();
    event_func_104();
    event_func_105();
    event_func_106();
    event_func_107();
    event_func_108();
    event_func_109();
    event_func_110();
    event_func_111();
    event_func_112();
    event_func_113();
    event_func_114();
}
void Frames::event_func_115()
{
    // event 64_2
    {
        if (!(group_pick_slot_1)) goto event_64_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(11, str_slottaken1_100)) == (1))) goto event_64_2_end;
        ((Text*)get_instance(slot1_40_instances))->set_string(str__199+((AssociateArray*)get_instance(gameVariables_instances))->get_string(12, str_slotinfo1_name_101)+str__195+((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_14_197)+str__189+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(16, str_slotinfo1_day_110))+str__200);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(34, str_slot_type_169, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(15, str_slotinfo1_type_108));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(35, str_input_170, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(14, str_slotinfo1_prison_106));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(37, str_slotnum_191, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(38, str_ypos_193, 66);
        {
            loop_mapname_running = true;
            int times = int(1);
            loop_mapname_index = 0;
            while (loop_mapname_index < times) {
                loop_mapname_2();
                if (!loop_mapname_running) break;
                loop_mapname_index++;
            }
        }
        ((Text*)get_instance(slot1_40_instances))->set_string(((Text*)get_instance(slot1_40_instances))->text+((AssociateArray*)get_instance(gameVariables_instances))->get_string(36, str_output_171));
        FrameObject * single_instance_64_2_0; single_instance_64_2_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(slot1_55_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_active3_63(parent->x + 8, parent->y + 6), parent->layer);
                if (single_instance_64_2_0 == NULL)
                    single_instance_64_2_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_64_2_0))->set_direction(((AssociateArray*)get_instance(gameVariables_instances))->get_value(13, str_slotinfo1_avatar_104));
        ((Active*)((Active*)single_instance_64_2_0))->set_scale(2);
        ((Active*)((Active*)single_instance_64_2_0))->alterables->values.set(0, 1);
        {
            ((Active*)single_instance_64_2_0)->set_shader(Render::MONOCHROME);
        }
    }
    event_64_2_end: ;
}
void Frames::event_func_116()
{
    // event 65_2
    {
        if (!(group_pick_slot_1)) goto event_65_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(17, str_slottaken2_114)) == (1))) goto event_65_2_end;
        ((Text*)get_instance(slot2_53_instances))->set_string(str__199+((AssociateArray*)get_instance(gameVariables_instances))->get_string(18, str_slotinfo2_name_115)+str__195+((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_14_197)+str__189+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(22, str_slotinfo2_day_119))+str__200);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(34, str_slot_type_169, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(21, str_slotinfo2_type_118));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(37, str_slotnum_191, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(35, str_input_170, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(20, str_slotinfo2_prison_117));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(38, str_ypos_193, 105);
        {
            loop_mapname_running = true;
            int times = int(1);
            loop_mapname_index = 0;
            while (loop_mapname_index < times) {
                loop_mapname_2();
                if (!loop_mapname_running) break;
                loop_mapname_index++;
            }
        }
        ((Text*)get_instance(slot2_53_instances))->set_string(((Text*)get_instance(slot2_53_instances))->text+((AssociateArray*)get_instance(gameVariables_instances))->get_string(36, str_output_171));
        FrameObject * single_instance_65_2_0; single_instance_65_2_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(slot2_56_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_active3_63(parent->x + 8, parent->y + 6), parent->layer);
                if (single_instance_65_2_0 == NULL)
                    single_instance_65_2_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_65_2_0))->set_direction(((AssociateArray*)get_instance(gameVariables_instances))->get_value(19, str_slotinfo2_avatar_116));
        ((Active*)((Active*)single_instance_65_2_0))->set_scale(2);
        ((Active*)((Active*)single_instance_65_2_0))->alterables->values.set(0, 2);
        {
            ((Active*)single_instance_65_2_0)->set_shader(Render::MONOCHROME);
        }
    }
    event_65_2_end: ;
}
void Frames::event_func_117()
{
    // event 66_2
    {
        if (!(group_pick_slot_1)) goto event_66_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(23, str_slottaken3_121)) == (1))) goto event_66_2_end;
        ((Text*)get_instance(slot3_54_instances))->set_string(str__199+((AssociateArray*)get_instance(gameVariables_instances))->get_string(24, str_slotinfo3_name_122)+str__195+((INI*)get_instance(translationData_instances))->get_string(str_routines_196, str_14_197)+str__189+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(29, str_slotinfo3_day_128))+newline_character+str__199);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(35, str_input_170, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(26, str_slotinfo3_prison_124));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(34, str_slot_type_169, ((AssociateArray*)get_instance(gameVariables_instances))->get_value(28, str_slotinfo3_type_127));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(37, str_slotnum_191, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(38, str_ypos_193, 144);
        {
            loop_mapname_running = true;
            int times = int(1);
            loop_mapname_index = 0;
            while (loop_mapname_index < times) {
                loop_mapname_2();
                if (!loop_mapname_running) break;
                loop_mapname_index++;
            }
        }
        ((Text*)get_instance(slot3_54_instances))->set_string(((Text*)get_instance(slot3_54_instances))->text+((AssociateArray*)get_instance(gameVariables_instances))->get_string(36, str_output_171));
        FrameObject * single_instance_66_2_0; single_instance_66_2_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(slot3_57_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_active3_63(parent->x + 8, parent->y + 6), parent->layer);
                if (single_instance_66_2_0 == NULL)
                    single_instance_66_2_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_66_2_0))->set_direction(((AssociateArray*)get_instance(gameVariables_instances))->get_value(25, str_slotinfo3_avatar_123));
        ((Active*)((Active*)single_instance_66_2_0))->set_scale(2);
        ((Active*)((Active*)single_instance_66_2_0))->alterables->values.set(0, 3);
        {
            ((Active*)single_instance_66_2_0)->set_shader(Render::MONOCHROME);
        }
    }
    event_66_2_end: ;
}
void Frames::loop_check_slots_2()
{
    event_func_115();
    event_func_116();
    event_func_117();
}
void Frames::test_collisions_2()
{
    ObjectList::iterator it1, it2;
}
void Frames::steam_download_success_2()
{
    folder_search_loop_0();
}
void Frames::steam_download_fail_2()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_2()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_finish_2()
{
    folder_search_loop_0();
}
void Frames::steam_search_success_2()
{
    folder_search_loop_0();
}
void Frames::steam_on_connect_2()
{
    folder_search_loop_0();
}
void Frames::event_func_118()
{
    // event 1_2
    {
        ((Active*)get_instance(mouse_9_instances))->set_x(get_mouse_x());
        ((Active*)get_instance(mouse_9_instances))->set_y(get_mouse_y());
        ((Active*)get_instance(mouse_9_instances))->move_front();
        options_33_instances.clear_selection();
        for (ObjectIterator it(options_33_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1_2_end: ;
}
void Frames::event_func_119()
{
    // event 5_2
    {
        if (!(frame_time >= 0.3)) goto event_5_2_end;
        if (once_condition_5_2) goto event_5_2_end;
        once_condition_5_2 = true;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(39, str_getfiles_201, 0);
    }
    event_5_2_end: ;
}
void Frames::event_func_120()
{
    // event 6_2
    {
        if (!(frame_time >= 0.3)) goto event_6_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_getfiles_201)) == (0))) goto event_6_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(39, str_getfiles_201, 1);
        {
            loop_slotsy_running = true;
            int times = int(1);
            loop_slotsy_index = 0;
            while (loop_slotsy_index < times) {
                loop_slotsy_2();
                if (!loop_slotsy_running) break;
                loop_slotsy_index++;
            }
        }
    }
    event_6_2_end: ;
}
void Frames::event_func_121()
{
    // event 9_2
    {
        if (!(group_new_dlc_1)) goto event_9_2_end;
        if (!group_check_group_new_dlc_1_0) goto event_9_2_end;
        group_check_group_new_dlc_1_0 = false;
        ((ListObject*)get_instance(list_80_instances))->clear();
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((INI*)get_instance(settings2_78_instances))->get_string(str_settings_52, str_dlcpopup_166), str__96);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(32, str_popup_str_152, empty_string);
        {
            loop_check_dlc_popup_running = true;
            int times = int(1);
            loop_check_dlc_popup_index = 0;
            while (loop_check_dlc_popup_index < times) {
                loop_check_dlc_popup_2();
                if (!loop_check_dlc_popup_running) break;
                loop_check_dlc_popup_index++;
            }
        }
    }
    event_9_2_end: ;
}
void Frames::event_func_122()
{
    // event 24_2
    {
        if (!(group_new_dlc_1)) goto event_24_2_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_24_2_end;
        if (!(layers[4-1].visible)) goto event_24_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_esc_202)) == (0))) goto event_24_2_end;
        {
            loop_close_dlc_popup_running = true;
            int times = int(1);
            loop_close_dlc_popup_index = 0;
            while (loop_close_dlc_popup_index < times) {
                loop_close_dlc_popup_2();
                if (!loop_close_dlc_popup_running) break;
                loop_close_dlc_popup_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(40, str_esc_202, 1);
    }
    event_24_2_end: ;
}
void Frames::event_func_123()
{
    // event 25_2
    {
        if (!(group_new_dlc_1)) goto event_25_2_end;
        if (!(((Active*)get_instance(newdlcclose_77_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_25_2_end;
        if (!(layers[4-1].visible)) goto event_25_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_25_2_end;
        {
            loop_close_dlc_popup_running = true;
            int times = int(1);
            loop_close_dlc_popup_index = 0;
            while (loop_close_dlc_popup_index < times) {
                loop_close_dlc_popup_2();
                if (!loop_close_dlc_popup_running) break;
                loop_close_dlc_popup_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
    }
    event_25_2_end: ;
}
void Frames::event_func_124()
{
    // event 27_2
    {
        if (!(group_new_dlc_1)) goto event_27_2_end;
        if (!((((Text*)get_instance(newdlcbody_75_instances))->text) == (empty_string))) goto event_27_2_end;
        {
            loop_refresh_page_running = true;
            int times = int(1);
            loop_refresh_page_index = 0;
            while (loop_refresh_page_index < times) {
                loop_refresh_page_2();
                if (!loop_refresh_page_running) break;
                loop_refresh_page_index++;
            }
        }
    }
    event_27_2_end: ;
}
void Frames::event_func_125()
{
    // event 32_2
    {
        if (!(group_new_dlc_1)) goto event_32_2_end;
        if (!(((Active*)get_instance(active2_86_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_32_2_end;
        if (!(((Active*)get_instance(active2_86_instances))->flags & VISIBLE)) goto event_32_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_32_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((ListObject*)get_instance(list_80_instances))->current_line = ((ListObject*)get_instance(list_80_instances))->current_line-1;
        {
            loop_refresh_page_running = true;
            int times = int(1);
            loop_refresh_page_index = 0;
            while (loop_refresh_page_index < times) {
                loop_refresh_page_2();
                if (!loop_refresh_page_running) break;
                loop_refresh_page_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_32_2_end: ;
}
void Frames::event_func_126()
{
    // event 33_2
    {
        if (!(group_new_dlc_1)) goto event_33_2_end;
        if (!(((Active*)get_instance(active4_87_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_33_2_end;
        if (!(((Active*)get_instance(active4_87_instances))->flags & VISIBLE)) goto event_33_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_33_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((ListObject*)get_instance(list_80_instances))->current_line = ((ListObject*)get_instance(list_80_instances))->current_line+1;
        {
            loop_refresh_page_running = true;
            int times = int(1);
            loop_refresh_page_index = 0;
            while (loop_refresh_page_index < times) {
                loop_refresh_page_2();
                if (!loop_refresh_page_running) break;
                loop_refresh_page_index++;
            }
        }
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_33_2_end: ;
}
void Frames::event_func_127()
{
    // event 34_2
    {
        if (!(group_new_dlc_1)) goto event_34_2_end;
        if (((Active*)get_instance(options2_89_instances))->test_directions(1)) goto event_34_2_end;
        if (!(layers[4-1].visible)) goto event_34_2_end;
        ((Active*)get_instance(options2_89_instances))->set_direction(0);
    }
    event_34_2_end: ;
}
void Frames::event_func_128()
{
    // event 35_2
    {
        if (!(group_new_dlc_1)) goto event_35_2_end;
        if (!(((Active*)get_instance(options2_89_instances))->mouse_over())) goto event_35_2_end;
        if (!(layers[4-1].visible)) goto event_35_2_end;
        ((Active*)get_instance(options2_89_instances))->set_direction(16);
    }
    event_35_2_end: ;
}
void Frames::event_func_129()
{
    // event 36_2
    {
        if (!(group_new_dlc_1)) goto event_36_2_end;
        if (!(((Active*)get_instance(options2_89_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_36_2_end;
        if (!(layers[4-1].visible)) goto event_36_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_36_2_end;
        open_url(str_http_store_steampowered_com_app_204+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(3)+str__205);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
    }
    event_36_2_end: ;
}
void Frames::event_func_130()
{
    // event 40_2
    {
        options_33_instances.clear_selection();
        for (ObjectIterator it(options_33_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!options_33_instances.has_selection()) goto event_40_2_end;
        if (group_pick_slot_1) goto event_40_2_end;
        if (layers[4-1].visible) goto event_40_2_end;
        for (ObjectIterator it(options_33_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_40_2_end: ;
}
void Frames::event_func_131()
{
    // event 41_2
    {
        options_33_instances.clear_selection();
        for (ObjectIterator it(options_33_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_41_2_end: ;
}
void Frames::event_func_132()
{
    // event 42_2
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (1))) goto event_42_2_end;
        if (is_mouse_pressed(SDL_BUTTON_LEFT)) goto event_42_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 0);
    }
    event_42_2_end: ;
}
void Frames::event_func_133()
{
    // event 43_2
    {
        options_33_instances.clear_selection();
        for (ObjectIterator it(options_33_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!options_33_instances.has_selection()) goto event_43_2_end;
        if (group_pick_slot_1) goto event_43_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_getfiles_201)) == (1))) goto event_43_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_43_2_end;
        if (layers[4-1].visible) goto event_43_2_end;
        global_values->set(11, 0);
        if (!group_pick_slot_1) {
            group_pick_slot_1 = true;
            group_check_group_pick_slot_1_0 = true;
            group_check_group_pick_slot_really_erase_1_0 = true;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_43_2_end: ;
}
void Frames::event_func_134()
{
    // event 44_2
    {
        options_33_instances.clear_selection();
        for (ObjectIterator it(options_33_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!options_33_instances.has_selection()) goto event_44_2_end;
        if (group_pick_slot_1) goto event_44_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_44_2_end;
        if (layers[4-1].visible) goto event_44_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        next_frame = 8 + 0;    
    
        media.play_id(SOUND_RUMBLE_15, 1-1);
    }
    event_44_2_end: ;
}
void Frames::event_func_135()
{
    // event 45_2
    {
        options_33_instances.clear_selection();
        for (ObjectIterator it(options_33_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!options_33_instances.has_selection()) goto event_45_2_end;
        if (group_pick_slot_1) goto event_45_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_45_2_end;
        if (layers[4-1].visible) goto event_45_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        next_frame = 9 + 0;    
    
        media.play_id(SOUND_RUMBLE_15, 1-1);
    }
    event_45_2_end: ;
}
void Frames::event_func_136()
{
    // event 46_2
    {
        options_33_instances.clear_selection();
        for (ObjectIterator it(options_33_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!options_33_instances.has_selection()) goto event_46_2_end;
        if (group_pick_slot_1) goto event_46_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_46_2_end;
        if (layers[4-1].visible) goto event_46_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(42, str_run_editor_206, 1);
    }
    event_46_2_end: ;
}
void Frames::event_func_137()
{
    // event 47_2
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(42, str_run_editor_206)) == (1))) goto event_47_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        open_process(str_data_ed_editor_exe_207, empty_string, 1);
        has_quit = true;
    }
    event_47_2_end: ;
}
void Frames::event_func_138()
{
    // event 48_2
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(40, str_esc_202)) == (1))) goto event_48_2_end;
        if (is_key_pressed(SDLK_ESCAPE)) goto event_48_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(40, str_esc_202, 0);
    }
    event_48_2_end: ;
}
void Frames::event_func_139()
{
    // event 49_2
    {
        if (!(group_quit_1)) goto event_49_2_end;
        if (!group_check_group_quit_1_0) goto event_49_2_end;
        group_check_group_quit_1_0 = false;
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(2-1);
        ((Active*)get_instance(mouse_9_instances))->set_layer(2-1);
        ((Text*)get_instance(slot1_40_instances))->set_string(str_are_you_sure_you_want_to_quit_the_game_208);
        ((Text*)get_instance(slot1_40_instances))->blend_color.set(Color(255, 255, 255));
    }
    event_49_2_end: ;
}
void Frames::event_func_140()
{
    // event 50_2
    {
        if (!(group_quit_1)) goto event_50_2_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_50_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_50_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        has_quit = true;
    }
    event_50_2_end: ;
}
void Frames::event_func_141()
{
    // event 51_2
    {
        if (!(group_quit_1)) goto event_51_2_end;
        active6_41_instances.clear_selection();
        for (ObjectIterator it(active6_41_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!active6_41_instances.has_selection()) goto event_51_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(41, str_lclick_203)) == (0))) goto event_51_2_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(40, str_esc_202, 1);
            ((AssociateArray*)*it)->set_value(41, str_lclick_203, 1);
        }
        layerobject_37_instances.clear_selection();
        for (ObjectIterator it(layerobject_37_instances); !it.end(); ++it) {
            ((LayerObject*)*it)->hide_layer(2-1);
        }
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
            group_quit_1 = false;
    
    }
    event_51_2_end: ;
}
void Frames::event_func_142()
{
    // event 52_2
    {
        if (!(group_quit_1)) goto event_52_2_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_52_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(40, str_esc_202)) == (0))) goto event_52_2_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(40, str_esc_202, 1);
            ((AssociateArray*)*it)->set_value(41, str_lclick_203, 1);
        }
        layerobject_37_instances.clear_selection();
        for (ObjectIterator it(layerobject_37_instances); !it.end(); ++it) {
            ((LayerObject*)*it)->hide_layer(2-1);
        }
        mouse_9_instances.clear_selection();
        for (ObjectIterator it(mouse_9_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(1-1);
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
            group_quit_1 = false;
    
    }
    event_52_2_end: ;
}
void Frames::event_func_143()
{
    // event 53_2
    {
        if (!(group_quit_1)) goto event_53_2_end;
        ((Active*)get_instance(active6_41_instances))->set_direction(0);
        ((Active*)get_instance(interfaceButtons_instances))->set_direction(0);
    }
    event_53_2_end: ;
}
void Frames::event_func_144()
{
    // event 54_2
    {
        if (!(group_quit_1)) goto event_54_2_end;
        if (!(((Active*)get_instance(active6_41_instances))->mouse_over())) goto event_54_2_end;
        ((Active*)get_instance(active6_41_instances))->set_direction(16);
    }
    event_54_2_end: ;
}
void Frames::event_func_145()
{
    // event 55_2
    {
        if (!(group_quit_1)) goto event_55_2_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over())) goto event_55_2_end;
        ((Active*)get_instance(interfaceButtons_instances))->set_direction(16);
    }
    event_55_2_end: ;
}
void Frames::event_func_146()
{
    // event 56_2
    {
        if (!(group_pick_slot_1 && group_pick_slot_really_erase_1)) goto event_56_2_end;
        if (!group_check_group_pick_slot_really_erase_1_0) goto event_56_2_end;
        group_check_group_pick_slot_really_erase_1_0 = false;
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(3-1);
        media.play_id(SOUND_OPEN_5, 1-1);
        ((Active*)get_instance(mouse_9_instances))->set_layer(3-1);
    }
    event_56_2_end: ;
}
void Frames::event_func_147()
{
    // event 57_2
    {
        if (!(group_pick_slot_1 && group_pick_slot_really_erase_1)) goto event_57_2_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_57_2_end;
        if (!(layers[3-1].visible)) goto event_57_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(40, str_esc_202, 1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(3-1);
        ((Active*)get_instance(mouse_9_instances))->set_layer(2-1);
            group_pick_slot_really_erase_1 = false;
    
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_57_2_end: ;
}
void Frames::event_func_148()
{
    // event 58_2
    {
        if (!(group_pick_slot_1 && group_pick_slot_really_erase_1)) goto event_58_2_end;
        if (!(is_key_pressed_once(SDLK_y))) goto event_58_2_end;
        if (!(layers[3-1].visible)) goto event_58_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_slottaken_209+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_del_slot_167)), 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_slotinfo_210+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_del_slot_167)), empty_string);
    File::delete_file(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(((AssociateArray*)get_instance(gameVariables_instances))->get_value(33, str_del_slot_167))+str_save_dat_211);
        media.play_id(SOUND_TOILET_17, 1-1);
        ((Active*)get_instance(mouse_9_instances))->set_layer(2-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(3-1);
        {
            loop_reset_txt_running = true;
            int times = int(1);
            loop_reset_txt_index = 0;
            while (loop_reset_txt_index < times) {
                loop_reset_txt_2();
                if (!loop_reset_txt_running) break;
                loop_reset_txt_index++;
            }
        }
            group_pick_slot_really_erase_1 = false;
    
    }
    event_58_2_end: ;
}
void Frames::event_func_149()
{
    // event 63_2
    {
        if (!(group_pick_slot_1)) goto event_63_2_end;
        if (!group_check_group_pick_slot_1_0) goto event_63_2_end;
        group_check_group_pick_slot_1_0 = false;
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(2-1);
        ((Active*)get_instance(mouse_9_instances))->set_layer(2-1);
        ((Text*)get_instance(slot1_40_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_2_155));
        ((Text*)get_instance(slot2_53_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_2_155));
        ((Text*)get_instance(slot3_54_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_2_155));
        {
            loop_check_slots_running = true;
            int times = int(1);
            loop_check_slots_index = 0;
            while (loop_check_slots_index < times) {
                loop_check_slots_2();
                if (!loop_check_slots_running) break;
                loop_check_slots_index++;
            }
        }
    }
    event_63_2_end: ;
}
void Frames::event_func_150()
{
    // event 86_2
    {
        if (!(group_pick_slot_1)) goto event_86_2_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(erase_60_instances))->set_direction(0);
        ((Active*)get_instance(back_61_instances))->set_direction(0);
    }
    event_86_2_end: ;
}
void Frames::event_func_151()
{
    // event 87_2
    {
        if (!(group_pick_slot_1)) goto event_87_2_end;
        if (!(((Active*)get_instance(erase_60_instances))->mouse_over())) goto event_87_2_end;
        if (layers[3-1].visible) goto event_87_2_end;
        ((Active*)get_instance(erase_60_instances))->set_direction(16);
    }
    event_87_2_end: ;
}
void Frames::event_func_152()
{
    // event 88_2
    {
        if (!(group_pick_slot_1)) goto event_88_2_end;
        if (!(((Active*)get_instance(back_61_instances))->mouse_over())) goto event_88_2_end;
        if (layers[3-1].visible) goto event_88_2_end;
        ((Active*)get_instance(back_61_instances))->set_direction(16);
    }
    event_88_2_end: ;
}
void Frames::event_func_153()
{
    // event 89_2
    {
        if (!(group_pick_slot_1)) goto event_89_2_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_89_2_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_89_2_end;
        if (layers[3-1].visible) goto event_89_2_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_89_2_end: ;
}
void Frames::event_func_154()
{
    // event 90_2
    {
        if (!(group_pick_slot_1)) goto event_90_2_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_90_2_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(2))) goto event_90_2_end;
        if (layers[3-1].visible) goto event_90_2_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_90_2_end: ;
}
void Frames::event_func_155()
{
    // event 91_2
    {
        if (!(group_pick_slot_1)) goto event_91_2_end;
        if (!(((Active*)get_instance(back_61_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_91_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_91_2_end;
        if (layers[3-1].visible) goto event_91_2_end;
        ((Active*)get_instance(mouse_9_instances))->force_animation(0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(2-1);
        ((Active*)get_instance(mouse_9_instances))->set_layer(1-1);
        ((Text*)get_instance(erase2_62_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_4_161)));
        ((Text*)get_instance(erase2_62_instances))->blend_color.set(Color(127, 127, 127));
            group_pick_slot_1 = false;
    
        media.play_id(SOUND_CLOSE_6, 1-1);
        ((Text*)get_instance(fileheader_52_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_1_97)));
    }
    event_91_2_end: ;
}
void Frames::event_func_156()
{
    // event 92_2
    {
        if (!(group_pick_slot_1)) goto event_92_2_end;
        if (!(((Active*)get_instance(erase_60_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_92_2_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_92_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_92_2_end;
        if (layers[3-1].visible) goto event_92_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        media.play_id(SOUND_PLIP_16, 1-1);
        ((Active*)get_instance(mouse_9_instances))->force_animation(2);
        ((Text*)get_instance(erase2_62_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_pausemenu_quit_212, str_4_161)));
        ((Text*)get_instance(erase2_62_instances))->blend_color.set(Color(255, 128, 0));
        ((Text*)get_instance(fileheader_52_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_4_161)));
    }
    event_92_2_end: ;
}
void Frames::event_func_157()
{
    // event 93_2
    {
        if (!(group_pick_slot_1)) goto event_93_2_end;
        if (!(((Active*)get_instance(erase_60_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_93_2_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(2))) goto event_93_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_93_2_end;
        if (layers[3-1].visible) goto event_93_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((Active*)get_instance(mouse_9_instances))->force_animation(0);
        ((Text*)get_instance(erase2_62_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_4_161)));
        ((Text*)get_instance(erase2_62_instances))->blend_color.set(Color(127, 127, 127));
        media.play_id(SOUND_PLIP_16, 1-1);
        ((Text*)get_instance(fileheader_52_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_1_97)));
    }
    event_93_2_end: ;
}
void Frames::event_func_158()
{
    // event 94_2
    {
        if (!(group_pick_slot_1)) goto event_94_2_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_94_2_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_94_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_94_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_slottaken_209+number_to_string(((Active*)get_single(qualifier_1, default_active_instance))->alterables->values.get(0)))) == (0))) goto event_94_2_end;
        if (layers[3-1].visible) goto event_94_2_end;
        global_values->set(14, ((Active*)get_single(qualifier_1, default_active_instance))->alterables->values.get(0));
        media.play_id(SOUND_OPEN_5, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        next_frame = 4 + 0;    
    
    }
    event_94_2_end: ;
}
void Frames::event_func_159()
{
    // event 95_2
    {
        if (!(group_pick_slot_1)) goto event_95_2_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_95_2_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(0))) goto event_95_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_95_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_slottaken_209+number_to_string(((Active*)get_single(qualifier_1, default_active_instance))->alterables->values.get(0)))) == (1))) goto event_95_2_end;
        if (layers[3-1].visible) goto event_95_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        global_values->set(18, 0);
        global_strings->set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_slotinfo_210+number_to_string(((Active*)get_single(qualifier_1, default_active_instance))->alterables->values.get(0))+str_prison_213));
        global_values->set(14, ((Active*)get_single(qualifier_1, default_active_instance))->alterables->values.get(0));
        global_values->set(11, 1);
        media.play_id(SOUND_RUMBLE_15, 1-1);
        {
            loop_custom_running = true;
            int times = int(1);
            loop_custom_index = 0;
            while (loop_custom_index < times) {
                loop_custom_2();
                if (!loop_custom_running) break;
                loop_custom_index++;
            }
        }
    }
    event_95_2_end: ;
}
void Frames::event_func_160()
{
    // event 111_2
    {
        if (!(group_pick_slot_1)) goto event_111_2_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_111_2_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(2))) goto event_111_2_end;
        if (layers[3-1].visible) goto event_111_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_slottaken_209+number_to_string(((Active*)get_single(qualifier_1, default_active_instance))->alterables->values.get(0)))) == (1))) goto event_111_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_111_2_end;
        if (layers[3-1].visible) goto event_111_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(33, str_del_slot_167, ((Active*)get_single(qualifier_1, default_active_instance))->alterables->values.get(0));
        ((Text*)get_instance(erase2_62_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_4_161)));
        ((Text*)get_instance(erase2_62_instances))->blend_color.set(Color(127, 127, 127));
        ((Active*)get_instance(mouse_9_instances))->force_animation(0);
        if (!group_pick_slot_really_erase_1) {
            group_pick_slot_really_erase_1 = true;
            group_check_group_pick_slot_really_erase_1_0 = true;
        }
        ((Text*)get_instance(fileheader_52_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_1_97)));
    }
    event_111_2_end: ;
}
void Frames::event_func_161()
{
    // event 112_2
    {
        if (!(((Active*)get_instance(active7_50_instances))->mouse_over())) goto event_112_2_end;
        ((Active*)get_instance(active7_50_instances))->blend_color.set_alpha_coefficient(0);
    }
    event_112_2_end: ;
}
void Frames::event_func_162()
{
    // event 113_2
    {
        if (((Active*)get_instance(active7_50_instances))->mouse_over()) goto event_113_2_end;
        ((Active*)get_instance(active7_50_instances))->blend_color.set_alpha_coefficient(160);
    }
    event_113_2_end: ;
}
void Frames::event_func_163()
{
    // event 114_2
    {
        if (!(((Active*)get_instance(active7_50_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_114_2_end;
        open_url(str_http_escapistgame_com_214);
    }
    event_114_2_end: ;
}
void Frames::event_func_164()
{
    // event 115_2
    {
        if (!(((Active*)get_instance(menuCloseButton_instances))->mouse_over())) goto event_115_2_end;
        if (!(layers[4-1].visible)) goto event_115_2_end;
        ((Active*)get_instance(menuCloseButton_instances))->blend_color.set_alpha_coefficient(0);
    }
    event_115_2_end: ;
}
