#include "vitaview.h"
#include "options.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_249 processes event block(s) 87_4. Actions/conditions: 87_4:
//        splits saved text into fields.
void Frames::event_func_249()
{
    // event 87_4 : splits saved text into fields
    {
        if (!(group_bonus_maps_1)) goto event_87_4_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(bonusmaps_126_instances))->get_line(loop_create_bonus_list_index), str__254);
    }
    event_87_4_end: ;
}
void Frames::loop_create_bonus_list_4()
{
    event_func_249();
}
// Function purpose: generated callback event_func_250 processes event block(s) 65_4. Group(s): Custom/Main.
//        Actions/conditions: 65_4: applies a visual shader; sets the object position in the world; sets the selected
//        object's visibility to true; plus 5 more actions.
void Frames::event_func_250()
{
    // event 65_4 : applies a visual shader; sets the object position in the world; sets the selected object's visibility to true; plus 5 more actions
    {
        // group: Custom/Main
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_locked_256+global_strings->get(0))) == (1))) goto event_65_4_end;
        {
            ((Active*)get_instance(mainpic_113_instances))->set_shader(Render::MONOCHROME);
        }
        {
            FrameObject * parent = ((Active*)get_instance(mainpic_113_instances));
            if (parent == NULL) goto pos_end_65_4_0;
            ((Active*)get_instance(active3_63_instances))->set_global_position(parent->get_x() + 49, parent->get_y() + -30);
            pos_end_65_4_0: ;
        }
        ((Active*)get_instance(active3_63_instances))->set_visible(true);
        ((Active*)get_instance(active3_63_instances))->move_front();
        ((Text*)get_instance(continue_101_instances))->blend_color.set_alpha_coefficient(200);
    }
    event_65_4_end: ;
}
// Function purpose: generated callback event_func_251 processes event block(s) 66_4. Group(s): Custom/Main.
//        Actions/conditions: 66_4: applies a visual shader; sets the selected object's visibility to false; changes
//        the selected object transparency.
void Frames::event_func_251()
{
    // event 66_4 : applies a visual shader; sets the selected object's visibility to false; changes the selected object transparency
    {
        // group: Custom/Main
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_locked_256+global_strings->get(0))) == (0))) goto event_66_4_end;
        {
            ((Active*)get_instance(mainpic_113_instances))->set_shader(Render::NONE);
        }
        ((Active*)get_instance(active3_63_instances))->set_visible(false);
        ((Text*)get_instance(continue_101_instances))->blend_color.set_alpha_coefficient(0);
    }
    event_66_4_end: ;
}
void Frames::loop_check_this_locked_4()
{
    event_func_250();
    event_func_251();
}
// Function purpose: generated callback event_func_252 processes event block(s) 110_4. Actions/conditions:
//        110_4: adds a line to the current list; adds a line to the current list; adds a line to the current list;
//        plus 11 more actions.
void Frames::event_func_252()
{
    // event 110_4 : adds a line to the current list; adds a line to the current list; adds a line to the current list; plus 11 more actions
    {
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_jingle_cells_ccl_11_257);
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_banned_camp_bc_10_258);
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_london_tower_tol_09_259);
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_paris_central_pen_pcpen_08_260);
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_santas_sweatshop_ss_01_261);
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_duct_tapes_are_forever_dtaf_02_262);
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_escape_team_escapeteam_03_263);
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_alcatraz_alca_04_264);
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_fhurst_peak_correctional_ea_07_265);
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_camp_epsilon_campepsilon_05_266);
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_fort_bamford_fortbamford_06_267);
    }
    event_110_4_end: ;
}
// Function purpose: generated callback event_func_253 processes event block(s) 111_4. Group(s): Installed
//        Bonus - DRM. Actions/conditions: 111_4: sets DLC_SS to 1.
void Frames::event_func_253()
{
    // event 111_4 : sets DLC_SS to 1
    {
        // group: Installed Bonus - DRM
        if (!(File::file_exists(str_data_maps_ss_map_268))) goto event_111_4_end;
        if (!(((SteamObject*)get_instance(steamworks2_15_instances))->has_app(412990))) goto event_111_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(54, str_dlc_ss_269, 1);
    }
    event_111_4_end: ;
}
// Function purpose: generated callback event_func_254 processes event block(s) 112_4. Group(s): Installed
//        Bonus - DRM. Actions/conditions: 112_4: sets DLC_DTAF to 1.
void Frames::event_func_254()
{
    // event 112_4 : sets DLC_DTAF to 1
    {
        // group: Installed Bonus - DRM
        if (!(File::file_exists(str_data_maps_dtaf_map_270))) goto event_112_4_end;
        if (!(((SteamObject*)get_instance(steamworks2_15_instances))->has_app(408730))) goto event_112_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(55, str_dlc_dtaf_271, 1);
    }
    event_112_4_end: ;
}
// Function purpose: generated callback event_func_255 processes event block(s) 113_4. Group(s): Installed
//        Bonus - DRM. Actions/conditions: 113_4: sets DLC_eTeam to 1.
void Frames::event_func_255()
{
    // event 113_4 : sets DLC_eTeam to 1
    {
        // group: Installed Bonus - DRM
        if (!(File::file_exists(str_data_maps_escapeteam_map_272))) goto event_113_4_end;
        if (!(((SteamObject*)get_instance(steamworks2_15_instances))->has_app(376700))) goto event_113_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(56, str_dlc_eteam_273, 1);
    }
    event_113_4_end: ;
}
// Function purpose: generated callback event_func_256 processes event block(s) 114_4. Group(s): Installed
//        Bonus - DRM. Actions/conditions: 114_4: sets DLC_alca to 1.
void Frames::event_func_256()
{
    // event 114_4 : sets DLC_alca to 1
    {
        // group: Installed Bonus - DRM
        if (!(File::file_exists(str_data_maps_alca_map_274))) goto event_114_4_end;
        if (!((global_values->get(16)) == (1))) goto event_114_4_end;
        if (!(((SteamObject*)get_instance(steamworks2_15_instances))->has_app(349350))) goto event_114_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_dlc_alca_275, 1);
    }
    event_114_4_end: ;
}
// Function purpose: generated callback event_func_257 processes event block(s) 115_4. Group(s): Installed
//        Bonus - DRM. Actions/conditions: 115_4: sets DLC_fhurst to 1.
void Frames::event_func_257()
{
    // event 115_4 : sets DLC_fhurst to 1
    {
        // group: Installed Bonus - DRM
        if (!(File::file_exists(str_data_maps_ea_map_276))) goto event_115_4_end;
        if (!((global_values->get(16)) == (1))) goto event_115_4_end;
        if (!(((SteamObject*)get_instance(steamworks2_15_instances))->has_app(349310))) goto event_115_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(58, str_dlc_fhurst_277, 1);
    }
    event_115_4_end: ;
}
// Function purpose: generated callback event_func_258 processes event block(s) 127_4. Actions/conditions:
//        127_4: removes the selected object.
void Frames::event_func_258()
{
    // event 127_4 : removes the selected object
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(59, str_cust_count_278)) == (0))) goto event_127_4_end;
        main_124_instances.clear_selection();
        for (ObjectIterator it(main_124_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_127_4_end: ;
}
void Frames::loop_get_cust_4()
{
    event_func_252();
    event_func_253();
    event_func_254();
    event_func_255();
    event_func_256();
    event_func_257();
    event_func_258();
}
// Function purpose: generated callback event_func_259 processes event block(s) 97_4. Actions/conditions: 97_4:
//        applies a visual shader; sets the selected object's visibility to false.
void Frames::event_func_259()
{
    // event 97_4 : applies a visual shader; sets the selected object's visibility to false
    {
        if (!(group_bonus_maps_1)) goto event_97_4_end;
        {
            ((Active*)get_instance(t17presents_91_instances))->set_shader(Render::NONE);
        }
        ((Active*)get_instance(t17presents_91_instances))->set_visible(false);
    }
    event_97_4_end: ;
}
// Function purpose: generated callback event_func_260 processes event block(s) 98_4. Actions/conditions: 98_4:
//        sets a game or interface text string; sets MapDir to ./Data\Maps\; sets a game or interface text string;
//        plus 10 more actions.
void Frames::event_func_260()
{
    // event 98_4 : sets a game or interface text string; sets MapDir to ./Data\Maps\; sets a game or interface text string; plus 10 more actions
    {
        if (!(group_bonus_maps_1)) goto event_98_4_end;
        ((Text*)get_instance(continue_101_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        ((Text*)get_instance(header_107_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_20_279)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(bonusmaps_126_instances))->get_current_line(), str__254);
        ((Text*)get_instance(mainname_115_instances))->set_string(uppercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        global_strings->set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        global_values->set(18, 1);
        {
            ((Active*)get_instance(bonus_82_instances))->set_shader(Render::NONE);
        }
        ((Active*)get_instance(letsgo_100_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(active3_63_instances))->set_visible(false);
    }
    event_98_4_end: ;
}
// Function purpose: generated callback event_func_261 processes event block(s) 99_4. Actions/conditions: 99_4:
//        sets the selected object's visibility to true; moves the selected object to the front.
void Frames::event_func_261()
{
    // event 99_4 : sets the selected object's visibility to true; moves the selected object to the front
    {
        if (!(group_bonus_maps_1)) goto event_99_4_end;
        if (!((global_strings->get(0)) == (str_ccl_130))) goto event_99_4_end;
        ((Active*)get_instance(t17presents_91_instances))->set_visible(true);
        ((Active*)get_instance(t17presents_91_instances))->move_front();
    }
    event_99_4_end: ;
}
// Function purpose: generated callback event_func_262 processes event block(s) 100_4. Actions/conditions:
//        100_4: sets the selected object's visibility to true; moves the selected object to the front.
void Frames::event_func_262()
{
    // event 100_4 : sets the selected object's visibility to true; moves the selected object to the front
    {
        if (!(group_bonus_maps_1)) goto event_100_4_end;
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_100_4_end;
        ((Active*)get_instance(t17presents_91_instances))->set_visible(true);
        ((Active*)get_instance(t17presents_91_instances))->move_front();
    }
    event_100_4_end: ;
}
// Function purpose: generated callback event_func_263 processes event block(s) 101_4. Actions/conditions:
//        101_4: sets the selected object's visibility to true; moves the selected object to the front.
void Frames::event_func_263()
{
    // event 101_4 : sets the selected object's visibility to true; moves the selected object to the front
    {
        if (!(group_bonus_maps_1)) goto event_101_4_end;
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_101_4_end;
        ((Active*)get_instance(t17presents_91_instances))->set_visible(true);
        ((Active*)get_instance(t17presents_91_instances))->move_front();
    }
    event_101_4_end: ;
}
// Function purpose: generated callback event_func_264 processes event block(s) 102_4. Actions/conditions:
//        102_4: sets the selected object's visibility to true; moves the selected object to the front.
void Frames::event_func_264()
{
    // event 102_4 : sets the selected object's visibility to true; moves the selected object to the front
    {
        if (!(group_bonus_maps_1)) goto event_102_4_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_102_4_end;
        ((Active*)get_instance(t17presents_91_instances))->set_visible(true);
        ((Active*)get_instance(t17presents_91_instances))->move_front();
    }
    event_102_4_end: ;
}
// Function purpose: generated callback event_func_265 processes event block(s) 103_4. Actions/conditions:
//        103_4: applies a visual shader; sets a game or interface text string; sets the selected object's numeric
//        value to 1; plus 7 more actions.
void Frames::event_func_265()
{
    // event 103_4 : applies a visual shader; sets a game or interface text string; sets the selected object's numeric value to 1; plus 7 more actions
    {
        if (!(group_bonus_maps_1)) goto event_103_4_end;
        if (!((global_values->get(16)) == (1))) goto event_103_4_end;
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_103_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(54, str_dlc_ss_269)) == (0))) goto event_103_4_end;
        {
            ((Active*)get_instance(bonus_82_instances))->set_shader(Render::MONOCHROME);
        }
        ((Text*)get_instance(continue_101_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_dlc_150, str_free_280)));
        ((Active*)get_instance(letsgo_100_instances))->alterables->values.set(0, 1);
        {
            FrameObject * parent = ((Active*)get_instance(bonus_82_instances));
            if (parent == NULL) goto pos_end_103_4_0;
            ((Active*)get_instance(active3_63_instances))->set_global_position(parent->get_x() + 49, parent->get_y() + -30);
            pos_end_103_4_0: ;
        }
        ((Active*)get_instance(active3_63_instances))->set_visible(true);
        ((Active*)get_instance(active3_63_instances))->move_front();
        {
            ((Active*)get_instance(t17presents_91_instances))->set_shader(Render::MONOCHROME);
        }
    }
    event_103_4_end: ;
}
// Function purpose: generated callback event_func_266 processes event block(s) 104_4. Actions/conditions:
//        104_4: applies a visual shader; sets a game or interface text string; sets the selected object's numeric
//        value to 1; plus 7 more actions.
void Frames::event_func_266()
{
    // event 104_4 : applies a visual shader; sets a game or interface text string; sets the selected object's numeric value to 1; plus 7 more actions
    {
        if (!(group_bonus_maps_1)) goto event_104_4_end;
        if (!((global_values->get(16)) == (1))) goto event_104_4_end;
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_104_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(55, str_dlc_dtaf_271)) == (0))) goto event_104_4_end;
        {
            ((Active*)get_instance(bonus_82_instances))->set_shader(Render::MONOCHROME);
        }
        ((Text*)get_instance(continue_101_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_3_158)));
        ((Active*)get_instance(letsgo_100_instances))->alterables->values.set(0, 1);
        {
            FrameObject * parent = ((Active*)get_instance(bonus_82_instances));
            if (parent == NULL) goto pos_end_104_4_0;
            ((Active*)get_instance(active3_63_instances))->set_global_position(parent->get_x() + 49, parent->get_y() + -30);
            pos_end_104_4_0: ;
        }
        ((Active*)get_instance(active3_63_instances))->set_visible(true);
        ((Active*)get_instance(active3_63_instances))->move_front();
        {
            ((Active*)get_instance(t17presents_91_instances))->set_shader(Render::MONOCHROME);
        }
    }
    event_104_4_end: ;
}
// Function purpose: generated callback event_func_267 processes event block(s) 105_4. Actions/conditions:
//        105_4: applies a visual shader; sets the selected object's numeric value to 1; sets the object position in
//        the world; plus 7 more actions.
void Frames::event_func_267()
{
    // event 105_4 : applies a visual shader; sets the selected object's numeric value to 1; sets the object position in the world; plus 7 more actions
    {
        if (!(group_bonus_maps_1)) goto event_105_4_end;
        if (!((global_values->get(16)) == (1))) goto event_105_4_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_105_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(56, str_dlc_eteam_273)) == (0))) goto event_105_4_end;
        {
            ((Active*)get_instance(bonus_82_instances))->set_shader(Render::MONOCHROME);
        }
        ((Active*)get_instance(letsgo_100_instances))->alterables->values.set(0, 1);
        {
            FrameObject * parent = ((Active*)get_instance(bonus_82_instances));
            if (parent == NULL) goto pos_end_105_4_0;
            ((Active*)get_instance(active3_63_instances))->set_global_position(parent->get_x() + 49, parent->get_y() + -30);
            pos_end_105_4_0: ;
        }
        ((Active*)get_instance(active3_63_instances))->set_visible(true);
        ((Active*)get_instance(active3_63_instances))->move_front();
        ((Text*)get_instance(continue_101_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_3_158)));
        {
            ((Active*)get_instance(t17presents_91_instances))->set_shader(Render::MONOCHROME);
        }
    }
    event_105_4_end: ;
}
// Function purpose: generated callback event_func_268 processes event block(s) 106_4. Actions/conditions:
//        106_4: applies a visual shader; sets the selected object's numeric value to 1; sets the object position in
//        the world; plus 7 more actions.
void Frames::event_func_268()
{
    // event 106_4 : applies a visual shader; sets the selected object's numeric value to 1; sets the object position in the world; plus 7 more actions
    {
        if (!(group_bonus_maps_1)) goto event_106_4_end;
        if (!((global_values->get(16)) == (1))) goto event_106_4_end;
        if (!((global_strings->get(0)) == (str_alca_139))) goto event_106_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_dlc_alca_275)) == (0))) goto event_106_4_end;
        {
            ((Active*)get_instance(bonus_82_instances))->set_shader(Render::MONOCHROME);
        }
        ((Active*)get_instance(letsgo_100_instances))->alterables->values.set(0, 1);
        {
            FrameObject * parent = ((Active*)get_instance(bonus_82_instances));
            if (parent == NULL) goto pos_end_106_4_0;
            ((Active*)get_instance(active3_63_instances))->set_global_position(parent->get_x() + 49, parent->get_y() + -30);
            pos_end_106_4_0: ;
        }
        ((Active*)get_instance(active3_63_instances))->set_visible(true);
        ((Active*)get_instance(active3_63_instances))->move_front();
        ((Text*)get_instance(continue_101_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_3_158)));
        {
            ((Active*)get_instance(t17presents_91_instances))->set_shader(Render::MONOCHROME);
        }
    }
    event_106_4_end: ;
}
// Function purpose: generated callback event_func_269 processes event block(s) 107_4. Actions/conditions:
//        107_4: applies a visual shader; sets the selected object's numeric value to 1; sets the object position in
//        the world; plus 7 more actions.
void Frames::event_func_269()
{
    // event 107_4 : applies a visual shader; sets the selected object's numeric value to 1; sets the object position in the world; plus 7 more actions
    {
        if (!(group_bonus_maps_1)) goto event_107_4_end;
        if (!((global_values->get(16)) == (1))) goto event_107_4_end;
        if (!((global_strings->get(0)) == (str_ea_140))) goto event_107_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(58, str_dlc_fhurst_277)) == (0))) goto event_107_4_end;
        {
            ((Active*)get_instance(bonus_82_instances))->set_shader(Render::MONOCHROME);
        }
        ((Active*)get_instance(letsgo_100_instances))->alterables->values.set(0, 1);
        {
            FrameObject * parent = ((Active*)get_instance(bonus_82_instances));
            if (parent == NULL) goto pos_end_107_4_0;
            ((Active*)get_instance(active3_63_instances))->set_global_position(parent->get_x() + 49, parent->get_y() + -30);
            pos_end_107_4_0: ;
        }
        ((Active*)get_instance(active3_63_instances))->set_visible(true);
        ((Active*)get_instance(active3_63_instances))->move_front();
        ((Text*)get_instance(continue_101_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_profile_281, str_3_158)));
        {
            ((Active*)get_instance(t17presents_91_instances))->set_shader(Render::MONOCHROME);
        }
    }
    event_107_4_end: ;
}
void Frames::loop_refresh_bonus_4()
{
    event_func_259();
    event_func_260();
    event_func_261();
    event_func_262();
    event_func_263();
    event_func_264();
    event_func_265();
    event_func_266();
    event_func_267();
    event_func_268();
    event_func_269();
}
// Function purpose: generated callback event_func_270 processes event block(s) 116_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 116_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_270()
{
    // event 116_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_ccl_map_282))) goto event_116_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_jingle_cells_ccl_11_257);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_116_4_end: ;
}
// Function purpose: generated callback event_func_271 processes event block(s) 117_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 117_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_271()
{
    // event 117_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_bc_map_283))) goto event_117_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_banned_camp_bc_10_258);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_117_4_end: ;
}
// Function purpose: generated callback event_func_272 processes event block(s) 118_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 118_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_272()
{
    // event 118_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_tol_map_284))) goto event_118_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_london_tower_tol_09_259);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_118_4_end: ;
}
// Function purpose: generated callback event_func_273 processes event block(s) 119_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 119_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_273()
{
    // event 119_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_pcpen_map_285))) goto event_119_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_paris_central_pen_pcpen_08_260);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_119_4_end: ;
}
// Function purpose: generated callback event_func_274 processes event block(s) 120_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 120_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_274()
{
    // event 120_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_ss_map_268))) goto event_120_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_santas_sweatshop_ss_01_261);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_120_4_end: ;
}
// Function purpose: generated callback event_func_275 processes event block(s) 121_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 121_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_275()
{
    // event 121_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_dtaf_map_270))) goto event_121_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_duct_tapes_are_forever_dtaf_02_262);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_121_4_end: ;
}
// Function purpose: generated callback event_func_276 processes event block(s) 122_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 122_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_276()
{
    // event 122_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_escapeteam_map_272))) goto event_122_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_escape_team_escapeteam_03_263);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_122_4_end: ;
}
// Function purpose: generated callback event_func_277 processes event block(s) 123_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 123_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_277()
{
    // event 123_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_alca_map_274))) goto event_123_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_alcatraz_alca_04_264);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_123_4_end: ;
}
// Function purpose: generated callback event_func_278 processes event block(s) 124_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 124_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_278()
{
    // event 124_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_campepsilon_map_286))) goto event_124_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_camp_epsilon_campepsilon_05_266);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_124_4_end: ;
}
// Function purpose: generated callback event_func_279 processes event block(s) 125_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 125_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_279()
{
    // event 125_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_fortbamford_map_287))) goto event_125_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_fort_bamford_fortbamford_06_267);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_125_4_end: ;
}
// Function purpose: generated callback event_func_280 processes event block(s) 126_4. Group(s): Installed
//        Bonus - DRM free. Actions/conditions: 126_4: adds a line to the current list; increments cust_count by 1.
void Frames::event_func_280()
{
    // event 126_4 : adds a line to the current list; increments cust_count by 1
    {
        // group: Installed Bonus - DRM free
        if (!(File::file_exists(str_data_maps_ea_map_276))) goto event_126_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->add_line(str_fhurst_peak_correctional_ea_07_265);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(59, str_cust_count_278, 1);
    }
    event_126_4_end: ;
}
void Frames::loop_get_cust_drmfree_4()
{
    event_func_270();
    event_func_271();
    event_func_272();
    event_func_273();
    event_func_274();
    event_func_275();
    event_func_276();
    event_func_277();
    event_func_278();
    event_func_279();
    event_func_280();
}
// Function purpose: generated callback event_func_281 processes event block(s) 136_4. Actions/conditions:
//        136_4: splits saved text into fields.
void Frames::event_func_281()
{
    // event 136_4 : splits saved text into fields
    {
        if (!(group_custom_maps_1)) goto event_136_4_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(custommaps_136_instances))->get_line((((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)*10)+loop_create_custom_list_index), str__254);
    }
    event_136_4_end: ;
}
// Function purpose: generated callback event_func_282 processes event block(s) 137_4. Actions/conditions:
//        137_4: sets a game or interface text string.
void Frames::event_func_282()
{
    // event 137_4 : sets a game or interface text string
    {
        if (!(group_custom_maps_1)) goto event_137_4_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (empty_string))) goto event_137_4_end;
        if (!((string_size(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))) < (27))) goto event_137_4_end;
        ((Text*)get_instance(custommaplist_138_instances))->set_string(((Text*)get_instance(custommaplist_138_instances))->text+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)+str__198);
    }
    event_137_4_end: ;
}
// Function purpose: generated callback event_func_283 processes event block(s) 138_4. Actions/conditions:
//        138_4: sets a game or interface text string.
void Frames::event_func_283()
{
    // event 138_4 : sets a game or interface text string
    {
        if (!(group_custom_maps_1)) goto event_138_4_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (empty_string))) goto event_138_4_end;
        if (!((string_size(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0))) >= (27))) goto event_138_4_end;
        ((Text*)get_instance(custommaplist_138_instances))->set_string(((Text*)get_instance(custommaplist_138_instances))->text+left_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0), 27)+str__289);
    }
    event_138_4_end: ;
}
// Function purpose: generated callback event_func_284 processes event block(s) 139_4. Actions/conditions:
//        139_4: adds a customnames 150 instance; sets the selected object's vertical position to
//        gameVariables->get_value(61, currY); sets the selected object's horizontal position to 70; plus 6
//        more actions.
void Frames::event_func_284()
{
    // event 139_4 : adds a customnames 150 instance; sets the selected object's vertical position to gameVariables->get_value(61, currY); sets the selected object's horizontal position to 70; plus 6 more actions
    {
        if (!(group_custom_maps_1)) goto event_139_4_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)) != (empty_string))) goto event_139_4_end;
        customnames_150_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_customnames_150(0, -100), 0);
            customnames_150_instances.add_back();
        }
        for (ObjectIterator it(customnames_150_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(61, str_curry_290));
            ((SystemBox*)*it)->set_x(VITA_VIEW_X(((SystemBox*)*it), 70));
            ((SystemBox*)*it)->set_text(((ListObject*)get_instance(custommaps_136_instances))->get_line((((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)*10)+loop_create_custom_list_index));
        }
        ((SystemBox*)get_single(customnames_150_instances, default_systembox_instance))->move_front(((Active*)get_instance(custommaplistbg_137_instances)));
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(61, str_curry_290, 11);
    }
    event_139_4_end: ;
}
void Frames::loop_create_custom_list_4()
{
    event_func_281();
    event_func_282();
    event_func_283();
    event_func_284();
}
// Function purpose: generated callback event_func_285 processes event block(s) 133_4. Actions/conditions:
//        133_4: sets currY to 61; sets a game or interface text string; removes the selected object.
void Frames::event_func_285()
{
    // event 133_4 : sets currY to 61; sets a game or interface text string; removes the selected object
    {
        if (!(group_custom_maps_1)) goto event_133_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(61, str_curry_290, 61);
        ((Text*)get_instance(custommaplist_138_instances))->set_string(empty_string);
        customnames_150_instances.clear_selection();
        for (ObjectIterator it(customnames_150_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_133_4_end: ;
}
// Function purpose: generated callback event_func_286 processes event block(s) 134_4. Actions/conditions:
//        134_4: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_286()
{
    // event 134_4 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_custom_maps_1)) goto event_134_4_end;
        {
            loop_create_custom_list_running = true;
            int times = int(10);
            loop_create_custom_list_index = 0;
            while (loop_create_custom_list_index < times) {
                loop_create_custom_list_4();
                if (!loop_create_custom_list_running) break;
                loop_create_custom_list_index++;
            }
        }
    }
    event_134_4_end: ;
}
// Function purpose: generated callback event_func_287 processes event block(s) 135_4. Actions/conditions:
//        135_4: moves the selected object to the front; sets the selected object's visibility to true.
void Frames::event_func_287()
{
    // event 135_4 : moves the selected object to the front; sets the selected object's visibility to true
    {
        if (!(group_custom_maps_1)) goto event_135_4_end;
        ((Active*)get_instance(highlight_125_instances))->move_front(((SystemBox*)get_instance(customnames_150_instances)));
        customnames_150_instances.clear_selection();
        for (ObjectIterator it(customnames_150_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_135_4_end: ;
}
void Frames::loop_go_list_4()
{
    event_func_285();
    event_func_286();
    event_func_287();
}
// Function purpose: generated callback event_func_288 processes event block(s) 36_4. Actions/conditions: 36_4:
//        sets locked_perks to 1; sets locked_stalagflucht to 1; sets locked_shanktonstatepen to 1; plus 6 more
//        actions.
void Frames::event_func_288()
{
    // event 36_4 : sets locked_perks to 1; sets locked_stalagflucht to 1; sets locked_shanktonstatepen to 1; plus 6 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_locked_jungle_294, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(66, str_locked_sanpancho_295, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(67, str_locked_irongate_296, 1);
    }
    event_36_4_end: ;
}
// Function purpose: generated callback event_func_289 processes event block(s) 37_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 37_4: sets locked_perks to 0.
void Frames::event_func_289()
{
    // event 37_4 : sets locked_perks to 0
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_tutorial_298, 0)) == (1))) goto event_37_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
    }
    event_37_4_end: ;
}
// Function purpose: generated callback event_func_290 processes event block(s) 38_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 38_4: sets locked_perks to 0; sets locked_stalagflucht to 0.
void Frames::event_func_290()
{
    // event 38_4 : sets locked_perks to 0; sets locked_stalagflucht to 0
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_perks_143, 0)) == (1))) goto event_38_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
    }
    event_38_4_end: ;
}
// Function purpose: generated callback event_func_291 processes event block(s) 39_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 39_4: sets locked_perks to 0; sets locked_stalagflucht to 0.
void Frames::event_func_291()
{
    // event 39_4 : sets locked_perks to 0; sets locked_stalagflucht to 0
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_scores_245, str_perks_143, 0)) == (1))) goto event_39_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
    }
    event_39_4_end: ;
}
// Function purpose: generated callback event_func_292 processes event block(s) 40_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 40_4: sets locked_perks to 0; sets locked_stalagflucht to 0; sets
//        locked_shanktonstatepen to 0.
void Frames::event_func_292()
{
    // event 40_4 : sets locked_perks to 0; sets locked_stalagflucht to 0; sets locked_shanktonstatepen to 0
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_stalagflucht_144, 0)) == (1))) goto event_40_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 0);
    }
    event_40_4_end: ;
}
// Function purpose: generated callback event_func_293 processes event block(s) 41_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 41_4: sets locked_perks to 0; sets locked_stalagflucht to 0; sets
//        locked_shanktonstatepen to 0.
void Frames::event_func_293()
{
    // event 41_4 : sets locked_perks to 0; sets locked_stalagflucht to 0; sets locked_shanktonstatepen to 0
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_scores_245, str_stalagflucht_144, 0)) == (1))) goto event_41_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 0);
    }
    event_41_4_end: ;
}
// Function purpose: generated callback event_func_294 processes event block(s) 42_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 42_4: sets locked_perks to 0; sets locked_stalagflucht to 0; sets
//        locked_shanktonstatepen to 0; plus 1 more actions.
void Frames::event_func_294()
{
    // event 42_4 : sets locked_perks to 0; sets locked_stalagflucht to 0; sets locked_shanktonstatepen to 0; plus 1 more actions
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_shanktonstatepen_145, 0)) == (1))) goto event_42_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_locked_jungle_294, 0);
    }
    event_42_4_end: ;
}
// Function purpose: generated callback event_func_295 processes event block(s) 43_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 43_4: sets locked_perks to 0; sets locked_stalagflucht to 0; sets
//        locked_shanktonstatepen to 0; plus 1 more actions.
void Frames::event_func_295()
{
    // event 43_4 : sets locked_perks to 0; sets locked_stalagflucht to 0; sets locked_shanktonstatepen to 0; plus 1 more actions
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_scores_245, str_shanktonstatepen_145, 0)) == (1))) goto event_43_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_locked_jungle_294, 0);
    }
    event_43_4_end: ;
}
// Function purpose: generated callback event_func_296 processes event block(s) 44_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 44_4: sets locked_perks to 0; sets locked_stalagflucht to 0; sets
//        locked_shanktonstatepen to 0; plus 5 more actions.
void Frames::event_func_296()
{
    // event 44_4 : sets locked_perks to 0; sets locked_stalagflucht to 0; sets locked_shanktonstatepen to 0; plus 5 more actions
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_jungle_146, 0)) == (1))) goto event_44_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_locked_jungle_294, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(66, str_locked_sanpancho_295, 0);
    }
    event_44_4_end: ;
}
// Function purpose: generated callback event_func_297 processes event block(s) 45_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 45_4: sets locked_perks to 0; sets locked_stalagflucht to 0; sets
//        locked_shanktonstatepen to 0; plus 5 more actions.
void Frames::event_func_297()
{
    // event 45_4 : sets locked_perks to 0; sets locked_stalagflucht to 0; sets locked_shanktonstatepen to 0; plus 5 more actions
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_scores_245, str_jungle_146, 0)) == (1))) goto event_45_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_locked_jungle_294, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(66, str_locked_sanpancho_295, 0);
    }
    event_45_4_end: ;
}
// Function purpose: generated callback event_func_298 processes event block(s) 46_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 46_4: sets locked_perks to 0; sets locked_stalagflucht to 0; sets
//        locked_shanktonstatepen to 0; plus 6 more actions.
void Frames::event_func_298()
{
    // event 46_4 : sets locked_perks to 0; sets locked_stalagflucht to 0; sets locked_shanktonstatepen to 0; plus 6 more actions
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_sanpancho_147, 0)) == (1))) goto event_46_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_locked_jungle_294, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(66, str_locked_sanpancho_295, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(67, str_locked_irongate_296, 0);
    }
    event_46_4_end: ;
}
// Function purpose: generated callback event_func_299 processes event block(s) 47_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 47_4: sets locked_perks to 0; sets locked_stalagflucht to 0; sets
//        locked_shanktonstatepen to 0; plus 6 more actions.
void Frames::event_func_299()
{
    // event 47_4 : sets locked_perks to 0; sets locked_stalagflucht to 0; sets locked_shanktonstatepen to 0; plus 6 more actions
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_scores_245, str_sanpancho_147, 0)) != (0))) goto event_47_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_locked_jungle_294, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(66, str_locked_sanpancho_295, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(67, str_locked_irongate_296, 0);
    }
    event_47_4_end: ;
}
// Function purpose: generated callback event_func_300 processes event block(s) 48_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 48_4: sets locked_perks to 0; sets locked_stalagflucht to 0; sets
//        locked_shanktonstatepen to 0; plus 6 more actions.
void Frames::event_func_300()
{
    // event 48_4 : sets locked_perks to 0; sets locked_stalagflucht to 0; sets locked_shanktonstatepen to 0; plus 6 more actions
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_prisons_297, str_irongate_148, 0)) == (1))) goto event_48_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_locked_jungle_294, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(66, str_locked_sanpancho_295, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(67, str_locked_irongate_296, 0);
    }
    event_48_4_end: ;
}
// Function purpose: generated callback event_func_301 processes event block(s) 49_4. Group(s): Locks/Unlocks.
//        Actions/conditions: 49_4: sets locked_perks to 0; sets locked_stalagflucht to 0; sets
//        locked_shanktonstatepen to 0; plus 6 more actions.
void Frames::event_func_301()
{
    // event 49_4 : sets locked_perks to 0; sets locked_stalagflucht to 0; sets locked_shanktonstatepen to 0; plus 6 more actions
    {
        // group: Locks/Unlocks
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_scores_245, str_irongate_148, 0)) != (0))) goto event_49_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(62, str_locked_perks_291, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(63, str_locked_stalagflucht_292, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(64, str_locked_shanktonstatepen_293, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(65, str_locked_jungle_294, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(66, str_locked_sanpancho_295, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(67, str_locked_irongate_296, 0);
    }
    event_49_4_end: ;
}
void Frames::loop_lock_checks_4()
{
    if (allPrisonsIsOpened) {
        AssociateArray *vars = (AssociateArray*)get_instance(gameVariables_instances);
        vars->set_value("Locked_perks", 0);
        vars->set_value("Locked_stalagflucht", 0);
        vars->set_value("Locked_shanktonstatepen", 0);
        vars->set_value("Locked_jungle", 0);
        vars->set_value("Locked_sanpancho", 0);
        vars->set_value("Locked_irongate", 0);
        return;
    }
    event_func_288();
    event_func_289();
    event_func_290();
    event_func_291();
    event_func_292();
    event_func_293();
    event_func_294();
    event_func_295();
    event_func_296();
    event_func_297();
    event_func_298();
    event_func_299();
    event_func_300();
    event_func_301();
}
// Function purpose: generated callback event_func_302 processes event block(s) 152_4. Group(s): Prison Unlock
//        Cheat. Actions/conditions: 152_4: sets a game or interface text string.
void Frames::event_func_302()
{
    // event 152_4 : sets a game or interface text string
    {
        // group: Prison Unlock Cheat
        if (!((((ListObject*)get_instance(cheat2_131_instances))->find_string(((Text*)get_instance(cheat_128_instances))->text, -1)) == (-1))) goto event_152_4_end;
        ((Text*)get_instance(cheat_128_instances))->set_string(empty_string);
    }
    event_152_4_end: ;
}
// Function purpose: generated callback event_func_303 processes event block(s) 153_4. Group(s): Prison Unlock
//        Cheat. Actions/conditions: 153_4: sets a game or interface text string; plays a sound or music track;
//        decrypts a save-data file; plus 11 more actions.
void Frames::event_func_303()
{
    // event 153_4 : sets a game or interface text string; plays a sound or music track; decrypts a save-data file; plus 11 more actions
    {
        // group: Prison Unlock Cheat
        if (!((((Text*)get_instance(cheat_128_instances))->text) == (str_uuddlrlr_299))) goto event_153_4_end;
        ((Text*)get_instance(cheat_128_instances))->set_string(empty_string);
        media.play_id(SOUND_ACCOLADE_9, 1-1);
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
        ((INI*)get_instance(globals_127_instances))->set_value_int(str_prisons_297, str_tutorial_298, 1);
        ((INI*)get_instance(globals_127_instances))->set_value_int(str_prisons_297, str_perks_143, 1);
        ((INI*)get_instance(globals_127_instances))->set_value_int(str_prisons_297, str_stalagflucht_144, 1);
        ((INI*)get_instance(globals_127_instances))->set_value_int(str_prisons_297, str_shanktonstatepen_145, 1);
        ((INI*)get_instance(globals_127_instances))->set_value_int(str_prisons_297, str_jungle_146, 1);
        ((INI*)get_instance(globals_127_instances))->set_value_int(str_prisons_297, str_sanpancho_147, 1);
        ((INI*)get_instance(globals_127_instances))->save_file();
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
        {
            loop_lock_checks_running = true;
            int times = int(1);
            loop_lock_checks_index = 0;
            while (loop_lock_checks_index < times) {
                loop_lock_checks_4();
                if (!loop_lock_checks_running) break;
                loop_lock_checks_index++;
            }
        }
    }
    event_153_4_end: ;
}
void Frames::loop_checkcheat_4()
{
    event_func_302();
    event_func_303();
}
void Frames::test_collisions_4()
{
    ObjectList::iterator it1, it2;
}
// Function purpose: generated callback event_func_304 processes event block(s) 161_4. Group(s): Custom Maps
//        Init. Actions/conditions: 161_4: updates game state with File::copy_file(folder_search_name,
//        left_string(folder_search_name, string_size(folder_search_name)-; decrypts a save-data file; updates game
//        state with File::delete_file(folder_search_name).
void Frames::event_func_304()
{
    // event 161_4 : updates game state with File::copy_file(folder_search_name, left_string(folder_search_name, string_size(folder_search_name)-; decrypts a save-data file; updates game state with File::delete_file(folder_search_name)
    {
        // group: Custom Maps Init
        if (!((folder_search_id) == (10))) goto event_161_4_end;
        if (!((right_string(folder_search_name, 5)) == (str_pmap_301))) goto event_161_4_end;
    File::copy_file(folder_search_name, left_string(folder_search_name, string_size(folder_search_name)-5)+str_cmap_302);
    BlowfishObject::decrypt_file(str_mothking_99, left_string(folder_search_name, string_size(folder_search_name)-5)+str_cmap_302);
    File::delete_file(folder_search_name);
    }
    event_161_4_end: ;
}
// Function purpose: generated callback event_func_305 processes event block(s) 162_4. Group(s): Custom Maps
//        Init. Actions/conditions: 162_4: sets mName to File::get_title(folder_search_name); sets mName to
//        StringReplace::replace(gameVariables->get_string(68, mName), _, ); adds a line to the current list.
void Frames::event_func_305()
{
    // event 162_4 : sets mName to File::get_title(folder_search_name); sets mName to StringReplace::replace(gameVariables->get_string(68, mName), _, ); adds a line to the current list
    {
        // group: Custom Maps Init
        if (!((folder_search_id) == (10))) goto event_162_4_end;
        if (!((right_string(folder_search_name, 5)) == (str_cmap_302))) goto event_162_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(68, str_mname_303, File::get_title(folder_search_name));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(68, str_mname_303, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(68, str_mname_303), str__96, str__189));
        ((ListObject*)get_instance(custommaps_136_instances))->add_line(File::get_title(folder_search_name));
    }
    event_162_4_end: ;
}
void Frames::folder_search_loop_4()
{
    event_func_304();
    event_func_305();
}
// Function purpose: generated callback event_func_306 processes event block(s) 163_4. Actions/conditions:
//        163_4: sets the current line selection.
void Frames::event_func_306()
{
    // event 163_4 : sets the current line selection
    {
        ((ListObject*)get_instance(custommaps_136_instances))->current_line = 0;
    }
    event_163_4_end: ;
}
// Function purpose: generated callback event_func_307 processes event block(s) 164_4. Group(s): Custom Maps
//        Init. Actions/conditions: 164_4: updates game state with current_line = get_value(69, CustMapSel).
void Frames::event_func_307()
{
    // event 164_4 : updates game state with current_line = get_value(69, CustMapSel)
    {
        // group: Custom Maps Init
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(69, str_custmapsel_304)) != (0))) goto event_164_4_end;
        ((ListObject*)get_instance(custommaps_136_instances))->current_line = ((AssociateArray*)get_instance(gameVariables_instances))->get_value(69, str_custmapsel_304);
    }
    event_164_4_end: ;
}
void Frames::folder_search_finish_4()
{
    event_func_306();
    event_func_307();
}
// Function purpose: generated callback event_func_308 processes event block(s) 180_4. Actions/conditions:
//        180_4: changes a stored game value.
void Frames::event_func_308()
{
    // event 180_4 : changes a stored game value
    {
        if (!(group_get_subs_and_enable_download_1)) goto event_180_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(70, str_dload_queue_305, 1);
    }
    event_180_4_end: ;
}
void Frames::steam_download_success_4()
{
    event_func_308();
}
void Frames::steam_download_fail_4()
{
    steam_download_success_4();
}
// Function purpose: generated callback event_func_309 processes event block(s) 175_4. Actions/conditions:
//        175_4: adds a line to the current list; adds a line to the current list.
void Frames::event_func_309()
{
    // event 175_4 : adds a line to the current list; adds a line to the current list
    {
        if (!(group_get_subs_and_enable_download_1)) goto event_175_4_end;
        ((ListObject*)get_instance(workshop_130_instances))->add_line(number_to_string(get_event_dummy(SteamObject::sub_result.publish_id, get_event_dummy(SteamObject::sub_result.index, str_subs_306), str_subs_306))+str__254+File::get_title(get_event_dummy(SteamObject::sub_result.cloud_path, get_event_dummy(SteamObject::sub_result.index, str_subs_306), str_subs_306))+str__254+File::get_ext(get_event_dummy(SteamObject::sub_result.cloud_path, get_event_dummy(SteamObject::sub_result.index, str_subs_306), str_subs_306)));
        ((ListObject*)get_instance(download_151_instances))->add_line(File::get_title(get_event_dummy(SteamObject::sub_result.cloud_path, get_event_dummy(SteamObject::sub_result.index, str_subs_306), str_subs_306))+File::get_ext(get_event_dummy(SteamObject::sub_result.cloud_path, get_event_dummy(SteamObject::sub_result.index, str_subs_306), str_subs_306)));
    }
    event_175_4_end: ;
}
void Frames::steam_on_loop_4()
{
    event_func_309();
}
// Function purpose: generated callback event_func_310 processes event block(s) 176_4. Actions/conditions:
//        176_4: changes the selected object transparency; changes the selected object transparency.
void Frames::event_func_310()
{
    // event 176_4 : changes the selected object transparency; changes the selected object transparency
    {
        if (!(group_get_subs_and_enable_download_1)) goto event_176_4_end;
        ((Active*)get_instance(download2_148_instances))->blend_color.set_alpha_coefficient(0);
        ((Text*)get_instance(downoad_147_instances))->blend_color.set_alpha_coefficient(0);
    }
    event_176_4_end: ;
}
void Frames::steam_on_loop_finish_4()
{
    event_func_310();
}
// Function purpose: generated callback event_func_311 processes event block(s) 174_4. Actions/conditions:
//        174_4: updates game state with get_subs((EventFunction)&Frames::steam_on_loop_4,
//        (EventFunction)&Frames::steam_on_loop_finish_4).
void Frames::event_func_311()
{
    // event 174_4 : updates game state with get_subs((EventFunction)&Frames::steam_on_loop_4, (EventFunction)&Frames::steam_on_loop_finish_4)
    {
        if (!(group_get_subs_and_enable_download_1)) goto event_174_4_end;
        {
            ((SteamObject*)get_instance(steamworks2_15_instances))->get_subs((EventFunction)&Frames::steam_on_loop_4, (EventFunction)&Frames::steam_on_loop_finish_4);
        }
    }
    event_174_4_end: ;
}
void Frames::steam_search_success_4()
{
    event_func_311();
}
void Frames::steam_on_connect_4()
{
    folder_search_loop_0();
}
// Function purpose: generated callback event_func_312 processes event block(s) 1_4. Actions/conditions: 1_4:
//        removes the selected object.
void Frames::event_func_312()
{
    // event 1_4 : removes the selected object
    {
        if (!((global_values->get(16)) == (0))) goto event_1_4_end;
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1_4_end: ;
}
// Function purpose: generated callback event_func_313 processes event block(s) 14_4. Actions/conditions: 14_4:
//        sets the selected object's horizontal position to get_mouse_x(); sets the selected object's vertical
//        position to get_mouse_y(); moves the selected object to the front; plus 6 more actions.
void Frames::event_func_313()
{
    // event 14_4 : sets the selected object's horizontal position to get_mouse_x(); sets the selected object's vertical position to get_mouse_y(); moves the selected object to the front; plus 6 more actions
    {
        ((Active*)get_instance(mouse_9_instances))->set_x(get_mouse_x());
        ((Active*)get_instance(mouse_9_instances))->set_y(get_mouse_y());
        ((Active*)get_instance(mouse_9_instances))->move_front();
        ((Active*)get_instance(letsgo_100_instances))->set_direction(0);
        ((Active*)get_instance(back_102_instances))->set_direction(0);
        ((Active*)get_instance(download2_148_instances))->set_direction(0);
    }
    event_14_4_end: ;
}
// Function purpose: generated callback event_func_314 processes event block(s) 15_4. Actions/conditions: 15_4:
//        sets LClick to 0.
void Frames::event_func_314()
{
    // event 15_4 : sets LClick to 0
    {
        if (is_mouse_pressed(SDL_BUTTON_LEFT)) goto event_15_4_end;
        if (is_key_pressed(SDLK_ESCAPE)) goto event_15_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 0);
    }
    event_15_4_end: ;
}
// Function purpose: generated callback event_func_315 processes event block(s) 16_4. Actions/conditions: 16_4:
//        sets global value 17 from mainmaps_114->current_line.
void Frames::event_func_315()
{
    // event 16_4 : sets global value 17 from mainmaps_114->current_line
    {
        global_values->set(17, ((ListObject*)get_instance(mainmaps_114_instances))->current_line);
    }
    event_16_4_end: ;
}
// Function purpose: generated callback event_func_316 processes event block(s) 17_4. Actions/conditions: 17_4:
//        plays a sound or music track; sets LClick to 1; sets Name to Prisoner.
void Frames::event_func_316()
{
    // event 17_4 : plays a sound or music track; sets LClick to 1; sets Name to Prisoner
    {
        if (!(((Active*)get_instance(letsgo_100_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_17_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_17_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) == (1))) goto event_17_4_end;
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_17_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_17_4_end;
        if (layers[3-1].visible) goto event_17_4_end;
        if (layers[4-1].visible) goto event_17_4_end;
        if (layers[5-1].visible) goto event_17_4_end;
        media.play_id(SOUND_OPEN_5, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(47, str_name_103, str_prisoner_307);
        next_frame = 5 + 0;    
    
    }
    event_17_4_end: ;
}
// Function purpose: generated callback event_func_317 processes event block(s) 18_4. Actions/conditions: 18_4:
//        plays a sound or music track; sets LClick to 1.
void Frames::event_func_317()
{
    // event 18_4 : plays a sound or music track; sets LClick to 1
    {
        if (!(((Active*)get_instance(letsgo_100_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_18_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_18_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) > (1))) goto event_18_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) < (8))) goto event_18_4_end;
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_18_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_18_4_end;
        if (((Active*)get_instance(active3_63_instances))->flags & VISIBLE) goto event_18_4_end;
        if (layers[3-1].visible) goto event_18_4_end;
        if (layers[4-1].visible) goto event_18_4_end;
        if (layers[5-1].visible) goto event_18_4_end;
        media.play_id(SOUND_OPEN_5, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        next_frame = 3 + 0;    
    
    }
    event_18_4_end: ;
}
// Function purpose: generated callback event_func_318 processes event block(s) 19_4. Actions/conditions: 19_4:
//        plays a sound or music track; sets LClick to 1; sets the object's animation to 5.
void Frames::event_func_318()
{
    // event 19_4 : plays a sound or music track; sets LClick to 1; sets the object's animation to 5
    {
        if (!(((Active*)get_instance(letsgo_100_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_19_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_19_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) > (1))) goto event_19_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) < (8))) goto event_19_4_end;
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_19_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_19_4_end;
        if (!(((Active*)get_instance(active3_63_instances))->flags & VISIBLE)) goto event_19_4_end;
        if (layers[3-1].visible) goto event_19_4_end;
        if (layers[4-1].visible) goto event_19_4_end;
        if (layers[5-1].visible) goto event_19_4_end;
        media.play_id(SOUND_LOSE_8, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((Active*)get_instance(active3_63_instances))->force_animation(5);
    }
    event_19_4_end: ;
}
// Function purpose: generated callback event_func_319 processes event block(s) 22_4. Actions/conditions: 22_4:
//        sets the selected object's visibility to false.
void Frames::event_func_319()
{
    // event 22_4 : sets the selected object's visibility to false
    {
        if (!((((ListObject*)get_instance(bonusmaps_126_instances))->get_count()) == (0))) goto event_22_4_end;
        if (!(((Active*)get_instance(highlight_125_instances))->flags & VISIBLE)) goto event_22_4_end;
        if (!(((Active*)get_instance(bonus_82_instances))->flags & VISIBLE)) goto event_22_4_end;
        ((Active*)get_instance(highlight_125_instances))->set_visible(false);
    }
    event_22_4_end: ;
}
// Function purpose: generated callback event_func_320 processes event block(s) 23_4. Actions/conditions: 23_4:
//        sets the selected object's visibility to false.
void Frames::event_func_320()
{
    // event 23_4 : sets the selected object's visibility to false
    {
        if (!((((ListObject*)get_instance(workshop_130_instances))->get_count()) == (0))) goto event_23_4_end;
        if (!(((Active*)get_instance(highlight_125_instances))->flags & VISIBLE)) goto event_23_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_23_4_end;
        ((Active*)get_instance(highlight_125_instances))->set_visible(false);
    }
    event_23_4_end: ;
}
// Function purpose: generated callback event_func_321 processes event block(s) 24_4. Actions/conditions: 24_4:
//        sets the selected object's visibility to false.
void Frames::event_func_321()
{
    // event 24_4 : sets the selected object's visibility to false
    {
        if (!((((ListObject*)get_instance(custommaps_136_instances))->get_count()) == (0))) goto event_24_4_end;
        if (!(((Active*)get_instance(highlight_125_instances))->flags & VISIBLE)) goto event_24_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_24_4_end;
        ((Active*)get_instance(highlight_125_instances))->set_visible(false);
    }
    event_24_4_end: ;
}
// Function purpose: generated callback event_func_322 processes event block(s) 25_4. Actions/conditions: 25_4:
//        plays a sound or music track; sets LClick to 1; sets global value 17 from 0; plus 1 more actions.
void Frames::event_func_322()
{
    // event 25_4 : plays a sound or music track; sets LClick to 1; sets global value 17 from 0; plus 1 more actions
    {
        if (!(((Active*)get_instance(letsgo_100_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_25_4_end;
        if (!((((Active*)get_instance(letsgo_100_instances))->alterables->values.get(0)) == (0))) goto event_25_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_25_4_end;
        if (!(((Active*)get_instance(bonus_82_instances))->flags & VISIBLE)) goto event_25_4_end;
        if (!((((ListObject*)get_instance(bonusmaps_126_instances))->get_count()) > (0))) goto event_25_4_end;
        if (layers[3-1].visible) goto event_25_4_end;
        if (layers[4-1].visible) goto event_25_4_end;
        if (layers[5-1].visible) goto event_25_4_end;
        media.play_id(SOUND_OPEN_5, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        global_values->set(17, 0);
        global_values->set(18, 1);
        next_frame = 3 + 0;    
    
    }
    event_25_4_end: ;
}
// Function purpose: generated callback event_func_323 processes event block(s) 26_4. Actions/conditions: 26_4:
//        sets LClick to 1; plays a sound or music track.
void Frames::event_func_323()
{
    // event 26_4 : sets LClick to 1; plays a sound or music track
    {
        if (!(((Active*)get_instance(letsgo_100_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_26_4_end;
        if (!((((Active*)get_instance(letsgo_100_instances))->alterables->values.get(0)) == (1))) goto event_26_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_26_4_end;
        if (!(((Active*)get_instance(bonus_82_instances))->flags & VISIBLE)) goto event_26_4_end;
        if (!((((ListObject*)get_instance(bonusmaps_126_instances))->get_count()) > (0))) goto event_26_4_end;
        if (layers[3-1].visible) goto event_26_4_end;
        if (layers[4-1].visible) goto event_26_4_end;
        if (layers[5-1].visible) goto event_26_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_dlc_url_running = true;
            int times = int(1);
            loop_dlc_url_index = 0;
            while (loop_dlc_url_index < times) {
                loop_dlc_url_4();
                if (!loop_dlc_url_running) break;
                loop_dlc_url_index++;
            }
        }
    }
    event_26_4_end: ;
}
// Function purpose: generated callback event_func_324 processes event block(s) 32_4. Actions/conditions: 32_4:
//        plays a sound or music track; sets LClick to 1; sets global value 17 from 0; plus 1 more actions.
void Frames::event_func_324()
{
    // event 32_4 : plays a sound or music track; sets LClick to 1; sets global value 17 from 0; plus 1 more actions
    {
        if (!(((Active*)get_instance(letsgo_100_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_32_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_32_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_32_4_end;
        if (!((((ListObject*)get_instance(workshop_130_instances))->get_count()) > (0))) goto event_32_4_end;
        if (layers[3-1].visible) goto event_32_4_end;
        if (layers[4-1].visible) goto event_32_4_end;
        if (layers[5-1].visible) goto event_32_4_end;
        media.play_id(SOUND_OPEN_5, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        global_values->set(17, 0);
        global_values->set(18, 2);
        next_frame = 3 + 0;    
    
    }
    event_32_4_end: ;
}
// Function purpose: generated callback event_func_325 processes event block(s) 33_4. Actions/conditions: 33_4:
//        plays a sound or music track; sets LClick to 1; sets global value 17 from 0; plus 1 more actions.
void Frames::event_func_325()
{
    // event 33_4 : plays a sound or music track; sets LClick to 1; sets global value 17 from 0; plus 1 more actions
    {
        if (!(((Active*)get_instance(letsgo_100_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_33_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_33_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_33_4_end;
        if (!((((ListObject*)get_instance(custommaps_136_instances))->get_count()) > (0))) goto event_33_4_end;
        if (layers[3-1].visible) goto event_33_4_end;
        if (layers[4-1].visible) goto event_33_4_end;
        if (layers[5-1].visible) goto event_33_4_end;
        media.play_id(SOUND_OPEN_5, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        global_values->set(17, 0);
        global_values->set(18, 2);
        next_frame = 3 + 0;    
    
    }
    event_33_4_end: ;
}
// Function purpose: generated callback event_func_326 processes event block(s) 34_4. Actions/conditions: 34_4:
//        sets LClick to 1; plays a sound or music track.
void Frames::event_func_326()
{
    // event 34_4 : sets LClick to 1; plays a sound or music track
    {
        if (!(((Active*)get_instance(back_102_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_34_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_34_4_end;
        if (layers[3-1].visible) goto event_34_4_end;
        if (layers[4-1].visible) goto event_34_4_end;
        if (layers[5-1].visible) goto event_34_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        media.play_id(SOUND_CLOSE_6, 1-1);
        next_frame = 2 + 0;    
    
    }
    event_34_4_end: ;
}
// Function purpose: generated callback event_func_327 processes event block(s) 50_4. Group(s): Custom/Main.
//        Actions/conditions: 50_4: sets LClick to 1; sets the selected object's direction to 0; sets the selected
//        object's visibility to true; plus 30 more actions.
void Frames::event_func_327()
{
    // event 50_4 : sets LClick to 1; sets the selected object's direction to 0; sets the selected object's visibility to true; plus 30 more actions
    {
        // group: Custom/Main
        main_124_instances.clear_selection();
        for (ObjectIterator it(main_124_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!main_124_instances.has_selection()) goto event_50_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_50_4_end;
        if (frame_time - restrict_50_4 < 0.5) goto event_50_4_end;
        restrict_50_4 = frame_time;
        if (layers[3-1].visible) goto event_50_4_end;
        if (layers[4-1].visible) goto event_50_4_end;
        if (layers[5-1].visible) goto event_50_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        for (ObjectIterator it(main_124_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(mainpic_113_instances))->set_visible(true);
        ((Active*)get_instance(active2_86_instances))->set_visible(true);
        ((Active*)get_instance(active_24_instances))->set_visible(true);
        ((Text*)get_instance(mainname_115_instances))->set_visible(true);
        ((Text*)get_instance(maindiff_123_instances))->set_visible(true);
        ((Active*)get_instance(highlight_125_instances))->set_visible(false);
        media.play_id(SOUND_PLIP_16, 1-1);
        ((Active*)get_instance(bonus_129_instances))->set_direction(0);
        ((Active*)get_instance(active6_41_instances))->set_visible(false);
        ((Text*)get_instance(custommaplist_138_instances))->set_y(VITA_VIEW_Y(((Text*)get_instance(custommaplist_138_instances)), 300));
        ((Active*)get_instance(custommaplistbg_137_instances))->set_visible(false);
        ((Active*)get_instance(custommaplistbg_137_instances))->set_y(VITA_VIEW_Y(((Active*)get_instance(custommaplistbg_137_instances)), 300));
        ((Active*)get_instance(custom2_135_instances))->set_direction(0);
        if (!group_main_maps_1) {
            group_main_maps_1 = true;
            group_check_group_main_maps_1_0 = true;
        }
            group_bonus_maps_1 = false;
    
            group_custom_maps_1 = false;
    
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(60, str_page_288, 0);
        ((Text*)get_instance(back2_68_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(71, str_back_string_x_308));
        ((Text*)get_instance(back2_68_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(72, str_back_string_y_309));
        ((Text*)get_instance(continue_101_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(73, str_go_string_x_310));
        ((Text*)get_instance(continue_101_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(74, str_go_string_y_311));
        ((Text*)get_instance(continue_101_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
        ((Active*)get_instance(back_102_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(75, str_back_button_x_312));
        ((Active*)get_instance(back_102_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(76, str_back_button_y_313));
        ((Active*)get_instance(letsgo_100_instances))->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(77, str_go_button_x_314));
        ((Active*)get_instance(letsgo_100_instances))->set_y(((AssociateArray*)get_instance(gameVariables_instances))->get_value(78, str_go_button_y_315));
        {
            ((Active*)get_instance(download2_148_instances))->set_global_position(-110, 112);
            pos_end_50_4_0: ;
        }
        {
            ((Text*)get_instance(downoad_147_instances))->set_global_position(-51, 334);
            pos_end_50_4_1: ;
        }
        customnames_150_instances.clear_selection();
        for (ObjectIterator it(customnames_150_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        ((Active*)get_instance(bonus_82_instances))->set_visible(false);
        ((Active*)get_instance(t17presents_91_instances))->set_visible(false);
    }
    event_50_4_end: ;
}
// Function purpose: generated callback event_func_328 processes event block(s) 51_4. Group(s): Custom/Main.
//        Actions/conditions: 51_4: sets MapScreen to empty_string; plays a sound or music track; sets the object's
//        animation to 0; plus 21 more actions.
void Frames::event_func_328()
{
    // event 51_4 : sets MapScreen to empty_string; plays a sound or music track; sets the object's animation to 0; plus 21 more actions
    {
        // group: Custom/Main
        bonus_129_instances.clear_selection();
        for (ObjectIterator it(bonus_129_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!bonus_129_instances.has_selection()) goto event_51_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(41, str_lclick_203)) == (0))) goto event_51_4_end;
        if (frame_time - restrict_51_4 < 0.5) goto event_51_4_end;
        restrict_51_4 = frame_time;
        if (layers[3-1].visible) goto event_51_4_end;
        if (layers[4-1].visible) goto event_51_4_end;
        if (layers[5-1].visible) goto event_51_4_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(79, str_mapscreen_316, empty_string);
        }
        media.play_id(SOUND_PLIP_16, 1-1);
        for (ObjectIterator it(bonus_129_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        main_124_instances.clear_selection();
        for (ObjectIterator it(main_124_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(bonus_129_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        custom2_135_instances.clear_selection();
        for (ObjectIterator it(custom2_135_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        maindiff_123_instances.clear_selection();
        for (ObjectIterator it(maindiff_123_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        mainpic_113_instances.clear_selection();
        for (ObjectIterator it(mainpic_113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        active3_63_instances.clear_selection();
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        custommaplistbg_137_instances.clear_selection();
        for (ObjectIterator it(custommaplistbg_137_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 300));
            ((Active*)*it)->set_visible(false);
        }
        custommaplist_138_instances.clear_selection();
        for (ObjectIterator it(custommaplist_138_instances); !it.end(); ++it) {
            ((Text*)*it)->set_y(VITA_VIEW_Y(((Text*)*it), 300));
        }
        active6_41_instances.clear_selection();
        for (ObjectIterator it(active6_41_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(41, str_lclick_203, 1);
            ((AssociateArray*)*it)->set_value(60, str_page_288, 0);
        }
        if (!group_bonus_maps_1) {
            group_bonus_maps_1 = true;
            group_check_group_bonus_maps_1_0 = true;
        }
            group_main_maps_1 = false;
    
            group_custom_maps_1 = false;
    
        {
            loop_create_bonus_list_running = true;
            int times = int(((ListObject*)get_instance(bonusmaps_126_instances))->get_count());
            loop_create_bonus_list_index = 0;
            while (loop_create_bonus_list_index < times) {
                loop_create_bonus_list_4();
                if (!loop_create_bonus_list_running) break;
                loop_create_bonus_list_index++;
            }
        }
        highlight_125_instances.clear_selection();
        for (ObjectIterator it(highlight_125_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_animation(0);
        }
        back2_68_instances.clear_selection();
        for (ObjectIterator it(back2_68_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(71, str_back_string_x_308));
            ((Text*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(72, str_back_string_y_309));
        }
        continue_101_instances.clear_selection();
        for (ObjectIterator it(continue_101_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(73, str_go_string_x_310));
            ((Text*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(74, str_go_string_y_311));
        }
        back_102_instances.clear_selection();
        for (ObjectIterator it(back_102_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(75, str_back_button_x_312));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(76, str_back_button_y_313));
        }
        letsgo_100_instances.clear_selection();
        for (ObjectIterator it(letsgo_100_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(77, str_go_button_x_314));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(78, str_go_button_y_315));
        }
        download2_148_instances.clear_selection();
        for (ObjectIterator it(download2_148_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-110, 112);
            pos_end_51_4_0: ;
        }
        downoad_147_instances.clear_selection();
        for (ObjectIterator it(downoad_147_instances); !it.end(); ++it) {
            ((Text*)*it)->set_global_position(-51, 334);
            pos_end_51_4_1: ;
        }
        customnames_150_instances.clear_selection();
        for (ObjectIterator it(customnames_150_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        bonus_82_instances.clear_selection();
        for (ObjectIterator it(bonus_82_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        active2_86_instances.clear_selection();
        for (ObjectIterator it(active2_86_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        mainname_115_instances.clear_selection();
        for (ObjectIterator it(mainname_115_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(true);
        }
        t17presents_91_instances.clear_selection();
        for (ObjectIterator it(t17presents_91_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        {
            loop_refresh_bonus_running = true;
            int times = int(1);
            loop_refresh_bonus_index = 0;
            while (loop_refresh_bonus_index < times) {
                loop_refresh_bonus_4();
                if (!loop_refresh_bonus_running) break;
                loop_refresh_bonus_index++;
            }
        }
    }
    event_51_4_end: ;
}
// Function purpose: generated callback event_func_329 processes event block(s) 52_4. Group(s): Custom/Main.
//        Actions/conditions: 52_4: sets MapScreen to empty_string; plays a sound or music track; sets the object's
//        animation to 0; plus 21 more actions.
void Frames::event_func_329()
{
    // event 52_4 : sets MapScreen to empty_string; plays a sound or music track; sets the object's animation to 0; plus 21 more actions
    {
        // group: Custom/Main
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(79, str_mapscreen_316)) == (str_bonus_317))) goto event_52_4_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_string(79, str_mapscreen_316, empty_string);
        }
        media.play_id(SOUND_PLIP_16, 1-1);
        bonus_129_instances.clear_selection();
        for (ObjectIterator it(bonus_129_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        main_124_instances.clear_selection();
        for (ObjectIterator it(main_124_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(bonus_129_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        custom2_135_instances.clear_selection();
        for (ObjectIterator it(custom2_135_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        maindiff_123_instances.clear_selection();
        for (ObjectIterator it(maindiff_123_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        mainpic_113_instances.clear_selection();
        for (ObjectIterator it(mainpic_113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        active3_63_instances.clear_selection();
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        custommaplistbg_137_instances.clear_selection();
        for (ObjectIterator it(custommaplistbg_137_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 300));
            ((Active*)*it)->set_visible(false);
        }
        custommaplist_138_instances.clear_selection();
        for (ObjectIterator it(custommaplist_138_instances); !it.end(); ++it) {
            ((Text*)*it)->set_y(VITA_VIEW_Y(((Text*)*it), 300));
        }
        active6_41_instances.clear_selection();
        for (ObjectIterator it(active6_41_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(41, str_lclick_203, 1);
            ((AssociateArray*)*it)->set_value(60, str_page_288, 0);
        }
        if (!group_bonus_maps_1) {
            group_bonus_maps_1 = true;
            group_check_group_bonus_maps_1_0 = true;
        }
            group_main_maps_1 = false;
    
            group_custom_maps_1 = false;
    
        {
            loop_create_bonus_list_running = true;
            int times = int(((ListObject*)get_instance(bonusmaps_126_instances))->get_count());
            loop_create_bonus_list_index = 0;
            while (loop_create_bonus_list_index < times) {
                loop_create_bonus_list_4();
                if (!loop_create_bonus_list_running) break;
                loop_create_bonus_list_index++;
            }
        }
        highlight_125_instances.clear_selection();
        for (ObjectIterator it(highlight_125_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_animation(0);
        }
        back2_68_instances.clear_selection();
        for (ObjectIterator it(back2_68_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(71, str_back_string_x_308));
            ((Text*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(72, str_back_string_y_309));
        }
        continue_101_instances.clear_selection();
        for (ObjectIterator it(continue_101_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(73, str_go_string_x_310));
            ((Text*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(74, str_go_string_y_311));
        }
        back_102_instances.clear_selection();
        for (ObjectIterator it(back_102_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(75, str_back_button_x_312));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(76, str_back_button_y_313));
        }
        letsgo_100_instances.clear_selection();
        for (ObjectIterator it(letsgo_100_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(77, str_go_button_x_314));
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(78, str_go_button_y_315));
        }
        download2_148_instances.clear_selection();
        for (ObjectIterator it(download2_148_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-110, 112);
            pos_end_52_4_0: ;
        }
        downoad_147_instances.clear_selection();
        for (ObjectIterator it(downoad_147_instances); !it.end(); ++it) {
            ((Text*)*it)->set_global_position(-51, 334);
            pos_end_52_4_1: ;
        }
        customnames_150_instances.clear_selection();
        for (ObjectIterator it(customnames_150_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        bonus_82_instances.clear_selection();
        for (ObjectIterator it(bonus_82_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        active2_86_instances.clear_selection();
        for (ObjectIterator it(active2_86_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        mainname_115_instances.clear_selection();
        for (ObjectIterator it(mainname_115_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(true);
        }
        t17presents_91_instances.clear_selection();
        for (ObjectIterator it(t17presents_91_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        {
            loop_refresh_bonus_running = true;
            int times = int(1);
            loop_refresh_bonus_index = 0;
            while (loop_refresh_bonus_index < times) {
                loop_refresh_bonus_4();
                if (!loop_refresh_bonus_running) break;
                loop_refresh_bonus_index++;
            }
        }
    }
    event_52_4_end: ;
}
// Function purpose: generated callback event_func_330 processes event block(s) 53_4. Group(s): Custom/Main.
//        Actions/conditions: 53_4: sets CustMapSel to 0; sets MapScreen to empty_string; sets the selected object's
//        direction to 16; plus 28 more actions.
void Frames::event_func_330()
{
    // event 53_4 : sets CustMapSel to 0; sets MapScreen to empty_string; sets the selected object's direction to 16; plus 28 more actions
    {
        // group: Custom/Main
        custom2_135_instances.clear_selection();
        for (ObjectIterator it(custom2_135_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!custom2_135_instances.has_selection()) goto event_53_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(41, str_lclick_203)) == (0))) goto event_53_4_end;
        if (frame_time - restrict_53_4 < 0.5) goto event_53_4_end;
        restrict_53_4 = frame_time;
        if (layers[3-1].visible) goto event_53_4_end;
        if (layers[4-1].visible) goto event_53_4_end;
        if (layers[5-1].visible) goto event_53_4_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(69, str_custmapsel_304, 0);
            ((AssociateArray*)*it)->set_string(79, str_mapscreen_316, empty_string);
        }
        main_124_instances.clear_selection();
        for (ObjectIterator it(main_124_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bonus_129_instances.clear_selection();
        for (ObjectIterator it(bonus_129_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(custom2_135_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        mainpic_113_instances.clear_selection();
        for (ObjectIterator it(mainpic_113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        active2_86_instances.clear_selection();
        for (ObjectIterator it(active2_86_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        mainname_115_instances.clear_selection();
        for (ObjectIterator it(mainname_115_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        maindiff_123_instances.clear_selection();
        for (ObjectIterator it(maindiff_123_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        media.play_id(SOUND_PLIP_16, 1-1);
        active3_63_instances.clear_selection();
        for (ObjectIterator it(active3_63_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        active6_41_instances.clear_selection();
        for (ObjectIterator it(active6_41_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        custommaplist_138_instances.clear_selection();
        for (ObjectIterator it(custommaplist_138_instances); !it.end(); ++it) {
            ((Text*)*it)->set_y(VITA_VIEW_Y(((Text*)*it), 61));
            ((Text*)*it)->move_front();
            ((Text*)*it)->set_string(empty_string);
        }
        custommaplistbg_137_instances.clear_selection();
        for (ObjectIterator it(custommaplistbg_137_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(VITA_VIEW_Y(((Active*)*it), 57));
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(41, str_lclick_203, 1);
            ((AssociateArray*)*it)->set_value(60, str_page_288, 0);
        }
        if (!group_custom_maps_1) {
            group_custom_maps_1 = true;
            group_check_group_custom_maps_1_0 = true;
        }
            group_main_maps_1 = false;
    
            group_bonus_maps_1 = false;
    
        {
            loop_create_custom_list_running = true;
            int times = int(10);
            loop_create_custom_list_index = 0;
            while (loop_create_custom_list_index < times) {
                loop_create_custom_list_4();
                if (!loop_create_custom_list_running) break;
                loop_create_custom_list_index++;
            }
        }
        custommaps_136_instances.clear_selection();
        for (ObjectIterator it(custommaps_136_instances); !it.end(); ++it) {
            ((ListObject*)*it)->current_line = 0;
        }
        highlight_125_instances.clear_selection();
        for (ObjectIterator it(highlight_125_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_animation(5);
        }
        back2_68_instances.clear_selection();
        for (ObjectIterator it(back2_68_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(71, str_back_string_x_308)-36);
            ((Text*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(72, str_back_string_y_309));
        }
        continue_101_instances.clear_selection();
        for (ObjectIterator it(continue_101_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(73, str_go_string_x_310)+36);
            ((Text*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(74, str_go_string_y_311));
            ((Text*)*it)->set_string(lowercase_string(((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_title_play_168, str_6_241)));
        }
        back_102_instances.clear_selection();
        for (ObjectIterator it(back_102_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(75, str_back_button_x_312)-36);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(76, str_back_button_y_313));
        }
        letsgo_100_instances.clear_selection();
        for (ObjectIterator it(letsgo_100_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(77, str_go_button_x_314)+36);
            ((Active*)*it)->set_y(((AssociateArray*)get_instance(gameVariables_instances, it.current_index, default_assarray_instance))->get_value(78, str_go_button_y_315));
        }
        download2_148_instances.clear_selection();
        for (ObjectIterator it(download2_148_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(128, 186);
            pos_end_53_4_0: ;
        }
        downoad_147_instances.clear_selection();
        for (ObjectIterator it(downoad_147_instances); !it.end(); ++it) {
            ((Text*)*it)->set_global_position(121, 188);
            pos_end_53_4_1: ;
        }
        customnames_150_instances.clear_selection();
        for (ObjectIterator it(customnames_150_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        bonus_82_instances.clear_selection();
        for (ObjectIterator it(bonus_82_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        settings_142_instances.clear_selection();
        for (ObjectIterator it(settings_142_instances); !it.end(); ++it) {
            ((INI*)*it)->set_value_int(str_settings_52, str_custommaps_318, ((ListObject*)get_single(custommaps_136_instances, it.current_index))->get_count());
        }
        t17presents_91_instances.clear_selection();
        for (ObjectIterator it(t17presents_91_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_53_4_end: ;
}
