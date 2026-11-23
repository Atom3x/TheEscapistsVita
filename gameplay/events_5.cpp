#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_331 processes event block(s) 54_4. Group(s): Custom/Main.
//        Actions/conditions: 54_4: sets CustMapSel to 0; sets MapScreen to empty_string; sets the selected object's
//        direction to 16; plus 28 more actions.
void Frames::event_func_331()
{
    // event 54_4 : sets CustMapSel to 0; sets MapScreen to empty_string; sets the selected object's direction to 16; plus 28 more actions
    {
        // group: Custom/Main
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_string(79, str_mapscreen_316)) == (str_custom_319))) goto event_54_4_end;
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
        custom2_135_instances.clear_selection();
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
            pos_end_54_4_0: ;
        }
        downoad_147_instances.clear_selection();
        for (ObjectIterator it(downoad_147_instances); !it.end(); ++it) {
            ((Text*)*it)->set_global_position(121, 188);
            pos_end_54_4_1: ;
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
    event_54_4_end: ;
}
// Function purpose: generated callback event_func_332 processes event block(s) 56_4. Group(s): Custom/Main.
//        Actions/conditions: 56_4: saves the current object selection; saves the current object selection; saves the
//        current object selection; plus 1 more actions.
void Frames::event_func_332()
{
    // event 56_4 : saves the current object selection; saves the current object selection; saves the current object selection; plus 1 more actions
    bool or_result_56_4 = false;
    bool or_temp_result_56_4_0 = false;
    {
        // group: Custom/Main
        bonus_82_instances.clear_selection();
        for (ObjectIterator it(bonus_82_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!bonus_82_instances.has_selection()) goto or_event_56_4_0_end;
        or_result_56_4 = true;
        or_temp_result_56_4_0 = true;
    }
    or_event_56_4_0_end: ;
    bonus_82_instances.clear_saved_selection();
    if (or_temp_result_56_4_0) {
        bonus_82_instances.save_selection();
    }
    // event 56_4 : saves the current object selection; saves the current object selection; saves the current object selection; plus 1 more actions
    bool or_temp_result_56_4_1 = false;
    {
        // group: Custom/Main
        mainpic_113_instances.clear_selection();
        for (ObjectIterator it(mainpic_113_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!mainpic_113_instances.has_selection()) goto or_event_56_4_1_end;
        or_result_56_4 = true;
        or_temp_result_56_4_1 = true;
    }
    or_event_56_4_1_end: ;
    mainpic_113_instances.clear_saved_selection();
    if (or_temp_result_56_4_1) {
        mainpic_113_instances.save_selection();
    }
    // event 56_4 : saves the current object selection; saves the current object selection; saves the current object selection; plus 1 more actions
    bool or_temp_result_56_4_2 = false;
    {
        // group: Custom/Main
        custommaplistbg_137_instances.clear_selection();
        for (ObjectIterator it(custommaplistbg_137_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!custommaplistbg_137_instances.has_selection()) goto or_event_56_4_2_end;
        or_result_56_4 = true;
        or_temp_result_56_4_2 = true;
        or_event_56_4_2_end: ;
        custommaplistbg_137_instances.clear_saved_selection();
        if (or_temp_result_56_4_2) {
            custommaplistbg_137_instances.save_selection();
        }
        if (!or_result_56_4) goto or_final_or_event_56_4_2_end;
        mainpic_113_instances.empty_selection();
        custommaplistbg_137_instances.empty_selection();
        bonus_82_instances.empty_selection();
        if (or_temp_result_56_4_1) {
            mainpic_113_instances.restore_selection();
        }
        if (or_temp_result_56_4_2) {
            custommaplistbg_137_instances.restore_selection();
        }
        if (or_temp_result_56_4_0) {
            bonus_82_instances.restore_selection();
        }
        continue_101_instances.clear_selection();
        for (ObjectIterator it(continue_101_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set_alpha_coefficient(0);
        }
    }
    or_final_or_event_56_4_2_end: ;
}
// Function purpose: generated callback event_func_333 processes event block(s) 57_4. Group(s): Custom/Main.
//        Actions/conditions: 57_4: updates game state with force_frame(current_line-1); splits saved text into
//        fields; sets a game or interface text string; plus 5 more actions.
void Frames::event_func_333()
{
    // event 57_4 : updates game state with force_frame(current_line-1); splits saved text into fields; sets a game or interface text string; plus 5 more actions
    {
        // group: Custom/Main
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_57_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_57_4_end;
        ((Active*)get_instance(mainpic_113_instances))->force_frame(((ListObject*)get_instance(mainmaps_114_instances))->current_line-1);
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(mainmaps_114_instances))->get_current_line(), str__254);
        ((Text*)get_instance(mainname_115_instances))->set_string(uppercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        global_strings->set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        ((Text*)get_instance(maindiff_123_instances))->set_string(str__320+uppercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2))+str__321);
        {
            loop_get_score_running = true;
            int times = int(1);
            loop_get_score_index = 0;
            while (loop_get_score_index < times) {
                loop_get_score_4();
                if (!loop_get_score_running) break;
                loop_get_score_index++;
            }
        }
        {
            loop_check_this_locked_running = true;
            int times = int(1);
            loop_check_this_locked_index = 0;
            while (loop_check_this_locked_index < times) {
                loop_check_this_locked_4();
                if (!loop_check_this_locked_running) break;
                loop_check_this_locked_index++;
            }
        }
    }
    event_57_4_end: ;
}
// Function purpose: generated callback event_func_334 processes event block(s) 58_4. Group(s): Custom/Main.
//        Actions/conditions: 58_4: sets a game or interface text string.
void Frames::event_func_334()
{
    // event 58_4 : sets a game or interface text string
    {
        // group: Custom/Main
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_58_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_58_4_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_veasy_322))) goto event_58_4_end;
        ((Text*)get_instance(maindiff_123_instances))->set_string(str__320+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_7_323))+str__321);
    }
    event_58_4_end: ;
}
// Function purpose: generated callback event_func_335 processes event block(s) 59_4. Group(s): Custom/Main.
//        Actions/conditions: 59_4: sets a game or interface text string.
void Frames::event_func_335()
{
    // event 59_4 : sets a game or interface text string
    {
        // group: Custom/Main
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_59_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_59_4_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_easy_324))) goto event_59_4_end;
        ((Text*)get_instance(maindiff_123_instances))->set_string(str__320+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_8_325))+str__321);
    }
    event_59_4_end: ;
}
// Function purpose: generated callback event_func_336 processes event block(s) 60_4. Group(s): Custom/Main.
//        Actions/conditions: 60_4: sets a game or interface text string.
void Frames::event_func_336()
{
    // event 60_4 : sets a game or interface text string
    {
        // group: Custom/Main
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_60_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_60_4_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_med_326))) goto event_60_4_end;
        ((Text*)get_instance(maindiff_123_instances))->set_string(str__320+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_9_327))+str__321);
    }
    event_60_4_end: ;
}
// Function purpose: generated callback event_func_337 processes event block(s) 61_4. Group(s): Custom/Main.
//        Actions/conditions: 61_4: sets a game or interface text string.
void Frames::event_func_337()
{
    // event 61_4 : sets a game or interface text string
    {
        // group: Custom/Main
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_61_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_61_4_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_hard_328))) goto event_61_4_end;
        ((Text*)get_instance(maindiff_123_instances))->set_string(str__320+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_10_329))+str__321);
    }
    event_61_4_end: ;
}
// Function purpose: generated callback event_func_338 processes event block(s) 62_4. Group(s): Custom/Main.
//        Actions/conditions: 62_4: sets a game or interface text string.
void Frames::event_func_338()
{
    // event 62_4 : sets a game or interface text string
    {
        // group: Custom/Main
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_62_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_62_4_end;
        if (!((((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(2)) == (str_vhard_330))) goto event_62_4_end;
        ((Text*)get_instance(maindiff_123_instances))->set_string(str__320+uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_11_331))+str__321);
    }
    event_62_4_end: ;
}
// Function purpose: generated callback event_func_339 processes event block(s) 63_4. Group(s): Custom/Main.
//        Actions/conditions: 63_4: splits saved text into fields; updates a value on the target object.
void Frames::event_func_339()
{
    // event 63_4 : splits saved text into fields; updates a value on the target object
    {
        // group: Custom/Main
        if (!(((Active*)get_instance(bonus_82_instances))->flags & VISIBLE)) goto event_63_4_end;
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(bonusmaps_126_instances))->get_current_line(), str__254);
        global_strings->set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
    }
    event_63_4_end: ;
}
// Function purpose: generated callback event_func_340 processes event block(s) 64_4. Group(s): Custom/Main.
//        Actions/conditions: 64_4: updates a value on the target object.
void Frames::event_func_340()
{
    // event 64_4 : updates a value on the target object
    {
        // group: Custom/Main
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_64_4_end;
        global_strings->set(0, ((ListObject*)get_instance(custommaps_136_instances))->get_current_line());
    }
    event_64_4_end: ;
}
// Function purpose: generated callback event_func_341 processes event block(s) 67_4. Group(s): Custom/Main.
//        Actions/conditions: 67_4: sets the selected object's visibility to false; sets a game or interface text
//        string.
void Frames::event_func_341()
{
    // event 67_4 : sets the selected object's visibility to false; sets a game or interface text string
    {
        // group: Custom/Main
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_67_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) == (1))) goto event_67_4_end;
        ((Text*)get_instance(maindiff_123_instances))->set_visible(false);
        ((Text*)get_instance(mainname_115_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_18_332)));
    }
    event_67_4_end: ;
}
// Function purpose: generated callback event_func_342 processes event block(s) 70_4. Actions/conditions: 70_4:
//        saves the current object selection; saves the current object selection; sets the selected object's
//        visibility to false.
void Frames::event_func_342()
{
    // event 70_4 : saves the current object selection; saves the current object selection; sets the selected object's visibility to false
    bool or_result_70_4 = false;
    bool or_temp_result_70_4_0 = false;
    {
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) == (1))) goto or_event_70_4_0_end;
        or_result_70_4 = true;
        or_temp_result_70_4_0 = true;
    }
    or_event_70_4_0_end: ;
    // event 70_4 : saves the current object selection; saves the current object selection; sets the selected object's visibility to false
    bool or_temp_result_70_4_1 = false;
    {
        bonus_82_instances.clear_selection();
        for (ObjectIterator it(bonus_82_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!bonus_82_instances.has_selection()) goto or_event_70_4_1_end;
        or_result_70_4 = true;
        or_temp_result_70_4_1 = true;
    }
    or_event_70_4_1_end: ;
    bonus_82_instances.clear_saved_selection();
    if (or_temp_result_70_4_1) {
        bonus_82_instances.save_selection();
    }
    // event 70_4 : saves the current object selection; saves the current object selection; sets the selected object's visibility to false
    bool or_temp_result_70_4_2 = false;
    {
        custommaplistbg_137_instances.clear_selection();
        for (ObjectIterator it(custommaplistbg_137_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!custommaplistbg_137_instances.has_selection()) goto or_event_70_4_2_end;
        or_result_70_4 = true;
        or_temp_result_70_4_2 = true;
        or_event_70_4_2_end: ;
        custommaplistbg_137_instances.clear_saved_selection();
        if (or_temp_result_70_4_2) {
            custommaplistbg_137_instances.save_selection();
        }
        if (!or_result_70_4) goto or_final_or_event_70_4_2_end;
        bonus_82_instances.empty_selection();
        custommaplistbg_137_instances.empty_selection();
        if (or_temp_result_70_4_2) {
            custommaplistbg_137_instances.restore_selection();
        }
        if (or_temp_result_70_4_1) {
            bonus_82_instances.restore_selection();
        }
        bestscore_121_instances.clear_selection();
        for (ObjectIterator it(bestscore_121_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
    }
    or_final_or_event_70_4_2_end: ;
}
// Function purpose: generated callback event_func_343 processes event block(s) 71_4. Actions/conditions: 71_4:
//        sets the selected object's direction to 16.
void Frames::event_func_343()
{
    // event 71_4 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(letsgo_100_instances))->mouse_over())) goto event_71_4_end;
        if (layers[3-1].visible) goto event_71_4_end;
        if (layers[4-1].visible) goto event_71_4_end;
        if (layers[5-1].visible) goto event_71_4_end;
        ((Active*)get_instance(letsgo_100_instances))->set_direction(16);
    }
    event_71_4_end: ;
}
// Function purpose: generated callback event_func_344 processes event block(s) 72_4. Actions/conditions: 72_4:
//        sets the selected object's direction to 16.
void Frames::event_func_344()
{
    // event 72_4 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(download2_148_instances))->mouse_over())) goto event_72_4_end;
        if (!((((Active*)get_instance(download2_148_instances))->blend_color.get_alpha_coefficient()) == (0))) goto event_72_4_end;
        if (layers[3-1].visible) goto event_72_4_end;
        if (layers[4-1].visible) goto event_72_4_end;
        if (layers[5-1].visible) goto event_72_4_end;
        ((Active*)get_instance(download2_148_instances))->set_direction(16);
    }
    event_72_4_end: ;
}
// Function purpose: generated callback event_func_345 processes event block(s) 73_4. Actions/conditions: 73_4:
//        sets the selected object's direction to 16.
void Frames::event_func_345()
{
    // event 73_4 : sets the selected object's direction to 16
    {
        if (!(((Active*)get_instance(back_102_instances))->mouse_over())) goto event_73_4_end;
        if (layers[3-1].visible) goto event_73_4_end;
        if (layers[4-1].visible) goto event_73_4_end;
        if (layers[5-1].visible) goto event_73_4_end;
        ((Active*)get_instance(back_102_instances))->set_direction(16);
    }
    event_73_4_end: ;
}
// Function purpose: generated callback event_func_346 processes event block(s) 74_4. Actions/conditions: 74_4:
//        sets the object's animation to 5; sets a stored numeric value.
void Frames::event_func_346()
{
    // event 74_4 : sets the object's animation to 5; sets a stored numeric value
    {
        if (((Active*)get_instance(bonus_129_instances))->test_animation(5)) goto event_74_4_end;
        if (!((((INI*)get_instance(settings_142_instances))->get_value_int(str_settings_52, str_bonusmaps_333)) < (((ListObject*)get_instance(bonusmaps_126_instances))->get_count()))) goto event_74_4_end;
        ((Active*)get_instance(bonus_129_instances))->force_animation(5);
        ((INI*)get_instance(settings_142_instances))->set_value_int(str_settings_52, str_bonusmaps_333, ((ListObject*)get_instance(bonusmaps_126_instances))->get_count());
    }
    event_74_4_end: ;
}
// Function purpose: generated callback event_func_347 processes event block(s) 75_4. Actions/conditions: 75_4:
//        sets a stored numeric value; sets the object's animation to 5.
void Frames::event_func_347()
{
    // event 75_4 : sets a stored numeric value; sets the object's animation to 5
    {
        if (((Active*)get_instance(custom2_135_instances))->test_animation(5)) goto event_75_4_end;
        if (!((((INI*)get_instance(settings_142_instances))->get_value_int(str_settings_52, str_custommaps_318)) < (((ListObject*)get_instance(custommaps_136_instances))->get_count()))) goto event_75_4_end;
        if (!((global_values->get(16)) == (1))) goto event_75_4_end;
        ((INI*)get_instance(settings_142_instances))->set_value_int(str_settings_52, str_custommaps_318, ((ListObject*)get_instance(custommaps_136_instances))->get_count());
        ((Active*)get_instance(custom2_135_instances))->force_animation(5);
    }
    event_75_4_end: ;
}
// Function purpose: generated callback event_func_348 processes event block(s) 76_4. Actions/conditions: 76_4:
//        sets a stored numeric value; sets the object's animation to 6.
void Frames::event_func_348()
{
    // event 76_4 : sets a stored numeric value; sets the object's animation to 6
    {
        if (((Active*)get_instance(custom2_135_instances))->test_animation(6)) goto event_76_4_end;
        if (!((((INI*)get_instance(settings_142_instances))->get_value_int(str_settings_52, str_custommaps_318)) < (((ListObject*)get_instance(custommaps_136_instances))->get_count()))) goto event_76_4_end;
        if (!((global_values->get(16)) == (0))) goto event_76_4_end;
        ((INI*)get_instance(settings_142_instances))->set_value_int(str_settings_52, str_custommaps_318, ((ListObject*)get_instance(custommaps_136_instances))->get_count());
        ((Active*)get_instance(custom2_135_instances))->force_animation(6);
    }
    event_76_4_end: ;
}
// Function purpose: generated callback event_func_349 processes event block(s) 77_4. Actions/conditions: 77_4:
//        sets a game or interface text string; sets the selected object's horizontal position to 240; sets the
//        selected object's horizontal position to 79.
void Frames::event_func_349()
{
    // event 77_4 : sets a game or interface text string; sets the selected object's horizontal position to 240; sets the selected object's horizontal position to 79
    {
        if (!(group_main_maps_1)) goto event_77_4_end;
        if (!group_check_group_main_maps_1_0) goto event_77_4_end;
        group_check_group_main_maps_1_0 = false;
        ((Text*)get_instance(header_107_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_12_334)));
        ((Active*)get_instance(active_24_instances))->set_x(VITA_VIEW_X(((Active*)get_instance(active_24_instances)), 240));
        ((Active*)get_instance(active2_86_instances))->set_x(VITA_VIEW_X(((Active*)get_instance(active2_86_instances)), 79));
    }
    event_77_4_end: ;
}
// Function purpose: generated callback event_func_350 processes event block(s) 78_4. Actions/conditions: 78_4:
//        sets MapDir to ./Data\Maps\.
void Frames::event_func_350()
{
    // event 78_4 : sets MapDir to ./Data\Maps
    {
        if (!(group_main_maps_1)) goto event_78_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
    }
    event_78_4_end: ;
}
// Function purpose: generated callback event_func_351 processes event block(s) 79_4. Actions/conditions: 79_4:
//        sets the selected object's visibility to false.
void Frames::event_func_351()
{
    // event 79_4 : sets the selected object's visibility to false
    {
        if (!(group_main_maps_1)) goto event_79_4_end;
        if (!(((Active*)get_instance(active2_86_instances))->flags & VISIBLE)) goto event_79_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) == (1))) goto event_79_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_79_4_end;
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_79_4_end;
        ((Active*)get_instance(active2_86_instances))->set_visible(false);
    }
    event_79_4_end: ;
}
// Function purpose: generated callback event_func_352 processes event block(s) 80_4. Actions/conditions: 80_4:
//        sets the selected object's visibility to true.
void Frames::event_func_352()
{
    // event 80_4 : sets the selected object's visibility to true
    {
        if (!(group_main_maps_1)) goto event_80_4_end;
        if (((Active*)get_instance(active2_86_instances))->flags & VISIBLE) goto event_80_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) > (1))) goto event_80_4_end;
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_80_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_80_4_end;
        ((Active*)get_instance(active2_86_instances))->set_visible(true);
    }
    event_80_4_end: ;
}
// Function purpose: generated callback event_func_353 processes event block(s) 81_4. Actions/conditions: 81_4:
//        sets the selected object's visibility to false.
void Frames::event_func_353()
{
    // event 81_4 : sets the selected object's visibility to false
    {
        if (!(group_main_maps_1)) goto event_81_4_end;
        if (!(((Active*)get_instance(active_24_instances))->flags & VISIBLE)) goto event_81_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) == (7))) goto event_81_4_end;
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_81_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_81_4_end;
        ((Active*)get_instance(active_24_instances))->set_visible(false);
    }
    event_81_4_end: ;
}
// Function purpose: generated callback event_func_354 processes event block(s) 82_4. Actions/conditions: 82_4:
//        sets the selected object's visibility to true.
void Frames::event_func_354()
{
    // event 82_4 : sets the selected object's visibility to true
    {
        if (!(group_main_maps_1)) goto event_82_4_end;
        if (((Active*)get_instance(active_24_instances))->flags & VISIBLE) goto event_82_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) < (7))) goto event_82_4_end;
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_82_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_82_4_end;
        ((Active*)get_instance(active_24_instances))->set_visible(true);
    }
    event_82_4_end: ;
}
// Function purpose: generated callback event_func_355 processes event block(s) 83_4. Actions/conditions: 83_4:
//        plays a sound or music track; moves the current line selection; sets LClick to 1.
void Frames::event_func_355()
{
    // event 83_4 : plays a sound or music track; moves the current line selection; sets LClick to 1
    {
        if (!(group_main_maps_1)) goto event_83_4_end;
        if (!(((Active*)get_instance(active2_86_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_83_4_end;
        if (!(((Active*)get_instance(active2_86_instances))->flags & VISIBLE)) goto event_83_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) > (1))) goto event_83_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_83_4_end;
        media.play_id(SOUND_PLIP_16, 1-1);
        ((ListObject*)get_instance(mainmaps_114_instances))->current_line = ((ListObject*)get_instance(mainmaps_114_instances))->current_line-1;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
    }
    event_83_4_end: ;
}
// Function purpose: generated callback event_func_356 processes event block(s) 84_4. Actions/conditions: 84_4:
//        moves the current line selection; sets LClick to 1; plays a sound or music track.
void Frames::event_func_356()
{
    // event 84_4 : moves the current line selection; sets LClick to 1; plays a sound or music track
    {
        if (!(group_main_maps_1)) goto event_84_4_end;
        if (!(((Active*)get_instance(active_24_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_84_4_end;
        if (!(((Active*)get_instance(active_24_instances))->flags & VISIBLE)) goto event_84_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) < (((ListObject*)get_instance(mainmaps_114_instances))->get_count()))) goto event_84_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_84_4_end;
        ((ListObject*)get_instance(mainmaps_114_instances))->current_line = ((ListObject*)get_instance(mainmaps_114_instances))->current_line+1;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        media.play_id(SOUND_PLIP_16, 1-1);
    }
    event_84_4_end: ;
}
// Function purpose: generated callback event_func_357 processes event block(s) 85_4. Actions/conditions: 85_4:
//        sets the selected object's visibility to false; sets a game or interface text string.
void Frames::event_func_357()
{
    // event 85_4 : sets the selected object's visibility to false; sets a game or interface text string
    {
        if (!(group_main_maps_1)) goto event_85_4_end;
        if (!(((Text*)get_instance(maindiff_123_instances))->flags & VISIBLE)) goto event_85_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) == (1))) goto event_85_4_end;
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_85_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_85_4_end;
        ((Text*)get_instance(maindiff_123_instances))->set_visible(false);
        ((Text*)get_instance(mainname_115_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_18_332)));
    }
    event_85_4_end: ;
}
// Function purpose: generated callback event_func_358 processes event block(s) 86_4. Actions/conditions: 86_4:
//        sets the selected object's visibility to true.
void Frames::event_func_358()
{
    // event 86_4 : sets the selected object's visibility to true
    {
        if (!(group_main_maps_1)) goto event_86_4_end;
        if (((Text*)get_instance(maindiff_123_instances))->flags & VISIBLE) goto event_86_4_end;
        if (!((((ListObject*)get_instance(mainmaps_114_instances))->current_line) != (1))) goto event_86_4_end;
        if (((Active*)get_instance(bonus_82_instances))->flags & VISIBLE) goto event_86_4_end;
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_86_4_end;
        ((Text*)get_instance(maindiff_123_instances))->set_visible(true);
    }
    event_86_4_end: ;
}
// Function purpose: generated callback event_func_359 processes event block(s) 88_4. Actions/conditions: 88_4:
//        sets MapDir to ./Data\Maps\; sets a game or interface text string; splits saved text into fields; plus 6
//        more actions.
void Frames::event_func_359()
{
    // event 88_4 : sets MapDir to ./Data\Maps\; sets a game or interface text string; splits saved text into fields; plus 6 more actions
    {
        if (!(group_bonus_maps_1)) goto event_88_4_end;
        if (!(((Active*)get_instance(bonus_82_instances))->flags & VISIBLE)) goto event_88_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        ((Text*)get_instance(header_107_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_20_279)));
        ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->split(((ListObject*)get_instance(bonusmaps_126_instances))->get_current_line(), str__254);
        ((Text*)get_instance(mainname_115_instances))->set_string(uppercase_string(((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(0)));
        global_strings->set(0, ((StringTokenizer*)get_instance(stringtokenizer_81_instances))->get(1));
        global_values->set(18, 1);
    }
    event_88_4_end: ;
}
// Function purpose: generated callback event_func_360 processes event block(s) 89_4. Actions/conditions: 89_4:
//        updates game state with force_frame(get_max(0, string_to_number(right_string(get_current_line(), 2))-1)).
void Frames::event_func_360()
{
    // event 89_4 : updates game state with force_frame(get_max(0, string_to_number(right_string(get_current_line(), 2))-1))
    {
        if (!(group_bonus_maps_1)) goto event_89_4_end;
        ((Active*)get_instance(bonus_82_instances))->force_frame(get_max(0, string_to_number(right_string(((ListObject*)get_instance(bonusmaps_126_instances))->get_current_line(), 2))-1));
    }
    event_89_4_end: ;
}
// Function purpose: generated callback event_func_361 processes event block(s) 90_4. Actions/conditions: 90_4:
//        sets the selected object's horizontal position to 240; sets the selected object's horizontal position to 79.
void Frames::event_func_361()
{
    // event 90_4 : sets the selected object's horizontal position to 240; sets the selected object's horizontal position to 79
    {
        if (!(group_bonus_maps_1)) goto event_90_4_end;
        if (!group_check_group_bonus_maps_1_0) goto event_90_4_end;
        group_check_group_bonus_maps_1_0 = false;
        ((Active*)get_instance(active_24_instances))->set_x(VITA_VIEW_X(((Active*)get_instance(active_24_instances)), 240));
        ((Active*)get_instance(active2_86_instances))->set_x(VITA_VIEW_X(((Active*)get_instance(active2_86_instances)), 79));
    }
    event_90_4_end: ;
}
// Function purpose: generated callback event_func_362 processes event block(s) 91_4. Actions/conditions: 91_4:
//        sets the selected object's visibility to false.
void Frames::event_func_362()
{
    // event 91_4 : sets the selected object's visibility to false
    {
        if (!(group_bonus_maps_1)) goto event_91_4_end;
        if (!(((Active*)get_instance(active2_86_instances))->flags & VISIBLE)) goto event_91_4_end;
        if (!((((ListObject*)get_instance(bonusmaps_126_instances))->current_line) == (0))) goto event_91_4_end;
        if (!(((Active*)get_instance(bonus_82_instances))->flags & VISIBLE)) goto event_91_4_end;
        ((Active*)get_instance(active2_86_instances))->set_visible(false);
    }
    event_91_4_end: ;
}
// Function purpose: generated callback event_func_363 processes event block(s) 92_4. Actions/conditions: 92_4:
//        sets the selected object's visibility to true.
void Frames::event_func_363()
{
    // event 92_4 : sets the selected object's visibility to true
    {
        if (!(group_bonus_maps_1)) goto event_92_4_end;
        if (((Active*)get_instance(active2_86_instances))->flags & VISIBLE) goto event_92_4_end;
        if (!((((ListObject*)get_instance(bonusmaps_126_instances))->current_line) > (0))) goto event_92_4_end;
        if (!(((Active*)get_instance(bonus_82_instances))->flags & VISIBLE)) goto event_92_4_end;
        ((Active*)get_instance(active2_86_instances))->set_visible(true);
    }
    event_92_4_end: ;
}
// Function purpose: generated callback event_func_364 processes event block(s) 93_4. Actions/conditions: 93_4:
//        plays a sound or music track; sets LClick to 1; moves the current line selection.
void Frames::event_func_364()
{
    // event 93_4 : plays a sound or music track; sets LClick to 1; moves the current line selection
    {
        if (!(group_bonus_maps_1)) goto event_93_4_end;
        if (!(((Active*)get_instance(active2_86_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_93_4_end;
        if (!(((Active*)get_instance(active2_86_instances))->flags & VISIBLE)) goto event_93_4_end;
        if (!((((ListObject*)get_instance(bonusmaps_126_instances))->current_line) > (0))) goto event_93_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_93_4_end;
        media.play_id(SOUND_PLIP_16, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((ListObject*)get_instance(bonusmaps_126_instances))->current_line = ((ListObject*)get_instance(bonusmaps_126_instances))->current_line-1;
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
    event_93_4_end: ;
}
// Function purpose: generated callback event_func_365 processes event block(s) 94_4. Actions/conditions: 94_4:
//        sets the selected object's visibility to false.
void Frames::event_func_365()
{
    // event 94_4 : sets the selected object's visibility to false
    {
        if (!(group_bonus_maps_1)) goto event_94_4_end;
        if (!(((Active*)get_instance(active_24_instances))->flags & VISIBLE)) goto event_94_4_end;
        if (!((((ListObject*)get_instance(bonusmaps_126_instances))->current_line) == (((ListObject*)get_instance(bonusmaps_126_instances))->get_count()-1))) goto event_94_4_end;
        if (!(((Active*)get_instance(bonus_82_instances))->flags & VISIBLE)) goto event_94_4_end;
        ((Active*)get_instance(active_24_instances))->set_visible(false);
    }
    event_94_4_end: ;
}
// Function purpose: generated callback event_func_366 processes event block(s) 95_4. Actions/conditions: 95_4:
//        sets the selected object's visibility to true.
void Frames::event_func_366()
{
    // event 95_4 : sets the selected object's visibility to true
    {
        if (!(group_bonus_maps_1)) goto event_95_4_end;
        if (((Active*)get_instance(active_24_instances))->flags & VISIBLE) goto event_95_4_end;
        if (!((((ListObject*)get_instance(bonusmaps_126_instances))->current_line) < (((ListObject*)get_instance(bonusmaps_126_instances))->get_count()-1))) goto event_95_4_end;
        if (!(((Active*)get_instance(bonus_82_instances))->flags & VISIBLE)) goto event_95_4_end;
        ((Active*)get_instance(active_24_instances))->set_visible(true);
    }
    event_95_4_end: ;
}
// Function purpose: generated callback event_func_367 processes event block(s) 96_4. Actions/conditions: 96_4:
//        sets LClick to 1; plays a sound or music track; moves the current line selection.
void Frames::event_func_367()
{
    // event 96_4 : sets LClick to 1; plays a sound or music track; moves the current line selection
    {
        if (!(group_bonus_maps_1)) goto event_96_4_end;
        if (!(((Active*)get_instance(active_24_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_96_4_end;
        if (!(((Active*)get_instance(active_24_instances))->flags & VISIBLE)) goto event_96_4_end;
        if (!((((ListObject*)get_instance(bonusmaps_126_instances))->current_line) < (((ListObject*)get_instance(bonusmaps_126_instances))->get_count()-1))) goto event_96_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_96_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        media.play_id(SOUND_PLIP_16, 1-1);
        ((ListObject*)get_instance(bonusmaps_126_instances))->current_line = ((ListObject*)get_instance(bonusmaps_126_instances))->current_line+1;
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
    event_96_4_end: ;
}
// Function purpose: generated callback event_func_368 processes event block(s) 128_4. Actions/conditions:
//        128_4: sets the selected object's horizontal position to 265; sets the selected object's horizontal position
//        to 54.
void Frames::event_func_368()
{
    // event 128_4 : sets the selected object's horizontal position to 265; sets the selected object's horizontal position to 54
    {
        if (!(group_custom_maps_1)) goto event_128_4_end;
        if (!group_check_group_custom_maps_1_0) goto event_128_4_end;
        group_check_group_custom_maps_1_0 = false;
        if (frame_time - restrict_128_4 < 0.5) goto event_128_4_end;
        restrict_128_4 = frame_time;
        ((Active*)get_instance(active_24_instances))->set_x(VITA_VIEW_X(((Active*)get_instance(active_24_instances)), 265));
        ((Active*)get_instance(active2_86_instances))->set_x(VITA_VIEW_X(((Active*)get_instance(active2_86_instances)), 54));
    }
    event_128_4_end: ;
}
// Function purpose: generated callback event_func_369 processes event block(s) 129_4. Actions/conditions:
//        129_4: sets a game or interface text string; sets the selected object's visibility to false; sets the
//        selected object's visibility to false; plus 1 more actions.
void Frames::event_func_369()
{
    // event 129_4 : sets a game or interface text string; sets the selected object's visibility to false; sets the selected object's visibility to false; plus 1 more actions
    {
        if (!(group_custom_maps_1)) goto event_129_4_end;
        ((Text*)get_instance(header_107_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_21_335)));
        ((Active*)get_instance(active_24_instances))->set_visible(false);
        ((Active*)get_instance(active2_86_instances))->set_visible(false);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, File::get_appdata_directory()+str_the_escapists_custom_maps_66);
    }
    event_129_4_end: ;
}
// Function purpose: generated callback event_func_370 processes event block(s) 130_4. Actions/conditions:
//        130_4: sets the selected object's visibility to true.
void Frames::event_func_370()
{
    // event 130_4 : sets the selected object's visibility to true
    {
        if (!(group_custom_maps_1)) goto event_130_4_end;
        if (!((((ListObject*)get_instance(custommaps_136_instances))->get_count()) > ((((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)*10)+10))) goto event_130_4_end;
        ((Active*)get_instance(active_24_instances))->set_visible(true);
    }
    event_130_4_end: ;
}
// Function purpose: generated callback event_func_371 processes event block(s) 131_4. Actions/conditions:
//        131_4: sets the selected object's visibility to true.
void Frames::event_func_371()
{
    // event 131_4 : sets the selected object's visibility to true
    {
        if (!(group_custom_maps_1)) goto event_131_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)) > (0))) goto event_131_4_end;
        ((Active*)get_instance(active2_86_instances))->set_visible(true);
    }
    event_131_4_end: ;
}
// Function purpose: generated callback event_func_372 processes event block(s) 132_4. Actions/conditions:
//        132_4: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_372()
{
    // event 132_4 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_custom_maps_1)) goto event_132_4_end;
        every_132_4 += manager.dt;
        if (every_132_4 < 0.5) goto event_132_4_end;
        every_132_4 -= 0.5;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_132_4_end;
        {
            loop_go_list_running = true;
            int times = int(1);
            loop_go_list_index = 0;
            while (loop_go_list_index < times) {
                loop_go_list_4();
                if (!loop_go_list_running) break;
                loop_go_list_index++;
            }
        }
    }
    event_132_4_end: ;
}
// Function purpose: generated callback event_func_373 processes event block(s) 140_4. Actions/conditions:
//        140_4: sets LClick to 1; updates game state with current_line = (get_value(60,
//        page)*10)+((get_mouse_y()-get_box_index(1))/MathHelper()/12); sets CustMapSel to
//        custommaps_136->current_line.
void Frames::event_func_373()
{
    // event 140_4 : sets LClick to 1; updates game state with current_line = (get_value(60, page)*10)+((get_mouse_y()-get_box_index(1))/MathHelper()/12); sets CustMapSel to custommaps_136->current_line
    {
        if (!(group_custom_maps_1)) goto event_140_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_140_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_140_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_140_4_end;
        if (layers[3-1].visible) goto event_140_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((ListObject*)get_instance(custommaps_136_instances))->current_line = (((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)*10)+((get_mouse_y()-((Active*)get_instance(custommaplistbg_137_instances))->get_box_index(1))/MathHelper()/12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(69, str_custmapsel_304, ((ListObject*)get_instance(custommaps_136_instances))->current_line);
    }
    event_140_4_end: ;
}
// Function purpose: generated callback event_func_374 processes event block(s) 141_4. Actions/conditions:
//        141_4: sets the selected object's vertical position to
//        custommaplistbg_137->get_box_index(1)+((custommaps_136->current_line-(gameVariables->get_value(60,
//        page)*10))*11)+3; sets the selected object's visibility to true.
void Frames::event_func_374()
{
    // event 141_4 : sets the selected object's vertical position to custommaplistbg_137->get_box_index(1)+((custommaps_136->current_line-(gameVariables->get_value(60, page)*10))*11)+3; sets the selected object's visibility to true
    {
        if (!(group_custom_maps_1)) goto event_141_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_141_4_end;
        if (!((((ListObject*)get_instance(custommaps_136_instances))->get_count()) > (0))) goto event_141_4_end;
        if (!((string_size(((Text*)get_instance(custommaplist_138_instances))->text)) > (0))) goto event_141_4_end;
        if (layers[3-1].visible) goto event_141_4_end;
        ((Active*)get_instance(highlight_125_instances))->set_y(((Active*)get_instance(custommaplistbg_137_instances))->get_box_index(1)+((((ListObject*)get_instance(custommaps_136_instances))->current_line-(((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)*10))*11)+3);
        ((Active*)get_instance(highlight_125_instances))->set_visible(true);
    }
    event_141_4_end: ;
}
// Function purpose: generated callback event_func_375 processes event block(s) 142_4. Actions/conditions:
//        142_4: increments page by 1; sets LClick to 1; plays a sound or music track; plus 5 more actions.
void Frames::event_func_375()
{
    // event 142_4 : increments page by 1; sets LClick to 1; plays a sound or music track; plus 5 more actions
    {
        if (!(group_custom_maps_1)) goto event_142_4_end;
        if (!(((Active*)get_instance(active_24_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_142_4_end;
        if (!(((Active*)get_instance(active_24_instances))->flags & VISIBLE)) goto event_142_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_142_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_142_4_end;
        if (layers[3-1].visible) goto event_142_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->add_value(60, str_page_288, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        media.play_id(SOUND_PLIP_16, 1-1);
        {
            loop_go_list_running = true;
            int times = int(1);
            loop_go_list_index = 0;
            while (loop_go_list_index < times) {
                loop_go_list_4();
                if (!loop_go_list_running) break;
                loop_go_list_index++;
            }
        }
        ((ListObject*)get_instance(custommaps_136_instances))->current_line = (((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)*10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(69, str_custmapsel_304, ((ListObject*)get_instance(custommaps_136_instances))->current_line);
    }
    event_142_4_end: ;
}
// Function purpose: generated callback event_func_376 processes event block(s) 143_4. Actions/conditions:
//        143_4: changes a stored game value; sets LClick to 1; plays a sound or music track; plus 5 more actions.
void Frames::event_func_376()
{
    // event 143_4 : changes a stored game value; sets LClick to 1; plays a sound or music track; plus 5 more actions
    {
        if (!(group_custom_maps_1)) goto event_143_4_end;
        if (!(((Active*)get_instance(active2_86_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_143_4_end;
        if (!(((Active*)get_instance(active2_86_instances))->flags & VISIBLE)) goto event_143_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_143_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_143_4_end;
        if (layers[3-1].visible) goto event_143_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->sub_value(60, str_page_288, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        media.play_id(SOUND_PLIP_16, 1-1);
        {
            loop_go_list_running = true;
            int times = int(1);
            loop_go_list_index = 0;
            while (loop_go_list_index < times) {
                loop_go_list_4();
                if (!loop_go_list_running) break;
                loop_go_list_index++;
            }
        }
        ((ListObject*)get_instance(custommaps_136_instances))->current_line = (((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)*10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(69, str_custmapsel_304, ((ListObject*)get_instance(custommaps_136_instances))->current_line);
    }
    event_143_4_end: ;
}
// Function purpose: generated callback event_func_377 processes event block(s) 144_4. Actions/conditions:
//        144_4: shows a game layer; sets the selected object's layer to 3-1; plays a sound or music track.
void Frames::event_func_377()
{
    // event 144_4 : shows a game layer; sets the selected object's layer to 3-1; plays a sound or music track
    {
        if (!(group_custom_maps_1)) goto event_144_4_end;
        if (!(is_key_pressed_once(SDLK_DELETE))) goto event_144_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_144_4_end;
        if (layers[3-1].visible) goto event_144_4_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(3-1);
        ((Active*)get_instance(mouse_9_instances))->set_layer(3-1);
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_144_4_end: ;
}
// Function purpose: generated callback event_func_378 processes event block(s) 145_4. Actions/conditions:
//        145_4: sets the selected object's layer to 1-1; hides a game layer; plays a sound or music track; plus 1
//        more actions.
void Frames::event_func_378()
{
    // event 145_4 : sets the selected object's layer to 1-1; hides a game layer; plays a sound or music track; plus 1 more actions
    {
        if (!(group_custom_maps_1)) goto event_145_4_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_145_4_end;
        if (!(layers[3-1].visible)) goto event_145_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_145_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_145_4_end;
        ((Active*)get_instance(mouse_9_instances))->set_layer(1-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(3-1);
        media.play_id(SOUND_CLOSE_6, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
    }
    event_145_4_end: ;
}
// Function purpose: generated callback event_func_379 processes event block(s) 146_4. Actions/conditions:
//        146_4: sets the selected object's layer to 1-1; hides a game layer; updates game state with
//        File::delete_file(File::get_appdata_directory()+\The Escapists\Custom Maps\+get_current_line()+.cmap; plus 6
//        more actions.
void Frames::event_func_379()
{
    // event 146_4 : sets the selected object's layer to 1-1; hides a game layer; updates game state with File::delete_file(File::get_appdata_directory()+\The Escapists\Custom Maps\+get_current_line()+.cmap; plus 6 more actions
    {
        if (!(group_custom_maps_1)) goto event_146_4_end;
        if (!(is_key_pressed_once(SDLK_y))) goto event_146_4_end;
        if (!(layers[3-1].visible)) goto event_146_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_146_4_end;
        ((Active*)get_instance(mouse_9_instances))->set_layer(1-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(3-1);
    File::delete_file(File::get_appdata_directory()+str_the_escapists_custom_maps_66+((ListObject*)get_instance(custommaps_136_instances))->get_current_line()+str_cmap_302);
        ((ListObject*)get_instance(custommaps_136_instances))->delete_line(((ListObject*)get_instance(custommaps_136_instances))->current_line);
        ((ListObject*)get_instance(custommaps_136_instances))->current_line = (((AssociateArray*)get_instance(gameVariables_instances))->get_value(60, str_page_288)*10);
        media.play_id(SOUND_TOILET_17, 1-1);
    }
    event_146_4_end: ;
}
// Function purpose: generated callback event_func_380 processes event block(s) 148_4. Group(s): Prison Unlock
//        Cheat. Actions/conditions: 148_4: sets a game or interface text string.
void Frames::event_func_380()
{
    // event 148_4 : sets a game or interface text string
    {
        // group: Prison Unlock Cheat
        if (!(is_key_pressed_once(SDLK_UP))) goto event_148_4_end;
        ((Text*)get_instance(cheat_128_instances))->set_string(((Text*)get_instance(cheat_128_instances))->text+str_u_336);
        {
            loop_checkcheat_running = true;
            int times = int(1);
            loop_checkcheat_index = 0;
            while (loop_checkcheat_index < times) {
                loop_checkcheat_4();
                if (!loop_checkcheat_running) break;
                loop_checkcheat_index++;
            }
        }
    }
    event_148_4_end: ;
}
// Function purpose: generated callback event_func_381 processes event block(s) 149_4. Group(s): Prison Unlock
//        Cheat. Actions/conditions: 149_4: sets a game or interface text string.
void Frames::event_func_381()
{
    // event 149_4 : sets a game or interface text string
    {
        // group: Prison Unlock Cheat
        if (!(is_key_pressed_once(SDLK_LEFT))) goto event_149_4_end;
        ((Text*)get_instance(cheat_128_instances))->set_string(((Text*)get_instance(cheat_128_instances))->text+str_l_337);
        {
            loop_checkcheat_running = true;
            int times = int(1);
            loop_checkcheat_index = 0;
            while (loop_checkcheat_index < times) {
                loop_checkcheat_4();
                if (!loop_checkcheat_running) break;
                loop_checkcheat_index++;
            }
        }
    }
    event_149_4_end: ;
}
// Function purpose: generated callback event_func_382 processes event block(s) 150_4. Group(s): Prison Unlock
//        Cheat. Actions/conditions: 150_4: sets a game or interface text string.
void Frames::event_func_382()
{
    // event 150_4 : sets a game or interface text string
    {
        // group: Prison Unlock Cheat
        if (!(is_key_pressed_once(SDLK_DOWN))) goto event_150_4_end;
        ((Text*)get_instance(cheat_128_instances))->set_string(((Text*)get_instance(cheat_128_instances))->text+str_d_51);
        {
            loop_checkcheat_running = true;
            int times = int(1);
            loop_checkcheat_index = 0;
            while (loop_checkcheat_index < times) {
                loop_checkcheat_4();
                if (!loop_checkcheat_running) break;
                loop_checkcheat_index++;
            }
        }
    }
    event_150_4_end: ;
}
// Function purpose: generated callback event_func_383 processes event block(s) 151_4. Group(s): Prison Unlock
//        Cheat. Actions/conditions: 151_4: sets a game or interface text string.
void Frames::event_func_383()
{
    // event 151_4 : sets a game or interface text string
    {
        // group: Prison Unlock Cheat
        if (!(is_key_pressed_once(SDLK_RIGHT))) goto event_151_4_end;
        ((Text*)get_instance(cheat_128_instances))->set_string(((Text*)get_instance(cheat_128_instances))->text+str_r_338);
        {
            loop_checkcheat_running = true;
            int times = int(1);
            loop_checkcheat_index = 0;
            while (loop_checkcheat_index < times) {
                loop_checkcheat_4();
                if (!loop_checkcheat_running) break;
                loop_checkcheat_index++;
            }
        }
    }
    event_151_4_end: ;
}
// Function purpose: generated callback event_func_384 processes event block(s) 154_4. Actions/conditions:
//        154_4: sets the selected object's visibility to false.
void Frames::event_func_384()
{
    // event 154_4 : sets the selected object's visibility to false
    {
        if (((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE) goto event_154_4_end;
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_154_4_end: ;
}
// Function purpose: generated callback event_func_385 processes event block(s) 155_4. Actions/conditions:
//        155_4: sets the selected object's visibility to true; changes the selected object transparency.
void Frames::event_func_385()
{
    // event 155_4 : sets the selected object's visibility to true; changes the selected object transparency
    {
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_155_4_end;
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->blend_color.set_alpha_coefficient(150);
        }
    }
    event_155_4_end: ;
}
// Function purpose: generated callback event_func_386 processes event block(s) 156_4. Actions/conditions:
//        156_4: changes the selected object transparency.
void Frames::event_func_386()
{
    // event 156_4 : changes the selected object transparency
    {
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over())) { it.deselect(); continue; }
        }
        if (!workshoplink_139_instances.has_selection()) goto event_156_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_156_4_end;
        if (layers[3-1].visible) goto event_156_4_end;
        if (layers[4-1].visible) goto event_156_4_end;
        if (layers[5-1].visible) goto event_156_4_end;
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient(0);
        }
    }
    event_156_4_end: ;
}
// Function purpose: generated callback event_func_387 processes event block(s) 157_4. Actions/conditions:
//        157_4: checks skips if the event-specific game state condition is met; the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_387()
{
    // event 157_4 : checks skips if the event-specific game state condition is met; the event-specific game state condition is met; this handler gates a game event without a dir
    {
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!workshoplink_139_instances.has_selection()) goto event_157_4_end;
        if (!(((Active*)get_instance(custommaplistbg_137_instances))->flags & VISIBLE)) goto event_157_4_end;
        if (layers[3-1].visible) goto event_157_4_end;
        if (layers[4-1].visible) goto event_157_4_end;
        if (layers[5-1].visible) goto event_157_4_end;
        open_url(str_http_steamcommunity_com_app_298630_workshop_339);
    }
    event_157_4_end: ;
}
// Function purpose: generated callback event_func_388 processes event block(s) 158_4. Group(s): Custom Maps
//        Init. Actions/conditions: 158_4: clears the current selection or contents; opens a folder selection dialog;
//        updates game state with vector<FilesystemItem>::iterator it; plus 1 more actions.
void Frames::event_func_388()
{
    // event 158_4 : clears the current selection or contents; opens a folder selection dialog; updates game state with vector<FilesystemItem>::iterator it; plus 1 more actions
    {
        // group: Custom Maps Init
        every_158_4 += manager.dt;
        if (every_158_4 < 1.0) goto event_158_4_end;
        every_158_4 -= 1.0;
        custommaps_136_instances.clear_selection();
        for (ObjectIterator it(custommaps_136_instances); !it.end(); ++it) {
            ((ListObject*)*it)->clear();
        }
        folder_search_id = 10;
        {
            vector<FilesystemItem> items;
            platform_walk_folder(File::get_appdata_directory()+str_the_escapists_custom_maps_66, items);
            vector<FilesystemItem>::iterator it;
            for (it = items.begin(); it != items.end(); ++it) {
                if (it->is_folder()) continue;
                folder_search_name = join_path(File::get_appdata_directory()+str_the_escapists_custom_maps_66, it->name);
                folder_search_loop_4();
            }
            folder_search_finish_4();
        }
        folder_search_id = 11;
        {
            vector<FilesystemItem> items;
            platform_walk_folder(File::get_appdata_directory()+str_the_escapists_custom_maps_66, items);
            vector<FilesystemItem>::iterator it;
            for (it = items.begin(); it != items.end(); ++it) {
                if (it->is_folder()) continue;
                folder_search_name = join_path(File::get_appdata_directory()+str_the_escapists_custom_maps_66, it->name);
                folder_search_loop_4();
            }
            folder_search_finish_4();
        }
    }
    event_158_4_end: ;
}
// Function purpose: generated callback event_func_389 processes event block(s) 172_4. Actions/conditions:
//        172_4: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_389()
{
    // event 172_4 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        {
            if (!((SteamObject*)get_instance(steamworks2_15_instances))->is_ready()) goto event_172_4_end;
        }
        if (once_condition_172_4) goto event_172_4_end;
        once_condition_172_4 = true;
        if (!((global_values->get(16)) == (1))) goto event_172_4_end;
        {
            steam_search_success_4();
        }
        if (!group_get_subs_and_enable_download_1) {
            group_get_subs_and_enable_download_1 = true;
            group_check_group_get_subs_and_enable_download_1_0 = true;
        }
    }
    event_172_4_end: ;
}
// Function purpose: generated callback event_func_390 processes event block(s) 173_4. Actions/conditions:
//        173_4: checks the event-specific game state condition is met; skips if the event-specific game state
//        condition is met; this handler gates a game event without a dir.
void Frames::event_func_390()
{
    // event 173_4 : checks the event-specific game state condition is met; skips if the event-specific game state condition is met; this handler gates a game event without a dir
    {
        if (!(group_get_subs_and_enable_download_1)) goto event_173_4_end;
        if (!group_check_group_get_subs_and_enable_download_1_0) goto event_173_4_end;
        group_check_group_get_subs_and_enable_download_1_0 = false;
        if (once_condition_173_4) goto event_173_4_end;
        once_condition_173_4 = true;
        {
            steam_search_success_4();
        }
    }
    event_173_4_end: ;
}
// Function purpose: generated callback event_func_391 processes event block(s) 177_4. Actions/conditions:
//        177_4: sets dload_queue to workshop_130->get_count(); shows a game layer; plays a sound or music track; plus
//        1 more actions.
void Frames::event_func_391()
{
    // event 177_4 : sets dload_queue to workshop_130->get_count(); shows a game layer; plays a sound or music track; plus 1 more actions
    {
        if (!(group_get_subs_and_enable_download_1)) goto event_177_4_end;
        if (!(((Active*)get_instance(download2_148_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_177_4_end;
        if (frame_time - restrict_177_4 < 1.0) goto event_177_4_end;
        restrict_177_4 = frame_time;
        if (layers[3-1].visible) goto event_177_4_end;
        if (layers[4-1].visible) goto event_177_4_end;
        if (layers[5-1].visible) goto event_177_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(70, str_dload_queue_305, ((ListObject*)get_instance(workshop_130_instances))->get_count());
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(5-1);
        media.play_id(SOUND_OPEN_5, 1-1);
        {
            loop_download_all_running = true;
            int times = int(((ListObject*)get_instance(download_151_instances))->get_count());
            loop_download_all_index = 0;
            while (loop_download_all_index < times) {
                loop_download_all_4();
                if (!loop_download_all_running) break;
                loop_download_all_index++;
            }
        }
        ((Active*)get_instance(mouse_9_instances))->set_layer(5-1);
    }
    event_177_4_end: ;
}
// Function purpose: generated callback event_func_392 processes event block(s) 182_4. Actions/conditions:
//        182_4: hides a game layer; sets the selected object's layer to 1-1.
void Frames::event_func_392()
{
    // event 182_4 : hides a game layer; sets the selected object's layer to 1-1
    {
        if (!(group_get_subs_and_enable_download_1)) goto event_182_4_end;
        if (!(layers[5-1].visible)) goto event_182_4_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(70, str_dload_queue_305)) <= (0))) goto event_182_4_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(5-1);
        ((Active*)get_instance(mouse_9_instances))->set_layer(1-1);
    }
    event_182_4_end: ;
}
// Function purpose: generated callback event_func_393 processes event block(s) 183_4. Actions/conditions:
//        183_4: updates game state with clear_achievements(); plays a sound or music track.
void Frames::event_func_393()
{
    // event 183_4 : updates game state with clear_achievements(); plays a sound or music track
    {
        if (!(is_key_pressed_once(SDLK_F11))) goto event_183_4_end;
        ((SteamObject*)get_instance(steamworks2_15_instances))->clear_achievements();
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_183_4_end: ;
}
void Frames::handle_frame_5_events()
{
    test_collisions_4();
    event_func_389();
    if (next_frame != -1) return;
    event_func_312();
    event_func_313();
    event_func_314();
    event_func_315();
    event_func_319();
    event_func_320();
    event_func_321();
    event_func_329();
    event_func_331();
    event_func_332();
    event_func_333();
    event_func_334();
    event_func_335();
    event_func_336();
    event_func_337();
    event_func_338();
    event_func_339();
    event_func_340();
    event_func_341();
    event_func_342();
    event_func_343();
    event_func_344();
    event_func_345();
    event_func_346();
    event_func_347();
    event_func_348();
    if (!group_main_maps_1) goto group_main_maps_1_end;
    event_func_349();
    event_func_350();
    event_func_351();
    event_func_352();
    event_func_353();
    event_func_354();
    event_func_357();
    event_func_358();
    group_main_maps_1_end: ;
    if (!group_bonus_maps_1) goto group_bonus_maps_1_end;
    event_func_359();
    event_func_360();
    event_func_361();
    event_func_362();
    event_func_363();
    event_func_365();
    event_func_366();
    group_bonus_maps_1_end: ;
    if (!group_custom_maps_1) goto group_custom_maps_1_end;
    event_func_368();
    event_func_369();
    event_func_370();
    event_func_371();
    event_func_372();
    event_func_374();
    event_func_377();
    event_func_378();
    event_func_379();
    group_custom_maps_1_end: ;
    event_func_380();
    event_func_381();
    event_func_382();
    event_func_383();
    event_func_384();
    event_func_385();
    event_func_386();
    event_func_388();
    if (!group_get_subs_and_enable_download_1) goto group_get_subs_and_enable_download_1_end;
    event_func_390();
    event_func_392();
    group_get_subs_and_enable_download_1_end: ;
    event_func_393();
}
void Frames::handle_frame_5_pre_events()
{
    event_func_316();
    event_func_317();
    event_func_318();
    event_func_322();
    event_func_323();
    event_func_324();
    event_func_325();
    event_func_326();
    event_func_327();
    event_func_328();
    event_func_330();
    event_func_355();
    event_func_356();
    event_func_364();
    event_func_367();
    event_func_373();
    event_func_375();
    event_func_376();
    event_func_387();
    event_func_391();
}
// Function purpose: generated callback event_func_394 processes event block(s) 2_4. Actions/conditions: 2_4:
//        updates game state with force_frame(current_line-1); sets page to 0; sets the selected object's direction to
//        0; plus 19 more actions.
void Frames::event_func_394()
{
    // event 2_4 : updates game state with force_frame(current_line-1); sets page to 0; sets the selected object's direction to 0; plus 19 more actions
    {
        ((Active*)get_instance(mainpic_113_instances))->force_frame(((ListObject*)get_instance(mainmaps_114_instances))->current_line-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(60, str_page_288, 0);
        main_124_instances.clear_selection();
        for (ObjectIterator it(main_124_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        
        global_values->set(18, 0);
        ((Active*)get_instance(bonus_129_instances))->set_direction(0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(31, str_mapdir_131, str_data_maps_132);
        ((Active*)get_instance(mainpic_113_instances))->stop_animation();
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(69, str_custmapsel_304, 0);
        ((ListObject*)get_instance(updates2_141_instances))->clear();
        ((ListObject*)get_instance(updates2_141_instances))->add_line(str_waiting_for_steam_connection_340);
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(bonus_82_instances))->stop_animation();
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(58, str_dlc_fhurst_277, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_dlc_alca_275, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(56, str_dlc_eteam_273, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(55, str_dlc_dtaf_271, 0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(54, str_dlc_ss_269, 0);
        ((Active*)get_instance(t17presents_91_instances))->stop_animation();
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(38, str_ypos_193, ((Active*)get_instance(t17presents_91_instances))->get_y());
    }
    event_2_4_end: ;
}
// Function purpose: generated callback event_func_395 processes event block(s) 3_4. Actions/conditions: 3_4:
//        loads a game or save-data file; decrypts a save-data file; loads a game or save-data file; plus 5 more
//        actions.
void Frames::event_func_395()
{
    // event 3_4 : loads a game or save-data file; decrypts a save-data file; loads a game or save-data file; plus 5 more actions
    {
        ((INI*)get_instance(translationData_instances))->load_file(str_data_data_215+global_strings->get(6)+str_dat_216);
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
        ((INI*)get_instance(globals_127_instances))->load_file(File::get_appdata_directory()+str_the_escapists_global_dat_300, false, false, true);
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_global_dat_300);
        ((INI*)get_instance(settings_142_instances))->load_file(File::get_appdata_directory()+str_the_escapists_settings_cfg_62);
    }
    event_3_4_end: ;
}
// Function purpose: generated callback event_func_396 processes event block(s) 4_4. Actions/conditions: 4_4:
//        sets the selected object's visibility to false; hides the system cursor; sets the current line selection;
//        plus 14 more actions.
void Frames::event_func_396()
{
    // event 4_4 : sets the selected object's visibility to false; hides the system cursor; sets the current line selection; plus 14 more actions
    {
        ((Active*)get_instance(active3_63_instances))->set_visible(false);
        set_cursor_visible(false);
        ((ListObject*)get_instance(mainmaps_114_instances))->current_line = 1;
        ((Active*)get_instance(active3_63_instances))->set_scale(2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(75, str_back_button_x_312, ((Active*)get_instance(back_102_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(76, str_back_button_y_313, ((Active*)get_instance(back_102_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(71, str_back_string_x_308, ((Text*)get_instance(back2_68_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(72, str_back_string_y_309, ((Text*)get_instance(back2_68_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(77, str_go_button_x_314, ((Active*)get_instance(letsgo_100_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(78, str_go_button_y_315, ((Active*)get_instance(letsgo_100_instances))->get_y());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(73, str_go_string_x_310, ((Text*)get_instance(continue_101_instances))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(74, str_go_string_y_311, ((Text*)get_instance(continue_101_instances))->get_y());
        ((Active*)get_instance(download2_148_instances))->blend_color.set_alpha_coefficient(150);
        ((Text*)get_instance(downoad_147_instances))->blend_color.set_alpha_coefficient(150);
    }
    event_4_4_end: ;
}
// Function purpose: generated callback event_func_397 processes event block(s) 5_4. Actions/conditions: 5_4:
//        sets a game or interface text string; sets a game or interface text string; sets a game or interface text
//        string; plus 5 more actions.
void Frames::event_func_397()
{
    // event 5_4 : sets a game or interface text string; sets a game or interface text string; sets a game or interface text string; plus 5 more actions
    {
        ((Text*)get_instance(header_107_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_12_334)));
        ((Text*)get_instance(continue_101_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_6_241)));
        ((Text*)get_instance(back2_68_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_3_158)));
        ((Text*)get_instance(eraseheader_66_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_16_219)));
        ((Text*)get_instance(slot4_65_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_title_play_168, str_17_218));
        {
            loop_t17_pres_running = true;
            int times = int(1);
            loop_t17_pres_index = 0;
            while (loop_t17_pres_index < times) {
                loop_t17_pres_4();
                if (!loop_t17_pres_running) break;
                loop_t17_pres_index++;
            }
        }
    }
    event_5_4_end: ;
}
// Function purpose: generated callback event_func_398 processes event block(s) 20_4. Actions/conditions: 20_4:
//        updates game state with current_line = global_values->get(17).
void Frames::event_func_398()
{
    // event 20_4 : updates game state with current_line = global_values->get(17)
    {
        if (!((global_values->get(17)) != (0))) goto event_20_4_end;
        ((ListObject*)get_instance(mainmaps_114_instances))->current_line = global_values->get(17);
    }
    event_20_4_end: ;
}
// Function purpose: generated callback event_func_399 processes event block(s) 21_4. Actions/conditions: 21_4:
//        sets the current line selection.
void Frames::event_func_399()
{
    // event 21_4 : sets the current line selection
    {
        if (!((global_values->get(17)) == (0))) goto event_21_4_end;
        ((ListObject*)get_instance(mainmaps_114_instances))->current_line = 1;
    }
    event_21_4_end: ;
}
// Function purpose: generated callback event_func_400 processes event block(s) 35_4. Actions/conditions: 35_4:
//        runs the event-specific checks.
void Frames::event_func_400()
{
    // event 35_4 : runs the event-specific checks
    {
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
    event_35_4_end: ;
}
// Function purpose: generated callback event_func_401 processes event block(s) 55_4. Group(s): Custom/Main.
//        Actions/conditions: 55_4: sets the current line selection.
void Frames::event_func_401()
{
    // event 55_4 : sets the current line selection
    {
        // group: Custom/Main
        if (!((((ListObject*)get_instance(bonusmaps_126_instances))->get_count()) > (0))) goto event_55_4_end;
        ((ListObject*)get_instance(bonusmaps_126_instances))->current_line = 0;
    }
    event_55_4_end: ;
}
// Function purpose: generated callback event_func_402 processes event block(s) 108_4. Actions/conditions:
//        108_4: sets cust_count to 7; clears the current selection or contents; sets the current line selection.
void Frames::event_func_402()
{
    // event 108_4 : sets cust_count to 7; clears the current selection or contents; sets the current line selection
    {
        if (!((global_values->get(16)) == (1))) goto event_108_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(59, str_cust_count_278, 7);
        ((ListObject*)get_instance(bonusmaps_126_instances))->clear();
        {
            loop_get_cust_running = true;
            int times = int(1);
            loop_get_cust_index = 0;
            while (loop_get_cust_index < times) {
                loop_get_cust_4();
                if (!loop_get_cust_running) break;
                loop_get_cust_index++;
            }
        }
        ((ListObject*)get_instance(bonusmaps_126_instances))->current_line = 0;
    }
    event_108_4_end: ;
}
// Function purpose: generated callback event_func_403 processes event block(s) 109_4. Actions/conditions:
//        109_4: sets cust_count to 0; clears the current selection or contents; sets the current line selection.
void Frames::event_func_403()
{
    // event 109_4 : sets cust_count to 0; clears the current selection or contents; sets the current line selection
    {
        if (!((global_values->get(16)) == (0))) goto event_109_4_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(59, str_cust_count_278, 0);
        ((ListObject*)get_instance(bonusmaps_126_instances))->clear();
        {
            loop_get_cust_drmfree_running = true;
            int times = int(1);
            loop_get_cust_drmfree_index = 0;
            while (loop_get_cust_drmfree_index < times) {
                loop_get_cust_drmfree_4();
                if (!loop_get_cust_drmfree_running) break;
                loop_get_cust_drmfree_index++;
            }
        }
        ((ListObject*)get_instance(bonusmaps_126_instances))->current_line = 0;
    }
    event_109_4_end: ;
}
// Function purpose: generated callback event_func_404 processes event block(s) 147_4. Actions/conditions:
//        147_4: sets a game or interface text string.
void Frames::event_func_404()
{
    // event 147_4 : sets a game or interface text string
    {
        ((Text*)get_instance(cheat_128_instances))->set_string(empty_string);
    }
    event_147_4_end: ;
}
// Function purpose: generated callback event_func_405 processes event block(s) 159_4. Actions/conditions:
//        159_4: clears the current selection or contents; opens a folder selection dialog; updates game state with
//        vector<FilesystemItem>::iterator it; plus 1 more actions.
void Frames::event_func_405()
{
    // event 159_4 : clears the current selection or contents; opens a folder selection dialog; updates game state with vector<FilesystemItem>::iterator it; plus 1 more actions
    {
        custommaps_136_instances.clear_selection();
        for (ObjectIterator it(custommaps_136_instances); !it.end(); ++it) {
            ((ListObject*)*it)->clear();
        }
        folder_search_id = 10;
        {
            vector<FilesystemItem> items;
            platform_walk_folder(File::get_appdata_directory()+str_the_escapists_custom_maps_66, items);
            vector<FilesystemItem>::iterator it;
            for (it = items.begin(); it != items.end(); ++it) {
                if (it->is_folder()) continue;
                folder_search_name = join_path(File::get_appdata_directory()+str_the_escapists_custom_maps_66, it->name);
                folder_search_loop_4();
            }
            folder_search_finish_4();
        }
        folder_search_id = 11;
        {
            vector<FilesystemItem> items;
            platform_walk_folder(File::get_appdata_directory()+str_the_escapists_custom_maps_66, items);
            vector<FilesystemItem>::iterator it;
            for (it = items.begin(); it != items.end(); ++it) {
                if (it->is_folder()) continue;
                folder_search_name = join_path(File::get_appdata_directory()+str_the_escapists_custom_maps_66, it->name);
                folder_search_loop_4();
            }
            folder_search_finish_4();
        }
    }
    event_159_4_end: ;
}
// Function purpose: generated callback event_func_406 processes event block(s) 160_4. Actions/conditions:
//        160_4: clears the current selection or contents; opens a folder selection dialog; updates game state with
//        vector<FilesystemItem>::iterator it; plus 5 more actions.
void Frames::event_func_406()
{
    // event 160_4 : clears the current selection or contents; opens a folder selection dialog; updates game state with vector<FilesystemItem>::iterator it; plus 5 more actions
    {
        ((ListObject*)get_instance(custommaps_136_instances))->clear();
        folder_search_id = 10;
        {
            vector<FilesystemItem> items;
            platform_walk_folder(File::get_appdata_directory()+str_the_escapists_custom_maps_66, items);
            vector<FilesystemItem>::iterator it;
            for (it = items.begin(); it != items.end(); ++it) {
                if (it->is_folder()) continue;
                folder_search_name = join_path(File::get_appdata_directory()+str_the_escapists_custom_maps_66, it->name);
                folder_search_loop_4();
            }
            folder_search_finish_4();
        }
        ((ListObject*)get_instance(custommaps_136_instances))->current_line = ((AssociateArray*)get_instance(gameVariables_instances))->get_value(69, str_custmapsel_304);
    }
    event_160_4_end: ;
}
// Function purpose: generated callback event_func_407 processes event block(s) 165_4. Actions/conditions:
//        165_4: sets the object's animation to 0.
void Frames::event_func_407()
{
    // event 165_4 : sets the object's animation to 0
    {
        if (!((global_values->get(16)) == (1))) goto event_165_4_end;
        ((Active*)get_instance(custom2_135_instances))->force_animation(0);
    }
    event_165_4_end: ;
}
// Function purpose: generated callback event_func_408 processes event block(s) 166_4. Actions/conditions:
//        166_4: sets the object's animation to 1.
void Frames::event_func_408()
{
    // event 166_4 : sets the object's animation to 1
    {
        if (!((global_values->get(16)) == (0))) goto event_166_4_end;
        ((Active*)get_instance(custom2_135_instances))->force_animation(1);
    }
    event_166_4_end: ;
}
// Function purpose: generated callback event_func_409 processes event block(s) 167_4. Group(s): url icon
//        placement. Actions/conditions: 167_4: sets the selected object's horizontal position to selected
//        object->get_x()+35.
void Frames::event_func_409()
{
    // event 167_4 : sets the selected object's horizontal position to selected object->get_x()+35
    {
        // group: url icon placement
        if (!((global_strings->get(6)) == (str_ger_6))) goto event_167_4_end;
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+35);
        }
    }
    event_167_4_end: ;
}
// Function purpose: generated callback event_func_410 processes event block(s) 168_4. Group(s): url icon
//        placement. Actions/conditions: 168_4: sets the selected object's horizontal position to selected
//        object->get_x()+25.
void Frames::event_func_410()
{
    // event 168_4 : sets the selected object's horizontal position to selected object->get_x()+25
    {
        // group: url icon placement
        if (!((global_strings->get(6)) == (str_spa_2))) goto event_168_4_end;
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+25);
        }
    }
    event_168_4_end: ;
}
// Function purpose: generated callback event_func_411 processes event block(s) 169_4. Group(s): url icon
//        placement. Actions/conditions: 169_4: sets the selected object's horizontal position to selected
//        object->get_x()+25.
void Frames::event_func_411()
{
    // event 169_4 : sets the selected object's horizontal position to selected object->get_x()+25
    {
        // group: url icon placement
        if (!((global_strings->get(6)) == (str_pol_4))) goto event_169_4_end;
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+25);
        }
    }
    event_169_4_end: ;
}
// Function purpose: generated callback event_func_412 processes event block(s) 170_4. Group(s): url icon
//        placement. Actions/conditions: 170_4: sets the selected object's horizontal position to selected
//        object->get_x()+15.
void Frames::event_func_412()
{
    // event 170_4 : sets the selected object's horizontal position to selected object->get_x()+15
    {
        // group: url icon placement
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_170_4_end;
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+15);
        }
    }
    event_170_4_end: ;
}
// Function purpose: generated callback event_func_413 processes event block(s) 171_4. Group(s): url icon
//        placement. Actions/conditions: 171_4: sets the selected object's horizontal position to selected
//        object->get_x()+15.
void Frames::event_func_413()
{
    // event 171_4 : sets the selected object's horizontal position to selected object->get_x()+15
    {
        // group: url icon placement
        if (!((global_strings->get(6)) == (str_ita_5))) goto event_171_4_end;
        workshoplink_139_instances.clear_selection();
        for (ObjectIterator it(workshoplink_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+15);
        }
    }
    event_171_4_end: ;
}
void Frames::on_frame_5_start_events()
{
    event_func_394();
    event_func_395();
    event_func_396();
    event_func_397();
    event_func_226();
    event_func_398();
    event_func_399();
    event_func_400();
    event_func_401();
    event_func_402();
    event_func_403();
    event_func_404();
    event_func_405();
    event_func_406();
    event_func_407();
    event_func_408();
    event_func_409();
    event_func_410();
    event_func_411();
    event_func_412();
    event_func_413();
}
void Frames::on_frame_5_init()
{
    index = 4;
    width = 320;
    height = 240;
    virtual_width = 320;
    virtual_height = 240;
    background_color = Color(0, 0, 0);
    timer_base = 50;
    reset_image_cache();
    flush_image_cache();
    layers.resize(5);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, false, false, false);
    layers[3].init(3, 1.0, 1.0, false, false, false);
    layers[4].init(4, 1.0, 1.0, false, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    add_background_object(create_backdrop6_99(0, 0), 0);
    add_background_object(create_backdrop5_112(30, 25), 0);
    add_background_object(create_backdrop_153(-112, -64), 0);
    add_object(create_mainpic_113(160, 109), 0);
    add_object(create_bonus_152(160, 109), 0);
    add_object(create_gameVariables(224, -96), 0);
    add_object(create_header_111(51, 36), 0);
    add_object(create_maindiff_123(64, 155), 0);
    add_object(create_bestscore_121(-5, 221), 0);
    add_object(create_cheat_128(-240, 352), 0);
    add_object(create_active_116(256, 106), 0);
    add_object(create_active2_117(65, 106), 0);
    add_object(create_stringtokenizer_81(256, -64), 0);
    add_object(create_letsgo_100(163, 186), 0);
    add_object(create_back_102(94, 186), 0);
    add_object(create_download2_148(-160, 272), 0);
    add_object(create_continue_119(156, 188), 0);
    add_object(create_downoad_147(-144, 272), 0);
    add_object(create_back2_120(94, 188), 0);
    add_object(create_active3_122(39, -72), 0);
    add_object(create_main_124(284, 36), 0);
    add_object(create_custom2_135(284, 80), 0);
    add_object(create_bonus_129(284, 58), 0);
    add_object(create_custommaplistbg_137(64, 256), 0);
    add_object(create_custommaplist_138(80, 256), 0);
    add_object(create_highlight_125(65, 69), 0);
    add_object(create_globals_127(192, -64), 0);
    add_object(create_layerobject_37(256, -96), 0);
    add_object(create_steamworks2_15(160, -96), 0);
    add_object(create_mainname_115(64, 147), 0);
    add_object(create_t17presents_154(160, 153), 0);
    add_object(create_mainmaps_114(416, 48), 0);
    add_object(create_bonusmaps_126(384, -48), 0);
    add_object(create_cheat2_131(352, 48), 0);
    add_object(create_translationData(288, -96), 0);
    add_object(create_settings_142(320, -96), 0);
    add_object(create_workshop_130(352, 208), 0);
    add_object(create_download_151(352, 288), 0);
    add_object(create_custommaps_136(384, 128), 0);
    add_object(create_mouse_9(96, -48), 1);
    add_object(create_substringreplace_27(192, -96), 1);
    add_object(create_active6_134(160, 111), 1);
    add_object(create_workshoplink_139(209, 36), 1);
    add_object(create_array_132(128, -96), 1);
    add_background_object(create_quickbackdrop2_145(0, 0), 2);
    add_background_object(create_backdrop7_146(50, 73), 2);
    add_object(create_eraseheader_66(64, 89), 2);
    add_object(create_slot4_65(64, 99), 2);
    add_background_object(create_quickbackdrop_144(0, 0), 3);
    add_object(create_updates2_141(16, 16), 3);
    add_object(create_updates_133(336, 0), 3);
    add_background_object(create_quickbackdrop2_145(0, 0), 4);
    add_object(create_loadingspin_149(160, 101), 4);
    loop_get_score_running = false;
    loop_get_score_index = 0;
    loop_t17_pres_running = false;
    loop_t17_pres_index = 0;
    loop_dlc_url_running = false;
    loop_dlc_url_index = 0;
    loop_create_custom_list_running = false;
    loop_create_custom_list_index = 0;
    loop_download_all_running = false;
    loop_download_all_index = 0;
    loop_create_bonus_list_running = false;
    loop_create_bonus_list_index = 0;
    loop_check_this_locked_running = false;
    loop_check_this_locked_index = 0;
    loop_lock_checks_running = false;
    loop_lock_checks_index = 0;
    loop_get_cust_running = false;
    loop_get_cust_index = 0;
    loop_checkcheat_running = false;
    loop_checkcheat_index = 0;
    loop_refresh_bonus_running = false;
    loop_refresh_bonus_index = 0;
    loop_get_cust_drmfree_running = false;
    loop_get_cust_drmfree_index = 0;
    loop_go_list_running = false;
    loop_go_list_index = 0;
    loops = NULL;
    restrict_177_4 = frame_time;
    every_158_4 = 0.0f;
    group_bonus_maps_1 = false;
    restrict_51_4 = frame_time;
    every_132_4 = 0.0f;
    group_main_maps_1 = true;
    once_condition_173_4 = false;
    restrict_50_4 = frame_time;
    once_condition_172_4 = false;
    group_check_group_main_maps_1_0 = true;
    group_get_subs_and_enable_download_1 = false;
    group_check_group_bonus_maps_1_0 = true;
    restrict_53_4 = frame_time;
    group_custom_maps_1 = false;
    restrict_128_4 = frame_time;
    group_check_group_get_subs_and_enable_download_1_0 = true;
    group_check_group_custom_maps_1_0 = true;
}
// Function purpose: generated callback event_func_414 processes event block(s) 22_5. Actions/conditions: 22_5:
//        sets error to 0.
void Frames::event_func_414()
{
    // event 22_5 : sets error to 0
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 0);
    }
    event_22_5_end: ;
}
// Function purpose: generated callback event_func_415 processes event block(s) 23_5. Group(s): Check file
//        hashes. Actions/conditions: 23_5: checks the event-specific game state condition is met; this handler gates
//        a game event without a direct value/object action.
void Frames::event_func_415()
{
    // event 23_5 : checks the event-specific game state condition is met; this handler gates a game event without a direct value/object action
    {
        // group: Check file hashes
        if (!((global_values->get(11)) == (1))) goto event_23_5_end;
        if (!group_check_file_hashes_if_loading_a_save_1) {
            group_check_file_hashes_if_loading_a_save_1 = true;
        }
    }
    event_23_5_end: ;
}
// Function purpose: generated callback event_func_416 processes event block(s) 24_5. Actions/conditions: 24_5:
//        decrypts a save-data file; loads a game or save-data file; sets Save_Version to
//        saveread_166->get_string(Prison, Version); plus 6 more actions.
void Frames::event_func_416()
{
    // event 24_5 : decrypts a save-data file; loads a game or save-data file; sets Save_Version to saveread_166->get_string(Prison, Version); plus 6 more actions
    {
        if (!(group_check_file_hashes_if_loading_a_save_1)) goto event_24_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_24_5_end;
    BlowfishObject::decrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_save_dat_211);
        ((INI*)get_instance(saveread_166_instances))->load_file(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_save_dat_211);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(80, str_save_version_341, ((INI*)get_instance(saveread_166_instances))->get_string(str_prison_111, str_version_342));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_savecode_343, ((INI*)get_instance(saveread_166_instances))->get_string(str_player_102, str_savecode_343));
        global_strings->set(0, ((INI*)get_instance(saveread_166_instances))->get_string(str_player_102, str_map_107));
    BlowfishObject::encrypt_file(str_mothking_99, File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_save_dat_211);
    }
    event_24_5_end: ;
}
// Function purpose: generated callback event_func_417 processes event block(s) 25_5. Actions/conditions: 25_5:
//        loads a game or save-data file; updates a value on the target object.
void Frames::event_func_417()
{
    // event 25_5 : loads a game or save-data file; updates a value on the target object
    {
        if (!(group_check_file_hashes_if_loading_a_save_1)) goto event_25_5_end;
        if (!((global_values->get(18)) == (2))) goto event_25_5_end;
        if (!((global_values->get(11)) == (1))) goto event_25_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_savecode_343)) != (empty_string))) goto event_25_5_end;
        ((INI*)get_instance(saveref_167_instances))->load_file(File::get_appdata_directory()+str_the_escapists_save_190+number_to_string(global_values->get(14))+str_mname_dat_192);
        global_strings->set(0, ((INI*)get_instance(saveref_167_instances))->get_string(str_data_194, str_map_107));
    }
    event_25_5_end: ;
}
// Function purpose: generated callback event_func_418 processes event block(s) 26_5. Actions/conditions: 26_5:
//        sets a game or interface text string; sets the selected object's visibility to true; sets error to 1.
void Frames::event_func_418()
{
    // event 26_5 : sets a game or interface text string; sets the selected object's visibility to true; sets error to 1
    {
        if (!(group_check_file_hashes_if_loading_a_save_1)) goto event_26_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_26_5_end;
        if (!((global_strings->get(0)) == (str_ss_136))) goto event_26_5_end;
        if (((SteamObject*)get_instance(steamworks_79_instances))->has_app(412990)) goto event_26_5_end;
        ((Text*)get_instance(string3_29_instances))->set_string(((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(7));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
    }
    event_26_5_end: ;
}
// Function purpose: generated callback event_func_419 processes event block(s) 27_5. Actions/conditions: 27_5:
//        sets error to 1; sets a game or interface text string; sets the selected object's visibility to true.
void Frames::event_func_419()
{
    // event 27_5 : sets error to 1; sets a game or interface text string; sets the selected object's visibility to true
    {
        if (!(group_check_file_hashes_if_loading_a_save_1)) goto event_27_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_27_5_end;
        if (!((global_strings->get(0)) == (str_dtaf_137))) goto event_27_5_end;
        if (((SteamObject*)get_instance(steamworks_79_instances))->has_app(408730)) goto event_27_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((Text*)get_instance(string3_29_instances))->set_string(((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(7));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_27_5_end: ;
}
// Function purpose: generated callback event_func_420 processes event block(s) 28_5. Actions/conditions: 28_5:
//        sets error to 1; sets a game or interface text string; sets the selected object's visibility to true.
void Frames::event_func_420()
{
    // event 28_5 : sets error to 1; sets a game or interface text string; sets the selected object's visibility to true
    {
        if (!(group_check_file_hashes_if_loading_a_save_1)) goto event_28_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_28_5_end;
        if (!((global_strings->get(0)) == (str_escapeteam_138))) goto event_28_5_end;
        if (((SteamObject*)get_instance(steamworks_79_instances))->has_app(376700)) goto event_28_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((Text*)get_instance(string3_29_instances))->set_string(((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(7));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_28_5_end: ;
}
// Function purpose: generated callback event_func_421 processes event block(s) 29_5. Actions/conditions: 29_5:
//        sets error to 1; sets a game or interface text string; sets the selected object's visibility to true.
void Frames::event_func_421()
{
    // event 29_5 : sets error to 1; sets a game or interface text string; sets the selected object's visibility to true
    {
        if (!(group_check_file_hashes_if_loading_a_save_1)) goto event_29_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_29_5_end;
        if (!((global_strings->get(0)) == (str_alca_139))) goto event_29_5_end;
        if (((SteamObject*)get_instance(steamworks_79_instances))->has_app(349350)) goto event_29_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((Text*)get_instance(string3_29_instances))->set_string(((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(7));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_29_5_end: ;
}
// Function purpose: generated callback event_func_422 processes event block(s) 30_5. Actions/conditions: 30_5:
//        sets error to 1; sets a game or interface text string; sets the selected object's visibility to true.
void Frames::event_func_422()
{
    // event 30_5 : sets error to 1; sets a game or interface text string; sets the selected object's visibility to true
    {
        if (!(group_check_file_hashes_if_loading_a_save_1)) goto event_30_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_30_5_end;
        if (!((global_strings->get(0)) == (str_ea_140))) goto event_30_5_end;
        if (((SteamObject*)get_instance(steamworks_79_instances))->has_app(349310)) goto event_30_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((Text*)get_instance(string3_29_instances))->set_string(((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(7));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_30_5_end: ;
}
// Function purpose: generated callback event_func_423 processes event block(s) 31_5. Group(s): Check file
//        hashes. Actions/conditions: 31_5: loads a game or save-data file.
void Frames::event_func_423()
{
    // event 31_5 : loads a game or save-data file
    {
        // group: Check file hashes
        if (!((global_values->get(18)) == (2))) goto event_31_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_31_5_end;
        ((INI*)get_instance(newmapread_165_instances))->load_file(((AssociateArray*)get_instance(gameVariables_instances))->get_string(31, str_mapdir_131)+global_strings->get(0)+str_cmap_302);
    }
    event_31_5_end: ;
}
// Function purpose: generated callback event_func_424 processes event block(s) 32_5. Group(s): Everything
//        Else. Actions/conditions: 32_5: sets error to 1; sets string to
//        errors_168->get_line(1)+errors_168->get_line(2); sets string to
//        StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions.
void Frames::event_func_424()
{
    // event 32_5 : sets error to 1; sets string to errors_168->get_line(1)+errors_168->get_line(2); sets string to StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions
    {
        // group: Everything Else
        if (!((global_values->get(18)) != (2))) goto event_32_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_32_5_end;
        if (File::file_readable(((AssociateArray*)get_instance(gameVariables_instances))->get_string(31, str_mapdir_131)+global_strings->get(0)+str_map_344)) goto event_32_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, ((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str_source_347, global_strings->get(0)+str_map_344));
        ((Text*)get_instance(string3_29_instances))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_32_5_end: ;
}
// Function purpose: generated callback event_func_425 processes event block(s) 33_5. Group(s): Everything
//        Else. Actions/conditions: 33_5: sets error to 1; sets string to
//        errors_168->get_line(1)+errors_168->get_line(2); sets string to
//        StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions.
void Frames::event_func_425()
{
    // event 33_5 : sets error to 1; sets string to errors_168->get_line(1)+errors_168->get_line(2); sets string to StringReplace::replace(gameVariables->get_string(82, string), #, ); plus 6 more actions
    {
        // group: Everything Else
        if (!((global_values->get(18)) == (2))) goto event_33_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_33_5_end;
        if (File::file_readable(((AssociateArray*)get_instance(gameVariables_instances))->get_string(31, str_mapdir_131)+global_strings->get(0)+str_cmap_302)) goto event_33_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, ((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str__346, str__198));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(82, str_string_345, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345), str_source_347, global_strings->get(0)+str_cmap_302));
        ((Text*)get_instance(string3_29_instances))->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(82, str_string_345));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_33_5_end: ;
}
// Function purpose: generated callback event_func_426 processes event block(s) 34_5. Group(s): Everything
//        Else. Actions/conditions: 34_5: sets error to 2; sets a game or interface text string; sets the selected
//        object's visibility to true.
void Frames::event_func_426()
{
    // event 34_5 : sets error to 2; sets a game or interface text string; sets the selected object's visibility to true
    {
        // group: Everything Else
        if (!((global_values->get(18)) == (2))) goto event_34_5_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_34_5_end;
        if (!((((INI*)get_instance(newmapread_165_instances))->get_value_int(str_info_348, str_rdy_349)) == (0))) goto event_34_5_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 2);
        ((Text*)get_instance(string3_29_instances))->set_string(((ListObject*)get_instance(errors_168_instances))->get_line(1)+((ListObject*)get_instance(errors_168_instances))->get_line(3));
        ((Text*)get_instance(string3_29_instances))->set_visible(true);
    }
    event_34_5_end: ;
}
