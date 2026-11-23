#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"
#include "game-settings.h"

void Frames::event_func_5127()
{
    // event 29_9
    {
        if (!(group_base_layer_1)) goto event_29_9_end;
        if (!((global_values->get(9)) < (0))) goto event_29_9_end;
        global_values->set(9, 0);
    }
    event_29_9_end: ;
}
void Frames::event_func_5128()
{
    // event 30_9
    {
        if (!(group_base_layer_1)) goto event_30_9_end;
        if (!((global_values->get(9)) > (100))) goto event_30_9_end;
        global_values->set(9, 100);
    }
    event_30_9_end: ;
}
void Frames::event_func_5129()
{
    // event 31_9
    {
        if (!(group_base_layer_1)) goto event_31_9_end;
        if (!((global_values->get(10)) < (0))) goto event_31_9_end;
        global_values->set(10, 0);
    }
    event_31_9_end: ;
}
void Frames::event_func_5130()
{
    // event 32_9
    {
        if (!(group_base_layer_1)) goto event_32_9_end;
        if (!((global_values->get(10)) > (100))) goto event_32_9_end;
        global_values->set(10, 100);
    }
    event_32_9_end: ;
}
void Frames::event_func_5131()
{
    // event 33_9
    {
        if (!(group_base_layer_1)) goto event_33_9_end;
        ((Active*)get_instance(slidermusic_572_instances))->set_x((((Active*)get_instance(musicVolumeBar_instances))->get_box_index(0)+5)+global_values->get(9));
        ((Active*)get_instance(slidermusic_572_instances))->set_y(((Active*)get_instance(musicVolumeBar_instances))->get_y());
        ((Active*)get_instance(slidersounds_610_instances))->set_x((((Active*)get_instance(soundVolumeBar_instances))->get_box_index(0)+5)+global_values->get(10));
        ((Active*)get_instance(slidersounds_610_instances))->set_y(((Active*)get_instance(soundVolumeBar_instances))->get_y());
        ((Active*)get_instance(slidermusic_572_instances))->move_front(((Active*)get_instance(musicVolumeBar_instances)));
        ((Active*)get_instance(slidersounds_610_instances))->move_front(((Active*)get_instance(soundVolumeBar_instances)));
    }
    event_33_9_end: ;
}
void Frames::event_func_5132()
{
    // event 34_9
    {
        if (!(group_base_layer_1)) goto event_34_9_end;
        ((Text*)get_instance(settingsLanguageLabel_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_17_218)+str__1589);
    }
    event_34_9_end: ;
}
void Frames::event_func_5133()
{
    // event 35_9
    {
        if (!(group_base_layer_1)) goto event_35_9_end;
        if (!((global_values->get(8)) == (0))) goto event_35_9_end;
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!active_24_instances.has_selection()) goto event_35_9_end;
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_35_9_end: ;
}
void Frames::event_func_5134()
{
    // event 36_9
    {
        if (!(group_base_layer_1)) goto event_36_9_end;
        if (!((global_values->get(8)) == (0))) goto event_36_9_end;
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!active_24_instances.has_selection()) goto event_36_9_end;
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_36_9_end: ;
}
void Frames::event_func_5135()
{
    // event 37_9
    {
        if (!(group_base_layer_1)) goto event_37_9_end;
        if (!((global_values->get(8)) == (1))) goto event_37_9_end;
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!active_24_instances.has_selection()) goto event_37_9_end;
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_37_9_end: ;
}
void Frames::event_func_5136()
{
    // event 38_9
    {
        if (!(group_base_layer_1)) goto event_38_9_end;
        if (!((global_values->get(8)) == (1))) goto event_38_9_end;
        active_24_instances.clear_selection();
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!active_24_instances.has_selection()) goto event_38_9_end;
        for (ObjectIterator it(active_24_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_38_9_end: ;
}
void Frames::event_func_5137()
{
    // event 39_9
    {
        if (!(group_base_layer_1)) goto event_39_9_end;
        if (!(((Active*)get_instance(interfaceButtons_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_39_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_39_9_end;
        media.play_id(SOUND_OPEN_5, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        if (!group_remap_keys_1) {
            group_remap_keys_1 = true;
            group_check_group_remap_keys_1_0 = true;
        }
            group_base_layer_1 = false;
    
        ((Active*)get_instance(mouse_9_instances))->set_layer(2-1);
    }
    event_39_9_end: ;
}
void Frames::event_func_5138()
{
    // event 40_9
    {
        if (!(group_base_layer_1)) goto event_40_9_end;
        if (!(((Active*)get_instance(fieldspeechfile_535_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_40_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_40_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((EditObject*)get_instance(editbox_92_instances))->enable_focus();
        ((EditObject*)get_instance(editbox_92_instances))->set_text(empty_string);
    }
    event_40_9_end: ;
}
void Frames::event_func_5139()
{
    // event 41_9
    {
        if (!(group_base_layer_1)) goto event_41_9_end;
        if (!(((EditObject*)get_instance(editbox_92_instances))->get_focus())) goto event_41_9_end;
        ((Text*)get_instance(settingsSpeechValue_instances))->set_string(((EditObject*)get_instance(editbox_92_instances))->get_text()+str__96);
        ((Text*)get_instance(settingsSpeechValue_instances))->blend_color.set(Color(255, 192, 87));
        ((Text*)get_instance(settingsSpeechHint_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_19_246)));
        ((Text*)get_instance(settingsSpeechHint_instances))->set_visible(true);
    }
    event_41_9_end: ;
}
void Frames::event_func_5140()
{
    // event 42_9
    {
        if (!(group_base_layer_1)) goto event_42_9_end;
        if (!(is_key_pressed_once(SDLK_RETURN))) goto event_42_9_end;
        editbox_92_instances.clear_selection();
        for (ObjectIterator it(editbox_92_instances); !it.end(); ++it) {
            if (!(((EditObject*)(*it))->get_focus())) { it.deselect(); continue; }
        }
        if (!editbox_92_instances.has_selection()) goto event_42_9_end;
        for (ObjectIterator it(editbox_92_instances); !it.end(); ++it) {
            ((EditObject*)*it)->disable_focus();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(41, str_lclick_203, 1);
        }
        {
            loop_check_speechfile_string_running = true;
            int times = int(1);
            loop_check_speechfile_string_index = 0;
            while (loop_check_speechfile_string_index < times) {
                loop_check_speechfile_string_9();
                if (!loop_check_speechfile_string_running) break;
                loop_check_speechfile_string_index++;
            }
        }
        settingsSpeechHint_instances.clear_selection();
        for (ObjectIterator it(settingsSpeechHint_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
    }
    event_42_9_end: ;
}
void Frames::event_func_5141()
{
    // event 43_9
    {
        if (!(group_base_layer_1)) goto event_43_9_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_43_9_end;
        editbox_92_instances.clear_selection();
        for (ObjectIterator it(editbox_92_instances); !it.end(); ++it) {
            if (!(((EditObject*)(*it))->get_focus())) { it.deselect(); continue; }
        }
        if (!editbox_92_instances.has_selection()) goto event_43_9_end;
        fieldspeechfile_535_instances.clear_selection();
        for (ObjectIterator it(fieldspeechfile_535_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
        }
        if (!fieldspeechfile_535_instances.has_selection()) goto event_43_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(41, str_lclick_203)) == (0))) goto event_43_9_end;
        for (ObjectIterator it(editbox_92_instances); !it.end(); ++it) {
            ((EditObject*)*it)->disable_focus();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(41, str_lclick_203, 1);
        }
        {
            loop_check_speechfile_string_running = true;
            int times = int(1);
            loop_check_speechfile_string_index = 0;
            while (loop_check_speechfile_string_index < times) {
                loop_check_speechfile_string_9();
                if (!loop_check_speechfile_string_running) break;
                loop_check_speechfile_string_index++;
            }
        }
        settingsSpeechHint_instances.clear_selection();
        for (ObjectIterator it(settingsSpeechHint_instances); !it.end(); ++it) {
            ((Text*)*it)->set_visible(false);
        }
    }
    event_43_9_end: ;
}
void Frames::event_func_5142()
{
    // event 46_9
    {
        if (!(group_remap_keys_1)) goto event_46_9_end;
        if (!group_check_group_remap_keys_1_0) goto event_46_9_end;
        group_check_group_remap_keys_1_0 = false;
        {
            loop_load_keys_running = true;
            int times = int(1);
            loop_load_keys_index = 0;
            while (loop_load_keys_index < times) {
                loop_load_keys_9();
                if (!loop_load_keys_running) break;
                loop_load_keys_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(116, str_currkey_2390, -1);
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(2-1);
        ((ListObject*)get_instance(list_80_instances))->clear();
        ((ListObject*)get_instance(list_80_instances))->add_line(((AssociateArray*)get_instance(gameVariables_instances))->get_string(0, str_key_up_67));
        ((ListObject*)get_instance(list_80_instances))->add_line(((AssociateArray*)get_instance(gameVariables_instances))->get_string(1, str_key_down_69));
        ((ListObject*)get_instance(list_80_instances))->add_line(((AssociateArray*)get_instance(gameVariables_instances))->get_string(2, str_key_left_71));
        ((ListObject*)get_instance(list_80_instances))->add_line(((AssociateArray*)get_instance(gameVariables_instances))->get_string(3, str_key_right_73));
        ((ListObject*)get_instance(list_80_instances))->add_line(((AssociateArray*)get_instance(gameVariables_instances))->get_string(4, str_key_ac1_74));
        ((ListObject*)get_instance(list_80_instances))->add_line(((AssociateArray*)get_instance(gameVariables_instances))->get_string(5, str_key_ac2_76));
        ((ListObject*)get_instance(list_80_instances))->add_line(((AssociateArray*)get_instance(gameVariables_instances))->get_string(6, str_key_combat_78));
        manager.up = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(0, str_key_up_67));
        manager.down = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(1, str_key_down_69));
        manager.left = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(2, str_key_left_71));
        manager.right = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(3, str_key_right_73));
        manager.button1 = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(4, str_key_ac1_74));
        manager.button2 = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(5, str_key_ac2_76));
        manager.button3 = translate_string_to_key(((AssociateArray*)get_instance(gameVariables_instances))->get_string(6, str_key_combat_78));
        ((Text*)get_instance(keyvalues_584_instances))->set_string(((ListObject*)get_instance(list_80_instances))->get_line(0)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(1)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(2)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(3)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(4)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(5)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(6));
    }
    event_46_9_end: ;
}
void Frames::event_func_5143()
{
    // event 47_9
    {
        if (!(group_remap_keys_1)) goto event_47_9_end;
        every_47_9 += manager.dt;
        if (every_47_9 < 0.15) goto event_47_9_end;
        every_47_9 -= 0.15;
        ((Text*)get_instance(keyvalues_584_instances))->set_string(((ListObject*)get_instance(list_80_instances))->get_line(0)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(1)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(2)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(3)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(4)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(5)+str__198+((ListObject*)get_instance(list_80_instances))->get_line(6));
    }
    event_47_9_end: ;
}
void Frames::event_func_5144()
{
    // event 48_9
    {
        if (!(group_remap_keys_1)) goto event_48_9_end;
        ((ListObject*)get_instance(list_80_instances))->disable_focus();
    }
    event_48_9_end: ;
}
void Frames::event_func_5145()
{
    // event 49_9
    {
        if (!(group_remap_keys_1)) goto event_49_9_end;
        if (!(is_any_key_pressed_once())) goto event_49_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(116, str_currkey_2390)) != (-1))) goto event_49_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(112, str_blocked_1439, 0);
        {
            loop_check_keypress_running = true;
            int times = int(1);
            loop_check_keypress_index = 0;
            while (loop_check_keypress_index < times) {
                loop_check_keypress_9();
                if (!loop_check_keypress_running) break;
                loop_check_keypress_index++;
            }
        }
    }
    event_49_9_end: ;
}
void Frames::event_func_5146()
{
    // event 87_9
    {
        if (!(group_remap_keys_1)) goto event_87_9_end;
        if (!(is_any_key_pressed_once())) goto event_87_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(112, str_blocked_1439)) == (0))) goto event_87_9_end;
        ((ListObject*)get_instance(list_80_instances))->set_line(((AssociateArray*)get_instance(gameVariables_instances))->get_value(116, str_currkey_2390), translate_key_to_string(get_last_key_pressed()));
        ((Active*)get_instance(keysdone_581_instances))->blend_color.set_alpha_coefficient(0);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(116, str_currkey_2390, -1);
    }
    event_87_9_end: ;
}
void Frames::event_func_5147()
{
    // event 88_9
    {
        if (!(group_remap_keys_1)) goto event_88_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(0, str_key_up_67, ((ListObject*)get_instance(list_80_instances))->get_line(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(1, str_key_down_69, ((ListObject*)get_instance(list_80_instances))->get_line(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_key_left_71, ((ListObject*)get_instance(list_80_instances))->get_line(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(3, str_key_right_73, ((ListObject*)get_instance(list_80_instances))->get_line(3));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(4, str_key_ac1_74, ((ListObject*)get_instance(list_80_instances))->get_line(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(5, str_key_ac2_76, ((ListObject*)get_instance(list_80_instances))->get_line(5));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(6, str_key_combat_78, ((ListObject*)get_instance(list_80_instances))->get_line(6));
    }
    event_88_9_end: ;
}
void Frames::event_func_5148()
{
    // event 89_9
    {
        if (!(group_remap_keys_1)) goto event_89_9_end;
        qualifier_29.clear_selection();
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_29.has_selection()) goto event_89_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_89_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(116, str_currkey_2390)) == (-1))) goto event_89_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(116, str_currkey_2390, ((Active*)get_single(qualifier_29, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((ListObject*)get_instance(list_80_instances))->set_line(((AssociateArray*)get_instance(gameVariables_instances))->get_value(116, str_currkey_2390), str__2363);
        ((Active*)get_instance(keysdone_581_instances))->blend_color.set_alpha_coefficient(160);
    }
    event_89_9_end: ;
}
void Frames::event_func_5149()
{
    // event 90_9
    {
        if (!(group_remap_keys_1)) goto event_90_9_end;
        if (!(((Active*)get_instance(keysdone_581_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_90_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_90_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(116, str_currkey_2390)) == (-1))) goto event_90_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((Active*)get_instance(mouse_9_instances))->set_layer(1-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(2-1);
        ((INI*)get_instance(gameSettings_instances))->set_string(str_keys_80, str_up_38, ((ListObject*)get_instance(list_80_instances))->get_line(0));
        ((INI*)get_instance(gameSettings_instances))->set_string(str_keys_80, str_down_81, ((ListObject*)get_instance(list_80_instances))->get_line(1));
        ((INI*)get_instance(gameSettings_instances))->set_string(str_keys_80, str_left_82, ((ListObject*)get_instance(list_80_instances))->get_line(2));
        ((INI*)get_instance(gameSettings_instances))->set_string(str_keys_80, str_right_83, ((ListObject*)get_instance(list_80_instances))->get_line(3));
        ((INI*)get_instance(gameSettings_instances))->set_string(str_keys_80, str_ac1_84, ((ListObject*)get_instance(list_80_instances))->get_line(4));
        ((INI*)get_instance(gameSettings_instances))->set_string(str_keys_80, str_ac2_85, ((ListObject*)get_instance(list_80_instances))->get_line(5));
        ((INI*)get_instance(gameSettings_instances))->set_string(str_keys_80, str_combat_86, ((ListObject*)get_instance(list_80_instances))->get_line(6));
        manager.up = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(0));
        manager.down = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(1));
        manager.left = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(2));
        manager.right = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(3));
        manager.button1 = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(4));
        manager.button2 = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(5));
        manager.button3 = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(6));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(0, str_key_up_67, ((ListObject*)get_instance(list_80_instances))->get_line(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(1, str_key_down_69, ((ListObject*)get_instance(list_80_instances))->get_line(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_key_left_71, ((ListObject*)get_instance(list_80_instances))->get_line(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(3, str_key_right_73, ((ListObject*)get_instance(list_80_instances))->get_line(3));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(4, str_key_ac1_74, ((ListObject*)get_instance(list_80_instances))->get_line(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(5, str_key_ac2_76, ((ListObject*)get_instance(list_80_instances))->get_line(5));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(6, str_key_combat_78, ((ListObject*)get_instance(list_80_instances))->get_line(6));
        media.play_id(SOUND_OPEN_5, 1-1);
        if (!group_base_layer_1) {
            group_base_layer_1 = true;
        }
            group_remap_keys_1 = false;
    
    }
    event_90_9_end: ;
}
void Frames::event_func_5150()
{
    // event 91_9
    {
        if (!(group_remap_keys_1)) goto event_91_9_end;
        if (!(((Active*)get_instance(reset_594_instances))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_91_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(41, str_lclick_203)) == (0))) goto event_91_9_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(116, str_currkey_2390)) == (-1))) goto event_91_9_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(41, str_lclick_203, 1);
        ((ListObject*)get_instance(list_80_instances))->clear();
        ((ListObject*)get_instance(list_80_instances))->add_line(str_w_68);
        ((ListObject*)get_instance(list_80_instances))->add_line(str_s_70);
        ((ListObject*)get_instance(list_80_instances))->add_line(str_a_72);
        ((ListObject*)get_instance(list_80_instances))->add_line(str_d_51);
        ((ListObject*)get_instance(list_80_instances))->add_line(str_q_75);
        ((ListObject*)get_instance(list_80_instances))->add_line(str_e_77);
        ((ListObject*)get_instance(list_80_instances))->add_line(str_space_79);
        manager.up = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(0));
        manager.down = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(1));
        manager.left = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(2));
        manager.right = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(3));
        manager.button1 = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(4));
        manager.button2 = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(5));
        manager.button3 = translate_string_to_key(((ListObject*)get_instance(list_80_instances))->get_line(6));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(0, str_key_up_67, ((ListObject*)get_instance(list_80_instances))->get_line(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(1, str_key_down_69, ((ListObject*)get_instance(list_80_instances))->get_line(1));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(2, str_key_left_71, ((ListObject*)get_instance(list_80_instances))->get_line(2));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(3, str_key_right_73, ((ListObject*)get_instance(list_80_instances))->get_line(3));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(4, str_key_ac1_74, ((ListObject*)get_instance(list_80_instances))->get_line(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(5, str_key_ac2_76, ((ListObject*)get_instance(list_80_instances))->get_line(5));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(6, str_key_combat_78, ((ListObject*)get_instance(list_80_instances))->get_line(6));
    }
    event_91_9_end: ;
}
void Frames::event_func_5151()
{
    // event 100_9
    {
        ((Text*)get_instance(settingsDoneText_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_7_323)));
        ((Text*)get_instance(settingsRemapText_instances))->set_string(lowercase_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_6_241)));
        ((Text*)get_instance(mainheader_597_instances))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_title_217, str_3_158)));
        ((Text*)get_instance(names7_596_instances))->set_string(translate_key_to_string(get_last_key_pressed()));
    }
    event_100_9_end: ;
}
void Frames::event_func_5152()
{
    // event 101_9
    {
        if (!((global_strings->get(6)) != (str_fre_3))) goto event_101_9_end;
        ((Text*)get_instance(remaplist_583_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_8_325)+str__2391+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_9_327)+str__2391+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_10_329)+str__2391+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_11_331)+str__2391+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_12_334)+str__2391+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_13_632)+str__2391+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_14_197)+str__247);
        ((Text*)get_instance(music_568_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_1_97)+str__247);
        ((Text*)get_instance(sounds_603_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_2_155)+str__1589);
        ((Text*)get_instance(settingsSpeechLabel_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_18_332)+str__1589);
    }
    event_101_9_end: ;
}
void Frames::event_func_5153()
{
    // event 102_9
    {
        if (!((global_strings->get(6)) == (str_fre_3))) goto event_102_9_end;
        ((Text*)get_instance(remaplist_583_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_8_325)+str__2392+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_9_327)+str__2392+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_10_329)+str__2392+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_11_331)+str__2392+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_12_334)+str__2392+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_13_632)+str__2392+((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_14_197)+str__2393);
        ((Text*)get_instance(music_568_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_1_97)+str__2393);
        ((Text*)get_instance(sounds_603_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_2_155)+str__2394);
        ((Text*)get_instance(settingsSpeechLabel_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_settings_52, str_18_332)+str__2394);
    }
    event_102_9_end: ;
}
void Frames::event_func_5157()
{
    // event 115_9
    {
        if (!((global_strings->get(6)) == (str_rus_7))) goto event_115_9_end;
        ((Text*)get_instance(mainheader_597_instances))->set_bold(0);
        ((Text*)get_instance(remapheader_571_instances))->set_bold(0);
    }
    event_115_9_end: ;
}
void Frames::event_func_5158()
{
    // event 116_9
    {
        if (!((global_strings->get(6)) != (str_rus_7))) goto event_116_9_end;
        ((Text*)get_instance(mainheader_597_instances))->set_bold(1);
        ((Text*)get_instance(remapheader_571_instances))->set_bold(1);
    }
    event_116_9_end: ;
}
void Frames::handle_frame_10_events()
{
    test_collisions_9();
    event_func_5112();
    event_func_5123();
    if (next_frame != -1) return;
    event_func_5110();
    event_func_5111();
    event_func_17();
    event_func_5113();
    event_func_5114();
    event_func_5115();
    event_func_5035();
    event_func_5116();
    event_func_5117();
    event_func_5118();
    event_func_199();
    event_func_5120();
    if (!group_base_layer_1) goto group_base_layer_1_end;
    event_func_5127();
    event_func_5128();
    event_func_5129();
    event_func_5130();
    event_func_5131();
    event_func_5132();
    event_func_5133();
    event_func_5134();
    event_func_5135();
    event_func_5136();
    event_func_5139();
    event_func_5140();
    group_base_layer_1_end: ;
    if (!group_remap_keys_1) goto group_remap_keys_1_end;
    event_func_5142();
    event_func_5143();
    event_func_5144();
    event_func_5147();
    group_remap_keys_1_end: ;
    event_func_5151();
    event_func_5152();
    event_func_5153();
    event_func_5157();
    event_func_5158();
    vita_settings_update(*this);
}
void Frames::handle_frame_10_pre_events()
{
    event_func_5141();
    event_func_5145();
    event_func_5146();
    event_func_5119();
    event_func_5121();
    event_func_5122();
    event_func_5137();
    event_func_5138();
    event_func_5148();
    event_func_5149();
    event_func_5150();
    vita_settings_handle_input(*this);
}
void Frames::event_func_5159()
{
    // event 1_9
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(113, str_setup_page_2387, 0);
        ((Text*)get_instance(music_568_instances))->set_visible(false);
        ((Text*)get_instance(settingsFrameRateValue_instances))->set_string(empty_string);
    }
    event_1_9_end: ;
}
void Frames::event_func_5160()
{
    // event 2_9
    {
        
    }
    event_2_9_end: ;
}
void Frames::event_func_5161()
{
    // event 3_9
    {
    }
    event_3_9_end: ;
}
void Frames::on_frame_10_start_events()
{
    event_func_5159();
    event_func_5160();
    event_func_5161();
}
void Frames::on_frame_10_init()
{
    vita_settings_reset();
    index = 9;
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
    layers[1].init(1, 1.0, 1.0, false, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_29_instances[] = {&edit0_586_instances, &edit1_588_instances, &edit2_589_instances, &edit3_590_instances, &edit4_591_instances, &edit5_592_instances, &edit6_593_instances, NULL};
    qualifier_29.set(7, &qualifier_29_instances[0]);
    add_background_object(create_backdrop6_99(0, 0), 0);
    add_background_object(create_backdrop5_567(60, 44), 0);
    add_background_object(create_settingsChoiceBackground(143, 125), 0);
    add_background_object(create_settingsChoiceBackground(143, 107), 0);
    add_object(create_settingsSpeechField(198, 123), 0);
    add_object(create_music_568(74, 77), 0);
    add_object(create_sounds_603(74, 93), 0);
    add_object(create_settingsFrameRateLabel(45, 126), 0);
    add_object(create_settingsLanguageLabel(45, 108), 0);
    add_object(create_settingsSpeechLabel(48, 123), 0);
    add_object(create_gameVariables(16, -32), 0);
    add_object(create_mouse_9(368, 32), 0);
    add_object(create_settingsDoneButton(115, 166), 0);
    add_object(create_settingsRemapButton(115, 146), 0);
    add_object(create_settingsDoneText(118, 171), 0);
    add_object(create_settingsSpeechHint(43, 224), 0);
    add_object(create_settingsRemapText(118, 151), 0);
    add_object(create_settingsLanguageValue(152, 107), 0);
    add_object(create_settingsSpeechValue(152, 123), 0);
    add_object(create_settingsFrameRateValue(139, 125), 0);
    add_object(create_slidermusic_572(-62, 39), 0);
    add_object(create_slidersounds_610(-76, 56), 0);
    add_object(create_active_573(402, 6), 0);
    add_object(create_active_573(418, 6), 0);
    add_object(create_gameSettings(80, -64), 0);
    add_object(create_soundVolumeBar(193, 98), 0);
    add_object(create_musicVolumeBar(193, 83), 0);
    add_object(create_mainheader_597(85, 53), 0);
    add_object(create_settingsLanguagePrevious(148, 113), 0);
    add_object(create_settingsFrameRatePrevious(148, 131), 0);
    add_object(create_settingsLanguageNext(236, 113), 0);
    add_object(create_settingsFrameRateNext(236, 131), 0);
    add_object(create_stringtokenizer_81(-16, -32), 0);
    add_object(create_windowcontrol_0(48, -64), 0);
    add_object(create_language_600(336, 48), 0);
    add_object(create_editbox_92(0, 240), 0);
    add_object(create_translationData(80, -32), 0);
    add_background_object(create_quickbackdrop_580(0, 0), 1);
    add_background_object(create_backdrop_579(69, 48), 1);
    add_background_object(create_backdrop2_587(142, 80), 1);
    add_object(create_remapheader_571(65, 60), 1);
    add_object(create_layerobject_37(80, -48), 1);
    add_object(create_keysdone_581(162, 163), 1);
    add_object(create_reset_594(118, 163), 1);
    add_object(create_remapsav_582(171, 165), 1);
    add_object(create_remapreset_595(87, 165), 1);
    add_object(create_names7_596(80, 240), 1);
    add_object(create_remaplist_583(80, 77), 1);
    add_object(create_keyvalues_584(144, 77), 1);
    add_object(create_edit0_586(209, 78), 1);
    add_object(create_edit1_588(209, 89), 1);
    add_object(create_edit2_589(209, 100), 1);
    add_object(create_edit3_590(209, 111), 1);
    add_object(create_edit4_591(209, 122), 1);
    add_object(create_edit5_592(209, 133), 1);
    add_object(create_edit6_593(209, 144), 1);
    add_object(create_list_585(448, 80), 1);
    loop_upd_lang_running = false;
    loop_upd_lang_index = 0;
    loop_check_speechfile_string_running = false;
    loop_check_speechfile_string_index = 0;
    loop_check_keypress_running = false;
    loop_check_keypress_index = 0;
    loop_lang_setup_running = false;
    loop_lang_setup_index = 0;
    loop_setup_page_running = false;
    loop_setup_page_index = 0;
    loop_load_keys_running = false;
    loop_load_keys_index = 0;
    loops = NULL;
    not_always_5_9 = loop_count;
    not_always_103_9 = loop_count;
    not_always_4_9 = loop_count;
    group_remap_keys_1 = false;
    group_check_group_remap_keys_1_0 = true;
    not_always_26_9 = loop_count;
    not_always_25_9 = loop_count;
    every_47_9 = 0.0f;
    group_base_layer_1 = true;
}
void Frames::event_func_5162()
{
    // event 21_10
    {
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_guardname_638+number_to_string(loop_empty_names_index+1), empty_string);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inmatename_667+number_to_string(loop_empty_names_index+1), empty_string);
    }
    event_21_10_end: ;
}
void Frames::loop_empty_names_10()
{
    event_func_5162();
}
void Frames::event_func_5163()
{
    // event 24_10
    {
        if (!(group_npc_loop_1)) goto event_24_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_totalcount_2395)) > (30))) goto event_24_10_end;
        placer_632_instances.clear_selection();
        for (ObjectIterator it(placer_632_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((width/MathHelper()/2)-68);
            ((Active*)*it)->set_y((height/MathHelper()/2)-44);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(118, str_start_2396, ((Active*)get_single(placer_632_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_spacing_x_2397, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(120, str_spacing_y_2398, 2);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_max_2399, 10);
    }
    event_24_10_end: ;
}
void Frames::event_func_5164()
{
    // event 25_10
    {
        if (!(group_npc_loop_1)) goto event_25_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_totalcount_2395)) <= (30))) goto event_25_10_end;
        placer_632_instances.clear_selection();
        for (ObjectIterator it(placer_632_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((width/MathHelper()/2)-66);
            ((Active*)*it)->set_y((height/MathHelper()/2)-44);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(118, str_start_2396, ((Active*)get_single(placer_632_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_spacing_x_2397, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(120, str_spacing_y_2398, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_max_2399, 9);
    }
    event_25_10_end: ;
}
void Frames::event_func_5165()
{
    // event 26_10
    {
        if (!(group_npc_loop_1)) goto event_26_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_totalcount_2395)) <= (25))) goto event_26_10_end;
        placer_632_instances.clear_selection();
        for (ObjectIterator it(placer_632_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((width/MathHelper()/2)-60);
            ((Active*)*it)->set_y((height/MathHelper()/2)-42);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(118, str_start_2396, ((Active*)get_single(placer_632_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_spacing_x_2397, 4);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(120, str_spacing_y_2398, 3);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_max_2399, 8);
    }
    event_26_10_end: ;
}
void Frames::event_func_5166()
{
    // event 27_10
    {
        if (!(group_npc_loop_1)) goto event_27_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_totalcount_2395)) <= (20))) goto event_27_10_end;
        placer_632_instances.clear_selection();
        for (ObjectIterator it(placer_632_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((width/MathHelper()/2)-63);
            ((Active*)*it)->set_y((height/MathHelper()/2)-37);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(118, str_start_2396, ((Active*)get_single(placer_632_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_spacing_x_2397, 5);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(120, str_spacing_y_2398, 6);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_max_2399, 8);
    }
    event_27_10_end: ;
}
void Frames::event_func_5167()
{
    // event 28_10
    {
        if (!(group_npc_loop_1)) goto event_28_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_totalcount_2395)) <= (15))) goto event_28_10_end;
        placer_632_instances.clear_selection();
        for (ObjectIterator it(placer_632_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((width/MathHelper()/2)-50);
            ((Active*)*it)->set_y((height/MathHelper()/2)-38);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(118, str_start_2396, ((Active*)get_single(placer_632_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_spacing_x_2397, 9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(120, str_spacing_y_2398, 7);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_max_2399, 6);
    }
    event_28_10_end: ;
}
void Frames::event_func_5168()
{
    // event 29_10
    {
        if (!(group_npc_loop_1)) goto event_29_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(117, str_totalcount_2395)) <= (10))) goto event_29_10_end;
        placer_632_instances.clear_selection();
        for (ObjectIterator it(placer_632_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((width/MathHelper()/2)-50);
            ((Active*)*it)->set_y((height/MathHelper()/2)-28);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(118, str_start_2396, ((Active*)get_single(placer_632_instances, default_active_instance))->get_x());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(119, str_spacing_x_2397, 9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(120, str_spacing_y_2398, 7);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(121, str_max_2399, 6);
    }
    event_29_10_end: ;
}
void Frames::loop_lineup_10()
{
    event_func_5163();
    event_func_5164();
    event_func_5165();
    event_func_5166();
    event_func_5167();
    event_func_5168();
}
void Frames::event_func_5169()
{
    // event 118_10
    {
        qualifier_3.clear_selection();
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_compare_index+1))) { it.deselect(); continue; }
        }
        if (!qualifier_3.has_selection()) goto event_118_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(122, str_currname_2400, ((Active*)get_single(qualifier_3, default_active_instance))->alterables->strings.get(0));
    }
    event_118_10_end: ;
}
void Frames::event_func_5170()
{
    // event 119_10
    {
        if (!((uppercase_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(122, str_currname_2400))) == (uppercase_string(((EditObject*)get_instance(editbox_92_instances))->get_text())))) goto event_119_10_end;
        ((Text*)get_instance(string5_642_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_31_2187));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
    }
    event_119_10_end: ;
}
void Frames::loop_compare_10()
{
    event_func_5169();
    event_func_5170();
}
void Frames::event_func_5171()
{
    // event 122_10
    {
        active3_63_instances.clear_selection();
        qualifier_12.clear_selection();
        if (!check_overlap(active3_63_instances, qualifier_12)) goto event_122_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inmatename_667+number_to_string(((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(0)), uppercase_string(left_string(((EditObject*)get_instance(editbox_92_instances))->get_text(), 1))+lowercase_string(right_string(((EditObject*)get_instance(editbox_92_instances))->get_text(), (string_size(((EditObject*)get_instance(editbox_92_instances))->get_text())-1))));
    }
    event_122_10_end: ;
}
void Frames::event_func_5172()
{
    // event 123_10
    {
        active3_63_instances.clear_selection();
        qualifier_13.clear_selection();
        if (!check_overlap(active3_63_instances, qualifier_13)) goto event_123_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_guardname_638+number_to_string(((Active*)get_single(qualifier_13, default_active_instance))->alterables->values.get(0)), uppercase_string(left_string(((EditObject*)get_instance(editbox_92_instances))->get_text(), 1))+lowercase_string(right_string(((EditObject*)get_instance(editbox_92_instances))->get_text(), (string_size(((EditObject*)get_instance(editbox_92_instances))->get_text())-1))));
    }
    event_123_10_end: ;
}
void Frames::loop_set_it_10()
{
    event_func_5171();
    event_func_5172();
}
void Frames::event_func_5173()
{
    // event 116_10
    {
        if (!((string_size(((EditObject*)get_instance(editbox_92_instances))->get_text())) < (3))) goto event_116_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(45, str_error_233, 1);
        ((Text*)get_instance(string5_642_instances))->set_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_32_236));
    }
    event_116_10_end: ;
}
void Frames::event_func_5174()
{
    // event 117_10
    {
        {
            loop_compare_running = true;
            int times = int(qualifier_3.size());
            loop_compare_index = 0;
            while (loop_compare_index < times) {
                loop_compare_10();
                if (!loop_compare_running) break;
                loop_compare_index++;
            }
        }
    }
    event_117_10_end: ;
}
void Frames::event_func_5175()
{
    // event 120_10
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (1))) goto event_120_10_end;
        media.play_id(SOUND_LOSE_8, 1-1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(123, str_showerror_2401, 75);
    }
    event_120_10_end: ;
}
void Frames::event_func_5176()
{
    // event 121_10
    {
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(45, str_error_233)) == (0))) goto event_121_10_end;
        active3_63_instances.clear_selection();
        qualifier_3.clear_selection();
        if (!check_overlap(active3_63_instances, qualifier_3)) goto event_121_10_end;
        for (QualifierIterator it(qualifier_3); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, uppercase_string(left_string(((EditObject*)get_instance(editbox_92_instances))->get_text(), 1))+lowercase_string(right_string(((EditObject*)get_instance(editbox_92_instances))->get_text(), (string_size(((EditObject*)get_instance(editbox_92_instances))->get_text())-1))));
        }
        ((Active*)get_instance(active3_63_instances))->force_animation(0);
        ((EditObject*)get_instance(editbox_92_instances))->disable_focus();
        ((Text*)get_instance(name_93_instances))->blend_color.set(Color(225, 225, 225));
        {
            loop_set_it_running = true;
            int times = int(1);
            loop_set_it_index = 0;
            while (loop_set_it_index < times) {
                loop_set_it_10();
                if (!loop_set_it_running) break;
                loop_set_it_index++;
            }
        }
    }
    event_121_10_end: ;
}
void Frames::loop_check_name_10()
{
    event_func_5173();
    event_func_5174();
    event_func_5175();
    event_func_5176();
}
void Frames::event_func_5177()
{
    // event 105_10
    {
        if (!(group_npc_loop_1)) goto event_105_10_end;
        ((ListObject*)get_instance(names_633_instances))->current_line = randrange_event(1+((ListObject*)get_instance(names_633_instances))->get_count());
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(124, str_pulled_name_2402, ((ListObject*)get_instance(names_633_instances))->get_current_line());
    }
    event_105_10_end: ;
}
void Frames::event_func_5178()
{
    // event 106_10
    {
        if (!(group_npc_loop_1)) goto event_106_10_end;
        if (!((string_find(((AssociateArray*)get_instance(gameVariables_instances))->get_string(125, str_usednames_2403), ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402)+str__96, 0)) == (-1))) goto event_106_10_end;
        if (!((uppercase_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402))) != (uppercase_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(47, str_name_103))))) goto event_106_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402)) != (empty_string))) goto event_106_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(125, str_usednames_2403, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(125, str_usednames_2403)+((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402)+str__96);
            loop_pull_name_running = false;
    
    }
    event_106_10_end: ;
}
void Frames::loop_pull_name_10()
{
    event_func_5177();
    event_func_5178();
}
void Frames::event_func_5179()
{
    // event 94_10
    {
        if (!(group_npc_loop_1)) goto event_94_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_guardname_638+number_to_string(loop_cop_loop_index+1))) == (empty_string))) goto event_94_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
    }
    event_94_10_end: ;
}
void Frames::event_func_5180()
{
    // event 95_10
    {
        if (!(group_npc_loop_1)) goto event_95_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_guardname_638+number_to_string(loop_cop_loop_index+1))) == (empty_string))) goto event_95_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_guardname_638+number_to_string(loop_cop_loop_index+1), ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_95_10_end: ;
}
void Frames::event_func_5181()
{
    // event 96_10
    {
        if (!(group_npc_loop_1)) goto event_96_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (0))) goto event_96_10_end;
        FrameObject * single_instance_96_10_0; single_instance_96_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_guard_631(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_96_10_0 == NULL)
                    single_instance_96_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_96_10_0))->alterables->values.set(0, loop_cop_loop_index+1);
        ((Active*)((Active*)single_instance_96_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_guardname_638+number_to_string(loop_cop_loop_index+1)));
        ((Active*)((Active*)single_instance_96_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_96_10_end: ;
}
void Frames::event_func_5182()
{
    // event 97_10
    {
        if (!(group_npc_loop_1)) goto event_97_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_97_10_end;
        FrameObject * single_instance_97_10_0; single_instance_97_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_guard2_670(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_97_10_0 == NULL)
                    single_instance_97_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_97_10_0))->alterables->values.set(0, loop_cop_loop_index+1);
        ((Active*)((Active*)single_instance_97_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_guardname_638+number_to_string(loop_cop_loop_index+1)));
        ((Active*)((Active*)single_instance_97_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_97_10_end: ;
}
void Frames::event_func_5183()
{
    // event 98_10
    {
        if (!(group_npc_loop_1)) goto event_98_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (0))) goto event_98_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (0))) goto event_98_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (0))) goto event_98_10_end;
        FrameObject * single_instance_98_10_0; single_instance_98_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitguard_638(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_98_10_0 == NULL)
                    single_instance_98_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_98_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_98_10_end: ;
}
void Frames::event_func_5184()
{
    // event 99_10
    {
        if (!(group_npc_loop_1)) goto event_99_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (1))) goto event_99_10_end;
        FrameObject * single_instance_99_10_0; single_instance_99_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitguard2_648(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_99_10_0 == NULL)
                    single_instance_99_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_99_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_99_10_end: ;
}
void Frames::event_func_5185()
{
    // event 100_10
    {
        if (!(group_npc_loop_1)) goto event_100_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_100_10_end;
        FrameObject * single_instance_100_10_0; single_instance_100_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitguard3_650(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_100_10_0 == NULL)
                    single_instance_100_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_100_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_100_10_end: ;
}
void Frames::event_func_5186()
{
    // event 101_10
    {
        if (!(group_npc_loop_1)) goto event_101_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_101_10_end;
        FrameObject * single_instance_101_10_0; single_instance_101_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_outfitinmatess2_669(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_101_10_0 == NULL)
                    single_instance_101_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_101_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_101_10_end: ;
}
void Frames::event_func_5187()
{
    // event 102_10
    {
        if (!(group_npc_loop_1)) goto event_102_10_end;
        placer_632_instances.clear_selection();
        for (ObjectIterator it(placer_632_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+(16+((AssociateArray*)get_instance(gameVariables_instances))->get_value(119, str_spacing_x_2397)));
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_102_10_end: ;
}
void Frames::event_func_5188()
{
    // event 103_10
    {
        if (!(group_npc_loop_1)) goto event_103_10_end;
        placer_632_instances.clear_selection();
        for (ObjectIterator it(placer_632_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((AssociateArray*)get_instance(gameVariables_instances))->get_value(121, str_max_2399)))) { it.deselect(); continue; }
        }
        if (!placer_632_instances.has_selection()) goto event_103_10_end;
        for (ObjectIterator it(placer_632_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((AssociateArray*)get_instance(gameVariables_instances))->get_value(118, str_start_2396));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(16+((AssociateArray*)get_instance(gameVariables_instances))->get_value(120, str_spacing_y_2398)));
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_103_10_end: ;
}
void Frames::loop_cop_loop_10()
{
    event_func_5179();
    event_func_5180();
    event_func_5181();
    event_func_5182();
    event_func_5183();
    event_func_5184();
    event_func_5185();
    event_func_5186();
    event_func_5187();
    event_func_5188();
}
void Frames::event_func_5189()
{
    // event 33_10
    {
        if (!(group_npc_loop_1)) goto event_33_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_33_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(126, str_inmatename_1_2404)) == (empty_string))) goto event_33_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(127, str_inmateavatar_1_2405, 21);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(126, str_inmatename_1_2404, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_33_10_end: ;
}
void Frames::event_func_5190()
{
    // event 34_10
    {
        if (!(group_npc_loop_1)) goto event_34_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_34_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(128, str_inmatename_2_2406)) == (empty_string))) goto event_34_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_inmateavatar_2_2407, 22);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(128, str_inmatename_2_2406, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_34_10_end: ;
}
void Frames::event_func_5191()
{
    // event 35_10
    {
        if (!(group_npc_loop_1)) goto event_35_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_35_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(130, str_inmatename_3_2408)) == (empty_string))) goto event_35_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(131, str_inmateavatar_3_2409, 23);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(130, str_inmatename_3_2408, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_35_10_end: ;
}
void Frames::event_func_5192()
{
    // event 36_10
    {
        if (!(group_npc_loop_1)) goto event_36_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_36_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(132, str_inmatename_4_2410)) == (empty_string))) goto event_36_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(133, str_inmateavatar_4_2411, 24);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(132, str_inmatename_4_2410, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_36_10_end: ;
}
void Frames::event_func_5193()
{
    // event 37_10
    {
        if (!(group_npc_loop_1)) goto event_37_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_37_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(134, str_inmatename_5_2412)) == (empty_string))) goto event_37_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(135, str_inmateavatar_5_2413, 25);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(134, str_inmatename_5_2412, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_37_10_end: ;
}
void Frames::event_func_5194()
{
    // event 38_10
    {
        if (!(group_npc_loop_1)) goto event_38_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_38_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(136, str_inmatename_6_2414)) == (empty_string))) goto event_38_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(137, str_inmateavatar_6_2415, 26);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(136, str_inmatename_6_2414, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_38_10_end: ;
}
void Frames::event_func_5195()
{
    // event 39_10
    {
        if (!(group_npc_loop_1)) goto event_39_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_39_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(138, str_inmatename_7_2416)) == (empty_string))) goto event_39_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(139, str_inmateavatar_7_2417, 27);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(138, str_inmatename_7_2416, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_39_10_end: ;
}
void Frames::event_func_5196()
{
    // event 40_10
    {
        if (!(group_npc_loop_1)) goto event_40_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_40_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(140, str_inmatename_8_2418)) == (empty_string))) goto event_40_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(141, str_inmateavatar_8_2419, 28);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(140, str_inmatename_8_2418, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_40_10_end: ;
}
void Frames::event_func_5197()
{
    // event 41_10
    {
        if (!(group_npc_loop_1)) goto event_41_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (1))) goto event_41_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_inmatename_9_2420)) == (empty_string))) goto event_41_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(143, str_inmateavatar_9_2421, 29);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_inmatename_9_2420, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_41_10_end: ;
}
void Frames::event_func_5198()
{
    // event 42_10
    {
        if (!(group_npc_loop_1)) goto event_42_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_42_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(126, str_inmatename_1_2404)) == (empty_string))) goto event_42_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(127, str_inmateavatar_1_2405, 12);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(126, str_inmatename_1_2404, str_elbrah_2422);
    }
    event_42_10_end: ;
}
void Frames::event_func_5199()
{
    // event 43_10
    {
        if (!(group_npc_loop_1)) goto event_43_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_43_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(128, str_inmatename_2_2406)) == (empty_string))) goto event_43_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_inmateavatar_2_2407, 13);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(128, str_inmatename_2_2406, str_chen_2423);
    }
    event_43_10_end: ;
}
void Frames::event_func_5200()
{
    // event 44_10
    {
        if (!(group_npc_loop_1)) goto event_44_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_44_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(130, str_inmatename_3_2408)) == (empty_string))) goto event_44_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(131, str_inmateavatar_3_2409, 14);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(130, str_inmatename_3_2408, str_piers_2424);
    }
    event_44_10_end: ;
}
void Frames::event_func_5201()
{
    // event 45_10
    {
        if (!(group_npc_loop_1)) goto event_45_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_45_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(132, str_inmatename_4_2410)) == (empty_string))) goto event_45_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(133, str_inmateavatar_4_2411, 15);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(132, str_inmatename_4_2410, str_mourn_2425);
    }
    event_45_10_end: ;
}
void Frames::event_func_5202()
{
    // event 46_10
    {
        if (!(group_npc_loop_1)) goto event_46_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_46_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(134, str_inmatename_5_2412)) == (empty_string))) goto event_46_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(135, str_inmateavatar_5_2413, 16);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(134, str_inmatename_5_2412, str_lazeeboi_2426);
    }
    event_46_10_end: ;
}
void Frames::event_func_5203()
{
    // event 47_10
    {
        if (!(group_npc_loop_1)) goto event_47_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_47_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(136, str_inmatename_6_2414)) == (empty_string))) goto event_47_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(137, str_inmateavatar_6_2415, 17);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(136, str_inmatename_6_2414, str_blonde_2427);
    }
    event_47_10_end: ;
}
void Frames::event_func_5204()
{
    // event 48_10
    {
        if (!(group_npc_loop_1)) goto event_48_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_48_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(138, str_inmatename_7_2416)) == (empty_string))) goto event_48_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(139, str_inmateavatar_7_2417, 18);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(138, str_inmatename_7_2416, str_walton_2428);
    }
    event_48_10_end: ;
}
void Frames::event_func_5205()
{
    // event 49_10
    {
        if (!(group_npc_loop_1)) goto event_49_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_49_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(140, str_inmatename_8_2418)) == (empty_string))) goto event_49_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(141, str_inmateavatar_8_2419, 19);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(140, str_inmatename_8_2418, str_prowler_2429);
    }
    event_49_10_end: ;
}
void Frames::event_func_5206()
{
    // event 50_10
    {
        if (!(group_npc_loop_1)) goto event_50_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (1))) goto event_50_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(142, str_inmatename_9_2420)) == (empty_string))) goto event_50_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(143, str_inmateavatar_9_2421, 20);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(142, str_inmatename_9_2420, str_crane_2430);
    }
    event_50_10_end: ;
}
void Frames::event_func_5207()
{
    // event 51_10
    {
        if (!(group_npc_loop_1)) goto event_51_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (1))) goto event_51_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(126, str_inmatename_1_2404)) == (empty_string))) goto event_51_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(127, str_inmateavatar_1_2405, 9);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(126, str_inmatename_1_2404, str_cage_521);
    }
    event_51_10_end: ;
}
void Frames::event_func_5208()
{
    // event 52_10
    {
        if (!(group_npc_loop_1)) goto event_52_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (1))) goto event_52_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(128, str_inmatename_2_2406)) == (empty_string))) goto event_52_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_inmateavatar_2_2407, 10);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(128, str_inmatename_2_2406, str_sean_522);
    }
    event_52_10_end: ;
}
void Frames::event_func_5209()
{
    // event 53_10
    {
        if (!(group_npc_loop_1)) goto event_53_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (1))) goto event_53_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(130, str_inmatename_3_2408)) == (empty_string))) goto event_53_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(131, str_inmateavatar_3_2409, 11);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(130, str_inmatename_3_2408, str_andy_523);
    }
    event_53_10_end: ;
}
void Frames::event_func_5210()
{
    // event 54_10
    {
        if (!(group_npc_loop_1)) goto event_54_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (0))) goto event_54_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (0))) goto event_54_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (0))) goto event_54_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1))) == (empty_string))) goto event_54_10_end;
        {
            loop_pull_name_running = true;
            loop_pull_name_index = 0;
            while (true) {
                loop_pull_name_10();
                if (!loop_pull_name_running) break;
                loop_pull_name_index++;
            }
        }
    }
    event_54_10_end: ;
}
void Frames::event_func_5211()
{
    // event 55_10
    {
        if (!(group_npc_loop_1)) goto event_55_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(49, str_eteam_238)) == (0))) goto event_55_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(50, str_dtaf_137)) == (0))) goto event_55_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(51, str_sss_239)) == (0))) goto event_55_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1))) == (empty_string))) goto event_55_10_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1), randrange_event(9));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1), ((AssociateArray*)get_instance(gameVariables_instances))->get_string(124, str_pulled_name_2402));
    }
    event_55_10_end: ;
}
void Frames::event_func_5212()
{
    // event 56_10
    {
        if (!(group_npc_loop_1)) goto event_56_10_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(str_inmateavatar_666+number_to_string(loop_inmate_loop_index+1))) == (0))) goto event_56_10_end;
        FrameObject * single_instance_56_10_0; single_instance_56_10_0 = NULL;
        // select single: true false false
        placer_632_instances.clear_selection();
        for (ObjectIterator p_it(placer_632_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_inmate4_625(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_56_10_0 == NULL)
                    single_instance_56_10_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_56_10_0))->alterables->strings.set(0, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(str_inmatename_667+number_to_string(loop_inmate_loop_index+1)));
        ((Active*)((Active*)single_instance_56_10_0))->alterables->values.set(0, loop_inmate_loop_index+1);
        ((Active*)((Active*)single_instance_56_10_0))->alterables->values.set(25, qualifier_3.size());
    }
    event_56_10_end: ;
}
