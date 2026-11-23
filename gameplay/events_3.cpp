#include "vitaframetime.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_165 processes event block(s) 116_2. Actions/conditions:
//        116_2: changes the selected object transparency.
void Frames::event_func_165()
{
    // event 116_2 : changes the selected object transparency
    {
        if (((Active*)get_instance(menuCloseButton_instances))->mouse_over()) goto event_116_2_end;
        ((Active*)get_instance(menuCloseButton_instances))->blend_color.set_alpha_coefficient(160);
    }
    event_116_2_end: ;
}
// Function purpose: generated callback event_func_166 processes event block(s) 117_2. Actions/conditions:
//        117_2: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_166()
{
    // event 117_2 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(((Active*)get_instance(menuCloseButton_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_117_2_end;
        if (layers[4-1].visible) goto event_117_2_end;
        has_quit = true;
    }
    event_117_2_end: ;
}
// Function purpose: generated callback event_func_167 processes event block(s) 118_2. Actions/conditions:
//        118_2: sets the selected object's vertical position to active_44->get_y()-1.
void Frames::event_func_167()
{
    // event 118_2 : sets the selected object's vertical position to active_44->get_y()-1
    {
        if (!(((Active*)get_instance(active_44_instances))->alterables->flags.is_on(1))) goto event_118_2_end;
        every_118_2 += manager.dt;
        if (every_118_2 < 0.4) goto event_118_2_end;
        every_118_2 -= 0.4;
        if (group_pick_slot_1) goto event_118_2_end;
        if (group_quit_1) goto event_118_2_end;
        ((Active*)get_instance(active_44_instances))->set_y(((Active*)get_instance(active_44_instances))->get_y()-1);
    }
    event_118_2_end: ;
}
// Function purpose: generated callback event_func_168 processes event block(s) 119_2. Actions/conditions:
//        119_2: sets the selected object's vertical position to active_44->get_y()+1.
void Frames::event_func_168()
{
    // event 119_2 : sets the selected object's vertical position to active_44->get_y()+1
    {
        if (!(((Active*)get_instance(active_44_instances))->alterables->flags.is_off(1))) goto event_119_2_end;
        every_119_2 += manager.dt;
        if (every_119_2 < 0.4) goto event_119_2_end;
        every_119_2 -= 0.4;
        if (group_quit_1) goto event_119_2_end;
        if (group_pick_slot_1) goto event_119_2_end;
        ((Active*)get_instance(active_44_instances))->set_y(((Active*)get_instance(active_44_instances))->get_y()+1);
    }
    event_119_2_end: ;
}
// Function purpose: generated callback event_func_169 processes event block(s) 120_2. Actions/conditions:
//        120_2: enables flag 1 (object-specific active or interaction state) on the selected object.
void Frames::event_func_169()
{
    // event 120_2 : enables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(((Active*)get_instance(active_44_instances))->alterables->flags.is_off(1))) goto event_120_2_end;
        if (!((((Active*)get_instance(active_44_instances))->get_y()) >= (60))) goto event_120_2_end;
        ((Active*)get_instance(active_44_instances))->alterables->flags.enable(1);
    }
    event_120_2_end: ;
}
// Function purpose: generated callback event_func_170 processes event block(s) 121_2. Actions/conditions:
//        121_2: disables flag 1 (object-specific active or interaction state) on the selected object.
void Frames::event_func_170()
{
    // event 121_2 : disables flag 1 (object-specific active or interaction state) on the selected object
    {
        if (!(((Active*)get_instance(active_44_instances))->alterables->flags.is_on(1))) goto event_121_2_end;
        if (!((((Active*)get_instance(active_44_instances))->get_y()) <= (57))) goto event_121_2_end;
        ((Active*)get_instance(active_44_instances))->alterables->flags.disable(1);
    }
    event_121_2_end: ;
}
void Frames::handle_frame_3_events()
{
    test_collisions_2();
    event_func_119();
    event_func_120();
    if (next_frame != -1) return;
    event_func_118();
    if (!group_new_dlc_1) goto group_new_dlc_1_end;
    event_func_121();
    event_func_122();
    event_func_124();
    event_func_127();
    event_func_128();
    group_new_dlc_1_end: ;
    event_func_130();
    event_func_131();
    event_func_132();
    event_func_137();
    event_func_138();
    if (!group_quit_1) goto group_quit_1_end;
    event_func_139();
    event_func_142();
    event_func_143();
    event_func_144();
    event_func_145();
    group_quit_1_end: ;
    if (!group_pick_slot_1) goto group_pick_slot_1_end;
    if (!group_pick_slot_really_erase_1) goto group_pick_slot_really_erase_1_end;
    event_func_146();
    event_func_147();
    event_func_148();
    group_pick_slot_really_erase_1_end: ;
    event_func_149();
    event_func_150();
    event_func_151();
    event_func_152();
    event_func_153();
    event_func_154();
    group_pick_slot_1_end: ;
    event_func_161();
    event_func_162();
    event_func_164();
    event_func_165();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
}
void Frames::handle_frame_3_pre_events()
{
    event_func_123();
    event_func_125();
    event_func_126();
    event_func_129();
    event_func_133();
    event_func_134();
    event_func_135();
    event_func_136();
    event_func_140();
    event_func_141();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_163();
    event_func_166();
}
// Function purpose: generated callback event_func_171 processes event block(s) 2_2. Actions/conditions: 2_2:
//        stops the current animation; stops the current animation.
void Frames::event_func_171()
{
    // event 2_2 : stops the current animation; stops the current animation
    {
        
        ((Active*)get_instance(bonus_82_instances))->stop_animation();
        ((Active*)get_instance(t17presents_91_instances))->stop_animation();
    }
    event_2_2_end: ;
}
// Function purpose: generated callback event_func_172 processes event block(s) 3_2. Actions/conditions: 3_2:
//        loads a game or save-data file; loads a game or save-data file.
void Frames::event_func_172()
{
    // event 3_2 : loads a game or save-data file; loads a game or save-data file
    {
        ((INI*)get_instance(translationData_instances))->load_file(str_data_data_215+global_strings->get(6)+str_dat_216);
        ((INI*)get_instance(settings2_78_instances))->load_file(File::get_appdata_directory()+str_the_escapists_settings_cfg_62);
    }
    event_3_2_end: ;
}
// Function purpose: generated callback event_func_173 processes event block(s) 4_2. Actions/conditions: 4_2:
//        sets GetFiles to -1; hides the system cursor; sets a game or interface text string; plus 16 more actions.
void Frames::event_func_173()
{
    // event 4_2 : sets GetFiles to -1; hides the system cursor; sets a game or interface text string; plus 16 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(39, str_getfiles_201, -1);
        set_cursor_visible(false);
        options_33_instances.clear_selection();
        spread_value(options_33_instances, 0, 1);
        ((Text*)get_instance(versionText_instances))->set_string(global_strings->get(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(11, str_slottaken1_100, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(17, str_slottaken2_114, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(23, str_slottaken3_121, 0);
        ((Text*)get_instance(play_47_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_217, str_1_97));
        ((Text*)get_instance(lboards_45_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_217, str_2_155));
        ((Text*)get_instance(settings_46_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_217, str_3_158));
        ((Text*)get_instance(fileheader_52_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_1_97)));
        ((Text*)get_instance(back2_68_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_3_158)));
        ((Text*)get_instance(erase2_62_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_4_161)));
        ((Text*)get_instance(slot4_65_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_17_218));
        ((Text*)get_instance(eraseheader_66_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_16_219)));
        ((Text*)get_instance(storetext_90_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_dlc_150, str_store_220)));
        ((Text*)get_instance(newdlcheader_76_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_dlc_150, str_new_221)));
    }
    event_4_2_end: ;
}
// Function purpose: generated callback event_func_174 processes event block(s) 7_2. Actions/conditions: 7_2:
//        sets text formatting to bold; sets text formatting to bold; sets text formatting to bold.
void Frames::event_func_174()
{
    // event 7_2 : sets text formatting to bold; sets text formatting to bold; sets text formatting to bold
    {
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_7_2_end;
        ((Text*)get_instance(fileheader_52_instances))->set_bold(0);
        ((Text*)get_instance(eraseheader_66_instances))->set_bold(0);
        ((Text*)get_instance(newdlcheader_76_instances))->set_bold(0);
    }
    event_7_2_end: ;
}
// Function purpose: generated callback event_func_175 processes event block(s) 8_2. Actions/conditions: 8_2:
//        checks the event-specific game state condition is met; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_175()
{
    // event 8_2 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        if (!((global_values->get(16)) == (1))) goto event_8_2_end;
        if (!group_new_dlc_1) {
            group_new_dlc_1 = true;
            group_check_group_new_dlc_1_0 = true;
        }
    }
    event_8_2_end: ;
}
// Function purpose: generated callback event_func_176 processes event block(s) 122_2. Actions/conditions:
//        122_2: sets the selected object's visibility to true.
void Frames::event_func_176()
{
    // event 122_2 : sets the selected object's visibility to true
    {
        if (!((global_values->get(16)) == (0))) goto event_122_2_end;
        ((Text*)get_instance(drmfree_70_instances))->set_visible(true);
    }
    event_122_2_end: ;
}
void Frames::on_frame_3_start_events()
{
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
}
void Frames::on_frame_3_init()
{
    index = 2;
    width = 320;
    height = 240;
    virtual_width = 320;
    virtual_height = 240;
    background_color = Color(0, 0, 0);
    timer_base = 50;
    reset_image_cache();
    flush_image_cache();
    layers.resize(4);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, false, false, false);
    layers[2].init(2, 1.0, 1.0, false, false, false);
    layers[3].init(3, 1.0, 1.0, false, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_1_instances[] = {&slot1_55_instances, &slot2_56_instances, &slot3_57_instances, NULL};
    qualifier_1.set(3, &qualifier_1_instances[0]);
    add_background_object(create_backdrop5_43(0, 2), 0);
    add_object(create_copyrightText(0, 215), 0);
    add_background_object(create_quickbackdrop2_71(368, 64), 0);
    add_object(create_options_33(48, 288), 0);
    add_object(create_options_33(213, 191), 0);
    add_object(create_gameVariables(32, -48), 0);
    add_object(create_mouse_31(272, -48), 0);
    add_object(create_options_33(32, 191), 0);
    add_object(create_play_47(35, 194), 0);
    add_object(create_options_33(176, 256), 0);
    add_object(create_string3_34(176, 272), 0);
    add_object(create_settings_46(215, 194), 0);
    add_object(create_editor_72(48, 288), 0);
    add_object(create_layerobject_37(128, -48), 0);
    add_object(create_active_44(159, 62), 0);
    add_object(create_versionText(32, 0), 0);
    add_object(create_drmfree_70(0, -32), 0);
    add_object(create_options_33(123, 191), 0);
    add_object(create_lboards_45(119, 195), 0);
    add_object(create_editor_48(368, 272), 0);
    add_object(create_active7_50(320, 256), 0);
    add_object(create_menuCloseButton(308, 0), 0);
    add_object(create_substringreplace_27(240, -112), 0);
    add_object(create_steamworks_79(-64, 80), 0);
    add_object(create_stringtokenizer_81(-80, -80), 0);
    add_object(create_translationData(-128, -64), 0);
    add_object(create_newsavetitlegrab_74(-128, -32), 0);
    add_object(create_settings2_78(-128, 0), 0);
    add_background_object(create_quickbackdrop_39(0, 0), 1);
    add_background_object(create_backdrop2_38(60, 30), 1);
    add_object(create_slot1_55(70, 64), 1);
    add_object(create_slot2_56(70, 103), 1);
    add_object(create_slot3_57(70, 142), 1);
    add_object(create_slot1_40(79, 66), 1);
    add_object(create_slot2_53(79, 105), 1);
    add_object(create_slot3_54(79, 144), 1);
    add_object(create_interfaceButtons(304, 272), 1);
    add_object(create_active6_41(256, 272), 1);
    add_object(create_fileheader_52(65, 41), 1);
    add_object(create_erase_60(190, 182), 1);
    add_object(create_back_61(127, 182), 1);
    add_object(create_iniv15object_58(128, -112), 1);
    add_object(create_erase2_62(193, 184), 1);
    add_object(create_back2_68(128, 184), 1);
    add_object(create_active3_63(-24, 72), 1);
    add_background_object(create_quickbackdrop_39(0, 0), 2);
    add_background_object(create_backdrop6_64(50, 75), 2);
    add_object(create_eraseheader_66(65, 89), 2);
    add_object(create_slot4_65(62, 102), 2);
    add_background_object(create_quickbackdrop_39(0, 0), 3);
    add_background_object(create_backdrop7_83(30, 35), 3);
    add_background_object(create_backdrop3_85(49, 60), 3);
    add_object(create_newdlcheader_76(65, 43), 3);
    add_object(create_newdlcbody2_84(54, 120), 3);
    add_object(create_newdlcclose_77(363, 82), 3);
    add_object(create_bonus_82(158, 90), 3);
    add_object(create_active2_86(267, 105), 3);
    add_object(create_active4_87(53, 105), 3);
    add_object(create_active9_88(61, 84), 3);
    add_object(create_newdlcbody_75(60, 106), 3);
    add_object(create_options2_89(160, 182), 3);
    add_object(create_storetext_90(80, 186), 3);
    add_object(create_t17presents_91(160, 110), 3);
    add_object(create_list_80(400, -64), 3);
    loop_refresh_page_running = false;
    loop_refresh_page_index = 0;
    loop_slotsy_running = false;
    loop_slotsy_index = 0;
    loop_custom_running = false;
    loop_custom_index = 0;
    loop_reset_txt_running = false;
    loop_reset_txt_index = 0;
    loop_check_slots_running = false;
    loop_check_slots_index = 0;
    loop_mapname_running = false;
    loop_mapname_index = 0;
    loop_close_dlc_popup_running = false;
    loop_close_dlc_popup_index = 0;
    loop_del_syst_running = false;
    loop_del_syst_index = 0;
    loop_check_dlc_popup_running = false;
    loop_check_dlc_popup_index = 0;
    loops = NULL;
    group_quit_1 = false;
    once_condition_5_2 = false;
    group_check_group_pick_slot_1_0 = true;
    group_check_group_pick_slot_really_erase_1_0 = true;
    group_check_group_new_dlc_1_0 = true;
    group_pick_slot_1 = false;
    every_119_2 = 0.0f;
    group_new_dlc_1 = false;
    group_pick_slot_really_erase_1 = false;
    group_check_group_quit_1_0 = true;
    every_118_2 = 0.0f;
}
// Function purpose: generated callback event_func_177 processes event block(s) 45_3. Group(s): avatar.
//        Actions/conditions: 45_3: sets the displayed text.
void Frames::event_func_177()
{
    // event 45_3 : sets the displayed text
    {
        // group: avatar
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(43, str_namechanged_222)) == (0))) goto event_45_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (0))) goto event_45_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(str_rabbit_223);
    }
    event_45_3_end: ;
}
// Function purpose: generated callback event_func_178 processes event block(s) 46_3. Group(s): avatar.
//        Actions/conditions: 46_3: sets the displayed text.
void Frames::event_func_178()
{
    // event 46_3 : sets the displayed text
    {
        // group: avatar
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(43, str_namechanged_222)) == (0))) goto event_46_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (1))) goto event_46_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(str_baldeagle_224);
    }
    event_46_3_end: ;
}
// Function purpose: generated callback event_func_179 processes event block(s) 47_3. Group(s): avatar.
//        Actions/conditions: 47_3: sets the displayed text.
void Frames::event_func_179()
{
    // event 47_3 : sets the displayed text
    {
        // group: avatar
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(43, str_namechanged_222)) == (0))) goto event_47_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (2))) goto event_47_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(str_lifer_225);
    }
    event_47_3_end: ;
}
// Function purpose: generated callback event_func_180 processes event block(s) 48_3. Group(s): avatar.
//        Actions/conditions: 48_3: sets the displayed text.
void Frames::event_func_180()
{
    // event 48_3 : sets the displayed text
    {
        // group: avatar
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(43, str_namechanged_222)) == (0))) goto event_48_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (3))) goto event_48_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(str_youngbuck_226);
    }
    event_48_3_end: ;
}
// Function purpose: generated callback event_func_181 processes event block(s) 49_3. Group(s): avatar.
//        Actions/conditions: 49_3: sets the displayed text.
void Frames::event_func_181()
{
    // event 49_3 : sets the displayed text
    {
        // group: avatar
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(43, str_namechanged_222)) == (0))) goto event_49_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (4))) goto event_49_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(str_oldtimer_227);
    }
    event_49_3_end: ;
}
// Function purpose: generated callback event_func_182 processes event block(s) 50_3. Group(s): avatar.
//        Actions/conditions: 50_3: sets the displayed text.
void Frames::event_func_182()
{
    // event 50_3 : sets the displayed text
    {
        // group: avatar
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(43, str_namechanged_222)) == (0))) goto event_50_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (5))) goto event_50_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(str_billygoat_228);
    }
    event_50_3_end: ;
}
// Function purpose: generated callback event_func_183 processes event block(s) 51_3. Group(s): avatar.
//        Actions/conditions: 51_3: sets the displayed text.
void Frames::event_func_183()
{
    // event 51_3 : sets the displayed text
    {
        // group: avatar
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(43, str_namechanged_222)) == (0))) goto event_51_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (6))) goto event_51_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(str_froseph_229);
    }
    event_51_3_end: ;
}
// Function purpose: generated callback event_func_184 processes event block(s) 52_3. Group(s): avatar.
//        Actions/conditions: 52_3: sets the displayed text.
void Frames::event_func_184()
{
    // event 52_3 : sets the displayed text
    {
        // group: avatar
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(43, str_namechanged_222)) == (0))) goto event_52_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (7))) goto event_52_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(str_tango_230);
    }
    event_52_3_end: ;
}
// Function purpose: generated callback event_func_185 processes event block(s) 53_3. Group(s): avatar.
//        Actions/conditions: 53_3: sets the displayed text.
void Frames::event_func_185()
{
    // event 53_3 : sets the displayed text
    {
        // group: avatar
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(43, str_namechanged_222)) == (0))) goto event_53_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) == (8))) goto event_53_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(str_maru_231);
    }
    event_53_3_end: ;
}
void Frames::loop_default_name_3()
{
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
}
// Function purpose: generated callback event_func_186 processes event block(s) 28_3. Actions/conditions: 28_3:
//        sets filth to stringtokenizer_81->get(loop_censor_check_index).
void Frames::event_func_186()
{
    // event 28_3 : sets filth to stringtokenizer_81->get(loop_censor_check_index)
    {
        if (!(group_rename_1)) goto event_28_3_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(44, str_filth_232, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(loop_censor_check_index));
    }
    event_28_3_end: ;
}
// Function purpose: generated callback event_func_187 processes event block(s) 29_3. Actions/conditions: 29_3:
//        sets error to 1; sets a game or interface text string.
void Frames::event_func_187()
{
    // event 29_3 : sets error to 1; sets a game or interface text string
    {
        if (!(group_rename_1)) goto event_29_3_end;
        if (!((string_find(uppercase_string(((EditObject*)get_instance(editbox_92_instances))->get_text()), uppercase_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(44, str_filth_232)), 0)) != (-1))) goto event_29_3_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((Text*)get_instance(error_109_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_30_235));
    }
    event_29_3_end: ;
}
void Frames::loop_censor_check_3()
{
    event_func_186();
    event_func_187();
}
// Function purpose: generated callback event_func_188 processes event block(s) 26_3. Actions/conditions: 26_3:
//        sets a game or interface text string; sets error to 1.
void Frames::event_func_188()
{
    // event 26_3 : sets a game or interface text string; sets error to 1
    {
        if (!(group_rename_1)) goto event_26_3_end;
        if (!((string_size(((EditObject*)get_instance(editbox_92_instances))->get_text())) <= (2))) goto event_26_3_end;
        ((Text*)get_instance(error_109_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_32_236));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
    }
    event_26_3_end: ;
}
// Function purpose: generated callback event_func_189 processes event block(s) 27_3. Actions/conditions: 27_3:
//        splits saved text into fields.
void Frames::event_func_189()
{
    // event 27_3 : splits saved text into fields
    {
        if (!(group_rename_1)) goto event_27_3_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((AssociateArray*)get_instance(gameVariables_instances))->get_string(10, str_censored_90), str__96);
        {
            loop_censor_check_running = true;
            int times = int(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get_count());
            loop_censor_check_index = 0;
            while (loop_censor_check_index < times) {
                loop_censor_check_3();
                if (!loop_censor_check_running) break;
                loop_censor_check_index++;
            }
        }
    }
    event_27_3_end: ;
}
// Function purpose: generated callback event_func_190 processes event block(s) 30_3. Actions/conditions: 30_3:
//        sets the selected object's visibility to true; sets errorCount to 75; plays a sound or music track.
void Frames::event_func_190()
{
    // event 30_3 : sets the selected object's visibility to true; sets errorCount to 75; plays a sound or music track
    {
        if (!(group_rename_1)) goto event_30_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (1))) goto event_30_3_end;
        ((Text*)get_instance(error_109_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(46, str_errorcount_237, 75);
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_30_3_end: ;
}
// Function purpose: generated callback event_func_191 processes event block(s) 31_3. Actions/conditions: 31_3:
//        sets the displayed text; updates a value on the target object; changes the selected object transparency;
//        plus 6 more actions.
void Frames::event_func_191()
{
    // event 31_3 : sets the displayed text; updates a value on the target object; changes the selected object transparency; plus 6 more actions
    {
        if (!(group_rename_1)) goto event_31_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_31_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(uppercase_string(left_string(((EditObject*)get_instance(editbox_92_instances))->get_text(), 1))+lowercase_string(right_string(((EditObject*)get_instance(editbox_92_instances))->get_text(), (string_size(((EditObject*)get_instance(editbox_92_instances))->get_text())-1))));
        ((Text*)get_instance(name_93_instances))->blend_color.set(Color(192, 192, 192));
        ((Active*)get_instance(back_102_instances))->blend_color.set_alpha_coefficient(0);
        ((Active*)get_instance(letsgo_100_instances))->blend_color.set_alpha_coefficient(0);
        ((Active*)get_instance(edit_98_instances))->blend_color.set_alpha_coefficient(0);
        media.play_id(SOUND_PLIP_16, 1-1);
            group_rename_1 = false;
    
    }
    event_31_3_end: ;
}
void Frames::loop_check_name_3()
{
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
}
void Frames::test_collisions_3()
{
    ObjectList::iterator it1, it2;
}
// Function purpose: generated callback event_func_192 processes event block(s) 5_3. Actions/conditions: 5_3:
//        sets a game or interface text string; sets the selected object's horizontal position to get_mouse_x(); sets
//        the selected object's vertical position to get_mouse_y(); plus 7 more actions.
void Frames::event_func_192()
{
    // event 5_3 : sets a game or interface text string; sets the selected object's horizontal position to get_mouse_x(); sets the selected object's vertical position to get_mouse_y(); plus 7 more actions
    {
        ((Text*)get_instance(name_93_instances))->set_string(((EditObject*)get_instance(editbox_92_instances))->get_text());
        ((Active*)get_instance(mouse_9_instances))->set_x(get_mouse_x());
        ((Active*)get_instance(mouse_9_instances))->set_y(get_mouse_y());
        ((Active*)get_instance(mouse_9_instances))->move_front();
        ((Active*)get_instance(edit_98_instances))->set_direction(0);
        ((Active*)get_instance(letsgo_100_instances))->set_direction(0);
        ((Active*)get_instance(back_102_instances))->set_direction(0);
    }
    event_5_3_end: ;
}
// Function purpose: generated callback event_func_193 processes event block(s) 6_3. Actions/conditions: 6_3:
//        sets the selected object's direction to 16.
void Frames::event_func_193()
{
    // event 6_3 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(edit_98_instances))->mouse_over())) goto event_6_3_end;
        if (!((((Active*)get_instance(edit_98_instances))->blend_color.get_alpha_coefficient()) == (0))) goto event_6_3_end;
        ((Active*)get_instance(edit_98_instances))->set_direction(16);
    }
    event_6_3_end: ;
}
// Function purpose: generated callback event_func_194 processes event block(s) 7_3. Actions/conditions: 7_3:
//        sets the selected object's direction to 16.
void Frames::event_func_194()
{
    // event 7_3 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(letsgo_100_instances))->mouse_over())) goto event_7_3_end;
        if (!((((Active*)get_instance(letsgo_100_instances))->blend_color.get_alpha_coefficient()) == (0))) goto event_7_3_end;
        ((Active*)get_instance(letsgo_100_instances))->set_direction(16);
    }
    event_7_3_end: ;
}
// Function purpose: generated callback event_func_195 processes event block(s) 8_3. Actions/conditions: 8_3:
//        sets the selected object's direction to 16.
void Frames::event_func_195()
{
    // event 8_3 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(back_102_instances))->mouse_over())) goto event_8_3_end;
        if (!((((Active*)get_instance(back_102_instances))->blend_color.get_alpha_coefficient()) == (0))) goto event_8_3_end;
        ((Active*)get_instance(back_102_instances))->set_direction(16);
    }
    event_8_3_end: ;
}
// Function purpose: generated callback event_func_196 processes event block(s) 9_3. Actions/conditions: 9_3:
//        sets global value 11 from 0; sets Name to editbox_92->get_text(); sets Avatar to counter_4->value; plus 1
//        more actions.
void Frames::event_func_196()
{
    // event 9_3 : sets global value 11 from 0; sets Name to editbox_92->get_text(); sets Avatar to counter_4->value; plus 1 more actions
    {
        if (!(((Active*)get_instance(letsgo_100_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_9_3_end;
        if (!((((Active*)get_instance(letsgo_100_instances))->blend_color.get_alpha_coefficient()) == (0))) goto event_9_3_end;
        global_values->set(11, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(47, str_name_103, ((EditObject*)get_instance(editbox_92_instances))->get_text());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(48, str_avatar_105, ((Counter*)get_instance(counter_4_instances))->value);
        media.play_id(SOUND_OPEN_5, 1-1);
        next_frame = 10 + 0;    
    
    }
    event_9_3_end: ;
}
// Function purpose: generated callback event_func_197 processes event block(s) 10_3. Actions/conditions: 10_3:
//        plays a sound or music track.
void Frames::event_func_197()
{
    // event 10_3 : plays a sound or music track
    {
        if (!(((Active*)get_instance(back_102_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_10_3_end;
        media.play_id(SOUND_CLOSE_6, 1-1);
        next_frame = 4 + 0;    
    
    }
    event_10_3_end: ;
}
// Function purpose: generated callback event_func_198 processes event block(s) 16_3. Actions/conditions: 16_3:
//        disables keyboard focus for the control.
void Frames::event_func_198()
{
    // event 16_3 : disables keyboard focus for the control
    {
        if (group_rename_1) goto event_16_3_end;
        if (!(((EditObject*)get_instance(editbox_92_instances))->get_focus())) goto event_16_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->disable_focus();
    }
    event_16_3_end: ;
}
// Function purpose: generated callback event_func_199 processes event block(s) 17_3. Actions/conditions: 17_3:
//        sets LClick to 0.
void Frames::event_func_199()
{
    // event 17_3 : sets LClick to 0
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) != (0))) goto event_17_3_end;
        if (is_mouse_pressed(SDL_BUTTON_LEFT)) goto event_17_3_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 0);
    }
    event_17_3_end: ;
}
// Function purpose: generated callback event_func_200 processes event block(s) 18_3. Actions/conditions: 18_3:
//        plays a sound or music track; plays a sound or music track; sets LClick to 1.
void Frames::event_func_200()
{
    // event 18_3 : plays a sound or music track; plays a sound or music track; sets LClick to 1
    {
        if (!(((Active*)get_instance(edit_98_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_18_3_end;
        if (!((((Active*)get_instance(edit_98_instances))->blend_color.get_alpha_coefficient()) == (0))) goto event_18_3_end;
        if (group_rename_1) goto event_18_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_18_3_end;
        media.play_id(SOUND_BUY_11, 1-1);
        if (!group_rename_1) {
            group_rename_1 = true;
            group_check_group_rename_1_0 = true;
        }
        media.play_id(SOUND_PLIP_16, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
    }
    event_18_3_end: ;
}
// Function purpose: generated callback event_func_201 processes event block(s) 20_3. Actions/conditions: 20_3:
//        sets NameChanged to 1; sets the displayed text; sets a game or interface text string; plus 7 more actions.
void Frames::event_func_201()
{
    // event 20_3 : sets NameChanged to 1; sets the displayed text; sets a game or interface text string; plus 7 more actions
    {
        if (!(group_rename_1)) goto event_20_3_end;
        if (!group_check_group_rename_1_0) goto event_20_3_end;
        group_check_group_rename_1_0 = false;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(43, str_namechanged_222, 1);
        ((EditObject*)get_instance(editbox_92_instances))->set_text(empty_string);
        ((Text*)get_instance(name_93_instances))->set_string(empty_string);
        ((Text*)get_instance(name_93_instances))->blend_color.set(Color(157, 218, 255));
        ((Active*)get_instance(back_102_instances))->blend_color.set_alpha_coefficient(130);
        ((Active*)get_instance(letsgo_100_instances))->blend_color.set_alpha_coefficient(130);
        ((Active*)get_instance(edit_98_instances))->blend_color.set_alpha_coefficient(130);
    }
    event_20_3_end: ;
}
// Function purpose: generated callback event_func_202 processes event block(s) 21_3. Actions/conditions: 21_3:
//        enables keyboard focus for the control.
void Frames::event_func_202()
{
    // event 21_3 : enables keyboard focus for the control
    {
        if (!(group_rename_1)) goto event_21_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->enable_focus();
    }
    event_21_3_end: ;
}
// Function purpose: generated callback event_func_203 processes event block(s) 22_3. Actions/conditions: 22_3:
//        sets error to 0.
void Frames::event_func_203()
{
    // event 22_3 : sets error to 0
    {
        if (!(group_rename_1)) goto event_22_3_end;
        if (!(is_key_pressed_once(SDLK_RETURN))) goto event_22_3_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(45, str_error_233, 0);
        }
        {
            loop_check_name_running = true;
            int times = int(1);
            loop_check_name_index = 0;
            while (loop_check_name_index < times) {
                loop_check_name_3();
                if (!loop_check_name_running) break;
                loop_check_name_index++;
            }
        }
    }
    event_22_3_end: ;
}
// Function purpose: generated callback event_func_204 processes event block(s) 23_3. Actions/conditions: 23_3:
//        sets error to 0.
void Frames::event_func_204()
{
    // event 23_3 : sets error to 0
    {
        if (!(group_rename_1)) goto event_23_3_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_23_3_end;
        if (mouse_in_zone(107, 140, 199, 157)) goto event_23_3_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(45, str_error_233, 0);
        }
        {
            loop_check_name_running = true;
            int times = int(1);
            loop_check_name_index = 0;
            while (loop_check_name_index < times) {
                loop_check_name_3();
                if (!loop_check_name_running) break;
                loop_check_name_index++;
            }
        }
    }
    event_23_3_end: ;
}
// Function purpose: generated callback event_func_205 processes event block(s) 24_3. Actions/conditions: 24_3:
//        plays a sound or music track.
void Frames::event_func_205()
{
    // event 24_3 : plays a sound or music track
    {
        if (!(group_rename_1)) goto event_24_3_end;
        if (!(is_key_pressed_once(SDLK_RETURN))) goto event_24_3_end;
        if (!((string_size(((EditObject*)get_instance(editbox_92_instances))->get_text())) <= (2))) goto event_24_3_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_24_3_end: ;
}
// Function purpose: generated callback event_func_206 processes event block(s) 25_3. Actions/conditions: 25_3:
//        plays a sound or music track.
void Frames::event_func_206()
{
    // event 25_3 : plays a sound or music track
    {
        if (!(group_rename_1)) goto event_25_3_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_25_3_end;
        if (mouse_in_zone(107, 133, 199, 150)) goto event_25_3_end;
        if (!((string_size(((EditObject*)get_instance(editbox_92_instances))->get_text())) <= (2))) goto event_25_3_end;
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_25_3_end: ;
}
// Function purpose: generated callback event_func_207 processes event block(s) 32_3. Actions/conditions: 32_3:
//        changes a stored game value.
void Frames::event_func_207()
{
    VITA_LEGACY_EVENT();
    // event 32_3 : changes a stored game value
    {
        if (!(group_rename_1)) goto event_32_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_errorcount_237)) > (0))) goto event_32_3_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(46, str_errorcount_237, 1);
    }
    event_32_3_end: ;
}
// Function purpose: generated callback event_func_208 processes event block(s) 33_3. Actions/conditions: 33_3:
//        sets the selected object's visibility to false.
void Frames::event_func_208()
{
    // event 33_3 : sets the selected object's visibility to false
    {
        if (!(group_rename_1)) goto event_33_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(46, str_errorcount_237)) == (0))) goto event_33_3_end;
        ((Text*)get_instance(error_109_instances))->set_visible(false);
    }
    event_33_3_end: ;
}
// Function purpose: generated callback event_func_209 processes event block(s) 34_3. Actions/conditions: 34_3:
//        sets the selected object's direction to get_direction_int(active3_63->x, active3_63->y, mouse_9->x + 0,
//        mouse_9->y + 0).
void Frames::event_func_209()
{
    // event 34_3 : sets the selected object's direction to get_direction_int(active3_63->x, active3_63->y, mouse_9->x + 0, mouse_9->y + 0)
    {
        ((Active*)get_instance(active3_63_instances))->set_direction(get_direction_int(((Active*)get_instance(active3_63_instances))->x, ((Active*)get_instance(active3_63_instances))->y, ((Active*)get_instance(mouse_9_instances))->x + 0, ((Active*)get_instance(mouse_9_instances))->y + 0));
    }
    event_34_3_end: ;
}
// Function purpose: generated callback event_func_210 processes event block(s) 36_3. Group(s): avatar.
//        Actions/conditions: 36_3: sets the selected object's visibility to true; sets the selected object's
//        visibility to true.
void Frames::event_func_210()
{
    // event 36_3 : sets the selected object's visibility to true; sets the selected object's visibility to true
    {
        // group: avatar
        if (!group_check_group_avatar_1_0) goto event_36_3_end;
        group_check_group_avatar_1_0 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (0))) goto event_36_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (0))) goto event_36_3_end;
        ((Active*)get_instance(active2_105_instances))->set_visible(true);
        ((Active*)get_instance(active_44_instances))->set_visible(true);
    }
    event_36_3_end: ;
}
// Function purpose: generated callback event_func_211 processes event block(s) 37_3. Group(s): avatar.
//        Actions/conditions: 37_3: chooses a random value.
void Frames::event_func_211()
{
    // event 37_3 : chooses a random value
    {
        // group: avatar
        if (!group_check_group_avatar_1_1) goto event_37_3_end;
        group_check_group_avatar_1_1 = false;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(47, str_name_103)) == (empty_string))) goto event_37_3_end;
        ((Counter*)get_instance(counter_4_instances))->set(randrange_event(8));
        {
            loop_default_name_running = true;
            int times = int(1);
            loop_default_name_index = 0;
            while (loop_default_name_index < times) {
                loop_default_name_3();
                if (!loop_default_name_running) break;
                loop_default_name_index++;
            }
        }
    }
    event_37_3_end: ;
}
// Function purpose: generated callback event_func_212 processes event block(s) 38_3. Group(s): avatar.
//        Actions/conditions: 38_3: sets the selected object's direction to counter_4->value.
void Frames::event_func_212()
{
    // event 38_3 : sets the selected object's direction to counter_4->value
    {
        // group: avatar
        ((Active*)get_instance(active3_63_instances))->set_direction(((Counter*)get_instance(counter_4_instances))->value);
    }
    event_38_3_end: ;
}
// Function purpose: generated callback event_func_213 processes event block(s) 39_3. Group(s): avatar.
//        Actions/conditions: 39_3: sets the selected object's visibility to false.
void Frames::event_func_213()
{
    // event 39_3 : sets the selected object's visibility to false
    {
        // group: avatar
        if (!(((Active*)get_instance(active2_105_instances))->flags & VISIBLE)) goto event_39_3_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_directions(1))) goto event_39_3_end;
        ((Active*)get_instance(active2_105_instances))->set_visible(false);
    }
    event_39_3_end: ;
}
// Function purpose: generated callback event_func_214 processes event block(s) 40_3. Group(s): avatar.
//        Actions/conditions: 40_3: sets the selected object's visibility to true.
void Frames::event_func_214()
{
    // event 40_3 : sets the selected object's visibility to true
    {
        // group: avatar
        if (((Active*)get_instance(active2_105_instances))->flags & VISIBLE) goto event_40_3_end;
        if (((Active*)get_instance(active3_63_instances))->test_directions(1)) goto event_40_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (0))) goto event_40_3_end;
        ((Active*)get_instance(active2_105_instances))->set_visible(true);
    }
    event_40_3_end: ;
}
// Function purpose: generated callback event_func_215 processes event block(s) 41_3. Group(s): avatar.
//        Actions/conditions: 41_3: sets the selected object's visibility to false.
void Frames::event_func_215()
{
    // event 41_3 : sets the selected object's visibility to false
    {
        // group: avatar
        if (!(((Active*)get_instance(active_44_instances))->flags & VISIBLE)) goto event_41_3_end;
        if (!(((Active*)get_instance(active3_63_instances))->test_directions(256))) goto event_41_3_end;
        ((Active*)get_instance(active_44_instances))->set_visible(false);
    }
    event_41_3_end: ;
}
// Function purpose: generated callback event_func_216 processes event block(s) 42_3. Group(s): avatar.
//        Actions/conditions: 42_3: sets the selected object's visibility to true.
void Frames::event_func_216()
{
    // event 42_3 : sets the selected object's visibility to true
    {
        // group: avatar
        if (((Active*)get_instance(active_44_instances))->flags & VISIBLE) goto event_42_3_end;
        if (((Active*)get_instance(active3_63_instances))->test_directions(256)) goto event_42_3_end;
        ((Active*)get_instance(active_44_instances))->set_visible(true);
    }
    event_42_3_end: ;
}
// Function purpose: generated callback event_func_217 processes event block(s) 43_3. Group(s): avatar.
//        Actions/conditions: 43_3: sets LClick to 1; plays a sound or music track; subtracts from the current value.
void Frames::event_func_217()
{
    // event 43_3 : sets LClick to 1; plays a sound or music track; subtracts from the current value
    {
        // group: avatar
        if (!(((Active*)get_instance(active2_105_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_43_3_end;
        if (!(((Active*)get_instance(active2_105_instances))->flags & VISIBLE)) goto event_43_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_43_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) > (0))) goto event_43_3_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        media.play_id(SOUND_STEP_1, 1-1);
        ((Counter*)get_instance(counter_4_instances))->subtract(1);
        {
            loop_default_name_running = true;
            int times = int(1);
            loop_default_name_index = 0;
            while (loop_default_name_index < times) {
                loop_default_name_3();
                if (!loop_default_name_running) break;
                loop_default_name_index++;
            }
        }
    }
    event_43_3_end: ;
}
// Function purpose: generated callback event_func_218 processes event block(s) 44_3. Group(s): avatar.
//        Actions/conditions: 44_3: sets LClick to 1; changes a stored game value; plays a sound or music track.
void Frames::event_func_218()
{
    // event 44_3 : sets LClick to 1; changes a stored game value; plays a sound or music track
    {
        // group: avatar
        if (!(((Active*)get_instance(active_44_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_44_3_end;
        if (!(((Active*)get_instance(active_44_instances))->flags & VISIBLE)) goto event_44_3_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_44_3_end;
        if (!((((Counter*)get_instance(counter_4_instances))->value) < (8))) goto event_44_3_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((Counter*)get_instance(counter_4_instances))->add(1);
        {
            loop_default_name_running = true;
            int times = int(1);
            loop_default_name_index = 0;
            while (loop_default_name_index < times) {
                loop_default_name_3();
                if (!loop_default_name_running) break;
                loop_default_name_index++;
            }
        }
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_44_3_end: ;
}
// Function purpose: generated callback event_func_219 processes event block(s) 54_3. Actions/conditions: 54_3:
//        sets the selected object's direction to 9; sets the selected object's visibility to false; sets the selected
//        object's visibility to false.
void Frames::event_func_219()
{
    // event 54_3 : sets the selected object's direction to 9; sets the selected object's visibility to false; sets the selected object's visibility to false
    {
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_54_3_end;
        if (!((global_values->get(18)) == (1))) goto event_54_3_end;
        ((Active*)get_instance(active3_63_instances))->set_direction(9);
        ((Active*)get_instance(active2_105_instances))->set_visible(false);
        ((Active*)get_instance(active_44_instances))->set_visible(false);
    }
    event_54_3_end: ;
}
// Function purpose: generated callback event_func_220 processes event block(s) 55_3. Actions/conditions: 55_3:
//        sets the selected object's direction to 10; sets the selected object's visibility to false; sets the
//        selected object's visibility to false.
void Frames::event_func_220()
{
    // event 55_3 : sets the selected object's direction to 10; sets the selected object's visibility to false; sets the selected object's visibility to false
    {
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_55_3_end;
        if (!((global_values->get(18)) == (1))) goto event_55_3_end;
        ((Active*)get_instance(active3_63_instances))->set_direction(10);
        ((Active*)get_instance(active2_105_instances))->set_visible(false);
        ((Active*)get_instance(active_44_instances))->set_visible(false);
    }
    event_55_3_end: ;
}
// Function purpose: generated callback event_func_221 processes event block(s) 56_3. Actions/conditions: 56_3:
//        sets the selected object's direction to 11; sets the selected object's visibility to false; sets the
//        selected object's visibility to false.
void Frames::event_func_221()
{
    // event 56_3 : sets the selected object's direction to 11; sets the selected object's visibility to false; sets the selected object's visibility to false
    {
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_56_3_end;
        if (!((global_values->get(18)) == (1))) goto event_56_3_end;
        ((Active*)get_instance(active3_63_instances))->set_direction(11);
        ((Active*)get_instance(active2_105_instances))->set_visible(false);
        ((Active*)get_instance(active_44_instances))->set_visible(false);
    }
    event_56_3_end: ;
}
// Function purpose: generated callback event_func_222 processes event block(s) 57_3. Actions/conditions: 57_3:
//        sets the selected object's direction to 11; sets the selected object's visibility to false; sets the
//        selected object's visibility to false.
void Frames::event_func_222()
{
    // event 57_3 : sets the selected object's direction to 11; sets the selected object's visibility to false; sets the selected object's visibility to false
    {
        if (!((global_strings->get(0)) == (str_ccl_130))) goto event_57_3_end;
        if (!((global_values->get(18)) >= (1))) goto event_57_3_end;
        ((Active*)get_instance(active3_63_instances))->set_direction(11);
        ((Active*)get_instance(active2_105_instances))->set_visible(false);
        ((Active*)get_instance(active_44_instances))->set_visible(false);
    }
    event_57_3_end: ;
}
void Frames::handle_frame_4_events()
{
    test_collisions_3();
    if (next_frame != -1) return;
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_198();
    event_func_199();
    if (!group_rename_1) goto group_rename_1_end;
    event_func_201();
    event_func_202();
    event_func_203();
    event_func_205();
    event_func_207();
    event_func_208();
    group_rename_1_end: ;
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_219();
    event_func_220();
    event_func_221();
    event_func_222();
}
void Frames::handle_frame_4_pre_events()
{
    event_func_204();
    event_func_206();
    event_func_196();
    event_func_197();
    event_func_200();
    event_func_217();
    event_func_218();
}
// Function purpose: generated callback event_func_223 processes event block(s) 1_3. Actions/conditions: 1_3:
//        sets eTeam to 0; sets DTAF to 0; sets SSS to 0; plus 7 more actions.
void Frames::event_func_223()
{
    // event 1_3 : sets eTeam to 0; sets DTAF to 0; sets SSS to 0; plus 7 more actions
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(49, str_eteam_238, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_dtaf_137, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(51, str_sss_239, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(52, str_begin_240, 0);
        set_cursor_visible(false);
        ((EditObject*)get_instance(editbox_92_instances))->set_limit(12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(43, str_namechanged_222, 0);
    }
    event_1_3_end: ;
}
// Function purpose: generated callback event_func_224 processes event block(s) 2_3. Actions/conditions: 2_3:
//        loads a game or save-data file.
void Frames::event_func_224()
{
    // event 2_3 : loads a game or save-data file
    {
        ((INI*)get_instance(translationData_instances))->load_file(str_data_data_215+global_strings->get(6)+str_dat_216);
    }
    event_2_3_end: ;
}
// Function purpose: generated callback event_func_225 processes event block(s) 3_3. Actions/conditions: 3_3:
//        sets a game or interface text string; sets a game or interface text string; sets a game or interface text
//        string.
void Frames::event_func_225()
{
    // event 3_3 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string
    {
        ((Text*)get_instance(header_107_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_5_164)));
        ((Text*)get_instance(continue_101_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
        ((Text*)get_instance(back2_68_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_3_158)));
    }
    event_3_3_end: ;
}
// Function purpose: generated callback event_func_226 processes event block(s) 4_3. Actions/conditions: 4_3:
//        sets text formatting to bold.
void Frames::event_func_226()
{
    // event 4_3 : sets text formatting to bold
    {
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_4_3_end;
        ((Text*)get_instance(header_107_instances))->set_bold(0);
    }
    event_4_3_end: ;
}
// Function purpose: generated callback event_func_227 processes event block(s) 11_3. Actions/conditions: 11_3:
//        sets Name to Clint; sets eTeam to 1.
void Frames::event_func_227()
{
    // event 11_3 : sets Name to Clint; sets eTeam to 1
    {
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_11_3_end;
        if (!((global_values->get(18)) == (1))) goto event_11_3_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(47, str_name_103, str_clint_242);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(49, str_eteam_238, 1);
    }
    event_11_3_end: ;
}
// Function purpose: generated callback event_func_228 processes event block(s) 12_3. Actions/conditions: 12_3:
//        sets Name to Connelly; sets DTAF to 1.
void Frames::event_func_228()
{
    // event 12_3 : sets Name to Connelly; sets DTAF to 1
    {
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_12_3_end;
        if (!((global_values->get(18)) == (1))) goto event_12_3_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(47, str_name_103, str_connelly_243);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(50, str_dtaf_137, 1);
    }
    event_12_3_end: ;
}
// Function purpose: generated callback event_func_229 processes event block(s) 13_3. Actions/conditions: 13_3:
//        sets Name to Buddy; sets SSS to 1.
void Frames::event_func_229()
{
    // event 13_3 : sets Name to Buddy; sets SSS to 1
    {
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_13_3_end;
        if (!((global_values->get(18)) == (1))) goto event_13_3_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(47, str_name_103, str_buddy_244);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(51, str_sss_239, 1);
    }
    event_13_3_end: ;
}
// Function purpose: generated callback event_func_230 processes event block(s) 14_3. Actions/conditions: 14_3:
//        sets Name to Buddy; sets SSS to 1.
void Frames::event_func_230()
{
    // event 14_3 : sets Name to Buddy; sets SSS to 1
    {
        if (!((global_strings->get(0)) == (str_ccl_130))) goto event_14_3_end;
        if (!((global_values->get(18)) >= (1))) goto event_14_3_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(47, str_name_103, str_buddy_244);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(51, str_sss_239, 1);
    }
    event_14_3_end: ;
}
// Function purpose: generated callback event_func_231 processes event block(s) 15_3. Actions/conditions: 15_3:
//        sets the displayed text; updates a value on the target object.
void Frames::event_func_231()
{
    // event 15_3 : sets the displayed text; updates a value on the target object
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(47, str_name_103)) != (empty_string))) goto event_15_3_end;
        ((EditObject*)get_instance(editbox_92_instances))->set_text(((AssociateArray*)get_instance(gameVariables_instances))->get_string(47, str_name_103));
        ((Counter*)get_instance(counter_4_instances))->set(((AssociateArray*)get_instance(gameVariables_instances))->get_value(48, str_avatar_105));
    }
    event_15_3_end: ;
}
// Function purpose: generated callback event_func_232 processes event block(s) 35_3. Actions/conditions: 35_3:
//        sets the selected object's scale to 3.
void Frames::event_func_232()
{
    // event 35_3 : sets the selected object's scale to 3
    {
        ((Active*)get_instance(active3_63_instances))->set_scale(3);
    }
    event_35_3_end: ;
}
void Frames::on_frame_4_start_events()
{
    event_func_223();
    event_func_224();
    event_func_225();
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_230();
    event_func_231();
    event_func_232();
}
void Frames::on_frame_4_init()
{
    index = 3;
    width = 320;
    height = 240;
    virtual_width = 320;
    virtual_height = 240;
    background_color = Color(0, 0, 0);
    timer_base = 50;
    reset_image_cache();
    flush_image_cache();
    layers.resize(2);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_2_instances[] = {&playerss_110_instances, NULL};
    qualifier_2.set(1, &qualifier_2_instances[0]);
    static ObjectList* qualifier_3_instances[] = {&playerss_110_instances, NULL};
    qualifier_3.set(1, &qualifier_3_instances[0]);
    add_background_object(create_backdrop6_99(0, -3), 0);
    add_background_object(create_backdrop_96(24, 16), 0);
    add_background_object(create_backdrop5_94(60, 34), 0);
    add_background_object(create_backdrop4_97(106, 142), 0);
    add_background_object(create_backdrop3_106(125, 65), 0);
    add_object(create_name_93(95, 138), 0);
    add_object(create_error_109(0, 216), 0);
    add_object(create_gameVariables(0, -32), 0);
    add_object(create_active3_95(160, 98), 0);
    add_object(create_edit_98(200, 142), 0);
    add_object(create_letsgo_100(164, 165), 0);
    add_object(create_back_102(96, 165), 0);
    add_object(create_continue_101(161, 167), 0);
    add_object(create_back2_103(96, 167), 0);
    add_object(create_active_104(208, 90), 0);
    add_object(create_active2_105(111, 90), 0);
    add_object(create_counter_4(336, 192), 0);
    add_object(create_header_107(54, 45), 0);
    add_object(create_stringtokenizer_81(144, -64), 0);
    add_object(create_editbox_92(80, 240), 0);
    add_object(create_translationData(80, -32), 0);
    add_object(create_mouse_9(96, -48), 1);
    loop_check_name_running = false;
    loop_check_name_index = 0;
    loop_default_name_running = false;
    loop_default_name_index = 0;
    loop_censor_check_running = false;
    loop_censor_check_index = 0;
    loops = NULL;
    group_rename_1 = false;
    group_check_group_avatar_1_0 = true;
    group_check_group_avatar_1_1 = true;
    group_check_group_rename_1_0 = true;
}
// Function purpose: generated callback event_func_233 processes event block(s) 68_4. Group(s): Custom/Main.
//        Actions/conditions: 68_4: sets a game or interface text string; sets the selected object's visibility to
//        true.
void Frames::event_func_233()
{
    // event 68_4 : sets a game or interface text string; sets the selected object's visibility to true
    {
        // group: Custom/Main
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_scores_245, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1), 0)) > (0))) goto event_68_4_end;
        ((Text*)get_instance(bestscore_121_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_19_246))+str__247+number_to_string(((INI*)get_instance(globals_127_instances))->get_value(str_scores_245, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1), 0)));
        ((Text*)get_instance(bestscore_121_instances))->set_visible(true);
    }
    event_68_4_end: ;
}
// Function purpose: generated callback event_func_234 processes event block(s) 69_4. Group(s): Custom/Main.
//        Actions/conditions: 69_4: sets a game or interface text string; sets the selected object's visibility to
//        true.
void Frames::event_func_234()
{
    // event 69_4 : sets a game or interface text string; sets the selected object's visibility to true
    {
        // group: Custom/Main
        if (!((((INI*)get_instance(globals_127_instances))->get_value(str_scores_245, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1), 0)) == (0))) goto event_69_4_end;
        ((Text*)get_instance(bestscore_121_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_19_246))+str_0_248);
        ((Text*)get_instance(bestscore_121_instances))->set_visible(true);
    }
    event_69_4_end: ;
}
void Frames::loop_get_score_4()
{
    event_func_233();
    event_func_234();
}
// Function purpose: generated callback event_func_235 processes event block(s) 7_4. Group(s): t17 presents
//        lang. Actions/conditions: 7_4: switches to frame 0.
void Frames::event_func_235()
{
    // event 7_4 : switches to frame 0
    {
        // group: t17 presents lang
        if (!((global_strings->get(6)) == (str_eng_0))) goto event_7_4_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(0);
    }
    event_7_4_end: ;
}
// Function purpose: generated callback event_func_236 processes event block(s) 8_4. Group(s): t17 presents
//        lang. Actions/conditions: 8_4: switches to frame 1.
void Frames::event_func_236()
{
    // event 8_4 : switches to frame 1
    {
        // group: t17 presents lang
        if (!((global_strings->get(6)) == (str_spa_2))) goto event_8_4_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(1);
    }
    event_8_4_end: ;
}
// Function purpose: generated callback event_func_237 processes event block(s) 9_4. Group(s): t17 presents
//        lang. Actions/conditions: 9_4: switches to frame 2.
void Frames::event_func_237()
{
    // event 9_4 : switches to frame 2
    {
        // group: t17 presents lang
        if (!((global_strings->get(6)) == (str_fre_3))) goto event_9_4_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(2);
    }
    event_9_4_end: ;
}
// Function purpose: generated callback event_func_238 processes event block(s) 10_4. Group(s): t17 presents
//        lang. Actions/conditions: 10_4: switches to frame 3.
void Frames::event_func_238()
{
    // event 10_4 : switches to frame 3
    {
        // group: t17 presents lang
        if (!((global_strings->get(6)) == (str_ger_6))) goto event_10_4_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(3);
    }
    event_10_4_end: ;
}
// Function purpose: generated callback event_func_239 processes event block(s) 11_4. Group(s): t17 presents
//        lang. Actions/conditions: 11_4: switches to frame 4.
void Frames::event_func_239()
{
    // event 11_4 : switches to frame 4
    {
        // group: t17 presents lang
        if (!((global_strings->get(6)) == (str_pol_4))) goto event_11_4_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(4);
    }
    event_11_4_end: ;
}
// Function purpose: generated callback event_func_240 processes event block(s) 12_4. Group(s): t17 presents
//        lang. Actions/conditions: 12_4: switches to frame 5.
void Frames::event_func_240()
{
    // event 12_4 : switches to frame 5
    {
        // group: t17 presents lang
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_12_4_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(5);
    }
    event_12_4_end: ;
}
// Function purpose: generated callback event_func_241 processes event block(s) 13_4. Group(s): t17 presents
//        lang. Actions/conditions: 13_4: switches to frame 6.
void Frames::event_func_241()
{
    // event 13_4 : switches to frame 6
    {
        // group: t17 presents lang
        if (!((global_strings->get(6)) == (str_ita_5))) goto event_13_4_end;
        ((Active*)get_instance(t17presents_91_instances))->force_frame(6);
    }
    event_13_4_end: ;
}
void Frames::loop_t17_pres_4()
{
    event_func_235();
    event_func_236();
    event_func_237();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
// Function purpose: generated callback event_func_242 processes event block(s) 27_4. Actions/conditions: 27_4:
//        checks game state SS; this handler gates a game event without a direct value/object action.
void Frames::event_func_242()
{
    // event 27_4 : checks game state SS; this handler gates a game event without a direct value/object action
    {
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_27_4_end;
        open_url(str_http_store_steampowered_com_app_412990_249);
    }
    event_27_4_end: ;
}
// Function purpose: generated callback event_func_243 processes event block(s) 28_4. Actions/conditions: 28_4:
//        checks game state DTAF; this handler gates a game event without a direct value/object action.
void Frames::event_func_243()
{
    // event 28_4 : checks game state DTAF; this handler gates a game event without a direct value/object action
    {
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_28_4_end;
        open_url(str_http_store_steampowered_com_app_408730_250);
    }
    event_28_4_end: ;
}
// Function purpose: generated callback event_func_244 processes event block(s) 29_4. Actions/conditions: 29_4:
//        checks game state escapeteam; this handler gates a game event without a direct value/object action.
void Frames::event_func_244()
{
    // event 29_4 : checks game state escapeteam; this handler gates a game event without a direct value/object action
    {
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_29_4_end;
        open_url(str_http_store_steampowered_com_app_376700_251);
    }
    event_29_4_end: ;
}
// Function purpose: generated callback event_func_245 processes event block(s) 30_4. Actions/conditions: 30_4:
//        checks game state alca; this handler gates a game event without a direct value/object action.
void Frames::event_func_245()
{
    // event 30_4 : checks game state alca; this handler gates a game event without a direct value/object action
    {
        if (!((global_strings->get(0)) == (str_alca_139))) goto event_30_4_end;
        open_url(str_http_store_steampowered_com_app_349350_252);
    }
    event_30_4_end: ;
}
// Function purpose: generated callback event_func_246 processes event block(s) 31_4. Actions/conditions: 31_4:
//        checks game state EA; this handler gates a game event without a direct value/object action.
void Frames::event_func_246()
{
    // event 31_4 : checks game state EA; this handler gates a game event without a direct value/object action
    {
        if (!((global_strings->get(0)) == (str_ea_140))) goto event_31_4_end;
        open_url(str_http_store_steampowered_com_app_349310_253);
    }
    event_31_4_end: ;
}
void Frames::loop_dlc_url_4()
{
    event_func_242();
    event_func_243();
    event_func_244();
    event_func_245();
    event_func_246();
}
// Function purpose: generated callback event_func_247 processes event block(s) 178_4. Actions/conditions:
//        178_4: splits saved text into fields.
void Frames::event_func_247()
{
    // event 178_4 : splits saved text into fields
    {
        if (!(group_get_subs_and_enable_download_1)) goto event_178_4_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(workshop_130_instances))->get_line(loop_download_all_index), str__254);
    }
    event_178_4_end: ;
}
// Function purpose: generated callback event_func_248 processes event block(s) 179_4. Actions/conditions:
//        179_4: updates game state with download(File::get_appdata_directory()+\The Escapists\Custom
//        Maps\+get_line(loop_download_all_index); adds a line to the current list.
void Frames::event_func_248()
{
    // event 179_4 : updates game state with download(File::get_appdata_directory()+\The Escapists\Custom Maps\+get_line(loop_download_all_index); adds a line to the current list
    {
        if (!(group_get_subs_and_enable_download_1)) goto event_179_4_end;
        {
            ((SteamObject*)get_instance(steamworks2_15_instances))->download(File::get_appdata_directory()+str_the_escapists_custom_maps_66+((ListObject*)get_instance(download_151_instances))->get_line(loop_download_all_index), 0, string_to_number(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)), (EventFunction)&Frames::steam_download_success_4, (EventFunction)&Frames::steam_download_fail_4);
        }
        ((ListObject*)get_instance(updates2_141_instances))->add_line(str_downloading_255+File::get_appdata_directory()+str_the_escapists_custom_maps_66+((AssociateArray*)get_instance(gameVariables_instances))->get_string(53, str_mapname_126)+((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2));
    }
    event_179_4_end: ;
}
void Frames::loop_download_all_4()
{
    event_func_247();
    event_func_248();
}
