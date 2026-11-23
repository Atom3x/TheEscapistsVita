#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_5035 processes event block(s) 28_8. Actions/conditions:
//        28_8: sets the selected object's direction to 16.
void Frames::event_func_5035()
{
    // event 28_8 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(active4_87_instances))->mouse_over())) goto event_28_8_end;
        ((Active*)get_instance(active4_87_instances))->set_direction(16);
    }
    event_28_8_end: ;
}
// Function purpose: generated callback event_func_5036 processes event block(s) 29_8. Actions/conditions:
//        29_8: plays a sound or music track.
void Frames::event_func_5036()
{
    // event 29_8 : plays a sound or music track
    {
        if (!(((Active*)get_instance(active4_87_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_29_8_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_29_8_end;
        next_frame = 2 + 0;    
    
        media.play_id(SOUND_RUMBLE_15, 1-1);
    }
    event_29_8_end: ;
}
// Function purpose: generated callback event_func_5037 processes event block(s) 30_8. Actions/conditions:
//        30_8: sets the selected object's visibility to false.
void Frames::event_func_5037()
{
    // event 30_8 : sets the selected object's visibility to false
    {
        ((Active*)get_instance(hover_560_instances))->set_visible(false);
    }
    event_30_8_end: ;
}
// Function purpose: generated callback event_func_5038 processes event block(s) 31_8. Actions/conditions:
//        31_8: sets the selected object's vertical position to ((get_mouse_y()/MathHelper()/11)*11)+2; sets the
//        selected object's visibility to true.
void Frames::event_func_5038()
{
    // event 31_8 : sets the selected object's vertical position to ((get_mouse_y()/MathHelper()/11)*11)+2; sets the selected object's visibility to true
    {
        if (!((get_mouse_y()) > (80))) goto event_31_8_end;
        if (!((get_mouse_y()) < (186))) goto event_31_8_end;
        if (!((get_mouse_x()) > (55))) goto event_31_8_end;
        if (!((get_mouse_x()) < (266))) goto event_31_8_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(111, str_loaded_2365)) == (1))) goto event_31_8_end;
        ((Active*)get_instance(hover_560_instances))->set_y(((get_mouse_y()/MathHelper()/11)*11)+2);
        ((Active*)get_instance(hover_560_instances))->set_visible(true);
    }
    event_31_8_end: ;
}
// Function purpose: generated callback event_func_5039 processes event block(s) 32_8. Actions/conditions:
//        32_8: increments LClick by 1.
void Frames::event_func_5039()
{
    VITA_LEGACY_EVENT();
    // event 32_8 : increments LClick by 1
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) < (0))) goto event_32_8_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(41, str_lclick_203, 1);
    }
    event_32_8_end: ;
}
// Function purpose: generated callback event_func_5040 processes event block(s) 33_8. Actions/conditions:
//        33_8: sets LClick to -10; moves the current line selection; splits saved text into fields; plus 8 more
//        actions.
void Frames::event_func_5040()
{
    // event 33_8 : sets LClick to -10; moves the current line selection; splits saved text into fields; plus 8 more actions
    {
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_33_8_end;
        if (!(((Active*)get_instance(active3_63_instances))->mouse_over())) goto event_33_8_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_33_8_end;
        if (!((((ListObject*)get_instance(list_80_instances))->current_line) > (1))) goto event_33_8_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, -10);
        ((ListObject*)get_instance(list_80_instances))->current_line = ((ListObject*)get_instance(list_80_instances))->current_line-1;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(list_80_instances))->get_current_line(), str__254);
        ((Text*)get_instance(map_556_instances))->set_string(uppercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Counter*)get_instance(counter_4_instances))->set(50);
        media.play_id(SOUND_PLIP_16, 1-1);
        ((Active*)get_instance(active2_86_instances))->set_visible(false);
        ((Active*)get_instance(active_24_instances))->set_visible(false);
    }
    event_33_8_end: ;
}
// Function purpose: generated callback event_func_5041 processes event block(s) 34_8. Actions/conditions:
//        34_8: sets LClick to -10; moves the current line selection; splits saved text into fields; plus 8 more
//        actions.
void Frames::event_func_5041()
{
    // event 34_8 : sets LClick to -10; moves the current line selection; splits saved text into fields; plus 8 more actions
    {
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_34_8_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over())) goto event_34_8_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_34_8_end;
        if (!((((ListObject*)get_instance(list_80_instances))->current_line) < (((ListObject*)get_instance(list_80_instances))->get_count()))) goto event_34_8_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, -10);
        ((ListObject*)get_instance(list_80_instances))->current_line = ((ListObject*)get_instance(list_80_instances))->current_line+1;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(list_80_instances))->get_current_line(), str__254);
        ((Text*)get_instance(map_556_instances))->set_string(uppercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Counter*)get_instance(counter_4_instances))->set(50);
        media.play_id(SOUND_PLIP_16, 1-1);
        ((Active*)get_instance(active_24_instances))->set_visible(false);
        ((Active*)get_instance(active2_86_instances))->set_visible(false);
    }
    event_34_8_end: ;
}
// Function purpose: generated callback event_func_5042 processes event block(s) 35_8. Actions/conditions:
//        35_8: subtracts from the current value.
void Frames::event_func_5042()
{
    // event 35_8 : subtracts from the current value
    {
        if (!((((Counter*)get_instance(counter_4_instances))->value) > (0))) goto event_35_8_end;
        ((Counter*)get_instance(counter_4_instances))->subtract(1);
    }
    event_35_8_end: ;
}
// Function purpose: generated callback event_func_5043 processes event block(s) 36_8. Actions/conditions:
//        36_8: sets loaded to 0; sets page to 0; sets the selected object's visibility to false; plus 1 more actions.
void Frames::event_func_5043()
{
    // event 36_8 : sets loaded to 0; sets page to 0; sets the selected object's visibility to false; plus 1 more actions
    {
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (1))) goto event_36_8_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(111, str_loaded_2365, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(60, str_page_288, 0);
        ((Active*)get_instance(hover_560_instances))->set_visible(false);
        {
            loop_update_running = true;
            int times = int(1);
            loop_update_index = 0;
            while (loop_update_index < times) {
                loop_update_8();
                if (!loop_update_running) break;
                loop_update_index++;
            }
        }
        ((Counter*)get_instance(counter_4_instances))->subtract(1);
    }
    event_36_8_end: ;
}
void Frames::handle_frame_9_events()
{
    test_collisions_8();
    event_func_5028();
    event_func_5029();
    event_func_5030();
    if (next_frame != -1) return;
    event_func_226();
    event_func_17();
    event_func_5031();
    event_func_5034();
    event_func_5035();
    event_func_5037();
    event_func_5038();
    event_func_5039();
    event_func_5040();
    event_func_5041();
    event_func_5042();
    event_func_5043();
}
void Frames::handle_frame_9_pre_events()
{
    event_func_5032();
    event_func_5033();
    event_func_5036();
}
// Function purpose: generated callback event_func_5044 processes event block(s) 1_8. Actions/conditions: 1_8:
//        sets loaded to 0; sets page to 0; sets a game or interface text string; plus 7 more actions.
void Frames::event_func_5044()
{
    // event 1_8 : sets loaded to 0; sets page to 0; sets a game or interface text string; plus 7 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(111, str_loaded_2365, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(60, str_page_288, 0);
        ((Text*)get_instance(numbes_550_instances))->set_string(empty_string);
        ((Text*)get_instance(names_546_instances))->set_string(empty_string);
        ((Text*)get_instance(score_548_instances))->set_string(empty_string);
        ((Text*)get_instance(time_551_instances))->set_string(empty_string);
        ((Active*)get_instance(hover_560_instances))->set_x(VITA_VIEW_X(((Active*)get_instance(hover_560_instances)), 53));
    }
    event_1_8_end: ;
}
// Function purpose: generated callback event_func_5045 processes event block(s) 3_8. Actions/conditions: 3_8:
//        sets a game or interface text string; sets a game or interface text string; sets a game or interface text
//        string; plus 5 more actions.
void Frames::event_func_5045()
{
    // event 3_8 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 5 more actions
    {
        ((Text*)get_instance(header_107_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_leaderboards_1710, str_1_97)));
        ((Text*)get_instance(return_555_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_leaderboards_1710, str_5_164)));
        ((Text*)get_instance(headname_547_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_leaderboards_1710, str_2_155));
        ((Text*)get_instance(headscore_564_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_leaderboards_1710, str_3_158));
        ((Text*)get_instance(headdays_565_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_leaderboards_1710, str_4_161));
    }
    event_3_8_end: ;
}
// Function purpose: generated callback event_func_5046 processes event block(s) 8_8. Group(s): Add DLC maps if
//        avail. Actions/conditions: 8_8: adds a line to the current list.
void Frames::event_func_5046()
{
    // event 8_8 : adds a line to the current list
    {
        // group: Add DLC maps if avail
        if (!(((SteamObject*)get_instance(steamworks2_15_instances))->has_app(349310))) goto event_8_8_end;
        ((ListObject*)get_instance(list_80_instances))->add_line(str_fhurst_peak_correctional_ea_2366);
    }
    event_8_8_end: ;
}
// Function purpose: generated callback event_func_5047 processes event block(s) 9_8. Group(s): Add DLC maps if
//        avail. Actions/conditions: 9_8: adds a line to the current list.
void Frames::event_func_5047()
{
    // event 9_8 : adds a line to the current list
    {
        // group: Add DLC maps if avail
        if (!(((SteamObject*)get_instance(steamworks2_15_instances))->has_app(349350))) goto event_9_8_end;
        ((ListObject*)get_instance(list_80_instances))->add_line(str_alcatraz_alca_2367);
    }
    event_9_8_end: ;
}
// Function purpose: generated callback event_func_5048 processes event block(s) 10_8. Group(s): Add DLC maps
//        if avail. Actions/conditions: 10_8: adds a line to the current list.
void Frames::event_func_5048()
{
    // event 10_8 : adds a line to the current list
    {
        // group: Add DLC maps if avail
        if (!(((SteamObject*)get_instance(steamworks2_15_instances))->has_app(376700))) goto event_10_8_end;
        ((ListObject*)get_instance(list_80_instances))->add_line(str_escape_team_escapeteam_2368);
    }
    event_10_8_end: ;
}
// Function purpose: generated callback event_func_5049 processes event block(s) 11_8. Group(s): Add DLC maps
//        if avail. Actions/conditions: 11_8: adds a line to the current list.
void Frames::event_func_5049()
{
    // event 11_8 : adds a line to the current list
    {
        // group: Add DLC maps if avail
        if (!(((SteamObject*)get_instance(steamworks2_15_instances))->has_app(408730))) goto event_11_8_end;
        ((ListObject*)get_instance(list_80_instances))->add_line(str_duct_tapes_are_forever_dtaf_2369);
    }
    event_11_8_end: ;
}
// Function purpose: generated callback event_func_5050 processes event block(s) 12_8. Group(s): Add DLC maps
//        if avail. Actions/conditions: 12_8: adds a line to the current list.
void Frames::event_func_5050()
{
    // event 12_8 : adds a line to the current list
    {
        // group: Add DLC maps if avail
        if (!(((SteamObject*)get_instance(steamworks2_15_instances))->has_app(412990))) goto event_12_8_end;
        ((ListObject*)get_instance(list_80_instances))->add_line(str_santas_sweatshop_ss_2370);
    }
    event_12_8_end: ;
}
void Frames::on_frame_9_start_events()
{
    event_func_5044();
    event_func_224();
    event_func_5045();
    event_func_5046();
    event_func_5047();
    event_func_5048();
    event_func_5049();
    event_func_5050();
}
void Frames::on_frame_9_init()
{
    index = 8;
    width = 320;
    height = 240;
    virtual_width = 320;
    virtual_height = 240;
    background_color = Color(0, 0, 0);
    timer_base = 50;
    reset_image_cache();
    flush_image_cache();
    layers.resize(1);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    add_background_object(create_backdrop6_99(0, 0), 0);
    add_background_object(create_backdrop5_112(30, 25), 0);
    add_background_object(create_quickbackdrop_549(53, 68), 0);
    add_background_object(create_backdrop2_559(90, 47), 0);
    add_object(create_names_546(73, 79), 0);
    add_object(create_numbes_550(48, 79), 0);
    add_object(create_score_548(181, 79), 0);
    add_object(create_time_551(225, 79), 0);
    add_object(create_headname_547(56, 65), 0);
    add_object(create_headscore_564(172, 65), 0);
    add_object(create_headdays_565(227, 65), 0);
    add_object(create_stringtokenizer_81(464, 208), 0);
    add_object(create_stringtokenizer2_292(416, 240), 0);
    add_object(create_getobject_526(384, 176), 0);
    add_object(create_gameVariables(384, 96), 0);
    add_object(create_active_552(282, 113), 0);
    add_object(create_active2_553(36, 113), 0);
    add_object(create_mouse_9(368, 32), 0);
    add_object(create_map_556(65, 48), 0);
    add_object(create_active4_554(121, 192), 0);
    add_object(create_return_555(108, 197), 0);
    add_object(create_active3_557(84, 53), 0);
    add_object(create_active5_558(234, 53), 0);
    add_object(create_hover_560(53, 178), 0);
    add_object(create_active6_561(160, 117), 0);
    add_object(create_header_563(85, 33), 0);
    add_object(create_steamworks2_15(80, -48), 0);
    add_object(create_counter_216(304, 0), 0);
    add_object(create_list_562(416, -16), 0);
    add_object(create_translationData(48, -48), 0);
    loop_update_running = false;
    loop_update_index = 0;
    loop_trim_running = false;
    loop_trim_index = 0;
    loop_format_running = false;
    loop_format_index = 0;
    loops = NULL;
    not_always_6_8 = loop_count;
    not_always_7_8 = loop_count;
}
// Function purpose: generated callback event_func_5051 processes event block(s) 113_9. Actions/conditions:
//        113_9: splits saved text into fields.
void Frames::event_func_5051()
{
    // event 113_9 : splits saved text into fields
    {
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(language_600_instances))->get_current_line(), str__254);
    }
    event_113_9_end: ;
}
void Frames::loop_upd_lang_9()
{
    event_func_5051();
    event_func_224();
}
// Function purpose: generated callback event_func_5052 processes event block(s) 44_9. Actions/conditions:
//        44_9: updates a value on the target object; sets a game or interface text string; sets CustomSpeechFile to
//        editbox_92->get_text(); plus 1 more actions.
void Frames::event_func_5052()
{
    // event 44_9 : updates a value on the target object; sets a game or interface text string; sets CustomSpeechFile to editbox_92->get_text(); plus 1 more actions
    {
        if (!(group_base_layer_1)) goto event_44_9_end;
        if (!((((EditObject*)get_instance(editbox_92_instances))->get_text()) != (empty_string))) goto event_44_9_end;
        ((Text*)get_instance(settingsSpeechValue_instances))->blend_color.set(Color(135, 135, 135));
        ((Text*)get_instance(settingsSpeechValue_instances))->set_string(((EditObject*)get_instance(editbox_92_instances))->get_text()+str_dat_216);
        ((INI*)get_instance(gameSettings_instances))->set_string(str_settings_52, str_customspeechfile_56, ((EditObject*)get_instance(editbox_92_instances))->get_text());
        global_strings->set(7, ((EditObject*)get_instance(editbox_92_instances))->get_text());
    }
    event_44_9_end: ;
}
// Function purpose: generated callback event_func_5053 processes event block(s) 45_9. Actions/conditions:
//        45_9: updates a value on the target object; sets a game or interface text string; sets CustomSpeechFile to
//        empty_string; plus 1 more actions.
void Frames::event_func_5053()
{
    // event 45_9 : updates a value on the target object; sets a game or interface text string; sets CustomSpeechFile to empty_string; plus 1 more actions
    {
        if (!(group_base_layer_1)) goto event_45_9_end;
        if (!((((EditObject*)get_instance(editbox_92_instances))->get_text()) == (empty_string))) goto event_45_9_end;
        ((Text*)get_instance(settingsSpeechValue_instances))->blend_color.set(Color(75, 75, 75));
        ((Text*)get_instance(settingsSpeechValue_instances))->set_string(str_default_2371);
        ((INI*)get_instance(gameSettings_instances))->set_string(str_settings_52, str_customspeechfile_56, empty_string);
        global_strings->set(7, empty_string);
    }
    event_45_9_end: ;
}
void Frames::loop_check_speechfile_string_9()
{
    event_func_5052();
    event_func_5053();
}
// Function purpose: generated callback event_func_5054 processes event block(s) 50_9. Actions/conditions:
//        50_9: sets blocked to 1.
void Frames::event_func_5054()
{
    // event 50_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_50_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_1_97))) goto event_50_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_50_9_end: ;
}
// Function purpose: generated callback event_func_5055 processes event block(s) 51_9. Actions/conditions:
//        51_9: sets blocked to 1.
void Frames::event_func_5055()
{
    // event 51_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_51_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_2_155))) goto event_51_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_51_9_end: ;
}
// Function purpose: generated callback event_func_5056 processes event block(s) 52_9. Actions/conditions:
//        52_9: sets blocked to 1.
void Frames::event_func_5056()
{
    // event 52_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_52_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_3_158))) goto event_52_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_52_9_end: ;
}
// Function purpose: generated callback event_func_5057 processes event block(s) 53_9. Actions/conditions:
//        53_9: sets blocked to 1.
void Frames::event_func_5057()
{
    // event 53_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_53_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_4_161))) goto event_53_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_53_9_end: ;
}
// Function purpose: generated callback event_func_5058 processes event block(s) 54_9. Actions/conditions:
//        54_9: sets blocked to 1.
void Frames::event_func_5058()
{
    // event 54_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_54_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_5_164))) goto event_54_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_54_9_end: ;
}
// Function purpose: generated callback event_func_5059 processes event block(s) 55_9. Actions/conditions:
//        55_9: sets blocked to 1.
void Frames::event_func_5059()
{
    // event 55_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_55_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_6_241))) goto event_55_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_55_9_end: ;
}
// Function purpose: generated callback event_func_5060 processes event block(s) 56_9. Actions/conditions:
//        56_9: sets blocked to 1.
void Frames::event_func_5060()
{
    // event 56_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_56_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_7_323))) goto event_56_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_56_9_end: ;
}
// Function purpose: generated callback event_func_5061 processes event block(s) 57_9. Actions/conditions:
//        57_9: sets blocked to 1.
void Frames::event_func_5061()
{
    // event 57_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_57_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_8_325))) goto event_57_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_57_9_end: ;
}
// Function purpose: generated callback event_func_5062 processes event block(s) 58_9. Actions/conditions:
//        58_9: sets blocked to 1.
void Frames::event_func_5062()
{
    // event 58_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_58_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_9_327))) goto event_58_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_58_9_end: ;
}
// Function purpose: generated callback event_func_5063 processes event block(s) 59_9. Actions/conditions:
//        59_9: sets blocked to 1.
void Frames::event_func_5063()
{
    // event 59_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_59_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_0_615))) goto event_59_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_59_9_end: ;
}
// Function purpose: generated callback event_func_5064 processes event block(s) 60_9. Actions/conditions:
//        60_9: sets blocked to 1.
void Frames::event_func_5064()
{
    // event 60_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_60_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_escape_2372))) goto event_60_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_60_9_end: ;
}
// Function purpose: generated callback event_func_5065 processes event block(s) 62_9. Actions/conditions:
//        62_9: sets blocked to 1.
void Frames::event_func_5065()
{
    // event 62_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_62_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str__2373))) goto event_62_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_62_9_end: ;
}
// Function purpose: generated callback event_func_5066 processes event block(s) 63_9. Actions/conditions:
//        63_9: sets blocked to 1.
void Frames::event_func_5066()
{
    // event 63_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_63_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_none_2374))) goto event_63_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_63_9_end: ;
}
// Function purpose: generated callback event_func_5067 processes event block(s) 64_9. Actions/conditions:
//        64_9: sets blocked to 1.
void Frames::event_func_5067()
{
    // event 64_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_64_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str__2375))) goto event_64_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_64_9_end: ;
}
// Function purpose: generated callback event_func_5068 processes event block(s) 65_9. Actions/conditions:
//        65_9: sets blocked to 1.
void Frames::event_func_5068()
{
    // event 65_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_65_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str__1247))) goto event_65_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_65_9_end: ;
}
// Function purpose: generated callback event_func_5069 processes event block(s) 66_9. Actions/conditions:
//        66_9: sets blocked to 1.
void Frames::event_func_5069()
{
    // event 66_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_66_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str__2376))) goto event_66_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_66_9_end: ;
}
// Function purpose: generated callback event_func_5070 processes event block(s) 67_9. Actions/conditions:
//        67_9: sets blocked to 1.
void Frames::event_func_5070()
{
    // event 67_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_67_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str__1405))) goto event_67_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_67_9_end: ;
}
// Function purpose: generated callback event_func_5071 processes event block(s) 68_9. Actions/conditions:
//        68_9: sets blocked to 1.
void Frames::event_func_5071()
{
    // event 68_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_68_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str__859))) goto event_68_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_68_9_end: ;
}
// Function purpose: generated callback event_func_5072 processes event block(s) 69_9. Actions/conditions:
//        69_9: sets blocked to 1.
void Frames::event_func_5072()
{
    // event 69_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_69_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_altgr_2377))) goto event_69_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_69_9_end: ;
}
// Function purpose: generated callback event_func_5073 processes event block(s) 70_9. Actions/conditions:
//        70_9: sets blocked to 1.
void Frames::event_func_5073()
{
    // event 70_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_70_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_alt_gr_2378))) goto event_70_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_70_9_end: ;
}
// Function purpose: generated callback event_func_5074 processes event block(s) 71_9. Actions/conditions:
//        71_9: sets blocked to 1.
void Frames::event_func_5074()
{
    // event 71_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_71_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str__2379))) goto event_71_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_71_9_end: ;
}
// Function purpose: generated callback event_func_5075 processes event block(s) 72_9. Actions/conditions:
//        72_9: sets blocked to 1.
void Frames::event_func_5075()
{
    // event 72_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_72_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_left_window_2380))) goto event_72_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_72_9_end: ;
}
// Function purpose: generated callback event_func_5076 processes event block(s) 73_9. Actions/conditions:
//        73_9: sets blocked to 1.
void Frames::event_func_5076()
{
    // event 73_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_73_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_menu_2381))) goto event_73_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_73_9_end: ;
}
// Function purpose: generated callback event_func_5077 processes event block(s) 74_9. Actions/conditions:
//        74_9: sets blocked to 1.
void Frames::event_func_5077()
{
    // event 74_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_74_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_control_2382))) goto event_74_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_74_9_end: ;
}
// Function purpose: generated callback event_func_5078 processes event block(s) 75_9. Actions/conditions:
//        75_9: sets blocked to 1.
void Frames::event_func_5078()
{
    // event 75_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_75_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_capslock_2383))) goto event_75_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_75_9_end: ;
}
// Function purpose: generated callback event_func_5079 processes event block(s) 76_9. Actions/conditions:
//        76_9: sets blocked to 1.
void Frames::event_func_5079()
{
    // event 76_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_76_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_scrollock_2384))) goto event_76_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_76_9_end: ;
}
// Function purpose: generated callback event_func_5080 processes event block(s) 77_9. Actions/conditions:
//        77_9: sets blocked to 1.
void Frames::event_func_5080()
{
    // event 77_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_77_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (str_numlock_2385))) goto event_77_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_77_9_end: ;
}
// Function purpose: generated callback event_func_5081 processes event block(s) 78_9. Actions/conditions:
//        78_9: sets blocked to 1.
void Frames::event_func_5081()
{
    // event 78_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_78_9_end;
        if (!((left_string(translate_key_to_string(get_last_key_pressed()), 1)) == (str_f_2386))) goto event_78_9_end;
        if (!((string_size(translate_key_to_string(get_last_key_pressed()))) > (1))) goto event_78_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_78_9_end: ;
}
// Function purpose: generated callback event_func_5082 processes event block(s) 79_9. Actions/conditions:
//        79_9: sets blocked to 1.
void Frames::event_func_5082()
{
    // event 79_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_79_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(0, str_key_up_67)))) goto event_79_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_79_9_end: ;
}
// Function purpose: generated callback event_func_5083 processes event block(s) 80_9. Actions/conditions:
//        80_9: sets blocked to 1.
void Frames::event_func_5083()
{
    // event 80_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_80_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(1, str_key_down_69)))) goto event_80_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_80_9_end: ;
}
// Function purpose: generated callback event_func_5084 processes event block(s) 81_9. Actions/conditions:
//        81_9: sets blocked to 1.
void Frames::event_func_5084()
{
    // event 81_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_81_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(2, str_key_left_71)))) goto event_81_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_81_9_end: ;
}
// Function purpose: generated callback event_func_5085 processes event block(s) 82_9. Actions/conditions:
//        82_9: sets blocked to 1.
void Frames::event_func_5085()
{
    // event 82_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_82_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(3, str_key_right_73)))) goto event_82_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_82_9_end: ;
}
// Function purpose: generated callback event_func_5086 processes event block(s) 83_9. Actions/conditions:
//        83_9: sets blocked to 1.
void Frames::event_func_5086()
{
    // event 83_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_83_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(4, str_key_ac1_74)))) goto event_83_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_83_9_end: ;
}
// Function purpose: generated callback event_func_5087 processes event block(s) 84_9. Actions/conditions:
//        84_9: sets blocked to 1.
void Frames::event_func_5087()
{
    // event 84_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_84_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(5, str_key_ac2_76)))) goto event_84_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_84_9_end: ;
}
// Function purpose: generated callback event_func_5088 processes event block(s) 85_9. Actions/conditions:
//        85_9: sets blocked to 1.
void Frames::event_func_5088()
{
    // event 85_9 : sets blocked to 1
    {
        if (!(group_remap_keys_1)) goto event_85_9_end;
        if (!((translate_key_to_string(get_last_key_pressed())) == (((AssociateArray*)get_instance(gameVariables_instances))->get_string(6, str_key_combat_78)))) goto event_85_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 1);
    }
    event_85_9_end: ;
}
// Function purpose: generated callback event_func_5089 processes event block(s) 86_9. Actions/conditions:
//        86_9: plays a sound or music track.
void Frames::event_func_5089()
{
    // event 86_9 : plays a sound or music track
    {
        if (!(group_remap_keys_1)) goto event_86_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(112, str_blocked_1439)) == (1))) goto event_86_9_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_86_9_end: ;
}
void Frames::loop_check_keypress_9()
{
    event_func_5054();
    event_func_5055();
    event_func_5056();
    event_func_5057();
    event_func_5058();
    event_func_5059();
    event_func_5060();
    event_func_5061();
    event_func_5062();
    event_func_5063();
    event_func_5064();
    event_func_5064();
    event_func_5065();
    event_func_5066();
    event_func_5067();
    event_func_5068();
    event_func_5069();
    event_func_5070();
    event_func_5071();
    event_func_5072();
    event_func_5073();
    event_func_5074();
    event_func_5075();
    event_func_5076();
    event_func_5077();
    event_func_5078();
    event_func_5079();
    event_func_5080();
    event_func_5081();
    event_func_5082();
    event_func_5083();
    event_func_5084();
    event_func_5085();
    event_func_5086();
    event_func_5087();
    event_func_5088();
    event_func_5089();
}
// Function purpose: generated callback event_func_5090 processes event block(s) 104_9. Actions/conditions:
//        104_9: sets the current line selection.
void Frames::event_func_5090()
{
    // event 104_9 : sets the current line selection
    {
        if (!((global_strings->get(6)) == (empty_string))) goto event_104_9_end;
        ((ListObject*)get_instance(language_600_instances))->current_line = 1;
    }
    event_104_9_end: ;
}
// Function purpose: generated callback event_func_5091 processes event block(s) 105_9. Actions/conditions:
//        105_9: sets the current line selection.
void Frames::event_func_5091()
{
    // event 105_9 : sets the current line selection
    {
        if (!((global_strings->get(6)) == (str_eng_0))) goto event_105_9_end;
        ((ListObject*)get_instance(language_600_instances))->current_line = 1;
    }
    event_105_9_end: ;
}
// Function purpose: generated callback event_func_5092 processes event block(s) 106_9. Actions/conditions:
//        106_9: sets the current line selection.
void Frames::event_func_5092()
{
    // event 106_9 : sets the current line selection
    {
        if (!((global_strings->get(6)) == (str_ger_6))) goto event_106_9_end;
        ((ListObject*)get_instance(language_600_instances))->current_line = 2;
    }
    event_106_9_end: ;
}
// Function purpose: generated callback event_func_5093 processes event block(s) 107_9. Actions/conditions:
//        107_9: sets the current line selection.
void Frames::event_func_5093()
{
    // event 107_9 : sets the current line selection
    {
        if (!((global_strings->get(6)) == (str_fre_3))) goto event_107_9_end;
        ((ListObject*)get_instance(language_600_instances))->current_line = 3;
    }
    event_107_9_end: ;
}
// Function purpose: generated callback event_func_5094 processes event block(s) 108_9. Actions/conditions:
//        108_9: sets the current line selection.
void Frames::event_func_5094()
{
    // event 108_9 : sets the current line selection
    {
        if (!((global_strings->get(6)) == (str_spa_2))) goto event_108_9_end;
        ((ListObject*)get_instance(language_600_instances))->current_line = 4;
    }
    event_108_9_end: ;
}
// Function purpose: generated callback event_func_5095 processes event block(s) 109_9. Actions/conditions:
//        109_9: sets the current line selection.
void Frames::event_func_5095()
{
    // event 109_9 : sets the current line selection
    {
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_109_9_end;
        ((ListObject*)get_instance(language_600_instances))->current_line = 5;
    }
    event_109_9_end: ;
}
// Function purpose: generated callback event_func_5096 processes event block(s) 110_9. Actions/conditions:
//        110_9: sets the current line selection.
void Frames::event_func_5096()
{
    // event 110_9 : sets the current line selection
    {
        if (!((global_strings->get(6)) == (str_pol_4))) goto event_110_9_end;
        ((ListObject*)get_instance(language_600_instances))->current_line = 6;
    }
    event_110_9_end: ;
}
void Frames::loop_lang_setup_9()
{
    event_func_5090();
    event_func_5091();
    event_func_5092();
    event_func_5093();
    event_func_5094();
    event_func_5095();
    event_func_5096();
}
// Function purpose: generated callback event_func_5097 processes event block(s) 8_9. Actions/conditions: 8_9:
//        sets the selected object's text.
void Frames::event_func_5097()
{
    // event 8_9 : sets the selected object's text
    {
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_settings_52, str_screen_57, empty_string)) == (str_full_58))) goto event_8_9_end;
        settingsFrameRateValue_instances.clear_selection();
        for (ObjectIterator it(settingsFrameRateValue_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_settings_52, str_4_161)));
        }
    }
    event_8_9_end: ;
}
// Function purpose: generated callback event_func_5098 processes event block(s) 10_9. Actions/conditions:
//        10_9: sets the selected object's text.
void Frames::event_func_5098()
{
    // event 10_9 : sets the selected object's text
    {
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_settings_52, str_screen_57, empty_string)) == (str_window_59))) goto event_10_9_end;
        settingsFrameRateValue_instances.clear_selection();
        for (ObjectIterator it(settingsFrameRateValue_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_settings_52, str_5_164)));
        }
    }
    event_10_9_end: ;
}
// Function purpose: generated callback event_func_5099 processes event block(s) 12_9. Actions/conditions:
//        12_9: sets a game or interface text string.
void Frames::event_func_5099()
{
    // event 12_9 : sets a game or interface text string
    {
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_settings_52, str_screen_57, empty_string)) == (empty_string))) goto event_12_9_end;
        ((Text*)get_instance(settingsFrameRateValue_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_5_164)));
    }
    event_12_9_end: ;
}
// Function purpose: generated callback event_func_5100 processes event block(s) 13_9. Actions/conditions:
//        13_9: updates a value on the target object; sets a game or interface text string.
void Frames::event_func_5100()
{
    // event 13_9 : updates a value on the target object; sets a game or interface text string
    {
        if (!((global_strings->get(7)) != (empty_string))) goto event_13_9_end;
        ((Text*)get_instance(settingsSpeechValue_instances))->blend_color.set(Color(135, 135, 135));
        ((Text*)get_instance(settingsSpeechValue_instances))->set_string(global_strings->get(7)+str_dat_216);
    }
    event_13_9_end: ;
}
// Function purpose: generated callback event_func_5101 processes event block(s) 14_9. Actions/conditions:
//        14_9: updates a value on the target object; sets a game or interface text string.
void Frames::event_func_5101()
{
    // event 14_9 : updates a value on the target object; sets a game or interface text string
    {
        if (!((global_strings->get(7)) == (empty_string))) goto event_14_9_end;
        ((Text*)get_instance(settingsSpeechValue_instances))->blend_color.set(Color(75, 75, 75));
        ((Text*)get_instance(settingsSpeechValue_instances))->set_string(str_default_2371);
    }
    event_14_9_end: ;
}
void Frames::loop_setup_page_9()
{
    event_func_5097();
    event_func_5098();
    event_func_5099();
    event_func_5100();
    event_func_5101();
}
// Function purpose: generated callback event_func_5102 processes event block(s) 92_9. Actions/conditions:
//        92_9: sets Key_Up to W; sets Key_Down to S; sets Key_Left to A; plus 7 more actions.
void Frames::event_func_5102()
{
    // event 92_9 : sets Key_Up to W; sets Key_Down to S; sets Key_Left to A; plus 7 more actions
    {
        if (!(group_remap_keys_1)) goto event_92_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(0, str_key_up_67, str_w_68);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(1, str_key_down_69, str_s_70);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_key_left_71, str_a_72);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(3, str_key_right_73, str_d_51);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(4, str_key_ac1_74, str_q_75);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(5, str_key_ac2_76, str_e_77);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(6, str_key_combat_78, str_space_79);
    }
    event_92_9_end: ;
}
// Function purpose: generated callback event_func_5103 processes event block(s) 93_9. Actions/conditions:
//        93_9: sets Key_Up to settings_2->get_string_default(Keys, Up, empty_string).
void Frames::event_func_5103()
{
    // event 93_9 : sets Key_Up to settings_2->get_string_default(Keys, Up, empty_string)
    {
        if (!(group_remap_keys_1)) goto event_93_9_end;
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_up_38, empty_string)) != (empty_string))) goto event_93_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(0, str_key_up_67, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_up_38, empty_string));
    }
    event_93_9_end: ;
}
// Function purpose: generated callback event_func_5104 processes event block(s) 94_9. Actions/conditions:
//        94_9: sets Key_Down to settings_2->get_string_default(Keys, Down, empty_string).
void Frames::event_func_5104()
{
    // event 94_9 : sets Key_Down to settings_2->get_string_default(Keys, Down, empty_string)
    {
        if (!(group_remap_keys_1)) goto event_94_9_end;
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_down_81, empty_string)) != (empty_string))) goto event_94_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(1, str_key_down_69, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_down_81, empty_string));
    }
    event_94_9_end: ;
}
// Function purpose: generated callback event_func_5105 processes event block(s) 95_9. Actions/conditions:
//        95_9: sets Key_Left to settings_2->get_string_default(Keys, Left, empty_string).
void Frames::event_func_5105()
{
    // event 95_9 : sets Key_Left to settings_2->get_string_default(Keys, Left, empty_string)
    {
        if (!(group_remap_keys_1)) goto event_95_9_end;
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_left_82, empty_string)) != (empty_string))) goto event_95_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_key_left_71, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_left_82, empty_string));
    }
    event_95_9_end: ;
}
// Function purpose: generated callback event_func_5106 processes event block(s) 96_9. Actions/conditions:
//        96_9: sets Key_Right to settings_2->get_string_default(Keys, Right, empty_string).
void Frames::event_func_5106()
{
    // event 96_9 : sets Key_Right to settings_2->get_string_default(Keys, Right, empty_string)
    {
        if (!(group_remap_keys_1)) goto event_96_9_end;
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_right_83, empty_string)) != (empty_string))) goto event_96_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(3, str_key_right_73, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_right_83, empty_string));
    }
    event_96_9_end: ;
}
// Function purpose: generated callback event_func_5107 processes event block(s) 97_9. Actions/conditions:
//        97_9: sets Key_Ac1 to settings_2->get_string_default(Keys, Ac1, empty_string).
void Frames::event_func_5107()
{
    // event 97_9 : sets Key_Ac1 to settings_2->get_string_default(Keys, Ac1, empty_string)
    {
        if (!(group_remap_keys_1)) goto event_97_9_end;
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_ac1_84, empty_string)) != (empty_string))) goto event_97_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(4, str_key_ac1_74, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_ac1_84, empty_string));
    }
    event_97_9_end: ;
}
// Function purpose: generated callback event_func_5108 processes event block(s) 98_9. Actions/conditions:
//        98_9: sets Key_Ac2 to settings_2->get_string_default(Keys, Ac2, empty_string).
void Frames::event_func_5108()
{
    // event 98_9 : sets Key_Ac2 to settings_2->get_string_default(Keys, Ac2, empty_string)
    {
        if (!(group_remap_keys_1)) goto event_98_9_end;
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_ac2_85, empty_string)) != (empty_string))) goto event_98_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(5, str_key_ac2_76, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_ac2_85, empty_string));
    }
    event_98_9_end: ;
}
// Function purpose: generated callback event_func_5109 processes event block(s) 99_9. Actions/conditions:
//        99_9: sets Key_Combat to settings_2->get_string_default(Keys, Combat, empty_string).
void Frames::event_func_5109()
{
    // event 99_9 : sets Key_Combat to settings_2->get_string_default(Keys, Combat, empty_string)
    {
        if (!(group_remap_keys_1)) goto event_99_9_end;
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_combat_86, empty_string)) != (empty_string))) goto event_99_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(6, str_key_combat_78, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_combat_86, empty_string));
    }
    event_99_9_end: ;
}
void Frames::loop_load_keys_9()
{
    event_func_5102();
    event_func_5103();
    event_func_5104();
    event_func_5105();
    event_func_5106();
    event_func_5107();
    event_func_5108();
    event_func_5109();
}
void Frames::test_collisions_9()
{
    ObjectList::iterator it1, it2;
}
// Function purpose: generated callback event_func_5110 processes event block(s) 4_9. Actions/conditions: 4_9:
//        loads a game or save-data file.
void Frames::event_func_5110()
{
    // event 4_9 : loads a game or save-data file
    {
        if (frame_time < 0.06) goto event_4_9_end;
        if (not_always_4_9 > loop_count) {
            not_always_4_9 = loop_count + 2;
            goto event_4_9_end;
        }
        not_always_4_9 = loop_count + 2;
        ((INI*)get_instance(translationData_instances))->load_file(str_data_data_215+global_strings->get(6)+str_dat_216);
    }
    event_4_9_end: ;
}
// Function purpose: generated callback event_func_5111 processes event block(s) 5_9. Actions/conditions: 5_9:
//        sets a game or interface text string; sets a game or interface text string; sets a game or interface text
//        string; plus 1 more actions.
void Frames::event_func_5111()
{
    // event 5_9 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 1 more actions
    {
        if (frame_time < 0.06) goto event_5_9_end;
        if (not_always_5_9 > loop_count) {
            not_always_5_9 = loop_count + 2;
            goto event_5_9_end;
        }
        not_always_5_9 = loop_count + 2;
        ((Text*)get_instance(remapheader_571_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_6_241)));
        ((Text*)get_instance(remapreset_595_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_15_608)));
        ((Text*)get_instance(remapsav_582_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_16_219)));
        ((Text*)get_instance(music_568_instances))->set_visible(true);
    }
    event_5_9_end: ;
}
// Function purpose: generated callback event_func_5112 processes event block(s) 7_9. Actions/conditions: 7_9:
//        sets setup_page to 1; loads a game or save-data file; sets XCent to
//        WindowControl::get_screen_width()/MathHelper()/2; plus 1 more actions.
void Frames::event_func_5112()
{
    // event 7_9 : sets setup_page to 1; loads a game or save-data file; sets XCent to WindowControl::get_screen_width()/MathHelper()/2; plus 1 more actions
    {
        if (!(frame_time >= 0.06)) goto event_7_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(113, str_setup_page_2387)) == (0))) goto event_7_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(113, str_setup_page_2387, 1);
        ((INI*)get_instance(gameSettings_instances))->load_file(File::get_appdata_directory()+str_the_escapists_settings_cfg_62, false, false, true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(114, str_xcent_2388, WindowControl::get_screen_width()/MathHelper()/2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(115, str_ycent_2389, WindowControl::get_screen_height()/MathHelper()/2);
        {
            loop_setup_page_running = true;
            int times = int(1);
            loop_setup_page_index = 0;
            while (loop_setup_page_index < times) {
                loop_setup_page_9();
                if (!loop_setup_page_running) break;
                loop_setup_page_index++;
            }
        }
        active_24_instances.clear_selection();
        spread_value(active_24_instances, 0, 1);
    }
    event_7_9_end: ;
}
// Function purpose: generated callback event_func_5113 processes event block(s) 9_9. Actions/conditions: 9_9:
//        sets the selected object's text.
void Frames::event_func_5113()
{
    // event 9_9 : sets the selected object's text
    {
        if (!((global_values->get(8)) == (0))) goto event_9_9_end;
        settingsFrameRateValue_instances.clear_selection();
        for (ObjectIterator it(settingsFrameRateValue_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_settings_52, str_4_161)));
        }
    }
    event_9_9_end: ;
}
// Function purpose: generated callback event_func_5114 processes event block(s) 11_9. Actions/conditions:
//        11_9: sets the selected object's text.
void Frames::event_func_5114()
{
    // event 11_9 : sets the selected object's text
    {
        if (!((global_values->get(8)) == (1))) goto event_11_9_end;
        settingsFrameRateValue_instances.clear_selection();
        for (ObjectIterator it(settingsFrameRateValue_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(lowercase_string(((INI*)get_instance(translationData_instances, it.current_index))->get_string(str_settings_52, str_5_164)));
        }
    }
    event_11_9_end: ;
}
// Function purpose: generated callback event_func_5115 processes event block(s) 15_9. Actions/conditions:
//        15_9: sets the selected object's direction to 0; sets the selected object's direction to 0; sets the
//        selected object's direction to 0; plus 1 more actions.
void Frames::event_func_5115()
{
    // event 15_9 : sets the selected object's direction to 0; sets the selected object's direction to 0; sets the selected object's direction to 0; plus 1 more actions
    {
        ((Active*)get_instance(active4_87_instances))->set_direction(0);
        ((Active*)get_instance(interfaceButtons_instances))->set_direction(0);
        ((Active*)get_instance(keysdone_581_instances))->set_direction(0);
        ((Active*)get_instance(reset_594_instances))->set_direction(0);
    }
    event_15_9_end: ;
}
// Function purpose: generated callback event_func_5116 processes event block(s) 17_9. Actions/conditions:
//        17_9: sets the selected object's direction to 16.
void Frames::event_func_5116()
{
    // event 17_9 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over())) goto event_17_9_end;
        ((Active*)get_instance(interfaceButtons_instances))->set_direction(16);
    }
    event_17_9_end: ;
}
// Function purpose: generated callback event_func_5117 processes event block(s) 18_9. Actions/conditions:
//        18_9: sets the selected object's direction to 16.
void Frames::event_func_5117()
{
    // event 18_9 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(keysdone_581_instances))->mouse_over())) goto event_18_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(116, str_currkey_2390)) == (-1))) goto event_18_9_end;
        ((Active*)get_instance(keysdone_581_instances))->set_direction(16);
    }
    event_18_9_end: ;
}
// Function purpose: generated callback event_func_5118 processes event block(s) 19_9. Actions/conditions:
//        19_9: sets the selected object's direction to 16.
void Frames::event_func_5118()
{
    // event 19_9 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(reset_594_instances))->mouse_over())) goto event_19_9_end;
        ((Active*)get_instance(reset_594_instances))->set_direction(16);
    }
    event_19_9_end: ;
}
// Function purpose: generated callback event_func_5119 processes event block(s) 21_9. Actions/conditions:
//        21_9: plays a sound or music track.
void Frames::event_func_5119()
{
    // event 21_9 : plays a sound or music track
    {
        if (!(((Active*)get_instance(active4_87_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_21_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_21_9_end;
        media.play_id(SOUND_RUMBLE_15, 1-1);
        next_frame = 2 + 0;    
    
    }
    event_21_9_end: ;
}
// Function purpose: generated callback event_func_5120 processes event block(s) 22_9. Actions/conditions:
//        22_9: sets the object's animation to 1.
void Frames::event_func_5120()
{
    // event 22_9 : sets the object's animation to 1
    {
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!active_24_instances.has_selection()) goto event_22_9_end;
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_22_9_end: ;
}
// Function purpose: generated callback event_func_5121 processes event block(s) 23_9. Actions/conditions:
//        23_9: sets LClick to 1; sets global value 9 from get_mouse_x()-(musicVolumeBar->get_box_index(0)+5); sets the
//        audio channel volume; plus 1 more actions.
void Frames::event_func_5121()
{
    // event 23_9 : sets LClick to 1; sets global value 9 from get_mouse_x()-(musicVolumeBar->get_box_index(0)+5); sets the audio channel volume; plus 1 more actions
    {
        if (!(group_base_layer_1)) goto event_23_9_end;
        if (!(((Active*)get_instance(musicVolumeBar_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_23_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_23_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        global_values->set(9, get_mouse_x()-(((Active*)get_instance(musicVolumeBar_instances))->get_box_index(0)+5));
        media.set_channel_volume(10-1, global_values->get(9));
        ((INI*)get_instance(gameSettings_instances))->set_value_int(str_settings_52, str_music_53, global_values->get(9));
    }
    event_23_9_end: ;
}
// Function purpose: generated callback event_func_5122 processes event block(s) 24_9. Actions/conditions:
//        24_9: sets LClick to 1; sets global value 10 from get_mouse_x()-(soundVolumeBar->get_box_index(0)+5); sets the
//        audio channel volume; plus 5 more actions.
void Frames::event_func_5122()
{
    // event 24_9 : sets LClick to 1; sets global value 10 from get_mouse_x()-(soundVolumeBar->get_box_index(0)+5); sets the audio channel volume; plus 5 more actions
    {
        if (!(group_base_layer_1)) goto event_24_9_end;
        if (!(((Active*)get_instance(soundVolumeBar_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_24_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_24_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        global_values->set(10, get_mouse_x()-(((Active*)get_instance(soundVolumeBar_instances))->get_box_index(0)+5));
        media.set_channel_volume(1-1, global_values->get(10));
        media.play_id(SOUND_HIT1_13, 1-1);
        ((INI*)get_instance(gameSettings_instances))->set_value_int(str_settings_52, str_sfx_54, global_values->get(10));
    }
    event_24_9_end: ;
}
// Function purpose: generated callback event_func_5123 processes event block(s) 25_9. Actions/conditions:
//        25_9: enables flag 1 (object-specific active or interaction state) on the selected object.
void Frames::event_func_5123()
{
    // event 25_9 : enables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(group_base_layer_1)) goto event_25_9_end;
        if (frame_time < 0.1) goto event_25_9_end;
        if (not_always_25_9 > loop_count) {
            not_always_25_9 = loop_count + 2;
            goto event_25_9_end;
        }
        not_always_25_9 = loop_count + 2;
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_settings_52, str_screen_57, empty_string)) == (str_window_59))) goto event_25_9_end;
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!active_24_instances.has_selection()) goto event_25_9_end;
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_25_9_end: ;
}
