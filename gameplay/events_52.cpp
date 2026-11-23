#include "vitaframetime.h"
#include "vitaview.h"
#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

// Function purpose: generated callback event_func_4264 processes event block(s) 2700_6. Actions/conditions:
//        2700_6: checks scene is active; the event-specific game state condition is met; skips if the event-specific
//        game state condition is met; dialog is open; this handler.
void Frames::event_func_4264()
{
    // event 2700_6 : checks scene is active; the event-specific game state condition is met; skips if the event-specific game state condition is met; dialog is open; this handler
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2700_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2700_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_2700_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(25))) goto event_2700_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2700_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2700_6_end;
        {
            loop_cl_journal_running = true;
            int times = int(1);
            loop_cl_journal_index = 0;
            while (loop_cl_journal_index < times) {
                loop_cl_journal_6();
                if (!loop_cl_journal_running) break;
                loop_cl_journal_index++;
            }
        }
    }
    event_2700_6_end: ;
}
// Function purpose: generated callback event_func_4265 processes event block(s) 2701_6. Actions/conditions:
//        2701_6: checks scene is active; the required game action is held; dialog is open; the event-specific game
//        state condition is met; this handler gates a game event wit.
void Frames::event_func_4265()
{
    // event 2701_6 : checks scene is active; the required game action is held; dialog is open; the event-specific game state condition is met; this handler gates a game event wit
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2701_6_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_2701_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2701_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(25))) goto event_2701_6_end;
        {
            loop_cl_journal_running = true;
            int times = int(1);
            loop_cl_journal_index = 0;
            while (loop_cl_journal_index < times) {
                loop_cl_journal_6();
                if (!loop_cl_journal_running) break;
                loop_cl_journal_index++;
            }
        }
    }
    event_2701_6_end: ;
}
// Function purpose: generated callback event_func_4266 processes event block(s) 2702_6. Actions/conditions:
//        2702_6: checks scene is active; the required game action is held; game state Pressed_J; dialog is open; this
//        handler gates a game event without a direct value/object.
void Frames::event_func_4266()
{
    // event 2702_6 : checks scene is active; the required game action is held; game state Pressed_J; dialog is open; this handler gates a game event without a direct value/object
    {
        if (!(group_code_1 && group_code_journal_1)) goto event_2702_6_end;
        if (!(is_key_pressed_once(SDLK_8))) goto event_2702_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(321, str_pressed_j_1102)) == (0))) goto event_2702_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2702_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(25))) goto event_2702_6_end;
        {
            loop_cl_journal_running = true;
            int times = int(1);
            loop_cl_journal_index = 0;
            while (loop_cl_journal_index < times) {
                loop_cl_journal_6();
                if (!loop_cl_journal_running) break;
                loop_cl_journal_index++;
            }
        }
    }
    event_2702_6_end: ;
}
// Function purpose: generated callback event_func_4267 processes event block(s) 2704_6. Actions/conditions:
//        2704_6: checks scene is active; skips if dialog is open; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4267()
{
    // event 2704_6 : checks scene is active; skips if dialog is open; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2704_6_end;
        if (!(group_code_1 && group_code_journal_1)) goto event_2704_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2704_6_end;
            group_code_journal_1 = false;
    
    }
    event_2704_6_end: ;
}
// Function purpose: generated callback event_func_4268 processes event block(s) 2705_6. Actions/conditions:
//        2705_6: sets Pressed_L to 0.
void Frames::event_func_4268()
{
    // event 2705_6 : sets Pressed_L to 0
    {
        if (!(group_code_1)) goto event_2705_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(912, str_pressed_l_2227)) == (1))) goto event_2705_6_end;
        if (is_key_pressed(SDLK_0)) goto event_2705_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(912, str_pressed_l_2227, 0);
    }
    event_2705_6_end: ;
}
// Function purpose: generated callback event_func_4269 processes event block(s) 2706_6. Actions/conditions:
//        2706_6: sets Pressed_L to 1; sets LClick to 1; plays a sound or music track.
void Frames::event_func_4269()
{
    // event 2706_6 : sets Pressed_L to 1; sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1)) goto event_2706_6_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_2706_6_end;
        if (!((get_mouse_y()) > (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+66))) goto event_2706_6_end;
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_2706_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto event_2706_6_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_2706_6_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(912, str_pressed_l_2227, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_2706_6_end: ;
}
// Function purpose: generated callback event_func_4270 processes event block(s) 2707_6. Actions/conditions:
//        2707_6: sets Pressed_L to 1; sets LClick to 1; plays a sound or music track.
void Frames::event_func_4270()
{
    // event 2707_6 : sets Pressed_L to 1; sets LClick to 1; plays a sound or music track
    {
        if (!(group_code_1)) goto event_2707_6_end;
        if (!(is_key_pressed_once(SDLK_0))) goto event_2707_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(912, str_pressed_l_2227)) == (0))) goto event_2707_6_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_2707_6_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_2707_6_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(912, str_pressed_l_2227, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        media.play_id(SOUND_LOSE_8, 1-1);
    }
    event_2707_6_end: ;
}
// Function purpose: generated callback event_func_4271 processes event block(s) 2708_6. Actions/conditions:
//        2708_6: sets Pressed_L to 1; sets LClick to 1.
void Frames::event_func_4271()
{
    // event 2708_6 : sets Pressed_L to 1; sets LClick to 1
    {
        if (!(group_code_1)) goto event_2708_6_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_2708_6_end;
        if (!((get_mouse_y()) > (((Active*)get_single(interfaceButtons_instances, default_active_instance))->get_box_index(1)+66))) goto event_2708_6_end;
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_2708_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto event_2708_6_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_2708_6_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(912, str_pressed_l_2227, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        if (!group_code_load_confirm_1) {
            group_code_load_confirm_1 = true;
            group_check_group_code_load_confirm_1_0 = true;
            group_check_group_code_load_confirm_1_1 = true;
            group_check_group_code_load_confirm_1_2 = true;
            group_check_group_code_load_confirm_1_3 = true;
        }
    }
    event_2708_6_end: ;
}
// Function purpose: generated callback event_func_4272 processes event block(s) 2709_6. Actions/conditions:
//        2709_6: sets Pressed_L to 1; sets LClick to 1.
void Frames::event_func_4272()
{
    // event 2709_6 : sets Pressed_L to 1; sets LClick to 1
    {
        if (!(group_code_1)) goto event_2709_6_end;
        if (!(is_key_pressed_once(SDLK_0))) goto event_2709_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(912, str_pressed_l_2227)) == (0))) goto event_2709_6_end;
        interfaceButtons_instances.clear_selection();
        for (ObjectIterator it(interfaceButtons_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(2))) { it.deselect(); continue; }
        }
        if (!interfaceButtons_instances.has_selection()) goto event_2709_6_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_2709_6_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(912, str_pressed_l_2227, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        if (!group_code_load_confirm_1) {
            group_code_load_confirm_1 = true;
            group_check_group_code_load_confirm_1_0 = true;
            group_check_group_code_load_confirm_1_1 = true;
            group_check_group_code_load_confirm_1_2 = true;
            group_check_group_code_load_confirm_1_3 = true;
        }
    }
    event_2709_6_end: ;
}
// Function purpose: generated callback event_func_4273 processes event block(s) 2710_6. Actions/conditions:
//        2710_6: sets the object's animation to 27; sets the selected object's visibility to true; adds a dchar 214
//        instance; plus 9 more actions.
void Frames::event_func_4273()
{
    // event 2710_6 : sets the object's animation to 27; sets the selected object's visibility to true; adds a dchar 214 instance; plus 9 more actions
    {
        if (!(group_code_1 && group_code_load_confirm_1)) goto event_2710_6_end;
        if (!group_check_group_code_load_confirm_1_0) goto event_2710_6_end;
        group_check_group_code_load_confirm_1_0 = false;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(27);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+8);
            ((Text*)*it)->set_bold(1);
            ((Text*)*it)->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_load_2228, str_1_97)));
            ((Text*)*it)->blend_color.set(Color(255, 128, 0));
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2710_6_end: ;
}
// Function purpose: generated callback event_func_4274 processes event block(s) 2711_6. Actions/conditions:
//        2711_6: adds a dchar 214 instance; sets the selected object's horizontal position to frame_left(); sets the
//        selected object's vertical position to dialogPanel->get_box_index(1)+26; plus 7 more actions.
void Frames::event_func_4274()
{
    // event 2711_6 : adds a dchar 214 instance; sets the selected object's horizontal position to frame_left(); sets the selected object's vertical position to dialogPanel->get_box_index(1)+26; plus 7 more actions
    {
        if (!(group_code_1 && group_code_load_confirm_1)) goto event_2711_6_end;
        if (!group_check_group_code_load_confirm_1_1) goto event_2711_6_end;
        group_check_group_code_load_confirm_1_1 = false;
        dchar_214_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(0, 0), 5);
            dchar_214_instances.add_back();
        }
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_x(VITA_VIEW_LEFT(((Text*)*it), frame_left()));
            ((Text*)*it)->set_y(((Active*)get_instance(dialogPanel_instances))->get_box_index(1)+26);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, ((INI*)get_instance(translationData_instances))->get_string(str_load_2228, str_2_155));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(81, str_source_584, StringReplace::replace(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584), str__346, str__198));
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->set_string(((AssociateArray*)get_instance(gameVariables_instances))->get_string(81, str_source_584));
            ((Text*)*it)->blend_color.set(Color(179, 179, 179));
        }
    }
    event_2711_6_end: ;
}
// Function purpose: generated callback event_func_4275 processes event block(s) 2712_6. Actions/conditions:
//        2712_6: creates a buttons 245 object; sets the object's animation to 30; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_4275()
{
    // event 2712_6 : creates a buttons 245 object; sets the object's animation to 30; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_load_confirm_1)) goto event_2712_6_end;
        if (!group_check_group_code_load_confirm_1_2) goto event_2712_6_end;
        group_check_group_code_load_confirm_1_2 = false;
        FrameObject * single_instance_2712_6_0; single_instance_2712_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + -63, parent->y + 16), parent->layer);
                if (single_instance_2712_6_0 == NULL)
                    single_instance_2712_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2712_6_0))->force_animation(30);
        FrameObject * single_instance_2712_6_1; single_instance_2712_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_2712_6_0)->x + -7, ((Active*)single_instance_2712_6_0)->y + 4), ((Active*)single_instance_2712_6_0)->layer);
            if (single_instance_2712_6_1 == NULL)
                single_instance_2712_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_2712_6_1))->blend_color.set(Color(180, 180, 180));
        ((Text*)((Text*)single_instance_2712_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_5_164)));
    }
    event_2712_6_end: ;
}
// Function purpose: generated callback event_func_4276 processes event block(s) 2713_6. Actions/conditions:
//        2713_6: creates a buttons 245 object; sets the object's animation to 31; creates a buttontext 445 object;
//        plus 5 more actions.
void Frames::event_func_4276()
{
    // event 2713_6 : creates a buttons 245 object; sets the object's animation to 31; creates a buttontext 445 object; plus 5 more actions
    {
        if (!(group_code_1 && group_code_load_confirm_1)) goto event_2713_6_end;
        if (!group_check_group_code_load_confirm_1_3) goto event_2713_6_end;
        group_check_group_code_load_confirm_1_3 = false;
        FrameObject * single_instance_2713_6_0; single_instance_2713_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 5, parent->y + 16), parent->layer);
                if (single_instance_2713_6_0 == NULL)
                    single_instance_2713_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2713_6_0))->force_animation(31);
        FrameObject * single_instance_2713_6_1; single_instance_2713_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_buttontext_445(((Active*)single_instance_2713_6_0)->x + -7, ((Active*)single_instance_2713_6_0)->y + 4), ((Active*)single_instance_2713_6_0)->layer);
            if (single_instance_2713_6_1 == NULL)
                single_instance_2713_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_2713_6_1))->blend_color.set(Color(180, 180, 180));
        ((Text*)((Text*)single_instance_2713_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_favour_box_1089, str_3_158)));
    }
    event_2713_6_end: ;
}
// Function purpose: generated callback event_func_4277 processes event block(s) 2714_6. Actions/conditions:
//        2714_6: updates a value on the target object; clears the current selection or contents; sets MapDir to
//        global_strings->get(10); plus 7 more actions.
void Frames::event_func_4277()
{
    // event 2714_6 : updates a value on the target object; clears the current selection or contents; sets MapDir to global_strings->get(10); plus 7 more actions
    {
        if (!(group_code_1 && group_code_load_confirm_1)) goto event_2714_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(30))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2714_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2714_6_end;
        global_strings->set(10, ((AssociateArray*)get_instance(gameVariables_instances))->get_string(913, str_mapdir_131));
        ((AssociateArray*)get_instance(gameVariables_instances))->clear();
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(913, str_mapdir_131, global_strings->get(10));
        global_values->set(11, 1);
        next_frame = 5 + 0;    
        if (loop_count != 0)
            manager.set_fade(Transition::DOOR, Color(0, 0, 0), 2.22222222222);
    
        media.play_id(SOUND_CLOSE_6, 1-1);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2714_6_end: ;
}
// Function purpose: generated callback event_func_4278 processes event block(s) 2715_6. Actions/conditions:
//        2715_6: sets Pressed_L to 1; sets LClick to 1; plays a sound or music track; plus 1 more actions.
void Frames::event_func_4278()
{
    // event 2715_6 : sets Pressed_L to 1; sets LClick to 1; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_load_confirm_1)) goto event_2715_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(31))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2715_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto event_2715_6_end;
        {
            loop_close_load_running = true;
            int times = int(1);
            loop_close_load_index = 0;
            while (loop_close_load_index < times) {
                loop_close_load_6();
                if (!loop_close_load_running) break;
                loop_close_load_index++;
            }
        }
            group_code_load_confirm_1 = false;
    
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(912, str_pressed_l_2227, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2715_6_end: ;
}
// Function purpose: generated callback event_func_4279 processes event block(s) 2716_6. Actions/conditions:
//        2716_6: sets Pressed_L to 1; sets LClick to 1; plays a sound or music track; plus 1 more actions.
void Frames::event_func_4279()
{
    // event 2716_6 : sets Pressed_L to 1; sets LClick to 1; plays a sound or music track; plus 1 more actions
    {
        if (!(group_code_1 && group_code_load_confirm_1)) goto event_2716_6_end;
        if (!(is_key_pressed_once(SDLK_0))) goto event_2716_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(912, str_pressed_l_2227)) == (0))) goto event_2716_6_end;
        {
            loop_close_load_running = true;
            int times = int(1);
            loop_close_load_index = 0;
            while (loop_close_load_index < times) {
                loop_close_load_6();
                if (!loop_close_load_running) break;
                loop_close_load_index++;
            }
        }
            group_code_load_confirm_1 = false;
    
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(912, str_pressed_l_2227, 1);
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2716_6_end: ;
}
// Function purpose: generated callback event_func_4280 processes event block(s) 2718_6. Actions/conditions:
//        2718_6: updates game state with selected object->force_frame(selected object->alterables->values.get(1));
//        stops the current animation.
void Frames::event_func_4280()
{
    // event 2718_6 : updates game state with selected object->force_frame(selected object->alterables->values.get(1)); stops the current animation
    {
        if (!(group_code_1)) goto event_2718_6_end;
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!canteenserving_277_instances.has_selection()) goto event_2718_6_end;
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->stop_animation();
        }
    }
    event_2718_6_end: ;
}
// Function purpose: generated callback event_func_4281 processes event block(s) 2719_6. Actions/conditions:
//        2719_6: sets QuotaCheck to 0.
void Frames::event_func_4281()
{
    // event 2719_6 : sets QuotaCheck to 0
    {
        if (!(group_code_1)) goto event_2719_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(880, str_quotacheck_2063)) == (1))) goto event_2719_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) != (empty_string))) goto event_2719_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(782, str_zone_metalshop_1962)) == (0))) goto event_2719_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(748, str_zone_laundry_1919)) == (0))) goto event_2719_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(780, str_zone_woodshop_1960)) == (0))) goto event_2719_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(777, str_zone_kitchen_1957)) == (0))) goto event_2719_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(783, str_zone_tailorshop_1963)) == (0))) goto event_2719_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(784, str_zone_deliveries_1964)) == (0))) goto event_2719_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(776, str_zone_janitor_1956)) == (0))) goto event_2719_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(781, str_zone_gardening_1961)) == (0))) goto event_2719_6_end;
        playerBase_instances.clear_selection();
        if (!check_not_overlap(playerBase_instances, qualifier_8)) goto event_2719_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2719_6_end;
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_check_jobquota_running = true;
            int times = int(1);
            loop_check_jobquota_index = 0;
            while (loop_check_jobquota_index < times) {
                loop_check_jobquota_6();
                if (!loop_check_jobquota_running) break;
                loop_check_jobquota_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(880, str_quotacheck_2063, 0);
    }
    event_2719_6_end: ;
}
// Function purpose: generated callback event_func_4282 processes event block(s) 2720_6. Actions/conditions:
//        2720_6: sets QuotaCheck to 0.
void Frames::event_func_4282()
{
    // event 2720_6 : sets QuotaCheck to 0
    {
        if (!(group_code_1)) goto event_2720_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(880, str_quotacheck_2063)) == (1))) goto event_2720_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (empty_string))) goto event_2720_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(880, str_quotacheck_2063, 0);
    }
    event_2720_6_end: ;
}
// Function purpose: generated callback event_func_4283 processes event block(s) 2721_6. Actions/conditions:
//        2721_6: sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus
//        1 more actions.
void Frames::event_func_4283()
{
    // event 2721_6 : sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2721_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(32))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2721_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2721_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(29))) goto event_2721_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2721_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
    }
    event_2721_6_end: ;
}
// Function purpose: generated callback event_func_4284 processes event block(s) 2722_6. Actions/conditions:
//        2722_6: sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus
//        1 more actions.
void Frames::event_func_4284()
{
    // event 2722_6 : sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1)) goto event_2722_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(43))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2722_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2722_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(29))) goto event_2722_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2722_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
        buttontext_445_instances.clear_selection();
        for (ObjectIterator it(buttontext_445_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        wardennote_470_instances.clear_selection();
        for (ObjectIterator it(wardennote_470_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
    }
    event_2722_6_end: ;
}
// Function purpose: generated callback event_func_4285 processes event block(s) 2723_6. Actions/conditions:
//        2723_6: sets the object's animation to 0.
void Frames::event_func_4285()
{
    // event 2723_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_2723_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(13))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_2723_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(359, str_cleaning_23)) == (0))) goto event_2723_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2723_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2723_6_end: ;
}
// Function purpose: generated callback event_func_4286 processes event block(s) 2724_6. Actions/conditions:
//        2724_6: sets the object's animation to 0.
void Frames::event_func_4286()
{
    // event 2724_6 : sets the object's animation to 0
    {
        if (!(group_code_1)) goto event_2724_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(16))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_2724_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(433, str_weeding_1276)) == (0))) goto event_2724_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2724_6_end;
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2724_6_end: ;
}
// Function purpose: generated callback event_func_4287 processes event block(s) 2725_6. Actions/conditions:
//        2725_6: disables flag 5 (object-specific movement or animation state) on the selected object.
void Frames::event_func_4287()
{
    // event 2725_6 : disables flag 5 (object-specific movement or animation state) on the selected object
    {
        if (!(group_code_1)) goto event_2725_6_end;
        dirt_242_instances.clear_selection();
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!dirt_242_instances.has_selection()) goto event_2725_6_end;
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_2725_6_end: ;
}
// Function purpose: generated callback event_func_4288 processes event block(s) 2726_6. Actions/conditions:
//        2726_6: disables flag 5 (object-specific movement or animation state) on the selected object.
void Frames::event_func_4288()
{
    // event 2726_6 : disables flag 5 (object-specific movement or animation state) on the selected object
    {
        if (!(group_code_1)) goto event_2726_6_end;
        weeds_462_instances.clear_selection();
        for (ObjectIterator it(weeds_462_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!weeds_462_instances.has_selection()) goto event_2726_6_end;
        for (ObjectIterator it(weeds_462_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_2726_6_end: ;
}
// Function purpose: generated callback event_func_4289 processes event block(s) 2727_6. Actions/conditions:
//        2727_6: enables flag 5 (object-specific movement or animation state) on the selected object.
void Frames::event_func_4289()
{
    // event 2727_6 : enables flag 5 (object-specific movement or animation state) on the selected object
    {
        if (!(group_code_1)) goto event_2727_6_end;
        dirt_242_instances.clear_selection();
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!dirt_242_instances.has_selection()) goto event_2727_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(177, str_map_job_janitor_757)) == (1))) goto event_2727_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(359, str_cleaning_23)) == (0))) goto event_2727_6_end;
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        {
            loop_find_dirt_spot_running = true;
            int times = int(5);
            loop_find_dirt_spot_index = 0;
            while (loop_find_dirt_spot_index < times) {
                loop_find_dirt_spot_6();
                if (!loop_find_dirt_spot_running) break;
                loop_find_dirt_spot_index++;
            }
        }
    }
    event_2727_6_end: ;
}
// Function purpose: generated callback event_func_4290 processes event block(s) 2730_6. Actions/conditions:
//        2730_6: enables flag 5 (object-specific movement or animation state) on the selected object.
void Frames::event_func_4290()
{
    // event 2730_6 : enables flag 5 (object-specific movement or animation state) on the selected object
    {
        if (!(group_code_1)) goto event_2730_6_end;
        weeds_462_instances.clear_selection();
        for (ObjectIterator it(weeds_462_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!weeds_462_instances.has_selection()) goto event_2730_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(176, str_map_job_gardening_756)) == (1))) goto event_2730_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(914, str_gardening_43)) == (0))) goto event_2730_6_end;
        for (ObjectIterator it(weeds_462_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        {
            loop_find_weeds_spot_running = true;
            int times = int(5);
            loop_find_weeds_spot_index = 0;
            while (loop_find_weeds_spot_index < times) {
                loop_find_weeds_spot_6();
                if (!loop_find_weeds_spot_running) break;
                loop_find_weeds_spot_index++;
            }
        }
    }
    event_2730_6_end: ;
}
// Function purpose: generated callback event_func_4291 processes event block(s) 2732_6. Actions/conditions:
//        2732_6: adds a weeds 462 instance.
void Frames::event_func_4291()
{
    // event 2732_6 : adds a weeds 462 instance
    {
        if (!(group_code_1)) goto event_2732_6_end;
        every_2732_6 += manager.dt;
        if (every_2732_6 < 3.0) goto event_2732_6_end;
        every_2732_6 -= 3.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(176, str_map_job_gardening_756)) == (1))) goto event_2732_6_end;
        if (!((weeds_462_instances.size()) < (3))) goto event_2732_6_end;
        weeds_462_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_weeds_462(-20, -20), 1);
            weeds_462_instances.add_back();
        }
    }
    event_2732_6_end: ;
}
// Function purpose: generated callback event_func_4292 processes event block(s) 2733_6. Actions/conditions:
//        2733_6: adds a dirt 242 instance; sets the object position in the world.
void Frames::event_func_4292()
{
    // event 2733_6 : adds a dirt 242 instance; sets the object position in the world
    {
        if (!(group_code_1)) goto event_2733_6_end;
        every_2733_6 += manager.dt;
        if (every_2733_6 < 5.0) goto event_2733_6_end;
        every_2733_6 -= 5.0;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(177, str_map_job_janitor_757)) == (1))) goto event_2733_6_end;
        if (!((dirt_242_instances.size()) < (3))) goto event_2733_6_end;
        waypointinmate2_311_instances.clear_selection();
        FrameObject * single_instance_2733_6_0; single_instance_2733_6_0 = pick_random(waypointinmate2_311_instances);
        if (single_instance_2733_6_0 == NULL) goto event_2733_6_end;
        dirt_242_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dirt_242(-20, -20), 1);
            dirt_242_instances.add_back();
        }
        for (ObjectIterator it(dirt_242_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)single_instance_2733_6_0);
            if (parent == NULL) goto pos_end_2733_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2733_6_2: ;
        }
    }
    event_2733_6_end: ;
}
// Function purpose: generated callback event_func_4293 processes event block(s) 2734_6. Actions/conditions:
//        2734_6: checks scene is active; game state Zone_Kitchen; game state Zone_Canteen; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4293()
{
    // event 2734_6 : checks scene is active; game state Zone_Kitchen; game state Zone_Canteen; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2734_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(777, str_zone_kitchen_1957)) == (0))) goto event_2734_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(747, str_zone_canteen_1918)) == (0))) goto event_2734_6_end;
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2734_6_end;
            group_code_job_related_kitchen_1 = false;
    
    }
    event_2734_6_end: ;
}
// Function purpose: generated callback event_func_4294 processes event block(s) 2735_6. Actions/conditions:
//        2735_6: runs the event-specific checks.
void Frames::event_func_4294()
{
    // event 2735_6 : runs the event-specific checks
    bool or_result_2735_6 = false;
    bool or_temp_result_2735_6_0 = false;
    {
        if (!(group_code_1)) goto or_event_2735_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(777, str_zone_kitchen_1957)) == (1))) goto or_event_2735_6_0_end;
        if (group_code_1 && group_code_job_related_kitchen_1) goto or_event_2735_6_0_end;
        or_result_2735_6 = true;
        or_temp_result_2735_6_0 = true;
    }
    or_event_2735_6_0_end: ;
    // event 2735_6 : runs the event-specific checks
    bool or_temp_result_2735_6_1 = false;
    {
        if (!(group_code_1)) goto or_event_2735_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(747, str_zone_canteen_1918)) == (1))) goto or_event_2735_6_1_end;
        if (group_code_1 && group_code_job_related_kitchen_1) goto or_event_2735_6_1_end;
        or_result_2735_6 = true;
        or_temp_result_2735_6_1 = true;
        or_event_2735_6_1_end: ;
        if (!or_result_2735_6) goto or_final_or_event_2735_6_1_end;
        if (!group_code_job_related_kitchen_1) {
            group_code_job_related_kitchen_1 = true;
        }
    }
    or_final_or_event_2735_6_1_end: ;
}
// Function purpose: generated callback event_func_4295 processes event block(s) 2736_6. Actions/conditions:
//        2736_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4295()
{
    // event 2736_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2736_6_end;
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!oven2_314_instances.has_selection()) goto event_2736_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (65))) goto event_2736_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2736_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(oven2_314_instances));
            if (obj1 == NULL) goto compare_2736_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2736_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2736_6_end;
        }
        compare_2736_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2736_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2736_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_2736_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2736_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(227, str_curroven_837, ((Active*)get_single(oven2_314_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_start_cook_running = true;
            int times = int(1);
            loop_start_cook_index = 0;
            while (loop_start_cook_index < times) {
                loop_start_cook_6();
                if (!loop_start_cook_running) break;
                loop_start_cook_index++;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_removeitem_running = true;
            int times = int(1);
            loop_removeitem_index = 0;
            while (loop_removeitem_index < times) {
                loop_removeitem_6();
                if (!loop_removeitem_running) break;
                loop_removeitem_index++;
            }
        }
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_2736_6_end: ;
}
// Function purpose: generated callback event_func_4296 processes event block(s) 2737_6. Actions/conditions:
//        2737_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4296()
{
    // event 2737_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2737_6_end;
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!oven2_314_instances.has_selection()) goto event_2737_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (274))) goto event_2737_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2737_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(oven2_314_instances));
            if (obj1 == NULL) goto compare_2737_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2737_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2737_6_end;
        }
        compare_2737_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2737_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2737_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_2737_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2737_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(227, str_curroven_837, ((Active*)get_single(oven2_314_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_start_cook_running = true;
            int times = int(1);
            loop_start_cook_index = 0;
            while (loop_start_cook_index < times) {
                loop_start_cook_6();
                if (!loop_start_cook_running) break;
                loop_start_cook_index++;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_removeitem_running = true;
            int times = int(1);
            loop_removeitem_index = 0;
            while (loop_removeitem_index < times) {
                loop_removeitem_6();
                if (!loop_removeitem_running) break;
                loop_removeitem_index++;
            }
        }
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_2737_6_end: ;
}
// Function purpose: generated callback event_func_4297 processes event block(s) 2739_6. Actions/conditions:
//        2739_6: changes a stored game value.
void Frames::event_func_4297()
{
    VITA_LEGACY_EVENT();
    // event 2739_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2739_6_end;
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!oven2_314_instances.has_selection()) goto event_2739_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2739_6_end;
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_2739_6_end: ;
}
// Function purpose: generated callback event_func_4298 processes event block(s) 2740_6. Actions/conditions:
//        2740_6: sets the object's animation to 5; enables flag 50 (object animation or activity state) on the
//        selected object.
void Frames::event_func_4298()
{
    VITA_LEGACY_EVENT();
    // event 2740_6 : sets the object's animation to 5; enables flag 50 (object animation or activity state) on the selected object
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2740_6_end;
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!oven2_314_instances.has_selection()) goto event_2740_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2740_6_end;
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->alterables->flags.enable(50);
        }
    }
    event_2740_6_end: ;
}
// Function purpose: generated callback event_func_4299 processes event block(s) 2741_6. Actions/conditions:
//        2741_6: sets the object's animation to 1.
void Frames::event_func_4299()
{
    // event 2741_6 : sets the object's animation to 1
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2741_6_end;
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(1)) { it.deselect(); continue; }
        }
        if (!oven2_314_instances.has_selection()) goto event_2741_6_end;
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_2741_6_end: ;
}
// Function purpose: generated callback event_func_4300 processes event block(s) 2742_6. Actions/conditions:
//        2742_6: sets the object's animation to 0.
void Frames::event_func_4300()
{
    // event 2742_6 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2742_6_end;
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(0)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(50))) { it.deselect(); continue; }
        }
        if (!oven2_314_instances.has_selection()) goto event_2742_6_end;
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2742_6_end: ;
}
// Function purpose: generated callback event_func_4301 processes event block(s) 2743_6. Actions/conditions:
//        2743_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4301()
{
    // event 2743_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2743_6_end;
        oven2_314_instances.clear_selection();
        for (ObjectIterator it(oven2_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!oven2_314_instances.has_selection()) goto event_2743_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(oven2_314_instances));
            if (obj1 == NULL) goto compare_2743_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2743_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2743_6_end;
        }
        compare_2743_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2743_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_2743_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2743_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2743_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(227, str_curroven_837, ((Active*)get_single(oven2_314_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(710, str_oveninput_1870, ((Active*)get_single(oven2_314_instances, default_active_instance))->alterables->values.get(5));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_collect_oven_running = true;
            int times = int(1);
            loop_collect_oven_index = 0;
            while (loop_collect_oven_index < times) {
                loop_collect_oven_6();
                if (!loop_collect_oven_running) break;
                loop_collect_oven_index++;
            }
        }
    }
    event_2743_6_end: ;
}
// Function purpose: generated callback event_func_4302 processes event block(s) 2747_6. Actions/conditions:
//        2747_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4302()
{
    // event 2747_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_job_related_kitchen_1)) goto event_2747_6_end;
        canteenserving_277_instances.clear_selection();
        for (ObjectIterator it(canteenserving_277_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!canteenserving_277_instances.has_selection()) goto event_2747_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (66))) goto event_2747_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2747_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(canteenserving_277_instances));
            if (obj1 == NULL) goto compare_2747_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2747_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2747_6_end;
        }
        compare_2747_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_kitchen_12))) goto event_2747_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2747_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2747_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(646, str_currtray_1746, ((Active*)get_single(canteenserving_277_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_serve_food_check_running = true;
            int times = int(1);
            loop_serve_food_check_index = 0;
            while (loop_serve_food_check_index < times) {
                loop_serve_food_check_6();
                if (!loop_serve_food_check_running) break;
                loop_serve_food_check_index++;
            }
        }
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_2747_6_end: ;
}
// Function purpose: generated callback event_func_4303 processes event block(s) 2750_6. Actions/conditions:
//        2750_6: checks scene is active; game state Zone_Laundry; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4303()
{
    // event 2750_6 : checks scene is active; game state Zone_Laundry; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2750_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(748, str_zone_laundry_1919)) == (0))) goto event_2750_6_end;
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2750_6_end;
            group_code_job_related_laundry_1 = false;
    
    }
    event_2750_6_end: ;
}
// Function purpose: generated callback event_func_4304 processes event block(s) 2751_6. Actions/conditions:
//        2751_6: checks scene is active; game state Zone_Laundry; skips if scene is active; this handler gates a game
//        event without a direct value/object action.
void Frames::event_func_4304()
{
    // event 2751_6 : checks scene is active; game state Zone_Laundry; skips if scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2751_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(748, str_zone_laundry_1919)) == (1))) goto event_2751_6_end;
        if (group_code_1 && group_code_job_related_laundry_1) goto event_2751_6_end;
        if (!group_code_job_related_laundry_1) {
            group_code_job_related_laundry_1 = true;
        }
    }
    event_2751_6_end: ;
}
// Function purpose: generated callback event_func_4305 processes event block(s) 2752_6. Actions/conditions:
//        2752_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4305()
{
    // event 2752_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2752_6_end;
        containerlaundryclean_275_instances.clear_selection();
        for (ObjectIterator it(containerlaundryclean_275_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerlaundryclean_275_instances.has_selection()) goto event_2752_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (3))) goto event_2752_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2752_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2752_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2752_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2752_6_end;
        }
        compare_2752_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2752_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2752_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_remove_running = true;
            int times = int(1);
            loop_inv_remove_index = 0;
            while (loop_inv_remove_index < times) {
                loop_inv_remove_6();
                if (!loop_inv_remove_running) break;
                loop_inv_remove_index++;
            }
        }
        {
            loop_laundry_do_running = true;
            int times = int(1);
            loop_laundry_do_index = 0;
            while (loop_laundry_do_index < times) {
                loop_laundry_do_6();
                if (!loop_laundry_do_running) break;
                loop_laundry_do_index++;
            }
        }
    }
    event_2752_6_end: ;
}
// Function purpose: generated callback event_func_4306 processes event block(s) 2753_6. Actions/conditions:
//        2753_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4306()
{
    // event 2753_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2753_6_end;
        containerlaundryclean_275_instances.clear_selection();
        for (ObjectIterator it(containerlaundryclean_275_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerlaundryclean_275_instances.has_selection()) goto event_2753_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (4))) goto event_2753_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2753_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2753_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2753_6_0_end;
            x2 = obj2->get_x() + -8;
            y2 = obj2->get_y() + -8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2753_6_end;
        }
        compare_2753_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2753_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2753_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_remove_running = true;
            int times = int(1);
            loop_inv_remove_index = 0;
            while (loop_inv_remove_index < times) {
                loop_inv_remove_6();
                if (!loop_inv_remove_running) break;
                loop_inv_remove_index++;
            }
        }
        {
            loop_laundry_do_running = true;
            int times = int(1);
            loop_laundry_do_index = 0;
            while (loop_laundry_do_index < times) {
                loop_laundry_do_6();
                if (!loop_laundry_do_running) break;
                loop_laundry_do_index++;
            }
        }
    }
    event_2753_6_end: ;
}
// Function purpose: generated callback event_func_4307 processes event block(s) 2755_6. Actions/conditions:
//        2755_6: sets Washable to 0.
void Frames::event_func_4307()
{
    // event 2755_6 : sets Washable to 0
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2755_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(915, str_washable_2229)) > (0))) goto event_2755_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(915, str_washable_2229, 0);
    }
    event_2755_6_end: ;
}
// Function purpose: generated callback event_func_4308 processes event block(s) 2756_6. Actions/conditions:
//        2756_6: saves the current object selection; sets Washable to 1.
void Frames::event_func_4308()
{
    // event 2756_6 : saves the current object selection; sets Washable to 1
    bool or_result_2756_6 = false;
    bool or_temp_result_2756_6_0 = false;
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto or_event_2756_6_0_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto or_event_2756_6_0_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(47, str_selecteditem_515)) == (64))) goto or_event_2756_6_0_end;
        or_result_2756_6 = true;
        or_temp_result_2756_6_0 = true;
    }
    or_event_2756_6_0_end: ;
    washing2_313_instances.clear_saved_selection();
    if (or_temp_result_2756_6_0) {
        washing2_313_instances.save_selection();
    }
    // event 2756_6 : saves the current object selection; sets Washable to 1
    bool or_temp_result_2756_6_1 = false;
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto or_event_2756_6_1_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto or_event_2756_6_1_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(47, str_selecteditem_515)) == (63))) goto or_event_2756_6_1_end;
        or_result_2756_6 = true;
        or_temp_result_2756_6_1 = true;
        or_event_2756_6_1_end: ;
        if (or_temp_result_2756_6_1) {
            washing2_313_instances.save_selection();
        }
        if (!or_result_2756_6) goto or_final_or_event_2756_6_1_end;
        washing2_313_instances.empty_selection();
        if (or_temp_result_2756_6_0 || or_temp_result_2756_6_1) {
            washing2_313_instances.restore_selection();
        }
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(915, str_washable_2229, 1);
        }
    }
    or_final_or_event_2756_6_1_end: ;
}
// Function purpose: generated callback event_func_4309 processes event block(s) 2757_6. Actions/conditions:
//        2757_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4309()
{
    // event 2757_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2757_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2757_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(915, str_washable_2229)) == (1))) goto event_2757_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2757_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(washing2_313_instances));
            if (obj1 == NULL) goto compare_2757_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2757_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2757_6_end;
        }
        compare_2757_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2757_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2757_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(217, str_currwasher_821, ((Active*)get_single(washing2_313_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_start_laundry_running = true;
            int times = int(1);
            loop_start_laundry_index = 0;
            while (loop_start_laundry_index < times) {
                loop_start_laundry_6();
                if (!loop_start_laundry_running) break;
                loop_start_laundry_index++;
            }
        }
        media.play_id(SOUND_BUY_11, 1-1);
    }
    event_2757_6_end: ;
}
// Function purpose: generated callback event_func_4310 processes event block(s) 2763_6. Actions/conditions:
//        2763_6: changes a stored game value.
void Frames::event_func_4310()
{
    VITA_LEGACY_EVENT();
    // event 2763_6 : changes a stored game value
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2763_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2763_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2763_6_end;
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_2763_6_end: ;
}
// Function purpose: generated callback event_func_4311 processes event block(s) 2764_6. Actions/conditions:
//        2764_6: sets the object's animation to 1.
void Frames::event_func_4311()
{
    // event 2764_6 : sets the object's animation to 1
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2764_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(1)) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2764_6_end;
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
    }
    event_2764_6_end: ;
}
// Function purpose: generated callback event_func_4312 processes event block(s) 2765_6. Actions/conditions:
//        2765_6: sets the object's animation to 0.
void Frames::event_func_4312()
{
    // event 2765_6 : sets the object's animation to 0
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2765_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(0)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2765_6_end;
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_2765_6_end: ;
}
// Function purpose: generated callback event_func_4313 processes event block(s) 2766_6. Actions/conditions:
//        2766_6: sets the object's animation to 5.
void Frames::event_func_4313()
{
    // event 2766_6 : sets the object's animation to 5
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2766_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(5)) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2766_6_end;
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_2766_6_end: ;
}
// Function purpose: generated callback event_func_4314 processes event block(s) 2767_6. Actions/conditions:
//        2767_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4314()
{
    // event 2767_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_job_related_laundry_1)) goto event_2767_6_end;
        washing2_313_instances.clear_selection();
        for (ObjectIterator it(washing2_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!washing2_313_instances.has_selection()) goto event_2767_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(washing2_313_instances));
            if (obj1 == NULL) goto compare_2767_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2767_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2767_6_end;
        }
        compare_2767_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2767_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2767_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(217, str_currwasher_821, ((Active*)get_single(washing2_313_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(395, str_output_1202, ((Active*)get_single(washing2_313_instances, default_active_instance))->alterables->values.get(4));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_collect_laundry_running = true;
            int times = int(1);
            loop_collect_laundry_index = 0;
            while (loop_collect_laundry_index < times) {
                loop_collect_laundry_6();
                if (!loop_collect_laundry_running) break;
                loop_collect_laundry_index++;
            }
        }
    }
    event_2767_6_end: ;
}
// Function purpose: generated callback event_func_4315 processes event block(s) 2772_6. Actions/conditions:
//        2772_6: checks scene is active; game state Zone_Metalshop; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4315()
{
    // event 2772_6 : checks scene is active; game state Zone_Metalshop; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2772_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(782, str_zone_metalshop_1962)) == (0))) goto event_2772_6_end;
        if (!(group_code_1 && group_code_job_related_metalshop_1)) goto event_2772_6_end;
            group_code_job_related_metalshop_1 = false;
    
    }
    event_2772_6_end: ;
}
// Function purpose: generated callback event_func_4316 processes event block(s) 2773_6. Actions/conditions:
//        2773_6: checks scene is active; game state Zone_Metalshop; skips if scene is active; this handler gates a
//        game event without a direct value/object action.
void Frames::event_func_4316()
{
    // event 2773_6 : checks scene is active; game state Zone_Metalshop; skips if scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2773_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(782, str_zone_metalshop_1962)) == (1))) goto event_2773_6_end;
        if (group_code_1 && group_code_job_related_metalshop_1) goto event_2773_6_end;
        if (!group_code_job_related_metalshop_1) {
            group_code_job_related_metalshop_1 = true;
        }
    }
    event_2773_6_end: ;
}
// Function purpose: generated callback event_func_4317 processes event block(s) 2774_6. Actions/conditions:
//        2774_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_4317()
{
    // event 2774_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_job_related_metalshop_1)) goto event_2774_6_end;
        licenseprints_329_instances.clear_selection();
        for (ObjectIterator it(licenseprints_329_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!licenseprints_329_instances.has_selection()) goto event_2774_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(39, str_eteam_238)) == (0))) goto event_2774_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (76))) goto event_2774_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2774_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(cursor_178_instances));
            if (obj1 == NULL) goto compare_2774_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2774_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_2774_6_end;
        }
        compare_2774_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2774_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2774_6_end;
        for (ObjectIterator it(licenseprints_329_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 77);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_remove_running = true;
            int times = int(1);
            loop_inv_remove_index = 0;
            while (loop_inv_remove_index < times) {
                loop_inv_remove_6();
                if (!loop_inv_remove_running) break;
                loop_inv_remove_index++;
            }
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_6();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
        media.play_id(SOUND_RUMBLE_15, 1-1);
    }
    event_2774_6_end: ;
}
// Function purpose: generated callback event_func_4318 processes event block(s) 2775_6. Actions/conditions:
//        2775_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4318()
{
    // event 2775_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_job_related_metalshop_1)) goto event_2775_6_end;
        metalshop2_327_instances.clear_selection();
        for (ObjectIterator it(metalshop2_327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!metalshop2_327_instances.has_selection()) goto event_2775_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (77))) goto event_2775_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2775_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(metalshop2_327_instances));
            if (obj1 == NULL) goto compare_2775_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2775_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 30)) goto event_2775_6_end;
        }
        compare_2775_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2775_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2775_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_remove_running = true;
            int times = int(1);
            loop_inv_remove_index = 0;
            while (loop_inv_remove_index < times) {
                loop_inv_remove_6();
                if (!loop_inv_remove_running) break;
                loop_inv_remove_index++;
            }
        }
        {
            loop_metalshop_do_running = true;
            int times = int(1);
            loop_metalshop_do_index = 0;
            while (loop_metalshop_do_index < times) {
                loop_metalshop_do_6();
                if (!loop_metalshop_do_running) break;
                loop_metalshop_do_index++;
            }
        }
    }
    event_2775_6_end: ;
}
// Function purpose: generated callback event_func_4319 processes event block(s) 2777_6. Actions/conditions:
//        2777_6: checks scene is active; game state Zone_Woodshop; this handler gates a game event without a direct
//        value/object action.
void Frames::event_func_4319()
{
    // event 2777_6 : checks scene is active; game state Zone_Woodshop; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2777_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(780, str_zone_woodshop_1960)) == (0))) goto event_2777_6_end;
        if (!(group_code_1 && group_code_job_related_woodshop_1)) goto event_2777_6_end;
            group_code_job_related_woodshop_1 = false;
    
    }
    event_2777_6_end: ;
}
// Function purpose: generated callback event_func_4320 processes event block(s) 2778_6. Actions/conditions:
//        2778_6: checks scene is active; game state Zone_Woodshop; skips if scene is active; this handler gates a
//        game event without a direct value/object action.
void Frames::event_func_4320()
{
    // event 2778_6 : checks scene is active; game state Zone_Woodshop; skips if scene is active; this handler gates a game event without a direct value/object action
    {
        if (!(group_code_1)) goto event_2778_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(780, str_zone_woodshop_1960)) == (1))) goto event_2778_6_end;
        if (group_code_1 && group_code_job_related_woodshop_1) goto event_2778_6_end;
        if (!group_code_job_related_woodshop_1) {
            group_code_job_related_woodshop_1 = true;
        }
    }
    event_2778_6_end: ;
}
// Function purpose: generated callback event_func_4321 processes event block(s) 2779_6. Actions/conditions:
//        2779_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4321()
{
    // event 2779_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1 && group_code_job_related_woodshop_1)) goto event_2779_6_end;
        containertimber2_325_instances.clear_selection();
        for (ObjectIterator it(containertimber2_325_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containertimber2_325_instances.has_selection()) goto event_2779_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(containertimber2_325_instances));
            if (obj1 == NULL) goto compare_2779_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 16;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2779_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 36)) goto event_2779_6_end;
        }
        compare_2779_6_0_end: ;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (75))) goto event_2779_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2779_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2779_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2779_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2779_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_remove_running = true;
            int times = int(1);
            loop_inv_remove_index = 0;
            while (loop_inv_remove_index < times) {
                loop_inv_remove_6();
                if (!loop_inv_remove_running) break;
                loop_inv_remove_index++;
            }
        }
        {
            loop_woodshop_do_running = true;
            int times = int(1);
            loop_woodshop_do_index = 0;
            while (loop_woodshop_do_index < times) {
                loop_woodshop_do_6();
                if (!loop_woodshop_do_running) break;
                loop_woodshop_do_index++;
            }
        }
    }
    event_2779_6_end: ;
}
// Function purpose: generated callback event_func_4322 processes event block(s) 2781_6. Actions/conditions:
//        2781_6: sets Clothing to 0.
void Frames::event_func_4322()
{
    // event 2781_6 : sets Clothing to 0
    {
        if (!(group_code_1)) goto event_2781_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2781_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(916, str_clothing_2230)) != (0))) goto event_2781_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(916, str_clothing_2230, 0);
    }
    event_2781_6_end: ;
}
// Function purpose: generated callback event_func_4323 processes event block(s) 2782_6. Actions/conditions:
//        2782_6: sets Clothing to 1.
void Frames::event_func_4323()
{
    // event 2782_6 : sets Clothing to 1
    {
        if (!(group_code_1)) goto event_2782_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2782_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (132))) goto event_2782_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(916, str_clothing_2230, 1);
    }
    event_2782_6_end: ;
}
// Function purpose: generated callback event_func_4324 processes event block(s) 2783_6. Actions/conditions:
//        2783_6: sets Clothing to 1.
void Frames::event_func_4324()
{
    // event 2783_6 : sets Clothing to 1
    {
        if (!(group_code_1)) goto event_2783_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2783_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (133))) goto event_2783_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(916, str_clothing_2230, 1);
    }
    event_2783_6_end: ;
}
// Function purpose: generated callback event_func_4325 processes event block(s) 2784_6. Actions/conditions:
//        2784_6: sets Clothing to 1.
void Frames::event_func_4325()
{
    // event 2784_6 : sets Clothing to 1
    {
        if (!(group_code_1)) goto event_2784_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2784_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (134))) goto event_2784_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(916, str_clothing_2230, 1);
    }
    event_2784_6_end: ;
}
// Function purpose: generated callback event_func_4326 processes event block(s) 2785_6. Actions/conditions:
//        2785_6: sets Clothing to 1.
void Frames::event_func_4326()
{
    // event 2785_6 : sets Clothing to 1
    {
        if (!(group_code_1)) goto event_2785_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2785_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (135))) goto event_2785_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(916, str_clothing_2230, 1);
    }
    event_2785_6_end: ;
}
// Function purpose: generated callback event_func_4327 processes event block(s) 2786_6. Actions/conditions:
//        2786_6: sets Clothing to 1.
void Frames::event_func_4327()
{
    // event 2786_6 : sets Clothing to 1
    {
        if (!(group_code_1)) goto event_2786_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2786_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (74))) goto event_2786_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(916, str_clothing_2230, 1);
    }
    event_2786_6_end: ;
}
// Function purpose: generated callback event_func_4328 processes event block(s) 2787_6. Actions/conditions:
//        2787_6: sets Clothing to 1.
void Frames::event_func_4328()
{
    // event 2787_6 : sets Clothing to 1
    {
        if (!(group_code_1)) goto event_2787_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2787_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (250))) goto event_2787_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(916, str_clothing_2230, 1);
    }
    event_2787_6_end: ;
}
// Function purpose: generated callback event_func_4329 processes event block(s) 2788_6. Actions/conditions:
//        2788_6: sets Clothing to 1.
void Frames::event_func_4329()
{
    // event 2788_6 : sets Clothing to 1
    {
        if (!(group_code_1)) goto event_2788_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2788_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (252))) goto event_2788_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(916, str_clothing_2230, 1);
    }
    event_2788_6_end: ;
}
// Function purpose: generated callback event_func_4330 processes event block(s) 2789_6. Actions/conditions:
//        2789_6: sets Clothing to 1.
void Frames::event_func_4330()
{
    // event 2789_6 : sets Clothing to 1
    {
        if (!(group_code_1)) goto event_2789_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2789_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (253))) goto event_2789_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(916, str_clothing_2230, 1);
    }
    event_2789_6_end: ;
}
// Function purpose: generated callback event_func_4331 processes event block(s) 2790_6. Actions/conditions:
//        2790_6: sets Clothing to 1.
void Frames::event_func_4331()
{
    // event 2790_6 : sets Clothing to 1
    {
        if (!(group_code_1)) goto event_2790_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2790_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (258))) goto event_2790_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(916, str_clothing_2230, 1);
    }
    event_2790_6_end: ;
}
// Function purpose: generated callback event_func_4332 processes event block(s) 2791_6. Actions/conditions:
//        2791_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4332()
{
    // event 2791_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2791_6_end;
        containertailorin_396_instances.clear_selection();
        for (ObjectIterator it(containertailorin_396_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containertailorin_396_instances.has_selection()) goto event_2791_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(916, str_clothing_2230)) == (1))) goto event_2791_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2791_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_2791_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containertailorin_396_instances));
            if (obj2 == NULL) goto compare_2791_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 16;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2791_6_end;
        }
        compare_2791_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2791_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2791_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_remove_running = true;
            int times = int(1);
            loop_inv_remove_index = 0;
            while (loop_inv_remove_index < times) {
                loop_inv_remove_6();
                if (!loop_inv_remove_running) break;
                loop_inv_remove_index++;
            }
        }
        {
            loop_tailor_do_running = true;
            int times = int(1);
            loop_tailor_do_index = 0;
            while (loop_tailor_do_index < times) {
                loop_tailor_do_6();
                if (!loop_tailor_do_running) break;
                loop_tailor_do_index++;
            }
        }
    }
    event_2791_6_end: ;
}
// Function purpose: generated callback event_func_4333 processes event block(s) 2793_6. Actions/conditions:
//        2793_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4333()
{
    // event 2793_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1)) goto event_2793_6_end;
        containermail_399_instances.clear_selection();
        for (ObjectIterator it(containermail_399_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containermail_399_instances.has_selection()) goto event_2793_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_2793_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_2793_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containermail_399_instances));
            if (obj2 == NULL) goto compare_2793_6_0_end;
            x2 = obj2->get_x() + 16;
            y2 = obj2->get_y() + 16;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2793_6_end;
        }
        compare_2793_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2793_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2793_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_2793_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2793_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_2793_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 141);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_itemnameappend_running = true;
            int times = int(1);
            loop_itemnameappend_index = 0;
            while (loop_itemnameappend_index < times) {
                loop_itemnameappend_6();
                if (!loop_itemnameappend_running) break;
                loop_itemnameappend_index++;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_6();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_2793_6_end: ;
}
// Function purpose: generated callback event_func_4334 processes event block(s) 2794_6. Actions/conditions:
//        2794_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4334()
{
    // event 2794_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2794_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_2794_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (141))) goto event_2794_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(desks_305_instances));
            if (obj1 == NULL) goto compare_2794_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2794_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2794_6_end;
        }
        compare_2794_6_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2794_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2794_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2794_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2794_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_mailman_556))) goto event_2794_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_2794_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2794_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(desks_305_instances, it.current_index))->x + 8, ((Active*)get_single(desks_305_instances, it.current_index))->y + 8));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(421, str_deskid_1249, ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_post_book_check_running = true;
            int times = int(1);
            loop_post_book_check_index = 0;
            while (loop_post_book_check_index < times) {
                loop_post_book_check_6();
                if (!loop_post_book_check_running) break;
                loop_post_book_check_index++;
            }
        }
    }
    event_2794_6_end: ;
}
// Function purpose: generated callback event_func_4335 processes event block(s) 2795_6. Actions/conditions:
//        2795_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4335()
{
    // event 2795_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1)) goto event_2795_6_end;
        containerbookchest_273_instances.clear_selection();
        for (ObjectIterator it(containerbookchest_273_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerbookchest_273_instances.has_selection()) goto event_2795_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_library_25))) goto event_2795_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_2795_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_2795_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containerbookchest_273_instances));
            if (obj2 == NULL) goto compare_2795_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2795_6_end;
        }
        compare_2795_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2795_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2795_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_2795_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(9, str_itemid_445, 50);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_itemnameappend_running = true;
            int times = int(1);
            loop_itemnameappend_index = 0;
            while (loop_itemnameappend_index < times) {
                loop_itemnameappend_6();
                if (!loop_itemnameappend_running) break;
                loop_itemnameappend_index++;
            }
        }
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_add_running = true;
            int times = int(1);
            loop_inv_add_index = 0;
            while (loop_inv_add_index < times) {
                loop_inv_add_6();
                if (!loop_inv_add_running) break;
                loop_inv_add_index++;
            }
        }
    }
    event_2795_6_end: ;
}
// Function purpose: generated callback event_func_4336 processes event block(s) 2796_6. Actions/conditions:
//        2796_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4336()
{
    // event 2796_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1)) goto event_2796_6_end;
        desks_305_instances.clear_selection();
        for (ObjectIterator it(desks_305_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!desks_305_instances.has_selection()) goto event_2796_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (50))) goto event_2796_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(desks_305_instances));
            if (obj1 == NULL) goto compare_2796_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2796_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2796_6_end;
        }
        compare_2796_6_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2796_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2796_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2796_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(16, str_free_type_476)) == (str_work_477))) goto event_2796_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_string(17, str_job_478)) == (str_library_25))) goto event_2796_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_2796_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2796_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(desks_305_instances, it.current_index))->x + 8, ((Active*)get_single(desks_305_instances, it.current_index))->y + 8));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(421, str_deskid_1249, ((Active*)get_single(desks_305_instances, default_active_instance))->alterables->values.get(0));
        {
            loop_post_book_check_running = true;
            int times = int(1);
            loop_post_book_check_index = 0;
            while (loop_post_book_check_index < times) {
                loop_post_book_check_6();
                if (!loop_post_book_check_running) break;
                loop_post_book_check_index++;
            }
        }
    }
    event_2796_6_end: ;
}
// Function purpose: generated callback event_func_4337 processes event block(s) 2797_6. Actions/conditions:
//        2797_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4337()
{
    // event 2797_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2797_6_end;
        containerdeliveries2_398_instances.clear_selection();
        for (ObjectIterator it(containerdeliveries2_398_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerdeliveries2_398_instances.has_selection()) goto event_2797_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (138))) goto event_2797_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2797_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_2797_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containerdeliveries2_398_instances));
            if (obj2 == NULL) goto compare_2797_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2797_6_end;
        }
        compare_2797_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2797_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2797_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2797_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_remove_running = true;
            int times = int(1);
            loop_inv_remove_index = 0;
            while (loop_inv_remove_index < times) {
                loop_inv_remove_6();
                if (!loop_inv_remove_running) break;
                loop_inv_remove_index++;
            }
        }
        {
            loop_deliv_running = true;
            int times = int(1);
            loop_deliv_index = 0;
            while (loop_deliv_index < times) {
                loop_deliv_6();
                if (!loop_deliv_running) break;
                loop_deliv_index++;
            }
        }
    }
    event_2797_6_end: ;
}
// Function purpose: generated callback event_func_4338 processes event block(s) 2798_6. Actions/conditions:
//        2798_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4338()
{
    // event 2798_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2798_6_end;
        containerdeliveries2_398_instances.clear_selection();
        for (ObjectIterator it(containerdeliveries2_398_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerdeliveries2_398_instances.has_selection()) goto event_2798_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (255))) goto event_2798_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2798_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_2798_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containerdeliveries2_398_instances));
            if (obj2 == NULL) goto compare_2798_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2798_6_end;
        }
        compare_2798_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2798_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2798_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2798_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_remove_running = true;
            int times = int(1);
            loop_inv_remove_index = 0;
            while (loop_inv_remove_index < times) {
                loop_inv_remove_6();
                if (!loop_inv_remove_running) break;
                loop_inv_remove_index++;
            }
        }
        {
            loop_deliv_running = true;
            int times = int(1);
            loop_deliv_index = 0;
            while (loop_deliv_index < times) {
                loop_deliv_6();
                if (!loop_deliv_running) break;
                loop_deliv_index++;
            }
        }
    }
    event_2798_6_end: ;
}
// Function purpose: generated callback event_func_4339 processes event block(s) 2799_6. Actions/conditions:
//        2799_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4339()
{
    // event 2799_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2799_6_end;
        containerdeliveries_397_instances.clear_selection();
        for (ObjectIterator it(containerdeliveries_397_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerdeliveries_397_instances.has_selection()) goto event_2799_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (139))) goto event_2799_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2799_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_2799_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containerdeliveries_397_instances));
            if (obj2 == NULL) goto compare_2799_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2799_6_end;
        }
        compare_2799_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2799_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2799_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (0))) goto event_2799_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_remove_running = true;
            int times = int(1);
            loop_inv_remove_index = 0;
            while (loop_inv_remove_index < times) {
                loop_inv_remove_6();
                if (!loop_inv_remove_running) break;
                loop_inv_remove_index++;
            }
        }
        {
            loop_deliv_running = true;
            int times = int(1);
            loop_deliv_index = 0;
            while (loop_deliv_index < times) {
                loop_deliv_6();
                if (!loop_deliv_running) break;
                loop_deliv_index++;
            }
        }
    }
    event_2799_6_end: ;
}
// Function purpose: generated callback event_func_4340 processes event block(s) 2800_6. Actions/conditions:
//        2800_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 5 more actions.
void Frames::event_func_4340()
{
    // event 2800_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 5 more actions
    {
        if (!(group_code_1)) goto event_2800_6_end;
        containerdeliveries_397_instances.clear_selection();
        for (ObjectIterator it(containerdeliveries_397_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!containerdeliveries_397_instances.has_selection()) goto event_2800_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(47, str_selecteditem_515)) == (256))) goto event_2800_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(13))) goto event_2800_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_instance(playerBase_instances));
            if (obj1 == NULL) goto compare_2800_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_single(containerdeliveries_397_instances));
            if (obj2 == NULL) goto compare_2800_6_0_end;
            x2 = obj2->get_x() + 8;
            y2 = obj2->get_y() + 8;
            if (!(get_distance(x1, y1, x2, y2) <= 24)) goto event_2800_6_end;
        }
        compare_2800_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2800_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2800_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(8, str_sss_239)) == (1))) goto event_2800_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        if (!group_loops_1) {
            group_loops_1 = true;
        }
        {
            loop_inv_remove_running = true;
            int times = int(1);
            loop_inv_remove_index = 0;
            while (loop_inv_remove_index < times) {
                loop_inv_remove_6();
                if (!loop_inv_remove_running) break;
                loop_inv_remove_index++;
            }
        }
        {
            loop_deliv_running = true;
            int times = int(1);
            loop_deliv_index = 0;
            while (loop_deliv_index < times) {
                loop_deliv_6();
                if (!loop_deliv_running) break;
                loop_deliv_index++;
            }
        }
    }
    event_2800_6_end: ;
}
// Function purpose: generated callback event_func_4341 processes event block(s) 2807_6. Actions/conditions:
//        2807_6: checks scene is active; the event-specific game state condition is met; skips if scene is active;
//        this handler gates a game event without a direct value/obje.
void Frames::event_func_4341()
{
    // event 2807_6 : checks scene is active; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a direct value/obje
    {
        if (!(group_code_1)) goto event_2807_6_end;
        if (!(is_mouse_pressed(SDL_BUTTON_LEFT))) goto event_2807_6_end;
        if (group_code_1 && group_code_left_clicked_1) goto event_2807_6_end;
        if (!group_code_left_clicked_1) {
            group_code_left_clicked_1 = true;
        }
    }
    event_2807_6_end: ;
}
// Function purpose: generated callback event_func_4342 processes event block(s) 2808_6. Actions/conditions:
//        2808_6: checks scene is active; the event-specific game state condition is met; skips if scene is active;
//        this handler gates a game event without a direct value/obje.
void Frames::event_func_4342()
{
    // event 2808_6 : checks scene is active; the event-specific game state condition is met; skips if scene is active; this handler gates a game event without a direct value/obje
    {
        if (!(group_code_1)) goto event_2808_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2808_6_end;
        if (group_code_1 && group_code_left_clicked_1) goto event_2808_6_end;
        if (!group_code_left_clicked_1) {
            group_code_left_clicked_1 = true;
        }
    }
    event_2808_6_end: ;
}
// Function purpose: generated callback event_func_4343 processes event block(s) 2809_6. Actions/conditions:
//        2809_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4343()
{
    // event 2809_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2809_6_end;
        tv_404_instances.clear_selection();
        for (ObjectIterator it(tv_404_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!tv_404_instances.has_selection()) goto event_2809_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(tv_404_instances));
            if (obj1 == NULL) goto compare_2809_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2809_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2809_6_end;
        }
        compare_2809_6_0_end: ;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_2809_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2809_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2809_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2809_6_end;
        for (ObjectIterator it(tv_404_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 300);
            ((Active*)*it)->force_animation(1);
        }
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(tv_404_instances, it.current_index))->x + 8, ((Active*)get_single(tv_404_instances, it.current_index))->y + 8));
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        media.play_id(SOUND_STEP_1, 1-1);
    }
    event_2809_6_end: ;
}
// Function purpose: generated callback event_func_4344 processes event block(s) 2810_6. Actions/conditions:
//        2810_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 9 more actions.
void Frames::event_func_4344()
{
    // event 2810_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 9 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2810_6_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto event_2810_6_end;
        if (!((((Active*)get_single(ladders_336_instances, default_active_instance))->layer->index+1) == (5))) goto event_2810_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ladders_336_instances));
            if (obj1 == NULL) goto compare_2810_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2810_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2810_6_end;
        }
        compare_2810_6_0_end: ;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(14))) goto event_2810_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (5))) goto event_2810_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2810_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2810_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) <= (0))) goto event_2810_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) <= (0))) goto event_2810_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) <= (0))) goto event_2810_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_2810_6_end;
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(5-1);
        ((Active*)get_instance(upperlevelcheck_206_instances))->force_animation(0);
        {
            FrameObject * parent = ((Active*)get_single(ladders_336_instances));
            if (parent == NULL) goto pos_end_2810_6_1;
            ((Active*)get_instance(upperlevelcheck_206_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2810_6_1: ;
        }
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_layer(4-1);
        {
            loop_laddergodowncheck_running = true;
            int times = int(1);
            loop_laddergodowncheck_index = 0;
            while (loop_laddergodowncheck_index < times) {
                loop_laddergodowncheck_6();
                if (!loop_laddergodowncheck_running) break;
                loop_laddergodowncheck_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
    }
    event_2810_6_end: ;
}
// Function purpose: generated callback event_func_4345 processes event block(s) 2814_6. Actions/conditions:
//        2814_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 13 more actions.
void Frames::event_func_4345()
{
    // event 2814_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 13 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2814_6_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto event_2814_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(12))) goto event_2814_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (4))) goto event_2814_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ladders_336_instances));
            if (obj1 == NULL) goto compare_2814_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2814_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2814_6_end;
        }
        compare_2814_6_0_end: ;
        if (!((((Active*)get_single(ladders_336_instances, default_active_instance))->layer->index+1) == (4))) goto event_2814_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2814_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2814_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) <= (0))) goto event_2814_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) <= (0))) goto event_2814_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) <= (0))) goto event_2814_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_2814_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            FrameObject * parent = ((Active*)get_single(ladders_336_instances));
            if (parent == NULL) goto pos_end_2814_6_1;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2814_6_1: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(5-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(ladders_336_instances, it.current_index));
            if (parent == NULL) goto pos_end_2814_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 8);
            pos_end_2814_6_2: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(5-1);
        }
        ventDarkness_instances.clear_selection();
        for (ObjectIterator it(ventDarkness_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(4-1);
        ((LayerObject*)get_instance(layerobject_37_instances))->show_layer(5-1);
        media.play_id(SOUND_DOOR_0, 1-1);
    }
    event_2814_6_end: ;
}
// Function purpose: generated callback event_func_4346 processes event block(s) 2815_6. Actions/conditions:
//        2815_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 12 more actions.
void Frames::event_func_4346()
{
    // event 2815_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 12 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2815_6_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto event_2815_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(14))) goto event_2815_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (4))) goto event_2815_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ladders_336_instances));
            if (obj1 == NULL) goto compare_2815_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2815_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2815_6_end;
        }
        compare_2815_6_0_end: ;
        if (!((((Active*)get_single(ladders_336_instances, default_active_instance))->layer->index+1) == (4))) goto event_2815_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2815_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2815_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) <= (0))) goto event_2815_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) <= (0))) goto event_2815_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) <= (0))) goto event_2815_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_2815_6_end;
        {
            FrameObject * parent = ((Active*)get_single(ladders_336_instances));
            if (parent == NULL) goto pos_end_2815_6_1;
            ((Active*)get_instance(playerBase_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 24);
            pos_end_2815_6_1: ;
        }
        ((Active*)get_instance(playerBase_instances))->set_layer(2-1);
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(ladders_336_instances, it.current_index));
            if (parent == NULL) goto pos_end_2815_6_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + 24);
            pos_end_2815_6_2: ;
        }
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            ((Active*)*it)->set_layer(2-1);
        }
        ((LayerObject*)get_instance(layerobject_37_instances))->hide_layer(4-1);
        ventDarkness_instances.clear_selection();
        for (ObjectIterator it(ventDarkness_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        media.play_id(SOUND_DOOR_0, 1-1);
    }
    event_2815_6_end: ;
}
// Function purpose: generated callback event_func_4347 processes event block(s) 2816_6. Actions/conditions:
//        2816_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_4347()
{
    // event 2816_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2816_6_end;
        ladders_336_instances.clear_selection();
        for (ObjectIterator it(ladders_336_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!ladders_336_instances.has_selection()) goto event_2816_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(12))) goto event_2816_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2816_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(ladders_336_instances));
            if (obj1 == NULL) goto compare_2816_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2816_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2816_6_end;
        }
        compare_2816_6_0_end: ;
        if (!((((Active*)get_single(ladders_336_instances, default_active_instance))->layer->index+1) == (2))) goto event_2816_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2816_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2816_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_2816_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (0))) goto event_2816_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (0))) goto event_2816_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_2816_6_end;
        ((Active*)get_instance(upperlevelcheck_206_instances))->force_animation(0);
        {
            FrameObject * parent = ((Active*)get_single(ladders_336_instances));
            if (parent == NULL) goto pos_end_2816_6_1;
            ((Active*)get_instance(upperlevelcheck_206_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2816_6_1: ;
        }
        ((Active*)get_instance(upperlevelcheck_206_instances))->set_layer(4-1);
        {
            loop_laddergoupcheck_running = true;
            int times = int(1);
            loop_laddergoupcheck_index = 0;
            while (loop_laddergoupcheck_index < times) {
                loop_laddergoupcheck_6();
                if (!loop_laddergoupcheck_running) break;
                loop_laddergoupcheck_index++;
            }
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
    }
    event_2816_6_end: ;
}
// Function purpose: generated callback event_func_4348 processes event block(s) 2820_6. Actions/conditions:
//        2820_6: checks scene is active; skips if the event-specific game state condition is met; skips if dialog is
//        open; this handler gates a game event without a direct va.
void Frames::event_func_4348()
{
    // event 2820_6 : checks scene is active; skips if the event-specific game state condition is met; skips if dialog is open; this handler gates a game event without a direct va
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2820_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_2820_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2820_6_end;
        spread_value(dighole_207_instances, 0, 1);
    }
    event_2820_6_end: ;
}
// Function purpose: generated callback event_func_4349 processes event block(s) 2821_6. Actions/conditions:
//        2821_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4349()
{
    // event 2821_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2821_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_2821_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(14))) goto event_2821_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dighole_207_instances));
            if (obj1 == NULL) goto compare_2821_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2821_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2821_6_end;
        }
        compare_2821_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2821_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_2821_6_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_6)) goto event_2821_6_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_7)) goto event_2821_6_end;
        if (!check_not_overlap(dighole_207_instances, qualifier_19)) goto event_2821_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2821_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_2821_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (0))) goto event_2821_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(154, str_cutting_727)) == (0))) goto event_2821_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_2821_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2821_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(353, str_holex_1147, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x()-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(354, str_holey_1148, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y()-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_enter_hole_running = true;
            int times = int(1);
            loop_enter_hole_index = 0;
            while (loop_enter_hole_index < times) {
                loop_enter_hole_6();
                if (!loop_enter_hole_running) break;
                loop_enter_hole_index++;
            }
        }
    }
    event_2821_6_end: ;
}
// Function purpose: generated callback event_func_4350 processes event block(s) 2826_6. Actions/conditions:
//        2826_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 7 more actions.
void Frames::event_func_4350()
{
    // event 2826_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 7 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2826_6_end;
        dighole_207_instances.clear_selection();
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_2826_6_end;
        if (!(((Active*)get_instance(mouse_9_instances))->test_animation(12))) goto event_2826_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(dighole_207_instances));
            if (obj1 == NULL) goto compare_2826_6_0_end;
            x1 = obj1->get_x() + 0;
            y1 = obj1->get_y() + 0;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2826_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2826_6_end;
        }
        compare_2826_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (1))) goto event_2826_6_end;
        qualifier_2.clear_selection();
        for (QualifierIterator it(qualifier_2); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(250))) { it.deselect(); continue; }
        }
        if (!qualifier_2.has_selection()) goto event_2826_6_end;
        for (ObjectIterator it(dighole_207_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(2147483648)) { it.deselect(); continue; }
        }
        if (!dighole_207_instances.has_selection()) goto event_2826_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2826_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2826_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(153, str_digging_726)) == (0))) goto event_2826_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(155, str_chipping_728)) == (0))) goto event_2826_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(353, str_holex_1147, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_x()-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(354, str_holey_1148, ((Active*)get_single(dighole_207_instances, default_active_instance))->get_y()-8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_exit_hole_running = true;
            int times = int(1);
            loop_exit_hole_index = 0;
            while (loop_exit_hole_index < times) {
                loop_exit_hole_6();
                if (!loop_exit_hole_running) break;
                loop_exit_hole_index++;
            }
        }
    }
    event_2826_6_end: ;
}
// Function purpose: generated callback event_func_4351 processes event block(s) 2831_6. Actions/conditions:
//        2831_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 8 more actions.
void Frames::event_func_4351()
{
    // event 2831_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 8 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2831_6_end;
        jobboard_244_instances.clear_selection();
        for (ObjectIterator it(jobboard_244_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!jobboard_244_instances.has_selection()) goto event_2831_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(jobboard_244_instances));
            if (obj1 == NULL) goto compare_2831_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2831_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 20)) goto event_2831_6_end;
        }
        compare_2831_6_0_end: ;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2831_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2831_6_end;
        ((Active*)get_instance(dialogPanel_instances))->force_animation(20);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_create_joblist_running = true;
            int times = int(1);
            loop_create_joblist_index = 0;
            while (loop_create_joblist_index < times) {
                loop_create_joblist_6();
                if (!loop_create_joblist_running) break;
                loop_create_joblist_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2831_6_end: ;
}
// Function purpose: generated callback event_func_4352 processes event block(s) 2887_6. Actions/conditions:
//        2887_6: removes the selected object; sets JobName to ((Active*)get_single(dialogButton_instances,
//        default_active_instance))->alterables->strings.get(0).
void Frames::event_func_4352()
{
    // event 2887_6 : removes the selected object; sets JobName to ((Active*)get_single(dialogButton_instances, default_active_instance))->alterables->strings.get(0)
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2887_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) != (empty_string))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->strings.get(0)) != (str_quit_2231))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2887_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(20))) goto event_2887_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2887_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2887_6_end;
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_string(99, str_jobname_623, ((Active*)get_single(dialogButton_instances, default_active_instance))->alterables->strings.get(0));
    }
    event_2887_6_end: ;
}
// Function purpose: generated callback event_func_4353 processes event block(s) 2888_6. Actions/conditions:
//        2888_6: adds a dialogue2 179 instance; updates a value on the target object; sets the object position in the
//        world; plus 5 more actions.
void Frames::event_func_4353()
{
    // event 2888_6 : adds a dialogue2 179 instance; updates a value on the target object; sets the object position in the world; plus 5 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2888_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(12))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2888_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(20))) goto event_2888_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(1))) goto event_2888_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2888_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2888_6_end;
        dialogBodyText_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dialogBodyText(0, 0), 5);
            dialogBodyText_instances.add_back();
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->blend_color.set(Color(60, 60, 60));
        }
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            if (parent == NULL) goto pos_end_2888_6_1;
            ((Text*)*it)->set_global_position(parent->get_x() + -110, parent->get_y() + -54);
            pos_end_2888_6_1: ;
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_job_info_running = true;
            int times = int(1);
            loop_job_info_index = 0;
            while (loop_job_info_index < times) {
                loop_job_info_6();
                if (!loop_job_info_running) break;
                loop_job_info_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2888_6_end: ;
}
// Function purpose: generated callback event_func_4354 processes event block(s) 2909_6. Actions/conditions:
//        2909_6: removes the selected object; sets LClick to 1; sets the selected object's direction to 0; plus 1
//        more actions.
void Frames::event_func_4354()
{
    // event 2909_6 : removes the selected object; sets LClick to 1; sets the selected object's direction to 0; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2909_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(43))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2909_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(20))) goto event_2909_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65792))) goto event_2909_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2909_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2909_6_end;
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(0);
        {
            loop_des_buttons_running = true;
            int times = int(1);
            loop_des_buttons_index = 0;
            while (loop_des_buttons_index < times) {
                loop_des_buttons_6();
                if (!loop_des_buttons_running) break;
                loop_des_buttons_index++;
            }
        }
        {
            loop_create_joblist_running = true;
            int times = int(1);
            loop_create_joblist_index = 0;
            while (loop_create_joblist_index < times) {
                loop_create_joblist_6();
                if (!loop_create_joblist_running) break;
                loop_create_joblist_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_2909_6_end: ;
}
// Function purpose: generated callback event_func_4355 processes event block(s) 2911_6. Actions/conditions:
//        2911_6: sets LClick to 1; sets allowed to 1.
void Frames::event_func_4355()
{
    // event 2911_6 : sets LClick to 1; sets allowed to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2911_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(39))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2911_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(20))) goto event_2911_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2911_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2911_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(460, str_allowed_1329, 1);
        {
            loop_job_quit_check_running = true;
            int times = int(1);
            loop_job_quit_check_index = 0;
            while (loop_job_quit_check_index < times) {
                loop_job_quit_check_6();
                if (!loop_job_quit_check_running) break;
                loop_job_quit_check_index++;
            }
        }
    }
    event_2911_6_end: ;
}
// Function purpose: generated callback event_func_4356 processes event block(s) 2915_6. Actions/conditions:
//        2915_6: sets LClick to 1; sets the selected object's direction to 8; sets rnd to randrange_event(2); plus 1
//        more actions.
void Frames::event_func_4356()
{
    // event 2915_6 : sets LClick to 1; sets the selected object's direction to 8; sets rnd to randrange_event(2); plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2915_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(44))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2915_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(20))) goto event_2915_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_directions(65536))) goto event_2915_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2915_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2915_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_direction(8);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(132, str_rnd_696, randrange_event(2));
        {
            loop_job_apply_running = true;
            int times = int(1);
            loop_job_apply_index = 0;
            while (loop_job_apply_index < times) {
                loop_job_apply_6();
                if (!loop_job_apply_running) break;
                loop_job_apply_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2915_6_end: ;
}
// Function purpose: generated callback event_func_4357 processes event block(s) 2922_6. Actions/conditions:
//        2922_6: sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus
//        1 more actions.
void Frames::event_func_4357()
{
    // event 2922_6 : sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2922_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2922_6_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_2922_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances, default_assarray_instance))->get_value(57, str_lclick_203)) == (0))) goto event_2922_6_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        {
            loop_des_buttons_running = true;
            int times = int(1);
            loop_des_buttons_index = 0;
            while (loop_des_buttons_index < times) {
                loop_des_buttons_6();
                if (!loop_des_buttons_running) break;
                loop_des_buttons_index++;
            }
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_2922_6_end: ;
}
// Function purpose: generated callback event_func_4358 processes event block(s) 2923_6. Actions/conditions:
//        2923_6: sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus
//        1 more actions.
void Frames::event_func_4358()
{
    // event 2923_6 : sets LClick to 1; sets the selected object's visibility to false; removes the selected object; plus 1 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2923_6_end;
        if (!(is_key_pressed_once(SDLK_ESCAPE))) goto event_2923_6_end;
        dialogPanel_instances.clear_selection();
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!dialogPanel_instances.has_selection()) goto event_2923_6_end;
        gameVariables_instances.clear_selection();
        for (ObjectIterator it(gameVariables_instances); !it.end(); ++it) {
            ((AssociateArray*)*it)->set_value(57, str_lclick_203, 1);
        }
        for (ObjectIterator it(dialogPanel_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        {
            loop_des_buttons_running = true;
            int times = int(1);
            loop_des_buttons_index = 0;
            while (loop_des_buttons_index < times) {
                loop_des_buttons_6();
                if (!loop_des_buttons_running) break;
                loop_des_buttons_index++;
            }
        }
        dchar_214_instances.clear_selection();
        for (ObjectIterator it(dchar_214_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        dialogBodyText_instances.clear_selection();
        for (ObjectIterator it(dialogBodyText_instances); !it.end(); ++it) {
            ((Text*)*it)->destroy();
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_2923_6_end: ;
}
// Function purpose: generated callback event_func_4359 processes event block(s) 2924_6. Actions/conditions:
//        2924_6: sets LClick to 1; sets CurrentToilet to ((Active*)get_single(toilet2_307_instances,
//        default_active_instance))->alterables->values.get(0); sets FlushTimer to
//        ((Active*)get_single(toilet2_307_instances, default_active_instance))->alterables->values.get(1); plus 12
//        more actions.
void Frames::event_func_4359()
{
    // event 2924_6 : sets LClick to 1; sets CurrentToilet to ((Active*)get_single(toilet2_307_instances, default_active_instance))->alterables->values.get(0); sets FlushTimer to ((Active*)get_single(toilet2_307_instances, default_active_instance))->alterables->values.get(1); plus 12 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2924_6_end;
        toilet2_307_instances.clear_selection();
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_2924_6_end;
        cursor_178_instances.clear_selection();
        if (!check_overlap(cursor_178_instances, toilet2_307_instances)) goto event_2924_6_end;
        for (ObjectIterator it(toilet2_307_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!toilet2_307_instances.has_selection()) goto event_2924_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_2924_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2924_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2924_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(134, str_currenttoilet_699, ((Active*)get_single(toilet2_307_instances, default_active_instance))->alterables->values.get(0));
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(917, str_flushtimer_2232, ((Active*)get_single(toilet2_307_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)get_instance(dialogPanel_instances))->force_animation(17);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(true);
        FrameObject * single_instance_2924_6_0; single_instance_2924_6_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(dialogPanel_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dialogButton(parent->x + 0, parent->y + 24), parent->layer);
                if (single_instance_2924_6_0 == NULL)
                    single_instance_2924_6_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2924_6_0))->force_animation(14);
        FrameObject * single_instance_2924_6_1; single_instance_2924_6_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_dchar_214(((Active*)single_instance_2924_6_0)->x + 0, ((Active*)single_instance_2924_6_0)->y + 4), ((Active*)single_instance_2924_6_0)->layer);
            if (single_instance_2924_6_1 == NULL)
                single_instance_2924_6_1 = new_obj;
        }
        ((Text*)((Text*)single_instance_2924_6_1))->set_x(VITA_VIEW_LEFT(((Text*)((Text*)single_instance_2924_6_1)), frame_left())+5);
        ((Text*)((Text*)single_instance_2924_6_1))->blend_color.set(Color(120, 120, 120));
        ((Text*)((Text*)single_instance_2924_6_1))->set_string(uppercase_string(((INI*)get_instance(translationData_instances))->get_string(str_misc_234, str_26_2198)));
        {
            loop_build_loo_slots_running = true;
            int times = int(3);
            loop_build_loo_slots_index = 0;
            while (loop_build_loo_slots_index < times) {
                loop_build_loo_slots_6();
                if (!loop_build_loo_slots_running) break;
                loop_build_loo_slots_index++;
            }
        }
        {
            loop_fill_loo_slots_running = true;
            int times = int(3);
            loop_fill_loo_slots_index = 0;
            while (loop_fill_loo_slots_index < times) {
                loop_fill_loo_slots_6();
                if (!loop_fill_loo_slots_running) break;
                loop_fill_loo_slots_index++;
            }
        }
        media.play_id(SOUND_OPEN_5, 1-1);
    }
    event_2924_6_end: ;
}
// Function purpose: generated callback event_func_4360 processes event block(s) 2928_6. Actions/conditions:
//        2928_6: sets LClick to 1; sets the selected object's visibility to false; plays a sound or music track.
void Frames::event_func_4360()
{
    // event 2928_6 : sets LClick to 1; sets the selected object's visibility to false; plays a sound or music track
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2928_6_end;
        if (!(is_mouse_pressed_once(SDL_BUTTON_LEFT))) goto event_2928_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->mouse_over()) goto event_2928_6_end;
        itemSlot_instances.clear_selection();
        for (ObjectIterator it(itemSlot_instances); !it.end(); ++it) {
            if (((Active*)(*it))->mouse_over()) goto event_2928_6_end;
        }
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2928_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(17))) goto event_2928_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2928_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        ((Active*)get_instance(dialogPanel_instances))->set_visible(false);
        {
            loop_des_toilet_items_running = true;
            int times = int(1);
            loop_des_toilet_items_index = 0;
            while (loop_des_toilet_items_index < times) {
                loop_des_toilet_items_6();
                if (!loop_des_toilet_items_running) break;
                loop_des_toilet_items_index++;
            }
        }
        media.play_id(SOUND_CLOSE_6, 1-1);
    }
    event_2928_6_end: ;
}
// Function purpose: generated callback event_func_4361 processes event block(s) 2932_6. Actions/conditions:
//        2932_6: sets LClick to 1.
void Frames::event_func_4361()
{
    // event 2932_6 : sets LClick to 1
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2932_6_end;
        dialogButton_instances.clear_selection();
        for (ObjectIterator it(dialogButton_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(14))) { it.deselect(); continue; }
        }
        if (!dialogButton_instances.has_selection()) goto event_2932_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE)) goto event_2932_6_end;
        if (!(((Active*)get_instance(dialogPanel_instances))->test_animation(17))) goto event_2932_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2932_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        {
            loop_flush_bog_check_running = true;
            int times = int(1);
            loop_flush_bog_check_index = 0;
            while (loop_flush_bog_check_index < times) {
                loop_flush_bog_check_6();
                if (!loop_flush_bog_check_running) break;
                loop_flush_bog_check_index++;
            }
        }
    }
    event_2932_6_end: ;
}
// Function purpose: generated callback event_func_4362 processes event block(s) 2943_6. Actions/conditions:
//        2943_6: sets OnMount to 0; moves the selected object behind other objects.
void Frames::event_func_4362()
{
    // event 2943_6 : sets OnMount to 0; moves the selected object behind other objects
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2943_6_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_2943_6_end;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2943_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(129, str_onmount_691, 0);
        {
            qualifier_2.clear_selection();
            QualifierIterator other_it(qualifier_2);
            for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
                if (other_it.end()) goto action_2943_6_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_2943_6_0_end: ;
        {
            loop_mount_check_running = true;
            int times = int(1);
            loop_mount_check_index = 0;
            while (loop_mount_check_index < times) {
                loop_mount_check_6();
                if (!loop_mount_check_running) break;
                loop_mount_check_index++;
            }
        }
    }
    event_2943_6_end: ;
}
// Function purpose: generated callback event_func_4363 processes event block(s) 2950_6. Actions/conditions:
//        2950_6: reads an object position for this event; reads an object position for this event; reads an object
//        position for this event; plus 6 more actions.
void Frames::event_func_4363()
{
    // event 2950_6 : reads an object position for this event; reads an object position for this event; reads an object position for this event; plus 6 more actions
    {
        if (!(group_code_1 && group_code_left_clicked_1)) goto event_2950_6_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_2950_6_end;
        if (!check_not_overlap(qualifier_1, qualifier_19)) goto event_2950_6_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_2950_6_end;
        {
            FrameObject * obj1;
            FrameObject * obj2;
            int x1, y1, x2, y2;
            obj1 = ((Active*)get_single(qualifier_1));
            if (obj1 == NULL) goto compare_2950_6_0_end;
            x1 = obj1->get_x() + 8;
            y1 = obj1->get_y() + 8;
            obj2 = ((Active*)get_instance(playerBase_instances));
            if (obj2 == NULL) goto compare_2950_6_0_end;
            x2 = obj2->get_x() + 0;
            y2 = obj2->get_y() + 0;
            if (!(get_distance(x1, y1, x2, y2) <= 18)) goto event_2950_6_end;
        }
        compare_2950_6_0_end: ;
        if (!((((Active*)get_instance(playerBase_instances))->layer->index+1) == (2))) goto event_2950_6_end;
        if (((Active*)get_instance(mouse_9_instances))->test_animation(13)) goto event_2950_6_end;
        if (((Active*)get_instance(dialogPanel_instances))->flags & VISIBLE) goto event_2950_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(57, str_lclick_203)) == (0))) goto event_2950_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(151, str_carrying_724)) == (0))) goto event_2950_6_end;
        if (!((((AssociateArray*)get_instance(gameVariables_instances))->get_value(129, str_onmount_691)) == (0))) goto event_2950_6_end;
        ((AssociateArray*)get_instance(gameVariables_instances))->set_value(57, str_lclick_203, 1);
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
        }
        {
            loop_perch_running = true;
            int times = int(1);
            loop_perch_index = 0;
            while (loop_perch_index < times) {
                loop_perch_6();
                if (!loop_perch_running) break;
                loop_perch_index++;
            }
        }
    }
    event_2950_6_end: ;
}
