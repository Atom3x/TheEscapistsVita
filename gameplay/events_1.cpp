#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"
#include "game-settings.h"

// Function purpose: generated callback event_func_1 processes event block(s) 7_0. Group(s): Startup.
//        Actions/conditions: 7_0: sets global value 9 from saved Settings.Music setting.
void Frames::event_func_1()
{
    // event 7_0 : sets global value 9 from saved Settings.Music setting
    {
        // group: Startup
        if (!(((INI*)get_instance(gameSettings_instances))->has_item(str_settings_52, str_music_53))) goto event_7_0_end;
        global_values->set(9, ((INI*)get_instance(gameSettings_instances))->get_value(str_settings_52, str_music_53, 0));
    }
    event_7_0_end: ;
}
// Function purpose: generated callback event_func_2 processes event block(s) 8_0. Group(s): Startup.
//        Actions/conditions: 8_0: sets global value 9 from 40.
void Frames::event_func_2()
{
    // event 8_0 : sets global value 9 from 40
    {
        // group: Startup
        if (((INI*)get_instance(gameSettings_instances))->has_item(str_settings_52, str_music_53)) goto event_8_0_end;
        global_values->set(9, 40);
    }
    event_8_0_end: ;
}
// Function purpose: generated callback event_func_3 processes event block(s) 9_0. Group(s): Startup.
//        Actions/conditions: 9_0: sets global value 10 from saved Settings.SFX setting.
void Frames::event_func_3()
{
    // event 9_0 : sets global value 10 from saved Settings.SFX setting
    {
        // group: Startup
        if (!(((INI*)get_instance(gameSettings_instances))->has_item(str_settings_52, str_sfx_54))) goto event_9_0_end;
        global_values->set(10, ((INI*)get_instance(gameSettings_instances))->get_value(str_settings_52, str_sfx_54, 0));
    }
    event_9_0_end: ;
}
// Function purpose: generated callback event_func_4 processes event block(s) 10_0. Group(s): Startup.
//        Actions/conditions: 10_0: sets global value 10 from 60.
void Frames::event_func_4()
{
    // event 10_0 : sets global value 10 from 60
    {
        // group: Startup
        if (((INI*)get_instance(gameSettings_instances))->has_item(str_settings_52, str_sfx_54)) goto event_10_0_end;
        global_values->set(10, 60);
    }
    event_10_0_end: ;
}
// Function purpose: generated callback event_func_5 processes event block(s) 11_0. Actions/conditions: 11_0:
//        sets the audio channel volume; sets the audio channel volume.
void Frames::event_func_5()
{
    // event 11_0 : sets the audio channel volume; sets the audio channel volume
    {
        media.set_channel_volume(1-1, global_values->get(10));
        media.set_channel_volume(10-1, global_values->get(9));
    }
    event_11_0_end: ;
}
// Function purpose: generated callback event_func_6 processes event block(s) 12_0. Group(s): Startup.
//        Actions/conditions: 12_0: updates a value on the target object.
void Frames::event_func_6()
{
    // event 12_0 : updates a value on the target object
    {
        // group: Startup
        vita_settings_initialize_language(*this);
    }
    event_12_0_end: ;
}
// Function purpose: generated callback event_func_7 processes event block(s) 13_0. Group(s): Startup.
//        Actions/conditions: 13_0: sets CustomSpeechFile to empty_string.
void Frames::event_func_7()
{
    // event 13_0 : sets CustomSpeechFile to empty_string
    {
        // group: Startup
        if (((INI*)get_instance(gameSettings_instances))->has_item(str_settings_52, str_customspeechfile_56)) goto event_13_0_end;
        ((INI*)get_instance(gameSettings_instances))->set_string(str_settings_52, str_customspeechfile_56, empty_string);
    }
    event_13_0_end: ;
}
// Function purpose: generated callback event_func_8 processes event block(s) 14_0. Actions/conditions: 14_0:
//        updates a value on the target object.
void Frames::event_func_8()
{
    // event 14_0 : updates a value on the target object
    {
        global_strings->set(7, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_settings_52, str_customspeechfile_56, empty_string));
    }
    event_14_0_end: ;
}
// Function purpose: generated callback event_func_9 processes event block(s) 15_0. Group(s): Startup.
//        Actions/conditions: 15_0: sets global value 8 from 0; updates game state with WindowControl::maximize();
//        shows the game window.
void Frames::event_func_9()
{
    // event 15_0 : sets global value 8 from 0; updates game state with WindowControl::maximize(); shows the game window
    {
        // group: Startup
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_settings_52, str_screen_57, empty_string)) == (str_full_58))) goto event_15_0_end;
        global_values->set(8, 0);
    WindowControl::maximize();
        manager.set_window(true);
        
        
        
    }
    event_15_0_end: ;
}
// Function purpose: generated callback event_func_10 processes event block(s) 16_0. Group(s): Startup.
//        Actions/conditions: 16_0: hides the game window; restores the game window; sets window width to 960; plus 6
//        more actions.
void Frames::event_func_10()
{
    // event 16_0 : hides the game window; restores the game window; sets window width to 960; plus 6 more actions
    {
        // group: Startup
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_settings_52, str_screen_57, empty_string)) == (empty_string))) goto event_16_0_end;
        manager.set_window(false);
    WindowControl::restore();
    WindowControl::set_width(960);
    WindowControl::set_height(720);
    WindowControl::set_position((WindowControl::get_screen_width()/MathHelper()/2)-480, (WindowControl::get_screen_height()/MathHelper()/2)-360);
        global_values->set(8, 1);
    }
    event_16_0_end: ;
}
// Function purpose: generated callback event_func_11 processes event block(s) 17_0. Group(s): Startup.
//        Actions/conditions: 17_0: hides the game window; restores the game window; sets window width to 960; plus 6
//        more actions.
void Frames::event_func_11()
{
    // event 17_0 : hides the game window; restores the game window; sets window width to 960; plus 6 more actions
    {
        // group: Startup
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_settings_52, str_screen_57, empty_string)) == (str_window_59))) goto event_17_0_end;
        manager.set_window(false);
    WindowControl::restore();
    WindowControl::set_width(960);
    WindowControl::set_height(720);
    WindowControl::set_position((WindowControl::get_screen_width()/MathHelper()/2)-480, (WindowControl::get_screen_height()/MathHelper()/2)-360);
        global_values->set(8, 1);
    }
    event_17_0_end: ;
}
void Frames::loop_start_loop_0()
{
    event_func_1();
    event_func_2();
    event_func_3();
    event_func_4();
    event_func_5();
    event_func_6();
    event_func_7();
    event_func_8();
    event_func_9();
    event_func_10();
    event_func_11();
}
void Frames::test_collisions_0()
{
    ObjectList::iterator it1, it2;
}
void Frames::folder_search_loop_0()
{
}
void Frames::steam_download_success_0()
{
    folder_search_loop_0();
}
void Frames::steam_download_fail_0()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_0()
{
    folder_search_loop_0();
}
void Frames::steam_on_loop_finish_0()
{
    folder_search_loop_0();
}
void Frames::steam_search_success_0()
{
    folder_search_loop_0();
}
void Frames::steam_on_connect_0()
{
    folder_search_loop_0();
}
// Function purpose: generated callback event_func_12 processes event block(s) 1_0. Actions/conditions: 1_0:
//        sets global value 19 from 1.
void Frames::event_func_12()
{
    // event 1_0 : sets global value 19 from 1
    bool or_result_1_0 = false;
    bool or_temp_result_1_0_0 = false;
    {
        if (!((get_platform()) == (str_chowdren_os_x_60))) goto or_event_1_0_0_end;
        or_result_1_0 = true;
        or_temp_result_1_0_0 = true;
    }
    or_event_1_0_0_end: ;
    // event 1_0 : sets global value 19 from 1
    bool or_temp_result_1_0_1 = false;
    {
        if (!((get_platform()) == (str_chowdren_linux_61))) goto or_event_1_0_1_end;
        or_result_1_0 = true;
        or_temp_result_1_0_1 = true;
        or_event_1_0_1_end: ;
        if (!or_result_1_0) goto or_final_or_event_1_0_1_end;
        global_values->set(19, 1);
    }
    or_final_or_event_1_0_1_end: ;
}
// Function purpose: generated callback event_func_13 processes event block(s) 5_0. Actions/conditions: 5_0:
//        loads a game or save-data file.
void Frames::event_func_13()
{
    // event 5_0 : loads a game or save-data file
    {
        if (frame_time < 0.06) goto event_5_0_end;
        if (not_always_5_0 > loop_count) {
            not_always_5_0 = loop_count + 2;
            goto event_5_0_end;
        }
        not_always_5_0 = loop_count + 2;
        ((INI*)get_instance(gameSettings_instances))->load_file(File::get_appdata_directory()+str_the_escapists_settings_cfg_62, false, false, true);
        {
            loop_start_loop_running = true;
            int times = int(1);
            loop_start_loop_index = 0;
            while (loop_start_loop_index < times) {
                loop_start_loop_0();
                if (!loop_start_loop_running) break;
                loop_start_loop_index++;
            }
        }
    }
    event_5_0_end: ;
}
// Function purpose: generated callback event_func_14 processes event block(s) 6_0. Group(s): Startup.
//        Actions/conditions: 6_0: sets global value 13 from 1.
void Frames::event_func_14()
{
    // event 6_0 : sets global value 13 from 1
    {
        // group: Startup
        if (once_condition_6_0) goto event_6_0_end;
        once_condition_6_0 = true;
        global_values->set(13, 1);
    }
    event_6_0_end: ;
}
// Function purpose: generated callback event_func_15 processes event block(s) 18_0. Actions/conditions: 18_0:
//        checks the event-specific game state condition is met; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_15()
{
    // event 18_0 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(frame_time >= 0.3)) goto event_18_0_end;
        if (!((global_values->get(16)) == (0))) goto event_18_0_end;
        if (!((global_values->get(19)) == (0))) goto event_18_0_end;
        next_frame = index + 1 + 0;    
    
    }
    event_18_0_end: ;
}
// Function purpose: generated callback event_func_16 processes event block(s) 19_0. Actions/conditions: 19_0:
//        checks the event-specific game state condition is met; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_16()
{
    // event 19_0 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_19_0_end;
        if (!(frame_time >= 1.0)) goto event_19_0_end;
        if (!((global_values->get(19)) == (0))) goto event_19_0_end;
        has_quit = true;
    }
    event_19_0_end: ;
}
// Function purpose: generated callback event_func_17 processes event block(s) 20_0. Actions/conditions: 20_0:
//        sets the selected object's horizontal position to get_mouse_x(); sets the selected object's vertical
//        position to get_mouse_y(); moves the selected object to the front.
void Frames::event_func_17()
{
    // event 20_0 : sets the selected object's horizontal position to get_mouse_x(); sets the selected object's vertical position to get_mouse_y(); moves the selected object to the front
    {
        ((Active*)get_instance(mouse_9_instances))->set_x(get_mouse_x());
        ((Active*)get_instance(mouse_9_instances))->set_y(get_mouse_y());
        ((Active*)get_instance(mouse_9_instances))->move_front();
    }
    event_20_0_end: ;
}
// Function purpose: generated callback event_func_18 processes event block(s) 21_0. Actions/conditions: 21_0:
//        checks the event-specific game state condition is met; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_18()
{
    // event 21_0 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!((global_values->get(16)) == (1))) goto event_21_0_end;
        if (!group_check_drm_1) {
            group_check_drm_1 = true;
        }
    }
    event_21_0_end: ;
}
// Function purpose: generated callback event_func_19 processes event block(s) 22_0. Actions/conditions: 22_0:
//        sets the selected object's visibility to true; sets the selected object's text.
void Frames::event_func_19()
{
    // event 22_0 : sets the selected object's visibility to true; sets the selected object's text
    {
        if (!(group_check_drm_1)) goto event_22_0_end;
        if (!(frame_time >= 0.3)) goto event_22_0_end;
        if (((SteamObject*)get_instance(steamactivationchecking_14_instances))->is_activated()) goto event_22_0_end;
        string_5_instances.clear_selection();
        for (ObjectIterator it(string_5_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(true);
            ((Text*)*it)->set_string(str_error_this_account_doesn_t_own_the_escapists_63);
        }
    }
    event_22_0_end: ;
}
// Function purpose: generated callback event_func_20 processes event block(s) 23_0. Actions/conditions: 23_0:
//        updates a value on the target object; sets global value 15 from steamworks2_15->get_user_id(); sets the
//        selected object's visibility to false.
void Frames::event_func_20()
{
    // event 23_0 : updates a value on the target object; sets global value 15 from steamworks2_15->get_user_id(); sets the selected object's visibility to false
    {
        if (!(group_check_drm_1)) goto event_23_0_end;
        if (!(frame_time >= 0.3)) goto event_23_0_end;
        if (!(((SteamObject*)get_instance(steamactivationchecking_14_instances))->is_activated())) goto event_23_0_end;
        global_strings->set(5, ((SteamObject*)get_instance(steamworks2_15_instances))->get_user_name());
        global_values->set(15, ((SteamObject*)get_instance(steamworks2_15_instances))->get_user_id());
        string_5_instances.clear_selection();
        for (ObjectIterator it(string_5_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        next_frame = index + 1 + 0;    
    
    }
    event_23_0_end: ;
}
// Function purpose: generated callback event_func_21 processes event block(s) 24_0. Actions/conditions: 24_0:
//        sets the selected object's visibility to true.
void Frames::event_func_21()
{
    // event 24_0 : sets the selected object's visibility to true
    {
        if (!(frame_time >= 0.3)) goto event_24_0_end;
        if (!((global_values->get(16)) == (0))) goto event_24_0_end;
        if (!((global_values->get(19)) == (1))) goto event_24_0_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        if (!group_langpick_1) {
            group_langpick_1 = true;
        }
    }
    event_24_0_end: ;
}
// Function purpose: generated callback event_func_22 processes event block(s) 25_0. Actions/conditions: 25_0:
//        sets the selected object's scale to 1.
void Frames::event_func_22()
{
    // event 25_0 : sets the selected object's scale to 1
    {
        if (!(group_langpick_1)) goto event_25_0_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!qualifier_0.has_selection()) goto event_25_0_end;
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1);
        }
    }
    event_25_0_end: ;
}
// Function purpose: generated callback event_func_23 processes event block(s) 26_0. Actions/conditions: 26_0:
//        sets the selected object's scale to 1.2.
void Frames::event_func_23()
{
    // event 26_0 : sets the selected object's scale to 1.2
    {
        if (!(group_langpick_1)) goto event_26_0_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!qualifier_0.has_selection()) goto event_26_0_end;
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1.2);
        }
    }
    event_26_0_end: ;
}
// Function purpose: generated callback event_func_24 processes event block(s) 27_0. Actions/conditions: 27_0:
//        updates a value on the target object.
void Frames::event_func_24()
{
    // event 27_0 : updates a value on the target object
    {
        if (!(group_langpick_1)) goto event_27_0_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!qualifier_0.has_selection()) goto event_27_0_end;
        if (!((global_values->get(19)) == (1))) goto event_27_0_end;
        if (!((global_values->get(16)) == (0))) goto event_27_0_end;
        global_strings->set(6, ((Active*)get_single(qualifier_0, default_active_instance))->alterables->strings.get(0));
        next_frame = index + 1 + 0;    
    
    }
    event_27_0_end: ;
}
void Frames::handle_frame_1_events()
{
    test_collisions_0();
    event_func_15();
    event_func_19();
    event_func_20();
    event_func_21();
    if (next_frame != -1) return;
    event_func_12();
    event_func_13();
    event_func_14();
    event_func_17();
    event_func_18();
    if (!group_check_drm_1) goto group_check_drm_1_end;
    group_check_drm_1_end: ;
    if (!group_langpick_1) goto group_langpick_1_end;
    event_func_22();
    event_func_23();
    group_langpick_1_end: ;
}
void Frames::handle_frame_1_pre_events()
{
    event_func_16();
    event_func_24();
}
// Function purpose: generated callback event_func_25 processes event block(s) 2_0. Actions/conditions: 2_0:
//        creates the required directory.
void Frames::event_func_25()
{
    // event 2_0 : creates the required directory
    {
        if (File::directory_exists(File::get_appdata_directory()+str_the_escapists_64)) goto event_2_0_end;
    File::create_directory(File::get_appdata_directory()+str_the_escapists_64);
    }
    event_2_0_end: ;
}
// Function purpose: generated callback event_func_26 processes event block(s) 3_0. Actions/conditions: 3_0:
//        creates the required directory; creates the required directory.
void Frames::event_func_26()
{
    // event 3_0 : creates the required directory; creates the required directory
    {
    File::create_directory(File::get_appdata_directory()+str_the_escapists_65);
    File::create_directory(File::get_appdata_directory()+str_the_escapists_custom_maps_66);
        
    }
    event_3_0_end: ;
}
// Function purpose: generated callback event_func_27 processes event block(s) 4_0. Actions/conditions: 4_0:
//        sets the selected object's visibility to false; sets the selected object's visibility to false; hides the
//        system cursor.
void Frames::event_func_27()
{
    // event 4_0 : sets the selected object's visibility to false; sets the selected object's visibility to false; hides the system cursor
    {
        ((Text*)get_instance(bottomtext_1_instances))->set_visible(false);
        string_5_instances.clear_selection();
        for (ObjectIterator it(string_5_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        manager.up = SDLK_w;
        manager.down = SDLK_s;
        manager.left = SDLK_a;
        manager.right = SDLK_d;
        manager.button1 = SDLK_q;
        manager.button2 = SDLK_e;
        set_cursor_visible(false);
    }
    event_4_0_end: ;
}
void Frames::on_frame_1_start_events()
{
    event_func_25();
    event_func_26();
    event_func_27();
}
void Frames::on_frame_1_init()
{
    index = 0;
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
    static ObjectList* qualifier_0_instances[] = {&flageng_17_instances, &flagspa_18_instances, &flagfre_19_instances, &flagpol_20_instances, &flagita_21_instances, &flagger_22_instances, &flagrus_23_instances, NULL};
    qualifier_0.set(7, &qualifier_0_instances[0]);
    add_background_object(create_backdrop_6(320, 32), 0);
    add_object(create_bottomtext_1(32, 256), 0);
    add_object(create_gameSettings(144, -64), 0);
    add_object(create_gameVariables(176, -64), 0);
    add_object(create_counter_4(348, -94), 0);
    add_object(create_has_11(348, -76), 0);
    add_object(create_string_5(85, 102), 0);
    add_object(create_mouse_9(-48, -32), 0);
    add_object(create_steamactivationchecking_14(-96, -112), 0);
    add_object(create_steamworks2_15(-48, -112), 0);
    add_object(create_string_5(-16, 160), 0);
    add_object(create_flageng_17(64, 92), 0);
    add_object(create_flagspa_18(192, 92), 0);
    add_object(create_flagfre_19(96, 140), 0);
    add_object(create_flagpol_20(256, 92), 0);
    add_object(create_flagita_21(224, 140), 0);
    add_object(create_flagger_22(128, 92), 0);
    add_object(create_flagrus_23(160, 140), 0);
    add_object(create_windowcontrol_0(80, -64), 0);
    loop_start_loop_running = false;
    loop_start_loop_index = 0;
    loops = NULL;
    once_condition_6_0 = false;
    not_always_5_0 = loop_count;
    group_check_drm_1 = false;
    group_langpick_1 = false;
}
// Function purpose: generated callback event_func_28 processes event block(s) 20_1. Actions/conditions: 20_1:
//        sets Key_Up to W; sets Key_Down to S; sets Key_Left to A; plus 7 more actions.
void Frames::event_func_28()
{
    // event 20_1 : sets Key_Up to W; sets Key_Down to S; sets Key_Left to A; plus 7 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(0, str_key_up_67, str_w_68);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(1, str_key_down_69, str_s_70);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_key_left_71, str_a_72);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(3, str_key_right_73, str_d_51);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(4, str_key_ac1_74, str_q_75);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(5, str_key_ac2_76, str_e_77);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(6, str_key_combat_78, str_space_79);
    }
    event_20_1_end: ;
}
// Function purpose: generated callback event_func_29 processes event block(s) 21_1. Group(s): load keys.
//        Actions/conditions: 21_1: sets Key_Up to settings_2->get_string_default(Keys, Up, empty_string).
void Frames::event_func_29()
{
    // event 21_1 : sets Key_Up to settings_2->get_string_default(Keys, Up, empty_string)
    {
        // group: load keys
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_up_38, empty_string)) != (empty_string))) goto event_21_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(0, str_key_up_67, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_up_38, empty_string));
    }
    event_21_1_end: ;
}
// Function purpose: generated callback event_func_30 processes event block(s) 22_1. Group(s): load keys.
//        Actions/conditions: 22_1: sets Key_Down to settings_2->get_string_default(Keys, Down, empty_string).
void Frames::event_func_30()
{
    // event 22_1 : sets Key_Down to settings_2->get_string_default(Keys, Down, empty_string)
    {
        // group: load keys
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_down_81, empty_string)) != (empty_string))) goto event_22_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(1, str_key_down_69, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_down_81, empty_string));
    }
    event_22_1_end: ;
}
// Function purpose: generated callback event_func_31 processes event block(s) 23_1. Group(s): load keys.
//        Actions/conditions: 23_1: sets Key_Left to settings_2->get_string_default(Keys, Left, empty_string).
void Frames::event_func_31()
{
    // event 23_1 : sets Key_Left to settings_2->get_string_default(Keys, Left, empty_string)
    {
        // group: load keys
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_left_82, empty_string)) != (empty_string))) goto event_23_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_key_left_71, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_left_82, empty_string));
    }
    event_23_1_end: ;
}
// Function purpose: generated callback event_func_32 processes event block(s) 24_1. Group(s): load keys.
//        Actions/conditions: 24_1: sets Key_Right to settings_2->get_string_default(Keys, Right, empty_string).
void Frames::event_func_32()
{
    // event 24_1 : sets Key_Right to settings_2->get_string_default(Keys, Right, empty_string)
    {
        // group: load keys
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_right_83, empty_string)) != (empty_string))) goto event_24_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(3, str_key_right_73, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_right_83, empty_string));
    }
    event_24_1_end: ;
}
// Function purpose: generated callback event_func_33 processes event block(s) 25_1. Group(s): load keys.
//        Actions/conditions: 25_1: sets Key_Ac1 to settings_2->get_string_default(Keys, Ac1, empty_string).
void Frames::event_func_33()
{
    // event 25_1 : sets Key_Ac1 to settings_2->get_string_default(Keys, Ac1, empty_string)
    {
        // group: load keys
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_ac1_84, empty_string)) != (empty_string))) goto event_25_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(4, str_key_ac1_74, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_ac1_84, empty_string));
    }
    event_25_1_end: ;
}
// Function purpose: generated callback event_func_34 processes event block(s) 26_1. Group(s): load keys.
//        Actions/conditions: 26_1: sets Key_Ac2 to settings_2->get_string_default(Keys, Ac2, empty_string).
void Frames::event_func_34()
{
    // event 26_1 : sets Key_Ac2 to settings_2->get_string_default(Keys, Ac2, empty_string)
    {
        // group: load keys
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_ac2_85, empty_string)) != (empty_string))) goto event_26_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(5, str_key_ac2_76, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_ac2_85, empty_string));
    }
    event_26_1_end: ;
}
// Function purpose: generated callback event_func_35 processes event block(s) 27_1. Group(s): load keys.
//        Actions/conditions: 27_1: sets Key_Combat to settings_2->get_string_default(Keys, Combat, empty_string).
void Frames::event_func_35()
{
    // event 27_1 : sets Key_Combat to settings_2->get_string_default(Keys, Combat, empty_string)
    {
        // group: load keys
        if (!((((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_combat_86, empty_string)) != (empty_string))) goto event_27_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(6, str_key_combat_78, ((INI*)get_instance(gameSettings_instances))->get_string_default(str_keys_80, str_combat_86, empty_string));
    }
    event_27_1_end: ;
}
void Frames::loop_load_keys_1()
{
    event_func_28();
    event_func_29();
    event_func_30();
    event_func_31();
    event_func_32();
    event_func_33();
    event_func_34();
    event_func_35();
}
void Frames::test_collisions_1()
{
    ObjectList::iterator it1, it2;
}
// Function purpose: generated callback event_func_36 processes event block(s) 4_1. Actions/conditions: 4_1:
//        checks skips if the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_36()
{
    // event 4_1 : checks skips if the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (frame_time < 0.06) goto event_4_1_end;
        if (not_always_4_1 > loop_count) {
            not_always_4_1 = loop_count + 2;
            goto event_4_1_end;
        }
        not_always_4_1 = loop_count + 2;
        {
            loop_load_keys_running = true;
            int times = int(1);
            loop_load_keys_index = 0;
            while (loop_load_keys_index < times) {
                loop_load_keys_1();
                if (!loop_load_keys_running) break;
                loop_load_keys_index++;
            }
        }
    }
    event_4_1_end: ;
}
// Function purpose: generated callback event_func_37 processes event block(s) 5_1. Actions/conditions: 5_1:
//        sets Pressed to 0.
void Frames::event_func_37()
{
    // event 5_1 : sets Pressed to 0
    {
        if (is_mouse_pressed(SDL_BUTTON_LEFT)) goto event_5_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(7, str_pressed_87)) != (0))) goto event_5_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(7, str_pressed_87, 0);
    }
    event_5_1_end: ;
}
// Function purpose: generated callback event_func_38 processes event block(s) 6_1. Actions/conditions: 6_1:
//        sets Pressed to 1; increments Stage by 1; sets Timer to 40; plus 5 more actions.
void Frames::event_func_38()
{
    // event 6_1 : sets Pressed to 1; increments Stage by 1; sets Timer to 40; plus 5 more actions
    {
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(7, str_pressed_87)) == (0))) goto event_6_1_end;
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!active_24_instances.has_selection()) goto event_6_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(7, str_pressed_87, 1);
            ((AssociateArray*)*it)->add_value(8, str_stage_88, 1);
            ((AssociateArray*)*it)->set_value(9, str_timer_89, 40);
        }
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        string_5_instances.clear_selection();
        for (ObjectIterator it(string_5_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        string3_29_instances.clear_selection();
        for (ObjectIterator it(string3_29_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
    }
    event_6_1_end: ;
}
// Function purpose: generated callback event_func_39 processes event block(s) 7_1. Actions/conditions: 7_1:
//        sets Pressed to 1; increments Stage by 1; sets Timer to 40; plus 5 more actions.
void Frames::event_func_39()
{
    // event 7_1 : sets Pressed to 1; increments Stage by 1; sets Timer to 40; plus 5 more actions
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(9, str_timer_89)) == (0))) goto event_7_1_end;
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!active_24_instances.has_selection()) goto event_7_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(7, str_pressed_87, 1);
            ((AssociateArray*)*it)->add_value(8, str_stage_88, 1);
            ((AssociateArray*)*it)->set_value(9, str_timer_89, 40);
        }
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        string_5_instances.clear_selection();
        for (ObjectIterator it(string_5_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
        string3_29_instances.clear_selection();
        for (ObjectIterator it(string3_29_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
    }
    event_7_1_end: ;
}
// Function purpose: generated callback event_func_40 processes event block(s) 8_1. Actions/conditions: 8_1:
//        sets Timer to 40; sets Pressed to 1; increments Stage by 1; plus 1 more actions.
void Frames::event_func_40()
{
    // event 8_1 : sets Timer to 40; sets Pressed to 1; increments Stage by 1; plus 1 more actions
    {
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_8_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(7, str_pressed_87)) == (0))) goto event_8_1_end;
        if (!(((Active*)get_instance(active_24_instances))->test_animation(1))) goto event_8_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_timer_89, 40);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(7, str_pressed_87, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(8, str_stage_88, 1);
        ((Active*)get_instance(active_24_instances))->force_animation(6);
    }
    event_8_1_end: ;
}
// Function purpose: generated callback event_func_41 processes event block(s) 9_1. Actions/conditions: 9_1:
//        sets Timer to 40; sets Pressed to 1; increments Stage by 1; plus 1 more actions.
void Frames::event_func_41()
{
    // event 9_1 : sets Timer to 40; sets Pressed to 1; increments Stage by 1; plus 1 more actions
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_timer_89)) == (0))) goto event_9_1_end;
        if (!(((Active*)get_instance(active_24_instances))->test_animation(1))) goto event_9_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_timer_89, 40);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(7, str_pressed_87, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(8, str_stage_88, 1);
        ((Active*)get_instance(active_24_instances))->force_animation(6);
    }
    event_9_1_end: ;
}
// Function purpose: generated callback event_func_42 processes event block(s) 12_1. Actions/conditions: 12_1:
//        plays a sound or music track.
void Frames::event_func_42()
{
    // event 12_1 : plays a sound or music track
    {
        if (!(group_logos_pc_1)) goto event_12_1_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_12_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(7, str_pressed_87)) == (0))) goto event_12_1_end;
        if (!(((Active*)get_instance(active_24_instances))->test_animation(6))) goto event_12_1_end;
        media.play_id(SOUND_RUMBLE_15, 1-1);
        next_frame = index + 1 + 0;    
    
    }
    event_12_1_end: ;
}
// Function purpose: generated callback event_func_43 processes event block(s) 13_1. Actions/conditions: 13_1:
//        plays a sound or music track.
void Frames::event_func_43()
{
    // event 13_1 : plays a sound or music track
    {
        if (!(group_logos_pc_1)) goto event_13_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_timer_89)) == (0))) goto event_13_1_end;
        if (!(((Active*)get_instance(active_24_instances))->test_animation(6))) goto event_13_1_end;
        media.play_id(SOUND_RUMBLE_15, 1-1);
        next_frame = index + 1 + 0;    
    
    }
    event_13_1_end: ;
}
// Function purpose: generated callback event_func_44 processes event block(s) 14_1. Actions/conditions: 14_1:
//        sets Pressed to 1; increments Stage by 1; sets Timer to 40; plus 1 more actions.
void Frames::event_func_44()
{
    // event 14_1 : sets Pressed to 1; increments Stage by 1; sets Timer to 40; plus 1 more actions
    {
        if (!(group_logos_mac_linux_1)) goto event_14_1_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_14_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(7, str_pressed_87)) == (0))) goto event_14_1_end;
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(6))) { it.deselect(); continue; }
        }
        if (!active_24_instances.has_selection()) goto event_14_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(7, str_pressed_87, 1);
            ((AssociateArray*)*it)->add_value(8, str_stage_88, 1);
            ((AssociateArray*)*it)->set_value(9, str_timer_89, 40);
        }
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
    }
    event_14_1_end: ;
}
// Function purpose: generated callback event_func_45 processes event block(s) 15_1. Actions/conditions: 15_1:
//        sets Pressed to 1; increments Stage by 1; sets Timer to 40; plus 1 more actions.
void Frames::event_func_45()
{
    // event 15_1 : sets Pressed to 1; increments Stage by 1; sets Timer to 40; plus 1 more actions
    {
        if (!(group_logos_mac_linux_1)) goto event_15_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(9, str_timer_89)) == (0))) goto event_15_1_end;
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(6))) { it.deselect(); continue; }
        }
        if (!active_24_instances.has_selection()) goto event_15_1_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(7, str_pressed_87, 1);
            ((AssociateArray*)*it)->add_value(8, str_stage_88, 1);
            ((AssociateArray*)*it)->set_value(9, str_timer_89, 40);
        }
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
    }
    event_15_1_end: ;
}
// Function purpose: generated callback event_func_46 processes event block(s) 16_1. Actions/conditions: 16_1:
//        plays a sound or music track.
void Frames::event_func_46()
{
    // event 16_1 : plays a sound or music track
    {
        if (!(group_logos_mac_linux_1)) goto event_16_1_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_16_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(7, str_pressed_87)) == (0))) goto event_16_1_end;
        if (!(((Active*)get_instance(active_24_instances))->test_animation(9))) goto event_16_1_end;
        media.play_id(SOUND_RUMBLE_15, 1-1);
        next_frame = index + 1 + 0;    
    
    }
    event_16_1_end: ;
}
// Function purpose: generated callback event_func_47 processes event block(s) 17_1. Actions/conditions: 17_1:
//        plays a sound or music track.
void Frames::event_func_47()
{
    // event 17_1 : plays a sound or music track
    {
        if (!(group_logos_mac_linux_1)) goto event_17_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_timer_89)) == (0))) goto event_17_1_end;
        if (!(((Active*)get_instance(active_24_instances))->test_animation(9))) goto event_17_1_end;
        media.play_id(SOUND_RUMBLE_15, 1-1);
        next_frame = index + 1 + 0;    
    
    }
    event_17_1_end: ;
}
// Function purpose: generated callback event_func_48 processes event block(s) 18_1. Actions/conditions: 18_1:
//        sets the selected object's horizontal position to get_mouse_x(); sets the selected object's vertical
//        position to get_mouse_y().
void Frames::event_func_48()
{
    // event 18_1 : sets the selected object's horizontal position to get_mouse_x(); sets the selected object's vertical position to get_mouse_y()
    {
        ((Active*)get_instance(mouse_9_instances))->set_x(get_mouse_x());
        ((Active*)get_instance(mouse_9_instances))->set_y(get_mouse_y());
    }
    event_18_1_end: ;
}
// Function purpose: generated callback event_func_49 processes event block(s) 19_1. Actions/conditions: 19_1:
//        changes a stored game value.
void Frames::event_func_49()
{
    VITA_LEGACY_EVENT();
    // event 19_1 : changes a stored game value
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(9, str_timer_89)) > (0))) goto event_19_1_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(9, str_timer_89, 1);
    }
    event_19_1_end: ;
}
void Frames::handle_frame_2_events()
{
    test_collisions_1();
    if (next_frame != -1) return;
    event_func_36();
    event_func_37();
    event_func_39();
    event_func_41();
    if (!group_logos_pc_1) goto group_logos_pc_1_end;
    event_func_43();
    group_logos_pc_1_end: ;
    if (!group_logos_mac_linux_1) goto group_logos_mac_linux_1_end;
    event_func_45();
    event_func_47();
    group_logos_mac_linux_1_end: ;
    event_func_48();
    event_func_49();
}
void Frames::handle_frame_2_pre_events()
{
    event_func_38();
    event_func_40();
    event_func_42();
    event_func_44();
    event_func_46();
}
// Function purpose: generated callback event_func_50 processes event block(s) 1_1. Actions/conditions: 1_1:
//        clears the current selection or contents; sets Stage to 1; sets Timer to 80; plus 8 more actions.
void Frames::event_func_50()
{
    // event 1_1 : clears the current selection or contents; sets Stage to 1; sets Timer to 80; plus 8 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->clear();
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(8, str_stage_88, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_timer_89, 80);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(10, str_censored_90, str_bollock_twat_hitler_fag_gay_clit_jizz_nob_knob_cum_wank_nigger_nigga_dick_penis_vagina_piss_bastard_retard_shag_shemale_tranny_vulva_fuck_shit_cunt_91);
        set_cursor_visible(false);
        ((INI*)get_instance(gameSettings_instances))->load_file(File::get_appdata_directory()+str_the_escapists_settings_cfg_62, false, false, true);
        media.play(str_music_theme_ogg_92, 10-1, 0);
        media.stop_channel(9-1);
        
    }
    event_1_1_end: ;
}
// Function purpose: generated callback event_func_51 processes event block(s) 2_1. Actions/conditions: 2_1:
//        sets a game or interface text string; sets a game or interface text string.
void Frames::event_func_51()
{
    // event 2_1 : sets a game or interface text string; sets a game or interface text string
    {
        if (!((global_values->get(19)) == (0))) goto event_2_1_end;
        ((Text*)get_instance(string_5_instances))->set_string(str_the_escapists_developed_by_mouldy_toof_studios_and_team17_digital_ltd_2015_published_by_team17_93);
        ((Text*)get_instance(string_5_instances))->set_string(((Text*)get_instance(string_5_instances))->text+str_team17_are_trademarks_or_registered_trademarks_of_team17_digital_limited_all_other_trademarks_copyrights_and_logos_are_property_of_their_respective_owners_94);
    }
    event_2_1_end: ;
}
// Function purpose: generated callback event_func_52 processes event block(s) 3_1. Actions/conditions: 3_1:
//        sets a game or interface text string; sets a game or interface text string.
void Frames::event_func_52()
{
    // event 3_1 : sets a game or interface text string; sets a game or interface text string
    {
        if (!((global_values->get(19)) == (1))) goto event_3_1_end;
        ((Text*)get_instance(string_5_instances))->set_string(str_the_escapists_developed_by_mouldy_toof_studios_mp2_games_and_team17_digital_ltd_2015_published_by_team17_95);
        ((Text*)get_instance(string_5_instances))->set_string(((Text*)get_instance(string_5_instances))->text+str_team17_are_trademarks_or_registered_trademarks_of_team17_digital_limited_all_other_trademarks_copyrights_and_logos_are_property_of_their_respective_owners_94);
    }
    event_3_1_end: ;
}
// Function purpose: generated callback event_func_53 processes event block(s) 10_1. Actions/conditions: 10_1:
//        checks the event-specific game state condition is met; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_53()
{
    // event 10_1 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!((global_values->get(19)) == (0))) goto event_10_1_end;
        if (!group_logos_pc_1) {
            group_logos_pc_1 = true;
        }
    }
    event_10_1_end: ;
}
// Function purpose: generated callback event_func_54 processes event block(s) 11_1. Actions/conditions: 11_1:
//        checks the event-specific game state condition is met; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_54()
{
    // event 11_1 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!((global_values->get(19)) == (1))) goto event_11_1_end;
        if (!group_logos_mac_linux_1) {
            group_logos_mac_linux_1 = true;
        }
    }
    event_11_1_end: ;
}
void Frames::on_frame_2_start_events()
{
    event_func_50();
    event_func_51();
    event_func_52();
    event_func_53();
    event_func_54();
}
void Frames::on_frame_2_init()
{
    index = 1;
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
    add_object(create_active_24(160, 106), 0);
    add_object(create_gameVariables(32, -48), 0);
    add_object(create_mouse_9(112, -48), 0);
    add_object(create_string_25(32, 68), 0);
    add_object(create_string3_29(16, 288), 0);
    add_object(create_string4_30(32, -32), 0);
    add_object(create_gameSettings(32, -80), 0);
    add_object(create_substringreplace_27(64, -48), 0);
    add_object(create_windowcontrol_0(0, -80), 0);
    add_object(create_ini_28(64, -80), 0);
    loop_load_keys_running = false;
    loop_load_keys_index = 0;
    loops = NULL;
    not_always_4_1 = loop_count;
    group_logos_mac_linux_1 = false;
    group_logos_pc_1 = false;
}
// Function purpose: generated callback event_func_55 processes event block(s) 28_2. Actions/conditions: 28_2:
//        sets the selected object's visibility to false; splits saved text into fields; sets a game or interface text
//        string; plus 7 more actions.
void Frames::event_func_55()
{
    // event 28_2 : sets the selected object's visibility to false; splits saved text into fields; sets a game or interface text string; plus 7 more actions
    {
        if (!(group_new_dlc_1)) goto event_28_2_end;
        ((Active*)get_instance(t17presents_91_instances))->set_visible(false);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(list_80_instances))->get_current_line(), str__96);
        ((Text*)get_instance(newdlcbody_75_instances))->set_string(uppercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        ((Text*)get_instance(newdlcbody2_84_instances))->set_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        ((Active*)get_instance(bonus_82_instances))->force_frame(string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))-1);
        ((Active*)get_instance(active4_87_instances))->set_visible(false);
        ((Active*)get_instance(active2_86_instances))->set_visible(false);
    }
    event_28_2_end: ;
}
// Function purpose: generated callback event_func_56 processes event block(s) 29_2. Actions/conditions: 29_2:
//        sets the selected object's visibility to true.
void Frames::event_func_56()
{
    // event 29_2 : sets the selected object's visibility to true
    {
        if (!(group_new_dlc_1)) goto event_29_2_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(4)) == (str_1_97))) goto event_29_2_end;
        ((Active*)get_instance(t17presents_91_instances))->set_visible(true);
    }
    event_29_2_end: ;
}
// Function purpose: generated callback event_func_57 processes event block(s) 30_2. Actions/conditions: 30_2:
//        sets the selected object's visibility to true.
void Frames::event_func_57()
{
    // event 30_2 : sets the selected object's visibility to true
    {
        if (!(group_new_dlc_1)) goto event_30_2_end;
        if (!((((ListObject*)get_instance(list_80_instances))->current_line) < (((ListObject*)get_instance(list_80_instances))->get_count()))) goto event_30_2_end;
        ((Active*)get_instance(active4_87_instances))->set_visible(true);
    }
    event_30_2_end: ;
}
// Function purpose: generated callback event_func_58 processes event block(s) 31_2. Actions/conditions: 31_2:
//        sets the selected object's visibility to true.
void Frames::event_func_58()
{
    // event 31_2 : sets the selected object's visibility to true
    {
        if (!(group_new_dlc_1)) goto event_31_2_end;
        if (!((((ListObject*)get_instance(list_80_instances))->current_line) > (1))) goto event_31_2_end;
        ((Active*)get_instance(active2_86_instances))->set_visible(true);
    }
    event_31_2_end: ;
}
void Frames::loop_refresh_page_2()
{
    event_func_55();
    event_func_56();
    event_func_57();
    event_func_58();
}
// Function purpose: generated callback event_func_59 processes event block(s) 37_2. Group(s): Get Files.
//        Actions/conditions: 37_2: decrypts a save-data file; loads a game or save-data file; encrypts a save-data
//        file; plus 9 more actions.
void Frames::event_func_59()
{
    // event 37_2 : decrypts a save-data file; loads a game or save-data file; encrypts a save-data file; plus 9 more actions
    {
        // group: Get Files
        if (!(File::file_readable(File::get_appdata_directory()+str_the_escapists_save1_save_dat_98))) goto event_37_2_end;
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save1_save_dat_98);
        ((INI*)get_instance(iniv15object_58_instances))->load_file(File::get_appdata_directory()+str_the_escapists_save1_save_dat_98, true, false, true);
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save1_save_dat_98);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(11, str_slottaken1_100, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(12, str_slotinfo1_name_101, ((INI*)get_instance(iniv15object_58_instances))->get_string_default(str_player_102, str_name_103, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(13, str_slotinfo1_avatar_104, ((INI*)get_instance(iniv15object_58_instances))->get_value(str_player_102, str_avatar_105, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(14, str_slotinfo1_prison_106, ((INI*)get_instance(iniv15object_58_instances))->get_string_default(str_player_102, str_map_107, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(15, str_slotinfo1_type_108, ((INI*)get_instance(iniv15object_58_instances))->get_value(str_player_102, str_maptype_109, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(16, str_slotinfo1_day_110, ((INI*)get_instance(iniv15object_58_instances))->get_value(str_prison_111, str_day_112, 0));
    }
    event_37_2_end: ;
}
// Function purpose: generated callback event_func_60 processes event block(s) 38_2. Group(s): Get Files.
//        Actions/conditions: 38_2: decrypts a save-data file; loads a game or save-data file; encrypts a save-data
//        file; plus 9 more actions.
void Frames::event_func_60()
{
    // event 38_2 : decrypts a save-data file; loads a game or save-data file; encrypts a save-data file; plus 9 more actions
    {
        // group: Get Files
        if (!(File::file_readable(File::get_appdata_directory()+str_the_escapists_save2_save_dat_113))) goto event_38_2_end;
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save2_save_dat_113);
        ((INI*)get_instance(iniv15object_58_instances))->load_file(File::get_appdata_directory()+str_the_escapists_save2_save_dat_113, true, false, true);
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save2_save_dat_113);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(17, str_slottaken2_114, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(18, str_slotinfo2_name_115, ((INI*)get_instance(iniv15object_58_instances))->get_string_default(str_player_102, str_name_103, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(19, str_slotinfo2_avatar_116, ((INI*)get_instance(iniv15object_58_instances))->get_value(str_player_102, str_avatar_105, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(20, str_slotinfo2_prison_117, ((INI*)get_instance(iniv15object_58_instances))->get_string_default(str_player_102, str_map_107, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(21, str_slotinfo2_type_118, ((INI*)get_instance(iniv15object_58_instances))->get_value(str_player_102, str_maptype_109, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(22, str_slotinfo2_day_119, ((INI*)get_instance(iniv15object_58_instances))->get_value(str_prison_111, str_day_112, 0));
    }
    event_38_2_end: ;
}
// Function purpose: generated callback event_func_61 processes event block(s) 39_2. Group(s): Get Files.
//        Actions/conditions: 39_2: decrypts a save-data file; loads a game or save-data file; encrypts a save-data
//        file; plus 10 more actions.
void Frames::event_func_61()
{
    // event 39_2 : decrypts a save-data file; loads a game or save-data file; encrypts a save-data file; plus 10 more actions
    {
        // group: Get Files
        if (!(File::file_readable(File::get_appdata_directory()+str_the_escapists_save3_save_dat_120))) goto event_39_2_end;
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save3_save_dat_120);
        ((INI*)get_instance(iniv15object_58_instances))->load_file(File::get_appdata_directory()+str_the_escapists_save3_save_dat_120, true, false, true);
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save3_save_dat_120);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(23, str_slottaken3_121, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(24, str_slotinfo3_name_122, ((INI*)get_instance(iniv15object_58_instances))->get_string_default(str_player_102, str_name_103, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(25, str_slotinfo3_avatar_123, ((INI*)get_instance(iniv15object_58_instances))->get_value(str_player_102, str_avatar_105, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(26, str_slotinfo3_prison_124, ((INI*)get_instance(iniv15object_58_instances))->get_string_default(str_player_102, str_map_107, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(27, str_slotinfo3_prisonname_125, ((INI*)get_instance(iniv15object_58_instances))->get_string_default(str_player_102, str_mapname_126, empty_string));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(28, str_slotinfo3_type_127, ((INI*)get_instance(iniv15object_58_instances))->get_value(str_player_102, str_maptype_109, 0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(29, str_slotinfo3_day_128, ((INI*)get_instance(iniv15object_58_instances))->get_value(str_prison_111, str_day_112, 0));
    }
    event_39_2_end: ;
}
void Frames::loop_slotsy_2()
{
    event_func_59();
    event_func_60();
    event_func_61();
}
// Function purpose: generated callback event_func_62 processes event block(s) 96_2. Actions/conditions: 96_2:
//        sets cust_check to 0.
void Frames::event_func_62()
{
    // event 96_2 : sets cust_check to 0
    {
        if (!(group_pick_slot_1)) goto event_96_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 0);
    }
    event_96_2_end: ;
}
// Function purpose: generated callback event_func_63 processes event block(s) 97_2. Actions/conditions: 97_2:
//        sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_63()
{
    // event 97_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_97_2_end;
        if (!((global_strings->get(0)) == (str_ccl_130))) goto event_97_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_97_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_97_2_end: ;
}
// Function purpose: generated callback event_func_64 processes event block(s) 98_2. Actions/conditions: 98_2:
//        sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_64()
{
    // event 98_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_98_2_end;
        if (!((global_strings->get(0)) == (str_bc_133))) goto event_98_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_98_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_98_2_end: ;
}
// Function purpose: generated callback event_func_65 processes event block(s) 99_2. Actions/conditions: 99_2:
//        sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_65()
{
    // event 99_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_99_2_end;
        if (!((global_strings->get(0)) == (str_tol_134))) goto event_99_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_99_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_99_2_end: ;
}
// Function purpose: generated callback event_func_66 processes event block(s) 100_2. Actions/conditions:
//        100_2: sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_66()
{
    // event 100_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_100_2_end;
        if (!((global_strings->get(0)) == (str_pcpen_135))) goto event_100_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_100_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_100_2_end: ;
}
// Function purpose: generated callback event_func_67 processes event block(s) 101_2. Actions/conditions:
//        101_2: sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_67()
{
    // event 101_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_101_2_end;
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_101_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_101_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_101_2_end: ;
}
// Function purpose: generated callback event_func_68 processes event block(s) 102_2. Actions/conditions:
//        102_2: sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_68()
{
    // event 102_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_102_2_end;
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_102_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_102_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_102_2_end: ;
}
// Function purpose: generated callback event_func_69 processes event block(s) 103_2. Actions/conditions:
//        103_2: sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_69()
{
    // event 103_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_103_2_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_103_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_103_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_103_2_end: ;
}
// Function purpose: generated callback event_func_70 processes event block(s) 104_2. Actions/conditions:
//        104_2: sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_70()
{
    // event 104_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_104_2_end;
        if (!((global_strings->get(0)) == (str_alca_139))) goto event_104_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_104_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_104_2_end: ;
}
// Function purpose: generated callback event_func_71 processes event block(s) 105_2. Actions/conditions:
//        105_2: sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_71()
{
    // event 105_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_105_2_end;
        if (!((global_strings->get(0)) == (str_ea_140))) goto event_105_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_105_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_105_2_end: ;
}
// Function purpose: generated callback event_func_72 processes event block(s) 106_2. Actions/conditions:
//        106_2: sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_72()
{
    // event 106_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_106_2_end;
        if (!((global_strings->get(0)) == (str_campepsilon_141))) goto event_106_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_106_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_106_2_end: ;
}
// Function purpose: generated callback event_func_73 processes event block(s) 107_2. Actions/conditions:
//        107_2: sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1.
void Frames::event_func_73()
{
    // event 107_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 1
    {
        if (!(group_pick_slot_1)) goto event_107_2_end;
        if (!((global_strings->get(0)) == (str_fortbamford_142))) goto event_107_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_107_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 1);
    }
    event_107_2_end: ;
}
// Function purpose: generated callback event_func_74 processes event block(s) 108_2. Actions/conditions:
//        108_2: sets cust_check to 1; sets MapDir to File::get_appdata_directory()+\The Escapists\Custom Maps\; sets
//        global value 18 from 2.
void Frames::event_func_74()
{
    // event 108_2 : sets cust_check to 1; sets MapDir to File::get_appdata_directory()+\The Escapists\Custom Maps\; sets global value 18 from 2
    {
        if (!(group_pick_slot_1)) goto event_108_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_108_2_end;
        if (!((global_strings->get(0)) != (str_perks_143))) goto event_108_2_end;
        if (!((global_strings->get(0)) != (str_stalagflucht_144))) goto event_108_2_end;
        if (!((global_strings->get(0)) != (str_shanktonstatepen_145))) goto event_108_2_end;
        if (!((global_strings->get(0)) != (str_jungle_146))) goto event_108_2_end;
        if (!((global_strings->get(0)) != (str_sanpancho_147))) goto event_108_2_end;
        if (!((global_strings->get(0)) != (str_irongate_148))) goto event_108_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, File::get_appdata_directory()+str_the_escapists_custom_maps_66);
        global_values->set(18, 2);
    }
    event_108_2_end: ;
}
// Function purpose: generated callback event_func_75 processes event block(s) 109_2. Actions/conditions:
//        109_2: sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 0.
void Frames::event_func_75()
{
    // event 109_2 : sets cust_check to 1; sets MapDir to ./Data\Maps\; sets global value 18 from 0
    {
        if (!(group_pick_slot_1)) goto event_109_2_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(30, str_cust_check_129)) == (0))) goto event_109_2_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(30, str_cust_check_129, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        global_values->set(18, 0);
    }
    event_109_2_end: ;
}
// Function purpose: generated callback event_func_76 processes event block(s) 110_2. Actions/conditions:
//        110_2: checks the event-specific game state condition is met; this handler gates a game event without a
//        direct value/object action.
void Frames::event_func_76()
{
    // event 110_2 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!(group_pick_slot_1)) goto event_110_2_end;
        next_frame = 5 + 0;    
    
    }
    event_110_2_end: ;
}
void Frames::loop_custom_2()
{
    event_func_62();
    event_func_63();
    event_func_64();
    event_func_65();
    event_func_66();
    event_func_67();
    event_func_68();
    event_func_69();
    event_func_70();
    event_func_71();
    event_func_72();
    event_func_73();
    event_func_74();
    event_func_75();
    event_func_76();
}
// Function purpose: generated callback event_func_77 processes event block(s) 26_2. Actions/conditions: 26_2:
//        sets the selected object's layer to 1-1; plays a sound or music track; hides a game layer.
void Frames::event_func_77()
{
    // event 26_2 : sets the selected object's layer to 1-1; plays a sound or music track; hides a game layer
    {
        if (!(group_new_dlc_1)) goto event_26_2_end;
        ((Active*)get_instance(mouse_9_instances))->set_layer(1-1);
        media.play_id(SOUND_CLOSE_6, 1-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(4-1);
    }
    event_26_2_end: ;
}
